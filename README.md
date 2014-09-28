playbook-dev-tools
==================

## What's this

This is a set of scripts that will download, compile, and deploy gcc and some other tools to the Blackberry Playbook. No rooting required.

## What you need

You need an install of the [Blackberry Native SDK][pbdevtools]. You're looking for the native C/C++ tools. I used the Native SDK 2.1.0 on OS X 10.6.8 while developing this package. In addition to the native sdk tools, you will need svn, curl, tar, gzip, bzip2 and ruby. These are installed by default on OS X, and most everywhere else, so you should be okay. For building of findutils you'll need gettext, autoconf and automake packages installed. Prior to building groff or man on OS X, set LC_ALL=C in your shell.

On the playbook itself, you'll need a shell application. I used [BG Shell][bgshell]. It's free.

## How it works

This tool will use the blackberry cross compiler to build gcc for the playbook. Then it will bundle up the gcc binaries and the playbook libs and header files and deploy them to your playbook over the air. Everything is installed in the playbook shell user's home directory, so you don't need root, and you don't even need to turn on Developer Mode.

## Install Directions

Download and install the [Blackberry Native SDK][pbdevtools]. Remember where you installed it.

Download this repository to your desktop somewhere, then unpack and cd into it. Then:

    ./build.sh -b /absolute/path/to/native/sdk/bbndk/

This will use the native sdk tools to cross compile the bundled gcc targeting the playbook. Then everything will be zipped up into a .zip archive (the playbook doesn't have tar or gzip). The same thing happens for coreutils, make, grep, etc. Then a local ruby webserver will launch and you'll see a message that tells you how to get the binaries onto your playbook. You're looking for something like this:

    ---- Direct your playbook browser to: http://192.168.0.121:8888/pbinstall.sh
    ---- Save the file, then in the playbook shell, execute: sh /accounts/1000/shared/downloads/pbinstall.sh

Then you go to your playbook, and do what it says. So direct your playbook browser to the pbinstall.sh file, and save it when prompted. It will be saved to your playbook downloads folder, which is at `/accounts/1000/shared/downloads/`. Then you just have to exec the installer script:

    sh /accounts/1000/shared/downloads/pbinstall.sh

And this will pull down the playbook gcc binaries, and unzip/install them into the current user's home directory. Once the pbinstall.sh script exits, a new login shell will open and gcc should be in your path. Have fun.

Once you have installed everything on the playbook, you can shut down the ruby webserver on your desktop machine with ^C.

## Tips

This package includes a mirror of the gcc source from the QNX Community site at [Foundry27][foundry27]. If you pass the gcc/build.sh the fetch task, it will check out a fresh copy via svn. You shouldn't need to do this, but it's there if you need it.

All of the parameters you pass to the build scripts are cached in the conf/ directory, so you should only need to specify -b the first time. Specifying these flags again will overwrite the cached values.

Each package is contained in its own directory, with its own build script. You can execute these build scripts on their own, so if something goes wrong during the compiling / building phase, you can cd into the relevant directory and, after fixing the problem, you can tell the build.sh script to pick up where it left off by passing the appropriate task, so:

    ./build.sh -t TASK

where TASK is one of [fetch | patch | build | install | bundle]. The top level build.sh has a deploy task that you can use to relaunch the local ruby webserver.

## Uninstalling

If you want to uninstall everything off of the playbook, you can run the included uninstall.sh script, which will delete all of the executables, libraries, etc that are in $HOME.

    sh uninstall.sh

This will leave the pbinstall.sh script, which you can then run again if you'd like to reinstall everything. Be sure to fire up the web server again: `./build.sh -t deploy`

Alternately, I imagine that just unstalling the shell application from the playbook will remove everything too.

## Bugs

It is quite possible that some of the binaries don't work quite right, due to the patches I've applied to get the packages to compile. If you find one that's broken, let me know and I'll try to sort it out. 

## Thanks

Thanks to the folks at RIM/QNX/Foundry27 for doing the heavy lifting on porting gcc to QNX, and making their repo available for free. Building the mainline gcc for the playbook was hard, but building the Foundry27 version was pretty straightforward.

Thanks to BGmot for contributions making the shared gcc build work, and the ip choosing bits.

## Future Work

Getting some kind of package manager running on the playbook. I've experimented with the QNX port of NetBSD's pkgsrc, but it doesn't work well on the playbook because of the way App 'users' are done. Ideally, I would like a normal unix environment on the playbook, which would make a nice little workstation.

## Disclaimer

This software is provided with no warranty of any kind, may not do what you want, and may not work for you. By installing a compiler onto your playbook, you may be empowered to make a mess of it - use at your own risk.

I am not a gcc hacker by any stretch, so there may be better ways to do all of this. I am happy to take feedback, suggestions, and will field pull requests. Please be kind, I'm just a human.

## License

You may do whatever you like with this code, provided any copyright notices are preserved. If you are from RIM/QNX, please feel free to make this work irrelevant by making playbook dev tools available through your developer channel. This will save me significant work, and you will certainly do a better job.


[pbdevtools]: https://developer.blackberry.com/native/download/
[bgshell]: https://appworld.blackberry.com/webstore/content/87835/?lang=en
[foundry27]: http://community.qnx.com/sf/sfmain/do/home
