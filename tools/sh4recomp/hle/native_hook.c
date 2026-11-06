/* native_hook.c - see native_hook.h.  Level data is read from the same DCDATA tree the recompiled game uses. */
#ifdef R2_NATIVE_GFX
#include "native_hook.h"
#include "swflag.h"
#include "perf.h"
#include "hle.h"
#include "ta.h"
#include "runtime.h"
#include <vitaGL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>
#include "cpa_render.h"
#include "cpa_gl_backend.h"

#ifndef R2_INTERNAL_SCALE
#define R2_INTERNAL_SCALE 100
#endif
#if R2_INTERNAL_SCALE == 100
#define NAT_W 960
#define NAT_H 544
#elif R2_INTERNAL_SCALE == 75
#define NAT_W 720
#define NAT_H 408
#elif R2_INTERNAL_SCALE == 67
#define NAT_W 640
#define NAT_H 368
#else
#define NAT_W 480
#define NAT_H 272
#endif

#define NAT_SETTLE_FRAMES 20       /* the guest level name must be stable this many frames before the (slow) load starts */
#define NAT_LOG_EVERY 120
#define VA_LEVELNAME_OFF 0x123B09u /* guest E.szLevelName char[30] (re_analysis/dc/notes_levels.md) */

static void nlog(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
static void nlog(const char *fmt, ...) {
    char b[600]; va_list ap; va_start(ap, fmt); vsnprintf(b, sizeof b, fmt, ap); va_end(ap);
    hle_log("%s", b);
#if defined(__vita__)
    FILE *f = fopen("ux0:data/rayman2/native.log", "ab"); if (f) { fputs(b, f); fputc('\n', f); fclose(f); }
#endif
}

typedef struct NatLevel {
    int ref; uint32_t serial; char name[32];
    uint8_t *lvl, *tex; size_t lvlN, texN;                  /* FIX.DAT / FIX.TEX are process-global (s_fix, s_fxt) */
    CpaImage img; CpaScene sc; CpaTexStore store; CpaRenderCtx ctx; int haveStore;
} NatLevel;
typedef struct NatJob { NatLevel *lvl; CpaRenderFrame f; } NatJob;

static uint8_t *s_fix, *s_fxt; static size_t s_fixN, s_fxtN;
static NatLevel *s_cur; static uint32_t s_serial;
static char s_seen[32], s_failed[32]; static unsigned long s_frames, s_seen_since;

/* stats: game thread (build) and render thread (submit), logged by the game thread */
static uint64_t g_build_us, g_input_us, g_nframes_native, g_nframes_fallback;
static volatile uint32_t r_draws, r_tris, r_verts, r_hud, r_uploaded, r_placeholder, r_skipped;   /* last native frame, render thread */
static volatile uint64_t r_submit_total_us, r_submit_n;

static void level_unref(NatLevel *L) {
    if (__sync_sub_and_fetch(&L->ref, 1) > 0) return;
    cpa_render_ctx_free(&L->ctx); if (L->haveStore) cpa_texstore_free(&L->store); cpa_scene_free(&L->sc);
    free(L->lvl); free(L->tex); free(L);
}

static const char *const k_roots[] = { "ux0:data/rayman2/DCDATA", "ux0:data/rayman2", NULL };

static NatLevel *level_load(const char *up) {
    uint64_t t0 = r2_now_us(); char root[64] = "", p[300];
    if (!s_fix) {
        for (int i = 0; k_roots[i]; i++) { snprintf(p, sizeof p, "%s/FIX.DAT", k_roots[i]); if (cpa_read_file(p, &s_fix, &s_fixN)) { snprintf(root, sizeof root, "%s", k_roots[i]); break; } }
        if (!s_fix) { nlog("[native] FIX.DAT not found under ux0:data/rayman2[/DCDATA]"); return NULL; }
        snprintf(p, sizeof p, "%s/FIX.TEX", root); if (!cpa_read_file(p, &s_fxt, &s_fxtN)) { s_fxt = NULL; s_fxtN = 0; nlog("[native] FIX.TEX missing: FIX textures will be placeholders"); }
    }
    NatLevel *L = (NatLevel *)calloc(1, sizeof *L); if (!L) return NULL;
    L->ref = 1; L->serial = ++s_serial; snprintf(L->name, sizeof L->name, "%s", up);
    int found = 0;
    for (int i = 0; k_roots[i] && !found; i++) { snprintf(p, sizeof p, "%s/%s/%s.DAT", k_roots[i], up, up); if (cpa_read_file(p, &L->lvl, &L->lvlN)) { found = 1; snprintf(root, sizeof root, "%s", k_roots[i]); } }
    if (!found) { nlog("[native] %s.DAT not found", up); free(L); return NULL; }
    if (!cpa_scene_load_dats(&L->sc, &L->img, s_fix, s_fixN, L->lvl, L->lvlN)) { nlog("[native] cpa_scene_load_dats(%s) failed", up); free(L->lvl); free(L); return NULL; }
    uint64_t t1 = r2_now_us();
    snprintf(p, sizeof p, "%s/%s/%s.TEX", root, up, up);
    if (cpa_read_file(p, &L->tex, &L->texN)) {
        cpa_texstore_load(&L->store, &L->sc, L->tex, L->texN, s_fix, s_fixN, s_fxt, s_fxtN); L->haveStore = 1;
        nlog("[native] texstore %s: level bank %u (%s), FIX bank %u (%s)", up, L->store.nLevel, L->store.levelOk ? "ok" : "FAILED", L->store.nFix, L->store.fixOk ? "ok" : "FAILED");
    } else nlog("[native] %s.TEX missing: untextured", up);
    uint64_t t2 = r2_now_us();
    CpaRenderOpts o; cpa_render_opts_default(&o);
    cpa_render_ctx_init(&L->ctx, &L->sc, &o); if (L->haveStore) cpa_render_ctx_set_texstore(&L->ctx, &L->store);
    uint64_t t3 = r2_now_us();
    nlog("[native] level %s loaded: %u KB DAT, %u static tris, %u verts, %u sprites; scene %llu ms, tex %llu ms, ctx/visibility map %llu ms", up, (unsigned)(L->lvlN / 1024), L->sc.nStaticTris, L->sc.nVerts, L->sc.nSprites,
         (unsigned long long)((t1 - t0) / 1000), (unsigned long long)((t2 - t1) / 1000), (unsigned long long)((t3 - t2) / 1000));
    return L;
}

void *native_hook_frame(void) {
    static int en = -1;
    if (en < 0) { en = hle_switch("NATIVE_GFX"); nlog("[native] NATIVE_GFX switch: %s (build %dx%d)", en ? "ON" : "off", NAT_W, NAT_H); }
    if (!en) return NULL;
    s_frames++;
    char name[32]; memset(name, 0, sizeof name);
    for (int i = 0; i < 30; i++) { char c = (char)sh4_ram[VA_LEVELNAME_OFF + i]; if (c == '$' || c == 0) break; if (!(isalnum((unsigned char)c) || c == '_')) { name[0] = 0; break; } name[i] = (char)toupper((unsigned char)c); }
    if (!name[0]) { g_nframes_fallback++; return NULL; }
    if (strcmp(name, s_seen)) { snprintf(s_seen, sizeof s_seen, "%s", name); s_seen_since = s_frames; }
    if (!s_cur || strcmp(s_cur->name, name)) {
        if (s_frames - s_seen_since < NAT_SETTLE_FRAMES || !strcmp(s_failed, name)) { g_nframes_fallback++; return NULL; }
        NatLevel *L = level_load(name);
        if (!L) { snprintf(s_failed, sizeof s_failed, "%s", name); g_nframes_fallback++; return NULL; }
        if (s_cur) level_unref(s_cur);
        s_cur = L;
    }
    NatLevel *L = s_cur;
    uint64_t t0 = r2_now_us();
    CpaImage ram; cpa_image_init(&ram); cpa_image_add(&ram, sh4_ram, SH4_RAM_SIZE, 0x8C000000u);
    CpaFrameInput in; CpaRenderActor *actors = NULL; uint32_t nUnposed = 0;
    if (!cpa_render_input_from_ram(&in, &actors, &nUnposed, &ram, &L->sc, &L->ctx.tables)) { free(actors); g_nframes_fallback++; return NULL; }
    in.w = NAT_W; in.h = NAT_H; in.fit = hle_ta_wide_active() ? CPA_FIT_HORPLUS : CPA_FIT_PILLARBOX43;
    CpaHudFrame hud; memset(&hud, 0, sizeof hud); if (cpa_hud_build(&hud, &ram, NULL)) in.hud = &hud;
    uint64_t t1 = r2_now_us();
    NatJob *nj = (NatJob *)calloc(1, sizeof *nj); int ok = nj && cpa_render_build_frame(&L->ctx, &nj->f, &in);
    free(actors); cpa_hud_frame_free(&hud);
    uint64_t t2 = r2_now_us();
    g_input_us += t1 - t0; g_build_us += t2 - t1;
    if (!ok) { if (nj) { cpa_render_frame_free(&nj->f); free(nj); } g_nframes_fallback++; return NULL; }
    nj->lvl = L; __sync_fetch_and_add(&L->ref, 1);
    g_nframes_native++;
    if (g_nframes_native % NAT_LOG_EVERY == 0 || g_nframes_native == 1) {
        uint64_t sn = r_submit_n ? r_submit_n : 1; unsigned long div = g_nframes_native == 1 ? 1 : NAT_LOG_EVERY;
        nlog("[native] %s frame %lu: native %llu / fallback %llu | game thread: input %.2f ms + build %.2f ms avg | render thread: submit %.2f ms avg | frame: draws %u, tris %u, verts %u, hud quads %u, actors posed %u/%u | last submitted: draws %u, tris %u | textures uploaded %u, placeholders %u, draws skipped %u",
             L->name, s_frames, (unsigned long long)g_nframes_native, (unsigned long long)g_nframes_fallback, g_input_us / 1000.0 / div, g_build_us / 1000.0 / div,
             r_submit_total_us / 1000.0 / sn, nj->f.nDraws, nj->f.nVerts / 3, nj->f.nVerts, nj->f.nHud, nj->f.st.actorsPosed, nj->f.st.actorsGiven, r_draws, r_tris, r_uploaded, r_placeholder, r_skipped);
        g_input_us = g_build_us = 0; r_submit_total_us = 0; r_submit_n = 0;
    }
    return nj;
}

static CpaGlBackend s_be; static CpaRenderBackend s_vt; static uint32_t s_be_serial;

void native_hook_render(void *p) {
    NatJob *nj = (NatJob *)p; if (!nj) return;
    uint64_t t0 = r2_now_us();
    if (s_be_serial != nj->lvl->serial) {
        if (s_be_serial) cpa_gl_backend_shutdown(&s_be);
        CpaGlConfig cfg; cpa_gl_config_default(&cfg); cpa_gl_backend_init(&s_be, &cfg); cpa_gl_backend_vtable(&s_be, &s_vt); s_be_serial = nj->lvl->serial;
    }
    glDisable(GL_SCISSOR_TEST); glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE); glDepthMask(GL_TRUE);
    glClearDepthf(1.0f); glDepthRangef(0.0f, 1.0f);
    cpa_render_submit(&nj->lvl->ctx, &nj->f, &s_vt);
    if (nj->lvl->haveStore) cpa_texstore_trim(&nj->lvl->store);      /* pixels live in GL now */
    /* hand the GL state back to the recompiled path (it re-sets what it needs per frame; these are the ones the native pass changes) */
    glClearDepthf(0.0f);
    glDisableClientState(GL_COLOR_ARRAY); glDisableClientState(GL_TEXTURE_COORD_ARRAY); glDisableClientState(GL_VERTEX_ARRAY);
    glDisable(GL_CULL_FACE); glDisable(GL_BLEND); glDisable(GL_ALPHA_TEST); glDepthMask(GL_TRUE); glColor4f(1, 1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, 0);
    r_draws = nj->f.nDraws; r_verts = nj->f.nVerts; r_tris = nj->f.nVerts / 3; r_hud = nj->f.nHud;
    r_uploaded = s_be.nUploaded; r_placeholder = s_be.nPlaceholder; r_skipped = s_be.drawsSkipped;
    r_submit_total_us += r2_now_us() - t0; r_submit_n++;
    cpa_render_frame_free(&nj->f); level_unref(nj->lvl); free(nj);
}
#endif
