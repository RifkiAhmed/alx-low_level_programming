#!/bin/bash
curl -o /win_giga.so https://www.github.com/AhmedSeeker/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win_giga.so
export LD_PRELOAD=/win_giga.so
