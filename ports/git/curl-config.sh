#!/bin/sh
case "$1" in
  --libs)
    echo "-lcurl"
    ;;
  --version)
    echo "libcurl 7.67.0"
    ;;
esac
exit 0
