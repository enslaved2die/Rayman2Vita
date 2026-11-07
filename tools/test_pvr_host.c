/**
 * @file test_pvr_host.c
 * @brief Host verification test suite for Dreamcast PVR / VQ / Twiddle / Bank (.TEX) / .CNT Decoder
 */

#include "gli_pvr.h"
#include "cpa_hd_tex.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

const void* GLI_VITA_pResolveVA(const void *ptr) { return ptr; }

#define COLOR_RESET  "\033[0m"
#define COLOR_GREEN  "\033[32m"
#define COLOR_RED    "\033[31m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_CYAN   "\033[36m"
#define COLOR_BOLD   "\033[1m"

static uint8_t *load_file(const char *path, size_t *pOutSize) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0) {
        fclose(f);
        return NULL;
    }
    uint8_t *buf = (uint8_t *)malloc((size_t)sz);
    if (!buf) {
        fclose(f);
        return NULL;
    }
    size_t rd = fread(buf, 1, (size_t)sz, f);
    fclose(f);
    if (rd != (size_t)sz) {
        free(buf);
        return NULL;
    }
    if (pOutSize) *pOutSize = (size_t)sz;
    return buf;
}

/* ============================================================================
 * Test 1: Color Conversions & Morton Twiddle Math
 * ============================================================================ */
static bool test_color_and_twiddle(void) {
    printf(COLOR_BOLD "=== Test 1: Pixel Conversions & Morton Twiddle Math ===" COLOR_RESET "\n");

    /* 1. RGB565: Pure Red 0xF800 -> R=0xFF, G=0x00, B=0x00, A=0xFF */
    uint32_t red = PVR_fn_uConvertRGB565toRGBA8888(0xF800);
    assert((red & 0xFF) == 0xFF);          /* R */
    assert(((red >> 8) & 0xFF) == 0x00);   /* G */
    assert(((red >> 16) & 0xFF) == 0x00);  /* B */
    assert(((red >> 24) & 0xFF) == 0xFF);  /* A */

    /* Pure Green 0x07E0 -> R=0x00, G=0xFF, B=0x00, A=0xFF */
    uint32_t green = PVR_fn_uConvertRGB565toRGBA8888(0x07E0);
    assert((green & 0xFF) == 0x00);
    assert(((green >> 8) & 0xFF) == 0xFF);
    assert(((green >> 16) & 0xFF) == 0x00);
    assert(((green >> 24) & 0xFF) == 0xFF);

    /* Pure Blue 0x001F -> R=0x00, G=0x00, B=0xFF, A=0xFF */
    uint32_t blue = PVR_fn_uConvertRGB565toRGBA8888(0x001F);
    assert((blue & 0xFF) == 0x00);
    assert(((blue >> 8) & 0xFF) == 0x00);
    assert(((blue >> 16) & 0xFF) == 0xFF);
    assert(((blue >> 24) & 0xFF) == 0xFF);

    /* 2. ARGB1555: Transparent White 0x7FFF -> A=0, RGB=255 */
    uint32_t trans_white = PVR_fn_uConvertARGB1555toRGBA8888(0x7FFF);
    assert(((trans_white >> 24) & 0xFF) == 0x00);
    assert((trans_white & 0xFF) == 0xFF);

    /* Opaque White 0xFFFF -> A=255, RGB=255 */
    uint32_t op_white = PVR_fn_uConvertARGB1555toRGBA8888(0xFFFF);
    assert(((op_white >> 24) & 0xFF) == 0xFF);
    assert((op_white & 0xFF) == 0xFF);

    /* 3. ARGB4444: Half-transparent Red 0x8F00 -> A=0x88, R=0xFF, G=0, B=0 */
    uint32_t half_red = PVR_fn_uConvertARGB4444toRGBA8888(0x8F00);
    assert(((half_red >> 24) & 0xFF) == 0x88);
    assert((half_red & 0xFF) == 0xFF);
    assert(((half_red >> 8) & 0xFF) == 0x00);

    /* 4. Morton Twiddle bijection test on 8x8 grid */
    bool visited[64] = { false };
    for (uint32_t y = 0; y < 8; y++) {
        for (uint32_t x = 0; x < 8; x++) {
            uint32_t idx = PVR_fn_uTwiddleIndex(x, y);
            assert(idx < 64);
            assert(!visited[idx]);
            visited[idx] = true;
        }
    }

    /* 5. Rectangular Twiddle on 16x8 grid */
    bool visited_rect[128] = { false };
    for (uint32_t y = 0; y < 8; y++) {
        for (uint32_t x = 0; x < 16; x++) {
            uint32_t idx = PVR_fn_uTwiddleRectIndex(x, y, 16, 8);
            assert(idx < 128);
            assert(!visited_rect[idx]);
            visited_rect[idx] = true;
        }
    }

    printf(" - Color conversion & Morton Twiddle math: " COLOR_GREEN "PASS [OK]" COLOR_RESET "\n");
    return true;
}

/* ============================================================================
 * Test 2: Sample Dreamcast PVR Files in DPTEX
 * ============================================================================ */
static bool test_dptex_pvrs(void) {
    printf(COLOR_BOLD "=== Test 2: Dreamcast PVR Decoding (assets/dc/DPTEX) ===" COLOR_RESET "\n");

    const struct {
        const char *filename;
        uint16_t expected_w;
        uint16_t expected_h;
        PVR_PixelFormat expected_pfmt;
        PVR_DataFormat  expected_dfmt;
    } test_files[] = {
        { "assets/dc/DPTEX/WALLPAPER.PVR",  128, 128, PVR_PIXEL_RGB565,   PVR_DATA_TWIDDLED },
        { "assets/dc/DPTEX/FLAGTEX001.PVR", 512, 512, PVR_PIXEL_ARGB1555, PVR_DATA_TWIDDLED },
        { "assets/dc/DPTEX/FLAGTEX002.PVR", 512, 512, PVR_PIXEL_ARGB4444, PVR_DATA_TWIDDLED },
        { "assets/dc/DPTEX/C_M_S.PVR",      512, 512, PVR_PIXEL_ARGB4444, PVR_DATA_TWIDDLED },
        { "assets/dc/DPTEX/C_NAME.PVR",     512, 512, PVR_PIXEL_ARGB4444, PVR_DATA_VQ },
        { "assets/dc/DPTEX/F_BGTEX01.PVR",  512, 512, PVR_PIXEL_ARGB1555, PVR_DATA_VQ },
        { "assets/dc/DPTEX/OPTION01.PVR",   512, 512, PVR_PIXEL_ARGB4444, PVR_DATA_VQ }
    };

    size_t count = sizeof(test_files) / sizeof(test_files[0]);
    size_t passed = 0;

    for (size_t i = 0; i < count; i++) {
        size_t sz = 0;
        uint8_t *data = load_file(test_files[i].filename, &sz);
        if (!data) {
            printf(COLOR_RED " [FAIL] Could not load %s" COLOR_RESET "\n", test_files[i].filename);
            continue;
        }

        /* 1. Test Header Parsing */
        PVR_Header hdr;
        bool hdr_ok = PVR_fn_bParseHeader(data, sz, &hdr);
        assert(hdr_ok);
        assert(hdr.uWidth == test_files[i].expected_w);
        assert(hdr.uHeight == test_files[i].expected_h);
        assert(hdr.ePixelFormat == test_files[i].expected_pfmt);
        assert(hdr.eDataFormat == test_files[i].expected_dfmt);

        /* 2. Test Full Decoding via PVR_fn_p_stLoadTexture */
        uint32_t out_w = 0, out_h = 0;
        uint32_t *pRGBA = NULL;
        uint32_t *ret = PVR_fn_p_stLoadTexture(data, sz, &out_w, &out_h, &pRGBA);

        assert(ret != NULL);
        assert(pRGBA != NULL);
        assert(out_w == test_files[i].expected_w);
        assert(out_h == test_files[i].expected_h);

        /* Verify that texture contains valid decoded pixel data (not all 0) */
        size_t non_zero = 0;
        size_t total_px = (size_t)out_w * out_h;
        for (size_t p = 0; p < total_px; p++) {
            if (pRGBA[p] != 0) non_zero++;
        }
        assert(non_zero > 0);

        const char *pfmt_str = (hdr.ePixelFormat == PVR_PIXEL_ARGB1555) ? "ARGB1555" :
                               (hdr.ePixelFormat == PVR_PIXEL_RGB565)   ? "RGB565"   :
                               (hdr.ePixelFormat == PVR_PIXEL_ARGB4444) ? "ARGB4444" : "Other";
        const char *dfmt_str = (hdr.eDataFormat == PVR_DATA_TWIDDLED) ? "Twiddled" :
                               (hdr.eDataFormat == PVR_DATA_VQ)       ? "VQ Codebook" : "Other";

        printf(" - [%zu/%zu] %-28s: %ux%u (%s, %-11s) -> " COLOR_GREEN "DECODED [OK]" COLOR_RESET " (%zu/%zu visible px)\n",
               i + 1, count, test_files[i].filename + 16, out_w, out_h, pfmt_str, dfmt_str, non_zero, total_px);

        PVR_fn_vFreeTexture(pRGBA);
        free(data);
        passed++;
    }

    assert(passed == count);
    printf(" - DPTEX PVR textures verification: %zu/%zu passed -> " COLOR_GREEN "100%% VALID [OK]" COLOR_RESET "\n", passed, count);
    return true;
}

/* ============================================================================
 * Test 3: FIX.TEX Texture Bank LZSS Decompression
 * ============================================================================ */
static bool test_fix_tex_bank(void) {
    printf(COLOR_BOLD "=== Test 3: FIX.TEX Texture Bank Decompression (assets/dc/DCDATA/FIX.TEX) ===" COLOR_RESET "\n");

    size_t sz = 0;
    uint8_t *data = load_file("assets/dc/DCDATA/FIX.TEX", &sz);
    if (!data) {
        printf(COLOR_RED " [FAIL] Could not load assets/dc/DCDATA/FIX.TEX" COLOR_RESET "\n");
        return false;
    }

    printf(" - FIX.TEX file size: %zu bytes\n", sz);

    PVR_TextureBank bank;
    bool bank_ok = PVR_fn_bLoadTexBank(data, sz, &bank);
    assert(bank_ok);
    printf(" - Decompressed textures in bank: " COLOR_GREEN "%u textures" COLOR_RESET "\n", bank.uTextureCount);
    assert(bank.uTextureCount == 280);

    /* Sample and decode diverse textures from the bank */
    size_t sample_indices[] = { 0, 1, 5, 7, 49, 99, 149, 199, 249, 279 };
    size_t sample_count = sizeof(sample_indices) / sizeof(sample_indices[0]);

    for (size_t s = 0; s < sample_count; s++) {
        size_t idx = sample_indices[s];
        assert(idx < bank.uTextureCount);

        const uint8_t *tex_bytes = bank.ppTextureBuffers[idx];
        size_t tex_sz = bank.pTextureSizes[idx];

        PVR_Header h;
        bool ok = PVR_fn_bParseHeader(tex_bytes, tex_sz, &h);
        assert(ok);

        uint32_t w = 0, h_dim = 0;
        uint32_t *pRGBA = NULL;
        uint32_t *ret = PVR_fn_p_stLoadTexture(tex_bytes, tex_sz, &w, &h_dim, &pRGBA);
        assert(ret != NULL);
        assert(pRGBA != NULL);
        assert(w == h.uWidth && h_dim == h.uHeight);

        const char *dfmt_name = (h.eDataFormat == PVR_DATA_TWIDDLED)           ? "Twiddled" :
                                (h.eDataFormat == PVR_DATA_TWIDDLED_MIPMAP)    ? "Twiddled+MM" :
                                (h.eDataFormat == PVR_DATA_VQ_MIPMAP)          ? "VQ+MM" :
                                (h.eDataFormat == PVR_DATA_RECTANGLE_TWIDDLED) ? "Rect Twiddled" : "Other";

        printf("   Texture #%03zu: %3ux%-3u, Format=%-13s, Decoded Size=%5zu B -> " COLOR_GREEN "DECODED [OK]" COLOR_RESET "\n",
               idx, w, h_dim, dfmt_name, tex_sz);

        PVR_fn_vFreeTexture(pRGBA);
    }

    PVR_fn_vFreeTexBank(&bank);
    free(data);
    printf(" - FIX.TEX 280-texture bank decompression: " COLOR_GREEN "PASS [OK]" COLOR_RESET "\n");
    return true;
}

/* ============================================================================
 * Test 4: OpenSpace .CNT Archive Parsing
 * ============================================================================ */
static bool test_cnt_archives(void) {
    printf(COLOR_BOLD "=== Test 4: OpenSpace .CNT Container Archive Parsing ===" COLOR_RESET "\n");

    /* 1. Test Vignette.cnt */
    size_t vig_sz = 0;
    uint8_t *vig_data = load_file("assets/pc/Data/Vignette.cnt", &vig_sz);
    if (!vig_data) {
        printf(COLOR_RED " [FAIL] Could not load assets/pc/Data/Vignette.cnt" COLOR_RESET "\n");
        return false;
    }

    CNT_Archive vig_archive;
    bool vig_ok = CNT_fn_bOpen(vig_data, vig_sz, &vig_archive);
    assert(vig_ok);
    assert(vig_archive.uFileCount == 35);
    printf(" - Vignette.cnt opened: %u files, XOR key=0x%02X\n", vig_archive.uFileCount, vig_archive.uXorKey);

    const char *sample_vig_files[] = {
        "Rayman.gf",
        "UbiSoft.gf",
        "VigLoadAstro01.gf",
        "VigLoadBast01.gf"
    };

    for (size_t i = 0; i < 4; i++) {
        const CNT_FileEntry *entry = CNT_fn_pFindFile(&vig_archive, sample_vig_files[i]);
        assert(entry != NULL);
        size_t file_sz = 0;
        const uint8_t *payload = CNT_fn_pGetFileData(&vig_archive, entry, &file_sz);
        assert(payload != NULL);
        assert(file_sz == entry->uFileSize);
        printf("   Found '%s': Offset=%u, Size=%zu bytes -> " COLOR_GREEN "VERIFIED [OK]" COLOR_RESET "\n",
               entry->szFileName, entry->uFileOffset, file_sz);
    }
    CNT_fn_vClose(&vig_archive);
    free(vig_data);

    /* 2. Test Textures.cnt */
    size_t tex_cnt_sz = 0;
    uint8_t *tex_cnt_data = load_file("assets/pc/Data/Textures.cnt", &tex_cnt_sz);
    if (!tex_cnt_data) {
        printf(COLOR_RED " [FAIL] Could not load assets/pc/Data/Textures.cnt" COLOR_RESET "\n");
        return false;
    }

    CNT_Archive tex_archive;
    bool tex_ok = CNT_fn_bOpen(tex_cnt_data, tex_cnt_sz, &tex_archive);
    assert(tex_ok);
    assert(tex_archive.uDirectoryCount == 33);
    assert(tex_archive.uFileCount == 1636);
    printf(" - Textures.cnt opened: %u directories, %u files, XOR key=0x%02X\n",
           tex_archive.uDirectoryCount, tex_archive.uFileCount, tex_archive.uXorKey);

    /* Lookup files by hierarchical relative path */
    const CNT_FileEntry *fe1 = CNT_fn_pFindFile(&tex_archive, "effets_speciaux/reserve_textures_eclairs/Eclair00.gf");
    assert(fe1 != NULL);
    assert(fe1->uFileSize == 78);

    const CNT_FileEntry *fe2 = CNT_fn_pFindFile(&tex_archive, "textures_objets/bois/tnt_caisse02_txy.gf");
    assert(fe2 != NULL);

    printf("   Hierarchical lookup ('%s'): Offset=%u, Size=%u bytes -> " COLOR_GREEN "VERIFIED [OK]" COLOR_RESET "\n",
           fe1->szFullPath, fe1->uFileOffset, fe1->uFileSize);
    printf("   Hierarchical lookup ('%s'): Offset=%u, Size=%u bytes -> " COLOR_GREEN "VERIFIED [OK]" COLOR_RESET "\n",
           fe2->szFullPath, fe2->uFileOffset, fe2->uFileSize);

    CNT_fn_vClose(&tex_archive);
    free(tex_cnt_data);

    printf(" - .CNT archive parsing and lookup: " COLOR_GREEN "PASS [OK]" COLOR_RESET "\n");
    return true;
}

/* ============================================================================
 * Test 5: HD Texture Override Hook (upscaled_textures/ & Fallback)
 * ============================================================================ */
static bool test_hd_texture_override(void) {
    printf(COLOR_BOLD "=== Test 5: HD Texture Override Hook & Portable PNG Decoder ===" COLOR_RESET "\n");

    /* 1. Direct PNG Loading Verification */
    uint32_t w_png = 0, h_png = 0;
    uint32_t *rgba_png = cpa_png_load_file("upscaled_textures/FIX/ago_eclab2_aaa.png", &w_png, &h_png);
    assert(rgba_png != NULL);
    assert(w_png == 64 && h_png == 64);
    printf(" - Direct PNG decode ('upscaled_textures/FIX/ago_eclab2_aaa.png'): %ux%u -> " COLOR_GREEN "DECODED [OK]" COLOR_RESET "\n", w_png, h_png);

    /* 2. HD Texture Override Hook Lookup for FIX by struct VA (0x8cdd6d98 -> ago_eclab2_aaa) */
    CpaHdTexture hd_direct;
    assert(cpa_hd_tex_load_ex("FIX", 0x8cdd6d98, 0, NULL, &hd_direct));
    assert(hd_direct.width == 64 && hd_direct.height == 64);
    assert(hd_direct.format == CPA_HD_TEX_FMT_DXT5 || hd_direct.format == CPA_HD_TEX_FMT_DXT1);
    printf(" - Direct hardware-compressed DDS load (0x8cdd6d98 in FIX): %ux%u format=%s (%u B) -> " COLOR_GREEN "LOADED [OK]" COLOR_RESET "\n",
           hd_direct.width, hd_direct.height,
           (hd_direct.format == CPA_HD_TEX_FMT_DXT5) ? "DXT5" : "DXT1", hd_direct.data_size);
    free(hd_direct.data);

    /* 2b. Transparent RGBA decompression via cpa_hd_tex_load wrapper */
    uint32_t w_hd = 0, h_hd = 0;
    uint32_t *rgba_hd = cpa_hd_tex_load("FIX", 0x8cdd6d98, 0, NULL, &w_hd, &h_hd);
    assert(rgba_hd != NULL);
    assert(w_hd == 64 && h_hd == 64);
    printf(" - Transparent on-the-fly DXT decode: (%ux%u) -> " COLOR_GREEN "DECODED [OK]" COLOR_RESET "\n", w_hd, h_hd);
    free(rgba_png);
    free(rgba_hd);

    /* 2c. Verification of User's Updated X Button Texture (s_pada_aaa.dds) */
    CpaHdTexture x_btn;
    assert(cpa_hd_tex_load_ex("FIX", 0, -1, "s_pada_aaa", &x_btn));
    assert(x_btn.width == 128 && x_btn.height == 128);
    assert(x_btn.format == CPA_HD_TEX_FMT_DXT5);
    assert(x_btn.data_size >= 16384);
    printf(" - Updated X button texture ('s_pada_aaa.dds'): 128x128 DXT5 (%u B with mips vs 65536 B uncompressed, 4x VRAM saving) -> " COLOR_GREEN "VERIFIED [OK]" COLOR_RESET "\n", x_btn.data_size);
    free(x_btn.data);

    /* 3. HD Texture Override Hook Lookup for Level (LEARN_30 -> amiral_vitro2_txynz.png) */
    cpa_hd_tex_set_level("LEARN_30");
    uint32_t w_l30 = 0, h_l30 = 0;
    uint32_t *rgba_l30 = cpa_hd_tex_load("LEARN_30", 0, -1, "amiral_vitro2_txynz", &w_l30, &h_l30);
    assert(rgba_l30 != NULL);
    assert(w_l30 == 256 && h_l30 == 256);
    printf(" - HD override query for Level bank (LEARN_30/amiral_vitro2_txynz): %ux%u -> " COLOR_GREEN "OVERRIDDEN [OK]" COLOR_RESET "\n", w_l30, h_l30);
    free(rgba_l30);

    /* 4. Graceful Fallback Verification for unreplaced texture */
    uint32_t w_none = 0, h_none = 0;
    uint32_t *rgba_none = cpa_hd_tex_load("FIX", 0x12345678, 999, "nonexistent_texture", &w_none, &h_none);
    assert(rgba_none == NULL);
    printf(" - Negative query returns NULL (graceful fallback triggered) -> " COLOR_GREEN "FALLBACK [OK]" COLOR_RESET "\n");

    /* Verify that original PVR chunk decodes normally on fallback */
    size_t sz_fix = 0;
    uint8_t *fix_tex = load_file("assets/dc/DCDATA/FIX.TEX", &sz_fix);
    assert(fix_tex != NULL);
    PVR_TextureBank bank;
    assert(PVR_fn_bLoadTexBank(fix_tex, sz_fix, &bank));
    uint32_t pvr_w = 0, pvr_h = 0;
    uint32_t *pvr_rgba = NULL;
    /* Chunk 0 is the original 32x32 ago_eclab2_aaa */
    assert(PVR_fn_pDecodeTexture(bank.ppTextureBuffers[0], bank.pTextureSizes[0], &pvr_w, &pvr_h, &pvr_rgba));
    assert(pvr_w == 32 && pvr_h == 32);
    printf(" - Original PVR decode on fallback: %ux%u -> " COLOR_GREEN "VERIFIED [OK]" COLOR_RESET " (original 32x32 vs upscaled 64x64)\n", pvr_w, pvr_h);
    PVR_fn_vFreeTexture(pvr_rgba);
    PVR_fn_vFreeTexBank(&bank);
    free(fix_tex);

    /* 5. Fast Raw Accelerator (.bin) Format Verification */
    uint32_t test_w = 4, test_h = 4;
    uint32_t test_pixels[16];
    for (int i = 0; i < 16; i++) test_pixels[i] = 0xFF000000u | (uint32_t)i;
    const char *tmp_bin = "/tmp/r2_test_accel.bin";
    assert(cpa_hd_tex_save_raw(tmp_bin, test_w, test_h, test_pixels));
    uint32_t load_w = 0, load_h = 0;
    uint32_t *reloaded = cpa_hd_tex_load_raw_file(tmp_bin, &load_w, &load_h);
    assert(reloaded != NULL);
    assert(load_w == 4 && load_h == 4);
    assert(memcmp(test_pixels, reloaded, sizeof(test_pixels)) == 0);
    free(reloaded);
    remove(tmp_bin);
    printf(" - Raw binary accelerator roundtrip (.bin / R2TX): 4x4 RGBA -> " COLOR_GREEN "VERIFIED [OK]" COLOR_RESET "\n");

    printf(" - HD texture override hook & fallback suite: " COLOR_GREEN "PASS [OK]" COLOR_RESET "\n");
    return true;
}

int main(int argc, char **argv) {
    printf(COLOR_BOLD "======================================================================" COLOR_RESET "\n");
    printf(COLOR_BOLD "  Rayman 2 Dreamcast Texture Container & Decoder Host Verification     " COLOR_RESET "\n");
    printf(COLOR_BOLD "======================================================================" COLOR_RESET "\n\n");

    bool t1 = test_color_and_twiddle();
    printf("\n");
    bool t2 = test_dptex_pvrs();
    printf("\n");
    bool t3 = test_fix_tex_bank();
    printf("\n");
    bool t4 = test_cnt_archives();
    printf("\n");
    bool t5 = test_hd_texture_override();

    printf("\n" COLOR_BOLD "======================================================================" COLOR_RESET "\n");
    if (t1 && t2 && t3 && t4 && t5) {
        printf(COLOR_GREEN COLOR_BOLD "  ALL DREAMCAST PVR & CONTAINER TESTS PASSED CLEANLY! [100%% OK]" COLOR_RESET "\n");
        printf(COLOR_BOLD "======================================================================" COLOR_RESET "\n");
        return 0;
    } else {
        printf(COLOR_RED COLOR_BOLD "  SOME TESTS FAILED!" COLOR_RESET "\n");
        printf(COLOR_BOLD "======================================================================" COLOR_RESET "\n");
        return 1;
    }
}
