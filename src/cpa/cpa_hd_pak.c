/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine)
 * File: cpa_hd_pak.c — shared HD texture pool and bank index reader (see cpa_hd_pak.h)
 * ============================================================================ */

#include "cpa_hd_pak.h"
#include <stdlib.h>
#include <string.h>

/* One pool for every bank. The loader is driven from one thread (the stager worker). */
static FILE *s_pool;
static uint32_t s_pool_bytes;
static char s_pool_path[1024];

static uint32_t rd32(const uint8_t *p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

void cpa_hd_pool_close(void) {
    if (s_pool) fclose(s_pool);
    s_pool = NULL;
    s_pool_bytes = 0;
    s_pool_path[0] = '\0';
}

bool cpa_hd_pool_open(const char *path) {
    if (!path || !path[0]) return false;
    if (s_pool && strcmp(s_pool_path, path) == 0) return true;
    cpa_hd_pool_close();

    FILE *f = fopen(path, "rb");
    if (!f) return false;
    uint8_t hdr[16];
    if (fread(hdr, 1, sizeof(hdr), f) != sizeof(hdr) ||
        rd32(hdr) != CPA_HD_POOL_MAGIC || rd32(hdr + 4) != CPA_HD_POOL_VERSION) {
        fclose(f);
        return false;
    }
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return false; }
    long total = ftell(f);
    if (total < (long)sizeof(hdr) || total > 0x7FFFFFFFL) { fclose(f); return false; }

    s_pool = f;
    s_pool_bytes = (uint32_t)total;
    snprintf(s_pool_path, sizeof(s_pool_path), "%s", path);
    return true;
}

bool cpa_hd_pak_open(CpaHdPak *p, const char *path, uint32_t expect_rows) {
    if (!p) return false;
    memset(p, 0, sizeof(*p));
    if (!path || !path[0] || !s_pool) return false;

    FILE *f = fopen(path, "rb");
    if (!f) return false;

    uint8_t hdr[16];
    if (fread(hdr, 1, sizeof(hdr), f) != sizeof(hdr) ||
        rd32(hdr) != CPA_HD_PAK_MAGIC || rd32(hdr + 4) != CPA_HD_PAK_VERSION ||
        rd32(hdr + 8) != expect_rows || rd32(hdr + 12) != s_pool_bytes) {
        fclose(f);
        return false; /* other version, another row count, or built against another pool */
    }

    size_t idx_bytes = (size_t)expect_rows * 12u;
    uint8_t *raw = (uint8_t *)malloc(idx_bytes ? idx_bytes : 1);
    CpaHdPakRow *index = (CpaHdPakRow *)malloc(sizeof(CpaHdPakRow) * (expect_rows ? expect_rows : 1));
    if (!raw || !index || (idx_bytes && fread(raw, 1, idx_bytes, f) != idx_bytes)) {
        free(raw); free(index); fclose(f);
        return false;
    }
    fclose(f);

    for (uint32_t i = 0; i < expect_rows; i++) {
        const uint8_t *r = raw + 12u * i;
        index[i].offset = rd32(r);
        index[i].size = rd32(r + 4);
        index[i].kind = rd32(r + 8);
        if (index[i].size && (uint64_t)index[i].offset + index[i].size > (uint64_t)s_pool_bytes) {
            free(raw); free(index);
            return false; /* payload outside the pool */
        }
    }
    free(raw);

    p->rows = expect_rows;
    p->index = index;
    return true;
}

void cpa_hd_pak_close(CpaHdPak *p) {
    if (!p) return;
    free(p->index);
    memset(p, 0, sizeof(*p));
}

uint8_t *cpa_hd_pak_read_row(CpaHdPak *p, uint32_t row, size_t *out_size, uint32_t *out_kind) {
    if (!p || !p->index || !s_pool || row >= p->rows) return NULL;
    const CpaHdPakRow *r = &p->index[row];
    if (!r->size) return NULL;

    uint8_t *buf = (uint8_t *)malloc(r->size);
    if (!buf) return NULL;
    if (fseek(s_pool, (long)r->offset, SEEK_SET) != 0 || fread(buf, 1, r->size, s_pool) != r->size) {
        free(buf);
        return NULL;
    }
    if (out_size) *out_size = r->size;
    if (out_kind) *out_kind = r->kind;
    return buf;
}
