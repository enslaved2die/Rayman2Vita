#!/bin/sh
# run from tools/sh4recomp:  sh tests_snd/run.sh
set -e
cc -O1 -DSND_TEST -std=gnu11 -Wall -Wno-unused-function -I. -Ihle -o tests_snd/snd_test tests_snd/snd_test.c hle/snd.c -lm -lpthread
R2_SND_WAV=0 tests_snd/snd_test
