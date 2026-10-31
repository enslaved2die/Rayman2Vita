/* hle/io.c - host file IO replacements. See io.h for the design. All addresses are guest VAs of assets/dc/1ST_READ.BIN. */
#define _GNU_SOURCE
#include "io.h"
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

/* ---------------------------------------------------------------- layout constants (all PROVEN from the disassembly) */
enum {
    SLOT_BASE   = 0x8C11F8C4, SLOT_STRIDE = 0x840, SLOT_COUNT = 8,   /* FUN_8C012A66 */
    SLOT_FLAGS  = 0x8C123AC4,                                          /* 8 x u32 "in use", cleared by 8C012ACC */
    O_CACHEBUF  = 2080, O_CACHELEN = 2084, O_CACHEIDX = 2088, O_CACHEOFF = 2092,
    O_GD        = 2096, O_POS = 2100, O_SIZE = 2104,
    /* fake gdFs handle fields (read by the recompiled gdFs getters 8C0CEC88/8C0CECA0/8C0CEBDC/8C0CEDE4) */
    G_FAD = 0x08, G_NSECT = 0x10, G_CUR = 0x14, G_XFER = 0x18, G_REQN = 0x1C, G_VALID = 0x4C, G_ST2 = 0x4A, G_STAT = 0x50, G_ERR = 0x52,
    ST_DONE = 1, ST_BUSY = 2, ST_IDLE = 4,
    SECTOR = 2048, FAD_BIAS = 150,
    LBA_SHIFT = 18                       /* synthetic lba = (file_id+1) << 18 sectors (512 MiB per file) */
};

/* ---------------------------------------------------------------- state */
typedef struct { char path[1024]; uint32_t size; } RegFile;
typedef struct { int used; int fd; int reg; } GdEnt;
typedef struct { int reg; uint64_t stamp; } DirEnt;
#define MAX_REG 16384
#define MAX_GD  64
#define MAX_DIRENT 64
static char g_root[900];
static RegFile *g_reg; static int g_nreg;
static GdEnt g_gd[MAX_GD]; static unsigned g_ngd = 10;
static DirEnt g_dir[MAX_DIRENT]; static unsigned g_ndir = 14; static uint64_t g_stamp;
static uint32_t g_gd_base = HLE_IO_SCRATCH_BASE, g_dir_base = HLE_IO_SCRATCH_BASE + 10 * HLE_IO_GD_STRIDE;
int hle_io_force_scan;

void hle_io_set_scratch(uint32_t gd_base, unsigned n_gd, uint32_t dirent_base, unsigned n_dirent) {
    g_gd_base = gd_base; g_ngd = n_gd > MAX_GD ? MAX_GD : n_gd;
    g_dir_base = dirent_base; g_ndir = n_dirent > MAX_DIRENT ? MAX_DIRENT : n_dirent;
}
void hle_io_set_root(const char *root) { snprintf(g_root, sizeof g_root, "%s", root ? root : "."); size_t n = strlen(g_root); while (n > 1 && g_root[n - 1] == '/') g_root[--n] = 0; }
void hle_io_reset(void) {
    for (unsigned i = 0; i < MAX_GD; i++) { if (g_gd[i].used && g_gd[i].fd >= 0) close(g_gd[i].fd); g_gd[i].used = 0; g_gd[i].fd = -1; }
    free(g_reg); g_reg = 0; g_nreg = 0; memset(g_dir, 0, sizeof g_dir); g_stamp = 0;
}

/* ---------------------------------------------------------------- guest memory helpers */
static int ram_range_ok(uint32_t a, uint32_t n) { return hle_is_ram(a) && ((a & 0xFFFFFFu) + (uint64_t)n) <= SH4_RAM_SIZE; }
static void guest_write(uint32_t dst, const uint8_t *src, uint32_t n) {
    if (ram_range_ok(dst, n)) { memcpy(hle_ptr(dst), src, n); return; }
    for (uint32_t i = 0; i < n; i++) ST8(dst + i, src[i]);          /* slow path (non-RAM destination) */
}
static void put16(uint32_t a, uint32_t v) { ST16(a, v); }
static void put32(uint32_t a, uint32_t v) { ST32(a, v); }

/* ---------------------------------------------------------------- path mapping */
static int is_sep(char ch) { return ch == '\\' || ch == '/'; }

static int find_ci(const char *dirpath, const char *comp, char *out, size_t cap) {
    DIR *d = opendir(dirpath); if (!d) return -1;
    struct dirent *e; int rc = -1;
    while ((e = readdir(d))) if (!strcasecmp(e->d_name, comp)) { snprintf(out, cap, "%s", e->d_name); rc = 0; break; }
    closedir(d); return rc;
}

/* append one logical component to the host path in cur (cap bytes); returns 0 ok */
static int append_comp(char *cur, size_t cap, const char *comp, size_t root_len) {
    if (!strcmp(comp, ".") || !*comp) return 0;
    if (!strcmp(comp, "..")) { char *s = strrchr(cur, '/'); if (s && (size_t)(s - cur) >= root_len) *s = 0; return 0; }
    char tmp[1100], real[300]; struct stat st;
    size_t n = strlen(cur);
    if (n + 2 + strlen(comp) >= cap) return -1;
    if (!hle_io_force_scan) { snprintf(tmp, sizeof tmp, "%s/%s", cur, comp); if (!stat(tmp, &st)) { strcat(cur, "/"); strcat(cur, comp); return 0; } }
    if (find_ci(cur, comp, real, sizeof real) == 0) { strcat(cur, "/"); strcat(cur, real); return 0; }
    /* strip an ISO9660 ";1" version suffix, e.g. "FOO.DAT;1" */
    char *semi = strchr((char *)comp, ';');
    if (semi) { char nm[300]; size_t l = (size_t)(semi - comp); if (l < sizeof nm) { memcpy(nm, comp, l); nm[l] = 0; if (find_ci(cur, nm, real, sizeof real) == 0) { strcat(cur, "/"); strcat(cur, real); return 0; } } }
    return -1;
}

static int walk(const char *s, char *cur, size_t cap, size_t root_len) {
    char comp[300]; size_t k = 0;
    for (const char *p = s;; p++) {
        if (*p == 0 || is_sep(*p)) {
            comp[k] = 0;
            if (k && append_comp(cur, cap, comp, root_len)) return -1;
            k = 0; if (!*p) break;
        } else if (k + 1 < sizeof comp) comp[k++] = *p;
        else return -1;
    }
    return 0;
}

int hle_io_resolve(const char *dir, const char *name, char *out, size_t cap) {
    if (!name || !*name) return -1;
    char cur[1024]; size_t root_len = strlen(g_root);
    snprintf(cur, sizeof cur, "%s", g_root);
    if (dir && walk(dir, cur, sizeof cur, root_len)) return -1;
    if (walk(name, cur, sizeof cur, root_len)) return -1;
    struct stat st; if (stat(cur, &st) || !S_ISREG(st.st_mode)) return -1;
    if (strlen(cur) >= cap) return -1;
    strcpy(out, cur); return 0;
}

/* ---------------------------------------------------------------- registry (host file <-> synthetic LBA) */
static int reg_find(const char *path, uint32_t size) {
    for (int i = 0; i < g_nreg; i++) if (!strcmp(g_reg[i].path, path)) { g_reg[i].size = size; return i; }
    if (g_nreg >= MAX_REG) return -1;
    if (!g_reg) g_reg = calloc(MAX_REG, sizeof(RegFile));
    if (!g_reg) return -1;
    snprintf(g_reg[g_nreg].path, sizeof g_reg[0].path, "%s", path); g_reg[g_nreg].size = size; return g_nreg++;
}
static uint32_t reg_size(const char *path) { struct stat st; return stat(path, &st) ? 0 : (uint32_t)st.st_size; }

/* ---------------------------------------------------------------- fake gdFs handles */
static uint32_t gd_addr(unsigned i) { return g_gd_base + i * HLE_IO_GD_STRIDE; }
static GdEnt *gd_lookup(uint32_t h) {
    if (h < g_gd_base || (h - g_gd_base) % HLE_IO_GD_STRIDE) return 0;
    unsigned i = (h - g_gd_base) / HLE_IO_GD_STRIDE; if (i >= g_ngd || !g_gd[i].used) return 0;
    if (!LD16(h + G_VALID)) return 0;                     /* same validity test as the real getters */
    return &g_gd[i];
}
/* fad = disc fad (lba + 150); nsect = range length. Returns fake gd handle address or 0. */
static uint32_t gd_open_range(uint32_t fad, int32_t nsect) {
    if (fad < FAD_BIAS) return 0;
    uint32_t lba = fad - FAD_BIAS; int id = (int)(lba >> LBA_SHIFT) - 1;
    if (id < 0 || id >= g_nreg) { hle_log("[io] gd_open_range: fad %u does not map to a registered file", fad); return 0; }
    unsigned i; for (i = 0; i < g_ngd; i++) if (!g_gd[i].used) break;
    if (i == g_ngd) { hle_log("[io] out of fake gdFs handles (%u)", g_ngd); return 0; }
    int fd = open(g_reg[id].path, O_RDONLY);
    if (fd < 0) { hle_log("[io] open(%s): %s", g_reg[id].path, strerror(errno)); return 0; }
    g_gd[i].used = 1; g_gd[i].fd = fd; g_gd[i].reg = id;
    uint32_t h = gd_addr(i);
    for (uint32_t o = 0; o < HLE_IO_GD_STRIDE; o += 4) put32(h + o, 0);
    put32(h + G_FAD, fad); put32(h + G_NSECT, (uint32_t)nsect); put32(h + G_CUR, ((lba & ((1u << LBA_SHIFT) - 1))));
    put16(h + G_VALID, 1); put16(h + G_STAT, ST_IDLE);
    if (hle_verbose >= 2) hle_log("[io] gd open %s -> 0x%08x (%d sectors)", g_reg[id].path, h, nsect);
    return h;
}
static void gd_close(uint32_t h) {
    GdEnt *g = gd_lookup(h); if (!g) return;
    close(g->fd); g->fd = -1; g->used = 0; put16(h + G_VALID, 0);
}
/* read n sectors at the handle's current sector offset into guest buf; zero-fill past EOF like the padded last disc sector */
static void gd_do_read(uint32_t h, GdEnt *g, uint32_t cur, int32_t n, uint32_t buf) {
    uint32_t bytes = (uint32_t)n * SECTOR;
    uint8_t *tmp = malloc(bytes); if (!tmp) { hle_log("[io] OOM %u", bytes); return; }
    uint64_t off = (uint64_t)cur * SECTOR; size_t got = 0;
    while (got < bytes) { ssize_t r = pread(g->fd, tmp + got, bytes - got, (off_t)(off + got)); if (r <= 0) break; got += (size_t)r; }
    if (got < bytes) memset(tmp + got, 0, bytes - got);
    guest_write(buf, tmp, bytes); free(tmp);
    put32(h + G_CUR, cur + (uint32_t)n); put32(h + G_XFER, bytes); put32(h + G_REQN, (uint32_t)n);
    put16(h + G_STAT, ST_DONE);
}
/* mirrors FUN_8C0CE968. enforce_align=0 for the wrapper (the real wrapper would spin forever on a misaligned buffer) */
static int32_t gd_reqrd(uint32_t h, int32_t nsect, uint32_t buf, int enforce_align) {
    GdEnt *g = gd_lookup(h); if (!g) return -10;
    if (buf & 31) { if (enforce_align) return -14; hle_log("[io] WARNING unaligned DMA buffer 0x%08x (real gdFs returns -14, wrapper would hang)", buf); }
    uint32_t fad = LD32(h + G_FAD), len = LD32(h + G_NSECT), cur = LD32(h + G_CUR);
    if (cur >= len) { put32(h + G_XFER, 0); put16(h + G_STAT, ST_DONE); return 0; }
    if (nsect > 0 && (uint32_t)nsect > len - cur) nsect = (int32_t)(len - cur);
    (void)fad;
    if (nsect <= 0) { put32(h + G_XFER, 0); put16(h + G_STAT, ST_DONE); return 0; }
    put16(h + G_ST2, 1);
    gd_do_read(h, g, cur, nsect, buf);          /* completes synchronously: status is already DONE when the guest polls */
    return nsect;
}

/* ---------------------------------------------------------------- FileMng hooks */
void hle_io_h_open(SH4Ctx *c) {
    uint32_t pname = R(4), pdir = R(5), slot = R(6);
    const char *name = pname ? hle_cstr(pname) : 0, *dir = pdir ? hle_cstr(pdir) : 0; char host[1024];
    if (!name || hle_io_resolve(dir, name, host, sizeof host)) {
        if (hle_verbose) hle_log("[io] open FAIL dir='%s' name='%s'", dir ? dir : "", name ? name : "(null)");
        R(0) = 0xFFFFFFFFu; return;
    }
    uint32_t size = reg_size(host); int id = reg_find(host, size);
    uint32_t gd = id < 0 ? 0 : gd_open_range(((uint32_t)(id + 1) << LBA_SHIFT) + FAD_BIAS, (int32_t)((size + 2047) >> 11));
    put32(slot + O_GD, gd);
    put32(slot + O_SIZE, size);
    put32(slot + O_CACHELEN, SECTOR);
    put32(slot + O_CACHEOFF, 0);
    put32(slot + O_CACHEIDX, 0xFFFFFFFFu);
    put32(slot + O_CACHEBUF, (slot & 0xFFFFFFE0u) + 0x20);
    if (!gd) hle_log("[io] open: could not create gd handle for %s (real code logs FileMng.c error 9 here)", host);
    put32(slot + O_POS, 0);
    if (hle_verbose) hle_log("[io] open %s%s%s -> %s (%u bytes) slot=0x%08x gd=0x%08x", dir ? dir : "", dir ? " + " : "", name, host, size, slot, gd);
    R(0) = 0;
}

void hle_io_h_read_async(SH4Ctx *c) {
    uint32_t slot = R(4), buf = R(6); int32_t size = (int32_t)R(5);
    int32_t n = size < 0 ? size + 2047 : size; n >>= 11;
    int32_t r = gd_reqrd(LD32(slot + O_GD), n, buf, 0);
    if (r < 1) hle_log("[io] async read: nothing started (ret %d, size %d); real wrapper would spin here", r, size);
    R(0) = (uint32_t)r;
}

void hle_io_h_poll(SH4Ctx *c) {
    uint32_t gd = LD32(R(4) + O_GD); GdEnt *g = gd_lookup(gd);
    R(0) = (g && LD16(gd + G_STAT) == ST_DONE) ? 1 : 0;           /* FUN_8C0CEC88 returns -10 when invalid; (r == 1) */
}

void hle_io_h_read_block(SH4Ctx *c) {
    uint32_t slot = R(4), buf = R(6); int32_t want = (int32_t)R(5);
    int32_t pos = (int32_t)LD32(slot + O_POS), size = (int32_t)LD32(slot + O_SIZE);
    uint32_t gd = LD32(slot + O_GD); GdEnt *g = gd_lookup(gd);
    if (!(pos < size) || want == 0 || !g) { R(0) = 0; return; }
    int32_t n = size - pos; if (want < n) n = want;
    uint8_t *tmp = malloc((size_t)n); if (!tmp) { R(0) = 0; return; }
    size_t got = 0;
    while (got < (size_t)n) { ssize_t r = pread(g->fd, tmp + got, (size_t)n - got, (off_t)pos + (off_t)got); if (r <= 0) break; got += (size_t)r; }
    if (got < (size_t)n) memset(tmp + got, 0, (size_t)n - got);
    guest_write(buf, tmp, (uint32_t)n); free(tmp);
    pos += n;
    put32(slot + O_POS, (uint32_t)pos);
    put32(slot + O_CACHEIDX, 0xFFFFFFFFu);                         /* no sector cache is ever kept */
    put32(gd + G_CUR, ((uint32_t)pos + 2047) >> 11);               /* gd cursor follows, as the real sector reads would */
    put16(gd + G_STAT, ST_DONE);
    R(0) = (uint32_t)n;
}

void hle_io_h_close(SH4Ctx *c) {
    uint32_t slot = R(4);
    for (uint32_t i = 0; i < SLOT_COUNT; i++) if (slot == (uint32_t)(SLOT_BASE + i * SLOT_STRIDE)) { put32(SLOT_FLAGS + 4 * i, 0); break; }
    if (slot == 0) { R(0) = 0xFFFFFFFFu; return; }
    gd_close(LD32(slot + O_GD));
    R(0) = 0;
}

/* ---------------------------------------------------------------- DirMng lookups -> synthetic directory entries */
static uint32_t dirent_for(const char *host) {
    uint32_t size = reg_size(host); int id = reg_find(host, size); if (id < 0 || !g_ndir) return 0;
    unsigned slot = g_ndir, lru = 0;
    for (unsigned i = 0; i < g_ndir; i++) {
        if (g_dir[i].stamp && g_dir[i].reg == id) { slot = i; break; }
        if (g_dir[i].stamp < g_dir[lru].stamp) lru = i;
    }
    if (slot == g_ndir) {
        slot = lru; if (g_dir[slot].stamp) hle_log("[io] synthetic dirent table full (%u), recycling slot %u", g_ndir, slot);
        g_dir[slot].reg = id;
    }
    g_dir[slot].stamp = ++g_stamp;
    uint32_t e = g_dir_base + slot * 0x2C;
    for (uint32_t o = 0; o < 0x2C; o += 4) put32(e + o, 0);
    put32(e + 0, (uint32_t)(id + 1) << LBA_SHIFT);                 /* lba (the game adds 150 before calling gdFs) */
    put32(e + 4, size);
    ST8(e + 8, 0);                                                  /* flag 0 = file */
    const char *base = strrchr(host, '/'); base = base ? base + 1 : host;
    for (int i = 0; i < 31 && base[i]; i++) ST8(e + 10 + i, (uint8_t)base[i]);
    return e;
}
void hle_io_h_dir_find(SH4Ctx *c) {
    const char *name = R(4) ? hle_cstr(R(4)) : 0, *dir = R(5) ? hle_cstr(R(5)) : 0; char host[1024];
    if (!name || hle_io_resolve(dir, name, host, sizeof host)) { R(0) = 0; return; }
    R(0) = dirent_for(host);
}
void hle_io_h_dir_find_path(SH4Ctx *c) {
    const char *path = R(4) ? hle_cstr(R(4)) : 0; char host[1024];
    if (!path || hle_io_resolve(0, path, host, sizeof host)) { if (hle_verbose) hle_log("[io] dir lookup FAIL '%s'", path ? path : ""); R(0) = 0; return; }
    R(0) = dirent_for(host);
}

/* ---------------------------------------------------------------- gdFs entry points */
void hle_io_h_gd_open_range(SH4Ctx *c) { R(0) = gd_open_range(R(4), (int32_t)R(5)); }
void hle_io_h_gd_reqrd(SH4Ctx *c) { R(0) = (uint32_t)gd_reqrd(R(4), (int32_t)R(5), R(6), 1); }
void hle_io_h_gd_seek(SH4Ctx *c) {
    uint32_t h = R(4); int32_t off = (int32_t)R(5), whence = (int32_t)R(6), pos;
    if (!gd_lookup(h)) { R(0) = (uint32_t)-10; return; }
    int32_t len = (int32_t)LD32(h + G_NSECT);
    switch (whence) { case 0: pos = off; break; case 1: pos = (int32_t)LD32(h + G_CUR) + off; break; case 2: pos = off + len; break;
                      default: R(0) = (uint32_t)-16; return; }
    if (pos < 0 || pos > len) { R(0) = (uint32_t)-17; return; }
    put32(h + G_CUR, (uint32_t)pos); R(0) = 0;
}
void hle_io_h_gd_read(SH4Ctx *c) {
    uint32_t h = R(4); GdEnt *g = gd_lookup(h); if (!g) { R(0) = (uint32_t)-10; return; }
    gd_reqrd(h, (int32_t)R(5), R(6), 0);
    R(0) = 0;
}
void hle_io_h_gd_abort(SH4Ctx *c) { R(0) = gd_lookup(R(4)) ? 0 : (uint32_t)-10; }   /* requests complete synchronously: nothing to abort */
void hle_io_h_gd_close(SH4Ctx *c) { gd_close(R(4)); R(0) = 0; }

void hle_io_h_dirmng_init_noop(SH4Ctx *c) { (void)c; }

/* ---------------------------------------------------------------- registration */
void hle_io_init(const char *dcdata_root) {
    hle_io_set_root(dcdata_root);
    for (int i = 0; i < MAX_GD; i++) g_gd[i].fd = -1;
    hle_hook(0x8C0128BE, hle_io_h_open);
    hle_hook(0x8C012B02, hle_io_h_read_async);
    hle_hook(0x8C012B60, hle_io_h_poll);
    hle_hook(0x8C012B78, hle_io_h_read_block);
    hle_hook(0x8C012ACC, hle_io_h_close);
    hle_hook(0x8C0429D2, hle_io_h_dir_find);
    hle_hook(0x8C042B96, hle_io_h_dir_find_path);
    hle_hook(0x8C0CEFE8, hle_io_h_gd_open_range);
    hle_hook(0x8C0CE968, hle_io_h_gd_reqrd);
    hle_hook(0x8C0CE75E, hle_io_h_gd_seek);
    hle_hook(0x8C0CE802, hle_io_h_gd_read);
    hle_hook(0x8C0CECB6, hle_io_h_gd_abort);
    hle_hook(0x8C0CE6D8, hle_io_h_gd_close);
    const char *e = getenv("R2_IO_SKIP_DIRMNG");
    if (e && *e == '1') hle_hook(0x8C0427C0, hle_io_h_dirmng_init_noop);
    hle_log("[io] root=%s; FileMng/DirMng-lookup/gdFs hooks installed", g_root);
}
