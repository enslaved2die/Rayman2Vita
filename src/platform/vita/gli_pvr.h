/**
 * @file gli_pvr.h
 * @brief Dreamcast PowerVR (PVR) Texture Container, Codebook & Twiddle Decoder
 *
 * Implements decoding for Dreamcast PVR textures, Vector Quantized (VQ) textures,
 * Twiddled (Morton Z-curve) pixel buffers, paletted CLUT formats, .TEX level
 * texture bank archives with LZSS decompression, and .CNT file packages.
 * Produces native 32-bit RGBA8888 buffers ready for vitaGL (glTexImage2D).
 */

#ifndef GLI_PVR_H
#define GLI_PVR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#if defined(CPA_PLATFORM_VITA) || defined(__vita__)
#include <vitaGL.h>
#else
#ifndef GLUINT_DEFINED
typedef unsigned int GLuint;
#define GLUINT_DEFINED
#endif
#endif

#define R2_PVR_MAX_TEXTURES 1024

#ifdef __cplusplus
extern "C" {
#endif

/* PVR Header Magic Markers */
#define PVR_MAGIC_GBIX 0x58494247UL /* "GBIX" in little-endian */
#define PVR_MAGIC_PVRT 0x54525650UL /* "PVRT" in little-endian */
#define PVR_MAGIC_LZSS 0x53535A4CUL /* "LZSS" in little-endian */

/* PVR Pixel Formats */
typedef enum PVR_PixelFormat {
    PVR_PIXEL_ARGB1555 = 0x00, /* 1-bit alpha, 5-bit RGB */
    PVR_PIXEL_RGB565   = 0x01, /* 5-bit R, 6-bit G, 5-bit B */
    PVR_PIXEL_ARGB4444 = 0x02, /* 4-bit A, 4-bit R, 4-bit G, 4-bit B */
    PVR_PIXEL_YUV422   = 0x03, /* YUV 4:2:2 */
    PVR_PIXEL_BUMP     = 0x04, /* PowerVR Bump Map */
    PVR_PIXEL_PAL4BPP  = 0x05, /* 4-bit CLUT (16-color palette) */
    PVR_PIXEL_PAL8BPP  = 0x06  /* 8-bit CLUT (256-color palette) */
} PVR_PixelFormat;

/* PVR Data / Layout Formats */
typedef enum PVR_DataFormat {
    PVR_DATA_TWIDDLED           = 0x01, /* Square twiddled */
    PVR_DATA_TWIDDLED_MIPMAP    = 0x02, /* Square twiddled with mipmaps */
    PVR_DATA_VQ                 = 0x03, /* Vector Quantized (2x2 codebook) */
    PVR_DATA_VQ_MIPMAP          = 0x04, /* VQ compressed with mipmaps */
    PVR_DATA_PAL8_TWIDDLED      = 0x05, /* 8-bit paletted twiddled */
    PVR_DATA_PAL8_TWIDDLED_MM   = 0x06, /* 8-bit paletted twiddled mipmapped */
    PVR_DATA_PAL4_TWIDDLED      = 0x07, /* 4-bit paletted twiddled */
    PVR_DATA_PAL4_TWIDDLED_MM   = 0x08, /* 4-bit paletted twiddled mipmapped */
    PVR_DATA_RECTANGLE          = 0x09, /* Non-twiddled linear rectangle */
    PVR_DATA_RECTANGLE_TWIDDLED = 0x0D, /* Twiddled non-square rectangle */
    PVR_DATA_SMALL_VQ           = 0x10, /* Small VQ */
    PVR_DATA_SMALL_VQ_MIPMAP    = 0x11, /* Small VQ with mipmaps */
    PVR_DATA_SQUARE_RAW         = 0x12  /* Non-twiddled linear square */
} PVR_DataFormat;

/* Parsed PVR Texture Header */
typedef struct PVR_Header {
    uint32_t        uGlobalIndex;
    bool            bHasGBIX;
    PVR_PixelFormat ePixelFormat;
    PVR_DataFormat  eDataFormat;
    uint16_t        uWidth;
    uint16_t        uHeight;
    uint32_t        uDataSize;
    const uint8_t  *pData;
} PVR_Header;

/* Decompressed Texture Bank (.TEX) */
typedef struct PVR_TextureBank {
    uint32_t  uTextureCount;
    uint8_t **ppTextureBuffers;
    size_t   *pTextureSizes;
} PVR_TextureBank;

/* CNT Archive File Entry */
typedef struct CNT_FileEntry {
    int32_t  iDirectoryIndex;
    char     szFileName[128];
    char     szFullPath[256];
    uint32_t uFileXorKey;
    uint32_t uChecksum;
    uint32_t uFileOffset;
    uint32_t uFileSize;
} CNT_FileEntry;

/* CNT Archive Directory Entry */
typedef struct CNT_DirectoryEntry {
    char szDirName[128];
} CNT_DirectoryEntry;

/* CNT Archive Descriptor */
typedef struct CNT_Archive {
    uint32_t            uDirectoryCount;
    uint32_t            uFileCount;
    uint8_t             bIsXor;
    uint8_t             bIsChecksum;
    uint8_t             uXorKey;
    uint8_t             uDirectoryChecksum;
    CNT_DirectoryEntry *pDirectories;
    CNT_FileEntry      *pFiles;
    const uint8_t      *pRawData;
    size_t              uArchiveSize;
} CNT_Archive;

/* ----------------------------------------------------------------------------
 * PVR Decoder API
 * ---------------------------------------------------------------------------- */

/**
 * @brief Parses a PVR image file header (inspecting optional GBIX and PVRT chunks).
 * @param pData Pointer to raw PVR file data.
 * @param ulSize Size of PVR data in bytes.
 * @param pOutHdr Destination header struct.
 * @return true if header is valid PVR with recognized format, false otherwise.
 */
bool PVR_fn_bParseHeader(const void *pData, size_t ulSize, PVR_Header *pOutHdr);

/**
 * @brief Calculates Morton/Z-order curve twiddled index for coordinate (x, y) on square texture.
 */
uint32_t PVR_fn_uTwiddleIndex(uint32_t x, uint32_t y);

/**
 * @brief Calculates rectangular twiddled index for non-square dimensions (w x h).
 */
uint32_t PVR_fn_uTwiddleRectIndex(uint32_t x, uint32_t y, uint32_t w, uint32_t h);

/**
 * @brief Pixel color conversion helpers: transforms 16-bit PVR formats to 32-bit RGBA8888.
 */
uint32_t PVR_fn_uConvertARGB1555toRGBA8888(uint16_t uPixel);
uint32_t PVR_fn_uConvertRGB565toRGBA8888(uint16_t uPixel);
uint32_t PVR_fn_uConvertARGB4444toRGBA8888(uint16_t uPixel);
uint32_t PVR_fn_uConvertPaletted4toRGBA8888(uint8_t uIndex, const uint32_t *pPalette);
uint32_t PVR_fn_uConvertPaletted8toRGBA8888(uint8_t uIndex, const uint32_t *pPalette);

/**
 * @brief Configures Dreamcast hardware palette table (up to 256 32-bit RGBA entries).
 */
void PVR_fn_vSetPalette(const void *pPaletteData, uint32_t uEntries, uint32_t ePalFormat);

/**
 * @brief Returns active 256-entry RGBA8888 palette table.
 */
const uint32_t *PVR_fn_pGetActivePalette(void);

/**
 * @brief Decodes Square or Rectangular Twiddled texture into 32-bit RGBA buffer.
 */
bool PVR_fn_bDecodeTwiddled(const PVR_Header *pHdr, uint32_t *pOutRGBA);

/**
 * @brief Decodes Vector Quantized (VQ) texture (with or without mipmaps) into 32-bit RGBA.
 */
bool PVR_fn_bDecodeVQ(const PVR_Header *pHdr, uint32_t *pOutRGBA);

/**
 * @brief Decodes Paletted 4-bit or 8-bit texture into 32-bit RGBA.
 */
bool PVR_fn_bDecodePaletted(const PVR_Header *pHdr, const uint32_t *pPalette, uint32_t *pOutRGBA);

/**
 * @brief Master texture loader: parses and decodes any supported PVR texture directly to 32-bit RGBA.
 * @param pData Pointer to raw PVR texture data.
 * @param ulSize Size of PVR data in bytes.
 * @param pOutWidth Pointer receiving width in pixels.
 * @param pOutHeight Pointer receiving height in pixels.
 * @param ppOutRGBA Pointer receiving newly allocated 32-bit RGBA pixel buffer.
 * @return Pointer to allocated RGBA buffer on success, or NULL on error.
 */
uint32_t *PVR_fn_p_stLoadTexture(const void *pData, size_t ulSize, uint32_t *pOutWidth, uint32_t *pOutHeight, uint32_t **ppOutRGBA);

/**
 * @brief Frees a texture buffer allocated by PVR_fn_p_stLoadTexture.
 */
void PVR_fn_vFreeTexture(uint32_t *pRGBA);

/* ----------------------------------------------------------------------------
 * Container Streaming (.TEX Bank & .CNT Archive)
 * ---------------------------------------------------------------------------- */

/**
 * @brief Decompresses a single Dreamcast LZSS compressed chunk.
 * @param pSrc Compressed chunk stream.
 * @param ulSrcSize Compressed stream size in bytes.
 * @param pDst Destination buffer for uncompressed bytes.
 * @param ulDstCapacity Capacity of destination buffer.
 * @return Number of uncompressed bytes produced.
 */
size_t PVR_fn_uDecompressLZSS(const uint8_t *pSrc, size_t ulSrcSize, uint8_t *pDst, size_t ulDstCapacity);

/**
 * @brief Loads and parses a level texture bank (.TEX), decompressing LZSS chunks into discrete PVR files.
 * @param pTexData Pointer to raw .TEX file data (e.g. FIX.TEX).
 * @param ulTexSize Size of .TEX file in bytes.
 * @param pOutBank Output bank structure receiving textures.
 * @return true on success, false on failure.
 */
bool PVR_fn_bLoadTexBank(const void *pTexData, size_t ulTexSize, PVR_TextureBank *pOutBank);

/**
 * @brief Frees resources held by a texture bank.
 */
void PVR_fn_vFreeTexBank(PVR_TextureBank *pBank);

/**
 * @brief Opens and parses an OpenSpace .CNT package archive (e.g. Vignette.cnt, Textures.cnt).
 * @param pData Pointer to raw .CNT file bytes.
 * @param ulSize Total size of .CNT file in bytes.
 * @param pOutArchive Output archive structure.
 * @return true on success, false on failure.
 */
bool CNT_fn_bOpen(const void *pData, size_t ulSize, CNT_Archive *pOutArchive);

/**
 * @brief Locates a file within a .CNT archive by filename or relative path.
 * @param pArchive Opened CNT archive.
 * @param szPath Filename (e.g. "Rayman.gf") or path ("textures_objets/bois/Planque.gf").
 * @return Pointer to file entry if found, NULL if not found.
 */
const CNT_FileEntry *CNT_fn_pFindFile(const CNT_Archive *pArchive, const char *szPath);

/**
 * @brief Retrieves pointer to raw file payload within a .CNT archive.
 * @param pArchive Opened CNT archive.
 * @param pEntry File entry found by CNT_fn_pFindFile.
 * @param pOutSize Pointer receiving file size in bytes.
 * @return Pointer to payload bytes inside archive buffer, or NULL on error.
 */
const uint8_t *CNT_fn_pGetFileData(const CNT_Archive *pArchive, const CNT_FileEntry *pEntry, size_t *pOutSize);

/**
 * @brief Closes a .CNT archive and frees directory/file metadata tables.
 */
void CNT_fn_vClose(CNT_Archive *pArchive);

/* ----------------------------------------------------------------------------
 * OpenGL / VitaGL Level Texture Bank Streaming & Binding
 * ---------------------------------------------------------------------------- */

/**
 * @brief Decodes a raw PVR texture buffer into 32-bit RGBA pixels.
 * @param pData Pointer to raw PVR data.
 * @param ulSize Size of PVR data in bytes.
 * @param pOutWidth Pointer receiving texture width in pixels.
 * @param pOutHeight Pointer receiving texture height in pixels.
 * @param ppOutRGBA Pointer receiving newly allocated 32-bit RGBA pixel buffer.
 * @return true on success, false on failure.
 */
bool PVR_fn_pDecodeTexture(const void *pData, size_t ulSize, uint32_t *pOutWidth, uint32_t *pOutHeight, uint32_t **ppOutRGBA);

/**
 * @brief Loads a Dreamcast .TEX texture bank, decodes all PVR textures, and uploads them to OpenGL / vitaGL.
 * @param szTexFileName Filename or path (e.g. "FIX.TEX", "LEARN_10/LEARN_10.TEX").
 * @return true on success, false on error.
 */
bool PVR_fn_bLoadLevelTextures(const char *szTexFileName);

/**
 * @brief Retrieves the OpenGL texture ID for a loaded texture index.
 * @param ulTextureIndex Texture index in loaded level/fix banks.
 * @return GLuint texture ID, or 0 if not loaded/invalid.
 */
GLuint R2_PVR_GetTextureGL(uint32_t ulTextureIndex);

/** Texture lookup by Dreamcast texture-struct VA (from TEXTURE_<LEVEL>.LOG order == .TEX order; ordering assumption unverified). */
GLuint R2_PVR_GetTextureGLByVA(uint32_t ulVA);
/** Alpha class of the decoded texels for a texture VA: 0 opaque, 1 cutout (alpha only 0/255), 2 translucent (intermediate alpha). */
int R2_PVR_GetTextureAlphaModeByVA(uint32_t ulVA);

/**
 * @brief Translates an OpenSpace / Dreamcast material pointer or index to vitaGL texture ID.
 * @param pMaterial Material pointer, texture VA, or direct index.
 * @param ulFlags Material / polygon flags (lower 16 bits encode level texture index).
 * @return GLuint OpenGL texture handle, or fallback texture.
 */
GLuint R2_PVR_ResolveTexture(void *pMaterial, uint32_t ulFlags);

/**
 * @brief Registers a Dreamcast VA mapping to an uploaded texture index.
 */
void R2_PVR_RegisterTextureVA(uint32_t ulTextureIndex, uint32_t ulDreamcastVA);

/**
 * @brief Resets or unloads level textures uploaded to OpenGL (retains FIX textures).
 */
void PVR_fn_vResetLevelTextures(void);

/**
 * @brief Resets and deletes all uploaded OpenGL textures.
 */
void PVR_fn_vResetAllTextures(void);

/**
 * @brief Returns total number of textures currently uploaded to OpenGL.
 */
uint32_t PVR_fn_uGetNumLoadedTextures(void);

#ifdef __cplusplus
}
#endif

#endif /* GLI_PVR_H */
