# AI evaluator tests (milestone N5). Standalone fragment, run from tools/cpa_tests:
#   make -f aiexec.mk ai-exec                                   : hand-built cases (portable, no assets)
#   make -f aiexec.mk ai-exec-data ASSETS=/path/to/assets/dc    : evaluate all actor scripts of the guest-RAM dumps in build/ram_*.bin, coverage report
#   make -f aiexec.mk ai-exec-oracle ASSETS=/path/to/assets/dc  : same, comparing every node with the lifted game code (needs tools/sh4recomp build_hle objects)
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
DCDATA  ?= $(ASSETS)/DCDATA
RAMDIR  ?= build
SH4      = ../sh4recomp
HLEOBJ   = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
SRC      = ../../src/cpa/cpa_ai_exec.c

build/test_ai_exec: test_ai_exec.c $(SRC) ../../src/cpa/cpa_ai_exec.h
	@mkdir -p build
	$(CC) $(CFLAGS) -D_POSIX_C_SOURCE=200809L -o $@ test_ai_exec.c $(SRC)

build/test_ai_exec_oracle: test_ai_exec.c $(SRC) ../../src/cpa/cpa_ai_exec.h $(SH4)/build_hle/run_game
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -DAIEXEC_ORACLE -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c test_ai_exec.c -o build/test_ai_exec_oracle.o
	$(CC) -O1 -std=gnu11 -c $(SRC) -o build/cpa_ai_exec_oracle.o
	$(CC) -o $@ build/test_ai_exec_oracle.o build/cpa_ai_exec_oracle.o $(HLEOBJ) -lm

ai-exec: build/test_ai_exec
	./build/test_ai_exec

ai-exec-data: build/test_ai_exec
	./build/test_ai_exec --ram $(RAMDIR) --dcdata $(DCDATA)

ai-exec-oracle: build/test_ai_exec_oracle
	./build/test_ai_exec_oracle --ram $(RAMDIR) --dcdata $(DCDATA)

.PHONY: ai-exec ai-exec-data ai-exec-oracle
