"""Guest start commands vs AICA key-ons (R2_SND_EV=1 log): python3 tests_snd/sfx_match.py ev.txt
Every guest sd key-on command (cmd 0x11, `GUEST start-cmd`) must produce exactly one AICA KEYON of a non-ring voice (ring voices at 0x18000/0x1E000 are keyed on by the ARM driver
for streams). Matching is first-come within 0.6 s of AICA time (the ARM executes the command block at tick rate). Prints unmatched commands (dropped sounds) and unmatched key-ons
(re-triggered / driver-initiated voices). Exit 1 if more than 2 % of the commands are dropped."""
import sys, re
cmds = []; keys = []
for l in open(sys.argv[1], errors="replace"):
    m = re.match(r"\[ev\] t=([\d.]+) (?:f=\d+ )?GUEST start-cmd #(\d+) handle=(\d+)", l)
    if m: cmds.append((float(m.group(1)), int(m.group(2)))); continue
    m = re.match(r"\[ev\] t=([\d.]+) (?:f=\d+ )?KEYON ch(\d+) .* sa=([0-9a-f]+)", l)
    if m and m.group(3) not in ("018000", "01e000"): keys.append((float(m.group(1)), int(m.group(2))))
used = [False] * len(keys); dropped = []
for t, n in cmds:
    for i, (tk, ch) in enumerate(keys):
        if not used[i] and t - 0.01 <= tk <= t + 0.6: used[i] = True; break
    else: dropped.append((t, n))
extra = [k for k, u in zip(keys, used) if not u]
print("guest start commands %d, non-ring key-ons %d, commands without key-on %d, key-ons without command %d" % (len(cmds), len(keys), len(dropped), len(extra)))
for t, n in dropped[:10]: print("  dropped: start-cmd #%d at t=%.3f" % (n, t))
for t, ch in extra[:10]: print("  extra key-on: ch%d at t=%.3f" % (ch, t))
sys.exit(1 if cmds and len(dropped) > 0.02 * len(cmds) else 0)
