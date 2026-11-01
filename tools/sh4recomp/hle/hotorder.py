#!/usr/bin/env python3
"""hotorder.py HOTLIST  < default.ld  > vita.ld
Reads the toolchain's default GNU ld script (arm-vita-eabi-gcc -Wl,--verbose, text between the ==== lines) and inserts, at the very start of the .text output section (before
.text.unlikely), one `*(.text.f_<addr>)` / `*(.text.orig_f_<addr>)` line per profiled hot guest function, most-called first (HOTLIST lines: '<hex addr> <count>').
With -ffunction-sections every lifted function is its own input section, so the hot set (2.3k functions) ends up contiguous instead of interleaved with the cold ones.
(binutils' --section-ordering-file is not usable here: its grammar is undocumented for this ld, so a full script is used.)"""
import sys
ent = []
for l in open(sys.argv[1]):
    if l.startswith('#') or not l.strip(): continue
    p = l.split()
    ent.append((-int(p[1]) if len(p) > 1 else 0, p[0].lower()))
ent.sort()
ins = ''.join('    *(.text.f_%s)\n    *(.text.orig_f_%s)\n' % (a, a) for _, a in ent)
out, done = [], False
for line in sys.stdin:
    if not done and line.strip().startswith('*(.text.unlikely'):
        out.append(ins); done = True
    out.append(line)
if not done: sys.exit('hotorder.py: .text.unlikely anchor not found in the default linker script')
sys.stdout.write(''.join(out))
