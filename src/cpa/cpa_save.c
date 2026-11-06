/* cpa_save: see cpa_save.h. Portable C99, no I/O. */
#include "cpa_save.h"
#include <string.h>

uint16_t cpa_save_crc16(const uint8_t *f, size_t n) {
    uint32_t crc = 0;
    for (size_t i = 0; i < n; i++) {
        uint32_t b = (i == CPA_SAVE_OFF_CRC || i == CPA_SAVE_OFF_CRC + 1) ? 0u : f[i];
        crc ^= b << 8;
        for (int k = 0; k < 8; k++) crc = (crc & 0x8000u) ? ((crc << 1) ^ 0x1021u) & 0xFFFFu : (crc << 1) & 0xFFFFu;
    }
    return (uint16_t)crc;
}

void cpa_save_scramble(uint8_t *buf, size_t n) {
    uint32_t s = 0x224896EBu;
    for (size_t i = 0; i < n; i++) {
        int32_t sv = (int32_t)s;
        buf[i] ^= (uint8_t)((sv >> 12) & 0xFF);       /* arithmetic shift, like the SH-4 original */
        s *= 0x3A41C471u;
    }
}

uint32_t cpa_save_sum(const uint8_t *p, size_t n) { uint32_t s = 0; for (size_t i = 0; i < n; i++) s += p[i]; return s; }

static uint16_t rd16(const uint8_t *p) { return (uint16_t)(p[0] | (p[1] << 8)); }
static uint32_t rd32(const uint8_t *p) { return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24); }
static void wr16(uint8_t *p, uint16_t v) { p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); }
static void wr32(uint8_t *p, uint32_t v) { p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); p[2] = (uint8_t)(v >> 16); p[3] = (uint8_t)(v >> 24); }

static void text(char *dst, const uint8_t *src, size_t n) {
    size_t e = n; while (e && (src[e - 1] == ' ' || src[e - 1] == 0)) e--;
    memcpy(dst, src, e); dst[e] = 0;
}

static size_t eyecatch_bytes(unsigned t) { switch (t) { case 0: return 0; case 1: return 8064; case 2: return 4032; case 3: return 2016; default: return (size_t)-1; } }

int cpa_save_inspect(const uint8_t *f, size_t len, CpaSaveInfo *in) {
    if (!f || !in) return CPA_SAVE_E_ARG;
    memset(in, 0, sizeof *in); in->fileLen = len;
    if (len < CPA_SAVE_HDR_FIXED) return CPA_SAVE_E_SHORT;
    text(in->vmDesc, f, 16); text(in->dcDesc, f + 16, 32); text(in->appId, f + 48, 16);
    in->nIcons = rd16(f + 0x40); in->animSpeed = rd16(f + 0x42); in->eyecatch = rd16(f + 0x44);
    in->crcStored = rd16(f + CPA_SAVE_OFF_CRC); in->dataSize = rd32(f + CPA_SAVE_OFF_DSIZE);
    size_t ey = eyecatch_bytes(in->eyecatch);
    if (in->nIcons > 3 || ey == (size_t)-1) return CPA_SAVE_E_HEADER;
    in->hdrLen = CPA_SAVE_HDR_FIXED + (size_t)in->nIcons * 512 + ey;
    if (in->dataSize > 0x10000u) return CPA_SAVE_E_HEADER;
    if (len < in->hdrLen + in->dataSize) return CPA_SAVE_E_SHORT;
    in->crcComputed = cpa_save_crc16(f, in->hdrLen + in->dataSize);
    in->padZero = 1;
    for (size_t i = in->hdrLen + in->dataSize; i < len; i++) if (f[i]) { in->padZero = 0; break; }
    return in->crcComputed == in->crcStored ? CPA_SAVE_OK : CPA_SAVE_E_CRC;
}

int cpa_save_parse(const uint8_t *f, size_t len, CpaSaveInfo *in, uint8_t *payload, size_t cap, size_t *plen) {
    CpaSaveInfo tmp; if (!in) in = &tmp;
    int rc = cpa_save_inspect(f, len, in);
    if (rc != CPA_SAVE_OK && rc != CPA_SAVE_E_CRC) return rc;
    if (in->dataSize < 4) return CPA_SAVE_E_SIZE;
    size_t pl = in->dataSize - 4;
    if (cap < pl || !payload) return CPA_SAVE_E_SIZE;
    memcpy(payload, f + in->hdrLen, pl);
    /* scramble covers plain || sum: decode the sum separately with the continuing key stream */
    uint8_t *work = payload; uint8_t sum[4]; memcpy(sum, f + in->hdrLen + pl, 4);
    uint32_t s = 0x224896EBu;
    for (size_t i = 0; i < pl + 4; i++) {
        uint8_t k = (uint8_t)(((int32_t)s >> 12) & 0xFF); s *= 0x3A41C471u;
        if (i < pl) work[i] ^= k; else sum[i - pl] ^= k;
    }
    if (plen) *plen = pl;
    if (rc != CPA_SAVE_OK) return rc;
    return rd32(sum) == cpa_save_sum(payload, pl) ? CPA_SAVE_OK : CPA_SAVE_E_SUM;
}

int cpa_save_build(const uint8_t *hdr, size_t hdrLen, const uint8_t *payload, size_t plen, uint8_t *out, size_t cap, size_t *outLen) {
    if (!hdr || !payload || !out || hdrLen < CPA_SAVE_HDR_FIXED || hdrLen > CPA_SAVE_HDR_MAX) return CPA_SAVE_E_ARG;
    size_t used = hdrLen + plen + 4, total = (used + CPA_SAVE_BLOCK - 1) / CPA_SAVE_BLOCK * CPA_SAVE_BLOCK;
    if (cap < total) return CPA_SAVE_E_SIZE;
    memset(out, 0, total);
    memcpy(out, hdr, hdrLen);
    wr16(out + CPA_SAVE_OFF_CRC, 0); wr32(out + CPA_SAVE_OFF_DSIZE, (uint32_t)(plen + 4));
    memcpy(out + hdrLen, payload, plen);
    wr32(out + hdrLen + plen, cpa_save_sum(payload, plen));
    cpa_save_scramble(out + hdrLen, plen + 4);
    wr16(out + CPA_SAVE_OFF_CRC, cpa_save_crc16(out, used));
    if (outLen) *outLen = total;
    return CPA_SAVE_OK;
}

void cpa_save_set_vmdesc(uint8_t *hdr, const char *s) {
    size_t i = 0; for (; s[i] && i < 16; i++) hdr[i] = (uint8_t)s[i];
    for (; i < 16; i++) hdr[i] = ' ';
}

int cpa_save_cfg_decode(const uint8_t *p, size_t n, CpaSaveCfg *o) {
    if (!p || !o || n != CPA_SAVE_CFG_PAYLOAD) return CPA_SAVE_E_SIZE;
    for (int i = 0; i < 9; i++) o->d[i] = rd32(p + 4 * i);
    o->trailer = p[36];
    return CPA_SAVE_OK;
}

int cpa_save_cfg_encode(const CpaSaveCfg *c, uint8_t *p, size_t cap) {
    if (!c || !p || cap < CPA_SAVE_CFG_PAYLOAD) return CPA_SAVE_E_SIZE;
    for (int i = 0; i < 9; i++) wr32(p + 4 * i, c->d[i]);
    p[36] = c->trailer;
    return CPA_SAVE_OK;
}

/* VERIFIED: produced by walking the guest's persistent-variable list (0x8C2D4074) in a RAM dump and re-checked by the oracle run in test_cpa_save --oracle. */
const CpaSaveVar cpa_save_sai_vars[CPA_SAVE_SAI_COUNT] = {
{0,1,0x1084,0x8cd60eafu},{1,1,0x1084,0x8cd60eaeu},{2,1,0x1084,0x8cd60eadu},{3,4,0x3084,0x8cd9548cu},
{7,4,0x3084,0x8cd95488u},{11,4,0x3084,0x8cd95484u},{15,4,0x3084,0x8cd95480u},{19,1,0x1084,0x8cd9562du},
{20,1,0x1084,0x8cd9562eu},{21,4,0x3084,0x8cd95450u},{25,4,0x3084,0x8cd9544cu},{29,4,0x3084,0x8cd95448u},
{33,4,0x3084,0x8cd95444u},{37,4,0x3084,0x8cd95440u},{41,4,0x3084,0x8cd9543cu},{45,4,0x3084,0x8cd95438u},
{49,4,0x3084,0x8cd95434u},{53,4,0x3084,0x8cd95430u},{57,4,0x3084,0x8cd9542cu},{61,4,0x3084,0x8cd95428u},
{65,4,0x3084,0x8cd95424u},{69,4,0x3084,0x8cd95420u},{73,4,0x3084,0x8cd9541cu},{77,4,0x3084,0x8cd95418u},
{81,4,0x3084,0x8cd95414u},{85,4,0x3084,0x8cd95410u},{89,4,0x3084,0x8cd9540cu},{93,4,0x3084,0x8cd95408u},
{97,4,0x3084,0x8cd95404u},{101,4,0x3084,0x8cd95400u},{105,4,0x3084,0x8cd953fcu},{109,4,0x3084,0x8cd953f8u},
{113,4,0x3084,0x8cd953f4u},{117,4,0x3084,0x8cd953f0u},{121,4,0x3084,0x8cd953ecu},{125,4,0x3084,0x8cd953e8u},
{129,4,0x3084,0x8cd953e4u},{133,4,0x3084,0x8cd953e0u},{137,4,0x3084,0x8cd953dcu},{141,4,0x3084,0x8cd953d8u},
{145,4,0x3084,0x8cd953d4u},{149,4,0x3084,0x8cd953d0u},{153,4,0x3084,0x8cd953ccu},{157,4,0x3084,0x8cd953c8u},
{161,4,0x3084,0x8cd953c4u},{165,4,0x3084,0x8cd953c0u},{169,4,0x3084,0x8cd953bcu},{173,4,0x3084,0x8cd953b8u},
{177,4,0x3084,0x8cd953b4u},{181,4,0x3084,0x8cd953b0u},{185,4,0x3084,0x8cd953acu},{189,4,0x3084,0x8cd953a8u},
{193,4,0x3084,0x8cd953a4u},{197,4,0x3084,0x8cd953a0u},{201,4,0x3084,0x8cd9539cu},{205,4,0x3084,0x8cd95398u},
{209,4,0x3084,0x8cd95394u},{213,4,0x3084,0x8cd95390u},{217,4,0x3084,0x8cd9538cu},{221,4,0x3084,0x8cd95310u},
{225,1,0x8084,0x8cd95636u},{226,1,0x8084,0x8cd9562bu},{227,1,0x8084,0x8cd9562au}
};

uint32_t cpa_save_slot_var(const uint8_t *p, unsigned i) {
    if (i >= CPA_SAVE_SAI_COUNT) return 0;
    const CpaSaveVar *v = &cpa_save_sai_vars[i];
    return v->size == 4 ? rd32(p + v->off) : p[v->off];
}

void cpa_save_slot_set_var(uint8_t *p, unsigned i, uint32_t x) {
    if (i >= CPA_SAVE_SAI_COUNT) return;
    const CpaSaveVar *v = &cpa_save_sai_vars[i];
    if (v->size == 4) wr32(p + v->off, x); else p[v->off] = (uint8_t)x;
}

int cpa_save_slot_is_default(const uint8_t *p, size_t n) {
    if (n != CPA_SAVE_SLOT_PAYLOAD) return 0;
    for (size_t i = 0; i < n; i++) if (p[i]) return 0;
    return 1;
}
