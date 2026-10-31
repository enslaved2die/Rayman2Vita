/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: cpa_engine.c
 *
 * Tasks 4.1 & 4.2 — Dreamcast SNA/GPT Engine Loader & Headless Drivers
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#include "cpa_engine.h"
#include "gli_vitagl.h"
#include "gli_pvr.h"
#include "r2_level_geo.h"
#include "snd_vita.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#if defined(__vita__) || defined(CPA_PLATFORM_VITA)
#include <psp2/kernel/threadmgr.h>
#else
#include <unistd.h>
#define sceKernelDelayThread(us) usleep((useconds_t)(us))
typedef uint32_t SceUInt;
#endif

#ifndef M_PI
#define M_PI 3.14159265358979323846f
#endif

/* ----------------------------------------------------------------------------
 * 1. Global Engine State
 * ---------------------------------------------------------------------------- */
GAM_tdstEngine          g_stEngine;
uint8_t                 GAM_ucEngineState = GAM_STATE_NONE;
uint32_t                g_aGlobalPointerTable[256];
bool                    g_bEngineRunning = true;

int                     g_nCollectedLums = 0;
int                     g_nBrokenCages = 0;

static bool R2_fn_bIsValidBufferPtr(const void *ptr) {
    if (!ptr) return false;
    uintptr_t p = (uintptr_t)ptr;
    if (g_stEngine.pLevelDatBuffer &&
        p >= (uintptr_t)g_stEngine.pLevelDatBuffer &&
        p < (uintptr_t)g_stEngine.pLevelDatBuffer + g_stEngine.ulLevelDatSize) {
        return true;
    }
    if (g_stEngine.pFixBuffer &&
        p >= (uintptr_t)g_stEngine.pFixBuffer &&
        p < (uintptr_t)g_stEngine.pFixBuffer + g_stEngine.ulFixSize) {
        return true;
    }
    return false;
}


/* ----------------------------------------------------------------------------
 * 2. GLI Driver Interface Table (Integrated with Real vitaGL 3D Backend)
 * ---------------------------------------------------------------------------- */
/* Master Driver Interface Table */
GLI_tdstDriverInterface g_stGliDriver = {
    GLI_DRV_xSendElementTIToClip_TRIANGLES,
    GLI_DRV_xSendSingleTriangleToClip_TRIANGLES,
    GLI_DRV_xInitDriver,
    GLI_DRV_vCloseDriver,
    GLI_DRV_bBeginScene,
    GLI_DRV_bEndScene,
    GLI_DRV_vFlipDevice,
    GLI_DRV_vFlipDeviceWithSyncro,
    GLI_DRV_vClearDevice,
    GLI_DRV_vClearZBufferRegion,
    GLI_DRV_fnl_EnumModes,
    GLI_DRV_hChangeMode,
    GLI_DRV_bLockDevice,
    GLI_DRV_bUnlockDevice,
    GLI_DRV_bPrepareForGliWindowed,
    GLI_DRV_vPrepareForGliFullScreen,
    GLI_DRV_vActivateGli,
    GLI_DRV_vReadaptDisplay,
    GLI_DRV_bWindowedModeIsOptimized,
    GLI_DRV_vOptimizedWindowedMode,
    GLI_DRV_vNonOptimizedWindowedMode,
    GLI_DRV_xClearViewingList,
    GLI_DRV_xSendListToViewport,
    GLI_DRV_vSetZClip,
    GLI_DRV_vSetClipWindow,
    GLI_DRV_vSendSingleLineToClip,
    GLI_DRV_vSendSpriteToClip,
    GLI_DRV_vSendSpriteToClipWithColors,
    GLI_DRV_vSendSpriteToClipWithUV,
    GLI_DRV_vDownLoadTextures,
    GLI_DRV_vUnLoadTextures,
    GLI_DRV_lGetSizeOfTexture,
    GLI_DRV_vDoOpaqueTextureSelection,
    GLI_DRV_vWrite16bBitmapToBackBuffer,
    GLI_DRV_vAddBlackPolygon,
    GLI_DRV_vNoBlackPolygon,
    GLI_DRV_vComputeFogEffect,
    GLI_DRV_lRequest,
    GLI_DRV_lSetCommonData
};

/* ----------------------------------------------------------------------------
 * 3. Dreamcast Yamaha AICA Sound Driver (SND)
 * ---------------------------------------------------------------------------- */
void SND_fn_vInitDriver(void) {
    OS_Vita_LogInfo("[SND] Initializing Yamaha AICA ADPCM sound driver & mixer");
    SND_Vita_Init();
}

void SND_fn_vSetSpace(void *pSpace) {
    (void)pSpace;
}

void SND_fn_vUpdate3dSound(void) {
}

void SND_fn_vInit(void) {
    OS_Vita_LogInfo("[SND] Loading common sound bank (FIX.OSB)...");
    SND_Vita_LoadFixBank();
}

void SND_fn_vSetSoftDirectory(const char *dir) {
    (void)dir;
}

int SND_fn_bCanSetOptions(void) {
    return 1;
}

void SND_fn_vLoadBank(const char *bank) {
    OS_Vita_LogInfo("[SND] Loading sound bank: %s", bank ? bank : "default");
    if (bank && bank[0] != '\0') {
        char path[128];
        snprintf(path, sizeof(path), "%s.OSB", bank);
        SND_Vita_LoadBank(path);
    }
}

void SND_fn_vShutdown(void) {
    OS_Vita_LogInfo("[SND] Shutting down Yamaha AICA sound driver...");
    SND_Vita_Shutdown();
}

/* Compile-time structure size verification for Dreamcast binary layout */
_Static_assert(sizeof(GAM_tdstSuperObject) == 48, "GAM_tdstSuperObject must be exactly 48 bytes matching SH-4 layout");
_Static_assert(sizeof(GEO_tdstGeometric) == 36, "GEO_tdstGeometric must be exactly 36 bytes matching SH-4 layout");
_Static_assert(sizeof(GLI_tdstElementIndexedTriangles) == 32, "GLI_tdstElementIndexedTriangles must be exactly 32 bytes matching SH-4 layout");

/* ----------------------------------------------------------------------------
 * 4. Fix Snapshot Loader (GAM_fn_vLoadFix)
 * ---------------------------------------------------------------------------- */
bool GAM_fn_vLoadFix(void) {
    OS_Vita_LogPrintf("[RAYMAN2 VITA] Loading Fix snapshot (FIX.DAT)...\n");

    size_t fix_size = 0;
    void *fix_buf = CPA_LoadFileAligned32("FIX.DAT", &fix_size);
    if (!fix_buf) {
        fix_buf = CPA_LoadFileAligned32("DCDATA/FIX.DAT", &fix_size);
    }
    if (!fix_buf) {
        fix_buf = CPA_LoadFileAligned32("FIX.SNA", &fix_size);
    }

    if (!fix_buf) {
        OS_Vita_LogError("ERROR: FIX.DAT not found/readable (tried FIX.DAT, DCDATA/FIX.DAT, FIX.SNA); fix load FAILED");
        return false;
    }

    /* Image base VA = header word at +0x10 (proven, DC_LEVEL_FORMAT.md s.1). The image is kept
     * pristine: pointers stay Dreamcast VAs and are resolved on read by r2_level_geo.c. */
    uint32_t base_addr = 0;
    if (fix_size >= 0x20) memcpy(&base_addr, (const uint8_t*)fix_buf + R2_DC_HDR_FIX_BASE_OFF, 4);
    if (fix_size < 0x20 || base_addr < 0x8C000000U || base_addr >= 0x8D000000U || (base_addr & 3U)) {
        OS_Vita_LogError("ERROR: FIX.DAT header base VA 0x%08X is not a valid Dreamcast RAM address; fix load FAILED", base_addr);
        CPA_free_aligned(fix_buf);
        return false;
    }

    g_stEngine.pFixBuffer = fix_buf;
    g_stEngine.ulFixSize = fix_size;
    g_stEngine.ulFixBaseVa = base_addr;

    /* Entry 0 in Global Pointer Table points to Fix snapshot */
    g_aGlobalPointerTable[0] = (uint32_t)(uintptr_t)fix_buf;

    /* Set up BlockNode 0 (Fix) in relocation list */
    g_stEngine.stFixSubInfo.ulUnknown00 = 0;
    g_stEngine.stFixSubInfo.pArray = (uint8_t*)fix_buf;
    g_stEngine.stFixSubInfo.ulMaxCount = (uint32_t)(fix_size / 32);
    g_stEngine.stFixSubInfo.ulElementStride = 32;

    g_stEngine.stFixBlock.ulBlockId = 0;
    g_stEngine.stFixBlock.ulFlags = 1;
    g_stEngine.stFixBlock.pSubInfo = &g_stEngine.stFixSubInfo;
    g_stEngine.stFixBlock.pNext = NULL;

    OS_Vita_LogPrintf("[RAYMAN2 VITA] Loaded FIX.DAT: base VA (hdr+0x10)=0x%08X, size=%lu bytes, end VA=0x%08X\n",
                      base_addr, (unsigned long)fix_size, base_addr + (uint32_t)fix_size);
    return true;
}

/* ----------------------------------------------------------------------------
 * 5. Level Snapshot Loader (GAM_fn_vLoadLevel)
 * ---------------------------------------------------------------------------- */
static int s_iShotFrame = 0;
void GAM_fn_vSetScreenshotFrame(int f) { s_iShotFrame = f; }
static int s_iRaymanCam = 0, s_iShowUnposed = 0, s_iRigOnly = 0;
static float s_fCamDist = 6.0f, s_fCamHeight = 2.5f;
void GAM_fn_vSetRaymanView(float dist, float height, int rigOnly) { s_iRaymanCam = 1; s_fCamDist = dist; s_fCamHeight = height; s_iRigOnly = rigOnly; }
void GAM_fn_vSetDebugFlags(int raymanCam, int showUnposed) { if (raymanCam) s_iRaymanCam = 1; if (showUnposed) s_iShowUnposed = 1; }

/* Debug: dump the back buffer (glReadPixels) as PPM to prove real rendered output. */
static void R2_DumpFramePPM(const char *path) {
    if (!g_stVitaGL.bHardwareAccelerated) return;
    uint8_t *px = (uint8_t*)malloc(960 * 544 * 4);
    if (!px) return;
    glFinish();
    glReadPixels(0, 0, 960, 544, GL_RGBA, GL_UNSIGNED_BYTE, px);
    FILE *f = fopen(path, "wb");
    if (f) {
        fprintf(f, "P6\n960 544\n255\n");
        for (int y = 543; y >= 0; y--)
            for (int x = 0; x < 960; x++) fwrite(px + ((size_t)y * 960 + x) * 4, 1, 3, f);
        fclose(f);
        OS_Vita_LogPrintf("[SHOT] wrote %s\n", path);
    } else OS_Vita_LogError("[SHOT] cannot open %s", path);
    free(px);
}

static R2Geo_Scene s_stScene;
static bool        s_bSceneValid;

bool GAM_fn_vLoadLevel(const char *szLevelName) {
    if (!szLevelName || !szLevelName[0]) {
        szLevelName = "LEARN_10";
    }

    g_stEngine.ucEngineState = GAM_STATE_LOAD_LEVEL;
    GAM_ucEngineState = GAM_STATE_LOAD_LEVEL;
    strncpy(g_stEngine.szCurrentLevel, szLevelName, sizeof(g_stEngine.szCurrentLevel) - 1);

    OS_Vita_LogPrintf("[RAYMAN2 VITA] Loading Level: %s...\n", szLevelName);

    int level_id = R2_LVL_LEARN_10; /* Default 37 */
    for (int i = 0; i < R2_LVL_COUNT; i++) {
        if (strcasecmp(g_aR2LevelDescriptors[i].szLevelCode, szLevelName) == 0) {
            level_id = g_aR2LevelDescriptors[i].eLevelId;
            break;
        }
    }

    /* Load Level .DAT and .TMP */
    char dat_path[128], tmp_path[128];
    snprintf(dat_path, sizeof(dat_path), "%s.DAT", szLevelName);
    snprintf(tmp_path, sizeof(tmp_path), "%s.TMP", szLevelName);

    size_t dat_size = 0, tmp_size = 0;
    void *dat_buf = CPA_LoadFileAligned32(dat_path, &dat_size);
    void *tmp_buf = CPA_LoadFile(tmp_path, &tmp_size);

    if (!dat_buf) {
        char dc_dat[128];
        snprintf(dc_dat, sizeof(dc_dat), "DCDATA/%s/%s.DAT", szLevelName, szLevelName);
        dat_buf = CPA_LoadFileAligned32(dc_dat, &dat_size);
    }
    if (!tmp_buf) {
        char dc_tmp[128];
        snprintf(dc_tmp, sizeof(dc_tmp), "DCDATA/%s/%s.TMP", szLevelName, szLevelName);
        tmp_buf = CPA_LoadFile(dc_tmp, &tmp_size);
    }

    if (!dat_buf || !tmp_buf) {
        OS_Vita_LogError("ERROR: level %s: %s%s missing; level load FAILED", szLevelName, dat_buf ? "" : "DAT ", tmp_buf ? "" : "TMP");
        if (dat_buf) CPA_free_aligned(dat_buf);
        if (tmp_buf) CPA_free(tmp_buf);
        return false;
    }

    /* Image base VA = header word at +0x94; cross-check (proven): the 6-byte record array
     * hdr[10] x hdr[11] must end within 3 bytes of the end of the image. */
    uint32_t hdr[48];
    uint32_t lvl_base = 0;
    bool bBaseOk = false;
    if (dat_size >= sizeof(hdr)) {
        memcpy(hdr, dat_buf, sizeof(hdr));
        lvl_base = hdr[R2_DC_HDR_LEVEL_BASE_OFF / 4];
        uint32_t tail_end = hdr[10] + hdr[11] * 6U;
        int64_t slack = (int64_t)lvl_base + (int64_t)dat_size - (int64_t)tail_end;
        bBaseOk = (lvl_base >= 0x8C000000U && lvl_base < 0x8D000000U && !(lvl_base & 3U) && slack >= 0 && slack <= 3);
        OS_Vita_LogPrintf("[RAYMAN2 VITA] %s.DAT base VA (hdr+0x94)=0x%08X end=0x%08X; base check: record array hdr[10]=0x%08X x hdr[11]=%u ends 0x%08X, slack=%lld bytes (expect 0..3) -> %s\n",
                          szLevelName, lvl_base, lvl_base + (uint32_t)dat_size, hdr[10], hdr[11], tail_end, (long long)slack, bBaseOk ? "OK" : "FAIL");
    }
    if (!bBaseOk) {
        OS_Vita_LogError("ERROR: level %s: image base VA could not be verified; level load FAILED", szLevelName);
        CPA_free_aligned(dat_buf);
        CPA_free(tmp_buf);
        return false;
    }

    g_stEngine.pLevelDatBuffer = dat_buf;
    g_stEngine.ulLevelDatSize = dat_size;
    g_stEngine.pLevelTmpBuffer = tmp_buf;
    g_stEngine.ulLevelTmpSize = tmp_size;
    g_stEngine.ulLevelBaseVa = lvl_base;

    g_aGlobalPointerTable[level_id] = (uint32_t)(uintptr_t)dat_buf;

    g_stEngine.stLevelSubInfo.ulUnknown00 = 0;
    g_stEngine.stLevelSubInfo.pArray = (uint8_t*)dat_buf;
    g_stEngine.stLevelSubInfo.ulMaxCount = (uint32_t)(dat_size / 32);
    g_stEngine.stLevelSubInfo.ulElementStride = 32;

    g_stEngine.stLevelBlock.ulBlockId = (uint32_t)level_id;
    g_stEngine.stLevelBlock.ulFlags = 1;
    g_stEngine.stLevelBlock.pSubInfo = &g_stEngine.stLevelSubInfo;
    g_stEngine.stLevelBlock.pNext = NULL;
    g_stEngine.stFixBlock.pNext = &g_stEngine.stLevelBlock;

    /* .TMP relocation tables: parsed and range-checked only. They patch AI/behaviour objects
     * (Table 1: obj+4 = GPT[obj[11]]; Table 2: *target = Resolve(token)) using runtime GPT /
     * block arrays that do not exist on the host, and the geometry/SuperObject traversal reads
     * none of the patched slots (tools/DC_LEVEL_FORMAT.md s.2). They are NOT applied. */
    const R2_tdst_TmpHeader *pHdr = (const R2_tdst_TmpHeader*)tmp_buf;
    uint32_t nT1InImg = 0, nT2InImg = 0;
    bool bT1Ok = (tmp_size >= sizeof(*pHdr) && pHdr->ulTable1Count > 0 && (size_t)pHdr->ulTable1Offset + (size_t)pHdr->ulTable1Count * sizeof(uint32_t) <= tmp_size);
    bool bT2Ok = (tmp_size >= sizeof(*pHdr) && pHdr->ulTable2Count > 0 && (size_t)pHdr->ulTable2Offset + (size_t)pHdr->ulTable2Count * sizeof(R2_tdst_RtbEntry) <= tmp_size);
    if (bT1Ok) {
        const uint32_t *t1 = (const uint32_t*)((const uint8_t*)tmp_buf + pHdr->ulTable1Offset);
        for (uint32_t i = 0; i < pHdr->ulTable1Count; i++) {
            uint32_t va = t1[i];
            if ((va >= g_stEngine.ulFixBaseVa && va < g_stEngine.ulFixBaseVa + g_stEngine.ulFixSize) ||
                (va >= lvl_base && va < lvl_base + dat_size)) nT1InImg++;
        }
    }
    if (bT2Ok) {
        const R2_tdst_RtbEntry *t2 = (const R2_tdst_RtbEntry*)((const uint8_t*)tmp_buf + pHdr->ulTable2Offset);
        for (uint32_t i = 0; i < pHdr->ulTable2Count; i++) {
            uint32_t va = (uint32_t)(uintptr_t)t2[i].pTargetPointer;
            if ((va >= g_stEngine.ulFixBaseVa && va < g_stEngine.ulFixBaseVa + g_stEngine.ulFixSize) ||
                (va >= lvl_base && va < lvl_base + dat_size)) nT2InImg++;
        }
    }
    OS_Vita_LogPrintf("[RAYMAN2 VITA] TMP tables (parsed, NOT applied): T1 %u entries (%u inside FIX/LEVEL image), T2 %u entries (%u inside image)\n",
                      bT1Ok ? pHdr->ulTable1Count : 0, nT1InImg, bT2Ok ? pHdr->ulTable2Count : 0, nT2InImg);
    if (!bT1Ok || !bT2Ok || nT1InImg != pHdr->ulTable1Count || nT2InImg != pHdr->ulTable2Count) {
        OS_Vita_LogError("ERROR: TMP relocation tables for %s are malformed or point outside the images; level load FAILED", szLevelName);
        g_stEngine.ucEngineState = GAM_STATE_NONE;
        GAM_ucEngineState = GAM_STATE_NONE;
        return false;
    }

    /* Load default sound bank + level textures (needed before texture VAs can be resolved) */
    SND_fn_vLoadBank(szLevelName);
    char tex_path[128];
    snprintf(tex_path, sizeof(tex_path), "%s/%s.TEX", szLevelName, szLevelName);
    PVR_fn_bLoadLevelTextures(tex_path);

    /* Real SuperObject-tree walk from the World SuperObject (DAT header word 13) */
    uint32_t root_va = hdr[R2_DC_HDR_WORLD_SO_OFF / 4];
    R2Geo_Image imgFix = { g_stEngine.ulFixBaseVa, (const uint8_t*)g_stEngine.pFixBuffer, g_stEngine.ulFixSize };
    R2Geo_Image imgLvl = { lvl_base, (const uint8_t*)dat_buf, dat_size };
    if (s_bSceneValid) { R2Geo_Free(&s_stScene); s_bSceneValid = false; }
    if (!R2Geo_Build(&imgFix, &imgLvl, root_va, &s_stScene)) {
        OS_Vita_LogError("ERROR: World SuperObject 0x%08X not verified or no geometry decoded in %s; level load FAILED", root_va, szLevelName);
        g_stEngine.pWorldSuperObject = NULL;
        g_stEngine.ucEngineState = GAM_STATE_NONE;
        GAM_ucEngineState = GAM_STATE_NONE;
        return false;
    }
    s_bSceneValid = true;
    R2Geo_ResolveTextures(&s_stScene);
    g_stEngine.pWorldSuperObject = (GAM_tdstSuperObject*)((uint8_t*)dat_buf + (root_va - lvl_base));
    g_stEngine.pRaymanSPO = NULL;

    const R2Geo_Scene *S = &s_stScene;
    OS_Vita_LogPrintf("[GEO] World SO 0x%08X: %u SuperObjects (world %u, actor %u, sector %u, IPO %u, other %u); parent mismatches %u, child-count mismatches %u, cycles %u, unreadable %u\n",
                      root_va, S->nSO, S->nSOWorld, S->nSOActor, S->nSOSector, S->nSOIpo, S->nSOOther,
                      S->nParentMismatch, S->nCountMismatch, S->nCycle, S->nUnreadable);
    OS_Vita_LogPrintf("[GEO] IPOs %u, meshes decoded %u, elements %u (skipped %u), triangles %u, vertices(expanded) %u, batches(by texture) %u, textures referenced %u, resolved to GL %u\n",
                      S->nIpo, S->nMeshes, S->nElements, S->nElemSkipped, S->nTris, S->nVerts, S->nBatches, S->nDistinctTex, S->nTexResolved);
    OS_Vita_LogPrintf("[GEO] OTHER ACTORS (PLACEHOLDER POSE, HIDDEN by default; debug toggle SQUARE or --show-unposed): %u actors total (incl. Rayman), %u without ObjectsTable, table entries %u (NULL PO %u, bad chain %u, duplicate geo skipped %u), unique actor geos %u, unposed actor triangles %u; static triangles %u; total decoded %u\n",
                      S->nActors, S->nActorNoTable, S->nActorTblEntries, S->nActorNullPo, S->nActorBadChain, S->nActorDupGeo, S->nActorGeos, S->nUnposedActorTris, S->nStaticTris, S->nTris);
    {
        const R2Geo_Rig *R = &S->rig;
        OS_Vita_LogPrintf("[RIG] Rayman SO 0x%08X: valid=%d anim=%d channels=%u frames=%u firstFrame=%u keys=%u; parts decoded %u, rig elements %u (%u textured), rig triangles %u\n",
                          R->soVa, R->valid, R->anim, R->nCh, R->nFrames, R->firstFrame, R->nKeys, R->geoCount, R->nEl, R->nElTexResolved, R->nTris);
        for (uint32_t i = 0; i < R->nCh && i < R2GEO_RIG_MAXCH; i++)
            OS_Vita_LogPrintf("[RIG]   ch%u -> ObjectsTable[%d] geo 0x%08X\n", i, R->obj[i], R->geo[i]);
        OS_Vita_LogPrintf("[RIG] frame rate: %.1f fps %s (AnimRef u8@+2; AnimRef frame count %u vs table %u); interpolation between keys = slerp/lerp (my choice)\n",
                          R->fps > 0 ? R->fps : 30.0f, R->fpsFromData ? "read from data, interpretation as fps UNPROVEN" : "ASSUMED (not found in data)", R->animRefFrames, R->nFrames);
        OS_Vita_LogPrintf("[RIG] placement: %s; translation (%.3f, %.3f, %.3f)\n",
                          R->placement ? "matrix from block at LEARN_10.DAT header word 25 (INFERRED spawn: block refs Rayman actor+SO, type-3 matrix; meaning not read from code)" : "SO global matrix (identity in data; NOT a real spawn)",
                          R->world[12], R->world[13], R->world[14]);
    }
    OS_Vita_LogPrintf("[GEO] alpha/pass from texture flags (tex+4): %u distinct textures, %u with unclear flags -> texel-alpha fallback; %u unclear wrap (tex+0x18 > 3 -> REPEAT); batches: %u cutout, %u blend/additive\n",
                      S->nTexDistinct, S->nTexFlagUnclear, S->nTexWrapUnclear, S->nBatchCutout, S->nBatchBlend);
    for (uint32_t i = 0; i < S->nTexHist; i++)
        OS_Vita_LogPrintf("[TEXFLAGS] flags=0x%08X wrap=%d textures=%u class=%s\n", S->texHist[i].flags, S->texHist[i].wrap, S->texHist[i].count,
                          S->texHist[i].cls == 0 ? "opaque" : S->texHist[i].cls == 1 ? "cutout" : S->texHist[i].cls == 2 ? "blend" : S->texHist[i].cls == 3 ? "additive" : "unclear->texel");
    for (int w = 0; w < 6; w++)
        OS_Vita_LogPrintf("[TEXWRAP] wrap %s: static batches UV in [0,1]: %u, U outside: %u, V outside: %u, both outside: %u\n", w < 4 ? (const char*[]){"0","1","2","3"}[w] : w == 4 ? ">3" : "n/a",
                          S->uvRange[w][0], S->uvRange[w][1], S->uvRange[w][2], S->uvRange[w][3]);
    {
        static const char *cn[5] = { "opaque", "cutout", "blend", "additive", "unclear" };
        for (int a = 0; a < 5; a++)
            OS_Vita_LogPrintf("[TEXFLAGS] flag-class %-8s vs texel-alpha class: opaque %u, cutout(0/255) %u, translucent %u\n", cn[a], S->flagVsTexel[a][0], S->flagVsTexel[a][1], S->flagVsTexel[a][2]);
    }
    OS_Vita_LogPrintf("[GEO] world bbox min (%.3f, %.3f, %.3f) max (%.3f, %.3f, %.3f)\n",
                      S->bmin[0], S->bmin[1], S->bmin[2], S->bmax[0], S->bmax[1], S->bmax[2]);

    g_stEngine.ucEngineState = GAM_STATE_RUN;
    GAM_ucEngineState = GAM_STATE_RUN;

    OS_Vita_LogPrintf("[RAYMAN2 VITA] LEVEL_LOAD_OK: %s (files loaded, bases verified from headers, TMP tables range-checked [not applied], World SuperObject walked, %u triangles decoded)\n",
                      szLevelName, S->nTris);
    return true;
}

/* ----------------------------------------------------------------------------
 * 6. Engine Initialization (GAM_fn_vInitEngine)
 * ---------------------------------------------------------------------------- */
void GAM_fn_vInitEngine(void) {
    /* Initialize OS Subsystems & Timers */
    OS_Vita_Init();
    OS_Vita_LogPrintf("[RAYMAN2 VITA] Initializing CPA Engine (Dreamcast 60 FPS Baseline)...\n");

    /* Initialize Virtual File System */
    VFS_Vita_Init("ux0:data/rayman2/");

    /* Initialize Input Subsystem */
    INO_Vita_Init();

    /* Initialize Save Subsystem */
    SAVE_Vita_Init();

    /* Initialize Engine Structure */
    memset(&g_stEngine, 0, sizeof(g_stEngine));
    memset(g_aGlobalPointerTable, 0, sizeof(g_aGlobalPointerTable));

    g_stEngine.ucEngineState = GAM_STATE_INIT;
    GAM_ucEngineState = GAM_STATE_INIT;
    g_stEngine.fDeltaTime = GAM_DELTA_TIME_60FPS;
    g_stEngine.ulFrameCounter = 0;
    g_stEngine.fTotalTime = 0.0f;
    g_stEngine.ulFixBaseVa = 0;
    g_stEngine.ulLevelBaseVa = 0;

    /* Initialize Headless Drivers */
    GLI_DRV_xInitDriver();
    SND_fn_vInitDriver();
    SND_fn_vInit();

    /* Load Fix Snapshot */
    if (!GAM_fn_vLoadFix()) {
        OS_Vita_LogError("ERROR: Failed to load Fix snapshot; engine will not run");
        g_bEngineRunning = false;
    }

    /* Load Fix Texture Bank (Common / Character / UI Textures) */
    PVR_fn_bLoadLevelTextures("FIX.TEX");

    /* Load Primary Baseline Level (LEARN_10 - The Woods of Light) */
    if (!GAM_fn_vLoadLevel("LEARN_10")) {
        OS_Vita_LogError("ERROR: Failed to load level LEARN_10; engine will not run");
        g_bEngineRunning = false;
    }
}

/* ----------------------------------------------------------------------------
 * 7. 3D Scene & 2D HUD Rendering Implementations
 * ---------------------------------------------------------------------------- */

#define RGBA32(r, g, b, a) ((uint32_t)(r) | ((uint32_t)(g) << 8) | ((uint32_t)(b) << 16) | ((uint32_t)(a) << 24))
#define RGB32(r, g, b)     RGBA32(r, g, b, 255)

/* 5x7 ASCII Bitmap Font (Characters 32 ' ' to 126 '~') */
static const uint8_t s_font5x7[96][5] __attribute__((unused)) = {
    [' ' - 32] = {0x00, 0x00, 0x00, 0x00, 0x00},
    ['!' - 32] = {0x00, 0x00, 0x5F, 0x00, 0x00},
    ['"' - 32] = {0x00, 0x07, 0x00, 0x07, 0x00},
    ['#' - 32] = {0x14, 0x7F, 0x14, 0x7F, 0x14},
    ['$' - 32] = {0x24, 0x2A, 0x7F, 0x2A, 0x12},
    ['%' - 32] = {0x23, 0x13, 0x08, 0x64, 0x62},
    ['&' - 32] = {0x36, 0x49, 0x55, 0x22, 0x50},
    ['\'' - 32]= {0x00, 0x05, 0x03, 0x00, 0x00},
    ['(' - 32] = {0x00, 0x1C, 0x22, 0x41, 0x00},
    [')' - 32] = {0x00, 0x41, 0x22, 0x1C, 0x00},
    ['*' - 32] = {0x14, 0x08, 0x3E, 0x08, 0x14},
    ['+' - 32] = {0x08, 0x08, 0x3E, 0x08, 0x08},
    [',' - 32] = {0x00, 0x50, 0x30, 0x00, 0x00},
    ['-' - 32] = {0x08, 0x08, 0x08, 0x08, 0x08},
    ['.' - 32] = {0x00, 0x60, 0x60, 0x00, 0x00},
    ['/' - 32] = {0x20, 0x10, 0x08, 0x04, 0x02},
    ['0' - 32] = {0x3E, 0x51, 0x49, 0x45, 0x3E},
    ['1' - 32] = {0x00, 0x42, 0x7F, 0x40, 0x00},
    ['2' - 32] = {0x42, 0x61, 0x51, 0x49, 0x46},
    ['3' - 32] = {0x21, 0x41, 0x45, 0x4B, 0x31},
    ['4' - 32] = {0x18, 0x14, 0x12, 0x7F, 0x10},
    ['5' - 32] = {0x27, 0x45, 0x45, 0x45, 0x39},
    ['6' - 32] = {0x3C, 0x4A, 0x49, 0x49, 0x30},
    ['7' - 32] = {0x01, 0x71, 0x09, 0x05, 0x03},
    ['8' - 32] = {0x36, 0x49, 0x49, 0x49, 0x36},
    ['9' - 32] = {0x06, 0x49, 0x49, 0x29, 0x1E},
    [':' - 32] = {0x00, 0x36, 0x36, 0x00, 0x00},
    [';' - 32] = {0x00, 0x56, 0x36, 0x00, 0x00},
    ['<' - 32] = {0x08, 0x14, 0x22, 0x41, 0x00},
    ['=' - 32] = {0x14, 0x14, 0x14, 0x14, 0x14},
    ['>' - 32] = {0x00, 0x41, 0x22, 0x14, 0x08},
    ['?' - 32] = {0x02, 0x01, 0x51, 0x09, 0x06},
    ['@' - 32] = {0x32, 0x49, 0x79, 0x41, 0x3E},
    ['A' - 32] = {0x7E, 0x11, 0x11, 0x11, 0x7E},
    ['B' - 32] = {0x7F, 0x49, 0x49, 0x49, 0x36},
    ['C' - 32] = {0x3E, 0x41, 0x41, 0x41, 0x22},
    ['D' - 32] = {0x7F, 0x41, 0x41, 0x22, 0x1C},
    ['E' - 32] = {0x7F, 0x49, 0x49, 0x49, 0x41},
    ['F' - 32] = {0x7F, 0x09, 0x09, 0x09, 0x01},
    ['G' - 32] = {0x3E, 0x41, 0x49, 0x49, 0x7A},
    ['H' - 32] = {0x7F, 0x08, 0x08, 0x08, 0x7F},
    ['I' - 32] = {0x00, 0x41, 0x7F, 0x41, 0x00},
    ['J' - 32] = {0x20, 0x40, 0x41, 0x3F, 0x01},
    ['K' - 32] = {0x7F, 0x08, 0x14, 0x22, 0x41},
    ['L' - 32] = {0x7F, 0x40, 0x40, 0x40, 0x40},
    ['M' - 32] = {0x7F, 0x02, 0x0C, 0x02, 0x7F},
    ['N' - 32] = {0x7F, 0x04, 0x08, 0x10, 0x7F},
    ['O' - 32] = {0x3E, 0x41, 0x41, 0x41, 0x3E},
    ['P' - 32] = {0x7F, 0x09, 0x09, 0x09, 0x06},
    ['Q' - 32] = {0x3E, 0x41, 0x51, 0x21, 0x5E},
    ['R' - 32] = {0x7F, 0x09, 0x19, 0x29, 0x46},
    ['S' - 32] = {0x46, 0x49, 0x49, 0x49, 0x31},
    ['T' - 32] = {0x01, 0x01, 0x7F, 0x01, 0x01},
    ['U' - 32] = {0x3F, 0x40, 0x40, 0x40, 0x3F},
    ['V' - 32] = {0x1F, 0x20, 0x40, 0x20, 0x1F},
    ['W' - 32] = {0x7F, 0x20, 0x18, 0x20, 0x7F},
    ['X' - 32] = {0x63, 0x14, 0x08, 0x14, 0x63},
    ['Y' - 32] = {0x07, 0x08, 0x70, 0x08, 0x07},
    ['Z' - 32] = {0x61, 0x51, 0x49, 0x45, 0x43},
    ['[' - 32] = {0x00, 0x7F, 0x41, 0x41, 0x00},
    ['\\' - 32]= {0x02, 0x04, 0x08, 0x10, 0x20},
    [']' - 32] = {0x00, 0x41, 0x41, 0x7F, 0x00},
    ['^' - 32] = {0x04, 0x02, 0x01, 0x02, 0x04},
    ['_' - 32] = {0x40, 0x40, 0x40, 0x40, 0x40},
    ['`' - 32] = {0x00, 0x01, 0x02, 0x04, 0x00},
    ['|' - 32] = {0x00, 0x00, 0x77, 0x00, 0x00}
};

static void DrawChar2D(float x, float y, char c, uint32_t color, float scale) __attribute__((unused));
static void DrawChar2D(float x, float y, char c, uint32_t color, float scale) {
    if (c >= 'a' && c <= 'z') c = (char)(c - 'a' + 'A');
    if (c < 32 || c > 126) return;
    int idx = (int)c - 32;
    if (idx >= 96) return;
    const uint8_t *glyph = s_font5x7[idx];
    for (int col = 0; col < 5; col++) {
        uint8_t bits = glyph[col];
        int r = 0;
        while (r < 7) {
            if (bits & (1 << r)) {
                int start_r = r;
                while (r < 7 && (bits & (1 << r))) r++;
                int height = r - start_r;
                GLI_VITA_vRender2DQuad(x + (float)col * scale, y + (float)start_r * scale,
                                       scale, (float)height * scale,
                                       0.0f, 0.0f, 1.0f, 1.0f, color, 0);
            } else {
                r++;
            }
        }
    }
}

static void DrawString2D(float x, float y, const char *str, uint32_t color, float scale) __attribute__((unused));
static void DrawString2D(float x, float y, const char *str, uint32_t color, float scale) {
    float cx = x;
    while (*str) {
        DrawChar2D(cx, y, *str, color, scale);
        cx += (5.0f + 1.0f) * scale;
        str++;
    }
}

/* ----------------------------------------------------------------------------
 * 7. Static level geometry rendering (decoded by r2_level_geo.c from the real SuperObject tree)
 * ---------------------------------------------------------------------------- */
void R2_CPA_RenderSuperObject(const GAM_tdstSuperObject *pSPO) {
    (void)pSPO;   /* static geometry + posed Rayman; unposed actor pile only when the debug toggle is on */
    if (s_bSceneValid) R2Geo_Draw(&s_stScene, (s_iShowUnposed ? R2GEO_DRAW_UNPOSED : 0) | (s_iRigOnly ? R2GEO_DRAW_RIG_ONLY : 0));
}

/* ----------------------------------------------------------------------------
 * 8. Engine Main Loop (GAM_fn_vEngineMainLoop)
 * ---------------------------------------------------------------------------- */
void GAM_fn_vEngineMainLoop(int max_frames) {
    if (!g_bEngineRunning || !g_stEngine.pWorldSuperObject) {
        OS_Vita_LogError("ERROR: main loop not started (engine init/level load failed)");
        return;
    }
    if (max_frames > 0) {
        OS_Vita_LogPrintf("[RAYMAN2 VITA] Starting CPA 60 FPS Engine Main Loop (%d ticks)...\n", max_frames);
    } else {
        OS_Vita_LogPrintf("[RAYMAN2 VITA] Starting CPA 60 FPS Engine Main Loop (Interactive 3D mode)...\n");
    }

    /* Start Dreamcast BGM Streaming Loop */
    SND_Vita_PlayMusic("DCDATA/SOUND/MUSIC/NA.DCZ", 1);

    /* Free-fly debug camera (NOT gameplay). Engine axes: Z is up (Raymap swaps y/z for Unity).
     * Start pose is derived from the decoded world bounding box. */
    const R2Geo_Scene *S = &s_stScene;
    float ext[3], ctr[3];
    for (int k = 0; k < 3; k++) { ext[k] = S->bmax[k] - S->bmin[k]; ctr[k] = 0.5f * (S->bmax[k] + S->bmin[k]); }
    float diag = sqrtf(ext[0]*ext[0] + ext[1]*ext[1] + ext[2]*ext[2]);
    float camPos[3] = { ctr[0], ctr[1] - 0.45f * ext[1], ctr[2] + 0.25f * ext[2] };
    float fYaw = atan2f(ctr[1] - camPos[1], ctr[0] - camPos[0]);
    float fPitch = atan2f(ctr[2] - camPos[2], sqrtf((ctr[0]-camPos[0])*(ctr[0]-camPos[0]) + (ctr[1]-camPos[1])*(ctr[1]-camPos[1])));
    bool bPaused = false;

    /* Rayman debug view: camera 6 units in front of him (he faces local -Y), looking at his centre */
    float rigTime = 0.0f;   /* animation clock in frames */
    float rigFps = (S->rig.fps > 0.f) ? S->rig.fps : 30.0f;
    int rigWarpPending = s_iRaymanCam;
    #define RIG_WARP() do { const float *W_ = S->rig.world; \
        float fx_ = -W_[4], fy_ = -W_[5], fl_ = sqrtf(fx_*fx_ + fy_*fy_); if (fl_ < 1e-4f) { fx_ = 0; fy_ = -1; fl_ = 1; } fx_ /= fl_; fy_ /= fl_; \
        camPos[0] = W_[12] + fx_ * s_fCamDist; camPos[1] = W_[13] + fy_ * s_fCamDist; camPos[2] = W_[14] + s_fCamHeight; \
        fYaw = atan2f(W_[13] - camPos[1], W_[12] - camPos[0]); \
        fPitch = atan2f((W_[14] + 1.0f) - camPos[2], s_fCamDist); } while (0)
    if (S->rig.valid && rigWarpPending) { RIG_WARP(); rigWarpPending = 0; }

    int frame = 0;
    while (g_bEngineRunning) {
        uint64_t frame_start = OS_Vita_GetTimeMicroseconds();

        frame++;
        if (max_frames > 0 && frame > max_frames) {
            break;
        }

        g_stEngine.ulFrameCounter = (uint32_t)frame;
        float dt = g_stEngine.fDeltaTime;
        g_stEngine.fTotalTime += dt;

        /* a) Input Processing */
        INO_Vita_Update();

        if (INO_bIsButtonPressed(R2_BTN_PAUSE)) {
            bPaused = !bPaused;
        }
        if (bPaused && INO_bIsButtonPressed(R2_BTN_WORLD_MAP)) {
            g_bEngineRunning = false;
            break;
        }

        if (INO_bIsButtonPressed(R2_BTN_SHOOT)) s_iShowUnposed = !s_iShowUnposed;
        if (INO_bIsButtonPressed(R2_BTN_LOOK) && S->rig.valid) RIG_WARP();

        if (!bPaused) {
            if (s_stScene.rig.valid) {
                rigTime += dt * rigFps;
                float ft = (float)s_stScene.rig.firstFrame + fmodf(rigTime, (float)s_stScene.rig.nFrames);
                R2Geo_RigPose(&s_stScene, ft);
            }
            float rx = 0.0f, ry = 0.0f, lx = 0.0f, ly = 0.0f;
            INO_vGetRightStick(&rx, &ry);
            INO_vGetLeftStick(&lx, &ly);
            fYaw   -= rx * 1.8f * dt;               /* stick right -> turn right (clockwise seen from +Z) */
            fPitch += ry * 1.2f * dt;
            if (fPitch < -1.5f) fPitch = -1.5f;
            if (fPitch >  1.5f) fPitch =  1.5f;
            float speed = diag * 0.25f * (INO_bIsButtonDown(R2_BTN_JUMP) ? 4.0f : 1.0f);   /* CROSS = fast */
            float fwd[3] = { cosf(fPitch) * cosf(fYaw), cosf(fPitch) * sinf(fYaw), sinf(fPitch) };
            float rgt[3] = { sinf(fYaw), -cosf(fYaw), 0.0f };
            float up = (INO_bIsButtonDown(R2_BTN_CAMERA_RESET) ? 1.0f : 0.0f) - (INO_bIsButtonDown(R2_BTN_STRAFE) ? 1.0f : 0.0f);   /* R up, L down */
            for (int k = 0; k < 3; k++) camPos[k] += (fwd[k] * ly + rgt[k] * lx) * speed * dt;
            camPos[2] += up * speed * dt;
        }

        /* d) 3D Scene Rendering */
        GLI_DRV_bBeginScene();

        if (g_stVitaGL.bHardwareAccelerated) {
            GLI_VITA_vSetProjection16x9(GLI_VITA_DEFAULT_FOV, 1.0f, diag * 2.0f);

            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            gluLookAt(camPos[0], camPos[1], camPos[2],
                      camPos[0] + cosf(fPitch) * cosf(fYaw), camPos[1] + cosf(fPitch) * sinf(fYaw), camPos[2] + sinf(fPitch),
                      0.0f, 0.0f, 1.0f);

            if (g_stEngine.pWorldSuperObject) {
                R2_CPA_RenderSuperObject(g_stEngine.pWorldSuperObject);
            }
        }

        GLI_DRV_bEndScene();
        if (s_iShotFrame > 0 && frame == s_iShotFrame) R2_DumpFramePPM("ux0:data/rayman2/shot.ppm");
        GLI_DRV_vFlipDevice();

        /* Microsecond precision frame pacing: ~60.0 FPS (16.666 ms per frame) */
        uint64_t frame_elapsed = OS_Vita_GetTimeMicroseconds() - frame_start;
        const uint64_t target_frame_us = 16666; /* ~60.0 FPS (16.666 ms) */
        if (frame_elapsed < target_frame_us) {
            sceKernelDelayThread((SceUInt)(target_frame_us - frame_elapsed));
        }

        if (frame % 30 == 7 && s_stScene.rig.valid)
            OS_Vita_LogPrintf("[RIGPOSE] frame %d: anim frame %.2f of %u; posed world bbox (%.2f %.2f %.2f)-(%.2f %.2f %.2f) cam (%.2f %.2f %.2f) yaw %.2f pitch %.2f\n", frame, (float)s_stScene.rig.firstFrame + fmodf(rigTime, (float)s_stScene.rig.nFrames), s_stScene.rig.nFrames,
                              s_stScene.rig.pmin[0], s_stScene.rig.pmin[1], s_stScene.rig.pmin[2], s_stScene.rig.pmax[0], s_stScene.rig.pmax[1], s_stScene.rig.pmax[2], camPos[0], camPos[1], camPos[2], fYaw, fPitch);
        /* Telemetry Logging: Every 30 Frames */
        if (frame % 30 == 0) {
            float cur_fps = (frame_elapsed > 0) ? (1000000.0f / (float)(frame_elapsed < target_frame_us ? target_frame_us : frame_elapsed)) : 60.0f;
            OS_Vita_LogPrintf("[RIG] (30-frame boundaries fall on whole loops at 30 fps; see offset samples) frame %d: anim time %.2f of %u frames @ %.0f fps; unposed pile %s\n", frame, fmodf(rigTime, (float)(S->rig.nFrames ? S->rig.nFrames : 1)), S->rig.nFrames, rigFps, s_iShowUnposed ? "SHOWN" : "hidden");
            OS_Vita_LogPrintf("[FRAME %d] FlyCam pos: (%.1f, %.1f, %.1f) | Triangles: %u | Batches: %u | Textures: %u | FPS: %.1f (dt: %llu us)\n",
                              frame, camPos[0], camPos[1], camPos[2],
                              (unsigned int)g_stVitaGL.stStats.ulTrianglesDrawn,
                              (unsigned int)g_stVitaGL.stStats.ulBatchesSubmitted,
                              (unsigned int)g_stVitaGL.ulTextureCount,
                              cur_fps,
                              (unsigned long long)frame_elapsed);
        }
    }

    if (max_frames > 0 && g_stEngine.ulFrameCounter == (uint32_t)max_frames) {
        /* Honest marker: only says the requested number of loop ticks ran. Says nothing about gameplay. */
        OS_Vita_LogPrintf("[RAYMAN2 VITA] TICKS_%d_DONE (loop iterations only; no gameplay implied)\n", max_frames);
    }
}

/* ----------------------------------------------------------------------------
 * 9. Engine Shutdown (GAM_fn_vShutdown)
 * ---------------------------------------------------------------------------- */
void GAM_fn_vShutdown(void) {
    OS_Vita_LogPrintf("[RAYMAN2 VITA] Shutting down CPA Engine...\n");

    if (s_bSceneValid) { R2Geo_Free(&s_stScene); s_bSceneValid = false; }

    /* Free snapshot buffers */
    if (g_stEngine.pFixBuffer) {
        CPA_free_aligned(g_stEngine.pFixBuffer);
        g_stEngine.pFixBuffer = NULL;
    }
    if (g_stEngine.pLevelDatBuffer) {
        CPA_free_aligned(g_stEngine.pLevelDatBuffer);
        g_stEngine.pLevelDatBuffer = NULL;
    }
    if (g_stEngine.pLevelTmpBuffer) {
        CPA_free(g_stEngine.pLevelTmpBuffer);
        g_stEngine.pLevelTmpBuffer = NULL;
    }

    /* Shutdown drivers */
    GLI_DRV_vCloseDriver();
    PVR_fn_vResetAllTextures();
    SND_fn_vShutdown();

    g_stEngine.ucEngineState = GAM_STATE_STOP;
    GAM_ucEngineState = GAM_STATE_STOP;

    OS_Vita_Shutdown();
}
