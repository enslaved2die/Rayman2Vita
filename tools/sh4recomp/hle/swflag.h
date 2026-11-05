/* swflag.h - run-time A/B switches.  Vita: an empty file ux0:data/rayman2/<NAME> turns the switch on; host: environment variable R2_<NAME>. */
#ifndef R2_SWFLAG_H
#define R2_SWFLAG_H
#include <stdio.h>
#include <stdlib.h>
static inline int hle_switch(const char *name)
{
#if defined(__vita__)
    char p[160]; snprintf(p, sizeof p, "ux0:data/rayman2/%s", name);
    FILE *f = fopen(p, "rb"); if (f) { fclose(f); return 1; }
    return 0;
#else
    char e[96]; snprintf(e, sizeof e, "R2_%s", name);
    return getenv(e) != NULL;
#endif
}
#endif
