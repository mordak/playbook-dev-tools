#!/usr/bin/env bash

set -x

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh

DISTVER="v3.2"
DISTSUFFIX="tar.gz"
TASK=fetch

#https://github.com/jarun/nnn/archive/v3.2.tar.gz
DISTFILES="https://github.com/jarun/nnn/archive/$DISTVER.$DISTSUFFIX"

UNPACKCOMD="tar -xzf"
TASK=fetch
package_init "$@"
CONFIGURE_CMD="make
                CC=$PBTARGETARCH-gcc
		CFLAGS=\"-O2  -std=gnu99 -pipe -I$ARCHIVEDIR/readline-8.0/$PREFIX/include \"
		LDFLAGS=\"-lreadline\"
		CXXFLAGS=\"-O2 -pipe -fno-exceptions -fno-rtti\"
                "

package_fetch
package_patch 1

if [ "$TASK" == "build" ]
then
  echo "Building"
  cd "$WORKROOT/nnn-3.2"
  # clean up if we have a previous build
  #if [ -e "Makefile" ]; then
  #  make clean || true
  #  make distclean || true
  #fi
  # configure
  eval $CONFIGURE_CMD

  eval $MAKE_PREFIX make $MYMAKEFLAGS || \
        eval $MAKE_PREFIX make
  TASK=install
fi

package_install
package_bundle

