/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: gli_vitagl.h
 *
 * Phase 5: vitaGL 3D Rendering Backend Architecture
 * Tasks 5.1, 5.3, 5.4 — GLI Driver, 3D Geometry, 16:9 Camera & 2D UI Pipeline
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe & GliOGLvd.dll
 * ============================================================================ */

#ifndef GLI_VITAGL_H
#define GLI_VITAGL_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include <vitaGL.h>
#include <psp2/gxm.h>
#include <psp2/display.h>

#include "vita_shim/os_vita.h"
#include "vita_shim/cpa_mth.h"
#include "cpa_engine.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 1. Hardware Screen & Display Constants (Native PS Vita 960x544 Widescreen)
 * ---------------------------------------------------------------------------- */
#define GLI_VITA_SCREEN_WIDTH             960
#define GLI_VITA_SCREEN_HEIGHT            544
#define GLI_VITA_ASPECT_RATIO             (960.0f / 544.0f) /* 1.764705882f */
#define GLI_VITA_RAM_THRESHOLD            (16 * 1024 * 1024) /* 16 MB */
#define GLI_VITA_LEGACY_POOL_SIZE         (8 * 1024 * 1024) /* 8 MB */
#define GLI_VITA_MAX_TEXTURES             1024
#define GLI_VITA_BATCH_VERTEX_MAX         4096
#define GLI_VITA_BATCH_INDEX_MAX          12288

/* Default Camera & Clipping Parameters */
#define GLI_VITA_DEFAULT_FOV              60.0f
#define GLI_VITA_DEFAULT_ZNEAR            0.1f
#define GLI_VITA_DEFAULT_ZFAR             1500.0f

/* ----------------------------------------------------------------------------
 * 2. Alpha & Blending Modes
 * ---------------------------------------------------------------------------- */
#define GLI_BLEND_OPAQUE                  0  /* Depth write enabled, blend off */
#define GLI_BLEND_ALPHATEST               1  /* Alpha test enabled (ref > 0.1) */
#define GLI_BLEND_ALPHABLEND              2  /* SrcAlpha, OneMinusSrcAlpha */
#define GLI_BLEND_ADDITIVE                3  /* SrcAlpha, One (glow / magic fist) */

/* Material / Polygon Flags */
#define GLI_MAT_FLAG_OPAQUE               0x00000001U
#define GLI_MAT_FLAG_TRANSPARENT          0x00000002U
#define GLI_MAT_FLAG_ALPHA_TEST           0x00000004U
#define GLI_MAT_FLAG_ADDITIVE             0x00000008U
#define GLI_MAT_FLAG_BILINEAR             0x00000010U
#define GLI_MAT_FLAG_CLAMP_U              0x00000020U
#define GLI_MAT_FLAG_CLAMP_V              0x00000040U
#define GLI_MAT_FLAG_TWO_SIDED            0x00000080U
#define GLI_MAT_FLAG_ENVIRONMENT_MAP      0x00000100U
#define GLI_MAT_FLAG_FOG_DISABLE          0x00000200U

/* ----------------------------------------------------------------------------
 * 3. Geometry & Vertex Data Structures
 * ---------------------------------------------------------------------------- */

/* 2D Screen-space Vertex (7 floats / 28 bytes matching CPA Engine GliOGLvd) */
typedef struct GLI_tdst2DVertex_ {
    float    x;
    float    y;
    float    z;
    float    rhw;
    uint32_t color;  /* 32-bit RGBA */
    float    u;
    float    v;
} GLI_tdst2DVertex;

/* 3D World / Object Space Vertex */
typedef struct GLI_tdst3DVertex_ {
    MTH3D_Vector stPos;
    MTH3D_Vector stNormal;
    uint32_t     ulDiffuseColor;  /* 32-bit RGBA */
    float        u;
    float        v;
} GLI_tdst3DVertex;

/* Texture Coordinate Pair */
typedef struct GLI_tdstUV_ {
    float u;
    float v;
} GLI_tdstUV;

/* Single Indexed Triangle */
typedef struct GLI_tdstTriangleIndexed_ {
    uint16_t awVertexIndex[3];
    uint16_t awUVIndex[3];
    uint16_t uwMaterialIndex;
} GLI_tdstTriangleIndexed;

/* Element Indexed Triangles (Main 3D Mesh Batch Descriptor - 32 bytes matching SH-4 layout) */
typedef struct GLI_tdstElementIndexedTriangles_ {
    uint16_t      uwNumberOfUsedVertices; /* +0x00: vertex count in batch */
    uint16_t      uwNumberOfTriangles;    /* +0x02: triangle count (3 uint16 indices per triangle) */
    uint16_t     *pawTriangles;          /* +0x04: pointer to triangle vertex index array */
    union {
        void     *pNormalArray;          /* +0x08: array of face/vertex normals (MTH3D_Vector) */
        uint16_t *pawUVIndices;          /* +0x08: or face UV index array */
    };
    GLI_tdstUV   *pUVArray;              /* +0x0C: array of (u, v) floats */
    uint32_t     *pColorArray;           /* +0x10: array of uint32_t RGBA */
    void         *pMaterial;             /* +0x14: material pointer or texture index */
    uint32_t      ulFlags;               /* +0x18: polygon / material blend flags (0xFFFF0000 base) */
    MTH3D_Vector *pVertexArray;          /* +0x1C: array of MTH3D_Vector (x, y, z floats) */
} GLI_tdstElementIndexedTriangles;

/* 2D Sprite / Billboard Quad Descriptor */
typedef struct GLI_tdstSprite_ {
    float    x0, y0;
    float    x1, y1;
    float    z;
    uint32_t ulColor;                /* 32-bit RGBA diffuse */
    float    u0, v0;
    float    u1, v1;
    void    *pTexture;
    uint32_t ulFlags;
} GLI_tdstSprite;

/* ----------------------------------------------------------------------------
 * 4. Fog Pipeline & Environment Structures
 * ---------------------------------------------------------------------------- */
typedef struct GLI_tdstFogParams_ {
    int      bEnable;
    float    fDepthStart;
    float    fDepthEnd;
    float    fDensity;
    float    aColor[4];              /* RGBA (0.0f - 1.0f) */
    uint32_t ulColor;                /* 32-bit packed RGBA */
} GLI_tdstFogParams;

/* ----------------------------------------------------------------------------
 * 5. Texture Structure
 * ---------------------------------------------------------------------------- */
typedef struct GLI_tdstTexture_ {
    uint32_t ulWidth;
    uint32_t ulHeight;
    uint32_t ulBpp;                  /* 16 or 32 bpp */
    uint32_t ulFlags;
    GLuint   uiGLHandle;             /* vitaGL texture handle */
    void    *pRawData;               /* Decoded pixel buffer */
    char     szName[64];
} GLI_tdstTexture;

/* ----------------------------------------------------------------------------
 * 6. Dynamic Deform Mesh State (DNM Vertex Displacement)
 * ---------------------------------------------------------------------------- */
typedef struct GLI_tdstDeformMeshState_ {
    int                 bActive;
    float               fWeight;           /* Morph blend factor (0.0f to 1.0f) */
    const MTH3D_Vector *pBaseVertices;
    const MTH3D_Vector *pTargetVertices;
    size_t              ulVertexCount;
} GLI_tdstDeformMeshState;

/* ----------------------------------------------------------------------------
 * 7. 3D Camera Projection State
 * ---------------------------------------------------------------------------- */
typedef struct GLI_tdstCamera_ {
    MTH3D_Matrix stViewMatrix;
    MTH3D_Matrix stProjectionMatrix;
    float        fFov;                     /* Degrees */
    float        fAspectRatio;             /* Native 960.0f / 544.0f */
    float        fZNear;
    float        fZFar;
    MTH3D_Vector stPosition;
    MTH3D_Vector stTarget;
} GLI_tdstCamera;

/* ----------------------------------------------------------------------------
 * 8. Driver Statistics & Runtime Telemetry
 * ---------------------------------------------------------------------------- */
typedef struct GLI_tdstStats_ {
    uint32_t ulFrameCount;
    uint32_t ulTrianglesDrawn;
    uint32_t ulSpritesDrawn;
    uint32_t ulBatchesSubmitted;
    uint32_t ulTexturesBound;
} GLI_tdstStats;

/* ----------------------------------------------------------------------------
 * 9. Master vitaGL Driver Context (GLI_tdstVitaGLContext)
 * ---------------------------------------------------------------------------- */
typedef struct GLI_tdstVitaGLContext_ {
    bool                     bInitialized;
    bool                     bHardwareAccelerated;
    int                      iWidth;
    int                      iHeight;
    float                    fAspectRatio;

    /* Viewport & Scissor Rectangles */
    int                      iViewportX, iViewportY, iViewportW, iViewportH;
    int                      iClipX, iClipY, iClipW, iClipH;
    float                    fZNear, fZFar;

    /* Active Rendering State */
    int                      iActiveBlendMode;
    bool                     bDepthTestEnabled;
    bool                     bDepthWriteEnabled;
    bool                     bAlphaTestEnabled;
    bool                     bCullFaceEnabled;
    GLuint                   uiBoundTexture;
    uint32_t                 ulGlobalAlpha;

    /* Fog State (Dreamcast Ambient Atmosphere) */
    GLI_tdstFogParams        stFog;

    /* Camera & Projection */
    GLI_tdstCamera           stCamera;

    /* Dynamic Deform Mesh */
    GLI_tdstDeformMeshState  stDeformMesh;

    /* Black Polygon Overlay */
    bool                     bBlackPolygonActive;
    float                    fBlackPolygonAlpha;

    /* Statistics */
    GLI_tdstStats            stStats;

    /* Texture Table Cache */
    GLI_tdstTexture          aTextures[GLI_VITA_MAX_TEXTURES];
    uint32_t                 ulTextureCount;
} GLI_tdstVitaGLContext;

extern GLI_tdstVitaGLContext g_stVitaGL;

/* ----------------------------------------------------------------------------
 * 10. GLI Driver Lifecycle & Function Declarations (All 38 Callbacks)
 * ---------------------------------------------------------------------------- */
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
int     GLI_DRV_xSendElementTIToClip_TRIANGLES(void *pElement);
int     GLI_DRV_xSendSingleTriangleToClip_TRIANGLES(void *pTriangle);
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
 * 11. Platform Utility & Pipeline Helper Functions
 * ---------------------------------------------------------------------------- */
void GLI_VITA_vSetBlendMode(int mode);
void GLI_VITA_vSetProjection16x9(float fov_degrees, float zNear, float zFar);
void GLI_VITA_vBegin2D(void);
void GLI_VITA_vEnd2D(void);
void GLI_VITA_vSetDeformMesh(int active, float weight, const MTH3D_Vector *base, const MTH3D_Vector *target, size_t count);
void GLI_VITA_vRender2DQuad(float x, float y, float w, float h, float u0, float v0, float u1, float v1, uint32_t color, GLuint texture);
void GLI_VITA_vResetStats(void);
const void* GLI_VITA_pResolveVA(const void *ptr);

#ifdef __cplusplus
}
#endif

#endif /* GLI_VITAGL_H */
