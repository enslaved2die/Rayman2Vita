# Kind-C for posed actors. Standalone: make -f taa.mk taa-run ASSETS=/path/to/assets/dc
CC ?= cc
CFLAGS ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS ?= $(abspath ../../assets/dc)
SRC = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c ../../src/cpa/cpa_anim.c
LEVELS ?= Learn_10 Jail_10 Bast_10 Helic_30 Rodeo_60 Nave_20 Whale_10
build/taa_ta_actor: ta_actor.c $(SRC) ../../src/cpa/cpa_scene.h ../../src/cpa/cpa_anim.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ ta_actor.c $(SRC) -lm
taa-run: build/taa_ta_actor
	@for l in $(LEVELS); do ./build/taa_ta_actor build/ta2_$$l $(ASSETS)/DCDATA --level $$l --all | grep -E '^(LEVEL|  residual)'; done
.PHONY: taa-run
