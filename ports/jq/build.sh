#!/usr/bin/env bash

# This code Copyright 2019 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh

DISTVER="jq-1.6"
DISTSUFFIX="tar.gz"
TASK=fetch

DISTFILES="https://github.com/stedolan/jq/releases/download/$DISTVER/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"

ONIG_DIR="onig-6.9.4"

package_init "$@"
CONFIGURE_CMD="./configure
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX
                --disable-maintainer-mode
                --with-oniguruma=$ARCHIVEDIR/$ONIG_DIR/$PREFIX
                CC=$PBTARGETARCH-gcc"

package_fetch
package_patch
package_build
package_install
package_bundle

