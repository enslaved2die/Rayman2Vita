#!/bin/sh
# Build the performance-experiment VPK variants (Makefile.vita VARIANT=..., see re_analysis/dc/notes_perf_variants.md).
# usage (from the worktree root):  sh tools/vita_variants.sh [variant ...]      default: all variants
# Each variant is built in build_vita_var<id> (id = digits/letter after the leading v: v3a_O3_all -> build_vita_var3a) and its VPK is copied to build_vita_variants/Rayman2_<variant>.vpk
set -e
cd "$(dirname "$0")/.."
. ./env.sh >/dev/null
ALL="v0_base v1_noaudio v1b_armonly v2a_cpu_any v2b_cpu_shared1 v2c_cpu_g2a1 v2d_cpu_g1a0 v3a_O3_all v3b_Os_all v3c_O2_oscold v3d_O3_oscold v3e_O3_packed v3f_O2_oscold_packed v4_subcheck v5_scale75"
[ $# -gt 0 ] && LIST="$*" || LIST="$ALL"
JOBS=${JOBS:-15}
mkdir -p build_vita_variants
# the stub generator (mkstubs.py) writes into tools/sh4recomp/build_hle: run it once, here, and seed every build dir with the result (avoids concurrent runs and a stale copy)
make -f Makefile.vita BUILD_DIR=build_vita_var0 stubs >/dev/null
for v in $LIST; do
  id=$(echo "$v" | sed 's/^v\([0-9a-z]*\)_.*/\1/')
  d=build_vita_var$id
  mkdir -p "$d"; cp -p build_vita_var0/rename.sed build_vita_var0/hook_stubs.c "$d"/ 2>/dev/null || true
  echo "=== $v -> $d"
  make -f Makefile.vita -j"$JOBS" VARIANT="$v" BUILD_DIR="$d" > "$d/build.log" 2>&1 || { echo "BUILD FAILED: $v (see $d/build.log)"; tail -20 "$d/build.log"; exit 1; }
  cp "$d/Rayman2_Recomp.vpk" "build_vita_variants/Rayman2_$v.vpk"
  printf '%s  ' "$v"; arm-vita-eabi-size "$d/rayman2_recomp.elf" | tail -1
done
