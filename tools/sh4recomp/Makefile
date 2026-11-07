# Host build of the recompiled executable (syntax/type check + test harnesses)
CC ?= cc
CFLAGS ?= -O1 -std=gnu11 -Wall -Wno-unused-label -Wno-unused-variable -frounding-math -I. -Igen
GEN := $(wildcard gen/recomp_*.c)
OBJ := $(GEN:.c=.o)
all: libr2recomp.a
gen/%.o: gen/%.c runtime.h gen/recomp_decls.h
	$(CC) $(CFLAGS) -c $< -o $@
runtime.o: runtime.c runtime.h
	$(CC) $(CFLAGS) -c $< -o $@
libr2recomp.a: $(OBJ) runtime.o
	ar rcs $@ $^
clean:
	rm -f gen/*.o runtime.o libr2recomp.a

# ---------------- HLE host harness (hle/*.c + run_game) ----------------
# `make hle -j` builds build_hle/run_game. Gen TUs are piped through sed (rename hooked defs to orig_f_*, add entry tracing).
# hle/mkstubs.py rewrites build_hle/{rename.sed,hook_stubs.c} only when the hookable set changes.
HLEDIR := build_hle
# generated-C directory for the HLE build: gen_fix = lifter with merge-point-sound const-jsr + extra_seeds.txt (./regen_fix.sh); gen = original
HGEN ?= gen_fix
export HGEN
ifneq ($(filter hle build_hle/run_game,$(MAKECMDGOALS)),)
$(shell python3 hle/mkstubs.py $(HGEN) >/dev/null)
endif
USE_CLEANROOM_AUDIO ?= 0
HLE_EXCLUDE_SND := $(if $(filter 1,$(USE_CLEANROOM_AUDIO)),hle/snd.c,hle/snd_cleanroom.c)
HLE_SRC := $(if $(HLE_MODS),$(addprefix hle/,$(addsuffix .c,$(HLE_MODS))),$(filter-out hle/vita_main.c hle/vita_gl_render.c $(HLE_EXCLUDE_SND),$(wildcard hle/*.c)))   # make hle HLE_MODS="boot run_game io" to pick modules
HLE_OBJ := $(patsubst hle/%.c,$(HLEDIR)/%.o,$(HLE_SRC))
HLE_GEN := $(patsubst $(HGEN)/recomp_%.c,$(HLEDIR)/recomp_%.o,$(wildcard $(HGEN)/recomp_[0-9]*.c))
HLE_CFLAGS := -I$(HGEN) $(CFLAGS) -g -Ihle -I../../src/cpa
$(HLEDIR)/recomp_%.o: $(HGEN)/recomp_%.c runtime.h $(HGEN)/recomp_decls.h hle/enter.h $(HLEDIR)/rename.sed
	sed -E -f $(HLEDIR)/rename.sed $< | $(CC) $(HLE_CFLAGS) -include hle/enter.h -x c - -c -o $@
$(HLEDIR)/recomp_functab.o: $(HGEN)/recomp_functab.c runtime.h $(HGEN)/recomp_decls.h
	$(CC) $(HLE_CFLAGS) -c $< -o $@
$(HLEDIR)/runtime.o: runtime.c runtime.h
	$(CC) $(HLE_CFLAGS) -Dsh4_pref=sh4_pref_default -c $< -o $@
$(HLEDIR)/hook_stubs.o: $(HLEDIR)/hook_stubs.c hle/hle.h hle/hle_priv.h
	$(CC) $(HLE_CFLAGS) -c $< -o $@
$(HLEDIR)/%.o: hle/%.c hle/hle.h hle/hle_priv.h runtime.h
	$(CC) $(HLE_CFLAGS) -c $< -o $@
.PHONY: hle hle_clean
hle:
	$(MAKE) $(HLEDIR)/run_game
$(HLEDIR)/run_game: $(HLE_OBJ) $(HLE_GEN) $(HLEDIR)/recomp_functab.o $(HLEDIR)/runtime.o $(HLEDIR)/hook_stubs.o
	$(CC) -o $@ $^ -lm
hle_clean:
	rm -rf $(HLEDIR)
