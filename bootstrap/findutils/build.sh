#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
TASK=fetch

DISTVER="findutils"
FINDUTILS_GITVER=003c8e6e3734c35c8a5d639528548181f0fada7f
GNULIB_GITVER=372ef2a0e94ec6ee85b5fc4bab763154ec11420d

CONFIGURE_CMD="./configure 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$DESTDIR 
                --disable-nls 
                CC=$PBTARGETARCH-gcc
                "

package_init "$@"
if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  # delete old version
  rm -rf "$DISTVER"
  git clone git://git.sv.gnu.org/findutils $DISTVER
  cd $DISTVER
  git checkout $FINDUTILS_GITVER
  cd "$WORKDIR"
  rm -rf gnulib
  git clone git://git.savannah.gnu.org/gnulib.git gnulib-git
  cd gnulib-git
  git checkout $GNULIB_GITVER
  cd ..
  sed -i.orig '/AM_C_PROTOTYPES/d' $WORKDIR/configure.ac
  ./import-gnulib.sh -d gnulib-git
  sed -i.orig 's/\(.*\) -z \("$ac_list_mounted_fs.*\)/\1 -n \2/' configure
  TASK=patch
fi
package_patch
package_build
package_install
package_bundle


