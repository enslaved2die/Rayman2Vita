#!/usr/bin/env python3
"""Per-opcode differential test: lifted C (this project) vs qemu-system-sh4 (independent reference).
Every case = [load full CPU state][one test instruction (+delay slot / small program)][dump full CPU state to RAM].
The SAME byte image is (a) executed by QEMU and (b) lifted by sh4lift and run on the host."""
import sys, os, random, struct, subprocess, tempfile, time, re, json, shutil, collections, concurrent.futures as cf
HERE = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(HERE)
sys.path.insert(0, ROOT); sys.path.insert(0, HERE)
if os.environ.get("SH4LIFT_DIR"): sys.path.insert(0, os.environ["SH4LIFT_DIR"])   # test an alternative lifter checkout (e.g. the pre-fix one)
import sh4ops, sh4lift, qemu_run as Q

BASE = 0x8C001000
SCR = 0x8C200000; SCR_SIZE = 0x1000
RES = 0x8C300000; BLK = 256
EDGE = [0, 1, 2, 3, 0xFFFFFFFF, 0xFFFFFFFE, 0x7FFFFFFF, 0x80000000, 0x80000001, 0xFFFF, 0x10000, 0xFFFF0000, 0x8000, 0x7FFF,
        0xFFFF8000, 0xFF, 0x80, 0xFFFFFF80, 0x12345678, 0xDEADBEEF, 31, 32, 0xFFFFFFE0, 0x0000FF00, 0x00FF00FF, 5, 0xFFFFFFFB]
FLOATS = [0.0, 1.0, -1.0, 0.5, 2.0, 3.14159, -2.718281828, 100.25, -1234.5, 1e10, -1e-10, 65536.0, 0.1, 7.0, 1e30, 3e-20, 123456.789, -0.0, 2147483520.0]
SANE_FPSCR = [0x00040001, 0x0, 0x1, 0x00080000, 0x00100000, 0x00200000, 0x00040000, 0x00080001, 0x00100001]

def w(*x): return b"".join(struct.pack("<H", v & 0xFFFF) for v in x)
def fbits(f): return struct.unpack("<I", struct.pack("<f", f))[0]
def dbits(d): return struct.unpack("<Q", struct.pack("<d", d))[0]

def ru32(r):
    return r.choice(EDGE) if r.random() < 0.45 else r.getrandbits(32)

# ---------------- case construction
class Case:
    def __init__(self, words, label, fpu=False, entries=(), extra_words=()):
        self.words = list(words)         # test instruction words (may include small program)
        self.label = label
        self.fpu = fpu
        self.entries = list(entries)     # absolute guest addresses (computed after layout) -> via callbacks
        self.regs = [0]*16; self.flags = [0]*4   # T S Q M
        self.mach = self.macl = self.pr = self.fpul = 0
        self.fpscr = 0x00040001
        self.fr = [0]*16; self.xf = [0]*16
        self.entry_offsets = []          # byte offsets within test words that must be function entries
        self.reg_fix = []                # callbacks(case_addr)->(reg,val)

def ptr_fields(name):
    """which instruction register fields (n=bits11:8, m=bits7:4) are memory pointers"""
    f = set()
    if name.startswith(("lds.l", "ldc.l")) or "lds.l/ldc.l" in name: return {"n"}
    if name in ("mac.l", "mac.w"): return {"n", "m"}
    if name in ("mov.b R0,@(d,Rn)", "mov.w R0,@(d,Rn)"): return {"m"}
    if "@(R0,Rn)" in name or "@-Rn" in name or "@Rn" in name or "(d,Rn)" in name: f.add("n")
    if "@(R0,Rm)" in name or "@Rm" in name or "(d,Rm)" in name: f.add("m")
    if name in ("pref", "ocbi", "ocbp", "ocbwb", "movca.l", "tas.b"): f.add("n")
    if name.startswith("fmov") and "FRn" in name and "@Rm" in name: f.add("m")
    return f

FP_PR1_OK = {"fadd", "fsub", "fmul", "fdiv", "fcmp/eq", "fcmp/gt", "fneg", "fabs", "fsqrt", "float FPUL,FRn", "ftrc FRm,FPUL"}
FP_PR1_ONLY = {"fcnvsd FPUL,DRn", "fcnvds DRm,FPUL"}

def make_case(rng, mask, val, name):
    free = (~mask) & 0xFFFF
    o = val | (rng.getrandbits(16) & free)
    n, m = (o >> 8) & 15, (o >> 4) & 15
    c = Case([o], name)
    is_fp = (o >> 12) == 0xF
    c.fpu = is_fp
    # base random state
    c.regs = [ru32(rng) for _ in range(16)]
    c.flags = [rng.getrandbits(1) for _ in range(4)]
    if "SR" in name or name == "stc/sts": c.flags[2] = c.flags[3] = 0   # QEMU stc SR omits Q/M
    c.mach, c.macl, c.pr, c.fpul = ru32(rng), ru32(rng), ru32(rng), ru32(rng)
    if name == "mac.l": c.mach = rng.choice([0, 0xFFFFFFFF, 0x7FFF, 0xFFFF8000, rng.getrandbits(15), 0xFFFF8000 | rng.getrandbits(15)])   # keep 48-bit MAC state valid
    # pointers
    pf = ptr_fields(name)
    idx_r0 = "(R0," in name
    pregs = set()
    if "n" in pf: pregs.add(n)
    if "m" in pf: pregs.add(m)
    if idx_r0 and 0 in pregs:           # R0 needs to be both index and pointer: avoid by re-rolling
        return None
    al = 8 if is_fp else 4
    for r in pregs:
        c.regs[r] = SCR + 256 + al * rng.randrange(0, 20)
    if idx_r0: c.regs[0] = al * rng.randrange(0, 8)
    if name.startswith("mov.w") or name.startswith("mov.l") or name.startswith("mac"):
        pass
    # special value sets
    if name in ("ldc Rm,SR",) or name == "lds/ldc Rm,SR":
        c.regs[n] = 0x700000F0 | (rng.getrandbits(1)) | (rng.getrandbits(1) << 1)
    if name == "lds.l/ldc.l @Rm+,SR": c.regs[n] = SCR + 4 * rng.randrange(0, 4)
    if name == "lds/ldc Rm,FPSCR": c.regs[n] = rng.choice(SANE_FPSCR)
    if name == "lds.l/ldc.l @Rm+,FPSCR": c.regs[n] = SCR + 16 + 4 * rng.randrange(0, 4)
    if name in ("lds/ldc Rm,GBR", "lds.l/ldc.l @Rm+,GBR"): return None
    # FPU state
    use_d = False
    if is_fp:
        pr = 0; sz = 0
        if name in FP_PR1_ONLY: pr = 1
        elif name in FP_PR1_OK: pr = rng.getrandbits(1)
        if name.startswith("fmov"): sz = rng.getrandbits(1)
        if pr == 1:
            n &= ~1; m &= ~1
            if (mask & 0x0F00) == 0: o = (o & ~0x0F00) | (n << 8)
            if (mask & 0x00F0) == 0: o = (o & ~0x00F0) | (m << 4)
            c.words = [o]
            use_d = True
        rm = rng.getrandbits(1)
        c.fpscr = (pr << 19) | (sz << 20) | rm
        if name in ("fmov FRm,FRn",) or name.startswith("fmov") and False: pass
        if use_d:
            ds = [rng.choice(FLOATS) * rng.choice([1, 1, 1e100, 1e-100, 3.0]) for _ in range(8)]
            for i, d in enumerate(ds):
                b = dbits(d); c.fr[2*i] = b >> 32; c.fr[2*i+1] = b & 0xFFFFFFFF
        else:
            c.fr = [fbits(rng.choice(FLOATS)) for _ in range(16)]
        c.xf = [fbits(rng.choice(FLOATS)) for _ in range(16)]
        if name in ("fipr", "ftrv", "fmac") and os.environ.get("RANDF"):
            def rf(): return (rng.getrandbits(1) << 31) | ((rng.randrange(int(os.environ.get("EL","100")), int(os.environ.get("EH","150")))) << 23) | rng.getrandbits(23)
            c.fr = [rf() for _ in range(16)]; c.xf = [rf() for _ in range(16)]
            if os.environ.get("RANDF") == "dn": c.fpscr |= 0x40000
        if name == "ftrc FRm,FPUL" and not use_d: c.fr = [fbits(rng.choice(FLOATS + [1e20, -1e20, 2147483648.0])) for _ in range(16)]
        if name in ("float FPUL,FRn",): c.fpul = ru32(rng)
        if name == "fcnvsd FPUL,DRn": c.fpul = fbits(rng.choice(FLOATS))
        if name.startswith("fmov.s") or name.startswith("fmov FR") or name.startswith("fmov"):
            if sz:   # SZ=1: raw 32-bit patterns are fine
                c.fr = [ru32(rng) for _ in range(16)]; c.xf = [ru32(rng) for _ in range(16)]
        if name in ("fdiv",):   # avoid 0/0 NaN-payload comparisons
            pass
        if name == "fsca": c.fpul = rng.getrandbits(16) | (rng.getrandbits(8) << 16)
        if name == "fsrra": c.fr = [fbits(abs(rng.choice(FLOATS)) + 0.25) for _ in range(16)]
        if name in ("fsqrt", "fsrra"):
            if use_d:
                for i2 in range(8):
                    b = dbits(abs(rng.choice(FLOATS)) + 0.25); c.fr[2*i2] = b >> 32; c.fr[2*i2+1] = b & 0xFFFFFFFF
            else: c.fr = [fbits(abs(rng.choice(FLOATS)) + 0.25) for _ in range(16)]
    return c

# ---------------- image builder
def enc_ldl(rn, dist_words_to_pool):  # mov.l @(disp,pc),Rn
    pass

class Builder:
    def __init__(self):
        self.out = bytearray()
        self.cases = []
    def pc(self): return BASE + len(self.out)

def build_image(cases, entries_extra=()):
    """returns (blob, case_records). Layout: [bra self][nop] at BASE (halt), entry at BASE+8."""
    blob = bytearray(w(0xAFFE, 0x0009, 0x0009, 0x0009))      # halt loop @BASE, pad
    entries = [BASE + 8]
    for idx, c in enumerate(cases):
        code = []; pool = []
        pcs = []   # code word list; pool refs resolved after
        refs = []  # (code_index, pool_index)
        def pool_add(v):
            pool.append(v & 0xFFFFFFFF); return len(pool) - 1
        def ldl(rn, v):
            refs.append((len(code), pool_add(v))); code.append(0xD000 | (rn << 8))
        gbrp = RES + idx * BLK
        sr = 0x700000F0 | (c.flags[1] << 1)
        ldl(0, sr); code.append(0x400E)                       # ldc r0,sr  (S only; QEMU's ldc drops Q/M)
        ldl(1, 0xFFFFFFFF if c.flags[2] else 0); ldl(2, 0xFFFFFFFF if c.flags[3] else 0)
        code.append(0x2127)                                   # div0s r2,r1 -> Q=r1[31], M=r2[31]
        code.append(0x0018 if c.flags[0] else 0x0008)         # sett / clrt
        ldl(0, gbrp); code.append(0x401E)                     # ldc r0,gbr
        for v, op in ((c.mach, 0x400A), (c.macl, 0x401A), (c.pr, 0x402A), (c.fpul, 0x405A)):
            ldl(0, v); code.append(op)
        if c.fpu:
            ldl(0, 0); code.append(0x406A)                    # fpscr = 0
            for k in range(16):
                ldl(1, c.fr[k]); code += [0x415A, 0xF00D | (k << 8)]      # lds r1,fpul ; fsts fpul,frk
            code.append(0xFBFD)
            for k in range(16):
                ldl(1, c.xf[k]); code += [0x415A, 0xF00D | (k << 8)]
            code.append(0xFBFD)
            ldl(0, c.fpscr); code.append(0x406A)
            ldl(0, c.fpul); code.append(0x405A)               # fpul restore (fsts clobbered it)
        for r in range(1, 16): ldl(r, c.regs[r])
        ldl(0, c.regs[0])
        t_start = len(code)
        for wd in c.words: code.append(wd)
        t_end = len(code)
        # dump
        code.append(0xC200)                                   # mov.l r0,@(0,gbr)
        code.append(0x0012)                                   # stc gbr,r0
        for r in range(1, 16): code.append(0x1000 | (0 << 8) | (r << 4) | r)   # mov.l rr,@(r*4,r0)
        code.append(0x7040)                                   # add #64,r0
        for op in (0x0102, 0x010A, 0x011A, 0x0112, 0x012A, 0x015A, 0x016A):   # stc sr / sts mach/macl / stc gbr / sts pr / fpul / fpscr ->r1
            code += [op, 0x2012, 0x7004]                      # mov.l r1,@r0 ; add #4,r0
        if c.fpu:
            code += [0xE100, 0x416A]                          # mov #0,r1 ; lds r1,fpscr
            for k in range(16): code += [0xF00A | (0 << 8) | (k << 4), 0x7004]   # fmov.s frk,@r0 ; add #4,r0
            code.append(0xFBFD)
            for k in range(16): code += [0xF00A | (0 << 8) | (k << 4), 0x7004]
            code.append(0xFBFD)
        # skip pool
        # layout: code..., bra over, nop, [align], pool, over:
        cstart = BASE + len(blob)
        n_code = len(code) + 2
        pool_off = n_code * 2
        pad = 0
        if (cstart + pool_off) % 4: pad = 2; pool_off += 2
        # branch over pool: bra at word index len(code); target = pc+4+2*disp
        braw = cstart + len(code) * 2
        over = cstart + pool_off + len(pool) * 4
        disp = (over - (braw + 4)) // 2
        code += [0xA000 | (disp & 0xFFF), 0x0009]
        for (ci, pi) in refs:
            pcw = cstart + ci * 2
            pa = cstart + pool_off + pi * 4
            d = (pa - ((pcw + 4) & ~3)) // 4
            assert 0 <= d < 256, (idx, d)
            code[ci] |= d
        data = b"".join(struct.pack("<H", x) for x in code) + (b"\0\0" if pad else b"") + b"".join(struct.pack("<I", x) for x in pool)
        c.t_addr = cstart + t_start * 2
        c.end_addr = cstart + len(data)
        blob += data
    if (BASE + len(blob)) % 4: blob += w(0x0009)
    blob += w(0xD001, 0x402A, 0x000B, 0x0009) + struct.pack("<I", BASE)   # r0=halt; lds r0,pr; rts; nop
    return bytes(blob), entries

def unpack_block(b):
    v = struct.unpack("<%dI" % (len(b) // 4), b)
    return {"r": v[0:16], "sr": v[16], "mach": v[17], "macl": v[18], "gbr": v[19], "pr": v[20], "fpul": v[21], "fpscr": v[22],
            "fr": v[23:39], "xf": v[39:55]}

def scratch_blob(seed):
    r = random.Random(seed); b = bytearray(r.getrandbits(8) for _ in range(SCR_SIZE))
    for i in range(4):
        struct.pack_into("<I", b, 4 * i, 0x700000F0 | r.getrandbits(1) | (r.getrandbits(1) << 1))
    for i in range(4): struct.pack_into("<I", b, 16 + 4 * i, SANE_FPSCR[(i * 3 + seed) % len(SANE_FPSCR)])
    return bytes(b)

def run_qemu(blob, entries, ncases, scr):
    for attempt in range(2):
        pr, d, q = Q.run([(BASE & 0x1FFFFFFF, blob), (SCR & 0x1FFFFFFF, scr)], entries[0], BASE)
        ok = False
        try:
            t0 = time.time()
            while time.time() - t0 < 20:
                time.sleep(0.05 if time.time() - t0 < 1 else 0.25)
                q("stop")
                r = q("human-monitor-command", **{"command-line": "info registers"})["return"]
                m = re.search(r"pc=0x([0-9a-f]+)", r)
                if m and int(m.group(1), 16) in (BASE, BASE + 2): ok = True; break
                q("cont")
            if not ok: return None
            res, scr2 = Q.dump(q, d, [(RES & 0x1FFFFFFF, ncases * BLK), (SCR & 0x1FFFFFFF, SCR_SIZE)])
            return res, scr2
        finally:
            Q.finish(pr, q)
    return None

def run_host(blob, entries, ncases, scr, extra_entries, tag):
    d = tempfile.mkdtemp(prefix="h_")
    L = sh4lift.lift_blob(blob, BASE, list(entries) + list(extra_entries), d)
    exe = os.path.join(d, "t")
    cmd = ["cc", "-O1", "-std=gnu11", "-w", "-frounding-math"] + os.environ.get("SH4_CFLAGS", "").split() + [ "-I" + ROOT, "-I" + d, os.path.join(HERE, "test_main.c"), os.path.join(ROOT, "runtime.c"),
           os.path.join(d, "recomp_00.c"), os.path.join(d, "recomp_functab.c"), "-lm", "-o", exe]
    p = subprocess.run(cmd, capture_output=True, text=True)
    if p.returncode: return ("compile-error", p.stderr[:2000])
    open(d + "/blob", "wb").write(blob); open(d + "/scr", "wb").write(scr)
    args = [exe, "E", "%x" % entries[0], "L", "%x" % BASE, d + "/blob", "L", "%x" % SCR, d + "/scr",
            "D", "%x" % RES, "%x" % (ncases * BLK), d + "/res", "D", "%x" % SCR, "%x" % SCR_SIZE, d + "/scr2"]
    p = subprocess.run(args, capture_output=True, text=True, timeout=90)
    if p.returncode: return ("host-fail", p.stderr[:500])
    r = (open(d + "/res", "rb").read(), open(d + "/scr2", "rb").read())
    shutil.rmtree(d, ignore_errors=True)
    return r

def compare(cases, q, h):
    bad = []
    if q[1] != h[1]: bad.append(("scratch memory differs", None))
    for i, c in enumerate(cases):
        a = unpack_block(q[0][i*BLK:(i+1)*BLK]); b = unpack_block(h[0][i*BLK:(i+1)*BLK])
        diffs = []
        MASK = {"sr": 0x700000F3, "fpscr": 0x003C0003}   # QEMU drops SR.Q/M on stc; FPSCR cause/flag bits not modelled
        for k in a:
            if k in ("fr", "xf") and not c.fpu: continue
            if k in MASK: a[k] &= MASK[k]; b[k] &= MASK[k]
            if a[k] != b[k]:
                if isinstance(a[k], tuple): diffs.append((k, [(j, hex(x), hex(y)) for j, (x, y) in enumerate(zip(a[k], b[k])) if x != y]))
                else: diffs.append((k, hex(a[k]), hex(b[k])))
        if diffs: bad.append((c, diffs))
    return bad

def test_group(name, cases, seed, extra_entries=()):
    blob, entries = build_image(cases)
    if any(getattr(c, "fix", None) for c in cases):       # flow cases: resolve absolute addresses, rebuild
        for c in cases:
            if getattr(c, "fix", None): c.fix(c.t_addr)
        blob, entries = build_image(cases)
    extra_entries = [c.t_addr + o for c in cases for o in getattr(c, "entry_offs", [])]
    scr = scratch_blob(seed)
    q = run_qemu(blob, entries, len(cases), scr)
    if q is None: return (name, "QEMU-NO-HALT", None, len(cases))
    h = run_host(blob, entries, len(cases), scr, extra_entries, name)
    if h[0] in ("compile-error", "host-fail"): return (name, h[0], h[1], len(cases))
    bad = compare(cases, q, h)
    return (name, "PASS" if not bad else "FAIL", bad, len(cases))


ADD1, ADD2, ADD3, ADD4, ADD5 = 0x7101, 0x7202, 0x7304, 0x7408, 0x7510
def flow_groups(seed, per=8):
    rng = random.Random(seed ^ 0x5eed); groups = []
    def mk(label, words, fix=None, entries=()):
        cs = []
        for _ in range(per):
            c = Case(list(words), label); c.regs = [ru32(rng) for _ in range(16)]
            c.flags = [rng.getrandbits(1), rng.getrandbits(1), 0, 0]
            c.mach, c.macl, c.pr, c.fpul = ru32(rng), ru32(rng), ru32(rng), 0
            for r in (1, 2, 3, 5): c.regs[r] = rng.getrandbits(16)
            c.fix = fix; c.entry_offs = list(entries); cs.append(c)
        groups.append(("flow: " + label, cs))
    for nm, op in (("bt", 0x8901), ("bf", 0x8B01)): mk(nm, [op, ADD1, ADD2, ADD3, ADD4])
    for nm, op in (("bt/s", 0x8D01), ("bf/s", 0x8F01)): mk(nm, [op, ADD5, ADD1, ADD2, ADD3])
    for nm, op in (("bt back? bt/s disp0", 0x8D00), ("bf/s disp0", 0x8F00)): mk(nm, [op, ADD5, ADD1, ADD2, ADD3])
    mk("bra", [0xA001, ADD5, ADD1, ADD2, ADD3])
    SUB = [ADD3, 0x042A, 0x000B, 0x7508]
    mk("bsr+rts+sts pr", [0xB003, ADD1, ADD2, 0xA004, 0x0009] + SUB)
    def fixjsr(c_t): pass
    def f_jsr(t):  # set r6 = t+10 on every case (closure over group cases is set below)
        pass
    for nm, opw, rv, ent in (("jsr @r6", 0x460B, 10, [10]), ("bsrf r6", 0x0603, 6, [10]), ):
        cs_before = len(groups)
        mk(nm, [opw, ADD1, ADD2, 0xA004, 0x0009] + SUB, entries=ent)
        for c in groups[-1][1]:
            if nm.startswith("jsr"): c.fix = (lambda c, rv: lambda t: c.regs.__setitem__(6, t + rv))(c, rv)
            else: c.fix = (lambda c, rv: lambda t: c.regs.__setitem__(6, rv))(c, rv)
    mk("braf r6", [0x0623, ADD5, ADD1, ADD2, ADD3], entries=[6])
    for c in groups[-1][1]: c.fix = (lambda c: lambda t: c.regs.__setitem__(6, 2))(c)
    mk("jmp @r6", [0x462B, ADD5, ADD1, ADD2, ADD3], entries=[6])
    for c in groups[-1][1]: c.fix = (lambda c: lambda t: c.regs.__setitem__(6, t + 6))(c)
    return groups

KNOWN_QEMU_DEVIATION = {"rotl", "rotr", "div1", "mac.w"}   # qemu 11.1.2 disagrees with the ISA manual (see recomp_notes.md)
SKIP = {"ldtlb", "sleep", "trapa", "rts", "rte"}
QEMU_UNSUPPORTED = ("SGR", "fsrra", "fsca")   # SH4A-only in QEMU; not differentially testable

def gen_op_groups(seed, per_op=12):
    rng = random.Random(seed); groups = []
    for (mask, val, name, fn) in sh4ops.OPS:
        if fn is None or name in SKIP or any(x in name for x in QEMU_UNSUPPORTED): continue
        k = per_op
        if (~mask & 0xFFFF) == 0: k = 4
        cases = []; tries = 0
        while len(cases) < k and tries < k * 20:
            tries += 1
            c = make_case(rng, mask, val, name)
            if c: cases.append(c)
        if cases: groups.append((name + " [%04x/%04x]" % (val, mask), cases))
    return groups

def main():
    import argparse
    ap = argparse.ArgumentParser(); ap.add_argument("--seed", type=int, default=1); ap.add_argument("--per-op", type=int, default=12)
    ap.add_argument("--only", default=None); ap.add_argument("-j", type=int, default=8); ap.add_argument("--json", default=None)
    a = ap.parse_args()
    groups = gen_op_groups(a.seed, a.per_op) + flow_groups(a.seed)
    if a.only: groups = [g for g in groups if re.search(a.only, g[0])]
    t0 = time.time(); results = []
    with cf.ThreadPoolExecutor(a.j) as ex:
        futs = [ex.submit(test_group, n, c, a.seed) for n, c in groups]
        for f in futs:
            try: results.append(f.result())
            except Exception as e: results.append(("?", "EXC", repr(e), 0))
    npass = sum(1 for r in results if r[1] == "PASS")
    ncase = sum(r[3] for r in results)
    known = [r for r in results if r[1] == "FAIL" and any(r[0].startswith(k + " ") for k in KNOWN_QEMU_DEVIATION)]
    for name, status, bad, n in results:
        if status != "PASS" and (name, status, bad, n) not in known:
            print("==", name, status, n)
            if isinstance(bad, str): print(bad)
            elif bad:
                for c, diffs in bad[:2]:
                    if c is None or isinstance(c, str): print("  ", c); continue
                    print("   insn %04x regs_in=%s flags=%s" % (c.words[0], [hex(x) for x in c.regs], c.flags))
                    for d in diffs[:6]: print("     ", d)
    print("groups: %d pass / %d known-qemu-deviation / %d unexplained-fail / %d total; cases %d; %.1fs" % (npass, len(known), len(results) - npass - len(known), len(results), ncase, time.time() - t0))
    print("known qemu deviations:", [k[0] for k in known])
    if a.json:
        json.dump([{"op": r[0], "status": r[1], "cases": r[3]} for r in results], open(a.json, "w"), indent=1)

if __name__ == "__main__":
    main()
