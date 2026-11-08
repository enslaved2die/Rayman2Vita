#!/usr/bin/env python3
"""
Generates src/cpa/cpa_hd_manifest.h and src/cpa/cpa_hd_manifest.c from extracted_textures/manifest.csv.
Bakes the entire texture name and struct VA lookup table directly into the binary so
the engine never needs external .LOG or .csv files on the PS Vita filesystem.

With --tables it also writes one precomputed resolution table per bank,
<root>/<BANK>.hdtab (HD_Texture_Plan.md, Phase 1). The table records, for every
texture key of the bank, which override file the engine must load (or '-' for
none), so the runtime never probes the filesystem:

    # CPA HD texture table v1 (root-relative paths, generated)
    # bank<TAB>BANK
    <va hex>  <chunk dec>  <fmt>  <w>  <h>  <mips>  <relpath | ->

fmt uses CpaHdTexFormat (0 = RGBA8888, 1 = DXT1, 5 = DXT5). The candidate
search order and header checks mirror cpa_hd_tex_load_ex() and
try_load_replacement_ex() in src/cpa/cpa_hd_tex.c, so the table and the
runtime probing agree on every key.

Usage:
    python3 tools/generate_hd_manifest.py                      # manifest headers only
    python3 tools/generate_hd_manifest.py --tables             # also write tables into upscaled_textures/
    python3 tools/generate_hd_manifest.py --tables --root DIR  # tables for another override root
"""
import argparse, csv, os, struct, sys

CSV_PATH = 'extracted_textures/manifest.csv'
OUT_H = 'src/cpa/cpa_hd_manifest.h'
OUT_C = 'src/cpa/cpa_hd_manifest.c'

FMT_RGBA8888 = 0
FMT_DXT1 = 1
FMT_DXT5 = 5
FMT_DXT1_FOURCC = 0x31545844  # "DXT1" little-endian
FMT_DXT5_FOURCC = 0x35545844  # "DXT5" little-endian
R2TX_MAGIC = 0x58543252       # "R2TX" little-endian
MAX_DIM = 4096


def sanitize_name(name):
    """Mirrors the .LOG name sanitizing in parse_bank_log() (cpa_hd_tex.c)."""
    out = []
    for c in name:
        o = ord(c)
        if c in ' \t':
            out.append('_')
        elif o in (0xe8, 0xe9, 0xea, 0xeb):
            out.append('e')
        elif o in (0xe0, 0xe1, 0xe2, 0xe3, 0xe4):
            out.append('a')
        elif o in (0xec, 0xed, 0xee, 0xef):
            out.append('i')
        elif o in (0xf2, 0xf3, 0xf4, 0xf6):
            out.append('o')
        elif o in (0xf9, 0xfa, 0xfb, 0xfc):
            out.append('u')
        elif o == 0xe7:
            out.append('c')
        else:
            out.append(c)
    return ''.join(out)


def strip_ext(name):
    base, ext = os.path.splitext(name)
    return base if ext else name


# --- header probes: accept a file only if the runtime loader would accept it ---

def probe_dds(path):
    try:
        size = os.path.getsize(path)
        with open(path, 'rb') as f:
            hdr = f.read(128)
    except OSError:
        return None
    if len(hdr) != 128 or hdr[:4] != b'DDS ':
        return None
    h, w = struct.unpack_from('<II', hdr, 12)
    mips = struct.unpack_from('<I', hdr, 28)[0]
    fourcc = struct.unpack_from('<I', hdr, 84)[0]
    if fourcc == FMT_DXT1_FOURCC:
        fmt, block = FMT_DXT1, 8
    elif fourcc == FMT_DXT5_FOURCC:
        fmt, block = FMT_DXT5, 16
    else:
        return None
    if not w or not h or w > MAX_DIM or h > MAX_DIM:
        return None
    l0 = ((w + 3) // 4) * ((h + 3) // 4) * block
    payload = size - 128 if size > 128 else l0
    if payload < l0:
        return None
    return (fmt, w, h, mips if mips else 1)


def probe_png(path):
    try:
        with open(path, 'rb') as f:
            hdr = f.read(24)
    except OSError:
        return None
    if len(hdr) < 24 or hdr[:8] != b'\x89PNG\r\n\x1a\n' or hdr[12:16] != b'IHDR':
        return None
    w, h = struct.unpack_from('>II', hdr, 16)
    if not w or not h or w > MAX_DIM or h > MAX_DIM:
        return None
    return (FMT_RGBA8888, w, h, 1)


def probe_raw(path):
    try:
        size = os.path.getsize(path)
        with open(path, 'rb') as f:
            hdr = f.read(16)
    except OSError:
        return None
    if len(hdr) != 16 or struct.unpack_from('<I', hdr, 0)[0] != R2TX_MAGIC:
        return None
    w, h = struct.unpack_from('<II', hdr, 4)
    if not w or not h or w > MAX_DIM or h > MAX_DIM:
        return None
    if size < 16 + w * h * 4:
        return None
    return (FMT_RGBA8888, w, h, 1)


def probe(path):
    """Dispatch by extension, like try_load_replacement_ex()."""
    low = path.lower()
    if low.endswith('.dds'):
        return probe_dds(path)
    if low.endswith('.bin') or low.endswith('.raw'):
        return probe_raw(path)
    return probe_png(path)


def candidate_phases(bank, name, chunk):
    """Relative candidate paths in the runtime's priority order (cpa_hd_tex_load_ex).
    Each phase is tried completely before the next one begins."""
    is_fix = bank.lower() == 'fix'
    phase_dds = [f"{bank}/{name}.dds"] + ([] if is_fix else [f"FIX/{name}.dds"]) + [f"{name}.dds"]
    phase_other = [f"{bank}/{name}.bin", f"{bank}/{name}.png", f"{bank}/{name}.raw"]
    if not is_fix:
        phase_other += [f"FIX/{name}.bin", f"FIX/{name}.png"]
    phase_other += [f"{name}.bin", f"{name}.png"]
    phases = [phase_dds, phase_other]
    if chunk >= 0:
        phases.append([f"{bank}/{chunk:03d}.dds", f"{bank}/{chunk:03d}.bin", f"{bank}/{chunk:03d}.png"])
    return phases


def resolve(root, bank, name, chunk):
    """Returns (relpath, fmt, w, h, mips) for the first valid override, or None.
    The runtime tries the exact name first and only then the sanitized .LOG spelling."""
    variants = [name]
    if sanitize_name(name) != name:
        variants.append(sanitize_name(name))
    for var in variants:
        for phase in candidate_phases(bank, var, chunk):
            for rel in phase:
                full = os.path.join(root, rel)
                if not os.path.isfile(full):
                    continue
                info = probe(full)
                if info is not None:
                    return (rel.replace(os.sep, '/'),) + info
    return None


def write_tables(rows, root):
    """rows: list of (bank, chunk, name, va) in CSV order."""
    per_bank = {}
    for bank, chunk, name, va in rows:
        per_bank.setdefault(bank, []).append((chunk, name, va))

    total_hit = total_neg = 0
    for bank, items in per_bank.items():
        seen = set()
        lines = [
            "# CPA HD texture table v1 (root-relative paths, generated by tools/generate_hd_manifest.py)",
            f"# bank\t{bank}",
            "# va\tchunk\tfmt\tw\th\tmips\trelpath",
        ]
        hits = negs = 0
        for chunk, name, va in items:
            key = (va, chunk)
            if key in seen:
                continue  # runtime lookup takes the first row for a key, as in cpa_hd_manifest_lookup()
            seen.add(key)
            res = resolve(root, bank, strip_ext(name), chunk)
            if res is None:
                lines.append(f"0x{va:08x}\t{chunk}\t-\t0\t0\t0\t-")
                negs += 1
            else:
                rel, fmt, w, h, mips = res
                lines.append(f"0x{va:08x}\t{chunk}\t{fmt}\t{w}\t{h}\t{mips}\t{rel}")
                hits += 1
        out_path = os.path.join(root, f"{bank}.hdtab")
        with open(out_path, 'w', encoding='utf-8', newline='\n') as f:
            f.write('\n'.join(lines) + '\n')
        print(f"  {out_path}: {hits} overrides, {negs} without override")
        total_hit += hits
        total_neg += negs
    print(f"Wrote {len(per_bank)} tables: {total_hit} overrides, {total_neg} negative keys.")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--tables', action='store_true', help='also write per-bank <BANK>.hdtab files')
    ap.add_argument('--root', default='upscaled_textures', help='override root the tables are resolved against')
    args = ap.parse_args()

    csv_path = CSV_PATH
    out_h = OUT_H
    out_c = OUT_C

    if not os.path.exists(csv_path):
        print(f"Error: {csv_path} not found.")
        sys.exit(1)

    banks_map = {}
    banks_list = []
    names_pool = bytearray()
    names_offset_map = {}

    def get_name_offset(name):
        if name.endswith('.png'):
            name = name[:-4]
        if name in names_offset_map:
            return names_offset_map[name]
        off = len(names_pool)
        names_pool.extend(name.encode('ascii') + b'\x00')
        names_offset_map[name] = off
        return off

    entries = []
    fix_vas = set()
    table_rows = []

    with open(csv_path, 'r', encoding='utf-8') as f:
        reader = csv.reader(f)
        for r in reader:
            if len(r) < 11 or not r[10].startswith('0x'):
                continue
            bank = r[1].strip()
            chunk_idx = int(r[2]) if r[2].isdigit() else 0
            name = r[4].strip()
            va = int(r[10], 16)

            if bank not in banks_map:
                banks_map[bank] = len(banks_list)
                banks_list.append(bank)

            bank_idx = banks_map[bank]
            name_off = get_name_offset(name)

            if bank == 'FIX' and va != 0:
                fix_vas.add(va)

            entries.append((bank_idx, va, chunk_idx, name_off))
            table_rows.append((bank, chunk_idx, name, va))

    # Sort entries by (bank_idx, va, chunk_idx) for fast binary search
    entries.sort(key=lambda e: (e[0], e[1], e[2]))

    print(f"Baking {len(entries)} texture manifest entries across {len(banks_list)} banks...")
    print(f"String pool size: {len(names_pool)} bytes. FIX VAs: {len(fix_vas)}")

    # Write Header
    with open(out_h, 'w') as f:
        f.write("""/* Auto-generated by tools/generate_hd_manifest.py - DO NOT EDIT */
#ifndef CPA_HD_MANIFEST_H
#define CPA_HD_MANIFEST_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Fast in-memory resolution of texture name by bank, struct_va and chunk index */
const char *cpa_hd_manifest_lookup(const char *bank, uint32_t struct_va, int chunk_idx);

/* Instant check if a struct VA belongs to resident FIX bank */
bool cpa_hd_manifest_is_fix_va(uint32_t struct_va);

#ifdef __cplusplus
}
#endif

#endif /* CPA_HD_MANIFEST_H */
""")

    # Write Implementation
    with open(out_c, 'w') as f:
        f.write("""/* Auto-generated by tools/generate_hd_manifest.py - DO NOT EDIT */
#include "cpa_hd_manifest.h"
#include <string.h>
#include <strings.h>

typedef struct {
    uint32_t va;
    uint16_t bank_idx;
    uint16_t chunk_idx;
    uint32_t name_offset;
} CpaHdManifestEntry;

static const char * const s_manifest_banks[] = {
""")
        for b in banks_list:
            f.write(f'    "{b}",\n')
        f.write(f"""}};
static const uint32_t s_num_manifest_banks = {len(banks_list)};

static const char s_manifest_strings[] =
""")
        # Chunk string pool
        CHUNK_SIZE = 80
        for i in range(0, len(names_pool), CHUNK_SIZE):
            chunk = names_pool[i:i+CHUNK_SIZE]
            escaped = "".join(f"\\x{b:02x}" for b in chunk)
            f.write(f'    "{escaped}"\n')
        f.write(";\n\n")

        # FIX VAs sorted array for instant binary search
        sorted_fix = sorted(list(fix_vas))
        f.write(f"static const uint32_t s_fix_vas[{len(sorted_fix)}] = {{\n")
        for i in range(0, len(sorted_fix), 8):
            chunk = sorted_fix[i:i+8]
            f.write("    " + ", ".join(f"0x{v:08x}u" for v in chunk) + ",\n")
        f.write("};\n\n")

        # All entries
        f.write(f"static const CpaHdManifestEntry s_manifest_entries[{len(entries)}] = {{\n")
        for e in entries:
            f.write(f"    {{ 0x{e[1]:08x}u, {e[0]}, {e[2]}, {e[3]} }},\n")
        f.write("};\n\n")

        # Functions
        f.write("""bool cpa_hd_manifest_is_fix_va(uint32_t struct_va) {
    if (!struct_va) return false;
    int lo = 0, hi = (int)(sizeof(s_fix_vas)/sizeof(s_fix_vas[0])) - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (s_fix_vas[mid] == struct_va) return true;
        if (s_fix_vas[mid] < struct_va) lo = mid + 1;
        else hi = mid - 1;
    }
    return false;
}

static int find_bank_idx(const char *bank) {
    if (!bank || !bank[0]) return -1;
    for (uint32_t i = 0; i < s_num_manifest_banks; i++) {
        if (strcasecmp(s_manifest_banks[i], bank) == 0) return (int)i;
    }
    return -1;
}

const char *cpa_hd_manifest_lookup(const char *bank, uint32_t struct_va, int chunk_idx) {
    int bidx = find_bank_idx(bank);
    if (bidx < 0) {
        /* If bank not specified or unknown, check if struct_va is a FIX texture */
        if (struct_va && cpa_hd_manifest_is_fix_va(struct_va)) {
            bidx = find_bank_idx("FIX");
        }
    }

    /* 1. If we have a bank index, search within bank */
    if (bidx >= 0) {
        for (uint32_t i = 0; i < (uint32_t)(sizeof(s_manifest_entries)/sizeof(s_manifest_entries[0])); i++) {
            const CpaHdManifestEntry *e = &s_manifest_entries[i];
            if (e->bank_idx != (uint16_t)bidx) continue;
            if (struct_va != 0 && e->va == struct_va) {
                return &s_manifest_strings[e->name_offset];
            }
            if (struct_va == 0 && chunk_idx >= 0 && (int)e->chunk_idx == chunk_idx) {
                return &s_manifest_strings[e->name_offset];
            }
        }
    }

    /* 2. Global search by struct_va across all banks if struct_va is known */
    if (struct_va != 0) {
        for (uint32_t i = 0; i < (uint32_t)(sizeof(s_manifest_entries)/sizeof(s_manifest_entries[0])); i++) {
            const CpaHdManifestEntry *e = &s_manifest_entries[i];
            if (e->va == struct_va) {
                return &s_manifest_strings[e->name_offset];
            }
        }
    }

    return 0;
}
""")

    print(f"Successfully generated {out_h} and {out_c}!")

    if args.tables:
        if not os.path.isdir(args.root):
            print(f"Error: override root {args.root} not found.")
            sys.exit(1)
        print(f"Resolving HD override tables against {args.root} ...")
        write_tables(table_rows, args.root)


if __name__ == '__main__':
    main()
