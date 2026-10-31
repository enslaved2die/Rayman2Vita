#!/usr/bin/env python3
"""fsca / fsrra checked against mathematically exact references (mpmath, 50 digits), NOT against QEMU (qemu-system-sh4 does not implement these SH-4A-class insns).

Documented SH-4 behaviour (SH-4 Software Manual, FSCA / FSRRA; bounds quoted from the manual as remembered - re-check against the PDF if it matters):
  FSCA FPUL,DRn  (1111 nnn0 1111 1101, PR=0): only FPUL[15:0] is the angle, as an unsigned 16-bit fraction of a revolution:
        angle = FPUL[15:0] * 2*pi / 65536 (i.e. 2^-16 revolution units, 0x4000 = 90 deg). FR[n] = sin(angle), FR[n+1] = cos(angle). FPUL[31:16] ignored,
        FPUL unchanged. Hardware uses a lookup table: absolute error <= 2^-22 vs the ideal value (not correctly rounded, not bit-reproducible by libm).
  FSRRA FRn      (1111 nnnn 0111 1101, PR=0): FRn = 1/sqrt(FRn); relative error <= 2^-21. FRn=+0 -> +inf (divide-by-zero), FRn<0 -> NaN (invalid),
        +inf -> +0, NaN -> NaN.
This script (1) sweeps ALL 65536 angles (with random garbage in FPUL[31:16]) and ~20k floats through runtime.h's fp_fsca/fp_fsrra and measures the error
against the exact reference, (2) checks special values, (3) executes the same instructions through the real lifter (sh4lift -> C -> host) for a sample and
requires bit-identical results with the direct runtime call."""
import sys, os, struct, random, subprocess, tempfile, math
HERE = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(HERE); sys.path.insert(0, HERE)
import mpmath as mp
mp.mp.dps = 50
import optest as T

FSCA_TOL = 2.0 ** -22; FSRRA_TOL = 2.0 ** -21
f2u = lambda f: struct.unpack("<I", struct.pack("<f", f))[0]
u2f = lambda u: struct.unpack("<f", struct.pack("<I", u))[0]

def harness():
    exe = os.path.join(HERE, "fp_dump")
    subprocess.check_call(["cc", "-O1", "-std=gnu11", "-w", "-frounding-math", "-I" + ROOT, os.path.join(HERE, "fp_dump.c"), os.path.join(ROOT, "runtime.c"), "-lm", "-o", exe])
    return exe

def run(exe, mode, fpscr, vals):
    d = tempfile.mkdtemp(); open(d + "/i", "wb").write(struct.pack("<%dI" % len(vals), *vals))
    subprocess.check_call([exe, mode, "%x" % fpscr, d + "/i", d + "/o"])
    b = open(d + "/o", "rb").read(); return struct.unpack("<%dI" % (len(b) // 4), b)

def lifted(kind, vals, fpscr):
    """execute fsca/fsrra via the real lifter: one Case per value (host only)"""
    cases = []
    for v in vals:
        if kind == "fsca": c = T.Case([0xF2FD], "fsca", fpu=True); c.fpul = v        # fsca FPUL,DR2
        else: c = T.Case([0xF57D], "fsrra", fpu=True); c.fr = [0] * 16; c.fr[5] = v    # fsrra FR5
        c.fpscr = fpscr; c.fr = c.fr if kind == "fsrra" else [0xDEADBEEF] * 16
        cases.append(c)
    blob, entries = T.build_image(cases); scr = T.scratch_blob(1)
    h = T.run_host(blob, entries, len(cases), scr, [], kind)
    assert h[0] not in ("compile-error", "host-fail"), h
    out = []
    for i in range(len(cases)):
        b = T.unpack_block(h[0][i * T.BLK:(i + 1) * T.BLK]); out.append((b["fr"][2], b["fr"][3], b["fpul"]) if kind == "fsca" else (b["fr"][5],))
    return out

def main():
    rng = random.Random(5); exe = harness(); fails = 0
    EXACT = [(mp.sin(mp.mpf(k) * 2 * mp.pi / 65536), mp.cos(mp.mpf(k) * 2 * mp.pi / 65536)) for k in range(65536)]
    for fpscr in (0x00040001, 0x00040000, 0x00000001, 0x00000000):    # DN,RM: (1,1)=DC/KOS default 0x40001 (round-to-zero), (1,0), (0,1), (0,0)
        # ---- fsca: all 65536 angles
        vals = [k | (rng.getrandbits(16) << 16) for k in range(65536)]
        out = run(exe, "fsca", fpscr, vals)
        ms = mc = 0.0; worst = None; nonfin = 0
        for k in range(65536):
            es, ec = EXACT[k]
            s, c_ = u2f(out[2 * k]), u2f(out[2 * k + 1])
            if not (math.isfinite(s) and math.isfinite(c_)): nonfin += 1; continue
            d1, d2 = abs(mp.mpf(s) - es), abs(mp.mpf(c_) - ec)
            if d1 > ms: ms = d1
            if d2 > mc: mc = d2
        print("fpscr=%08x fsca: 65536 angles, max |sin err| = 2^%.2f, max |cos err| = 2^%.2f (documented bound 2^-22); non-finite=%d" % (fpscr, mp.log(ms, 2), mp.log(mc, 2), nonfin))
        if max(ms, mc) > FSCA_TOL or nonfin: print("  FAIL fsca outside documented bound"); fails += 1
        # exact quadrant points
        qp = {0: (0.0, 1.0), 0x4000: (1.0, 0.0), 0x8000: (0.0, -1.0), 0xC000: (-1.0, 0.0)}
        for k, (es, ec) in qp.items():
            s, c_ = u2f(out[2 * k]), u2f(out[2 * k + 1])
            print("   angle %04x: sin=%r cos=%r (exact %r %r)%s" % (k, s, c_, es, ec, "" if (s == es and c_ == ec) else "   <- not exactly the ideal quadrant value (|err| %.2e)" % max(abs(s - es), abs(c_ - ec))))
        # upper bits must be ignored
        ref = run(exe, "fsca", fpscr, list(range(0, 65536, 257))); alt = run(exe, "fsca", fpscr, [k | 0xABCD0000 for k in range(0, 65536, 257)])
        if ref != alt: print("  FAIL fsca depends on FPUL[31:16]"); fails += 1
        else: print("   FPUL[31:16] ignored: OK")
        # ---- fsrra
        fl = [f2u(2.0 ** e * (1 + rng.random())) for e in range(-120, 120) for _ in range(40)] + [f2u(x) for x in (1.0, 4.0, 0.25, 2.0, 3.0, 100.0, 1e-3, 1e10, 123456.789)]
        out = run(exe, "fsrra", fpscr, fl)
        worst = 0.0; nbad = 0
        for u, r in zip(fl, out):
            x = u2f(u); y = u2f(r)
            if x < 2 ** -126: continue
            ex = 1 / mp.sqrt(mp.mpf(x))
            if ex > 3.4e38: continue
            rel = abs(mp.mpf(y) - ex) / ex
            worst = max(worst, rel)
        print("fpscr=%08x fsrra: %d normal inputs, max relative error = 2^%.2f (documented bound 2^-21)" % (fpscr, len(fl), mp.log(worst, 2) if worst else -99))
        if worst > FSRRA_TOL: print("  FAIL fsrra outside documented bound"); fails += 1
        # specials
        sp = [0x00000000, 0x80000000, 0x7F800000, 0xFF800000, 0xBF800000, 0x7FC00000, 0x00000001, 0x007FFFFF, 0x7F7FFFFF]
        so = run(exe, "fsrra", fpscr, sp)
        for u, r in zip(sp, so): print("   fsrra(%08x)=%08x  (%r -> %r)" % (u, r, u2f(u), u2f(r)))
        exp = {0x00000000: 0x7F800000, 0x7F800000: 0, 0xBF800000: "nan", 0xFF800000: "nan", 0x7FC00000: "nan"}
        for u, r in zip(sp, so):
            if u in exp:
                e = exp[u]
                ok = (math.isnan(u2f(r)) if e == "nan" else r == e)
                if not ok: print("   FAIL special fsrra(%08x)" % u); fails += 1
        nan_bits = so[sp.index(0xBF800000)]
        if nan_bits != 0x7FBFFFFF: print("   NOTE fsrra(-1) yields NaN bits %08x; project convention (nanfix, fsqrt) for SH-4 default NaN is 7FBFFFFF" % nan_bits)
        # ---- lifted path == direct runtime call
        sa = [k | (rng.getrandbits(16) << 16) for k in rng.sample(range(65536), 150)] + [0, 0x4000, 0x8000, 0xC000, 0xFFFF]
        la = lifted("fsca", sa, fpscr); da = run(exe, "fsca", fpscr, sa)
        bad = [i for i in range(len(sa)) if (la[i][0], la[i][1]) != (da[2 * i], da[2 * i + 1]) or la[i][2] != sa[i]]
        sf = rng.sample(fl, 150) + sp
        lf = lifted("fsrra", sf, fpscr); df = run(exe, "fsrra", fpscr, sf)
        badf = [i for i in range(len(sf)) if lf[i][0] != df[i]]
        print("   lifted-vs-runtime: fsca %d/%d identical (FPUL preserved), fsrra %d/%d identical" % (len(sa) - len(bad), len(sa), len(sf) - len(badf), len(sf)))
        fails += bool(bad) + bool(badf)
    print("fsca/fsrra: %s" % ("all checks within documented bounds" if not fails else "%d FAILED check(s)" % fails))
    return fails

if __name__ == "__main__":
    sys.exit(1 if main() else 0)
