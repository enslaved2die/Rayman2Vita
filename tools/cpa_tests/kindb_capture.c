/* kindb_capture: kind-B (state dump diff) capture driver for N2. Runs the recompiled game (oracle) through the real new-game path into --level (same
 * presses / redirect / --walk stick script as ta_capture.c) and, at EVERY guest frame boundary from (level current + --rel) for --count consecutive frames,
 * appends a compact record of every live-animated actor SuperObject to --out (no 16 MiB RAM dumps).
 *
 *   kindb_capture --image 1ST_READ.BIN --dcdata DIR --leveldat LEVEL.DAT --out FILE --level Learn_10 [--rel 300] [--count 360] [--walk 1]
 *
 * Record (host little-endian). File: "KBR1". Per frame: u32 'FRMB', u32 guestFrame, u32 taFrame, u32 nActors; per actor (ActRec) then nCh ChRec.
 * Guest values read through the same CpaImage reader the native engine uses (RAM presented as one region at 0x8C000000):
 *   actor : SO VA, AnimRef VA, (animIdx, frame) = AnimRef+0x18 / 3dData+0xAC+0x18, SO+0x24 global matrix (4x4), nChanList
 *   channel c (c < H0 record nCh): channel record S+6c (obj u16, slot u8), ChanList entry: lock byte, parent entry -> parent slot, node SO+0x20 local 4x4,
 *           node SO+0x24 global 4x4, inner (mirror wrapper) SO+0x24 global if entry+4 is a pointer, `stale` = node global != local*global(parent SuperObject)
 *           (the guest did not refresh it this frame; 2 = unreadable). */
#include "hle.h"
#include "pad.h"
#include "../../src/cpa/cpa_anim.h"
#include "kindb_rec.h"
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <strings.h>
#include <math.h>

extern const char *hle_stop_reason(void);
extern unsigned long hle_frames_limit;
extern void (*hle_frame_hook)(unsigned long); extern int hle_no_pace;
extern unsigned long hle_ta_frame_no(void);
static SH4Ctx ctx;
#define NEXT_LEVEL_VA 0x8C123B27u
#define LEVEL_VA      0x8C123B09u

static struct { uint32_t mask; unsigned long from, to; } presses[64]; static int npress;
static char level[30] = "Learn_10", outpath[512] = "kindb.bin", leveldat[512];
static unsigned long rel = 300, count = 360; static int walk = 1;
static unsigned long lvl_seen; static int lvl_seen_ok; static unsigned long rec_frames, last_fr; static FILE *of;
static CpaImage im; static CpaAnimTables T; static uint32_t rootSO;
static void add_press(uint32_t mask, unsigned long f) { presses[npress].mask = mask; presses[npress].from = f; presses[npress].to = f + 4; npress++; }
static void walk_stick(unsigned long r, PadAnalog *an) {
    if (!walk || r < 150) return;
    switch (((r - 150) / 120) % 4) { case 0: an->joyx = 128; an->joyy = 0; break; case 1: an->joyx = 255; an->joyy = 40; break; case 2: an->joyx = 0; an->joyy = 40; break; default: an->joyx = 128; an->joyy = 255; break; }
}
static void emit_actor(uint32_t so, KbAct *ar, KbCh *cr) {
    CpaAnimActor A; CpaAnimCur cur; CpaAnimInfo inf;
    memset(ar, 0, sizeof *ar);
    if (!cpa_anim_actor_open(&A, &im, &T, so) || !A.chanList || !cpa_anim_cur(&A, &cur) || !cpa_anim_info(&A, cur.animIdx, &inf)) return;
    ar->so = so; ar->animRef = cur.animRef; ar->animIdx = cur.animIdx; ar->frame = cur.frame; ar->nChanList = A.nChanList;
    ar->haveG = cpa_anim_read_matrix(&im, cpa_u32(&im, so + 0x24), ar->G);
    unsigned n = inf.nCh > CPA_ANIM_MAXCH ? CPA_ANIM_MAXCH : inf.nCh; ar->nCh = n;
    for (unsigned c = 0; c < n; c++) {
        KbCh *r = &cr[c]; memset(r, 0, sizeof *r); r->parent = -1;
        uint32_t rec = cur.chanRecs + 6 * c; uint8_t sl = 0; cpa_rd8(&im, rec + 3, &sl);
        r->obj = cpa_u16(&im, rec); r->slot = sl;
        if (sl >= A.nChanList) { r->stale = 2; continue; }
        uint32_t ent = A.chanList + 0x14u * sl, node = cpa_u32(&im, ent), inner = cpa_u32(&im, ent + 4), pe = cpa_u32(&im, ent + 0xC);
        cpa_rd8(&im, ent + 0x10, &r->lock);
        if (cpa_is_ptr(&im, pe)) { uint32_t d = pe - A.chanList; if (pe >= A.chanList && d % 0x14 == 0 && d / 0x14 < A.nChanList) r->parent = (int16_t)(d / 0x14); }
        if (!cpa_is_ptr(&im, node)) { r->stale = 2; continue; }
        int okL = cpa_anim_read_matrix(&im, cpa_u32(&im, node + 0x20), r->L), okG = cpa_anim_read_matrix(&im, cpa_u32(&im, node + 0x24), r->G);
        if (!okL || !okG) { r->stale = 2; continue; }
        float PG[16], Gc[16]; r->stale = 1;
        if (cpa_anim_read_matrix(&im, cpa_u32(&im, cpa_u32(&im, node + 0x1C) + 0x24), PG)) {
            cpa_anim_mat_mul(r->L, PG, Gc); double m = 0;
            for (int i = 0; i < 16; i++) { double d = fabs((double)Gc[i] - r->G[i]); if (d > m) m = d; }
            r->stale = m > 1e-3;
        }
        if (cpa_is_ptr(&im, inner)) r->hasInner = cpa_anim_read_matrix(&im, cpa_u32(&im, inner + 0x24), r->Gi);
    }
}
static void collect(uint32_t va, int depth, uint32_t *list, unsigned *n, unsigned *visit) {
    if (depth > 40 || (*visit)++ > 20000) return;
    uint32_t type; if (!cpa_rd32(&im, va, &type)) return;
    if (type == 2 && *n < 512) list[(*n)++] = va;
    uint32_t ch = cpa_u32(&im, va + 8);
    for (unsigned k = 0; ch && k < 20000 && cpa_is_ptr(&im, ch); k++) { collect(ch, depth + 1, list, n, visit); ch = cpa_u32(&im, ch + 0x14); }
}
static void record_frame(unsigned long fr) {
    static uint32_t list[512]; unsigned n = 0, visit = 0; uint32_t na = 0;
    collect(rootSO, 0, list, &n, &visit);
    long hdrpos = ftell(of); uint32_t h[4] = { 0x424D5246u, (uint32_t)fr, (uint32_t)hle_ta_frame_no(), 0 };
    fwrite(h, 4, 4, of);
    for (unsigned i = 0; i < n; i++) {
        KbAct ar; static KbCh cr[CPA_ANIM_MAXCH]; emit_actor(list[i], &ar, cr);
        if (!ar.so) continue;
        fwrite(&ar, sizeof ar, 1, of); fwrite(cr, sizeof(KbCh), ar.nCh, of); na++;
    }
    long end = ftell(of); fseek(of, hdrpos + 12, SEEK_SET); fwrite(&na, 4, 1, of); fseek(of, end, SEEK_SET);
}
static void frame_hook(unsigned long fr) {
    uint32_t m = 0; for (int i = 0; i < npress; i++) if (fr >= presses[i].from && fr < presses[i].to) m |= presses[i].mask;
    char *nx = (char *)sh4_ram + (NEXT_LEVEL_VA & 0xFFFFFF);
    if (nx[0] && strcasecmp(nx, level)) { fprintf(stderr, "[kindb] frame %lu: redirect next %s -> %s\n", fr, nx, level); memcpy(nx, level, strlen(level) + 1); }
    const char *cur = (const char *)sh4_ram + (LEVEL_VA & 0xFFFFFF);
    if (!lvl_seen_ok && !strncasecmp(cur, level, 29) && npress && fr > 900) { lvl_seen_ok = 1; lvl_seen = fr; fprintf(stderr, "[kindb] frame %lu: level '%s' current\n", fr, cur); }
    PadAnalog an = { 0, 0, 128, 128, 128, 128 };
    if (lvl_seen_ok) walk_stick(fr - lvl_seen, &an);
    static uint32_t lastm = ~0u; static uint16_t lastx = 0xFFFF; uint16_t sig = (uint16_t)(an.joyx << 8 | an.joyy);
    if (m != lastm || sig != lastx) { lastm = m; lastx = sig; pad_set_state(m, &an); }
    if (lvl_seen_ok && fr >= lvl_seen + rel) {
        if (strncasecmp(cur, level, 29)) { fprintf(stderr, "[kindb] FAIL: level changed to '%s' at frame %lu\n", cur, fr); hle_stop("wrong level"); return; }
        if (rec_frames && fr != last_fr + 1) fprintf(stderr, "[kindb] WARNING: hook frame gap %lu -> %lu\n", last_fr, fr);
        record_frame(fr); last_fr = fr;
        if (++rec_frames >= count) { fprintf(stderr, "[kindb] recorded %lu frames (guest %lu..%lu)\n", rec_frames, fr + 1 - rec_frames, fr); hle_stop("captured"); }
    }
}
static void on_alarm(int s) { (void)s; hle_stop("host timeout (guest still running)"); }
int main(int argc, char **argv) {
    const char *image = "1ST_READ.BIN", *dcdata = "."; int timeout = 1200;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--image") && i + 1 < argc) image = argv[++i];
        else if (!strcmp(argv[i], "--dcdata") && i + 1 < argc) dcdata = argv[++i];
        else if (!strcmp(argv[i], "--out") && i + 1 < argc) snprintf(outpath, sizeof outpath, "%s", argv[++i]);
        else if (!strcmp(argv[i], "--leveldat") && i + 1 < argc) snprintf(leveldat, sizeof leveldat, "%s", argv[++i]);
        else if (!strcmp(argv[i], "--level") && i + 1 < argc) snprintf(level, sizeof level, "%s", argv[++i]);
        else if (!strcmp(argv[i], "--rel") && i + 1 < argc) rel = strtoul(argv[++i], 0, 10);
        else if (!strcmp(argv[i], "--count") && i + 1 < argc) count = strtoul(argv[++i], 0, 10);
        else if (!strcmp(argv[i], "--walk") && i + 1 < argc) walk = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--timeout") && i + 1 < argc) timeout = atoi(argv[++i]);
        else { fprintf(stderr, "unknown arg %s\n", argv[i]); return 1; }
    }
    { uint8_t *d; size_t nd; if (!leveldat[0] || !cpa_read_file(leveldat, &d, &nd) || nd < 0x98 || !cpa_anim_tables_from_header(d, nd, &T)) { fprintf(stderr, "need --leveldat\n"); return 1; }
      rootSO = d[52] | (d[53] << 8) | (d[54] << 16) | ((uint32_t)d[55] << 24); free(d); }
    cpa_image_init(&im); cpa_image_add(&im, sh4_ram, SH4_RAM_SIZE, 0x8C000000u);
    of = fopen(outpath, "wb+"); if (!of) { perror(outpath); return 1; } fwrite("KBR1", 1, 4, of);
    add_press(PAD_START, 300); add_press(PAD_START, 400); add_press(PAD_START, 500); add_press(PAD_A, 600); add_press(PAD_A, 700); add_press(PAD_A, 800);
    setenv("R2_WIDE", "0", 1);
    hle_frames_limit = 2500 + rel + count + 300;
    hle_no_pace = 1; hle_verbose = 0;
    FILE *f = fopen(image, "rb"); if (!f) { perror(image); return 1; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *buf = malloc(n); if (fread(buf, 1, n, f) != (size_t)n) return 2; fclose(f);
    hle_boot_init(&ctx, buf, (uint32_t)n, dcdata);
    hle_frame_hook = frame_hook;
    signal(SIGALRM, on_alarm); alarm(timeout);
    int rc = hle_run_main(&ctx);
    alarm(0); fclose(of);
    fprintf(stderr, "kindb_capture result: rc=%d (%s), recorded %lu frames\n", rc, hle_stop_reason(), rec_frames);
    return (rc == 3 || !strcmp(hle_stop_reason(), "captured")) ? 0 : rc;
}
