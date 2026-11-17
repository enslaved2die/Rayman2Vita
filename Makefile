# ==============================================================================
# Rayman 2: The Great Escape — PS Vita Port (CPA Engine Baseline)
# Makefile for VitaELF, VELF, and eboot.bin Generation
# ==============================================================================

# VitaSDK Toolchain Path
VITASDK ?= $(abspath .vitasdk)

CC              := $(VITASDK)/bin/arm-vita-eabi-gcc
CXX             := $(VITASDK)/bin/arm-vita-eabi-g++
VITA_ELF_CREATE := $(VITASDK)/bin/vita-elf-create
VITA_MAKE_FSELF := $(VITASDK)/bin/vita-make-fself
VITA_MKSFOEX    := $(VITASDK)/bin/vita-mksfoex
VITA_PACK_VPK   := $(VITASDK)/bin/vita-pack-vpk

TARGET          := rayman2
TITLE_ID        := RAYM00002
APP_TITLE       := "Rayman 2: The Great Escape"
APP_VER         := 01.00

BUILD_DIR       := build
SRC_DIR         := src

# Compilation and Preprocessor Flags per Plan.md specifications
CFLAGS          := -O2 -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=hard \
                   -fno-strict-aliasing \
                   -DCPA_PLATFORM_VITA -DMTH_USE_FLOAT -DR2_DREAMCAST_BASELINE \
                   -Wall -Wextra -Wno-unused-parameter \
                   -Iinclude -Iinclude/vita_shim -Isrc/engine -Isrc/platform/vita

LDFLAGS         := -Wl,-q \
                   -L$(VITASDK)/arm-vita-eabi/lib

LIBS            := -lvitaGL \
                   -lvitashark \
                   -lSceShaccCgExt \
                   -lSceShaccCg_stub \
                   -ltaihen_stub \
                   -lSceGxm_stub \
                   -lSceDisplay_stub \
                   -lSceCtrl_stub \
                   -lSceKernelDmacMgr_stub \
                   -lSceCommonDialog_stub \
                   -lSceAppMgr_stub \
                   -lSceLibKernel_stub \
                   -lSceKernelThreadMgr_stub \
                   -lSceIofilemgr_stub \
                   -lSceAudio_stub \
                   -lmathneon \
                   -lstdc++ \
                   -lm

NO_SPLASHSCREEN ?= 1
ifeq ($(NO_SPLASHSCREEN),1)
CFLAGS          += -DNO_SPLASHSCREEN=1
SOURCES         += $(SRC_DIR)/platform/vita/vitagl_nosplash.c
OBJECTS         += $(BUILD_DIR)/vitagl_nosplash.o
endif

# Source Files
SOURCES         := $(SRC_DIR)/main.c \
                   $(SRC_DIR)/engine/cpa_engine.c \
                   $(SRC_DIR)/engine/r2_level_geo.c \
                   $(SRC_DIR)/platform/vita/gli_vitagl.c \
                   $(SRC_DIR)/platform/vita/gli_pvr.c \
                   $(SRC_DIR)/platform/vita/os_vita.c \
                   $(SRC_DIR)/platform/vita/vfs_vita.c \
                   $(SRC_DIR)/platform/vita/ino_vita.c \
                   $(SRC_DIR)/platform/vita/r2_ai_tables.c \
                   $(SRC_DIR)/platform/vita/snd_vita.c \
                   $(SRC_DIR)/platform/vita/save_vita.c \
                   $(SRC_DIR)/cpa/cpa_hd_tex.c \
                   $(SRC_DIR)/cpa/cpa_hd_manifest.c \
                   $(SRC_DIR)/cpa/cpa_hd_pak.c \
                   $(SRC_DIR)/cpa/cpa_hd_stage.c

OBJECTS         := $(BUILD_DIR)/main.o \
                   $(BUILD_DIR)/cpa_engine.o \
                   $(BUILD_DIR)/r2_level_geo.o \
                   $(BUILD_DIR)/gli_vitagl.o \
                   $(BUILD_DIR)/gli_pvr.o \
                   $(BUILD_DIR)/os_vita.o \
                   $(BUILD_DIR)/vfs_vita.o \
                   $(BUILD_DIR)/ino_vita.o \
                   $(BUILD_DIR)/r2_ai_tables.o \
                   $(BUILD_DIR)/snd_vita.o \
                   $(BUILD_DIR)/save_vita.o \
                   $(BUILD_DIR)/cpa_hd_tex.o \
                   $(BUILD_DIR)/cpa_hd_manifest.o \
                   $(BUILD_DIR)/cpa_hd_pak.o \
                   $(BUILD_DIR)/cpa_hd_stage.o

ELF             := $(BUILD_DIR)/$(TARGET).elf
VELF            := $(BUILD_DIR)/$(TARGET).velf
EBOOT           := $(BUILD_DIR)/eboot.bin
VPK             := $(BUILD_DIR)/Rayman2.vpk

PARAM_SFO       := sce_sys/param.sfo
ICON0           := sce_sys/icon0.png
LIVEAREA_BG     := sce_sys/livearea/contents/bg.png
LIVEAREA_START  := sce_sys/livearea/contents/startup.png
LIVEAREA_XML    := sce_sys/livearea/contents/template.xml

.PHONY: all clean elf velf self vpk Rayman2.vpk test_cleanroom_real_calls

# Host tools and verification targets
HOST_CC         ?= clang
HOST_CFLAGS     ?= -O2 -Wall -Wextra \
                   -DCPA_PLATFORM_HOST -DR2_DREAMCAST_BASELINE \
                   -Iinclude -Iinclude/vita_shim -Isrc/engine -Isrc/platform/vita

all: $(VPK)

elf: $(ELF)
velf: $(VELF)
self: $(EBOOT)
vpk: $(VPK)
Rayman2.vpk: $(VPK)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/cpa_engine.o: $(SRC_DIR)/engine/cpa_engine.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/r2_level_geo.o: $(SRC_DIR)/engine/r2_level_geo.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/gli_vitagl.o: $(SRC_DIR)/platform/vita/gli_vitagl.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/gli_pvr.o: $(SRC_DIR)/platform/vita/gli_pvr.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/os_vita.o: $(SRC_DIR)/platform/vita/os_vita.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/vfs_vita.o: $(SRC_DIR)/platform/vita/vfs_vita.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/ino_vita.o: $(SRC_DIR)/platform/vita/ino_vita.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/r2_ai_tables.o: $(SRC_DIR)/platform/vita/r2_ai_tables.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/snd_vita.o: $(SRC_DIR)/platform/vita/snd_vita.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/save_vita.o: $(SRC_DIR)/platform/vita/save_vita.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/vitagl_nosplash.o: $(SRC_DIR)/platform/vita/vitagl_nosplash.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/cpa_hd_tex.o: $(SRC_DIR)/cpa/cpa_hd_tex.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/cpa_hd_manifest.o: $(SRC_DIR)/cpa/cpa_hd_manifest.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/cpa_hd_pak.o: $(SRC_DIR)/cpa/cpa_hd_pak.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/cpa_hd_stage.o: $(SRC_DIR)/cpa/cpa_hd_stage.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(ELF): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ $(LIBS) -o $@

$(VELF): $(ELF)
	$(VITA_ELF_CREATE) $< $@

$(EBOOT): $(VELF)
	$(VITA_MAKE_FSELF) -c -s $< $@

$(PARAM_SFO):
	$(VITA_MKSFOEX) -s TITLE_ID=$(TITLE_ID) -s APP_VER=$(APP_VER) $(APP_TITLE) $@

$(VPK): $(EBOOT) $(PARAM_SFO) $(ICON0) $(LIVEAREA_BG) $(LIVEAREA_START) $(LIVEAREA_XML) | $(BUILD_DIR)
	$(VITA_PACK_VPK) -s $(PARAM_SFO) -b $(EBOOT) \
		-a $(ICON0)=sce_sys/icon0.png \
		-a $(LIVEAREA_BG)=sce_sys/livearea/contents/bg.png \
		-a $(LIVEAREA_START)=sce_sys/livearea/contents/startup.png \
		-a $(LIVEAREA_XML)=sce_sys/livearea/contents/template.xml \
		$@

test_cleanroom_real_calls: tools/test_cleanroom_real_calls.c $(SRC_DIR)/platform/vita/snd_vita.c $(SRC_DIR)/platform/vita/vfs_vita.c $(SRC_DIR)/platform/vita/os_vita.c | $(BUILD_DIR)
	$(HOST_CC) $(HOST_CFLAGS) $^ -lm -o $(BUILD_DIR)/$@
	./$(BUILD_DIR)/$@

clean:
	rm -f $(OBJECTS) $(ELF) $(VELF) $(EBOOT) $(VPK) $(BUILD_DIR)/test_cleanroom_real_calls $(BUILD_DIR)/cleanroom_test.wav
