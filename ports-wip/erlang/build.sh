#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.
#
# Olivier Kaloudoff <kaloudov@yandex.ru>, 2019
#

# Erlang as a pre-requisite for CouchDB
#
# Fixme: we want a package with "erlang",
# 	 but DISTVER is "otp_src_..."

set -e
source ../../lib.sh
#DISTVER="erlang"
DISTVER="otp_src_22.2"
DISTSUFFIX="tar.gz"
TASK=fetch

DISTFILES="http://erlang.org/download/$DISTVER.$DISTSUFFIX"
MYMAKEFLAGS="CC=$PBTARGETARCH-gcc"

package_init "$@"
# No configure, just make

package_fetch
package_patch
package_build
package_install
package_bundle

