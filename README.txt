
#
#
# Today, the berrymuch HEAD pointer for master branch was ...
# ... introducing the now universal variable " Current Working Commit " ...
#
CWC=https://github.com/BerryFarm/berrymuch/commit/a95cfebd15d46461f9b2e911caf3863aba8d2e42
#

#
# The very nice work to do here is to prepare inclusion of gcc-5.4.0 as a "port" in the berrymuch distribution
#

# Global goal is to reproduce steps to build the following binary 
# https://github.com/extrowerk/bb10-toolchain/releases/download/0.2/gcc_5.4.0_Blackberry_linux64_2020-11-03_B.tar.xz

# From
# https://github.com/extrowerk/bb10-toolchain/archive/0.2.tar.gz
 
# From
# https://github.com/extrowerk/bb10-toolchain/releases/tag/0.2

# From
https://github.com/extrowerk/bb10-gcc/tree/700_release

# Note from @extrowerk
the 710_release is the 8.3.0
build only binutils separately. mpfr and the other libs should be copied into the gcc source tree and let gcc take care for them
do not build them separately
you can closely follow the build.sh script i think.
do you plan to build it for bbos?
i mean with berrymuch?


Kaloudov
Yep sure I'd be so very proud

extrowerk
they are block-headed.

Kaloudov
^^ Thank you so much, I'll prepare a PR to start work on it and share efforts if needed

extrowerk
Have fun with hacking

Kaloudov
^^

Post Scriptum:
		unrelated: i think we could get the 8.3.0 branch working with newer ndk, but i have license only for 7.0.0 (which comes with gcc 5.4.0). BB don't want to give me 7.1.0 license, not even a 30 day testlicense.
