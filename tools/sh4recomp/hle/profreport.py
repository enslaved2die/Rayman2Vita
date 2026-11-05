#!/usr/bin/env python3
"""profreport.py - read ux0:data/rayman2/prof.txt written by the v9_prof Vita build (hle/r2prof.c) and print the hottest guest functions.
usage: profreport.py prof.txt [--skip N] [--top N]   (--skip drops the first N windows, e.g. loading screens)"""
import sys, re, collections
args = sys.argv[1:]
path = next((a for a in args if not a.startswith('--') and not a.isdigit()), 'prof.txt')
skip = int(args[args.index('--skip') + 1]) if '--skip' in args else 0
top = int(args[args.index('--top') + 1]) if '--top' in args else 30
names = {}
try:
    import os
    fn = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', '..', 're_analysis', 'dc', 'functions.txt')
    for l in open(fn):
        p = l.split()
        if len(p) >= 3: names[int(p[0], 16)] = (p[1], int(p[2]))
except Exception: pass
wins = []; cur = None; mode = None
for l in open(path):
    l = l.strip()
    if l.startswith('#window'): cur = {'hdr': l, 'S': {}, 'I': {}}; wins.append(cur)
    elif l == '#self': mode = 'S'
    elif l == '#incl': mode = 'I'
    elif cur and l[:1] in 'SI':
        _, a, n, pc = l.split(); cur[l[0]][int(a, 16)] = int(n)
wins = wins[skip:]
print(f'{len(wins)} windows')
for w in wins: print(' ', w['hdr'][:230])
S = collections.Counter(); I = collections.Counter()
for w in wins:
    S.update(w['S']); I.update(w['I'])
ts = 0
for w in wins:
    m = re.search(r'samples (\d+).*in guest code ([0-9.]+)%', w['hdr'])
    if m: ts += int(m.group(1)) * float(m.group(2)) / 100.0
ts = ts or sum(S.values()) or 1
# 'self' lists are per-window top-N only; the sum is a lower bound for small functions but fine for the hot ones
def row(a, n, tot):
    nm, sz = names.get(a, ('?', 0))
    return f'  {a:08x}  {100.0 * n / tot:6.2f}%  {sz:5d} B  {nm}'
print('\nSELF (share of samples spent in guest code):')
for a, n in S.most_common(top): print(row(a, n, ts))
print('\nINCLUSIVE (function anywhere in the top 48 stack frames):')
for a, n in I.most_common(top): print(row(a, n, ts))
