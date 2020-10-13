#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh
DISTVER="flex-2.6.4"
DISTSUFFIX="tar.gz"
TASK=fetch

DISTFILES="https://github.com/westes/flex/files/981163/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"

package_init "$@"
CONFIGURE_CMD="./configure
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$PREFIX 
                --enable-threads=posix 
                --disable-nls 
                CC=$PBTARGETARCH-gcc"

package_fetch
package_patch
package_build
package_install
package_bundle


