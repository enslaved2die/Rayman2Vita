#!/usr/bin/env python3
"""Ground-truth check of the texture interpretation against the game's own texture banks.
For every textured strip of a dumped frame, find the PVR in FIX.TEX / MENU.TEX whose payload is byte-identical to the VRAM contents at the TCW address
(mip textures: Kamui's loader copies the payload to surface+4), then compare what the .PVR header says (width, height, pixel format, data format)
with what the TA state says (TSP U = bits 5:3, V = bits 2:0, TCW format / VQ / mip bits).  Mismatch => the TSP/TCW interpretation is wrong.
usage: check_tex_files.py frame.bin vram.bin [DCDATA dir]"""
import sys, struct, os
def lzss(src):
    out = bytearray(); p = 0
    while p < len(src):
        tag = src[p]
        if tag & 1 == 0:
            p += 1
            if tag == 0: out += src[p:p + 4]; p += 4
            else: c = tag >> 2; out += src[p:p + c]; p += c
        else:
            val = struct.unpack_from('<I', src, p)[0]; p += 4
            ln = (val >> 24) & 255; off = (val & 0xFFFFFE) >> 1
            if off == 0 or off > len(out): break
            for _ in range(ln): out.append(out[-off])
    return bytes(out)
def banks(path):
    d = open(path, 'rb').read(); res = []; p = 4
    assert d[:4] == b'LZSS'
    while p + 4 <= len(d):
        sz = struct.unpack_from('<I', d, p)[0]
        if sz <= 4 or p + sz > len(d): break
        res.append(lzss(d[p + 4:p + sz])); p += sz
    return res
fb, vb = sys.argv[1], sys.argv[2]
root = sys.argv[3] if len(sys.argv) > 3 else '../../assets/dc/DCDATA'
V = open(vb, 'rb').read()
items = []
for rel in ('FIX.TEX', 'MENU/MENU.TEX'):
    p = os.path.join(root, rel)
    if os.path.exists(p):
        for i, x in enumerate(banks(p)):
            j = x.index(b'PVRT'); pf, df = x[j + 8], x[j + 9]; w, h = struct.unpack_from('<HH', x, j + 12)
            items.append((rel, i, pf, df, w, h, x[j + 16:]))
d = open(fb, 'rb').read(); ns = struct.unpack_from('<4I', d, 0)[1]
seen = set(); ok = bad = unmatched = 0
for i in range(ns):
    ctl, isp, tsp, tcw, first, cnt, spr, lst = struct.unpack_from('<8I', d, 16 + 32 * i)
    if not (ctl >> 3) & 1 or (tcw, tsp) in seen: continue
    seen.add((tcw, tsp))
    base = (tcw & 0x1FFFFF) << 3; mip = tcw >> 31; vq = (tcw >> 30) & 1; fmt = (tcw >> 27) & 7
    W = 8 << ((tsp >> 3) & 7); H = 8 << (tsp & 7)
    hit = None
    for rel, k, pf, df, w, h, pay in items:
        n = len(pay)
        if V[base:base + n] == pay or V[base + 4:base + n] == pay[:n - 4]:
            hit = (rel, k, pf, df, w, h); break
    if not hit: unmatched += 1; print('no source match: tcw=%08x tsp=%08x %dx%d' % (tcw, tsp, W, H)); continue
    rel, k, pf, df, w, h = hit
    exp_mip = df in (2, 4); exp_vq = df in (3, 4)
    good = (w, h) == (W, H) and pf == fmt and exp_mip == bool(mip) and exp_vq == bool(vq)
    ok += good; bad += not good
    if not good: print('MISMATCH tcw=%08x tsp=%08x state %dx%d fmt%d vq%d mip%d  vs file %s #%d %dx%d pf%d df=%#x' % (tcw, tsp, W, H, fmt, vq, mip, rel, k, w, h, pf, df))
print('textures matched to original .PVR: %d ok, %d mismatching, %d without source match' % (ok, bad, unmatched))
sys.exit(1 if bad else 0)
