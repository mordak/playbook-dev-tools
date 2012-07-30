#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
TASK=fetch

DISTVER="gettext-0.18.1.1"
DISTSUFFIX="tar.gz"
DISTFILES="http://ftp.gnu.org/gnu/gettext/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"

CONFIGURE_CMD="./configure 
              --host=arm-unknown-nto-qnx6.5.0eabi 
              --build=x86_64-apple-darwin 
              --target=arm-unknown-nto-qnx6.5.0eabi 
              --prefix=$DESTDIR 
              --disable-nls 
              --enable-threads=posix 
              --enable-relocatable 
              --enable-java=no 
              --disable-java 
              --disable-native-java 
              --enable-csharp=no 
              --disable-csharp 
              --without-included-gettext 
              --without-git 
              --without-cvs 
              --without-emacs 
              CC=arm-unknown-nto-qnx6.5.0eabi-gcc 
              ac_cv_prog_AWK=/usr/bin/awk 
              ac_cv_path_GREP=/usr/bin/grep 
              ac_cv_path_SED=/usr/bin/sed
              "
  
package_init "$@"
package_fetch
package_patch
package_build
package_install
package_bundle


