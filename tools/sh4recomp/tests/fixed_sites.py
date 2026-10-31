#!/usr/bin/env python3
"""Identify call sites whose lifting changed between gen/ (old lifter) and gen_fix/ (merge-point-sound constant jsr/jmp).
A site 'c->pr=0xRET; f_TARGET(c)' in gen/ that became 'c->pr=0xRET; sh4_call(c,tg)' in gen_fix/ was a constant-jsr that the old
lifter resolved with a stale literal (wrong target). Prints/returns [(ret_addr, containing_function, old_target)]; the 57 known sites are cached
in fixed_sites.txt so the tests still work after gen/ is deleted."""
import re, glob, os, sys
HERE = os.path.dirname(os.path.abspath(__file__)); ROOT = os.path.dirname(HERE)
CACHE = os.path.join(HERE, "fixed_sites.txt")

def _load(d):
    m = {}; fn = None
    for f in sorted(glob.glob(os.path.join(d, "recomp_[0-9]*.c"))):
        for l in open(f):
            x = re.match(r"void (f_[0-9a-f]+)\(", l)
            if x: fn = int(x.group(1)[2:], 16); continue
            p = re.search(r"c->pr=0x([0-9a-f]+)u;.*?(sh4_call\(c,tg\)|f_([0-9a-f]+)\(c\))", l)
            if p: m[int(p.group(1), 16)] = (fn, None if p.group(3) is None else int(p.group(3), 16))
    return m

def compute(old=os.path.join(ROOT, "gen"), new=os.path.join(ROOT, "gen_fix")):
    a, b = _load(old), _load(new)
    return sorted((k, a[k][0], a[k][1]) for k in a if k in b and a[k][1] is not None and b[k][1] is None)

def get():
    if os.path.isdir(os.path.join(ROOT, "gen")) and os.path.isdir(os.path.join(ROOT, "gen_fix")):
        s = compute()
        if s and not os.path.exists(CACHE):
            open(CACHE, "w").write("".join("%08x %08x %08x\n" % x for x in s))
        return s
    return [tuple(int(v, 16) for v in l.split()) for l in open(CACHE)] if os.path.exists(CACHE) else []

if __name__ == "__main__":
    s = get(); print(len(s), "sites,", len(set(x[1] for x in s)), "distinct containing functions")
    for r, f, t in s: print("ret=%08x in f_%08x old_direct_target=%08x" % (r, f, t))
