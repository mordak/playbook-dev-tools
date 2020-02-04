
# This code Copyright 2020 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh

DISTVER="libnbcompat-20180822"
DISTSUFFIX="tar.gz"
DISTFILE="libnbcompat_20180822.orig.$DISTSUFFIX"
DISTFILES="http://deb.debian.org/debian/pool/main/libn/libnbcompat/$DISTFILE"

UNPACKCOMD="tar -zxf"

TASK=fetch
package_init "$@"

CONFIGURE_CMD=" ./configure
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX
                --enable-db
                CC=$PBTARGETARCH-gcc
                "

if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  echo "Fetching sources"
  if [ ! -f $DISTVER.$DISTSUFFIX ]; then
    curl -fkSLO $DISTFILES
  fi

  # Unpack and organize
  echo "Unpacking"
  $UNPACKCOMD $DISTFILE $UNPACKSUFFIX
  TASK=patch
fi

package_patch

if [ "$TASK" == "build" ]
then
  cd "$WORKROOT/$DISTVER"
  eval $CONFIGURE_CMD

  bmake
  TASK=install
fi

if [ "$TASK" == "install" ]
then
  cd "$WORKDIR"
  bmake DESTDIR="$DESTDIR" install
  TASK=bundle
fi

package_install
package_bundle

