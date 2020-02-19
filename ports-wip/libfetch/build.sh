
# This code Copyright 2020 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh
DISTVER="libfetch-bmuch-0.4"
DISTSUFFIX="tar.gz"
TASK=fetch

DISTFILES="https://github.com/BerryFarm/libfetch/releases/download/bmuch-0.4/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"

package_init "$@"

package_fetch
package_patch

if [ "$TASK" == "build" ]
then
  cd "$WORKDIR"

  # we are building without OpenSSL because libfetch requires version 1.1
  # TODO: patch it up like in https://github.com/php/php-src/pull/2521
  #OPENSSL_DIR="openssl-1.0.2t"
  #CFLAGS="-I$ARCHIVEDIR/$OPENSSL_DIR/$PREFIX/include"
  #LDFLAGS="-L$ARCHIVEDIR/$OPENSSL_DIR/$PREFIX/lib"

  eval "CC=$PBTARGETARCH-gcc" make

  TASK=install
fi

if [ "$TASK" == "install" ]
then
  cd "$WORKDIR"
  make DESTDIR="$DESTDIR" PREFIX="$PREFIX" install
  TASK=bundle
fi

package_bundle

