#!/bin/sh
# unit/property tests of hle/vmu.c (no guest code). usage: run_unit.sh [WORKDIR]
set -e
cd "$(dirname "$0")"
OUT=${TMPDIR:-/tmp}/r2_test_vmu_bin
cc -std=gnu11 -O1 -g -Wall -Wextra -fsanitize=address,undefined -I.. -o "$OUT" test_vmu.c ../vmu.c 2>&1 | grep -v "reducing alignment" || true
"$OUT" "${1:-${TMPDIR:-/tmp}/r2_test_vmu_work}"
