#!/usr/bin/env python3
"""
generate_livearea_assets.py
Generates valid RGBA PNG images for PS Vita LiveArea and SFO metadata:
- sce_sys/icon0.png (128x128 RGBA)
- sce_sys/livearea/contents/bg.png (840x500 RGBA)
- sce_sys/livearea/contents/startup.png (280x158 RGBA)
"""

import math
import os
import struct
import zlib

def make_png(width, height, pixel_fn):
    raw_bytes = bytearray()
    for y in range(height):
        raw_bytes.append(0)  # Filter type 0 (None)
        for x in range(width):
            r, g, b, a = pixel_fn(x, y, width, height)
            raw_bytes.extend((int(r) & 0xFF, int(g) & 0xFF, int(b) & 0xFF, int(a) & 0xFF))

    compressed = zlib.compress(bytes(raw_bytes), level=9)
    out = bytearray(b'\x89PNG\r\n\x1a\n')

    def write_chunk(chunk_type, data):
        out.extend(struct.pack('>I', len(data)))
        out.extend(chunk_type)
        out.extend(data)
        crc = zlib.crc32(chunk_type + data) & 0xFFFFFFFF
        out.extend(struct.pack('>I', crc))

    # IHDR: width, height, 8-bit, RGBA (6), compression 0, filter 0, interlace 0
    ihdr = struct.pack('>IIBBBBB', width, height, 8, 6, 0, 0, 0)
    write_chunk(b'IHDR', ihdr)
    write_chunk(b'IDAT', compressed)
    write_chunk(b'IEND', b'')
    return bytes(out)

def clamp(val, min_v=0, max_v=255):
    return max(min_v, min(max_v, val))

# 1. icon0.png (128x128) - Rayman 2 Crest / Golden Lum & Violet
def icon0_pixel(x, y, w, h):
    cx, cy = w / 2.0, h / 2.0
    dx, dy = x - cx, y - cy
    dist = math.sqrt(dx * dx + dy * dy)

    # Rounded rectangle border check (corner radius 20)
    rx = min(x, w - 1 - x)
    ry = min(y, h - 1 - y)
    corner_r = 18
    if rx < corner_r and ry < corner_r:
        cdist = math.sqrt((corner_r - rx)**2 + (corner_r - ry)**2)
        if cdist > corner_r:
            return 0, 0, 0, 0  # Transparent outer corner

    # Background gradient: Deep royal purple to twilight indigo
    t_y = y / float(h)
    bg_r = 45 + 30 * (1.0 - t_y)
    bg_g = 15 + 10 * (1.0 - t_y)
    bg_b = 65 + 40 * (1.0 - t_y)

    # Golden Lum core at center
    lum_r = 24.0
    lum_dist = math.sqrt(dx * dx + (dy + 6) * (dy + 6))
    if lum_dist < lum_r:
        glow = 1.0 - (lum_dist / lum_r)
        r = bg_r * (1.0 - glow) + 255 * glow
        g = bg_g * (1.0 - glow) + 225 * glow
        b = bg_b * (1.0 - glow) + 60 * glow
    elif lum_dist < lum_r * 2.2:
        glow = (1.0 - ((lum_dist - lum_r) / (lum_r * 1.2))) * 0.55
        r = bg_r * (1.0 - glow) + 255 * glow
        g = bg_g * (1.0 - glow) + 180 * glow
        b = bg_b * (1.0 - glow) + 30 * glow
    else:
        r, g, b = bg_r, bg_g, bg_b

    # Gold rim border
    edge = min(rx, ry)
    if rx < corner_r and ry < corner_r:
        edge = corner_r - cdist
    if edge < 3:
        r, g, b = 255, 215, 0

    return clamp(r), clamp(g), clamp(b), 255

# 2. bg.png (840x500) - Enchanted Forest / Isle of Doors Twilight
def bg_pixel(x, y, w, h):
    u = x / float(w)
    v = y / float(h)

    # Top twilight purple -> Mid ocean blue -> Bottom enchanted green
    if v < 0.55:
        # 0.0 -> 0.55: Sky from dark purple (15, 8, 30) to deep azure (18, 35, 75)
        nv = v / 0.55
        r = 15 + (18 - 15) * nv
        g = 8 + (35 - 8) * nv
        b = 30 + (75 - 30) * nv
    else:
        # 0.55 -> 1.0: Azure to enchanted forest deep teal (10, 48, 42)
        nv = (v - 0.55) / 0.45
        r = 18 + (10 - 18) * nv
        g = 35 + (48 - 35) * nv
        b = 75 + (42 - 75) * nv

    # Celestial Moon / Magic glow in upper right (x=640, y=140)
    mdx = x - 640
    mdy = y - 140
    mdist = math.sqrt(mdx * mdx + mdy * mdy)
    if mdist < 180:
        mglow = (1.0 - (mdist / 180.0)) ** 2 * 0.65
        r += 120 * mglow
        g += 180 * mglow
        b += 220 * mglow

    # Yellow Lums floating around (several luminous points)
    lums = [(220, 280), (380, 220), (520, 310), (160, 180), (700, 360)]
    for lx, ly in lums:
        ldist = math.sqrt((x - lx)**2 + (y - ly)**2)
        if ldist < 32:
            lglow = (1.0 - (ldist / 32.0)) ** 1.8 * 0.8
            r += 255 * lglow
            g += 230 * lglow
            b += 80 * lglow

    return clamp(r), clamp(g), clamp(b), 255

# 3. startup.png (280x158) - LiveArea Gate Startup Button
def startup_pixel(x, y, w, h):
    cx, cy = w / 2.0, h / 2.0
    dx, dy = x - cx, y - cy

    # Rounded rectangle button with 16px radius
    rx = min(x, w - 1 - x)
    ry = min(y, h - 1 - y)
    cr = 16
    cdist = 0
    if rx < cr and ry < cr:
        cdist = math.sqrt((cr - rx)**2 + (cr - ry)**2)
        if cdist > cr:
            return 0, 0, 0, 0  # Transparent outer corner

    # Vertical gradient: luminous golden-amber gate button
    v = y / float(h)
    r = 240 - 50 * v
    g = 150 - 40 * v
    b = 30 + 10 * v

    # Play triangle icon at center (dx, dy)
    # Triangle points: (-14, -20), (-14, 20), (18, 0)
    tx = dx + 3
    ty = dy
    if -16 <= tx <= 16 and abs(ty) <= (16 - tx) * 0.7:
        r, g, b = 255, 255, 255

    # Button border: Bright gold highlight
    edge = min(rx, ry)
    if rx < cr and ry < cr:
        edge = cr - cdist
    if edge < 3:
        r, g, b = 255, 220, 110

    return clamp(r), clamp(g), clamp(b), 255

def main():
    os.makedirs('sce_sys/livearea/contents', exist_ok=True)

    print("Generating sce_sys/icon0.png (128x128)...")
    icon0_data = make_png(128, 128, icon0_pixel)
    with open('sce_sys/icon0.png', 'wb') as f:
        f.write(icon0_data)

    print("Generating sce_sys/livearea/contents/bg.png (840x500)...")
    bg_data = make_png(840, 500, bg_pixel)
    with open('sce_sys/livearea/contents/bg.png', 'wb') as f:
        f.write(bg_data)

    print("Generating sce_sys/livearea/contents/startup.png (280x158)...")
    startup_data = make_png(280, 158, startup_pixel)
    with open('sce_sys/livearea/contents/startup.png', 'wb') as f:
        f.write(startup_data)

    print("All LiveArea PNG assets generated successfully.")

if __name__ == '__main__':
    main()
