#!/usr/bin/env bash

# This code Copyright 2020 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh
DISTVER="ncurses-6.1"
DISTSUFFIX="tar.gz"
TASK=fetch

DISTFILES="https://ftp.gnu.org/gnu/ncurses/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"

package_init "$@"
CONFIGURE_CMD="cf_cv_wcwidth_graphics=no ./configure
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX
                --with-shared
                --enable-widec
                --disable-stripping
                --without-progs
                CC=$PBTARGETARCH-gcc"

package_fetch
package_patch

cp $EXECDIR/nc_qnxnto.h $WORKDIR/include

package_build
package_install
package_bundle

