cp "/accounts/1000/shared/downloads/pbinstall.sh" "pbinstall.sh"

mkdir -p bin

# Write a program to fetch files via url
echo "#!/usr/bin/env python3.2"           >  bin/pwget
echo "import sys"                         >> bin/pwget
echo "from urllib.request import urlopen" >> bin/pwget
echo "url = sys.argv[1]"                  >> bin/pwget
echo "fname = url.split('/')[-1]"         >> bin/pwget
echo "f = open(fname, 'wb')"              >> bin/pwget
echo "f.write(urlopen(url).read())"       >> bin/pwget
echo "f.close()"                          >> bin/pwget
chmod +x bin/pwget

# Write the QNX_CONFIGURATION file
mkdir -p etc/qnxconf/qconfig
CONFFILE="etc/qnxconf/qconfig/qnx_blackberry_native_development_kit_2.1.0.xml"

echo "<?xml version="1.0" ?>"                                     >  $CONFFILE
echo "<qnxSystemDefinition>"                                      >> $CONFFILE
echo "  <installation>"                                           >> $CONFFILE
echo "    <base>$PWD</base>"                                      >> $CONFFILE
echo "    <name>BlackBerry Native SDK for Tablet OS 2.1.0</name>" >> $CONFFILE
echo "    <host>$PWD</host>"                                      >> $CONFFILE
echo "    <target>$PWD/target/qnx6</target>"                      >> $CONFFILE
echo "  </installation>"                                          >> $CONFFILE
echo "</qnxSystemDefinition>"                                     >> $CONFFILE

# unpack
echo "Downloading package..."

