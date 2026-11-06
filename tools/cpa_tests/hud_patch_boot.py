# hud_patch_boot.py SRC DST: copy hle/boot.c and extend hle_trace_enter so functions listed in env HUD_TRACE_FNS also print r7, fpscr and fr0..fr11 (as floats).
import sys
s = open(sys.argv[1]).read()
old = '    fprintf(hle_trace_fp, "f_%08x pr=%08x r4=%08x r5=%08x r6=%08x sp=%08x\\n", addr, c->pr, c->r[4], c->r[5], c->r[6], c->r[15]);'
assert old in s, "hle_trace_enter line not found"
new = '''    fprintf(hle_trace_fp, "f_%08x pr=%08x r4=%08x r5=%08x r6=%08x sp=%08x", addr, c->pr, c->r[4], c->r[5], c->r[6], c->r[15]);
    { static uint32_t fns[32]; static int nf = -1; if (nf < 0) { nf = 0; const char *e = getenv("HUD_TRACE_FNS"); while (e && *e && nf < 32) { fns[nf++] = (uint32_t)strtoul(e, (char **)&e, 16); if (*e == ',') e++; } }
      for (int i = 0; i < nf; i++) if (fns[i] == addr) { float f[12]; for (int k = 0; k < 12; k++) memcpy(&f[k], &c->fr[k], 4); fprintf(hle_trace_fp, " r7=%08x fpscr=%08x fr=", c->r[7], c->fpscr); for (int k = 0; k < 12; k++) fprintf(hle_trace_fp, "%g,", f[k]); break; } }
    fputc('\\n', hle_trace_fp);'''
open(sys.argv[2], 'w').write(s.replace(old, new))
