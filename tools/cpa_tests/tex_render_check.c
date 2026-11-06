/* tex_render_check: asset-only check (no oracle capture) that the native render path has a REAL texture for everything it draws, for every level that has <L>/<L>.DAT + <L>.TEX.
 *   tex_render_check DCDATA_DIR [--level NAME]
 * Per level: scene (cpa_scene_load_dats) + texture store (level .TEX + FIX.TEX, post-load flags applied) + one frame with NO visibility culling (so every static batch of the level is in the
 * draw list; camera = level centre, translucent sort irrelevant here) submitted to the cpa_gl_backend on the fake vitaGL. Reported and checked:
 *   1. every scene item / sprite / rig part texture VA resolves to a store entry (missing is counted per kind),
 *   2. every textured draw of the frame resolves (CpaRenderStats.texturesMissing / drawsTexMissing) and no upload fell back to the grey placeholder,
 *   3. every uploaded pixel buffer is byte-identical (fake GL pixel hash, size) to an independent cpa_texbank_decode + cpa_tex_bleed of the same chunk,
 *   4. the flag rule: items classified by tex.flags & 0x2A -> translucent else opaque; counts per pass, layer-2 draws drawn with the substitute bump texture.
 * Exit status 0 iff nothing is missing / different. */
#include "../../src/cpa/cpa_render.h"
#include "../../src/platform/vita/cpa_gl_backend.h"
#include <dirent.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    unsigned levels, levelsFail;
    uint64_t items, itemsMissing, sprites, spritesMissing, rigParts, rigMissing, itemsUntextured;
    uint64_t draws, drawsTextured, drawsMissing, drawsLayer2, texDistinct, texMissing;
    uint64_t upl, uplSame, uplDiff, uplPlaceholder, uplBump, uplBumpSame, layer2Drawn;
    uint64_t pass[CPA_PASS_COUNT], flagOpq, flagTrn, flagAdd, flagMismatch;
} Tot;

static int check_level(const char *dc, const char *name, const uint8_t *fix, size_t fixN, const uint8_t *fxt, size_t fxtN, Tot *T, int verbose) {
    char p[1200]; uint8_t *lvl, *tex;
    size_t lvlN, texN;
    snprintf(p, sizeof p, "%s/%s/%s.DAT", dc, name, name); if (!cpa_read_file(p, &lvl, &lvlN)) return -1;
    snprintf(p, sizeof p, "%s/%s/%s.TEX", dc, name, name); if (!cpa_read_file(p, &tex, &texN)) { free(lvl); return -1; }
    CpaImage img; CpaScene sc;
    if (!cpa_scene_load_dats(&sc, &img, fix, fixN, lvl, lvlN)) { printf("%-12s scene load failed\n", name); free(lvl); free(tex); return 1; }
    CpaTexStore st; int sok = cpa_texstore_load(&st, &sc, tex, texN, fix, fixN, fxt, fxtN);
    int bad = !sok;
    uint64_t iMiss = 0, sMiss = 0, rMiss = 0, iUn = 0;
    for (uint32_t i = 0; i < sc.nItems; i++) { if (!sc.items[i].texVa) { iUn++; continue; } if (!cpa_texstore_find(&st, sc.items[i].texVa)) iMiss++; }
    for (uint32_t i = 0; i < sc.nSprites; i++) if (sc.sprites[i].texVa && !cpa_texstore_find(&st, sc.sprites[i].texVa)) sMiss++;
    for (uint32_t i = 0; i < sc.rig.nPart; i++) if (sc.rig.part[i].texVa && !cpa_texstore_find(&st, sc.rig.part[i].texVa)) rMiss++;
    /* flag rule consistency of the items after apply_tex: classify by flags independently and compare with the pass the builder gives (via the frame below) */
    CpaRenderCtx ctx; CpaRenderOpts o; cpa_render_opts_default(&o); cpa_render_ctx_init(&ctx, &sc, &o); cpa_render_ctx_set_texstore(&ctx, &st);
    CpaFrameInput in; memset(&in, 0, sizeof in);
    float c[3] = { 0.5f * (sc.bmin[0] + sc.bmax[0]), 0.5f * (sc.bmin[1] + sc.bmax[1]), 0.5f * (sc.bmin[2] + sc.bmax[2]) }, up[3] = { 0, 0, 1 }, fw[3] = { 0, 1, 0 };
    cpa_camera_from_rows(&in.cam, c, up, fw, 1.2f, 0.75f); in.w = 640; in.h = 480; in.fit = CPA_FIT_HORPLUS;
    CpaRenderFrame f; uint64_t dMiss = 0, dTex = 0, dL2 = 0, up_n = 0, up_same = 0, up_diff = 0, up_ph = 0, bump_n = 0, bump_same = 0, l2drawn = 0, mism = 0;
    if (!cpa_render_build_frame(&ctx, &f, &in)) { printf("%-12s frame build failed\n", name); bad = 1; }
    else {
        for (uint32_t d = 0; d < f.nDraws; d++) { const CpaRenderDraw *dr = &f.draws[d]; if (dr->layer) dL2++; else if (dr->texVa) dTex++;
            /* independent flag classification of the draw's texture: translucent iff flags & 0x2A (layer 2: always translucent) */
            if (!dr->layer && dr->texVa) { const CpaTexEntry *e = cpa_texstore_find(&st, dr->texVa); if (e) { int tr = (e->flags & 0x2A) != 0 || (e->flags & 0x10) != 0; if (tr != (dr->pass != CPA_PASS_OPAQUE)) mism++; } } }
        dMiss = f.st.drawsTexMissing;
        CpaGlBackend gb; CpaRenderBackend be; CpaGlConfig cfg; cpa_gl_config_default(&cfg); cpa_gl_backend_init(&gb, &cfg); cpa_gl_backend_vtable(&gb, &be);
        cpa_render_submit(&ctx, &f, &be); l2drawn = gb.drawsLayer2;
        for (int i = 0; i < CPA_GL_TEXSLOTS; i++) {
            if (!gb.tex[i].va) continue;
            unsigned id = gb.tex[i].id & 0xFFFF; uint64_t got = fgr.tex[id].pix; int gw = fgr.tex[id].w, gh = fgr.tex[id].h;
            const CpaTexEntry *e = cpa_texstore_find(&st, gb.tex[i].va);
            if (gb.tex[i].placeholder) { up_ph++; continue; }
            if (e) {
                uint32_t n = (uint32_t)e->w * e->h; uint32_t *buf = (uint32_t *)malloc(4u * n); up_n++;
                if (buf && !cpa_texbank_decode(e->bank, e->chunk, NULL, 0, buf)) { cpa_tex_bleed(buf, e->w, e->h); if (got == fgr_hash_bytes(buf, 4u * n) && gw == e->w && gh == e->h) up_same++; else up_diff++; } else up_diff++;
                free(buf);
            } else { const uint32_t *px = cpa_texstore_pixels(&st, gb.tex[i].va); bump_n++; if (px && got == fgr_hash_bytes(px, 64 * 64 * 4) && gw == 64 && gh == 64) bump_same++; }
        }
        for (int q = 0; q < CPA_PASS_COUNT; q++) T->pass[q] += f.st.drawsPass[q];
        cpa_gl_backend_shutdown(&gb);
        T->draws += f.nDraws; T->drawsTextured += dTex; T->drawsLayer2 += dL2; T->texDistinct += f.st.texturesUsed; T->texMissing += f.st.texturesMissing;
        cpa_render_frame_free(&f);
    }
    for (uint32_t i = 0; i < sc.nItems; i++) { const CpaDrawItem *d = &sc.items[i]; if (!d->texVa || !d->texFlagsValid) continue; uint32_t fl = d->texFlags; if (fl & 0x2A) { if (fl & 0x20) T->flagAdd++; else T->flagTrn++; } else if (fl & 0x10) T->flagTrn++; else if (fl) T->flagMismatch++; else T->flagOpq++; }
    T->levels++; T->items += sc.nItems; T->itemsMissing += iMiss; T->itemsUntextured += iUn; T->sprites += sc.nSprites; T->spritesMissing += sMiss; T->rigParts += sc.rig.nPart; T->rigMissing += rMiss;
    T->drawsMissing += dMiss; T->upl += up_n; T->uplSame += up_same; T->uplDiff += up_diff; T->uplPlaceholder += up_ph; T->uplBump += bump_n; T->uplBumpSame += bump_same; T->layer2Drawn += l2drawn;
    T->flagMismatch += mism;
    if (iMiss || sMiss || rMiss || dMiss || up_diff || up_ph || bump_same != bump_n || mism || !sok) bad = 1;
    if (verbose || bad)
        printf("%-12s textures %u+%u%s | items %u (untextured %llu, unresolved %llu), sprites %u (unresolved %llu), rig parts %u (unresolved %llu) | draws textured %llu (unresolved %llu), layer-2 %llu (drawn %llu) | uploads %llu identical %llu different %llu placeholder %llu, bump %llu/%llu | pass/flag disagreements %llu%s\n",
               name, st.nLevel, st.nFix, sok ? "" : " (STORE LOAD FAILED)", sc.nItems, (unsigned long long)iUn, (unsigned long long)iMiss, sc.nSprites, (unsigned long long)sMiss, sc.rig.nPart, (unsigned long long)rMiss,
               (unsigned long long)dTex, (unsigned long long)dMiss, (unsigned long long)dL2, (unsigned long long)l2drawn, (unsigned long long)up_n, (unsigned long long)up_same, (unsigned long long)up_diff, (unsigned long long)up_ph,
               (unsigned long long)bump_same, (unsigned long long)bump_n, (unsigned long long)mism, bad ? "  <-- FAIL" : "");
    cpa_render_ctx_free(&ctx); cpa_texstore_free(&st); cpa_scene_free(&sc); free(lvl); free(tex);
    return bad;
}

int main(int argc, char **argv) {
    const char *dc = NULL, *only = NULL; int verbose = 0;
    for (int i = 1; i < argc; i++) { if (!strcmp(argv[i], "--level") && i + 1 < argc) only = argv[++i]; else if (!strcmp(argv[i], "-v")) verbose = 1; else dc = argv[i]; }
    if (!dc) { fprintf(stderr, "usage: %s DCDATA_DIR [--level NAME] [-v]\n", argv[0]); return 2; }
    char p[1200]; uint8_t *fix, *fxt; size_t fixN, fxtN;
    snprintf(p, sizeof p, "%s/../FIX.DAT", dc); if (!cpa_read_file(p, &fix, &fixN)) { snprintf(p, sizeof p, "%s/FIX.DAT", dc); if (!cpa_read_file(p, &fix, &fixN)) { fprintf(stderr, "no FIX.DAT\n"); return 2; } }
    snprintf(p, sizeof p, "%s/../FIX.TEX", dc); if (!cpa_read_file(p, &fxt, &fxtN)) { snprintf(p, sizeof p, "%s/FIX.TEX", dc); if (!cpa_read_file(p, &fxt, &fxtN)) { fprintf(stderr, "no FIX.TEX\n"); return 2; } }
    char names[256][64]; int nn = 0;
    if (only) { snprintf(names[nn], 64, "%s", only); for (char *q = names[nn]; *q; q++) *q = (char)toupper((unsigned char)*q); nn++; }
    else { DIR *d = opendir(dc); struct dirent *e; while (d && (e = readdir(d))) if (e->d_name[0] != '.' && nn < 256 && strlen(e->d_name) < 64) snprintf(names[nn++], 64, "%s", e->d_name); if (d) closedir(d); }
    for (int i = 0; i < nn; i++) for (int j = i + 1; j < nn; j++) if (strcmp(names[j], names[i]) < 0) { char t[64]; memcpy(t, names[i], 64); memcpy(names[i], names[j], 64); memcpy(names[j], t, 64); }
    Tot T; memset(&T, 0, sizeof T); int fails = 0, skipped = 0;
    for (int i = 0; i < nn; i++) { int r = check_level(dc, names[i], fix, fixN, fxt, fxtN, &T, verbose); if (r < 0) skipped++; else if (r) fails++; }
    printf("TEXRENDER levels %u (skipped dirs without DAT+TEX: %d), failing %d | scene items %llu (unresolved %llu), sprites %llu (%llu), rig parts %llu (%llu) | frame draws %llu = textured %llu (unresolved %llu) + layer-2 %llu (drawn through the backend %llu); passes opaque %llu cutout %llu translucent %llu\n",
           T.levels, skipped, fails, (unsigned long long)T.items, (unsigned long long)T.itemsMissing, (unsigned long long)T.sprites, (unsigned long long)T.spritesMissing, (unsigned long long)T.rigParts, (unsigned long long)T.rigMissing,
           (unsigned long long)T.draws, (unsigned long long)T.drawsTextured, (unsigned long long)T.drawsMissing, (unsigned long long)T.drawsLayer2, (unsigned long long)T.layer2Drawn, (unsigned long long)T.pass[0], (unsigned long long)T.pass[1], (unsigned long long)T.pass[2]);
    printf("TEXRENDER fakegl uploads: %llu level/FIX textures, byte-identical to an independent decode %llu, different %llu, placeholders %llu; layer-2 bump uploads %llu (plumbing-identical %llu) | items by flags: opaque %llu, blend %llu, additive %llu; pass disagreements %llu\n",
           (unsigned long long)T.upl, (unsigned long long)T.uplSame, (unsigned long long)T.uplDiff, (unsigned long long)T.uplPlaceholder, (unsigned long long)T.uplBump, (unsigned long long)T.uplBumpSame, (unsigned long long)T.flagOpq, (unsigned long long)T.flagTrn, (unsigned long long)T.flagAdd, (unsigned long long)T.flagMismatch);
    printf("%s\n", fails || !T.levels ? "RESULT: FAIL" : "RESULT: PASS");
    return fails || !T.levels ? 1 : 0;
}
