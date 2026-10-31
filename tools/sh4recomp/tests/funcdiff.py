#!/usr/bin/env python3
"""Differential test on REAL functions of 1ST_READ.BIN: lifted C vs qemu-system-sh4 executing the original bytes.
Phase 1 (host 'select'): run each (function,args) in a forked child; drop calls that touch unmapped I/O, unresolved targets or time out.
Phase 2: surviving calls are batched; each batch is executed by QEMU (driver in SH-4 code) and by the host; r0,r1,fr0 per call and
the final 16 MiB RAM image are compared."""
import sys, os, random, struct, subprocess, tempfile, re, time, json
HERE = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(HERE)
sys.path.insert(0, ROOT); sys.path.insert(0, HERE)
import qemu_run as Q
REPO = os.path.dirname(os.path.dirname(ROOT))
BIN = os.path.join(REPO, "assets/dc/1ST_READ.BIN")
SCR2 = 0x8C500000
FLOATS = [0.0, 1.0, -1.0, 0.5, 2.0, 3.14159, 100.25, -7.5, 640.0, 480.0]
def fb(f): return struct.unpack("<I", struct.pack("<f", f))[0]

def RAMEQ(q, h):
    # compare image+scratch (0x10000..0x700000) and heap/stack area (0x800000..end); skip low driver area and the log at 0x700000
    return q[0x10000:0x700000] == h[0x10000:0x700000] and q[0x800000:0xFF0000] == h[0x800000:0xFF0000]

GEN = "gen_fix"      # lifted-C directory under tools/sh4recomp (override with --gen gen for the old buggy output)

def build_lib(gen):
    """compile <gen>/recomp_*.c + runtime.c into tests/build_<gen>/libr2.a (parallel, cached by mtime). Independent of the top-level Makefile/libr2recomp.a."""
    import glob, concurrent.futures as cf
    gdir = os.path.join(ROOT, gen); bdir = os.path.join(HERE, "build_" + gen); os.makedirs(bdir, exist_ok=True)
    srcs = sorted(glob.glob(os.path.join(gdir, "recomp_*.c"))) + [os.path.join(ROOT, "runtime.c")]
    deps = [os.path.join(ROOT, "runtime.h"), os.path.join(gdir, "recomp_decls.h")]
    newest_dep = max(os.path.getmtime(d) for d in deps)
    def one(src):
        o = os.path.join(bdir, os.path.basename(src)[:-2] + ".o")
        if not os.path.exists(o) or os.path.getmtime(o) < max(os.path.getmtime(src), newest_dep):
            subprocess.check_call(["cc", "-O1", "-std=gnu11", "-w", "-frounding-math", "-I" + ROOT, "-I" + gdir, "-c", src, "-o", o])
        return o
    with cf.ThreadPoolExecutor(os.cpu_count() or 4) as ex: objs = list(ex.map(one, srcs))
    lib = os.path.join(bdir, "libr2.a")
    if os.path.exists(lib): os.remove(lib)
    subprocess.check_call(["ar", "rcs", lib] + objs)
    return lib

def build_host(gen=None):
    gen = gen or GEN
    lib = build_lib(gen)
    out = os.path.join(HERE, "diff_host_" + gen)
    cmd = ["cc", "-O1", "-std=gnu11", "-w", "-frounding-math", "-I" + ROOT, "-I" + os.path.join(ROOT, gen),
           os.path.join(HERE, "diff_host.c"), lib, "-lm", "-o", out]
    subprocess.check_call(cmd); return out

def make_specs(funcs, rng):
    specs = []
    for a in funcs:
        for variant in range(3):
            if variant == 0: r = [SCR2 + 4 * rng.randrange(0, 2000) for _ in range(4)]
            elif variant == 1: r = [rng.randrange(0, 20) for _ in range(4)]
            else: r = [rng.choice([SCR2 + 32 * rng.randrange(0, 1000), rng.randrange(0, 300), 0, 1, 0xFFFFFFFF]) for _ in range(4)]
            specs.append((a, r, [fb(rng.choice(FLOATS)) for _ in range(4)]))
    return specs

def w(*x): return b"".join(struct.pack("<H", v & 0xFFFF) for v in x)
def assemble(specs, logaddr):
    """pool islands: one island after each call group so pc-relative reach (<=1020B) is satisfied."""
    BASE = 0x8C001000
    out = bytearray(w(0xAFFE, 0x0009, 0x0009, 0x0009))
    def island(chunk_code, chunk_pool, chunk_refs):
        nonlocal out
        start = BASE + len(out)
        n = len(chunk_code)
        pad = 0
        codesz = (n + 2) * 2                               # + bra + nop
        if (start + codesz) % 4: pad = 2
        poolst = start + codesz + pad
        over = poolst + 4 * len(chunk_pool)
        braw = start + n * 2
        cw = list(chunk_code) + [0xA000 | (((over - (braw + 4)) // 2) & 0xFFF), 0x0009]
        for (ci, pi) in chunk_refs:
            d = (poolst + 4 * pi - (((start + 2 * ci) + 4) & ~3)) // 4
            assert 0 <= d < 256, d
            cw[ci] |= d
        out += b"".join(struct.pack("<H", x) for x in cw) + (b"\0\0" if pad else b"") + b"".join(struct.pack("<I", x) for x in chunk_pool)
    entry = BASE + 8
    def mk():
        return [], [], []
    code, pool, refs = mk()
    def ldl(rn, v): refs.append((len(code), len(pool))); pool.append(v & 0xFFFFFFFF); code.append(0xD000 | (rn << 8))
    ldl(15, 0x8CFFF000); ldl(0, SCR2 + 0x8000); code.append(0x401E); ldl(8, logaddr)
    island(code, pool, refs)
    for (a, r, f) in specs:
        code, pool, refs = mk()
        ldl(2, 0x00040001); code.append(0x426A)
        for i in range(4): ldl(2, f[i]); code += [0x425A, 0xF00D | ((4 + i) << 8)]
        for i in range(4): ldl(4 + i, r[i])
        ldl(1, a); code += [0x410B, 0x0009]
        ldl(2, 0x00040001); code.append(0x426A)
        code += [0x2802, 0x7804, 0x2812, 0x7804, 0xF80A, 0x7804]   # mov.l r0,@r8 ; add ; mov.l r1,@r8 ; add ; fmov.s fr0,@r8 ; add
        island(code, pool, refs)
    code, pool, refs = mk()
    # restore pr and return to halt
    refs.append((0, 0)); pool.append(BASE); code += [0xD000, 0x402A, 0x000B, 0x0009]
    island(code, pool, refs)
    return bytes(out)

def run_qemu(blob, nspecs, scr):
    LOG = 0x8C700000
    pr, d, q = Q.run([(0x0C001000, blob), (0x0C010000, open(BIN, "rb").read()), (SCR2 & 0x1FFFFFFF, scr)], 0x8C001008, 0x8C001000)
    try:
        t0 = time.time(); ok = False
        while time.time() - t0 < 8:
            time.sleep(0.1); q("stop")
            r = q("human-monitor-command", **{"command-line": "info registers"})["return"]
            m = re.search(r"pc=0x([0-9a-f]+)", r)
            if m and int(m.group(1), 16) in (0x8C001000, 0x8C001002): ok = True; break
            q("cont")
        if not ok: return None
        log, ram = Q.dump(q, d, [(LOG & 0x1FFFFFFF, nspecs * 12), (0x0C000000, 0x1000000)])
        return log, ram
    finally: Q.finish(pr, q)

def main():
    import argparse
    ap = argparse.ArgumentParser(); ap.add_argument("--limit", type=int, default=0); ap.add_argument("--batch", type=int, default=25)
    ap.add_argument("--seed", type=int, default=7)
    ap.add_argument("--gen", default="gen_fix"); ap.add_argument("--no-sites", action="store_true", help="do not add the functions containing the 57 formerly-wrong constant-jsr sites")
    a = ap.parse_args()
    sys.path.insert(0, ROOT)
    import sh4lift
    funcs = sorted(f for f in sh4lift.load_funcs(os.path.join(REPO, "re_analysis/dc/functions.txt")) if f < 0x8C0F2C3C)
    rng = random.Random(a.seed)
    global GEN; GEN = a.gen
    import fixed_sites
    site_fns = sorted(set(f for _, f, _ in fixed_sites.get()) & set(funcs))
    if a.limit: funcs = rng.sample(funcs, a.limit)
    if not a.no_sites: funcs = sorted(set(funcs) | set(site_fns))
    print("gen=%s; forced-in functions containing formerly-wrong constant-jsr sites: %d" % (GEN, 0 if a.no_sites else len(site_fns)))
    specs = make_specs(funcs, rng)
    host = build_host()
    tmp = tempfile.mkdtemp(prefix="fd_")
    import atexit, shutil; atexit.register(shutil.rmtree, tmp, True)
    sp = os.path.join(tmp, "spec"); open(sp, "w").write("".join("%x %s %s\n" % (s[0], " ".join("%x" % v for v in s[1]), " ".join("%x" % v for v in s[2])) for s in specs))
    subprocess.check_call([host, BIN, sp, "select", os.path.join(tmp, "sel")])
    ok = [specs[int(l.split()[0])] for l in open(os.path.join(tmp, "sel")) if l.split()[1] == "1"]
    print("calls generated %d (functions %d); host-run clean (no I/O fault/unresolved/timeout): %d; distinct functions %d" % (len(specs), len(funcs), len(ok), len(set(s[0] for s in ok))))
    # scratch image identical to host LCG
    x = 12345; scr = bytearray()
    for i in range(0x10000):
        x = (x * 1103515245 + 12345) & 0xFFFFFFFF; scr.append((x >> 16) & 0xFF)
    scr = bytes(scr)
    ncmp = nmis = 0; bad = []; batches_fail = 0; fn_ok = set(); fn_bad = set()
    def do_batch(b):
        blob = assemble(b, 0x8C700000)
        qr = run_qemu(blob, len(b), scr)
        if qr is None: return None
        hl = os.path.join(tmp, "hl"); hr = os.path.join(tmp, "hr")
        bs = os.path.join(tmp, "bs"); open(bs, "w").write("".join("%x %s %s\n" % (s[0], " ".join("%x" % v for v in s[1]), " ".join("%x" % v for v in s[2])) for s in b))
        env = dict(os.environ)
        if len(b) == 1:     # single call: the driver's 'jsr @r1' return address (= PR seen by the callee) is known; setjmp-like functions store PR to memory
            env["DH_PR"] = "%x" % (0x8C001000 + blob.find(b"\x0b\x41") + 4)
        p = subprocess.run([host, BIN, bs, "run", hl, hr], capture_output=True, env=env)
        if p.returncode: return ("hostfail", p.returncode)
        hlog = open(hl, "rb").read(); hram = open(hr, "rb").read()
        return qr, hlog, hram
    for i in range(0, len(ok), a.batch):
        b = ok[i:i + a.batch]
        res = do_batch(b)
        if res is None or res[0] == "hostfail":
            # isolate: run singly
            for s in b:
                r1 = do_batch([s])
                if r1 is None or r1[0] == "hostfail": batches_fail += 1; continue
                (qlog, qram), hlog, hram = r1
                ncmp += 1
                if qlog != hlog[:len(qlog)] or not RAMEQ(qram, hram): nmis += 1; bad.append(s); fn_bad.add(s[0])
                else: fn_ok.add(s[0])
            continue
        (qlog, qram), hlog, hram = res
        same_log = qlog == hlog
        same_ram = RAMEQ(qram, hram)
        if same_log and same_ram:
            ncmp += len(b); fn_ok.update(s[0] for s in b)
        else:   # find offending calls individually
            for s in b:
                r1 = do_batch([s])
                if r1 is None or r1[0] == "hostfail": batches_fail += 1; continue
                (ql, qr), hl_, hr_ = r1
                ncmp += 1
                if ql != hl_ or not RAMEQ(qr, hr_): nmis += 1; bad.append(s); fn_bad.add(s[0])
                else: fn_ok.add(s[0])
        print("  batch %d/%d  compared=%d mismatches=%d" % (i // a.batch + 1, (len(ok) + a.batch - 1) // a.batch, ncmp, nmis), flush=True)
    print("site functions matching %d / bad %d / dropped(unrunnable) %d" % (len(set(site_fns) & (fn_ok - fn_bad)), len(set(site_fns) & fn_bad), len(set(site_fns) - fn_ok - fn_bad)))
    print("RESULT calls compared %d, mismatching %d, qemu/host-unrunnable %d; functions fully matching %d, functions with mismatch %d" % (ncmp, nmis, batches_fail, len(fn_ok - fn_bad), len(fn_bad)))
    for s in bad: print("  MISMATCH fn %08x args %s fregs %s" % (s[0], [hex(v) for v in s[1]], [hex(v) for v in s[2]]))

if __name__ == "__main__":
    main()
