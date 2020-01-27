
# This code Copyright 2020 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh
DISTVER="libfetch-xbps-2.0"
DISTSUFFIX="tar.gz"
TASK=fetch

DISTFILES="https://github.com/BerryFarm/libfetch/releases/download/xbps-2.0/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"

package_init "$@"

package_fetch
package_patch

if [ "$TASK" == "build" ]
then
  cp $EXECDIR/Makefile $WORKDIR/Makefile
  cd "$WORKDIR"

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

