/* kindb record layout shared by kindb_capture.c and kindb_cmp.c (see kindb_capture.c header). */
#ifndef KINDB_REC_H
#define KINDB_REC_H
#include <stdint.h>
typedef struct { uint32_t so, animRef, animIdx, frame, nCh, nChanList, haveG; float G[16]; } KbAct;
typedef struct { uint16_t obj; uint8_t slot, lock; int16_t parent; uint8_t stale, hasInner; float L[16], G[16], Gi[16]; } KbCh;
#endif
