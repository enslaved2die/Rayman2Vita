#!/bin/sh
# run from tools/sh4recomp:  sh tests_snd/run.sh
set -e
cc -O1 -DSND_TEST -std=gnu11 -Wall -Wno-unused-function -I. -Ihle -o tests_snd/snd_test tests_snd/snd_test.c hle/snd.c -lm -lpthread
R2_SND_WAV=0 tests_snd/snd_test
# bit-exact old-vs-new engine regression over a recorded guest trace (not stored in the repo: 50+ MB). Record one with
#   R2_SND_REC=/tmp/trace.rec R2_SND_WAV=0 R2_SND_PULL=/tmp/live.wav build_hle/run_game --frames 6500 -q --press START@700 --press START@800 --press START@900 --press A@1000 --press START@1100 --press A@1200
# then:  R2_SND_TRACE=/tmp/trace.rec sh tests_snd/run.sh     (tests_snd/snd_ref.c is the frozen pre-optimisation engine)
if [ -n "$R2_SND_TRACE" ]; then sh tests_snd/cmp.sh "$R2_SND_TRACE"; fi
