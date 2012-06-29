#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e

ALLPROGS="gcc coreutils diffutils grep make gzip patch tar bzip2 bison"
BBTOOLS=
LOGIN="guest --password \"\""
MYIP=`ruby -rsocket -e 'p IPSocket.getaddress(Socket.gethostname)' | tr -d \"`
TASK=all
SUBTASKFLAG=
SUBTASK=
usage()
{
cat << EOF
usage: $0 options

Run this to fetch, patch, build, bundle and deploy gcc for the playbook.

OPTIONS:
   -h      Show this message
   -b      The absolute path to your bbpb-sdk folder [/abs/path/tp/bbpb-sdk]
   -i      The IP address of this machine
   -l      The login you use for the QNX Foundry27 site, if you have one [user@host]
   -t      The build task to perform: [ <packagename> | bundle | deploy]
   -s      The task to pass to each package [fetch | patch | build | install | bundle]
EOF
}

mkdir -p conf

while getopts "b:i:l:t:hs:" OPTION
do
  case "$OPTION" in
    h) usage; exit 1;;
    b) echo "$OPTARG" > conf/bbtools;;
    i) echo "$OPTARG" > conf/ip;;
    l) echo "$OPTARG" > conf/login;;
    t) TASK="$OPTARG";;
    s) SUBTASK="$OPTARG"; SUBTASKFLAG="-t";;
  esac
done
if [ -e "conf/bbtools" ]; then
  BBTOOLS=`cat conf/bbtools`
fi
if [ -e "conf/login" ]; then
  LOGIN=`cat conf/login`
fi
if [ -e "conf/ip" ]; then
  MYIP=`cat conf/ip`
fi

URL="http://$MYIP:8888"

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
  for afile in $ALLPROGS
  do
    if [ -d "$afile" ] && [ -e "$afile/build.sh" ]
    then
      echo "Building $afile"
      cd "$afile"
      ./build.sh $SUBTASKFLAG $SUBTASK
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
  zip -u "$ZIPFILE" .profile || true
  zip -u "$ZIPFILE" uninstall.sh || true
  TASK=deploy
fi

if [ "$TASK" == "deploy" ]
then
  cd "$PBBUILDDIR"
  cat pbinstallhead.sh                    > pbinstall.sh
  echo "./bin/pwget \"$URL/pbhome.zip\""  >> pbinstall.sh
  echo "unzip pbhome.zip"                 >> pbinstall.sh
  cat profile                             >> pbinstall.sh
  echo "---- Direct your Playbook browser to: $URL/pbinstall.sh"
  echo "---- Save the file, then in the Playbook shell, execute: sh /accounts/1000/shared/downloads/pbinstall.sh"
  ./localserver.rb
fi

