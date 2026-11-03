/* hle/io.h - host file IO for the recompiled Rayman 2 DC executable (FileMng / DirMng lookups / gdFs sector API).
 * hle_io_init(root) is declared in hle.h. Everything below is exported for the unit tests (hle/tests_io) and for boot code.
 *
 * Design (evidence in re_analysis/dc: hw_inventory.md 4.1, decompiled.c FUN_8c0128be..8c012b78, 8c0ce968, 8c0cefe8):
 *  - The game never sees LBAs for FileMng users: it passes (name, dir) strings. Wrapper-level hooks map them to host files.
 *  - FileMng handle slot (0x840 bytes, 8 of them at 0x8C11F8C4) keeps a *gdFs handle* at +0x830. Other game code
 *    (03B6A6/03BDD6/039F80, AsyncFile 080920/080A20/080B96) calls gdFs getters on that handle (0CEC88 status @+0x50,
 *    0CECA0 bytes done @+0x18, 0CEBDC @+0x4A, 0CEDE4 @+0x52, valid flag u16 @+0x4C). The recompiled getters are left alone: we
 *    keep a *fake gdFs handle struct in guest RAM* with those fields filled in, so they just work.
 *  - AsyncFile (sound streaming) runs unmodified on top of hooks for the gdFs entry points it uses (open range, ReqRd,
 *    seek, sync read, abort, close) using synthetic LBAs handed out by the DirMng lookup hooks.
 */
#ifndef HLE_IO_H
#define HLE_IO_H
#include "hle.h"

/* ---- configuration ---- */
/* Guest RAM regions used for fake gdFs handles and synthetic directory entries (0x2C bytes each).
 * Fake gdFs handles: 0x8C009000.. (HLE_IO_GD_STRIDE bytes each, inside BIOS/IP.BIN scratch area below pad buffers at 0x8C009800).
 * Synthetic directory entries: 0x8C001000.. (28 KB untouched BIOS scratch area 0x8C001000..0x8C008000).
 * MAX_DIRENT is 512 entries (512 * 0x2C = 22,528 bytes = 0x5800 bytes, safe within 0x8C001000..0x8C006800).
 * Entries are permanently bound per unique file/member; the engine stores returned dirent pointers
 * directly into sound descriptors (desc + 48) and relies on them never moving or recycling.
 */
#define HLE_IO_SCRATCH_BASE 0x8C009000u
#define HLE_IO_DIRENT_BASE  0x8C001000u
#define HLE_IO_GD_STRIDE   0x54u
void hle_io_set_scratch(uint32_t gd_base, unsigned n_gd, uint32_t dirent_base, unsigned n_dirent);
void hle_io_set_root(const char *root);        /* also called by hle_io_init */
void hle_io_reset(void);                        /* close all host handles, clear registry (tests) */
extern int hle_io_force_scan;                   /* (obsolete: lookups are always case-insensitive via the in-memory index) */
void hle_io_rescan(void);                       /* drop the directory index; it is rebuilt on the next lookup */
extern unsigned long hle_io_lookups, hle_io_misses; /* path lookups / lookups that found no file (all served from memory) */
extern int hle_io_stat_calls;                   /* host stat() calls made by io.c (the index scan on non-Vita hosts, then ~0) */

/* ---- path mapping ---- */
/* dir may be NULL. Backslash or slash separated, case-insensitive, leading separator ignored, ".;1" version suffix ignored.
 * Returns 0 and fills out (host path) for an existing regular file (symlinks followed); -1 otherwise. */
int hle_io_resolve(const char *dir, const char *name, char *out, size_t cap);

/* ---- hooks (guest ABI: args R4..R7, result R0) ---- */
/* FileMng.c */
void hle_io_h_open(SH4Ctx *c);        /* 0x8C0128BE  int open(const char *name, const char *dir, Slot *h)  -> 0 ok / -1 */
void hle_io_h_read_async(SH4Ctx *c);  /* 0x8C012B02  int rd(Slot *h, int bytes, void *buf)               -> sectors started */
void hle_io_h_poll(SH4Ctx *c);        /* 0x8C012B60  int done(Slot *h)                                   -> status==1 */
void hle_io_h_read_block(SH4Ctx *c);  /* 0x8C012B78  int rd(Slot *h, int bytes, void *buf)               -> bytes read */
void hle_io_h_close(SH4Ctx *c);       /* 0x8C012ACC  int close(Slot *h)                                  -> 0 / -1 */
/* DirMng.c lookups: return pointer to a synthetic 0x2C-byte directory entry {lba, size, flag@8=0, name@10} or 0 */
void hle_io_h_dir_find(SH4Ctx *c);    /* 0x8C0429D2  entry *find(const char *name, const char *dir) */
void hle_io_h_dir_find_path(SH4Ctx *c);/* 0x8C042B96 entry *find(const char *fullpath) */
/* gdFs sector API (LBA based, entry points called directly by AsyncFile.c and others) */
void hle_io_h_gd_open_range(SH4Ctx *c);/* 0x8C0CEFE8 gd *open(fad, nsect)         -> fake handle or 0 */
void hle_io_h_gd_reqrd(SH4Ctx *c);     /* 0x8C0CE968 int ReqRd(gd, nsect, buf)    -> sectors started, 0 nothing, <0 error */
void hle_io_h_gd_seek(SH4Ctx *c);      /* 0x8C0CE75E int Seek(gd, off, whence)    -> 0 / <0 */
void hle_io_h_gd_read(SH4Ctx *c);      /* 0x8C0CE802 int Read(gd, nsect, buf)     -> 0 / <0 (blocking) */
void hle_io_h_gd_abort(SH4Ctx *c);     /* 0x8C0CECB6 int Abort(gd)                -> 0 / <0 */
void hle_io_h_gd_close(SH4Ctx *c);     /* 0x8C0CE6D8 void Close(gd) */
/* optional: make DirMng init (0x8C0427C0) a no-op. OFF by default: it changes the guest malloc sequence (see report). */
void hle_io_h_dirmng_init_noop(SH4Ctx *c);
/* Audio stream trace: resolve a guest FileMng slot to its backing path and cursor. */
void hle_io_debug_slot(uint32_t slot);
void hle_io_debug_slot_trace(uint32_t slot);

#endif
