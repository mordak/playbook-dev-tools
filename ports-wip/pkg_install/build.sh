
# This code Copyright 2020 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh

DISTVER="pkg_install-master"
DISTSUFFIX="zip"

DISTFILES="https://codeload.github.com/dressupgeekout/pkg_install/zip/master"
UNPACKCOMD="unzip"

LIBFETCH_DIR="libfetch-xbps-2.0"
LIBNBCOMPAT_DIR="libnbcompat-20180822"

TASK=fetch
package_init "$@"

CONFIGURE_CMD=" ./configure
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX
                --enable-db
                CFLAGS=\"-I$ARCHIVEDIR/$LIBFETCH_DIR/$PREFIX/include\
                  -I$ARCHIVEDIR/$LIBNBCOMPAT_DIR/$PREFIX/include\"
                LDFLAGS=\"-L$ARCHIVEDIR/$LIBFETCH_DIR/$PREFIX/lib\
                  -L$ARCHIVEDIR/$LIBNBCOMPAT_DIR/$PREFIX/lib\"
                CC=$PBTARGETARCH-gcc
                "


if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"

  echo "Fetching sources"
  if [ ! -f $DISTVER.$DISTSUFFIX ]; then
    curl $DISTFILES -o $DISTVER.$DISTSUFFIX
  fi

  # Unpack and organize
  echo "Unpacking"
  $UNPACKCOMD $DISTVER.$DISTSUFFIX $UNPACKSUFFIX
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
  cd "$WORKROOT/$DISTVER"

  bmake DESTDIR="$DESTDIR/$PREFIX" install
  TASK=bundle
fi

package_install
package_bundle

