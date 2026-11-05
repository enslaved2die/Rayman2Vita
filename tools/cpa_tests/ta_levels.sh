#!/bin/sh
# ta_levels.sh: capture several scenes (different frames / camera poses) of each level with ta_capture, then compare all of them.
#   ta_levels.sh ASSETS "Learn_10 Jail_10 ..." [REL=300,500,800,1100] [N=2] [WALK=1]
# Output: build/ta2_<LEVEL>/ (captures, 2 x 16 MiB RAM + scene dumps per window), build/ta2_<LEVEL>.log (capture log), summary on stdout.
ASSETS=${1:?ASSETS}
LEVELS=${2:?levels}
REL=${REL:-300,500,800,1100}
N=${N:-2}
WALK=${WALK:-1}
cd "$(dirname "$0")" || exit 1
mkdir -p build
for L in $LEVELS; do
    sv="build/sv_$L"; mkdir -p "$sv"      # guest save dir (kept; small)
    R2_SAVE_DIR=$sv ./build/ta_capture --image "$ASSETS/1ST_READ.BIN" --dcdata "$ASSETS" --out "build/ta2_$L" --level "$L" --rel "$REL" --walk "$WALK" --n "$N" > "build/ta2_$L.log" 2>&1
    echo "== $L capture rc=$? ($(grep -c 'dumped frame' "build/ta2_$L.log") scenes dumped; $(grep 'level name' "build/ta2_$L.log" | head -1 | cut -c1-80))"
    ./build/ta_compare "build/ta2_$L" "$ASSETS/DCDATA" --level "$L" --all | grep -E '^(SCENE|LEVEL)'
done
