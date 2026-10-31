/* ============================================================================
 * dc_level_parse.c -- HOST-side Dreamcast Rayman 2 level geometry extractor
 *
 * Parses FIX.DAT + <LEVEL>.DAT (+ optional <LEVEL>.TMP, INFO.LOG,
 * TEXTURE_<LEVEL>.LOG) and walks the real World SuperObject tree.  For every
 * static visual mesh (IPO -> PO -> VisualSet -> GeometricObject) it extracts
 * vertices, triangle indices, UVs, texture reference and world matrix and
 * writes a Wavefront OBJ plus a stats summary.
 *
 * Build:  cc -O2 -o build/dc_level_parse tools/dc_level_parse.c -lm
 * Run:    build/dc_level_parse [dcdata_dir] [LEVEL] [out_dir]
 *         defaults: assets/dc/DCDATA  LEARN_10  tools/out
 *
 * Every structure layout used here was verified against the data; see
 * tools/DC_LEVEL_FORMAT.md for evidence and for what is NOT decoded.
 * Nothing in src/ is touched or included.
 * ============================================================================ */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/* ---------------------------------------------------------------------------
 * Memory images.  Both snapshots are raw dumps of Dreamcast RAM and hold
 * absolute VAs (0x8Cxxxxxx).  An image maps file offset 0 to `base`.
 * --------------------------------------------------------------------------- */
typedef struct {
    const char *name;
    uint32_t    base;
    uint8_t    *p;
    size_t      n;
    uint8_t    *touched;   /* bitmap, 1 bit per 4-byte slot: slot read as pointer by traversal */
} Img;

static Img g_lev = { "LEVEL", 0, 0, 0, 0 };
static Img g_fix = { "FIX",   0, 0, 0, 0 };

static uint8_t *load_file(const char *path, size_t *n)
{
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz < 0) { fclose(f); return NULL; }
    uint8_t *b = (uint8_t *)malloc((size_t)sz + 16);
    if (!b) { fclose(f); return NULL; }
    if (fread(b, 1, (size_t)sz, f) != (size_t)sz) { fclose(f); free(b); return NULL; }
    memset(b + sz, 0, 16);
    fclose(f);
    *n = (size_t)sz;
    return b;
}

static Img *img_of(uint32_t va, size_t len)
{
    Img *c[2] = { &g_lev, &g_fix };
    for (int i = 0; i < 2; i++) {
        Img *m = c[i];
        if (va >= m->base && (uint64_t)va + len <= (uint64_t)m->base + m->n) return m;
    }
    return NULL;
}

static int rd32(uint32_t va, uint32_t *out)
{
    Img *m = img_of(va, 4);
    if (!m || (va & 3)) return 0;
    memcpy(out, m->p + (va - m->base), 4);
    return 1;
}

/* read a 32-bit field that is a pointer slot, record the slot as touched */
static int rdp(uint32_t va, uint32_t *out)
{
    Img *m = img_of(va, 4);
    if (!m || (va & 3)) return 0;
    uint32_t slot = (va - m->base) >> 2;
    m->touched[slot >> 3] |= (uint8_t)(1u << (slot & 7));
    memcpy(out, m->p + (va - m->base), 4);
    return 1;
}

static int rd16(uint32_t va, uint16_t *out)
{
    Img *m = img_of(va, 2);
    if (!m || (va & 1)) return 0;
    memcpy(out, m->p + (va - m->base), 2);
    return 1;
}

static int rdf(uint32_t va, float *out)
{
    uint32_t u;
    if (!rd32(va, &u)) return 0;
    memcpy(out, &u, 4);
    return isfinite(*out);
}

static int is_ptr(uint32_t v) { return v && !(v & 3) && img_of(v, 4) != NULL; }
/* u16 index arrays are only 2-byte aligned */
static int is_ptr16(uint32_t v) { return v && !(v & 1) && img_of(v, 2) != NULL; }

/* ---------------------------------------------------------------------------
 * Name tables parsed from the (optional) debug logs shipped next to the level
 * --------------------------------------------------------------------------- */
typedef struct { uint32_t va; char name[160]; } NameEnt;
static NameEnt *g_so_names; static int g_n_so_names;
static NameEnt *g_tex_names; static int g_n_tex_names;

static const char *name_lookup(NameEnt *t, int n, uint32_t va)
{
    for (int i = 0; i < n; i++) if (t[i].va == va) return t[i].name;
    return NULL;
}

static void parse_info_log(const char *path)
{
    FILE *f = fopen(path, "r");
    if (!f) return;
    char line[1024];
    g_so_names = (NameEnt *)calloc(2048, sizeof(NameEnt));
    while (fgets(line, sizeof line, f)) {
        char *tag = strstr(line, "(eST_SuperObject)");
        if (!tag) continue;
        uint32_t va = (uint32_t)strtoul(line, NULL, 16);
        char *nm = tag + strlen("(eST_SuperObject)");
        char *end = nm + strlen(nm);
        while (end > nm && (end[-1] == '\n' || end[-1] == '\r' || end[-1] == ' ')) end--;
        while (end > nm && end[-1] != ' ') end--;           /* strip trailing 0x... id */
        while (end > nm && end[-1] == ' ') end--;
        *end = 0;
        char *s = strstr(nm, "Sector:");
        if (s) nm = s + 7;
        if (g_n_so_names < 2048) {
            g_so_names[g_n_so_names].va = va;
            snprintf(g_so_names[g_n_so_names].name, sizeof g_so_names[0].name, "%s", nm);
            g_n_so_names++;
        }
    }
    fclose(f);
}

static void parse_tex_log(const char *path)
{
    FILE *f = fopen(path, "r");
    if (!f) return;
    char line[1024];
    g_tex_names = (NameEnt *)calloc(1024, sizeof(NameEnt));
    while (fgets(line, sizeof line, f)) {
        char *colon = strchr(line, ':');
        if (!colon || strncmp(line, "0x", 2)) continue;
        uint32_t va = (uint32_t)strtoul(line, NULL, 16);
        char *nm = colon + 1;
        while (*nm == ' ' || *nm == '\t') nm++;
        char *sp = nm;
        while (*sp && *sp != ' ' && *sp != '\t' && *sp != '\n' && *sp != '\r') sp++;
        *sp = 0;
        if (g_n_tex_names < 1024) {
            g_tex_names[g_n_tex_names].va = va;
            snprintf(g_tex_names[g_n_tex_names].name, sizeof g_tex_names[0].name, "%s", nm);
            g_n_tex_names++;
        }
    }
    fclose(f);
}

static void sanitize(char *s)
{
    for (; *s; s++) if (!isalnum((unsigned char)*s) && *s != '_' && *s != '-' && *s != '.') *s = '_';
}

/* ---------------------------------------------------------------------------
 * SuperObject (0x48 bytes, verified):
 *   +00 type  +04 data  +08 firstChild +0C lastChild +10 numChildren
 *   +14 next  +18 prev  +1C parent     +20 localMatrix* +24 globalMatrix*
 * Types seen in LEARN_10: 1 world, 2 actor, 4 sector, 0x20 IPO
 * --------------------------------------------------------------------------- */
#define SO_WORDS 18
typedef struct { uint32_t w[SO_WORDS]; } SO;

static int so_read(uint32_t va, SO *so)
{
    for (int i = 0; i < SO_WORDS; i++) {
        int ok = (i == 0 || i == 4 || i == 10 || i >= 11) ? rd32(va + 4u * i, &so->w[i])
                                                          : rdp(va + 4u * i, &so->w[i]);
        if (!ok) return 0;
    }
    return 1;
}

/* Matrix object: +00 u32 type, +04 float rot3x3[9], +28 float m4x4[16] (row vectors,
 * translation in row 3).  Verified on 11/11 matrix pointers into FIX plus type-3 sample. */
typedef struct { float m[16]; int ok; } Mat;
static void mat_ident(Mat *r) { memset(r, 0, sizeof *r); r->m[0] = r->m[5] = r->m[10] = r->m[15] = 1.f; r->ok = 1; }

static int mat_read(uint32_t va, Mat *r)
{
    uint32_t type;
    r->ok = 0;
    if (!rd32(va, &type) || type < 1 || type > 6) return 0;
    for (int i = 0; i < 16; i++) if (!rdf(va + 0x28 + 4u * i, &r->m[i])) return 0;
    r->ok = 1;
    return 1;
}

static void mat_mul(const Mat *a, const Mat *b, Mat *r) /* r = a * b (row-vector convention) */
{
    Mat t;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            float s = 0;
            for (int k = 0; k < 4; k++) s += a->m[i * 4 + k] * b->m[k * 4 + j];
            t.m[i * 4 + j] = s;
        }
    t.ok = 1;
    *r = t;
}

static void xform(const Mat *m, const float v[3], float o[3])
{
    for (int j = 0; j < 3; j++)
        o[j] = v[0] * m->m[j] + v[1] * m->m[4 + j] + v[2] * m->m[8 + j] + m->m[12 + j];
}

/* ---------------------------------------------------------------------------
 * Statistics
 * --------------------------------------------------------------------------- */
static struct {
    int so_total, so_type_count[0x100], so_other, so_max_depth;
    int so_count_mismatch, so_parent_mismatch, so_cycle, so_unreadable;
    int ipo_total, ipo_with_mesh, ipo_bad_chain;
    int geo_ok, geo_bad;
    int elem_total, elem_not_type1, elem_bad;
    long long verts, tris;
    int mat_ok, mat_bad, glob_eq_chain, glob_ne_chain, glob_nonident;
    double bmin[3], bmax[3];
    int fix_mat_ok, fix_mat_total;
} S;

typedef struct { uint32_t tex; long long tris; } TexUse;
static TexUse g_tex_use[512]; static int g_n_tex_use;

static void tex_note(uint32_t tex, int tris)
{
    for (int i = 0; i < g_n_tex_use; i++) if (g_tex_use[i].tex == tex) { g_tex_use[i].tris += tris; return; }
    if (g_n_tex_use < 512) { g_tex_use[g_n_tex_use].tex = tex; g_tex_use[g_n_tex_use].tris = tris; g_n_tex_use++; }
}

static uint32_t g_gm_seen[1024]; static int g_n_gm;
static void gm_note(uint32_t gm)
{
    for (int i = 0; i < g_n_gm; i++) if (g_gm_seen[i] == gm) return;
    if (g_n_gm < 1024) g_gm_seen[g_n_gm++] = gm;
}

/* ---------------------------------------------------------------------------
 * OBJ writer state
 * --------------------------------------------------------------------------- */
static FILE *g_obj, *g_mtl;
static long g_vbase = 1, g_vtbase = 1;
static int  g_obj_groups;
/* actor meshes go to a separate OBJ (own vertex/uv index bases) */
static FILE *g_aobj;
static long g_avbase = 1, g_avtbase = 1;
static uint32_t g_geo_done[8192]; static int g_n_geo_done;   /* actor geo VAs already emitted (dedupe) */
static struct { int actors, actors_null3d, actors_tblfail, actors_nomesh, table_entries, null_po, bad_chain, dup_geo, geo_emitted, geo_bad; long long tris, verts; } A;

static const char *tex_name(uint32_t tex, char *buf, size_t n)
{
    const char *nm = name_lookup(g_tex_names, g_n_tex_names, tex);
    if (nm) { snprintf(buf, n, "%s", nm); sanitize(buf); }
    else snprintf(buf, n, "tex_%08X", tex);
    return buf;
}

/* Parse one GeometricObject, transform to world and emit to OBJ. */
static int emit_geo(uint32_t geo, const Mat *wm, const char *group)
{
    uint32_t pv, pn, ptypes, pelems, cnt;
    if (!rdp(geo + 0x00, &pv) || !rdp(geo + 0x04, &pn) || !rdp(geo + 0x10, &ptypes) ||
        !rdp(geo + 0x14, &pelems) || !rd32(geo + 0x2C, &cnt)) return 0;
    uint32_t nv = cnt & 0xFFFF, ne = cnt >> 16;
    if (!nv || nv > 20000 || !ne || ne > 256 || !is_ptr(pv) || !is_ptr(ptypes) || !is_ptr(pelems)) return 0;
    if (!img_of(pv, nv * 12)) return 0;

    float (*vw)[3] = (float (*)[3])malloc(sizeof(float[3]) * nv);
    for (uint32_t i = 0; i < nv; i++) {
        float v[3];
        for (int k = 0; k < 3; k++) if (!rdf(pv + i * 12 + k * 4, &v[k])) { free(vw); return 0; }
        xform(wm, v, vw[i]);
        for (int k = 0; k < 3; k++) {
            if (vw[i][k] < S.bmin[k]) S.bmin[k] = vw[i][k];
            if (vw[i][k] > S.bmax[k]) S.bmax[k] = vw[i][k];
        }
    }
    fprintf(g_obj, "o %s\n", group);
    g_obj_groups++;
    for (uint32_t i = 0; i < nv; i++) fprintf(g_obj, "v %.6f %.6f %.6f\n", vw[i][0], vw[i][1], vw[i][2]);
    S.verts += nv;

    for (uint32_t e = 0; e < ne; e++) {
        uint16_t etype; uint32_t el, w[8];
        S.elem_total++;
        if (!rd16(ptypes + 2 * e, &etype) || !rdp(pelems + 4 * e, &el) || !is_ptr(el)) { S.elem_bad++; continue; }
        if (etype != 1) { S.elem_not_type1++; continue; }
        int ok = 1;
        for (int i = 0; i < 8; i++) ok &= (i == 1 || i == 7) ? rd32(el + 4u * i, &w[i]) : rdp(el + 4u * i, &w[i]);
        uint32_t ntri = w[1] & 0xFFFF, nuv = w[1] >> 16;
        if (!ok || !ntri || !is_ptr16(w[2]) || !is_ptr16(w[3]) || !is_ptr(w[5]) ||
            !img_of(w[2], ntri * 6) || !img_of(w[3], ntri * 6) || !img_of(w[5], nuv * 8)) { S.elem_bad++; continue; }

        /* texture: element->GameMaterial->VisualMaterial->(+0x4C) texture struct */
        uint32_t vm = 0, tex = 0;
        if (is_ptr(w[0])) { gm_note(w[0]); if (rdp(w[0], &vm) && is_ptr(vm)) rdp(vm + 0x4C, &tex); }
        char tn[200];
        tex_name(tex, tn, sizeof tn);

        fprintf(g_obj, "g %s_e%u\nusemtl %s\n", group, e, tn);
        for (uint32_t i = 0; i < nuv; i++) {
            float u, v;
            if (!rdf(w[5] + i * 8, &u) || !rdf(w[5] + i * 8 + 4, &v)) { u = v = 0; }
            fprintf(g_obj, "vt %.6f %.6f\n", u, v);
        }
        int emitted = 0;
        for (uint32_t t = 0; t < ntri; t++) {
            uint16_t vi[3], ui[3];
            int fo = 1;
            for (int k = 0; k < 3; k++) fo &= rd16(w[2] + t * 6 + k * 2, &vi[k]) && rd16(w[3] + t * 6 + k * 2, &ui[k]);
            if (!fo || vi[0] >= nv || vi[1] >= nv || vi[2] >= nv || ui[0] >= nuv || ui[1] >= nuv || ui[2] >= nuv) { S.elem_bad++; continue; }
            fprintf(g_obj, "f %ld/%ld %ld/%ld %ld/%ld\n",
                    g_vbase + vi[0], g_vtbase + ui[0], g_vbase + vi[1], g_vtbase + ui[1], g_vbase + vi[2], g_vtbase + ui[2]);
            emitted++;
        }
        g_vtbase += nuv;
        S.tris += emitted;
        tex_note(tex, emitted);
    }
    g_vbase += nv;
    free(vw);
    return 1;
}

/* ---------------------------------------------------------------------------
 * SuperObject tree walk
 * --------------------------------------------------------------------------- */
static uint8_t *seen_bitmap(Img *m) { return m->touched + (m->n / 4 / 8 + 1); } /* second half of touched buf */

static int  g_ipo_idx;
static char g_cur_sector[160] = "world";

static void walk(uint32_t va, uint32_t parent, int depth, const Mat *parent_global)
{
    Img *m = img_of(va, SO_WORDS * 4);
    if (!m) { S.so_unreadable++; return; }
    uint32_t slot = (va - m->base) >> 2;
    uint8_t *sb = seen_bitmap(m);
    if (sb[slot >> 3] & (1u << (slot & 7))) { S.so_cycle++; return; }
    sb[slot >> 3] |= (uint8_t)(1u << (slot & 7));

    SO so;
    if (!so_read(va, &so)) { S.so_unreadable++; return; }
    S.so_total++;
    if (so.w[0] < 0x100) S.so_type_count[so.w[0]]++; else S.so_other++;
    if (depth > S.so_max_depth) S.so_max_depth = depth;
    if (so.w[7] != parent) S.so_parent_mismatch++;

    /* matrices: local (+0x20) and global (+0x24) */
    Mat loc, glob, chain;
    int have_loc = is_ptr(so.w[8]) ? mat_read(so.w[8], &loc) : 0;
    int have_glob = is_ptr(so.w[9]) ? mat_read(so.w[9], &glob) : 0;
    if (have_loc) mat_mul(&loc, parent_global, &chain); else chain = *parent_global;
    if (have_glob) {
        int same = 1;
        for (int i = 0; i < 16; i++) if (fabsf(glob.m[i] - chain.m[i]) > 1e-3f) same = 0;
        if (same) S.glob_eq_chain++; else S.glob_ne_chain++;
        Mat id; mat_ident(&id);
        for (int i = 0; i < 16; i++) if (fabsf(glob.m[i] - id.m[i]) > 1e-6f) { S.glob_nonident++; break; }
        S.mat_ok++;
    } else if (so.w[9]) S.mat_bad++;
    Mat world = have_glob ? glob : chain;

    const char *saved_sector = NULL; char saved[160];
    if (so.w[0] == 4) {
        const char *nm = name_lookup(g_so_names, g_n_so_names, va);
        snprintf(saved, sizeof saved, "%s", g_cur_sector);
        saved_sector = saved;
        if (nm) snprintf(g_cur_sector, sizeof g_cur_sector, "%s", nm);
        else snprintf(g_cur_sector, sizeof g_cur_sector, "sector_%08X", va);
        sanitize(g_cur_sector);
    }

    if (so.w[0] == 2) {                          /* Actor -> 3dData -> ObjectsTable -> PO -> VisualSet -> geo (notes_geometry.md sec 4) */
        uint32_t d3 = 0, tbl = 0, arr = 0, hw2 = 0;
        char an[200];
        const char *nm = name_lookup(g_so_names, g_n_so_names, va);
        if (nm) snprintf(an, sizeof an, "%s", nm); else snprintf(an, sizeof an, "actor_%08X", va);
        sanitize(an);
        A.actors++;
        int emitted_here = 0;
        if (!is_ptr(so.w[1]) || !rdp(so.w[1], &d3) || !is_ptr(d3)) A.actors_null3d++;   /* so.w[1] = Actor*, Actor+0 = 3dData* */
        else if (!(rdp(d3 + 0xC, &tbl) && is_ptr(tbl) && rdp(tbl, &arr) && rd32(tbl + 8, &hw2) && is_ptr(arr))) A.actors_tblfail++;
        else {
            uint32_t cnt = hw2 & 0xFFFF;
            if (cnt > 4096) cnt = 0;
            for (uint32_t i = 0; i < cnt; i++) {
                uint32_t po, vs, geo;
                A.table_entries++;
                if (!rdp(arr + 0x10 * i + 4, &po) || !is_ptr(po)) { A.null_po++; continue; }
                if (!rdp(po, &vs) || !is_ptr(vs) || !rdp(vs + 4, &geo) || !is_ptr(geo)) { A.bad_chain++; continue; }
                int dup = 0;
                for (int k = 0; k < g_n_geo_done; k++) if (g_geo_done[k] == geo) { dup = 1; break; }
                if (dup) { A.dup_geo++; continue; }
                if (g_n_geo_done < 8192) g_geo_done[g_n_geo_done++] = geo;
                FILE *so_ = g_obj; long sv = g_vbase, st = g_vtbase; long long t0 = S.tris, v0 = S.verts; double bn[3] = {S.bmin[0],S.bmin[1],S.bmin[2]}, bx[3] = {S.bmax[0],S.bmax[1],S.bmax[2]};
                g_obj = g_aobj; g_vbase = g_avbase; g_vtbase = g_avtbase;
                char grp[300]; snprintf(grp, sizeof grp, "%s_%08X_obj%u_geo%08X", an, va, i, geo);
                int ok = emit_geo(geo, &world, grp);
                for (int k = 0; k < 3; k++) { S.bmin[k] = bn[k]; S.bmax[k] = bx[k]; }   /* actors do not affect the static world bbox */
                g_avbase = g_vbase; g_avtbase = g_vtbase; g_obj = so_; g_vbase = sv; g_vtbase = st;
                if (ok) { A.geo_emitted++; A.tris += S.tris - t0; A.verts += S.verts - v0; emitted_here++; }
                else A.geo_bad++;
            }
        }
        if (!emitted_here) A.actors_nomesh++;
    }

    if (so.w[0] == 0x20) {                       /* IPO: instantiated physical object */
        S.ipo_total++;
        uint32_t po, vs, geo;
        /* IPO->+0 = PO*, PO+0 = VisualSet*, VisualSet+4 = GeometricObject* (verified) */
        if (is_ptr(so.w[1]) && rdp(so.w[1], &po) && is_ptr(po) && rdp(po, &vs) && is_ptr(vs) &&
            rdp(vs + 4, &geo) && is_ptr(geo)) {
            char grp[256];
            snprintf(grp, sizeof grp, "%s_ipo%03d_%08X", g_cur_sector, g_ipo_idx++, va);
            if (emit_geo(geo, &world, grp)) { S.geo_ok++; S.ipo_with_mesh++; }
            else S.geo_bad++;
        } else S.ipo_bad_chain++;
    }

    /* children */
    uint32_t c = so.w[2];
    uint32_t n = 0;
    while (c && n < 100000) {
        SO cso;
        if (!so_read(c, &cso)) { S.so_unreadable++; break; }
        walk(c, va, depth + 1, &world);
        n++;
        c = cso.w[5];
    }
    if (n != so.w[4]) S.so_count_mismatch++;

    if (saved_sector) snprintf(g_cur_sector, sizeof g_cur_sector, "%s", saved_sector);
}

/* ---------------------------------------------------------------------------
 * Heuristic scan for GeometricObject-shaped structures anywhere in the level
 * (to report how much geometry the static SO tree does NOT reach).
 * --------------------------------------------------------------------------- */
static int looks_like_geo(uint32_t a)
{
    uint32_t w[12];
    for (int i = 0; i < 12; i++) if (!rd32(a + 4u * i, &w[i])) return 0;
    uint32_t nv = w[11] & 0xFFFF, ne = w[11] >> 16;
    if (!nv || nv >= 5000 || !ne || ne >= 200) return 0;
    return is_ptr(w[0]) && is_ptr(w[1]) && is_ptr(w[4]) && is_ptr(w[5]);
}

/* ---------------------------------------------------------------------------
 * main
 * --------------------------------------------------------------------------- */
static int cmp_tex(const void *a, const void *b)
{
    long long x = ((const TexUse *)a)->tris, y = ((const TexUse *)b)->tris;
    return (x < y) - (x > y);
}

int main(int argc, char **argv)
{
    const char *dcdata = argc > 1 ? argv[1] : "assets/dc/DCDATA";
    const char *level  = argc > 2 ? argv[2] : "LEARN_10";
    const char *outdir = argc > 3 ? argv[3] : "tools/out";
    char path[1024], lname[64];
    snprintf(lname, sizeof lname, "%s", level);
    {   /* output stem: lower-case, underscores dropped (LEARN_10 -> learn10) */
        char *d = lname;
        for (char *s = lname; *s; s++) if (*s != '_') *d++ = (char)tolower((unsigned char)*s);
        *d = 0;
    }

    snprintf(path, sizeof path, "%s/FIX.DAT", dcdata);
    g_fix.p = load_file(path, &g_fix.n);
    snprintf(path, sizeof path, "%s/%s/%s.DAT", dcdata, level, level);
    g_lev.p = load_file(path, &g_lev.n);
    if (!g_fix.p || !g_lev.p) { fprintf(stderr, "cannot load FIX.DAT / %s.DAT under %s\n", level, dcdata); return 1; }

    /* ---- image bases (see DC_LEVEL_FORMAT.md section 2) ---- */
    uint32_t *lh = (uint32_t *)g_lev.p, *fh = (uint32_t *)g_fix.p;
    g_lev.base = lh[37];                 /* DAT header word @0x94 == VA of file offset 0 */
    g_fix.base = fh[4];                  /* FIX header word @0x10 == VA of file offset 0 */
    g_lev.touched = (uint8_t *)calloc(g_lev.n / 4 / 8 + 1, 2);
    g_fix.touched = (uint8_t *)calloc(g_fix.n / 4 / 8 + 1, 2);

    printf("== dc_level_parse: %s ==\n", level);
    printf("FIX.DAT   %zu bytes  base VA 0x%08X  end 0x%08X\n", g_fix.n, g_fix.base, g_fix.base + (uint32_t)g_fix.n);
    printf("%s.DAT %zu bytes  base VA 0x%08X  end 0x%08X\n", level, g_lev.n, g_lev.base, g_lev.base + (uint32_t)g_lev.n);
    {
        uint32_t tail = lh[10], cnt = lh[11], tail_end = tail + cnt * 6;
        long slack = (long)(g_lev.base + g_lev.n) - (long)tail_end;
        printf("base check: 6-byte record array hdr[10]=0x%08X x hdr[11]=%u ends 0x%08X, file end - array end = %ld bytes (expect 0..3 pad)\n",
               tail, cnt, tail_end, slack);
    }

    /* ---- TMP relocation tables (optional) ---- */
    uint8_t *tmp = NULL; size_t tmpn = 0;
    snprintf(path, sizeof path, "%s/%s/%s.TMP", dcdata, level, level);
    tmp = load_file(path, &tmpn);
    if (!tmp) {
        snprintf(path, sizeof path, "%s/%s/%s.TMP.off", dcdata, level, level);
        tmp = load_file(path, &tmpn);
        if (tmp) printf("note: using %s (TMP file is named .TMP.off on disk)\n", path);
    }
    uint32_t t1n = 0, t2n = 0, t1_hits_img = 0, t2_hits_img = 0;
    uint32_t *t1 = NULL; uint32_t *t2 = NULL;
    if (tmp && tmpn >= 16) {
        uint32_t *h = (uint32_t *)tmp;
        if ((uint64_t)h[0] + 4ull * h[1] <= tmpn && (uint64_t)h[2] + 8ull * h[3] <= tmpn) {
            t1 = (uint32_t *)(tmp + h[0]); t1n = h[1];
            t2 = (uint32_t *)(tmp + h[2]); t2n = h[3];
        }
        printf("TMP: table1 (GPT objects) %u entries, table2 (RTB) %u entries\n", t1n, t2n);
    } else printf("TMP: not found, relocation-overlap check skipped\n");

    parse_info_log((snprintf(path, sizeof path, "%s/%s/INFO.LOG", dcdata, level), path));
    {
        char up[64]; snprintf(up, sizeof up, "%s", level);
        parse_tex_log((snprintf(path, sizeof path, "%s/%s/TEXTURE_%s.LOG", dcdata, level, up), path));
    }
    printf("INFO.LOG SuperObject names: %d, TEXTURE log entries: %d\n", g_n_so_names, g_n_tex_names);

    /* ---- world root ---- */
    uint32_t root = lh[13];              /* DAT header word @0x34 : actual World SuperObject */
    printf("\nWorld SuperObject: DAT hdr[13] @+0x34 = 0x%08X; hdr[14..16] = dynamic 0x%08X, inactive 0x%08X, fatherSector 0x%08X\n",
           root, lh[14], lh[15], lh[16]);
    printf("(DAT+0xA8 holds the loader's world token 0x%08X = block %u idx %u; resolving it needs runtime block arrays, not available on host)\n",
           lh[42], lh[42] >> 16, lh[42] & 0xFFFF);

    snprintf(path, sizeof path, "%s/%s.obj", outdir, lname);
    char mtlpath[1024]; snprintf(mtlpath, sizeof mtlpath, "%s/%s.mtl", outdir, lname);
    char mk[1100]; snprintf(mk, sizeof mk, "mkdir -p '%s'", outdir);
    if (system(mk) != 0) { fprintf(stderr, "mkdir failed\n"); return 1; }
    g_obj = fopen(path, "w"); g_mtl = fopen(mtlpath, "w");
    if (!g_obj || !g_mtl) { fprintf(stderr, "cannot open outputs in %s\n", outdir); return 1; }
    fprintf(g_obj, "# Rayman 2 Dreamcast %s static level geometry, world space, raw engine axes\n", level);
    fprintf(g_obj, "# generated by tools/dc_level_parse.c\nmtllib %s.mtl\n", lname);

    for (int k = 0; k < 3; k++) { S.bmin[k] = 1e30; S.bmax[k] = -1e30; }
    {
        char ap[1100]; snprintf(ap, sizeof ap, "%s/%s_actors.obj", outdir, lname);
        g_aobj = fopen(ap, "w");
        if (!g_aobj) { fprintf(stderr, "cannot open %s\n", ap); return 1; }
        fprintf(g_aobj, "# Rayman 2 Dreamcast %s ACTOR part meshes, local part space transformed by the actor SuperObject global matrix.\n"
                        "# NO per-part pose (placeholder: all parts of an actor overlap at the actor origin). Deduped by geo VA.\nmtllib %s.mtl\n", level, lname);
    }
    Mat id; mat_ident(&id);
    walk(root, 0, 0, &id);
    fclose(g_aobj);

    /* mtl: one entry per texture used */
    qsort(g_tex_use, (size_t)g_n_tex_use, sizeof(TexUse), cmp_tex);
    for (int i = 0; i < g_n_tex_use; i++) {
        char tn[200]; tex_name(g_tex_use[i].tex, tn, sizeof tn);
        fprintf(g_mtl, "newmtl %s\n# texture struct VA 0x%08X\nKd 1 1 1\n\n", tn, g_tex_use[i].tex);
    }
    fclose(g_obj); fclose(g_mtl);

    /* ---- FIX matrix validation: every matrix pointer from the tree into FIX must be a Matrix ---- */
    /* (counted in walk(): mat_ok / mat_bad cover both images) */

    /* ---- relocation overlap ---- */
    for (uint32_t i = 0; i < t1n; i++) {          /* table1: obj+4 is overwritten with GPT[obj[11]] */
        uint32_t obj = t1[i] + 4; Img *m = img_of(obj, 4);
        if (!m) continue;
        t1_hits_img++;
    }
    uint32_t t1_overlap = 0, t2_overlap = 0;
    for (uint32_t i = 0; i < t1n; i++) {
        Img *m = img_of(t1[i] + 4, 4); if (!m) continue;
        uint32_t s = (t1[i] + 4 - m->base) >> 2;
        if (m->touched[s >> 3] & (1u << (s & 7))) t1_overlap++;
    }
    for (uint32_t i = 0; i < t2n; i++) {          /* table2: target slot overwritten with resolved token */
        uint32_t tgt = t2[2 * i]; Img *m = img_of(tgt, 4);
        if (!m) continue;
        t2_hits_img++;
        uint32_t s = (tgt - m->base) >> 2;
        if (m->touched[s >> 3] & (1u << (s & 7))) t2_overlap++;
    }

    /* ---- geometry-shaped structures not reachable from the tree ---- */
    int geo_scan = 0;
    for (size_t o = 0; o + 48 <= g_lev.n; o += 4) if (looks_like_geo(g_lev.base + (uint32_t)o)) geo_scan++;

    /* ---- report ---- */
    printf("\n---- SuperObject tree ----\n");
    printf("total SuperObjects walked: %d (max depth %d)\n", S.so_total, S.so_max_depth);
    const char *tn_[] = { 0 };
    (void)tn_;
    for (int t = 0; t < 0x100; t++)
        if (S.so_type_count[t]) {
            const char *nm = t == 1 ? "World/Group" : t == 2 ? "Actor" : t == 4 ? "Sector" : t == 0x20 ? "IPO (static visual object)" : "unknown";
            printf("  type 0x%02X (%s): %d\n", t, nm, S.so_type_count[t]);
        }
    if (S.so_other) printf("  type >= 0x100: %d\n", S.so_other);
    printf("integrity: parent-pointer mismatches %d, child-count mismatches %d, cycles %d, unreadable %d\n",
           S.so_parent_mismatch, S.so_count_mismatch, S.so_cycle, S.so_unreadable);
    printf("matrices: %d global-matrix pointers valid, %d invalid; global == local*parentGlobal for %d, differs for %d; non-identity global: %d\n",
           S.mat_ok, S.mat_bad, S.glob_eq_chain, S.glob_ne_chain, S.glob_nonident);

    printf("\n---- Actor meshes ----\n");
    printf("actors %d: NULL 3dData %d, 3dData with NULL ObjectsTable %d, no NEW mesh emitted (none or all dup) %d; ObjectsTable entries %d (NULL PO %d, bad chain %d, duplicate geo skipped %d)\n",
           A.actors, A.actors_null3d, A.actors_tblfail, A.actors_nomesh, A.table_entries, A.null_po, A.bad_chain, A.dup_geo);
    printf("actor geos emitted %d (failed validation %d), vertices %lld, triangles %lld -> %s/%s_actors.obj\n",
           A.geo_emitted, A.geo_bad, A.verts, A.tris, outdir, lname);
    printf("\n---- Geometry (static IPO visual meshes) ----\n");
    printf("IPOs: %d, with decoded GeometricObject: %d (bad geo %d, bad pointer chain %d)\n",
           S.ipo_total, S.ipo_with_mesh, S.geo_bad, S.ipo_bad_chain);
    printf("elements: %d (non-IndexedTriangles skipped %d, malformed %d)\n", S.elem_total, S.elem_not_type1, S.elem_bad);
    printf("vertices written (static): %lld   triangles written (static): %lld\n", S.verts - A.verts, S.tris - A.tris);
    printf("distinct GameMaterials: %d, distinct textures: %d\n", g_n_gm, g_n_tex_use);
    printf("world bounding box: min (%.3f, %.3f, %.3f)  max (%.3f, %.3f, %.3f)\n",
           S.bmin[0], S.bmin[1], S.bmin[2], S.bmax[0], S.bmax[1], S.bmax[2]);
    printf("heuristic GeometricObject-shaped structures anywhere in %s.DAT: %d (tree reaches %d; rest = actor models/other, NOT extracted)\n",
           level, geo_scan, S.geo_ok);

    printf("\nTop textures by triangle count:\n");
    for (int i = 0; i < g_n_tex_use && i < 12; i++) {
        char tn[200]; tex_name(g_tex_use[i].tex, tn, sizeof tn);
        printf("  %6lld tris  0x%08X  %s\n", g_tex_use[i].tris, g_tex_use[i].tex, tn);
    }
    int unresolved = 0;
    for (int i = 0; i < g_n_tex_use; i++) if (!name_lookup(g_tex_names, g_n_tex_names, g_tex_use[i].tex)) unresolved++;
    printf("textures without a name in TEXTURE log: %d\n", unresolved);

    printf("\n---- Relocation tables vs traversed pointer slots ----\n");
    printf("table1 entries whose obj+4 slot lies in an image: %u/%u; of those, slots the geometry/SO traversal read: %u\n",
           t1_hits_img, t1n, t1_overlap);
    printf("table2 entries whose target lies in an image: %u/%u; of those, slots the geometry/SO traversal read: %u\n",
           t2_hits_img, t2n, t2_overlap);
    printf("=> %s\n", (t1_overlap + t2_overlap) == 0
           ? "no pointer used for SO/geometry traversal is rewritten by TMP relocation; image pointers are already final VAs"
           : "some traversed slots are rewritten by TMP relocation (see overlap counts above)");

    printf("\nOutput: %s (groups %d), %s\n", path, g_obj_groups, mtlpath);
    return 0;
}
