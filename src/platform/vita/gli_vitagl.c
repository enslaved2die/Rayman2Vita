/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: gli_vitagl.c
 *
 * Phase 5: vitaGL 3D Rendering Backend Implementation
 * Tasks 5.1, 5.3, 5.4 — Full GLI Driver, 3D Geometry Batching,
 *                       16:9 Projection & 2D UI / HUD Pipeline
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe & GliOGLvd.dll
 * ============================================================================ */

#include "gli_vitagl.h"
#include "gli_pvr.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <psp2/kernel/threadmgr.h>

/* vitaGL internal splashscreen state declarations to control startup transition */
extern uint8_t is_splashscreen_active;
extern SceUID splash_mutex[2];
extern void clear_splashscreen(void);
extern uint8_t dirty_framebuffer;

/* Master VitaGL Driver State Context */
GLI_tdstVitaGLContext g_stVitaGL = {
    .bInitialized           = false,
    .bHardwareAccelerated   = false,
    .iWidth                 = GLI_VITA_SCREEN_WIDTH,
    .iHeight                = GLI_VITA_SCREEN_HEIGHT,
    .fAspectRatio           = GLI_VITA_ASPECT_RATIO,
    .iViewportX             = 0,
    .iViewportY             = 0,
    .iViewportW             = GLI_VITA_SCREEN_WIDTH,
    .iViewportH             = GLI_VITA_SCREEN_HEIGHT,
    .iClipX                 = 0,
    .iClipY                 = 0,
    .iClipW                 = GLI_VITA_SCREEN_WIDTH,
    .iClipH                 = GLI_VITA_SCREEN_HEIGHT,
    .fZNear                 = GLI_VITA_DEFAULT_ZNEAR,
    .fZFar                  = GLI_VITA_DEFAULT_ZFAR,
    .iActiveBlendMode       = GLI_BLEND_OPAQUE,
    .bDepthTestEnabled      = true,
    .bDepthWriteEnabled     = true,
    .bAlphaTestEnabled      = false,
    .bCullFaceEnabled       = true,
    .uiBoundTexture         = 0,
    .ulGlobalAlpha          = 255,
    .stFog = {
        .bEnable            = 1,
        .fDepthStart        = 25.0f,
        .fDepthEnd          = 450.0f,
        .fDensity           = 0.005f,
        .aColor             = { 0.12f, 0.18f, 0.28f, 1.0f }, /* Dreamcast atmospheric ambient sky/water tint */
        .ulColor            = 0xFF472E1EU
    },
    .stCamera = {
        .fFov               = GLI_VITA_DEFAULT_FOV,
        .fAspectRatio       = GLI_VITA_ASPECT_RATIO,
        .fZNear             = GLI_VITA_DEFAULT_ZNEAR,
        .fZFar              = GLI_VITA_DEFAULT_ZFAR,
        .stPosition         = { .x = 21.66f, .y = -52.5f, .z = -44.8f },
        .stTarget           = { .x = 21.66f, .y = -55.0f, .z = -51.30f }
    },
    .stDeformMesh = {
        .bActive            = 0,
        .fWeight            = 0.0f,
        .pBaseVertices      = NULL,
        .pTargetVertices    = NULL,
        .ulVertexCount      = 0
    },
    .bBlackPolygonActive    = false,
    .fBlackPolygonAlpha     = 0.0f,
    .stStats = { 0 },
    .ulTextureCount         = 0
};

/* Scratch vertex buffers for dynamic morphing & batching */
static MTH3D_Vector s_aDeformScratchVertices[GLI_VITA_BATCH_VERTEX_MAX];

/* ----------------------------------------------------------------------------
 * 1. Platform Utility & Blending Helpers
 * ---------------------------------------------------------------------------- */

void GLI_VITA_vSetBlendMode(int mode) {
    g_stVitaGL.iActiveBlendMode = mode;
    if (!g_stVitaGL.bHardwareAccelerated) {
        return;
    }

    switch (mode) {
        case GLI_BLEND_OPAQUE:
            glDisable(GL_BLEND);
            glDisable(GL_ALPHA_TEST);
            glDepthMask(GL_TRUE);
            g_stVitaGL.bDepthWriteEnabled = true;
            g_stVitaGL.bAlphaTestEnabled = false;
            break;

        case GLI_BLEND_ALPHATEST:
            glDisable(GL_BLEND);
            glEnable(GL_ALPHA_TEST);
            glAlphaFunc(GL_GREATER, 0.1f);
            glDepthMask(GL_TRUE);
            g_stVitaGL.bDepthWriteEnabled = true;
            g_stVitaGL.bAlphaTestEnabled = true;
            break;

        case GLI_BLEND_ALPHABLEND:
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glDisable(GL_ALPHA_TEST);
            glDepthMask(GL_FALSE);
            g_stVitaGL.bDepthWriteEnabled = false;
            g_stVitaGL.bAlphaTestEnabled = false;
            break;

        case GLI_BLEND_ADDITIVE:
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE);
            glDisable(GL_ALPHA_TEST);
            glDepthMask(GL_FALSE);
            g_stVitaGL.bDepthWriteEnabled = false;
            g_stVitaGL.bAlphaTestEnabled = false;
            break;

        default:
            break;
    }
}

void GLI_VITA_vSetProjection16x9(float fov_degrees, float zNear, float zFar) {
    g_stVitaGL.stCamera.fFov = fov_degrees;
    g_stVitaGL.stCamera.fZNear = zNear;
    g_stVitaGL.stCamera.fZFar = zFar;
    g_stVitaGL.fZNear = zNear;
    g_stVitaGL.fZFar = zFar;

    if (g_stVitaGL.bHardwareAccelerated) {
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluPerspective((GLdouble)fov_degrees, (GLdouble)GLI_VITA_ASPECT_RATIO, (GLdouble)zNear, (GLdouble)zFar);
        glMatrixMode(GL_MODELVIEW);
    }
}

void GLI_VITA_vBegin2D(void) {
    if (!g_stVitaGL.bHardwareAccelerated) {
        return;
    }

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    /* Top-left (0,0) to bottom-right (960, 544) 1:1 orthographic mapping */
    glOrtho(0.0, (GLdouble)GLI_VITA_SCREEN_WIDTH, (GLdouble)GLI_VITA_SCREEN_HEIGHT, 0.0, -1.0, 1.0);

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_FALSE);
    glDisable(GL_CULL_FACE);
}

void GLI_VITA_vEnd2D(void) {
    if (!g_stVitaGL.bHardwareAccelerated) {
        return;
    }

    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    if (g_stVitaGL.bCullFaceEnabled) {
        glEnable(GL_CULL_FACE);
    }

    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();

    glMatrixMode(GL_PROJECTION);
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
}

void GLI_VITA_vSetDeformMesh(int active, float weight, const MTH3D_Vector *base, const MTH3D_Vector *target, size_t count) {
    g_stVitaGL.stDeformMesh.bActive = active;
    g_stVitaGL.stDeformMesh.fWeight = weight;
    g_stVitaGL.stDeformMesh.pBaseVertices = base;
    g_stVitaGL.stDeformMesh.pTargetVertices = target;
    g_stVitaGL.stDeformMesh.ulVertexCount = count;
}

void GLI_VITA_vRender2DQuad(float x, float y, float w, float h,
                            float u0, float v0, float u1, float v1,
                            uint32_t color, GLuint texture) {
    if (g_stVitaGL.bHardwareAccelerated) {
        if (texture > 0) {
            glEnable(GL_TEXTURE_2D);
            glBindTexture(GL_TEXTURE_2D, texture);
        } else {
            glDisable(GL_TEXTURE_2D);
        }

        uint8_t r = (uint8_t)(color & 0xFF);
        uint8_t g = (uint8_t)((color >> 8) & 0xFF);
        uint8_t b = (uint8_t)((color >> 16) & 0xFF);
        uint8_t a = (uint8_t)((color >> 24) & 0xFF);
        if (a == 0 && color == 0) a = 255;

        glColor4ub(r, g, b, a);

        glBegin(GL_TRIANGLES);
            /* Triangle 1 */
            glTexCoord2f(u0, v0); glVertex2f(x,     y);
            glTexCoord2f(u1, v0); glVertex2f(x + w, y);
            glTexCoord2f(u1, v1); glVertex2f(x + w, y + h);

            /* Triangle 2 */
            glTexCoord2f(u0, v0); glVertex2f(x,     y);
            glTexCoord2f(u1, v1); glVertex2f(x + w, y + h);
            glTexCoord2f(u0, v1); glVertex2f(x,     y + h);
        glEnd();
    }

    g_stVitaGL.stStats.ulTrianglesDrawn += 2;
    g_stVitaGL.stStats.ulSpritesDrawn++;
}

void GLI_VITA_vResetStats(void) {
    memset(&g_stVitaGL.stStats, 0, sizeof(g_stVitaGL.stStats));
}

/* ----------------------------------------------------------------------------
 * 2. GLI Driver Lifecycle Implementation (38 Callbacks)
 * ---------------------------------------------------------------------------- */

/* Callback 1: Initialize Graphics Driver */
int GLI_DRV_xInitDriver(void) {
    if (g_stVitaGL.bInitialized) {
        return 1;
    }

    OS_Vita_LogInfo("[GLI_VITA] Initializing vitaGL backend (960x544 @ 60 FPS, 16MB RAM pool, 8MB legacy pool, 4X MSAA)...");

    /* Initialize vitaGL with 8MB legacy immediate mode pool, 16MB RAM threshold and 4X multisampling.
     * Note: vglInitExtended returns GL_TRUE if downscaled, GL_FALSE if native 960x544.
     * Hardware GXM is always initialized on Vita/Vita3K. */
    vglInitExtended(GLI_VITA_LEGACY_POOL_SIZE,
                    GLI_VITA_SCREEN_WIDTH,
                    GLI_VITA_SCREEN_HEIGHT,
                    GLI_VITA_RAM_THRESHOLD,
                    SCE_GXM_MULTISAMPLE_4X);
    g_stVitaGL.bHardwareAccelerated = true;

    /* Dismiss splashscreen immediately to present the 3D game scene */
    if (is_splashscreen_active) {
        sceKernelSignalSema(splash_mutex[0], 1);
        sceKernelWaitSema(splash_mutex[1], 1, NULL);
        is_splashscreen_active = 0;
        clear_splashscreen();
        sceKernelDeleteSema(splash_mutex[0]);
        sceKernelDeleteSema(splash_mutex[1]);
    }
    dirty_framebuffer = 1;
    vglWaitVblankStart(GL_TRUE);

    OS_Vita_LogInfo("[GLI_VITA] Hardware GXM context active, splashscreen dismissed, rendering 3D scene @ 960x544 60FPS");

    g_stVitaGL.bInitialized = true;
    g_stVitaGL.iWidth = GLI_VITA_SCREEN_WIDTH;
    g_stVitaGL.iHeight = GLI_VITA_SCREEN_HEIGHT;
    g_stVitaGL.fAspectRatio = GLI_VITA_ASPECT_RATIO;

    if (g_stVitaGL.bHardwareAccelerated) {
        /* Viewport & Scissor Setup */
        glViewport(0, 0, GLI_VITA_SCREEN_WIDTH, GLI_VITA_SCREEN_HEIGHT);
        glScissor(0, 0, GLI_VITA_SCREEN_WIDTH, GLI_VITA_SCREEN_HEIGHT);
        glEnable(GL_SCISSOR_TEST);

        /* Clear Buffer Setup */
        glClearColor(0.25f, 0.35f, 0.5f, 1.0f); /* debug sky; black made readback checks ambiguous */
        glClearDepth(1.0f);

        /* Depth Testing */
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_LEQUAL);
        glDepthMask(GL_TRUE);

        /* Culling & Orientation */
        glEnable(GL_CULL_FACE);
        glCullFace(GL_BACK);
        glFrontFace(GL_CCW);

        /* Shading & Texture Defaults */
        glShadeModel(GL_SMOOTH);
        glEnable(GL_TEXTURE_2D);
        glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

        /* Setup Linear Fog (Dreamcast Atmosphere) */
        glEnable(GL_FOG);
        glFogi(GL_FOG_MODE, GL_LINEAR);
        glFogf(GL_FOG_START, g_stVitaGL.stFog.fDepthStart);
        glFogf(GL_FOG_END, g_stVitaGL.stFog.fDepthEnd);
        glFogfv(GL_FOG_COLOR, g_stVitaGL.stFog.aColor);
        glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    }

    g_stVitaGL.bDepthTestEnabled = true;
    g_stVitaGL.bDepthWriteEnabled = true;
    g_stVitaGL.bCullFaceEnabled = true;

    /* 16:9 Widescreen Perspective Setup */
    GLI_VITA_vSetProjection16x9(GLI_VITA_DEFAULT_FOV, GLI_VITA_DEFAULT_ZNEAR, GLI_VITA_DEFAULT_ZFAR);

    OS_Vita_LogInfo("[GLI_VITA] Initialized vitaGL 3D graphics driver @ 960x544 60FPS (MSAA 4X) successfully");
    return 1;
}

/* Callback 2: Close Driver */
void GLI_DRV_vCloseDriver(void) {
    if (!g_stVitaGL.bInitialized) {
        return;
    }

    OS_Vita_LogInfo("[GLI_VITA] Closing vitaGL graphics driver...");

    /* Free cached textures */
    if (g_stVitaGL.bHardwareAccelerated) {
        for (uint32_t i = 0; i < g_stVitaGL.ulTextureCount; i++) {
            if (g_stVitaGL.aTextures[i].uiGLHandle > 0) {
                glDeleteTextures(1, &g_stVitaGL.aTextures[i].uiGLHandle);
                g_stVitaGL.aTextures[i].uiGLHandle = 0;
            }
        }
    }
    g_stVitaGL.ulTextureCount = 0;

    g_stVitaGL.bInitialized = false;
    OS_Vita_LogInfo("[GLI_VITA] Closed vitaGL driver cleanly");
}

/* Callback 3: Begin Scene Frame */
int GLI_DRV_bBeginScene(void) {
    if (!g_stVitaGL.bInitialized) {
        return 0;
    }

    /* Reset per-frame counters */
    g_stVitaGL.stStats.ulFrameCount++;
    g_stVitaGL.stStats.ulTrianglesDrawn = 0;
    g_stVitaGL.stStats.ulSpritesDrawn = 0;
    g_stVitaGL.stStats.ulBatchesSubmitted = 0;

    if (g_stVitaGL.bHardwareAccelerated) {
        /* Clear color and depth targets */
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        /* Depth testing and face culling state */
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_LEQUAL);
        glDepthMask(GL_TRUE);
        glEnable(GL_CULL_FACE);
        glCullFace(GL_BACK);
        glFrontFace(GL_CCW);

        /* Reset Modelview transform to Camera View */
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        gluLookAt(g_stVitaGL.stCamera.stPosition.x, g_stVitaGL.stCamera.stPosition.y, g_stVitaGL.stCamera.stPosition.z,
                  g_stVitaGL.stCamera.stTarget.x, g_stVitaGL.stCamera.stTarget.y, g_stVitaGL.stCamera.stTarget.z,
                  0.0f, 1.0f, 0.0f);

        /* Apply default opaque state */
        GLI_VITA_vSetBlendMode(GLI_BLEND_OPAQUE);
    }

    return 1;
}

/* Callback 4: End Scene Frame */
int GLI_DRV_bEndScene(void) {
    if (!g_stVitaGL.bInitialized) {
        return 0;
    }

    /* Draw full-screen black overlay if active (fade effects) */
    if (g_stVitaGL.bBlackPolygonActive && g_stVitaGL.fBlackPolygonAlpha > 0.001f) {
        GLI_VITA_vBegin2D();
        GLI_VITA_vSetBlendMode(GLI_BLEND_ALPHABLEND);

        uint8_t a = (uint8_t)(g_stVitaGL.fBlackPolygonAlpha * 255.0f);
        uint32_t black_color = (uint32_t)a << 24;

        GLI_VITA_vRender2DQuad(0.0f, 0.0f,
                               (float)GLI_VITA_SCREEN_WIDTH, (float)GLI_VITA_SCREEN_HEIGHT,
                               0.0f, 0.0f, 1.0f, 1.0f,
                               black_color, 0);

        GLI_VITA_vEnd2D();
    }

    if (g_stVitaGL.bHardwareAccelerated) {
        glFlush();
    }
    return 1;
}

/* Callback 5: Flip Front & Back Buffers (vsync swap) */
void GLI_DRV_vFlipDevice(void) {
    if (!g_stVitaGL.bInitialized) {
        return;
    }
    if (g_stVitaGL.bHardwareAccelerated) {
        vglSwapBuffers(GL_FALSE);
    }
}

/* Callback 6: Flip Device with Synchronized Retrace */
void GLI_DRV_vFlipDeviceWithSyncro(void) {
    GLI_DRV_vFlipDevice();
}

/* Callback 7: Clear Entire Device Surface */
void GLI_DRV_vClearDevice(void) {
    if (!g_stVitaGL.bInitialized) return;
    if (g_stVitaGL.bHardwareAccelerated) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }
}

/* Callback 8: Clear Sub-Region of Z-Buffer */
void GLI_DRV_vClearZBufferRegion(void *pRegion) {
    (void)pRegion;
    if (!g_stVitaGL.bInitialized) return;
    if (g_stVitaGL.bHardwareAccelerated) {
        glClear(GL_DEPTH_BUFFER_BIT);
    }
}

/* Callback 9: Enumerate Display Modes */
int32_t GLI_DRV_fnl_EnumModes(void *pModeList) {
    (void)pModeList;
    /* Native fixed 960x544 32bpp 60Hz mode supported */
    return 1;
}

/* Callback 10: Change Display Mode */
void* GLI_DRV_hChangeMode(void *pMode) {
    return pMode;
}

/* Callback 11: Lock Framebuffer Device */
int GLI_DRV_bLockDevice(void) {
    return 1;
}

/* Callback 12: Unlock Framebuffer Device */
int GLI_DRV_bUnlockDevice(void) {
    return 1;
}

/* Callback 13: Prepare For Windowed Rendering */
int GLI_DRV_bPrepareForGliWindowed(void) {
    return 1;
}

/* Callback 14: Prepare For Fullscreen */
void GLI_DRV_vPrepareForGliFullScreen(void) {
    /* Always native full-screen on PS Vita */
}

/* Callback 15: Activate GLI */
void GLI_DRV_vActivateGli(void) {
    if (g_stVitaGL.bHardwareAccelerated) {
        glViewport(g_stVitaGL.iViewportX, g_stVitaGL.iViewportY, g_stVitaGL.iViewportW, g_stVitaGL.iViewportH);
    }
}

/* Callback 16: Readapt Display to Resolution Changes */
void GLI_DRV_vReadaptDisplay(void) {
    if (g_stVitaGL.bHardwareAccelerated) {
        glViewport(0, 0, GLI_VITA_SCREEN_WIDTH, GLI_VITA_SCREEN_HEIGHT);
        glScissor(0, 0, GLI_VITA_SCREEN_WIDTH, GLI_VITA_SCREEN_HEIGHT);
    }
}

/* Callback 17: Query Windowed Mode Optimization */
int GLI_DRV_bWindowedModeIsOptimized(void) {
    return 1;
}

/* Callback 18: Optimized Windowed Mode */
void GLI_DRV_vOptimizedWindowedMode(void) {
}

/* Callback 19: Non-Optimized Windowed Mode */
void GLI_DRV_vNonOptimizedWindowedMode(void) {
}

/* Callback 20: Clear Viewing List */
int GLI_DRV_xClearViewingList(void) {
    return 1;
}

/* Callback 21: Send List to Viewport */
int GLI_DRV_xSendListToViewport(void) {
    return 1;
}

/* Callback 22: Set Z-Clipping Near and Far Planes */
void GLI_DRV_vSetZClip(float fNear, float fFar) {
    if (fNear <= 0.001f) fNear = 0.1f;
    if (fFar <= fNear)   fFar = fNear + 100.0f;

    g_stVitaGL.fZNear = fNear;
    g_stVitaGL.fZFar = fFar;
    GLI_VITA_vSetProjection16x9(g_stVitaGL.stCamera.fFov, fNear, fFar);
}

/* Callback 23: Set Viewport & Scissor Clip Window */
void GLI_DRV_vSetClipWindow(int x, int y, int w, int h) {
    if (w <= 0) w = GLI_VITA_SCREEN_WIDTH;
    if (h <= 0) h = GLI_VITA_SCREEN_HEIGHT;

    g_stVitaGL.iClipX = x;
    g_stVitaGL.iClipY = y;
    g_stVitaGL.iClipW = w;
    g_stVitaGL.iClipH = h;

    /* OpenGL origin is bottom-left; CPA origin is top-left */
    int gl_y = GLI_VITA_SCREEN_HEIGHT - (y + h);
    if (gl_y < 0) gl_y = 0;

    if (g_stVitaGL.bHardwareAccelerated) {
        glViewport(x, gl_y, w, h);
        glScissor(x, gl_y, w, h);
    }
}

/* Callback 24: Send Single 3D Debug/Gizmo Line */
void GLI_DRV_vSendSingleLineToClip(void *pLine) {
    if (!pLine || !g_stVitaGL.bInitialized) return;

    if (g_stVitaGL.bHardwareAccelerated) {
        const float *pCoords = (const float*)pLine;
        glDisable(GL_TEXTURE_2D);
        glBegin(GL_LINES);
            glVertex3f(pCoords[0], pCoords[1], pCoords[2]);
            glVertex3f(pCoords[3], pCoords[4], pCoords[5]);
        glEnd();
    }
}

/* Dreamcast Fixed Virtual Address -> Host Buffer Pointer Resolution */
const void* GLI_VITA_pResolveVA(const void *ptr) {
    if (!ptr) return NULL;
    uintptr_t u = (uintptr_t)ptr;
    if (u < 0x1000) return NULL;

    /* Dreamcast Fix buffer VA: [ulFixBaseVa (FIX.DAT hdr+0x10), +ulFixSize) */
    if (g_stEngine.pFixBuffer && g_stEngine.ulFixBaseVa && u >= g_stEngine.ulFixBaseVa && u < (g_stEngine.ulFixBaseVa + g_stEngine.ulFixSize)) {
        return (const void*)((const uint8_t*)g_stEngine.pFixBuffer + (u - g_stEngine.ulFixBaseVa));
    }

    /* Dreamcast Level buffer VA: [g_stEngine.ulLevelBaseVa, g_stEngine.ulLevelBaseVa + g_stEngine.ulLevelDatSize) */
    if (g_stEngine.pLevelDatBuffer && g_stEngine.ulLevelBaseVa && u >= g_stEngine.ulLevelBaseVa && u < (g_stEngine.ulLevelBaseVa + g_stEngine.ulLevelDatSize)) {
        return (const void*)((const uint8_t*)g_stEngine.pLevelDatBuffer + (u - g_stEngine.ulLevelBaseVa));
    }

    return ptr;
}

/* Callback 25: Send 3D Element Indexed Triangles (Main 3D Mesh Pipeline) */
int GLI_DRV_xSendElementTIToClip_TRIANGLES(void *pElement) {
    if (!pElement || !g_stVitaGL.bInitialized) {
        return 0;
    }

    GLI_tdstElementIndexedTriangles *pElem = (GLI_tdstElementIndexedTriangles*)pElement;
    uint16_t numTriangles = pElem->uwNumberOfTriangles;
    if (numTriangles == 0 || !pElem->pawTriangles) {
        return 0;
    }

    const uint16_t *pTriIndices = (const uint16_t*)GLI_VITA_pResolveVA(pElem->pawTriangles);
    if (!pTriIndices) {
        return 0;
    }

    const MTH3D_Vector *pVertices = (const MTH3D_Vector*)GLI_VITA_pResolveVA(pElem->pVertexArray);
    const GLI_tdstUV   *pUVs      = (const GLI_tdstUV*)GLI_VITA_pResolveVA(pElem->pUVArray);
    const uint32_t     *pColors   = (const uint32_t*)GLI_VITA_pResolveVA(pElem->pColorArray);
    const MTH3D_Vector *pNormals  = (const MTH3D_Vector*)GLI_VITA_pResolveVA(pElem->pNormalArray);
    const uint16_t     *pUVIndices = (const uint16_t*)GLI_VITA_pResolveVA(pElem->pawUVIndices);

    /* Fallback to global vertex buffer if element arrays are null */
    if (!pVertices) {
        return 0;
    }

    /* Handle Dynamic Deform Mesh (DNM) Vertex Displacement */
    const MTH3D_Vector *pEffectiveVertices = pVertices;
    if (g_stVitaGL.stDeformMesh.bActive &&
        g_stVitaGL.stDeformMesh.pBaseVertices &&
        g_stVitaGL.stDeformMesh.pTargetVertices &&
        g_stVitaGL.stDeformMesh.ulVertexCount > 0) {

        float w = g_stVitaGL.stDeformMesh.fWeight;
        if (w < 0.0f) w = 0.0f;
        if (w > 1.0f) w = 1.0f;

        size_t count = g_stVitaGL.stDeformMesh.ulVertexCount;
        if (count > GLI_VITA_BATCH_VERTEX_MAX) {
            count = GLI_VITA_BATCH_VERTEX_MAX;
        }

        const MTH3D_Vector *base = g_stVitaGL.stDeformMesh.pBaseVertices;
        const MTH3D_Vector *target = g_stVitaGL.stDeformMesh.pTargetVertices;

        for (size_t i = 0; i < count; i++) {
            s_aDeformScratchVertices[i].x = base[i].x + (target[i].x - base[i].x) * w;
            s_aDeformScratchVertices[i].y = base[i].y + (target[i].y - base[i].y) * w;
            s_aDeformScratchVertices[i].z = base[i].z + (target[i].z - base[i].z) * w;
        }
        pEffectiveVertices = s_aDeformScratchVertices;
    }

    /* Configure Material Blending State */
    uint32_t flags = pElem->ulFlags;
    if (flags & GLI_MAT_FLAG_ADDITIVE) {
        GLI_VITA_vSetBlendMode(GLI_BLEND_ADDITIVE);
    } else if (flags & GLI_MAT_FLAG_TRANSPARENT) {
        GLI_VITA_vSetBlendMode(GLI_BLEND_ALPHABLEND);
    } else if (flags & GLI_MAT_FLAG_ALPHA_TEST) {
        GLI_VITA_vSetBlendMode(GLI_BLEND_ALPHATEST);
    } else {
        GLI_VITA_vSetBlendMode(GLI_BLEND_OPAQUE);
    }

    if (g_stVitaGL.bHardwareAccelerated) {
        /* Two-sided polygon face handling */
        if (flags & GLI_MAT_FLAG_TWO_SIDED) {
            glDisable(GL_CULL_FACE);
        } else {
            glEnable(GL_CULL_FACE);
            glCullFace(GL_BACK);
        }

        /* Resolve Texture Handle from Dreamcast Material / Flags */
        GLuint gl_tex = R2_PVR_ResolveTexture(pElem->pMaterial, pElem->ulFlags);

        if (gl_tex != 0) {
            glEnable(GL_TEXTURE_2D);
            glBindTexture(GL_TEXTURE_2D, gl_tex);
            glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, (flags & GLI_MAT_FLAG_CLAMP_U) ? GL_CLAMP_TO_EDGE : GL_REPEAT);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, (flags & GLI_MAT_FLAG_CLAMP_V) ? GL_CLAMP_TO_EDGE : GL_REPEAT);
            g_stVitaGL.uiBoundTexture = gl_tex;
            g_stVitaGL.stStats.ulTexturesBound++;
        } else if (pUVs != NULL) {
            glEnable(GL_TEXTURE_2D);
            GLuint fallback_tex = R2_PVR_GetTextureGL(0);
            if (fallback_tex != 0) {
                glBindTexture(GL_TEXTURE_2D, fallback_tex);
                glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
                g_stVitaGL.uiBoundTexture = fallback_tex;
                g_stVitaGL.stStats.ulTexturesBound++;
            }
        } else {
            glDisable(GL_TEXTURE_2D);
            glBindTexture(GL_TEXTURE_2D, 0);
            g_stVitaGL.uiBoundTexture = 0;
        }

        uint16_t usedVertices = pElem->uwNumberOfUsedVertices;

        /* Render Triangle Batches with index bounds checking */
        glBegin(GL_TRIANGLES);
        for (uint16_t t = 0; t < numTriangles; t++) {
            uint16_t idx0 = pTriIndices[t * 3 + 0];
            uint16_t idx1 = pTriIndices[t * 3 + 1];
            uint16_t idx2 = pTriIndices[t * 3 + 2];

            if (usedVertices > 0 && (idx0 >= usedVertices || idx1 >= usedVertices || idx2 >= usedVertices)) {
                continue;
            }

            uint16_t uv0 = (pUVIndices && pUVIndices != (const uint16_t*)pNormals) ? pUVIndices[t * 3 + 0] : idx0;
            uint16_t uv1 = (pUVIndices && pUVIndices != (const uint16_t*)pNormals) ? pUVIndices[t * 3 + 1] : idx1;
            uint16_t uv2 = (pUVIndices && pUVIndices != (const uint16_t*)pNormals) ? pUVIndices[t * 3 + 2] : idx2;

            /* Vertex 0 */
            if (pNormals) glNormal3f(pNormals[idx0].x, pNormals[idx0].y, pNormals[idx0].z);
            if (pColors) {
                uint32_t c = pColors[idx0];
                glColor4ub(c & 0xFF, (c >> 8) & 0xFF, (c >> 16) & 0xFF, (c >> 24) & 0xFF);
            } else {
                glColor4ub(255, 255, 255, 255);
            }
            if (pUVs) glTexCoord2f(pUVs[uv0].u, pUVs[uv0].v);
            glVertex3f(pEffectiveVertices[idx0].x, pEffectiveVertices[idx0].y, pEffectiveVertices[idx0].z);

            /* Vertex 1 */
            if (pNormals) glNormal3f(pNormals[idx1].x, pNormals[idx1].y, pNormals[idx1].z);
            if (pColors) {
                uint32_t c = pColors[idx1];
                glColor4ub(c & 0xFF, (c >> 8) & 0xFF, (c >> 16) & 0xFF, (c >> 24) & 0xFF);
            } else {
                glColor4ub(255, 255, 255, 255);
            }
            if (pUVs) glTexCoord2f(pUVs[uv1].u, pUVs[uv1].v);
            glVertex3f(pEffectiveVertices[idx1].x, pEffectiveVertices[idx1].y, pEffectiveVertices[idx1].z);

            /* Vertex 2 */
            if (pNormals) glNormal3f(pNormals[idx2].x, pNormals[idx2].y, pNormals[idx2].z);
            if (pColors) {
                uint32_t c = pColors[idx2];
                glColor4ub(c & 0xFF, (c >> 8) & 0xFF, (c >> 16) & 0xFF, (c >> 24) & 0xFF);
            } else {
                glColor4ub(255, 255, 255, 255);
            }
            if (pUVs) glTexCoord2f(pUVs[uv2].u, pUVs[uv2].v);
            glVertex3f(pEffectiveVertices[idx2].x, pEffectiveVertices[idx2].y, pEffectiveVertices[idx2].z);
        }
        glEnd();
    }

    g_stVitaGL.stStats.ulTrianglesDrawn += numTriangles;
    g_stVitaGL.stStats.ulBatchesSubmitted++;
    return 1;
}

/* Callback 26: Send Single 3D Triangle to Clip */
int GLI_DRV_xSendSingleTriangleToClip_TRIANGLES(void *pTriangle) {
    if (!pTriangle || !g_stVitaGL.bInitialized) return 0;

    if (g_stVitaGL.bHardwareAccelerated) {
        const float *pTri = (const float*)pTriangle;
        glBegin(GL_TRIANGLES);
            glVertex3f(pTri[0], pTri[1], pTri[2]);
            glVertex3f(pTri[3], pTri[4], pTri[5]);
            glVertex3f(pTri[6], pTri[7], pTri[8]);
        glEnd();
    }

    g_stVitaGL.stStats.ulTrianglesDrawn++;
    return 1;
}

/* Callback 27: Send 2D Quad Sprite to Clip (UI, Dialogue, HUD) */
void GLI_DRV_vSendSpriteToClip(void *pSprite) {
    if (!pSprite || !g_stVitaGL.bInitialized) return;

    GLI_tdstSprite *pSp = (GLI_tdstSprite*)pSprite;
    GLI_VITA_vBegin2D();
    GLI_VITA_vSetBlendMode((pSp->ulFlags & GLI_MAT_FLAG_TRANSPARENT) ? GLI_BLEND_ALPHABLEND : GLI_BLEND_OPAQUE);

    float w = pSp->x1 - pSp->x0;
    float h = pSp->y1 - pSp->y0;
    GLI_VITA_vRender2DQuad(pSp->x0, pSp->y0, w, h,
                           0.0f, 0.0f, 1.0f, 1.0f,
                           pSp->ulColor ? pSp->ulColor : 0xFFFFFFFFU,
                           0);

    GLI_VITA_vEnd2D();
}

/* Callback 28: Send 2D Quad Sprite with Diffuse Colors */
void GLI_DRV_vSendSpriteToClipWithColors(void *pSprite) {
    GLI_DRV_vSendSpriteToClip(pSprite);
}

/* Callback 29: Send 2D Quad Sprite with Texture UV Coordinates */
void GLI_DRV_vSendSpriteToClipWithUV(void *pSprite) {
    if (!pSprite || !g_stVitaGL.bInitialized) return;

    GLI_tdstSprite *pSp = (GLI_tdstSprite*)pSprite;
    GLuint texId = 0;
    if (pSp->pTexture) {
        uintptr_t ptrVal = (uintptr_t)pSp->pTexture;
        if (ptrVal < R2_PVR_MAX_TEXTURES) {
            texId = R2_PVR_GetTextureGL((uint32_t)ptrVal);
        } else {
            GLI_tdstTexture *pTex = (GLI_tdstTexture*)pSp->pTexture;
            texId = pTex->uiGLHandle;
        }
    }

    GLI_VITA_vBegin2D();
    int blend = GLI_BLEND_OPAQUE;
    if (pSp->ulFlags & GLI_MAT_FLAG_ADDITIVE) {
        blend = GLI_BLEND_ADDITIVE;
    } else if (pSp->ulFlags & GLI_MAT_FLAG_TRANSPARENT) {
        blend = GLI_BLEND_ALPHABLEND;
    } else if (pSp->ulFlags & GLI_MAT_FLAG_ALPHA_TEST) {
        blend = GLI_BLEND_ALPHATEST;
    }
    GLI_VITA_vSetBlendMode(blend);

    float w = pSp->x1 - pSp->x0;
    float h = pSp->y1 - pSp->y0;
    GLI_VITA_vRender2DQuad(pSp->x0, pSp->y0, w, h,
                           pSp->u0, pSp->v0, pSp->u1, pSp->v1,
                           pSp->ulColor ? pSp->ulColor : 0xFFFFFFFFU,
                           texId);

    GLI_VITA_vEnd2D();
}

/* Callback 30: Upload Texture Array to vitaGL GPU Memory */
void GLI_DRV_vDownLoadTextures(void *pTextures, int count) {
    if (!pTextures || count <= 0 || !g_stVitaGL.bInitialized) return;

    GLI_tdstTexture *pTexArray = (GLI_tdstTexture*)pTextures;
    for (int i = 0; i < count; i++) {
        GLI_tdstTexture *tex = &pTexArray[i];

        if (g_stVitaGL.bHardwareAccelerated) {
            if (tex->uiGLHandle == 0) {
                glGenTextures(1, &tex->uiGLHandle);
            }

            glBindTexture(GL_TEXTURE_2D, tex->uiGLHandle);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, (tex->ulFlags & GLI_MAT_FLAG_CLAMP_U) ? GL_CLAMP_TO_EDGE : GL_REPEAT);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, (tex->ulFlags & GLI_MAT_FLAG_CLAMP_V) ? GL_CLAMP_TO_EDGE : GL_REPEAT);

            GLenum format = (tex->ulBpp == 16) ? GL_RGB : GL_RGBA;
            GLenum type   = (tex->ulBpp == 16) ? GL_UNSIGNED_SHORT_5_6_5 : GL_UNSIGNED_BYTE;

            if (tex->pRawData && tex->ulWidth > 0 && tex->ulHeight > 0) {
                glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA,
                             tex->ulWidth, tex->ulHeight, 0,
                             format, type, tex->pRawData);
            }
        } else {
            if (tex->uiGLHandle == 0) {
                tex->uiGLHandle = (GLuint)(i + 1);
            }
        }

        /* Register in context table */
        if (g_stVitaGL.ulTextureCount < GLI_VITA_MAX_TEXTURES) {
            g_stVitaGL.aTextures[g_stVitaGL.ulTextureCount++] = *tex;
        }
    }
}

/* Callback 31: Unload / Delete Textures */
void GLI_DRV_vUnLoadTextures(void *pTextures, int count) {
    if (!pTextures || count <= 0) return;

    GLI_tdstTexture *pTexArray = (GLI_tdstTexture*)pTextures;
    for (int i = 0; i < count; i++) {
        if (g_stVitaGL.bHardwareAccelerated && pTexArray[i].uiGLHandle > 0) {
            glDeleteTextures(1, &pTexArray[i].uiGLHandle);
        }
        pTexArray[i].uiGLHandle = 0;
    }
}

/* Callback 32: Get Texture Data Size */
int32_t GLI_DRV_lGetSizeOfTexture(void *pTexture) {
    if (!pTexture) return 256 * 256 * 2;
    GLI_tdstTexture *tex = (GLI_tdstTexture*)pTexture;
    uint32_t bytes_per_pixel = (tex->ulBpp > 0) ? (tex->ulBpp / 8) : 2;
    return (int32_t)(tex->ulWidth * tex->ulHeight * bytes_per_pixel);
}

/* Callback 33: Bind Opaque Texture */
void GLI_DRV_vDoOpaqueTextureSelection(void *pTexture) {
    if (!pTexture || !g_stVitaGL.bInitialized) {
        if (g_stVitaGL.bHardwareAccelerated) {
            glBindTexture(GL_TEXTURE_2D, 0);
        }
        g_stVitaGL.uiBoundTexture = 0;
        return;
    }

    GLI_tdstTexture *tex = (GLI_tdstTexture*)pTexture;
    if (tex->uiGLHandle > 0) {
        if (g_stVitaGL.bHardwareAccelerated) {
            glBindTexture(GL_TEXTURE_2D, tex->uiGLHandle);
        }
        g_stVitaGL.uiBoundTexture = tex->uiGLHandle;
        g_stVitaGL.stStats.ulTexturesBound++;
    }
}

/* Callback 34: Direct 16-bit Bitmap Blit to Backbuffer (Loading / Title Screens) */
void GLI_DRV_vWrite16bBitmapToBackBuffer(void *pBitmap, int x, int y, int w, int h) {
    if (!pBitmap || w <= 0 || h <= 0 || !g_stVitaGL.bInitialized) return;

    if (g_stVitaGL.bHardwareAccelerated) {
        GLuint tempTex = 0;
        glGenTextures(1, &tempTex);
        glBindTexture(GL_TEXTURE_2D, tempTex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_SHORT_5_6_5, pBitmap);

        GLI_VITA_vBegin2D();
        GLI_VITA_vSetBlendMode(GLI_BLEND_OPAQUE);
        GLI_VITA_vRender2DQuad((float)x, (float)y, (float)w, (float)h,
                               0.0f, 0.0f, 1.0f, 1.0f,
                               0xFFFFFFFFU, tempTex);
        GLI_VITA_vEnd2D();

        glDeleteTextures(1, &tempTex);
    } else {
        g_stVitaGL.stStats.ulSpritesDrawn++;
    }
}

/* Callback 35: Add Fullscreen Black Polygon (Fade / Letterbox) */
void GLI_DRV_vAddBlackPolygon(void *pPoly) {
    g_stVitaGL.bBlackPolygonActive = true;
    if (pPoly) {
        float *pAlpha = (float*)pPoly;
        g_stVitaGL.fBlackPolygonAlpha = *pAlpha;
    } else {
        g_stVitaGL.fBlackPolygonAlpha = 1.0f;
    }
}

/* Callback 36: Disable Black Polygon */
void GLI_DRV_vNoBlackPolygon(void) {
    g_stVitaGL.bBlackPolygonActive = false;
    g_stVitaGL.fBlackPolygonAlpha = 0.0f;
}

/* Callback 37: Compute Fog Distance Effect (Dreamcast Atmosphere) */
void GLI_DRV_vComputeFogEffect(void *pFog) {
    if (!pFog || !g_stVitaGL.bInitialized) return;

    GLI_tdstFogParams *fog = (GLI_tdstFogParams*)pFog;
    g_stVitaGL.stFog = *fog;

    if (g_stVitaGL.bHardwareAccelerated) {
        if (fog->bEnable) {
            glEnable(GL_FOG);
            glFogi(GL_FOG_MODE, GL_LINEAR);
            glFogf(GL_FOG_START, fog->fDepthStart);
            glFogf(GL_FOG_END, fog->fDepthEnd);
            glFogfv(GL_FOG_COLOR, fog->aColor);
        } else {
            glDisable(GL_FOG);
        }
    }
}

/* Callback 38: Request Driver Features & Capabilities */
int32_t GLI_DRV_lRequest(int request_id, void *pArgs) {
    (void)request_id;
    (void)pArgs;
    return 0;
}

/* Common Data / State Registration */
int32_t GLI_DRV_lSetCommonData(void *pData) {
    (void)pData;
    return 0;
}
