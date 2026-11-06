#include "cpa_phys.h"
#include <math.h>
#include <string.h>

static void sub3(const float a[3], const float b[3], float o[3]) { o[0] = a[0] - b[0]; o[1] = a[1] - b[1]; o[2] = a[2] - b[2]; }
static float dot3(const float a[3], const float b[3]) { return a[0] * b[0] + a[1] * b[1] + a[2] * b[2]; }

void cpa_phys_closest_tri(const float p[3], const float a[3], const float b[3], const float c[3], float out[3]) {
    float ab[3], ac[3], ap[3];
    sub3(b, a, ab); sub3(c, a, ac); sub3(p, a, ap);
    float d1 = dot3(ab, ap), d2 = dot3(ac, ap);
    if (d1 <= 0 && d2 <= 0) { memcpy(out, a, 12); return; }
    float bp[3]; sub3(p, b, bp);
    float d3 = dot3(ab, bp), d4 = dot3(ac, bp);
    if (d3 >= 0 && d4 <= d3) { memcpy(out, b, 12); return; }
    float vc = d1 * d4 - d3 * d2;
    if (vc <= 0 && d1 >= 0 && d3 <= 0) { float v = d1 / (d1 - d3); for (int k = 0; k < 3; k++) out[k] = a[k] + v * ab[k]; return; }
    float cp[3]; sub3(p, c, cp);
    float d5 = dot3(ab, cp), d6 = dot3(ac, cp);
    if (d6 >= 0 && d5 <= d6) { memcpy(out, c, 12); return; }
    float vb = d5 * d2 - d1 * d6;
    if (vb <= 0 && d2 >= 0 && d6 <= 0) { float w = d2 / (d2 - d6); for (int k = 0; k < 3; k++) out[k] = a[k] + w * ac[k]; return; }
    float va = d3 * d6 - d5 * d4;
    if (va <= 0 && (d4 - d3) >= 0 && (d5 - d6) >= 0) { float w = (d4 - d3) / ((d4 - d3) + (d5 - d6)); for (int k = 0; k < 3; k++) out[k] = b[k] + w * (c[k] - b[k]); return; }
    float den = 1.f / (va + vb + vc), v = vb * den, w = vc * den;
    for (int k = 0; k < 3; k++) out[k] = a[k] + ab[k] * v + ac[k] * w;
}

/* distance from centre (x,y,zc) to the triangle, with the closest point */
static float tri_dist(const CpaCollWorld *w, uint32_t t, float x, float y, float zc, float cp[3]) {
    float c[3] = { x, y, zc };
    cpa_phys_closest_tri(c, w->vert[w->tri[t][0]], w->vert[w->tri[t][1]], w->vert[w->tri[t][2]], cp);
    float d[3]; sub3(c, cp, d);
    return sqrtf(dot3(d, d));
}

int cpa_phys_rest(const CpaCollWorld *w, float x, float y, float zStart, float maxUp, float maxDown, float r, float minNz, uint32_t skipCmat, float *zOrigin, CpaPhysContact *out, const uint32_t *soAllow, uint32_t nAllow) {
    float best = -1e30f; int found = 0; uint32_t bt = 0;
    float c0 = zStart + r, cTop = c0 + maxUp, cLow = c0 - maxDown;
    for (uint32_t m = 0; m < w->nMeshes; m++) {
        const CpaCollMesh *ms = &w->meshes[m];
        if (!ms->isStatic || !ms->nTri) continue;
        if (nAllow) { uint32_t k = 0; while (k < nAllow && soAllow[k] != ms->soVa) k++; if (k == nAllow) continue; }   /* only IPOs of the actor's sector collision list */
        if (x < ms->bmin[0] - r || x > ms->bmax[0] + r || y < ms->bmin[1] - r || y > ms->bmax[1] + r) continue;
        if (ms->bmax[2] + r < cLow - r) continue;
        for (uint32_t t = ms->firstTri; t < ms->firstTri + ms->nTri; t++) {
            const float *n = w->nrm[t];
            if (skipCmat && w->mats[w->triMat[t]].hasCollideId && (w->mats[w->triMat[t]].collideId & skipCmat)) continue;   /* non-supporting collide material (water) */
            if (n[2] < minNz || (n[0] == 0.f && n[1] == 0.f && n[2] == 0.f)) continue;   /* too steep to support (wall) or degenerate */
            float lo = 1e30f, hi = -1e30f, xlo = 1e30f, xhi = -1e30f, ylo = 1e30f, yhi = -1e30f;
            for (int j = 0; j < 3; j++) {
                const float *v = w->vert[w->tri[t][j]];
                if (v[2] < lo) lo = v[2]; if (v[2] > hi) hi = v[2];
                if (v[0] < xlo) xlo = v[0]; if (v[0] > xhi) xhi = v[0];
                if (v[1] < ylo) ylo = v[1]; if (v[1] > yhi) yhi = v[1];
            }
            if (x < xlo - r || x > xhi + r || y < ylo - r || y > yhi + r) continue;
            if (hi + r < cLow) continue;                                  /* the sphere can never reach it inside the search window */
            if (lo - r > cTop) continue;
            float cp[3];
            /* one-sided discrete test: the sphere centre at the START position must be in front of the triangle (a centre behind it is ignored) */
            tri_dist(w, t, x, y, c0, cp);
            { float d0[3] = { x - cp[0], y - cp[1], c0 - cp[2] }; if (dot3(n, d0) <= 0.f) continue; }
            /* distance to a convex set is convex along the vertical line: ternary-search its minimum z*, then bisect the upper crossing of r in [z*, top] */
            float ta = lo - 0.01f, tb = hi + 0.01f;
            for (int it = 0; it < 40; it++) {
                float m1 = ta + (tb - ta) / 3.f, m2 = tb - (tb - ta) / 3.f;
                if (tri_dist(w, t, x, y, m1, cp) < tri_dist(w, t, x, y, m2, cp)) tb = m2; else ta = m1;
            }
            float zlo = 0.5f * (ta + tb), zhi = hi + r + 1e-3f;
            if (tri_dist(w, t, x, y, zlo, cp) >= r) continue;             /* the column misses the triangle by more than r */
            if (zhi > cTop) { zhi = cTop; if (tri_dist(w, t, x, y, zhi, cp) < r) continue; }   /* already inside from the top: not a resting contact */
            if (zlo > zhi) continue;
            if (zhi < cLow) continue;
            for (int it = 0; it < 40; it++) {                             /* distance - r is convex in z: single crossing above z* */
                float mid = 0.5f * (zlo + zhi);
                if (tri_dist(w, t, x, y, mid, cp) >= r) zhi = mid; else zlo = mid;
            }
            float zc = zhi; tri_dist(w, t, x, y, zc, cp);
            float d[3] = { x - cp[0], y - cp[1], zc - cp[2] };
            if (dot3(n, d) <= 0.f) continue;                              /* back side */
            if (zc - r > best) { best = zc - r; found = 1; bt = t; if (out) { out->hit = 1; memcpy(out->n, n, 12); memcpy(out->p, cp, 12); out->tri = t; out->mat = w->triMat[t]; } }
        }
    }
    if (!found) { if (out) out->hit = 0; return 0; }
    *zOrigin = best; (void)bt;
    return 1;
}

void cpa_phys_free_step(float pos[3], float vel[3], float gravity, float dt) {
    vel[2] -= gravity * dt;                         /* VERIFIED: velocity first (semi-implicit Euler), gravity acts on z only */
    for (int k = 0; k < 3; k++) pos[k] += vel[k] * dt;
}
