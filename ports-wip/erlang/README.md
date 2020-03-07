To compile Erlang from source, run the following commands. The complete building and installation instructions [can be found here](HOWTO/INSTALL.md).
```
git clone https://github.com/erlang/otp.git
cd otp
./otp_build autoconf
./configure
make
make install
```
Alternatively, you can use [Kerl](https://github.com/kerl/kerl), a script that lets you easily build Erlang with a few commands.

