#!/bin/sh
# Host end-to-end music/SFX consistency run (needs the game data and a built build_hle/run_game; ~1.5 min): from tools/sh4recomp:  sh tests_snd/run_host.sh [frame_sleep_us] [seconds] [R2_SND_SLOW_NS]
#  - guest at Vita-like speed (frame sleep), AICA pulled in real time by R2_SND_PULL (what the Vita audio thread does), optional slow audio thread (R2_SND_SLOW_NS=9000 ~ the Vita's 10 ms per block)
#  - stream_tl.py: guest stream engine state vs AICA ring voices (no hole >= 0.3 s), torn command blocks
#  - sfx_match.py: guest start commands vs AICA key-ons (1:1; KYONB latch must not drop or duplicate sounds)
set -e
SL=${1:-30000}; T=${2:-90}; SLOW=${3:-0}; A=../../assets/dc; O=${TMPDIR:-/tmp}/r2_snd_host; mkdir -p $O
R2_SND_EV=1 R2_SND_WAV=0 R2_SND_PULL=$O/pull.wav R2_SND_SLOW_NS=$SLOW build_hle/run_game --image $A/1ST_READ.BIN --dcdata $A --frame-sleep-us $SL -q --timeout $T \
  --press START@600 --press START@700 --press START@800 --press START@900 --press START@1000 --press START@1100 --press START@1200 2> $O/ev.txt >/dev/null || true
python3 tests_snd/stream_tl.py $O/ev.txt $O/pull.wav $O/tl.png
python3 tests_snd/sfx_match.py $O/ev.txt
echo "host music/SFX consistency OK ($O/tl.png)"
