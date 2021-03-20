#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
# 
# -----------
# 
# Carlos Perez-Guerra, 2020 (charlie@csalgado.io).
# This script wraps around the original Blackberry Python build recipe and patches

set -e
source ../../lib.sh

DISTVER='python-3.2.2'
package_init "$@"

apt install mercurial python -y

if [ "$TASK" == "fetch" ]
then
	echo "Fetching"
	cd $WORKROOT
	git clone https://github.com/BerryFarm/Python
	mv Python/Python-3 $DISTVER
	rm -rf Python
	TASK="build"
fi

if [ "$TASK" == "build" ]
then
	echo "Building"
	cd $WORKROOT/$DISTVER
	./build.sh
	TASK="install"
fi

if [ "$TASK" == "install" ]
then
	TASK="bundle"
fi

if [ "$TASK" == "bundle" ]
then
	echo "Zipping and copying to packages"
	echo $ROOTDIR
	cd $WORKROOT/$DISTVER/nto-armv7/accounts/1000/shared/misc/clitools 
	zip -yr $DISTVER.zip .
	mv $DISTVER.zip $ROOTDIR/packages

	echo "Moving to archive"
	mv $WORKROOT/$DISTVER/nto-armv7/accounts $ROOTDIR/archive/

	echo "Moving host to $ROOTDIR/host for future builds"
	mv $WORKROOT/$DISTVER/host $ROOTDIR/
fi
