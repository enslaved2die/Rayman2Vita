import sys,numpy as np,wave
for f in sys.argv[1:]:
    w=wave.open(f); d=np.frombuffer(w.readframes(w.getnframes()),dtype=np.int16).astype(float)
    a=np.abs(d); print(f"{f}: sec={len(d)/2/44100:.1f} rms={np.sqrt((d**2).mean()):.0f} peak={a.max():.0f} hardclip(>=32767)={int((a>=32767).sum())} >knee22937={int((a>22937).sum())} nan/dc={d.mean():.1f}")
