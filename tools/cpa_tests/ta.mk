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

LEVELS ?= Learn_10 Jail_10 Bast_10 Helic_30 Rodeo_60 Nave_20 Whale_10
REL    ?= 300,500,800,1100,1400,1700
NSCN   ?= 2
# ta-summary: capture REL-offset windows (guest frames after the level name is current) of every level in LEVELS with the stick script (--walk), compare all scenes, print totals.
ta-summary: build/ta_capture build/ta_compare
	REL=$(REL) N=$(NSCN) WALK=1 ./ta_levels.sh $(ASSETS) "$(LEVELS)" | tee build/ta_summary.txt
	@awk '/^LEVEL/ { for (i=1;i<=NF;i++) { if ($$i=="static") s+=$$(i+1); if ($$i=="matched") m+=$$(i+1); if ($$i=="clipfrag") f+=$$(i+1); if ($$i=="mismatch") x+=$$(i+1); if ($$i=="coplanar-ambiguous") u+=$$(i+1) } } END { printf "AGGREGATE (all levels) static %d matched %d clipfrag %d mismatch %d coplanar-ambiguous %d strict %.2f%% clipaware %.2f%% pessimistic %.2f%%\n", s, m, f, x, u, 100*m/s, 100*(m+f)/s, 100*(m+f)/(s+u) }' build/ta_summary.txt

.PHONY: ta-capture ta-compare ta-summary
