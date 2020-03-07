#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#
# Olivier Kaloudoff <kaloudov@yandex.ru>, 2019
#

# Erlang as a pre-requisite for CouchDB
#
# Fixme: we want a package with "erlang",
# 	 but DISTVER is "otp_src_..."

set -e
source ../../lib.sh
#DISTVER="erlang"
DISTVER="otp_src_22.2"
DISTSUFFIX="tar.gz"
CONFIGURE_CMD="./otp_build autoconf"

unpackcomd() {
set -x
	#
	# DEBUG unpackcomd $@
	#
	pwd
	mkdir erlang-22.2
        tar -zxvf $DISTVER.$DISTSUFFIX -C erlang-22.2 --strip-components=1
         
set -x
	sleep 3
}
UNPACKCOMD="unpackcomd "
# end fixme temporary hack

TASK=fetch

DISTFILES="http://erlang.org/download/$DISTVER.$DISTSUFFIX"
MYMAKEFLAGS="CC=$PBTARGETARCH-gcc"

package_init "$@"
# No configure, just make

package_fetch

if [ "$TASK" == "patch" ]
then
  echo "Patching .. "
  cd "$WORKDIR"
  echo PWD=$(pwd)
  sleep 3
  PATCHLEVEL=$1
  if [ -z $1 ]; then
    PATCHLEVEL=0
  fi
  if [ -e "$EXECDIR/patches" ]; then
    for apatch in $EXECDIR/patches/*
    do
      patch -p$PATCHLEVEL < $apatch
    done
  fi
  TASK=build
fi

package_build

package_install
package_bundle

