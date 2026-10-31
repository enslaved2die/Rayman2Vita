/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: os_vita.h
 *
 * PlayStation Vita OS Abstraction Layer
 * - User Heap Configuration (256 MB)
 * - Thread Management Defaults (Priority & Stack Size)
 * - High-Precision Engine Timing (sceKernelGetProcessTimeWide)
 * - Debug Logging via sceClibPrintf
 * - Memory Allocation & 32-Byte Aligned Buffer Management
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#ifndef OS_VITA_H
#define OS_VITA_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 1. Vita Memory & Heap Configuration Constants
 * ---------------------------------------------------------------------------- */
#define VITA_HEAP_SIZE_USER_MB          256
#define VITA_HEAP_SIZE_USER_BYTES       (256 * 1024 * 1024)

/* Default Alignment for Dreamcast Snapshot & Texture Buffers */
#define CPA_DEFAULT_ALIGNMENT           32U

/* Exported Newlib User Heap Configuration Symbol */
extern int _newlib_heap_size_user;

/* ----------------------------------------------------------------------------
 * 2. Vita Thread Management Defaults
 * ---------------------------------------------------------------------------- */
/* PS Vita Userland Thread Priorities (0x40 - 0x10000100) */
#define VITA_THREAD_PRIORITY_NORMAL     0x10000100
#define VITA_THREAD_PRIORITY_AUDIO      (0x10000100 - 10)  /* Higher priority for ADPCM/CDDA */
#define VITA_THREAD_PRIORITY_ASYNC_IO   (0x10000100 + 10)  /* Lower priority for streaming */

/* Default Thread Stack Sizes */
#define VITA_THREAD_STACK_SIZE_MAIN     (512 * 1024)       /* 512 KB main engine stack */
#define VITA_THREAD_STACK_SIZE_AUDIO    (128 * 1024)       /* 128 KB audio stream worker */
#define VITA_THREAD_STACK_SIZE_ASYNC_IO (128 * 1024)       /* 128 KB async IO worker */

/* ----------------------------------------------------------------------------
 * 3. Engine High-Precision Timing (Microsecond Resolution)
 * ---------------------------------------------------------------------------- */
/* Initialize timing subsystem */
void OS_Vita_TimerInit(void);

/* Microsecond timestamp from sceKernelGetProcessTimeWide() */
uint64_t OS_Vita_GetTimeMicroseconds(void);

/* Millisecond timestamp */
uint32_t OS_Vita_GetTimeMilliseconds(void);

/* Floating-point seconds (elapsed time) */
float OS_Vita_GetTimeSeconds(void);
double OS_Vita_GetTimeSecondsDouble(void);

/* Delta time calculation for 60 FPS physics tick */
float OS_Vita_GetDeltaTime(void);

/* Thread delay / sleep */
void OS_Vita_DelayMicroseconds(uint64_t usec);
void OS_Vita_DelayMilliseconds(uint32_t msec);

/* Standard CPA timing aliases */
#define CPA_GetTimeMicroseconds()       OS_Vita_GetTimeMicroseconds()
#define CPA_GetTimeMilliseconds()       OS_Vita_GetTimeMilliseconds()
#define CPA_GetTicks()                  OS_Vita_GetTimeMilliseconds()
#define CPA_GetTimeSeconds()            OS_Vita_GetTimeSeconds()
#define CPA_Delay(ms)                   OS_Vita_DelayMilliseconds(ms)

/* ----------------------------------------------------------------------------
 * 4. Debug Logging Subsystem
 * ---------------------------------------------------------------------------- */
typedef enum OS_LogLevel {
    OS_LOG_DEBUG = 0,
    OS_LOG_INFO  = 1,
    OS_LOG_WARN  = 2,
    OS_LOG_ERROR = 3
} OS_LogLevel;

/* Base logging functions */
void OS_Vita_Log(OS_LogLevel level, const char *fmt, ...);
void OS_Vita_LogV(OS_LogLevel level, const char *fmt, va_list args);
void OS_Vita_LogPrintf(const char *fmt, ...);

/* Convenience log macros */
void OS_Vita_LogDebug(const char *fmt, ...);
void OS_Vita_LogInfo(const char *fmt, ...);
void OS_Vita_LogWarn(const char *fmt, ...);
void OS_Vita_LogError(const char *fmt, ...);

/* CPA logging aliases */
#define CPA_printf(...)                 OS_Vita_LogPrintf(__VA_ARGS__)
#define CPA_log(level, ...)             OS_Vita_Log(level, __VA_ARGS__)

/* ----------------------------------------------------------------------------
 * 5. Memory Management & Alignment Wrappers
 * ---------------------------------------------------------------------------- */
/* Standard allocations */
void *CPA_malloc(size_t size);
void  CPA_free(void *ptr);
void *CPA_calloc(size_t num, size_t size);
void *CPA_realloc(void *ptr, size_t size);

/* Aligned allocations (Power-of-two alignment) */
void *CPA_malloc_aligned(size_t size, size_t alignment);
void  CPA_free_aligned(void *ptr);

/* 32-Byte aligned allocation helper (required for Dreamcast textures & snapshot memory) */
void *CPA_malloc_aligned32(size_t size);

/* Memory Tracking Statistics */
typedef struct CPA_MemoryStats {
    size_t current_allocated_bytes;
    size_t peak_allocated_bytes;
    size_t active_allocations;
} CPA_MemoryStats;

void CPA_GetMemoryStats(CPA_MemoryStats *out_stats);
void CPA_DumpMemoryStats(void);

/* ----------------------------------------------------------------------------
 * 6. System Lifecycle
 * ---------------------------------------------------------------------------- */
void OS_Vita_Init(void);
void OS_Vita_Shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* OS_VITA_H */
