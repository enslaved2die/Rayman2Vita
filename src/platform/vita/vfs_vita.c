/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: vfs_vita.c
 *
 * PlayStation Vita Virtual File System (VFS) Implementation
 * - Root: ux0:data/rayman2/
 * - Path separator normalization ('\\' -> '/')
 * - Case-insensitive hierarchical filesystem resolution
 * - Dreamcast vs. PC Snapshot & Container Alias Mapping
 * - CPA File I/O mapping to PS Vita sceIo APIs (sceIoOpen, sceIoRead, etc.)
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#include "vita_shim/vfs_vita.h"
#include "vita_shim/os_vita.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#if defined(__vita__)
#include <psp2/types.h>
#include <psp2/io/fcntl.h>
#include <psp2/io/dirent.h>
#include <psp2/io/stat.h>
#include <psp2common/kernel/iofilemgr.h>
#else
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <strings.h>
#endif

/* ----------------------------------------------------------------------------
 * 1. Internal Types & State
 * ---------------------------------------------------------------------------- */
struct CPA_FILE {
#if defined(__vita__)
    SceUID fd;
#else
    FILE *fp;
#endif
    int eof;
    int error;
    int flags;
    char path[VFS_MAX_PATH];
};

static char s_vfs_root[VFS_MAX_PATH] = VFS_DEFAULT_ROOT;
static bool s_vfs_initialized = false;

/* ----------------------------------------------------------------------------
 * 2. Helper Functions
 * ---------------------------------------------------------------------------- */

/* Safe string copy guaranteeing NUL-termination */
static void vfs_strlcpy(char *dst, const char *src, size_t dst_size) {
    if (!dst || dst_size == 0) return;
    if (!src) {
        dst[0] = '\0';
        return;
    }
    size_t i = 0;
    while (src[i] && (i + 1) < dst_size) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

/* Case-insensitive string comparison */
static int vfs_strcasecmp(const char *s1, const char *s2) {
#if defined(_WIN32)
    return _stricmp(s1, s2);
#else
    return strcasecmp(s1, s2);
#endif
}

static int vfs_strncasecmp(const char *s1, const char *s2, size_t n) {
#if defined(_WIN32)
    return _strnicmp(s1, s2, n);
#else
    return strncasecmp(s1, s2, n);
#endif
}

/* Check if physical path exists on storage and optionally query size and dir status */
static bool fs_exists(const char *path, int64_t *out_size, bool *out_is_dir) {
#if defined(__vita__)
    SceIoStat stat_buf;
    if (sceIoGetstat(path, &stat_buf) < 0) {
        return false;
    }
    if (out_size) {
        *out_size = (int64_t)stat_buf.st_size;
    }
    if (out_is_dir) {
        *out_is_dir = SCE_S_ISDIR(stat_buf.st_mode);
    }
    return true;
#else
    struct stat st;
    if (stat(path, &st) != 0) {
        return false;
    }
    if (out_size) {
        *out_size = (int64_t)st.st_size;
    }
    if (out_is_dir) {
        *out_is_dir = S_ISDIR(st.st_mode);
    }
    return true;
#endif
}

/* Check if path starts with device/mount prefix (e.g. "ux0:", "app0:", "savedata0:") */
static bool is_device_path(const char *path) {
    if (!path) return false;
    const char *colon = strchr(path, ':');
    if (colon && (colon - path) >= 2 && (colon - path) <= 16) {
        return true;
    }
    return false;
}

/* ----------------------------------------------------------------------------
 * 3. Path Normalization
 * ---------------------------------------------------------------------------- */
void VFS_NormalizePath(const char *src, char *dst, size_t dst_size) {
    if (!src || !dst || dst_size == 0) return;

    /* Skip leading whitespace */
    while (*src && isspace((unsigned char)*src)) {
        src++;
    }

    /* Skip Windows drive prefix (e.g. "C:\" or "c:/") if not a Vita device prefix */
    if (isalpha((unsigned char)src[0]) && src[1] == ':' && (src[2] == '\\' || src[2] == '/')) {
        src += 2;
        while (*src == '\\' || *src == '/') {
            src++;
        }
    }

    /* Skip leading "./" */
    while (src[0] == '.' && (src[1] == '/' || src[1] == '\\')) {
        src += 2;
    }

    size_t out_idx = 0;
    bool prev_was_slash = false;

    while (*src && out_idx + 1 < dst_size) {
        char c = *src++;
        if (c == '\\') {
            c = '/';
        }

        if (c == '/') {
            /* Avoid double slashes, but allow "device:/" */
            if (prev_was_slash) {
                continue;
            }
            prev_was_slash = true;
        } else {
            prev_was_slash = false;
        }

        dst[out_idx++] = c;
    }

    /* Remove trailing whitespace */
    while (out_idx > 0 && isspace((unsigned char)dst[out_idx - 1])) {
        out_idx--;
    }

    /* Remove trailing slash unless it's root ("/" or "ux0:/") */
    if (out_idx > 1 && dst[out_idx - 1] == '/' && dst[out_idx - 2] != ':') {
        out_idx--;
    }

    dst[out_idx] = '\0';
}

/* ----------------------------------------------------------------------------
 * 4. Hierarchical Case-Insensitive Path Resolution
 * ---------------------------------------------------------------------------- */
static bool resolve_case_insensitive(const char *normalized_path, char *resolved_out, size_t max_len) {
    if (!normalized_path || !resolved_out || max_len == 0) {
        return false;
    }

    /* Fast path: Check if path exists exactly as given */
    if (fs_exists(normalized_path, NULL, NULL)) {
        vfs_strlcpy(resolved_out, normalized_path, max_len);
        return true;
    }

    char current_base[VFS_MAX_PATH * 2] = "";
    const char *remainder = normalized_path;

    /* Handle device mount prefix (e.g. "ux0:") or leading slash */
    const char *colon = strchr(normalized_path, ':');
    if (colon && (colon - normalized_path) <= 16) {
        size_t prefix_len = (size_t)(colon - normalized_path) + 1;
        if (prefix_len >= sizeof(current_base)) return false;
        memcpy(current_base, normalized_path, prefix_len);
        current_base[prefix_len] = '\0';
        remainder = normalized_path + prefix_len;
        if (*remainder == '/') {
            strncat(current_base, "/", sizeof(current_base) - strlen(current_base) - 1);
            remainder++;
        }
    } else if (normalized_path[0] == '/') {
        strcpy(current_base, "/");
        remainder = normalized_path + 1;
    }

    /* Component-by-component case-insensitive directory enumeration */
    char comp[256];
    while (*remainder) {
        /* Extract next component */
        const char *next_slash = strchr(remainder, '/');
        size_t comp_len = next_slash ? (size_t)(next_slash - remainder) : strlen(remainder);
        if (comp_len >= sizeof(comp)) return false;
        memcpy(comp, remainder, comp_len);
        comp[comp_len] = '\0';
        remainder = next_slash ? next_slash + 1 : remainder + comp_len;

        if (comp_len == 0 || strcmp(comp, ".") == 0) {
            continue;
        }

        if (strcmp(comp, "..") == 0) {
            char *last_slash = strrchr(current_base, '/');
            if (last_slash && last_slash != current_base) {
                *last_slash = '\0';
            }
            continue;
        }

        /* Enumerate current_base to locate matching entry case-insensitively */
        bool found = false;
        char matched_entry[256] = "";

#if defined(__vita__)
        SceUID dfd = sceIoDopen(current_base[0] ? current_base : ".");
        if (dfd >= 0) {
            SceIoDirent dent;
            memset(&dent, 0, sizeof(dent));
            while (sceIoDread(dfd, &dent) > 0) {
                if (vfs_strcasecmp(dent.d_name, comp) == 0) {
                    vfs_strlcpy(matched_entry, dent.d_name, sizeof(matched_entry));
                    found = true;
                    break;
                }
            }
            sceIoDclose(dfd);
        }
#else
        DIR *dir = opendir(current_base[0] ? current_base : ".");
        if (dir) {
            struct dirent *ent;
            while ((ent = readdir(dir)) != NULL) {
                if (vfs_strcasecmp(ent->d_name, comp) == 0) {
                    vfs_strlcpy(matched_entry, ent->d_name, sizeof(matched_entry));
                    found = true;
                    break;
                }
            }
            closedir(dir);
        }
#endif

        if (!found) {
            return false;
        }

        /* Append matched component to current_base */
        size_t cur_len = strlen(current_base);
        if (cur_len > 0 && current_base[cur_len - 1] != '/' && current_base[cur_len - 1] != ':') {
            strncat(current_base, "/", sizeof(current_base) - cur_len - 1);
        }
        strncat(current_base, matched_entry, sizeof(current_base) - strlen(current_base) - 1);
    }

    if (fs_exists(current_base, NULL, NULL)) {
        vfs_strlcpy(resolved_out, current_base, max_len);
        return true;
    }

    return false;
}

/* ----------------------------------------------------------------------------
 * 5. Rayman 2 Dreamcast & PC Alias Resolution
 * ---------------------------------------------------------------------------- */

/* Extract basename without extension (e.g. "LEARN_10.SNA" -> "LEARN_10") */
static void get_basename_no_ext(const char *path, char *out, size_t out_size) {
    const char *slash = strrchr(path, '/');
    const char *start = slash ? slash + 1 : path;
    const char *dot = strrchr(start, '.');
    size_t len = dot ? (size_t)(dot - start) : strlen(start);
    if (len >= out_size) len = out_size - 1;
    memcpy(out, start, len);
    out[len] = '\0';
}

/* Extract extension (including dot, e.g. ".sna") */
static const char *get_ext(const char *path) {
    const char *dot = strrchr(path, '.');
    return dot ? dot : "";
}

bool VFS_ResolvePath(const char *virtual_path, char *resolved_path, size_t max_len) {
    if (!virtual_path || !resolved_path || max_len == 0) {
        return false;
    }

    char norm[VFS_MAX_PATH];
    VFS_NormalizePath(virtual_path, norm, sizeof(norm));

    /* Absolute / device-specific path (ux0:, app0:, etc.) */
    if (is_device_path(norm)) {
        return resolve_case_insensitive(norm, resolved_path, max_len);
    }

    /* Relative path candidates */
    const char *rel = norm;
    while (*rel == '/') rel++;

    char candidates[16][VFS_MAX_PATH];
    int num_candidates = 0;

#define ADD_CANDIDATE(str) \
    do { \
        if (num_candidates < 16) { \
            vfs_strlcpy(candidates[num_candidates], (str), sizeof(candidates[num_candidates])); \
            num_candidates++; \
        } \
    } while(0)

    /* 1. Direct Known File Aliases (Primary Dreamcast Baseline) */
    if (vfs_strcasecmp(rel, "Fix.sna") == 0 || vfs_strcasecmp(rel, "Fix.dat") == 0 ||
        vfs_strcasecmp(rel, "FIX.SNA") == 0 || vfs_strcasecmp(rel, "FIX.DAT") == 0) {
        ADD_CANDIDATE("DCDATA/FIX.DAT");
    } else if (vfs_strcasecmp(rel, "Fix.tex") == 0 || vfs_strcasecmp(rel, "FIX.TEX") == 0 ||
               vfs_strcasecmp(rel, "Fix.ptx") == 0) {
        ADD_CANDIDATE("DCDATA/FIX.TEX");
    } else if (vfs_strcasecmp(rel, "Fix.tmp") == 0 || vfs_strcasecmp(rel, "FIX.TMP") == 0 ||
               vfs_strcasecmp(rel, "Fix.rtb") == 0) {
        ADD_CANDIDATE("DCDATA/FIX.TMP");
    }

    /* 2. Subfolder Level Expansion: e.g. "LEARN_10.DAT" -> "DCDATA/LEARN_10/LEARN_10.DAT" */
    if (!strchr(rel, '/')) {
        char base[128];
        get_basename_no_ext(rel, base, sizeof(base));
        const char *ext = get_ext(rel);

        char buf[VFS_MAX_PATH * 2];
        if (vfs_strcasecmp(ext, ".sna") == 0 || vfs_strcasecmp(ext, ".dat") == 0) {
            snprintf(buf, sizeof(buf), "DCDATA/%s/%s.DAT", base, base);
            ADD_CANDIDATE(buf);
            snprintf(buf, sizeof(buf), "DCDATA/%s.DAT", base);
            ADD_CANDIDATE(buf);
        } else if (vfs_strcasecmp(ext, ".tex") == 0 || vfs_strcasecmp(ext, ".ptx") == 0) {
            snprintf(buf, sizeof(buf), "DCDATA/%s/%s.TEX", base, base);
            ADD_CANDIDATE(buf);
            snprintf(buf, sizeof(buf), "DCDATA/%s.TEX", base);
            ADD_CANDIDATE(buf);
        } else if (vfs_strcasecmp(ext, ".tmp") == 0 || vfs_strcasecmp(ext, ".rtb") == 0) {
            snprintf(buf, sizeof(buf), "DCDATA/%s/%s.TMP", base, base);
            ADD_CANDIDATE(buf);
            snprintf(buf, sizeof(buf), "DCDATA/%s.TMP", base);
            ADD_CANDIDATE(buf);
        }

        /* Also check in DCDATA directly */
        snprintf(buf, sizeof(buf), "DCDATA/%s", rel);
        ADD_CANDIDATE(buf);
    }

    /* 3. Strip PC directory hierarchy "Data/World/Levels/" or "World/Levels/" */
    const char *levels_prefix = "Data/World/Levels/";
    const char *levels_short = "World/Levels/";
    const char *sub = NULL;

    if (vfs_strncasecmp(rel, levels_prefix, strlen(levels_prefix)) == 0) {
        sub = rel + strlen(levels_prefix);
    } else if (vfs_strncasecmp(rel, levels_short, strlen(levels_short)) == 0) {
        sub = rel + strlen(levels_short);
    }

    if (sub) {
        char buf[VFS_MAX_PATH * 2];
        /* Check for extension translation on PC level paths */
        const char *ext = get_ext(sub);
        char base[128];
        get_basename_no_ext(sub, base, sizeof(base));

        if (vfs_strcasecmp(ext, ".sna") == 0) {
            snprintf(buf, sizeof(buf), "DCDATA/%s/%s.DAT", base, base);
            ADD_CANDIDATE(buf);
        } else if (vfs_strcasecmp(ext, ".ptx") == 0) {
            snprintf(buf, sizeof(buf), "DCDATA/%s/%s.TEX", base, base);
            ADD_CANDIDATE(buf);
        } else if (vfs_strcasecmp(ext, ".rtb") == 0) {
            snprintf(buf, sizeof(buf), "DCDATA/%s/%s.TMP", base, base);
            ADD_CANDIDATE(buf);
        }

        snprintf(buf, sizeof(buf), "DCDATA/%s", sub);
        ADD_CANDIDATE(buf);
    }

    /* 4. Strip PC Sound / Vignette / Texts prefixes */
    if (vfs_strncasecmp(rel, "Data/World/Sound/", 17) == 0) {
        char buf[VFS_MAX_PATH * 2];
        snprintf(buf, sizeof(buf), "DCDATA/SOUND/%s", rel + 17);
        ADD_CANDIDATE(buf);
    } else if (vfs_strncasecmp(rel, "Data/Vignette/", 14) == 0) {
        char buf[VFS_MAX_PATH * 2];
        snprintf(buf, sizeof(buf), "DCDATA/VIGNET/%s", rel + 14);
        ADD_CANDIDATE(buf);
    } else if (vfs_strncasecmp(rel, "Data/Texts/", 11) == 0) {
        char buf[VFS_MAX_PATH * 2];
        snprintf(buf, sizeof(buf), "DCDATA/TEXTS/%s", rel + 11);
        ADD_CANDIDATE(buf);
    }

    /* 5. Prefix with DCDATA/ if not already present */
    if (vfs_strncasecmp(rel, "DCDATA/", 7) != 0) {
        char buf[VFS_MAX_PATH * 2];
        snprintf(buf, sizeof(buf), "DCDATA/%s", rel);
        ADD_CANDIDATE(buf);
    } else {
        /* Or strip DCDATA/ for root assets like 0GDTEX.PVR */
        ADD_CANDIDATE(rel + 7);
    }

    /* 6. Exact relative path as fallback */
    ADD_CANDIDATE(rel);

    /* Test all generated candidates in order against s_vfs_root */
    for (int i = 0; i < num_candidates; i++) {
        char full_candidate[VFS_MAX_PATH * 2];
        size_t root_len = strlen(s_vfs_root);
        if (root_len > 0 && s_vfs_root[root_len - 1] != '/') {
            snprintf(full_candidate, sizeof(full_candidate), "%s/%s", s_vfs_root, candidates[i]);
        } else {
            snprintf(full_candidate, sizeof(full_candidate), "%s%s", s_vfs_root, candidates[i]);
        }

        bool is_dir = false;
        if (resolve_case_insensitive(full_candidate, resolved_path, max_len)) {
            if (fs_exists(resolved_path, NULL, &is_dir) && !is_dir) {
                return true;
            }
        }
    }

    /* Default fallback path */
    size_t root_len = strlen(s_vfs_root);
    if (root_len > 0 && s_vfs_root[root_len - 1] != '/') {
        snprintf(resolved_path, max_len, "%s/%s", s_vfs_root, rel);
    } else {
        snprintf(resolved_path, max_len, "%s%s", s_vfs_root, rel);
    }

    return false;
}

/* ----------------------------------------------------------------------------
 * 6. VFS Lifecycle & Settings
 * ---------------------------------------------------------------------------- */
void VFS_Vita_Init(const char *root_override) {
    if (root_override && root_override[0]) {
        VFS_Vita_SetRoot(root_override);
    } else {
        VFS_Vita_SetRoot(VFS_DEFAULT_ROOT);
    }
    s_vfs_initialized = true;
    OS_Vita_LogInfo("VFS Initialized. Root: '%s'", s_vfs_root);
}

void VFS_Vita_SetRoot(const char *root_path) {
    if (!root_path || !root_path[0]) {
        vfs_strlcpy(s_vfs_root, VFS_DEFAULT_ROOT, sizeof(s_vfs_root));
    } else {
        VFS_NormalizePath(root_path, s_vfs_root, sizeof(s_vfs_root));
        size_t len = strlen(s_vfs_root);
        if (len > 0 && s_vfs_root[len - 1] != '/' && len + 1 < sizeof(s_vfs_root)) {
            s_vfs_root[len] = '/';
            s_vfs_root[len + 1] = '\0';
        }
    }
    s_vfs_initialized = true;
}

const char *VFS_Vita_GetRoot(void) {
    return s_vfs_root;
}

/* ----------------------------------------------------------------------------
 * 7. Standard CPA File Operations (sceIo Mappings)
 * ---------------------------------------------------------------------------- */

/* Parse fopen mode string to sceIo flags and permissions */
static bool parse_file_mode(const char *mode, int *out_flags, int *out_mode, bool *out_is_write) {
    if (!mode) return false;

    bool r = false, w = false, a = false, plus = false;
    for (const char *p = mode; *p; p++) {
        if (*p == 'r') r = true;
        else if (*p == 'w') w = true;
        else if (*p == 'a') a = true;
        else if (*p == '+') plus = true;
    }

    if (out_is_write) {
        *out_is_write = (w || a || plus);
    }

#if defined(__vita__)
    int flags = 0;
    int acc_mode = 0;

    if (r) {
        flags = plus ? SCE_O_RDWR : SCE_O_RDONLY;
    } else if (w) {
        flags = plus ? (SCE_O_RDWR | SCE_O_CREAT | SCE_O_TRUNC) : (SCE_O_WRONLY | SCE_O_CREAT | SCE_O_TRUNC);
        acc_mode = 0777;
    } else if (a) {
        flags = plus ? (SCE_O_RDWR | SCE_O_CREAT | SCE_O_APPEND) : (SCE_O_WRONLY | SCE_O_CREAT | SCE_O_APPEND);
        acc_mode = 0777;
    } else {
        return false;
    }

    if (out_flags) *out_flags = flags;
    if (out_mode) *out_mode = acc_mode;
    return true;
#else
    (void)out_flags;
    (void)out_mode;
    return (r || w || a);
#endif
}

CPA_FILE *CPA_fopen(const char *filename, const char *mode) {
    if (!filename || !mode) {
        return NULL;
    }

    if (!s_vfs_initialized) {
        VFS_Vita_Init(NULL);
    }

    int flags = 0;
    int acc_mode = 0;
    bool is_write = false;
    if (!parse_file_mode(mode, &flags, &acc_mode, &is_write)) {
        OS_Vita_LogError("CPA_fopen invalid mode '%s' for '%s'", mode, filename);
        return NULL;
    }

    char resolved[VFS_MAX_PATH];
    bool found = VFS_ResolvePath(filename, resolved, sizeof(resolved));

    if (!found && !is_write) {
        OS_Vita_LogDebug("CPA_fopen file not found: '%s'", filename);
        return NULL;
    }

    if (is_write && !found) {
        /* Ensure parent directory exists when creating a new file */
        CPA_CreateDirectoryRecursive(resolved);
    }

    CPA_FILE *file = (CPA_FILE *)CPA_malloc(sizeof(CPA_FILE));
    if (!file) {
        return NULL;
    }
    memset(file, 0, sizeof(CPA_FILE));
    vfs_strlcpy(file->path, resolved, sizeof(file->path));
    file->flags = flags;

#if defined(__vita__)
    SceUID fd = sceIoOpen(resolved, flags, (SceMode)acc_mode);
    if (fd < 0) {
        OS_Vita_LogError("CPA_fopen sceIoOpen failed (0x%08X) for '%s'", (unsigned int)fd, resolved);
        CPA_free(file);
        return NULL;
    }
    file->fd = fd;
#else
    FILE *fp = fopen(resolved, mode);
    if (!fp) {
        OS_Vita_LogError("CPA_fopen fopen failed for '%s'", resolved);
        CPA_free(file);
        return NULL;
    }
    file->fp = fp;
#endif

    return file;
}

size_t CPA_fread(void *ptr, size_t size, size_t count, CPA_FILE *stream) {
    if (!stream || !ptr || size == 0 || count == 0) {
        return 0;
    }

#if defined(__vita__)
    if (stream->fd < 0) return 0;
    SceSize to_read = (SceSize)(size * count);
    SceSSize bytes_read = sceIoRead(stream->fd, ptr, to_read);
    if (bytes_read < 0) {
        stream->error = (int)bytes_read;
        return 0;
    }
    if ((SceSize)bytes_read < to_read) {
        stream->eof = 1;
    }
    return (size_t)bytes_read / size;
#else
    if (!stream->fp) return 0;
    size_t read_count = fread(ptr, size, count, stream->fp);
    if (read_count < count) {
        if (feof(stream->fp)) stream->eof = 1;
        if (ferror(stream->fp)) stream->error = 1;
    }
    return read_count;
#endif
}

size_t CPA_fwrite(const void *ptr, size_t size, size_t count, CPA_FILE *stream) {
    if (!stream || !ptr || size == 0 || count == 0) {
        return 0;
    }

#if defined(__vita__)
    if (stream->fd < 0) return 0;
    SceSize to_write = (SceSize)(size * count);
    SceSSize bytes_written = sceIoWrite(stream->fd, ptr, to_write);
    if (bytes_written < 0) {
        stream->error = (int)bytes_written;
        return 0;
    }
    return (size_t)bytes_written / size;
#else
    if (!stream->fp) return 0;
    size_t written_count = fwrite(ptr, size, count, stream->fp);
    if (written_count < count && ferror(stream->fp)) {
        stream->error = 1;
    }
    return written_count;
#endif
}

int CPA_fseek(CPA_FILE *stream, long offset, int whence) {
    if (!stream) return -1;

#if defined(__vita__)
    if (stream->fd < 0) return -1;
    int vita_whence;
    switch (whence) {
        case SEEK_SET: vita_whence = SCE_SEEK_SET; break;
        case SEEK_CUR: vita_whence = SCE_SEEK_CUR; break;
        case SEEK_END: vita_whence = SCE_SEEK_END; break;
        default: return -1;
    }
    SceOff res = sceIoLseek(stream->fd, (SceOff)offset, vita_whence);
    if (res < 0) {
        stream->error = (int)res;
        return -1;
    }
    stream->eof = 0;
    return 0;
#else
    if (!stream->fp) return -1;
    int res = fseek(stream->fp, offset, whence);
    if (res == 0) {
        stream->eof = 0;
    }
    return res;
#endif
}

long CPA_ftell(CPA_FILE *stream) {
    if (!stream) return -1L;

#if defined(__vita__)
    if (stream->fd < 0) return -1L;
    SceOff pos = sceIoLseek(stream->fd, 0, SCE_SEEK_CUR);
    if (pos < 0) {
        stream->error = (int)pos;
        return -1L;
    }
    return (long)pos;
#else
    if (!stream->fp) return -1L;
    return ftell(stream->fp);
#endif
}

int CPA_fclose(CPA_FILE *stream) {
    if (!stream) return -1;

    int res = 0;
#if defined(__vita__)
    if (stream->fd >= 0) {
        res = sceIoClose(stream->fd);
    }
#else
    if (stream->fp) {
        res = fclose(stream->fp);
    }
#endif

    CPA_free(stream);
    return (res < 0) ? -1 : 0;
}

int64_t CPA_fsize(CPA_FILE *stream) {
    if (!stream) return -1;

#if defined(__vita__)
    if (stream->fd < 0) return -1;
    SceOff cur = sceIoLseek(stream->fd, 0, SCE_SEEK_CUR);
    if (cur < 0) return -1;
    SceOff end = sceIoLseek(stream->fd, 0, SCE_SEEK_END);
    sceIoLseek(stream->fd, cur, SCE_SEEK_SET);
    return (int64_t)end;
#else
    if (!stream->fp) return -1;
    long cur = ftell(stream->fp);
    if (cur < 0) return -1;
    fseek(stream->fp, 0, SEEK_END);
    long end = ftell(stream->fp);
    fseek(stream->fp, cur, SEEK_SET);
    return (int64_t)end;
#endif
}

int CPA_feof(CPA_FILE *stream) {
    return stream ? stream->eof : 1;
}

int CPA_ferror(CPA_FILE *stream) {
    return stream ? stream->error : -1;
}

int CPA_fflush(CPA_FILE *stream) {
    if (!stream) return -1;
#if defined(__vita__)
    /* sceIo has no explicit userland flush; sync writes occur directly */
    return 0;
#else
    return stream->fp ? fflush(stream->fp) : -1;
#endif
}

/* ----------------------------------------------------------------------------
 * 8. High-Level File Loading & Directory Helpers
 * ---------------------------------------------------------------------------- */
bool CPA_FileExists(const char *filename) {
    char resolved[VFS_MAX_PATH];
    return VFS_ResolvePath(filename, resolved, sizeof(resolved));
}

int64_t CPA_GetFileSize(const char *filename) {
    char resolved[VFS_MAX_PATH];
    if (!VFS_ResolvePath(filename, resolved, sizeof(resolved))) {
        return -1;
    }
    int64_t sz = -1;
    if (fs_exists(resolved, &sz, NULL)) {
        return sz;
    }
    return -1;
}

void *CPA_LoadFile(const char *filename, size_t *out_size) {
    CPA_FILE *fp = CPA_fopen(filename, "rb");
    if (!fp) {
        return NULL;
    }

    int64_t sz = CPA_fsize(fp);
    if (sz < 0) {
        CPA_fclose(fp);
        return NULL;
    }

    void *buf = CPA_malloc((size_t)sz);
    if (!buf) {
        CPA_fclose(fp);
        return NULL;
    }

    size_t read_bytes = CPA_fread(buf, 1, (size_t)sz, fp);
    CPA_fclose(fp);

    if (read_bytes != (size_t)sz) {
        CPA_free(buf);
        return NULL;
    }

    if (out_size) {
        *out_size = (size_t)sz;
    }
    return buf;
}

void *CPA_LoadFileAligned32(const char *filename, size_t *out_size) {
    CPA_FILE *fp = CPA_fopen(filename, "rb");
    if (!fp) {
        return NULL;
    }

    int64_t sz = CPA_fsize(fp);
    if (sz < 0) {
        CPA_fclose(fp);
        return NULL;
    }

    void *buf = CPA_malloc_aligned32((size_t)sz);
    if (!buf) {
        CPA_fclose(fp);
        return NULL;
    }

    size_t read_bytes = CPA_fread(buf, 1, (size_t)sz, fp);
    CPA_fclose(fp);

    if (read_bytes != (size_t)sz) {
        CPA_free_aligned(buf);
        return NULL;
    }

    if (out_size) {
        *out_size = (size_t)sz;
    }
    return buf;
}

bool CPA_DirectoryExists(const char *dirname) {
    char resolved[VFS_MAX_PATH];
    VFS_NormalizePath(dirname, resolved, sizeof(resolved));
    bool is_dir = false;
    if (fs_exists(resolved, NULL, &is_dir) && is_dir) {
        return true;
    }
    return false;
}

bool CPA_CreateDirectory(const char *dirname) {
#if defined(__vita__)
    return sceIoMkdir(dirname, 0777) >= 0;
#else
    return mkdir(dirname, 0777) == 0;
#endif
}

bool CPA_CreateDirectoryRecursive(const char *path) {
    if (!path || !path[0]) return false;

    char temp[VFS_MAX_PATH];
    vfs_strlcpy(temp, path, sizeof(temp));

    /* If path ends with a filename, strip to parent directory */
    char *last_slash = strrchr(temp, '/');
    if (last_slash) {
        *last_slash = '\0';
    } else {
        return true;
    }

    /* Skip device prefix if present */
    char *p = temp;
    char *colon = strchr(temp, ':');
    if (colon) {
        p = colon + 1;
        if (*p == '/') p++;
    } else if (*p == '/') {
        p++;
    }

    for (; *p; p++) {
        if (*p == '/') {
            *p = '\0';
            CPA_CreateDirectory(temp);
            *p = '/';
        }
    }
    CPA_CreateDirectory(temp);
    return true;
}
