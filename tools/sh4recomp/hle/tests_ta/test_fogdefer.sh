#!/bin/bash
# make test-fogdefer DUMPS="dir1 dir2 ..."   (dump dir = frame.bin vram.bin pvrregs.bin pvrfog.bin, e.g. from R2_FRAMES=n R2_DUMP_DIR=dir run_game)
# Verifies the fog-pass optimisations of hle/vita_gl_render.c on the host, with the REAL vita_gl_render.c behind the vitaGL fake:
#  1. R2_NO_FOG_DEFER=1 (fog pass right after its batch, compact colour array): the draw stream digest (R2_GLDIGEST: full state + vertex/colour data of every draw) must equal REFDIG's run of the
#     pre-change code when a reference binary is given (REF=<test_glcount built from the old source>), and is always printed.
#  2. default (deferred fog passes) vs R2_NO_FOG_DEFER=1: the last frame rasterised by the fake's software rasteriser (GLC_RASTER, depth func/mask/blend as set, 8-bit buffer) must be byte-identical.
#  3. control: R2_NO_FOG=1 must differ (proves the rasteriser sees the fog).
set -e
BIN=${BIN:-./test_glcount_fd}; T=${TMPDIR:-/tmp}/fogdefer.$$; mkdir -p $T
cc -O1 -std=gnu11 -Wall -Wno-unused-function -I../.. -I../../gen_fix -I.. -Ifakegl -DCPA_PLATFORM_VITA -frounding-math test_glcount.c fakegl/fakegl.c ../ta.c ../perf.c texmap_glc.o -lm -lpthread -o $BIN
fail=0; n=0
for d in $DUMPS; do
  n=$((n+1)); a="$d/frame.bin $d/vram.bin $d/pvrregs.bin $d/pvrfog.bin 3"
  GLC_SWAP=1 R2_NO_FOG_DEFER=1 R2_GLDIGEST=$T/nd.txt $BIN $a >/dev/null 2>&1
  if [ -n "$REF" ]; then GLC_SWAP=1 R2_GLDIGEST=$T/ref.txt $REF $a >/dev/null 2>&1; cmp -s $T/ref.txt $T/nd.txt || { echo "FAIL digest differs from reference: $d"; fail=1; }; fi
  R2_NO_FOG_DEFER=1 GLC_RASTER=$T/a.raw $BIN $a >/dev/null 2>&1
  GLC_RASTER=$T/b.raw $BIN $a >/dev/null 2>&1
  R2_NO_FOG=1 GLC_RASTER=$T/c.raw $BIN $a >/dev/null 2>&1
  nd=$(cmp -l $T/a.raw $T/b.raw | wc -l | tr -d ' '); nc=$(cmp -l $T/a.raw $T/c.raw | wc -l | tr -d ' ')
  echo "$(basename $d): deferred vs interleaved: $nd differing bytes; control (fog off) differs in $nc bytes"
  [ "$nd" = 0 ] || fail=1
done
rm -rf $T $BIN
[ $fail = 0 ] && echo "fog-defer: OK ($n dumps)" || { echo "fog-defer: FAILED"; exit 1; }
