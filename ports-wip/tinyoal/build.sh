#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#
# Olivier Kaloudoff <kaloudov@yandex.com>, 2020
#


set -e
source ../../lib.sh
DISTVER="tinyoal"
DISTSUFFIX="git"
TASK=fetch

DISTFILES="https://github.com/berryamin/$DISTVER.$DISTSUFFIX"

#CONFIGURE_CMD=""
MYMAKEFLAGS="   CC=$PBTARGETARCH-gcc 
		CPPFLAGS=\"-I. -Iinclude\"
		"

package_init "$@"
# No configure, just make

if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  rm -rf fakeroot
  git clone $DISTFILES --depth 1
  cd tinyoal

  git clone https://github.com/berryamin/bss-util.git 
  cd bss-util
  git checkout v0.5.2
  cd ..
  mv bss-util/include/bss-util include

  TASK=patch
fi

package_patch 1
package_build
package_install
package_bundle

