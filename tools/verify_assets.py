#!/usr/bin/env python3
"""
tools/verify_assets.py
Verifies primary Dreamcast assets and secondary PC guidance assets for Rayman 2 PS Vita port.
Computes SHA-256 hashes, file sizes, and verification status.
Outputs an inventory manifest to JSON and performs strict validation.
"""

import os
import sys
import json
import hashlib
import argparse
from pathlib import Path
from datetime import datetime, timezone


def compute_sha256(filepath, chunk_size=65536):
    """Computes SHA-256 checksum of a file."""
    h = hashlib.sha256()
    with open(filepath, "rb") as f:
        while True:
            chunk = f.read(chunk_size)
            if not chunk:
                break
            h.update(chunk)
    return h.hexdigest()


def scan_file_entry(base_dir, file_path):
    """Generates file metadata dictionary."""
    resolved_path = file_path.resolve()
    stat = file_path.stat()
    is_symlink = file_path.is_symlink()
    link_target = os.readlink(file_path) if is_symlink else None

    entry = {
        "relative_path": str(file_path.relative_to(base_dir)),
        "is_symlink": is_symlink,
        "size_bytes": stat.st_size,
    }
    if link_target:
        entry["link_target"] = link_target

    try:
        entry["sha256"] = compute_sha256(file_path)
        entry["status"] = "OK" if stat.st_size > 0 else "EMPTY"
    except Exception as e:
        entry["sha256"] = None
        entry["status"] = f"ERROR: {e}"

    return entry


def check_candidate_file(root_dir, candidate_paths, name):
    """
    Checks if at least one candidate path exists and is non-empty.
    Returns (found_path, metadata, success_bool)
    """
    for rel_path in candidate_paths:
        full_path = root_dir / rel_path
        if full_path.is_file() or (full_path.is_symlink() and full_path.exists()):
            try:
                stat = full_path.stat()
                if stat.st_size > 0:
                    sha = compute_sha256(full_path)
                    meta = {
                        "name": name,
                        "path": str(rel_path),
                        "exists": True,
                        "size_bytes": stat.st_size,
                        "sha256": sha,
                        "is_symlink": full_path.is_symlink(),
                        "status": "VERIFIED",
                    }
                    return full_path, meta, True
            except Exception as e:
                return full_path, {"name": name, "path": str(rel_path), "status": f"ERROR: {e}"}, False

    # Not found or empty
    return None, {
        "name": name,
        "candidate_paths": [str(p) for p in candidate_paths],
        "exists": False,
        "size_bytes": 0,
        "sha256": None,
        "status": "MISSING",
    }, False


def verify_all_assets(root_path, manifest_output_path=None, verbose=False):
    root_dir = Path(root_path).resolve()
    dc_dir = root_dir / "assets" / "dc"
    pc_dir = root_dir / "assets" / "pc"

    missing_critical = []

    print("==================================================")
    print("Rayman 2: The Great Escape — Asset Verification")
    print(f"Target Root: {root_dir}")
    print("==================================================")

    # 1. Check Essential Primary Dreamcast Assets
    print("\n--- Verifying Primary Dreamcast Assets (Baseline) ---")
    dc_essential_candidates = [
        ("1ST_READ.BIN", ["assets/dc/1ST_READ.BIN"]),
        ("FIX.DAT", ["assets/dc/DCDATA/FIX.DAT", "assets/dc/FIX.SNA"]),
        ("LEARN_10.DAT", ["assets/dc/DCDATA/LEARN_10/LEARN_10.DAT", "assets/dc/LEARN_10.SNA"]),
        ("MAPMONDE2.DAT (Isle of Doors)", [
            "assets/dc/DCDATA/MAPMONDE2/MAPMONDE2.DAT",
            "assets/dc/MAPMONDE2.SNA",
            "assets/dc/MAP_10.SNA"
        ]),
        ("FIX.TEX (Texture Bank)", ["assets/dc/DCDATA/FIX.TEX"]),
        ("FIX.OSB (Sound Bank)", [
            "assets/dc/DCDATA/SOUND/BANKS/FIX.OSB",
            "assets/dc/DCDATA/SOUND/BANKS/BNK_0.OSB"
        ]),
    ]

    essential_dc_results = {}
    for name, candidates in dc_essential_candidates:
        p, meta, ok = check_candidate_file(root_dir, candidates, name)
        essential_dc_results[name] = meta
        if ok:
            print(f" [PASS] {name}: {meta['path']} ({meta['size_bytes']} bytes, SHA256: {meta['sha256'][:12]}...)")
        else:
            print(f" [FAIL] {name}: MISSING or EMPTY (Candidates: {candidates})")
            missing_critical.append(f"DC: {name}")

    # Check PVR Textures
    pvr_files = list(dc_dir.glob("**/*.PVR")) + list(dc_dir.glob("**/*.pvr"))
    # filter duplicates
    pvr_files = sorted(list(set(pvr_files)))
    pvr_valid = [p for p in pvr_files if p.stat().st_size > 0]
    essential_dc_results["PVR_TEXTURES"] = {
        "count_found": len(pvr_files),
        "count_valid": len(pvr_valid),
        "status": "VERIFIED" if len(pvr_valid) > 0 else "MISSING",
    }
    if len(pvr_valid) > 0:
        print(f" [PASS] PVR Textures: {len(pvr_valid)} textures discovered")
    else:
        print(f" [FAIL] PVR Textures: none found in {dc_dir}")
        missing_critical.append("DC: PVR Textures")

    # Check DCZ Music
    dcz_files = list((dc_dir / "DCDATA" / "SOUND" / "MUSIC").glob("*.DCZ"))
    dcz_valid = [p for p in dcz_files if p.stat().st_size > 0]
    essential_dc_results["DCZ_MUSIC"] = {
        "count_found": len(dcz_files),
        "count_valid": len(dcz_valid),
        "status": "VERIFIED" if len(dcz_valid) > 0 else "MISSING",
    }
    if len(dcz_valid) > 0:
        print(f" [PASS] Yamaha AICA ADPCM Music (.DCZ): {len(dcz_valid)} music tracks discovered")
    else:
        print(f" [FAIL] Music (.DCZ): none found in assets/dc/DCDATA/SOUND/MUSIC")
        missing_critical.append("DC: Music .DCZ")

    # 2. Check Essential Secondary PC Guidance Assets
    print("\n--- Verifying Secondary PC Guidance Assets ---")
    pc_essential_candidates = [
        ("Rayman2.exe", ["assets/pc/Rayman2.exe"]),
        ("GliVd1vf.dll", ["assets/pc/Dll/GliVd1vf.dll", "assets/pc/Dll/GliVd1_vf.dll"]),
        ("Textures.cnt", ["assets/pc/Data/Textures.cnt"]),
        ("Fix.sna", ["assets/pc/Data/World/Levels/Fix.sna"]),
        ("Learn_10.sna", ["assets/pc/Data/World/Levels/Learn_10/Learn_10.sna"]),
    ]

    essential_pc_results = {}
    for name, candidates in pc_essential_candidates:
        p, meta, ok = check_candidate_file(root_dir, candidates, name)
        essential_pc_results[name] = meta
        if ok:
            print(f" [PASS] {name}: {meta['path']} ({meta['size_bytes']} bytes, SHA256: {meta['sha256'][:12]}...)")
        else:
            print(f" [FAIL] {name}: MISSING or EMPTY (Candidates: {candidates})")
            missing_critical.append(f"PC: {name}")

    # 3. Inventory All Assets
    print("\n--- Building Complete Inventory Manifest ---")
    dc_inventory = []
    total_dc_bytes = 0
    if dc_dir.exists():
        for f in sorted(dc_dir.rglob("*")):
            if f.is_file() or f.is_symlink():
                entry = scan_file_entry(root_dir, f)
                dc_inventory.append(entry)
                total_dc_bytes += entry["size_bytes"]

    pc_inventory = []
    total_pc_bytes = 0
    if pc_dir.exists():
        for f in sorted(pc_dir.rglob("*")):
            if f.is_file() or f.is_symlink():
                entry = scan_file_entry(root_dir, f)
                pc_inventory.append(entry)
                total_pc_bytes += entry["size_bytes"]

    manifest = {
        "manifest_version": "1.0",
        "generated_at": datetime.now(timezone.utc).isoformat(),
        "status": "INIT_OK" if len(missing_critical) == 0 else "INIT_FAILED",
        "summary": {
            "total_files": len(dc_inventory) + len(pc_inventory),
            "total_bytes": total_dc_bytes + total_pc_bytes,
            "dc_file_count": len(dc_inventory),
            "dc_total_bytes": total_dc_bytes,
            "pc_file_count": len(pc_inventory),
            "pc_total_bytes": total_pc_bytes,
            "essential_checks_passed": len(missing_critical) == 0,
            "missing_critical_count": len(missing_critical),
            "missing_critical_assets": missing_critical,
        },
        "essential_assets": {
            "primary_dreamcast": essential_dc_results,
            "secondary_pc": essential_pc_results,
        },
        "inventory": {
            "dc": dc_inventory,
            "pc": pc_inventory,
        },
    }

    if manifest_output_path:
        out_path = Path(manifest_output_path)
        if not out_path.is_absolute():
            out_path = root_dir / out_path
        out_path.parent.mkdir(parents=True, exist_ok=True)
        with open(out_path, "w", encoding="utf-8") as f:
            json.dump(manifest, f, indent=2)
        print(f"\nManifest successfully written to: {out_path}")
        print(f"Total cataloged files: {manifest['summary']['total_files']} ({manifest['summary']['total_bytes'] / (1024*1024):.2f} MB)")
        print(f"Dreamcast files: {manifest['summary']['dc_file_count']} ({manifest['summary']['dc_total_bytes'] / (1024*1024):.2f} MB)")
        print(f"PC reference files: {manifest['summary']['pc_file_count']} ({manifest['summary']['pc_total_bytes'] / (1024*1024):.2f} MB)")

    print("\n==================================================")
    if len(missing_critical) == 0:
        print("Verification Gate 1 Result: PASS")
        print("STATUS: INIT_OK")
        print("==================================================")
        return 0
    else:
        print(f"Verification Gate 1 Result: FAILED ({len(missing_critical)} assets missing)")
        print("STATUS: INIT_FAILED")
        print("==================================================")
        return 1


def main():
    parser = argparse.ArgumentParser(description="Verify Rayman 2 assets and build manifest.")
    parser.add_argument("--manifest", default="re_analysis/asset_manifest.json",
                        help="Path to output JSON manifest file")
    parser.add_argument("--root", default=".", help="Root directory of the workspace")
    parser.add_argument("--verbose", action="store_true", help="Enable verbose logging")
    args = parser.parse_args()

    ret = verify_all_assets(args.root, args.manifest, args.verbose)
    sys.exit(ret)


if __name__ == "__main__":
    main()
