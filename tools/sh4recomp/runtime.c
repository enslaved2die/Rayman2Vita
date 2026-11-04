#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>

uint8_t sh4_ram[SH4_RAM_SIZE];
unsigned long sh4_stat_unmapped;
unsigned long sh4_stat_io_rd, sh4_stat_io_wr;      /* slow-path loads / stores that are not store-queue accesses (perf.c prints them per frame) */
__attribute__((weak)) void vita_gl_present_fb(uint32_t fb_offset) { (void)fb_offset; }
__attribute__((weak)) void vita_gl_capture_scene(uint32_t off0, uint32_t off1) { (void)off0; (void)off1; }
static void default_fault(const char *what, uint32_t a, uint32_t b) {
    fprintf(stderr, "sh4 fault: %s %08x %08x\n", what, a, b); abort();
}
void (*sh4_fault_handler)(const char *, uint32_t, uint32_t) = default_fault;

/* ---- slow-path I/O: unresolved imports are stubs that count and read 0 ---- */
uint32_t (*sh4_io_read_hook)(uint32_t addr, int size) = 0;
void (*sh4_io_write_hook)(uint32_t addr, int size, uint32_t v) = 0;
/* Store queues (0xE0000000..0xE3FFFFFF): the lifted code pushes every TA vertex through 8 word stores into this window (~5000+ stores per frame). They used to go through the generic
 * hook -> boot.c map-table scan -> sq_wr(memcpy); the buffer lives here now and the window is answered first. boot.c's sq_flush_default reads the same buffer (pref @Rn). */
#ifdef R2_IO_HIST   /* host diagnostic: histogram of the slow-path (non-RAM, non-SQ) accesses by address; printed at exit */
static struct { uint32_t a; uint8_t size, wr; unsigned long n; } io_hist[4096]; static unsigned io_hist_n;
static void io_hist_note(uint32_t a, int size, int wr) {
    for (unsigned i = 0; i < io_hist_n; i++) if (io_hist[i].a == a && io_hist[i].size == size && io_hist[i].wr == wr) { io_hist[i].n++; return; }
    if (io_hist_n < 4096) { io_hist[io_hist_n].a = a; io_hist[io_hist_n].size = (uint8_t)size; io_hist[io_hist_n].wr = (uint8_t)wr; io_hist[io_hist_n++].n = 1; }
}
static int io_hist_cmp(const void *x, const void *y) { unsigned long a = ((const typeof(io_hist[0]) *)x)->n, b = ((const typeof(io_hist[0]) *)y)->n; return a < b ? 1 : a > b ? -1 : 0; }
__attribute__((destructor)) static void io_hist_dump(void) {
    qsort(io_hist, io_hist_n, sizeof io_hist[0], io_hist_cmp);
    for (unsigned i = 0; i < io_hist_n && i < 40; i++) fprintf(stderr, "[iohist] %s%d %08x x%lu\n", io_hist[i].wr ? "wr" : "rd", io_hist[i].size, io_hist[i].a, io_hist[i].n);
}
#define IO_HIST(a, s, w) io_hist_note(a, s, w)
#else
#define IO_HIST(a, s, w) ((void)0)
#endif
uint8_t sh4_sq_buf[64 + 8];                          /* +8: an unaligned access at offset 63 stays inside the array */
uint32_t sh4_io_read(uint32_t a, int size) {
#ifdef R2_FASTCHK_SUB
    if (SH4_FAST(a)) { uint32_t v = 0; memcpy(&v, &sh4_ram[a & 0xFFFFFFu], (size_t)size); return v; }      /* 0xAC.. mirror of RAM (the inline fast path only takes 0x8C..) */
#endif
    if (SH4_LIKELY((a & 0xFC000000u) == 0xE0000000u)) { uint32_t v = 0; memcpy(&v, sh4_sq_buf + (a & 0x3F), (size_t)size); return v; }
    sh4_stat_unmapped++; sh4_stat_io_rd++; IO_HIST(a, size, 0);
    if (sh4_io_read_hook) return sh4_io_read_hook(a, size);
    sh4_fault_handler("unmapped read", a, size); return 0;
}
void sh4_io_write(uint32_t a, int size, uint32_t v) {
#ifdef R2_FASTCHK_SUB
    if (SH4_FAST(a)) { memcpy(&sh4_ram[a & 0xFFFFFFu], &v, (size_t)size); return; }
#endif
    if (SH4_LIKELY((a & 0xFC000000u) == 0xE0000000u)) {
        uint8_t *d = sh4_sq_buf + (a & 0x3F);
        if (size == 4) memcpy(d, &v, 4); else if (size == 2) memcpy(d, &v, 2); else *d = (uint8_t)v;
        return;
    }
    sh4_stat_unmapped++; sh4_stat_io_wr++; IO_HIST(a, size, 1);
    if (sh4_io_write_hook) { sh4_io_write_hook(a, size, v); return; }
    sh4_fault_handler("unmapped write", a, v);
}

/* ---- function table: generated sorted table + small runtime hook table + O(1) direct dispatch table ----
 * sh4_dtab[(addr - SH4_DTAB_BASE) >> 1] is a uint16 code: 0 = none, 0x8000|h = runtime hook #h, else (functab index + 1). 2 bytes per halfword of the lifted
 * code span (~0.95 MB, only the touched lines ever enter the cache) instead of a linear hook scan plus a 13-step binary search over the 45 KB functab.
 * Hooks override generated functions (same precedence as before); anything not in the table (outside the span, odd address, no entry) takes the original
 * slow path (hook scan + binary search) so the 'unresolved call target' report is unchanged. */
#define MAX_HOOKS 256
#define SH4_DTAB_BASE 0x8C010000u
#define SH4_DTAB_SPAN 0x000F3000u                      /* covers the lifted code range 0x8C010000..0x8C102FFF (last function 0x8C0F2C3C) */
static Sh4FuncEnt hooks[MAX_HOOKS]; static int nhooks;
static uint16_t sh4_dtab[SH4_DTAB_SPAN >> 1]; static int sh4_dtab_ready;
uint32_t sh4_hwfp_cfg = 0xFFFFFFFFu;                   /* see runtime.h sh4_hw_fpscr */
#if defined(__arm__)
void sh4_hw_fpscr_update(uint32_t cfg) {
    uint32_t a;
    __asm__ volatile("vmrs %0, fpscr" : "=r"(a));
    a &= ~((3u << 22) | (1u << 24));
    if (cfg & 1u) a |= (3u << 22);                      /* RM==1 -> round toward zero */
    if (cfg & 2u) a |= (1u << 24);                      /* DN -> flush-to-zero */
    __asm__ volatile("vmsr fpscr, %0" : : "r"(a) : "memory");
    sh4_hwfp_cfg = cfg;
}
#endif
static void dtab_build(void) {
    if (sh4_dtab_ready) return;
    sh4_dtab_ready = 1;
    if (sh4_functab_n >= 0x7FFFu) return;              /* index would not fit: leave the table empty (all lookups take the slow path) */
    for (uint32_t i = 0; i < sh4_functab_n; i++) {
        uint32_t off = sh4_functab[i].addr - SH4_DTAB_BASE;
        if (off < SH4_DTAB_SPAN && !(off & 1)) sh4_dtab[off >> 1] = (uint16_t)(i + 1);
    }
}
__attribute__((constructor)) static void dtab_ctor(void) { dtab_build(); }
void sh4_register_hook(uint32_t addr, sh4_fn fn) {
    dtab_build();
    for (int i = 0; i < nhooks; i++) if (hooks[i].addr == addr) { hooks[i].fn = fn; return; }
    if (nhooks < MAX_HOOKS) {
        hooks[nhooks].addr = addr; hooks[nhooks].fn = fn;
        uint32_t off = addr - SH4_DTAB_BASE;
        if (off < SH4_DTAB_SPAN && !(off & 1)) sh4_dtab[off >> 1] = (uint16_t)(0x8000u | nhooks);
        nhooks++;
    }
}
void sh4_call(SH4Ctx *c, uint32_t addr) {
    if ((addr >> 29) == 5) addr &= ~0x20000000u;       /* P2 (0xA0..0xBF) alias of P1: code run uncached via 0xAC.. pointers */
    uint32_t off = addr - SH4_DTAB_BASE;
    if (off < SH4_DTAB_SPAN) {                         /* odd offsets never have an entry (builders skip them) */
        uint32_t e = sh4_dtab[off >> 1];
        if (e && !(off & 1)) {
            if (e & 0x8000u) hooks[e & 0x7FFFu].fn(c); else sh4_functab[e - 1].fn(c);
            return;
        }
    }
    for (int i = 0; i < nhooks; i++) if (hooks[i].addr == addr) { hooks[i].fn(c); return; }
    uint32_t lo = 0, hi = sh4_functab_n;
    while (lo < hi) {
        uint32_t mid = (lo + hi) >> 1;
        if (sh4_functab[mid].addr == addr) { sh4_functab[mid].fn(c); return; }
        if (sh4_functab[mid].addr < addr) lo = mid + 1; else hi = mid;
    }
    sh4_fault_handler("unresolved call target", addr, c->pr);
}
void sh4_bad_jump(SH4Ctx *c, uint32_t pc, uint32_t target) { (void)c; sh4_fault_handler("unresolved indirect jump", pc, target); }
void sh4_undef(SH4Ctx *c, uint32_t pc, uint32_t op) { (void)c; sh4_fault_handler("undecoded opcode", pc, op); }
void sh4_hook_misc(SH4Ctx *c, int kind, uint32_t arg) { (void)c; sh4_fault_handler(kind == 3 ? "trapa" : kind == 2 ? "sleep" : "ldtlb", arg, 0); }
void sh4_pref(SH4Ctx *c, uint32_t addr) { (void)c; (void)addr; /* store-queue flush not modelled */ }

void sh4_load_image(const uint8_t *data, uint32_t len, uint32_t base) {
    memcpy(&sh4_ram[base & 0xFFFFFFu], data, len);
}
void sh4_ctx_reset(SH4Ctx *c) {
    memset(c, 0, sizeof *c);
    c->sr_other = 0x40000000u;          /* MD=1 */
    c->r[15] = 0x8CFFFF00u;
}
