#!/bin/sh
# builds and runs the io unit tests (standalone: does not need the lifted code or boot.c)
set -e
cd "$(dirname "$0")"
cc -std=gnu11 -O1 -g -Wall -Wextra -fsanitize=address,undefined -I.. -o ${TMPDIR:-/tmp}/r2_test_io_bin test_io.c ../io.c
${TMPDIR:-/tmp}/r2_test_io_bin
cc -std=gnu11 -O1 -g -Wall -Wextra -fsanitize=address,undefined -I.. -o ${TMPDIR:-/tmp}/r2_test_pad_bin test_pad.c ../pad.c
${TMPDIR:-/tmp}/r2_test_pad_bin
