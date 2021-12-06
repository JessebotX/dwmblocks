#!/bin/sh

# setup dwmblocks

loc=${XDG_CONFIG_HOME:-$HOME/.config}

echo "Remember to 'sudo make clean install' for dwmblocks"

[ ! -d $loc ] && mkdir -p $loc
cp status $loc -r && echo "cp status $loc"
