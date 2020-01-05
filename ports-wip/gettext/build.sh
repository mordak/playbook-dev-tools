#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#
# Olivier Kaloudov <kaloudov@yandex.com>, 2020
#


set -e
source ../../lib.sh
DISTVER="gettext-0.20.1"
DISTSUFFIX="tar.gz"
TASK=fetch


DISTFILES="https://ftp.gnu.org/pub/gnu/gettext/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"
package_init "$@"
CONFIGURE_CMD="./configure 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$PREFIX 
                CC=$PBTARGETARCH-gcc
		CFLAGS=-O3
		LDFLAGS=-lc
                "

package_fetch
package_patch 1
#2

if [ "$TASK" == "build" ]
then
  echo "Building"
  cd "$WORKDIR"
  # clean up if we have a previous build
  #if [ -e "Makefile" ]; then
  #  make clean || true
  #  make distclean || true
  #fi
  # configure
  eval $CONFIGURE_CMD

#  for apatch in $EXECDIR/post-conf-patches/*
#   do
#        patch -p2 < $apatch
#   done

  eval $MAKE_PREFIX make $MYMAKEFLAGS || \
        eval $MAKE_PREFIX make
  TASK=install
fi

package_install
package_bundle

