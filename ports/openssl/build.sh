#!/usr/bin/env bash

set -x

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#
# Olivier Kaloudoff <olivier.kaloudoff@gmail.com>, 2018
#


set -e
source ../../lib.sh
DISTVER="openssl-1.0.2t"
DISTSUFFIX="tar.gz"
TASK=fetch

DISTFILES="https://www.openssl.org/source/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"

package_init "$@"

CONFIGURE_CMD="
        ./Configure
        QNX6:arm-unknown-nto-qnx8.0.0eabi-gcc
        --prefix=$PREFIX
        shared
        -DNO_SYSLOG
        -DHAVE_DLFCN_H
        -DDSO_DLFCN
        -lsocket
        "
package_fetch
package_patch
package_build


if [ "$TASK" == "install" ]
then
  cd "$WORKDIR"

  # Don't install docs
  make INSTALL_PREFIX=$DESTDIR install_sw

  # OpenSSL skips those nicely
  cp libssl.so.1.0.0 "$DESTDIR/$PREFIX/lib"
  cp libcrypto.so.1.0.0 "$DESTDIR/$PREFIX/lib"

  # Is it something we can avoid?
  cd "$DESTDIR/$PREFIX/lib"
  ln -s libssl.so.1.0.0 libssl.so.2
  ln -s libcrypto.so.1.0.0 libcrypto.so.2

  TASK=bundle
fi

package_bundle
