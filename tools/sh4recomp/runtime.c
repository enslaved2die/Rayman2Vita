#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>

uint8_t sh4_ram[SH4_RAM_SIZE];
unsigned long sh4_stat_unmapped;
static void default_fault(const char *what, uint32_t a, uint32_t b) {
    fprintf(stderr, "sh4 fault: %s %08x %08x\n", what, a, b); abort();
}
void (*sh4_fault_handler)(const char *, uint32_t, uint32_t) = default_fault;

/* ---- slow-path I/O: unresolved imports are stubs that count and read 0 ---- */
uint32_t (*sh4_io_read_hook)(uint32_t addr, int size) = 0;
void (*sh4_io_write_hook)(uint32_t addr, int size, uint32_t v) = 0;
uint32_t sh4_io_read(uint32_t a, int size) {
    sh4_stat_unmapped++;
    if (sh4_io_read_hook) return sh4_io_read_hook(a, size);
    sh4_fault_handler("unmapped read", a, size); return 0;
}
void sh4_io_write(uint32_t a, int size, uint32_t v) {
    sh4_stat_unmapped++;
    if (sh4_io_write_hook) { sh4_io_write_hook(a, size, v); return; }
    sh4_fault_handler("unmapped write", a, v);
}

/* ---- function table: generated sorted table + small runtime hook table ---- */
#define MAX_HOOKS 256
static Sh4FuncEnt hooks[MAX_HOOKS]; static int nhooks;
void sh4_register_hook(uint32_t addr, sh4_fn fn) {
    for (int i = 0; i < nhooks; i++) if (hooks[i].addr == addr) { hooks[i].fn = fn; return; }
    if (nhooks < MAX_HOOKS) { hooks[nhooks].addr = addr; hooks[nhooks].fn = fn; nhooks++; }
}
void sh4_call(SH4Ctx *c, uint32_t addr) {
    if ((addr >> 29) == 5) addr &= ~0x20000000u;       /* P2 (0xA0..0xBF) alias of P1: code run uncached via 0xAC.. pointers */
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
