#!/usr/bin/env bash

# This code Copyright 2019 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
DISTVER="lynx2.8.9rel.1"
DISTSUFFIX="tar.bz2"
TASK=fetch

DISTFILES="https://invisible-mirror.net/archives/lynx/tarballs/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"
package_init "$@"

OPENSSL_DIR="openssl-1.0.2u"

CONFIGURE_CMD="./configure
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX
                --disable-nls
                --with-ssl=\"$ARCHIVEDIR/$OPENSSL_DIR/$PREFIX\"
                --program-transform-name=""
                CC=$PBTARGETARCH-gcc
                "
package_fetch
package_patch
package_build

if [ "$TASK" == "install" ]
then
  cd "$WORKDIR"
  make DESTDIR="$DESTDIR" install

  CONFIG="$DESTDIR/$PREFIX/etc/lynx.cfg"

  echo "GZIP_PATH:$PREFIX/bin/gzip" >> $CONFIG
  echo "DEFAULT_EDITOR:vim"         >> $CONFIG

  TASK=bundle
fi

package_bundle

