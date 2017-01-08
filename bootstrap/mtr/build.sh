#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
TASK=fetch

DISTVER="mtr-0.87"
DISTSUFFIX="tar.gz"  # so much for bootstrapping..
DISTFILES="ftp://ftp.bitwizard.nl/mtr/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"
package_init "$@"
CONFIGURE_CMD="./configure 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$PREFIX 
                CC=$PBTARGETARCH-gcc 
                --without-gtk
                LIBS='-lsocket'
                "
package_fetch
package_patch
package_build
package_install
package_bundle


