#!/usr/bin/env bash

set -e
set -x
source ../../lib.sh
TASK=fetch

DISTVER="contrib"

package_init "$@"
# No configure, just make

if [ "$TASK" == "fetch" ]
then
  cp $EXECDIR/Makefile $WORKDIR
  cp -r $EXECDIR/bin $WORKDIR
  cp -r $EXECDIR/src $WORKDIR
  chmod 755 $WORKDIR/bin/*
  cd $WORKDIR
  TASK=build
fi

package_build
package_install
package_bundle

