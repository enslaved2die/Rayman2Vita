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

extern volatile uint32_t hle_native_cut; extern volatile uint32_t hle_native_cut_calls[8];      /* hle/nativecut.c: bit 0 = skip the guest world draw, bit 1 = skip the guest HUD quad primitive */
static char s_clear_job;                       /* sentinel job: native frame not ready, present a cleared frame (pure mode never falls back to the recompiled TA draw) */

/* stats: game thread (build) and render thread (submit), logged by the game thread */
static uint64_t g_build_us, g_input_us, g_nframes_native, g_nframes_fallback;
/* per-stage timers (us, summed over the frames since the last log line) */
static uint64_t g_t_inreq, g_t_hudin, g_t_vis, g_t_static, g_t_pose, g_t_light, g_t_actgeo, g_t_spr, g_t_verts, g_t_hudq;
static uint64_t g_t_guest_other, g_t_guest_wait, g_t_period, g_t_nat_total, g_nstat;   /* guest-thread decomposition, see native_hook_frame */
static uint64_t s_prev_entry_us, s_prev_nat_us, s_prev_wait_us; static int s_prev_valid;
static int s_ready_state = -1; static unsigned long s_clear_frames;
static volatile uint32_t r_draws, r_tris, r_verts, r_hud, r_uploaded, r_placeholder, r_skipped;   /* last native frame, render thread */
static volatile uint64_t r_submit_total_us, r_submit_n;

static void level_unref(NatLevel *L) {
    if (__sync_sub_and_fetch(&L->ref, 1) > 0) return;
    cpa_render_ctx_free(&L->ctx); if (L->haveStore) cpa_texstore_free(&L->store); cpa_scene_free(&L->sc);
    free(L->lvl); free(L->tex); free(L);
}

static uint64_t cpa_clock_us(void) { return r2_now_us(); }
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
    CpaRenderOpts o; cpa_render_opts_default(&o); o.now_us = cpa_clock_us;
    cpa_render_ctx_init(&L->ctx, &L->sc, &o); if (L->haveStore) cpa_render_ctx_set_texstore(&L->ctx, &L->store);
    uint64_t t3 = r2_now_us();
    nlog("[native] level %s loaded: %u KB DAT, %u static tris, %u verts, %u sprites; scene %llu ms, tex %llu ms, ctx/visibility map %llu ms", up, (unsigned)(L->lvlN / 1024), L->sc.nStaticTris, L->sc.nVerts, L->sc.nSprites,
         (unsigned long long)((t1 - t0) / 1000), (unsigned long long)((t2 - t1) / 1000), (unsigned long long)((t3 - t2) / 1000));
    return L;
}

static int s_en = -1; static uint32_t s_cutmask;
/* guest-side cuts while a native frame is valid (hle/nativecut.c bits): 2 = HUD quad primitive (f_8c07fc1a), 128 = GLI object display (f_8c038bec: vertex transform + TA vertex push of every IPO and actor),
 * 1 = the whole world draw (f_8c05f4a0, optional: extra file NATIVE_CUT_WORLD; the draw also produces state the game reads, see re_analysis/dc/notes_native_cut.md), 0 = nothing cut (extra file NATIVE_NOCUT: the guest draws into the TA stream that is then dropped) */
int native_hook_pure(void) {
    if (s_en < 0) {
        s_en = hle_switch("NATIVE_GFX");
        if (s_en) { s_cutmask = 2u | 128u; if (hle_switch("NATIVE_CUT_WORLD")) s_cutmask |= 1u; if (hle_switch("NATIVE_NOCUT")) s_cutmask = 0; }
        nlog("[native] NATIVE_GFX switch: %s (build %dx%d)%s", s_en ? "ON" : "off", NAT_W, NAT_H,
             s_en ? " - PURE native: guest draw cuts mask below, TA texture bookkeeping + TA strip drawing skipped; frames where the native path is not ready present a clear frame" : "");
        if (s_en) nlog("[native] guest cut mask %u (1 world draw, 2 HUD quads, 128 object display)", s_cutmask);
    }
    return s_en;
}
static uint64_t s_t_enter, s_dur_prev;      /* entry time of the current hook call; duration of the previous call (native build incl. level loads) */
static int s_loaded_now;                    /* a (slow) level load happened in this call: no timing sample */
static void *native_not_ready(const char *why) {
    g_nframes_fallback++; hle_native_cut = 0; s_prev_valid = 0;
    if (s_ready_state != 0) { s_ready_state = 0; nlog("[native] frame %lu: native path not ready (%s): the guest draws normally (result discarded), clear frames presented", s_frames, why); }
    s_clear_frames++;
    return &s_clear_job;
}
static void *native_hook_frame_impl(void);
void *native_hook_frame(void) {
    if (!native_hook_pure()) return NULL;
    s_t_enter = r2_now_us(); s_loaded_now = 0;
    void *r = native_hook_frame_impl();
    s_dur_prev = r2_now_us() - s_t_enter;       /* the guest-thread cost of THIS call; the next call's period includes it */
    return r;
}
static void *native_hook_frame_impl(void) {
    s_frames++;
    char name[32]; memset(name, 0, sizeof name);
    for (int i = 0; i < 30; i++) { char c = (char)sh4_ram[VA_LEVELNAME_OFF + i]; if (c == '$' || c == 0) break; if (!(isalnum((unsigned char)c) || c == '_')) { name[0] = 0; break; } name[i] = (char)toupper((unsigned char)c); }
    if (!name[0]) return native_not_ready("no level name");
    if (strcmp(name, s_seen)) { snprintf(s_seen, sizeof s_seen, "%s", name); s_seen_since = s_frames; }
    if (!s_cur || strcmp(s_cur->name, name)) {
        hle_native_cut = 0;
        if (s_frames - s_seen_since < NAT_SETTLE_FRAMES || !strcmp(s_failed, name)) return native_not_ready(!strcmp(s_failed, name) ? "level data failed to load" : "level name settling");
        NatLevel *L = level_load(name); s_loaded_now = 1;
        if (!L) { snprintf(s_failed, sizeof s_failed, "%s", name); return native_not_ready("level load failed"); }
        if (s_cur) level_unref(s_cur);
        s_cur = L;
    }
    NatLevel *L = s_cur;
    uint64_t t0 = r2_now_us();
    CpaImage ram; cpa_image_init(&ram); cpa_image_add(&ram, sh4_ram, SH4_RAM_SIZE, 0x8C000000u);
    CpaFrameInput in; CpaRenderActor *actors = NULL; uint32_t nUnposed = 0;
    if (!cpa_render_input_from_ram(&in, &actors, &nUnposed, &ram, &L->sc, &L->ctx.tables)) { free(actors); return native_not_ready("no camera block"); }
    in.w = NAT_W; in.h = NAT_H; in.fit = hle_ta_wide_active() ? CPA_FIT_HORPLUS : CPA_FIT_PILLARBOX43;
    uint64_t t_in = r2_now_us();
    CpaHudFrame hud; memset(&hud, 0, sizeof hud); if (cpa_hud_build(&hud, &ram, NULL)) in.hud = &hud;
    uint64_t t1 = r2_now_us();
    NatJob *nj = (NatJob *)calloc(1, sizeof *nj); int ok = nj && cpa_render_build_frame(&L->ctx, &nj->f, &in);
    free(actors); cpa_hud_frame_free(&hud);
    uint64_t t2 = r2_now_us();
    if (!ok) { if (nj) { cpa_render_frame_free(&nj->f); free(nj); } return native_not_ready("build_frame failed"); }
    g_input_us += t1 - t0; g_build_us += t2 - t1; g_t_inreq += t_in - t0; g_t_hudin += t1 - t_in;
    { const CpaRenderStats *q = &nj->f.st; g_t_vis += q->usVis; g_t_static += q->usStatic; g_t_pose += q->usPose; g_t_light += q->usLight; g_t_actgeo += q->usActorGeo; g_t_spr += q->usSprites; g_t_verts += q->usVerts; g_t_hudq += q->usHud; }
    {   /* guest-thread decomposition.  period = entry-to-entry of this hook (one STARTRENDER to the next); wait = vblank sleep + render-thread back-pressure inside it (idle time of the guest thread);
         * nat = the previous call's own cost (this whole function); other = period - wait - nat = what the guest thread spent on game logic, the rest of the cut draw, TA capture, present bookkeeping */
        uint64_t wait_now = 0;
#if R2_PERF
        wait_now = g_perf.t_vsleep + g_perf.t_rt_wait;
#endif
        if (s_prev_valid && !s_loaded_now) {
            uint64_t period = s_t_enter - s_prev_entry_us, wait = wait_now - s_prev_wait_us, nat = s_dur_prev;
            g_t_period += period; g_t_guest_wait += wait; g_t_nat_total += nat; g_t_guest_other += period > wait + nat ? period - wait - nat : 0; g_nstat++;
        }
        s_prev_entry_us = s_t_enter; s_prev_wait_us = wait_now; s_prev_valid = !s_loaded_now;
    }
    if (s_ready_state != 1) { s_ready_state = 1; nlog("[native] frame %lu: native frame ready (%llu clear frames presented while not ready); guest draw cuts (mask %u) are now active", s_frames, (unsigned long long)s_clear_frames, s_cutmask); s_clear_frames = 0; }
    hle_native_cut = s_cutmask;                  /* the next guest frames skip the configured guest draw work */
    nj->lvl = L; __sync_fetch_and_add(&L->ref, 1);
    g_nframes_native++;
    if (g_nframes_native % NAT_LOG_EVERY == 0 || g_nframes_native == 1) {
        uint64_t sn = r_submit_n ? r_submit_n : 1; unsigned long div = g_nframes_native == 1 ? 1 : NAT_LOG_EVERY; double ns = g_nstat ? (double)g_nstat : 1.0;
        nlog("[native] %s frame %lu: native %llu / clear %llu | game thread: input %.2f ms + build %.2f ms avg | render thread: submit %.2f ms avg | frame: draws %u, tris %u, verts %u, hud quads %u, actors posed %u/%u | last submitted: draws %u, tris %u | textures uploaded %u, placeholders %u, draws skipped %u",
             L->name, s_frames, (unsigned long long)g_nframes_native, (unsigned long long)g_nframes_fallback, g_input_us / 1000.0 / div, g_build_us / 1000.0 / div,
             r_submit_total_us / 1000.0 / sn, nj->f.nDraws, nj->f.nVerts / 3, nj->f.nVerts, nj->f.nHud, nj->f.st.actorsPosed, nj->f.st.actorsGiven, r_draws, r_tris, r_uploaded, r_placeholder, r_skipped);
        nlog("[native-t] ms/frame avg over %lu frames (guest samples %llu): guest period %.2f = guest-own %.2f (logic, rest of the cut draw, TA capture) + native build %.2f + idle wait %.2f (vblank sleep + render back-pressure) | native build = input fill %.2f + HUD pools %.2f + visibility %.2f + static batches %.2f + actor pose %.2f + lighting select %.2f + actor geometry/colours %.2f + sprites %.2f + sort/vertex stream %.2f + HUD quads %.2f | render submit %.2f | cuts swallowed since boot: world %lu, hud-quad %lu, object-display %lu",
             div, (unsigned long long)g_nstat, g_t_period / 1000.0 / ns, g_t_guest_other / 1000.0 / ns, g_t_nat_total / 1000.0 / ns, g_t_guest_wait / 1000.0 / ns,
             g_t_inreq / 1000.0 / div, g_t_hudin / 1000.0 / div, g_t_vis / 1000.0 / div, g_t_static / 1000.0 / div, g_t_pose / 1000.0 / div, g_t_light / 1000.0 / div, g_t_actgeo / 1000.0 / div, g_t_spr / 1000.0 / div, g_t_verts / 1000.0 / div, g_t_hudq / 1000.0 / div,
             r_submit_total_us / 1000.0 / sn, (unsigned long)hle_native_cut_calls[0], (unsigned long)hle_native_cut_calls[1], (unsigned long)hle_native_cut_calls[2]);
        g_input_us = g_build_us = 0; r_submit_total_us = 0; r_submit_n = 0;
        g_t_inreq = g_t_hudin = g_t_vis = g_t_static = g_t_pose = g_t_light = g_t_actgeo = g_t_spr = g_t_verts = g_t_hudq = 0; g_t_guest_other = g_t_guest_wait = g_t_period = g_t_nat_total = g_nstat = 0;
    }
    return nj;
}

static CpaGlBackend s_be; static CpaRenderBackend s_vt; static uint32_t s_be_serial;

void native_hook_render(void *p) {
    NatJob *nj = (NatJob *)p; if (!nj) return;
    if (p == (void *)&s_clear_job) {            /* native path not ready: a cleared frame (the caller swaps) */
        glDisable(GL_SCISSOR_TEST); glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE); glDepthMask(GL_TRUE); glDisable(GL_STENCIL_TEST);
        glViewport(0, 0, 960, 544); glClearColor(0.0f, 0.0f, 0.0f, 1.0f); glClearDepthf(1.0f); glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClearDepthf(0.0f);
        return;
    }
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
