# N6 save-format tooling. Standalone fragment (run from anywhere): make -f tools/cpa_tests/save.mk <target> [ASSETS=/path/to/assets/dc]
#   save-test    portable tests, embedded real files (no assets needed)
#   save-dir     DIR=<dir>: parse + byte-identical rebuild of RAYMAN_2.{AAA,SY_,NW_,BBB} in DIR (e.g. the output of tools/vmu_tool.py import)
#   save-oracle  kind F both directions with the recompiled game (needs `make -C tools/sh4recomp hle`):
#                game writes (poked variables) -> native parses; native writes (other pattern) -> game loads
HERE    := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
ROOT    := $(abspath $(HERE)/../..)
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= /Users/joshua/Documents/Repos/Rayman2Vita/assets/dc
SH4      = $(ROOT)/tools/sh4recomp
HLEOBJ   = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
B        = $(HERE)build
SRC      = $(ROOT)/src/cpa/cpa_save.c
T        = $(HERE)test_cpa_save.c

$(B)/test_cpa_save: $(T) $(SRC) $(ROOT)/src/cpa/cpa_save.h
	@mkdir -p $(B)
	$(CC) $(CFLAGS) -o $@ $(T) $(SRC)

save-test: $(B)/test_cpa_save
	$(B)/test_cpa_save

save-dir: $(B)/test_cpa_save
	$(B)/test_cpa_save --dir $(DIR)

$(B)/test_cpa_save_oracle: $(T) $(SRC) $(SH4)/build_hle/run_game
	@mkdir -p $(B)
	$(CC) -O1 -std=gnu11 -DCPA_SAVE_ORACLE -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c $(T) -o $(B)/test_cpa_save_oracle.o
	$(CC) -O1 -std=gnu11 -c $(SRC) -o $(B)/cpa_save_o.o
	$(CC) -o $@ $(B)/test_cpa_save_oracle.o $(B)/cpa_save_o.o $(HLEOBJ) -lm

$(SH4)/build_hle/run_game:
	$(MAKE) -C $(SH4) hle

save-oracle: $(B)/test_cpa_save_oracle $(B)/test_cpa_save
	@rm -rf $(B)/sv_w $(B)/sv_r; mkdir -p $(B)/sv_w $(B)/sv_r
	R2_SAVE_DIR=$(B)/sv_w $(B)/test_cpa_save_oracle --oracle save $(ASSETS) 0
	$(B)/test_cpa_save --dir $(B)/sv_w
	$(B)/test_cpa_save --emit $(B)/sv_w/RAYMAN_2.AAA $(B)/sv_r/RAYMAN_2.AAA 5
	R2_SAVE_DIR=$(B)/sv_r $(B)/test_cpa_save_oracle --oracle load $(ASSETS) 5

.PHONY: save-test save-dir save-oracle
