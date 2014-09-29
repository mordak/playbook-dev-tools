#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e

source lib.sh


TASK=bootstrap

init "$@"

if [ "$TASK" == "bootstrap" ]
then
  bootstrap
  TASK=bundle
fi

if [ "$TASK" == "bundle" ]
then
  cd "$ROOTDIR"
  echo "Setting up target .profile"
  echo "export NATIVE_TOOLS=/accounts/devuser/tools" > env.sh
  echo "QNX_TARGET=\$NATIVE_TOOLS/$TARGETNAME/qnx6" >> env.sh
  cat profile >> env.sh
  zip -u "$ZIPFILE" env.sh || true
  #zip -u "$ZIPFILE" uninstall.sh || true
  #TASK=deploy
fi

if [ "$TASK" == "deploy" ]
then
  cd "$ROOTDIR"
  cat pbinstallhead.sh                    > pbinstall.sh
  echo "./bin/pwget \"$URL/pbhome.zip\""  >> pbinstall.sh
  echo "unzip pbhome.zip"                 >> pbinstall.sh
  cat profile                             >> pbinstall.sh
  echo "---- Direct your Playbook browser to: $URL/pbinstall.sh"
  echo "---- Save the file, then in the Playbook shell, execute: sh /accounts/1000/shared/downloads/pbinstall.sh"
  ./localserver.rb
fi

