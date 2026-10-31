#!/usr/bin/env python3
"""SH-4 static recompiler: decodes raw bytes (not Ghidra p-code) and emits one C function per guest function.
usage: sh4lift.py --bin 1ST_READ.BIN --base 0x8C010000 --funcs functions.txt --out gen/ [--comments]
Library use: lift_blob(...) for unit/diff tests."""
import sys, os, re, struct, json, argparse, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sh4ops
from sh4ops import s8, s12, s16, FLOW

TAB = sh4ops.table()
M32 = 0xFFFFFFFF

class Image:
    def __init__(self, data, base): self.d, self.base = data, base
    def has(self, a, n=2): return self.base <= a and a + n <= self.base + len(self.d)
    def r16(self, a): return struct.unpack_from("<H", self.d, a - self.base)[0]
    def r32(self, a): return struct.unpack_from("<I", self.d, a - self.base)[0]
    def rd(self, a, n):  # reader used for literal loads
        if not self.has(a, n): return 0
        return self.r16(a) if n == 2 else self.r32(a)

WRITE_RE = re.compile(r"\bR\((\d+)\)\s*(?:[-+*&|^]|<<|>>)?=(?!=)|\bR\((\d+)\)(?:\+\+|--)")

def flow_kind(op):
    for (mk, vl), k in FLOW.items():
        if (op & mk) == vl: return k
    return None

class Stats:
    def __init__(self):
        self.insns = 0; self.undecoded = []; self.indirect_jmp = []; self.resolved_tables = []
        self.unres_jmp = []; self.calls_direct = 0; self.calls_indirect = 0; self.calls_const = 0
        self.tail_out = 0; self.mid_targets = []; self.hist = collections.Counter(); self.bytes = 0
        self.slot_branch = []; self.fall_off = []; self.const_jmp = 0

class Lifter:
    def __init__(self, img, funcs, comments=False):
        self.img = img
        self.funcs = dict(funcs)            # addr -> end
        self.starts = sorted(self.funcs)
        self.comments = comments
        self.st = Stats()
        self.call_targets = set()           # static call/tail targets (for discovery)
        self.covered = {}                   # insn addr -> function addr
        self.newfuncs = set()

    # ------------- decoding helpers
    def dec(self, a):
        if not self.img.has(a): return None, None
        o = self.img.r16(a)
        return o, TAB[o]

    def jump_table(self, addr, op, kind, fstart, fend, slot):
        """heuristic switch recovery for braf/jmp @Rn at addr. returns list of targets or None"""
        img = self.img
        n = (op >> 8) & 15
        bases = []; limit = None; seen_imm = None
        a = addr - 2
        for _ in range(28):
            if a < fstart: break
            o = img.r16(a)
            if (o & 0xFF00) == 0xC700:
                bases.append(((a + 4) & ~3) + (o & 255) * 4)
            elif (o & 0xF000) == 0xD000:
                v = img.rd(((a + 4) & ~3) + (o & 255) * 4, 4)
                if fstart <= v < fend: bases.append(v)
            elif (o & 0xF000) == 0xE000 and limit is None:
                imm = o & 255
                # look forward for cmp/hi or cmp/hs using that reg before the branch
                for b in range(a + 2, addr, 2):
                    p = img.r16(b)
                    if ((p & 0xF00F) in (0x3006, 0x3002)) and ((((p >> 4) & 15) == ((o >> 8) & 15)) or True) and imm < 0x80:
                        limit = imm + 1; break
            elif (o & 0xFF00) == 0x8800 and limit is None:   # cmp/eq #imm (rare), ignore
                pass
            a -= 2
        elif_ = None
        for base in bases:
            tg = []
            maxn = limit if limit else 200
            tmin = fend
            for i in range(maxn):
                if kind == "braf":
                    ea = base + 2 * i
                    if not img.has(ea, 2): break
                    if ea >= tmin: break
                    t = (addr + 4 + s16(img.r16(ea))) & M32
                else:
                    ea = base + 4 * i
                    if not img.has(ea, 4): break
                    if ea >= tmin: break
                    t = img.r32(ea)
                if not (fstart <= t < fend) or (t & 1): break
                if base <= t < ea + 4: break
                tg.append(t); tmin = min(tmin, t) if t > base else tmin
            if len(tg) >= 2 or (limit == 1 and tg):
                return tg
        return None

    def find_const(self, addr, n, fstart):
        """value of Rn at 'addr' if defined by a literal/imm load <=10 insns earlier in straight-line code"""
        img = self.img
        b = addr - 2
        for _ in range(10):
            if b < fstart or not img.has(b): return None
            o = img.r16(b); ent = TAB[o]
            if ent is None or flow_kind(o) is not None: return None
            if (o & 0xF000) == 0xD000 and ((o >> 8) & 15) == n:
                self._cl = b
                return img.rd(((b + 4) & ~3) + (o & 255) * 4, 4)
            if (o & 0xF000) == 0x9000 and ((o >> 8) & 15) == n:
                self._cl = b
                return s16(img.rd(b + 4 + (o & 255) * 2, 2)) & M32
            if (o & 0xF000) == 0xE000 and ((o >> 8) & 15) == n:
                self._cl = b
                return s8(o & 255) & M32
            for l in ent[1](o, b, img.rd):
                for m in WRITE_RE.finditer(l):
                    if int(m.group(1) or m.group(2)) == n: return None
            b -= 2
        return None

    # ------------- per-function lift
    def lift(self, fa, fend):
        img, st = self.img, self.st
        reach = {}               # addr -> kind info
        slots = set(); targets = set(); order = []
        wl = [fa]
        info = {}                # addr -> dict(kind, op, ...)
        while wl:
            a = wl.pop()
            if a in info: continue
            if not (fa <= a < fend) or not img.has(a):
                continue
            op, ent = self.dec(a)
            fk = flow_kind(op) if ent else None
            rec = {"op": op, "name": ent[0] if ent else None, "fk": fk}
            info[a] = rec
            if ent is None:
                rec["fall"] = None; continue
            if fk is None:
                rec["fall"] = a + 2; wl.append(a + 2); continue
            # branches
            def need_slot():
                if not img.has(a + 2): return None
                so, se = self.dec(a + 2)
                rec["slot"] = (so, se)
                if se is None or flow_kind(so) is not None:
                    st.slot_branch.append((a, so))
                slots.add(a + 2)
            if fk in ("bt", "bf"):
                t = a + 4 + s8(op & 255) * 2; rec["tgt"] = t; rec["fall"] = a + 2
                targets.add(t); wl += [t, a + 2]
            elif fk in ("bts", "bfs"):
                need_slot(); t = a + 4 + s8(op & 255) * 2; rec["tgt"] = t; rec["fall"] = a + 4
                targets.add(t); wl += [t, a + 4]
            elif fk == "bra":
                need_slot(); t = a + 4 + s12(op & 0xFFF) * 2; rec["tgt"] = t; rec["fall"] = None
                targets.add(t); wl.append(t)
            elif fk == "bsr":
                need_slot(); t = a + 4 + s12(op & 0xFFF) * 2; rec["tgt"] = t; rec["fall"] = a + 4
                self.call_targets.add(t); wl.append(a + 4)
            elif fk in ("jsr", "bsrf"):
                need_slot(); rec["fall"] = a + 4; wl.append(a + 4)
                if fk == "jsr":
                    cv = self.find_const(a, (op >> 8) & 15, fa)
                    if cv is not None and (cv & 1) == 0 and img.has(cv): rec["cv"] = cv; rec["cl"] = self._cl; self.call_targets.add(cv)
            elif fk in ("rts", "rte"):
                need_slot(); rec["fall"] = None
            elif fk in ("jmp", "braf"):
                need_slot(); rec["fall"] = None
                cv = self.find_const(a, (op >> 8) & 15, fa) if fk == "jmp" else None
                if cv is not None and (cv & 1) == 0 and img.has(cv):
                    rec["cv"] = cv; rec["cl"] = self._cl; rec["table"] = None
                    if fa <= cv < fend: targets.add(cv); wl.append(cv)
                    else: self.call_targets.add(cv)
                    tl = None
                else:
                    tl = self.jump_table(a, op, fk, fa, fend, None)
                rec["table"] = tl
                if tl:
                    for t in tl: targets.add(t); wl.append(t)
        # undecoded accounting
        for a, r in info.items():
            if r["name"] is None: st.undecoded.append((a, r["op"]))
        # joins
        # ------------- emit
        lines = []
        name = f"f_{fa:08x}"
        out = [f"void {name}(SH4Ctx *c) {{"]
        consts = {}
        keys = sorted(info)
        # labels: branch targets + non-adjacent fallthrough destinations
        labels = set(t for t in targets if t in info)
        for i, a in enumerate(keys):
            f = info[a].get("fall")
            nxt = keys[i + 1] if i + 1 < len(keys) else None
            if f is not None and f != nxt and f in info: labels.add(f)
        # soundness: a constant-register jsr/jmp is only direct if no branch target (merge point) lies between the literal load and the
        # jump - otherwise another path may reach the jump with a different register value (e.g. 0x8C010940: r14 = 0x8C0135B6 or 0x8C0138E0).
        for a_, r_ in info.items():
            if "cv" in r_ and any(r_["cl"] < l_ <= a_ for l_ in labels):
                del r_["cv"]; st.cv_dropped = getattr(st, "cv_dropped", 0) + 1
        def target_goto(t):
            """code transferring control to guest address t from within this function"""
            if t in info and fa <= t < fend:
                return f"goto L{t:08x};"
            self.call_targets.add(t); st.tail_out += 1
            if t in self.funcs: return f"{{ f_{t:08x}(c); return; }}"
            return f"{{ sh4_call(c,{t:#x}u); return; }}"
        def emit_plain(a, o, ent, consts):
            """statements for non-branch instruction (also used for delay slots)"""
            if ent is None:
                return [f"sh4_undef(c,{a:#x}u,{o:#x}u);"]
            ls = ent[1](o, a, img.rd)
            return ls
        def track(a, o, ls):
            for l in ls:
                for m in WRITE_RE.finditer(l):
                    k = int(m.group(1) or m.group(2)); consts.pop(k, None)
            if (o & 0xF000) == 0xD000:
                consts[(o >> 8) & 15] = img.rd(((a + 4) & ~3) + (o & 255) * 4, 4)
            elif (o & 0xF000) == 0xE000:
                consts[(o >> 8) & 15] = s8(o & 255) & M32
        prev_fall = True
        for i, a in enumerate(keys):
            r = info[a]; o = r["op"]
            if a in labels: out.append(f"L{a:08x}:;")
            st.insns += 1; st.bytes += 2
            if r["name"]: st.hist[r["name"]] += 1
            self.covered[a] = fa
            cm = f" /* {a:08x} {r['name']} */" if self.comments else ""
            fk = r["fk"]
            body = []
            if r["name"] is None:
                body = [f"sh4_undef(c,{a:#x}u,{o:#x}u);"]
                body.append("return;")
                # unreachable beyond; falls handled by return
                out.append("  " + " ".join(body) + cm); prev_fall = False; continue
            if fk is None:
                ls = emit_plain(a, o, r["name"] and (r["name"], TAB[o][1]), consts)
                out.append("  " + "".join(ls) + cm)
            else:
                so, se = (None, None); sl = []
                if "slot" in r:
                    so, se = r["slot"]
                    st.insns += 1; st.bytes += 2
                    if se: st.hist[se[0] + " (slot)"] += 1
                    sl = emit_plain(a + 2, so, se, consts) if se and flow_kind(so) is None else [f"sh4_undef(c,{a+2:#x}u,{so:#x}u);"]
                n = (o >> 8) & 15
                if fk == "bt" or fk == "bf":
                    cond = "c->t" if fk == "bt" else "!c->t"
                    out.append(f"  if({cond}) {target_goto(r['tgt'])}" + cm)
                elif fk in ("bts", "bfs"):
                    cond = "c->t" if fk == "bts" else "!c->t"
                    out.append(f"  {{ uint32_t k={cond}; {''.join(sl)} if(k) {target_goto(r['tgt'])} }}" + cm)
                    self.covered[a + 2] = fa
                elif fk == "bra":
                    out.append(f"  {{ {''.join(sl)} {target_goto(r['tgt'])} }}" + cm)
                elif fk in ("bsr", "bsrf", "jsr"):
                    ret = a + 4
                    if fk == "bsr":
                        t = r["tgt"]; self.call_targets.add(t); st.calls_direct += 1
                        call = self.call_stmt(t)
                        out.append(f"  {{ c->pr={ret:#x}u; {''.join(sl)} {call} }}" + cm)
                    elif fk == "bsrf":
                        st.calls_indirect += 1
                        out.append(f"  {{ uint32_t tg={a+4:#x}u+{'R(%d)'%n}; c->pr={ret:#x}u; {''.join(sl)} sh4_call(c,tg); }}" + cm)
                    else:
                        cv = r.get("cv")
                        if cv is not None:
                            self.call_targets.add(cv); st.calls_const += 1
                            out.append(f"  {{ c->pr={ret:#x}u; {''.join(sl)} {self.call_stmt(cv)} }}" + cm)
                        else:
                            st.calls_indirect += 1
                            out.append(f"  {{ uint32_t tg=R({n}); c->pr={ret:#x}u; {''.join(sl)} sh4_call(c,tg); }}" + cm)
                    consts.clear()
                elif fk in ("rts",):
                    out.append(f"  {{ {''.join(sl)} return; }}" + cm)
                elif fk == "rte":
                    out.append(f"  {{ {''.join(sl)} sh4_setsr(c,c->ssr); return; }}" + cm)
                elif fk in ("jmp", "braf"):
                    tg_expr = f"R({n})" if fk == "jmp" else f"({a+4:#x}u+R({n}))"
                    tl = r.get("table")
                    cv = r.get("cv")
                    if cv is not None:
                        st.const_jmp += 1
                        out.append(f"  {{ {''.join(sl)} {target_goto(cv)} }}" + cm)
                    elif True:
                      st.indirect_jmp.append(a)
                      if tl:
                        st.resolved_tables.append((a, len(tl)))
                        cases = "".join(f"case {t:#x}u: goto L{t:08x}; " for t in sorted(set(tl)))
                        out.append(f"  {{ uint32_t tg={tg_expr}; {''.join(sl)} switch(tg){{ {cases}default: sh4_bad_jump(c,{a:#x}u,tg); return; }} }}" + cm)
                      else:
                        st.unres_jmp.append(a)
                        out.append(f"  {{ uint32_t tg={tg_expr}; {''.join(sl)} sh4_call(c,tg); return; }}" + cm)
                if fk in ("bts", "bfs", "bra", "bsr", "bsrf", "jsr", "rts", "rte", "jmp", "braf"): pass
            f = r.get("fall")
            prev_fall = f is not None
            if f is not None:
                nxt = keys[i + 1] if i + 1 < len(keys) else None
                if f != nxt:
                    if f in info: out.append(f"  goto L{f:08x};")
                    else:
                        out.append("  " + target_goto(f)[:])
                        if not target_goto(f).startswith("{"): pass
                        prev_fall = False
                # else natural fallthrough
        # function end: if last instruction falls off, tail to fend (handled above as f not in info)
        out.append("}")
        return "\n".join(out) + "\n", name

    def call_stmt(self, t):
        if t in self.funcs: return f"f_{t:08x}(c);"
        return f"sh4_call(c,{t:#x}u);"

def load_funcs(path, image_end=None):
    """functions.txt: addr name size. Ghidra's size under-counts functions with non-contiguous bodies,
    so each function's lift window extends to the next listed function start (reachability decides what is emitted)."""
    st = []
    for ln in open(path):
        p = ln.split()
        if len(p) >= 3: st.append(int(p[0], 16))
    st = sorted(set(st))
    f = {}
    for i, a in enumerate(st):
        f[a] = st[i + 1] if i + 1 < len(st) else (image_end or a + 0x1000)
    return f

MAX_ROUNDS = 1   # 1 = lift listed functions + one discovery round of directly-called targets
def lift_all(img, funcs, comments=False, discover=True):
    L = Lifter(img, funcs, comments)
    results = {}
    pending = sorted(funcs)
    imgend = img.base + len(img.d)
    rounds = 0
    while pending and rounds <= MAX_ROUNDS:
        rounds += 1
        for fa in pending:
            end = L.funcs[fa]
            code, name = L.lift(fa, end)
            results[fa] = code
        pending = []
        if not discover or rounds > MAX_ROUNDS: break
        # discover new entry points among static call targets
        starts = sorted(L.funcs)
        import bisect
        for t in sorted(L.call_targets):
            if t in L.funcs or not img.has(t) or (t & 1): continue
            i = bisect.bisect_right(starts, t) - 1
            if i >= 0 and starts[i] <= t < L.funcs[starts[i]]:
                # call into the middle of an existing function: lift a second entry that shares its tail
                if starts[i] in funcs: L.st.mid_targets.append(t)
                else: L.st.mid_disc = getattr(L.st, 'mid_disc', 0) + 1
                L.funcs[t] = L.funcs[starts[i]]; L.newfuncs.add(t); pending.append(t)
                starts = sorted(L.funcs)
                continue
            nxt = starts[i + 1] if i + 1 < len(starts) else imgend
            L.funcs[t] = nxt; L.newfuncs.add(t); pending.append(t)
            starts = sorted(L.funcs)
    return L, results

PROLOGUE = {0x4F22, 0x2FE6, 0x2FD6, 0x2FC6, 0x2FB6, 0x2FA6, 0x2F96, 0x2F86}
DATA_RANGES = [(0x8C0B6C90, 0x8C0CC540)]   # rodata/strings inside the code range (hw_inventory.md)
CODE_HI_DEFAULT = 0x8C0F2C3C      # end of SDK code (hw_inventory.md); everything above is rodata/SDK data

def lift_program(img, listed, roots, code_lo, code_hi, comments=False, scan=True, log=print, extra=()):
    """Instruction-driven discovery. Seeds = roots + listed(functions.txt, advisory only) ; then iterate:
    lift -> collect static call/jump targets -> add as seeds ; when stable, scan uncovered bytes for prologue patterns.
    A function's window ends at the next seed; branches leaving the window become tail calls (semantically safe)."""
    ptr_seeds = set()
    seeds = set(roots) | set(a for a in listed if code_lo <= a < code_hi)
    heur = set(a for a in extra if code_lo <= a < code_hi and a not in seeds); seeds |= heur   # extra: non-truncating duplicate windows (mid-function computed-jump targets)
    for rnd in range(12):
        starts = sorted(seeds)
        # windows end at the next RELIABLE seed (functions.txt / roots / static call targets); heuristic seeds never truncate another window
        import bisect
        rel = sorted(seeds - heur)
        funcs = {}
        for a in starts:
            k = bisect.bisect_right(rel, a)
            funcs[a] = rel[k] if k < len(rel) else code_hi
        L = Lifter(img, funcs, comments)
        results = {}
        for fa in starts:
            results[fa], _ = L.lift(fa, funcs[fa])
        new = set(t for t in L.call_targets if code_lo <= t < code_hi and not (t & 1) and t not in seeds)
        log(f"round {rnd}: seeds={len(seeds)} insns={L.st.insns} new_call_targets={len(new)}")
        if new:
            seeds |= new; continue
        if scan:
            cand = set()
            for a in range(code_lo + 10, code_hi - 24, 2):
                if a in L.covered: continue
                o = img.r16(a); nx = img.r16(a + 2)
                p4 = img.r16(a - 4); p2 = img.r16(a - 2)
                ok10 = all(TAB[img.r16(a + 2 * k)] is not None and img.r16(a + 2 * k) not in (0, 0xFFFF) for k in range(0, 10))
                strong = (o == 0x4F22 and (nx & 0xFF0F) == 0x2F06) or ((o & 0xFF80) == 0x7F80 and (nx in (0xFBFD, 0xF3FD) or ((nx & 0xF00F) == 0x2006 and ((nx >> 8) & 15) == 15) or nx == 0x4F22))
                if strong and ok10: cand.add(a); continue
                if o in PROLOGUE:
                    if not (p4 == 0x000B or p2 == 0x0009 or (p4 & 0xF0FF) == 0x402B or (p4 & 0xF000) == 0xA000): continue
                    if a - 2 in L.covered and p4 != 0x000B and (p4 & 0xF0FF) != 0x402B and (p4 & 0xF000) != 0xA000: continue
                    if all(TAB[img.r16(a + 2 * k)] is not None for k in range(1, 7)): cand.add(a)
                    continue
                # generic leaf start right after 'rts + delay slot' (optionally nop padding); 10 words must decode, no 0000/FFFF
                p6 = img.r16(a - 6); p8 = img.r16(a - 8)
                after_rts = (p4 == 0x000B and p2 != 0x0009) or (p2 == 0x0009 and (p4 == 0x0009 or p6 == 0x000B or p8 == 0x000B))
                if after_rts and ok10 and o not in (0x0009,): cand.add(a)
            # function-pointer scan: aligned 32-bit words in not-yet-covered bytes that point into code (vtables, callback tables, literal pools)
            for a in range(img.base, img.base + len(img.d) - 3, 4):
                if a in L.covered or (a + 2) in L.covered or (a - 2) in L.covered: continue
                v = img.r32(a)
                if not (code_lo <= v < code_hi) or (v & 1) or v in L.covered or any(lo <= v < hi for lo, hi in DATA_RANGES): continue
                if all(TAB[img.r16(v + 2 * k)] is not None for k in range(0, 8)) and img.r16(v) not in (0, 0x0009):
                    cand.add(v); ptr_seeds.add(v)
            cand -= seeds
            log(f"  prologue scan: {len(cand)} new heuristic seeds")
            if cand:
                seeds |= cand; heur |= cand; continue
        bad = set(L.covered[a] for a, _ in L.st.undecoded if L.covered.get(a) in heur)
        if bad and rnd < 11:        # heuristic seeds whose body contains undecodable opcodes are data: drop them and re-lift
            seeds -= bad; heur -= bad; scan = False; log(f"  dropped {len(bad)} heuristic seeds with undecoded opcodes"); continue
        break
    L.heur_seeds = heur; L.ptr_seeds = ptr_seeds & heur
    return L, results

def write_out(L, results, outdir, nfiles=24):
    os.makedirs(outdir, exist_ok=True)
    for f in os.listdir(outdir):
        if f.startswith("recomp_") and (f.endswith(".c") or f.endswith(".h")): os.remove(os.path.join(outdir, f))
    addrs = sorted(results)
    with open(os.path.join(outdir, "recomp_decls.h"), "w") as h:
        h.write('#include "runtime.h"\n#define SH4_NFUNCS %d\n' % len(addrs))
        for a in addrs: h.write(f"void f_{a:08x}(SH4Ctx *c);\n")
    # split by size
    total = sum(len(results[a]) for a in addrs); per = total // nfiles + 1
    idx = 0; cur = None; size = 0; files = []
    for a in addrs:
        if cur is None or size > per:
            if cur: cur.close()
            fn = os.path.join(outdir, f"recomp_{idx:02d}.c"); files.append(fn)
            cur = open(fn, "w"); cur.write('#include "recomp_decls.h"\n'); idx += 1; size = 0
        cur.write(results[a]); size += len(results[a])
    cur.close()
    with open(os.path.join(outdir, "recomp_functab.c"), "w") as t:
        t.write('#include "recomp_decls.h"\nconst Sh4FuncEnt sh4_functab[] = {\n')
        for a in addrs: t.write(f"{{{a:#x}u,f_{a:08x}}},\n")
        t.write("};\nconst uint32_t sh4_functab_n = SH4_NFUNCS;\n")
    return files, total

def lift_blob(blob, base, entries, outdir):
    """lift a raw code blob (tests): every address in `entries` becomes a function whose window is the rest of the blob."""
    img = Image(blob, base)
    funcs = {e: base + len(blob) for e in entries}
    L, res = lift_all(img, funcs, False, True)
    write_out(L, res, outdir, nfiles=1)
    return L

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--bin", required=True); ap.add_argument("--base", default="0x8C010000")
    ap.add_argument("--funcs", required=True); ap.add_argument("--out", required=True)
    ap.add_argument("--comments", action="store_true"); ap.add_argument("--no-discover", action="store_true")
    ap.add_argument("--stats", default=None); ap.add_argument("--extra-seeds", default=None, help="file of hex addresses (one per line, # comments): extra function entries for computed jumps into function bodies"); ap.add_argument("--roots", default="0x8C010000,0x8C01000C,0x8C010D92"); ap.add_argument("--code-hi", default="0x8C0F2C3C")
    a = ap.parse_args()
    base = int(a.base, 0)
    img = Image(open(a.bin, "rb").read(), base)
    funcs = load_funcs(a.funcs, base + len(img.d))
    roots = [int(x, 0) for x in a.roots.split(",")]
    extra = []
    if a.extra_seeds:
        for ln in open(a.extra_seeds):
            ln = ln.split('#')[0].strip()
            if ln: extra.append(int(ln, 16))
    L, res = lift_program(img, funcs, roots, base, int(a.code_hi, 0), a.comments, extra=extra)
    files, total = write_out(L, res, a.out)
    st = L.st
    summary = {
        "functions_listed_in_functions_txt": len(funcs), "functions_total_lifted": len(res), "functions_not_in_functions_txt": len(set(res) - set(funcs)), "heuristic_seeds_total": len(L.heur_seeds), "heuristic_seeds_from_data_pointers": len(L.ptr_seeds),
        "instructions_lifted_incl_duplicate_coverage": st.insns, "unique_instruction_addresses_covered": len(L.covered), "unique_code_bytes_covered": 2 * len(L.covered), "code_range_bytes": (int(a.code_hi, 0) - base),
        "undecoded_reachable": len(st.undecoded), "undecoded_list": [(hex(x), hex(y)) for x, y in st.undecoded[:60]],
        "indirect_jump_sites": len(st.indirect_jmp), "jump_tables_resolved": len(st.resolved_tables),
        "jump_table_entries": sum(n for _, n in st.resolved_tables),
        "indirect_jump_unresolved": len(st.unres_jmp), "unresolved_sites": [hex(x) for x in st.unres_jmp],
        "calls_direct_bsr": st.calls_direct, "calls_const_jsr": st.calls_const, "calls_indirect_runtime": st.calls_indirect,
        "tail_exits": st.tail_out, "const_target_jmp_tailcalls": st.const_jmp, "entry_points_inside_listed_function_windows": len(set(st.mid_targets)), "entry_points_inside_discovered_windows": getattr(st, "mid_disc", 0),
        "mid_function_call_target_list": [hex(x) for x in sorted(set(st.mid_targets))[:40]],
        "bad_delay_slot_sites": [(hex(x), hex(y)) for x, y in st.slot_branch],
        "generated_c_bytes": total, "c_files": len(files),
        "opcode_hist": dict(st.hist.most_common()),
    }
    if a.stats: json.dump(summary, open(a.stats, "w"), indent=1)
    print(json.dumps({k: v for k, v in summary.items() if k != "opcode_hist"}, indent=1))

if __name__ == "__main__":
    main()
