# cpa_camera / cpa_drawlist host tests. Standalone fragment: `make -f cam.mk cam-test ASSETS=/path/to/assets/dc`
# The oracle part needs build/ta_Learn_10 (make -f ta.mk ta-capture ASSETS=...); without it those checks are reported SKIP.
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c ../../src/cpa/cpa_anim.c ../../src/cpa/cpa_camera.c ../../src/cpa/cpa_drawlist.c
HDR      = $(wildcard ../../src/cpa/*.h)

build/test_camera: test_camera.c $(SRC) $(HDR)
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_camera.c $(SRC) -lm

cam-test: build/test_camera
	./build/test_camera $(ASSETS)/DCDATA build/ta_Learn_10

.PHONY: cam-test
