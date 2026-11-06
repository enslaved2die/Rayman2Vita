# Per-vertex colour / lighting checks. Standalone fragment, run from tools/cpa_tests:
#   make -f light.mk test-light                                  : asset-free unit tests of cpa_light (formulas, RLI reader, fade, light accumulation)
#   make -f light.mk light-static ASSETS=/path/to/assets/dc      : oracle comparison of the static-geometry vertex colours on the captures in build/ta2_<LEVEL>/ (no oracle run)
#   make -f light.mk light-actor  ASSETS=/path/to/assets/dc      : oracle comparison of posed-actor vertex colours (parallel + ambient lights from the guest light list)
# cpa_light.c is compiled into cpa_scene.c (see the comment there); it is not listed separately.
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c ../../src/cpa/cpa_anim.c
HDR      = $(wildcard ../../src/cpa/*.h)
LEVELS  ?= Learn_10 Jail_10 Bast_10 Helic_30 Rodeo_60 Nave_20 Whale_10

build/test_light: test_light.c $(SRC) $(HDR)
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_light.c $(SRC) -lm
test-light: build/test_light
	./build/test_light

build/lightcmp_static: lightcmp_static.c $(SRC) $(HDR)
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ lightcmp_static.c $(SRC) -lm
light-static: build/lightcmp_static
	@for L in $(LEVELS); do ./build/lightcmp_static build/ta2_$$L $(ASSETS)/DCDATA --level $$L; done

build/lightcmp_actor: lightcmp_actor.c $(SRC) $(HDR)
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ lightcmp_actor.c $(SRC) -lm
light-actor: build/lightcmp_actor
	@for L in $(LEVELS); do ./build/lightcmp_actor build/ta2_$$L $(ASSETS)/DCDATA --level $$L --all --check; done

.PHONY: test-light light-static light-actor
