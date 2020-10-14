#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#


set -e
source ../../lib.sh
DISTVER="yank"
DISTSUFFIX="git"
TASK=fetch

DISTFILES="https://github.com/mptre/$DISTVER.$DISTSUFFIX"
GITTAG=v1.2.0

#CONFIGURE_CMD=""
MYMAKEFLAGS="   CC=$PBTARGETARCH-gcc 
		CPPFLAGS=\"-I. -Iinclude\"
		"

MAKEPREFIX=$PREFIX

package_init "$@"
# No configure, just make

if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  rm -rf fakeroot
  git clone $DISTFILES --depth 1
  cd $DISTVER
  git fetch --tags
  git checkout $GITTAG

  # "dirty patching via git"
  git config --global user.email "patcher@berrymuch.org"
  git config --global user.name "Git Patcher"
  ls $EXECDIR/patches | xargs -n 1 -I__ git am $EXECDIR/patches/__

  TASK=build
fi

#package_patch
package_build

DESTDIR="$ROOTDIR"
package_install

package_bundle

