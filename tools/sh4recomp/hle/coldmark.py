#!/usr/bin/env python3
"""coldmark.py HOTLIST [ATTR]  -- stdin: lifted C (after rename.sed); stdout: same, with ATTR (default __attribute__((cold))) put in front of the DEFINITION of every
guest function f_<addr> / orig_f_<addr> whose address is NOT in HOTLIST. GCC then optimises those for size and moves them to .text.unlikely, which keeps the hot code dense
in the Vita's 32 KB L1 I-cache / 512 KB L2. Function-level only; semantics unchanged. HOTLIST lines: '<hex addr> <count>' ('#' comments)."""
import re, sys
hot = set()
for l in open(sys.argv[1]):
    if l.startswith('#') or not l.strip(): continue
    hot.add(l.split()[0].lower())
attr = sys.argv[2] if len(sys.argv) > 2 else '__attribute__((cold))'
pat = re.compile(r'^(void\s+(?:orig_)?f_([0-9a-fA-F]{8})\s*\(SH4Ctx\s*\*\s*c\)\s*\{)')
out = sys.stdout; n = 0
for line in sys.stdin:
    m = pat.match(line)
    if m and m.group(2).lower() not in hot:
        out.write(attr + ' ' + line); n += 1
    else:
        out.write(line)
sys.stderr.write('') if n == 0 else None
