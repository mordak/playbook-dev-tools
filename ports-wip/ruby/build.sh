#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.



set -e
source ../../lib.sh

DISTVER="ruby-2.5.1"
DISTVER="ruby-2.7.1"
DISTSUFFIX="tar.gz"
DEPENDS="libevent"
LIB_EVENT2_DIR="libevent-2.0.22-stable"
BUILD_DEP_BINS=()
#check_required_binaries

DISTFILES="https://cache.ruby-lang.org/pub/ruby/2.7/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"
PATCHLEVEL=1
TASK=fetch
package_init "$@"
CONFIGURE_CMD="autoconf; ./configure 
		--enable-threads=posix
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$PREFIX 
                CC=$PBTARGETARCH-gcc
		CFLAGS=\"-fPIC -I$ARCHIVEDIR/$LIB_EVENT2_DIR/$PREFIX/include\"
		LDFLAGS=\"-L$ARCHIVEDIR/$LIB_EVENT2_DIR/$PREFIX/lib -lsocket -levent\"
                "

package_fetch
#package_patch $PATCHLEVEL

TASK=build
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
  autoconf
  eval $CONFIGURE_CMD
  eval $MAKE_PREFIX make $MYMAKEFLAGS || \
        eval $MAKE_PREFIX make
  TASK=install
fi

package_install
package_bundle

