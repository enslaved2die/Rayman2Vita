"""Stream/ring-voice consistency check from an R2_SND_EV=1 host log (stderr of run_game) and optionally the pulled WAV (R2_SND_PULL=<wav>).
Usage: python3 tests_snd/stream_tl.py ev.txt [pull.wav] [out.png]
The guest's stream engine (ctx 0x8C2D4968) says whether a music/voice-over stream is playing (state 3 = steady, not paused, no fade); the AICA model must then have the two ring voices
(sample address 0x18000 / 0x1E000, found by address because the ARM driver allocates the channels dynamically) keyed on and active. Reports every interval of >= 0.3 s where the
guest streams but a ring voice is missing, plus the stream open/stop calls, ring key-on/off events, torn command-block writes and, with the WAV, the RMS timeline of those intervals.
Exit status 1 if any stream hole is found (used by tests_snd/run_host.sh)."""
import sys, re
ev = open(sys.argv[1], errors="replace").read().splitlines()
ctx = []; rings_ev = []; opens = []; torn = 0; blocks = 0
for l in ev:
    m = re.match(r"\[ev\] t=([\d.]+) (?:f=\d+ )?STREAMCTX state=(\d+) paused=(\d+) left=(\d+) fade=(\d+) rings:(.*)", l)
    if m:
        t = float(m.group(1)); rg = re.findall(r"ch(\d+)\((L|R) a(\d) k(\d) eg(\d)", m.group(6))
        ctx.append((t, int(m.group(2)), int(m.group(3)), int(m.group(5)), rg)); continue
    m = re.match(r"\[ev\] t=([\d.]+) (?:f=\d+ )?GUEST stream-(open|stop|pause|resume)", l)
    if m: opens.append((float(m.group(1)), m.group(2))); continue
    if "CMDBLK_TORN" in l: torn += 1
    m = re.search(r"cmdblk_writes=(\d+) cmdblk_torn=(\d+)", l)
    if m: blocks, torn = int(m.group(1)), int(m.group(2))
    m = re.match(r"\[ev\] t=([\d.]+) (?:f=\d+ )?(KEYON|KEYOFF|REL_END|SAMPLE_END) ch(\d+)(.*)", l)
    if m and ("sa=018000" in m.group(4) or "sa=01e000" in m.group(4) or m.group(2) != "KEYON"): rings_ev.append((float(m.group(1)), m.group(2), int(m.group(3)), m.group(4)[:60]))
holes = []; cur = None
for t, st, paused, fade, rg in ctx:
    ok = {s for _, s, a, k, e in rg if a == "1"}
    bad = st == 3 and not paused and not fade and not ({"L", "R"} <= ok)
    if bad and cur is None: cur = [t, t, {s for s in "LR"} - ok]
    elif bad: cur[1] = t
    elif cur is not None: holes.append(cur); cur = None
if cur: holes.append(cur)
holes = [h for h in holes if h[1] - h[0] >= 0.3]
print("stream calls:", " ".join("%.2f:%s" % o for o in opens))
print("ctx samples: %d, torn command-block writes: %d of %d" % (len(ctx), torn, blocks))
for h in holes: print("HOLE: guest stream state 3 but ring voice(s) %s not active from t=%.2f to t=%.2f" % ("".join(sorted(h[2])), h[0], h[1]))
if len(sys.argv) > 2:
    import wave, numpy as np
    w = wave.open(sys.argv[2]); d = np.frombuffer(w.readframes(w.getnframes()), dtype=np.int16).reshape(-1, 2).astype(float); sr = w.getframerate()
    hop = sr // 2; rms = np.array([np.sqrt(np.mean(d[i:i + hop] ** 2)) for i in range(0, len(d) - hop, hop)])
    for h in holes:
        a, b = int(h[0] * 2), int(h[1] * 2) + 1
        print("  RMS in hole %.1f..%.1f: %s" % (h[0], h[1], " ".join("%d" % x for x in rms[a:b])))
    if len(sys.argv) > 3:
        import matplotlib; matplotlib.use("Agg"); import matplotlib.pyplot as plt
        fig, ax = plt.subplots(2, 1, figsize=(14, 6), sharex=True)
        ax[0].plot(np.arange(len(rms)) / 2.0, rms); ax[0].set_ylabel("RMS (0.5 s)")
        for t, st, paused, fade, rg in ctx:
            n = len({s for _, s, a, k, e in rg if a == "1"})
            ax[1].plot([t], [st + (0.1 if n == 2 else 0)], "g." if st == 3 and n == 2 else ("r." if st == 3 else "b."))
        for h in holes: ax[1].axvspan(h[0], h[1], color="red", alpha=0.3)
        for t, k in opens: ax[1].axvline(t, color="k", lw=0.5, ls="--" if k == "open" else ":")
        ax[1].set_ylabel("stream state (green = both ring voices active)"); ax[1].set_xlabel("s"); plt.tight_layout(); plt.savefig(sys.argv[3], dpi=80)
sys.exit(1 if holes else 0)
