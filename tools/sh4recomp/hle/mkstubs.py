#!/usr/bin/env python3
"""Generate build_hle/hook_stubs.c and build_hle/rename.sed for the HLE build.
Hookable set = every literal 0x8Cxxxxxx in hle/*.c (and hle/*.h) that is a lifted function entry (gen/recomp_decls.h)."""
import re, sys, glob, os
root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
out = os.path.join(root, "build_hle")
os.makedirs(out, exist_ok=True)
decl = open(os.path.join(root, (sys.argv[1] if len(sys.argv) > 1 else "gen"), "recomp_decls.h")).read()
funcs = set(int(m, 16) for m in re.findall(r"void f_([0-9a-f]{8})\(SH4Ctx", decl))
lits = set()
for f in glob.glob(os.path.join(root, "hle", "*.[ch]")):
    if f.endswith("hook_stubs.c"): continue
    for m in re.findall(r"0x([89aA][cC][0-9a-fA-F]{6})\b", open(f).read()):
        v = int(m, 16) & 0x8CFFFFFF
        if v in funcs: lits.add(v)
extra = os.path.join(root, "hle", "hooks.extra")      # extra hookable (spy-able) addresses, one hex per line, '#' comments
if os.path.exists(extra):
    for ln in open(extra):
        ln = ln.split('#')[0].strip()
        if ln:
            v = int(ln, 16) & 0x8CFFFFFF
            if v in funcs: lits.add(v)
lits = sorted(lits)
def write_if_changed(path, text):
    try:
        if open(path).read() == text: return
    except OSError: pass
    open(path, "w").write(text)
sed = "".join("s/^void f_%08x\\(SH4Ctx \\*c\\) \\{/void orig_f_%08x(SH4Ctx *c) {/\n" % (a, a) for a in lits)
sed += "s/^void (f_|orig_f_)([0-9a-f]{8})\\(SH4Ctx \\*c\\) \\{/&HLE_ENTER(0x\\2);/\n"
write_if_changed(os.path.join(out, "rename.sed"), sed)
import io
o = io.StringIO()
if True:
    o.write('#include "../hle/hle.h"\n#include "../hle/hle_priv.h"\n')
    for a in lits:
        o.write("void orig_f_%08x(SH4Ctx*);\nstatic hle_fn h_%08x;\n" % (a, a))
        o.write("void f_%08x(SH4Ctx *c){ if (hle_spy_n) hle_spy_check(c, 0x%08x); if (h_%08x) { if (hle_verbose >= 2) hle_note_hook(c, 0x%08x); h_%08x(c); } else orig_f_%08x(c); }\n" % (a, a, a, a, a, a))
    o.write("const HleHookEnt hle_hooktab[] = {\n")
    for a in lits:
        o.write("  {0x%08xu, &h_%08x, orig_f_%08x},\n" % (a, a, a))
    o.write("  {0,0,0}};\nconst unsigned hle_hooktab_n = %d;\n" % len(lits))
write_if_changed(os.path.join(out, "hook_stubs.c"), o.getvalue())
print("hookable functions:", len(lits))
