#!/usr/bin/env bash

# This code Copyright 2019 LxMx Foundation
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh

DISTVER="youtube-dl"

TASK=fetch

DISTFILES="https://youtube-dl.org/downloads/latest/$DISTVER"

package_init "$@"

if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  echo "Fetching sources"
  curl -fkSL $DISTFILES -o "$WORKDIR/$DISTVER"

  TASK=install
fi

if [ "$TASK" == "install" ]
then
  BINDIR="$DESTDIR/$PREFIX/bin"
  mkdir -p "$BINDIR"

  cp "$WORKDIR/$DISTVER" "$BINDIR/$DISTVER"

  chmod +x "$BINDIR/$DISTVER"
  ln -s /base/usr/bin/python3.2 "$BINDIR/python"

  TASK=bundle
fi

package_bundle

