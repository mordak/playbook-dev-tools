PATH="$HOME/bin:$HOME/sbin:$HOME/usr/pkg/bin:$HOME/usr/pkg/sbin:$PATH"
LD_LIBRARY_PATH="$HOME/lib:$LD_LIBRARY_PATH"
MAKEFLAGS="-I$HOME/include"
CS_LIBPATH="$HOME/usr/pkg/lib:$CS_LIBPATH"
MANPATH="$HOME/man:$HOME/share/man:$HOME/usr/pkg/share/man:$MANPATH"

export PATH LD_LIBRARY_PATH MAKEFLAGS CS_LIBPATH MANPATH

QNX_TARGET="$HOME/target/qnx6"
QNX_HOST="$HOME"
QNX_CONFIGURATION="$HOME/etc/qnxconf"
MAKEFLAGS="-I$QNX_TARGET/usr/include"
LD_LIBRARY_PATH="$HOME/usr/lib:$LD_LIBRARY_PATH"
PATH="$QNX_HOST/usr/bin:$PATH"

export QNX_TARGET QNX_HOST QNX_CONFIGURATION MAKEFLAGS LD_LIBRARY_PATH PATH

alias man='man -C "$HOME/lib/man.conf"'
alias ls='ls --color=auto'

GROFF_FONT_PATH="$HOME/share/groff/1.19.2/font:$HOME/share/groff/site-font"
GROFF_TMAC_PATH="$HOME/share/groff/1.19.2/tmac:$HOME/share/groff/site-tmac"
export GROFF_FONT_PATH GROFF_TMAC_PATH
