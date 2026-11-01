#!/bin/sh
# usage (from tools/sh4recomp): sh tests_snd/cmp.sh <trace.rec>  -- builds replay_new from hle/snd.c, compares with the frozen reference engine (tests_snd/snd_ref.c) in both modes
set -e
T=${1:?trace}; D=${TMPDIR:-/tmp}/snd_cmp.$$; mkdir -p $D; export R2_SND_WAV=0
cc -O2 -DSND_TEST -std=gnu11 -I. -Ihle -o tests_snd/replay_ref tests_snd/replay.c tests_snd/snd_ref.c -lm -lpthread
cc -O2 -DSND_TEST -std=gnu11 -I. -Ihle -o tests_snd/replay_new tests_snd/replay.c hle/snd.c -lm -lpthread
for m in 44 48; do
  tests_snd/replay_ref $T $m $D/ref$m.pcm; tests_snd/replay_new $T $m $D/new$m.pcm
  if cmp -s $D/ref$m.pcm $D/new$m.pcm; then echo "mode $m: BIT-IDENTICAL"; else echo "mode $m: MISMATCH"; cmp $D/ref$m.pcm $D/new$m.pcm | head -2; rm -rf $D; exit 1; fi
done
rm -rf $D
