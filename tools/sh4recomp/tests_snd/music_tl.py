import sys, numpy as np, wave, struct, glob, os
"""Menu music timeline: cross-correlates a captured WAV (R2_SND_PULL=<wav> or R2_SND_WAV) with the MM01..MM10 members of MM.DCZ.
Usage: python3 tests_snd/music_tl.py out.wav [threshold]. Real-time tempo means consecutive MMxx tracks start exactly 2.20 s apart whatever the guest speed."""
from scipy.signal import fftconvolve, resample_poly
M=os.environ.get('R2_MUSIC_DIR', os.path.join(os.path.dirname(os.path.abspath(__file__)), '../../../assets/dc/DCDATA/SOUND/MUSIC/'))
def load_wav_bytes(b):
    ch=struct.unpack('<H',b[22:24])[0]; sr=struct.unpack('<I',b[24:28])[0]
    i=b.find(b'data'); n=struct.unpack('<I',b[i+4:i+8])[0]
    d=np.frombuffer(b[i+8:i+8+n],dtype=np.int16); d=d[:len(d)//ch*ch].reshape(-1,ch).astype(float); return d,sr
def cands():
    out={}
    h=open(M+'MM.DCZ','rb').read(); cnt=struct.unpack('<I',h[8:12])[0]
    for k in range(cnt):
        e=h[0x10+k*0x2c:0x10+(k+1)*0x2c]; lba,sz=struct.unpack('<II',e[:8]); nm=e[10:].split(b'\0')[0].decode()
        out[nm]=h[lba*2048:lba*2048+sz]
    return out
def load(path, sr_out=44100):
    w=wave.open(path); n=w.getnframes(); d=np.frombuffer(w.readframes(n),dtype=np.int16).reshape(-1,2).astype(float); return d[:,0], w.getframerate()
if __name__=='__main__':
    path=sys.argv[1]; thr=float(sys.argv[2]) if len(sys.argv)>2 else 0.5
    L,sr=load(path)
    ev=[]
    for nm,b in sorted(cands().items()):
        x,s=load_wav_bytes(b); c=resample_poly(x[:,0],sr,s) if s!=sr else x[:,0]; c=c-c.mean()
        if len(c)>len(L): continue
        num=fftconvolve(L,c[::-1],mode='valid'); cs=np.cumsum(np.concatenate([[0],L**2])); win=cs[len(c):]-cs[:-len(c)]
        r=num[:len(win)]/np.sqrt(win*np.sum(c**2)+1e-9)
        idx=np.where(r>thr)[0]; last=-10**9
        for i in idx:
            if i-last>len(c)//2:
                j=i+np.argmax(r[i:i+len(c)//2]); ev.append((j/sr,nm,r[j],len(c)/sr))
            last=i
    ev.sort(); last=None
    for t,nm,r,ln in ev:
        print(f"{t:7.2f}s {nm:8s} corr={r:.3f} len={ln:.2f}s end={t+ln:.2f}")
