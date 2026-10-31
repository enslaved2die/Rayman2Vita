#!/usr/bin/env python3
"""Software renderer for a TA frame dumped by hle/ta_hle.c (build_hle/frame.bin + vram.bin [+ pvrregs.bin]).
usage: ta_render.py [frame.bin vram.bin out.png] [--regs pvrregs.bin] [--only A-B] [--skip A-B] [--textures sheet.png] [--lod-bias N] [--size WxH] [--wide on|off]

Model (status: P = proven against the game's own data, D = PowerVR2 documentation as remembered, A = assumption):
  * VRAM: textures are read LINEARLY from the 32-bit-area image at tcw[20:0]*8 (P: Kamui's loader memcpy's the payload there; see hle/texmap.c m32/m64).
  * formats 0-2 (1555/565/4444), VQ (+mip), twiddled / rectangular-twiddled, mip chains, 4/8bpp palettes (palette RAM from pvrregs.bin), YUV422 (linear), bump -> grey.
  * perspective-correct u,v from 1/W (z field), depth test per ISP depth mode on 1/W (greater = nearer), z write disable.
  * lists: opaque (alpha ignored), punch-through (alpha >= PT_ALPHA_REF), translucent in submission order (blend per TSP src/dst instruction).
  * shading: 0 decal, 1 modulate, 2 decal-alpha, 3 modulate-alpha (D); use-alpha=0 -> alpha 1; ignore-texture-alpha; offset colour added when ctl.offset.
  * UV: clamp U/V, flip U/V (mirror), bilinear when filter!=0, mip level by screen-space texel density (A: no trilinear).
  * modifier volumes (frame_mods.bin next to frame.bin): opaque-mod list shadows opaque/punch-through pixels, trans-mod list shadows translucent pixels, only for
    polygons with PCW bit7 (shadow) set (D: 'Shadow' = receiver).  A volume = the triangles up to and including the first one whose header ISP volume instruction
    (isp[31:29]) is 1/2 (the game's cylinders: 51 'normal' + 1 'inside last'); inside test = parity of volume faces farther than the surface (1/W <= surface 1/W),
    volumes OR-ed.  Shadowed colour = colour * (FPU_SHAD_SCALE[7:0] / 256) (A: 'cheap' scale mode, bit8 ignored).  Measured: scale reg = 0x19B -> 0.605.
  * culling modes 2/3 (screen-space determinant sign, y down), no user clip."""
import sys, struct, os, argparse
import numpy as np
from PIL import Image

ap = argparse.ArgumentParser()
ap.add_argument('files', nargs='*')
ap.add_argument('--regs'); ap.add_argument('--only'); ap.add_argument('--skip'); ap.add_argument('--textures')
ap.add_argument('--lod-bias', type=float, default=0.0)
ap.add_argument('--no-bilinear', action='store_true')
ap.add_argument('--no-mip', action='store_true', help='always sample mip level 0')
ap.add_argument('--hashes', action='store_true', help='print FNV-1a hash of every decoded texture level (compare with hle/tests_ta/test_tex) and exit')
ap.add_argument('--sort', choices=['presort', 'auto'], default=None, help='translucent order: submission order (presort) or HW auto-sort by min 1/W ascending')
ap.add_argument('--linear-col', action='store_true', help='Gouraud colours interpolated screen-linear (not perspective-correct)')
ap.add_argument('--old-uvbits', action='store_true', help='A/B: previous (wrong) U/V clamp+flip bit assignment')
ap.add_argument('--ztrace', action='store_true', help='print the distribution of (z_translucent - z_buffer)/z_buffer for translucent fragments (coplanar-layer / z-fight diagnosis)')
ap.add_argument('--no-tfog', action='store_true', help='do not fog translucent polygons (emulates the Vita renderer, which only fogs opaque)')
ap.add_argument('--no-shadow', action='store_true', help='ignore modifier volumes (shadows)')
ap.add_argument('--shadow-debug', action='store_true', help='tint the shadow mask red instead of darkening')
ap.add_argument('--no-bg', action='store_true'); ap.add_argument('--no-fog', action='store_true')
ap.add_argument('--tzwrite', action='store_true', help='honour z-write for translucent strips (default: translucent never writes depth, like Flycast/auto-sorted HW)')
ap.add_argument('--size', default='640x480', help='output size WxH (rasterised natively: the 640x480 screen-space vertices are mapped affinely, no bitmap scaling), e.g. 960x544 (Vita) or 854x480')
ap.add_argument('--wide', choices=['on', 'off'], default='on', help='with a larger --size: on = the game is in its own 16:9 mode (R2_WIDE=1, default of the HLE), map the whole 640x480 frame onto the full WxH; off = 4:3 frame, pillarboxed centred keeping square pixels')
args = ap.parse_args()
args.no_tzwrite = not args.tzwrite
fb = args.files[0] if len(args.files) > 0 else 'build_hle/frame.bin'
vb = args.files[1] if len(args.files) > 1 else 'build_hle/vram.bin'
out = args.files[2] if len(args.files) > 2 else 'build_hle/frame_menu.png'
regs_path = args.regs or os.path.join(os.path.dirname(vb) or '.', 'pvrregs.bin')
V = np.fromfile(vb, dtype=np.uint8)
PAL = None; PAL_CTRL = 0; TEXT_CONTROL = 0; PT_REF = 0x80
if os.path.exists(regs_path):
    r = np.fromfile(regs_path, dtype='<u4')
    if len(r) >= 1040:
        PAL = r[:1024]; PAL_CTRL = int(r[1024]); TEXT_CONTROL = int(r[1025]); PT_REF = int(r[1026]) & 255

# ---------------------------------------------------------------- texture decode (mirrors ta_tex_decode in hle/ta.c)
def spread(v, bits):
    r = np.zeros_like(v)
    for b in range(bits): r |= ((v >> b) & 1) << (2 * b)
    return r
def twid_idx(w, h):
    y, x = np.mgrid[0:h, 0:w].astype(np.int64)
    if w == h: bits = int(np.log2(w)); return spread(y, bits) | (spread(x, bits) << 1)
    if w > h:
        bits = int(np.log2(h)); return (x >> bits) * h * h + (spread(y, bits) | (spread(x & (h - 1), bits) << 1))
    bits = int(np.log2(w)); return (y >> bits) * w * w + (spread(y & (w - 1), bits) | (spread(x, bits) << 1))
def px16(raw, fmt):
    r = raw.astype(np.uint32)
    if fmt == 0: a = ((r >> 15) & 1) * 255; R = (r >> 10) & 31; G = (r >> 5) & 31; B = r & 31; R = (R << 3) | (R >> 2); G = (G << 3) | (G >> 2); B = (B << 3) | (B >> 2)
    elif fmt == 1: a = r * 0 + 255; R = (r >> 11) & 31; G = (r >> 5) & 63; B = r & 31; R = (R << 3) | (R >> 2); G = (G << 2) | (G >> 4); B = (B << 3) | (B >> 2)
    else: a = ((r >> 12) & 15) * 17; R = ((r >> 8) & 15) * 17; G = ((r >> 4) & 15) * 17; B = (r & 15) * 17
    return np.stack([R, G, B, a], -1).astype(np.uint8)
def rd(addr, n):
    a = V[addr:addr + n] if addr < len(V) else np.zeros(0, np.uint8)
    return np.pad(a, (0, n - len(a))) if len(a) < n else a
def pal_px(idx):
    if PAL is None: return np.full(idx.shape + (4,), 128, np.uint8) | np.array([0, 0, 0, 127], np.uint8)
    w = PAL[idx & 1023].astype(np.uint32); m = PAL_CTRL & 3
    if m < 3: return px16(w & 0xFFFF, m)
    return np.stack([(w >> 16) & 255, (w >> 8) & 255, w & 255, w >> 24], -1).astype(np.uint8)
def decode_level(tcw, tsp, level, opaque=False):
    W = 8 << ((tsp >> 3) & 7); H = 8 << (tsp & 7)
    mip, vq, fmt, nontw = tcw >> 31, (tcw >> 30) & 1, (tcw >> 27) & 7, (tcw >> 26) & 1
    base = (tcw & 0x1FFFFF) << 3
    w = max(1, W >> level); h = max(1, H >> level)
    if mip: h = w
    if fmt in (4, 7):
        t = np.full((h, w, 4), 128, np.uint8); t[..., 3] = 255; return t
    S = (w * w - 1) // 3
    if vq and fmt <= 2:
        off = 2048
        if mip:
            s = 1
            while s < w: off += 1 if s == 1 else (s // 2) ** 2; s <<= 1
        bw, bh = max(1, w // 2), max(1, h // 2)
        book = rd(base, 2048).view('<u2').reshape(256, 4)
        idx = rd(base + off, bw * bh)
        ti = twid_idx(bw, bh)
        blk = book[idx[ti]]                                   # (bh,bw,4): [(0,0),(0,1),(1,0),(1,1)] as (x,y)
        raw = np.zeros((h + (h & 1), w + (w & 1)), np.uint16)
        raw[0::2, 0::2] = blk[..., 0]; raw[1::2, 0::2] = blk[..., 1]; raw[0::2, 1::2] = blk[..., 2]; raw[1::2, 1::2] = blk[..., 3]
        t = px16(raw[:h, :w], fmt)
    elif fmt <= 3:
        off = 2 * S + 6 if mip else 0
        stride = w
        if nontw and ((tcw >> 25) & 1): stride = (TEXT_CONTROL & 31) * 32 or w
        if fmt == 3:
            n = (stride * h) if nontw else w * h
            d = rd(base + off, n * 2).view('<u4')
            y, x = np.mgrid[0:h, 0:w]
            if nontw: u = d[(y * stride + (x & ~1)) // 2]
            else: u = d[(twid_idx(w, h)[:, :] & ~1) // 2]
            Y = np.where(x & 1, u >> 24, u >> 8) & 255; U = (u & 255).astype(np.int32) - 128; Vv = ((u >> 16) & 255).astype(np.int32) - 128
            R = Y + (1.370705 * Vv).astype(np.int32); G = Y - (0.698001 * Vv + 0.337633 * U).astype(np.int32); B = Y + (1.732446 * U).astype(np.int32)
            t = np.stack([np.clip(R, 0, 255), np.clip(G, 0, 255), np.clip(B, 0, 255), np.full(R.shape, 255)], -1).astype(np.uint8)
        else:
            d = rd(base + off, (stride * h if nontw else w * h) * 2).view('<u2')
            raw = d.reshape(h, stride)[:, :w] if nontw else d[twid_idx(w, h)]
            t = px16(raw, fmt)
    elif fmt == 6:
        off = S + 3 if mip else 0; pb = ((tcw >> 25) & 3) << 8
        d = rd(base + off, w * h); t = pal_px(pb + (d.reshape(h, w) if nontw else d[twid_idx(w, h)].astype(np.int64)))
    else:
        off = (S + 3) // 2 if mip else 0; pb = ((tcw >> 21) & 63) << 4
        ti = np.arange(w * h).reshape(h, w) if nontw else twid_idx(w, h)
        d = rd(base + off, (w * h + 1) // 2); b = d[ti >> 1]; nib = np.where(ti & 1, b >> 4, b & 15).astype(np.int64)
        t = pal_px(pb + nib)
    if opaque: t = t.copy(); t[..., 3] = 255
    return t

tex_cache = {}
def texture(tcw, tsp):
    key = (tcw, tsp)
    if key not in tex_cache:
        n = 1
        if tcw >> 31:
            w = 8 << ((tsp >> 3) & 7); n = int(np.log2(w)) + 1
        tex_cache[key] = [decode_level(tcw, tsp, l, bool((tsp >> 19) & 1)) for l in range(n)]
    return tex_cache[key]

# ---------------------------------------------------------------- frame
d = open(fb, 'rb').read()
magic, ns, nv, fno = struct.unpack_from('<4I', d, 0)
assert magic == 0x31465452
strips = [struct.unpack_from('<8I', d, 16 + 32 * i) for i in range(ns)]
VT = np.frombuffer(d, dtype='<f4', count=nv * 13, offset=16 + 32 * ns).reshape(nv, 13)   # x y z u v base[4] off[4] (a r g b)

def parse_range(s):
    if not s: return None
    a, _, b = s.partition('-'); return (int(a), int(b or a))
only, skip = parse_range(args.only), parse_range(args.skip)
MODS = {0: [], 1: []}; SHAD = 0.0       # list -> [volume index -> (n,3,3) tris]
mods_path = os.path.join(os.path.dirname(fb) or '.', 'frame_mods.bin')
if os.path.exists(mods_path) and not args.no_shadow:
    md = open(mods_path, 'rb').read(); nm, shs = struct.unpack_from('<2I', md, 0); SHAD = (shs & 255) / 256.0
    vols = {}
    for i in range(nm):
        q = struct.unpack_from('<9f4I', md, 8 + 52 * i)
        vols.setdefault((q[11], q[12]), []).append(np.array(q[:9], np.float64).reshape(3, 3))   # (list, vol id)
    for (lst, vid), t in sorted(vols.items()): MODS[0 if lst == 1 else 1].append(np.array(t))

def fnv(a):
    h = 2166136261
    for b in a.astype(np.uint8).tobytes(): h = ((h ^ b) * 16777619) & 0xFFFFFFFF
    return h
if args.hashes:
    seen = []
    for (ctl, isp, tsp, tcw, first, cnt, spr, lst) in strips:
        if not (ctl >> 3) & 1 or (tcw, tsp) in seen: continue
        seen.append((tcw, tsp))
        for l, t in enumerate(texture(tcw, tsp)): print('%08x %08x L%d %dx%d rc=%d %08x' % (tcw, tsp, l, t.shape[1], t.shape[0], -1 if ((tcw >> 27) & 7) in (4, 7) else 0, fnv(t)))
    sys.exit(0)
if args.textures:
    seen = []; tiles = []
    for (ctl, isp, tsp, tcw, first, cnt, spr, lst) in strips:
        if (ctl >> 3) & 1 and (tcw, tsp) not in seen: seen.append((tcw, tsp))
    for tcw, tsp in seen[:48]:
        t = texture(tcw, tsp)[0]; im = Image.fromarray(t[..., :3]).resize((128, 128), Image.NEAREST); tiles.append(np.array(im))
    cols = 8; rows = (len(tiles) + cols - 1) // cols
    sheet = np.zeros((rows * 128, cols * 128, 3), np.uint8)
    for i, t in enumerate(tiles): sheet[(i // cols) * 128:(i // cols + 1) * 128, (i % cols) * 128:(i % cols + 1) * 128] = t
    Image.fromarray(sheet).save(args.textures)
    for i, (tcw, tsp) in enumerate(seen[:48]):
        print('tile', i, 'tcw=%08x tsp=%08x' % (tcw, tsp), '%dx%d' % (8 << ((tsp >> 3) & 7), 8 << (tsp & 7)), 'fmt', (tcw >> 27) & 7, 'vq' if (tcw >> 30) & 1 else '', 'mip' if tcw >> 31 else '')

W, H = [int(t) for t in args.size.lower().split('x')]
if args.wide == 'on' or (W, H) == (640, 480): SX, SY, OX = W / 640.0, H / 480.0, 0.0       # whole frame -> whole display (un-squeezes the game's anamorphic 16:9 output)
else: SY = H / 480.0; SX = SY; OX = (W - 640.0 * SX) / 2                                # 4:3 pillarbox, square pixels
VX0, VX1 = int(round(OX)), int(round(OX + 640 * SX))                                       # viewport columns (the background plane only fills this region)
img = np.zeros((H, W, 3), np.float32); img[:] = (0.0, 0.0, 0.0)
FOGT = None; FOGCOL = None; FOGDEN = 0.0
fog_path = os.path.join(os.path.dirname(vb) or '.', 'pvrfog.bin')
if os.path.exists(fog_path) and not args.no_bg:
    fd = np.fromfile(fog_path, dtype='<u4')
    if len(fd) >= 143:
        FOGT = fd[:128]
        bgc = fd[131:143].view('<f4').reshape(3, 4)
        if bgc[0, 1:].any() or bgc[0, 0]: img[:, VX0:VX1] = bgc[0, 1:4]      # ISP_BACKGND plane: untextured, flat colour (a,r,g,b) [P: game writes 0x8080ff]
if PAL is not None and not args.no_fog:
    fr = int(r[1028]); FOGCOL = np.array([(fr >> 16) & 255, (fr >> 8) & 255, fr & 255], np.float32) / 255
    fdn = int(r[1030]); FOGDEN = ((fdn >> 8) & 255) / 128.0 * 2.0 ** (fdn & 127 if (fdn & 255) < 128 else (fdn & 255) - 256)
zb = np.zeros((H, W), np.float32)
sbuf = np.zeros((H, W), bool)           # shadow-receiver bit (PCW bit7) of the polygon that owns each opaque/punch pixel
shadow_done = False

def vol_inside(which, x0, y0, x1, y1, zref):
    """Pixels of the region [x0..x1]x[y0..y1] (inclusive) inside any modifier volume of list `which` (0 opaque-mod, 1 trans-mod); zref = surface 1/W per pixel."""
    res = np.zeros((y1 - y0 + 1, x1 - x0 + 1), bool)
    gx, gy = np.meshgrid(np.arange(x0, x1 + 1) + 0.5, np.arange(y0, y1 + 1) + 0.5)
    for vol in MODS[which]:
        par = np.zeros(res.shape, bool)
        for t in vol:
            if not np.isfinite(t).all() or (t[:, 2] <= 0).any(): continue
            x, y, z = t[:, 0] * SX + OX, t[:, 1] * SY, t[:, 2]
            den = (y[1] - y[2]) * (x[0] - x[2]) + (x[2] - x[1]) * (y[0] - y[2])
            if abs(den) < 1e-9 or x.max() < x0 or x.min() > x1 + 1 or y.max() < y0 or y.min() > y1 + 1: continue
            l0 = ((y[1] - y[2]) * (gx - x[2]) + (x[2] - x[1]) * (gy - y[2])) / den
            l1 = ((y[2] - y[0]) * (gx - x[2]) + (x[0] - x[2]) * (gy - y[2])) / den
            l2 = 1 - l0 - l1
            cov = (l0 >= 0) & (l1 >= 0) & (l2 > 0)                      # tie-break: shared edges are counted once
            zv = l0 * z[0] + l1 * z[1] + l2 * z[2]
            par ^= cov & (zv <= zref)                                   # volume face farther than the surface
        res |= par
    return res

def apply_shadow(which, sel, x0, y0, x1, y1, zref, img_reg):
    """darken img_reg (view of the region) where sel & inside"""
    if not MODS[which] or SHAD <= 0: return None
    ins = vol_inside(which, x0, y0, x1, y1, zref) & sel
    return ins

def opaque_shadow_pass():
    global shadow_done
    shadow_done = True
    if not MODS[0] or SHAD <= 0: return
    allt = np.concatenate(MODS[0]); xs = allt[..., 0] * SX + OX; ys = allt[..., 1] * SY
    X0, X1 = int(max(VX0, np.floor(xs.min()))), int(min(VX1 - 1, np.ceil(xs.max())))
    Y0, Y1 = int(max(0, np.floor(ys.min()))), int(min(H - 1, np.ceil(ys.max())))
    if X1 < X0 or Y1 < Y0: return
    ins = vol_inside(0, X0, Y0, X1, Y1, zb[Y0:Y1 + 1, X0:X1 + 1]) & sbuf[Y0:Y1 + 1, X0:X1 + 1] & (zb[Y0:Y1 + 1, X0:X1 + 1] > 0)
    reg = img[Y0:Y1 + 1, X0:X1 + 1]
    if args.shadow_debug: reg[ins] = reg[ins] * 0.5 + np.array([0.5, 0, 0])
    else: reg[ins] = reg[ins] * SHAD
    print('opaque shadow pixels:', int(ins.sum()))
order = sorted(range(ns), key=lambda i: {0: 0, 4: 1, 2: 2}.get(strips[i][7], 3))   # opaque, punch-through, translucent (stable = submission order)
tri_n = 0
ZT = []
if args.sort is None: args.sort = 'presort' if (PAL is not None and (int(r[1027]) & 1)) else 'auto'   # ISP_FEED_CFG bit0 = presort; 0 = HW sorts translucent back-to-front
if args.sort == 'auto':
    def key(i):
        l = strips[i][7]; g = {0: 0, 4: 1, 2: 2}.get(l, 3)
        zm = VT[strips[i][4]:strips[i][4] + strips[i][5], 2].min() if (l == 2 and strips[i][5]) else 0
        return (g, zm if l == 2 else 0)
    order = sorted(range(ns), key=key)

def blend_factor(inst, src_rgb, src_a, dst_rgb, is_dst):
    a = src_a[..., None]
    if inst == 0: return 0.0
    if inst == 1: return 1.0
    if inst == 2: return src_rgb if is_dst else dst_rgb
    if inst == 3: return 1 - (src_rgb if is_dst else dst_rgb)
    if inst == 4: return a
    if inst == 5: return 1 - a
    if inst == 6: return 1.0          # destination alpha: the frame buffer is opaque after the opaque list [A]
    return 0.0

def sample(levels, tsp, tcw, u, v, lod):
    lvl = int(np.clip(np.round(lod), 0, len(levels) - 1)) if (tcw >> 31 and not args.no_mip) else 0
    t = levels[lvl]; th, tw = t.shape[:2]
    if args.old_uvbits: clampu, clampv, flipu, flipv = (tsp >> 15) & 1, (tsp >> 16) & 1, (tsp >> 17) & 1, (tsp >> 18) & 1
    else: clampv, clampu, flipv, flipu = (tsp >> 15) & 1, (tsp >> 16) & 1, (tsp >> 17) & 1, (tsp >> 18) & 1   # TSP: 15 ClampV, 16 ClampU, 17 FlipV, 18 FlipU
    filt = (tsp >> 13) & 3
    def wrap(c, n, clamp, flip):
        c = np.floor(np.nan_to_num(c, nan=0.0, posinf=0.0, neginf=0.0)).astype(np.int64)
        if clamp: return np.clip(c, 0, n - 1)
        if flip:
            p = np.mod(c, 2 * n); return np.where(p >= n, 2 * n - 1 - p, p)
        return np.mod(c, n)
    uu = u * tw; vv = v * th
    if filt == 0 or args.no_bilinear:
        ix = wrap(np.floor(uu), tw, clampu, flipu); iy = wrap(np.floor(vv), th, clampv, flipv)
        return t[iy, ix].astype(np.float32) / 255
    uu = uu - 0.5; vv = vv - 0.5
    x0 = np.floor(uu); y0 = np.floor(vv); fx = (uu - x0)[..., None]; fy = (vv - y0)[..., None]
    def g(xx, yy): return t[wrap(yy, th, clampv, flipv), wrap(xx, tw, clampu, flipu)].astype(np.float32) / 255
    return (g(x0, y0) * (1 - fx) + g(x0 + 1, y0) * fx) * (1 - fy) + (g(x0, y0 + 1) * (1 - fx) + g(x0 + 1, y0 + 1) * fx) * fy

for si in order:
    if only and not (only[0] <= si <= only[1]): continue
    if skip and (skip[0] <= si <= skip[1]): continue
    ctl, isp, tsp, tcw, first, cnt, spr, lst = strips[si]
    if lst in (1, 3): continue
    if lst == 2 and not shadow_done: opaque_shadow_pass()
    textured = (ctl >> 3) & 1; offset_en = (ctl >> 2) & 1; gouraud = (ctl >> 1) & 1
    shade = (tsp >> 6) & 3; use_alpha = (tsp >> 20) & 1; src_i = tsp >> 29; dst_i = (tsp >> 26) & 7
    depth_mode = isp >> 29; cull = (isp >> 27) & 3; zwd = (isp >> 26) & 1
    levels = texture(tcw, tsp) if textured else None
    tw0 = 8 << ((tsp >> 3) & 7); th0 = 8 << (tsp & 7)
    V0 = VT[first:first + cnt]
    for k in range(cnt - 2):
        tri = V0[k:k + 3] if (k % 2 == 0) else V0[[k + 1, k, k + 2]]
        if not np.isfinite(tri[:, :5]).all() or (tri[:, 2] <= 0).any(): continue
        x, y, z = tri[:, 0].astype(np.float64) * SX + OX, tri[:, 1].astype(np.float64) * SY, tri[:, 2].astype(np.float64)
        det = (x[1] - x[0]) * (y[2] - y[0]) - (x[2] - x[0]) * (y[1] - y[0])
        if (cull == 2 and det < 0) or (cull == 3 and det > 0): continue
        x0, x1 = int(max(VX0, np.floor(x.min()))), int(min(VX1 - 1, np.ceil(x.max())))
        y0, y1 = int(max(0, np.floor(y.min()))), int(min(H - 1, np.ceil(y.max())))
        if x1 < x0 or y1 < y0 or abs(det) < 1e-9: continue
        gx, gy = np.meshgrid(np.arange(x0, x1 + 1) + 0.5, np.arange(y0, y1 + 1) + 0.5)
        l0 = ((y[1] - y[2]) * (gx - x[2]) + (x[2] - x[1]) * (gy - y[2])) / ((y[1] - y[2]) * (x[0] - x[2]) + (x[2] - x[1]) * (y[0] - y[2]))
        l1 = ((y[2] - y[0]) * (gx - x[2]) + (x[0] - x[2]) * (gy - y[2])) / ((y[1] - y[2]) * (x[0] - x[2]) + (x[2] - x[1]) * (y[0] - y[2]))
        l2 = 1 - l0 - l1
        m = (l0 >= 0) & (l1 >= 0) & (l2 >= 0)
        if not m.any(): continue
        zz = (l0 * z[0] + l1 * z[1] + l2 * z[2]).astype(np.float32)           # 1/W, linear in screen space
        sub = zb[y0:y1 + 1, x0:x1 + 1]
        dm = {0: np.zeros_like(m), 1: zz < sub, 2: zz == sub, 3: zz <= sub, 4: zz > sub, 5: zz != sub, 6: zz >= sub, 7: np.ones_like(m)}[depth_mode]
        if args.ztrace and lst == 2: zr = ((zz - sub) / np.maximum(sub, 1e-9))[m & (sub > 0)]; ZT.extend(zr.tolist()[:2000])
        m &= dm
        if not m.any(): continue
        pw = np.stack([l0 * z[0], l1 * z[1], l2 * z[2]], -1); pw = pw / np.maximum(pw.sum(-1, keepdims=True), 1e-30)   # perspective weights
        ls = (np.stack([l0, l1, l2], -1) if args.linear_col else pw) if gouraud else np.zeros(l0.shape + (3,)) + np.array([0, 0, 1.0])               # colours: screen-linear, flat = last vertex
        col = np.einsum('hwk,kc->hwc', ls, tri[:, 5:9]); off = np.einsum('hwk,kc->hwc', ls, tri[:, 9:13])
        rgb = col[..., 1:4]; alpha = col[..., 0]
        if textured:
            u = np.einsum('hwk,k->hw', pw, tri[:, 3]); v = np.einsum('hwk,k->hw', pw, tri[:, 4])
            area_s = abs(det); area_t = abs((tri[1, 3] - tri[0, 3]) * (tri[2, 4] - tri[0, 4]) - (tri[2, 3] - tri[0, 3]) * (tri[1, 4] - tri[0, 4])) * tw0 * th0
            lod = 0.5 * np.log2(max(area_t, 1e-9) / max(area_s, 1e-9)) + np.log2(max(z.mean(), 1e-12) / max(float(zz[m].mean()), 1e-12)) + args.lod_bias   # texel density ~ W^2
            tx = sample(levels, tsp, tcw, u, v, lod)
            tr, ta = tx[..., :3], tx[..., 3]
            if shade == 0: rgb, alpha = tr, ta
            elif shade == 1: rgb, alpha = tr * rgb, ta
            elif shade == 2: rgb, alpha = tr * ta[..., None] + rgb * (1 - ta[..., None]), alpha
            else: rgb, alpha = tr * rgb, ta * alpha
            if offset_en: rgb = rgb + off[..., 1:4]
        fogc = (tsp >> 22) & 3
        if FOGT is not None and FOGCOL is not None and fogc in (0, 3) and not (args.no_tfog and lst == 2):
            zi = np.clip(zz * FOGDEN, 1.0, 255.99); ie = np.floor(np.log2(zi)); mm = zi * 16 / 2.0 ** ie - 16
            idx = np.clip(np.floor(mm) + ie * 16, 0, 127).astype(np.int64); fr_ = mm - np.floor(mm)
            ent = FOGT[idx].astype(np.float32); ent2 = FOGT[np.minimum(idx + 1, 127)].astype(np.float32)
            fa = ((ent.astype(np.int64) >> 8) & 255) * (1 - fr_) + (ent.astype(np.int64) & 255) * fr_
            fa = (fa / 255.0)[..., None]
            rgb = FOGCOL * fa + rgb * (1 - fa) if fogc == 0 else np.broadcast_to(FOGCOL * fa, rgb.shape)
        if not use_alpha: alpha = np.ones_like(alpha)
        if lst == 4: m &= alpha >= PT_REF / 255.0
        reg = img[y0:y1 + 1, x0:x1 + 1]
        if lst == 2:
            if (ctl >> 7) & 1 and MODS[1] and SHAD > 0:       # translucent receiver: shadow its colour before blending (volume test against its own depth)
                ins = vol_inside(1, x0, y0, x1, y1, zz) & m
                rgb = np.where(ins[..., None], (rgb * 0.5 + np.array([0.5, 0, 0])) if args.shadow_debug else rgb * SHAD, rgb)
            a = np.clip(alpha, 0, 1); dst = reg
            res = rgb * blend_factor(src_i, rgb, a, dst, False) + dst * blend_factor(dst_i, rgb, a, dst, True)
            reg[m] = np.clip(res, 0, 1)[m]
        else:
            reg[m] = np.clip(rgb, 0, 1)[m]
            sbuf[y0:y1 + 1, x0:x1 + 1][m] = bool((ctl >> 7) & 1)
        if not zwd and not (args.no_tzwrite and lst == 2): sub[m] = zz[m]
        tri_n += 1
if not shadow_done: opaque_shadow_pass()
Image.fromarray((np.clip(img, 0, 1) * 255 + 0.5).astype(np.uint8)).save(out)
if args.ztrace and ZT:
    q = np.array(ZT); print('ztrace n=%d  rel dz percentiles 1/5/25/50/75/95/99:' % len(q), np.percentile(q, [1, 5, 25, 50, 75, 95, 99]).round(5).tolist(), ' frac |dz|<1e-3: %.3f' % (np.abs(q) < 1e-3).mean())
print('rendered', tri_n, 'triangles ->', out)
