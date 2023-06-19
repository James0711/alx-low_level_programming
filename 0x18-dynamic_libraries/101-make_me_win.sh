#!/bin/bash
wget -P /tmp/ https://raw.github.com/James0711/alx-low_level_programming/master/0x18-dynamic_libraries/nrandim.so
export LD_PRELOAD=/tmp/nrandom.so
