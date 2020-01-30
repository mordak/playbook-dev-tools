#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#
# Olivier Kaloudoff <olivier.kaloudoff@gmail.com>, 2018
#

set -e
source ../../lib.sh

DISTVER="pkgin"
DISTSUFFIX="git"
DISTTAG="v0.15.0"

DISTFILES="https://github.com/NetBSDfr/$DISTVER.$DISTSUFFIX"

LIBFETCH_DIR="libfetch-xbps-2.0"
OPENSSL_DIR="openssl-1.0.2t"
SQLITE_DIR="sqlite-autoconf-3240000"
LIBNBCOMPAT_DIR="libnbcompat-debian-20180822-5"

TASK=fetch
package_init "$@"

CONFIGURE_CMD=" ./configure

                CPPFLAGS=\"-I$ARCHIVEDIR/$LIBFETCH_DIR/$PREFIX/include\
                  -I$ARCHIVEDIR/$OPENSSL_DIR/$PREFIX/include\
                  -I$ARCHIVEDIR/$SQLITE_DIR/$PREFIX/include\
                  -I$ARCHIVEDIR/$LIBNBCOMPAT_DIR/$PREFIX/include\"

                LDFLAGS=\"-L$ARCHIVEDIR/$LIBFETCH_DIR/$PREFIX/lib\
                  -L$ARCHIVEDIR/$OPENSSL_DIR/$PREFIX/lib\
                  -L$ARCHIVEDIR/$SQLITE_DIR/$PREFIX/lib\
                  -L$ARCHIVEDIR/$LIBNBCOMPAT_DIR/$PREFIX/lib\"

                LIBS=\"-lsocket -lssl -lcrypto \"
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH
                --target=$PBTARGETARCH
                --prefix=$PREFIX"

if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"

  rm -rf "$DISTVER"
  git clone $DISTFILES

  cd "$WORKROOT/$DISTVER"
  git checkout $DISTTAG

  TASK=patch
fi

package_patch 

if [ "$TASK" == "build" ]
then
  cd "$WORKROOT/$DISTVER"
  eval $CONFIGURE_CMD

  bmake
  TASK=install
fi

if [ "$TASK" == "install" ]
then
  cd "$WORKDIR"

  bmake INSTALL_DIR="install -d" INSTALL_FILE="install" STRIPFLAG="" \
    BINOWN="$(whoami)" BINGRP="$(whoami)" \
    MANOWN="$(whoami)" MANGRP="$(whoami)" \
    DESTDIR="$DESTDIR" install

  TASK=bundle
fi

package_bundle

