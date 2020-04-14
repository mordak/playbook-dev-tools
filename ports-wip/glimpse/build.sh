#!/usr/bin/env bash

set -x

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh
#DISTVER="glimpse_4.18.7.orig"
DISTVER="glimpse-4.18.7"
DISTSUFFIX="tar.gz"
TASK=fetch

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
		"

MYMAKEFLAGS="DESTDIR=$ARCHIVEDIR"
  
if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  echo "Fetching sources"
  if [ ! -f $DISTVER.$DISTSUFFIX ]; then
    curl -fkSLO $DISTFILES
  fi

  #mv glimpse_4.18.7.orig.$DISTSUFFIX $DISTVER.$DISTSUFFIX

  # Unpack and organize
  echo "Unpacking"
  $UNPACKCOMD $DISTVER.$DISTSUFFIX $UNPACKSUFFIX
  TASK=patch
fi

package_patch
package_build
package_install
package_bundle

