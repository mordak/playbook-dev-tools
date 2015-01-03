#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
TASK=fetch

DISTVER="openssh-6.7p1"
DISTSUFFIX="tar.gz"
DISTFILES="http://ftp.openbsd.org/pub/OpenBSD/OpenSSH/portable/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"
package_init "$@"
CONFIGURE_CMD="./configure 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$PREFIX 
                --disable-etc-default-login
                --with-pid-dir=$PREFIX/var/run
                --with-privsep-path=$PREFIX/var/empty
                --with-sandbox=no
                --disable-strip
                CC=$PBTARGETARCH-gcc 
                AR=$PBTARGETARCH-ar 
                CFLAGS="-I$PWD"
                "
package_fetch
package_patch
cp $EXECDIR/nouid_getpwuid.* $WORKDIR/
package_build
package_install
package_bundle


