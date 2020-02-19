#!/usr/bin/env bash

# This code Copyright 2020 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#

set -e
source ../../lib.sh

DISTVER="netbsd-curses-0.3.1"
DISTSUFFIX="tar.xz"

DISTFILES="http://ftp.barfooze.de/pub/sabotage/tarballs/$DISTVER.$DISTSUFFIX"

UNPACKCOMD="tar -xf"

TASK=fetch
package_init "$@"

CONFIGURE_CMD="" 

package_fetch
package_patch 

cp $EXECDIR/langinfo/* $WORKDIR/libcurses
cp $EXECDIR/wcwidth.* $WORKDIR/libcurses
cp -R $EXECDIR/compat $WORKDIR/

if [ "$TASK" == "build" ]
then
  cd "$WORKROOT/$DISTVER"

  eval "HOSTCC=gcc CC=\"$PBTARGETARCH-gcc\" PREFIX=\"$PREFIX\" DESTDIR=\"$DESTDIR\" CPPFLAGS=\"-D_QNX_SOURCE\"" make
  TASK=install
fi

package_install
package_bundle

