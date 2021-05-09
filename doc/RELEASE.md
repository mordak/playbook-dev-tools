
******* Preparing a release

The following assets are part of Berrymuch release

* install.sh  - installer script
* clitools.zip - all packages + various files/scripts:
	- packages/*zip
	- env.sh
	- qconf-override.mk
	- pbpkgadd
	- sample_profile

* berrymuch-0.x.tar.gz : tar.gz archive of all source code
* berrymuch-0.x.zip    : zip archive of all source code

******* Steps

* update version in env.sh and install.sh
* rm -rf clitools/* archive/* packages/* work/*
* build assets on a Docker enabled host (make)
* upload the assets to github via the "Releases" page


******* WARNING

be sure to check/modify the Berrymuch version in env.sh !

$ grep Berr env.sh 
echo "Berrymuch v0.5\n"

