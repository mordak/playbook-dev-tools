#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
DISTVER="curl-7.67.0"
DISTSUFFIX="tar.bz2"
TASK=fetch

DISTFILES="https://curl.haxx.se/download/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"
package_init "$@"

OPENSSL_DIR="openssl-1.0.2t"

CONFIGURE_CMD="./configure
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX
                --disable-nls
                --with-ssl=\"$ARCHIVEDIR/$OPENSSL_DIR/$PREFIX\"
                CC=$PBTARGETARCH-gcc
                LIBS=-lsocket
                "
package_fetch
package_patch
package_build

if [ "$TASK" == "install" ]
then
  cd "$WORKDIR"
  make DESTDIR="$DESTDIR" install

  # Override the BB Native SDK-provided SSL libs
  cd "$DESTDIR/$PREFIX/lib"
  ln -s libcurl.so.10 libcurl.so.2

  TASK=bundle
fi

package_bundle


