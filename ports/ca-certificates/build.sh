#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.

set -e
source ../../lib.sh

DISTVER="cacert"
DISTSUFFIX="pem"

TASK=fetch

DISTFILES="https://curl.se/ca/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xf"

package_init "$@"

if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  echo "Fetching sources"
  curl -fkSL $DISTFILES -o "$WORKDIR/$DISTVER.$DISTSUFFIX"

  TASK=install
fi

if [ "$TASK" == "install" ]
then
  CERTDIR="$DESTDIR/$PREFIX/ssl"
  mkdir -p "$CERTDIR"

  cp "$WORKDIR/$DISTVER.$DISTSUFFIX" "$CERTDIR/cert.pem"
  TASK=bundle
fi

package_bundle


