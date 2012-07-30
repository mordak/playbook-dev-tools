#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh
TASK=fetch

DISTVER="bison-2.5.1"
DISTSUFFIX="tar.gz"  
DISTFILES="http://ftp.gnu.org/gnu/bison/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"

CONFIGURE_CMD="./configure
                --host=arm-unknown-nto-qnx6.5.0eabi 
                --build=x86_64-apple-darwin 
                --target=arm-unknown-nto-qnx6.5.0eabi 
                --prefix=$DESTDIR 
                --enable-threads=posix 
                --disable-nls 
                CC=arm-unknown-nto-qnx6.5.0eabi-gcc"

package_init "$@"
package_fetch
package_patch
package_build
package_install
# remove the absolute path from the yacc wrapper
sed -i '' 's/'\''.*bison'\''/'\''bison'\''/'  "$DESTDIR/bin/yacc"
package_bundle


