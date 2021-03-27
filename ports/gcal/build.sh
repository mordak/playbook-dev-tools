#!/usr/bin/env bash

set -e
source ../../lib.sh
DISTVER="gcal-4.1"
DISTSUFFIX="tar.xz"
TASK=fetch


DISTFILES="https://ftp.gnu.org/gnu/gcal/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xJf"

package_init "$@"
CONFIGURE_CMD="./configure
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX
                --disable-nls
                CC=$PBTARGETARCH-gcc"

package_fetch
package_patch

package_build
package_install

package_bundle

