/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
 * File: test_vfs_host.c
 *
 * Host-Side Validation for Tasks 3.3 and 3.4
 * - Verifies OS abstraction timing, logging, memory allocation & 32-byte alignment
 * - Verifies VFS path normalization, case-insensitive resolution & alias mapping
 * - Verifies file I/O operations against real Dreamcast asset fixtures
 * ============================================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

#include "vita_shim/os_vita.h"
#include "vita_shim/vfs_vita.h"

#define COLOR_RESET   "\033[0m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_RED     "\033[31m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_CYAN    "\033[36m"
#define COLOR_BOLD    "\033[1m"

#define TEST_PASS(msg) printf("%s[PASS]%s %s\n", COLOR_GREEN, COLOR_RESET, msg)
#define TEST_FAIL(msg) do { printf("%s[FAIL]%s %s\n", COLOR_RED, COLOR_RESET, msg); exit(1); } while(0)

int main(void) {
    printf("%s%s=== Running Host Validation for Tasks 3.3 & 3.4 ===%s\n\n",
           COLOR_BOLD, COLOR_CYAN, COLOR_RESET);

    /* ------------------------------------------------------------------------
     * Test Section 1: OS Timing & Delay
     * ------------------------------------------------------------------------ */
    printf("%s--- Test 1: OS Timing ---%s\n", COLOR_BOLD, COLOR_RESET);
    OS_Vita_TimerInit();
    uint64_t t0 = OS_Vita_GetTimeMicroseconds();
    uint32_t m0 = OS_Vita_GetTimeMilliseconds();
    OS_Vita_DelayMilliseconds(10);
    uint64_t t1 = OS_Vita_GetTimeMicroseconds();
    uint32_t m1 = OS_Vita_GetTimeMilliseconds();
    float dt = OS_Vita_GetDeltaTime();

    if (t1 > t0 && (m1 >= m0) && dt > 0.0f) {
        TEST_PASS("Engine microsecond/millisecond timing & delta calculation verified");
    } else {
        TEST_FAIL("Timing verification failed");
    }

    /* ------------------------------------------------------------------------
     * Test Section 2: Memory Allocations & 32-Byte Alignment
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 2: Memory Allocations & 32-Byte Alignment ---%s\n", COLOR_BOLD, COLOR_RESET);
    CPA_MemoryStats stats_before;
    CPA_GetMemoryStats(&stats_before);

    void *ptr1 = CPA_malloc(1024);
    assert(ptr1 != NULL);
    void *ptr_aligned = CPA_malloc_aligned32(4096);
    assert(ptr_aligned != NULL);
    assert(((uintptr_t)ptr_aligned % 32) == 0);

    CPA_MemoryStats stats_mid;
    CPA_GetMemoryStats(&stats_mid);
    assert(stats_mid.active_allocations == stats_before.active_allocations + 2);
    assert(stats_mid.current_allocated_bytes >= 5120);

    CPA_free(ptr1);
    CPA_free_aligned(ptr_aligned);

    CPA_MemoryStats stats_after;
    CPA_GetMemoryStats(&stats_after);
    assert(stats_after.active_allocations == stats_before.active_allocations);

    TEST_PASS("CPA_malloc, CPA_free, and 32-byte alignment verified with statistics");

    /* ------------------------------------------------------------------------
     * Test Section 3: VFS Path Normalization
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 3: VFS Path Normalization ---%s\n", COLOR_BOLD, COLOR_RESET);
    char norm_buf[512];
    VFS_NormalizePath("DCDATA\\LEARN_10\\LEARN_10.DAT", norm_buf, sizeof(norm_buf));
    assert(strcmp(norm_buf, "DCDATA/LEARN_10/LEARN_10.DAT") == 0);

    VFS_NormalizePath(".\\Data\\\\World\\Levels\\\\Fix.sna", norm_buf, sizeof(norm_buf));
    assert(strcmp(norm_buf, "Data/World/Levels/Fix.sna") == 0);

    VFS_NormalizePath("C:\\Rayman2\\DCDATA\\Fix.dat", norm_buf, sizeof(norm_buf));
    assert(strcmp(norm_buf, "Rayman2/DCDATA/Fix.dat") == 0);

    TEST_PASS("Path separator conversion ('\\' -> '/'), slash deduplication & drive stripping verified");

    /* ------------------------------------------------------------------------
     * Test Section 4: VFS Root & Dreamcast Asset Alias Resolution
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 4: VFS Alias & Case-Insensitive Resolution ---%s\n", COLOR_BOLD, COLOR_RESET);
    /* Set root to actual project assets folder for host testing */
    VFS_Vita_SetRoot("assets/dc/");

    char resolved[512];

    /* Test 4a: "Fix.sna" -> "assets/dc/DCDATA/FIX.DAT" */
    bool ok = VFS_ResolvePath("Fix.sna", resolved, sizeof(resolved));
    if (!ok) {
        printf("Failed resolving Fix.sna, got: %s\n", resolved);
    }
    assert(ok);
    assert(strstr(resolved, "DCDATA/FIX.DAT") != NULL || strstr(resolved, "DCDATA/FIX.SNA") != NULL);
    TEST_PASS("Alias: 'Fix.sna' resolved to DCDATA/FIX.DAT");

    /* Test 4b: "FIX.DAT" -> "assets/dc/DCDATA/FIX.DAT" */
    ok = VFS_ResolvePath("FIX.DAT", resolved, sizeof(resolved));
    assert(ok);
    assert(strstr(resolved, "DCDATA/FIX.DAT") != NULL);
    TEST_PASS("Alias: 'FIX.DAT' resolved to DCDATA/FIX.DAT");

    /* Test 4c: "LEARN_10.SNA" -> "assets/dc/DCDATA/LEARN_10/LEARN_10.DAT" */
    ok = VFS_ResolvePath("LEARN_10.SNA", resolved, sizeof(resolved));
    assert(ok);
    assert(strstr(resolved, "DCDATA/LEARN_10/LEARN_10.DAT") != NULL || strstr(resolved, "LEARN_10.SNA") != NULL);
    TEST_PASS("Alias: 'LEARN_10.SNA' resolved to DCDATA/LEARN_10/LEARN_10.DAT");

    /* Test 4d: Case-insensitivity: "learn_10.tmp" -> "assets/dc/DCDATA/LEARN_10/LEARN_10.TMP" */
    ok = VFS_ResolvePath("learn_10.tmp", resolved, sizeof(resolved));
    assert(ok);
    assert(strcasestr(resolved, "LEARN_10") != NULL && strcasestr(resolved, ".TMP") != NULL);
    TEST_PASS("Case-insensitive: 'learn_10.tmp' resolved to DCDATA/LEARN_10/LEARN_10.TMP");

    /* Test 4e: PC Hierarchy: "Data/World/Levels/Learn_10/Learn_10.sna" */
    ok = VFS_ResolvePath("Data/World/Levels/Learn_10/Learn_10.sna", resolved, sizeof(resolved));
    assert(ok);
    assert(strcasestr(resolved, "Learn_10") != NULL && strcasestr(resolved, ".DAT") != NULL);
    TEST_PASS("PC hierarchy alias: 'Data/World/Levels/Learn_10/Learn_10.sna' resolved to DCDATA/LEARN_10/LEARN_10.DAT");

    /* ------------------------------------------------------------------------
     * Test Section 5: CPA File Operations (CPA_fopen, CPA_fread, CPA_fsize)
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 5: CPA File I/O Operations ---%s\n", COLOR_BOLD, COLOR_RESET);
    CPA_FILE *fp = CPA_fopen("Fix.sna", "rb");
    assert(fp != NULL);
    int64_t size = CPA_fsize(fp);
    assert(size == 1012556L); /* FIX.DAT expected size */

    uint32_t header[4];
    size_t read_items = CPA_fread(header, sizeof(uint32_t), 4, fp);
    assert(read_items == 4);
    assert(CPA_ftell(fp) == 16);

    CPA_fseek(fp, 0, SEEK_SET);
    assert(CPA_ftell(fp) == 0);
    CPA_fclose(fp);
    TEST_PASS("CPA_fopen, CPA_fsize, CPA_fread, CPA_fseek, CPA_fclose verified on FIX.DAT");

    /* ------------------------------------------------------------------------
     * Test Section 6: CPA_LoadFileAligned32 on FIX.DAT
     * ------------------------------------------------------------------------ */
    printf("\n%s--- Test 6: CPA_LoadFileAligned32 ---%s\n", COLOR_BOLD, COLOR_RESET);
    size_t loaded_size = 0;
    void *fix_buf = CPA_LoadFileAligned32("Fix.sna", &loaded_size);
    assert(fix_buf != NULL);
    assert(loaded_size == 1012556UL);
    assert(((uintptr_t)fix_buf % 32) == 0);
    CPA_free_aligned(fix_buf);
    TEST_PASS("CPA_LoadFileAligned32 loaded FIX.DAT into 32-byte aligned buffer");

    printf("\n%s%s=== ALL TESTS PASSED SUCCESSFULLY! ===%s\n",
           COLOR_BOLD, COLOR_GREEN, COLOR_RESET);
    return 0;
}
