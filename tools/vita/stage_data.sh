#!/usr/bin/env bash
# Stage the Dreamcast Rayman 2 data for the Vita port and build the VPK.
#
#   tools/vita/stage_data.sh [--dest DIR] [--src DIR] [--no-vpk] [--clean]
#
# Defaults: src = <repo>/assets/dc, dest = Vita3K's ux0:data/rayman2
#           (~/Library/Application Support/Vita3K/Vita3K/fs/ux0/data/rayman2).
# For a real Vita point --dest at a mounted/copied ux0:data/rayman2 (see tools/vita/README.md).
#
# Copies:  DCDATA/ (everything except *.LOG build logs, .DS_Store, symlinks)   1ST_READ.BIN (also inside the VPK)
# Skips :  symlinks (FAT/exFAT cannot hold them) -> recorded in ALIASES.TXT, which the HLE (hle/io.c) turns into in-memory aliases;
#          DPETC/DPTEX/DPWWW/DPFONT/DPSS/*.BIN/*.PVR at the disc root = Dreamcast boot-menu/browser media, never opened by the game.
# The VPK itself holds only the eboot, LiveArea assets and the 0.9 MB 1ST_READ.BIN; the ~900 MB of data is NOT in the VPK.
set -euo pipefail

REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
SRC="$REPO/assets/dc"
DEST="$HOME/Library/Application Support/Vita3K/Vita3K/fs/ux0/data/rayman2"
BUILD_VPK=1; CLEAN=0
while [ $# -gt 0 ]; do
  case "$1" in
    --dest) DEST="$2"; shift 2;;
    --src) SRC="$2"; shift 2;;
    --no-vpk) BUILD_VPK=0; shift;;
    --clean) CLEAN=1; shift;;
    -h|--help) sed -n 2,14p "$0"; exit 0;;
    *) echo "unknown option $1" >&2; exit 2;;
  esac
done

[ -d "$SRC/DCDATA" ] && [ -f "$SRC/1ST_READ.BIN" ] || { echo "missing $SRC/DCDATA or 1ST_READ.BIN" >&2; exit 1; }
mkdir -p "$DEST"

# an old staging made DCDATA a symlink to the source tree: replace it by a real directory
if [ -L "$DEST/DCDATA" ]; then echo "removing stale DCDATA symlink"; rm "$DEST/DCDATA"; fi
if [ "$CLEAN" = 1 ]; then rm -rf "$DEST/DCDATA"; fi

echo "== copying DCDATA -> $DEST/DCDATA"
rsync -rt --no-links --delete \
  --exclude='.DS_Store' --exclude='*.LOG' --exclude='*.log' \
  "$SRC/DCDATA/" "$DEST/DCDATA/"
cp "$SRC/1ST_READ.BIN" "$DEST/1ST_READ.BIN"
mkdir -p "$DEST/Save"

echo "== writing ALIASES.TXT (symlinks that FAT cannot hold)"
python3 -I - "$SRC" "$DEST/ALIASES.TXT" <<'PY'
import os, sys
src, out = sys.argv[1], sys.argv[2]
rows = []
for dp, dn, fn in os.walk(src):
    dn[:] = [d for d in dn if d not in ('DPETC','DPTEX','DPWWW','DPFONT','DPSS')]
    for n in fn + list(dn):
        p = os.path.join(dp, n)
        if os.path.islink(p):
            t = os.path.normpath(os.path.join(dp, os.readlink(p)))
            if os.path.exists(t):
                rows.append((os.path.relpath(p, src), os.path.relpath(t, src)))
with open(out, 'w', newline='\n') as f:
    for l, t in sorted(rows): f.write(f"{l}\t{t}\n")
print(f"{len(rows)} aliases")
PY

echo "== staged:"; du -sh "$DEST/DCDATA"; find "$DEST/DCDATA" -type f | wc -l | xargs echo files:

if [ "$BUILD_VPK" = 1 ]; then
  echo "== building VPK (build_vita_pkg)"
  cd "$REPO"
  # shellcheck disable=SC1091
  source ./env.sh >/dev/null
  make -f Makefile.vita BUILD_DIR=build_vita_pkg -j"$(sysctl -n hw.ncpu 2>/dev/null || nproc)"
  ls -l "$REPO/build_vita_pkg/Rayman2_Recomp.vpk"
fi
