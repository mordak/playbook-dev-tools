#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#
# Olivier Kaloudoff <olivier.kaloudoff@gmail.com>, 2019



set -e
source ../../lib.sh
TASK=fetch

DISTVER="autoconf-2.69"
DISTSUFFIX="tar.gz"


DISTFILES="https://ftp.gnu.org/gnu/autoconf/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"
TASK=fetch
package_init "$@"
CONFIGURE_CMD="./configure 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$PREFIX 
                CC=$PBTARGETARCH-gcc
		CFLAGS=-O3
                "

package_fetch
package_patch
package_build
package_install
package_bundle

