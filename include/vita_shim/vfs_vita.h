/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: vfs_vita.h
 *
 * PlayStation Vita Virtual File System (VFS)
 * - Rooted at ux0:data/rayman2/
 * - Case-insensitive hierarchical filesystem resolution
 * - Directory separator normalization ('\\' to '/')
 * - Dreamcast vs. PC Snapshot & Container Alias Mapping
 *   (e.g., Fix.sna / FIX.DAT -> ux0:data/rayman2/DCDATA/FIX.DAT)
 * - CPA File I/O mapping to PS Vita sceIo APIs (sceIoOpen, sceIoRead, etc.)
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#ifndef VFS_VITA_H
#define VFS_VITA_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 1. VFS Constants & Path Configuration
 * ---------------------------------------------------------------------------- */
#define VFS_MAX_PATH            512
#define VFS_DEFAULT_ROOT        "ux0:data/rayman2/"
#define VFS_DCDATA_DIR          "DCDATA"

/* Standard Seek Origins */
#ifndef SEEK_SET
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#endif

/* ----------------------------------------------------------------------------
 * 2. CPA File Stream Structure
 * ---------------------------------------------------------------------------- */
typedef struct CPA_FILE CPA_FILE;

/* ----------------------------------------------------------------------------
 * 3. Standard CPA File I/O Operations (sceIo Mappings)
 * ---------------------------------------------------------------------------- */
CPA_FILE *CPA_fopen(const char *filename, const char *mode);
size_t    CPA_fread(void *ptr, size_t size, size_t count, CPA_FILE *stream);
size_t    CPA_fwrite(const void *ptr, size_t size, size_t count, CPA_FILE *stream);
int       CPA_fseek(CPA_FILE *stream, long offset, int whence);
long      CPA_ftell(CPA_FILE *stream);
int       CPA_fclose(CPA_FILE *stream);
int64_t   CPA_fsize(CPA_FILE *stream);
int       CPA_feof(CPA_FILE *stream);
int       CPA_ferror(CPA_FILE *stream);
int       CPA_fflush(CPA_FILE *stream);

/* ----------------------------------------------------------------------------
 * 4. VFS Lifecycle & Path Management
 * ---------------------------------------------------------------------------- */
/* Initialize VFS with optional root override (defaults to "ux0:data/rayman2/") */
void        VFS_Vita_Init(const char *root_override);
void        VFS_Vita_SetRoot(const char *root_path);
const char *VFS_Vita_GetRoot(void);

/* Normalizes path separators ('\\' to '/'), collapses '//', trims whitespace */
void VFS_NormalizePath(const char *src, char *dst, size_t dst_size);

/* Resolves a virtual/relative path to a physical storage path.
 * Handles case-insensitivity, DCDATA subdirectories, and snapshot aliases.
 * Returns true if resolved to an existing file, false otherwise. */
bool VFS_ResolvePath(const char *virtual_path, char *resolved_path, size_t max_len);

/* ----------------------------------------------------------------------------
 * 5. High-Level File & Directory Utilities
 * ---------------------------------------------------------------------------- */
bool     CPA_FileExists(const char *filename);
int64_t  CPA_GetFileSize(const char *filename);
void    *CPA_LoadFile(const char *filename, size_t *out_size);
void    *CPA_LoadFileAligned32(const char *filename, size_t *out_size);

bool CPA_DirectoryExists(const char *dirname);
bool CPA_CreateDirectory(const char *dirname);
bool CPA_CreateDirectoryRecursive(const char *path);

#ifdef __cplusplus
}
#endif

#endif /* VFS_VITA_H */
