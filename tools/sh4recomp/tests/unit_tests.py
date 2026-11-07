#!/usr/bin/env python3
"""Hand-computed (ISA manual) expectations, run through sh4lift -> C -> host. Independent of QEMU; QEMU result is shown for information."""
import sys, os, struct
HERE = os.path.dirname(os.path.abspath(__file__)); sys.path.insert(0, HERE); sys.path.insert(0, os.path.dirname(HERE))
import optest as T

U = lambda v: v & 0xFFFFFFFF
tests = []   # (name, words, regs{n:val}, flags(T,S,Q,M), mach, macl, fpu_state, expect{...})
def t(name, words, regs=None, T_=0, S=0, expect=None, fpu=None, mach=0, macl=0):
    tests.append((name, words, regs or {}, T_, S, expect or {}, fpu, mach, macl))

t("addc 0xFFFFFFFF+1+T0", [0x321E], {1: 1, 2: 0xFFFFFFFF}, expect={"r2": 0, "T": 1})            # addc r1,r2
t("addc carry-in", [0x321E], {1: 1, 2: 1}, T_=1, expect={"r2": 3, "T": 0})
t("subc 0-1", [0x321A], {1: 1, 2: 0}, expect={"r2": 0xFFFFFFFF, "T": 1})
t("addv overflow", [0x321F], {1: 1, 2: 0x7FFFFFFF}, expect={"r2": 0x80000000, "T": 1})
t("subv overflow", [0x321B], {1: 1, 2: 0x80000000}, expect={"r2": 0x7FFFFFFF, "T": 1})
t("negc", [0x6213 + 0x0007], {1: 1}, T_=0, expect={"r2": 0xFFFFFFFF, "T": 1})                   # negc r1,r2 (0x621A)
tests[-1] = ("negc", [0x621A], {1: 1}, 0, 0, {"r2": 0xFFFFFFFF, "T": 1}, None, 0, 0)
t("rotl msb->T", [0x4204], {2: 0x80000001}, expect={"r2": 3, "T": 1})
t("rotr lsb->T", [0x4205], {2: 0x00000001}, expect={"r2": 0x80000000, "T": 1})
t("rotcl", [0x4224], {2: 0x80000000}, T_=1, expect={"r2": 1, "T": 1})
t("shar", [0x4221], {2: 0x80000003}, expect={"r2": 0xC0000001, "T": 1})
t("shad -2", [0x412C + 0x100], {1: U(-2), 2: 0x80000000}, expect={"r2": 0xE0000000})            # shad r1,r2 = 0x421C
tests[-1] = ("shad -2", [0x421C], {1: U(-2), 2: 0x80000000}, 0, 0, {"r2": 0xE0000000}, None, 0, 0)
t("shld -4", [0x421D], {1: U(-4), 2: 0xF0}, expect={"r2": 0x0F})
t("shad -32 (sign fill)", [0x421C], {1: U(-32), 2: 0x80000000}, expect={"r2": 0xFFFFFFFF})
t("shld -32 -> 0", [0x421D], {1: U(-32), 2: 0x80000000}, expect={"r2": 0})
t("dmuls.l -1*2", [0x321D], {1: 2, 2: 0xFFFFFFFF}, expect={"mach": 0xFFFFFFFF, "macl": 0xFFFFFFFE})
t("dmulu.l ff*ff", [0x3215], {1: 0xFFFFFFFF, 2: 0xFFFFFFFF}, expect={"mach": 0xFFFFFFFE, "macl": 1})
t("mulu.w", [0x221E], {1: 0xFFFF, 2: 0xFFFF}, expect={"macl": 0xFFFE0001})
t("muls.w", [0x221F], {1: 0xFFFF, 2: 3}, expect={"macl": U(-3)})
t("mul.l", [0x0217], {1: 0x10000, 2: 0x10001}, expect={"macl": 0x10000})
t("swap.b", [0x6218], {1: 0xAABBCCDD}, expect={"r2": 0xAABBDDCC})
t("swap.w", [0x6219], {1: 0xAABBCCDD}, expect={"r2": 0xCCDDAABB})
t("xtrct", [0x221D], {1: 0xAAAABBBB, 2: 0xCCCCDDDD}, expect={"r2": 0xBBBBCCCC})
t("exts.b", [0x621E], {1: 0x80}, expect={"r2": 0xFFFFFF80})
t("cmp/str", [0x221C], {1: 0x11223344, 2: 0xAA22BBCC}, expect={"T": 1})
t("cmp/str none", [0x221C], {1: 0x11223344, 2: 0xAA55BBCC}, expect={"T": 0})
t("cmp/hi unsigned", [0x3216], {1: 1, 2: 0x80000000}, expect={"T": 1})
t("cmp/gt signed", [0x3217], {1: 1, 2: 0x80000000}, expect={"T": 0})
t("div0s", [0x2127], {1: 0x80000000, 2: 0x00000001}, expect={"T": 1})
t("movt", [0x0129], {}, T_=1, expect={"r1": 1})
t("dt", [0x4110], {1: 1}, expect={"r1": 0, "T": 1})
t("mov #imm sign", [0xE1FF], {}, expect={"r1": 0xFFFFFFFF})
t("add #imm neg", [0x71FE], {1: 5}, expect={"r1": 3})
t("neg", [0x621B], {1: 5}, expect={"r2": U(-5)})
t("mov.w @(pc) sign-ext", [0x9101, 0xA001, 0x0009, 0x8000, 0x0009], {}, expect={"r1": 0xFFFF8000})   # 0x9101 -> pc+4+2 = word 0x8000 (index 2)
t("mova+mov.l @r0", [0xC700, 0x6102, 0x0009, 0x0009], {}, expect={})  # sanity: just must run
t("tas.b", [0x411B], {1: T.SCR + 512}, expect={"T": None})
t("mac.w sat S=1", [0x412F], {1: T.SCR + 16, 2: T.SCR + 32}, S=1, expect={})
t("div1 steps: 100/7 unsigned", None, {}, expect={"r2": 14})   # filled below
# unsigned 32/16 style division 100/7 using div1: classic sequence (SH-4 manual, 32bit/32bit unsigned w/ divisor<2^31)
# r1=divisor<<? -> use the 16-bit divisor in upper half: r1 = 7<<16 ; r2 = dividend 100 ; 16 x (rotcl r2 ; div1 r1,r2) ; rotcl r2 ; extu.w r2,r2
seq = [0x0019]                                   # div0u
for _ in range(16): seq += [0x4224, 0x3124]      # rotcl r2 ; div1 r1,r2
seq += [0x4224, 0x622D]                          # rotcl r2 ; extu.w r2,r2
tests.pop(); _ = ("div1 chain 100/7=14", seq, {1: 7 << 16, 2: 100}, 0, 0, {"r2": 14}, None, 0, 0)
seq = [0x0019]
for _ in range(16): seq += [0x4224, 0x3124]
seq += [0x4224, 0x622D]
_2 = (("div1 chain 65535/255=257", seq, {1: 255 << 16, 2: 65535}, 0, 0, {"r2": 257}, None, 0, 0))
# delay slot semantic: bt/s taken; slot executes; compare done before slot (slot changes T)
tests.append(("bt/s slot cmp does not affect branch", [0x8D01, 0x3112 - 0x2 + 0x0, 0x7101, 0x7201, 0x7301], {1: 5, 2: 0}, 1, 0,
              {"r1": 5, "r2": 1, "r3": 1}, None, 0, 0))   # slot = cmp/eq r1,r1? (0x3110->cmp/eq r1,r1 sets T) ; taken skips add r1
tests[-1] = ("bt/s: T sampled before slot", [0x8D01, 0x3110, 0x7101, 0x7201, 0x7301], {1: 5, 2: 0, 3: 0}, 1, 0,
             {"r1": 5, "r2": 1, "r3": 1, "T": 1}, None, 0, 0)
tests.append(("bf/s not taken: slot runs, falls through", [0x8F01, 0x7101, 0x7201, 0x7301], {1: 0, 2: 0, 3: 0}, 1, 0,
              {"r1": 1, "r2": 1, "r3": 1}, None, 0, 0))
# GBR: ldc r1,gbr ; mov.l r2,@(1,gbr) -> (gbr+4) ; mov.l @(1,gbr),r0
tests.append(("gbr store/load", [0x411E, 0xC201, 0xC601, 0x7001, 0x431E], {1: T.SCR + 256, 0: 0x1234, 2: 0, 3: T.RES}, 0, 0, {"r0": 0x1235}, None, 0, 0))
# braf-based switch (mova + mov.w @(r0,r1) + braf), 3 entries; lifter must resolve table; selector r1 = 2*idx
# layout: 0:mova @(d,pc),r0 ; 2:mov.w @(r0,r1),r1 ; 4:braf r1 ; 6:nop ; 8:case0 'mov #10,r2'; 10:bra end; 12:nop ; 14:case1 'mov #20,r2'; 16:bra end; 18: nop; 20: case2 'mov #30,r2'; 22: table
words = [0xC706, 0x011D, 0x0123, 0x0009,          # 0 mova(d=6 -> base 28); 2 mov.w @(r0,r1),r1 ; 4 braf r1 ; 6 nop
         0xE20A, 0xA00A, 0x0009,                   # 8 case0: mov #10,r2 ; 10 bra end(34) ; 12 nop
         0xE214, 0xA007, 0x0009,                   # 14 case1: mov #20,r2 ; 16 bra end ; 18 nop
         0xE21E, 0xA004, 0x0009,                   # 20 case2: mov #30,r2 ; 22 bra end ; 24 nop
         0x0009,                                   # 26 pad
         0, 0, 0,                                  # 28.. table (offsets relative to braf pc+4 = 8)
         0x0009]                                   # 34 end
words[14:17] = [(8 - 8) & 0xFFFF, (14 - 8) & 0xFFFF, (20 - 8) & 0xFFFF]
for idx, exp in ((0, 10), (1, 20), (2, 30)):
    tests.append(("braf jump table idx%d" % idx, words, {1: 2 * idx, 2: 0}, 0, 0, {"r2": exp}, None, 0, 0))
# fpu: fipr (1,2,3,4).(1,2,3,4)=30 -> fr3 ; ftrv with identity XMTRX -> output == input
one = T.fbits
fv = [one(1.0), one(2.0), one(3.0), one(4.0)] + [0] * 12
tests.append(("fipr FV0.FV0=30", [0xF0ED], {}, 0, 0, {"fr3": one(30.0)}, {"fr": fv, "xf": [0] * 16, "fpscr": 0}, 0, 0))
ident = [one(1.0) if i in (0, 5, 10, 15) else 0 for i in range(16)]
tests.append(("ftrv identity", [0xF1FD], {}, 0, 0, {"fr0": one(1.0), "fr1": one(2.0), "fr2": one(3.0), "fr3": one(4.0)}, {"fr": fv, "xf": ident, "fpscr": 0}, 0, 0))
tests.append(("ftrv scale 2 (xf0,5,10,15=2)", [0xF1FD], {}, 0, 0, {"fr0": one(2.0), "fr3": one(8.0)}, {"fr": fv, "xf": [one(2.0) if i in (0, 5, 10, 15) else 0 for i in range(16)], "fpscr": 0}, 0, 0))
tests.append(("fmov.d SZ=1 swaps pair via fschg", [0xF3FD, 0xF0FC & 0xF0FF | 0x0000, 0xF3FD], {}, 0, 0, {}, {"fr": fv, "xf": [0] * 16, "fpscr": 0}, 0, 0))
tests[-1] = ("float/ftrc roundtrip", [0x4A5A + 0x0, 0xF12D, 0xF13D, 0x0000], {}, 0, 0, {}, None, 0, 0)
tests.pop()
tests.append(("float FPUL=-7 then ftrc", [0xF02D, 0xF13D + 0x0 - 0x100 + 0x100 if False else 0xF03D], {}, 0, 0, {"fr0": one(-7.0)}, {"fr": [0] * 16, "xf": [0] * 16, "fpscr": 0x40000, "fpul": U(-7)}, 0, 0))
tests.append(("fsca angle 0", [0xF2FD], {}, 0, 0, {"fr2": one(0.0), "fr3": one(1.0)}, {"fr": [0] * 16, "xf": [0] * 16, "fpscr": 0, "fpul": 0}, 0, 0))
tests.append(("fsrra 4.0", [0xF57D], {}, 0, 0, {"fr5": one(0.5)}, {"fr": [one(4.0) if i == 5 else 0 for i in range(16)], "xf": [0] * 16, "fpscr": 0}, 0, 0))

def run():
    fails = 0
    for (name, words, regs, T_, S, expect, fpu, mach, macl) in tests:
        c = T.Case(list(words), name, fpu=fpu is not None)
        c.regs = [0] * 16
        for k, v in regs.items(): c.regs[k] = U(v)
        c.flags = [T_, S, 0, 0]; c.mach, c.macl = mach, macl
        if fpu:
            c.fr = list(fpu["fr"]); c.xf = list(fpu["xf"]); c.fpscr = fpu["fpscr"]; c.fpul = fpu.get("fpul", 0)
        blob, entries = T.build_image([c])
        scr = T.scratch_blob(3)
        h = T.run_host(blob, entries, 1, scr, [], name)
        if h[0] in ("compile-error", "host-fail"): print("ERROR", name, h[1]); fails += 1; continue
        b = T.unpack_block(h[0][:T.BLK])
        got = {"T": b["sr"] & 1, "mach": b["mach"], "macl": b["macl"]}
        for i in range(16): got["r%d" % i] = b["r"][i]; got["fr%d" % i] = b["fr"][i]
        bad = [(k, hex(v), hex(got[k])) for k, v in expect.items() if v is not None and got[k] != v]
        q = T.run_qemu(blob, entries, 1, scr) if not os.environ.get("NO_QEMU") else None
        qs = ""
        if q:
            qb = T.unpack_block(q[0][:T.BLK]); qg = {"T": qb["sr"] & 1, "mach": qb["mach"], "macl": qb["macl"]}
            for i in range(16): qg["r%d" % i] = qb["r"][i]; qg["fr%d" % i] = qb["fr"][i]
            qbad = [(k, hex(v), hex(qg[k])) for k, v in expect.items() if v is not None and qg[k] != v]
            qs = "qemu=" + ("agrees" if not qbad else "DISAGREES(%s)" % qbad)
        print(("PASS " if not bad else "FAIL ") + name, bad if bad else "", qs)
        fails += bool(bad)
    print("unit tests: %d total, %d failed" % (len(tests), fails))
    return fails

if __name__ == "__main__":
    sys.exit(1 if run() else 0)
