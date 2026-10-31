#!/usr/bin/env python3
"""
tools/extract_dc_iso.py
Extracts Dreamcast GD-ROM data track (raw 2352-byte Mode 1 sectors) into filesystem assets.
Supports ISO9660 directory traversal with LBA offset handling (standard 45000 offset for track03).
"""

import os
import sys
import struct
import argparse
from pathlib import Path


def parse_gdi(gdi_path):
    """Parses a .gdi file to locate track numbers, starting LBAs, and filenames."""
    tracks = []
    with open(gdi_path, "r", encoding="utf-8", errors="replace") as f:
        lines = [line.strip() for line in f if line.strip()]
    if not lines:
        return tracks
    # First line is track count
    for line in lines[1:]:
        parts = line.split()
        if len(parts) >= 5:
            # track_num, start_lba, track_type, sector_size, filename, [offset]
            track_num = int(parts[0])
            start_lba = int(parts[1])
            track_type = int(parts[2])
            sector_size = int(parts[3])
            filename = parts[4].strip('"')
            tracks.append({
                "track": track_num,
                "lba": start_lba,
                "type": track_type,
                "sector_size": sector_size,
                "filename": filename,
            })
    return tracks


class GDROMDataTrack:
    def __init__(self, track_path, start_lba=45000, sector_size=2352):
        self.track_path = Path(track_path)
        self.start_lba = start_lba
        self.sector_size = sector_size
        self.user_offset = 16 if sector_size == 2352 else 0
        self.user_size = 2048
        self.file = None

    def __enter__(self):
        self.file = open(self.track_path, "rb")
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        if self.file:
            self.file.close()

    def read_user_sectors(self, lba, num_sectors):
        """Reads user data for `num_sectors` starting at `lba`."""
        track_sec = lba - self.start_lba
        if track_sec < 0:
            raise ValueError(f"LBA {lba} is before track start {self.start_lba}")

        self.file.seek(track_sec * self.sector_size)
        raw = self.file.read(num_sectors * self.sector_size)
        actual_sectors = len(raw) // self.sector_size

        if self.sector_size == self.user_size:
            return raw[:actual_sectors * self.user_size]

        mv = memoryview(raw)
        chunks = [
            bytes(mv[i * self.sector_size + self.user_offset : i * self.sector_size + self.user_offset + self.user_size])
            for i in range(actual_sectors)
        ]
        return b"".join(chunks)

    def extract_file_to(self, lba, file_size, out_path, chunk_sectors=256):
        """Streams file user data from sectors directly to output file."""
        out_path.parent.mkdir(parents=True, exist_ok=True)
        track_sec = lba - self.start_lba
        self.file.seek(track_sec * self.sector_size)

        remaining_bytes = file_size
        sectors_needed = (file_size + self.user_size - 1) // self.user_size

        with open(out_path, "wb") as out_f:
            while sectors_needed > 0 and remaining_bytes > 0:
                cur_sectors = min(sectors_needed, chunk_sectors)
                raw = self.file.read(cur_sectors * self.sector_size)
                actual_sectors = len(raw) // self.sector_size
                if actual_sectors == 0:
                    break

                if self.sector_size == self.user_size:
                    chunk_data = raw[:min(len(raw), remaining_bytes)]
                else:
                    mv = memoryview(raw)
                    chunks = [
                        bytes(mv[i * self.sector_size + self.user_offset : i * self.sector_size + self.user_offset + self.user_size])
                        for i in range(actual_sectors)
                    ]
                    chunk_data = b"".join(chunks)
                    if len(chunk_data) > remaining_bytes:
                        chunk_data = chunk_data[:remaining_bytes]

                out_f.write(chunk_data)
                remaining_bytes -= len(chunk_data)
                sectors_needed -= cur_sectors


def parse_iso9660_directory_tree(track, root_lba, root_len):
    """Iteratively traverses ISO9660 directory structure and returns unique file & directory lists."""
    queue = [("", root_lba, root_len)]
    visited_lbas = set()
    all_files = []
    all_dirs = []

    while queue:
        current_rel_path, dir_lba, dir_size = queue.pop(0)
        if dir_lba in visited_lbas:
            continue
        visited_lbas.add(dir_lba)

        num_sectors = (dir_size + track.user_size - 1) // track.user_size
        dir_data = track.read_user_sectors(dir_lba, num_sectors)

        pos = 0
        total_len = len(dir_data)
        while pos < total_len:
            rec_len = dir_data[pos]
            if rec_len == 0:
                # Sector padding to boundary
                next_sec = ((pos // track.user_size) + 1) * track.user_size
                if next_sec < total_len:
                    pos = next_sec
                    continue
                break

            rec = dir_data[pos : pos + rec_len]
            if len(rec) < 33:
                break

            entry_lba = struct.unpack("<I", rec[2:6])[0]
            data_len = struct.unpack("<I", rec[10:14])[0]
            flags = rec[25]
            name_len = rec[32]
            raw_name = rec[33 : 33 + name_len]

            pos += rec_len

            # Ignore '.' (0x00) and '..' (0x01)
            if raw_name in (b"\x00", b"\x01"):
                continue

            clean_name = raw_name.decode("ascii", errors="replace").split(";")[0]
            entry_path = f"{current_rel_path}/{clean_name}" if current_rel_path else clean_name
            is_directory = bool(flags & 2)

            if is_directory:
                all_dirs.append((entry_path, entry_lba, data_len))
                queue.append((entry_path, entry_lba, data_len))
            else:
                all_files.append((entry_path, entry_lba, data_len))

    return all_files, all_dirs


def extract_iso(track_path, output_dir, start_lba=45000, sector_size=2352, create_aliases=True):
    output_dir = Path(output_dir)
    output_dir.mkdir(parents=True, exist_ok=True)

    print(f"Opening track: {track_path}")
    print(f"Start LBA: {start_lba}, Sector size: {sector_size}")
    print(f"Destination: {output_dir.resolve()}")

    with GDROMDataTrack(track_path, start_lba=start_lba, sector_size=sector_size) as track:
        # Sector 16 is PVD
        pvd_data = track.read_user_sectors(start_lba + 16, 1)
        if pvd_data[1:6] != b"CD001":
            raise ValueError(f"Invalid ISO9660 Primary Volume Descriptor at sector 16 (tag: {pvd_data[1:6]!r})")

        vol_id = pvd_data[40:72].decode("ascii", errors="replace").strip()
        vol_space = struct.unpack("<I", pvd_data[80:84])[0]
        root_rec = pvd_data[156 : 156 + 34]
        root_lba = struct.unpack("<I", root_rec[2:6])[0]
        root_len = struct.unpack("<I", root_rec[10:14])[0]

        print(f"Volume ID: '{vol_id}' (Volume Space: {vol_space} sectors)")
        print(f"Root Directory LBA: {root_lba}, Size: {root_len} bytes")

        print("Scanning ISO9660 filesystem tree...")
        files, subdirs = parse_iso9660_directory_tree(track, root_lba, root_len)
        print(f"Found {len(subdirs)} directories and {len(files)} files.")

        total_bytes = sum(f[2] for f in files)
        print(f"Total payload size: {total_bytes / (1024*1024):.2f} MB ({total_bytes} bytes)")

        # Create all subdirectories first
        for s_path, _, _ in subdirs:
            (output_dir / s_path).mkdir(parents=True, exist_ok=True)

        # Extract all files
        extracted_count = 0
        extracted_bytes = 0
        for rel_path, lba, size in files:
            target_file = output_dir / rel_path
            track.extract_file_to(lba, size, target_file)
            extracted_count += 1
            extracted_bytes += size
            if extracted_count % 100 == 0 or extracted_count == len(files):
                print(f"  Extracted {extracted_count}/{len(files)} files ({extracted_bytes / (1024*1024):.1f} MB)...")

        print("Primary extraction complete.")

        # Create compatibility aliases/symlinks if requested
        if create_aliases:
            create_compatibility_aliases(output_dir)

    return len(files), total_bytes


def create_compatibility_aliases(output_dir):
    """
    Creates compatibility symlinks/aliases so that CPA engine tools expecting
    SNA convention (e.g. FIX.SNA, LEARN_10.SNA, MAPMONDE2.SNA / MAP_10.SNA)
    can locate them easily alongside native Dreamcast naming (.DAT).
    """
    print("Creating compatibility aliases and symlinks...")
    aliases = [
        ("DCDATA/FIX.DAT", "FIX.SNA"),
        ("DCDATA/FIX.DAT", "Fix.sna"),
        ("DCDATA/FIX.DAT", "DCDATA/FIX.SNA"),
        ("DCDATA/LEARN_10/LEARN_10.DAT", "LEARN_10.SNA"),
        ("DCDATA/LEARN_10/LEARN_10.DAT", "Learn_10.sna"),
        ("DCDATA/LEARN_10/LEARN_10.DAT", "DCDATA/LEARN_10/LEARN_10.SNA"),
        ("DCDATA/MAPMONDE2/MAPMONDE2.DAT", "MAPMONDE2.SNA"),
        ("DCDATA/MAPMONDE2/MAPMONDE2.DAT", "Mapmonde2.sna"),
        ("DCDATA/MAPMONDE2/MAPMONDE2.DAT", "MAP_10.SNA"),
        ("DCDATA/MAPMONDE2/MAPMONDE2.DAT", "Map_10.sna"),
        ("DCDATA/MAPMONDE2/MAPMONDE2.DAT", "DCDATA/MAPMONDE2/MAPMONDE2.SNA"),
    ]

    for src_rel, dst_rel in aliases:
        src_path = output_dir / src_rel
        dst_path = output_dir / dst_rel
        if src_path.exists() and not dst_path.exists():
            # Create relative symlink
            rel_link = os.path.relpath(src_path, dst_path.parent)
            try:
                os.symlink(rel_link, dst_path)
            except OSError:
                # If symlink fails, copy
                import shutil
                shutil.copy2(src_path, dst_path)
            print(f"  Alias created: {dst_rel} -> {rel_link}")


def main():
    parser = argparse.ArgumentParser(description="Extract Dreamcast GD-ROM ISO / track image")
    parser.add_argument("--gdi", default="ISOs/Rayman2_Dreamcast/Rayman 2 - The Great Escape (Europe).gdi",
                        help="Path to .gdi file")
    parser.add_argument("--track", default="ISOs/Rayman2_Dreamcast/track03.bin",
                        help="Path to track03.bin raw data track")
    parser.add_argument("--output", default="assets/dc",
                        help="Output directory for extracted assets")
    parser.add_argument("--start-lba", type=int, default=None,
                        help="Starting LBA of track (default parsed from GDI or 45000)")
    parser.add_argument("--sector-size", type=int, default=None,
                        help="Sector size of track (default parsed from GDI or 2352)")
    parser.add_argument("--no-aliases", action="store_true",
                        help="Disable creating compatibility symlinks (FIX.SNA, etc.)")

    args = parser.parse_args()

    start_lba = args.start_lba
    sector_size = args.sector_size

    # Check if GDI exists and can provide parameters
    if os.path.exists(args.gdi):
        gdi_tracks = parse_gdi(args.gdi)
        for t in gdi_tracks:
            # Look for track matching track argument
            if Path(t["filename"]).name == Path(args.track).name or t["track"] == 3:
                if start_lba is None:
                    start_lba = t["lba"]
                if sector_size is None:
                    sector_size = t["sector_size"]
                break

    if start_lba is None:
        start_lba = 45000
    if sector_size is None:
        sector_size = 2352

    file_cnt, total_bytes = extract_iso(
        track_path=args.track,
        output_dir=args.output,
        start_lba=start_lba,
        sector_size=sector_size,
        create_aliases=not args.no_aliases,
    )

    print("\nExtraction Summary:")
    print(f"  Target: {args.output}")
    print(f"  Total Files Extracted: {file_cnt}")
    print(f"  Total Data Size: {total_bytes / (1024*1024):.2f} MB")


if __name__ == "__main__":
    main()
