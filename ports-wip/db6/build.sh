#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#


set -e
source ../../lib.sh
DISTVER="db-6.2.32"
DISTSUFFIX="tar.gz"

TASK=fetch

DISTFILES="http://download.oracle.com/berkeley-db/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"
package_init "$@"

CONFIGURE_CMD="cd build_unix; ../dist/configure 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$PREFIX 
                CC=$PBTARGETARCH-gcc 
                "


package_fetch
package_patch

# Skip build stage, as make install always force build as well
if [ "$TASK" == "build" ]
then
  TASK=install
fi

if [ "$TASK" == "install" ]
then
  cd "$WORKDIR/build_unix"
  CC=$PBTARGETARCH-gcc ../dist/configure
  CC=$PBTARGETARCH-gcc make DESTDIR="$DESTDIR" install
  TASK=bundle
fi

# docs too big
rm -rf $ARCHIVEDIR/$DISTVER/$PREFIX/docs

package_bundle


