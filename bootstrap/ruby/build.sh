#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
TASK=fetch

DISTVER="ruby-1.8.7-p371"
DISTSUFFIX="tar.gz"
DISTFILES="http://ftp.ruby-lang.org/pub/ruby/1.8/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"

CONFIGURE_CMD="ac_cv_func_setpgrp_void=yes
                LDSHARED='qcc -Vgcc_ntoarmv7le -shared'
                ./configure 
                --host=$PBHOSTARCH
                --build=$PBBUILDARCH 
                --target=$PBTARGETARCH 
                --prefix=$DESTDIR 
                --disable-install-doc
                CC='qcc -Vgcc_ntoarmv7le'                
                "

package_init "$@"
package_fetch
package_patch
package_build
package_install
package_bundle


