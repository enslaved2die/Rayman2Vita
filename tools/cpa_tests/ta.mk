# Kind-C (screen-space TA stream) tooling. Standalone fragment: `make -f ta.mk <target> ASSETS=/path/to/assets/dc`
#   ta-capture  : run the oracle through new game -> LEVEL, capture NCAP TA scenes + guest RAM into build/ta_<LEVEL>/
#   ta-compare  : compare native projected draw list against the captured scene (needs ta-capture)
# Needs tools/sh4recomp/build_hle objects (make -C ../sh4recomp hle).
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SH4      = ../sh4recomp
HLEOBJ   = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c
LEVEL   ?= Learn_10
AT      ?= 1500
NCAP    ?= 3
TAOUT   ?= build/ta_$(LEVEL)

build/ta_capture: ta_capture.c $(SH4)/build_hle/run_game
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c ta_capture.c -o build/ta_capture.o
	$(CC) -o $@ build/ta_capture.o $(HLEOBJ) -lm

$(SH4)/build_hle/run_game:
	$(MAKE) -C $(SH4) hle

build/ta_compare: ta_compare.c $(SRC) ../../src/cpa/cpa_image.h ../../src/cpa/cpa_scene.h
	@mkdir -p build
	$(CC) $(CFLAGS) -I../sh4recomp/hle -o $@ ta_compare.c $(SRC) -lm

ta-capture: build/ta_capture
	R2_SAVE_DIR=$$(mktemp -d) ./build/ta_capture --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --out $(TAOUT) --level $(LEVEL) --at $(AT) --n $(NCAP)

ta-compare: build/ta_compare
	./build/ta_compare $(TAOUT) $(ASSETS)/DCDATA --level $(LEVEL) $(TAARGS)

.PHONY: ta-capture ta-compare
