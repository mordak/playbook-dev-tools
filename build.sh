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
  echo "Setting up target env"
  echo "export NATIVE_TOOLS=\"$PREFIX\"" > env.sh
  echo "export NATIVE_TOOLS_URL=\"$URL\"" >> env.sh
  echo "QNX_TARGET=\$NATIVE_TOOLS/$TARGETNAME/qnx6" >> env.sh
  cat profile >> env.sh
  echo "umask 022"                   >  sample_profile
  echo "CLITOOLS=\"$PREFIX/env.sh\"" >> sample_profile
  echo 'if [ -e $CLITOOLS ];then'    >> sample_profile
  echo '    . $CLITOOLS'             >> sample_profile
  echo 'fi'                          >> sample_profile
  ZIPFILE="$DESTDIR.zip"
  zip -u "$ZIPFILE" env.sh qconf-override.mk pbpkgadd sample_profile || true
  zip -u "$ZIPFILE" packages/*.zip || true
  TASK=deploy
fi

if [ "$TASK" == "deploy" ]
then
  cd "$ROOTDIR"
  echo "#!/bin/sh"                        >  pbinstall.sh
  echo "mkdir -p \"$PREFIX\""             >> pbinstall.sh
  echo "cd \"$PREFIX\""                   >> pbinstall.sh
  echo "export NATIVE_TOOLS=\"$PREFIX\""  >> pbinstall.sh
  echo "export NATIVE_TOOLS_URL=\"$URL\"" >> pbinstall.sh
  cat pbinstallhead.sh                    >> pbinstall.sh
  echo "./bin/pwget \"$URL/pbhome.zip\""  >> pbinstall.sh
  echo "unzip pbhome.zip"                 >> pbinstall.sh
  echo 'cp pbpkgadd bin/'                 >> pbinstall.sh
  echo 'for pkg in packages/*.zip'        >> pbinstall.sh
  echo 'do'                               >> pbinstall.sh
  echo './bin/pbpkgadd $pkg'              >> pbinstall.sh
  echo 'done'                             >> pbinstall.sh
  echo '. ./env.sh'                       >> pbinstall.sh
  echo 'cd'                               >> pbinstall.sh
  echo 'if [ ! -e .profile ]; then'                   >> pbinstall.sh
  echo '  cp "$NATIVE_TOOLS/sample_profile" .profile' >> pbinstall.sh
  echo 'else'                                         >> pbinstall.sh
  echo '  echo "You already have a .profile."'        >> pbinstall.sh
  echo '  echo "You can set up your paths by sourcing $NATIVE_TOOLS/env.sh"'    >> pbinstall.sh 
  echo '  echo "See $NATIVE_TOOLS/sample_profile for a snippet that does this"' >> pbinstall.sh
  echo 'fi'                                           >> pbinstall.sh
  echo "---- On your BB10 device, direct your browser to: $URL/pbinstall.sh"
  echo "---- Save the file, then in the shell, execute: sh /accounts/1000/shared/downloads/pbinstall.sh"
  ./localserver.rb
fi

