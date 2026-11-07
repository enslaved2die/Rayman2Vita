#!/usr/bin/env python3
"""
tools/bake_compressed_textures.py
Fast Batch Converter: PNG Textures -> PS Vita Hardware-Compressed DDS (DXT1 / DXT5)

Usage:
    python3 tools/bake_compressed_textures.py [options] [input_dir] [output_dir]

Options:
    --force              Force re-baking of all textures (ignore cache)
    --dxt5               Force DXT5 encoding for all textures (default: auto DXT1/DXT5)
    --mipmaps            Generate full mipmap chains
    --sync-vita3k        Sync newly baked DDS textures to Vita3K directory
"""

import sys
import os
import subprocess
import shutil

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
C_TOOL_SRC = os.path.join(REPO_ROOT, "tools", "bake_compressed_textures.c")
C_TOOL_BIN = os.path.join(REPO_ROOT, "tools", "bake_compressed_textures")
VITA3K_DIR = os.path.expanduser("~/Library/Application Support/Vita3K/Vita3K/fs/ux0/data/rayman2/textures")

def ensure_binary():
    if not os.path.exists(C_TOOL_BIN) or os.path.getmtime(C_TOOL_SRC) > os.path.getmtime(C_TOOL_BIN):
        print("[BAKE] Compiling native bake_compressed_textures engine...")
        cmd = [
            "clang", "-O3", "-Wall", "-Wextra",
            "-I" + os.path.join(REPO_ROOT, "include"),
            "-I" + os.path.join(REPO_ROOT, "src", "cpa"),
            C_TOOL_SRC,
            os.path.join(REPO_ROOT, "src", "cpa", "cpa_hd_tex.c"),
            os.path.join(REPO_ROOT, "src", "cpa", "cpa_hd_manifest.c"),
            "-lpthread", "-o", C_TOOL_BIN
        ]
        res = subprocess.run(cmd)
        if res.returncode != 0:
            print("[ERROR] Failed to compile bake_compressed_textures")
            sys.exit(1)

def main():
    ensure_binary()

    args = sys.argv[1:]
    sync_v3k = "--sync-vita3k" in args
    if sync_v3k:
        args.remove("--sync-vita3k")

    cmd = [C_TOOL_BIN] + args
    res = subprocess.run(cmd)
    if res.returncode != 0:
        sys.exit(res.returncode)

    if sync_v3k and os.path.exists(VITA3K_DIR):
        print(f"\n[SYNC] Syncing baked textures to Vita3K ({VITA3K_DIR})...")
        src_root = os.path.join(REPO_ROOT, "upscaled_textures")
        count = 0
        for root, dirs, files in os.walk(src_root):
            rel = os.path.relpath(root, src_root)
            dst_root = os.path.join(VITA3K_DIR, rel)
            os.makedirs(dst_root, exist_ok=True)
            for f in files:
                if f.endswith(".dds"):
                    src_f = os.path.join(root, f)
                    dst_f = os.path.join(dst_root, f)
                    if not os.path.exists(dst_f) or os.path.getmtime(src_f) > os.path.getmtime(dst_f):
                        shutil.copy2(src_f, dst_f)
                        count += 1
        print(f"[SYNC] Synced {count} DDS textures to Vita3K.\n")

if __name__ == "__main__":
    main()
