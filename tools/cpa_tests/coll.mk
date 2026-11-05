# Collision decoder test (src/cpa/cpa_coll). Standalone fragment, run from tools/cpa_tests:
#   make -f coll.mk coll-test DCDATA=/path/to/assets/dc/DCDATA        parses all level DATs, probes the Learn_10 spawn, cross-checks guest RAM dumps in build/
CC      ?= cc
CFLAGS  ?= -std=gnu99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
DCDATA  ?= $(ASSETS)/DCDATA
RAMDIR  ?= build
COLLSRC  = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_coll.c

build/test_coll: test_coll.c $(COLLSRC) ../../src/cpa/cpa_coll.h ../../src/cpa/cpa_image.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_coll.c $(COLLSRC) -lm

coll-test: build/test_coll
	./build/test_coll $(DCDATA) $(RAMDIR)

.PHONY: coll-test
