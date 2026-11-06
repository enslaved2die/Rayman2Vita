/* lightcmp_actor: dump, for every oracle TA vertex that belongs to a POSED actor triangle (matched as in ta_actor.c), the oracle base/offset colour next to the
 * native inputs of the lighting decode (geometry, vertex index, element VisualMaterial, vertex normal, objM, world position).  Text output, one row per matched triangle vertex:
 *   V scene actorSO geo vi vm  baseARGB(hex)  offARGB(hex)  list  nx ny nz (local vertex normal)  r00..r22 (objM 3x3)  wx wy wz  tex flags
 * With --check it instead evaluates cpa_light for every matched actor vertex (lights = the guest light list in the RAM dump, object-wide ambient from the type-4 lights, parallel
 * lights per vertex with the unmirrored channel world matrix) and prints one LIGHTACTOR summary line per level: exact-ARGB / exact-RGB / within-2 fractions, max channel error and the
 * residuals split by cause (light types of the list that cpa_light does not implement, saturated observation, other).
 *   lightcmp_actor CAPDIR DCDATA_DIR --level Learn_10 [--scene N | --all] [--check] */
#include "../../src/cpa/cpa_light.h"
#include "../../src/cpa/cpa_scene.h"
#include "../../src/cpa/cpa_anim.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <ctype.h>

#define RAM_BASE 0x8C000000u
#define NEAR_ZC 0.25
typedef struct { float x, y, z, u, v, base[4], off[4]; } TaV;
typedef struct { uint32_t ctl, isp, tsp, tcw, first, count, sprite, list; } TaS;
typedef struct { float sx[3], sy[3], w[3]; uint32_t geo, vi[3], vm, so; float M[16]; float W[16]; float wp[3][3]; uint32_t tex, texFlags; float cx; } NTri;
typedef struct { float sx[3], sy[3], z[3]; uint32_t v0; } OTri;
static const int perms[6][3] = { {0,1,2}, {1,2,0}, {2,0,1}, {0,2,1}, {2,1,0}, {1,0,2} };
static uint8_t *slurp(const char *p, size_t *n) {
    FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); long l = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)l + 1); if (!b || fread(b, 1, (size_t)l, f) != (size_t)l) { fclose(f); free(b); return NULL; } fclose(f); *n = (size_t)l; return b;
}
static float rdf(const uint8_t *ram, uint32_t va) { float f; memcpy(&f, ram + (va - RAM_BASE), 4); return f; }
typedef struct { double fx, fy, C[3], U[3], F[3], L[3]; } Cam;
static int proj(const Cam *c, const float P[3], float *sx, float *sy, float *w) {
    double r[3] = { P[0] - c->C[0], P[1] - c->C[1], P[2] - c->C[2] };
    double zc = c->F[0]*r[0] + c->F[1]*r[1] + c->F[2]*r[2]; if (zc < NEAR_ZC) return 0;
    *sx = (float)(320.0 - c->fx * (c->L[0]*r[0] + c->L[1]*r[1] + c->L[2]*r[2]) / zc);
    *sy = (float)(240.0 - c->fy * (c->U[0]*r[0] + c->U[1]*r[1] + c->U[2]*r[2]) / zc);
    *w = (float)(1.0 / (4.0 * zc)); return 1;
}
typedef struct { NTri *a; uint32_t n, cap; } NList;
static void nl_push(NList *l, const NTri *t) { if (l->n == l->cap) { l->cap = l->cap ? l->cap * 2 : 4096; l->a = realloc(l->a, l->cap * sizeof *l->a); } l->a[l->n++] = *t; }
static int cmp_cx(const void *a, const void *b) { float x = ((const NTri *)a)->cx, y = ((const NTri *)b)->cx; return x < y ? -1 : x > y; }

static void geo_tris(const CpaImage *im, uint32_t geo, const float M[16], const float Wm[16], const Cam *cam, uint32_t so, NList *out) {
    uint32_t pv, ptypes, pelems, cnt;
    if (!cpa_rd32(im, geo, &pv) || !cpa_rd32(im, geo + 0x10, &ptypes) || !cpa_rd32(im, geo + 0x14, &pelems) || !cpa_rd32(im, geo + 0x2C, &cnt)) return;
    uint32_t nv = cnt & 0xFFFF, ne = cnt >> 16;
    if (!nv || nv > 20000 || !ne || ne > 256 || !cpa_is_ptr(im, pv) || !cpa_is_ptr(im, ptypes) || !cpa_is_ptr(im, pelems) || !cpa_ptr(im, pv, (size_t)nv * 12)) return;
    float (*vw)[3] = malloc(sizeof(float[3]) * nv); if (!vw) return;
    for (uint32_t i = 0; i < nv; i++) { float v[3]; for (int k = 0; k < 3; k++) if (!cpa_rdf(im, pv + i * 12 + k * 4, &v[k])) v[k] = 0;
        for (int j = 0; j < 3; j++) vw[i][j] = v[0] * M[j] + v[1] * M[4+j] + v[2] * M[8+j] + M[12+j]; }
    for (uint32_t e = 0; e < ne; e++) {
        uint16_t et; uint32_t el, w[8]; int ok = 1;
        if (!cpa_rd16(im, ptypes + 2 * e, &et) || et != 1 || !cpa_rd32(im, pelems + 4 * e, &el) || !cpa_is_ptr(im, el)) continue;
        for (int i = 0; i < 8; i++) ok &= cpa_rd32(im, el + 4u * i, &w[i]);
        uint32_t ntri = w[1] & 0xFFFF, nuv = w[1] >> 16;
        if (!ok || !ntri || !cpa_is_ptr16(im, w[2]) || !cpa_is_ptr16(im, w[3]) || !cpa_is_ptr(im, w[5]) || !cpa_ptr(im, w[2], (size_t)ntri * 6) || !cpa_ptr(im, w[3], (size_t)ntri * 6) || !cpa_ptr(im, w[5], (size_t)nuv * 8)) continue;
        uint32_t gm = 0, vm = 0, tex = 0, tf = 0; gm = w[0]; if (gm) cpa_rd32(im, gm, &vm); if (vm) { cpa_rd32(im, vm + 0x4C, &tex); if (tex) cpa_rd32(im, tex + 4, &tf); }
        for (uint32_t t = 0; t < ntri; t++) {
            uint16_t vi[3], ui[3]; int fo = 1; NTri q; memset(&q, 0, sizeof q);
            for (int k = 0; k < 3; k++) fo &= cpa_rd16(im, w[2] + t * 6 + k * 2, &vi[k]) && cpa_rd16(im, w[3] + t * 6 + k * 2, &ui[k]);
            if (!fo || vi[0] >= nv || vi[1] >= nv || vi[2] >= nv || ui[0] >= nuv || ui[1] >= nuv || ui[2] >= nuv) continue;
            int pok = 1;
            for (int k = 0; k < 3; k++) { if (!proj(cam, vw[vi[k]], &q.sx[k], &q.sy[k], &q.w[k])) pok = 0; q.vi[k] = vi[k]; memcpy(q.wp[k], vw[vi[k]], 12); }
            if (!pok) continue;
            q.geo = geo; q.vm = vm; q.so = so; memcpy(q.M, M, sizeof q.M); memcpy(q.W, Wm, sizeof q.W); q.tex = tex; q.texFlags = tf;
            q.cx = (q.sx[0] + q.sx[1] + q.sx[2]) / 3.0f; nl_push(out, &q);
        }
    }
    free(vw);
}
static int match(const NList *l, const OTri *o, double tol, double ztol, int *pi_out) {
    float ocx = (o->sx[0] + o->sx[1] + o->sx[2]) / 3.0f; uint32_t lo = 0, hi = l->n;
    while (lo < hi) { uint32_t m = (lo + hi) / 2; if (l->a[m].cx < ocx - (float)tol - 1e-3f) lo = m + 1; else hi = m; }
    for (uint32_t m = lo; m < l->n && l->a[m].cx <= ocx + (float)tol + 1e-3f; m++)
        for (int pi = 0; pi < 6; pi++) { int ok = 1;
            for (int j = 0; j < 3 && ok; j++) { int q = perms[pi][j];
                if (fabs(l->a[m].sx[q] - o->sx[j]) > tol || fabs(l->a[m].sy[q] - o->sy[j]) > tol || fabs(l->a[m].w[q] - o->z[j]) / (fabs(o->z[j]) + 1e-9) > ztol) ok = 0; }
            if (ok) { if (pi_out) *pi_out = pi; return (int)m; } }
    return -1;
}
typedef struct { uint32_t so; uint32_t n; CpaLight L[64]; int have; } LSet;
static LSet g_ls[512]; static unsigned g_nls;
static LSet *ls_find(uint32_t so) { for (unsigned i = 0; i < g_nls; i++) if (g_ls[i].so == so) return &g_ls[i]; return NULL; }
typedef struct { const CpaImage *im; const CpaAnimTables *T; const Cam *cam; NList *posed; } Ctx;
static void do_actor(Ctx *c, uint32_t so) {
    CpaAnimActor A; CpaAnimCur cur; CpaAnimRig *rig; float M[16];
    if (!cpa_anim_actor_open(&A, c->im, c->T, so)) return;
    if (!cpa_anim_read_matrix(c->im, cpa_u32(c->im, so + 0x24), M)) return;
    rig = malloc(sizeof *rig);
    if (A.chanList && cpa_anim_cur(&A, &cur) && cpa_anim_rig_pose(&A, cur.animIdx, cur.frame, CPA_ANIM_BEST, M, rig))
        for (unsigned ch = 0; ch < rig->pose.nCh; ch++) { int obj = rig->pose.ch[ch].obj; if (obj < 0) continue; uint32_t geo = cpa_anim_obj_geo(&A, obj); if (geo) geo_tris(c->im, geo, rig->objM[ch], rig->world[ch], c->cam, so, c->posed); }
    free(rig);
}
static void walk(Ctx *c, uint32_t va, int depth, unsigned *n) {
    if (depth > 40 || (*n)++ > 20000) return;
    uint32_t type, ch; if (!cpa_rd32(c->im, va, &type)) return;
    if (type == 4) {          /* sector: its actor list (data +0) is drawn with the sector's light stack */
        CpaLight *sl = malloc(64 * sizeof *sl); uint32_t ns = cpa_light_sector_lights(c->im, va, sl, 64), d = cpa_u32(c->im, va + 4);
        uint32_t node = cpa_is_ptr(c->im, d) ? cpa_u32(c->im, d) : 0;
        for (unsigned k = 0; node && cpa_is_ptr(c->im, node) && k < 512; k++, node = cpa_u32(c->im, node + 4)) {
            uint32_t aso = cpa_u32(c->im, node); if (!cpa_is_ptr(c->im, aso) || ls_find(aso) || g_nls >= 512) continue;
            LSet *e = &g_ls[g_nls++]; e->so = aso; e->have = 1; e->n = cpa_light_for_actor(c->im, aso, sl, ns, e->L);
        }
        free(sl);
    }
    if (type == 2) do_actor(c, va);
    ch = cpa_u32(c->im, va + 8);
    for (unsigned k = 0; ch && k < 20000 && cpa_is_ptr(c->im, ch); k++) { walk(c, ch, depth + 1, n); ch = cpa_u32(c->im, ch + 0x14); }
}
static int g_check;

typedef struct { uint32_t verts, exact, rgbExact, within2, noMat, satObs, unimplLights, other, noSector, translucentList, ambientOnlyRows, nLightSets; int maxErr; uint32_t errHist[5]; uint32_t unimplType[8]; } CTot;
static CTot g_t;
static uint32_t pack(const float c[4]) { uint32_t v = 0; for (int i = 0; i < 4; i++) { int b = (int)lroundf(c[i] * 255.f); if (b < 0) b = 0; if (b > 255) b = 255; v = v << 8 | (uint32_t)b; } return v; }

int main(int argc, char **argv) {
    const char *capdir = NULL, *dcdata = NULL, *level = "Learn_10"; long scene = -1; int all = 0;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--level") && i + 1 < argc) level = argv[++i];
        else if (!strcmp(argv[i], "--scene") && i + 1 < argc) scene = atol(argv[++i]);
        else if (!strcmp(argv[i], "--all")) all = 1; else if (!strcmp(argv[i], "--check")) g_check = 1;
        else if (!capdir) capdir = argv[i]; else if (!dcdata) dcdata = argv[i];
    }
    if (!capdir || !dcdata) { fprintf(stderr, "usage\n"); return 2; }
    long scenes[256]; int ns = 0;
    { DIR *d = opendir(capdir); struct dirent *e; while (d && (e = readdir(d))) { long k; if (sscanf(e->d_name, "f%ld", &k) == 1 && ns < 256) scenes[ns++] = k; } if (d) closedir(d); }
    for (int i = 0; i < ns; i++) for (int j = i + 1; j < ns; j++) if (scenes[j] < scenes[i]) { long t = scenes[i]; scenes[i] = scenes[j]; scenes[j] = t; }
    if (!all) { if (scene < 0 && ns) scene = scenes[0]; scenes[0] = scene; ns = 1; }
    char lvlp[1100], up[64]; snprintf(up, sizeof up, "%s", level); for (char *c = up; *c; c++) *c = (char)toupper((unsigned char)*c); snprintf(lvlp, sizeof lvlp, "%s/%s/%s.DAT", dcdata, up, up);
    uint8_t *lvl; size_t lvlN; if (!cpa_read_file(lvlp, &lvl, &lvlN)) return 2;
    CpaAnimTables T; if (!cpa_anim_tables_from_header(lvl, lvlN, &T)) return 2;
    for (int si = 0; si < ns; si++) {
        long sc = scenes[si]; char p[1100]; size_t n; long rs = sc - 1;
        snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); FILE *t = fopen(p, "rb"); if (t) fclose(t); else rs = sc;
        snprintf(p, sizeof p, "%s/ram_%ld.bin", capdir, rs); uint8_t *ram = slurp(p, &n); if (!ram || n != 16u << 20) continue;
        snprintf(p, sizeof p, "%s/f%ld/frame.bin", capdir, sc); size_t fn; uint8_t *fb = slurp(p, &fn); if (!fb) continue;
        uint32_t *H = (uint32_t *)fb; uint32_t nstrip = H[1], nvert = H[2]; TaS *strips = (TaS *)(fb + 16); TaV *tv = (TaV *)(fb + 16 + nstrip * 32);
        Cam cam; float hfov = rdf(ram, 0x8C00F300), asp = rdf(ram, 0x8C00F304);
        for (int i = 0; i < 3; i++) { cam.U[i] = rdf(ram, 0x8C00F308 + 4 * i); cam.F[i] = rdf(ram, 0x8C00F314 + 4 * i); cam.C[i] = rdf(ram, 0x8C00F394 + 4 * i); }
        cam.L[0] = cam.U[1]*cam.F[2] - cam.U[2]*cam.F[1]; cam.L[1] = cam.U[2]*cam.F[0] - cam.U[0]*cam.F[2]; cam.L[2] = cam.U[0]*cam.F[1] - cam.U[1]*cam.F[0];
        cam.fx = 320.0 / tan(hfov / 2.0); cam.fy = 240.0 / tan(hfov * asp / 2.0);
        CpaImage im; cpa_image_init(&im); cpa_image_add(&im, ram, n, RAM_BASE);
        NList po; memset(&po, 0, sizeof po); Ctx c = { &im, &T, &cam, &po }; unsigned wn = 0; uint32_t root; memcpy(&root, lvl + 13 * 4, 4);
        g_nls = 0; walk(&c, root, 0, &wn);
        qsort(po.a, po.n, sizeof *po.a, cmp_cx);
        CpaLight lights[64]; uint32_t nl_ = cpa_light_read_ram_list(&im, lights, 64); uint8_t *done = calloc(nvert + 1, 1);
        if (g_check) { int has = 0; for (uint32_t li = 0; li < nl_; li++) if (lights[li].type != CPA_LIGHT_PARALLEL && lights[li].type != CPA_LIGHT_AMBIENT && lights[li].enabled) has = 1; g_t.nLightSets += has; }
        for (uint32_t i = 0; i < nstrip; i++) { const TaS *s = &strips[i]; if (s->sprite) continue;
            for (uint32_t k = 0; k + 2 < s->count; k++) { OTri o; for (int j = 0; j < 3; j++) { const TaV *v = &tv[s->first + k + j]; o.sx[j] = v->x; o.sy[j] = v->y; o.z[j] = v->z; } o.v0 = s->first + k;
                int pi, m = match(&po, &o, 0.1, 2e-3, &pi); if (m < 0) continue; const NTri *q = &po.a[m];
                for (int j = 0; j < 3; j++) { int qj = perms[pi][j]; const TaV *v = &tv[s->first + k + j];
                    if (g_check) {
                        if (done[s->first + k + j]) continue; done[s->first + k + j] = 1;
                        uint32_t ob = pack(v->base); CpaLightMat lm; CpaLightEnv env; float vv[4] = { 0, 0, 0, 0 }, nW[3] = { 0, 0, 0 }, nl[3] = { 0, 0, 0 };
                        g_t.verts++; if (s->list) g_t.translucentList++;
                        if (!cpa_light_mat_read(&im, q->vm, &lm)) { g_t.noMat++; continue; }
                        uint32_t pn = cpa_u32(&im, q->geo + 4); if (cpa_is_ptr(&im, pn)) for (int a = 0; a < 3; a++) nl[a] = cpa_f32(&im, pn + q->vi[qj] * 12u + a * 4u);
                        float pl[3] = { 0, 0, 0 }; { uint32_t pvv = cpa_u32(&im, q->geo); for (int a = 0; a < 3; a++) pl[a] = cpa_f32(&im, pvv + q->vi[qj] * 12u + a * 4u); }
                        (void)nW; CpaLightObj ob_; cpa_light_obj_init(&ob_, getenv("LA_MIRROR") ? q->M : q->W); if (!getenv("LA_NOCULL")) cpa_light_obj_sphere(&ob_, &im, q->geo);
                        const CpaLight *useL = lights; uint32_t useN = nl_; { LSet *ls = getenv("LA_RAMLIST") ? NULL : ls_find(q->so); if (ls) { useL = ls->L; useN = ls->n; } else g_t.noSector++; }
                        cpa_light_env_default(&env); cpa_light_env_from_list(useL, useN, &env);
                        int unimpl = cpa_light_accum_vertex(useL, useN, &ob_, pl, q->wp[qj], nl, vv); if (unimpl) for (uint32_t li = 0; li < nl_; li++) if (lights[li].enabled && lights[li].type != 1 && lights[li].type != 2 && lights[li].type != 4) g_t.unimplType[lights[li].type & 7]++;
                        uint32_t c = cpa_light_argb(&lm, &env, vv);
                        if (getenv("LA_DBG2")) { float iv[3]; for (int a = 0; a < 3; a++) { float amb = lm.amb[a] + lm.dif[a] * env.G[a]; iv[a] = lm.dif[a] > 1e-6f ? ((float)((ob >> (16 - 8 * a)) & 255) / 510.f - amb) / lm.dif[a] : 0; }
                            printf("D sc %ld so %08X geo %08X vi %u vm %08X wp(%.1f %.1f %.1f) n(%.2f %.2f %.2f) imp(%.3f %.3f %.3f) got(%.3f %.3f %.3f) ob %08X c %08X dif %.2f amb %.2f\n", sc, q->so, q->geo, q->vi[qj], q->vm, q->wp[qj][0], q->wp[qj][1], q->wp[qj][2], nl[0], nl[1], nl[2], iv[0], iv[1], iv[2], vv[0], vv[1], vv[2], ob, c, lm.dif[0], lm.amb[0]); }
                        int ch[4] = { (int)(c >> 24), (int)(c >> 16 & 255), (int)(c >> 8 & 255), (int)(c & 255) }, oc[4] = { (int)(ob >> 24), (int)(ob >> 16 & 255), (int)(ob >> 8 & 255), (int)(ob & 255) }, me = 0;
                        for (int a = 0; a < 4; a++) { int e = abs(ch[a] - oc[a]); if (e > me) me = e; }
                        if (getenv("LA_DBG") && me > 8 && g_t.verts < 400) printf("DBG vm %08X n(%.3f %.3f %.3f) nW(%.3f %.3f %.3f) v(%.3f %.3f %.3f) G(%.3f) got %08X oracle %08X amb %.3f dif %.3f nl %u\n", q->vm, nl[0], nl[1], nl[2], nW[0], nW[1], nW[2], vv[0], vv[1], vv[2], env.G[0], c, ob, lm.amb[0], lm.dif[0], nl_);
                        if (me > g_t.maxErr) g_t.maxErr = me; g_t.errHist[me == 0 ? 0 : me == 1 ? 1 : me <= 3 ? 2 : me <= 15 ? 3 : 4]++;
                        if (c == ob) g_t.exact++;
                        if ((c & 0xFFFFFF) == (ob & 0xFFFFFF)) g_t.rgbExact++;
                        if (me <= 2) g_t.within2++;
                        if (c != ob) { if (unimpl) g_t.unimplLights++; else if ((ob & 0xFFFFFF) == 0xFFFFFF) g_t.satObs++; else g_t.other++; }
                        continue;
                    }
                    float nrm[3] = { 0, 0, 0 }; uint32_t pn = cpa_u32(&im, q->geo + 4); if (cpa_is_ptr(&im, pn)) for (int a = 0; a < 3; a++) nrm[a] = cpa_f32(&im, pn + q->vi[qj] * 12u + a * 4u);
                    printf("V %ld %08X %08X %u %08X %08X %08X L%u %f %f %f", sc, q->so, q->geo, q->vi[qj], q->vm, pack(v->base), pack(v->off), s->list, nrm[0], nrm[1], nrm[2]);
                    for (int a = 0; a < 3; a++) for (int b = 0; b < 3; b++) printf(" %f", q->M[a * 4 + b]);
                    printf(" %f %f %f %08X %08X ctl %08X tsp %08X tcw %08X\n", q->wp[qj][0], q->wp[qj][1], q->wp[qj][2], q->tex, q->texFlags, s->ctl, s->tsp, s->tcw); } } }
        free(po.a); free(ram); free(fb); free(done);
    }
    if (g_check) {
        uint32_t m = g_t.verts - g_t.noMat; if (!m) m = 1;
        printf("LIGHTACTOR %s scenes %d actor-vertices %u (translucent-list %u, no readable material %u) | ARGB exact %u (%.3f%%) RGB exact %u (%.3f%%) within 2 %u (%.3f%%) | max channel error 0:%u 1:%u 2-3:%u 4-15:%u >=16:%u (max %d) | residual %u = light list holds omni/spot/type-5 lights (not implemented) %u + observed pure white (saturation by a light not modelled) %u + other %u | scenes whose list has an unimplemented light type: %u (type counts skipped: omni %u spot %u t5 %u)\n",
               level, ns, g_t.verts, g_t.translucentList, g_t.noMat, g_t.exact, 100.0 * g_t.exact / m, g_t.rgbExact, 100.0 * g_t.rgbExact / m, g_t.within2, 100.0 * g_t.within2 / m,
               g_t.errHist[0], g_t.errHist[1], g_t.errHist[2], g_t.errHist[3], g_t.errHist[4], g_t.maxErr, m - g_t.exact, g_t.unimplLights, g_t.satObs, g_t.other, g_t.nLightSets, g_t.unimplType[2], g_t.unimplType[3], g_t.unimplType[5]);
    }
    if (g_check) printf("  [actor vertices whose actor is not in any sector list (fallback: guest light list): %u]\n", g_t.noSector);
    free(lvl);
    return 0;
}
