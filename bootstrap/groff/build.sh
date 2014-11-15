#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh
TASK=fetch

DISTVER="groff-1.19.2"
DISTSUFFIX="tar.gz"
DISTFILES="http://ftp.gnu.org/gnu/groff/old/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"
CONFIGURE_CMD="./configure 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$DESTDIR 
                --without-x 
                --without-gs
                "

package_init "$@"
package_fetch
package_patch 1
package_build
package_install
package_bundle

