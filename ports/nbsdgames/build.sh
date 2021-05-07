#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#


set -e
set -x
source ../../lib.sh
DISTVER="nbsdgames"
DISTSUFFIX="git"
TASK=fetch

DISTFILES="https://github.com/abakh/$DISTVER.$DISTSUFFIX"
GITTAG=v4.0

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

  TASK=patch
fi

package_patch 1

cd $WORKDIR
sed -i "s#/usr/games#$PREFIX/lib/nbsdgames#" config.h
package_build


if [ "$TASK" == "install" ]
then
  cd "$WORKDIR"
  mkdir -p $DESTDIR/$PREFIX/bin
  mkdir -p $DESTDIR/$PREFIX/lib/nbsdgames
  /usr/bin/make GAMES_DIR=$DESTDIR/$PREFIX/bin SCORES_DIR=$DESTDIR/$PREFIX/lib/nbsdgames install
  TASK=bundle
fi

package_bundle

