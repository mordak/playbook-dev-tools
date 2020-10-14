#!/usr/bin/env bash

set -x

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh
DISTVER="glimpse-4.18.7"
DISTSUFFIX="tar.gz"
TASK=fetch

# we must have build libfl (flex) first - see CFLAGS and LEXLIB below
LIBFL_DIR="flex-2.6.4"

DISTFILES="http://deb.debian.org/debian/pool/main/g/glimpse/glimpse_4.18.7.orig.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"

package_init "$@"

CONFIGURE_CMD="./configure 
               --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX
		--enable-cross-compile
		--disable-debug
		--enable-optimizations
		--enable-asm
		--disable-static
		--enable-shared
		--with-arch=armv7-a
		--with-float=softfp
		--with-fpu=vfpv3-d16
		--with-mode=thumb
                CC=$PBTARGETARCH-gcc
                LEXLIB=\"-L$ARCHIVEDIR/$LIBFL_DIR/$PREFIX/lib\ -lfl\"
                CFLAGS=\"-I$PWD -I$ARCHIVEDIR/$LIBFL_DIR/$PREFIX/include\"
		"

MYMAKEFLAGS="DESTDIR=$ARCHIVEDIR"
  
if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  echo "Fetching sources"
  if [ ! -f $DISTVER.$DISTSUFFIX ]; then
    curl -fkSLO $DISTFILES
  fi

  mv glimpse_4.18.7.orig.$DISTSUFFIX $DISTVER.$DISTSUFFIX

  # Unpack and organize
  echo "Unpacking"
  $UNPACKCOMD $DISTVER.$DISTSUFFIX $UNPACKSUFFIX
  TASK=build
fi


if [ "$TASK" == "build" ]
then

  cd "$WORKDIR"

  eval $CONFIGURE_CMD

  echo "Patching .. (post-configure)"
  if [ -e "$EXECDIR/patches" ]; then
    for apatch in $EXECDIR/patches/*
    do
      patch -p0 < $apatch
    done
  fi

  echo "Building"
  cd "$WORKDIR"
  eval $MAKE_PREFIX make $MYMAKEFLAGS || \
  eval $MAKE_PREFIX make
  TASK=install
fi


package_install
package_bundle

