#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#
# Olivier Kaloudoff <olivier.kaloudoff@gmail.com>, 2020
#


set -e
source ../../lib.sh
DISTVER="mutt-1.13.3"
DISTSUFFIX="tar.gz"
TASK=fetch

DISTFILES="ftp://ftp.mutt.org/pub/mutt/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"
TASK=fetch
package_init "$@"
CONFIGURE_CMD="./configure 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$PREFIX 
                CC=$PBTARGETARCH-gcc
                "

package_fetch
package_patch

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

  echo "all:" 	 	 > doc/Makefile
  echo "install:" 	>> doc/Makefile

  eval $MAKE_PREFIX make $MYMAKEFLAGS || \
  eval $MAKE_PREFIX make
  TASK=install
fi

package_install
package_bundle

