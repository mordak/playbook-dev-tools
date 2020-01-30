
# This code Copyright 2020 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh

DISTVER="libnbcompat-debian-20180822-5"
DISTSUFFIX="tar.gz"
TASK=fetch

DISTFILES="https://codeload.github.com/jgoerzen/libnbcompat/tar.gz/debian/20180822-5"
UNPACKCOMD="tar -zxf"

CONFIGURE_CMD=" ./configure
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX
                CC=$PBTARGETARCH-gcc
                "

package_init "$@"

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
  cd "$WORKDIR"
  bmake DESTDIR="$DESTDIR/$PREFIX" install
  TASK=bundle
fi

package_install
package_bundle

