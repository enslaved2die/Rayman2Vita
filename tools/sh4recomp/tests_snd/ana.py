import sys, numpy as np, wave
w=wave.open(sys.argv[1]); n=w.getnframes(); d=np.frombuffer(w.readframes(n),dtype=np.int16).reshape(-1,2).astype(float)
sr=w.getframerate(); print("frames",n,"sec",n/sr,"peak",np.abs(d).max(), "clip>=32000:",(np.abs(d)>=32000).sum())
step=int(sr*float(sys.argv[2]) if len(sys.argv)>2 else sr)
for i in range(0,n,step):
    s=d[i:i+step]
    if len(s)<100: break
    m=s.mean(axis=1); rms=np.sqrt((m**2).mean()); pk=np.abs(s).max()
    # spectral centroid + tonal peak
    sp=np.abs(np.fft.rfft(m*np.hanning(len(m)))); fr=np.fft.rfftfreq(len(m),1/sr)
    cen=(sp*fr).sum()/(sp.sum()+1e-9); pf=fr[sp.argmax()] if sp.max()>0 else 0
    print(f"t={i/sr:5.1f} rms={rms:7.0f} pk={pk:6.0f} centroid={cen:6.0f} peakf={pf:6.0f}")
