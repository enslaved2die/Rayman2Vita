/* test_tex: native PVR texture decode (src/cpa/cpa_tex.c) against the oracle.
 *
 *   test_tex --cap CAPDIR --dcdata ASSETS/DCDATA --level Learn_10 [--dump DIR]
 *
 * CAPDIR = a ta_capture output (tools/cpa_tests/ta.mk "ta-capture"): ram_<n>.bin (guest RAM), f<n>/{vram.bin,pvrregs.bin,frame.bin}.
 *
 * Ground truth: the guest's own texture path. FUN_8c03a502 creates one 0x20-byte Kamui surface descriptor per texture (texture struct +0), kmLoadTexture copies the .TEX chunk's
 * texel data (block+0x20) into texture memory at desc[7]. The oracle's TA texture decoder (tools/sh4recomp/hle/ta.c ta_tex_decode, the decoder behind every frame the host
 * renders) turns that texture memory into RGBA with the tcw/tsp the draw calls use. Per texture this test
 *   (1) compares the raw texture memory with the .TEX chunk's texel data   (byte level: did the guest copy exactly this chunk, unmodified?)
 *   (2) decodes every mip level natively from the .TEX chunk (cpa_tex.c) and compares with ta_tex_decode on the VRAM image: byte-exact RGBA
 *       (the oracle's host decode applies cpa_tex_bleed to transparent texels; the native output is compared after cpa_tex_bleed, and RAW with transparent-texel RGB ignored)
 *   (3) checks the descriptor mapping tcw = f(desc) against the tcw words of the strips in the captured TA scene.
 *   (4) independent plausibility of mip levels >= 1 (2x2 box average of the level below), mip data length vs the PVRT size field.
 * Exit status 0 iff no texture mismatched. */
#include "../../src/cpa/cpa_tex.h"
#include "../../src/cpa/cpa_scene.h"
#include "../sh4recomp/hle/ta.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

static uint8_t *rd_file(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL;
    fseek(f, 0, SEEK_END); long s = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = (uint8_t *)malloc((size_t)s + 1);
    if (!b || fread(b, 1, (size_t)s, f) != (size_t)s) { fclose(f); free(b); return NULL; }
    fclose(f); *n = (size_t)s; return b;
}
static uint32_t U32(const uint8_t *p) { return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24); }
static int fails;
#define CHECK(c, ...) do { if (!(c)) { fails++; printf("FAIL: "); printf(__VA_ARGS__); printf("\n"); } } while (0)

/* per (pixFmt,dataFmt) statistics */
typedef struct Stat { uint32_t key, tex, rawBytesSame, rawBytesDiff, vramChanged, exactL0, exactAll, exactRawAll, texelsCmp, texelsBad, lvlCmp, lvlBad, lenExact, lenPad, lenShort; } Stat;
static Stat st[16]; static int nst;
static Stat *stat_for(uint32_t key) { for (int i = 0; i < nst; i++) if (st[i].key == key) return &st[i]; st[nst].key = key; return &st[nst++]; }

typedef struct Known { uint32_t vram, w, h, tcw, tsp, va, descVa; const char *src; } Known;
static Known known[2048]; static int nknown;

int main(int argc, char **argv) {
    const char *cap = NULL, *dc = NULL, *level = "Learn_10", *dump = NULL;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--cap") && i + 1 < argc) cap = argv[++i];
        else if (!strcmp(argv[i], "--dcdata") && i + 1 < argc) dc = argv[++i];
        else if (!strcmp(argv[i], "--level") && i + 1 < argc) level = argv[++i];
        else if (!strcmp(argv[i], "--dump") && i + 1 < argc) dump = argv[++i];
        else { fprintf(stderr, "unknown arg %s\n", argv[i]); return 2; }
    }
    if (!cap || !dc) { fprintf(stderr, "usage: test_tex --cap CAPDIR --dcdata DCDATA --level NAME [--dump DIR]\n"); return 2; }
    char lv[64]; snprintf(lv, sizeof lv, "%s", level); for (char *c = lv; *c; c++) if (*c >= 'a' && *c <= 'z') *c -= 32;
    char p[1024];

    /* --- capture files: newest ram_<n>.bin and the f<n> directory --- */
    char ramPath[1024] = "", fdir[1024] = ""; unsigned long best = 0, fno = 0;
    { DIR *d = opendir(cap); struct dirent *e; if (!d) { fprintf(stderr, "cannot open %s\n", cap); return 2; }
      while ((e = readdir(d))) { unsigned long k; if (sscanf(e->d_name, "ram_%lu.bin", &k) == 1 && k >= best) { best = k; snprintf(ramPath, sizeof ramPath, "%s/%s", cap, e->d_name); }
                                 if (sscanf(e->d_name, "f%lu", &k) == 1 && e->d_name[0] == 'f' && k >= fno) { fno = k; snprintf(fdir, sizeof fdir, "%s/%s", cap, e->d_name); } }
      closedir(d); }
    size_t ramN = 0, vramN = 0, regN = 0, frN = 0;
    uint8_t *ram = rd_file(ramPath, &ramN);
    snprintf(p, sizeof p, "%s/vram.bin", fdir); uint8_t *vram = rd_file(p, &vramN);
    snprintf(p, sizeof p, "%s/pvrregs.bin", fdir); uint8_t *regs = rd_file(p, &regN);
    snprintf(p, sizeof p, "%s/frame.bin", fdir); uint8_t *fr = rd_file(p, &frN);
    if (!ram || !vram || !regs || !fr || ramN != 16u << 20 || vramN != 8u << 20 || regN < 4 * 1040) { fprintf(stderr, "capture incomplete in %s (ram %s)\n", cap, ramPath); return 2; }
    TaTexEnv env; uint32_t pal[1024]; memcpy(pal, regs, sizeof pal);
    env.pal = pal; env.pal_ctrl = U32(regs + 4 * 1024); env.text_control = U32(regs + 4 * 1025);

    /* --- game files --- */
    snprintf(p, sizeof p, "%s/%s/%s.DAT", dc, lv, lv); size_t datN; uint8_t *dat = rd_file(p, &datN);
    snprintf(p, sizeof p, "%s/%s/%s.TEX", dc, lv, lv); size_t texN; uint8_t *tex = rd_file(p, &texN);
    snprintf(p, sizeof p, "%s/FIX.DAT", dc); size_t fixN; uint8_t *fix = rd_file(p, &fixN);
    snprintf(p, sizeof p, "%s/FIX.TEX", dc); size_t fxtN; uint8_t *fxt = rd_file(p, &fxtN);
    if (!dat || !tex || !fix || !fxt) { fprintf(stderr, "missing game files under %s\n", dc); return 2; }

    CpaImage img; cpa_image_init(&img);
    CHECK(cpa_image_add_dat(&img, CPA_DAT_LEVEL, dat, datN) && cpa_image_add_dat(&img, CPA_DAT_FIX, fix, fixN), "DAT images");
    CpaTexInfo *ti = NULL; uint32_t nti = 0;
    CHECK(cpa_tex_table(&img, tex, texN, &ti, &nti), "cpa_tex_table (level)");
    CpaTexBank bank[2] = { { 0, 0 }, { 0, 0 } };
    CHECK(cpa_texbank_load(tex, texN, &bank[0]), "cpa_texbank_load level: every chunk has a supported PVRT header");
    CHECK(cpa_texbank_load(fxt, fxtN, &bank[1]), "cpa_texbank_load FIX: every chunk has a supported PVRT header");
    CHECK(bank[0].n == nti, "level chunk count %u == table %u", bank[0].n, nti);
    { uint32_t *va = (uint32_t *)malloc(4 * (nti + 1)); for (uint32_t i = 0; i < nti; i++) va[i] = ti[i].structVa; if (nti == bank[0].n) cpa_texbank_set_vas(&bank[0], va, nti); free(va); }
    uint32_t fixVa[4096]; uint32_t nfix = cpa_tex_fix_table(fix, fixN, fixVa, 4096);
    CHECK(nfix == 280 && nfix == bank[1].n, "FIX table count %u, chunks %u", nfix, bank[1].n);
    if (nfix == bank[1].n) cpa_texbank_set_vas(&bank[1], fixVa, nfix);
    for (uint32_t i = 0; i < nti && i < bank[0].n; i++) CHECK(bank[0].c[i].info.raw == ti[i].raw && bank[0].c[i].info.w == ti[i].width && bank[0].c[i].info.h == ti[i].height, "chunk %u header differs from cpa_tex_table", i);

    uint32_t maxPix = 512 * 512;
    uint32_t *nat = (uint32_t *)malloc(4u * maxPix), *ora = (uint32_t *)malloc(4u * maxPix), *nb = (uint32_t *)malloc(4u * maxPix);
    uint32_t nTotal = 0, nNoDesc = 0, nDimBad = 0, boxN = 0, boxNV = 0; double boxErr = 0, boxErrV = 0;
    uint32_t mipLenHist[3] = { 0, 0, 0 }, padSeen[8], nPadSeen = 0;
    char firstBad[8][160]; int nbad = 0;

    for (int which = 0; which < 2; which++) {
        for (uint32_t i = 0; i < bank[which].n; i++) {
            const CpaTexChunk *c = &bank[which].c[i];
            nTotal++;
            uint32_t sOff = c->structVa & 0xFFFFFF;
            if ((c->structVa >> 24) != 0x8C || sOff + 0x40 > ramN) { nNoDesc++; continue; }
            uint32_t dVa = U32(ram + sOff), dOff = dVa & 0xFFFFFF;
            if ((dVa >> 24) != 0x8C || dOff + 0x20 > ramN) { nNoDesc++; continue; }
            uint32_t d[8]; for (int k = 0; k < 8; k++) d[k] = U32(ram + dOff + 4 * k);
            const CpaPvrInfo *in = &c->info;
            uint32_t key = (uint32_t)in->pixFmt << 8 | in->dataFmt;
            Stat *S = stat_for(key); S->tex++;
            if (d[3] != in->w || d[4] != in->h) { nDimBad++; CHECK(0, "%s tex %u desc size %ux%u != chunk %ux%u", which ? "FIX" : level, i, d[3], d[4], in->w, in->h); continue; }
            uint32_t tcw = cpa_desc_tcw(d[2], d[6], d[7]), tsp = cpa_desc_tsp_size(d[6]);
            { int tw, th; ta_tex_size(tsp, &tw, &th); CHECK(tw == in->w && th == in->h, "tex %u tsp size field %ux%u != %ux%u", i, tw, th, in->w, in->h); }
            CHECK(((tcw >> 31) & 1) == in->mip && ((tcw >> 30) & 1) == in->vq && ((tcw >> 27) & 7) == in->pixFmt, "tex %u tcw flags %08x vs chunk fmt %04x", i, tcw, (unsigned)key);
            if (nknown < 2048) { Known *k = &known[nknown++]; k->vram = d[7]; k->w = in->w; k->h = in->h; k->tcw = tcw; k->tsp = tsp; k->va = c->structVa; k->descVa = dVa; k->src = which ? "FIX" : level; }
            /* (1) raw texture memory vs chunk data */
            /* twiddled 16bpp mip: the guest loader places the file data 4 bytes into the surface (the 1x1 level sits at +6 in texture memory, +2 in the file) */
            { uint32_t len = in->needLen, sh = (in->mip && !in->vq && !in->pal) ? 4 : 0; int same = d[7] + sh + len <= vramN && !memcmp(vram + d[7] + sh, c->blk + in->dataOff, len);
              if (same) S->rawBytesSame++; else { S->vramChanged++; printf("  note: %s tex %u (struct %08x, fmt %04x, vram %06x) texture memory differs from the chunk data (overwritten after load)\n", which ? "FIX" : level, i, c->structVa, (unsigned)key, d[7]); }
              (void)len; if (!same) continue; }   /* VRAM was overwritten after the load: the oracle image no longer shows this texture */
            /* data length vs PVRT size field (size counts from after the size field: 8 header bytes + data) */
            { uint32_t sz = U32(c->blk + in->pvrtOff + 4), dl = sz >= 8 ? sz - 8 : 0; if (dl == in->needLen) { S->lenExact++; mipLenHist[0]++; } else if (dl > in->needLen) { S->lenPad++; mipLenHist[1]++; if (nPadSeen < 6) padSeen[nPadSeen++] = dl - in->needLen; } else { S->lenShort++; mipLenHist[2]++; } }
            /* (2) all levels */
            int allExact = 1, allRaw = 1;
            for (uint32_t lv2 = 0; lv2 < in->nLevels; lv2++) {
                uint32_t w, h; cpa_pvr_level_size(in, lv2, &w, &h);
                int rc = cpa_pvr_decode(in, c->blk, c->len, NULL, lv2, nat);
                CHECK(rc == 0, "tex %u level %u decode rc=%d", i, lv2, rc);
                if (rc) { allExact = allRaw = 0; continue; }
                ta_tex_decode(vram, (uint32_t)vramN, tcw, tsp, &env, (int)lv2, 0, ora);
                memcpy(nb, nat, 4u * w * h); cpa_tex_bleed(nb, w, h);
                uint32_t bad = 0, badRaw = 0;
                for (uint32_t t = 0; t < w * h; t++) {
                    if (nb[t] != ora[t]) bad++;
                    if ((nat[t] >> 24) != (ora[t] >> 24) || ((nat[t] >> 24) && nat[t] != ora[t])) badRaw++;
                }
                S->texelsCmp += w * h; S->texelsBad += bad; S->lvlCmp++; S->lvlBad += bad != 0;
                if (bad) allExact = 0;
                if (badRaw) allRaw = 0;
                if (lv2 == 0) S->exactL0 += bad == 0;
                if (bad && nbad < 8) { snprintf(firstBad[nbad++], 160, "%s tex %u fmt %04x level %u %ux%u: %u of %u texels differ (first native %08x oracle %08x)", which ? "FIX" : level, i, (unsigned)key, lv2, w, h, bad, w * h, 0u, 0u);
                                       for (uint32_t t = 0; t < w * h; t++) if (nb[t] != ora[t]) { snprintf(firstBad[nbad - 1], 160, "%s tex %u fmt %04x level %u %ux%u: %u of %u texels differ (texel %u native %08x oracle %08x)", which ? "FIX" : level, i, (unsigned)key, lv2, w, h, bad, w * h, t, nb[t], ora[t]); break; } }
                /* (4) mip plausibility: level k vs 2x2 box average of level k-1 (native only) */
                if (lv2 > 0) {
                    uint32_t pw, ph; cpa_pvr_level_size(in, lv2 - 1, &pw, &ph);
                    uint32_t *prev = (uint32_t *)malloc(4u * pw * ph);
                    if (prev && !cpa_pvr_decode(in, c->blk, c->len, NULL, lv2 - 1, prev)) {
                        double e = 0; uint32_t cnt = 0;
                        for (uint32_t y = 0; y < h; y++) for (uint32_t x = 0; x < w; x++) {
                            if (w < 4) continue;
                            for (int ch = 0; ch < 3; ch++) { uint32_t s = 0; for (int q = 0; q < 4; q++) s += (prev[(2 * y + (q >> 1)) * pw + 2 * x + (q & 1)] >> (8 * ch)) & 255; double dd = (double)s / 4 - (double)((nat[y * w + x] >> (8 * ch)) & 255); e += dd < 0 ? -dd : dd; cnt++; }
                        }
                        if (cnt) { if (in->vq) { boxErrV += e / cnt; boxNV++; } else { boxErr += e / cnt; boxN++; } }
                    }
                    free(prev);
                }
                if (dump && lv2 == 0 && which == 0 && i < 4) { char q[1100]; snprintf(q, sizeof q, "%s/%s_%u.rgba", dump, level, i); FILE *o = fopen(q, "wb"); if (o) { fwrite(nat, 4, w * h, o); fclose(o); } }
            }
            S->exactAll += allExact; S->exactRawAll += allRaw;
        }
    }

    /* (3) strips of the captured TA scene vs descriptor-derived tcw */
    uint32_t nstr = U32(fr + 4), sMatch = 0, sMis = 0, sOther = 0;
    typedef struct Oth { uint32_t tcw, tsp, list, n; } Oth; static Oth oth[64]; int noth = 0;
    for (uint32_t s = 0; s < nstr; s++) {
        const uint8_t *r = fr + 16 + 32 * s;
        uint32_t tsp = U32(r + 8), tcw = U32(r + 12), list = U32(r + 28), ctl = U32(r);
        if (!(ctl & 8)) continue;                                 /* PCW texture bit: untextured strip */
        uint32_t addr = (tcw & 0x1FFFFF) << 3; int found = -1;
        for (int k = 0; k < nknown; k++) if (known[k].vram == addr) { found = k; break; }
        if (found >= 0) {
            if (((known[found].tcw ^ tcw) & 0xF8000000u) == 0 && (known[found].tsp & 0x3F) == (tsp & 0x3F)) sMatch++;
            else { sMis++; if (sMis < 5) printf("  strip tcw %08x tsp %08x vs desc-derived tcw %08x tsp-size %02x (%s tex @%08x)\n", tcw, tsp, known[found].tcw, known[found].tsp, known[found].src, known[found].va); }
        } else {
            sOther++; int j; for (j = 0; j < noth; j++) if (oth[j].tcw == tcw && oth[j].list == list && (oth[j].tsp & 0x3F) == (tsp & 0x3F)) { oth[j].n++; break; }
            if (j == noth && noth < 64) { oth[noth].tcw = tcw; oth[noth].tsp = tsp; oth[noth].list = list; oth[noth].n = 1; noth++; }
        }
    }

    printf("== %s: %u textures (level %u + FIX %u); no descriptor %u; dimension mismatch %u\n", level, nTotal, bank[0].n, bank[1].n, nNoDesc, nDimBad);
    printf("   %-10s %6s %9s %9s %8s %8s %8s %10s %10s  %s\n", "pix|data", "tex", "memSame", "vramChg", "L0exact", "allExact", "rawExact", "texelsCmp", "texelsBad", "PVRT len: exact/pad/short");
    uint32_t tT = 0, tE = 0, tChg = 0, tR = 0;
    for (int i = 0; i < nst; i++) {
        Stat *s = &st[i];
        printf("   %02x|%02x      %6u %9u %9u %8u %8u %8u %10u %10u  %u/%u/%u\n", s->key >> 8, s->key & 255, s->tex, s->rawBytesSame, s->vramChanged, s->exactL0, s->exactAll, s->exactRawAll, s->texelsCmp, s->texelsBad, s->lenExact, s->lenPad, s->lenShort);
        tT += s->tex; tE += s->exactAll; tChg += s->vramChanged; tR += s->exactRawAll;
        CHECK(s->texelsBad == 0, "format %04x: %u texels differ", s->key, s->texelsBad);
    }
    printf("   TOTAL textures with matching texture memory %u of %u (vram overwritten/not loaded: %u): byte-exact RGBA on all levels %u, raw (transparent RGB ignored) %u\n", tT - tChg, tT, tChg, tE, tR);
    printf("   mip plausibility (level k vs 2x2 box of level k-1, native decode only): twiddled %u levels, mean abs RGB error %.2f / 255; VQ %u levels, %.2f / 255\n", boxN, boxN ? boxErr / boxN : 0.0, boxNV, boxNV ? boxErrV / boxNV : 0.0);
    printf("   strips of scene %lu: textured strips with a known texture %u match (tcw pixfmt/mip/vq + size), %u mismatch, %u other (resident / non-level textures)\n", fno, sMatch, sMis, sOther);
    /* resident non-level textures (the layer-2 overlay): decode natively from the texture-memory image through a synthetic PVRT block, compare with the oracle */
    for (int j = 0; j < noth; j++) {
        uint32_t tcw = oth[j].tcw, tsp = oth[j].tsp, addr = (tcw & 0x1FFFFF) << 3, pf = (tcw >> 27) & 7, mip = tcw >> 31, vq = (tcw >> 30) & 1;
        int tw, th; ta_tex_size(tsp, &tw, &th);
        if (vq || pf > 2) {   /* bump (4) is the only non-level format seen; 0..2 handled the same way */
            if (pf != 4 || vq) continue;
        }
        uint8_t blk[16 + 0x4000]; memset(blk, 0, sizeof blk);
        memcpy(blk, "PVRT", 4); blk[8] = (uint8_t)pf; blk[9] = mip ? 2 : 1; blk[12] = (uint8_t)tw; blk[13] = (uint8_t)(tw >> 8); blk[14] = (uint8_t)th; blk[15] = (uint8_t)(th >> 8);
        CpaPvrInfo oi; int okp = cpa_pvr_parse(blk, sizeof blk, &oi);
        CHECK(okp && oi.w == tw && oi.h == th, "overlay %08x synthetic header", tcw);
        if (!okp) continue;
        uint32_t sh = mip ? 4 : 0;
        memcpy(blk + 16, vram + addr + sh, oi.needLen);
        uint32_t zero = 0, tot = oi.needLen / 2;
        for (uint32_t t = 0; t < tot; t++) zero += blk[16 + 2 * t] == 0 && blk[17 + 2 * t] == 0;
        uint32_t badAll = 0, cmp = 0;
        for (uint32_t lv2 = 0; lv2 < oi.nLevels; lv2++) {
            uint32_t w, h; cpa_pvr_level_size(&oi, lv2, &w, &h);
            CHECK(cpa_pvr_decode(&oi, blk, sizeof blk, NULL, lv2, nat) == 0, "overlay decode");
            ta_tex_decode(vram, (uint32_t)vramN, tcw, tsp, &env, (int)lv2, 0, ora);
            memcpy(nb, nat, 4u * w * h); cpa_tex_bleed(nb, w, h);
            for (uint32_t t = 0; t < w * h; t++) badAll += nb[t] != ora[t];
            cmp += w * h;
            if (lv2 == 0 && dump) { char q[1100]; snprintf(q, sizeof q, "%s/%s_overlay_%08x.rgba", dump, level, tcw); FILE *o = fopen(q, "wb"); if (o) { fwrite(nat, 4, w * h, o); fclose(o); } }
        }
        printf("   resident bump texture tcw %08x (%ux%u, %s): %u of %u 16-bit texels are zero; native vs oracle decode: %u texels compared, %u differ\n", tcw, tw, th, mip ? "mip" : "no mip", zero, tot, cmp, badAll);
        CHECK(badAll == 0, "overlay %08x differs from oracle", tcw);
    }
    for (int j = 0; j < noth; j++) printf("     other tcw %08x tsp %08x list %u strips %u (addr %06x, pixfmt %u mip %u vq %u)\n", oth[j].tcw, oth[j].tsp, oth[j].list, oth[j].n, (oth[j].tcw & 0x1FFFFF) << 3, (oth[j].tcw >> 27) & 7, oth[j].tcw >> 31, (oth[j].tcw >> 30) & 1);
    printf("   PVRT size field minus layout length for the padded (VQ) chunks, first values:"); for (uint32_t j = 0; j < nPadSeen; j++) printf(" %u", padSeen[j]); printf("\n");
    for (int j = 0; j < nbad; j++) printf("   first mismatch: %s\n", firstBad[j]);
    CHECK(sMis == 0, "%u strips disagree with descriptor-derived tcw", sMis);
    CHECK(nNoDesc == 0 && nDimBad == 0, "descriptor lookup failures");
    printf("%s\n", fails ? "RESULT: FAIL" : "RESULT: PASS");
    return fails ? 1 : 0;
}
