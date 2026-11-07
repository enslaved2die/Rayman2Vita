/* swflag.h - run-time A/B switches.  Vita: an empty file ux0:data/rayman2/<NAME> turns the switch on; host: environment variable R2_<NAME>. */
#ifndef R2_SWFLAG_H
#define R2_SWFLAG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
static inline int hle_switch(const char *name)
{
#if defined(__vita__)
    char p[160]; snprintf(p, sizeof p, "ux0:data/rayman2/%s", name);
    FILE *f = fopen(p, "rb"); if (f) { fclose(f); return 1; }
    f = fopen("ux0:data/rayman2/config.ini", "r");
    if (f) {
        char line[128];
        size_t nlen = strlen(name);
        while (fgets(line, sizeof(line), f)) {
            char *s = line;
            while (*s == ' ' || *s == '\t') s++;
            if (strncasecmp(s, name, nlen) == 0) {
                s += nlen;
                while (*s == ' ' || *s == '\t') s++;
                if (*s == '=') {
                    s++;
                    while (*s == ' ' || *s == '\t') s++;
                    if (*s == '1' || *s == 'y' || *s == 'Y' || *s == 't' || *s == 'T') {
                        fclose(f);
                        return 1;
                    }
                }
            }
        }
        fclose(f);
    }
    return 0;
#else
    char e[96]; snprintf(e, sizeof e, "R2_%s", name);
    return getenv(e) != NULL;
#endif
}
#endif
