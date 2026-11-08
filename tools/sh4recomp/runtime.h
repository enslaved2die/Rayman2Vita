/* SH-4 static-recompilation runtime (portable C99, little-endian host assumed for memcpy-based access).
 * Guest RAM: flat 16 MiB buffer, guest 0x8Cxxxxxx / 0xACxxxxxx -> sh4_ram[addr & 0x00FFFFFF].
 * Anything else goes through the slow-path hook table (sh4_io_*). */
#ifndef SH4_RUNTIME_H
#define SH4_RUNTIME_H
#include <stdint.h>
#include <string.h>
#include <math.h>
#if !defined(__vita__)
#include <fenv.h>
#endif
#if defined(__ARM_NEON) || defined(__ARM_NEON__)
#include <arm_neon.h>
#endif

/* SH4_INLINE: on the Vita build every helper below must be inlined into the (huge) lifted functions: GCC refuses at -O2/-O3 for plain `static inline`
 * and emitted ~82k outlined calls. Host builds keep plain `static inline` (identical behaviour either way). */
#if defined(__vita__) || defined(R2_ALWAYS_INLINE)
#define SH4_INLINE static inline __attribute__((always_inline))
#else
#define SH4_INLINE static inline
#endif
#define SH4_COLD __attribute__((noinline, cold))
/* SH4_FASTFP (ARM VFP targets only): sh4_setfpscr mirrors guest FPSCR.DN into the hardware FPSCR.FZ (flush-to-zero of denormal inputs AND results, sign kept),
 * which is bit-identical to the software fz() in/out flush, so fin()/fout()/fq() become plain bit casts. Hardware default-NaN (DN) is NOT used: it would
 * replace propagated input-NaN payloads by 0x7FC00000 (software propagates them); the invalid-operation result 0x7FC00000 is still canonicalised to 0x7FBFFFFF
 * by nanfix(). Defaults to on for __vita__ && __arm__; -DR2_NO_FASTFP turns it off. */
#if defined(__vita__) && defined(__arm__) && !defined(R2_NO_FASTFP)
#define SH4_FASTFP 1
#endif
#define SH4_UNLIKELY(x) __builtin_expect(!!(x), 0)
#define SH4_LIKELY(x)   __builtin_expect(!!(x), 1)

#define SH4_RAM_SIZE   0x01000000u
#define SH4_IMAGE_BASE 0x8C010000u
#define SH4_FPSCR_RM  0x00000003u
#define SH4_FPSCR_FR  0x00200000u
#define SH4_FPSCR_SZ  0x00100000u
#define SH4_FPSCR_PR  0x00080000u

typedef struct SH4Ctx {
    uint32_t r[16];
    uint32_t rb[8];                 /* inactive register bank R0-R7 (SR.RB) */
    uint32_t pr, gbr, mach, macl, vbr, ssr, spc, sgr, dbr;
    uint32_t t, s, m, q;            /* SR.T SR.S SR.M SR.Q as 0/1 */
    uint32_t sr_other;              /* SR bits other than T,S,Q,M (MD,RB,BL,FD,IMASK) */
    uint32_t fpscr, fpul;
    uint32_t fr[16], xf[16];        /* raw float bits; fr/xf swapped by FPSCR.FR changes */
} SH4Ctx;

typedef void (*sh4_fn)(SH4Ctx *);

extern uint8_t sh4_ram[SH4_RAM_SIZE];
extern uint32_t sh4_qacr[2];                /* SH-4 QACR0/QACR1 (0xFF000038 / 0xFF00003C) */
extern unsigned long sh4_stat_unmapped;     /* count of slow-path/unmapped accesses */
void vita_gl_present_fb(uint32_t fb_offset);
void vita_gl_capture_scene(uint32_t off0, uint32_t off1);

#define R(n) (c->r[n])

/* ---- memory ---- */
uint32_t sh4_io_read(uint32_t addr, int size);              /* slow path (hook table) */
void     sh4_io_write(uint32_t addr, int size, uint32_t v);
/* RAM iff top byte is 0x8C (P1) or 0xAC (P2): clearing bit 29 maps both onto 0x8C */
#define SH4_FAST(a) (((a) & 0xDF000000u) == 0x8C000000u)
/* -DR2_FASTCHK_SUB (perf variant v4b): the inline fast path accepts only 0x8C000000..0x8CFFFFFF (one subtract + one unsigned compare, and the subtract result is the RAM offset), the 0xAC mirror
 * (uncached P2 view of the same RAM) takes the out-of-line slow path, which resolves it to RAM first (runtime.c). Default: bit 29 is ignored in the compare (two views inline, one more instruction). */
#ifdef R2_FASTCHK_SUB
#define SH4_FASTQ(a) (((a) - 0x8C000000u) < 0x01000000u)
#define SH4_OFF(a)   ((a) - 0x8C000000u)
#else
#define SH4_FASTQ(a) SH4_FAST(a)
#define SH4_OFF(a)   ((a) & 0xFFFFFFu)
#endif
SH4_INLINE uint32_t LD8(uint32_t a)  { return SH4_LIKELY(SH4_FASTQ(a)) ? sh4_ram[SH4_OFF(a)] : sh4_io_read(a,1); }
SH4_INLINE uint32_t LD16(uint32_t a) { if (SH4_LIKELY(SH4_FASTQ(a))) { uint16_t v; memcpy(&v, &sh4_ram[SH4_OFF(a)], 2); return v; } return sh4_io_read(a,2); }
SH4_INLINE uint32_t LD32(uint32_t a) { if (SH4_LIKELY(SH4_FASTQ(a))) { uint32_t v; memcpy(&v, &sh4_ram[SH4_OFF(a)], 4); return v; } return sh4_io_read(a,4); }
SH4_INLINE void ST8(uint32_t a, uint32_t v)  { if (SH4_LIKELY(SH4_FASTQ(a))) sh4_ram[SH4_OFF(a)] = (uint8_t)v; else sh4_io_write(a,1,v); }
SH4_INLINE void ST16(uint32_t a, uint32_t v) { if (SH4_LIKELY(SH4_FASTQ(a))) { uint16_t x=(uint16_t)v; memcpy(&sh4_ram[SH4_OFF(a)], &x, 2); } else sh4_io_write(a,2,v); }
SH4_INLINE void ST32(uint32_t a, uint32_t v) { if (SH4_LIKELY(SH4_FASTQ(a))) memcpy(&sh4_ram[SH4_OFF(a)], &v, 4); else sh4_io_write(a,4,v); }

/* ---- calls / hooks ---- */
typedef struct { uint32_t addr; sh4_fn fn; } Sh4FuncEnt;
extern const Sh4FuncEnt sh4_functab[];      /* generated, sorted by addr */
extern const uint32_t   sh4_functab_n;
#define SH4_CALL_CACHE_SIZE 2048
#define SH4_CALL_CACHE_MASK (SH4_CALL_CACHE_SIZE - 1)
typedef struct Sh4CallEntry { uint32_t addr; sh4_fn fn; } Sh4CallEntry;
extern Sh4CallEntry sh4_call_cache[SH4_CALL_CACHE_SIZE];
void sh4_call_slow(SH4Ctx *c, uint32_t addr);

SH4_INLINE void sh4_call(SH4Ctx *c, uint32_t addr) {
    if (SH4_UNLIKELY((addr >> 29) == 5)) addr &= ~0x20000000u;
    uint32_t slot = ((addr >> 2) ^ (addr >> 7)) & SH4_CALL_CACHE_MASK;
    if (SH4_LIKELY(sh4_call_cache[slot].addr == addr)) {
        sh4_call_cache[slot].fn(c);
        return;
    }
    sh4_call_slow(c, addr);
}
void sh4_register_hook(uint32_t addr, sh4_fn fn);       /* override or provide a function (BIOS/syscall imports) */
void sh4_bad_jump(SH4Ctx *c, uint32_t pc, uint32_t target);  /* unresolved indirect jump target */
void sh4_undef(SH4Ctx *c, uint32_t pc, uint32_t op);    /* undecoded opcode reached */
void sh4_hook_misc(SH4Ctx *c, int kind, uint32_t arg);  /* 1=ldtlb 2=sleep 3=trapa */
void sh4_pref(SH4Ctx *c, uint32_t addr);                /* store-queue flush hook */
extern void (*sh4_fault_handler)(const char *what, uint32_t a, uint32_t b);

void sh4_load_image(const uint8_t *data, uint32_t len, uint32_t guest_base);
void sh4_ctx_reset(SH4Ctx *c);
void sh4_fsca_init(void);
extern uint32_t g_fsca_table[65536][2];

/* ---- SR / FPSCR ---- */
SH4_INLINE uint32_t sh4_getsr(SH4Ctx *c) { return c->sr_other | c->t | (c->s << 1) | (c->q << 8) | (c->m << 9); }
SH4_INLINE void sh4_setsr(SH4Ctx *c, uint32_t v) {
    uint32_t old = c->sr_other;
    c->t = v & 1; c->s = (v >> 1) & 1; c->q = (v >> 8) & 1; c->m = (v >> 9) & 1;
    c->sr_other = v & 0x700083F0u;                 /* MD(30) RB(29) BL(28) FD(15) IMASK(7:4) */
    if (((old ^ c->sr_other) & 0x20000000u)) {     /* RB toggled: swap R0-R7 with inactive bank */
        for (int i = 0; i < 8; i++) { uint32_t x = c->r[i]; c->r[i] = c->rb[i]; c->rb[i] = x; }
    }
}
SH4_INLINE void sh4_frchg(SH4Ctx *c) {
    for (int i = 0; i < 16; i++) { uint32_t x = c->fr[i]; c->fr[i] = c->xf[i]; c->xf[i] = x; }
    c->fpscr ^= SH4_FPSCR_FR;
}
#define SH4_FPSCR_DN 0x00040000u
#if defined(__arm__)
extern uint32_t sh4_hwfp_cfg;                        /* last (RM==1)|DN<<1 programmed into the hardware FPSCR (0xFFFFFFFF = never) */
SH4_COLD void sh4_hw_fpscr_update(uint32_t cfg);       /* runtime.c: vmrs/vmsr RMode+FZ */
SH4_INLINE void sh4_hw_fpscr(uint32_t v) {
    /* hardware FPSCR: RMode (bits 23:22) = RZ (3) iff guest RM==1; FZ (bit 24) = guest DN. vmsr serialises the VFP pipe, so only write when this changes. */
    uint32_t cfg = ((v & SH4_FPSCR_RM) == 1 ? 1u : 0u) | ((v & SH4_FPSCR_DN) ? 2u : 0u);
    if (cfg != sh4_hwfp_cfg) sh4_hw_fpscr_update(cfg);
}
#endif
SH4_INLINE void sh4_setfpscr(SH4Ctx *c, uint32_t v) {
    v &= 0x003FFFFFu;
#if defined(__arm__)
    sh4_hw_fpscr(v);
#elif !defined(__vita__)
    fesetround((v & SH4_FPSCR_RM) == 1 ? FE_TOWARDZERO : FE_TONEAREST);   /* RM=1: round to zero */
#endif
    if ((v ^ c->fpscr) & SH4_FPSCR_FR) { for (int i = 0; i < 16; i++) { uint32_t x = c->fr[i]; c->fr[i] = c->xf[i]; c->xf[i] = x; } }
    c->fpscr = v;
}

/* ---- integer helpers ---- */
SH4_INLINE uint32_t sh4_cmpstr(uint32_t a, uint32_t b) {
    uint32_t x = a ^ b;
    return ((x & 0xFF) == 0) | ((x & 0xFF00) == 0) | ((x & 0xFF0000) == 0) | ((x & 0xFF000000u) == 0);
}
SH4_INLINE uint32_t sh4_shad(uint32_t v, uint32_t sh) {
    int32_t s = (int32_t)v;
    if ((int32_t)sh >= 0) return (uint32_t)s << (sh & 31);
    if ((sh & 31) == 0) return (uint32_t)(s >> 31);
    return (uint32_t)(s >> ((~sh & 31) + 1));      /* shift right by (32 - (sh&31)) */
}
SH4_INLINE uint32_t sh4_shld(uint32_t v, uint32_t sh) {
    if ((int32_t)sh >= 0) return v << (sh & 31);
    if ((sh & 31) == 0) return 0;
    return v >> ((~sh & 31) + 1);
}
SH4_INLINE uint32_t sh4_div1(SH4Ctx *c, uint32_t rn, uint32_t rm) {
    uint32_t old_q = c->q, tmp0, tmp1;
    c->q = rn >> 31;
    rn = (rn << 1) | c->t;
    tmp0 = rn;
    if (old_q == 0) {
        if (c->m == 0) { rn -= rm; tmp1 = rn > tmp0; c->q = c->q ? (tmp1 == 0) : tmp1; }
        else           { rn += rm; tmp1 = rn < tmp0; c->q = c->q ? tmp1 : (tmp1 == 0); }
    } else {
        if (c->m == 0) { rn += rm; tmp1 = rn < tmp0; c->q = c->q ? (tmp1 == 0) : tmp1; }
        else           { rn -= rm; tmp1 = rn > tmp0; c->q = c->q ? tmp1 : (tmp1 == 0); }
    }
    c->t = (c->q == c->m);
    return rn;
}
SH4_INLINE void sh4_mac_l(SH4Ctx *c, uint32_t an, uint32_t am) {
    int32_t a = (int32_t)LD32(an), b = (int32_t)LD32(am);
    int64_t mac = (int64_t)(((uint64_t)c->mach << 32) | c->macl);
    mac += (int64_t)a * (int64_t)b;
    if (c->s) { if (mac > (int64_t)0x00007FFFFFFFFFFFll) mac = 0x00007FFFFFFFFFFFll; else if (mac < (int64_t)0xFFFF800000000000ll) mac = (int64_t)0xFFFF800000000000ll; }
    c->mach = (uint32_t)((uint64_t)mac >> 32); c->macl = (uint32_t)mac;
}
SH4_INLINE void sh4_mac_w(SH4Ctx *c, uint32_t an, uint32_t am) {
    int32_t a = (int16_t)LD16(an), b = (int16_t)LD16(am);
    int64_t prod = (int64_t)a * b;
    if (c->s) {
        int64_t sum = (int64_t)(int32_t)c->macl + prod;
        if (sum > 0x7FFFFFFFll) { sum = 0x7FFFFFFFll; c->mach |= 1; }
        else if (sum < -0x80000000ll) { sum = -0x80000000ll; c->mach |= 1; }
        c->macl = (uint32_t)sum;       /* MACH keeps overflow flag only (bit0 set on overflow) */
    } else {
        int64_t mac = (int64_t)(((uint64_t)c->mach << 32) | c->macl) + prod;
        c->mach = (uint32_t)((uint64_t)mac >> 32); c->macl = (uint32_t)mac;
    }
}

/* ---- FPU ---- */
SH4_INLINE float  u2f(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
SH4_INLINE uint32_t f2u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
SH4_INLINE double u2d(uint32_t hi, uint32_t lo) { uint64_t x = ((uint64_t)hi << 32) | lo; double d; memcpy(&d, &x, 8); return d; }
/* FPSCR.DN=1 (bit 18, the Dreamcast default 0x00040001): denormal inputs/outputs flush to signed zero */
SH4_INLINE uint32_t fz(SH4Ctx *c, uint32_t b) { return ((c->fpscr & SH4_FPSCR_DN) && (b & 0x7F800000u) == 0) ? (b & 0x80000000u) : b; }
#ifdef SH4_FASTFP
SH4_INLINE float  fin(SH4Ctx *c, uint32_t b) { (void)c; return u2f(b); }      /* hardware FZ == guest DN: flush happens inside the VFP op */
SH4_INLINE uint32_t fout(SH4Ctx *c, float f) { (void)c; return f2u(f); }
#else
SH4_INLINE float  fin(SH4Ctx *c, uint32_t b) { return u2f(fz(c, b)); }
SH4_INLINE uint32_t fout(SH4Ctx *c, float f) { return fz(c, f2u(f)); }
#endif
/* SH-4 default NaN for invalid operations (0/0, inf-inf, 0*inf, sqrt(<0)): 0x7FBFFFFF (single), 0x7FF7FFFFFFFFFFFF (double) */
SH4_INLINE int isnan32(uint32_t b) { return (b & 0x7F800000u) == 0x7F800000u && (b & 0x007FFFFFu); }
SH4_INLINE uint32_t nanfix(uint32_t r, uint32_t a, uint32_t b) { return (isnan32(r) && !isnan32(a) && !isnan32(b)) ? 0x7FBFFFFFu : r; }
SH4_INLINE uint32_t fp_sz(SH4Ctx *c) { return (c->fpscr & SH4_FPSCR_SZ) ? 8 : 4; }
SH4_INLINE double  fp_getd(SH4Ctx *c, int n) { return u2d(c->fr[n & 14], c->fr[(n & 14) + 1]); }
SH4_INLINE void    fp_setd(SH4Ctx *c, int n, double d) { uint64_t x; memcpy(&x, &d, 8); c->fr[n & 14] = (uint32_t)(x >> 32); c->fr[(n & 14) + 1] = (uint32_t)x; }
/* fmov helpers: SZ=1 => 64-bit transfers, odd register number selects the XD (alternate) bank.
 * The SZ=1 / PR=1 bodies are cold and outlined (the game only toggles SZ inside two tiny fmov-copy functions): the inlined fast path is a flag test + one load/store. */
SH4_COLD static void fp_ld_sz(SH4Ctx *c, int n, uint32_t a) {
    uint32_t *b = (n & 1) ? c->xf : c->fr; int k = n & 14;
    b[k + 1] = LD32(a); b[k] = LD32(a + 4);          /* little-endian: low word at low address -> FR(n+1) */
}
SH4_COLD static void fp_st_sz(SH4Ctx *c, int n, uint32_t a) {
    uint32_t *b = (n & 1) ? c->xf : c->fr; int k = n & 14;
    ST32(a, b[k + 1]); ST32(a + 4, b[k]);
}
SH4_COLD static void fp_mov_sz(SH4Ctx *c, int n, int m) {
    uint32_t *bs = (m & 1) ? c->xf : c->fr, *bd = (n & 1) ? c->xf : c->fr; int ks = m & 14, kd = n & 14;
    uint32_t h = bs[ks], l = bs[ks + 1]; bd[kd] = h; bd[kd + 1] = l;
}
SH4_INLINE void fp_ld(SH4Ctx *c, int n, uint32_t a)  { if (SH4_UNLIKELY(c->fpscr & SH4_FPSCR_SZ)) fp_ld_sz(c, n, a); else c->fr[n] = LD32(a); }
SH4_INLINE void fp_st(SH4Ctx *c, int n, uint32_t a)  { if (SH4_UNLIKELY(c->fpscr & SH4_FPSCR_SZ)) fp_st_sz(c, n, a); else ST32(a, c->fr[n]); }
SH4_INLINE void fp_mov(SH4Ctx *c, int n, int m)      { if (SH4_UNLIKELY(c->fpscr & SH4_FPSCR_SZ)) fp_mov_sz(c, n, m); else c->fr[n] = c->fr[m]; }
SH4_COLD static void fp_arith_pr(SH4Ctx *c, int op, int n, int m) {
    double a = fp_getd(c, n), b = fp_getd(c, m), r;
    switch (op) { case 0: r = a + b; break; case 1: r = a - b; break; case 2: r = a * b; break; default: r = a / b; }
    { uint64_t rb; memcpy(&rb, &r, 8);
      if ((rb & 0x7FF0000000000000ull) == 0x7FF0000000000000ull && (rb & 0x000FFFFFFFFFFFFFull) && !isnan(a) && !isnan(b)) rb = 0x7FF7FFFFFFFFFFFFull;
      c->fr[n & 14] = (uint32_t)(rb >> 32); c->fr[(n & 14) + 1] = (uint32_t)rb; }
}
/* NOTE: PR=1 (double precision) IS used by the guest (the %f/double helpers around f_8c09c7bc, f_8c0ac0xx..f_8c0b3axx set FPSCR.PR), so the PR test cannot be
 * dropped; it is a single predicted-not-taken test on the already-loaded FPSCR word. `op` is a compile-time constant at every call site (always_inline folds the switch). */
SH4_INLINE void fp_arith(SH4Ctx *c, int op, int n, int m) {
    if (SH4_UNLIKELY(c->fpscr & SH4_FPSCR_PR)) { fp_arith_pr(c, op, n, m); return; }
    float a = fin(c, c->fr[n]), b = fin(c, c->fr[m]), r;
    switch (op) { case 0: r = a + b; break; case 1: r = a - b; break; case 2: r = a * b; break; default: r = a / b; }
    c->fr[n] = nanfix(fout(c, r), c->fr[n], c->fr[m]);
}
SH4_INLINE void fp_cmp(SH4Ctx *c, int op, int n, int m) {
    if (c->fpscr & SH4_FPSCR_PR) { double a = fp_getd(c, n), b = fp_getd(c, m); c->t = op ? (a > b) : (a == b); }
    else { float a = fin(c, c->fr[n]), b = fin(c, c->fr[m]); c->t = op ? (a > b) : (a == b); }
}
SH4_INLINE void fp_unary(SH4Ctx *c, int op, int n) {   /* 0 fneg 1 fabs 2 fsqrt */
    if (c->fpscr & SH4_FPSCR_PR) {
        if (op == 0) c->fr[n & 14] ^= 0x80000000u; else if (op == 1) c->fr[n & 14] &= 0x7FFFFFFFu;
        else fp_setd(c, n, sqrt(fp_getd(c, n)));
    } else {
        if (op == 0) c->fr[n] ^= 0x80000000u; else if (op == 1) c->fr[n] &= 0x7FFFFFFFu;
        else c->fr[n] = nanfix(fout(c, sqrtf(fin(c, c->fr[n]))), c->fr[n], c->fr[n]);
    }
}
#ifdef SH4_FASTFP
/* Cortex-A9 has no fused multiply-add (VFPv3): the library fmaf() was a software call (float->double, vmla.f64, ->float). Use plain a*b+d (vmla.f32: product and sum
 * each rounded once, FZ applied by hardware): differs from the fused host result only in the last ulp of rare cases. */
SH4_INLINE void fp_fmac(SH4Ctx *c, int n, int m) { c->fr[n] = fout(c, fin(c, c->fr[0]) * fin(c, c->fr[m]) + fin(c, c->fr[n])); }
#else
SH4_INLINE void fp_fmac(SH4Ctx *c, int n, int m) { c->fr[n] = fout(c, fmaf(fin(c, c->fr[0]), fin(c, c->fr[m]), fin(c, c->fr[n]))); }
#endif
SH4_INLINE void fp_float(SH4Ctx *c, int n) {
    if (c->fpscr & SH4_FPSCR_PR) fp_setd(c, n, (double)(int32_t)c->fpul); else c->fr[n] = fout(c, (float)(int32_t)c->fpul);
}
SH4_INLINE uint32_t fp_sat(double d) {
    if (d != d) return 0x7FFFFFFFu;   /* NaN -> +max (matches qemu; SH7750 manual: invalid -> 0x7FFFFFFF) */
    if (d >= 2147483648.0) return 0x7FFFFFFFu;
    if (d <= -2147483648.0) return 0x80000000u;
    return (uint32_t)(int32_t)d;
}
SH4_INLINE uint32_t fp_satf(float f) {
    if (SH4_UNLIKELY(f != f)) return 0x7FFFFFFFu;
    if (SH4_UNLIKELY(f >= 2147483648.0f)) return 0x7FFFFFFFu;
    if (SH4_UNLIKELY(f <= -2147483648.0f)) return 0x80000000u;
    return (uint32_t)(int32_t)f;
}
SH4_INLINE void fp_ftrc(SH4Ctx *c, int n) {
#ifdef SH4_FASTFP
    c->fpul = SH4_UNLIKELY(c->fpscr & SH4_FPSCR_PR) ? fp_sat(fp_getd(c, n)) : fp_satf(fin(c, c->fr[n]));
#else
    c->fpul = (c->fpscr & SH4_FPSCR_PR) ? fp_sat(fp_getd(c, n)) : fp_sat((double)fin(c, c->fr[n]));
#endif
}
SH4_INLINE void fp_cnvsd(SH4Ctx *c, int n) { fp_setd(c, n, (double)u2f(c->fpul)); }
SH4_INLINE void fp_cnvds(SH4Ctx *c, int n) { c->fpul = f2u((float)fp_getd(c, n)); }
#if (defined(__ARM_NEON) || defined(__ARM_NEON__)) && !defined(R2_FORCE_SCALAR_FP)
SH4_INLINE void fp_fsrra(SH4Ctx *c, int n) {
    float x = fin(c, c->fr[n]);
    if (SH4_UNLIKELY(x <= 0.0f || !isfinite(x))) {
        c->fr[n] = fout(c, 1.0f / sqrtf(x));
    } else {
        float32x2_t vx = vdup_n_f32(x);
        float32x2_t y = vrsqrte_f32(vx);
        y = vmul_f32(y, vrsqrts_f32(vmul_f32(vx, y), y));
        y = vmul_f32(y, vrsqrts_f32(vmul_f32(vx, y), y));
        c->fr[n] = fout(c, vget_lane_f32(y, 0));
    }
}
#else
SH4_INLINE void fp_fsrra(SH4Ctx *c, int n) { c->fr[n] = fout(c, 1.0f / sqrtf(fin(c, c->fr[n]))); }
#endif
/* fipr/ftrv: accumulation order chosen to match qemu's helper (tested bit-exact vs qemu-system-sh4 in tests/optest.py);
 * real SH7750 hardware computes these with a non-IEEE fused datapath, so last-ulp differences vs silicon are possible. */
#ifdef SH4_FASTFP
SH4_INLINE float fq(SH4Ctx *c, float f) { (void)c; return f; }                 /* hardware FZ already flushed every VFP result */
#else
SH4_INLINE float fq(SH4Ctx *c, float f) { return u2f(fz(c, f2u(f))); }
#endif
#ifndef SH4_DOT_MODE
#define SH4_DOT_MODE 0
#endif
SH4_INLINE float fp_dot4(SH4Ctx *c, const float *a, const float *b) {
#if SH4_DOT_MODE == 0
    float p0 = fq(c, a[0] * b[0]), p1 = fq(c, a[1] * b[1]), p2 = fq(c, a[2] * b[2]), p3 = fq(c, a[3] * b[3]);
    return fq(c, fq(c, fq(c, p0 + p1) + p2) + p3);
#elif SH4_DOT_MODE == 1
    float s = fq(c, a[0] * b[0]);
    s = fmaf(a[1], b[1], s); s = fmaf(a[2], b[2], s); return fmaf(a[3], b[3], s);
#else
    double s = (double)a[0] * b[0] + (double)a[1] * b[1] + (double)a[2] * b[2] + (double)a[3] * b[3];
    return (float)s;
#endif
}
#if (defined(__ARM_NEON) || defined(__ARM_NEON__)) && !defined(R2_FORCE_SCALAR_FP)
SH4_INLINE void fp_fipr(SH4Ctx *c, int vn, int vm) {  /* FVn . FVm -> FR[n+3] */
    float32x4_t a = vld1q_f32((const float *)&c->fr[vn * 4]);
    float32x4_t b = vld1q_f32((const float *)&c->fr[vm * 4]);
    float32x4_t p = vmulq_f32(a, b);
    float32x2_t s2 = vpadd_f32(vget_low_f32(p), vget_high_f32(p));
    float32x2_t s1 = vpadd_f32(s2, s2);
    c->fr[vn * 4 + 3] = fout(c, vget_lane_f32(s1, 0));
}
SH4_INLINE void fp_ftrv(SH4Ctx *c, int vn) {
    int a = vn * 4;
    float32x4_t v = vld1q_f32((const float *)&c->fr[a]);
    float32x4_t c0 = vld1q_f32((const float *)&c->xf[0]);
    float32x4_t c1 = vld1q_f32((const float *)&c->xf[4]);
    float32x4_t c2 = vld1q_f32((const float *)&c->xf[8]);
    float32x4_t c3 = vld1q_f32((const float *)&c->xf[12]);

    float32x2_t v_lo = vget_low_f32(v);
    float32x2_t v_hi = vget_high_f32(v);

    float32x4_t o = vmulq_lane_f32(c0, v_lo, 0);
    o = vmlaq_lane_f32(o, c1, v_lo, 1);
    o = vmlaq_lane_f32(o, c2, v_hi, 0);
    o = vmlaq_lane_f32(o, c3, v_hi, 1);

    vst1q_f32((float *)&c->fr[a], o);
}
#else
SH4_INLINE void fp_fipr(SH4Ctx *c, int vn, int vm) {  /* FVn . FVm -> FR[n+3] */
    float a[4], b[4];
    for (int i = 0; i < 4; i++) { a[i] = fin(c, c->fr[vn * 4 + i]); b[i] = fin(c, c->fr[vm * 4 + i]); }
    c->fr[vn * 4 + 3] = fout(c, fp_dot4(c, a, b));
}
SH4_INLINE void fp_ftrv(SH4Ctx *c, int vn) {
    int a = vn * 4; float v[4], o[4], row[4];
    for (int i = 0; i < 4; i++) v[i] = fin(c, c->fr[a + i]);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) row[j] = fin(c, c->xf[i + 4 * j]);
        o[i] = fp_dot4(c, row, v);
    }
    for (int i = 0; i < 4; i++) c->fr[a + i] = fout(c, o[i]);
}
#endif
SH4_INLINE void fp_fsca(SH4Ctx *c, int dn) {
    uint32_t idx = c->fpul & 0xFFFFu;
    c->fr[dn] = g_fsca_table[idx][0];
    c->fr[dn + 1] = g_fsca_table[idx][1];
}
#endif
