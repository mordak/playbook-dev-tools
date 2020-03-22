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
MYMAKEFLAGS="CC=$PBTARGETARCH-gcc"

package_init "$@"
# No configure, just make

if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  rm -rf fakeroot
  git clone $DISTFILES
  cd tinyoal

  git clone https://github.com/berryamin/bss-util.git
  mv bss-util bss-util.git
  cd bss-util.git
  git checkout v0.5.0
  cd ..

  mv bss-util.git/include/bss-util .
  #git checkout bb10
  TASK=build
fi

#package_patch
package_build
package_install
package_bundle

