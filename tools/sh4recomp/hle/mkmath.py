#!/usr/bin/env python3
"""Generate hle/mathhooks.c: "register-localised" hooks of hot, pure-math lifted functions.

Why: in the lifted C every guest register lives in the SH4Ctx struct.  Guest RAM is a byte array and ST32() is a memcpy into it, so the compiler must assume any
store may alias *c and reloads / respills r[] and fr[] around every guest store.  The same body with the registers in C locals does not.  The generated hook
is a mechanical transcription of the lifted body (same operations, same order, same float helpers) with
  R(n) -> local rN, c->t / c->pr / c->fpul -> locals, fp_ld/fp_st/fp_arith/fp_fmac/fp_mov/fp_ftrc/fp_float -> local fr bits (FPSCR.SZ = PR = 0 guaranteed by an entry guard,
  otherwise the original body runs), and every call out of the function (f_xxxx(c) / sh4_call) bracketed by spill / reload of the locals to c.
Nothing is re-derived from the decompilation, so the result is bit-identical by construction; build with -DR2_CHK_MATH to prove it on a run (original and hook are run from
the same RAM/ctx snapshot and registers + 16 MiB RAM are compared).

usage: python3 hle/mkmath.py [gen_fix|gen] ADDR [ADDR ...]   (writes hle/mathhooks.c)"""
import re, sys, os, glob

root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
gen = "gen_fix"
addrs = []


def find_fn(addr):
    for f in sorted(glob.glob(os.path.join(root, gen, "recomp_[0-9]*.c"))):
        t = open(f).read()
        m = re.search(r"^void f_%s\(SH4Ctx \*c\) \{\n" % addr, t, re.M)
        if m:
            i = m.end()
            j = t.index("\n}\n", i)
            return t[i:j + 1]
    raise SystemExit("function f_%s not found in %s" % (addr, gen))


def balanced(s, i):
    """s[i] == '(' -> index just past the matching ')'"""
    d = 0
    for k in range(i, len(s)):
        if s[k] == '(':
            d += 1
        elif s[k] == ')':
            d -= 1
            if d == 0:
                return k + 1
    raise ValueError("unbalanced")


def split_args(a):
    out, d, cur = [], 0, ""
    for ch in a:
        if ch == ',' and d == 0:
            out.append(cur); cur = ""
            continue
        if ch == '(':
            d += 1
        elif ch == ')':
            d -= 1
        cur += ch
    out.append(cur)
    return [x.strip() for x in out]


class Unsupported(Exception):
    pass


def localise(addr, body, sq=False):
    """sq=True (hle/mkgeom.py): ST32 -> STQ (store-queue window written straight into sh4_sq_buf, same bytes as sh4_io_write), sh4_pref / fp_cmp supported"""
    used_r, used_fr = set(), set()
    uses_fpul = False
    for m in re.finditer(r"c->([a-z_]+)", body):
        if m.group(1) not in ("t", "pr", "gbr", "fpul", "fr"):
            raise Unsupported("c->%s" % m.group(1))
    if re.search(r"c->fr(?!\[\d+\])", body):
        raise Unsupported("c->fr (non-constant index)")
    if re.search(r"c->gbr\s*=[^=]", body):
        raise Unsupported("gbr write")
    for m in re.finditer(r"\b(sh4_\w+|fp_\w+|f_[0-9a-f]{8})\(c[,)]", body):
        n = m.group(1)
        if n not in ("sh4_call", "fp_ld", "fp_st", "fp_arith", "fp_fmac", "fp_mov", "fp_ftrc", "fp_float", "fp_sz") and not (sq and n in ("sh4_pref", "fp_cmp")) and not re.match(r"f_[0-9a-f]{8}$", n):
            raise Unsupported(n)
    # --- fp helper calls (balanced) ---
    out, i = "", 0
    pat = re.compile(r"\b(fp_ld|fp_st|fp_arith|fp_fmac|fp_mov|fp_ftrc|fp_float|fp_cmp)\(c,")
    while True:
        m = pat.search(body, i)
        if not m:
            out += body[i:]
            break
        out += body[i:m.start()]
        p = body.index("(", m.start())
        e = balanced(body, p)
        args = split_args(body[p + 1:e - 1])[1:]
        k = m.group(1)
        if k == "fp_ld":
            n = int(args[0]); used_fr.add(n); out += "fr%d=LD32(%s)" % (n, args[1])
        elif k == "fp_st":
            n = int(args[0]); used_fr.add(n); out += "ST32(%s,fr%d)" % (args[1], n)
        elif k == "fp_arith":
            op, n, mm = int(args[0]), int(args[1]), int(args[2]); used_fr.update((n, mm))
            out += "fr%d=L_arith(c,%d,fr%d,fr%d)" % (n, op, n, mm)
        elif k == "fp_fmac":
            n, mm = int(args[0]), int(args[1]); used_fr.update((0, n, mm))
            out += "fr%d=L_fmac(c,fr0,fr%d,fr%d)" % (n, mm, n)
        elif k == "fp_mov":
            n, mm = int(args[0]), int(args[1]); used_fr.update((n, mm)); out += "fr%d=fr%d" % (n, mm)
        elif k == "fp_ftrc":
            n = int(args[0]); used_fr.add(n); uses_fpul = True; out += "fpul_=fp_sat((double)fin(c,fr%d))" % n
        elif k == "fp_cmp":
            op, n, mm = int(args[0]), int(args[1]), int(args[2]); used_fr.update((n, mm))
            out += "t_=(fin(c,fr%d) %s fin(c,fr%d))" % (n, ">" if op else "==", mm)
        elif k == "fp_float":
            n = int(args[0]); used_fr.add(n); uses_fpul = True; out += "fr%d=fout(c,(float)(int32_t)fpul_)" % n
        i = e
    body = re.sub(r"c->fr\[(\d+)\]", lambda m: (used_fr.add(int(m.group(1))), "fr%s" % m.group(1))[1], out)
    body = body.replace("fp_sz(c)", "4u")
    if sq:
        body = body.replace("ST32(", "STQ(")
    body = re.sub(r"\bR\((\d+)\)", lambda m: (used_r.add(int(m.group(1))), "r%s" % m.group(1))[1], body)
    body = body.replace("c->t", "t_").replace("c->pr", "pr_").replace("c->gbr", "gbr_").replace("c->fpul", "fpul_")
    if "fpul_" in body:
        uses_fpul = True
    spill = "".join("c->r[%d]=r%d;" % (i, i) for i in sorted(used_r)) + "".join("c->fr[%d]=fr%d;" % (i, i) for i in sorted(used_fr)) + "c->t=t_;c->pr=pr_;" + ("c->fpul=fpul_;" if uses_fpul else "")
    reload = "".join("r%d=c->r[%d];" % (i, i) for i in sorted(used_r)) + "".join("fr%d=c->fr[%d];" % (i, i) for i in sorted(used_fr)) + "t_=c->t;pr_=c->pr;" + ("fpul_=c->fpul;" if uses_fpul else "")
    # --- calls out of the function: spill, call by address (hook-aware), reload; one pass so nothing is wrapped twice ---
    def call(m):
        tgt = "0x%su" % m.group(1) if m.group(1) else m.group(2)
        return "{%s sh4_call(c,%s);%s}" % (spill, tgt, reload)
    body = re.sub(r"\b(?:f_([0-9a-f]{8})\(c\)|sh4_call\(c,([^;]*)\));", call, body)
    body = re.sub(r"\breturn;", lambda m: "{%s return; }" % spill, body)
    decl = "".join("    uint32_t r%d=c->r[%d];\n" % (i, i) for i in sorted(used_r))
    decl += "".join("    uint32_t fr%d=c->fr[%d];\n" % (i, i) for i in sorted(used_fr))
    decl += "    uint32_t t_=c->t, pr_=c->pr; const uint32_t gbr_=c->gbr;%s\n" % (" uint32_t fpul_=c->fpul;" if uses_fpul else "")
    return decl, body


HEAD = r'''/* GENERATED by hle/mkmath.py - do not edit.  Register-localised hooks of hot, pure-math lifted functions (see the generator's header comment).
 * Disable: -DR2_NO_MATH_HOOKS at build time, R2_NO_MATH_HOOKS=1 in the host environment.  Verify: -DR2_CHK_MATH (host; runs original + hook from the same snapshot and
 * compares ctx + 16 MiB RAM, summary at exit; R2_CHK_MATH_EVERY=n samples every n-th call). */
#include "hle.h"
#include "hle_priv.h"
#include "enter.h"
#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* same expressions as runtime.h fp_arith / fp_fmac (PR = 0 path) on fr bit patterns */
static inline uint32_t L_arith(SH4Ctx *c, int op, uint32_t xa, uint32_t xb) {
    float a = fin(c, xa), b = fin(c, xb), r;
    switch (op) { case 0: r = a + b; break; case 1: r = a - b; break; case 2: r = a * b; break; default: r = a / b; }
    return nanfix(fout(c, r), xa, xb);
}
#ifdef SH4_FASTFP
static inline uint32_t L_fmac(SH4Ctx *c, uint32_t f0, uint32_t m, uint32_t n) { return fout(c, fin(c, f0) * fin(c, m) + fin(c, n)); }
#else
static inline uint32_t L_fmac(SH4Ctx *c, uint32_t f0, uint32_t m, uint32_t n) { return fout(c, fmaf(fin(c, f0), fin(c, m), fin(c, n))); }
#endif

'''

CHK = r'''
#ifdef R2_CHK_MATH
#include <time.h>
static uint8_t chk_snap[SH4_RAM_SIZE], chk_res[SH4_RAM_SIZE];
static struct { unsigned long calls, bad_ctx, bad_ram; double t_orig, t_fast; } chk_st[%(n)d];
static const char *chk_names[%(n)d] = { %(names)s };
static const uint32_t chk_addrs[%(n)d] = { %(addrs)s };
static unsigned long chk_every, chk_seq;
static double now_s(void) { struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts); return ts.tv_sec + ts.tv_nsec * 1e-9; }
static void chk_report(void) {
    for (int i = 0; i < %(n)d; i++) if (chk_st[i].calls)
        fprintf(stderr, "[chk-math] %%s: %%lu calls checked, ctx mismatches %%lu, RAM mismatches %%lu | host time orig %%.3f ms hook %%.3f ms (%%.2fx; -O1 host, not Vita)\n", chk_names[i], chk_st[i].calls,
                chk_st[i].bad_ctx, chk_st[i].bad_ram, chk_st[i].t_orig * 1e3, chk_st[i].t_fast * 1e3, chk_st[i].t_fast > 0 ? chk_st[i].t_orig / chk_st[i].t_fast : 0.0);
}
static void chk_run(SH4Ctx *c, int idx, void (*fast)(SH4Ctx *)) {
    static int init; if (!init) { init = 1; const char *e = getenv("R2_CHK_MATH_EVERY"); chk_every = e ? strtoul(e, 0, 10) : 1; if (!chk_every) chk_every = 1; atexit(chk_report); }
    if (chk_seq++ %% chk_every) { fast(c); return; }
    memcpy(chk_snap, sh4_ram, SH4_RAM_SIZE);
    SH4Ctx c0 = *c, c2 = *c; double t0 = now_s();
    hle_orig(&c2, chk_addrs[idx]);
    double t1 = now_s();
    memcpy(chk_res, sh4_ram, SH4_RAM_SIZE);
    memcpy(sh4_ram, chk_snap, SH4_RAM_SIZE);
    double t2 = now_s(); fast(c); double t3 = now_s();
    chk_st[idx].calls++; chk_st[idx].t_orig += t1 - t0; chk_st[idx].t_fast += t3 - t2;
    if (memcmp(c, &c2, sizeof c2)) {
        chk_st[idx].bad_ctx++;
        if (chk_st[idx].bad_ctx <= 8) {
            fprintf(stderr, "[chk-math] %%s CTX MISMATCH (call %%lu):", chk_names[idx], chk_st[idx].calls);
            for (int i = 0; i < 16; i++) if (c->r[i] != c2.r[i]) fprintf(stderr, " r%%d hook=%%08x orig=%%08x (in %%08x)", i, c->r[i], c2.r[i], c0.r[i]);
            for (int i = 0; i < 16; i++) if (c->fr[i] != c2.fr[i]) fprintf(stderr, " fr%%d hook=%%08x orig=%%08x (in %%08x)", i, c->fr[i], c2.fr[i], c0.fr[i]);
            for (int i = 0; i < 16; i++) if (c->xf[i] != c2.xf[i]) fprintf(stderr, " xf%%d", i);
            if (c->t != c2.t) fprintf(stderr, " t hook=%%u orig=%%u", c->t, c2.t);
            if (c->pr != c2.pr) fprintf(stderr, " pr hook=%%08x orig=%%08x", c->pr, c2.pr);
            if (c->fpul != c2.fpul) fprintf(stderr, " fpul hook=%%08x orig=%%08x", c->fpul, c2.fpul);
            if (c->fpscr != c2.fpscr) fprintf(stderr, " fpscr");
            fprintf(stderr, "\n");
        }
    }
    if (memcmp(chk_res, sh4_ram, SH4_RAM_SIZE)) {
        chk_st[idx].bad_ram++;
        if (chk_st[idx].bad_ram <= 8) {
            unsigned shown = 0; fprintf(stderr, "[chk-math] %%s RAM MISMATCH (call %%lu) sp=%%08x:", chk_names[idx], chk_st[idx].calls, c0.r[15]);
            for (uint32_t k = 0; k < SH4_RAM_SIZE && shown < 12; k++) if (chk_res[k] != sh4_ram[k]) { fprintf(stderr, " %%06x(orig %%02x hook %%02x)", k, chk_res[k], sh4_ram[k]); shown++; }
            fprintf(stderr, "\n");
        }
    }
    memcpy(sh4_ram, chk_res, SH4_RAM_SIZE); *c = c2;          /* continue on the original's result: every call is checked independently */
}
#endif
'''


def main():
    global gen, addrs
    args_ = sys.argv[1:]
    if args_ and args_[0] in ("gen", "gen_fix"):
        gen = args_.pop(0)
    addrs = args_ or ["8c07be60"]
    fns, skipped = [], []
    for a in addrs:
        a = a.lower().replace("0x", "")
        body = find_fn(a)
        try:
            decl, code = localise(a, body)
        except Unsupported as e:
            skipped.append((a, str(e)))
            continue
        fns.append((a, decl, code))
    for a, why in skipped:
        sys.stderr.write("skipped f_%s: unsupported construct %s\n" % (a, why))
    o = [HEAD]
    for a, decl, code in fns:
        o.append("static void h_math_%s(SH4Ctx *c) {\n"
                 "    if (c->fpscr & (SH4_FPSCR_SZ | SH4_FPSCR_PR)) { hle_orig(c, 0x%s); return; }      /* the guest only runs this with SZ = PR = 0; anything else takes the original body */\n"
                 "    HLE_ENTER(0x%s);\n%s%s}\n\n" % (a, a.upper(), a.upper(), decl, code))
    n = len(fns)
    o.append(CHK % dict(n=n, names=", ".join('"f_%s"' % a for a, _, _ in fns), addrs=", ".join("0x%sU" % a.upper() for a, _, _ in fns)))
    o.append("#ifdef R2_CHK_MATH\n")
    for i, (a, _, _) in enumerate(fns):
        o.append("static void chk_%s(SH4Ctx *c) { chk_run(c, %d, h_math_%s); }\n" % (a, i, a))
    o.append("#endif\n\nvoid hle_mathhooks_init(void) {\n#ifndef R2_NO_MATH_HOOKS\n    if (getenv(\"R2_NO_MATH_HOOKS\")) return;\n")
    for a, _, _ in fns:
        o.append("#ifdef R2_CHK_MATH\n    hle_hook(0x%s, chk_%s);\n#else\n    hle_hook(0x%s, h_math_%s);\n#endif\n" % (a.upper(), a, a.upper(), a))
    o.append("#endif\n}\n")
    open(os.path.join(root, "hle", "mathhooks.c"), "w").write("".join(o))
    sys.stderr.write("generated hle/mathhooks.c: %s\n" % ", ".join("f_" + a for a, _, _ in fns))


if __name__ == "__main__":
    main()
