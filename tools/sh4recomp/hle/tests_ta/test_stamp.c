/* Integration test of the texture-cache validity stamps with the REAL boot.c (VRAM page epochs, flat PVR registers) and texmap.c (hle_texstamp_*):
 * every VRAM write path the guest has (CPU stores through the 32-bit and 64-bit views, ch2 DMA, PVR-IF DMA, frame-buffer-shadow redirect) and the palette registers are driven through
 * sh4_io_write(), and after each step the stamp verdict is compared with an independent full re-hash of the texture bytes (+palette entries):
 *   - verdict "valid" while the content changed        = STALE texture (must never happen),
 *   - verdict "invalid" while the content is unchanged = needless re-decode (must never happen either: the hash fallback absorbs neighbouring writes).
 * Linked against the host HLE objects (see Makefile target test-stamp); needs `make hle` first.  Run from tools/sh4recomp/hle/tests_ta. */
#include "../hle_priv.h"
#include "../texmap.h"
#include "../ta.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern uint32_t sh4_io_read_dispatch(uint32_t, int); extern void sh4_io_write_dispatch(uint32_t, int, uint32_t);
extern uint32_t (*sh4_io_read_hook)(uint32_t, int); extern void (*sh4_io_write_hook)(uint32_t, int, uint32_t);
static int fails;
#define CHECK(c) do { if (!(c)) { printf("FAIL %s:%d  %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)

static uint32_t xs = 99u; static uint32_t rnd(void) { xs ^= xs << 13; xs ^= xs >> 17; xs ^= xs << 5; return xs; }
static uint32_t vram_off64(uint32_t o) { return (o & 3) | ((o & 0x7FFFF8) >> 1) | (((o >> 2) & 1) << 22); }
static uint32_t inv64(uint32_t x) { for (uint32_t o = (x & ~3u) * 2 - 16 < 0x800000u ? (x & ~3u) * 2 - 16 : 0; o < 0x800000u && o < x * 2 + 32; o++) if (vram_off64(o) == x) return o; return ~0u; }

static uint32_t ref_hash(uint32_t tcw, uint32_t tsp)
{
    uint32_t off = (tcw & 0x1FFFFFu) << 3, n = ta_tex_byte_len(tcw, tsp);
    if (off + n > (8u << 20)) n = (8u << 20) - off;
    uint32_t h = ta_hash_bytes(hle_vram_ptr() + off, n);
    int fmt = (int)((tcw >> 27) & 7); const uint32_t *pr = hle_pvr_regs(), *pal = pr + 0x400;
    if (fmt == 5) h ^= ta_hash_bytes(pal + (((tcw >> 21) & 63) << 4), 64) * 31u ^ pr[0x42];
    else if (fmt == 6) h ^= ta_hash_bytes(pal + (((tcw >> 25) & 3) << 8), 1024) * 31u ^ pr[0x42];
    return h;
}
typedef struct { uint32_t tcw, tsp; HleTexStamp st; uint32_t ref; } T;
static int stale, overinv, nverd;
static void verdict(T *t, const char *what)
{
    uint64_t hb = hle_texstats.hash_bytes;
    int v = hle_texstamp_valid(&t->st, t->tcw, t->tsp); uint32_t r = ref_hash(t->tcw, t->tsp), changed = r != t->ref; nverd++;
    if (v && changed) { stale++; printf("STALE after %s (tcw %08x)\n", what, t->tcw); }
    if (!v && !changed) { overinv++; printf("needless invalidation after %s (tcw %08x)\n", what, t->tcw); }
    (void)hb;
    if (!v) { hle_texstamp_set(&t->st, t->tcw, t->tsp); t->ref = r; }
}
static void fresh(T *t) { hle_texstamp_set(&t->st, t->tcw, t->tsp); t->ref = ref_hash(t->tcw, t->tsp); }
static void w32(uint32_t a, uint32_t v) { sh4_io_write(a, 4, v); }

int main(void)
{
    sh4_io_read_hook = sh4_io_read_dispatch; sh4_io_write_hook = sh4_io_write_dispatch;
    /* ---- directed cases ---- */
    const uint32_t TSP32 = 0x1u | (1u << 3) | (0u << 14);                    /* U = 8<<... 16x16? use explicit size below */
    (void)TSP32;
    T a = { (1u << 27) | (0x100000u >> 3), 0x2Cu | (1u << 13), {0}, 0 };    /* RGB565, size: tsp[5:3]=5 -> 256? keep small: set below */
    a.tsp = (2u << 3) | 2u;                                                  /* 32x32 */
    uint32_t n = ta_tex_byte_len(a.tcw, a.tsp);
    CHECK(n == 32 * 32 * 2);
    for (uint32_t i = 0; i < n; i += 4) w32(0xA4100000u + i, 0x11110000u + i);
    fresh(&a);
    uint64_t hb0 = hle_texstats.hash_bytes;
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 1);
    CHECK(hle_texstats.hash_bytes == hb0);                                   /* epoch hit: nothing hashed */
    w32(0xA4100010u, 0x11110010u);                                           /* identical value: no stamp */
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 1 && hle_texstats.hash_bytes == hb0);
    w32(0xA4100000u + n + 0x100u, 0xDEADBEEFu);                              /* same 4 KiB page, outside the texture: hash fallback says valid */
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 1 && hle_texstats.hash_bytes > hb0);
    hb0 = hle_texstats.hash_bytes;
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 1 && hle_texstats.hash_bytes == hb0);   /* ... and the refreshed stamp is an epoch hit again */
    w32(0xA4100020u, 0x12345678u);                                           /* inside: invalid */
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 0);
    fresh(&a);
    sh4_io_write(0xA4100041u, 1, 0x77);                                      /* byte write */
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 0); fresh(&a);
    sh4_io_write(0xA4100042u, 2, 0x7788);                                    /* halfword write */
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 0); fresh(&a);
    { uint32_t o = inv64(0x100080u); CHECK(o != ~0u); w32(0xA5000000u + o, 0xCAFEF00Du);   /* 64-bit-area view lands on the 32-bit offset */
      CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 0); fresh(&a); }
    /* ch2 DMA RAM -> VRAM (32-bit area) */
    for (int i = 0; i < 64; i++) sh4_ram[0x1000 + i] = (uint8_t)(0xA0 + i);
    w32(0xA05F6800u, 0x04100100u); w32(0xA05F6804u, 64); w32(0xFFA00020u, 0x0C001000u); w32(0xA05F6808u, 1);
    CHECK(memcmp(hle_vram_ptr() + 0x100100, sh4_ram + 0x1000, 64) == 0);
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 0); fresh(&a);
    /* PVR-IF DMA */
    for (int i = 0; i < 64; i++) sh4_ram[0x2000 + i] = (uint8_t)(0x30 + i);
    w32(0xA05F7C00u, 0x00100200u); w32(0xA05F7C04u, 0x0C002000u); w32(0xA05F7C08u, 64); w32(0xA05F7C0Cu, 0); w32(0xA05F7C18u, 1);
    CHECK(memcmp(hle_vram_ptr() + 0x100200, sh4_ram + 0x2000, 64) == 0);
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 0); fresh(&a);
    /* PVR-IF DMA in the other direction (VRAM -> RAM) does not touch VRAM */
    w32(0xA05F7C0Cu, 1); w32(0xA05F7C18u, 1);
    CHECK(hle_texstamp_valid(&a.st, a.tcw, a.tsp) == 1);
    /* frame-buffer shadow: the 64-bit-area stream into a registered frame buffer region never reaches vram[] and must not invalidate textures that alias it in the 32-bit view */
    w32(0xA05F8060u, 0x4aa000u);                                             /* FB_W_SOF1 -> fb_refresh registers [0x4aa000, +0x96000) and its +-4 MiB twin */
    T b = { (1u << 27) | (vram_off64(0x4aa100u) & ~7u) >> 3, a.tsp, {0}, 0 };
    fresh(&b);
    hb0 = hle_texstats.hash_bytes;
    uint8_t before = hle_vram_ptr()[vram_off64(0x4aa100u)];
    w32(0xA5000000u + 0x4aa100u, 0x55AA55AAu);
    CHECK(hle_vram_ptr()[vram_off64(0x4aa100u)] == before);                  /* redirected to the shadow buffer */
    CHECK(hle_texstamp_valid(&b.st, b.tcw, b.tsp) == 1 && hle_texstats.hash_bytes == hb0);   /* ... so no epoch moved and nothing was hashed */
    CHECK(sh4_io_read(0xA5000000u + 0x4aa100u, 4) == 0x55AA55AAu);           /* the guest still reads its own data back */
    /* palette textures */
    T p4 = { (5u << 27) | (3u << 21) | (0x180000u >> 3), (0u << 3) | 0u, {0}, 0 };   /* 4bpp, palette bank 3 (entries 48..63), 8x8 */
    for (uint32_t i = 0; i < 32; i += 4) w32(0xA4180000u + i, 0x01234567u + i);
    for (uint32_t i = 0; i < 1024; i++) w32(0xA05F9000u + 4 * i, 0xFF000000u + i);
    fresh(&p4);
    CHECK(hle_texstamp_valid(&p4.st, p4.tcw, p4.tsp) == 1);
    uint32_t pe = hle_pvr_pal_epoch(); w32(0xA05F9000u + 4 * 5, 0xFF000005u); CHECK(hle_pvr_pal_epoch() == pe);   /* same value: no epoch */
    w32(0xA05F9000u + 4 * 100, 0x1234u); CHECK(hle_pvr_pal_epoch() != pe);   /* unrelated entry: epoch moves, but the used entries are unchanged */
    hb0 = hle_texstats.pal_hashes; CHECK(hle_texstamp_valid(&p4.st, p4.tcw, p4.tsp) == 1 && hle_texstats.pal_hashes > hb0);
    w32(0xA05F9000u + 4 * 50, 0xABCDu); CHECK(hle_texstamp_valid(&p4.st, p4.tcw, p4.tsp) == 0); fresh(&p4);   /* an entry this texture uses */
    w32(0xA05F8108u, 3); CHECK(hle_texstamp_valid(&p4.st, p4.tcw, p4.tsp) == 0); fresh(&p4);                 /* PAL_RAM_CTRL */
    CHECK(hle_reg_get(0xA05F8108u) == 3 && hle_reg_get(0xA05F9000u + 4 * 50) == 0xABCDu);                   /* flat file == register file */
    /* fog epoch */
    uint32_t fe = hle_pvr_fog_epoch(); w32(0xA05F8200u + 4 * 3, 0xc7c7u); CHECK(hle_pvr_fog_epoch() != fe); fe = hle_pvr_fog_epoch(); w32(0xA05F8200u + 4 * 3, 0xc7c7u); CHECK(hle_pvr_fog_epoch() == fe);
    w32(0xA05F80B8u, 0xff0au); CHECK(hle_pvr_fog_epoch() != fe); CHECK(hle_reg_get(0xA05F80B8u) == 0xff0au);
    hle_reg_set(0xA05F80B8u, 0x8004u); CHECK(hle_pvr_regs()[0x2E] == 0x8004u && hle_reg_get(0xA05F80B8u) == 0x8004u);   /* hle_reg_set mirrors */
    w32(0xFF000038u, 0x12u); CHECK(hle_reg_get(0xFF000038u) == 0x12u);        /* QACR0 mirror */

    /* ---- randomised: textures of all kinds, random writes through every path, verdict vs full re-hash after every step ---- */
    enum { NT = 24 };
    T t[NT];
    for (int i = 0; i < NT; i++) {
        uint32_t fmt = (uint32_t[]){ 0, 1, 2, 5, 6, 1, 2 }[rnd() % 7], sz = rnd() % 4, mip = (rnd() % 5 == 0), vq = (fmt <= 2 && rnd() % 6 == 0);
        uint32_t pageoff = (0x200000u + (rnd() % 0x80) * 0x1000u + (rnd() % 4) * 0x400u);
        t[i].tcw = (mip << 31) | (vq << 30) | (fmt << 27) | ((rnd() & 63) << 21 & (fmt >= 5 ? 0x7E00000u : 0)) | (pageoff >> 3);
        t[i].tsp = (sz << 3) | sz;
        if (fmt == 6) t[i].tcw = (t[i].tcw & ~(3u << 25)) | ((rnd() & 3) << 25);
        t[i].tcw &= ~(1u << 26);
        fresh(&t[i]);
    }
    for (int step = 0; step < 60000; step++) {
        int kind = rnd() % 10;
        uint32_t tgt = (rnd() % 3 == 0) ? (0x200000u + (rnd() % 0x90) * 0x1000u + (rnd() % 0x1000)) : ((t[rnd() % NT].tcw & 0x1FFFFFu) << 3) + (rnd() % 4096);
        tgt &= 0x7FFFFCu;
        switch (kind) {
        case 0: case 1: case 2: w32(0xA4000000u + tgt, rnd()); break;
        case 3: { uint32_t o = inv64(tgt); if (o != ~0u) w32(0xA5000000u + o, rnd()); } break;
        case 4: sh4_io_write(0xA4000000u + tgt + (rnd() & 3), 1, rnd()); break;
        case 5: sh4_io_write(0xA4000000u + (tgt & ~1u), 2, rnd()); break;
        case 6: { uint32_t len = 4 * (1 + rnd() % 300); for (uint32_t i = 0; i < len; i++) sh4_ram[0x4000 + i] = (uint8_t)(rnd() % 3 ? 0 : rnd()); if (tgt + len > 0x7FFFFFu) break;
                  w32(0xA05F6800u, 0x04000000u + tgt); w32(0xA05F6804u, len); w32(0xFFA00020u, 0x0C004000u); w32(0xA05F6808u, 1); } break;
        case 7: { uint32_t len = 4 * (1 + rnd() % 300); for (uint32_t i = 0; i < len; i++) sh4_ram[0x6000 + i] = (uint8_t)rnd(); if (tgt + len > 0x7FFFFFu) break;
                  w32(0xA05F7C00u, tgt); w32(0xA05F7C04u, 0x0C006000u); w32(0xA05F7C08u, len); w32(0xA05F7C0Cu, 0); w32(0xA05F7C18u, 1); } break;
        case 8: w32(0xA05F9000u + 4 * (rnd() % 1024), (rnd() % 2) ? 0xFF000000u + (rnd() & 7) : rnd()); break;
        default: if (rnd() % 8 == 0) w32(0xA05F8108u, rnd() & 3); break;
        }
        if (step % 7 == 0) { int i = rnd() % NT; verdict(&t[i], "random step"); }
        if (step % 500 == 0) for (int i = 0; i < NT; i++) verdict(&t[i], "sweep");
    }
    printf("stamp test: %d verdicts, stale=%d needless=%d; epoch-hit %llu hash-same %llu invalid %llu hashed %llu KB, pal-hashes %llu\n", nverd, stale, overinv,
           (unsigned long long)hle_texstats.epoch_hits, (unsigned long long)hle_texstats.hash_same, (unsigned long long)hle_texstats.invalid, (unsigned long long)hle_texstats.hash_bytes / 1024, (unsigned long long)hle_texstats.pal_hashes);
    CHECK(stale == 0); CHECK(overinv == 0); CHECK(hle_texstats.epoch_hits > 0 && hle_texstats.hash_same > 0 && hle_texstats.invalid > 0);
    printf(fails ? "STAMP TESTS FAILED: %d\n" : "stamp tests passed\n", fails);
    return fails != 0;
}
