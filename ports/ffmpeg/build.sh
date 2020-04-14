#!/usr/bin/env bash

set -x

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh
DISTVER="ffmpeg-4.2.2"
DISTSUFFIX="tar.bz2"
TASK=fetch

DISTFILES="https://ffmpeg.org/releases/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xjf"

package_init "$@"

CONFIGURE_CMD="./configure 
		--enable-cross-compile
		--cross-prefix=arm-unknown-nto-qnx8.0.0eabi-
		--arch=armv7
		--disable-debug
		--enable-optimizations
		--enable-asm
		--disable-static
		--enable-shared
		--target-os=qnx
		--prefix=$PREFIX"

package_fetch
package_patch
package_build
package_install
package_bundle

