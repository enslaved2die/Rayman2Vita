import sys, numpy as np, wave, glob, struct, os
from scipy.signal import fftconvolve, resample_poly
M='/Users/joshua/Documents/Repos/Rayman2Vita/worktrees/recomp-vita/assets/dc/DCDATA/SOUND/MUSIC/'
def load_wav_bytes(b):
    # parse RIFF
    ch=struct.unpack('<H',b[22:24])[0]; sr=struct.unpack('<I',b[24:28])[0]
    i=b.find(b'data'); n=struct.unpack('<I',b[i+4:i+8])[0]
    d=np.frombuffer(b[i+8:i+8+n],dtype=np.int16)
    d=d[:len(d)//ch*ch].reshape(-1,ch).astype(float)
    return d,sr
def cands():
    out={}
    for f in glob.glob(M+'*.WAV'): out[os.path.basename(f)]=open(f,'rb').read()
    for f in glob.glob(M+'MM.DCZ'):
        h=open(f,'rb').read(); cnt=struct.unpack('<I',h[8:12])[0]
        for k in range(cnt):
            e=h[0x10+k*0x2c:0x10+(k+1)*0x2c]; lba,sz=struct.unpack('<II',e[:8]); nm=e[10:].split(b'\0')[0].decode()
            out[nm]=h[lba*2048:lba*2048+sz]
    return out
w=wave.open(sys.argv[1]); n=w.getnframes(); d=np.frombuffer(w.readframes(n),dtype=np.int16).reshape(-1,2).astype(float)
t0=float(sys.argv[2]); t1=float(sys.argv[3]); seg=d[int(t0*44100):int(t1*44100),0]
seg=seg-seg.mean()
for nm,b in sorted(cands().items()):
    try: x,sr=load_wav_bytes(b)
    except Exception as e: continue
    if sr!=44100: x=resample_poly(x,44100,sr,axis=0)
    c=x[:,0]-x[:,0].mean()
    if len(c)<4410: continue
    # use candidate as template in seg
    cc=fftconvolve(seg,c[::-1],mode='valid') if len(seg)>=len(c) else None
    if cc is None:
        cc=fftconvolve(c,seg[::-1],mode='valid'); 
    # normalise roughly
    L=min(len(c),len(seg))
    en=np.sqrt(np.sum(c[:L]**2)*np.sum(seg[:L]**2))
    print(f"{nm:14s} sr={sr} len={len(c)/44100:6.1f}s  bestcorr={np.abs(cc).max()/en:.3f}")
