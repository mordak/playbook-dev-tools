playbook-dev-tools
==================

## What's this

This is a set of scripts that will download, compile, and deploy gcc to the Blackberry playbook. No rooting required.

## What you need

You need an install of the [Playbook Dev Tools][pbdevtools]. You're looking for the native C/C++ tools. I used the Native SDK 2.0.1 on OS X 10.6.8 while developing this package. In addition to the playbook dev tools, you will need svn, curl and ruby. These are installed by default on OS X, and most everywhere else, so you should be okay.

On the playbook itself, you'll need a shell application. I used [BG Shell][bgshell]. It's free.

## How it works

This tool will use the playbook cross compiler to build gcc for the playbook. Then it will bundle up the gcc binaries and the playbook libs and header files and deploy them to your playbook over the air. Everything is installed in the playbook shell user's home directory, so you don't need root, and you don't even need to turn on Developer Mode.

## Install Directions

Download and install the [Playbook Dev Tools][pbdevtools]. Remember where you put them.

Download this repository, then unpack and cd into it. Then:

    ./build.sh -b /absolute/path/to/playbook/sdk/bbpb-sdk

This will download gcc from the QNX Community site at [Foundry27][foundry27], then use the playbook dev tools to cross compile gcc targeting the playbook. Then everything will be zipped up into a .zip archive (the playbook doesn't have tar or gzip), and a local ruby webserver will launch and you'll see a message that tells you how to get the binaries onto your playbook. You're looking for something like this:

    ---- Direct your playbook browser to: http://192.168.0.121:8888/pbinstall.sh
    ---- Save the file, then in the playbook shell, execute: sh /accounts/1000/shared/downloads/pbinstall.sh

Then you go to your playbook, and do what it says. So you direct your browser to the pbinstall.sh file, and save it when prompted. It will be saved to your playbook downloads folder, which is at `/accounts/1000/shared/downloads/`. Then you just have to exec the installer script:

    sh /accounts/1000/shared/downloads/pbinstall.sh

And this will pull down the playbook gcc binaries, and unzip/install them into the current user's home directory. Once the pbinstall.sh script exits, a new login shell will open and gcc should be in your path. Have fun.

Once you have installed everything on the playbook, you can shut down the ruby webserver on your local machine with ^C.

## Tips

If something goes wrong during the compiling / building phase, after fixing it you can tell the build.sh script to pick up where it left off by passing the appropriate task, so:

    ./build.sh -t TASK

where TASK is one of [fetch | patch | build | install | bundle | deploy].

If you don't get a shell with your .profile processed, launch a login shell:

    sh -l

The playbook also ships with ksh (but not bash), so you could use ksh instead of sh.

## Uninstalling

If you want to uninstall everything off of the playbook, you can run the included uninstall.sh script, which will delete all of the executables, libraries, etc that are in $HOME.

    sh uninstall.sh

This will leave the pbinstall.sh script, which you can then run again if you'd like to reinstall everything. Be sure to fire up the web server again: `./build.sh -t deploy`

Alternately, I imagine that just unstalling the shell application from the playbook will remove everything too.

## Bugs

This will build a statically linked gcc, since the dynamically linked version made the playbook ldd angry. Any hints on how to sort this out would be welcome.

We are not yet building g++, as this failed with a namespace issue in strings.h - I am sure this is fixable, I just haven't got it yet.

## Thanks

Thanks to the folks at RIM/QNX/Foundry27 for doing the heavy lifting on porting gcc to QNX, and making their repo available for free. Building the mainline gcc for the playbook was hard, but building the Foundry27 version was pretty straightforward.

## Future Work

Getting the QNX port of NetBSD's pkgsrc installed on the playbook, and from there filling out the commands available in the shell. Ideally, I would like a normal unix environment on the playbook, which would make a nice little workstation.

## Disclaimer

This software is provided with no warranty of any kind, may not do what you want, and may not work for you. By installing a compiler onto your playbook, you may be empowered to make a mess of it - use at your own risk.

I am not a gcc hacker by any stretch, so there may be better ways to do all of this. I am happy to take feedback, suggestions, and will field pull requests. Please be kind, I'm just a human.

## License

You may do whatever you like with this code, provided any copyright notices are preserved. If you are from RIM/QNX, please feel free to make this work irrelevant by making playbook dev tools available through your developer channel. This will save me significant work, and you will certainly do a better job.


[pbdevtools]: https://developer.blackberry.com/native/download/
[bgshell]: https://appworld.blackberry.com/webstore/content/87835/?lang=en
[foundry27]: http://community.qnx.com/sf/sfmain/do/home
