#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e

DISTVER="bzip2-1.0.6"
DISTSUFFIX="tar.gz"
DISTFILES="http://bzip.org/1.0.6/bzip2-1.0.6.tar.gz"
UNPACKCOMD="tar -xzf"

TASK=fetch

usage()
{
cat << EOF
usage: $0 options

Run this to fetch, patch, build, bundle and deploy $DISTVER for the playbook.

OPTIONS:
   -h      Show this message
   -b      The absolute path to your bbpb-sdk folder [/abs/path/tp/bbpb-sdk]
   -t      The build task to start at: [fetch | patch | build | install | bundle]
EOF
}

while getopts "b:l:t:h" OPTION
do
  case "$OPTION" in
    h) usage; exit 1;;
    b) echo "$OPTARG" > ../conf/bbtools;;
    t) TASK="$OPTARG";;
  esac
done
if [ -e "../conf/bbtools" ]; then
  BBTOOLS=`cat ../conf/bbtools`
fi

if [[ -z $BBTOOLS ]]
then
  usage
  exit 1
fi

# test the existence of the bbndk-env file
if [ ! -e "$BBTOOLS/bbndk-env.sh" ]
then
  echo "Cannot source $BBTOOLS/bbndk-env.sh. Pass -b [path] to specify."
  exit 1
fi

PBBUILDDIR=$PWD
DESTDIR="$PBBUILDDIR/../pbhome"
mkdir -p "$DESTDIR"
ZIPFILE="$PBBUILDDIR/../pbhome.zip"
BUILDDIR="$PBBUILDDIR/$DISTVER"

# Set up the environment
source $BBTOOLS/bbndk-env.sh

# Pull down the right tools
if [ "$TASK" == "fetch" ]
then
  # fetch
  echo "Fetching sources"
  curl -O $DISTFILES

  # Unpack and organize
  echo "Unpacking"
  $UNPACKCOMD $DISTVER.$DISTSUFFIX

  TASK=patch
fi

if [ "$TASK" == "patch" ]
then
  echo "Patching .. "
  cd "$BUILDDIR"
  patch -p0 < ../patches/makefile.diff
  TASK=build
fi

if [ "$TASK" == "build" ]
then
  echo "Building"
  cd "$BUILDDIR"
  # clean up if we have a previous build
  if [ -e "Makefile" ]; then
    make distclean
  fi
  # configure
  make
  TASK=install
fi

if [ "$TASK" == "install" ]
then
  cd "$BUILDDIR"
  make install PREFIX="$DESTDIR"
  TASK=bundle
fi

if [ "$TASK" == "bundle" ]
then
  echo "Bundling"
  cd $DESTDIR
  zip -r -y -u "$ZIPFILE" *
fi


