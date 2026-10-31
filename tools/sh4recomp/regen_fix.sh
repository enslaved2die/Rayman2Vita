#!/bin/sh
# regenerate the HLE-build C sources (gen_fix/) with the merge-point-sound lifter + extra_seeds.txt
cd "$(dirname "$0")" && python3 sh4lift.py --bin ../../assets/dc/1ST_READ.BIN --funcs ../../re_analysis/dc/functions.txt --out gen_fix --stats lift_stats_fix.json --extra-seeds extra_seeds.txt --code-hi 0x8C0F2C7C
