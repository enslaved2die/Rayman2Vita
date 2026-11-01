#!/bin/bash
# Host integration tests of the virtual VMU: runs the real recompiled game (run_game --fast) through title -> menus -> save/load and asserts on
# guest-visible behaviour (requested text ids, store files, byte comparisons). PNGs of the key screens are written to $W/*.png (VIEW them).
# usage: run.sh [--fast]   env: W=workdir RG=run_game ASSETS=assets/dc FLYCAST_VMU=<17707D_vmu_save_A1.bin> (optional: enables the Flycast byte comparisons)
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"; . "$HERE/lib.sh"
TOOL="$ROOT/tools/vmu_tool.py"
FLYCAST_VMU="${FLYCAST_VMU:-$HOME/Library/Application Support/Flycast/data/17707D_vmu_save_A1.bin}"
rm -rf "$W"; mkdir -p "$W"
pass=0; fail=0
ok()   { pass=$((pass+1)); echo "  ok   $*"; }
bad()  { fail=$((fail+1)); echo "  FAIL $*"; }
chk()  { if eval "$1"; then ok "$2"; else bad "$2   [$1]"; fi; }
# texts LOG ID: was text ID requested after guest frame 100 (the boot preloads every string at frame 1)?
texts() { awk -v id="$2" '/^\[vmu\] f[0-9]+ text /{ f=substr($2,2)+0; if (f>=100 && $4==id) n++ } END{exit !n}' "$1"; }
export R2_VMU_TRACE=1
# sequences (frames); the menu ignores input before ~f700, presses need a gap of 60+ frames
BLANK_MENU="START@400+40"
NEWGAME_BLANK="START@400+40 DOWN@700+4 DOWN@760+4 A@820+4 A@1000+4 A@1100+4 A@1200+4 A@1300+4"   # NEW GAME (LOAD greyed: 2 downs wrap to it), 3 letters, 'created' ack
LOAD3="START@400+40 DOWN@700+4 A@780+4 A@880+4 A@1000+4"                                          # populated store: DOWN -> LOAD, list, load slot, ack
echo "== T1 blank store: nested missing dir is created, default file written, no prompt, MAIN MENU without the web entry"
S="$W/s_blank/x/y/A1"; go t1 "$S" 900 $BLANK_MENU; rc=$?
chk "[ $rc -eq 0 ]" "run_game exit 0 (rc=$rc)"
chk "[ -d '$S' ]" "missing directory tree auto-created"
chk "[ \$(wc -c < '$S/RAYMAN_2.NW_') -eq 1024 ]" "RAYMAN_2.NW_ created by the game itself (2 blocks)"
for id in 413 414 415 416 417 421 422 438 439; do chk "! texts $W/t1.log $id" "insert/choose-VMS/space prompt text $id never requested"; done
chk "texts $W/t1.log 359" "MAIN MENU text requested"
chk "! awk '/VIBRATION text|text 434/ && /f[0-9]+ /{f=substr(\$2,2)+0; if (f>=100) n++} END{exit !n}' $W/t1.log" "vibration pack question (434) never requested"
chk "grep -aq 'auto-select VMU 1' $W/t1.log" "device selected silently"
chk "python3 $TOOL check '$S' >/dev/null" "VMS CRC16 of the created file ok"
chk "python3 $TOOL dump '$S/RAYMAN_2.NW_' | grep -q 'sum check ok' && python3 $TOOL dump '$S/RAYMAN_2.NW_' | grep -q 'payload 247 bytes'" "payload decodes: 247 plain bytes, game checksum ok"
if [ -f "$FLYCAST_VMU" ]; then
  mkdir -p "$W/fly"; python3 "$TOOL" import "$FLYCAST_VMU" "$W/fly" >/dev/null
  chk "cmp -s '$S/RAYMAN_2.NW_' '$W/fly/RAYMAN_2.AAA'" "new-game file == the RAYMAN_2.AAA that Flycast's VMU contains (byte for byte)"
else echo "  skip Flycast byte comparison (no $FLYCAST_VMU)"; fi
shot t1s "$W/s_blank/x/y/A1" 700 $BLANK_MENU; echo "  render: $W/t1s.png (MAIN MENU: NEW GAME / LOAD(greyed) / OPTIONS)"

echo "== T2 New Game -> save: letters AAA, file written, default NW_ replaced"
S="$W/s_new"; go t2 "$S" 1700 $NEWGAME_BLANK; rc=$?
chk "[ $rc -eq 0 ]" "run_game exit 0"
chk "[ -f '$S/RAYMAN_2.AAA' ] && [ ! -e '$S/RAYMAN_2.NW_' ]" "RAYMAN_2.AAA written, RAYMAN_2.NW_ gone"
chk "texts $W/t2.log 20530 || grep -aq 'text 20530' $W/t2.log" "letter chooser shown"
chk "grep -aq 'wrote RAYMAN_2.AAA (2 blocks), 198 free' $W/t2.log" "write logged: 2 blocks, 198 free"
chk "python3 $TOOL check '$S' >/dev/null" "CRC16 ok"
[ -f "$W/fly/RAYMAN_2.AAA" ] && chk "cmp -s '$S/RAYMAN_2.AAA' '$W/fly/RAYMAN_2.AAA'" "new game save == Flycast RAYMAN_2.AAA byte for byte"
rm -rf "$W/s_shot"; shot t2s "$W/s_shot" 1250 $NEWGAME_BLANK; echo "  render: $W/t2s.png ('Game created successfully')"

echo "== T3 second process on the same store: LOAD enabled, slot listed, loads"
cp -Rp "$W/s_new" "$W/s_new2"; S="$W/s_new2"; go t3 "$S" 1500 $LOAD3; rc=$?
chk "[ $rc -eq 0 ]" "run_game exit 0"
chk "grep -aq 'store $S: 1 file(s)' $W/t3.log" "restart finds the saved file"
chk "texts $W/t3.log 406" "'loaded successfully' (406) shown"
for id in 409 419 420; do chk "! texts $W/t3.log $id" "load error text $id not shown"; done
chk "cmp -s '$W/s_new/RAYMAN_2.AAA' '$S/RAYMAN_2.AAA'" "loading does not alter the file"
shot t3a "$S" 1000 START@400+40 DOWN@700+4 A@780+4; echo "  render: $W/t3a.png (LOAD MENU slot list)"
shot t3b "$S" 960 $LOAD3; echo "  render: $W/t3b.png (loaded)"
shot t3c "$S" 700 $BLANK_MENU; echo "  render: $W/t3c.png (MAIN MENU: LOAD enabled)"

echo "== T4 corrupt file (flipped payload bytes) -> the game's own error path, no crash"
cp -Rp "$W/s_new" "$W/s_corrupt"; S="$W/s_corrupt"
python3 - "$S/RAYMAN_2.AAA" <<'P'
import sys
d=bytearray(open(sys.argv[1],'rb').read())
for i in range(0x290,0x2A0): d[i]^=0xFF
open(sys.argv[1],'wb').write(d)
P
go t4 "$S" 1500 $LOAD3; rc=$?
chk "[ $rc -eq 0 ]" "run_game survives (exit $rc)"
chk "texts $W/t4.log 439 || texts $W/t4.log 420 || texts $W/t4.log 419 || texts $W/t4.log 409" "game reports the corrupted file itself (439 'VMS is defective' / 420 / 419 / 409)"
chk "! texts $W/t4.log 406" "does not claim 'loaded successfully'"
shot t4s "$S" 1100 $LOAD3; echo "  render: $W/t4s.png"
# truncated to a single block, header-only garbage
cp -Rp "$W/s_new" "$W/s_trunc"; head -c 700 "$W/s_new/RAYMAN_2.AAA" > "$W/s_trunc/RAYMAN_2.AAA"
go t4b "$W/s_trunc" 1500 $LOAD3; rc=$?; chk "[ $rc -eq 0 ]" "truncated file: no crash (exit $rc)"
printf 'garbage' > "$W/s_trunc/RAYMAN_2.AAA"; go t4c "$W/s_trunc" 1500 $LOAD3; rc=$?; chk "[ $rc -eq 0 ]" "7-byte garbage file: no crash (exit $rc)"

echo "== T5 tiny card (3 blocks): the game's own 4-block rule says no (-3), no crash, nothing written; 1-block card likewise"
S="$W/s_full"; R2_VMU_BLOCKS=3 go t5 "$S" 900 $BLANK_MENU; rc=$?
chk "[ $rc -eq 0 ]" "run_game exit 0"
chk "grep -aq 'auto-select VMU 1 (input init) -> -3' $W/t5.log" "device select returns -3 (not enough blocks, as on a real 3-block card)"
chk "[ -z \"\$(ls '$S' 2>/dev/null)\" ]" "no file created on the tiny card"
R2_VMU_BLOCKS=3 shot t5s "$S" 700 $BLANK_MENU; echo "  render: $W/t5s.png"
S="$W/s_one"; R2_VMU_BLOCKS=1 go t5c "$S" 1700 $NEWGAME_BLANK; rc=$?; chk "[ $rc -eq 0 ]" "1-block card: New Game flow runs, no crash (exit $rc)"
echo "== T5b card with exactly 4 blocks: works (the 4-block rule of the game)"
S="$W/s_four"; R2_VMU_BLOCKS=4 go t5b "$S" 900 $BLANK_MENU; chk "grep -aq 'auto-select VMU 1 (input init) -> 1' $W/t5b.log && [ -f '$S/RAYMAN_2.NW_' ]" "4-block card accepted, default file written"
echo "== T5d host write failure (read-only save dir): BUP write error -> the game's 'file has not been saved' (418), no crash, existing file intact"
if [ "$(id -u)" != 0 ]; then
  S="$W/s_ro"; cp -Rp "$W/s_new" "$S"; chmod 555 "$S"
  go t5d "$S" 1300 START@400+40 DOWN@700+4 DOWN@760+4 A@820+4 DOWN@900+4 DOWN@960+4 A@1020+4; rc=$?; chmod 755 "$S"
  chk "[ $rc -eq 0 ] && grep -aq 'FAILED: BUP error 0xffffff40' $W/t5d.log" "write failure reported to the game as WRITE_ERROR, run survives"
  chk "texts $W/t5d.log 418 || texts $W/t5d.log 408" "game shows its own 'not saved' text (418/408)"
  chk "cmp -s '$S/RAYMAN_2.AAA' '$W/s_new/RAYMAN_2.AAA' && [ ! -e '$S/RAYMAN_2.SY_' ] && [ -z \"\$(ls -A '$S' | grep -v '^RAYMAN_2.AAA\$')\" ]" "existing file untouched, nothing else created"
fi

echo "== T6 R2_VMU=0: original behaviour (insert-VMS prompt 414), nothing created"
S="$W/s_off"; R2_VMU=0 go t6 "$S" 900 $BLANK_MENU; rc=$?
chk "[ $rc -eq 0 ]" "run_game exit 0"
chk "texts $W/t6.log 414" "'insert a VMS' prompt (414) shown"
chk "[ ! -e '$S' ]" "no store directory created"

echo "== T7 power loss while overwriting RAYMAN_2.SY_ (SAVE OPTIONS) leaves the old file intact and the next boot recovers"
if [ -f "$FLYCAST_VMU" ]; then
  S="$W/s_crash"; mkdir -p "$S"; python3 "$TOOL" import "$FLYCAST_VMU" "$S" >/dev/null; cp -p "$S/RAYMAN_2.SY_" "$W/sy.orig"
  SAVEOPT="START@400+40 DOWN@700+4 DOWN@760+4 A@820+4 DOWN@900+4 DOWN@960+4 A@1020+4"
  R2_VMU_TEST_CRASH=tmp go t7 "$S" 1500 $SAVEOPT; rc=$?
  chk "[ $rc -eq 77 ]" "process died inside the write (exit $rc)"
  chk "cmp -s '$S/RAYMAN_2.SY_' '$W/sy.orig'" "old RAYMAN_2.SY_ byte-identical after the simulated power loss"
  chk "[ -f '$S/.RAYMAN_2.SY_.tmp' ]" "half-written temp file left behind"
  go t7b "$S" 1000 $LOAD3; rc=$?
  chk "[ $rc -eq 0 ] && grep -aq 'removed stale temp file' $W/t7b.log && [ ! -e '$S/.RAYMAN_2.SY_.tmp' ]" "next boot removes the stale temp file"
  chk "texts $W/t7b.log 406" "and the save still loads"
  R2_VMU_SAFE_RENAME=1 R2_VMU_TEST_CRASH=mid go t7c "$S" 1500 $SAVEOPT; rc=$?
  chk "[ $rc -eq 77 ] && [ ! -e '$S/RAYMAN_2.SY_' ]" "safe-rename sequence killed between the renames: original parked in .bak (exit $rc)"
  go t7d "$S" 1000 $LOAD3; chk "grep -aq 'restored RAYMAN_2.SY_ from its .bak' $W/t7d.log && cmp -s '$S/RAYMAN_2.SY_' '$W/sy.orig'" "next boot restores the original from .bak"
  go t7e "$S" 1500 $SAVEOPT; chk "! cmp -s '$S/RAYMAN_2.SY_' '$W/sy.orig' && grep -aq 'wrote RAYMAN_2.SY_' $W/t7e.log" "normal SAVE OPTIONS then overwrites SY_ (new content)"
else echo "  skip (needs FLYCAST_VMU)"; fi

echo "== T8 Flycast image import -> game LOAD works -> export is byte-identical for the files"
if [ -f "$FLYCAST_VMU" ]; then
  S="$W/s_imp"; mkdir -p "$S"; python3 "$TOOL" import "$FLYCAST_VMU" "$S" >/dev/null
  go t8 "$S" 1500 $LOAD3; rc=$?
  chk "[ $rc -eq 0 ] && texts $W/t8.log 406" "imported Flycast card: LOAD -> 'loaded successfully'"
  chk "grep -aq 'store $S: 2 file(s), 4/200 blocks used' $W/t8.log" "2 files, 4 blocks used (196 free like the card)"
  chk "cmp -s '$S/RAYMAN_2.AAA' '$W/fly/RAYMAN_2.AAA' && cmp -s '$S/RAYMAN_2.SY_' '$W/fly/RAYMAN_2.SY_'" "game run does not modify imported files"
  shot t8s "$S" 1000 START@400+40 DOWN@700+4 A@780+4; echo "  render: $W/t8s.png (LOAD MENU 'AAA 00.0%')"
  python3 "$TOOL" export "$S" "$W/exp.bin" >/dev/null; mkdir -p "$W/re"; python3 "$TOOL" import "$W/exp.bin" "$W/re" >/dev/null
  chk "cmp -s '$W/re/RAYMAN_2.AAA' '$W/fly/RAYMAN_2.AAA' && cmp -s '$W/re/RAYMAN_2.SY_' '$W/fly/RAYMAN_2.SY_'" "export -> re-import: file contents byte-identical to the original Flycast image's files"
  python3 "$TOOL" export "$S" "$W/exp_base.bin" --base "$FLYCAST_VMU" >/dev/null
  chk "python3 $TOOL list '$W/exp_base.bin' | grep -q '196 free'" "export onto the original card (--base) replaces in place"
else echo "  skip (needs FLYCAST_VMU)"; fi

echo "== T9 web-site entry hidden: cursor cycle NEW GAME -> LOAD -> OPTIONS -> NEW GAME (no dead row)"
S="$W/s_new"; shot t9a "$S" 1000 START@400+40 DOWN@700+4 DOWN@760+4 DOWN@820+4 DOWN@880+4 & shot t9b "$S" 1000 START@400+40 DOWN@700+4 DOWN@760+4 DOWN@820+4 & shot t9c "$S" 1000 START@400+40 DOWN@700+4 DOWN@760+4 & wait
echo "  renders: $W/t9a.png (4 downs: LOAD) $W/t9b.png (3 downs: NEW GAME) $W/t9c.png (2 downs: OPTIONS)"

echo "== T10 deselected device (Return to title / lazy path): MAIN MENU without prompt"
S="$W/s_lazy"; R2_VMU_NO_INIT_SELECT=1 go t10 "$S" 900 $BLANK_MENU
chk "grep -aq 'auto-select VMU 1 (re-select)' $W/t10.log && ! texts $W/t10.log 414 && ! texts $W/t10.log 413" "GetCurrentSlotNumber hook re-selects VMU 1 (no chooser)"

echo "== T11 options menu with VMU: SAVE OPTIONS enabled and works, no vibration prompt"
S="$W/s_opt"; go t11 "$S" 1400 START@400+40 DOWN@700+4 A@780+4 DOWN@900+4 DOWN@960+4 A@1020+4
chk "texts $W/t11.log 440 || grep -aq 'wrote RAYMAN_2.SY_' $W/t11.log" "SAVE OPTIONS wrote RAYMAN_2.SY_"
chk "! awk '/text 434 /{f=substr(\$2,2)+0; if (f>=100) n++} END{exit !n}' $W/t11.log" "'Make VIBRATION PACK operational?' never requested"
shot t11s "$S" 900 START@400+40 DOWN@700+4 A@780+4; echo "  render: $W/t11s.png (OPTION MENU)"
echo
echo "tests_vmu: $pass passed, $fail failed"
[ $fail -eq 0 ]
