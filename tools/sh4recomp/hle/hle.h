/* HLE layer for the recompiled Rayman 2 DC executable (host build).
 *
 * HOW HOOKS WORK (important - direct calls would bypass sh4_register_hook):
 *   The lifter emits direct C calls f_8cXXXXXX(c) for constant-target bsr/jsr. To intercept ANY guest function
 *   (direct or indirect call) the Makefile (target `hle`) does this:
 *     1. scans hle/<module>.c for every literal 0x8Cxxxxxx that is a lifted function entry  -> "hookable set"
 *     2. compiles gen/recomp_*.c with the definition of each such function renamed  f_X -> orig_f_X
 *     3. generates build_hle/hook_stubs.c: for each address in the set, `void f_X(SH4Ctx*c)` that calls the hook registered
 *        with hle_hook(0xX, fn) or, if none registered, falls through to orig_f_X (the real recompiled body).
 *   So to hook a function: write the literal address in your hle/<module>.c (e.g. `hle_hook(0x8C0128BE, my_fn);`) and rebuild
 *   with `make hle`. A hook is a normal guest-function replacement: read args from R(4)..R(7)/stack, put the result in R(0),
 *   and simply `return` (== rts). Do NOT touch c->pr. To run the original body from a hook: hle_orig(c, 0xX).
 *   Hooks may call guest functions with hle_call(c, addr) (saves/restores PR).
 *
 * MODULE INIT (called by hle_boot_init, in this order): hle_io_init(dcdata_root) [hle/io.c], hle_ta_init() [hle/ta.c].
 *   boot.c provides weak no-op defaults, so your module only needs to define the strong version.
 *
 * MMIO: any guest access outside the 16 MiB RAM mirror (0x8C/0xAC/0x0C) lands in the slow path and is dispatched through
 *   hle_mmio_map() ranges (most recently registered range wins), then to the boot.c default model (SH-4 on-chip regs
 *   0xFF/0xF4/0xE0 ranges are modelled in boot.c, ASIC/PVR/AICA/maple regs likewise), else logged as UNHANDLED
 *   (address, size, value, caller PR, nearest guest function) and returns 0.
 *   Store queue window 0xE0000000..0xE3FFFFFF is NOT mapped by boot.c as storage: ta.c should hle_mmio_map() it
 *   (writes land there from ST32 with SQ addresses) and install a prefetch handler (below) for `pref @Rn`.
 */
#ifndef HLE_H
#define HLE_H
#include "../runtime.h"
#include <stdio.h>

typedef void (*hle_fn)(SH4Ctx *c);

/* ---- hooks ---- */
void hle_hook(uint32_t addr, hle_fn fn);       /* addr literal must be in hle/<module>.c; see above */
void hle_orig(SH4Ctx *c, uint32_t addr);       /* run original recompiled body (bypasses the hook) */
void hle_call(SH4Ctx *c, uint32_t addr);       /* call a guest function from a hook (preserves PR); goes through hooks */

/* ---- guest memory helpers (RAM only; 0x8C/0xAC/0x0C mirrors) ---- */
static inline uint8_t *hle_ptr(uint32_t a) { return &sh4_ram[a & 0x00FFFFFFu]; }
static inline int hle_is_ram(uint32_t a) { return SH4_FAST(a) || ((a >> 24) == 0x0C); }
const char *hle_cstr(uint32_t guest_addr);     /* returns host pointer to guest NUL-terminated string (or "<bad>") */

/* ---- MMIO ---- */
typedef uint32_t (*hle_mmio_rd)(uint32_t addr, int size);
typedef void     (*hle_mmio_wr)(uint32_t addr, int size, uint32_t v);
void hle_mmio_map(uint32_t lo, uint32_t hi_inclusive, hle_mmio_rd rd, hle_mmio_wr wr);  /* rd/wr may be NULL -> fall through to next */
/* Post-write observer (called after boot.c stored the value in its backing register file); for QACR0/1 (0xFF000038/3C) etc. */
void hle_mmio_watch(uint32_t lo, uint32_t hi_inclusive, hle_mmio_wr cb);
/* Backing store of the modelled on-chip / system registers (generic 32-bit register file keyed by address). */
uint32_t hle_reg_get(uint32_t addr);
void     hle_reg_set(uint32_t addr, uint32_t v);

/* ---- store queue / pref ---- */
/* `pref @Rn` handler. Default (boot.c): ignore. ta.c installs its own: it gets the guest address in Rn (0xE0000000..0xE3FFFFFF for SQ). */
typedef void (*hle_pref_fn)(SH4Ctx *c, uint32_t addr);
void hle_set_pref_handler(hle_pref_fn fn);

/* ---- frame / time services provided by boot.c ---- */
extern unsigned long hle_frame_count;          /* number of kamui end-of-frame (flip) events seen */
uint64_t hle_time_us(void);                    /* host monotonic microseconds since boot */
/* ta.c may register a callback at the guest "begin frame" and "end frame/flip" boundaries (Kamui 0x8C0D3AE0 / 0x8C0DFFE0). */
void hle_set_frame_callbacks(void (*begin)(SH4Ctx *c), void (*end)(SH4Ctx *c));

/* ---- store queue / DMA sinks (ta.c) ---- */
/* boot.c implements the SQ buffers and `pref` flush: destination = QACR area bits | addr&0x03FFFFE0. System-RAM and VRAM destinations are
 * written by boot.c itself; anything else (TA FIFO 0x10000000.., YUV 0x10800000.., texture 64-bit area) goes to the sink. */
void hle_set_sq_sink(void (*fn)(uint32_t phys_dest, const uint8_t data32[32]));
/* ch2 DMA (SB_C2DST) to the TA FIFO 0x10000000..0x107FFFFF: boot.c performs RAM->VRAM/RAM copies itself, TA-bound data goes to the sink. */
void hle_set_ta_dma_sink(void (*fn)(uint32_t dst, const uint8_t *src, uint32_t len));

/* ---- PVR core hooks (boot.c -> ta glue) ---- */
void hle_set_startrender_cb(void (*fn)(SH4Ctx *c));   /* called when the guest writes PVR STARTRENDER (0xA05F8014), before the EOR interrupt is queued */
uint8_t *hle_vram_ptr(void);                          /* 8 MiB host VRAM image (physical 0x04000000 + offset, 32-bit area view) */

/* ---- ASIC interrupts ---- */
/* Raise SB_ISTNRM bits and run the guest's ASIC ISR (Kamui, 0x8C0DCF40) synchronously. Bits: 2=EOR_TSP (render done), 3=VBlank-in,
 * 7=opaque list end, 8=opaque-mod end, 9=translucent end, 10=trans-mod end, 21=punch-thru end. ta.c should call this when it sees a TA
 * end-of-list packet (list type from the last header). boot.c raises 3 (paced at 60 Hz) from the Kamui idle callback and 2 at kmRender. */
void hle_asic_raise(uint32_t istnrm_mask);
void hle_asic_raise_later(uint32_t istnrm_mask);   /* queued: delivered from the next Kamui idle tick / frame boundary */

/* ---- logging ---- */
extern int hle_verbose;                        /* 0 quiet, 1 hooks+unhandled, 2 every hooked call */
extern int hle_trace_on;                       /* guest function-entry trace (run_game --trace N) */
void hle_log(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
void hle_unhandled(const char *what, uint32_t addr, int size, uint32_t val);   /* count + log with caller PR */

/* ---- modules (strong versions live in io.c / ta.c; weak defaults in boot.c) ---- */
void hle_io_init(const char *dcdata_root);     /* hle/io.c: file IO hooks (gdFs/FileMng/AsyncFile/DirMng) */
void hle_ta_init(void);                        /* hle/ta.c: SQ/TA packet parser, texture/PVR hooks */
void hle_boot_init(SH4Ctx *c, const uint8_t *image, uint32_t len, const char *dcdata_root);
int  hle_run_main(SH4Ctx *c);                  /* runs main under setjmp; returns 0 = returned, 1 = guest exit, 2 = fault/stop */
void hle_stop(const char *why);                /* abort guest run from any hook (longjmp) */

#endif
