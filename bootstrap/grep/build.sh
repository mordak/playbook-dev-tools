#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
TASK=fetch


DISTVER="grep-2.9"
DISTSUFFIX="tar.gz"
DISTFILES="http://ftp.gnu.org/gnu/grep/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"
TASK=fetch
CONFIGURE_CMD="./configure 
                --host=arm-unknown-nto-qnx6.5.0eabi 
                --build=x86_64-apple-darwin 
                --target=arm-unknown-nto-qnx6.5.0eabi 
                --prefix=$DESTDIR 
                --disable-nls 
                --enable-threads=posix 
                CC=arm-unknown-nto-qnx6.5.0eabi-gcc
                "

package_init "$@"
package_fetch
package_patch
package_build
package_install
package_bundle

