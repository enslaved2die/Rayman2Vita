import sys, numpy as np, wave
from scipy.signal import fftconvolve, resample_poly
exec(open('corr.py').read().split("w=wave.open")[0])
w=wave.open(sys.argv[1]); n=w.getnframes(); d=np.frombuffer(w.readframes(n),dtype=np.int16).reshape(-1,2).astype(float)
L=d[:,0]
t1=float(sys.argv[2]) if len(sys.argv)>2 else 60
L=L[:int(t1*44100)]
ev=[]
for nm,b in sorted(cands().items()):
    if not (nm.startswith('MM') or nm.startswith('JIN') or nm.startswith('NEW') or nm.startswith('SIL') or nm.startswith('WIN')): continue
    try: x,sr=load_wav_bytes(b)
    except: continue
    c=resample_poly(x[:,0],44100,sr) if sr!=44100 else x[:,0]
    c=c-c.mean(); 
    if len(c)>len(L) or c.std()<1: continue
    num=fftconvolve(L,c[::-1],mode='valid')
    # local energy of L over window
    cs=np.cumsum(np.concatenate([[0],L**2])); win=cs[len(c):]-cs[:-len(c)]
    cn=np.sqrt(win*np.sum(c**2))+1e-9
    r=np.abs(num[:len(cn)]/cn)
    # find peaks > .8
    idx=np.where(r>0.85)[0]
    last=-10**9
    for i in idx:
        if i-last>len(c)//2: ev.append((i/44100,nm,r[i])); 
        last=i
for t,nm,r in sorted(ev): print(f"{t:7.2f}s {nm:10s} corr={r:.3f}")
