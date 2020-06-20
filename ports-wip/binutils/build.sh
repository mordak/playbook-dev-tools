#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
TASK=fetch

DISTVER="710_release"

package_init "$@"

if [ "$TASK" == "fetch" ]
then
  cd "$EXECDIR"
  # fetch
  echo "Fetching binutils sources if not already present"
  ls -d $WORKROOT/$DISTVER/tools 2>&1 > /dev/null || \
{
  cd $WORKROOT/$DISTVER
  git init
  git config core.sparseCheckout true
  echo "tools/binutils/branches/710_release/" >> .git/info/sparse-checkout
  git remote add -f origin https://github.com/extrowerk/core-dev-tools.git
  git pull origin master
}

  TASK=build
fi

CONFIGURE_CMD="
cd 'tools/binutils/branches/710_release/';
#make clean;
#find . -name 'config.cache' -exec rm -rf {} \;;
ac_cv_func_ftello64=no
ac_cv_func_fseeko64=no
ac_cv_func_fopen64=no
CC='$PBTARGETARCH-gcc'
CFLAGS='$CFLAGS -Wno-shadow -Wno-format -Wno-sign-compare';
LIBS='$LIBS -liconv'
LDFLAGS='-Wl,-s '
LDFLAGS='$LDFLAGS -liconv'
./configure --prefix='$PREFIX' --host=$PBHOSTARCH --build=$PBBUILDARCH 
--target=$PBTARGETARCH --exec-prefix=$PREFIX --includedir=$PREFIX --docdir=$PREFIX --disable-nls --disable-shared --disable-werror --disable-initfini-array --with-sysroot=/;
"

package_build
package_install
package_bundle
