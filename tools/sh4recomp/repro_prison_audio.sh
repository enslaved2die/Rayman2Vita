#!/bin/sh
# Reproduce the Prison music stream using the host SH-4 runner (no Vita3K input).
set -eu

ROOT=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
RUNNER="$ROOT/tools/sh4recomp/build_hle/run_game"
LOG=${1:-"$ROOT/tools/sh4recomp/build_hle/prison_music_repro.log"}
SAVE_DIR=$(mktemp -d "${TMPDIR:-/tmp}/r2-prison-audio.XXXXXX")
trap 'rm -rf -- "$SAVE_DIR"' EXIT HUP INT TERM

R2_EXTRA_HOOKS=1 make -C "$ROOT/tools/sh4recomp" -j12 hle USE_CLEANROOM_AUDIO=1

R2_PRISON_TRACE=1 R2_SAVE_DIR="$SAVE_DIR" "$RUNNER" \
  --image "$ROOT/assets/dc/1ST_READ.BIN" \
  --dcdata "$ROOT/assets/dc" \
  --timeout 120 --frames 1800 --fast -v --spy 8c060704 \
  --press START@120+4 \
  --press A@150+4 --press A@250+4 --press A@350+4 --press A@450+4 \
  --press A@550+4 --press A@650+4 --press A@750+4 --press A@850+4 \
  --press A@950+4 --press A@1050+4 --press A@1150+4 --press A@1250+4 \
  --press A@1350+4 --press A@1450+4 --press A@1550+4 \
  >"$LOG" 2>&1

printf 'Full trace: %s\n' "$LOG"
LC_ALL=C awk '
  function value(line, key, fields, count, i) {
    count = split(line, fields, " ")
    for (i = 1; i <= count; i++) if (index(fields[i], key "=") == 1) return substr(fields[i], length(key) + 2)
    return ""
  }
  /prison_dispatch f_8c060704/ { dispatch[++nd] = $0; dispatch_line[nd] = NR }
  /prison_stream_open caller=8c096f04/ {
    opens[++no] = $0
    open_ptr[++np] = value($0, "r4")
  }
  /sdStreamClose: id=3/ { eof_line = NR }
  /prison_dispatch f_8c060704/ { }
  /prison_resource ptr=/ {
    ptr = value($0, "ptr")
    snapshot[ptr] = $0
  }
  /prison_stream_open/ { all_opens[++na] = $0 }
  /stream_open.*(fail|error)|stream busy|open.*(fail|error)/ { failures[++nf] = $0 }
  END {
    for (j = 1; j <= np; j++) target_r4[open_ptr[j]] = 1
    print "Prison descriptor selections by r4 (r7 is shown as an argument, not interpreted as an ID):"
    for (ptr in target_r4) {
      for (i = 1; i <= nd; i++) if (value(dispatch[i], "r4") == ptr) {
        if (!eof_line || dispatch_line[i] < eof_line) before[ptr]++
        else after[ptr]++
      }
      printf "  %s: before EOF=%d, after EOF=%d\n", ptr, before[ptr], after[ptr]
      if (ptr in snapshot) print "    latest descriptor: " snapshot[ptr]
    }
    print "Stream opens:"
    for (i = 1; i <= na; i++) print "  " all_opens[i]
    print "Open/stream failures (if any):"
    for (i = 1; i <= nf; i++) print "  " failures[i]
  }
' "$LOG"
grep -E 'prison_stream_state|\[prison-trace\] file-slot=.*FO\.DCZ|stream_chunk id=3 n=(1|96)( |$)|sdStreamClose: id=3|run_game:' "$LOG" || true
