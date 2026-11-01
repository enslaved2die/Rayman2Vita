#!/usr/bin/env bash
# ==============================================================================
# Rayman 2 PS Vita Port — Cleanroom Audio Engine Real Calls Tester
# Compiles and runs test_cleanroom_real_calls on host
# ==============================================================================
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"

cd "${PROJECT_ROOT}"

mkdir -p build

echo "=== Compiling tools/test_cleanroom_real_calls.c ==="
clang -O2 -Wall -Wextra \
  -DCPA_PLATFORM_HOST \
  -DR2_DREAMCAST_BASELINE \
  -Iinclude \
  -Iinclude/vita_shim \
  -Isrc/engine \
  -Isrc/platform/vita \
  tools/test_cleanroom_real_calls.c \
  src/platform/vita/snd_vita.c \
  src/platform/vita/vfs_vita.c \
  src/platform/vita/os_vita.c \
  -lm \
  -o build/test_cleanroom_real_calls

echo "=== Running Cleanroom Real Calls Test Suite ==="
./build/test_cleanroom_real_calls "$@"
