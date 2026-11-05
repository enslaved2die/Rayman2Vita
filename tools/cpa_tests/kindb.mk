# Kind-B (per-frame state dump diff) for N2 actor poses. Standalone fragment: make -f kindb.mk kindb-all ASSETS=/path/to/assets/dc
# Needs tools/sh4recomp/build_hle objects (does not rebuild them). Outputs only under build/kindb_* (OUT=build/kindb_out by default).
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SH4      = ../sh4recomp
HLEOBJ   = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
CPA      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_anim.c
REL     ?= 1200
COUNT   ?= 1500
LEVELS  ?= Learn_10 Jail_10
OUT     ?= build/kindb_out4

build/kindb_capture: kindb_capture.c kindb_rec.h $(CPA) ../../src/cpa/cpa_anim.h
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c kindb_capture.c -o build/kindb_capture.o
	$(CC) -O1 -std=gnu11 -c ../../src/cpa/cpa_image.c -o build/kindb_cpa_image.o
	$(CC) -O1 -std=gnu11 -c ../../src/cpa/cpa_anim.c -o build/kindb_cpa_anim.o
	$(CC) -o $@ build/kindb_capture.o build/kindb_cpa_image.o build/kindb_cpa_anim.o $(HLEOBJ) -lm

build/kindb_cmp: kindb_cmp.c kindb_rec.h $(CPA) ../../src/cpa/cpa_anim.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ kindb_cmp.c $(CPA) -lm

kindb-capture: build/kindb_capture
	@mkdir -p $(OUT); for L in $(LEVELS); do U=$$(echo $$L | tr a-z A-Z); sv=build/kindb_sv_$$L; mkdir -p $$sv; \
	  R2_SAVE_DIR=$$sv ./build/kindb_capture --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --leveldat $(ASSETS)/DCDATA/$$U/$$U.DAT --level $$L --rel $(REL) --count $(COUNT) --out $(OUT)/kindb_$$L.bin > $(OUT)/kindb_$$L.log 2>&1; \
	  echo "$$L capture rc=$$?"; tail -2 $(OUT)/kindb_$$L.log; done

kindb-cmp: build/kindb_cmp
	@for L in $(LEVELS); do U=$$(echo $$L | tr a-z A-Z); ./build/kindb_cmp $(OUT)/kindb_$$L.bin $(ASSETS)/DCDATA/$$U/$$U.DAT $(ASSETS)/DCDATA/FIX.DAT $(CMPARGS); done

kindb-all: kindb-capture kindb-cmp
.PHONY: kindb-capture kindb-cmp kindb-all
