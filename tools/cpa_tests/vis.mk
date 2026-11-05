# Visibility (sector/IPO culling) tooling. Standalone fragment, run from tools/cpa_tests:
#   make -f vis.mk vis-capture ASSETS=/path/to/assets/dc LEVEL=Learn_10   : oracle run + TA scenes + RAM + draw-submit trace (build/vis_<LEVEL>/)
#   make -f vis.mk vis-summary ASSETS=...                                 : all levels, capture + predictor evaluation (build/vis_summary.txt)
# Needs tools/sh4recomp/build_hle objects (make -C ../sh4recomp hle), like ta.mk.
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SH4      = ../sh4recomp
HLEOBJ   = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c
LEVELS  ?= Learn_10 Jail_10 Bast_10 Helic_30 Rodeo_60 Nave_20 Whale_10
REL     ?= 300,500,800,1100,1400,1700
NSCN    ?= 2
LEVEL   ?= Learn_10

build/vis_capture: vis_capture.c $(SH4)/build_hle/run_game
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c vis_capture.c -o build/vis_capture.o
	$(CC) -o $@ build/vis_capture.o $(HLEOBJ) -lm

$(SH4)/build_hle/run_game:
	$(MAKE) -C $(SH4) hle

build/vis_frustum: vis_frustum.c $(SH4)/build_hle/run_game
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c vis_frustum.c -o build/vis_frustum.o
	$(CC) -o $@ build/vis_frustum.o $(HLEOBJ) -lm

build/vis_predict: vis_predict.c $(SRC) ../../src/cpa/cpa_image.h ../../src/cpa/cpa_scene.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ vis_predict.c $(SRC) -lm

vis-capture: build/vis_capture
	@mkdir -p build/sv_$(LEVEL)
	R2_SAVE_DIR=build/sv_$(LEVEL) ./build/vis_capture --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --out build/vis_$(LEVEL) --level $(LEVEL) --rel $(REL) --walk 1 --n $(NSCN) > build/vis_$(LEVEL).log 2>&1; tail -2 build/vis_$(LEVEL).log

vis-predict: build/vis_predict
	./build/vis_predict build/vis_$(LEVEL) $(ASSETS)/DCDATA --level $(LEVEL) $(VARGS)

vis-summary: build/vis_capture build/vis_predict
	@for L in $(LEVELS); do $(MAKE) -f vis.mk vis-capture LEVEL=$$L ASSETS=$(ASSETS) >/dev/null; ./build/vis_predict build/vis_$$L $(ASSETS)/DCDATA --level $$L $(VARGS); done | tee build/vis_summary.txt

# vis-eval: predictor evaluation on the captures already in build/vis_<LEVEL>/ (no oracle run)
vis-eval: build/vis_predict
	@for L in $(LEVELS); do ./build/vis_predict build/vis_$$L $(ASSETS)/DCDATA --level $$L $(VARGS); done | tee build/vis_eval.txt

.PHONY: vis-capture vis-predict vis-summary vis-eval
