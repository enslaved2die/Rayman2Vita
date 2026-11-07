/* tools/dump_dc_textures.c
 * Native Dreamcast texture extractor for Rayman 2: The Great Escape.
 *
 * Extracts all .TEX texture banks (FIX.TEX and all 78 level banks) and standalone
 * .PVR textures (0GDTEX.PVR, DPTEX, DPWWW/MODEL) into standard PNG files.
 *
 * Features:
 *   - Uses verified CPA Dreamcast PVR decoder (src/cpa/cpa_tex.c)
 *   - Applies cpa_tex_bleed to prevent black halo artifacts on alpha cutouts
 *   - Resolves original developer asset names from TEXTURE_<LEVEL>.LOG / TEXTURE_FIX.LOG
 *   - Emits structured directories (extracted_textures/FIX/, extracted_textures/<LEVEL>/, ...)
 *   - Emits extracted_textures/manifest.csv with complete provenance and metadata
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <dirent.h>
#include <glob.h>
#include <time.h>
#include <zlib.h>
#include "../src/cpa/cpa_tex.h"

static void put_be32(uint8_t *p, uint32_t val) {
    p[0] = (uint8_t)(val >> 24);
    p[1] = (uint8_t)(val >> 16);
    p[2] = (uint8_t)(val >> 8);
    p[3] = (uint8_t)(val & 0xFF);
}

static void mkdir_p(const char *dir) {
    char tmp[1024];
    snprintf(tmp, sizeof(tmp), "%s", dir);
    size_t len = strlen(tmp);
    if (len == 0) return;
    if (tmp[len - 1] == '/') tmp[len - 1] = 0;
    for (char *p = tmp + 1; *p; p++) {
        if (*p == '/') {
            *p = 0;
            mkdir(tmp, 0755);
            *p = '/';
        }
    }
    mkdir(tmp, 0755);
}

static uint8_t *read_file(const char *path, size_t *out_sz) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz < 0) { fclose(f); return NULL; }
    uint8_t *buf = (uint8_t *)malloc((size_t)sz + 1);
    if (!buf) { fclose(f); return NULL; }
    size_t rd = fread(buf, 1, (size_t)sz, f);
    fclose(f);
    if (rd != (size_t)sz) { free(buf); return NULL; }
    buf[sz] = 0;
    *out_sz = (size_t)sz;
    return buf;
}

static int write_png(const char *path, uint32_t w, uint32_t h, const uint8_t *rgba) {
    FILE *f = fopen(path, "wb");
    if (!f) return 0;

    static const uint8_t sig[8] = { 0x89, 'P', 'N', 'G', 0x0D, 0x0A, 0x1A, 0x0A };
    fwrite(sig, 1, 8, f);

    uint8_t ihdr[13];
    put_be32(ihdr + 0, w);
    put_be32(ihdr + 4, h);
    ihdr[8] = 8;   // bit depth
    ihdr[9] = 6;   // RGBA
    ihdr[10] = 0;  // deflate
    ihdr[11] = 0;  // filter none
    ihdr[12] = 0;  // non-interlaced

    uint8_t chunk_hdr[8];
    put_be32(chunk_hdr, 13);
    memcpy(chunk_hdr + 4, "IHDR", 4);
    fwrite(chunk_hdr, 1, 8, f);
    fwrite(ihdr, 1, 13, f);

    uint32_t crc = (uint32_t)crc32(0L, Z_NULL, 0);
    crc = (uint32_t)crc32(crc, (const Bytef *)"IHDR", 4);
    crc = (uint32_t)crc32(crc, (const Bytef *)ihdr, 13);
    uint8_t crc_buf[4];
    put_be32(crc_buf, crc);
    fwrite(crc_buf, 1, 4, f);

    size_t row_stride = 1 + (size_t)w * 4;
    size_t raw_sz = row_stride * h;
    uint8_t *raw = (uint8_t *)malloc(raw_sz);
    if (!raw) { fclose(f); return 0; }

    for (uint32_t y = 0; y < h; y++) {
        raw[y * row_stride] = 0; // Filter 0
        memcpy(raw + y * row_stride + 1, rgba + (size_t)y * w * 4, (size_t)w * 4);
    }

    uLongf comp_sz = compressBound((uLong)raw_sz);
    uint8_t *comp = (uint8_t *)malloc(comp_sz);
    if (!comp) { free(raw); fclose(f); return 0; }

    z_stream strm;
    memset(&strm, 0, sizeof(strm));
    if (deflateInit(&strm, 6) != Z_OK) {
        free(raw); free(comp); fclose(f); return 0;
    }
    strm.next_in = raw;
    strm.avail_in = (uInt)raw_sz;
    strm.next_out = comp;
    strm.avail_out = (uInt)comp_sz;
    deflate(&strm, Z_FINISH);
    comp_sz = strm.total_out;
    deflateEnd(&strm);
    free(raw);

    put_be32(chunk_hdr, (uint32_t)comp_sz);
    memcpy(chunk_hdr + 4, "IDAT", 4);
    fwrite(chunk_hdr, 1, 8, f);
    fwrite(comp, 1, comp_sz, f);
    crc = (uint32_t)crc32(0L, Z_NULL, 0);
    crc = (uint32_t)crc32(crc, (const Bytef *)"IDAT", 4);
    crc = (uint32_t)crc32(crc, (const Bytef *)comp, (uInt)comp_sz);
    put_be32(crc_buf, crc);
    fwrite(crc_buf, 1, 4, f);
    free(comp);

    put_be32(chunk_hdr, 0);
    memcpy(chunk_hdr + 4, "IEND", 4);
    fwrite(chunk_hdr, 1, 8, f);
    crc = (uint32_t)crc32(0L, Z_NULL, 0);
    crc = (uint32_t)crc32(crc, (const Bytef *)"IEND", 4);
    put_be32(crc_buf, crc);
    fwrite(crc_buf, 1, 4, f);

    fclose(f);
    return 1;
}

typedef struct TexLogEntry {
    uint32_t va;
    char name[256];
    char orig[256];
} TexLogEntry;

static int parse_log(const char *path, TexLogEntry **out_entries, uint32_t *out_count) {
    size_t sz = 0;
    uint8_t *file_data = read_file(path, &sz);
    if (!file_data) return 0;

    uint32_t cap = 256;
    uint32_t cnt = 0;
    TexLogEntry *entries = (TexLogEntry *)malloc(cap * sizeof(TexLogEntry));
    if (!entries) { free(file_data); return 0; }

    char *buf = (char *)file_data;
    char *line = buf;
    while (line && *line) {
        char *eol = strpbrk(line, "\r\n");
        if (eol) {
            if (*eol == '\r' && *(eol + 1) == '\n') { *eol = 0; eol += 2; }
            else { *eol = 0; eol++; }
        }

        char *arrow = strstr(line, "->");
        char *colon = strchr(line, ':');
        if (arrow && colon && colon < arrow) {
            uint32_t va = (uint32_t)strtoul(line, NULL, 16);
            char *p = colon + 1;
            while (*p == ' ' || *p == '\t') p++;

            char *pvr = NULL;
            for (char *c = p; c < arrow - 3; c++) {
                if (c[0] == '.' &&
                    (c[1] == 'p' || c[1] == 'P') &&
                    (c[2] == 'v' || c[2] == 'V') &&
                    (c[3] == 'r' || c[3] == 'R')) {
                    pvr = c;
                    break;
                }
            }

            if (pvr) {
                size_t path_len = (size_t)(pvr - p);
                if (path_len > 250) path_len = 250;
                char rel_path[256];
                memcpy(rel_path, p, path_len);
                rel_path[path_len] = 0;

                char *slash = strrchr(rel_path, '/');
                char *bslash = strrchr(rel_path, '\\');
                char *bname = slash > bslash ? slash : bslash;
                if (bname) bname++; else bname = rel_path;

                while (*bname == ' ' || *bname == '\t') bname++;
                char *end = bname + strlen(bname) - 1;
                while (end >= bname && (*end == ' ' || *end == '\t')) { *end = 0; end--; }

                // Replace interior spaces with _ and transliterate latin1 accents to ASCII
                for (char *c = bname; *c; c++) {
                    unsigned char uc = (unsigned char)*c;
                    if (*c == ' ' || *c == '\t') *c = '_';
                    else if (uc == 0xe8 || uc == 0xe9 || uc == 0xea || uc == 0xeb) *c = 'e';
                    else if (uc == 0xe0 || uc == 0xe1 || uc == 0xe2 || uc == 0xe3 || uc == 0xe4) *c = 'a';
                    else if (uc == 0xec || uc == 0xed || uc == 0xee || uc == 0xef) *c = 'i';
                    else if (uc == 0xf2 || uc == 0xf3 || uc == 0xf4 || uc == 0xf6) *c = 'o';
                    else if (uc == 0xf9 || uc == 0xfa || uc == 0xfb || uc == 0xfc) *c = 'u';
                    else if (uc == 0xe7) *c = 'c';
                    else if (uc >= 128) *c = '_';
                }

                if (cnt == cap) {
                    cap *= 2;
                    TexLogEntry *ne = (TexLogEntry *)realloc(entries, cap * sizeof(TexLogEntry));
                    if (!ne) { free(entries); free(file_data); return 0; }
                    entries = ne;
                }
                entries[cnt].va = va;
                snprintf(entries[cnt].name, sizeof(entries[cnt].name), "%s", bname);
                snprintf(entries[cnt].orig, sizeof(entries[cnt].orig), "%s.PVR", rel_path);
                cnt++;
            }
        }
        line = eol;
    }

    free(file_data);
    *out_entries = entries;
    *out_count = cnt;
    return 1;
}

static uint32_t get_gbix(const uint8_t *blk, size_t blk_len) {
    if (blk_len >= 12 && !memcmp(blk, "GBIX", 4)) {
        return (uint32_t)blk[8] | ((uint32_t)blk[9] << 8) | ((uint32_t)blk[10] << 16) | ((uint32_t)blk[11] << 24);
    }
    return 0;
}

/* Tracking filenames within a folder to avoid collisions */
typedef struct NameTracker {
    char **names;
    uint32_t count, cap;
} NameTracker;

static void tracker_init(NameTracker *t) {
    t->count = 0;
    t->cap = 64;
    t->names = (char **)malloc(t->cap * sizeof(char *));
}

static void tracker_free(NameTracker *t) {
    for (uint32_t i = 0; i < t->count; i++) free(t->names[i]);
    free(t->names);
}

static int tracker_has(NameTracker *t, const char *name) {
    for (uint32_t i = 0; i < t->count; i++) {
        if (!strcmp(t->names[i], name)) return 1;
    }
    return 0;
}

static void tracker_add(NameTracker *t, const char *name) {
    if (t->count == t->cap) {
        t->cap *= 2;
        t->names = (char **)realloc(t->names, t->cap * sizeof(char *));
    }
    t->names[t->count++] = strdup(name);
}

static void dump_bank(const char *bank_name,
                      const char *tex_path,
                      const char *log_path,
                      const char *out_dir,
                      FILE *manifest,
                      bool bleed,
                      uint32_t *out_dumped,
                      uint32_t *out_errors) {
    size_t tex_sz = 0;
    uint8_t *tex_data = read_file(tex_path, &tex_sz);
    if (!tex_data) {
        fprintf(stderr, "Error: unable to read %s\n", tex_path);
        (*out_errors)++;
        return;
    }

    CpaTexBank bank;
    if (!cpa_texbank_load(tex_data, tex_sz, &bank)) {
        fprintf(stderr, "Warning: cpa_texbank_load reported issues for %s (loaded %u chunks)\n", tex_path, bank.n);
    }

    TexLogEntry *log_entries = NULL;
    uint32_t log_count = 0;
    if (log_path) {
        parse_log(log_path, &log_entries, &log_count);
    }

    char target_dir[1024];
    snprintf(target_dir, sizeof(target_dir), "%s/%s", out_dir, bank_name);
    mkdir_p(target_dir);

    NameTracker tracker;
    tracker_init(&tracker);

    for (uint32_t i = 0; i < bank.n; i++) {
        CpaTexChunk *chunk = &bank.c[i];
        if (!chunk->info.supported) {
            fprintf(stderr, "Warning: chunk %u in %s unsupported (fmt %u,%u)\n",
                    i, bank_name, chunk->info.pixFmt, chunk->info.dataFmt);
            (*out_errors)++;
            continue;
        }

        uint32_t w = chunk->info.w;
        uint32_t h = chunk->info.h;
        uint32_t *rgba = (uint32_t *)malloc((size_t)w * h * 4);
        if (!rgba) {
            (*out_errors)++;
            continue;
        }

        if (cpa_pvr_decode(&chunk->info, chunk->blk, chunk->len, NULL, 0, rgba) != 0) {
            fprintf(stderr, "Error: decode failed for chunk %u in %s\n", i, bank_name);
            free(rgba);
            (*out_errors)++;
            continue;
        }

        if (bleed) {
            cpa_tex_bleed(rgba, w, h);
        }

        uint32_t gbix = get_gbix(chunk->blk, chunk->len);
        uint32_t va = (i < log_count) ? log_entries[i].va : 0;
        const char *orig_path = (i < log_count) ? log_entries[i].orig : "";

        char final_name[300];
        if (i < log_count && log_entries[i].name[0]) {
            snprintf(final_name, sizeof(final_name), "%s.png", log_entries[i].name);
        } else {
            snprintf(final_name, sizeof(final_name), "%03u_%u.png", i, gbix);
        }

        // Deduplicate if name collisions occur within the same bank folder
        if (tracker_has(&tracker, final_name)) {
            char base[256];
            snprintf(base, sizeof(base), "%s", final_name);
            char *dot = strrchr(base, '.');
            if (dot) *dot = 0;
            snprintf(final_name, sizeof(final_name), "%s_idx%03u.png", base, i);
        }
        tracker_add(&tracker, final_name);

        char out_path[1024];
        snprintf(out_path, sizeof(out_path), "%s/%s", target_dir, final_name);

        if (!write_png(out_path, w, h, (const uint8_t *)rgba)) {
            fprintf(stderr, "Error writing PNG %s\n", out_path);
            (*out_errors)++;
        } else {
            (*out_dumped)++;
            if (manifest) {
                // category,bank,index,output_path,name,width,height,pix_fmt,data_fmt,gbix,struct_va,orig_path
                fprintf(manifest, "bank,%s,%u,%s/%s,%s,%u,%u,%u,%u,%u,0x%08x,\"%s\"\n",
                        bank_name, i, bank_name, final_name, final_name, w, h,
                        chunk->info.pixFmt, chunk->info.dataFmt, gbix, va, orig_path);
            }
        }

        free(rgba);
    }

    tracker_free(&tracker);
    if (log_entries) free(log_entries);
    cpa_texbank_free(&bank);
    free(tex_data);
}

static void dump_standalone_pvr(const char *cat_name,
                                const char *pvr_path,
                                const char *out_subfolder,
                                const char *out_dir,
                                FILE *manifest,
                                bool bleed,
                                bool optional,
                                uint32_t *out_dumped,
                                uint32_t *out_errors) {
    size_t sz = 0;
    uint8_t *data = read_file(pvr_path, &sz);
    if (!data) {
        fprintf(stderr, "Error: cannot read %s\n", pvr_path);
        if (!optional) (*out_errors)++;
        return;
    }

    CpaPvrInfo info;
    if (!cpa_pvr_parse(data, sz, &info) || !info.supported) {
        if (!optional) {
            fprintf(stderr, "Warning: %s unsupported PVR (fmt %u,%u)\n", pvr_path, info.pixFmt, info.dataFmt);
            (*out_errors)++;
        } else {
            fprintf(stderr, "Notice: skipping optional non-game PVR %s (fmt %u,%u)\n", pvr_path, info.pixFmt, info.dataFmt);
        }
        free(data);
        return;
    }

    uint32_t w = info.w, h = info.h;
    uint32_t *rgba = (uint32_t *)malloc((size_t)w * h * 4);
    if (!rgba) {
        free(data);
        (*out_errors)++;
        return;
    }

    if (cpa_pvr_decode(&info, data, sz, NULL, 0, rgba) != 0) {
        fprintf(stderr, "Error: decode failed for %s\n", pvr_path);
        free(rgba);
        free(data);
        (*out_errors)++;
        return;
    }

    if (bleed) {
        cpa_tex_bleed(rgba, w, h);
    }

    const char *slash = strrchr(pvr_path, '/');
    const char *base = slash ? slash + 1 : pvr_path;
    char name_no_ext[256];
    snprintf(name_no_ext, sizeof(name_no_ext), "%s", base);
    char *dot = strrchr(name_no_ext, '.');
    if (dot) *dot = 0;

    char target_dir[1024];
    if (out_subfolder && out_subfolder[0]) {
        snprintf(target_dir, sizeof(target_dir), "%s/%s", out_dir, out_subfolder);
    } else {
        snprintf(target_dir, sizeof(target_dir), "%s", out_dir);
    }
    mkdir_p(target_dir);

    char out_file[1024];
    snprintf(out_file, sizeof(out_file), "%s/%s.png", target_dir, name_no_ext);

    uint32_t gbix = get_gbix(data, sz);

    if (!write_png(out_file, w, h, (const uint8_t *)rgba)) {
        fprintf(stderr, "Error writing PNG %s\n", out_file);
        (*out_errors)++;
    } else {
        (*out_dumped)++;
        if (manifest) {
            char rel_path[1024];
            if (out_subfolder && out_subfolder[0]) {
                snprintf(rel_path, sizeof(rel_path), "%s/%s.png", out_subfolder, name_no_ext);
            } else {
                snprintf(rel_path, sizeof(rel_path), "%s.png", name_no_ext);
            }
            fprintf(manifest, "standalone,%s,0,%s,%s.png,%u,%u,%u,%u,%u,0x00000000,\"%s\"\n",
                    cat_name, rel_path, name_no_ext, w, h,
                    info.pixFmt, info.dataFmt, gbix, pvr_path);
        }
    }

    free(rgba);
    free(data);
}

int main(int argc, char **argv) {
    const char *dcdata_dir = "assets/dc/DCDATA";
    const char *assets_dc = "assets/dc";
    const char *out_dir = "extracted_textures";
    bool bleed = true;
    bool verbose = false;

    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--dcdata") && i + 1 < argc) dcdata_dir = argv[++i];
        else if (!strcmp(argv[i], "--assets-dc") && i + 1 < argc) assets_dc = argv[++i];
        else if (!strcmp(argv[i], "--out") && i + 1 < argc) out_dir = argv[++i];
        else if (!strcmp(argv[i], "--no-bleed")) bleed = false;
        else if (!strcmp(argv[i], "--bleed")) bleed = true;
        else if (!strcmp(argv[i], "--verbose") || !strcmp(argv[i], "-v")) verbose = true;
        else if (!strcmp(argv[i], "--help") || !strcmp(argv[i], "-h")) {
            printf("Usage: %s [options]\n", argv[0]);
            printf("  --dcdata DIR     Path to DCDATA directory (default: assets/dc/DCDATA)\n");
            printf("  --assets-dc DIR  Path to assets/dc directory (default: assets/dc)\n");
            printf("  --out DIR        Output directory (default: extracted_textures)\n");
            printf("  --bleed          Enable color bleed for alpha edges (default)\n");
            printf("  --no-bleed       Disable color bleed\n");
            printf("  --verbose, -v    Verbose log output\n");
            return 0;
        } else {
            fprintf(stderr, "Unknown option: %s\n", argv[i]);
            return 1;
        }
    }

    printf("=============================================================\n");
    printf(" Rayman 2 Dreamcast Texture Extractor\n");
    printf(" DCDATA:    %s\n", dcdata_dir);
    printf(" Assets DC: %s\n", assets_dc);
    printf(" Output:    %s\n", out_dir);
    printf(" Bleed:     %s\n", bleed ? "enabled" : "disabled");
    printf("=============================================================\n");

    mkdir_p(out_dir);

    char manifest_path[1024];
    snprintf(manifest_path, sizeof(manifest_path), "%s/manifest.csv", out_dir);
    FILE *manifest = fopen(manifest_path, "w");
    if (manifest) {
        fprintf(manifest, "category,bank,index,path,name,width,height,pix_fmt,data_fmt,gbix,struct_va,orig_path\n");
    } else {
        fprintf(stderr, "Warning: unable to create manifest file %s\n", manifest_path);
    }

    uint32_t total_dumped = 0;
    uint32_t total_errors = 0;
    clock_t t_start = clock();

    // 1. Process FIX.TEX
    {
        char fix_tex[1024], fix_log[1024];
        snprintf(fix_tex, sizeof(fix_tex), "%s/FIX.TEX", dcdata_dir);
        snprintf(fix_log, sizeof(fix_log), "%s/TEXTURE_FIX.LOG", dcdata_dir);
        uint32_t bank_dumped = 0, bank_errors = 0;
        dump_bank("FIX", fix_tex, fix_log, out_dir, manifest, bleed, &bank_dumped, &bank_errors);
        total_dumped += bank_dumped;
        total_errors += bank_errors;
        printf("[FIX] Dumped %u textures (%u errors)\n", bank_dumped, bank_errors);
    }

    // 2. Process all level .TEX banks
    DIR *d = opendir(dcdata_dir);
    if (!d) {
        fprintf(stderr, "Error opening DCDATA directory: %s\n", dcdata_dir);
        return 1;
    }

    struct dirent *ent;
    uint32_t level_count = 0;
    while ((ent = readdir(d)) != NULL) {
        if (ent->d_name[0] == '.') continue;
        if (!strcmp(ent->d_name, "FIX") || !strcmp(ent->d_name, "FADES") || !strcmp(ent->d_name, "DEMOS")) {
            // Check if directory has .TEX
        }
        char lvl_dir[1024];
        snprintf(lvl_dir, sizeof(lvl_dir), "%s/%s", dcdata_dir, ent->d_name);
        struct stat st;
        if (stat(lvl_dir, &st) != 0 || !S_ISDIR(st.st_mode)) continue;

        char tex_path[1024], log_path[1024];
        snprintf(tex_path, sizeof(tex_path), "%s/%s/%s.TEX", dcdata_dir, ent->d_name, ent->d_name);
        snprintf(log_path, sizeof(log_path), "%s/%s/TEXTURE_%s.LOG", dcdata_dir, ent->d_name, ent->d_name);

        if (stat(tex_path, &st) == 0 && S_ISREG(st.st_mode)) {
            level_count++;
            uint32_t bank_dumped = 0, bank_errors = 0;
            const char *lp = (stat(log_path, &st) == 0) ? log_path : NULL;
            dump_bank(ent->d_name, tex_path, lp, out_dir, manifest, bleed, &bank_dumped, &bank_errors);
            total_dumped += bank_dumped;
            total_errors += bank_errors;
            if (verbose) {
                printf("[%s] Dumped %u textures (%u errors)\n", ent->d_name, bank_dumped, bank_errors);
            }
        }
    }
    closedir(d);
    printf("Processed %u level .TEX banks.\n", level_count);

    // 3. Process standalone 0GDTEX.PVR
    {
        char gd_path[1024];
        snprintf(gd_path, sizeof(gd_path), "%s/0GDTEX.PVR", assets_dc);
        struct stat st;
        if (stat(gd_path, &st) == 0) {
            uint32_t dmp = 0, err = 0;
            dump_standalone_pvr("DISC", gd_path, "", out_dir, manifest, bleed, false, &dmp, &err);
            total_dumped += dmp;
            total_errors += err;
            printf("[0GDTEX] Dumped standalone disc banner texture.\n");
        }
    }

    // 4. Process DPTEX/*.PVR
    {
        char glob_pat[1024];
        snprintf(glob_pat, sizeof(glob_pat), "%s/DPTEX/*.PVR", assets_dc);
        glob_t g;
        if (glob(glob_pat, 0, NULL, &g) == 0) {
            uint32_t dp_dumped = 0, dp_errors = 0;
            for (size_t i = 0; i < g.gl_pathc; i++) {
                uint32_t dmp = 0, err = 0;
                dump_standalone_pvr("DPTEX", g.gl_pathv[i], "DPTEX", out_dir, manifest, bleed, false, &dmp, &err);
                dp_dumped += dmp;
                dp_errors += err;
            }
            total_dumped += dp_dumped;
            total_errors += dp_errors;
            printf("[DPTEX] Dumped %u textures (%u errors)\n", dp_dumped, dp_errors);
            globfree(&g);
        }
    }

    // 5. Process DPWWW/MODEL/*.PVR
    {
        char glob_pat[1024];
        snprintf(glob_pat, sizeof(glob_pat), "%s/DPWWW/MODEL/*.PVR", assets_dc);
        glob_t g;
        if (glob(glob_pat, 0, NULL, &g) == 0) {
            uint32_t www_dumped = 0, www_errors = 0;
            for (size_t i = 0; i < g.gl_pathc; i++) {
                uint32_t dmp = 0, err = 0;
                dump_standalone_pvr("DPWWW", g.gl_pathv[i], "DPWWW/MODEL", out_dir, manifest, bleed, true, &dmp, &err);
                www_dumped += dmp;
                www_errors += err;
            }
            total_dumped += www_dumped;
            total_errors += www_errors;
            printf("[DPWWW] Dumped %u textures (%u errors)\n", www_dumped, www_errors);
            globfree(&g);
        }
    }

    if (manifest) {
        fclose(manifest);
        printf("Saved manifest to %s\n", manifest_path);
    }

    clock_t t_end = clock();
    double elapsed_sec = (double)(t_end - t_start) / CLOCKS_PER_SEC;

    printf("=============================================================\n");
    printf(" Extraction Complete!\n");
    printf(" Total textures dumped: %u\n", total_dumped);
    printf(" Total errors:          %u\n", total_errors);
    printf(" Elapsed time:          %.2f s\n", elapsed_sec);
    printf("=============================================================\n");

    return total_errors ? 1 : 0;
}
