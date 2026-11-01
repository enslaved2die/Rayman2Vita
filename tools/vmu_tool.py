#!/usr/bin/env python3
"""vmu_tool.py - convert between 128 KiB Dreamcast VMU images (Flycast / KallistiOS / Redream raw dumps) and the Rayman2Vita save directory
(one host file per VMU file, named exactly like the VMS file, content = the raw blocks*512 bytes; see tools/sh4recomp/hle/vmu.c).

  vmu_tool.py list    IMAGE                       list the files of an image (blocks, timestamp, header CRC16 check)
  vmu_tool.py import  IMAGE DIR [--force] [--all] copy the data files of IMAGE into DIR (Save/A1); --force overwrites, --all also copies game (0xCC) entries
  vmu_tool.py export  DIR IMAGE [--base IMG]      write DIR's files into a VMU image (blank formatted card, or modify the card BASE); atomic
  vmu_tool.py dump    FILE                        decode a RAYMAN_2.* file: VMS header, CRC16, de-scrambled payload and its checksum
  vmu_tool.py check   DIR                         validate every file in DIR (VMS CRC16)

Image layout (standard VMU, 256 blocks of 512 bytes): root block 255 (format marker 55 x16, FAT location at 0x46, FAT size 0x48, directory location 0x4A,
directory size 0x4C, user blocks 0x50), FAT = block 254 (u16 LE per block: 0xFFFC free, 0xFFFA end of chain, else next block), directory = 13 blocks
253 down to 241 (16 entries of 32 bytes: type 0x33 data / 0xCC game, copy-protect, first block u16, name[12], BCD timestamp[8] (century year month day
hour minute second weekday), size in blocks u16, header offset u16), user area = blocks 0..199 allocated from 199 downwards like the BIOS does.
Python 3 standard library only.
"""
import os, struct, sys, time, argparse, tempfile

BLK = 512
NBLK = 256
USER = 200
FREE, END = 0xFFFC, 0xFFFA
# root block of a freshly formatted card, bytes 0x00..0x5F (copied from an empty Flycast card; 0x30..0x37 = format date 1998-11-27)
ROOT_PREFIX = (b"\x55" * 16 + bytes.fromhex("01ffffff64") + b"\0" * 27 + bytes.fromhex("1998112700005904") + b"\0" * 8
               + bytes.fromhex("ff000000ff00fe000100fd000d000500c8001f0000008000")).ljust(0x60, b"\0")


def crc16(data):
    """CRC16-CCITT as used by the VMS file header (poly 0x1021, init 0, no final xor), computed with the CRC field (0x46) zeroed."""
    d = bytearray(data); d[0x46:0x48] = b"\0\0"
    crc = 0
    for b in d:
        crc ^= b << 8
        for _ in range(8):
            crc = ((crc << 1) ^ 0x1021) & 0xFFFF if crc & 0x8000 else (crc << 1) & 0xFFFF
    return crc


def bcd(v): return ((v // 10) << 4) | (v % 10)
def unbcd(b): return (b >> 4) * 10 + (b & 15)


def ts_from_mtime(mt):
    t = time.localtime(mt)
    return bytes([bcd(t.tm_year // 100), bcd(t.tm_year % 100), bcd(t.tm_mon), bcd(t.tm_mday), bcd(t.tm_hour), bcd(t.tm_min), bcd(t.tm_sec), bcd(t.tm_wday)])


def mtime_from_ts(ts):
    try:
        y = unbcd(ts[0]) * 100 + unbcd(ts[1])
        return time.mktime((y, unbcd(ts[2]), unbcd(ts[3]), unbcd(ts[4]), unbcd(ts[5]), unbcd(ts[6]), 0, 0, -1))
    except (ValueError, OverflowError):
        return None


class Image:
    def __init__(self, data):
        if len(data) != BLK * NBLK: raise SystemExit("not a 128 KiB VMU image (%d bytes)" % len(data))
        self.d = bytearray(data)
        r = self.d[255 * BLK:256 * BLK]
        if r[:16] != b"\x55" * 16: raise SystemExit("root block has no VMU format marker (unformatted card?)")
        self.fat_blk, self.fat_n, self.dir_blk, self.dir_n, self.user = struct.unpack_from("<HHHH", r, 0x46)[0], struct.unpack_from("<H", r, 0x48)[0], \
            struct.unpack_from("<H", r, 0x4A)[0], struct.unpack_from("<H", r, 0x4C)[0], struct.unpack_from("<H", r, 0x50)[0]
        if self.fat_n != 1 or self.fat_blk >= NBLK or self.dir_blk >= NBLK or not (0 < self.dir_n <= 13): raise SystemExit("unsupported VMU geometry")
        self.fat = list(struct.unpack_from("<256H", self.d, self.fat_blk * BLK))

    @staticmethod
    def blank():
        r = bytearray(BLK); r[:0x60] = ROOT_PREFIX
        d = bytearray(BLK * NBLK); d[255 * BLK:256 * BLK] = r
        img = Image(bytes(d))
        img.fat = [FREE] * 256
        img.fat[255] = END; img.fat[254] = END
        for b in range(241, 254): img.fat[b] = b - 1 if b > 241 else END    # directory chain 253 -> 252 -> ... -> 241
        img.fat[253] = 252
        img.flush_fat()
        return img

    def flush_fat(self): struct.pack_into("<256H", self.d, self.fat_blk * BLK, *self.fat)

    def dir_blocks(self):
        b, out = self.dir_blk, []
        while len(out) < self.dir_n and b < NBLK:
            out.append(b)
            if self.fat[b] == END: break
            b = self.fat[b]
        return out

    def entries(self):
        """yield (dir_block, slot, dict) for every used directory entry"""
        for b in self.dir_blocks():
            for s in range(16):
                e = bytes(self.d[b * BLK + s * 32:b * BLK + s * 32 + 32])
                if e[0] == 0: continue
                yield b, s, dict(type=e[0], copy=e[1], first=struct.unpack_from("<H", e, 2)[0], name=e[4:16], ts=e[16:24],
                                 size=struct.unpack_from("<H", e, 24)[0], hoff=struct.unpack_from("<H", e, 26)[0])

    def chain(self, first, nblocks):
        out, b = [], first
        while b != END and len(out) <= NBLK:
            if b >= NBLK or b in out: raise SystemExit("corrupt FAT chain starting at block %d" % first)
            out.append(b); b = self.fat[b]
        if len(out) != nblocks: raise SystemExit("FAT chain of block %d has %d blocks, directory says %d" % (first, len(out), nblocks))
        return out

    def read_file(self, e): return b"".join(bytes(self.d[b * BLK:(b + 1) * BLK]) for b in self.chain(e["first"], e["size"]))

    def free_blocks(self): return sum(1 for b in range(self.user) if self.fat[b] == FREE)

    def add_file(self, name12, data, ts, ftype=0x33):
        nb = len(data) // BLK
        if nb < 1 or len(data) % BLK: raise SystemExit("%s: size %d is not a multiple of 512" % (name12.rstrip(), len(data)))
        free = [b for b in range(self.user - 1, -1, -1) if self.fat[b] == FREE]
        if len(free) < nb: raise SystemExit("card full: %s needs %d blocks, %d free" % (name12.rstrip(), nb, len(free)))
        slot = None
        for b in self.dir_blocks():
            for s in range(16):
                if self.d[b * BLK + s * 32] == 0 and slot is None: slot = (b, s)
        if slot is None: raise SystemExit("directory full")
        ch = free[:nb]
        for i, b in enumerate(ch):
            self.d[b * BLK:(b + 1) * BLK] = data[i * BLK:(i + 1) * BLK]
            self.fat[b] = ch[i + 1] if i + 1 < nb else END
        e = bytearray(32); e[0] = ftype; e[1] = 0; struct.pack_into("<H", e, 2, ch[0]); e[4:16] = name12
        e[16:24] = ts; struct.pack_into("<HH", e, 24, nb, 0)
        o = slot[0] * BLK + slot[1] * 32; self.d[o:o + 32] = e
        self.flush_fat()

    def remove_file(self, blk, slot, e):
        for b in self.chain(e["first"], e["size"]): self.fat[b] = FREE
        o = blk * BLK + slot * 32; self.d[o:o + 32] = b"\0" * 32
        self.flush_fat()


def name_of(raw): return raw.rstrip(b"\0 ").decode("latin1")
def pad_name(n): return n.encode("latin1").ljust(12, b" ")


def atomic_write(path, data, mtime=None):
    d = os.path.dirname(os.path.abspath(path))
    fd, tmp = tempfile.mkstemp(prefix=".vmu_tool_", dir=d)
    with os.fdopen(fd, "wb") as f:
        f.write(data); f.flush(); os.fsync(f.fileno())
    os.chmod(tmp, 0o644)
    if mtime is not None: os.utime(tmp, (mtime, mtime))
    os.replace(tmp, path)


def vms_info(data):
    """header facts of a VMS data file (0x280 header at offset 0 for Rayman 2 files)"""
    if len(data) < 0x80: return None
    icons = struct.unpack_from("<H", data, 64)[0]
    hdr = 0x80 + 512 * icons + {0: 0, 1: 8064, 2: 4032, 3: 2016}.get(struct.unpack_from("<H", data, 0x44)[0], 0)
    dsize = struct.unpack_from("<I", data, 0x48)[0]
    return dict(vm_desc=data[0:16].rstrip(b"\0 ").decode("latin1"), dc_desc=data[16:48].rstrip(b"\0 ").decode("latin1"), app=data[48:64].rstrip(b"\0 ").decode("latin1"),
                icons=icons, crc=struct.unpack_from("<H", data, 0x46)[0], crc_ok=struct.unpack_from("<H", data, 0x46)[0] == crc16(data[:hdr + dsize]), hdr=hdr,
                dsize=dsize)


def keystream(n):
    s, out = 0x224896EB, bytearray()
    for _ in range(n):
        sv = s - (1 << 32) if s & 0x80000000 else s
        out.append((sv >> 12) & 0xFF); s = (s * 0x3A41C471) & 0xFFFFFFFF
    return bytes(out)


def descramble(payload):
    """payload = scramble(plain || u32LE(sum(plain))) (GamSave.c FUN_8C065E30). returns (plain, sum_ok)"""
    p = bytes(a ^ b for a, b in zip(payload, keystream(len(payload))))
    if len(p) < 4: return p, False
    body, cs = p[:-4], struct.unpack("<I", p[-4:])[0]
    return body, (sum(body) & 0xFFFFFFFF) == cs


def cmd_list(a):
    img = Image(open(a.image, "rb").read())
    print("%d free of %d user blocks" % (img.free_blocks(), img.user))
    for b, s, e in img.entries():
        data = img.read_file(e) if e["type"] == 0x33 else b""
        info = vms_info(data) if data else None
        print("%-12s type %02X first %3d  %2d blocks  %s  %s" % (name_of(e["name"]), e["type"], e["first"], e["size"],
              time.strftime("%Y-%m-%d %H:%M:%S", time.localtime(mtime_from_ts(e["ts"]) or 0)),
              ("crc %04X %s \"%s\"" % (info["crc"], "ok" if info["crc_ok"] else "BAD", info["vm_desc"])) if info else ""))


def cmd_import(a):
    img = Image(open(a.image, "rb").read())
    os.makedirs(a.dir, exist_ok=True)
    n = 0
    for b, s, e in img.entries():
        name = name_of(e["name"])
        if e["type"] != 0x33 and not a.all:
            print("skip %s (type %02X, not a data file)" % (name, e["type"])); continue
        if not name or "/" in name or name.startswith("."): print("skip %r (unsafe name)" % name); continue
        data = img.read_file(e)
        info = vms_info(data)
        if info and not info["crc_ok"]: print("warning: %s has a bad VMS header CRC16 (copied anyway; the game's own checks decide)" % name)
        dst = os.path.join(a.dir, name)
        if os.path.exists(dst) and not a.force: print("exists, skipped (use --force): %s" % dst); continue
        atomic_write(dst, data, mtime_from_ts(e["ts"]))
        print("imported %-12s %2d blocks -> %s" % (name, e["size"], dst)); n += 1
    print("%d file(s) imported" % n)


def cmd_export(a):
    img = Image(open(a.base, "rb").read()) if a.base else Image.blank()
    files = []
    for n in sorted(os.listdir(a.dir)):
        p = os.path.join(a.dir, n)
        if not os.path.isfile(p) or len(n) > 12 or n.startswith(".") or os.path.getsize(p) == 0: continue    # *.tmp / *.bak companions are longer than 12 chars
        files.append((n, p))
    for n, p in files:                                                   # replace same-named entries of the base card
        for b, s, e in list(img.entries()):
            if name_of(e["name"]) == n: img.remove_file(b, s, e)
    for n, p in files:
        data = open(p, "rb").read()
        if len(data) % BLK: data += b"\0" * (BLK - len(data) % BLK)
        img.add_file(pad_name(n), data, ts_from_mtime(os.path.getmtime(p)))
        print("exported %-12s %2d blocks" % (n, len(data) // BLK))
    atomic_write(a.image, bytes(img.d))
    print("%s written, %d free blocks" % (a.image, img.free_blocks()))


def cmd_dump(a):
    data = open(a.file, "rb").read()
    info = vms_info(data)
    print("size %d (%d blocks)" % (len(data), (len(data) + BLK - 1) // BLK))
    if not info: raise SystemExit("too short for a VMS header")
    print("vm desc %r  dc desc %r  app %r  icons %d  crc %04X (%s)  data size %d" % (info["vm_desc"], info["dc_desc"], info["app"], info["icons"], info["crc"],
          "ok" if info["crc_ok"] else "BAD, expected %04X" % crc16(data[:info["hdr"] + info["dsize"]]), info["dsize"]))
    body, ok = descramble(data[info["hdr"]:info["hdr"] + info["dsize"]])
    print("payload %d bytes after descramble, sum check %s" % (len(body), "ok" if ok else "FAILED"))
    print(body.hex(" ", 4))


def cmd_check(a):
    bad = 0
    for n in sorted(os.listdir(a.dir)):
        p = os.path.join(a.dir, n)
        if not os.path.isfile(p) or len(n) > 12: continue
        data = open(p, "rb").read(); info = vms_info(data)
        ok = bool(info) and info["crc_ok"] and len(data) % BLK == 0
        bad += not ok
        print("%-12s %5d bytes %s" % (n, len(data), "ok" if ok else "BAD"))
    return 1 if bad else 0


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    s = sub.add_parser("list"); s.add_argument("image"); s.set_defaults(f=cmd_list)
    s = sub.add_parser("import"); s.add_argument("image"); s.add_argument("dir"); s.add_argument("--force", action="store_true"); s.add_argument("--all", action="store_true"); s.set_defaults(f=cmd_import)
    s = sub.add_parser("export"); s.add_argument("dir"); s.add_argument("image"); s.add_argument("--base"); s.set_defaults(f=cmd_export)
    s = sub.add_parser("dump"); s.add_argument("file"); s.set_defaults(f=cmd_dump)
    s = sub.add_parser("check"); s.add_argument("dir"); s.set_defaults(f=cmd_check)
    a = ap.parse_args()
    return a.f(a) or 0


if __name__ == "__main__":
    sys.exit(main())
