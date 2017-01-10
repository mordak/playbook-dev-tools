BB10 Native Tools (née playbook-dev-tools)
==================

## What's this

This is a set of scripts that will download, compile, and deploy gcc and some other tools to a BB10 device. No rooting required.

## What you need

You need an install of the [Blackberry Native SDK][pbdevtools]. You're looking for the native C/C++ tools. I most recently used the 10.3.0 SDK on ubuntu to develop this repo, but it should also work on OS X without much work. In addition to the native sdk tools, you will need svn, curl, tar, gzip, bzip2 and ruby. These are either already installed or easily available everywhere, so you should be okay. On ubuntu I needed to add packages for git, subversion, curl, texinfo, autopoint, m4, autoconf, groff and ruby. On OS X, you'll need gettext, autoconf and automake packages to build findutils, and prior to building groff or man set LC_ALL=C in your shell.

You may pass custom make flags by exporting MYMAKEFLAGS environment variable. For example, to considerably speedup build process you may pass the number of make workers by setting MYMAKEFLAGS="-jN", where is N is the number of parallel working make processes.

On the BB10 device itself, you'll need a shell application. I used [Term48][term48], but a more widely available option is [BG Shell][bgshell].

## How it works

This tool will use the BlackBerry cross compiler to build gcc for BB10. Then it will bundle up the gcc binaries and the BB10 libs and header files and deploy them to your device over the air. You can control where things are installed with the -p (prefix) option, which defaults to /accounts/1000/shared/documents/clitools. You do not need root on the device, and don't even need to turn on developer mode. 

## Note for x86_64 users

Note that since the BlackBerry SDK is 32 bit (even the 64 bit linux one) you may have trouble getting it working under a 64 bit linux distro. It might be simpler to just use a 32 bit distro and the 32 bit version of the Blackberry Native SDK. 

If you still want to use a 64 bit desktop system for the build, you will probably need some multilib support. You may run into problems when `build.sh`tries to source the SDK. Add missing `lib32`'s according to your need.

## Install Directions

Download and install the [Blackberry Native SDK][pbdevtools]. Remember where you installed it.

Download this repository to your desktop somewhere, then unpack and cd into it. Then:

    ./build.sh -b /absolute/path/to/native/sdk/bbndk/

This will use the native sdk tools to cross compile the bundled gcc targeting BB10. Then everything will be zipped up into a .zip archive. The same thing happens for coreutils, make, grep, etc. Then a local webserver will launch and you'll see a message that tells you how to get the binaries onto your device. You're looking for something like this:

    ---- Direct your BB10 device browser to: http://192.168.0.121:8888/pbinstall.sh
    ---- Save the file, then in the shell, execute: sh /accounts/1000/shared/downloads/pbinstall.sh

Then you go to your device, and do what it says. So direct your browser to the pbinstall.sh file, and save it when prompted. It will be saved to your downloads folder, which is at `/accounts/1000/shared/downloads/`. Then you just have to exec the installer script:

    sh /accounts/1000/shared/downloads/pbinstall.sh

And this will pull down the gcc binaries, and unzip/install them on your device. If you didn't specify a prefix, then the binaries will be installed at /accounts/1000/shared/documents/clitools. Once the pbinstall.sh script exits you just need to source the env.sh file, and your $PATH and whatnot will be set correctly. The installer will try to do this for you, but won't clobber your existing .profile. 

Once you have installed everything on your device, you can shut down the webserver on your desktop machine with ^C.

## Tips

This package includes a mirror of the gcc source from the QNX Community site at [Foundry27][foundry27]. If you pass the gcc/build.sh the fetch task, it will check out a fresh copy via svn. You shouldn't need to do this, but it's there if you need it.

All of the parameters you pass to the build scripts are cached in the conf/ directory, so you should only need to specify -b the first time. Specifying these flags again will overwrite the cached values.

Each package is contained in its own directory, with its own build script. You can execute these build scripts on their own, so if something goes wrong during the compiling / building phase, you can cd into the relevant directory and, after fixing the problem, you can tell the build.sh script to pick up where it left off by passing the appropriate task, so:

    ./build.sh -t TASK

where TASK is one of [fetch | patch | build | install | bundle]. The top level build.sh has a deploy task that you can use to relaunch the local webserver.

## Uninstalling

If you want to uninstall everything, just delete the contents of the prefix directory where things were installed.

## Bugs

It is quite possible that some of the binaries don't work quite right, due to the patches I've applied to get the packages to compile. If you find one that's broken, let me know and I'll try to sort it out. 

## Thanks

Thanks to the folks at RIM/QNX/Foundry27 for doing the heavy lifting on porting gcc to QNX, and making their repo available for free. Building the mainline gcc for the playbook was hard, but building the Foundry27 version was pretty straightforward.

Thanks to BGmot for contributions making the shared gcc build work, and the ip choosing bits.

Thanks to [dukzcry][dukzcry-bb10-native-tools] for updating everything to work with the BB10 SDK, making g++ work, and polishing the on-device experience.

## Disclaimer

This software is provided with no warranty of any kind, may not do what you want, and may not work for you. By installing a compiler onto your device, you may be empowered to make a mess of it - use at your own risk.

I am not a gcc hacker by any stretch, so there may be better ways to do all of this. I am happy to take feedback, suggestions, and will field pull requests. Please be kind, I'm just a human.

## License

You may do whatever you like with this code, provided any copyright notices are preserved. If you are from RIM/QNX, please feel free to make this work irrelevant by making playbook dev tools available through your developer channel. This will save me significant work, and you will certainly do a better job.


[pbdevtools]: https://developer.blackberry.com/native/download/
[bgshell]: https://appworld.blackberry.com/webstore/content/87835/?lang=en
[term48]: https://github.com/mordak/Term48
[foundry27]: http://community.qnx.com/sf/sfmain/do/home
[dukzcry-bb10-native-tools]: https://github.com/repos-holder/bb10-native-tools
