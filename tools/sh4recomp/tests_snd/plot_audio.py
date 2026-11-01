"""Spectrogram + RMS envelope PNG of a stereo 16-bit WAV: python3 tests_snd/plot_audio.py in.wav out.png [seconds]"""
import sys, wave, numpy as np
import matplotlib; matplotlib.use("Agg"); import matplotlib.pyplot as plt
w = wave.open(sys.argv[1]); sr = w.getframerate(); d = np.frombuffer(w.readframes(w.getnframes()), dtype=np.int16).reshape(-1, 2).astype(float)
if len(sys.argv) > 3: d = d[: int(float(sys.argv[3]) * sr)]
m = d.mean(axis=1); t = np.arange(len(m)) / sr
fig, ax = plt.subplots(2, 1, figsize=(14, 7), sharex=True)
ax[0].specgram(m, NFFT=1024, Fs=sr, noverlap=512, cmap="magma", vmin=-20, vmax=100); ax[0].set_ylim(0, 12000); ax[0].set_ylabel("Hz")
hop = sr // 50; env = np.sqrt([np.mean(m[i:i + hop] ** 2) for i in range(0, len(m) - hop, hop)])
ax[1].plot(np.arange(len(env)) / 50.0, env); ax[1].set_ylabel("RMS (50 Hz)"); ax[1].set_xlabel("s")
sil = np.mean(env < 30); ax[1].set_title("silence fraction (RMS<30): %.1f%%" % (sil * 100))
plt.tight_layout(); plt.savefig(sys.argv[2], dpi=80); print("wrote", sys.argv[2], "silence %.1f%%" % (sil * 100))
