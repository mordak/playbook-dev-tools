#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e

BBTOOLS=
LOGIN="guest --password \"\""
MYIP=`ruby -rsocket -e 'p IPSocket.getaddress(Socket.gethostname)' | tr -d \"`
URL="http://$MYIP:8888"
TASK=all

usage()
{
cat << EOF
usage: $0 options

Run this to fetch, patch, build, bundle and deploy gcc for the playbook.

OPTIONS:
   -h      Show this message
   -b      The absolute path to your bbpb-sdk folder [/abs/path/tp/bbpb-sdk]
   -l      The login you use for the QNX Foundry27 site, if you have one [user@host]
   -t      The build task to start at: [gcc | coreutils | make | grep | bundle | deploy]
EOF
}

mkdir -p conf

while getopts "b:l:t:h" OPTION
do
  case "$OPTION" in
    h) usage; exit 1;;
    b) echo "$OPTARG" > conf/bbtools;;
    l) echo "$OPTARG" > conf/login;;
    t) TASK="$OPTARG";;
  esac
done
if [ -e "conf/bbtools" ]; then
  BBTOOLS=`cat conf/bbtools`
fi
if [ -e "conf/login" ]; then
  LOGIN=`cat conf/login`
fi


if [[ -z $BBTOOLS ]] || [[ -z $LOGIN ]]
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
DESTDIR="$PBBUILDDIR/pbhome"
mkdir -p "$DESTDIR"
ZIPFILE="$PBBUILDDIR/pbhome.zip"

# Set up the environment
source $BBTOOLS/bbndk-env.sh

if [ "$TASK" == "all" ]
then
  for afile in *
  do
    if [ -d "$afile" ] && [ -e "$afile/build.sh" ]
    then
      echo "Building $afile"
      cd "$afile"
      ./build.sh
      cd "$PBBUILDDIR"
    fi
  done
  TASK=bundle
else
  if [ -e "$TASK/build.sh" ]
  then
    echo "Building $TASK"
    cd "$TASK"
    ./build.sh
    cd "$PBBUILDDIR"
  fi
fi

if [ "$TASK" == "bundle" ]
then
  cd "$PBBUILDDIR"
  echo "Setting up target .profile"
  cp profile .profile
  zip -u "$ZIPFILE" .profile
  zip -u "$ZIPFILE" uninstall.sh
  TASK=deploy
fi

if [ "$TASK" == "deploy" ]
then
  cd "$PBBUILDDIR"
  cat pbinstallhead.sh > pbinstall.sh
  echo "./bin/pwget \"$URL/pbhome.zip\""  >> pbinstall.sh
  echo "unzip pbhome.zip"                 >> pbinstall.sh
  echo "sh -l"                            >> pbinstall.sh
  echo "---- Direct your Playbook browser to: $URL/pbinstall.sh"
  echo "---- Save the file, then in the Playbook shell, execute: sh /accounts/1000/shared/downloads/pbinstall.sh"
  ./localserver.rb
fi

