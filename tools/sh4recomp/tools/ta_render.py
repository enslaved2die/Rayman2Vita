#!/usr/bin/env python3
"""Minimal software renderer for a TA frame dumped by hle/ta_hle.c (build_hle/frame.bin + build_hle/vram.bin).
usage: ta_render.py [frame.bin vram.bin out.png]   (defaults under build_hle/)
Decodes RGB565/ARGB1555/ARGB4444 textures (twiddled or linear, VQ, mipmapped), perspective-correct interpolation, z = 1/w (greater wins),
opaque list then translucent in submission order.  Palette/YUV/bump textures are drawn as flat grey (not implemented)."""
import sys, struct, numpy as np
from PIL import Image
fb = sys.argv[1] if len(sys.argv) > 1 else 'build_hle/frame.bin'
vb = sys.argv[2] if len(sys.argv) > 2 else 'build_hle/vram.bin'
out = sys.argv[3] if len(sys.argv) > 3 else 'build_hle/frame_menu.png'
v32 = np.fromfile(vb, dtype=np.uint8)
# boot.c keeps the 32-bit-area view of VRAM; the PVR reads textures through the 64-bit area -> interleave banks every 32 bits
w32 = v32.view('<u4'); off = np.arange(len(w32), dtype=np.uint32) * 4
a64 = (off & 0x3FFFFC) * 2 | (((off >> 22) & 1) << 2)
v64w = np.zeros(len(w32), dtype='<u4'); v64w[a64 >> 2] = w32
V = v64w.view(np.uint8)
import os
if os.environ.get('TA_LINEAR', '1') == '1': V = v32      # empirical: Kamui writes textures through the 32-bit area at the same offset the TCW uses
def twiddle_idx(w, h):
    n = max(w, h); bits = int(np.log2(min(w, h)))
    y, x = np.mgrid[0:h, 0:w]
    def spread(v): 
        r = np.zeros_like(v)
        for b in range(bits): r |= ((v >> b) & 1) << (2 * b)
        return r
    t = spread(y) | (spread(x) << 1) if w >= h else spread(x) | (spread(y) << 1)
    if w > h: t |= (x >> bits) << (2 * bits)
    elif h > w: t |= (y >> bits) << (2 * bits)
    return t
def px16(raw, fmt):
    r = raw.astype(np.uint32)
    if fmt == 0: a = ((r >> 15) & 1) * 255; R = ((r >> 10) & 31) * 255 // 31; G = ((r >> 5) & 31) * 255 // 31; B = (r & 31) * 255 // 31
    elif fmt == 1: a = r * 0 + 255; R = ((r >> 11) & 31) * 255 // 31; G = ((r >> 5) & 63) * 255 // 63; B = (r & 31) * 255 // 31
    else: a = ((r >> 12) & 15) * 17; R = ((r >> 8) & 15) * 17; G = ((r >> 4) & 15) * 17; B = (r & 15) * 17
    return np.stack([R, G, B, a], -1).astype(np.uint8)
cache = {}
def texture(tcw, tsp):
    key = (tcw, tsp)
    if key in cache: return cache[key]
    mip, vq, fmt, nontw = tcw >> 31, (tcw >> 30) & 1, (tcw >> 27) & 7, (tcw >> 26) & 1
    addr = (tcw & 0x1FFFFF) << 3; w = 8 << (tsp & 7); h = 8 << ((tsp >> 3) & 7)
    if fmt > 2: t = np.full((h, w, 4), 128, np.uint8); t[..., 3] = 255
    elif vq:
        book = V[addr:addr + 2048].view('<u2').reshape(256, 4)   # each code = 2x2 block: [00,10,01,11] (twiddle order)
        o = 2048
        if mip: o += sum(max(1, (s // 2) ** 2) for s in [1 << i for i in range(int(np.log2(w)))] if s < w)
        idx = V[addr + o: addr + o + (w // 2) * (h // 2)]
        ti = twiddle_idx(w // 2, h // 2); lin = np.zeros((h // 2, w // 2), np.uint8)
        lin = idx[ti] if len(idx) > ti.max() else np.zeros((h // 2, w // 2), np.uint8)
        blk = book[lin]                                         # (h/2,w/2,4)
        raw = np.zeros((h, w), np.uint16)
        raw[0::2, 0::2] = blk[..., 0]; raw[1::2, 0::2] = blk[..., 1]; raw[0::2, 1::2] = blk[..., 2]; raw[1::2, 1::2] = blk[..., 3]
        t = px16(raw, fmt)
    else:
        o = 0
        if mip and not nontw: o = {8: 0x30, 16: 0xB0, 32: 0x2B0, 64: 0xAB0, 128: 0x2AB0, 256: 0xAAB0, 512: 0x2AAB0, 1024: 0xAAAB0}.get(w, 0) if w == h else 0
        data = V[addr + o: addr + o + w * h * 2].view('<u2')
        if len(data) < w * h: data = np.pad(data, (0, w * h - len(data)))
        raw = data.reshape(h, w) if nontw else data[twiddle_idx(w, h)]
        t = px16(raw, fmt)
    cache[key] = t; return t
d = open(fb, 'rb').read()
magic, ns, nv, fno = struct.unpack_from('<4I', d, 0)
assert magic == 0x31465452
strips = [struct.unpack_from('<8I', d, 16 + 32 * i) for i in range(ns)]
vo = 16 + 32 * ns
VT = np.frombuffer(d, dtype='<f4', count=nv * 13, offset=vo).reshape(nv, 13)   # x y z u v base[4] off[4] (a r g b)
W, H = 640, 480
img = np.zeros((H, W, 3), np.float32); zb = np.zeros((H, W), np.float32); img[:] = (0.1, 0.1, 0.15)
order = sorted(range(ns), key=lambda i: {0: 0, 4: 1, 2: 2}.get(strips[i][7], 3))   # opaque, punch, translucent
tri_n = 0
for si in order:
    ctl, isp, tsp, tcw, first, cnt, spr, lst = strips[si]
    if lst in (1, 3): continue
    textured = (ctl >> 3) & 1; shade = (tsp >> 6) & 3; use_alpha = (tsp >> 20) & 1
    tex = texture(tcw, tsp) if textured else None
    tw = (8 << (tsp & 7)); th = (8 << ((tsp >> 3) & 7))
    V0 = VT[first:first + cnt]
    for k in range(cnt - 2):
        tri = V0[k:k + 3] if (k % 2 == 0) else V0[[k + 1, k, k + 2]]
        x, y, z = tri[:, 0], tri[:, 1], tri[:, 2]
        if not (np.isfinite(tri[:, :3]).all()): continue
        x0, x1 = int(max(0, np.floor(x.min()))), int(min(W - 1, np.ceil(x.max())))
        y0, y1 = int(max(0, np.floor(y.min()))), int(min(H - 1, np.ceil(y.max())))
        if x1 < x0 or y1 < y0: continue
        den = (y[1] - y[2]) * (x[0] - x[2]) + (x[2] - x[1]) * (y[0] - y[2])
        if abs(den) < 1e-9: continue
        gx, gy = np.meshgrid(np.arange(x0, x1 + 1) + 0.5, np.arange(y0, y1 + 1) + 0.5)
        l0 = ((y[1] - y[2]) * (gx - x[2]) + (x[2] - x[1]) * (gy - y[2])) / den
        l1 = ((y[2] - y[0]) * (gx - x[2]) + (x[0] - x[2]) * (gy - y[2])) / den
        l2 = 1 - l0 - l1
        m = (l0 >= 0) & (l1 >= 0) & (l2 >= 0)
        if not m.any(): continue
        zz = l0 * z[0] + l1 * z[1] + l2 * z[2]
        sub = zb[y0:y1 + 1, x0:x1 + 1]
        m &= zz > sub
        if not m.any(): continue
        pw = np.stack([l0 * z[0], l1 * z[1], l2 * z[2]], -1); pw = pw / np.maximum(pw.sum(-1, keepdims=True), 1e-30)
        col = (pw[..., :, None] * tri[:, 5:9][None, None]).sum(-2) if False else np.einsum('hwk,kc->hwc', pw, tri[:, 5:9])   # a r g b
        rgb = col[..., 1:4]; alpha = col[..., 0]
        if tex is not None:
            u = np.einsum('hwk,k->hw', pw, tri[:, 3]); v = np.einsum('hwk,k->hw', pw, tri[:, 4])
            ui = (np.floor(u * tw).astype(int)) % tw; vi = (np.floor(v * th).astype(int)) % th
            t = tex[vi, ui].astype(np.float32) / 255
            if shade == 0 or shade == 2: rgb = t[..., :3]
            else: rgb = t[..., :3] * rgb
            if shade >= 2 or use_alpha: alpha = t[..., 3] * (alpha if shade == 3 else 1)
            if lst == 4: m &= t[..., 3] > 0.5
        reg = img[y0:y1 + 1, x0:x1 + 1]
        if lst == 2 and use_alpha: 
            a = alpha[..., None]; reg[m] = (rgb * a + reg * (1 - a))[m]
        else: reg[m] = rgb[m]
        if lst != 2: sub[m] = zz[m]
        tri_n += 1
Image.fromarray((np.clip(img, 0, 1) * 255).astype(np.uint8)).save(out)
print('rendered', tri_n, 'triangles ->', out)
