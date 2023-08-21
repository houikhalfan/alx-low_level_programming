#!/bin/bash
wget -P /tmp https://github.com/houikhalfan/alx-low_level_programming/raw/main/0x18-dynamic_libraries/lib.so
export LD_PRELOAD=/tmp/lib.so
