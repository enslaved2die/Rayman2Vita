/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: cpa_engine.h
 *
 * Tasks 4.1 & 4.2 — Dreamcast SNA/GPT Engine Loader & Headless Drivers
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#ifndef CPA_ENGINE_H
#define CPA_ENGINE_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "vita_shim/os_vita.h"
#include "vita_shim/vfs_vita.h"
#include "vita_shim/cpa_mth.h"
#include "vita_shim/r2_retail_tables.h"
#include "vita_shim/r2_ai_tables.h"
#include "vita_shim/ino_vita.h"
#include "vita_shim/save_vita.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 1. Engine States & Constants
 * ---------------------------------------------------------------------------- */
#define GAM_STATE_NONE            0
#define GAM_STATE_INIT            1  /* Engine Init & Fix Load */
#define GAM_STATE_LOAD_LEVEL      2  /* Level Load State */
#define GAM_STATE_RUN             3  /* Active 60 FPS Game Loop */
#define GAM_STATE_STOP            4  /* Shutdown / Halt */

#define GAM_TARGET_FPS            60.0f
#define GAM_DELTA_TIME_60FPS      (1.0f / 60.0f) /* 0.016666667f */

/* Image base VAs are NOT constants: they are read from the file headers
 * (FIX.DAT word @+0x10 = 0x8CCE4B20, <LEVEL>.DAT word @+0x94 = 0x8C804AE0 for LEARN_10;
 * see tools/DC_LEVEL_FORMAT.md section 1). Stored in g_stEngine.ulFixBaseVa / ulLevelBaseVa. */
#define R2_DC_HDR_FIX_BASE_OFF    0x10U
#define R2_DC_HDR_LEVEL_BASE_OFF  0x94U
#define R2_DC_HDR_WORLD_SO_OFF    0x34U
#define R2_DC_VA_MAPMONDE2_BASE   0x8CA00000U

/* ----------------------------------------------------------------------------
 * 2. Scene Graph & SuperObject Structures
 * ---------------------------------------------------------------------------- */
#define SPO_TYPE_WORLD            1
#define SPO_TYPE_ACTOR            2
#define SPO_TYPE_SECTOR           4
#define SPO_TYPE_MESH             8

typedef struct GAM_tdstSuperObject {
    uint32_t                    ulType;          /* +0x00: 1=World, 2=Actor, 4=Sector, 8=Mesh */
    void                       *pData;           /* +0x04: mesh geometry, actor, sector */
    struct GAM_tdstSuperObject *pFirstChild;     /* +0x08: first child SPO */
    struct GAM_tdstSuperObject *pLastChild;      /* +0x0C: last child SPO */
    uint32_t                    ulNbChildren;    /* +0x10: child count */
    struct GAM_tdstSuperObject *pPrevBrother;    /* +0x14: previous sibling */
    struct GAM_tdstSuperObject *pNextBrother;    /* +0x18: next sibling */
    struct GAM_tdstSuperObject *pParent;         /* +0x1C: parent SPO */
    uint32_t                    ulFlags;         /* +0x20: flags */
    MTH3D_Matrix               *pLocalMatrix;    /* +0x24: local 4x4 matrix */
    MTH3D_Matrix               *pGlobalMatrix;   /* +0x28: global 4x4 matrix */
    uint32_t                    ulStatus;        /* +0x2C: status */
} GAM_tdstSuperObject;

typedef struct GAM_tdstActorSPO {
    GAM_tdstSuperObject         stSuperObject;
    char                        szName[64];
    MTH3D_Vector                stPos;
    MTH3D_Vector                stVel;
    float                       fHealth;
    uint32_t                    ulActorFlags;
} GAM_tdstActorSPO;

/* CPA Geometric Object Structure (OpenSpace Mesh Descriptor) */
struct GLI_tdstElementIndexedTriangles_;

typedef struct GEO_tdstGeometric {
    MTH3D_Vector                           *a_stVertices;        /* +0x00 */
    MTH3D_Vector                           *a_stNormals;         /* +0x04 */
    union {
        uint32_t                            uwNumberOfVertices;  /* +0x08 */
        struct {
            uint16_t                        uwNumVertices;       /* +0x08 */
            uint16_t                        uwNumberOfElements;  /* +0x0A */
        };
    };
    float                                   fBoundMinX;          /* +0x0C */
    float                                   fBoundMinY;          /* +0x10 */
    float                                   fBoundMinZ;          /* +0x14 */
    float                                   fBoundRadius;        /* +0x18 */
    void                                   *p_stMaterials;       /* +0x1C */
    struct GLI_tdstElementIndexedTriangles_ *p_stElementList;    /* +0x20 */
} GEO_tdstGeometric;

void R2_CPA_RenderSuperObject(const GAM_tdstSuperObject *pSPO);

/* ----------------------------------------------------------------------------
 * 3. Master Engine State Structure (GAM_tdstEngine)
 * ---------------------------------------------------------------------------- */
typedef struct GAM_tdstEngine {
    uint8_t                     ucEngineState;
    uint32_t                    ulFrameCounter;
    float                       fDeltaTime;      /* 60 FPS native tick: 0.016666667f */
    float                       fTotalTime;
    char                        szCurrentLevel[64];

    /* Loaded snapshot buffers */
    void                       *pFixBuffer;
    size_t                      ulFixSize;
    void                       *pLevelDatBuffer;
    size_t                      ulLevelDatSize;
    void                       *pLevelTmpBuffer;
    size_t                      ulLevelTmpSize;

    /* Base VAs */
    uint32_t                    ulFixBaseVa;
    uint32_t                    ulLevelBaseVa;

    /* Scene Graph Roots */
    GAM_tdstSuperObject        *pWorldSuperObject;
    GAM_tdstActorSPO           *pRaymanSPO;
    MTH3D_Vector                stRaymanPosition;
    MTH3D_Vector                stRaymanVelocity;

    /* Relocation and Block Structures */
    R2_tdst_BlockNode           stFixBlock;
    R2_tdst_BlockSubInfo        stFixSubInfo;
    R2_tdst_BlockNode           stLevelBlock;
    R2_tdst_BlockSubInfo        stLevelSubInfo;
} GAM_tdstEngine;

/* Global Engine Variables */
extern GAM_tdstEngine           g_stEngine;
extern uint8_t                  GAM_ucEngineState;
extern uint32_t                 g_aGlobalPointerTable[256];
extern bool                     g_bEngineRunning;

/* ----------------------------------------------------------------------------
 * 4. Engine Lifecycle & Loader Functions
 * ---------------------------------------------------------------------------- */
void GAM_fn_vInitEngine(void);
bool GAM_fn_vLoadFix(void);
bool GAM_fn_vLoadLevel(const char *szLevelName);
void GAM_fn_vEngineMainLoop(int max_frames);
void GAM_fn_vShutdown(void);
void GAM_fn_vSetDebugFlags(int raymanCam, int showUnposed);   /* debug: start camera at Rayman / draw unposed actor pile */
void GAM_fn_vSetRaymanView(float dist, float height, int rigOnly);   /* debug camera in front of Rayman */
void GAM_fn_vSetScreenshotFrame(int frame);   /* debug: dump frame N to ux0:data/rayman2/shot.ppm */

/* ----------------------------------------------------------------------------
 * 5. GLI Driver Interface & Headless Function Pointers (38 Callbacks)
 * ---------------------------------------------------------------------------- */
typedef struct GLI_tdstDriverInterface {
    int     (*xSendElementTIToClip_TRIANGLES)(void *pElement);
    int     (*xSendSingleTriangleToClip_TRIANGLES)(void *pTriangle);
    int     (*xInitDriver)(void);
    void    (*vCloseDriver)(void);
    int     (*bBeginScene)(void);
    int     (*bEndScene)(void);
    void    (*vFlipDevice)(void);
    void    (*vFlipDeviceWithSyncro)(void);
    void    (*vClearDevice)(void);
    void    (*vClearZBufferRegion)(void *pRegion);
    int32_t (*fnl_EnumModes)(void *pModeList);
    void*   (*hChangeMode)(void *pMode);
    int     (*bLockDevice)(void);
    int     (*bUnlockDevice)(void);
    int     (*bPrepareForGliWindowed)(void);
    void    (*vPrepareForGliFullScreen)(void);
    void    (*vActivateGli)(void);
    void    (*vReadaptDisplay)(void);
    int     (*bWindowedModeIsOptimized)(void);
    void    (*vOptimizedWindowedMode)(void);
    void    (*vNonOptimizedWindowedMode)(void);
    int     (*xClearViewingList)(void);
    int     (*xSendListToViewport)(void);
    void    (*vSetZClip)(float fNear, float fFar);
    void    (*vSetClipWindow)(int x, int y, int w, int h);
    void    (*vSendSingleLineToClip)(void *pLine);
    void    (*vSendSpriteToClip)(void *pSprite);
    void    (*vSendSpriteToClipWithColors)(void *pSprite);
    void    (*vSendSpriteToClipWithUV)(void *pSprite);
    void    (*vDownLoadTextures)(void *pTextures, int count);
    void    (*vUnLoadTextures)(void *pTextures, int count);
    int32_t (*lGetSizeOfTexture)(void *pTexture);
    void    (*vDoOpaqueTextureSelection)(void *pTexture);
    void    (*vWrite16bBitmapToBackBuffer)(void *pBitmap, int x, int y, int w, int h);
    void    (*vAddBlackPolygon)(void *pPoly);
    void    (*vNoBlackPolygon)(void);
    void    (*vComputeFogEffect)(void *pFog);
    int32_t (*lRequest)(int request_id, void *pArgs);
    int32_t (*lSetCommonData)(void *pData);
} GLI_tdstDriverInterface;

extern GLI_tdstDriverInterface g_stGliDriver;

/* Individual Headless GLI Stubs */
int     GLI_DRV_xSendElementTIToClip_TRIANGLES(void *pElement);
int     GLI_DRV_xSendSingleTriangleToClip_TRIANGLES(void *pTriangle);
int     GLI_DRV_xInitDriver(void);
void    GLI_DRV_vCloseDriver(void);
int     GLI_DRV_bBeginScene(void);
int     GLI_DRV_bEndScene(void);
void    GLI_DRV_vFlipDevice(void);
void    GLI_DRV_vFlipDeviceWithSyncro(void);
void    GLI_DRV_vClearDevice(void);
void    GLI_DRV_vClearZBufferRegion(void *pRegion);
int32_t GLI_DRV_fnl_EnumModes(void *pModeList);
void*   GLI_DRV_hChangeMode(void *pMode);
int     GLI_DRV_bLockDevice(void);
int     GLI_DRV_bUnlockDevice(void);
int     GLI_DRV_bPrepareForGliWindowed(void);
void    GLI_DRV_vPrepareForGliFullScreen(void);
void    GLI_DRV_vActivateGli(void);
void    GLI_DRV_vReadaptDisplay(void);
int     GLI_DRV_bWindowedModeIsOptimized(void);
void    GLI_DRV_vOptimizedWindowedMode(void);
void    GLI_DRV_vNonOptimizedWindowedMode(void);
int     GLI_DRV_xClearViewingList(void);
int     GLI_DRV_xSendListToViewport(void);
void    GLI_DRV_vSetZClip(float fNear, float fFar);
void    GLI_DRV_vSetClipWindow(int x, int y, int w, int h);
void    GLI_DRV_vSendSingleLineToClip(void *pLine);
void    GLI_DRV_vSendSpriteToClip(void *pSprite);
void    GLI_DRV_vSendSpriteToClipWithColors(void *pSprite);
void    GLI_DRV_vSendSpriteToClipWithUV(void *pSprite);
void    GLI_DRV_vDownLoadTextures(void *pTextures, int count);
void    GLI_DRV_vUnLoadTextures(void *pTextures, int count);
int32_t GLI_DRV_lGetSizeOfTexture(void *pTexture);
void    GLI_DRV_vDoOpaqueTextureSelection(void *pTexture);
void    GLI_DRV_vWrite16bBitmapToBackBuffer(void *pBitmap, int x, int y, int w, int h);
void    GLI_DRV_vAddBlackPolygon(void *pPoly);
void    GLI_DRV_vNoBlackPolygon(void);
void    GLI_DRV_vComputeFogEffect(void *pFog);
int32_t GLI_DRV_lRequest(int request_id, void *pArgs);
int32_t GLI_DRV_lSetCommonData(void *pData);

/* ----------------------------------------------------------------------------
 * 6. Sound Driver Headless Stubs (SND)
 * ---------------------------------------------------------------------------- */
void SND_fn_vInitDriver(void);
void SND_fn_vSetSpace(void *pSpace);
void SND_fn_vUpdate3dSound(void);
void SND_fn_vInit(void);
void SND_fn_vSetSoftDirectory(const char *dir);
int  SND_fn_bCanSetOptions(void);
void SND_fn_vLoadBank(const char *bank);
void SND_fn_vShutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* CPA_ENGINE_H */
