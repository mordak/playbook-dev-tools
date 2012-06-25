#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e

LOGIN="guest --password \"\""
TASK=fetch

usage()
{
cat << EOF
usage: $0 options

Run this to fetch, patch, build, bundle and deploy gcc for the playbook.

OPTIONS:
   -h      Show this message
   -b      The absolute path to your bbpb-sdk folder [/abs/path/tp/bbpb-sdk]
   -l      The login you use for the QNX Foundry27 site, if you have one [user@host]
   -t      The build task to start at: [fetch | patch | build | install | bundle | deploy]
EOF
}

while getopts "b:l:t:h" OPTION
do
  case "$OPTION" in 
    h) usage; exit 1;;
    b) echo "$OPTARG" > ../conf/bbtools;;
    l) echo "$OPTARG" > ../conf/login;;
    t) TASK="$OPTARG";;
  esac
done
if [ -e "../conf/bbtools" ]; then
  BBTOOLS=`cat ../conf/bbtools`
fi
if [ -e "../conf/login" ]; then
  LOGIN=`cat ../conf/login`
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
DESTDIR="$PBBUILDDIR/../pbhome"
mkdir -p "$DESTDIR"
BUILDDIR="$PBBUILDDIR/mkgcc"
mkdir -p "$BUILDDIR"
ZIPFILE="$PBBUILDDIR/../pbhome.zip"

# Set up the environment
source $BBTOOLS/bbndk-env.sh 

# Pull down the right tools
if [ "$TASK" == "fetch" ] 
then
  # blow away previous downloads
  rm -rf gcc
  # fetch
  echo "Fetching gcc sources"
  svn checkout --username $LOGIN http://community.qnx.com/svn/repos/core-dev-tools/tools/binutils/branches/650_release
  mv 650_release binutils
  svn checkout --username $LOGIN http://community.qnx.com/svn/repos/core-dev-tools/tools/gcc/branches/650_release
  mv 650_release gcc
  curl -O http://gnu.mirror.iweb.com/gnu/gmp/gmp-4.3.2.tar.bz2
  curl -O http://gnu.mirror.iweb.com/gnu/mpfr/mpfr-2.4.2.tar.bz2

  # Unpack and organize
  echo "Unpacking"
  mv binutils gcc/
  mv gmp-4.3.2.tar.bz2 gcc/
  mv mpfr-2.4.2.tar.bz2 gcc/
  cd gcc
  tar -xjf gmp-4.3.2.tar.bz2 
  tar -xjf mpfr-2.4.2.tar.bz2 
  mv gmp-4.3.2 gmp
  mv mpfr-2.4.2 mpfr
 
  cd "$PBBUILDDIR"
  TASK=patch
fi

if [ "$TASK" == "patch" ] 
then
  echo "Patching .. "
  # No patches yet.. 
  cd $PBBUILDDIR
  TASK=build
fi

if [ "$TASK" == "build" ] 
then
  echo "Building"

  cd "$BUILDDIR"
  # clean up if we have a previous build
  if [ -e "Makefile" ]; then
    make distclean
  fi
  # configure gcc
  ../gcc/configure --host=arm-unknown-nto-qnx6.5.0eabi --build=x86_64-apple-darwin --srcdir=../gcc --enable-cheaders=c --with-as=ntoarm-as --with-ld=ntoarm-ld --with-sysroot=$BBTOOLS/target/qnx6/ --disable-werror --target=arm-unknown-nto-qnx6.5.0eabi --prefix=$DESTDIR --exec-prefix=$DESTDIR --enable-languages=c --enable-threads=posix --disable-nls --disable-libssp --disable-tls --disable-libstdcxx-pch --enable-libmudflap --enable-__cxa_atexit --with-gxx-include-dir=$BBTOOLS/target/qnx6/usr/include/c++/4.4.2 --enable-multilib --disable-shared CC=arm-unknown-nto-qnx6.5.0eabi-gcc LDFLAGS='-Wl,-s ' AUTOMAKE=: AUTOCONF=: AUTOHEADER=: AUTORECONF=: ACLOCAL=:

  make
  TASK=install
fi
  
if [ "$TASK" == "install" ] 
then
  cd $BUILDDIR
  make install
  TASK=bundle
fi

if [ "$TASK" == "bundle" ] 
then
  echo "Bundling"
  cd $DESTDIR
  # link stuff to where the compiler will find it
  cd bin
  if [ ! -e cc1 ]; then
    ln -s ../libexec/gcc/arm-unknown-nto-qnx6.5.0eabi/4.4.2/cc1 ./cc1
  fi
  # Someday we may have cc1plus too. 
  #if [ ! -e cc1plus ]; then
  #  ln -s ../libexec/gcc/arm-unknown-nto-qnx6.5.0eabi/4.4.2/cc1plus ./cc1plus
  #fi
  if [ ! -e collect2 ]; then
    ln -s ../libexec/gcc/arm-unknown-nto-qnx6.5.0eabi/4.4.2/collect2 ./collect2
  fi
  cd ..
  zip -r -y "$ZIPFILE" *
  
  cd "$BBTOOLS"
  zip -r -u -y "$ZIPFILE" target/qnx6/armle-v7 target/qnx6/etc target/qnx6/usr/include
fi


