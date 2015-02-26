# common functions for the build tools

PBHOSTARCH=arm-unknown-nto-qnx8.0.0eabi
PBBUILDARCH=`gcc -dumpmachine`
PBTARGETARCH=arm-unknown-nto-qnx8.0.0eabi

DEFAULTPREFIX='/accounts/1000/shared/documents/clitools'

usage()
{
cat << EOF
usage: $0 options

Run this to fetch, patch, build, bundle and deploy dev tools for the playbook.

OPTIONS:
   -h      Show this message
   -b      The absolute path to your BB Playbook SDK folder [/abs/path/tp/bbpb-sdk]
   -i      The IP address of this machine (will prompt if not specified)
   -l      The login you use for the QNX Foundry27 site, if you have one [user@host]
   -p      The prefix on your BB10 device to install to (default $DEFAULTPREFIX)
   -t      The build task to perform: [ bootstrap | bundle | deploy]
   -s      The task to pass to each package [fetch | patch | build | install | bundle]
EOF
}

process_args()
{
  SUBTASKFLAG=
  SUBTASK=
  while getopts "b:i:l:t:hs:p:" OPTION
  do
    case "$OPTION" in
      h) usage; exit 1;;
      b) echo "$OPTARG" > conf/bbtools;;
      i) echo "$OPTARG" > conf/ip;;
      l) echo "$OPTARG" > conf/login;;
      p) echo "$OPTARG" > conf/prefix;;
      t) TASK="$OPTARG";;
      s) SUBTASK="$OPTARG"; SUBTASKFLAG="-t";;
    esac
  done

}

function source_bbtools()
{
  if [ -e "$ROOTDIR/conf/bbtools" ]; then
    BBTOOLS=`cat "$ROOTDIR/conf/bbtools"`
  else
    # TODO prompt the user
    usage
    exit 1
  fi

  # test the existence of the bbndk-env file
  if ! ls $BBTOOLS/bbndk-env*.sh >/dev/null 2>&1
  then
    echo "Cannot source $BBTOOLS/bbndk-env.sh. Pass -b [path] to specify."
    exit 1
  fi

  # and source
  source $BBTOOLS/bbndk-env*.sh
  TARGETNAME=`basename $(dirname $QNX_TARGET)`

}

function get_foundry_login()
{
  LOGIN="guest --password \"\""
  if [ -e "$ROOTDIR/conf/login" ]; then
    LOGIN=`cat "$ROOTDIR/conf/login"`
  fi
}

function get_prefix()
{
  PREFIX="$DEFAULTPREFIX"
  if [ -e "$ROOTDIR/conf/prefix" ]; then
    PREFIX=`cat "$ROOTDIR/conf/prefix"`
  fi
}

function get_myip()
{
  MYIP=
  if [ -e "$ROOTDIR/conf/ip" ]; then
    MYIP=`cat "$ROOTDIR/conf/ip"`
  else
    IPS=( `ifconfig | grep "inet " | awk '{print $2}'` )
    NUMOFIPS=${#IPS[@]}
    if [ $NUMOFIPS -gt 1 ]; then
      j=-1
      while [ $j -eq -1 ]; do
        echo "Please choose on which IP we'll be listening to download requests from PlayBook:"
        for (( i=0;i<$NUMOFIPS;i++)); do echo $i\) ${IPS[$i]}; done
        echo -n Your choice:
        read j
        if [ $j -lt 0 ] ; then j=-1; fi
        let i=$NUMOFIPS-1
        if [ $j -gt $i ] ; then j=-1; fi
      done
    else
      j=0
    fi
    MYIP=${IPS[$j]}
    echo "$MYIP" > "$ROOTDIR/conf/ip"
  fi
  URL="http://$MYIP:8888"
}

function init_confdir()
{
  mkdir -p conf
  # cache the root directory if we haven't yet
  if [ ! -e "conf/rootdir" ]; then
    echo "$PWD" > conf/rootdir
  fi
}

function configure_dirs()
{
  # we are either the root build.sh, or a subdir
  if [ -e "conf/rootdir" ]; then
    ROOTDIR=`cat conf/rootdir`
  elif [ -e ../../conf/rootdir ]; then
    ROOTDIR=`cat ../../conf/rootdir`
  else
    # first run
    init_confdir
    ROOTDIR=`cat conf/rootdir`
  fi
  DESTDIR="$ROOTDIR/pbhome"
  mkdir -p "$DESTDIR"
  ARCHIVEDIR="$ROOTDIR/archive"
  mkdir -p "$ARCHIVEDIR"
  PKGDIR="$ROOTDIR/packages"
  mkdir -p "$PKGDIR"
  WORKROOT="$ROOTDIR/work"
  mkdir -p "$WORKROOT"
  BOOTSTRAPDIR="$ROOTDIR/bootstrap"
  ZIPFILE="$ROOTDIR/pbhome.zip"
}

function init()
{
  init_confdir
  process_args "$@"
  configure_dirs
  source_bbtools
  get_foundry_login
  get_myip
  get_prefix
}

function bootstrap()
{
  ALLPROGS="gcc coreutils diffutils grep make patch gzip bzip2 bison gettext findutils groff man file openssh"

  cd "$BOOTSTRAPDIR"
  for dir in $ALLPROGS
  do
    if [ -d "$dir" ] && [ -e "$dir/build.sh" ]
    then
      echo "Building $dir"
      cd "$dir"
      ./build.sh $SUBTASKFLAG $SUBTASK
      cd "$BOOTSTRAPDIR"
    fi
  done
}

function subusage()
{
cat << EOF
usage: $0 options

Run this to fetch, patch, build, bundle and deploy $DISTVER for the playbook.

OPTIONS:
   -h      Show this message
   -b      The absolute path to your bbpb-sdk folder [/abs/path/tp/bbpb-sdk]
   -t      The build task to start at: [fetch | patch | build | install | bundle]
   -i      The IP address of this machine (will prompt if not specified)
   -l      The login you use for the QNX Foundry27 site, if you have one [user@host]
   -p      The prefix on your BB10 device to install to (default $DEFAULTPREFIX)
EOF
}

function process_subargs()
{
while getopts "b:l:t:i:hp:" OPTION
do
  case "$OPTION" in
    h) subusage; exit 1;;
    b) echo "$OPTARG" > "$ROOTDIR/conf/bbtools";;
    i) echo "$OPTARG" > "$ROOTDIR/conf/ip";;
    l) echo "$OPTARG" > "$ROOTDIR/conf/login";;
    p) echo "$OPTARG" > "$ROOTDIR/conf/prefix";;
    t) TASK="$OPTARG";;
  esac
done
}

function package_init()
{
  configure_dirs
  process_subargs "$@"
  source_bbtools
  get_foundry_login
  get_myip
  get_prefix

  EXECDIR="$PWD"
  WORKDIR="$WORKROOT/$DISTVER"
  mkdir -p "$WORKDIR"
  ZIPFILE="$PKGDIR/$DISTVER.zip"
}

function package_fetch()
{
if [ "$TASK" == "fetch" ]
then
  cd "$WORKROOT"
  echo "Fetching sources"
  if [ ! -f $DISTVER.$DISTSUFFIX ]; then 
    curl -fkSLO $DISTFILES
  fi

  # Unpack and organize
  echo "Unpacking"
  $UNPACKCOMD $DISTVER.$DISTSUFFIX
  TASK=patch
fi
}

function package_patch()
{
if [ "$TASK" == "patch" ]
then
  echo "Patching .. "
  cd "$WORKDIR"
  PATCHLEVEL=$1
  if [ -z $1 ]; then
    PATCHLEVEL=0
  fi
  if [ -e "$EXECDIR/patches" ]; then
    for apatch in $EXECDIR/patches/*
    do
      patch -p$PATCHLEVEL < $apatch
    done
  fi
  TASK=build
fi
}

function package_build()
{
if [ "$TASK" == "build" ]
then
  echo "Building"
  cd "$WORKDIR"
  # clean up if we have a previous build
  #if [ -e "Makefile" ]; then
  #  make clean || true
  #  make distclean || true
  #fi
  # configure
  eval $CONFIGURE_CMD
  eval $MAKE_PREFIX make $MYMAKEFLAGS || \
	eval $MAKE_PREFIX make
  TASK=install
fi
}

function package_install()
{
if [ "$TASK" == "install" ]
then
  cd "$WORKDIR"
  make DESTDIR="$DESTDIR" install
  TASK=bundle
fi
}

function package_bundle()
{
if [ "$TASK" == "bundle" ]
then
  echo "Bundling"
  cd "$DESTDIR/$PREFIX"
  zip -r -y -u "$ZIPFILE" * || true
  mv "$DESTDIR" "$ARCHIVEDIR/$DISTVER"
fi
}

# we call configure_dirs here so when the library is included,
# the directories get set up early.
configure_dirs


