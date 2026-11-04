/* r2_trace.h - diagnostic-only UI trace (text pools A/B, sprite pool S, level name).  Never alters guest state.
 * Output: hle_log() (sceClibPrintf on Vita -> vita3k log, stderr on host) AND, on Vita, appended to ux0:data/rayman2/ui_trace.log
 * (host: path in env R2_UI_TRACE).  All state is weak/shared so recomp_01.c and recomp_02.c use one counter set.
 * Line format:  [ui] f=<frame> <POOL>[<slot>] <event> ...      POOL: A = 0x41c-stride text pool @8c131e94 (50 slots)
 *                                                                   B = 0x1c-stride text pool @8c13191c (50 slots)
 *                                                                   S = 24-byte sprite pool @8c130c74 (31 slots)
 * Frame f = guest-visible 60 Hz vblank count (hle_time_us()/16667).  Per-slot status lines are gated: printed when their signature
 * changes, otherwise at most once per R2_TR_PERIOD frames. */
#ifndef R2_TRACE_H
#define R2_TRACE_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

extern void hle_log(const char *fmt, ...) __attribute__((weak));
extern uint64_t hle_time_us(void) __attribute__((weak));

#define R2_TR_PERIOD 15
#define R2_TR_MAXLINES 40000
#define R2_TR_A_BASE 0x8c131e94u
#define R2_TR_A_STRIDE 0x41cu
#define R2_TR_B_BASE 0x8c13191cu
#define R2_TR_B_STRIDE 0x1cu
#define R2_TR_S_BASE 0x8c130c74u
#define R2_TR_S_STRIDE 24u
#define R2_TR_GATEFLAG 0x8c12473eu /* nonzero: pool A slots skipped, pool B slots >=15 skipped, sprites 0..14/25.. skipped */
#define R2_TR_GATE2 (0x8c123b08u + 0xc36u) /* same address as above; read by the sprite loop */

__attribute__((weak)) uint32_t r2_tr_sig[8][64];
__attribute__((weak)) uint32_t r2_tr_last[8][64];
__attribute__((weak)) uint32_t r2_tr_nlines;
__attribute__((weak)) FILE *r2_tr_fp;
__attribute__((weak)) int r2_tr_fp_tried;
__attribute__((weak)) char r2_tr_lvl[16];
__attribute__((weak)) uint32_t r2_tr_gatefl = 0xffu;

static inline uint32_t r2_tr_frame(void) { return hle_time_us ? (uint32_t)(hle_time_us() / 16667u) : 0u; }

static inline void r2_tr(const char *fmt, ...) {
  char buf[400];
  va_list ap;
  if (r2_tr_nlines > R2_TR_MAXLINES) return;
  r2_tr_nlines++;
  va_start(ap, fmt);
  vsnprintf(buf, sizeof buf, fmt, ap);
  va_end(ap);
  if (hle_log) hle_log("%s", buf); else fprintf(stderr, "%s\n", buf);
  if (!r2_tr_fp_tried) {
    const char *p =
#if defined(__vita__)
        "ux0:data/rayman2/ui_trace.log";
#else
        getenv("R2_UI_TRACE");
#endif
    r2_tr_fp_tried = 1;
    if (p) r2_tr_fp = fopen(p, "a");
  }
  if (r2_tr_fp) { fputs(buf, r2_tr_fp); fputc('\n', r2_tr_fp); fflush(r2_tr_fp); }
  if (r2_tr_nlines > R2_TR_MAXLINES) r2_tr_nlines = R2_TR_MAXLINES + 1;
}

/* 1 if (pool,slot) status should be printed: signature changed, never printed, or >= R2_TR_PERIOD frames since last print */
static inline int r2_tr_gate(int pool, int slot, uint32_t sig) {
  uint32_t f = r2_tr_frame();
  if (slot < 0 || slot >= 64) return 1;
  if (r2_tr_last[pool][slot] == 0 || r2_tr_sig[pool][slot] != sig || f - (r2_tr_last[pool][slot] - 1u) >= R2_TR_PERIOD) {
    r2_tr_sig[pool][slot] = sig; r2_tr_last[pool][slot] = f + 1u; return 1;
  }
  return 0;
}
/* forget a slot's gate state (so its next state prints immediately) */
static inline void r2_tr_gate_reset(int pool, int slot) { if (slot >= 0 && slot < 64) { r2_tr_last[pool][slot] = 0; } }

static inline uint32_t r2_tr_hash(const char *s) { uint32_t h = 2166136261u; for (; *s; s++) h = (h ^ (uint8_t)*s) * 16777619u; return h; }

/* printable prefix (<=16 chars) of a guest C string at addr */
static inline void r2_tr_pfx(uint32_t a, char out[20]) {
  int i;
  if (a < 0x8c000000u || a > 0x8cfffff0u) { snprintf(out, 20, "<nr:%08x>", a); return; }
  for (i = 0; i < 16; i++) { uint8_t ch = LD8(a + i); if (!ch) break; out[i] = (ch >= 32 && ch < 127) ? (char)ch : '.'; }
  out[i] = 0;
}

static inline float r2_tr_f(uint32_t bits) { float f; memcpy(&f, &bits, 4); return f; }

/* log current level name (0x8C123B09) whenever it changes */
static inline void r2_tr_level_poll(void) {
  char cur[16]; int i;
  for (i = 0; i < 15; i++) { uint8_t ch = LD8(0x8c123b09u + i); if (!ch) break; cur[i] = (ch >= 32 && ch < 127) ? (char)ch : '.'; }
  cur[i] = 0;
  if (strcmp(cur, r2_tr_lvl) != 0) {
    r2_tr("[ui] f=%u LEVEL '%s' -> '%s'  gate12473e=%u", r2_tr_frame(), r2_tr_lvl, cur, (unsigned)LD8(R2_TR_GATEFLAG));
    memcpy(r2_tr_lvl, cur, 16);
  }
  { uint32_t g = LD8(R2_TR_GATEFLAG); if (g != r2_tr_gatefl) { r2_tr("[ui] f=%u GATEFLAG 0x8c12473e %u -> %u (lvl '%s')", r2_tr_frame(), (unsigned)r2_tr_gatefl, (unsigned)g, cur); r2_tr_gatefl = g; } }
}

static inline int r2_tr_aidx(uint32_t slot) { return (int)((slot - R2_TR_A_BASE) / R2_TR_A_STRIDE); }
static inline int r2_tr_bidx(uint32_t slot) { return (int)((slot - R2_TR_B_BASE) / R2_TR_B_STRIDE); }

/* pool A one-line state of slot `s` (absolute address) */
static inline void r2_tr_a_state(const char *ev, uint32_t s, int br, int note, uint32_t a0, int force) {
  int idx = r2_tr_aidx(s);
  uint32_t own = LD32(s + 0x400), o2c = 0, o38 = 0;
  uint8_t a1 = LD8(s + 0x410), fl = LD8(s + 0x413);
  char p[20];
  if (own >= 0x8c000000u && own < 0x8cfffff0u) { o2c = LD32(own + 0x2c); o38 = LD32(own + 0x38); }
  r2_tr_pfx(s, p);
  if (!force && !r2_tr_gate(0, idx, (own * 31u) ^ (o2c * 7u) ^ ((uint32_t)a1 << 8) ^ ((uint32_t)fl << 16) ^ ((uint32_t)br << 24) ^ ((uint32_t)note << 28) ^ r2_tr_hash(p))) return;
  r2_tr("[ui] f=%u A[%02d] %s br=%d note=%x owner=%08x o+2c=%08x(b8=%d) o+38=%.2f alpha=%u->%u flags=%02x(in=%d out=%d box=%d) str='%s' gate=%u",
        r2_tr_frame(), idx, ev, br, note, own, o2c, (o2c >> 3) & 1, r2_tr_f(o38), (unsigned)a0, (unsigned)a1, (unsigned)fl, fl & 1, (fl >> 1) & 1, (fl >> 3) & 1, p, (unsigned)LD8(R2_TR_GATEFLAG));
}
/* A per-frame branch codes (br):  0 none  1 empty slot (owner==0)  2 skipped: alpha==0  3 skipped: global gate 0x8c12473e!=0
 *   4 drawn, fade-in step   5 drawn, fade-out step   6 drawn, steady (flags in/out both clear)
 * note bits: 1 owner+0x2c bit3 CLEAR (alpha NOT refreshed from owner+0x38)   2 dialog-alpha-preserve hack taken   4 box (flags&8) not drawn, text only */

/* pool B one-line state */
static inline void r2_tr_b_state(const char *ev, uint32_t s, int force, int gp) {
  int idx = r2_tr_bidx(s);
  uint32_t sp = LD32(s);
  uint8_t al = LD8(s + 0x10), fl = LD8(s + 0x13);
  char p[20];
  r2_tr_pfx(sp, p);
  if (!force && !r2_tr_gate(gp, idx, (uint32_t)LD8(R2_TR_GATEFLAG) * 0x9e37u ^ sp * 31u ^ ((uint32_t)al << 8) ^ ((uint32_t)fl << 16) ^ r2_tr_hash(p))) return;
  r2_tr("[ui] f=%u B[%02d] %s ptr=%08x alpha=%u flags=%02x(in=%d out=%d box=%d) str='%s' gate=%u",
        r2_tr_frame(), idx, ev, sp, (unsigned)al, (unsigned)fl, fl & 1, (fl >> 1) & 1, (fl >> 3) & 1, p, (unsigned)LD8(R2_TR_GATEFLAG));
}

/* sprite pool S: scan all 31 slots once per call */
static inline void r2_tr_s_scan(void) {
  int i, gflag = LD8(R2_TR_GATE2) != 0;
  for (i = 0; i < 31; i++) {
    uint32_t s = R2_TR_S_BASE + (uint32_t)i * R2_TR_S_STRIDE;
    int32_t cnt = (int32_t)LD32(s + 20);
    uint32_t id = LD32(s + 16);
    int passes = !gflag || (i > 14 && i < 25);
    uint32_t sig = ((uint32_t)cnt * 131u) ^ (id << 3) ^ ((uint32_t)passes << 30) ^ (cnt > 0 ? 0u : 0xdead0000u);
    if (cnt <= 0 && r2_tr_last[2][i] == 0) continue;
    if (!r2_tr_gate(2, i, sig)) continue;
    r2_tr("[ui] f=%u S[%02d] cnt=%d id=%08x x=%.1f y=%.1f w=%.1f drawn=%d (gate12473e=%d passes=%d)",
          r2_tr_frame(), i, (int)cnt, id, r2_tr_f(LD32(s)), r2_tr_f(LD32(s + 4)), r2_tr_f(LD32(s + 8)), cnt > 0 && passes, gflag, passes);
  }
}

static inline int r2_tr_a_used(void) { int i, n = 0; for (i = 0; i < 50; i++) if (LD32(R2_TR_A_BASE + (uint32_t)i * R2_TR_A_STRIDE + 0x400)) n++; return n; }
static inline int r2_tr_b_used(void) { int i, n = 0; for (i = 0; i < 50; i++) { uint32_t s = R2_TR_B_BASE + (uint32_t)i * R2_TR_B_STRIDE; if (LD32(s) || LD8(s + 0x10)) n++; } return n; }
/* pool B: scan all slots (called once per frame from the pool-B update f_8c0259a0) */
static inline void r2_tr_b_scan(void) {
  int i, g = LD8(R2_TR_GATEFLAG) != 0;
  for (i = 0; i < 50; i++) {
    uint32_t s = R2_TR_B_BASE + (uint32_t)i * R2_TR_B_STRIDE;
    if (!LD32(s) && !LD8(s + 0x10) && !LD8(s + 0x13)) {
      if (r2_tr_last[1][i]) { r2_tr("[ui] f=%u B[%02d] EMPTY (slot cleared)", r2_tr_frame(), i); r2_tr_last[1][i] = 0; }
      continue;
    }
    r2_tr_b_state(!LD8(s + 0x10) ? "SCAN skip:alpha0" : !LD32(s) ? "SCAN skip:ptr0" : (i >= 15 && g) ? "SCAN skip:gate" : "SCAN drawable", s, 0, 1);
  }
}

/* ---- AI-script tracing (Mapmonde2 info plate).  Script nodes are 12 bytes; level DAT image base for Mapmonde2 = 0x8ca58ae0, so
 * "dat+XXXXXX" in the log is the node's file offset in DCDATA/MAPMONDE2/MAPMONDE2.DAT (decode with the node dumper in the notes).
 * C = condition result CHANGED for a node in the controller window; P = text procedure 0x206..0x208 call site (logged once per
 * activation, i.e. when >20 frames since its last call); K = button action became JustPressed (counter==1). */
#define R2_TR_DATBASE 0x8ca58ae0u
#define R2_TR_WIN_LO (R2_TR_DATBASE + 0x1c0000u)
#define R2_TR_WIN_HI (R2_TR_DATBASE + 0x1d2000u)
__attribute__((weak)) uint32_t r2_tr_cn_addr[1024];
__attribute__((weak)) uint32_t r2_tr_cn_res[1024];
__attribute__((weak)) uint32_t r2_tr_ps_addr[256];
__attribute__((weak)) uint32_t r2_tr_ps_last[256];

static inline int r2_tr_in_hub(void) { return strncmp(r2_tr_lvl, "Mapmonde2", 9) == 0; }

static inline void r2_tr_obj_dump(uint32_t obj);
/* condition evaluated: node = cond node address, res = 0/1 */
static inline void r2_tr_cond(uint32_t node, uint32_t obj, uint32_t res) {
  uint32_t h, n;
  if (node < R2_TR_WIN_LO || node >= R2_TR_WIN_HI || !r2_tr_in_hub()) return;
  h = (node / 12u) & 1023u;
  for (n = 0; n < 1024; n++, h = (h + 1) & 1023u) {
    if (r2_tr_cn_addr[h] == node) {
      if (r2_tr_cn_res[h] == res) return;
      break;
    }
    if (!r2_tr_cn_addr[h]) { r2_tr_cn_addr[h] = node; break; }
  }
  if (n == 1024) return;
  r2_tr_cn_res[h] = res;
  r2_tr("[ai] f=%u C dat+%06x cond#%u -> %u (obj=%08x)", r2_tr_frame(), node - R2_TR_DATBASE, (unsigned)LD32(node), (unsigned)res, obj);
  if (node == R2_TR_DATBASE + 0x1d168cu) r2_tr_obj_dump(obj);
}

/* text procedure called (node = the PROC node, i.e. r5-12) */
static inline void r2_tr_site(uint32_t node, uint32_t id, uint32_t obj, uint32_t a4) {
  uint32_t f = r2_tr_frame(), h, n;
  if (!r2_tr_in_hub()) return;
  h = (node / 12u) & 255u;
  for (n = 0; n < 256; n++, h = (h + 1) & 255u) {
    if (r2_tr_ps_addr[h] == node || !r2_tr_ps_addr[h]) break;
  }
  if (n == 256) return;
  if (r2_tr_ps_addr[h] == node && f - r2_tr_ps_last[h] <= 20u) { r2_tr_ps_last[h] = f; return; }
  r2_tr_ps_addr[h] = node; r2_tr_ps_last[h] = f;
  r2_tr("[ai] f=%u P proc#%x site dat+%06x (obj=%08x r4=%08x) gt=%u", f, (unsigned)id, node - R2_TR_DATBASE, obj, a4, (unsigned)LD32(0x8c123bbcu));
}

/* JustPressed/Pressed-style action evaluated true.  e = action entry (28 bytes; +8 -> name string, +16 -> hold counter) */
static inline void r2_tr_btn(const char *kind, uint32_t e) {
  char p[20];
  uint32_t nm = LD32(e + 8);
  if (e < 0x8c000000u || e > 0x8cfffff0u) return;
  r2_tr_pfx(nm, p);
  r2_tr("[ai] f=%u K %s entry=%08x name='%s' cnt=%d", r2_tr_frame(), kind, e, p, (int)LD32(e + 16));
}


/* Discovery dump of the plate object's memory (to locate its Dsg storage: Dsg17 is 1 while shown, 0 when hidden, Dsg18 = alpha 0..255,
 * Dsg19 = 0).  Called when cond dat+1d168c (Dsg17==0) changes; diff the two dumps in the log (words that go 1->0 at the same address). */
static inline int r2_tr_ptr(uint32_t v) { return v >= 0x8c100000u && v < 0x8cf00000u && !(v & 3); }
static inline void r2_tr_dumpw(const char *tag, uint32_t a, int n) {
  char b[400]; int i, l = 0;
  for (i = 0; i < n; i += 8) {
    int j; l = snprintf(b, sizeof b, "[ai] f=%u D %s %08x:", r2_tr_frame(), tag, a + (uint32_t)i * 4);
    for (j = 0; j < 8 && i + j < n; j++) l += snprintf(b + l, sizeof b - (size_t)l, " %08x", LD32(a + (uint32_t)(i + j) * 4));
    r2_tr("%s", b);
  }
}
static inline void r2_tr_obj_dump(uint32_t obj) {
  int i, k, m = 0; uint32_t seen[16];
  r2_tr("[ai] f=%u D ---- object dump obj=%08x", r2_tr_frame(), obj);
  r2_tr_dumpw("obj", obj, 24);
  for (i = 0; i < 24 && m < 12; i++) {
    uint32_t p = LD32(obj + (uint32_t)i * 4), q; int dup = 0;
    if (!r2_tr_ptr(p)) continue;
    for (k = 0; k < m; k++) if (seen[k] == p) dup = 1;
    if (dup) continue;
    seen[m++] = p; r2_tr_dumpw("p1", p, 32);
    for (k = 0; k < 32; k++) {
      q = LD32(p + (uint32_t)k * 4);
      if (r2_tr_ptr(q) && q != p && q < 0x8cd00000u) { int d2 = 0, z; for (z = 0; z < m; z++) if (seen[z] == q) d2 = 1; if (!d2 && m < 16) { seen[m++] = q; r2_tr_dumpw("p2", q, 48); } }
    }
  }
}

#endif
