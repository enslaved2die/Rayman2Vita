#!/usr/bin/env python3
"""
tools/upscale_alpha_helper.py - Alpha-Preserving Texture Upscale Pipeline

================================================================================
THE FUNDAMENTAL PROBLEM: AI UPSCALING & RGBA TEXTURES
================================================================================
Modern AI super-resolution models (Real-ESRGAN, ESRGAN, HAT, Compact, Remacri,
etc.) are trained almost exclusively on 3-channel (RGB) natural photography or
anime illustrations. They do not have native 4-channel RGBA architecture.

When processing RGBA game textures naively:

1. Black Halo / Dark Fringe Artifacts:
   In raw game assets (e.g. Dreamcast PVR dumps or alpha cutouts), transparent
   texels (Alpha = 0) are usually stored with arbitrary RGB or pure black (0,0,0).
   Deep convolutional neural networks have receptive fields of 15x15 to 31x31
   pixels. When the convolution kernel spans across the boundary of an opaque
   object into transparent pixels, it samples the (0,0,0) black background.
   This severely bleeds dark/black color into the upscaled foreground edges,
   creating ugly dark halos, ringing, and dirty contours around character
   cutouts (hair, bandanas, fingers, leaves, UI icons).

2. Binary Cutout vs Gradient Alpha Confusion:
   - Dreamcast ARGB1555 (1-bit alpha): Binary punch-through transparency (0 or 255).
     In-game shaders and fixed-function pipelines use 1-bit alpha testing
     (discard if alpha < 0.5). If naively scaled or interpolated, the 1-bit alpha
     becomes a blurry, semi-transparent gradient ramp. At alpha-test time, this
     causes geometric erosion and jagged staircasing. If rendered with alpha
     blending instead, it introduces a hazy, washed-out ghost outline.
   - Dreamcast ARGB4444 (4-bit alpha): Gradient transparency (16 discrete levels).
     Used for soft smoke, particle trails, water ripples, and glowing orbs.
     These require smooth anti-aliased interpolation without color-bleed
     contamination from black background voids.

================================================================================
THE SOLUTION: TWO-STREAM EDGE-BLED SPLIT & MERGE WORKFLOW
================================================================================
This script automates the complete alpha-aware upscaling workflow:

1. Alpha Analysis & Classification:
   Detects whether an image is:
   - OPAQUE:   Alpha is 255 across all pixels (no transparency).
   - BINARY:   Alpha values are strictly {0, 255} (Dreamcast ARGB1555 cutout).
   - GRADIENT: Alpha has intermediate values 1..254 (Dreamcast ARGB4444 soft alpha).

2. Edge Bleed Color Extension (`split`):
   Before separating channels, iteratively propagates (bleeds) the RGB colors of
   opaque pixels outward into the transparent/semi-transparent surrounding zones.
   This guarantees that the AI model's convolutional receptive field samples
   matching foreground colors instead of black voids, completely eliminating
   dark halo artifacts.
   The script splits the image into:
   - `<name>_rgb.png`:   24-bit edge-bled RGB color image.
   - `<name>_alpha.png`: 8-bit grayscale alpha mask.
   - `<name>_meta.json`: Provenance metadata recording original alpha mode.

3. Independent Upscaling:
   The RGB image and Alpha mask are upscaled independently using the AI model
   (e.g. `realesrgan-ncnn-vulkan` or `upscayl`) or the built-in high-quality
   resampler fallback.

4. Intelligent Merge & GPU-Safe Edge Bleed (`merge`):
   Combines upscaled RGB and Alpha:
   - BINARY mode:   Applies thresholding (default 128) to restore a razor-sharp
                    1-bit cutout (0 or 255) faithful to original game art.
   - GRADIENT mode: Preserves smooth continuous upscaled alpha values.
   - Final Bleed:   Re-applies color bleeding into any remaining zero-alpha
                    texels so GPU bilinear filtering and mipmapping never sample
                    black border fringes at runtime on PlayStation Vita / PC.

5. Zero-Dependency Pure-Python Fallback:
   Runs out of the box using only Python 3 standard library (zlib, struct),
   with optional transparent acceleration via Pillow/NumPy if installed.
"""

import os
import sys
import argparse
import json
import zlib
import struct
import math
import shutil
import subprocess
import time
import multiprocessing
from typing import Tuple, Optional, Dict, Any, List

# Try importing PIL / Pillow if available
try:
    from PIL import Image as PILImage
    HAS_PIL = True
except ImportError:
    PILImage = None
    HAS_PIL = False


# ==============================================================================
# PURE-PYTHON PNG ENCODER & DECODER (Standard Library zlib + struct)
# ==============================================================================

class RawImage:
    """Represents an uncompressed image buffer with width, height, and channels."""
    def __init__(self, width: int, height: int, channels: int, data: bytearray):
        self.width = width
        self.height = height
        self.channels = channels  # 1 (Grayscale), 3 (RGB), 4 (RGBA)
        self.data = data

    def copy(self) -> 'RawImage':
        return RawImage(self.width, self.height, self.channels, bytearray(self.data))


def decode_png_pure(filepath: str) -> RawImage:
    """Decode 8-bit PNG file to RawImage using only zlib and struct."""
    with open(filepath, 'rb') as f:
        sig = f.read(8)
        if sig != b'\x89PNG\r\n\x1a\n':
            raise ValueError(f"'{filepath}' is not a valid PNG file.")

        width = height = bit_depth = color_type = 0
        idat_chunks = []
        palette = None
        trns = None

        while True:
            len_bytes = f.read(4)
            if not len_bytes:
                break
            chunk_len = struct.unpack('>I', len_bytes)[0]
            chunk_type = f.read(4)
            chunk_data = f.read(chunk_len)
            f.read(4)  # CRC

            if chunk_type == b'IHDR':
                width, height, bit_depth, color_type, comp, filt, inter = struct.unpack(
                    '>IIBBBBB', chunk_data[:13]
                )
                if inter != 0:
                    raise NotImplementedError("Interlaced PNG is not supported in pure-python fallback.")
                if bit_depth != 8:
                    raise NotImplementedError(f"Only 8-bit PNG supported, got bit depth {bit_depth}.")
            elif chunk_type == b'PLTE':
                palette = chunk_data
            elif chunk_type == b'tRNS':
                trns = chunk_data
            elif chunk_type == b'IDAT':
                idat_chunks.append(chunk_data)
            elif chunk_type == b'IEND':
                break

    decompressed = zlib.decompress(b''.join(idat_chunks))

    # Channels per pixel in source
    # 0 = Grayscale, 2 = RGB, 3 = Paletted, 4 = Grayscale+Alpha, 6 = RGBA
    src_channels_map = {0: 1, 2: 3, 3: 1, 4: 2, 6: 4}
    if color_type not in src_channels_map:
        raise ValueError(f"Unsupported PNG color type {color_type}.")
    src_channels = src_channels_map[color_type]
    bpp = src_channels
    stride = width * bpp

    # Scanline unfiltering
    src_pos = 0
    decoded_rows = []
    prev_row = bytearray(stride)

    for y in range(height):
        filter_type = decompressed[src_pos]
        src_pos += 1
        curr_row = bytearray(decompressed[src_pos:src_pos + stride])
        src_pos += stride

        if filter_type == 0:  # None
            pass
        elif filter_type == 1:  # Sub
            for x in range(bpp, stride):
                curr_row[x] = (curr_row[x] + curr_row[x - bpp]) & 0xFF
        elif filter_type == 2:  # Up
            for x in range(stride):
                curr_row[x] = (curr_row[x] + prev_row[x]) & 0xFF
        elif filter_type == 3:  # Average
            for x in range(stride):
                left = curr_row[x - bpp] if x >= bpp else 0
                up = prev_row[x]
                curr_row[x] = (curr_row[x] + ((left + up) >> 1)) & 0xFF
        elif filter_type == 4:  # Paeth
            for x in range(stride):
                a = curr_row[x - bpp] if x >= bpp else 0
                b = prev_row[x]
                c = prev_row[x - bpp] if x >= bpp else 0
                p = a + b - c
                pa, pb, pc = abs(p - a), abs(p - b), abs(p - c)
                pr = a if (pa <= pb and pa <= pc) else (b if pb <= pc else c)
                curr_row[x] = (curr_row[x] + pr) & 0xFF
        else:
            raise ValueError(f"Unknown PNG filter type {filter_type}.")

        decoded_rows.append(curr_row)
        prev_row = curr_row

    # Standardize output to RGBA (4 channels) or RGB (3 channels) or Gray (1 channel)
    if color_type == 6:  # RGBA
        out_data = bytearray(width * height * 4)
        for y, row in enumerate(decoded_rows):
            out_data[y * width * 4:(y + 1) * width * 4] = row
        return RawImage(width, height, 4, out_data)

    elif color_type == 2:  # RGB
        out_data = bytearray(width * height * 3)
        for y, row in enumerate(decoded_rows):
            out_data[y * width * 3:(y + 1) * width * 3] = row
        return RawImage(width, height, 3, out_data)

    elif color_type == 0:  # Grayscale
        out_data = bytearray(width * height)
        for y, row in enumerate(decoded_rows):
            out_data[y * width:(y + 1) * width] = row
        return RawImage(width, height, 1, out_data)

    elif color_type == 4:  # Grayscale + Alpha -> RGBA
        out_data = bytearray(width * height * 4)
        dst_idx = 0
        for y in range(height):
            row = decoded_rows[y]
            for x in range(width):
                g = row[x * 2]
                a = row[x * 2 + 1]
                out_data[dst_idx] = g
                out_data[dst_idx + 1] = g
                out_data[dst_idx + 2] = g
                out_data[dst_idx + 3] = a
                dst_idx += 4
        return RawImage(width, height, 4, out_data)

    elif color_type == 3:  # Paletted -> RGBA / RGB
        if not palette:
            raise ValueError("Indexed PNG missing PLTE chunk.")
        has_alpha = trns is not None
        out_channels = 4 if has_alpha else 3
        out_data = bytearray(width * height * out_channels)
        dst_idx = 0
        for y in range(height):
            row = decoded_rows[y]
            for x in range(width):
                idx = row[x]
                r = palette[idx * 3]
                g = palette[idx * 3 + 1]
                b = palette[idx * 3 + 2]
                out_data[dst_idx] = r
                out_data[dst_idx + 1] = g
                out_data[dst_idx + 2] = b
                if has_alpha:
                    a = trns[idx] if idx < len(trns) else 255
                    out_data[dst_idx + 3] = a
                dst_idx += out_channels
        return RawImage(width, height, out_channels, out_data)

    raise ValueError(f"Unhandled color type {color_type}.")


def encode_png_pure(filepath: str, img: RawImage) -> None:
    """Encode RawImage to 8-bit PNG (Grayscale, RGB, or RGBA) using zlib and struct."""
    width, height, channels, data = img.width, img.height, img.channels, img.data

    if channels == 1:
        color_type = 0  # Grayscale
    elif channels == 3:
        color_type = 2  # RGB
    elif channels == 4:
        color_type = 6  # RGBA
    else:
        raise ValueError(f"Invalid channel count {channels} for PNG encoding.")

    row_bytes = width * channels
    raw_scanlines = bytearray()
    for y in range(height):
        raw_scanlines.append(0)  # Filter type 0 (None)
        raw_scanlines.extend(data[y * row_bytes:(y + 1) * row_bytes])

    compressed_idat = zlib.compress(bytes(raw_scanlines), 6)

    def make_chunk(chunk_type: bytes, chunk_payload: bytes) -> bytes:
        length = struct.pack('>I', len(chunk_payload))
        crc = struct.pack('>I', zlib.crc32(chunk_type + chunk_payload) & 0xFFFFFFFF)
        return length + chunk_type + chunk_payload + crc

    ihdr_payload = struct.pack('>IIBBBBB', width, height, 8, color_type, 0, 0, 0)
    png_bytes = (
        b'\x89PNG\r\n\x1a\n'
        + make_chunk(b'IHDR', ihdr_payload)
        + make_chunk(b'IDAT', compressed_idat)
        + make_chunk(b'IEND', b'')
    )

    os.makedirs(os.path.dirname(os.path.abspath(filepath)), exist_ok=True)
    with open(filepath, 'wb') as f:
        f.write(png_bytes)


# ==============================================================================
# IMAGE LOADING & SAVING ABSTRACTION (PIL with Pure-Python Fallback)
# ==============================================================================

def load_image(filepath: str) -> RawImage:
    """Load image into RawImage (Grayscale, RGB, or RGBA)."""
    if HAS_PIL:
        im = PILImage.open(filepath)
        w, h = im.size
        if im.mode == 'L':
            return RawImage(w, h, 1, bytearray(im.tobytes()))
        elif im.mode == 'RGB':
            return RawImage(w, h, 3, bytearray(im.tobytes()))
        elif im.mode == 'RGBA':
            return RawImage(w, h, 4, bytearray(im.tobytes()))
        elif 'A' in im.mode:
            im = im.convert('RGBA')
            return RawImage(w, h, 4, bytearray(im.tobytes()))
        else:
            im = im.convert('RGB')
            return RawImage(w, h, 3, bytearray(im.tobytes()))
    return decode_png_pure(filepath)


def save_image(filepath: str, img: RawImage) -> None:
    """Save RawImage to disk."""
    if HAS_PIL:
        mode_map = {1: 'L', 3: 'RGB', 4: 'RGBA'}
        mode = mode_map.get(img.channels, 'RGBA')
        im = PILImage.frombytes(mode, (img.width, img.height), bytes(img.data))
        os.makedirs(os.path.dirname(os.path.abspath(filepath)), exist_ok=True)
        im.save(filepath, format='PNG')
    else:
        encode_png_pure(filepath, img)


# ==============================================================================
# ALPHA CLASSIFICATION & ANALYSIS
# ==============================================================================

def analyze_alpha(img: RawImage) -> Dict[str, Any]:
    """
    Classify the texture's alpha channel:
    - OPAQUE:   All pixels have Alpha == 255.
    - BINARY:   All pixels have Alpha in {0, 255} (Dreamcast ARGB1555 punch-through).
    - GRADIENT: Has intermediate alpha values 1..254 (Dreamcast ARGB4444 soft alpha).
    """
    if img.channels < 4:
        return {
            'mode': 'OPAQUE',
            'has_alpha': False,
            'unique_alphas': [255],
            'unique_count': 1,
            'zero_count': 0,
            'opaque_count': img.width * img.height,
            'gradient_count': 0,
            'total_pixels': img.width * img.height
        }

    total_pixels = img.width * img.height
    alpha_data = img.data[3::4]
    unique_alphas = set(alpha_data)

    zero_count = sum(1 for a in alpha_data if a == 0)
    opaque_count = sum(1 for a in alpha_data if a == 255)
    gradient_count = total_pixels - (zero_count + opaque_count)

    if zero_count == 0 and gradient_count == 0:
        mode = 'OPAQUE'
    elif gradient_count == 0:
        mode = 'BINARY'
    else:
        mode = 'GRADIENT'

    return {
        'mode': mode,
        'has_alpha': mode != 'OPAQUE',
        'unique_alphas': sorted(list(unique_alphas)),
        'unique_count': len(unique_alphas),
        'zero_count': zero_count,
        'opaque_count': opaque_count,
        'gradient_count': gradient_count,
        'total_pixels': total_pixels
    }


# ==============================================================================
# EDGE BLEED (ALPHA COLOR DILATION)
# ==============================================================================

def apply_edge_bleed(img: RawImage, passes: int = 8) -> RawImage:
    """
    Propagates RGB colors from opaque texels outward into transparent areas.
    
    This prevents AI convolutions, GPU bilinear filtering, and mipmapping
    from sampling uninitialized or black (0,0,0) texels across cutout edges.
    """
    w, h = img.width, img.height
    n_pixels = w * h
    if img.channels != 4:
        return img.copy()

    # Fast check: are there transparent pixels and opaque pixels?
    alpha = img.data[3::4]
    has_transparent = any(a == 0 for a in alpha)
    has_opaque = any(a > 0 for a in alpha)

    if not has_transparent or not has_opaque:
        return img.copy()

    # Pre-parse pixels into arrays
    rgb = [(img.data[i * 4], img.data[i * 4 + 1], img.data[i * 4 + 2]) for i in range(n_pixels)]
    known = [a > 0 for a in alpha]

    # Iterative multi-pass color bleeding
    for _ in range(passes):
        new_rgb = list(rgb)
        new_known = list(known)
        changed = 0

        for y in range(h):
            y_w = y * w
            for x in range(w):
                idx = y_w + x
                if known[idx]:
                    continue

                # Sample 8-neighborhood for known colors
                sr = sg = sb = k = 0
                for dy in (-1, 0, 1):
                    ny = y + dy
                    if ny < 0 or ny >= h:
                        continue
                    ny_w = ny * w
                    for dx in (-1, 0, 1):
                        nx = x + dx
                        if nx < 0 or nx >= w:
                            continue
                        nidx = ny_w + nx
                        if known[nidx]:
                            r, g, b = rgb[nidx]
                            sr += r
                            sg += g
                            sb += b
                            k += 1

                if k > 0:
                    new_rgb[idx] = (sr // k, sg // k, sb // k)
                    new_known[idx] = True
                    changed += 1

        rgb = new_rgb
        known = new_known
        if changed == 0:
            break

    # Build bled output
    out_data = bytearray(img.data)
    for i in range(n_pixels):
        out_data[i * 4] = rgb[i][0]
        out_data[i * 4 + 1] = rgb[i][1]
        out_data[i * 4 + 2] = rgb[i][2]

    return RawImage(w, h, 4, out_data)


# ==============================================================================
# RESAMPLING ENGINE (PIL or Built-In Bilinear / Nearest Fallback)
# ==============================================================================

def resize_image(img: RawImage, new_w: int, new_h: int, method: str = 'bilinear') -> RawImage:
    """Resize RawImage to new dimensions (used for fallback or testing)."""
    if HAS_PIL:
        mode_map = {1: 'L', 3: 'RGB', 4: 'RGBA'}
        mode = mode_map.get(img.channels, 'RGBA')
        resample = PILImage.Resampling.BILINEAR if method == 'bilinear' else PILImage.Resampling.NEAREST
        pil_img = PILImage.frombytes(mode, (img.width, img.height), bytes(img.data))
        resized = pil_img.resize((new_w, new_h), resample=resample)
        return RawImage(new_w, new_h, img.channels, bytearray(resized.tobytes()))

    # Pure Python Bilinear Resizer
    w, h, channels, data = img.width, img.height, img.channels, img.data
    out = bytearray(new_w * new_h * channels)

    if new_w == 1 and new_h == 1:
        out[:channels] = data[:channels]
        return RawImage(1, 1, channels, out)

    x_ratio = float(w - 1) / (new_w - 1) if new_w > 1 else 0.0
    y_ratio = float(h - 1) / (new_h - 1) if new_h > 1 else 0.0

    x_floor = [int(x_ratio * x) for x in range(new_w)]
    x_ceil = [min(w - 1, x_floor[x] + 1) for x in range(new_w)]
    x_weight = [x_ratio * x - x_floor[x] for x in range(new_w)]

    for y in range(new_h):
        yf = int(y_ratio * y)
        yc = min(h - 1, yf + 1)
        yw = y_ratio * y - yf
        y_stride = y * new_w * channels

        row1_idx = yf * w * channels
        row2_idx = yc * w * channels

        for x in range(new_w):
            xf = x_floor[x]
            xc = x_ceil[x]
            xw = x_weight[x]

            p1_idx = row1_idx + xf * channels
            p2_idx = row1_idx + xc * channels
            p3_idx = row2_idx + xf * channels
            p4_idx = row2_idx + xc * channels

            dst_idx = y_stride + x * channels
            for c in range(channels):
                p1 = data[p1_idx + c]
                p2 = data[p2_idx + c]
                p3 = data[p3_idx + c]
                p4 = data[p4_idx + c]
                val = (1.0 - xw) * (1.0 - yw) * p1 + xw * (1.0 - yw) * p2 + (1.0 - xw) * yw * p3 + xw * yw * p4
                out[dst_idx + c] = min(255, max(0, int(val + 0.5)))

    return RawImage(new_w, new_h, channels, out)


# ==============================================================================
# PIPELINE ACTIONS: SPLIT & MERGE
# ==============================================================================

def op_split(input_path: str, out_dir: Optional[str] = None, bleed_passes: int = 8,
             write_meta: bool = True) -> Tuple[str, str, Dict[str, Any]]:
    """
    Split an RGBA texture into:
    1. `<stem>_rgb.png`:   24-bit RGB with edge bleed applied.
    2. `<stem>_alpha.png`: 8-bit Grayscale alpha mask.
    3. `<stem>_meta.json`: Sidecar JSON recording original classification.
    """
    if not os.path.isfile(input_path):
        raise FileNotFoundError(f"Input file not found: {input_path}")

    img = load_image(input_path)
    if img.channels == 3:
        rgba = bytearray(img.width * img.height * 4)
        for i in range(img.width * img.height):
            rgba[i * 4] = img.data[i * 3]
            rgba[i * 4 + 1] = img.data[i * 3 + 1]
            rgba[i * 4 + 2] = img.data[i * 3 + 2]
            rgba[i * 4 + 3] = 255
        img = RawImage(img.width, img.height, 4, rgba)

    meta = analyze_alpha(img)

    base_dir = out_dir if out_dir else os.path.dirname(os.path.abspath(input_path))
    os.makedirs(base_dir, exist_ok=True)

    filename = os.path.basename(input_path)
    stem, _ = os.path.splitext(filename)

    rgb_out_path = os.path.join(base_dir, f"{stem}_rgb.png")
    alpha_out_path = os.path.join(base_dir, f"{stem}_alpha.png")
    meta_out_path = os.path.join(base_dir, f"{stem}_meta.json")

    # Step 1: Apply edge bleed to RGB channels
    bled_img = apply_edge_bleed(img, passes=bleed_passes)

    # Extract 24-bit RGB
    w, h = img.width, img.height
    rgb_data = bytearray(w * h * 3)
    alpha_data = bytearray(w * h)

    for i in range(w * h):
        rgb_data[i * 3] = bled_img.data[i * 4]
        rgb_data[i * 3 + 1] = bled_img.data[i * 4 + 1]
        rgb_data[i * 3 + 2] = bled_img.data[i * 4 + 2]
        alpha_data[i] = img.data[i * 4 + 3]

    rgb_img = RawImage(w, h, 3, rgb_data)
    alpha_img = RawImage(w, h, 1, alpha_data)

    save_image(rgb_out_path, rgb_img)
    save_image(alpha_out_path, alpha_img)

    meta_dict = {
        'source_file': filename,
        'width': w,
        'height': h,
        'mode': meta['mode'],
        'unique_alphas_count': meta['unique_count'],
        'zero_count': meta['zero_count'],
        'opaque_count': meta['opaque_count'],
        'gradient_count': meta['gradient_count'],
        'bleed_passes': bleed_passes,
        'recommended_merge_mode': meta['mode']
    }

    if write_meta:
        with open(meta_out_path, 'w') as f:
            json.dump(meta_dict, f, indent=2)

    return rgb_out_path, alpha_out_path, meta_dict


def op_merge(rgb_path: str, alpha_path: str, output_path: str,
             mode: str = 'auto', threshold: int = 128, bleed_passes: int = 8,
             meta_path: Optional[str] = None) -> str:
    """
    Merge upscaled RGB and upscaled Alpha back into a final RGBA PNG:
    - BINARY mode:   Threshold alpha (>= threshold -> 255, else 0) to maintain crisp cutouts.
    - GRADIENT mode: Retain smooth upscaled intermediate alpha.
    - Post-bleed:    Bleed RGB into remaining zero-alpha pixels for GPU mip/filter safety.
    """
    if not os.path.isfile(rgb_path):
        raise FileNotFoundError(f"RGB input not found: {rgb_path}")
    if not os.path.isfile(alpha_path):
        raise FileNotFoundError(f"Alpha input not found: {alpha_path}")

    rgb_raw = load_image(rgb_path)
    alpha_raw = load_image(alpha_path)

    # Validate dimensions
    if (rgb_raw.width != alpha_raw.width) or (rgb_raw.height != alpha_raw.height):
        raise ValueError(
            f"Dimension mismatch between RGB ({rgb_raw.width}x{rgb_raw.height}) "
            f"and Alpha ({alpha_raw.width}x{alpha_raw.height})."
        )

    w, h = rgb_raw.width, rgb_raw.height
    n_pixels = w * h

    # Resolve mode if 'auto'
    resolved_mode = mode.upper()
    if resolved_mode == 'AUTO':
        # Check if sidecar metadata exists
        check_meta = meta_path
        if not check_meta:
            stem = os.path.splitext(rgb_path)[0].removesuffix('_rgb')
            cand = stem + '_meta.json'
            if os.path.isfile(cand):
                check_meta = cand

        if check_meta and os.path.isfile(check_meta):
            try:
                with open(check_meta, 'r') as f:
                    m = json.load(f)
                    resolved_mode = m.get('recommended_merge_mode', 'BINARY').upper()
            except Exception:
                resolved_mode = 'BINARY'
        else:
            # Inspect alpha channel directly
            in_between = sum(1 for a in raw_alphas if 16 < a < 240)
            resolved_mode = 'BINARY' if in_between < (n_pixels * 0.05) else 'GRADIENT'

    # Combine channels
    rgba_data = bytearray(w * h * 4)

    # Get alpha source values
    if alpha_raw.channels == 1:
        raw_alphas = alpha_raw.data
    elif alpha_raw.channels == 3:
        # Grayscale mask saved as RGB
        raw_alphas = bytearray(alpha_raw.data[::3])
    elif alpha_raw.channels == 4:
        alpha_channel = alpha_raw.data[3::4]
        if all(a == 255 for a in alpha_channel):
            # Grayscale mask loaded as RGBA
            raw_alphas = bytearray(alpha_raw.data[::4])
        else:
            raw_alphas = alpha_channel
    else:
        raw_alphas = alpha_raw.data

    # Get RGB source values
    rgb_stride = rgb_raw.channels
    for i in range(n_pixels):
        r = rgb_raw.data[i * rgb_stride]
        g = rgb_raw.data[i * rgb_stride + 1]
        b = rgb_raw.data[i * rgb_stride + 2]
        a = raw_alphas[i]

        if resolved_mode == 'BINARY':
            a = 255 if a >= threshold else 0
        elif resolved_mode == 'OPAQUE':
            a = 255

        rgba_data[i * 4] = r
        rgba_data[i * 4 + 1] = g
        rgba_data[i * 4 + 2] = b
        rgba_data[i * 4 + 3] = a

    final_img = RawImage(w, h, 4, rgba_data)

    # Re-apply color bleed on remaining transparent texels
    # This prevents GPU bilinear/mip texture sampling discoloration
    if bleed_passes > 0:
        final_img = apply_edge_bleed(final_img, passes=bleed_passes)

    save_image(output_path, final_img)
    return output_path


# ==============================================================================
# EXTERNAL AI UPSCALER INTEGRATION & BATCH PIPELINE
# ==============================================================================

def find_upscaler_tool(preferred: str = 'auto') -> Tuple[str, str]:
    """Find installed upscaler binary or return 'builtin' fallback."""
    script_dir = os.path.dirname(os.path.abspath(__file__))

    # Local bundled and well-known paths
    known_paths = [
        ('realesrgan-ncnn-vulkan', os.path.join(script_dir, 'realesrgan-ncnn-vulkan', 'realesrgan-ncnn-vulkan')),
        ('realesrgan-ncnn-vulkan', os.path.join(script_dir, 'realesrgan-ncnn-vulkan')),
        ('realesrgan-ncnn-vulkan', '/opt/homebrew/bin/realesrgan-ncnn-vulkan'),
        ('realesrgan-ncnn-vulkan', '/opt/homebrew/share/realesrgan-ncnn-vulkan/realesrgan-ncnn-vulkan'),
        ('realesrgan-ncnn-vulkan', '/usr/local/bin/realesrgan-ncnn-vulkan'),
        ('waifu2x-ncnn-vulkan', os.path.join(script_dir, 'waifu2x-ncnn-vulkan', 'waifu2x-ncnn-vulkan')),
        ('waifu2x-ncnn-vulkan', '/opt/homebrew/bin/waifu2x-ncnn-vulkan'),
    ]

    if preferred != 'auto' and preferred != 'builtin':
        # Check explicit path or known paths first
        if os.path.isfile(preferred) and os.access(preferred, os.X_OK):
            return os.path.basename(preferred), preferred
        for name, kp in known_paths:
            if preferred in (name, os.path.basename(kp)) and os.path.isfile(kp) and os.access(kp, os.X_OK):
                return name, kp
        p = shutil.which(preferred)
        if p:
            return preferred, p
        raise FileNotFoundError(f"Requested tool '{preferred}' not found on PATH or known directories.")

    if preferred == 'builtin':
        return 'builtin', 'builtin'

    # Check known local candidates first (bundled with repo)
    for name, kp in known_paths:
        if os.path.isfile(kp) and os.access(kp, os.X_OK):
            return name, kp

    tools = ['realesrgan-ncnn-vulkan', 'upscayl', 'waifu2x-ncnn-vulkan']
    for t in tools:
        p = shutil.which(t)
        if p:
            return t, p

    return 'builtin', 'builtin'


def run_upscaler(tool_name: str, tool_path: str, input_file: str, output_file: str,
                 scale: int = 4, model: Optional[str] = None) -> None:
    """Run upscaler on a single image file."""
    if tool_name == 'builtin':
        img = load_image(input_file)
        new_w, new_h = img.width * scale, img.height * scale
        upscaled = resize_image(img, new_w, new_h, method='bilinear')
        save_image(output_file, upscaled)
        return

    if tool_name == 'realesrgan-ncnn-vulkan':
        target_model = model or 'realesr-animevideov3'
        cmd = [tool_path, '-i', input_file, '-o', output_file, '-s', str(scale), '-n', target_model]
        # Auto-detect models directory next to binary if present
        model_dir = os.path.join(os.path.dirname(os.path.abspath(tool_path)), 'models')
        if os.path.isdir(model_dir):
            cmd.extend(['-m', model_dir])
        subprocess.check_call(cmd)
        return

    if tool_name == 'waifu2x-ncnn-vulkan':
        cmd = [tool_path, '-i', input_file, '-o', output_file, '-s', str(scale)]
        model_dir = os.path.join(os.path.dirname(os.path.abspath(tool_path)), 'models')
        if os.path.isdir(model_dir):
            cmd.extend(['-m', model_dir])
        subprocess.check_call(cmd)
        return

    if tool_name == 'upscayl':
        cmd = [tool_path, '-i', input_file, '-o', output_file, '-s', str(scale)]
        subprocess.check_call(cmd)
        return

    raise ValueError(f"Unsupported tool: {tool_name}")


def is_button_prompt(path_or_filename: str) -> bool:
    """
    Check if a texture filename corresponds to a controller button prompt.
    Specifically protects s_pad*.png, pad_cross_nz.png, pad_cross*.png.
    """
    fn = os.path.basename(path_or_filename).lower()
    return fn.startswith('s_pad') or fn.startswith('pad_cross') or fn == 'pad_cross_nz.png'


def is_already_upscaled(in_path: str, out_path: str, scale: int = 2) -> bool:
    """
    Check if output file exists, is non-empty, and has valid PNG dimensions
    matching or exceeding the expected upscale size.
    """
    if not os.path.isfile(out_path):
        return False
    try:
        if os.path.getsize(out_path) == 0:
            return False
        with open(out_path, 'rb') as f_out, open(in_path, 'rb') as f_in:
            sig_out = f_out.read(8)
            sig_in = f_in.read(8)
            if sig_out != b'\x89PNG\r\n\x1a\n' or sig_in != b'\x89PNG\r\n\x1a\n':
                return False
            f_out.seek(16)
            f_in.seek(16)
            w_out, h_out = struct.unpack('>II', f_out.read(8))
            w_in, h_in = struct.unpack('>II', f_in.read(8))
            return (w_out >= w_in * scale and h_out >= h_in * scale)
    except Exception:
        return False
    return False


def op_upscale_file(input_path: str, output_path: Optional[str] = None,
                    scale: int = 4, tool: str = 'auto', model: Optional[str] = None,
                    mode: str = 'auto', threshold: int = 128, bleed_passes: int = 8,
                    skip_existing: bool = True, protect_button_prompts: bool = True) -> str:
    """End-to-end clean alpha upscale for a single texture."""
    if not os.path.isfile(input_path):
        raise FileNotFoundError(f"Input file not found: {input_path}")

    filename = os.path.basename(input_path)
    stem, ext = os.path.splitext(filename)

    if not output_path:
        output_path = os.path.join(os.path.dirname(os.path.abspath(input_path)), f"{stem}_x{scale}{ext}")

    if protect_button_prompts and is_button_prompt(filename):
        print(f"Skipping protected button prompt: {input_path}")
        return output_path

    if skip_existing and is_already_upscaled(input_path, output_path, scale):
        print(f"Skipping already upscaled texture: {output_path}")
        return output_path

    tool_name, tool_path = find_upscaler_tool(tool)

    # Temporary directory for intermediate split files
    temp_dir = os.path.join(os.path.dirname(os.path.abspath(output_path)), f"._tmp_{stem}")
    os.makedirs(temp_dir, exist_ok=True)

    try:
        # 1. Split & Bleed
        rgb_path, alpha_path, meta = op_split(input_path, out_dir=temp_dir, bleed_passes=bleed_passes)

        # 2. Upscale RGB
        up_rgb = os.path.join(temp_dir, f"{stem}_rgb_up.png")
        run_upscaler(tool_name, tool_path, rgb_path, up_rgb, scale=scale, model=model)

        # 3. Upscale Alpha
        up_alpha = os.path.join(temp_dir, f"{stem}_alpha_up.png")
        run_upscaler(tool_name, tool_path, alpha_path, up_alpha, scale=scale, model=model)

        # 4. Merge & Threshold & Post-Bleed
        resolved_op_mode = meta['mode'] if mode.upper() == 'AUTO' else mode.upper()
        op_merge(
            rgb_path=up_rgb,
            alpha_path=up_alpha,
            output_path=output_path,
            mode=resolved_op_mode,
            threshold=threshold,
            bleed_passes=bleed_passes,
            meta_path=os.path.join(temp_dir, f"{stem}_meta.json")
        )
    finally:
        # Clean up temporary directory
        if os.path.isdir(temp_dir):
            shutil.rmtree(temp_dir, ignore_errors=True)

    return output_path


def _worker_split(args: Tuple[int, str, str, int, str]) -> Dict[str, Any]:
    """Worker function for parallel Alpha analysis & Edge Bleed Split."""
    file_id, in_p, batch_in_dir, bleed_passes, mode = args
    img = load_image(in_p)
    rgb_name = f"{file_id:06d}_rgb.png"
    rgb_path = os.path.join(batch_in_dir, rgb_name)

    if img.channels == 3:
        save_image(rgb_path, img)
        return {
            'id': file_id,
            'mode': 'OPAQUE',
            'has_alpha': False,
            'w': img.width,
            'h': img.height,
        }

    meta = analyze_alpha(img)
    resolved_mode = meta['mode'] if mode.upper() == 'AUTO' else mode.upper()

    if resolved_mode == 'OPAQUE':
        w, h = img.width, img.height
        rgb_data = bytearray(w * h * 3)
        for i in range(w * h):
            rgb_data[i * 3] = img.data[i * 4]
            rgb_data[i * 3 + 1] = img.data[i * 4 + 1]
            rgb_data[i * 3 + 2] = img.data[i * 4 + 2]
        save_image(rgb_path, RawImage(w, h, 3, rgb_data))
        return {
            'id': file_id,
            'mode': 'OPAQUE',
            'has_alpha': False,
            'w': w,
            'h': h,
        }
    else:
        bled_img = apply_edge_bleed(img, passes=bleed_passes)
        w, h = img.width, img.height
        rgb_data = bytearray(w * h * 3)
        alpha_data = bytearray(w * h)
        for i in range(w * h):
            rgb_data[i * 3] = bled_img.data[i * 4]
            rgb_data[i * 3 + 1] = bled_img.data[i * 4 + 1]
            rgb_data[i * 3 + 2] = bled_img.data[i * 4 + 2]
            alpha_data[i] = img.data[i * 4 + 3]

        save_image(rgb_path, RawImage(w, h, 3, rgb_data))
        alpha_name = f"{file_id:06d}_alpha.png"
        alpha_path = os.path.join(batch_in_dir, alpha_name)
        save_image(alpha_path, RawImage(w, h, 1, alpha_data))
        return {
            'id': file_id,
            'mode': resolved_mode,
            'has_alpha': True,
            'w': w,
            'h': h,
        }


def _worker_merge(args: Tuple[Dict[str, Any], str, str, int, int]) -> None:
    """Worker function for parallel Alpha Merge & GPU-safe Edge Bleed."""
    item, batch_out_dir, out_path, threshold, bleed_passes = args
    file_id = item['id']
    mode = item['mode']
    has_alpha = item['has_alpha']

    rgb_out_p = os.path.join(batch_out_dir, f"{file_id:06d}_rgb.png")
    if not os.path.isfile(rgb_out_p):
        raise FileNotFoundError(f"Missing upscaled RGB: {rgb_out_p}")

    rgb_raw = load_image(rgb_out_p)
    w, h = rgb_raw.width, rgb_raw.height
    n_pixels = w * h

    if not has_alpha or mode == 'OPAQUE':
        rgba_data = bytearray(w * h * 4)
        rgb_stride = rgb_raw.channels
        for i in range(n_pixels):
            rgba_data[i * 4] = rgb_raw.data[i * rgb_stride]
            rgba_data[i * 4 + 1] = rgb_raw.data[i * rgb_stride + 1]
            rgba_data[i * 4 + 2] = rgb_raw.data[i * rgb_stride + 2]
            rgba_data[i * 4 + 3] = 255
        out_img = RawImage(w, h, 4, rgba_data)
    else:
        alpha_out_p = os.path.join(batch_out_dir, f"{file_id:06d}_alpha.png")
        if not os.path.isfile(alpha_out_p):
            raise FileNotFoundError(f"Missing upscaled Alpha: {alpha_out_p}")
        alpha_raw = load_image(alpha_out_p)
        if (alpha_raw.width != w) or (alpha_raw.height != h):
            raise ValueError(f"Dimension mismatch between RGB ({w}x{h}) and Alpha ({alpha_raw.width}x{alpha_raw.height})")

        if alpha_raw.channels == 1:
            raw_alphas = alpha_raw.data
        elif alpha_raw.channels == 3:
            raw_alphas = bytearray(alpha_raw.data[::3])
        elif alpha_raw.channels == 4:
            raw_alphas = bytearray(alpha_raw.data[3::4])
        else:
            raw_alphas = alpha_raw.data

        rgba_data = bytearray(w * h * 4)
        rgb_stride = rgb_raw.channels
        for i in range(n_pixels):
            r = rgb_raw.data[i * rgb_stride]
            g = rgb_raw.data[i * rgb_stride + 1]
            b = rgb_raw.data[i * rgb_stride + 2]
            a = raw_alphas[i]
            if mode == 'BINARY':
                a = 255 if a >= threshold else 0
            rgba_data[i * 4] = r
            rgba_data[i * 4 + 1] = g
            rgba_data[i * 4 + 2] = b
            rgba_data[i * 4 + 3] = a

        out_img = RawImage(w, h, 4, rgba_data)
        if bleed_passes > 0:
            out_img = apply_edge_bleed(out_img, passes=bleed_passes)

    os.makedirs(os.path.dirname(os.path.abspath(out_path)), exist_ok=True)
    save_image(out_path, out_img)


def op_upscale_batch(input_dir: str, output_dir: str, scale: int = 4,
                     tool: str = 'auto', model: Optional[str] = None,
                     mode: str = 'auto', threshold: int = 128, bleed_passes: int = 8,
                     chunk_size: int = 500, skip_existing: bool = True,
                     protect_button_prompts: bool = True) -> int:
    """
    High-throughput batch upscale with multi-core parallel split & merge,
    and single-session GPU Vulkan neural network batching.
    """
    os.makedirs(output_dir, exist_ok=True)
    tool_name, tool_path = find_upscaler_tool(tool)

    # Clean up any leftover temp batch directories from prior interrupted runs
    for item in os.listdir(output_dir):
        if item.startswith("._tmp_batch_"):
            shutil.rmtree(os.path.join(output_dir, item), ignore_errors=True)

    # Collect all input PNG files
    file_list = []
    skipped_existing = 0
    skipped_prompts = 0

    for root, _, files in os.walk(input_dir):
        for fn in sorted(files):
            if fn.lower().endswith('.png') and not fn.startswith('._'):
                in_p = os.path.join(root, fn)
                rel_p = os.path.relpath(in_p, input_dir)
                out_p = os.path.join(output_dir, rel_p)

                if protect_button_prompts and is_button_prompt(fn):
                    skipped_prompts += 1
                    continue

                if skip_existing and is_already_upscaled(in_p, out_p, scale):
                    skipped_existing += 1
                    continue

                file_list.append((in_p, out_p, rel_p))

    total_files = len(file_list)
    if skipped_prompts > 0:
        print(f"Protected / skipped {skipped_prompts} button prompt textures.")
    if skipped_existing > 0:
        print(f"Skipped {skipped_existing} already upscaled textures.")

    if total_files == 0:
        print(f"All PNG files from '{input_dir}' are already upscaled or protected.")
        return 0

    print(f"Found {total_files} PNG images to upscale from '{input_dir}'.")
    print(f"Upscaling backend: {tool_name} ({tool_path}) at {scale}x with model '{model or 'realesr-animevideov3'}'")

    if tool_name != 'realesrgan-ncnn-vulkan':
        # Fallback to file-by-file for tools that do not support folder batch mode
        for idx, (in_p, out_p, rel_p) in enumerate(file_list):
            print(f"Processing [{idx + 1}/{total_files}]: {rel_p} ...")
            op_upscale_file(
                in_p, out_p, scale=scale, tool=tool, model=model,
                mode=mode, threshold=threshold, bleed_passes=bleed_passes,
                skip_existing=skip_existing, protect_button_prompts=protect_button_prompts
            )
        return total_files

    # Fast Batch Mode with realesrgan-ncnn-vulkan
    num_cpus = os.cpu_count() or 4
    target_model = model or 'realesr-animevideov3'
    model_dir = os.path.join(os.path.dirname(os.path.abspath(tool_path)), 'models')

    # Process in chunks to keep disk usage and working directories manageable
    processed_count = 0
    start_total_time = time.time()

    for chunk_start in range(0, total_files, chunk_size):
        chunk_files = file_list[chunk_start:chunk_start + chunk_size]
        chunk_len = len(chunk_files)
        print(f"\n--- Batch Chunk [{chunk_start + 1} - {chunk_start + chunk_len} of {total_files}] ---")

        temp_batch_in = os.path.join(output_dir, f"._tmp_batch_{chunk_start}_in")
        temp_batch_out = os.path.join(output_dir, f"._tmp_batch_{chunk_start}_out")
        os.makedirs(temp_batch_in, exist_ok=True)
        os.makedirs(temp_batch_out, exist_ok=True)

        try:
            # Step 1: Parallel Split
            t0 = time.time()
            split_tasks = [
                (i, chunk_files[i][0], temp_batch_in, bleed_passes, mode)
                for i in range(chunk_len)
            ]
            print(f"[1/3] Multi-core parallel split & edge-bleed ({chunk_len} files on {num_cpus} CPUs)...")
            with multiprocessing.Pool(processes=num_cpus) as pool:
                meta_results = pool.map(_worker_split, split_tasks)
            t1 = time.time()
            print(f"      Split completed in {t1 - t0:.2f} s ({((t1 - t0) / chunk_len) * 1000:.1f} ms/img).")

            # Step 2: GPU Vulkan Batch Upscale
            print(f"[2/3] GPU neural upscaling via realesrgan-ncnn-vulkan (folder mode)...")
            t_gpu0 = time.time()
            cmd = [
                tool_path,
                '-i', temp_batch_in,
                '-o', temp_batch_out,
                '-s', str(scale),
                '-n', target_model,
                '-j', '2:4:2'
            ]
            if os.path.isdir(model_dir):
                cmd.extend(['-m', model_dir])

            res = subprocess.run(cmd, capture_output=True, text=True)
            if res.returncode != 0:
                print(f"realesrgan error: {res.stderr}")
                raise RuntimeError(f"realesrgan-ncnn-vulkan batch failed with code {res.returncode}: {res.stderr}")

            t_gpu1 = time.time()
            print(f"      GPU batch upscaled in {t_gpu1 - t_gpu0:.2f} s.")

            # Step 3: Parallel Merge
            print(f"[3/3] Multi-core parallel merge & post-bleed ({chunk_len} files on {num_cpus} CPUs)...")
            t_m0 = time.time()
            merge_tasks = [
                (meta_results[i], temp_batch_out, chunk_files[i][1], threshold, bleed_passes)
                for i in range(chunk_len)
            ]
            with multiprocessing.Pool(processes=num_cpus) as pool:
                pool.map(_worker_merge, merge_tasks)
            t_m1 = time.time()
            print(f"      Merge completed in {t_m1 - t_m0:.2f} s ({((t_m1 - t_m0) / chunk_len) * 1000:.1f} ms/img).")

            processed_count += chunk_len
            elapsed = time.time() - start_total_time
            print(f"Progress: {processed_count}/{total_files} textures upscaled ({elapsed:.1f} s elapsed).")

        finally:
            shutil.rmtree(temp_batch_in, ignore_errors=True)
            shutil.rmtree(temp_batch_out, ignore_errors=True)

    total_time = time.time() - start_total_time
    print(f"\n================================================================================")
    print(f"Batch upscale finished: {processed_count} textures upscaled in {total_time:.2f} s ({total_time / processed_count:.3f} s/img) -> {output_dir}")
    print(f"================================================================================")
    return processed_count


# ==============================================================================
# CLI INTERFACE
# ==============================================================================

def main():
    parser = argparse.ArgumentParser(
        description="Alpha-preserving texture upscaler for Dreamcast / Rayman 2 assets.\n"
                    "Eliminates black halo edge bleed and blurry 1-bit alpha cutouts.",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=__doc__
    )
    subparsers = parser.add_subparsers(dest="command", help="Command to run")

    # Command: info
    p_info = subparsers.add_parser("info", help="Inspect and classify texture alpha format")
    p_info.add_argument("input", help="Input PNG file or directory")

    # Command: split
    p_split = subparsers.add_parser("split", help="Split RGBA into bled RGB and Alpha mask")
    p_split.add_argument("input", help="Input PNG file")
    p_split.add_argument("-o", "--output-dir", help="Output directory (default: same as input)")
    p_split.add_argument("--bleed-passes", type=int, default=8, help="Number of edge bleed passes (default: 8)")
    p_split.add_argument("--no-meta", action="store_true", help="Do not write metadata .json sidecar")

    # Command: merge
    p_merge = subparsers.add_parser("merge", help="Merge upscaled RGB and Alpha mask into RGBA")
    p_merge.add_argument("rgb", help="Upscaled RGB PNG file")
    p_merge.add_argument("alpha", help="Upscaled Alpha mask PNG file")
    p_merge.add_argument("-o", "--output", required=True, help="Output RGBA PNG file")
    p_merge.add_argument("--mode", choices=['auto', 'binary', 'gradient', 'opaque'], default='auto',
                         help="Alpha reconstruction mode (default: auto)")
    p_merge.add_argument("--threshold", type=int, default=128,
                         help="Cutout threshold for binary mode [0-255] (default: 128)")
    p_merge.add_argument("--bleed-passes", type=int, default=8,
                         help="Post-merge edge bleed passes for GPU mip safety (default: 8)")
    p_merge.add_argument("--meta", help="Optional path to metadata .json sidecar")

    # Command: upscale
    p_up = subparsers.add_parser("upscale", help="Automated end-to-end upscale pipeline")
    p_up.add_argument("input", help="Input PNG file or directory")
    p_up.add_argument("-o", "--output", help="Output PNG file or directory")
    p_up.add_argument("-s", "--scale", type=int, default=4, help="Upscale factor: 2, 4, etc. (default: 4)")
    p_up.add_argument("--tool", choices=['auto', 'realesrgan', 'upscayl', 'waifu2x', 'builtin'],
                      default='auto', help="Upscaling backend (default: auto)")
    p_up.add_argument("--model", default="realesr-animevideov3",
                      help="Model name for external upscaler (default: realesr-animevideov3)")
    p_up.add_argument("--mode", choices=['auto', 'binary', 'gradient', 'opaque'], default='auto',
                      help="Alpha mode override (default: auto)")
    p_up.add_argument("--threshold", type=int, default=128, help="Binary cutout threshold (default: 128)")
    p_up.add_argument("--bleed-passes", type=int, default=8, help="Edge bleed passes (default: 8)")
    p_up.add_argument("--chunk-size", type=int, default=500, help="Batch chunk size (default: 500)")
    p_up.add_argument("--force", action="store_true", help="Force re-upscaling even if already upscaled")
    p_up.add_argument("--no-protect-prompts", action="store_true", help="Do not protect/skip button prompts")

    args = parser.parse_args()

    if not args.command:
        parser.print_help()
        sys.exit(1)

    if args.command == "info":
        if os.path.isdir(args.input):
            print(f"Scanning directory: {args.input}\n")
            counts = {'OPAQUE': 0, 'BINARY': 0, 'GRADIENT': 0}
            for root, _, files in os.walk(args.input):
                for f in sorted(files):
                    if f.lower().endswith('.png') and not f.startswith('._'):
                        p = os.path.join(root, f)
                        try:
                            m = analyze_alpha(load_image(p))
                            counts[m['mode']] += 1
                            print(f"  {f:35s} | {m['mode']:8s} | {m['unique_count']:3d} alphas | "
                                  f"zeros: {m['zero_count']:5d} | opaque: {m['opaque_count']:5d} | grad: {m['gradient_count']:5d}")
                        except Exception as e:
                            print(f"  {f:35s} | ERROR: {e}")
            print(f"\nSummary: Opaque={counts['OPAQUE']}, Binary={counts['BINARY']}, Gradient={counts['GRADIENT']}")
        else:
            img = load_image(args.input)
            m = analyze_alpha(img)
            print(f"File:         {args.input}")
            print(f"Dimensions:   {img.width}x{img.height}")
            print(f"Channels:     {img.channels}")
            print(f"Alpha Mode:   {m['mode']}")
            print(f"Unique Alphas:{m['unique_count']} {m['unique_alphas'][:16]}")
            print(f"Pixel Counts: Total={m['total_pixels']}, Zero={m['zero_count']}, "
                  f"Opaque={m['opaque_count']}, Gradient={m['gradient_count']}")

    elif args.command == "split":
        rgb, alpha, meta = op_split(
            args.input, out_dir=args.output_dir,
            bleed_passes=args.bleed_passes, write_meta=not args.no_meta
        )
        print(f"Split successful:")
        print(f"  Bled RGB:   {rgb}")
        print(f"  Alpha Mask: {alpha}")
        print(f"  Detected:   {meta['mode']} ({meta['unique_alphas_count']} distinct alpha values)")

    elif args.command == "merge":
        out = op_merge(
            rgb_path=args.rgb,
            alpha_path=args.alpha,
            output_path=args.output,
            mode=args.mode.upper(),
            threshold=args.threshold,
            bleed_passes=args.bleed_passes,
            meta_path=args.meta
        )
        print(f"Merged successfully: {out}")

    elif args.command == "upscale":
        if os.path.isdir(args.input):
            out_dir = args.output if args.output else f"{args.input}_upscaled"
            n = op_upscale_batch(
                input_dir=args.input, output_dir=out_dir, scale=args.scale,
                tool=args.tool, model=args.model, mode=args.mode.upper(),
                threshold=args.threshold, bleed_passes=args.bleed_passes,
                chunk_size=args.chunk_size, skip_existing=not args.force,
                protect_button_prompts=not args.no_protect_prompts
            )
            print(f"Batch upscale complete. Processed {n} images -> {out_dir}")
        else:
            out_p = op_upscale_file(
                input_path=args.input, output_path=args.output, scale=args.scale,
                tool=args.tool, model=args.model, mode=args.mode.upper(),
                threshold=args.threshold, bleed_passes=args.bleed_passes,
                skip_existing=not args.force,
                protect_button_prompts=not args.no_protect_prompts
            )
            print(f"Upscale complete: {out_p}")


if __name__ == '__main__':
    main()
