#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
TASK=fetch

# file doesn't like to cross compile versions that differ from the 
# installed one, so our strategy will be to compile it natively first,
# then cross compile it against the native build.

# Need to auto-detect the installed version for cross compiling.
# Also add $HOME/share/misc/magic.mgc to installed .profile MAGIC

DISTVER="file-5.11"
DISTSUFFIX="tar.gz"
DISTFILES="ftp://ftp.astron.com/pub/file/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"

package_init "$@"
package_fetch
TASK=build

CONFIGURE_CMD="./configure
                --prefix=$WORKDIR/native"

package_build
package_install
TASK=patch

CONFIGURE_CMD="./configure 
                --host=arm-unknown-nto-qnx6.5.0eabi 
                --build=x86_64-apple-darwin 
                --target=arm-unknown-nto-qnx6.5.0eabi 
                --prefix=$DESTDIR 
                CC=arm-unknown-nto-qnx6.5.0eabi-gcc"
                
MAKE_PREFIX="PATH=\"$WORKDIR/native/bin:$PATH\""                

package_patch            
package_build
package_install
package_bundle
