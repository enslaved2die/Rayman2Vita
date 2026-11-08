#!/usr/bin/env python3
"""
Packs every <BANK>.hdtab under a root into one shared pool plus one index per bank
(HD_Texture_Plan.md, Phase 5). Layout and rules: src/cpa/cpa_hd_pak.h.

The Dreamcast data stores a texture again in every level that uses it, so the same
override image appears in many banks. This packer stores each unique payload once
(matched by SHA-256) in <root>/HD.hdpool, and writes <root>/<BANK>.hdpak as an index
into that pool. Payloads are verbatim copies of the original .dds / .bin / .png files.

Usage:
    python3 tools/pack_hd_archive.py                 # upscaled_textures/
    python3 tools/pack_hd_archive.py --root DIR      # another override root
    python3 tools/pack_hd_archive.py --verify        # read everything back and compare
"""
import argparse, glob, hashlib, os, struct, sys

POOL_NAME = 'HD.hdpool'
POOL_MAGIC = 0x4C503252  # "R2PL"
POOL_VERSION = 1
PAK_MAGIC = 0x4B503252   # "R2PK"
PAK_VERSION = 2
KIND = {'.dds': 0, '.bin': 1, '.raw': 1, '.png': 2}


def read_rows(hdtab_path):
    """Returns the data rows in file order: (va, chunk, relpath or None)."""
    rows = []
    with open(hdtab_path, 'r', encoding='utf-8') as f:
        for line in f:
            line = line.rstrip('\r\n')
            if not line or line.startswith('#'):
                continue
            fld = line.split('\t')
            if len(fld) != 7:
                raise SystemExit(f"{hdtab_path}: malformed row: {line!r}")
            rel = None if fld[6] == '-' else fld[6]
            rows.append((fld[0], fld[1], rel))
    return rows


def pack_all(root):
    """Builds the pool and every bank index in memory. Returns (pool_bytes, indexes, stats)."""
    tables = sorted(glob.glob(os.path.join(root, '*.hdtab')))
    if not tables:
        raise SystemExit(f"no .hdtab files under {root}")

    pool = bytearray(struct.pack('<IIII', POOL_MAGIC, POOL_VERSION, 0, 0))
    by_hash = {}          # sha256 -> (offset, size, kind)
    unique_count = 0
    indexes = {}          # bank -> (rows, [(offset, size, kind)])
    total_rows = 0
    total_payloads = 0

    for tab in tables:
        bank = os.path.basename(tab)[:-len('.hdtab')]
        rows = read_rows(tab)
        entries = []
        for _va, _chunk, rel in rows:
            total_rows += 1
            if rel is None:
                entries.append((0, 0, 0))
                continue
            src = os.path.join(root, rel)
            ext = os.path.splitext(rel)[1].lower()
            if ext not in KIND or not os.path.isfile(src):
                raise SystemExit(f"{tab}: row points at a missing or unsupported file: {rel}")
            with open(src, 'rb') as f:
                data = f.read()
            total_payloads += 1
            digest = hashlib.sha256(data).digest()
            if digest not in by_hash:
                by_hash[digest] = (len(pool), len(data), KIND[ext])
                pool += data
                unique_count += 1
            entries.append(by_hash[digest])
        indexes[bank] = (len(rows), entries)

    struct.pack_into('<I', pool, 8, unique_count)
    stats = {'banks': len(indexes), 'rows': total_rows, 'payloads': total_payloads,
             'unique': unique_count, 'pool_bytes': len(pool)}
    return bytes(pool), indexes, stats


def write_outputs(root, pool, indexes):
    pool_path = os.path.join(root, POOL_NAME)
    tmp = pool_path + '.tmp'
    with open(tmp, 'wb') as f:
        f.write(pool)
    os.replace(tmp, pool_path)

    for bank, (n, entries) in indexes.items():
        out = os.path.join(root, f"{bank}.hdpak")
        tmp = out + '.tmp'
        with open(tmp, 'wb') as f:
            f.write(struct.pack('<IIII', PAK_MAGIC, PAK_VERSION, n, len(pool)))
            for off, size, kind in entries:
                f.write(struct.pack('<III', off, size, kind))
        os.replace(tmp, out)


def verify(root):
    """Reads the pool and every index back with the same rules as the C reader."""
    pool_path = os.path.join(root, POOL_NAME)
    with open(pool_path, 'rb') as pf:
        pool = pf.read()
    magic, version, _count, _ = struct.unpack_from('<IIII', pool, 0)
    if magic != POOL_MAGIC or version != POOL_VERSION:
        raise SystemExit(f"{pool_path}: bad header")

    checked = 0
    for tab in sorted(glob.glob(os.path.join(root, '*.hdtab'))):
        bank = os.path.basename(tab)[:-len('.hdtab')]
        rows = read_rows(tab)
        pak = os.path.join(root, f"{bank}.hdpak")
        with open(pak, 'rb') as f:
            raw = f.read()
        magic, version, n, pool_bytes = struct.unpack_from('<IIII', raw, 0)
        if magic != PAK_MAGIC or version != PAK_VERSION or n != len(rows) or pool_bytes != len(pool):
            raise SystemExit(f"{pak}: bad header or built against another pool")
        for i, (_va, _chunk, rel) in enumerate(rows):
            off, size, kind = struct.unpack_from('<III', raw, 16 + 12 * i)
            if rel is None:
                if size:
                    raise SystemExit(f"{pak}: row {i} should be empty")
                continue
            data = pool[off:off + size]
            with open(os.path.join(root, rel), 'rb') as src:
                if src.read() != data:
                    raise SystemExit(f"{pak}: row {i} payload differs from {rel}")
            if KIND[os.path.splitext(rel)[1].lower()] != kind:
                raise SystemExit(f"{pak}: row {i} has the wrong kind")
            checked += 1
    return checked


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--root', default='upscaled_textures')
    ap.add_argument('--verify', action='store_true')
    args = ap.parse_args()

    if not os.path.isdir(args.root):
        print(f"Error: {args.root} not found.")
        sys.exit(1)
    pool, indexes, stats = pack_all(args.root)
    write_outputs(args.root, pool, indexes)
    print(f"  {os.path.join(args.root, POOL_NAME)}: {stats['unique']} unique payloads, {stats['pool_bytes']} bytes")
    print(f"  {stats['banks']} bank indexes, {stats['rows']} rows, {stats['payloads']} payloads "
          f"({stats['payloads'] - stats['unique']} duplicates removed)")
    if args.verify:
        checked = verify(args.root)
        print(f"Verified {checked} payloads against the source files.")


if __name__ == '__main__':
    main()
