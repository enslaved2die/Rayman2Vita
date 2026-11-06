/* camprobe_dir: run the lifted camera DIRECTOR f_8c0741e0(camSO, node) on a captured guest-RAM dump (research tool for re_analysis/dc/notes_camera.md, N3).
 *   camprobe_dir A.bin [B.bin]
 * RAM A (end of guest frame N) is loaded; if B (end of frame N+1) is given, byte ranges of B are copied into the model first:
 *   BASEB=1      start from B instead (world = B), then overlay the camera-owned ranges from A:  KEEPA=lo-hi,... (absolute guest offsets, hex, e.g. 5ad8-5ffc as 0x8cd85ad8-..)
 *   ABS=lo-hi,.. absolute guest addresses (hex, full VA) copied from B into the model before the call (default: Rayman SO global matrix only)
 *   SET=va=float,.. float overrides after copies;  SETI=va=int32,..
 * Then calls f_8c0741e0 at the stack position of the real run, prints the descriptor and the camData director outputs, diffs camera actor vs B.
 * Oracle side only; not part of the native engine. */
#include "hle.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

extern void f_8c0741e0(SH4Ctx *c);
extern FILE *hle_trace_fp; extern unsigned long hle_trace_max, hle_trace_n; extern void hle_set_trace(int);
static SH4Ctx ctx;
extern int cam_snap_on; extern uint32_t cam_snap_a0, cam_snap_a1; extern void (*cam_snap_cb)(void *, uint32_t); extern void cam_snap_set(int on);
static uint32_t wva[16]; static int nw; static uint32_t wold[16]; static uint32_t hist[3];
/* WATCH=va,va,..: report every change of a watched word, with the last three guest function entries before the change was noticed */
static void watch_cb(void *cc, uint32_t addr) {
    SH4Ctx *c = cc;
    for (int i = 0; i < nw; i++) { uint32_t v; memcpy(&v, sh4_ram + (wva[i] & 0xFFFFFF), 4); if (v != wold[i]) {
        printf("WATCH %08x: %08x -> %08x  after f_%08x f_%08x f_%08x (now entering f_%08x pr=%08x)\n", wva[i], wold[i], v, hist[0], hist[1], hist[2], addr, c->pr); wold[i] = v; } }
    hist[0] = hist[1]; hist[1] = hist[2]; hist[2] = addr;
}
static uint8_t *slurp(const char *p) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; uint8_t *b = malloc(SH4_RAM_SIZE); if (!b || fread(b, 1, SH4_RAM_SIZE, f) != SH4_RAM_SIZE) { fclose(f); return NULL; } fclose(f); return b;
}
static uint32_t rd32(const uint8_t *r, uint32_t va) { uint32_t v; memcpy(&v, r + (va & 0xFFFFFF), 4); return v; }
static float rdf(const uint8_t *r, uint32_t va) { float v; memcpy(&v, r + (va & 0xFFFFFF), 4); return v; }
static void ranges(const char *s, const uint8_t *src) {
    while (s && *s) { char *e; unsigned lo = strtoul(s, &e, 16); if (*e != '-') break; unsigned hi = strtoul(e + 1, &e, 16); memcpy(sh4_ram + (lo & 0xFFFFFF), src + (lo & 0xFFFFFF), hi - lo); s = *e == ',' ? e + 1 : e; }
}

int main(int argc, char **argv) {
    if (argc < 2) { fprintf(stderr, "usage: camprobe_dir A.bin [B.bin]\n"); return 1; }
    /* SNAP mode: argv[1] = prefix "<dir>/snap_<rel>"  -> <prefix>_pre.bin/.regs (state at director entry), <prefix>_post.bin (state at behaviour entry = director output) */
    char pa[700], pb[700], pr_[700]; int snapmode = getenv("SNAP") != NULL;
    if (snapmode) { snprintf(pa, sizeof pa, "%s_pre.bin", argv[1]); snprintf(pb, sizeof pb, "%s_post.bin", argv[1]); snprintf(pr_, sizeof pr_, "%s_pre.regs", argv[1]); }
    uint8_t *A = slurp(snapmode ? pa : argv[1]); if (!A) { fprintf(stderr, "bad A\n"); return 1; }
    uint8_t *B = snapmode ? slurp(pb) : (argc > 2 ? slurp(argv[2]) : NULL);
    uint32_t cso = rd32(A, 0x8C123CF8), pso = rd32(A, 0x8C123CF0), cact = rd32(A, cso + 4), cmat = rd32(A, cso + 0x24), pmat = rd32(A, pso + 0x24);
    uint32_t cd = cact + 0x194;
    if (snapmode) memcpy(sh4_ram, A, SH4_RAM_SIZE);
    else if (B && getenv("BASEB")) {
        memcpy(sh4_ram, B, SH4_RAM_SIZE);
        ranges(getenv("KEEPA"), A);
    } else {
        memcpy(sh4_ram, A, SH4_RAM_SIZE);
        if (B) {
            uint32_t pmatB = rd32(B, rd32(B, 0x8C123CF0) + 0x24);
            memcpy(sh4_ram + (pmat & 0xFFFFFF), B + (pmatB & 0xFFFFFF), 0x80);
            ranges(getenv("ABS"), B);
        }
    }
    { const char *st = getenv("SET");
      while (st && *st) { char *e; unsigned o = strtoul(st, &e, 16); if (*e != '=') break; float v = strtof(e + 1, &e); memcpy(sh4_ram + (o & 0xFFFFFF), &v, 4); st = *e == ',' ? e + 1 : e; } }
    { const char *st = getenv("SETI");
      while (st && *st) { char *e; unsigned o = strtoul(st, &e, 16); if (*e != '=') break; int v = (int)strtol(e + 1, &e, 0); memcpy(sh4_ram + (o & 0xFFFFFF), &v, 4); st = *e == ',' ? e + 1 : e; } }
    uint32_t node = getenv("NODE") ? (uint32_t)strtoul(getenv("NODE"), 0, 16) : 0x8cd8e8b4u;
    SH4Ctx *c = &ctx; memset(c, 0, sizeof *c);
    c->fpscr = 0x00040001u; R(15) = 0x8C00F280u; R(4) = cso; R(5) = node; c->pr = 0x8C010000u;
    if (snapmode) { FILE *rf = fopen(pr_, "rb"); if (!rf || fread(c, 1, sizeof *c, rf) != sizeof *c) { fprintf(stderr, "bad regs\n"); return 1; } fclose(rf); node = R(5); }
    { const char *w = getenv("WATCH"); while (w && *w && nw < 16) { wva[nw] = (uint32_t)strtoul(w, (char **)&w, 16); memcpy(&wold[nw], sh4_ram + (wva[nw] & 0xFFFFFF), 4); nw++; if (*w == ',') w++; }
      if (nw) { cam_snap_a0 = 1; cam_snap_cb = watch_cb; cam_snap_set(1); } }
    uint8_t *pre = NULL; if (getenv("FEAT")) { pre = malloc(0x1000000); memcpy(pre, sh4_ram, 0x1000000); }
    if (getenv("TRACE")) { hle_trace_fp = stdout; hle_trace_max = 0; hle_trace_n = 0; hle_set_trace(1); }
    f_8c0741e0(c);
    if (getenv("TRACE")) { hle_set_trace(0); fflush(stdout); }
    if (pre) { /* FEAT: one machine-readable line: D(post desc 0x120 B) A(post actor 0x3c0..0x440) G(pre cfg 0x180) G2(post cfg) H(pre cfg2 0x80) H2(post cfg2) R(pre Rayman matrix) */
        uint32_t cfg = rd32(sh4_ram, 0x8C00F1A4 + 8), cfg2 = rd32(sh4_ram, 0x8C00F1A4 + 12), rm = rd32(pre, rd32(pre, 0x8C123CF0) + 0x24);
        printf("FEAT"); printf(" D"); for (uint32_t o = 0; o < 0x120; o += 4) printf(" %08x", rd32(sh4_ram, 0x8C00F1A4 + o));
        printf(" A"); for (uint32_t o = 0x3c0; o < 0x440; o += 4) printf(" %08x", rd32(sh4_ram, cact + o));
        printf(" G"); for (uint32_t o = 0; o < 0x180; o += 4) printf(" %08x", rd32(pre, cfg + o));
        printf(" G2"); for (uint32_t o = 0; o < 0x180; o += 4) printf(" %08x", rd32(sh4_ram, cfg + o));
        printf(" H"); for (uint32_t o = 0; o < 0x80; o += 4) printf(" %08x", rd32(pre, cfg2 + o));
        printf(" H2"); for (uint32_t o = 0; o < 0x80; o += 4) printf(" %08x", rd32(sh4_ram, cfg2 + o));
        printf(" R"); for (uint32_t o = 0; o < 0x80; o += 4) printf(" %08x", rd32(pre, rm + o));
        printf("\n"); return 0; }
    printf("ret r0 = %08x (node %08x)\n", R(0), node);
    printf("desc @8c00f1a4 (floats/hex):\n");
    for (uint32_t o = 0; o < 0x120; o += 4) { uint32_t x = rd32(sh4_ram, 0x8C00F1A4 + o); printf("%s%03x:%08x(%g)", (o % 16) ? "  " : "\n", o, x, *(float *)&x); }
    printf("\n");
    static const struct { const char *n; unsigned o; int len; } f[] = { { "T", 0x3c4, 3 }, { "V", 0x3d0, 3 }, { "S1", 0x3dc, 1 }, { "S2", 0x3f8, 1 }, { "gain", 0x3c0, 1 }, { "C", 0x680, 3 }, { "L", 0x690, 3 } };
    for (unsigned k = 0; k < sizeof f / sizeof *f; k++) {
        printf("%-4s model", f[k].n); for (int j = 0; j < f[k].len; j++) printf(" %.6f", rdf(sh4_ram, cact + f[k].o + 4 * j));
        if (B) { printf(" | ref"); for (int j = 0; j < f[k].len; j++) printf(" %.6f", rdf(B, cact + f[k].o + 4 * j)); }
        printf("\n");
    }
    if (B) for (uint32_t o = 0; o < 0x800; o += 4) { uint32_t x = rd32(sh4_ram, cact + o), y = rd32(B, cact + o), z = rd32(A, cact + o);
        if (x != y) printf("actor+%03x A %08x (%g) model %08x (%g) ref %08x (%g)\n", o, z, *(float *)&z, x, *(float *)&x, y, *(float *)&y); }
    return 0;
}
