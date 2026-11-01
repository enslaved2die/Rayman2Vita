/* Software model of the vitaGL draw path: replays exactly what hle/vita_gl_render.c sends to GL (ta_build_gl_ex -> ta_gl_make_clip + ta_gl_projection, same
 * batch order and state mapping) through a tiny GL-semantics rasteriser (clip space -> NDC -> viewport, perspective-correct varyings, depth = (ndc_z+1)/2 with
 * GL_GREATER etc., GL_REPLACE/MODULATE/DECAL, blend factors) and writes a PPM.  tools/ta_render.py (the independent reference model, works from the raw
 * TA vertices) must produce the same picture:  python3 tools/ta_render.py f v o.png --no-bilinear --no-mip ; compare with tools/cmp_ppm.py.
 * usage: test_glpath frame.bin vram.bin pvrregs.bin out.ppm   (nearest sampling, mip level 0) */
#include "../ta.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
static uint8_t *slurp(const char *p, size_t *n) { FILE *f = fopen(p, "rb"); if (!f) return NULL; fseek(f, 0, SEEK_END); *n = (size_t)ftell(f); fseek(f, 0, SEEK_SET); uint8_t *b = malloc(*n); if (fread(b, 1, *n, f) != *n) { free(b); b = NULL; } fclose(f); return b; }
typedef struct { uint32_t tcw, tsp; uint32_t *px; int w, h; } Tex;
static Tex texes[512]; static int ntex;
static const Tex *get_tex(const uint8_t *vram, size_t vn, const TaTexEnv *env, uint32_t tcw, uint32_t tsp)
{
    for (int i = 0; i < ntex; i++) if (texes[i].tcw == tcw && texes[i].tsp == tsp) return &texes[i];
    Tex *t = &texes[ntex++]; int w, h; ta_tex_size(tsp, &w, &h); if (tcw >> 31) h = w;
    t->tcw = tcw; t->tsp = tsp; t->w = w; t->h = h; t->px = malloc((size_t)w * h * 4);
    ta_tex_decode(vram, (uint32_t)vn, tcw, tsp, env, 0, (int)((tsp >> 19) & 1), t->px);
    return t;
}
static float fb[480][640][4], zb[480][640];
static float factor(int inst, int is_dst, const float *src, float sa, const float *dst, int use_alpha)
{ (void)src; (void)dst; (void)is_dst; (void)sa; (void)use_alpha; return (float)inst; }
static void blend_f(int inst, int is_dst, const float src[3], float sa, const float dst[3], int use_alpha, float out[3])
{
    float a = use_alpha ? sa : 1.f;
    switch (inst & 7) {
    case 0: out[0] = out[1] = out[2] = 0; break;
    case 1: out[0] = out[1] = out[2] = 1; break;
    case 2: for (int k = 0; k < 3; k++) out[k] = is_dst ? src[k] : dst[k]; break;
    case 3: for (int k = 0; k < 3; k++) out[k] = 1.f - (is_dst ? src[k] : dst[k]); break;
    case 4: out[0] = out[1] = out[2] = a; break;
    case 5: out[0] = out[1] = out[2] = 1.f - a; break;
    case 6: out[0] = out[1] = out[2] = 1.f; break;                 /* dst alpha: framebuffer alpha = 1 */
    default: out[0] = out[1] = out[2] = 0.f; break;
    }
}
int main(int argc, char **argv)
{
    (void)factor;
    if (argc < 5) return 2;
    size_t fn, vn, rn = 0; uint8_t *fr = slurp(argv[1], &fn), *vr = slurp(argv[2], &vn), *rg = slurp(argv[3], &rn);
    if (!fr || !vr) return 1;
    TaTexEnv env = { 0, 0, 0 }; uint32_t pt_ref = 0;
    if (rg && rn >= 4160) { const uint32_t *r = (const uint32_t *)rg; env.pal = r; env.pal_ctrl = r[1024]; env.text_control = r[1025]; pt_ref = r[1026] & 255; }
    /* rebuild a TaFrame from the dump */
    uint32_t ns, nv; memcpy(&ns, fr + 4, 4); memcpy(&nv, fr + 8, 4);
    TaFrame f; memset(&f, 0, sizeof f);
    f.strips = calloc(ns ? ns : 1, sizeof(TaStrip)); f.nstrips = ns;
    for (uint32_t i = 0; i < ns; i++) {
        uint32_t r[8]; memcpy(r, fr + 16 + 32 * i, 32);
        uint32_t w[8] = { r[0], r[1], r[2], r[3], 0, 0, 0, 0 };
        ta_decode_header(&f.strips[i].st, w, NULL);
        f.strips[i].st.is_sprite = (int)r[6]; f.strips[i].st.list = (uint8_t)r[7];
        f.strips[i].first = r[4]; f.strips[i].count = r[5];
    }
    f.verts = malloc(nv * sizeof(TaVertex)); memcpy(f.verts, fr + 16 + 32 * ns, nv * sizeof(TaVertex)); f.nverts = nv;
    TaGl gl; TaBuildOpts o = { 1, 1, -2.f, -2.f, 642.f, 482.f };
    if (ta_build_gl_ex(&f, &gl, &o)) return 1;
    float cut = ta_gl_depth_cut(&gl), M[16]; ta_gl_projection(cut, M);
    TaClipVertex *cv = malloc((gl.nverts + 1) * sizeof *cv); ta_gl_make_clip(gl.verts, gl.nverts, cut, cv);
    memset(fb, 0, sizeof fb); memset(zb, 0, sizeof zb);                 /* clear: colour 0, depth 0 (GL_GREATER) */
    static const int order[3] = { TA_L_OPAQUE, TA_L_PUNCH, TA_L_TRANS };
    static const char *envn[4] = { "REPLACE", "MODULATE", "DECAL", "MODULATE" };
    (void)envn;
    for (int li = 0; li < 3; li++) {
        int L = order[li];
        for (uint32_t b = 0; b < gl.list_count[L]; b++) {
            const TaBatch *bt = &gl.batches[gl.list_first[L] + b]; const TaState *st = &bt->st;
            const Tex *tx = st->textured ? get_tex(vr, vn, &env, st->tcw, st->tsp) : NULL;
            int clamp_u = st->clamp_u, clamp_v = st->clamp_v, flip_u = st->flip_u, flip_v = st->flip_v;   /* TSP: 15 ClampV, 16 ClampU, 17 FlipV, 18 FlipU (decoded by ta_decode_header) */
            for (uint32_t t = 0; t + 2 < bt->count; t += 3) {
                float sx[3], sy[3], sz[3], cw[3];
                for (int k = 0; k < 3; k++) {
                    const TaClipVertex *v = &cv[bt->first + t + (uint32_t)k];
                    float in4[4] = { v->px, v->py, v->pz, 1.f }, c4[4];
                    for (int r = 0; r < 4; r++) c4[r] = M[r] * in4[0] + M[4 + r] * in4[1] + M[8 + r] * in4[2] + M[12 + r] * in4[3];
                    cw[k] = c4[3]; sx[k] = (c4[0] / c4[3] + 1.f) * 320.f; sy[k] = (1.f - c4[1] / c4[3]) * 240.f; sz[k] = (c4[2] / c4[3] + 1.f) * 0.5f;
                }
                float den = (sy[1] - sy[2]) * (sx[0] - sx[2]) + (sx[2] - sx[1]) * (sy[0] - sy[2]);
                if (fabsf(den) < 1e-12f) continue;
                int x0 = (int)fmaxf(0, floorf(fminf(sx[0], fminf(sx[1], sx[2])))), x1 = (int)fminf(639, ceilf(fmaxf(sx[0], fmaxf(sx[1], sx[2]))));
                int y0 = (int)fmaxf(0, floorf(fminf(sy[0], fminf(sy[1], sy[2])))), y1 = (int)fminf(479, ceilf(fmaxf(sy[0], fmaxf(sy[1], sy[2]))));
                for (int y = y0; y <= y1; y++) for (int x = x0; x <= x1; x++) {
                    float px = x + 0.5f, py = y + 0.5f;
                    float l0 = ((sy[1] - sy[2]) * (px - sx[2]) + (sx[2] - sx[1]) * (py - sy[2])) / den, l1 = ((sy[2] - sy[0]) * (px - sx[2]) + (sx[0] - sx[2]) * (py - sy[2])) / den, l2 = 1.f - l0 - l1;
                    if (l0 < 0 || l1 < 0 || l2 < 0) continue;
                    float z = l0 * sz[0] + l1 * sz[1] + l2 * sz[2];
                    int pass; float zo = zb[y][x];
                    switch (st->depth_mode & 7) { case 0: pass = 0; break; case 1: pass = z < zo; break; case 2: pass = z == zo; break; case 3: pass = z <= zo; break; case 4: pass = z > zo; break; case 5: pass = z != zo; break; case 6: pass = z >= zo; break; default: pass = 1; }
                    if (!pass) continue;
                    float p0 = l0 / cw[0], p1 = l1 / cw[1], p2 = l2 / cw[2], ps = p0 + p1 + p2; p0 /= ps; p1 /= ps; p2 /= ps;   /* GL perspective-correct weights */
                    const TaClipVertex *v0 = &cv[bt->first + t], *v1 = v0 + 1, *v2 = v0 + 2;
                    float u = p0 * v0->u + p1 * v1->u + p2 * v2->u, vv = p0 * v0->v + p1 * v1->v + p2 * v2->v;
                    float col[4] = { p0 * v0->r + p1 * v1->r + p2 * v2->r, p0 * v0->g + p1 * v1->g + p2 * v2->g, p0 * v0->b + p1 * v1->b + p2 * v2->b, p0 * v0->a + p1 * v1->a + p2 * v2->a };
                    float rgb[3] = { col[0], col[1], col[2] }, a = col[3];
                    if (tx) {
                        float uu = u * tx->w, v2s = vv * tx->h; int ix = (int)floorf(uu), iy = (int)floorf(v2s);
                        if (clamp_u) ix = ix < 0 ? 0 : ix >= tx->w ? tx->w - 1 : ix; else if (flip_u) { int p = ((ix % (2 * tx->w)) + 2 * tx->w) % (2 * tx->w); ix = p >= tx->w ? 2 * tx->w - 1 - p : p; } else ix = ((ix % tx->w) + tx->w) % tx->w;
                        if (clamp_v) iy = iy < 0 ? 0 : iy >= tx->h ? tx->h - 1 : iy; else if (flip_v) { int p = ((iy % (2 * tx->h)) + 2 * tx->h) % (2 * tx->h); iy = p >= tx->h ? 2 * tx->h - 1 - p : p; } else iy = ((iy % tx->h) + tx->h) % tx->h;
                        uint32_t tp = tx->px[iy * tx->w + ix]; float tr[3] = { (tp & 255) / 255.f, ((tp >> 8) & 255) / 255.f, ((tp >> 16) & 255) / 255.f }, ta = (tp >> 24) / 255.f;
                        switch (st->shading & 3) {
                        case 0: for (int k = 0; k < 3; k++) rgb[k] = tr[k]; a = ta; break;                       /* GL_REPLACE */
                        case 1: for (int k = 0; k < 3; k++) rgb[k] = tr[k] * rgb[k]; a = ta * a; break;           /* GL_MODULATE (vertex alpha already 1) */
                        case 2: for (int k = 0; k < 3; k++) rgb[k] = rgb[k] * (1 - ta) + tr[k] * ta; break;      /* GL_DECAL */
                        default: for (int k = 0; k < 3; k++) rgb[k] = tr[k] * rgb[k]; a = ta * a; break;
                        }
                    }
                    if (L == TA_L_PUNCH && !(a >= (float)(pt_ref ? pt_ref : 1) / 255.f)) continue;
                    float *d = fb[y][x];
                    if (L == TA_L_TRANS) {
                        float sf[3], df[3], dst[3] = { d[0], d[1], d[2] };
                        blend_f(st->src_blend, 0, rgb, a, dst, st->use_alpha, sf); blend_f(st->dst_blend, 1, rgb, a, dst, st->use_alpha, df);
                        for (int k = 0; k < 3; k++) { float r = rgb[k] * sf[k] + dst[k] * df[k]; d[k] = r < 0 ? 0 : r > 1 ? 1 : r; }
                    } else for (int k = 0; k < 3; k++) d[k] = rgb[k] < 0 ? 0 : rgb[k] > 1 ? 1 : rgb[k];
                    if (!st->z_write_disable) zb[y][x] = z;
                }
            }
        }
    }
    FILE *out = fopen(argv[4], "wb"); fprintf(out, "P6\n640 480\n255\n");
    for (int y = 0; y < 480; y++) for (int x = 0; x < 640; x++) for (int k = 0; k < 3; k++) fputc((int)(fb[y][x][k] * 255.f + 0.5f), out);
    fclose(out); printf("glpath: %u verts %u batches cut=%g\n", gl.nverts, gl.nbatches, cut);
    return 0;
}
