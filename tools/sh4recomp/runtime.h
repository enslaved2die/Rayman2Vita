/* SH-4 static-recompilation runtime (portable C99, little-endian host assumed for memcpy-based access).
 * Guest RAM: flat 16 MiB buffer, guest 0x8Cxxxxxx / 0xACxxxxxx -> sh4_ram[addr & 0x00FFFFFF].
 * Anything else goes through the slow-path hook table (sh4_io_*). */
#ifndef SH4_RUNTIME_H
#define SH4_RUNTIME_H
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <fenv.h>

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
extern unsigned long sh4_stat_unmapped;     /* count of slow-path/unmapped accesses */

#define R(n) (c->r[n])

/* ---- memory ---- */
uint32_t sh4_io_read(uint32_t addr, int size);              /* slow path (hook table) */
void     sh4_io_write(uint32_t addr, int size, uint32_t v);
#define SH4_FAST(a) ((((a) >> 24) | 0x20u) == 0xACu)
static inline uint32_t LD8(uint32_t a)  { return SH4_FAST(a) ? sh4_ram[a & 0xFFFFFFu] : sh4_io_read(a,1); }
static inline uint32_t LD16(uint32_t a) { if (SH4_FAST(a)) { uint16_t v; memcpy(&v, &sh4_ram[a & 0xFFFFFFu], 2); return v; } return sh4_io_read(a,2); }
static inline uint32_t LD32(uint32_t a) { if (SH4_FAST(a)) { uint32_t v; memcpy(&v, &sh4_ram[a & 0xFFFFFFu], 4); return v; } return sh4_io_read(a,4); }
static inline void ST8(uint32_t a, uint32_t v)  { if (SH4_FAST(a)) sh4_ram[a & 0xFFFFFFu] = (uint8_t)v; else sh4_io_write(a,1,v); }
static inline void ST16(uint32_t a, uint32_t v) { if (SH4_FAST(a)) { uint16_t x=(uint16_t)v; memcpy(&sh4_ram[a & 0xFFFFFFu], &x, 2); } else sh4_io_write(a,2,v); }
static inline void ST32(uint32_t a, uint32_t v) { if (SH4_FAST(a)) memcpy(&sh4_ram[a & 0xFFFFFFu], &v, 4); else sh4_io_write(a,4,v); }

/* ---- calls / hooks ---- */
typedef struct { uint32_t addr; sh4_fn fn; } Sh4FuncEnt;
extern const Sh4FuncEnt sh4_functab[];      /* generated, sorted by addr */
extern const uint32_t   sh4_functab_n;
void sh4_call(SH4Ctx *c, uint32_t addr);                /* indirect call / tail-dispatch by guest address */
void sh4_register_hook(uint32_t addr, sh4_fn fn);       /* override or provide a function (BIOS/syscall imports) */
void sh4_bad_jump(SH4Ctx *c, uint32_t pc, uint32_t target);  /* unresolved indirect jump target */
void sh4_undef(SH4Ctx *c, uint32_t pc, uint32_t op);    /* undecoded opcode reached */
void sh4_hook_misc(SH4Ctx *c, int kind, uint32_t arg);  /* 1=ldtlb 2=sleep 3=trapa */
void sh4_pref(SH4Ctx *c, uint32_t addr);                /* store-queue flush hook */
extern void (*sh4_fault_handler)(const char *what, uint32_t a, uint32_t b);

void sh4_load_image(const uint8_t *data, uint32_t len, uint32_t guest_base);
void sh4_ctx_reset(SH4Ctx *c);

/* ---- SR / FPSCR ---- */
static inline uint32_t sh4_getsr(SH4Ctx *c) { return c->sr_other | c->t | (c->s << 1) | (c->q << 8) | (c->m << 9); }
static inline void sh4_setsr(SH4Ctx *c, uint32_t v) {
    uint32_t old = c->sr_other;
    c->t = v & 1; c->s = (v >> 1) & 1; c->q = (v >> 8) & 1; c->m = (v >> 9) & 1;
    c->sr_other = v & 0x700083F0u;                 /* MD(30) RB(29) BL(28) FD(15) IMASK(7:4) */
    if (((old ^ c->sr_other) & 0x20000000u)) {     /* RB toggled: swap R0-R7 with inactive bank */
        for (int i = 0; i < 8; i++) { uint32_t x = c->r[i]; c->r[i] = c->rb[i]; c->rb[i] = x; }
    }
}
static inline void sh4_frchg(SH4Ctx *c) {
    for (int i = 0; i < 16; i++) { uint32_t x = c->fr[i]; c->fr[i] = c->xf[i]; c->xf[i] = x; }
    c->fpscr ^= SH4_FPSCR_FR;
}
static inline void sh4_setfpscr(SH4Ctx *c, uint32_t v) {
    v &= 0x003FFFFFu;
    fesetround((v & SH4_FPSCR_RM) == 1 ? FE_TOWARDZERO : FE_TONEAREST);   /* RM=1: round to zero */
    if ((v ^ c->fpscr) & SH4_FPSCR_FR) { for (int i = 0; i < 16; i++) { uint32_t x = c->fr[i]; c->fr[i] = c->xf[i]; c->xf[i] = x; } }
    c->fpscr = v;
}

/* ---- integer helpers ---- */
static inline uint32_t sh4_cmpstr(uint32_t a, uint32_t b) {
    uint32_t x = a ^ b;
    return ((x & 0xFF) == 0) | ((x & 0xFF00) == 0) | ((x & 0xFF0000) == 0) | ((x & 0xFF000000u) == 0);
}
static inline uint32_t sh4_shad(uint32_t v, uint32_t sh) {
    int32_t s = (int32_t)v;
    if ((int32_t)sh >= 0) return (uint32_t)s << (sh & 31);
    if ((sh & 31) == 0) return (uint32_t)(s >> 31);
    return (uint32_t)(s >> ((~sh & 31) + 1));      /* shift right by (32 - (sh&31)) */
}
static inline uint32_t sh4_shld(uint32_t v, uint32_t sh) {
    if ((int32_t)sh >= 0) return v << (sh & 31);
    if ((sh & 31) == 0) return 0;
    return v >> ((~sh & 31) + 1);
}
static inline uint32_t sh4_div1(SH4Ctx *c, uint32_t rn, uint32_t rm) {
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
static inline void sh4_mac_l(SH4Ctx *c, uint32_t an, uint32_t am) {
    int32_t a = (int32_t)LD32(an), b = (int32_t)LD32(am);
    int64_t mac = (int64_t)(((uint64_t)c->mach << 32) | c->macl);
    mac += (int64_t)a * (int64_t)b;
    if (c->s) { if (mac > (int64_t)0x00007FFFFFFFFFFFll) mac = 0x00007FFFFFFFFFFFll; else if (mac < (int64_t)0xFFFF800000000000ll) mac = (int64_t)0xFFFF800000000000ll; }
    c->mach = (uint32_t)((uint64_t)mac >> 32); c->macl = (uint32_t)mac;
}
static inline void sh4_mac_w(SH4Ctx *c, uint32_t an, uint32_t am) {
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
static inline float  u2f(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
static inline uint32_t f2u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static inline double u2d(uint32_t hi, uint32_t lo) { uint64_t x = ((uint64_t)hi << 32) | lo; double d; memcpy(&d, &x, 8); return d; }
/* FPSCR.DN=1 (bit 18, the Dreamcast default 0x00040001): denormal inputs/outputs flush to signed zero */
#define SH4_FPSCR_DN 0x00040000u
static inline uint32_t fz(SH4Ctx *c, uint32_t b) { return ((c->fpscr & SH4_FPSCR_DN) && (b & 0x7F800000u) == 0) ? (b & 0x80000000u) : b; }
static inline float  fin(SH4Ctx *c, uint32_t b) { return u2f(fz(c, b)); }
static inline uint32_t fout(SH4Ctx *c, float f) { return fz(c, f2u(f)); }
/* SH-4 default NaN for invalid operations (0/0, inf-inf, 0*inf, sqrt(<0)): 0x7FBFFFFF (single), 0x7FF7FFFFFFFFFFFF (double) */
static inline int isnan32(uint32_t b) { return (b & 0x7F800000u) == 0x7F800000u && (b & 0x007FFFFFu); }
static inline uint32_t nanfix(uint32_t r, uint32_t a, uint32_t b) { return (isnan32(r) && !isnan32(a) && !isnan32(b)) ? 0x7FBFFFFFu : r; }
static inline uint32_t fp_sz(SH4Ctx *c) { return (c->fpscr & SH4_FPSCR_SZ) ? 8 : 4; }
static inline double  fp_getd(SH4Ctx *c, int n) { return u2d(c->fr[n & 14], c->fr[(n & 14) + 1]); }
static inline void    fp_setd(SH4Ctx *c, int n, double d) { uint64_t x; memcpy(&x, &d, 8); c->fr[n & 14] = (uint32_t)(x >> 32); c->fr[(n & 14) + 1] = (uint32_t)x; }
/* fmov helpers: SZ=1 => 64-bit transfers, odd register number selects the XD (alternate) bank */
static inline void fp_ld(SH4Ctx *c, int n, uint32_t a) {
    if (c->fpscr & SH4_FPSCR_SZ) {
        uint32_t *b = (n & 1) ? c->xf : c->fr; int k = n & 14;
        b[k + 1] = LD32(a); b[k] = LD32(a + 4);      /* little-endian: low word at low address -> FR(n+1) */
    } else c->fr[n] = LD32(a);
}
static inline void fp_st(SH4Ctx *c, int n, uint32_t a) {
    if (c->fpscr & SH4_FPSCR_SZ) {
        uint32_t *b = (n & 1) ? c->xf : c->fr; int k = n & 14;
        ST32(a, b[k + 1]); ST32(a + 4, b[k]);
    } else ST32(a, c->fr[n]);
}
static inline void fp_mov(SH4Ctx *c, int n, int m) {
    if (c->fpscr & SH4_FPSCR_SZ) {
        uint32_t *bs = (m & 1) ? c->xf : c->fr, *bd = (n & 1) ? c->xf : c->fr; int ks = m & 14, kd = n & 14;
        uint32_t h = bs[ks], l = bs[ks + 1]; bd[kd] = h; bd[kd + 1] = l;
    } else c->fr[n] = c->fr[m];
}
static inline void fp_arith(SH4Ctx *c, int op, int n, int m) {
    if (c->fpscr & SH4_FPSCR_PR) {
        double a = fp_getd(c, n), b = fp_getd(c, m), r;
        switch (op) { case 0: r = a + b; break; case 1: r = a - b; break; case 2: r = a * b; break; default: r = a / b; }
        { uint64_t rb; memcpy(&rb, &r, 8);
          if ((rb & 0x7FF0000000000000ull) == 0x7FF0000000000000ull && (rb & 0x000FFFFFFFFFFFFFull) && !isnan(a) && !isnan(b)) rb = 0x7FF7FFFFFFFFFFFFull;
          c->fr[n & 14] = (uint32_t)(rb >> 32); c->fr[(n & 14) + 1] = (uint32_t)rb; }
    } else {
        float a = fin(c, c->fr[n]), b = fin(c, c->fr[m]), r;
        switch (op) { case 0: r = a + b; break; case 1: r = a - b; break; case 2: r = a * b; break; default: r = a / b; }
        c->fr[n] = nanfix(fout(c, r), c->fr[n], c->fr[m]);
    }
}
static inline void fp_cmp(SH4Ctx *c, int op, int n, int m) {
    if (c->fpscr & SH4_FPSCR_PR) { double a = fp_getd(c, n), b = fp_getd(c, m); c->t = op ? (a > b) : (a == b); }
    else { float a = fin(c, c->fr[n]), b = fin(c, c->fr[m]); c->t = op ? (a > b) : (a == b); }
}
static inline void fp_unary(SH4Ctx *c, int op, int n) {   /* 0 fneg 1 fabs 2 fsqrt */
    if (c->fpscr & SH4_FPSCR_PR) {
        if (op == 0) c->fr[n & 14] ^= 0x80000000u; else if (op == 1) c->fr[n & 14] &= 0x7FFFFFFFu;
        else fp_setd(c, n, sqrt(fp_getd(c, n)));
    } else {
        if (op == 0) c->fr[n] ^= 0x80000000u; else if (op == 1) c->fr[n] &= 0x7FFFFFFFu;
        else c->fr[n] = nanfix(fout(c, sqrtf(fin(c, c->fr[n]))), c->fr[n], c->fr[n]);
    }
}
static inline void fp_fmac(SH4Ctx *c, int n, int m) { c->fr[n] = fout(c, fmaf(fin(c, c->fr[0]), fin(c, c->fr[m]), fin(c, c->fr[n]))); }
static inline void fp_float(SH4Ctx *c, int n) {
    if (c->fpscr & SH4_FPSCR_PR) fp_setd(c, n, (double)(int32_t)c->fpul); else c->fr[n] = fout(c, (float)(int32_t)c->fpul);
}
static inline uint32_t fp_sat(double d) {
    if (d != d) return 0x7FFFFFFFu;   /* NaN -> +max (matches qemu; SH7750 manual: invalid -> 0x7FFFFFFF) */
    if (d >= 2147483648.0) return 0x7FFFFFFFu;
    if (d <= -2147483648.0) return 0x80000000u;
    return (uint32_t)(int32_t)d;
}
static inline void fp_ftrc(SH4Ctx *c, int n) {
    c->fpul = (c->fpscr & SH4_FPSCR_PR) ? fp_sat(fp_getd(c, n)) : fp_sat((double)fin(c, c->fr[n]));
}
static inline void fp_cnvsd(SH4Ctx *c, int n) { fp_setd(c, n, (double)u2f(c->fpul)); }
static inline void fp_cnvds(SH4Ctx *c, int n) { c->fpul = f2u((float)fp_getd(c, n)); }
static inline void fp_fsrra(SH4Ctx *c, int n) { c->fr[n] = fout(c, 1.0f / sqrtf(fin(c, c->fr[n]))); }
/* fipr/ftrv: accumulation order chosen to match qemu's helper (tested bit-exact vs qemu-system-sh4 in tests/optest.py);
 * real SH7750 hardware computes these with a non-IEEE fused datapath, so last-ulp differences vs silicon are possible. */
static inline float fq(SH4Ctx *c, float f) { return u2f(fz(c, f2u(f))); }
#ifndef SH4_DOT_MODE
#define SH4_DOT_MODE 0
#endif
static inline float fp_dot4(SH4Ctx *c, const float *a, const float *b) {
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
static inline void fp_fipr(SH4Ctx *c, int vn, int vm) {  /* FVn . FVm -> FR[n+3] */
    float a[4], b[4];
    for (int i = 0; i < 4; i++) { a[i] = fin(c, c->fr[vn * 4 + i]); b[i] = fin(c, c->fr[vm * 4 + i]); }
    c->fr[vn * 4 + 3] = fout(c, fp_dot4(c, a, b));
}
static inline void fp_ftrv(SH4Ctx *c, int vn) {
    int a = vn * 4; float v[4], o[4], row[4];
    for (int i = 0; i < 4; i++) v[i] = fin(c, c->fr[a + i]);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) row[j] = fin(c, c->xf[i + 4 * j]);
        o[i] = fp_dot4(c, row, v);
    }
    for (int i = 0; i < 4; i++) c->fr[a + i] = fout(c, o[i]);
}
static inline void fp_fsca(SH4Ctx *c, int dn) {
    double ang = (double)(c->fpul & 0xFFFFu) * (6.283185307179586476925286766559 / 65536.0);
    c->fr[dn] = f2u((float)sin(ang)); c->fr[dn + 1] = f2u((float)cos(ang));
}
#endif
