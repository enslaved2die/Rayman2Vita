# shared helpers for the VMU host tests (source me). Everything runs in private cwds under $W (default $TMPDIR/r2_vmu_test).
HERE="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
SH4="$(cd "$HERE/../.." && pwd)"                       # tools/sh4recomp
ROOT="$(cd "$SH4/../.." && pwd)"                       # worktree root
RG="${RG:-$SH4/build_hle/run_game}"
ASSETS="${ASSETS:-$ROOT/assets/dc}"
RENDER="$SH4/tools/ta_render.py"
W="${W:-${TMPDIR:-/tmp}/r2_vmu_test}"; mkdir -p "$W"
# go NAME SAVEDIR FRAMES press... : run, log to $W/NAME.log (stdout+stderr), extra env passes through. returns run_game rc
go() { local name=$1 sd=$2 fr=$3; shift 3; local args=(); for p in "$@"; do args+=(--press "$p"); done
  local d="$W/cwd_$name"; rm -rf "$d"; mkdir -p "$d"
  ( cd "$d" && R2_SAVE_DIR="$sd" "$RG" --image "$ASSETS/1ST_READ.BIN" --dcdata "$ASSETS" --fast --frames "$fr" --timeout 300 -v "${args[@]}" > "$W/$name.log" 2>&1 ); }
# shot NAME SAVEDIR FRAME press... : run to FRAME+3 dumping that frame, render $W/NAME.png
shot() { local name=$1 sd=$2 fr=$3; shift 3; local args=(); for p in "$@"; do args+=(--press "$p"); done
  local d="$W/cwd_$name"; rm -rf "$d"; mkdir -p "$d/build_hle"
  ( cd "$d" && R2_FRAME=$fr R2_SAVE_DIR="$sd" "$RG" --image "$ASSETS/1ST_READ.BIN" --dcdata "$ASSETS" --fast --frames $((fr+3)) --timeout 300 -v "${args[@]}" > "$W/$name.log" 2>&1
    python3 "$RENDER" build_hle/frame.bin build_hle/vram.bin "$W/$name.png" >/dev/null 2>&1 ); }
