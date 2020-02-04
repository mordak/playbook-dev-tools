
# This code Copyright 2020 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh

DISTVER="netpgpverify-20191003"
DISTSUFFIX="tar.xz"

DISTFILES="https://github.com/BerryFarm/netpgpverify/releases/download/20191003/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"

TASK=fetch
package_init "$@"

CONFIGURE_CMD=" ./configure
                --prefix=$PREFIX
                "
package_fetch
package_patch

if [ "$TASK" == "build" ]
then
  cd "$WORKROOT/$DISTVER"

  eval $CONFIGURE_CMD
  eval "CC=$PBTARGETARCH-gcc bmake"

  TASK=install
fi

if [ "$TASK" == "install" ]
then
  cd "$WORKROOT/$DISTVER"

  bmake DESTDIR=$DESTDIR  install
  TASK=bundle
fi

package_install
package_bundle

