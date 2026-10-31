/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: os_vita.c
 *
 * PlayStation Vita OS Abstraction Layer Implementation
 * - User Heap Configuration: 256 MB via _newlib_heap_size_user
 * - Thread Priority & Stack Size Parameters
 * - High-Precision Engine Timing (sceKernelGetProcessTimeWide)
 * - Debug Logging via sceClibPrintf
 * - Memory Allocation & 32-Byte Aligned Buffer Management
 *
 * Primary Port Baseline: Sega Dreamcast 1ST_READ.BIN (SH-4 @ 0x8C010000)
 * Secondary Guidance:    PC Retail Rayman2.exe (x86 @ 0x00400000)
 * ============================================================================ */

#include "vita_shim/os_vita.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdarg.h>

#if defined(__vita__)
#include <psp2/kernel/clib.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/kernel/threadmgr.h>
#else
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#endif

/* ----------------------------------------------------------------------------
 * 1. Vita Newlib Heap Configuration
 * ----------------------------------------------------------------------------
 * Instructs the VitaSDK newlib crt0 to reserve 256 MB user memory for the heap.
 * The standard PS Vita user memory space is 512 MB (or 1 GB on DevKit).
 * 256 MB provides abundant room for the complete Dreamcast snapshot (~5 MB),
 * texture caches (~32 MB), decompressed audio streams, and runtime structures.
 */
int _newlib_heap_size_user = VITA_HEAP_SIZE_USER_BYTES;

/* Default thread priority and stack sizes for engine threads */
const int g_vita_default_thread_priority = VITA_THREAD_PRIORITY_NORMAL;
const size_t g_vita_default_thread_stack_size = VITA_THREAD_STACK_SIZE_MAIN;

/* ----------------------------------------------------------------------------
 * 2. High-Precision Timing Subsystem
 * ---------------------------------------------------------------------------- */
static uint64_t s_timer_start_usec = 0;
static uint64_t s_last_frame_usec = 0;
static bool s_timer_initialized = false;

void OS_Vita_TimerInit(void) {
    s_timer_start_usec = OS_Vita_GetTimeMicroseconds();
    s_last_frame_usec = s_timer_start_usec;
    s_timer_initialized = true;
}

uint64_t OS_Vita_GetTimeMicroseconds(void) {
#if defined(__vita__)
    return (uint64_t)sceKernelGetProcessTimeWide();
#else
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return ((uint64_t)tv.tv_sec * 1000000ULL) + (uint64_t)tv.tv_usec;
#endif
}

uint32_t OS_Vita_GetTimeMilliseconds(void) {
    return (uint32_t)(OS_Vita_GetTimeMicroseconds() / 1000ULL);
}

float OS_Vita_GetTimeSeconds(void) {
    if (!s_timer_initialized) {
        OS_Vita_TimerInit();
    }
    uint64_t now = OS_Vita_GetTimeMicroseconds();
    return (float)((double)(now - s_timer_start_usec) / 1000000.0);
}

double OS_Vita_GetTimeSecondsDouble(void) {
    if (!s_timer_initialized) {
        OS_Vita_TimerInit();
    }
    uint64_t now = OS_Vita_GetTimeMicroseconds();
    return (double)(now - s_timer_start_usec) / 1000000.0;
}

float OS_Vita_GetDeltaTime(void) {
    if (!s_timer_initialized) {
        OS_Vita_TimerInit();
    }
    uint64_t now = OS_Vita_GetTimeMicroseconds();
    uint64_t diff = now - s_last_frame_usec;
    s_last_frame_usec = now;

    float dt = (float)((double)diff / 1000000.0);
    /* Clamp extreme delta to prevent physics explosion (e.g. debugger hitch) */
    if (dt > 0.1f) {
        dt = 0.1f;
    }
    return dt;
}

void OS_Vita_DelayMicroseconds(uint64_t usec) {
#if defined(__vita__)
    sceKernelDelayThread((SceUInt)usec);
#else
    usleep((useconds_t)usec);
#endif
}

void OS_Vita_DelayMilliseconds(uint32_t msec) {
    OS_Vita_DelayMicroseconds((uint64_t)msec * 1000ULL);
}

/* ----------------------------------------------------------------------------
 * 3. Debug Logging Subsystem
 * ---------------------------------------------------------------------------- */
static const char *s_log_prefixes[] = {
    "[DEBUG] ",
    "[INFO]  ",
    "[WARN]  ",
    "[ERROR] "
};

void OS_Vita_LogV(OS_LogLevel level, const char *fmt, va_list args) {
    char buf[1024];
    vsnprintf(buf, sizeof(buf), fmt, args);

    const char *prefix = "";
    if (level <= OS_LOG_ERROR) {
        prefix = s_log_prefixes[level];
    }

#if defined(__vita__)
    sceClibPrintf("%s%s\n", prefix, buf);
#else
    printf("%s%s\n", prefix, buf);
    fflush(stdout);
#endif
}

void OS_Vita_Log(OS_LogLevel level, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    OS_Vita_LogV(level, fmt, args);
    va_end(args);
}

void OS_Vita_LogPrintf(const char *fmt, ...) {
    char buf[1024];
    va_list args;
    va_start(args, fmt);
    vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);

#if defined(__vita__)
    sceClibPrintf("%s", buf);
#else
    printf("%s", buf);
    fflush(stdout);
#endif
}

void OS_Vita_LogDebug(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    OS_Vita_LogV(OS_LOG_DEBUG, fmt, args);
    va_end(args);
}

void OS_Vita_LogInfo(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    OS_Vita_LogV(OS_LOG_INFO, fmt, args);
    va_end(args);
}

void OS_Vita_LogWarn(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    OS_Vita_LogV(OS_LOG_WARN, fmt, args);
    va_end(args);
}

void OS_Vita_LogError(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    OS_Vita_LogV(OS_LOG_ERROR, fmt, args);
    va_end(args);
}

/* ----------------------------------------------------------------------------
 * 4. Memory Management & Alignment Wrappers
 * ----------------------------------------------------------------------------
 * Every allocation tracks size metadata in a header so memory statistics
 * (current, peak, active count) can be monitored throughout level transitions.
 * Aligned allocations store original base pointers immediately preceding
 * the aligned payload.
 */

typedef struct AllocHeader {
    size_t size;
    uint32_t magic;
} AllocHeader;

#define ALLOC_MAGIC 0x56495441U /* 'VITA' */

static CPA_MemoryStats s_mem_stats = { 0, 0, 0 };

static void record_alloc(size_t size) {
    s_mem_stats.current_allocated_bytes += size;
    s_mem_stats.active_allocations++;
    if (s_mem_stats.current_allocated_bytes > s_mem_stats.peak_allocated_bytes) {
        s_mem_stats.peak_allocated_bytes = s_mem_stats.current_allocated_bytes;
    }
}

static void record_free(size_t size) {
    if (s_mem_stats.current_allocated_bytes >= size) {
        s_mem_stats.current_allocated_bytes -= size;
    } else {
        s_mem_stats.current_allocated_bytes = 0;
    }
    if (s_mem_stats.active_allocations > 0) {
        s_mem_stats.active_allocations--;
    }
}

void *CPA_malloc(size_t size) {
    if (size == 0) {
        return NULL;
    }

    size_t total = sizeof(AllocHeader) + size;
    AllocHeader *hdr = (AllocHeader *)malloc(total);
    if (!hdr) {
        OS_Vita_LogError("CPA_malloc failed: requested %zu bytes", size);
        return NULL;
    }

    hdr->size = size;
    hdr->magic = ALLOC_MAGIC;
    record_alloc(size);

    return (void *)(hdr + 1);
}

void CPA_free(void *ptr) {
    if (!ptr) {
        return;
    }

    AllocHeader *hdr = ((AllocHeader *)ptr) - 1;
    if (hdr->magic == ALLOC_MAGIC) {
        record_free(hdr->size);
        hdr->magic = 0;
        free(hdr);
    } else {
        /* Fallback for raw pointers */
        free(ptr);
    }
}

void *CPA_calloc(size_t num, size_t size) {
    size_t total = num * size;
    void *ptr = CPA_malloc(total);
    if (ptr) {
        memset(ptr, 0, total);
    }
    return ptr;
}

void *CPA_realloc(void *ptr, size_t size) {
    if (!ptr) {
        return CPA_malloc(size);
    }
    if (size == 0) {
        CPA_free(ptr);
        return NULL;
    }

    AllocHeader *hdr = ((AllocHeader *)ptr) - 1;
    if (hdr->magic != ALLOC_MAGIC) {
        return realloc(ptr, size);
    }

    size_t old_size = hdr->size;
    void *new_ptr = CPA_malloc(size);
    if (!new_ptr) {
        return NULL;
    }

    size_t copy_size = (old_size < size) ? old_size : size;
    memcpy(new_ptr, ptr, copy_size);
    CPA_free(ptr);
    return new_ptr;
}

/* Aligned allocation:
 * Layout: [Raw Malloc Base] ... [Stored Original Ptr (void*)] [Aligned Payload...]
 */
void *CPA_malloc_aligned(size_t size, size_t alignment) {
    if (size == 0) {
        return NULL;
    }

    /* Minimum alignment is pointer size; must be power of 2 */
    if (alignment < sizeof(void *)) {
        alignment = sizeof(void *);
    }

    size_t total = size + alignment + sizeof(void *) + sizeof(AllocHeader);
    AllocHeader *hdr = (AllocHeader *)malloc(total);
    if (!hdr) {
        OS_Vita_LogError("CPA_malloc_aligned failed: requested %zu bytes, align %zu", size, alignment);
        return NULL;
    }

    hdr->size = size;
    hdr->magic = ALLOC_MAGIC;
    record_alloc(size);

    uintptr_t raw_payload = (uintptr_t)(hdr + 1);
    uintptr_t aligned_addr = (raw_payload + sizeof(void *) + (alignment - 1)) & ~(alignment - 1);

    /* Store raw allocation base immediately before aligned payload */
    ((void **)aligned_addr)[-1] = (void *)hdr;

    return (void *)aligned_addr;
}

void CPA_free_aligned(void *ptr) {
    if (!ptr) {
        return;
    }

    void *raw = ((void **)ptr)[-1];
    AllocHeader *hdr = (AllocHeader *)raw;
    if (hdr->magic == ALLOC_MAGIC) {
        record_free(hdr->size);
        hdr->magic = 0;
        free(hdr);
    } else {
        free(raw);
    }
}

void *CPA_malloc_aligned32(size_t size) {
    return CPA_malloc_aligned(size, CPA_DEFAULT_ALIGNMENT);
}

void CPA_GetMemoryStats(CPA_MemoryStats *out_stats) {
    if (out_stats) {
        *out_stats = s_mem_stats;
    }
}

void CPA_DumpMemoryStats(void) {
    OS_Vita_LogInfo("=== CPA Vita Memory Statistics ===");
    OS_Vita_LogInfo("  Current Allocated: %zu bytes (%.2f MB)",
                    s_mem_stats.current_allocated_bytes,
                    (double)s_mem_stats.current_allocated_bytes / (1024.0 * 1024.0));
    OS_Vita_LogInfo("  Peak Allocated:    %zu bytes (%.2f MB)",
                    s_mem_stats.peak_allocated_bytes,
                    (double)s_mem_stats.peak_allocated_bytes / (1024.0 * 1024.0));
    OS_Vita_LogInfo("  Active Allocs:     %zu",
                    s_mem_stats.active_allocations);
    OS_Vita_LogInfo("  Heap User Limit:   %d MB", VITA_HEAP_SIZE_USER_MB);
}

/* ----------------------------------------------------------------------------
 * 5. System Lifecycle
 * ---------------------------------------------------------------------------- */
void OS_Vita_Init(void) {
    OS_Vita_TimerInit();
    OS_Vita_LogInfo("CPA Vita OS Abstraction Initialized (Heap: %d MB)", VITA_HEAP_SIZE_USER_MB);
}

void OS_Vita_Shutdown(void) {
    CPA_DumpMemoryStats();
    OS_Vita_LogInfo("CPA Vita OS Abstraction Shutting Down");
}
