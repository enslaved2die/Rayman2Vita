#!/usr/bin/env python3
"""
deduplicate_vita_textures.py - Deduplicate and optimize texture pack for PS Vita.

Creates `vita_textures_compact/` from `vita_textures/`:
1. Identical textures across banks are stored once at root: `vita_textures_compact/<name>.dds`.
2. Textures with bank-specific variations place the most common variant at root,
   and differing bank-specific variants in `vita_textures_compact/<bank>/<name>.dds`.
3. All UI and button prompt textures from the global FIX bank are preserved in `vita_textures_compact/FIX/`.
4. Standalone textures (0GDTEX, DPWWW) are placed at root.
"""

import os
import shutil
import hashlib
import glob
import csv
from collections import defaultdict, Counter

SOURCE_DIR = "vita_textures"
TARGET_DIR = "vita_textures_compact"
MANIFEST_PATH = "extracted_textures/manifest.csv"

def get_file_hash(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        while chunk := f.read(65536):
            h.update(chunk)
    return h.hexdigest()

def main():
    print(f"[*] Scanning source directory: {SOURCE_DIR} ...")
    if not os.path.isdir(SOURCE_DIR):
        print(f"[-] Source directory {SOURCE_DIR} does not exist!")
        return 1

    all_dds_files = glob.glob(os.path.join(SOURCE_DIR, "**", "*.dds"), recursive=True)
    print(f"[*] Found {len(all_dds_files)} DDS files in {SOURCE_DIR}")

    file_hashes = {}
    by_filename = defaultdict(list)

    for p in all_dds_files:
        rel = os.path.relpath(p, SOURCE_DIR)
        parts = rel.split(os.sep)
        if len(parts) == 1:
            bank = "DISC"
            name = parts[0]
        elif len(parts) == 2:
            bank = parts[0]
            name = parts[1]
        elif len(parts) == 3 and parts[0] == "DPWWW" and parts[1] == "MODEL":
            bank = "DPWWW"
            name = parts[2]
        else:
            print(f"[!] Warning: unexpected path structure: {rel}")
            continue

        h = get_file_hash(p)
        file_hashes[p] = h
        sz = os.path.getsize(p)
        by_filename[name].append((bank, rel, p, h, sz))

    print(f"[*] Total unique filenames: {len(by_filename)}")

    # Plan compact layout
    # mapping: target_rel_path -> source_file_path
    target_mapping = {}

    # 1. FIX bank textures -> FIX/<name>.dds
    for name, occs in by_filename.items():
        if occs[0][0] == "FIX":
            target_mapping[os.path.join("FIX", name)] = occs[0][2]

    # 2. Non-FIX textures:
    single_variant_count = 0
    multi_variant_count = 0
    override_count = 0

    for name, occs in by_filename.items():
        if occs[0][0] == "FIX":
            continue

        hashes = Counter(x[3] for x in occs)
        if len(hashes) == 1:
            single_variant_count += 1
            # Identical across all occurrences -> place one at root
            target_mapping[name] = occs[0][2]
        else:
            multi_variant_count += 1
            # Most common variant goes to root
            common_hash, _ = hashes.most_common(1)[0]
            common_src = next(x[2] for x in occs if x[3] == common_hash)
            target_mapping[name] = common_src

            # Differing variants go to <bank>/<name>.dds
            for b, rel, p, h, sz in occs:
                if h != common_hash:
                    target_mapping[os.path.join(b, name)] = p
                    override_count += 1

    print(f"[*] Single-variant texture names: {single_variant_count}")
    print(f"[*] Multi-variant texture names: {multi_variant_count}")
    print(f"[*] Bank-specific overrides needed: {override_count}")
    print(f"[*] Total files in planned compact layout: {len(target_mapping)}")

    # Prepare TARGET_DIR
    if os.path.exists(TARGET_DIR):
        print(f"[*] Removing existing {TARGET_DIR} ...")
        shutil.rmtree(TARGET_DIR)
    os.makedirs(TARGET_DIR, exist_ok=True)

    print(f"[*] Writing deduplicated textures to {TARGET_DIR} ...")
    copied = 0
    for target_rel, src_path in target_mapping.items():
        dest = os.path.join(TARGET_DIR, target_rel)
        os.makedirs(os.path.dirname(dest), exist_ok=True)
        shutil.copy2(src_path, dest)
        copied += 1
        if copied % 500 == 0 or copied == len(target_mapping):
            print(f"    Copied {copied}/{len(target_mapping)} files...")

    # Calculate final stats
    compact_files = glob.glob(os.path.join(TARGET_DIR, "**", "*.dds"), recursive=True)
    total_size_bytes = sum(os.path.getsize(f) for f in compact_files)
    total_size_mb = total_size_bytes / (1024 * 1024)

    print(f"\n[+] Successfully created {TARGET_DIR}!")
    print(f"    Total files: {len(compact_files)}")
    print(f"    Total folder size: {total_size_mb:.2f} MB ({total_size_bytes} bytes)")

    return 0

if __name__ == "__main__":
    exit(main())
