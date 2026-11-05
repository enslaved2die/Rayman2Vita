# Kind-C (screen-space TA stream) tooling. Standalone fragment: `make -f ta.mk <target> ASSETS=/path/to/assets/dc`
#   ta-capture  : run the oracle through new game -> LEVEL, capture NCAP TA scenes + guest RAM into build/ta_<LEVEL>/
#   ta-compare  : compare native projected draw list against the captured scene (needs ta-capture)
# Needs tools/sh4recomp/build_hle objects (make -C ../sh4recomp hle).
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SH4      = ../sh4recomp
HLEOBJ   = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c ../../src/cpa/cpa_anim.c ../../src/cpa/cpa_vis.c
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

build/ta_compare: ta_compare.c $(SRC) ../../src/cpa/cpa_image.h ../../src/cpa/cpa_scene.h ../../src/cpa/cpa_vis.h
	@mkdir -p build
	$(CC) $(CFLAGS) -I../sh4recomp/hle -o $@ ta_compare.c $(SRC) -lm

ta-capture: build/ta_capture
	R2_SAVE_DIR=$$(mktemp -d) ./build/ta_capture --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --out $(TAOUT) --level $(LEVEL) --at $(AT) --n $(NCAP)

ta-compare: build/ta_compare
	./build/ta_compare $(TAOUT) $(ASSETS)/DCDATA --level $(LEVEL) $(TAARGS)

LEVELS ?= Learn_10 Jail_10 Bast_10 Helic_30 Rodeo_60 Nave_20 Whale_10
REL    ?= 300,500,800,1100,1400,1700
NSCN   ?= 2
define AGGAWK
/^LEVEL/ { for (i=1;i<=NF;i++) { if ($$i=="static") s+=$$(i+1); if ($$i=="matched") m+=$$(i+1); if ($$i=="clipfrag") f+=$$(i+1); if ($$i=="mismatch") x+=$$(i+1); if ($$i=="coplanar-ambiguous") u+=$$(i+1); if ($$i=="non-level") ue+=$$(i+1); if ($$i=="redraw") rd+=$$(i+1); if ($$i=="tris" && $$(i-1)=="static-texture") tb+=$$(i+1); if ($$i=="unexplained") tu+=$$(i+1); if ($$i=="triangle:") ta+=$$(i+1); if ($$i=="twin") tw+=$$(i+1); if ($$i=="backface-opaque") bo+=$$(i+1); if ($$i=="degenerate") dg+=$$(i+1); if ($$i=="backface-nonopaque") bn+=$$(i+1); if ($$i=="front-in-drawn-ipo") fd+=$$(i+1); if ($$i=="front-in-undrawn-ipo-or-sector") fu+=$$(i+1); if ($$i=="l2expl") l2e+=$$(i+1); if ($$i=="l2unpred") l2u+=$$(i+1); if ($$i=="l2both") l2b+=$$(i+1); if ($$i=="l2only8") l2o8+=$$(i+1); if ($$i=="l2only1") l2o1+=$$(i+1); if ($$i=="l2mode0multi") l2m+=$$(i+1); if ($$i=="l2fragdis") l2f+=$$(i+1); if ($$i=="sprN") sn+=$$(i+1); if ($$i=="sprFront") sf+=$$(i+1); if ($$i=="sprAttr") sa+=$$(i+1); if ($$i=="vis_front") vf+=$$(i+1); if ($$i=="vis_front_culled") vfc+=$$(i+1); if ($$i=="vis_front_partial") vfp+=$$(i+1); if ($$i=="vis_front_undrawnipo") vfu+=$$(i+1); if ($$i=="vis_front_unowned") vfo+=$$(i+1); if ($$i=="vis_old") vo+=$$(i+1); if ($$i=="vis_old_agree") voa+=$$(i+1); if ($$i=="vis_old_disagree") vod+=$$(i+1); if ($$i=="vis_old_unowned") voo+=$$(i+1); if ($$i=="vis_drawn_owned") vdo+=$$(i+1); if ($$i=="vis_drawn_pred") vdp+=$$(i+1); if ($$i=="vis_drawn_miss") vdm+=$$(i+1); if ($$i=="vis_drawn_unowned") vdu+=$$(i+1); if ($$i=="vis_poolculled") vpc+=$$(i+1); if ($$i=="vis_ipo_submitted_undrawn") vsu+=$$(i+1) } } END { printf "AGGREGATE (all levels) static %d matched %d clipfrag %d mismatch %d coplanar-ambiguous %d (explained as non-level %d) redraw %d\n  oracle-side: strict %.2f%% clipaware %.2f%% pessimistic %.2f%% (unexplained ambiguous in denominator)\n  texture-proven: static-texture tris %d unexplained %d (UV-identical only to an actor-pile triangle %d) => %.2f%% explained, %.2f%% if actor-UV triangles are removed from the set\n  native-side undrawn fully-on-screen: twin %d backface-opaque %d degenerate %d backface-nonopaque %d front-in-drawn-ipo %d front-in-undrawn-ipo-or-sector %d\n  layer 2 (native overlayMode): re-draws explained by native data %d, not predicted %d | overlayMode!=0 polygons drawn with both UV x1 and layer-2 UV %d, only layer 2 %d, only x1 %d | overlayMode 0 polygons drawn more than once %d | clip-fragment layer verdict native vs oracle-tcw disagreements %d\n  sprites (element type 3): instances %d, in front of near plane %d, attributed to an oracle quad %d\n", s, m, f, x, u, ue, rd, 100*m/s, 100*(m+f)/s, 100*(m+f)/(s+u-ue), tb, tu, ta, 100*(tb-tu)/tb, 100*(tb-tu)/(tb-ta), tw, bo, dg, bn, fd, fu, l2e, l2u, l2b, l2o8, l2o1, l2m, l2f, sn, sf, sa ; printf "  native visibility prediction (cpa_vis): front-facing on-screen undrawn native tris %d = predicted not submitted (explained by native prediction) %d + predicted submitted in a partially drawn IPO %d + predicted submitted in a wholly undrawn IPO %d (%d IPO-scene instances) + no owner %d | oracle-side class front-in-undrawn-ipo-or-sector %d: predicted not submitted %d, predicted submitted %d, no owner %d | oracle-DRAWN native tris: owned %d, in predicted set %d, NOT in predicted set %d, no owner %d | native triangles removed from the match pool by --vis-cull %d\n", vf, vfc, vfp, vfu, vsu, vfo, vo, voa, vod, voo, vdo, vdp, vdm, vdu, vpc }
endef
export AGGAWK

# ta-summary: capture REL-offset windows (guest frames after the level name is current) of every level in LEVELS with the stick script (--walk), compare all scenes, print totals.
ta-summary: build/ta_capture build/ta_compare
	REL=$(REL) N=$(NSCN) WALK=1 ./ta_levels.sh $(ASSETS) "$(LEVELS)" | tee build/ta_summary.txt
	@awk "$$AGGAWK" build/ta_summary.txt

# ta-eval: compare the captures already in build/ta2_<LEVEL>/ (no oracle run; deterministic). TAARGS e.g. --vis-cull (match oracle triangles only against native triangles of IPOs cpa_vis predicts as submitted).
ta-eval: build/ta_compare
	@: > build/ta_eval.txt; for L in $(LEVELS); do ./build/ta_compare build/ta2_$$L $(ASSETS)/DCDATA --level $$L --all $(TAARGS) | grep -E '^(SCENE|LEVEL)' >> build/ta_eval.txt; done
	@awk "$$AGGAWK" build/ta_eval.txt

.PHONY: ta-capture ta-compare ta-summary ta-eval
