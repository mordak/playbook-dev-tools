#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#
# Olivier Kaloudoff <kaloudov@yandex>, 2020
#


set -e
source ../../lib.sh
DISTVER="autossh-1.4g"
DISTSUFFIX="tgz"
TASK=fetch

DISTFILES="https://www.harding.motd.ca/autossh/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"

package_init "$@"

CONFIGURE_CMD="
                CC=$PBTARGETARCH-gcc 
		AR=arm-unknown-nto-qnx8.0.0eabi-ar
		LD=arm-unknown-nto-qnx8.0.0eabi-ld
		 ac_cv_func_malloc_0_nonnull=yes
		 ac_cv_func_realloc_0_nonnull=yes ./configure 
		--with-gnu-ld
                --prefix=$PREFIX 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                "

package_fetch
package_patch 1
cp $EXECDIR/syslog.h $WORKDIR/
#cp $EXECDIR/rpl_malloc.c $WORKDIR/
package_build
package_install
package_bundle
