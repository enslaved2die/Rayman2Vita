#include "recomp_decls.h"
void f_8c080050(SH4Ctx *c) {
  R(7)=0x8c0c4698u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(7));
  R(6)=0x8c0c469cu;
  c->t=R(4)==R(5);
  if(!c->t) goto L8c08007c;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08007c;
  R(0)=0x140u;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0800e0;
  R(0)=0x148u;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0800e0;
  R(0)=0x134u;
  R(3)=0x8c0bde9cu;
  R(2)=LD32(R(4)+R(0));
  R(1)=LD32(R(3));
  c->t=R(2)==R(1);
  if(c->t) goto L8c0800e0;
L8c08007c:;
  R(2)=0x8c143ab0u;
  R(0)=R(4);
  ST32(c->gbr+84,R(0));
  R(3)=LD32(R(2));
  fp_ld(c,3,R(3));
  R(3)=0x8c0388f8u;
  fp_st(c,3,R(6));
  { c->pr=0x8c08008eu; ST32(R(7),R(0)); f_8c0388f8(c); }
  R(2)=0x8c0389f8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0389f8(c); return; } }
L8c0800e0:;
  R(2)=0x8c143ab0u;
  fp_ld(c,2,R(6));
  R(4)=LD32(R(2));
  fp_ld(c,3,R(4));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0800f6;
  fp_ld(c,3,R(4));
  R(3)=0x8c0389f8u;
  fp_st(c,3,R(6));
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0389f8(c); return; } }
L8c0800f6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c080120(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff54u;
  R(15)+=R(0);
  R(0)=0x18u;
  ST32(R(15),R(4));
  ST32(R(15)+16,R(5));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,5,R(0)+R(15));
  ST32(R(15)+12,R(6));
  R(0)=LD32(c->gbr+88);
  R(4)=0xa0u;
  R(13)=R(0);
  R(3)=0x8c014eaau;
  R(6)=LD32(R(15));
  R(5)=R(13);
  R(5)+=0x10u;
  { c->pr=0x8c08014cu; R(4)+=R(15); f_8c014eaa(c); }
  R(6)=0xa0u;
  R(7)=R(15);
  R(2)=0x8c07f76cu;
  R(5)=0x1u;
  R(7)+=0x40u;
  R(6)+=R(15);
  { c->pr=0x8c08015cu; R(4)=R(13); f_8c07f76c(c); }
  R(0)=0xa8u;
  R(4)=R(15);
  R(4)+=0x6cu;
  c->fr[15]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  R(14)=R(15);
  R(14)+=0x1cu;
  fp_st(c,4,R(4));
  R(6)=R(15);
  R(4)-=fp_sz(c);fp_st(c,15,R(4));
  R(5)=0x3u;
  R(4)-=fp_sz(c);fp_st(c,15,R(4));
  R(6)+=0x4cu;
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(7)=R(14);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  R(3)=0x8c07f6a0u;
  fp_unary(c,0,3);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,15,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,15,R(4));
  fp_ld(c,3,R(0)+R(15));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  { c->pr=0x8c080194u; R(4)=R(13); f_8c07f6a0(c); }
  R(4)=R(14);
  R(6)=R(14);
  R(5)=R(14);
  R(0)=0x40u;
  R(4)+=0x18u;
  fp_ld(c,7,R(5));
  R(6)+=0xcu;
  fp_ld(c,3,R(4));
  fp_ld(c,4,R(0)+R(15));
  R(13)=R(15);
  fp_ld(c,6,R(6));
  R(13)+=0x70u;
  fp_mov(c,5,7);
  fp_arith(c,0,4,3);
  fp_mov(c,3,6);
  fp_arith(c,0,5,6);
  fp_mov(c,6,7);
  fp_arith(c,1,6,3);
  R(3)=R(13);
  ST32(R(15)+8,R(3));
  fp_mov(c,3,4);
  fp_arith(c,1,3,5);
  fp_st(c,3,R(3));
  R(3)+=0xcu;
  fp_mov(c,3,4);
  fp_arith(c,0,3,6);
  ST32(R(15),R(3));
  fp_st(c,3,R(3));
  R(3)=R(13);
  R(3)+=0x18u;
  fp_mov(c,3,4);
  ST32(R(15)+4,R(3));
  fp_arith(c,0,3,5);
  R(0)=0x4u;
  fp_arith(c,1,4,6);
  R(7)=R(13);
  R(7)+=0x24u;
  fp_st(c,3,R(3));
  fp_st(c,4,R(7));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x44u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,7,R(0)+R(5));
  fp_ld(c,6,R(0)+R(6));
  fp_arith(c,0,4,3);
  fp_mov(c,5,7);
  R(0)=0x4u;
  fp_mov(c,3,6);
  fp_arith(c,0,5,6);
  fp_mov(c,6,7);
  fp_arith(c,1,6,3);
  fp_mov(c,3,4);
  R(3)=LD32(R(15)+8);
  fp_arith(c,1,3,5);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_mov(c,3,4);
  fp_arith(c,0,3,6);
  R(3)=LD32(R(15));
  fp_st(c,3,R(0)+R(3));
  fp_mov(c,3,4);
  fp_arith(c,0,3,5);
  R(3)=LD32(R(15)+4);
  R(0)=0x4u;
  fp_arith(c,1,4,6);
  fp_st(c,3,R(0)+R(3));
  R(4)=0x1u;
  c->fr[2]=0x00000000u;
  R(3)=0x8c0bdea1u;
  fp_st(c,4,R(0)+R(7));
  ST8(R(3),R(4));
  R(2)=LD32(R(15)+12);
  c->fpul=R(2);
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c080260; }
  R(0)=0x8c080258u;
  fp_mov(c,3,4);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,3,1); goto L8c080262; }
L8c080260:;
  fp_mov(c,3,4);
L8c080262:;
  R(3)=0x8c0bdea2u;
  R(14)=0x0u;
  R(1)=0x8c0bdea0u;
  R(2)=0x8c11eea8u;
  fp_st(c,3,R(2));
  ST8(R(3),R(4));
  ST8(R(1),R(14));
  { c->pr=0x8c080274u; R(4)=LD32(R(15)+16); f_8c080050(c); }
  R(0)=0x48u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c080292;
  R(0)=0x8c0802d0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,4,2);
  if(c->t) goto L8c080292;
  R(0)=0x48u;
  R(3)=0x8c07a340u;
  fp_ld(c,4,R(0)+R(15));
  R(5)=0x1u;
  { c->pr=0x8c080292u; R(4)=R(13); f_8c07a340(c); }
L8c080292:;
  R(1)=0x8c0bdea0u;
  R(3)=0x8c0bdea2u;
  R(2)=0x8c0bdea1u;
  ST8(R(2),R(14));
  ST8(R(3),R(14));
  R(0)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0xacu;
  R(0)=R(0)&0xFF;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0802e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  ST32(R(15),R(5));
  R(5)=R(4);
  R(5)+=0x4u;
  R(14)=R(15);
  R(14)+=0x8u;
  ST32(R(15)+4,R(6));
  fp_ld(c,3,R(4));
  R(6)=R(4);
  R(0)=LD32(c->gbr+88);
  R(7)=R(14);
  fp_arith(c,1,3,4);
  R(6)+=0x8u;
  R(13)=R(0);
  R(0)=0x4u;
  fp_st(c,3,R(7));
  fp_ld(c,2,R(5));
  fp_arith(c,1,2,5);
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(6));
  fp_st(c,3,R(0)+R(7));
  R(7)+=0xcu;
  fp_ld(c,3,R(4));
  R(0)=0x4u;
  fp_arith(c,0,3,4);
  fp_st(c,3,R(7));
  fp_ld(c,2,R(5));
  fp_arith(c,1,2,5);
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(6));
  fp_st(c,3,R(0)+R(7));
  fp_ld(c,3,R(4));
  R(7)=R(14);
  R(7)+=0x18u;
  R(3)=0x8c07ca40u;
  fp_arith(c,0,3,4);
  R(0)=0x4u;
  fp_st(c,3,R(7));
  fp_ld(c,2,R(5));
  fp_arith(c,0,2,5);
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(6));
  fp_st(c,3,R(0)+R(7));
  R(7)=R(14);
  fp_ld(c,3,R(4));
  R(7)+=0x24u;
  R(0)=0x4u;
  fp_arith(c,1,3,4);
  fp_st(c,3,R(7));
  fp_ld(c,2,R(5));
  R(5)=R(14);
  fp_arith(c,0,2,5);
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(6));
  fp_st(c,3,R(0)+R(7));
  R(7)=R(13);
  R(0)=LD32(c->gbr+44);
  R(7)+=0x10u;
  R(6)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c080368u; R(4)=0x4u; sh4_call(c,tg); }
  R(0)=LD32(c->gbr+48);
  R(5)=0x4u;
  R(3)=0x8c07f76cu;
  R(7)=R(0);
  R(0)=LD32(c->gbr+44);
  R(6)=R(0);
  { c->pr=0x8c080378u; R(4)=R(13); f_8c07f76c(c); }
  c->fr[2]=0x00000000u;
  R(4)=0x1u;
  R(2)=0x8c0bdea1u;
  ST8(R(2),R(4));
  R(3)=LD32(R(15)+4);
  c->fpul=R(3);
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c080396; }
  R(0)=0x8c0803ecu;
  fp_mov(c,3,4);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,3,1); goto L8c080398; }
L8c080396:;
  fp_mov(c,3,4);
L8c080398:;
  R(3)=0x8c0bdea2u;
  R(14)=0x0u;
  R(1)=0x8c0bdea0u;
  R(2)=0x8c11eea8u;
  fp_st(c,3,R(2));
  ST8(R(3),R(4));
  ST8(R(1),R(14));
  { c->pr=0x8c0803aau; R(4)=LD32(R(15)); f_8c080050(c); }
  R(3)=0x8c07a660u;
  { c->pr=0x8c0803b0u;  f_8c07a660(c); }
  R(1)=0x8c0bdea0u;
  R(3)=0x8c0bdea2u;
  R(2)=0x8c0bdea1u;
  ST8(R(2),R(14));
  ST8(R(3),R(14));
  R(0)=(int32_t)(int8_t)LD8(R(1));
  R(0)=R(0)&0xFF;
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c080400(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff68u;
  R(15)+=R(0);
  R(14)=R(15);
  R(14)+=0x5cu;
  fp_ld(c,3,R(4));
  R(3)=R(4);
  R(12)=R(14);
  R(0)=LD32(c->gbr+88);
  R(3)+=0x4u;
  fp_st(c,3,R(12));
  ST32(R(15)+20,R(3));
  R(13)=R(0);
  fp_ld(c,3,R(3));
  R(3)=R(4);
  R(0)=0x4u;
  R(3)+=0x8u;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8u;
  ST32(R(15)+28,R(3));
  fp_ld(c,3,R(3));
  R(3)=R(5);
  R(3)+=0x4u;
  fp_st(c,3,R(0)+R(12));
  R(12)+=0xcu;
  fp_ld(c,3,R(5));
  R(0)=0x4u;
  fp_st(c,3,R(12));
  ST32(R(15)+24,R(3));
  fp_ld(c,3,R(3));
  R(3)=R(5);
  R(3)+=0x8u;
  fp_st(c,3,R(0)+R(12));
  ST32(R(15),R(3));
  fp_ld(c,3,R(3));
  R(0)=0x8u;
  R(3)=R(6);
  fp_st(c,3,R(0)+R(12));
  R(12)=R(14);
  fp_ld(c,3,R(6));
  R(12)+=0x18u;
  R(3)+=0x4u;
  fp_st(c,3,R(12));
  R(0)=0x4u;
  ST32(R(15)+16,R(3));
  fp_ld(c,3,R(3));
  R(3)=R(6);
  R(3)+=0x8u;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8u;
  ST32(R(15)+4,R(3));
  fp_ld(c,3,R(3));
  R(3)=R(7);
  R(3)+=0x4u;
  fp_st(c,3,R(0)+R(12));
  R(12)=R(14);
  fp_ld(c,3,R(7));
  R(12)+=0x24u;
  R(0)=0x4u;
  fp_st(c,3,R(12));
  ST32(R(15)+12,R(3));
  fp_ld(c,3,R(3));
  R(3)=R(7);
  R(3)+=0x8u;
  fp_st(c,3,R(0)+R(12));
  ST32(R(15)+8,R(3));
  fp_ld(c,3,R(3));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8c080568u;
  fp_ld(c,3,R(5));
  R(12)=R(14);
  fp_ld(c,2,R(4));
  R(12)+=0x30u;
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(6));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(7));
  fp_arith(c,0,2,3);
  fp_arith(c,2,2,4);
  fp_st(c,2,R(12));
  R(3)=LD32(R(15)+20);
  R(2)=LD32(R(15)+24);
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(2));
  R(3)=LD32(R(15)+16);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(3));
  R(3)=LD32(R(15)+12);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(3));
  fp_arith(c,0,2,3);
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(12));
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+28);
  fp_ld(c,3,R(2));
  fp_ld(c,2,R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15)+4);
  R(7)=R(13);
  fp_arith(c,0,2,3);
  R(5)=R(14);
  fp_ld(c,3,R(3));
  R(7)+=0x10u;
  R(3)=LD32(R(15)+8);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(3));
  R(3)=0x8c07ca40u;
  fp_arith(c,0,2,3);
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(12));
  R(0)=LD32(c->gbr+44);
  R(6)=R(0);
  { c->pr=0x8c0804f2u; R(4)=0x5u; f_8c07ca40(c); }
  R(0)=LD32(c->gbr+44);
  R(12)=R(15);
  R(12)+=0x20u;
  R(3)=0x8c07f76cu;
  R(5)=0x5u;
  R(7)=R(12);
  R(6)=R(0);
  { c->pr=0x8c080504u; R(4)=R(13); f_8c07f76c(c); }
  R(2)=0x8c0bdea1u;
  R(13)=0x1u;
  R(1)=0x8c0bdea2u;
  R(14)=0x0u;
  ST8(R(2),R(13));
  R(2)=0x8c0bdea0u;
  R(3)=0x8c11eea8u;
  c->fr[3]=0x3F800000u;
  R(0)=0xa8u;
  fp_st(c,3,R(3));
  ST8(R(1),R(13));
  ST8(R(2),R(14));
  { c->pr=0x8c080520u; R(4)=LD32(R(15)+R(0)); f_8c080050(c); }
  R(0)=0x38u;
  R(2)=0x8c0c8139u;
  R(3)=0x8c07a340u;
  R(5)=R(13);
  ST8(R(2),R(13));
  fp_ld(c,4,R(0)+R(12));
  { c->pr=0x8c080530u; R(4)=R(12); f_8c07a340(c); }
  R(1)=0x8c0bdea2u;
  R(3)=0x8c0bdea1u;
  R(2)=0x8c0c8139u;
  ST8(R(2),R(14));
  ST8(R(3),R(14));
  ST8(R(1),R(14));
  R(1)=0x98u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0805a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff80u;
  R(0)=0x90u;
  R(14)=R(15);
  ST32(R(15)+4,R(5));
  R(14)+=0x44u;
  fp_mov(c,8,4);
  fp_mov(c,6,4);
  fp_mov(c,7,4);
  fp_mov(c,9,5);
  fp_mov(c,4,5);
  ST32(R(15),R(6));
  R(5)=LD32(R(15)+R(0));
  R(0)=LD32(c->gbr+88);
  fp_ld(c,3,R(7));
  R(12)=R(0);
  R(0)=0x4u;
  fp_arith(c,2,8,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8u;
  fp_arith(c,2,6,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x4u;
  R(7)=R(14);
  fp_arith(c,2,7,3);
  fp_ld(c,3,R(5));
  fp_arith(c,2,9,3);
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,2,5,3);
  fp_ld(c,3,R(4));
  fp_arith(c,1,3,8);
  fp_arith(c,0,3,9);
  R(5)=R(4);
  R(5)+=0x4u;
  R(6)=R(4);
  R(6)+=0x8u;
  R(0)=0x4u;
  fp_st(c,3,R(7));
  fp_ld(c,2,R(5));
  fp_arith(c,1,2,6);
  fp_arith(c,0,2,4);
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(6));
  fp_arith(c,1,3,7);
  fp_arith(c,0,3,5);
  fp_st(c,3,R(0)+R(7));
  R(7)+=0xcu;
  fp_ld(c,3,R(4));
  R(0)=0x4u;
  fp_arith(c,0,3,8);
  fp_arith(c,0,3,9);
  fp_st(c,3,R(7));
  fp_ld(c,2,R(5));
  fp_arith(c,0,2,6);
  fp_arith(c,0,2,4);
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(6));
  fp_arith(c,0,3,7);
  fp_arith(c,0,3,5);
  fp_st(c,3,R(0)+R(7));
  R(7)=R(14);
  fp_ld(c,3,R(4));
  R(7)+=0x18u;
  R(0)=0x4u;
  fp_arith(c,0,3,8);
  fp_arith(c,1,3,9);
  fp_st(c,3,R(7));
  fp_ld(c,2,R(5));
  fp_arith(c,0,2,6);
  fp_arith(c,1,2,4);
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(6));
  fp_arith(c,0,3,7);
  fp_arith(c,1,3,5);
  fp_st(c,3,R(0)+R(7));
  R(7)=R(14);
  fp_ld(c,3,R(4));
  R(7)+=0x24u;
  R(0)=0x4u;
  fp_arith(c,1,3,8);
  fp_arith(c,1,3,9);
  fp_st(c,3,R(7));
  fp_ld(c,2,R(5));
  fp_arith(c,1,2,6);
  fp_arith(c,1,2,4);
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(6));
  fp_arith(c,1,3,7);
  fp_arith(c,1,3,5);
  fp_st(c,3,R(0)+R(7));
  R(7)=R(14);
  fp_ld(c,3,R(4));
  R(7)+=0x30u;
  R(0)=0x4u;
  R(3)=0x8c07ca40u;
  fp_st(c,3,R(7));
  fp_ld(c,2,R(5));
  R(5)=R(14);
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(6));
  fp_st(c,3,R(0)+R(7));
  R(7)=R(12);
  R(0)=LD32(c->gbr+44);
  R(7)+=0x10u;
  R(6)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c08068cu; R(4)=0x5u; sh4_call(c,tg); }
  R(0)=LD32(c->gbr+44);
  R(13)=R(15);
  R(13)+=0x8u;
  R(3)=0x8c07f76cu;
  R(5)=0x5u;
  R(7)=R(13);
  R(6)=R(0);
  { c->pr=0x8c08069eu; R(4)=R(12); f_8c07f76c(c); }
  c->fr[2]=0x00000000u;
  R(4)=0x1u;
  R(2)=0x8c0bdea1u;
  ST8(R(2),R(4));
  R(3)=LD32(R(15));
  c->fpul=R(3);
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c0806e0; }
  R(0)=0x8c0806d0u;
  fp_mov(c,3,4);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,3,1); goto L8c0806e2; }
L8c0806e0:;
  fp_mov(c,3,4);
L8c0806e2:;
  R(3)=0x8c0bdea2u;
  R(14)=0x0u;
  R(1)=0x8c0bdea0u;
  R(2)=0x8c11eea8u;
  fp_st(c,3,R(2));
  ST8(R(3),R(4));
  ST8(R(1),R(14));
  { c->pr=0x8c0806f4u; R(4)=LD32(R(15)+4); f_8c080050(c); }
  R(0)=0x38u;
  R(3)=0x8c07a340u;
  fp_ld(c,4,R(0)+R(13));
  R(5)=0x1u;
  { c->pr=0x8c080700u; R(4)=R(13); f_8c07a340(c); }
  R(1)=0x8c0bdea0u;
  R(3)=0x8c0bdea2u;
  R(2)=0x8c0bdea1u;
  ST8(R(2),R(14));
  ST8(R(3),R(14));
  R(0)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0x80u;
  R(0)=R(0)&0xFF;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c080740(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c080758;
  R(3)=0x8c064e90u;
  R(6)=0x2eu;
  R(5)=0x8c0bc970u;
  { c->pr=0x8c080754u; R(4)=0x10u; f_8c064e90(c); }
  {  goto L8c080762; }
L8c080758:;
  R(1)=0x8c0199c4u;
  R(6)=0x2eu;
  R(5)=0x8c0bc970u;
  { c->pr=0x8c080762u; R(4)=0x10u; f_8c0199c4(c); }
L8c080762:;
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c08076e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c08076e:;
  R(5)=0x0u;
  R(0)=R(4);
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c08078e(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c0807c0(SH4Ctx *c) {
  R(3)=0x8c0c512cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0807dc;
  R(3)=0x8c0cf000u;
  { c->pr=0x8c0807d0u;  f_8c0cf000(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0807dc;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0807dc:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0807e4(SH4Ctx *c) {
  R(3)=0x8c0c81bcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c080814;
  R(2)=0x8c0bc984u;
  R(1)=0x39u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x9u;
  R(2)=0xffu;
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0bdf60u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(3)=0x8c012658u;
  { c->pr=0x8c080812u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080814:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0c81bcu;
  R(2)=0x1u;
  { ST32(R(3),R(2)); return; }
}
void f_8c080840(SH4Ctx *c) {
  R(0)=0x8c0c81bcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c080870;
  R(3)=0x8c0bc984u;
  R(1)=0x41u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x9u;
  R(3)=0xffu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0bdf60u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c08086eu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080870:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0c81bcu;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c08087a(SH4Ctx *c) {
  R(1)=0x8c0c81bcu;
  { R(0)=LD32(R(1)); return; }
}
void f_8c080880(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c080886u;  f_8c0807e4(c); }
  R(2)=0x8c0bc980u;
  R(6)=0x6cu;
  R(3)=0x8c0199c4u;
  R(4)=LD32(R(2));
  R(5)=0x8c0bc984u;
  { c->pr=0x8c080894u; R(4)+=0x20u; f_8c0199c4(c); }
  R(2)=0x8c0c81c0u;
  R(4)=0xffffffe0u;
  R(3)=0x8c2de324u;
  R(4)&=R(0);
  R(1)=0x8c0c81c8u;
  R(4)+=0x20u;
  ST32(R(2),R(0));
  R(2)=0x1u;
  ST32(R(3),R(4));
  R(4)=0x0u;
  ST32(R(1),R(2));
  R(3)=0x8c2de34cu;
  R(2)=0x8c2de348u;
  R(1)=0x8c0c81bcu;
  ST32(R(2),R(4));
  ST32(R(3),R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { ST32(R(1),R(4)); return; }
}
void f_8c0808ba(SH4Ctx *c) {
  R(3)=0x8c0c81c8u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==2;
  { R(0)=c->t; return; }
}
void f_8c080920(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c81ccu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c08093c; }
  { c->pr=0x8c080938u;  f_8c080880(c); }
  R(2)=0x8c0c81ccu;
  ST32(R(2),R(13));
L8c08093c:;
  R(5)=LD32(R(12)+4);
  R(2)=0xfffffff5u;
  R(3)=0x7ffu;
  R(4)=LD32(R(12));
  R(5)+=R(3);
  R(1)=0x8c0cefe8u;
  R(5)=sh4_shad(R(5),R(2));
  R(14)=0x8c2ddb04u;
  R(2)=0x96u;
  { c->pr=0x8c080952u; R(4)+=R(2); f_8c0cefe8(c); }
  R(1)=0x830u;
  R(2)=0x8c0bc980u;
  R(1)+=R(14);
  ST32(R(1),R(0));
  R(0)=0x838u;
  R(3)=LD32(R(12)+4);
  ST32(R(14)+R(0),R(3));
  R(0)+=0xfffffffcu;
  ST32(R(14)+R(0),R(13));
  R(0)+=0xfffffff0u;
  R(3)=LD32(R(2));
  ST32(R(14)+R(0),R(3));
  R(0)+=0x8u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0xfffffffcu;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08099e;
  R(3)=0x9du;
  R(7)=0x9u;
  R(2)=0x8c0bc984u;
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  R(1)=0xffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0bdf60u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(3)=0x8c012658u;
  { c->pr=0x8c08099cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c08099e:;
  R(3)=0x8c0c81c8u;
  R(2)=0x3u;
  R(0)=0x8c2ddb04u;
  ST32(R(3),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0809b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=0x828u;
  R(14)=R(4);
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xfffffff8u;
  R(5)=LD32(R(14)+R(0));
  R(6)=LD32(R(15));
  R(5)+=R(3);
  R(3)=0x8c013560u;
  { c->pr=0x8c0809ceu; R(4)=LD32(R(15)+4); f_8c013560(c); }
  R(0)=0x828u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(14)+R(0));
  R(2)+=R(3);
  ST32(R(14)+R(0),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c080a20(SH4Ctx *c) {
  R(3)=0x8c0c81bcu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c080a34; }
  {  goto L8c080b26; }
L8c080a34:;
  R(2)=0x8c0c81c8u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c080a40;
  {  goto L8c080af8; }
L8c080a40:;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c080a50;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c080a4c;
  {  goto L8c080af8; }
L8c080a4c:;
  {  goto L8c080b00; }
L8c080a50:;
  R(3)=0x8c0cec88u;
  R(0)=0x830u;
  { c->pr=0x8c080a58u; R(4)=LD32(R(14)+R(0)); f_8c0cec88(c); }
  R(2)=0x8c0c81d0u;
  R(4)=R(0);
  ST32(R(2),R(0));
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c080a80;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c080a6c;
  {  goto L8c080b26; }
L8c080a6c:;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c080ac0;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c080ad4;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c080b26;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c080b26;
  {  goto L8c080b26; }
L8c080a80:;
  R(1)=0x8c2de34cu;
  R(3)=0x8c2de348u;
  R(5)=LD32(R(1));
  R(6)=LD32(R(3));
  { c->pr=0x8c080a8cu; R(4)=R(14); f_8c0809b0(c); }
  R(0)=0x8c0c81c8u;
  R(1)=0x3u;
  R(2)=0x8c2de34cu;
  R(3)=0x0u;
  ST32(R(2),R(3));
  ST32(R(0),R(1));
  {  goto L8c080af8; }
L8c080ac0:;
  R(3)=0x8c0132c4u;
  R(0)=0x830u;
  { c->pr=0x8c080ac8u; R(4)=LD32(R(14)+R(0)); f_8c0132c4(c); }
  { c->pr=0x8c080accu; R(4)=R(14); f_8c080b60(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x3u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c080ad4:;
  R(3)=0x8c0cebdcu;
  R(0)=0x830u;
  { c->pr=0x8c080adcu; R(4)=LD32(R(14)+R(0)); f_8c0cebdc(c); }
  R(2)=0x8c0c81c4u;
  R(4)=R(0);
  ST32(R(2),R(0));
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c080b26;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c080b26;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c080b26;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c080b26;
  {  goto L8c080b26; }
L8c080af8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c080b00:;
  R(3)=0x172u;
  R(2)=0x0u;
  R(1)=0x8c0bc984u;
  R(7)=0x9u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)+=0xffffff8du;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0bdf60u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c080b24u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080b26:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c080b60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c81c8u;
  ST32(R(15),R(4));
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c080b78;
  R(2)=0x8c0cecb6u;
  R(0)=0x830u;
  R(4)=LD32(R(15));
  { c->pr=0x8c080b78u; R(4)=LD32(R(4)+R(0)); f_8c0cecb6(c); }
L8c080b78:;
  { c->pr=0x8c080b7cu;  f_8c0807e4(c); }
  R(3)=0x8c0ce6d8u;
  R(0)=0x830u;
  R(4)=LD32(R(15));
  { c->pr=0x8c080b86u; R(4)=LD32(R(4)+R(0)); f_8c0ce6d8(c); }
  R(3)=0x8c0c81c8u;
  R(2)=0x1u;
  { c->pr=0x8c080b8eu; ST32(R(3),R(2)); f_8c080840(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c080b96(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(5);
  R(14)=R(4);
  { c->pr=0x8c080bb0u; ST32(R(15),R(6)); f_8c0807e4(c); }
  R(2)=0x8c0c81c8u;
  R(5)=0x8c0c81d4u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c080bc0;
  R(1)=LD32(R(5));
  R(1)+=0x1u;
  ST32(R(5),R(1));
L8c080bc0:;
  R(0)=0x828u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(4)=LD32(R(14)+R(0));
  R(0)+=0x8u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(4)-=R(3);
  R(3)=LD32(R(14)+R(0));
  R(2)+=R(13);
  R(2)-=R(4);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c080be6;
  R(1)=LD32(R(5));
  R(1)+=0x1u;
  { c->pr=0x8c080be2u; ST32(R(5),R(1)); f_8c080840(c); }
  { R(0)=0xffffffffu; goto L8c080d9c; }
L8c080be6:;
  c->t=(int32_t)R(4)>=(int32_t)R(13);
  if(!c->t) goto L8c080c20;
  { R(12)=R(13); goto L8c080c22; }
L8c080c20:;
  R(12)=R(4);
L8c080c22:;
  c->t=(int32_t)R(12)>0;
  if(!c->t) goto L8c080c30;
  R(6)=LD32(R(15));
  R(5)=R(12);
  { c->pr=0x8c080c2eu; R(4)=R(14); f_8c0809b0(c); }
  R(13)-=R(12);
L8c080c30:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c080c40;
  R(2)=0x8c0c81c8u;
  R(3)=0x3u;
  { c->pr=0x8c080c3cu; ST32(R(2),R(3)); f_8c080840(c); }
  {  goto L8c080d9a; }
L8c080c40:;
  R(3)=LD32(R(15));
  R(8)=0xffffffffu;
  R(0)=0x8c0bc980u;
  R(12)+=R(3);
  R(1)=0x8c2de34cu;
  R(2)=0x8c2de348u;
  R(11)=0xffu;
  ST32(R(2),R(12));
  ST32(R(1),R(13));
  R(3)=LD32(R(0));
  c->t=(int32_t)R(13)>(int32_t)R(3);
  { uint32_t k=!c->t; R(9)=0x0u; if(k) goto L8c080c7a; }
  R(3)=0x1c8u;
  R(6)=0x0u;
  R(2)=0x8c0bc984u;
  R(7)=0xau;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c080c78u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080c7a:;
  R(2)=0x8c067940u;
  R(1)=R(13);
  R(4)=0x800u;
  { c->pr=0x8c080c84u; R(0)=R(4); f_8c067940(c); }
  R(3)=0x8c067a9cu;
  R(1)=R(13);
  R(12)=R(0);
  { c->pr=0x8c080c8eu; R(0)=R(4); f_8c067a9c(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c080c94;
  R(12)+=0x1u;
L8c080c94:;
  R(0)=0x834u;
  R(4)=R(12);
  R(4)<<=8;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(4)<<=2;
  R(2)=LD32(R(14)+R(0));
  c->t=R(4)>>31;R(4)<<=1;
  R(3)+=R(4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c080d00;
  { R(13)=R(4); goto L8c080d2e; }
L8c080d00:;
  R(0)=0x834u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(2)=LD32(R(14)+R(0));
  R(3)+=R(13);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c080d2e;
  R(1)=0x1d8u;
  R(6)=0x0u;
  R(3)=0x8c0bc984u;
  R(7)=0xau;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0bdf60u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c080d2cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080d2e:;
  R(0)=0x828u;
  R(10)=0x8c0ce968u;
  ST32(R(14)+R(0),R(9));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  R(3)+=R(13);
  R(13)=0x8c123af0u;
  ST32(R(14)+R(0),R(3));
L8c080d42:;
  R(0)=0x820u;
  R(5)=R(12);
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  { uint32_t tg=R(10); c->pr=0x8c080d4eu; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(3)=R(0);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=!c->t; ST32(R(13),R(0)); if(k) goto L8c080d42; }
  R(3)=0x8c0cec88u;
  R(0)=0x830u;
  { c->pr=0x8c080d5eu; R(4)=LD32(R(14)+R(0)); f_8c0cec88(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c080d42;
  R(2)=0x8c0c70c8u;
  R(1)=0x8c2de344u;
  R(3)=LD32(R(2));
  ST32(R(1),R(3));
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c080d92;
  R(3)=0x1f2u;
  R(6)=0x0u;
  R(2)=0x8c0bc984u;
  R(7)=0xau;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c080d90u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080d92:;
  R(3)=0x8c0c81c8u;
  R(2)=0x2u;
  { c->pr=0x8c080d9au; ST32(R(3),R(2)); f_8c080840(c); }
L8c080d9a:;
  R(0)=0x1u;
L8c080d9c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c080e00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c81d8u;
  R(3)=0x1u;
  ST32(R(15),R(6));
  R(14)=R(4);
  R(13)=R(5);
  { c->pr=0x8c080e20u; ST32(R(2),R(3)); f_8c0807e4(c); }
  R(0)=0x828u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(4)=LD32(R(14)+R(0));
  R(4)-=R(3);
  c->t=(int32_t)R(4)>=(int32_t)R(13);
  if(!c->t) goto L8c080e32;
  { R(11)=R(13); goto L8c080e34; }
L8c080e32:;
  R(11)=R(4);
L8c080e34:;
  c->t=(int32_t)R(11)>0;
  if(!c->t) goto L8c080e42;
  R(6)=LD32(R(15));
  R(5)=R(11);
  { c->pr=0x8c080e40u; R(4)=R(14); f_8c0809b0(c); }
  R(13)-=R(11);
L8c080e42:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c080e80; }
  R(2)=0x8c0c81c8u;
  R(3)=0x3u;
  { c->pr=0x8c080e50u; ST32(R(2),R(3)); f_8c080840(c); }
  R(0)=0x8c0c81d8u;
  { ST32(R(0),R(12)); goto L8c080fd2; }
L8c080e80:;
  R(3)=LD32(R(15));
  R(0)=0x8c0bc980u;
  R(2)=0x8c2de348u;
  R(11)+=R(3);
  R(1)=0x8c2de34cu;
  ST32(R(2),R(11));
  R(11)=0xffu;
  R(8)=0x8c0bc984u;
  ST32(R(1),R(13));
  R(3)=LD32(R(0));
  c->t=(int32_t)R(13)>(int32_t)R(3);
  { uint32_t k=!c->t; R(9)=0xffffffffu; if(k) goto L8c080eb8; }
  R(3)=0x22bu;
  R(6)=0x0u;
  R(2)=0x8c0bdf60u;
  R(7)=0xau;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c080eb6u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080eb8:;
  R(3)=0x8c067940u;
  R(1)=R(13);
  R(4)=0x800u;
  { c->pr=0x8c080ec2u; R(0)=R(4); f_8c067940(c); }
  R(2)=0x8c067a9cu;
  R(1)=R(13);
  R(10)=R(0);
  { c->pr=0x8c080eccu; R(0)=R(4); f_8c067a9c(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c080ed2;
  R(10)+=0x1u;
L8c080ed2:;
  R(0)=0x834u;
  R(4)=R(10);
  R(4)<<=8;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(4)<<=2;
  R(3)=LD32(R(14)+R(0));
  c->t=R(4)>>31;R(4)<<=1;
  R(2)+=R(4);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c080f40;
  { R(13)=R(4); goto L8c080f6c; }
L8c080f40:;
  R(0)=0x834u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(3)=LD32(R(14)+R(0));
  R(2)+=R(13);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c080f6c;
  R(1)=0x23bu;
  R(6)=0x0u;
  R(3)=0x8c0bdf60u;
  R(7)=0xau;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c080f6au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080f6c:;
  R(0)=0x828u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  R(3)+=R(13);
  R(13)=0x8c123af0u;
  ST32(R(14)+R(0),R(3));
L8c080f7e:;
  R(0)=0x820u;
  R(5)=R(10);
  R(3)=0x8c0ce802u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  { c->pr=0x8c080f8cu; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-13;
  ST32(R(13),R(0));
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c080f7e; }
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c080fb6;
  R(2)=0x249u;
  R(6)=0x0u;
  R(3)=0x8c0bdf60u;
  R(7)=0xau;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c080fb4u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080fb6:;
  R(2)=0x8c2de34cu;
  R(3)=0x8c2de348u;
  R(5)=LD32(R(2));
  R(6)=LD32(R(3));
  { c->pr=0x8c080fc2u; R(4)=R(14); f_8c0809b0(c); }
  R(2)=0x8c0c81c8u;
  R(3)=0x3u;
  R(1)=0x8c2de34cu;
  ST32(R(2),R(3));
  { c->pr=0x8c080fceu; ST32(R(1),R(12)); f_8c080840(c); }
  R(2)=0x8c0c81d8u;
  ST32(R(2),R(12));
L8c080fd2:;
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c080e80(SH4Ctx *c) {
  R(3)=LD32(R(15));
  R(0)=0x8c0bc980u;
  R(2)=0x8c2de348u;
  R(11)+=R(3);
  R(1)=0x8c2de34cu;
  ST32(R(2),R(11));
  R(11)=0xffu;
  R(8)=0x8c0bc984u;
  ST32(R(1),R(13));
  R(3)=LD32(R(0));
  c->t=(int32_t)R(13)>(int32_t)R(3);
  { uint32_t k=!c->t; R(9)=0xffffffffu; if(k) goto L8c080eb8; }
  R(3)=0x22bu;
  R(6)=0x0u;
  R(2)=0x8c0bdf60u;
  R(7)=0xau;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c080eb6u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080eb8:;
  R(3)=0x8c067940u;
  R(1)=R(13);
  R(4)=0x800u;
  { c->pr=0x8c080ec2u; R(0)=R(4); f_8c067940(c); }
  R(2)=0x8c067a9cu;
  R(1)=R(13);
  R(10)=R(0);
  { c->pr=0x8c080eccu; R(0)=R(4); f_8c067a9c(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c080ed2;
  R(10)+=0x1u;
L8c080ed2:;
  R(0)=0x834u;
  R(4)=R(10);
  R(4)<<=8;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(4)<<=2;
  R(3)=LD32(R(14)+R(0));
  c->t=R(4)>>31;R(4)<<=1;
  R(2)+=R(4);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c080f40;
  { R(13)=R(4); goto L8c080f6c; }
L8c080f40:;
  R(0)=0x834u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(3)=LD32(R(14)+R(0));
  R(2)+=R(13);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c080f6c;
  R(1)=0x23bu;
  R(6)=0x0u;
  R(3)=0x8c0bdf60u;
  R(7)=0xau;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c080f6au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080f6c:;
  R(0)=0x828u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  R(3)+=R(13);
  R(13)=0x8c123af0u;
  ST32(R(14)+R(0),R(3));
L8c080f7e:;
  R(0)=0x820u;
  R(5)=R(10);
  R(3)=0x8c0ce802u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  { c->pr=0x8c080f8cu; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-13;
  ST32(R(13),R(0));
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c080f7e; }
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c080fb6;
  R(2)=0x249u;
  R(6)=0x0u;
  R(3)=0x8c0bdf60u;
  R(7)=0xau;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c080fb4u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080fb6:;
  R(2)=0x8c2de34cu;
  R(3)=0x8c2de348u;
  R(5)=LD32(R(2));
  R(6)=LD32(R(3));
  { c->pr=0x8c080fc2u; R(4)=R(14); f_8c0809b0(c); }
  R(2)=0x8c0c81c8u;
  R(3)=0x3u;
  R(1)=0x8c2de34cu;
  ST32(R(2),R(3));
  { c->pr=0x8c080fceu; ST32(R(1),R(12)); f_8c080840(c); }
  R(2)=0x8c0c81d8u;
  ST32(R(2),R(12));
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c080f40(SH4Ctx *c) {
  R(0)=0x834u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(3)=LD32(R(14)+R(0));
  R(2)+=R(13);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c080f6c;
  R(1)=0x23bu;
  R(6)=0x0u;
  R(3)=0x8c0bdf60u;
  R(7)=0xau;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c080f6au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080f6c:;
  R(0)=0x828u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  R(3)+=R(13);
  R(13)=0x8c123af0u;
  ST32(R(14)+R(0),R(3));
L8c080f7e:;
  R(0)=0x820u;
  R(5)=R(10);
  R(3)=0x8c0ce802u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  { c->pr=0x8c080f8cu; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-13;
  ST32(R(13),R(0));
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c080f7e; }
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c080fb6;
  R(2)=0x249u;
  R(6)=0x0u;
  R(3)=0x8c0bdf60u;
  R(7)=0xau;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c080fb4u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c080fb6:;
  R(2)=0x8c2de34cu;
  R(3)=0x8c2de348u;
  R(5)=LD32(R(2));
  R(6)=LD32(R(3));
  { c->pr=0x8c080fc2u; R(4)=R(14); f_8c0809b0(c); }
  R(2)=0x8c0c81c8u;
  R(3)=0x3u;
  R(1)=0x8c2de34cu;
  ST32(R(2),R(3));
  { c->pr=0x8c080fceu; ST32(R(1),R(12)); f_8c080840(c); }
  R(2)=0x8c0c81d8u;
  ST32(R(2),R(12));
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c081040(SH4Ctx *c) {
  R(0)=0x828u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+R(0));
  R(3)-=R(5);
  ST32(R(4)+R(0),R(3));
  R(2)=LD32(R(4)+R(0));
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c081076;
  R(1)=0x25cu;
  R(2)=0x0u;
  R(3)=0x8c0bc984u;
  R(7)=0xau;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0bdf60u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c081074u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c081076:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0810a0(SH4Ctx *c) {
  R(0)=0x38u;
  R(2)=0x8c2cfdccu;
  c->macl=(uint32_t)(uint16_t)R(4)*(uint32_t)(uint16_t)R(0);
  R(3)=LD32(R(2));
  R(0)=c->macl;
  { R(0)+=R(3); return; }
}
void f_8c0810e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0811ecu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,12,R(0));
  R(0)=0x8c0811f0u;
  fp_ld(c,13,R(0));
  R(0)=0x8c0811f4u;
  fp_ld(c,14,R(0));
  R(0)=0x8c0811f8u;
  R(13)=0x1000u;
  fp_ld(c,15,R(0));
  R(12)=0x8c2de364u;
  R(11)=0x8c0686fcu;
L8c08110c:;
  c->fpul=R(14);
  R(3)=R(14);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(12);
  fp_float(c,3);
  R(8)=R(3);
  fp_arith(c,2,3,13);
  fp_mov(c,4,3);
  { uint32_t tg=R(11); c->pr=0x8c081120u; fp_arith(c,3,4,12); sh4_call(c,tg); }
  fp_mov(c,3,0);
  R(14)+=0x1u;
  fp_mov(c,0,14);
  fp_mov(c,2,15);
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  c->fpul=R(14);
  ST16(R(8),R(3));
  R(3)=R(14);
  fp_float(c,3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(12);
  R(8)=R(3);
  fp_arith(c,2,3,13);
  fp_mov(c,4,3);
  { uint32_t tg=R(11); c->pr=0x8c081144u; fp_arith(c,3,4,12); sh4_call(c,tg); }
  fp_mov(c,3,0);
  R(14)+=0x1u;
  fp_mov(c,0,14);
  c->t=(int32_t)R(14)>=(int32_t)R(13);
  fp_mov(c,2,15);
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  ST16(R(8),R(3));
  if(!c->t) goto L8c08110c;
  R(0)=0x8c0811fcu;
  R(14)=R(13);
  fp_ld(c,15,R(0));
  R(13)=0x2000u;
L8c081160:;
  c->fpul=R(14);
  R(3)=R(14);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(12);
  fp_float(c,3);
  R(8)=R(3);
  fp_arith(c,2,3,13);
  fp_mov(c,4,3);
  { uint32_t tg=R(11); c->pr=0x8c081174u; fp_arith(c,3,4,12); sh4_call(c,tg); }
  fp_mov(c,3,0);
  R(14)+=0x1u;
  fp_mov(c,0,14);
  fp_mov(c,2,15);
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  c->fpul=R(14);
  ST16(R(8),R(3));
  R(3)=R(14);
  fp_float(c,3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(12);
  R(8)=R(3);
  fp_arith(c,2,3,13);
  fp_mov(c,4,3);
  { uint32_t tg=R(11); c->pr=0x8c081198u; fp_arith(c,3,4,12); sh4_call(c,tg); }
  fp_mov(c,3,0);
  R(14)+=0x1u;
  fp_mov(c,0,14);
  c->t=(int32_t)R(14)>=(int32_t)R(13);
  fp_mov(c,2,15);
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  ST16(R(8),R(3));
  if(!c->t) goto L8c081160;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c081200(SH4Ctx *c) {
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(0)=0x8c0813a0u;
  fp_ld(c,4,R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(3)=R(0);
  c->fpul=R(3);
  R(0)=0x4u;
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(4));
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(3)=R(0);
  c->fpul=R(3);
  R(0)=0x8u;
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(4));
  R(0)=(int32_t)(int16_t)LD16(R(5)+6);
  R(3)=R(0);
  c->fpul=R(3);
  R(0)=0xcu;
  fp_float(c,3);
  fp_arith(c,2,3,4);
  { fp_st(c,3,R(0)+R(4)); return; }
}
void f_8c08123a(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,3,R(5));
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(5));
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  fp_st(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(5));
  { fp_st(c,3,R(0)+R(4)); return; }
}
void f_8c081252(SH4Ctx *c) {
  R(0)=0x8u;
  fp_ld(c,4,R(4));
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x4u;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  { fp_mov(c,0,3); return; }
}
void f_8c08126e(SH4Ctx *c) {
  R(0)=0x8u;
  fp_ld(c,4,R(4));
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x4u;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0xcu;
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  { fp_mov(c,0,3); return; }
}
void f_8c081292(SH4Ctx *c) {
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=R(5);
  R(11)=R(6);
  R(11)+=0x8u;
  R(3)+=0x18u;
  fp_ld(c,0,R(11));
  fp_ld(c,3,R(3));
  R(7)=R(5);
  R(2)=R(6);
  R(2)+=0x4u;
  fp_arith(c,2,3,0);
  R(7)+=0xcu;
  fp_ld(c,0,R(2));
  R(1)=R(5);
  fp_ld(c,2,R(7));
  R(0)=0x4u;
  fp_ld(c,1,R(1));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(6));
  fp_fmac(c,3,1);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(0)+R(3));
  fp_ld(c,0,R(11));
  fp_ld(c,2,R(0)+R(7));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(2));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(1));
  fp_ld(c,0,R(6));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  fp_ld(c,0,R(11));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(3));
  fp_ld(c,2,R(0)+R(7));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(2));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(1));
  fp_ld(c,0,R(6));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;} return; }
}
void f_8c0812ea(SH4Ctx *c) {
  fp_ld(c,3,R(6));
  R(1)=R(6);
  fp_ld(c,4,R(5));
  R(7)=R(1);
  R(7)+=0x18u;
  R(3)=R(1);
  fp_arith(c,2,3,4);
  R(2)=R(4);
  R(3)+=0xcu;
  R(6)=R(2);
  R(6)+=0x18u;
  R(0)=0x4u;
  fp_st(c,3,R(4));
  R(4)=R(2);
  fp_ld(c,2,R(3));
  R(4)+=0xcu;
  fp_arith(c,2,2,4);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(7));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(6));
  fp_ld(c,4,R(0)+R(5));
  fp_ld(c,3,R(0)+R(1));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(2));
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(4));
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(6));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,4,R(0)+R(5));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(2));
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(4));
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,2,3,4);
  { fp_st(c,3,R(0)+R(6)); return; }
}
void f_8c081340(SH4Ctx *c) {
  R(1)=R(5);
  R(0)=0x4u;
  fp_ld(c,4,R(6));
  R(2)=R(4);
  fp_ld(c,3,R(5));
  R(5)=R(1);
  R(5)+=0xcu;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  R(4)=R(2);
  fp_ld(c,2,R(0)+R(1));
  R(4)+=0xcu;
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(1));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(6));
  fp_ld(c,3,R(5));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(4));
  R(4)=R(2);
  fp_ld(c,4,R(0)+R(6));
  R(5)=R(1);
  R(0)=0x4u;
  R(5)+=0x18u;
  fp_ld(c,3,R(5));
  R(4)+=0x18u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,2,3,4);
  { fp_st(c,3,R(0)+R(4)); return; }
}
void f_8c0813c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(10)=R(5);
  R(7)=R(6);
  R(7)+=0x8u;
  R(9)=R(5);
  R(10)+=0x18u;
  fp_ld(c,0,R(7));
  fp_ld(c,3,R(10));
  R(12)=R(6);
  R(9)+=0xcu;
  R(14)=R(5);
  fp_arith(c,2,3,0);
  R(12)+=0x4u;
  fp_ld(c,2,R(9));
  R(13)=R(6);
  fp_ld(c,0,R(12));
  R(8)=R(10);
  fp_ld(c,1,R(14));
  R(8)+=0x4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(13));
  R(5)=R(9);
  R(5)+=0x4u;
  R(3)=R(14);
  R(11)=R(4);
  fp_fmac(c,3,1);
  fp_st(c,3,R(4));
  fp_ld(c,0,R(7));
  fp_ld(c,3,R(8));
  fp_ld(c,2,R(5));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(12));
  fp_fmac(c,3,2);
  R(3)+=0x4u;
  R(2)=R(10);
  R(0)=0x4u;
  ST32(R(15)+12,R(3));
  fp_ld(c,2,R(3));
  R(2)+=0x8u;
  fp_ld(c,0,R(13));
  R(3)=R(9);
  R(3)+=0x8u;
  R(1)=R(14);
  fp_fmac(c,3,2);
  R(1)+=0x8u;
  R(4)=R(11);
  R(4)+=0xcu;
  fp_st(c,3,R(0)+R(11));
  R(0)=0x8u;
  ST32(R(15)+8,R(3));
  ST32(R(15)+4,R(2));
  fp_ld(c,0,R(7));
  fp_ld(c,3,R(2));
  fp_ld(c,2,R(3));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(12));
  R(12)=R(13);
  R(12)+=0xcu;
  R(6)=R(12);
  ST32(R(15),R(1));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(13));
  fp_ld(c,2,R(1));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(11));
  R(7)=R(12);
  R(7)+=0x8u;
  fp_ld(c,3,R(10));
  R(6)+=0x4u;
  fp_ld(c,0,R(7));
  R(0)=0x4u;
  fp_ld(c,2,R(9));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(6));
  fp_ld(c,1,R(12));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,1);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(8));
  fp_ld(c,0,R(7));
  fp_ld(c,2,R(5));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(6));
  R(3)=LD32(R(15)+12);
  fp_ld(c,1,R(12));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(3));
  fp_fmac(c,3,1);
  fp_st(c,3,R(0)+R(4));
  R(1)=LD32(R(15)+4);
  fp_ld(c,0,R(7));
  fp_ld(c,3,R(1));
  R(2)=LD32(R(15)+8);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(6));
  R(3)=LD32(R(15));
  fp_ld(c,2,R(2));
  R(0)=0x8u;
  fp_ld(c,1,R(12));
  R(12)=R(13);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(3));
  R(12)+=0x18u;
  R(7)=R(11);
  R(6)=R(12);
  R(6)+=0x8u;
  R(7)+=0x18u;
  fp_fmac(c,3,1);
  fp_st(c,3,R(0)+R(4));
  R(4)=R(12);
  fp_ld(c,3,R(10));
  R(4)+=0x4u;
  fp_ld(c,0,R(6));
  fp_ld(c,2,R(9));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  fp_ld(c,1,R(12));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,1);
  fp_st(c,3,R(7));
  fp_ld(c,3,R(8));
  fp_ld(c,0,R(6));
  fp_ld(c,2,R(5));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  R(3)=LD32(R(15)+12);
  fp_fmac(c,3,2);
  fp_ld(c,1,R(12));
  R(0)=0x4u;
  fp_ld(c,0,R(3));
  fp_fmac(c,3,1);
  fp_st(c,3,R(0)+R(7));
  R(0)=0x8u;
  R(1)=LD32(R(15)+4);
  fp_ld(c,0,R(6));
  fp_ld(c,3,R(1));
  R(2)=LD32(R(15)+8);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  fp_ld(c,2,R(2));
  R(3)=LD32(R(15));
  fp_ld(c,1,R(12));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(3));
  fp_fmac(c,3,1);
  fp_st(c,3,R(0)+R(7));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c081508(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(4));
  R(11)=R(6);
  R(4)=0x8c2e2364u;
  R(6)=R(5);
  ST32(R(15)+4,R(5));
  { c->pr=0x8c081526u; R(5)=R(11); f_8c0812ea(c); }
  R(13)=0x8c2e2364u;
  R(0)=0x4u;
  R(14)=LD32(R(15));
  R(5)=R(13);
  R(5)+=0x4u;
  R(4)=R(13);
  R(4)+=0x8u;
  R(3)=R(14);
  R(3)+=0x4u;
  ST32(R(15)+20,R(13));
  R(12)=LD32(R(15)+4);
  fp_ld(c,3,R(5));
  fp_ld(c,0,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,2,R(13));
  R(9)=R(12);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(12));
  R(9)+=0xcu;
  R(7)=R(9);
  R(7)+=0x4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(12));
  fp_ld(c,2,R(4));
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  ST32(R(15),R(3));
  fp_ld(c,3,R(7));
  fp_ld(c,0,R(5));
  fp_ld(c,2,R(9));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  R(6)=R(9);
  fp_fmac(c,3,2);
  R(6)+=0x8u;
  fp_ld(c,0,R(4));
  fp_ld(c,1,R(6));
  R(10)=R(12);
  R(10)+=0x18u;
  fp_fmac(c,3,1);
  R(2)=R(10);
  R(2)+=0x4u;
  R(1)=R(10);
  R(1)+=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(14);
  R(3)+=0x8u;
  ST32(R(15)+8,R(3));
  ST32(R(15)+4,R(2));
  fp_ld(c,3,R(2));
  fp_ld(c,0,R(5));
  fp_ld(c,2,R(10));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  ST32(R(15)+16,R(1));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(4));
  fp_ld(c,2,R(1));
  R(4)=R(14);
  R(4)+=0xcu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(3));
  fp_st(c,3,R(4));
  R(5)=R(4);
  R(13)=LD32(R(15)+20);
  R(5)+=0x4u;
  R(13)+=0xcu;
  R(3)=R(13);
  R(3)+=0x4u;
  R(2)=R(13);
  R(2)+=0x8u;
  ST32(R(15),R(3));
  fp_ld(c,0,R(3));
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(9));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  ST32(R(15)+12,R(2));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(2));
  fp_ld(c,2,R(6));
  R(6)=R(4);
  R(6)+=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(5));
  R(0)=LD32(R(15));
  R(1)=LD32(R(15)+4);
  fp_ld(c,0,R(0));
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(10));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15)+16);
  fp_fmac(c,3,2);
  fp_ld(c,1,R(3));
  fp_ld(c,0,R(2));
  R(4)=R(14);
  R(0)=0x4u;
  R(4)+=0x18u;
  fp_fmac(c,3,1);
  fp_st(c,3,R(6));
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(3));
  fp_st(c,3,R(4));
  fp_ld(c,2,R(6));
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(11));
  R(0)=0x8u;
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(5));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(14));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(11));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c081660(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  fp_ld(c,6,R(5));
  R(6)=R(5);
  R(6)+=0xcu;
  R(7)=R(5);
  fp_arith(c,0,6,6);
  R(3)=R(5);
  R(7)+=0x4u;
  R(10)=0x8c2e2388u;
  R(3)+=0x8u;
  fp_ld(c,5,R(7));
  R(8)=0x8c2e238cu;
  fp_arith(c,0,5,5);
  R(9)=0x8c2e2390u;
  ST32(R(15),R(3));
  fp_ld(c,3,R(6));
  fp_ld(c,4,R(3));
  fp_arith(c,2,3,6);
  R(3)=0x8c2e2394u;
  fp_arith(c,0,4,4);
  R(12)=0x8c2e2398u;
  fp_st(c,3,R(10));
  fp_ld(c,2,R(6));
  fp_arith(c,2,2,5);
  fp_st(c,2,R(8));
  fp_ld(c,3,R(6));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(9));
  fp_ld(c,2,R(5));
  fp_arith(c,2,2,6);
  fp_st(c,2,R(3));
  fp_ld(c,3,R(5));
  fp_arith(c,2,3,5);
  fp_st(c,3,R(12));
  R(1)=R(4);
  fp_ld(c,2,R(5));
  R(5)=R(1);
  R(11)=0x8c2e23a0u;
  R(5)+=0xcu;
  fp_arith(c,2,2,4);
  R(13)=0x8c2e239cu;
  R(6)=0x8c2e23a4u;
  fp_st(c,2,R(13));
  fp_ld(c,3,R(7));
  fp_arith(c,2,3,5);
  fp_st(c,3,R(11));
  fp_ld(c,2,R(7));
  R(7)=0x8c2e23a8u;
  fp_arith(c,2,2,4);
  fp_st(c,2,R(6));
  R(2)=LD32(R(15));
  fp_ld(c,3,R(2));
  fp_arith(c,2,3,4);
  c->fr[4]=0x3F800000u;
  fp_mov(c,2,4);
  fp_st(c,3,R(7));
  fp_ld(c,3,R(11));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(7));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(12));
  fp_ld(c,2,R(9));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(5));
  fp_ld(c,3,R(8));
  R(4)=R(1);
  fp_ld(c,2,R(13));
  R(4)+=0x18u;
  R(0)=0x4u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(9));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(1));
  fp_ld(c,3,R(3));
  fp_mov(c,2,4);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(7));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(5));
  fp_ld(c,2,R(10));
  fp_ld(c,3,R(6));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(8));
  fp_ld(c,3,R(13));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(1));
  fp_ld(c,2,R(6));
  fp_ld(c,3,R(10));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(5));
  fp_ld(c,3,R(3));
  fp_arith(c,1,4,3);
  fp_ld(c,3,R(11));
  fp_arith(c,1,4,3);
  fp_st(c,4,R(0)+R(4));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c081744(SH4Ctx *c) {
  fp_ld(c,3,R(6));
  R(0)=0x4u;
  fp_ld(c,5,R(5));
  fp_mov(c,0,4);
  fp_arith(c,1,3,5);
  fp_mov(c,2,5);
  fp_fmac(c,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_ld(c,5,R(0)+R(5));
  fp_arith(c,1,3,5);
  fp_mov(c,2,5);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(6));
  fp_ld(c,5,R(0)+R(5));
  fp_arith(c,1,3,5);
  fp_mov(c,2,5);
  fp_fmac(c,2,3);
  { fp_st(c,2,R(0)+R(4)); return; }
}
void f_8c0817c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(13)=0x8c2e23acu;
  R(11)=R(5);
  R(14)=R(7);
  R(5)=R(6);
  R(12)=R(4);
  ST32(R(15),R(6));
  fp_mov(c,15,4);
  { c->pr=0x8c0817e6u; R(4)=R(13); f_8c08123a(c); }
  R(6)=0x800u;
  R(0)=(uint32_t)(int32_t)(int16_t)R(14);
  R(7)=0x1fffu;
  R(0)+=R(6);
  R(5)=0x8c2de364u;
  R(0)&=R(7);
  c->t=R(0)>>31;R(0)<<=1;
  R(4)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(10)=R(5); if(k) goto L8c081838; }
  R(3)=0x1000u;
  R(2)=R(13);
  ST32(R(15),R(2));
  R(4)=0u-R(4);
  R(3)-=R(14);
  R(14)=R(3);
  R(3)=R(2);
  fp_ld(c,3,R(2));R(2)+=fp_sz(c);
  fp_unary(c,0,3);
  fp_st(c,3,R(3));
  R(3)=R(2);
  ST32(R(15),R(2));
  fp_ld(c,3,R(2));
  R(2)=R(13);
  R(2)+=0x8u;
  fp_unary(c,0,3);
  fp_st(c,3,R(3));
  R(3)=R(2);
  ST32(R(15),R(2));
  fp_ld(c,3,R(2));
  R(2)=R(13);
  R(2)+=0xcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(3));
  R(3)=R(2);
  ST32(R(15),R(2));
  fp_ld(c,3,R(2));
  fp_unary(c,0,3);
  fp_st(c,3,R(3));
L8c081838:;
  R(3)=R(12);
  R(3)+=0x4u;
  R(1)=R(12);
  R(2)=R(11);
  R(8)=R(11);
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(1)+=0x8u;
  ST32(R(15)+4,R(13));
  ST32(R(15)+8,R(3));
  R(2)+=0x4u;
  R(3)=0xffff8002u;
  R(9)=R(12);
  ST32(R(15)+12,R(2));
  R(8)+=0x8u;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  ST32(R(15),R(1));
  { uint32_t k=!c->t; R(9)+=0xcu; if(k) goto L8c081920; }
  R(6)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=R(6);
  R(0)&=R(7);
  c->t=R(0)>>31;R(0)<<=1;
  R(4)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; c->fr[4]=0x3F800000u; if(k) goto L8c0818e0; }
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  fp_mov(c,6,4);
  c->fpul=R(4);
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  fp_float(c,3);
  c->fpul=R(2);
  fp_arith(c,3,6,3);
  fp_float(c,3);
  fp_mov(c,2,3);
  fp_arith(c,2,2,15);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)-=R(5);
  R(0)=R(6);
  R(0)&=R(7);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(0)=R(5);
  R(0)&=R(7);
  c->fpul=R(2);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=(int32_t)(int16_t)LD16(R(10)+R(0));
  fp_float(c,3);
  c->fpul=R(2);
  fp_mov(c,4,3);
  fp_float(c,3);
  fp_arith(c,2,4,6);
  fp_mov(c,5,3);
  { fp_arith(c,2,5,6); goto L8c0818e4; }
L8c0818e0:;
  fp_arith(c,1,4,15);
  fp_mov(c,5,15);
L8c0818e4:;
  fp_ld(c,3,R(11));
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  fp_arith(c,2,3,4);
  fp_mov(c,0,5);
  fp_ld(c,2,R(3));
  fp_fmac(c,3,2);
  fp_mov(c,0,4);
  fp_st(c,3,R(12));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  R(2)=LD32(R(15)+12);
  fp_arith(c,2,3,5);
  R(3)=LD32(R(15)+8);
  fp_ld(c,2,R(2));
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,2,R(8));
  fp_arith(c,2,3,5);
  R(3)=LD32(R(15));
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,2,R(0)+R(11));
  fp_arith(c,2,3,5);
  fp_fmac(c,3,2);
  { fp_st(c,3,R(9)); goto L8c08197e; }
L8c081920:;
  R(0)=0x8c0819a0u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  fp_ld(c,2,R(11));
  R(4)=c->fpul;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0u-R(5);
  R(0)+=R(6);
  R(0)&=R(7);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(0)=R(5);
  R(0)&=R(7);
  c->fpul=R(2);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(0)=0x4u;
  fp_float(c,4);
  c->fpul=R(2);
  R(2)=LD32(R(15)+4);
  fp_float(c,5);
  fp_ld(c,1,R(0)+R(2));
  fp_arith(c,2,2,4);
  fp_arith(c,2,1,5);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(13));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,2,5);
  R(2)=LD32(R(15)+12);
  fp_ld(c,1,R(2));
  R(0)=0xcu;
  fp_mov(c,0,4);
  fp_fmac(c,2,1);
  fp_st(c,2,R(3));
  fp_ld(c,1,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(8));
  fp_arith(c,2,1,5);
  R(3)=LD32(R(15));
  fp_arith(c,2,2,4);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  fp_ld(c,2,R(0)+R(13));
  fp_st(c,2,R(9));
L8c08197e:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0819c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff94u;
  R(0)=0x98u;
  R(3)=0x8c014ea0u;
  fp_mov(c,15,4);
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15)+20,R(6));
  ST32(R(15)+4,R(7));
  R(14)=(int32_t)(int16_t)LD16(R(15)+R(0));
  { c->pr=0x8c0819ecu; R(4)=R(7); f_8c014ea0(c); }
  R(0)=0x48u;
  c->fr[13]=0x3F800000u;
  fp_st(c,13,R(0)+R(15));
  R(0)=0x4cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x58u;
  fp_st(c,13,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,13,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,13,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,13,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x44u;
  fp_st(c,13,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  fp_cmp(c,0,15,3);
  R(0)=0x1cu;
  R(3)=0x8c2cfdd4u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  R(9)=0x8c2e23c4u;
  R(8)=0x8c081200u;
  fp_st(c,4,R(0)+R(15));
  { uint32_t k=c->t; R(13)=LD32(R(3)); if(k) goto L8c081a5c; }
  R(0)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(0)+18);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c081ac0;
L8c081a5c:;
  R(0)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(0)+18);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c081b14;
  R(5)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(5)+20);
  R(5)=R(0)&0xFFFF;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(13);
  { uint32_t tg=R(8); c->pr=0x8c081a76u; R(4)=R(9); sh4_call(c,tg); }
  R(3)=0x8c081660u;
  R(4)=R(15);
  R(5)=R(9);
  { c->pr=0x8c081a80u; R(4)+=0x48u; f_8c081660(c); }
  R(13)=R(15);
  R(13)+=0x48u;
  R(6)=R(13);
  R(3)=0x8c015c9cu;
  R(7)=R(13);
  R(5)=R(13);
  R(7)+=0x18u;
  R(6)+=0xcu;
  { c->pr=0x8c081a94u; R(4)=LD32(R(15)+4); f_8c015c9c(c); }
  {  goto L8c081b14; }
L8c081ac0:;
  R(5)=LD32(R(15));
  R(4)=0x8c2e23d4u;
  R(0)=(int32_t)(int16_t)LD16(R(5)+20);
  R(5)=R(0)&0xFFFF;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  { uint32_t tg=R(8); c->pr=0x8c081ad0u; R(5)+=R(13); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(2)=0x8c2cfdd4u;
  R(0)=(int32_t)(int16_t)LD16(R(5)+20);
  R(3)=LD32(R(2));
  R(5)=R(0)&0xFFFF;
  R(4)=0x8c2e23e4u;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  { uint32_t tg=R(8); c->pr=0x8c081ae4u; R(5)+=R(3); sh4_call(c,tg); }
  R(7)=LD32(R(15));
  R(6)=0x8c2e23e4u;
  R(0)=(int32_t)(int16_t)LD16(R(7)+28);
  R(5)=0x8c2e23d4u;
  R(3)=0x8c0817c0u;
  R(7)=R(0);
  fp_mov(c,4,15);
  { c->pr=0x8c081af6u; R(4)=R(9); f_8c0817c0(c); }
  R(2)=0x8c081660u;
  R(4)=R(15);
  R(5)=R(9);
  { c->pr=0x8c081b00u; R(4)+=0x48u; f_8c081660(c); }
  R(13)=R(15);
  R(13)+=0x48u;
  R(6)=R(13);
  R(3)=0x8c015c9cu;
  R(7)=R(13);
  R(5)=R(13);
  R(7)+=0x18u;
  R(6)+=0xcu;
  { c->pr=0x8c081b14u; R(4)=LD32(R(15)+4); f_8c015c9c(c); }
L8c081b14:;
  R(4)=LD32(R(15));
  R(13)=0x8c2e243cu;
  R(0)=(int32_t)(int16_t)LD16(R(4)+18);
  R(2)=0x8c2cfdd0u;
  R(4)=R(0)&0xFFFF;
  R(0)=0x44u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==68;
  { uint32_t k=c->t; R(12)=LD32(R(2)); if(k) goto L8c081b34; }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c081b46;
  R(1)=0x40u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c081b46;
L8c081b34:;
  R(5)=R(15);
  R(2)=0x8c0685b4u;
  R(4)=R(15);
  R(6)=0x24u;
  R(5)+=0x48u;
  { c->pr=0x8c081b42u; R(4)+=0x24u; f_8c0685b4(c); }
  {  goto L8c081dea; }
L8c081b46:;
  R(6)=LD32(R(15)+8);
  R(5)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(6)+24);
  R(6)=R(12);
  fp_mov(c,4,15);
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(5)+24);
  R(5)=R(12);
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=0x8c081744u;
  R(0)<<=2;
  R(5)+=R(0);
  { c->pr=0x8c081b72u; R(4)=R(13); f_8c081744(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  R(1)=0x8c2cfdd4u;
  R(0)=0x8c081c6cu;
  R(3)=R(13);
  fp_ld(c,14,R(0));
  R(10)=0x8c016264u;
  R(11)=0x8c0162d4u;
  R(12)=0x8c016318u;
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(1));
  ST32(R(15)+12,R(2));
  if(c->t) goto L8c081b9a;
  R(0)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(0)+18);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c081b9a;
  {  goto L8c081cda; }
L8c081b9a:;
  R(0)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(0)+18);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c081c0c;
  R(3)=LD32(R(15)+16);
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(13));
  fp_ld(c,4,R(3));
  c->fr[3]=0x00000000u;
  fp_mov(c,5,4);
  fp_arith(c,1,5,6);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c081bba;
  { fp_mov(c,3,5); goto L8c081bbe; }
L8c081bba:;
  fp_mov(c,3,6);
  fp_arith(c,1,3,4);
L8c081bbe:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c081be8;
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c081bd8;
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,3,4);
  { fp_arith(c,1,3,2); goto L8c081bdc; }
L8c081bd8:;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,3,4);
L8c081bdc:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c081be8;
  R(3)=LD32(R(15)+16);
  fp_ld(c,4,R(3));
  {  goto L8c081d58; }
L8c081be8:;
  R(5)=R(15);
  R(2)=0x8c081340u;
  R(4)=R(15);
  R(6)=R(13);
  R(5)+=0x48u;
  { c->pr=0x8c081bf6u; R(4)+=0x24u; f_8c081340(c); }
  R(11)=R(15);
  R(11)+=0x24u;
  R(6)=R(11);
  R(7)=R(11);
  R(5)=R(11);
  R(6)+=0xcu;
  R(7)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c081c08u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  {  goto L8c081dea; }
L8c081c0c:;
  R(5)=LD32(R(15));
  R(3)=LD32(R(15)+12);
  R(0)=(int32_t)(int16_t)LD16(R(5)+22);
  R(0)=R(0)&0xFFFF;
  R(5)=R(0);
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  { uint32_t tg=R(8); c->pr=0x8c081c20u; R(4)=R(9); sh4_call(c,tg); }
  R(3)=0x8c081660u;
  R(4)=0x8c2e23f4u;
  { c->pr=0x8c081c28u; R(5)=R(9); f_8c081660(c); }
  R(0)=0x4u;
  fp_ld(c,4,R(13));
  fp_ld(c,5,R(0)+R(13));
  fp_mov(c,6,4);
  fp_arith(c,1,6,5);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c081c80;
  { fp_mov(c,3,6); goto L8c081c84; }
L8c081c80:;
  fp_mov(c,3,5);
  fp_arith(c,1,3,4);
L8c081c84:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c081cac;
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c081c9e;
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,3,4);
  { fp_arith(c,1,3,2); goto L8c081ca2; }
L8c081c9e:;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,3,4);
L8c081ca2:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c081cac;
  fp_ld(c,4,R(13));
  {  goto L8c081d58; }
L8c081cac:;
  R(2)=0x8c081508u;
  R(4)=0x8c2e2418u;
  R(5)=0x8c2e23f4u;
  { c->pr=0x8c081cb6u; R(6)=R(13); f_8c081508(c); }
  R(3)=0x8c0813c0u;
  R(5)=R(15);
  R(6)=0x8c2e2418u;
  R(4)=R(15);
  R(5)+=0x48u;
  { c->pr=0x8c081cc4u; R(4)+=0x24u; f_8c0813c0(c); }
  R(11)=R(15);
  R(11)+=0x24u;
  R(6)=R(11);
  R(7)=R(11);
  R(5)=R(11);
  R(6)+=0xcu;
  R(7)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c081cd6u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  {  goto L8c081dea; }
L8c081cda:;
  R(5)=LD32(R(15));
  R(3)=LD32(R(15)+12);
  R(0)=(int32_t)(int16_t)LD16(R(5)+22);
  R(4)=0x8c2e23d4u;
  R(0)=R(0)&0xFFFF;
  R(5)=R(0);
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  { uint32_t tg=R(8); c->pr=0x8c081ceeu; R(5)+=R(3); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(2)=0x8c2cfdd4u;
  R(0)=(int32_t)(int16_t)LD16(R(5)+22);
  R(3)=LD32(R(2));
  R(5)=R(0)&0xFFFF;
  R(4)=0x8c2e23e4u;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  { uint32_t tg=R(8); c->pr=0x8c081d02u; R(5)+=R(3); sh4_call(c,tg); }
  R(7)=LD32(R(15));
  R(6)=0x8c2e23e4u;
  R(0)=(int32_t)(int16_t)LD16(R(7)+30);
  R(5)=0x8c2e23d4u;
  R(3)=0x8c0817c0u;
  R(7)=R(0);
  fp_mov(c,4,15);
  { c->pr=0x8c081d14u; R(4)=R(9); f_8c0817c0(c); }
  R(2)=0x8c081660u;
  R(4)=0x8c2e23f4u;
  { c->pr=0x8c081d1cu; R(5)=R(9); f_8c081660(c); }
  R(0)=0x4u;
  fp_ld(c,4,R(13));
  fp_ld(c,5,R(0)+R(13));
  fp_mov(c,6,4);
  fp_arith(c,1,6,5);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c081d30;
  { fp_mov(c,3,6); goto L8c081d34; }
L8c081d30:;
  fp_mov(c,3,5);
  fp_arith(c,1,3,4);
L8c081d34:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c081dc0;
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c081d4e;
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,3,4);
  { fp_arith(c,1,3,2); goto L8c081d52; }
L8c081d4e:;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,3,4);
L8c081d52:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c081dc0;
  fp_ld(c,4,R(13));
L8c081d58:;
  { uint32_t tg=R(10); c->pr=0x8c081d5cu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(12)=R(15);
  R(12)+=0x24u;
  R(6)=R(12);
  R(7)=R(12);
  R(5)=R(12);
  R(6)+=0xcu;
  R(7)+=0x18u;
  { uint32_t tg=R(11); c->pr=0x8c081d6eu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  {  goto L8c081dea; }
L8c081dc0:;
  R(2)=0x8c081508u;
  R(4)=0x8c2e2418u;
  R(5)=0x8c2e23f4u;
  { c->pr=0x8c081dcau; R(6)=R(13); f_8c081508(c); }
  R(3)=0x8c0813c0u;
  R(5)=R(15);
  R(6)=0x8c2e2418u;
  R(4)=R(15);
  R(5)+=0x48u;
  { c->pr=0x8c081dd8u; R(4)+=0x24u; f_8c0813c0(c); }
  R(11)=R(15);
  R(11)+=0x24u;
  R(6)=R(11);
  R(7)=R(11);
  R(5)=R(11);
  R(6)+=0xcu;
  R(7)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c081deau; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
L8c081dea:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  R(3)=0x8c2cfdd0u;
  R(11)=R(15);
  R(10)=0x8c01638au;
  R(12)=LD32(R(3));
  { uint32_t k=c->t; R(11)+=0x18u; if(k) goto L8c081e04; }
  R(0)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(0)+18);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c081e3a;
L8c081e04:;
  R(4)=LD32(R(15));
  R(2)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(4)+26);
  R(4)=R(12);
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)+=R(0);
  R(0)=0xcu;
  R(5)=R(4);
  fp_ld(c,4,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,3,R(4));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(11));
  fp_ld(c,2,R(0)+R(5));
  R(0)=0x1cu;
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x20u;
  fp_arith(c,2,3,4);
  { fp_st(c,3,R(0)+R(15)); goto L8c081e92; }
L8c081e3a:;
  R(14)=R(14)&0xFFFF;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c081ec0;
  R(6)=LD32(R(15)+20);
  R(5)=R(15);
  R(5)+=0x24u;
  R(0)=(int32_t)(int16_t)LD16(R(6)+4);
  R(6)=R(12);
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=0x8c081292u;
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c081e5cu; R(4)=R(13); f_8c081292(c); }
  R(5)=LD32(R(15));
  R(4)=R(15);
  R(3)=0x8c081744u;
  R(6)=LD32(R(15)+8);
  fp_mov(c,4,15);
  { c->pr=0x8c081e6au; R(4)+=0x18u; f_8c081744(c); }
  R(0)=0x18u;
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
L8c081e92:;
  R(5)=R(15);
  R(5)+=0x18u;
  { uint32_t tg=R(10); c->pr=0x8c081e9au; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  {  goto L8c082012; }
L8c081ec0:;
  R(3)=LD32(R(15));
  R(0)=0xcu;
  R(2)=0x8c0c825cu;
  fp_ld(c,3,R(0)+R(3));
  fp_ld(c,4,R(2));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c081edc;
  R(1)=LD32(R(15)+8);
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(1));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c081edc;
  {  goto L8c082012; }
L8c081edc:;
  R(5)=LD32(R(15));
  R(2)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(5)+26);
  R(5)=R(12);
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=0x100u;
  R(0)<<=2;
  R(5)+=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(2)+18);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c081f28;
  R(2)=LD32(R(15));
  R(0)=0xcu;
  R(1)=LD32(R(15)+8);
  R(4)=R(5);
  fp_ld(c,4,R(0)+R(2));
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_mov(c,0,15);
  fp_arith(c,1,3,4);
  fp_mov(c,2,4);
  fp_fmac(c,2,3);
  fp_ld(c,3,R(5));
  fp_mov(c,4,2);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(11));
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x1cu;
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  { fp_arith(c,2,3,4); goto L8c082006; }
L8c081f28:;
  R(7)=LD32(R(15)+8);
  R(6)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(7)+26);
  R(7)=R(12);
  R(14)=0x8c2de364u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(7)+=R(0);
  R(0)=0x20u;
  R(6)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=R(0)>>31;R(0)<<=1;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c081fc0;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  fp_mov(c,6,13);
  c->fpul=R(4);
  R(2)=(uint32_t)(int32_t)(int16_t)R(6);
  R(0)=(uint32_t)(int32_t)(int16_t)R(6);
  fp_float(c,3);
  c->fpul=R(2);
  fp_arith(c,3,6,3);
  fp_float(c,3);
  fp_mov(c,2,3);
  fp_arith(c,2,2,15);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)-=R(2);
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=R(0)>>31;R(0)<<=1;
  c->fpul=R(1);
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  fp_float(c,3);
  c->fpul=R(2);
  fp_mov(c,4,3);
  fp_float(c,3);
  fp_arith(c,2,4,6);
  fp_mov(c,5,3);
  { fp_arith(c,2,5,6); goto L8c081fc6; }
L8c081fc0:;
  fp_mov(c,4,13);
  fp_arith(c,1,4,15);
  fp_mov(c,5,15);
L8c081fc6:;
  R(2)=LD32(R(15));
  R(0)=0xcu;
  R(3)=LD32(R(15)+8);
  R(4)=R(7);
  fp_ld(c,6,R(0)+R(2));
  R(6)=R(5);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_mov(c,0,15);
  fp_arith(c,1,3,6);
  fp_mov(c,2,6);
  fp_fmac(c,2,3);
  fp_ld(c,3,R(7));
  fp_mov(c,6,2);
  fp_arith(c,2,5,6);
  fp_arith(c,2,4,6);
  fp_ld(c,2,R(5));
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,2);
  fp_st(c,3,R(11));
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,2,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,2,3,5);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,2,R(0)+R(6));
  fp_arith(c,2,3,5);
  fp_fmac(c,3,2);
L8c082006:;
  R(5)=R(15);
  R(0)=0x20u;
  R(5)+=0x18u;
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(10); c->pr=0x8c082012u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
L8c082012:;
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08202c(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(6)=(int32_t)(int16_t)LD16(R(5));
  R(7)=LD32(R(4)+16);
  ST16(R(15),R(6));
  R(6)=R(6)&0xFFFF;
  R(3)=LD32(R(7));
  R(6)<<=2;
  R(6)<<=2;
  R(6)+=R(3);
  R(6)=LD32(R(6)+4);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c082052;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(7)+8);
  c->t=R(0)>R(3);
  if(!c->t) goto L8c082052;
  R(0)=R(6);
  { R(15)+=0x4u; return; }
L8c082052:;
  R(0)=LD32(R(4)+20);
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(R(0)+24);
  R(3)=R(3)&0xFFFF;
  R(0)=LD32(R(0));
  R(3)<<=2;
  R(3)<<=2;
  R(0)+=R(3);
  R(0)=LD32(R(0)+4);
  { R(15)+=0x4u; return; }
}
void f_8c082068(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c08206c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0810a0u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+24);
  { c->pr=0x8c08207eu; R(4)=R(0); f_8c0810a0(c); }
  R(13)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(13)+14);
  R(2)=0x8c2cfdd0u;
  ST16(R(14),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->fr[3]=0x00000000u;
  ST8(R(14)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+12);
  ST8(R(14)+3,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(3)=R(0);
  R(0)=0x1au;
  ST8(R(14)+R(0),R(3));
  R(0)=0x20u;
  R(4)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(12)=LD32(R(2));
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(12);
  fp_ld(c,2,R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0820c2;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0820c2;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0820e0;
L8c0820c2:;
  R(0)=0x20u;
  R(2)=0x8c0685b4u;
  R(5)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(6)=0xcu;
  R(4)=R(14);
  R(5)=R(5)&0xFFFF;
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { c->pr=0x8c0820dcu; R(4)+=0x8u; f_8c0685b4(c); }
  {  goto L8c0820ec; }
L8c0820e0:;
  R(2)=0x8c0686b8u;
  R(4)=R(14);
  R(6)=0xcu;
  R(5)=0x0u;
  { c->pr=0x8c0820ecu; R(4)+=0x8u; f_8c0686b8(c); }
L8c0820ec:;
  R(0)=0x1au;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c0820fa; }
  { ST32(R(14)+4,R(4)); goto L8c082110; }
L8c0820fa:;
  R(0)=0x32u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)=R(2)&0xFFFF;
  R(3)=R(2);
  R(3)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(3)=0x8c2cfdf4u;
  R(1)=LD32(R(3));
  R(2)+=R(1);
  ST32(R(14)+4,R(2));
L8c082110:;
  R(0)=0x24u;
  R(1)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c08211c;
  { ST32(R(14)+20,R(4)); goto L8c08212e; }
L8c08211c:;
  R(0)=0x34u;
  R(1)=0x8c2cfdf8u;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)=LD32(R(1));
  R(3)=R(3)&0xFFFF;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  ST32(R(14)+20,R(3));
L8c08212e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=(int32_t)(int16_t)LD16(R(6)+24);
  R(12)=R(7);
  R(4)=R(12)&0xFFFF;
  ST16(R(15),R(0));
  R(3)=(int32_t)(int16_t)LD16(R(6));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(14)=R(5); if(k) goto L8c082188; }
  {  goto L8c082376; }
L8c082188:;
  R(3)=LD32(R(14)+20);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c08219a;
  R(0)=(int32_t)(int16_t)LD16(R(14)+24);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(4);
  if(!c->t) goto L8c08219a;
  {  goto L8c082376; }
L8c08219a:;
  R(0)=R(12);
  R(3)=0x8c0810a0u;
  R(13)=0x0u;
  ST32(R(14)+20,R(6));
  ST16(R(14)+24,R(0));
  R(0)=0x1au;
  R(5)=R(12)&0xFFFF;
  ST8(R(14)+R(0),R(13));
  { c->pr=0x8c0821aeu; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0810a0(c); }
  R(9)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(9)+24);
  R(4)=R(12);
  R(2)=0x8c2cfde4u;
  R(4)-=R(0);
  R(1)=0x8c2cfde0u;
  R(0)=0x30u;
  R(3)=LD32(R(2));
  R(11)=(int32_t)(int16_t)LD16(R(9)+R(0));
  R(0)=0x2eu;
  R(10)=(int32_t)(int16_t)LD16(R(9)+R(0));
  R(4)=R(4)&0xFFFF;
  R(11)=R(11)&0xFFFF;
  R(2)=LD32(R(1));
  R(11)<<=2;
  R(12)=0xffffu;
  R(10)=R(10)&0xFFFF;
  R(11)<<=2;
  R(10)+=R(4);
  R(11)+=R(3);
  R(3)=R(10);
  R(10)<<=2;
  R(10)+=R(3);
  c->t=R(10)>>31;R(10)<<=1;
  R(10)+=R(2);
  R(3)=(int32_t)(int16_t)LD16(R(10));
  R(0)=(int32_t)(int16_t)LD16(R(10)+8);
  R(3)=R(3)&0xFFFF;
  c->t=R(3)==R(12);
  { uint32_t k=!c->t; R(8)=R(0); if(k) goto L8c082202; }
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0821fe;
  R(3)=0x8c064eb8u;
  R(4)=R(14);
  R(5)=0x8c0bc9fcu;
  R(6)=0x16fu;
  { c->pr=0x8c0821feu; R(4)+=0x4u; f_8c064eb8(c); }
L8c0821fe:;
  { ST32(R(14)+4,R(13)); goto L8c08228e; }
L8c082202:;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08226e;
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c082260;
  R(2)=0x8c064e90u;
  R(5)=0x8c0bc9fcu;
  R(6)=0x179u;
  { c->pr=0x8c08221au; R(4)=0x24u; f_8c064e90(c); }
  {  goto L8c08226a; }
L8c082260:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bc9fcu;
  R(6)=0x179u;
  { c->pr=0x8c08226au; R(4)=0x24u; f_8c0199c4(c); }
L8c08226a:;
  ST32(R(14)+4,R(0));
  R(3)=R(0);
L8c08226e:;
  R(5)=(int32_t)(int16_t)LD16(R(10));
  R(4)=R(15);
  R(2)=0x8c2cfdd4u;
  R(5)=R(5)&0xFFFF;
  R(1)=0x8c081200u;
  R(3)=LD32(R(2));
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  { c->pr=0x8c082284u; R(4)+=0x4u; f_8c081200(c); }
  R(3)=0x8c081660u;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c08228eu; R(4)=LD32(R(14)+4); f_8c081660(c); }
L8c08228e:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+2);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(12);
  if(!c->t) goto L8c08229a;
  { ST32(R(14)+8,R(13)); goto L8c0822aa; }
L8c08229a:;
  R(1)=0x8c2cfdd0u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=LD32(R(1));
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(2);
  ST32(R(14)+8,R(0));
L8c0822aa:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0822e0;
  R(2)=0x8c2cfdd8u;
  R(0)=(int32_t)(int16_t)LD16(R(10)+6);
  R(3)=LD32(R(2));
  R(0)=R(0)&0xFFFF;
  R(0)<<=2;
  R(0)+=R(3);
  { ST32(R(14)+16,R(0)); goto L8c0822e2; }
L8c0822e0:;
  ST32(R(14)+16,R(13));
L8c0822e2:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(10)=R(13);
  R(6)=0x8c2cfddcu;
  R(0)=R(0)&0xFFFF;
  ST32(R(14)+12,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(9)+12);
  R(4)=LD32(R(14));
  R(14)=0x2u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(7)=0x1u; if(k) goto L8c082376; }
L8c0822fa:;
  R(0)=(int32_t)(int16_t)LD16(R(11)+6);
  R(5)=R(8)&0xFFFF;
  R(2)=0x8c2cfde8u;
  R(0)=R(0)&0xFFFF;
  R(3)=LD32(R(2));
  R(5)+=R(0);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(1)=(int32_t)(int16_t)LD16(R(5));
  R(1)=R(1)&0xFFFF;
  c->t=R(1)==R(12);
  if(c->t) goto L8c082354;
  R(1)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(R(6));
  R(1)=R(1)&0xFFFF;
  R(3)=R(1);
  R(3)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(1)+=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
  ST16(R(4),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(11)+2);
  ST8(R(4)+3,R(0));
  R(0)=R(7);
  ST8(R(4)+2,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(1)=LD32(R(6));
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  R(3)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  ST8(R(4)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(1)=LD32(R(6));
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  R(3)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)+=R(1);
  { R(0)=(int32_t)(int8_t)LD8(R(0)+4); goto L8c082364; }
L8c082354:;
  ST16(R(4),R(12));
  R(0)=(int32_t)(int8_t)LD8(R(11)+2);
  ST8(R(4)+3,R(0));
  R(0)=R(7);
  ST8(R(4)+2,R(0));
  R(0)=R(14);
  ST8(R(4)+4,R(0));
  R(0)=R(13);
L8c082364:;
  ST8(R(4)+5,R(0));
  R(10)+=0x1u;
  R(0)=(int32_t)(int16_t)LD16(R(9)+12);
  R(3)=R(10)&0xFFFF;
  R(11)+=0x10u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  { uint32_t k=!c->t; R(4)+=0x6u; if(k) goto L8c0822fa; }
L8c082376:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0823c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=0x40u;
  R(13)=R(7);
  R(14)=R(5);
  ST32(R(15),R(6));
  R(12)=LD32(R(15)+R(0));
  { c->pr=0x8c0823e6u; R(5)=R(14); f_8c082160(c); }
  R(0)=0x1au;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0823fa;
  R(0)=0x3cu;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0823fa;
  {  goto L8c082614; }
L8c0823fa:;
  R(0)=0x1au;
  R(3)=0x1u;
  ST8(R(14)+R(0),R(3));
  R(4)=LD32(R(15));
  R(3)=0x8c0810a0u;
  R(0)=(int32_t)(int16_t)LD16(R(4)+24);
  R(4)=R(0);
  { c->pr=0x8c08240cu; R(5)=R(13)&0xFFFF; f_8c0810a0(c); }
  R(10)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(10)+24);
  R(2)=0x8c2cfde4u;
  R(9)=0x0u;
  R(3)=R(0);
  R(0)=R(13);
  R(0)-=R(3);
  R(1)=0x8c2cfde0u;
  ST16(R(15)+8,R(0));
  R(0)=0x30u;
  R(11)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(11)=R(11)&0xFFFF;
  R(3)=LD32(R(2));
  R(11)<<=2;
  R(2)=LD32(R(1));
  R(11)<<=2;
  R(0)=R(0)&0xFFFF;
  R(11)+=R(3);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(0)=R(0)&0xFFFF;
  R(0)+=R(3);
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(0)+8);
  ST16(R(15)+12,R(0));
  ST16(R(15),R(9));
  R(0)=0x8c082530u;
  R(8)=0xffffu;
  fp_ld(c,13,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+12);
  c->fr[14]=0x3F800000u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>0;
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c082462; }
  {  goto L8c082614; }
L8c082462:;
  R(0)=(int32_t)(int16_t)LD16(R(11)+2);
  R(4)=R(0);
  R(3)=R(4)&0xFFFF;
  c->t=R(3)==R(8);
  if(!c->t) goto L8c082470;
  {  goto L8c0825fe; }
L8c082470:;
  R(3)=R(4)&0xFFFF;
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  R(3)<<=2;
  R(0)=0x10u;
  R(3)+=R(12);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c082488;
  {  goto L8c0825fe; }
L8c082488:;
  R(0)=(int32_t)(int16_t)LD16(R(11)+6);
  R(1)=0x8c2cfde8u;
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(2)=LD32(R(1));
  R(0)=R(0)&0xFFFF;
  R(3)+=R(0);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(2)=0x8c2cfdecu;
  ST32(R(15)+4,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(4)=LD32(R(11)+8);
  R(0)=R(0)&0xFFFF;
  R(6)=LD32(R(2));
  R(4)+=R(0);
  R(3)=0x8c2cfdf0u;
  R(4)<<=2;
  R(4)+=R(6);
  R(5)=LD32(R(3));
  R(1)=LD32(R(4));
  R(4)=R(5);
  R(0)=R(1);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(0);
  R(1)<<=2;
  R(4)+=R(1);
  R(0)=(int32_t)(int16_t)LD16(R(4)+18);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x80)==0;
  { uint32_t k=c->t; R(7)=R(13)&0xFFFF; if(k) goto L8c082566; }
  R(0)=(int32_t)(int16_t)LD16(R(4)+18);
  R(1)=0x200u;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(1))==0;
  if(c->t) goto L8c082560;
  R(2)=LD32(R(11)+8);
  R(2)<<=2;
  R(6)+=R(2);
  R(0)=LD32(R(6));
  R(2)=R(0);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(5)+=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(4)+16);
  R(6)=R(0)&0xFFFF;
  R(0)=(int32_t)(int16_t)LD16(R(10)+14);
  R(7)-=R(6);
  R(2)=R(0)&0xFFFF;
  R(0)=(int32_t)(int16_t)LD16(R(5)+16);
  c->fpul=R(7);
  R(0)=R(0)&0xFFFF;
  R(2)+=R(0);
  R(2)-=R(6);
  fp_float(c,3);
  c->fpul=R(2);
  fp_float(c,2);
  fp_mov(c,4,3);
  { fp_arith(c,3,4,2); goto L8c082590; }
L8c082560:;
  R(5)=R(4);
  { fp_mov(c,4,15); goto L8c082590; }
L8c082566:;
  R(5)=R(4);
  R(5)+=0x24u;
  R(0)=(int32_t)(int16_t)LD16(R(5)+16);
  R(1)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(4)+16);
  c->t=R(1)==R(0);
  if(!c->t) goto L8c082578;
  { fp_mov(c,4,15); goto L8c082590; }
L8c082578:;
  R(0)=(int32_t)(int16_t)LD16(R(4)+16);
  R(6)=R(0)&0xFFFF;
  R(0)=(int32_t)(int16_t)LD16(R(5)+16);
  R(7)-=R(6);
  c->fpul=R(7);
  R(0)=R(0)&0xFFFF;
  R(0)-=R(6);
  fp_float(c,3);
  c->fpul=R(0);
  fp_float(c,2);
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
L8c082590:;
  R(0)=0x22u;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0825b6;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c0825b6;
  R(3)=(int32_t)(int16_t)LD16(R(5)+R(0));
  fp_mov(c,2,4);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
  fp_arith(c,2,5,13);
  fp_mov(c,3,4);
  fp_arith(c,2,3,5);
  fp_arith(c,1,3,5);
  fp_arith(c,0,3,14);
  fp_mov(c,4,3);
  fp_arith(c,2,4,2);
L8c0825b6:;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2cfddcu;
  R(1)=(int32_t)(int16_t)LD16(R(2));
  R(6)=LD32(R(3));
  R(1)=R(1)&0xFFFF;
  R(2)=R(1);
  R(2)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(2);
  R(1)+=R(6);
  R(0)=(int32_t)(int16_t)LD16(R(1));
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(8);
  if(c->t) goto L8c0825e2;
  R(14)=LD32(R(15)+4);
  R(14)=(int32_t)(int16_t)LD16(R(14));
  R(14)=R(14)&0xFFFF;
  R(2)=R(14);
  R(2)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(2);
  R(14)+=R(6);
L8c0825e2:;
  R(7)=R(12);
  R(14)=R(9)&0xFF;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(11)+2);
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(7)=LD32(R(7)+R(0));
  R(7)=LD32(R(7)+32);
  { c->pr=0x8c0825fcu; R(6)=R(11); f_8c0819c0(c); }
  R(15)+=0x4u;
L8c0825fe:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(2)=R(2)&0xFFFF;
  R(0)=(int32_t)(int16_t)LD16(R(10)+12);
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  { uint32_t k=c->t; R(11)+=0x10u; if(k) goto L8c082614; }
  {  goto L8c082462; }
L8c082614:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08262e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(4));
  R(3)=R(14)&0xFFFF;
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c082670;
  R(0)=(int32_t)(int16_t)LD16(R(4)+24);
  R(3)=0x8c0810a0u;
  R(4)=R(0);
  { c->pr=0x8c082648u; R(5)=R(14)&0xFFFF; f_8c0810a0(c); }
  R(4)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(4)+24);
  R(1)=0x8c2cfde0u;
  R(14)-=R(0);
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(14)=R(14)&0xFFFF;
  R(4)=LD32(R(1));
  R(3)=R(3)&0xFFFF;
  R(3)+=R(14);
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  c->t=R(3)>>31;R(3)<<=1;
  R(4)+=R(3);
  R(3)=0xffffu;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c082678;
L8c082670:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c082678:;
  R(2)=R(0);
  R(1)=0x8c2cfdd0u;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(2)=LD32(R(1));
  R(0)<<=2;
  R(0)+=R(2);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08268c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(5);
  R(3)=R(14)&0xFFFF;
  ST32(R(15),R(6));
  R(2)=(int32_t)(int16_t)LD16(R(4));
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c0826d2;
  R(0)=(int32_t)(int16_t)LD16(R(4)+24);
  R(3)=0x8c0810a0u;
  R(4)=R(0);
  { c->pr=0x8c0826aau; R(5)=R(14)&0xFFFF; f_8c0810a0(c); }
  R(4)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(4)+24);
  R(1)=0x8c2cfde0u;
  R(14)-=R(0);
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(14)=R(14)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  R(3)+=R(14);
  R(14)=LD32(R(1));
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=0xffffu;
  c->t=R(3)>>31;R(3)<<=1;
  R(14)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(3)=R(3)&0xFFFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c082700;
L8c0826d2:;
  R(0)=0x0u;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c082700:;
  R(5)=(int32_t)(int16_t)LD16(R(14));
  R(4)=R(15);
  R(1)=0x8c2cfdd4u;
  R(5)=R(5)&0xFFFF;
  R(2)=0x8c081200u;
  R(3)=LD32(R(1));
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  { c->pr=0x8c082716u; R(4)+=0x4u; f_8c081200(c); }
  R(3)=0x8c081660u;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c082720u; R(4)=LD32(R(15)); f_8c081660(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082764(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c082768(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0x25u;
  R(5)=0x40u;
  R(4)=LD32(R(3)+4);
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(5)&R(0))==0;
  if(c->t) goto L8c08277c;
  { R(5)=0x1u; goto L8c08277e; }
L8c08277c:;
  R(5)=0x0u;
L8c08277e:;
  { R(0)=R(5); return; }
}
void f_8c082782(SH4Ctx *c) {
  R(3)=0x8c123ce4u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c082788(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c0827c0(SH4Ctx *c) {
  R(3)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c0827e8; }
  R(4)=R(13);
  R(4)<<=2;
  R(1)=0x8c064e90u;
  R(2)=R(13);
  R(5)=0x8c0bca64u;
  R(6)=0x24u;
  R(4)+=R(2);
  { c->pr=0x8c0827e4u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c0827fa; }
L8c0827e8:;
  R(4)=R(13);
  R(4)<<=2;
  R(1)=0x8c0199c4u;
  R(2)=R(13);
  R(5)=0x8c0bca64u;
  R(6)=0x24u;
  R(4)+=R(2);
  { c->pr=0x8c0827fau; R(4)<<=2; f_8c0199c4(c); }
L8c0827fa:;
  R(5)=R(13);
  R(5)<<=2;
  R(2)=0x8c076d08u;
  R(3)=R(0);
  R(3)=R(13);
  R(5)+=R(3);
  ST32(R(14),R(0));
  R(5)<<=2;
  { c->pr=0x8c08280eu; R(4)=R(0); f_8c076d08(c); }
  R(4)=0x0u;
  R(3)=R(4);
  c->t=R(3)>=R(13);
  R(6)=R(4);
  R(5)=R(4);
  { uint32_t k=c->t; R(7)=0x1u; if(k) goto L8c08284c; }
L8c08281c:;
  R(0)=0x11u;
  R(1)=LD32(R(14));
  R(6)+=0x1u;
  R(1)+=R(5);
  c->t=R(6)>=R(13);
  ST32(R(1)+8,R(4));
  R(3)=LD32(R(14));
  R(3)+=R(5);
  ST32(R(3)+12,R(4));
  R(2)=LD32(R(14));
  R(2)+=R(5);
  ST32(R(2),R(4));
  R(3)=LD32(R(14));
  R(3)+=R(5);
  ST32(R(3)+4,R(4));
  R(2)=LD32(R(14));
  R(2)+=R(5);
  ST8(R(2)+R(0),R(7));
  R(0)=0x10u;
  R(3)=LD32(R(14));
  R(3)+=R(5);
  ST8(R(3)+R(0),R(4));
  { uint32_t k=!c->t; R(5)+=0x14u; if(k) goto L8c08281c; }
L8c08284c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082854(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4));
  R(2)=R(3);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c082870; }
  R(3)=0x8c064eb8u;
  R(6)=0x46u;
  R(5)=0x8c0bca64u;
  { c->pr=0x8c08286cu; R(4)=R(15); f_8c064eb8(c); }
  R(2)=0x0u;
  ST32(R(15),R(2));
L8c082870:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0828a0(SH4Ctx *c) {
  R(0)=0xa0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(4));
  R(14)=LD32(R(1)+R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0828e0;
  R(2)=0xffffu;
  R(3)=R(5)&0xFFFF;
  R(0)=0xa4u;
  c->t=R(3)==R(2);
  { uint32_t k=c->t; R(7)=LD32(R(1)+R(0)); if(k) goto L8c0828ca; }
  R(5)=R(5)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(0)=0x10u;
  R(5)+=R(14);
  { ST8(R(5)+R(0),R(6)); goto L8c0828e0; }
L8c0828ca:;
  R(5)=0x0u;
  R(1)=R(5);
  c->t=R(1)>=R(7);
  { uint32_t k=c->t; R(4)=R(14); if(k) goto L8c0828e0; }
L8c0828d4:;
  R(5)+=0x1u;
  R(0)=0x10u;
  c->t=R(5)>=R(7);
  ST8(R(4)+R(0),R(6));
  { uint32_t k=!c->t; R(4)+=0x14u; if(k) goto L8c0828d4; }
L8c0828e0:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0828e4(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0828fc;
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=LD32(R(4)+48); if(k) goto L8c0828f6; }
  R(3)=0xffffff7cu;
  { R(6)&=R(3); goto L8c0828fa; }
L8c0828f6:;
  R(3)=0x83u;
  R(6)|=R(3);
L8c0828fa:;
  ST32(R(4)+48,R(6));
L8c0828fc:;
  {  return; }
}
void f_8c082920(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(0)=0xa0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(4)+4);
  R(13)=LD32(R(13));
  R(12)=LD32(R(13)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(14)=R(6); if(k) goto L8c0829cc; }
  R(2)=0xffffu;
  R(3)=R(5)&0xFFFF;
  R(0)=0xa4u;
  c->t=R(3)==R(2);
  { uint32_t k=c->t; R(11)=LD32(R(13)+R(0)); if(k) goto L8c08296e; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(12);
  R(0)=0x11u;
  ST8(R(4)+R(0),R(14));
  R(5)=LD32(R(4)+4);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08295e;
  { R(4)=R(5); goto L8c082960; }
L8c08295e:;
  R(4)=LD32(R(4));
L8c082960:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(5)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0828e4(c); return; } }
L8c08296e:;
  R(13)=0x0u;
  R(3)=R(13);
  c->t=R(3)>=R(11);
  if(c->t) goto L8c0829cc;
L8c082976:;
  R(4)=R(13);
  R(4)<<=2;
  R(3)=R(13);
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(12);
  R(0)=0x11u;
  ST8(R(4)+R(0),R(14));
  R(5)=LD32(R(4)+4);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0829c0;
  { R(4)=R(5); goto L8c0829c2; }
L8c0829c0:;
  R(4)=LD32(R(4));
L8c0829c2:;
  { c->pr=0x8c0829c6u; R(5)=R(14); f_8c0828e4(c); }
  R(13)+=0x1u;
  c->t=R(13)>=R(11);
  if(!c->t) goto L8c082976;
L8c0829cc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0829d8(SH4Ctx *c) {
  R(0)=0xa0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(4));
  R(14)=LD32(R(1)+R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c082a1a;
  R(0)=0xa4u;
  R(3)=R(5)&0xFFFF;
  R(2)=0xffffu;
  R(7)=LD32(R(1)+R(0));
  c->t=R(3)==R(2);
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c082a04; }
  R(5)=R(5)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(0)=0x11u;
  R(5)+=R(14);
  { ST8(R(5)+R(0),R(4)); goto L8c082a1a; }
L8c082a04:;
  R(1)=0x0u;
  R(5)=R(4);
  c->t=R(1)>=R(7);
  { uint32_t k=c->t; R(6)=R(14); if(k) goto L8c082a1a; }
L8c082a0e:;
  R(5)+=0x1u;
  R(0)=0x11u;
  c->t=R(5)>=R(7);
  ST8(R(6)+R(0),R(4));
  { uint32_t k=!c->t; R(6)+=0x14u; if(k) goto L8c082a0e; }
L8c082a1a:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082a40(SH4Ctx *c) {
  R(4)=0x8c2d36f0u;
  R(5)=0x8c2d3498u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(4));
  R(13)=(int32_t)(int16_t)LD16(R(4));
  R(0)=R(0)&0xFFFF;
  R(2)=0x8c076d08u;
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(0)=R(13)&0xFFFF;
  c->t=R(0)>>31;R(0)<<=1;
  ST16(R(4),R(3));
  R(14)=R(13)&0xFFFF;
  R(3)=0xfffeu;
  R(14)<<=2;
  R(14)<<=2;
  ST16(R(5)+R(0),R(3));
  R(5)=0x10u;
  R(3)=0x8c2d21d8u;
  R(14)+=R(3);
  { uint32_t tg=R(2); c->pr=0x8c082a70u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=0x0u;
  R(0)=R(14);
  ST32(R(14),R(4));
  ST32(R(14)+4,R(4));
  ST32(R(14)+8,R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082a82(SH4Ctx *c) {
  R(3)=0x8c2d21d8u;
  R(5)=0x8c2d36f0u;
  R(4)-=R(3);
  R(0)=0x8c2d3498u;
  R(4)>>=2;
  R(2)=(int32_t)(int16_t)LD16(R(5));
  R(4)>>=2;
  R(1)=R(4)&0xFFFF;
  c->t=R(1)>>31;R(1)<<=1;
  ST16(R(1)+R(0),R(2));
  { ST16(R(5),R(4)); return; }
}
void f_8c082a9a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c082b1a;
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c082b00;
  R(2)=0x8c064e90u;
  R(5)=0x8c0bca64u;
  R(6)=0x140u;
  { c->pr=0x8c082ab8u; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c082b0a; }
L8c082b00:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bca64u;
  R(6)=0x140u;
  { c->pr=0x8c082b0au; R(4)=0xcu; f_8c0199c4(c); }
L8c082b0a:;
  R(4)=0x0u;
  R(3)=R(0);
  ST32(R(14),R(0));
  ST32(R(3),R(4));
  R(2)=LD32(R(14));
  ST32(R(2)+4,R(4));
  R(3)=LD32(R(14));
  ST32(R(3)+8,R(4));
L8c082b1a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082b20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(13));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082b9a;
  R(3)=LD32(R(13));
  R(2)=LD32(R(3)+8);
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c082b8e; }
L8c082b38:;
  R(4)=LD32(R(13));
  R(4)=LD32(R(4));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082b48;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c082b48:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082b54;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c082b54:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082b7e;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c082b70;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c082b70:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c082b7e;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c082b7e:;
  ST32(R(4),R(14));
  ST32(R(4)+4,R(14));
  { c->pr=0x8c082b86u; ST32(R(4)+8,R(14)); f_8c082a82(c); }
  R(3)=LD32(R(13));
  R(2)=LD32(R(3)+8);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c082b38;
L8c082b8e:;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bca64u;
  R(6)=0x159u;
  { c->pr=0x8c082b98u; R(4)=R(13); f_8c064eb8(c); }
  ST32(R(13),R(14));
L8c082b9a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082be0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  c->t=(R(13)&R(13))==0;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(11)=R(6); if(k) goto L8c082bfa; }
  {  goto L8c082d2a; }
L8c082bfa:;
  R(14)=LD32(R(13));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(4)=R(10)&0xFFFF; if(k) goto L8c082c1a; }
L8c082c02:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(4);
  if(!c->t) goto L8c082c10;
  R(0)=R(11);
  { ST16(R(14)+14,R(0)); goto L8c082c1a; }
L8c082c10:;
  c->t=(int32_t)R(0)>(int32_t)R(4);
  if(c->t) goto L8c082c1a;
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c082c02;
L8c082c1a:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c082c96; }
  { c->pr=0x8c082c24u;  f_8c082a40(c); }
  R(4)=R(0);
  R(0)=R(10);
  ST16(R(4)+12,R(0));
  R(0)=R(11);
  ST16(R(4)+14,R(0));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082c3a;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c082c3a:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082c46;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c082c46:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082c70;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c082c62;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c082c62:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c082c70;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c082c70:;
  ST32(R(4),R(12));
  ST32(R(4)+4,R(12));
  ST32(R(4)+8,R(12));
  ST32(R(4),R(12));
  R(2)=LD32(R(13)+4);
  ST32(R(4)+4,R(2));
  ST32(R(4)+8,R(13));
  R(3)=LD32(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c082c88;
  { ST32(R(13),R(4)); goto L8c082c8c; }
L8c082c88:;
  R(2)=LD32(R(13)+4);
  ST32(R(2),R(4));
L8c082c8c:;
  ST32(R(13)+4,R(4));
  R(3)=LD32(R(13)+8);
  R(3)+=0x1u;
  { ST32(R(13)+8,R(3)); goto L8c082d2a; }
L8c082c96:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(4);
  if(c->t) goto L8c082d2a;
  { c->pr=0x8c082ca2u;  f_8c082a40(c); }
  R(4)=R(0);
  R(0)=R(10);
  ST16(R(4)+12,R(0));
  R(0)=R(11);
  ST16(R(4)+14,R(0));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082cb8;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c082cb8:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082cc4;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c082cc4:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082cee;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c082ce0;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c082ce0:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c082cee;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c082cee:;
  ST32(R(4),R(12));
  ST32(R(4)+4,R(12));
  ST32(R(4)+8,R(12));
  ST32(R(4),R(14));
  R(2)=LD32(R(14)+4);
  ST32(R(4)+4,R(2));
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082d0c;
  R(3)=LD32(R(14)+4);
  ST32(R(3),R(4));
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(2)+8);
  { ST32(R(4)+8,R(3)); goto L8c082d10; }
L8c082d0c:;
  R(1)=LD32(R(14)+8);
  ST32(R(1),R(4));
L8c082d10:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c082d1c;
  ST32(R(14)+4,R(4));
  R(2)=LD32(R(14)+8);
  { ST32(R(4)+8,R(2)); goto L8c082d22; }
L8c082d1c:;
  R(1)=LD32(R(14)+4);
  R(3)=LD32(R(1)+8);
  ST32(R(3)+4,R(4));
L8c082d22:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+8);
  R(3)+=0x1u;
  ST32(R(2)+8,R(3));
L8c082d2a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082d38(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c082dc2;
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(6)=0x0u; if(k) goto L8c082d4c; }
  { R(7)=LD32(R(14)); goto L8c082d4e; }
L8c082d4c:;
  R(7)=0x0u;
L8c082d4e:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c082dc2;
L8c082d52:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(3)=R(5)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c082db2;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082dc2;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c082d6e;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(14));
  ST32(R(3)+4,R(2));
L8c082d6e:;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082d7a;
  R(2)=LD32(R(14));
  R(3)=LD32(R(14)+4);
  ST32(R(3),R(2));
L8c082d7a:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082da4;
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c082d96;
  R(3)=LD32(R(14));
  R(1)=LD32(R(14)+8);
  ST32(R(1),R(3));
L8c082d96:;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c082da4;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14)+8);
  ST32(R(1)+4,R(3));
L8c082da4:;
  ST32(R(14),R(6));
  ST32(R(14)+4,R(6));
  ST32(R(14)+8,R(6));
  { c->pr=0x8c082daeu; R(4)=R(14); f_8c082a82(c); }
  {  goto L8c082dc2; }
L8c082db2:;
  R(14)=R(7);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c082dbc;
  { R(7)=LD32(R(14)); goto L8c082dbe; }
L8c082dbc:;
  R(7)=0x0u;
L8c082dbe:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c082d52;
L8c082dc2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082dc8(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c082dea;
  R(6)=LD32(R(4));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(4)=R(5)&0xFFFF; if(k) goto L8c082dea; }
L8c082dd4:;
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(4);
  if(!c->t) goto L8c082de0;
  { R(0)=(int32_t)(int16_t)LD16(R(6)+14); return; }
L8c082de0:;
  c->t=(int32_t)R(0)>(int32_t)R(4);
  if(c->t) goto L8c082dea;
  R(6)=LD32(R(6));
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c082dd4;
L8c082dea:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c082df0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c082df8u;  f_8c082dc8(c); }
  R(14)=R(0);
  R(0)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c082e0c;
  R(3)=0x8c05d852u;
  { c->pr=0x8c082e06u; R(4)=R(14); f_8c05d852(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c082e0c:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c082e40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(c->gbr+92);
  R(3)=0x8c084a1au;
  R(0)|=0x2u;
  c->fr[4]=0x00000000u;
  ST32(c->gbr+92,R(0));
  R(0)=LD32(c->gbr+88);
  { c->pr=0x8c082e52u; R(4)=R(0); f_8c084a1a(c); }
  R(3)=0x8c09a800u;
  R(2)=0x8c123b68u;
  { c->pr=0x8c082e5au; R(4)=LD32(R(2)); f_8c09a800(c); }
  R(2)=0x8c01b1a0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c01b1a0(c); return; } }
}
void f_8c082e60(SH4Ctx *c) {
  {  return; }
}
void f_8c082ea0(SH4Ctx *c) {
  R(3)=0x8c123cd8u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c082eae; }
  { R(6)=LD32(R(4)); goto L8c082eb0; }
L8c082eae:;
  R(6)=0x0u;
L8c082eb0:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c082f0c;
L8c082eb4:;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082ec0;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c082ec0:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082ecc;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c082ecc:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c082ef6;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c082ee8;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c082ee8:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c082ef6;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c082ef6:;
  ST32(R(4),R(5));
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  R(4)=R(6);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c082f06;
  { R(6)=LD32(R(4)); goto L8c082f08; }
L8c082f06:;
  R(6)=R(5);
L8c082f08:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c082eb4;
L8c082f0c:;
  {  return; }
}
void f_8c082f14(SH4Ctx *c) {
  R(3)=0x8c123cd8u;
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  if(c->t) { f_8c082f2c(c); return; }
  { f_8c082f1c(c); return; }
}
void f_8c082f1c(SH4Ctx *c) {
L8c082f1c:;
  R(1)=LD32(R(5)+12);
  c->t=R(1)==R(4);
  if(!c->t) goto L8c082f26;
  { R(0)=R(5); return; }
L8c082f26:;
  R(5)=LD32(R(5));
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c082f1c;
  { f_8c082f2c(c); return; }
}
void f_8c082f26(SH4Ctx *c) {
  R(5)=LD32(R(5));
  c->t=(R(5)&R(5))==0;
  if(!c->t) { f_8c082f1c(c); return; }
  { f_8c082f2c(c); return; }
}
void f_8c082f2c(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c082f32(SH4Ctx *c) {
  { R(0)=LD32(R(4)+36); return; }
}
void f_8c082f36(SH4Ctx *c) {
  { ST32(R(4)+36,R(5)); return; }
}
void f_8c082f3a(SH4Ctx *c) {
  { R(0)=LD32(R(4)+24); return; }
}
void f_8c082f3e(SH4Ctx *c) {
  { ST32(R(4)+24,R(5)); return; }
}
void f_8c082f80(SH4Ctx *c) {
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(4)=LD32(R(4)+28);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(4)+=R(5);
  { R(0)=R(4); return; }
}
void f_8c082fa0(SH4Ctx *c) {
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c082faa;
  { R(0)=0x0u; return; }
L8c082faa:;
  R(3)=0x4e20u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c082fb8;
  R(2)=0x8c2e2478u;
  R(0)=LD32(R(2));
  { R(1)=R(4); goto L8c082fc0; }
L8c082fb8:;
  R(2)=0x8c2e247cu;
  R(1)=0xffffb1e0u;
  R(0)=LD32(R(2));
  R(1)+=R(4);
L8c082fc0:;
  R(0)=LD32(R(0));
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  {  return; }
}
void f_8c083000(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  R(0)=0x1du;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c083008(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  R(0)=0x2cu;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c083010(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  R(0)=0x1du;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c083018(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=LD32(R(4)+4);
  R(0)=0x1eu;
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=0x1du;
  ST8(R(15),R(3));
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(4)=LD32(R(4)+4);
  ST8(R(4)+R(0),R(3));
  { R(15)+=0x4u; return; }
}
void f_8c08302e(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(7)=LD32(R(4)+4);
  R(0)=0x1du;
  R(2)=R(7);
  R(6)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(0)=0x1eu;
  R(7)=R(2);
  ST32(R(15),R(2));
  R(2)=R(5)&0xFF;
  R(7)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(6)=R(6)&0xFF;
  R(6)+=R(2);
  R(7)=R(7)&0xFF;
  c->t=(int32_t)R(6)>(int32_t)R(7);
  if(c->t) goto L8c08305a;
  R(7)=LD32(R(4)+4);
  R(0)=0x1du;
  R(6)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(4)=R(7);
  R(5)+=R(6);
  { ST8(R(4)+R(0),R(5)); goto L8c083068; }
L8c08305a:;
  R(5)=LD32(R(4)+4);
  R(2)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=0x1du;
  ST8(R(15),R(2));
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(4)=LD32(R(4)+4);
  ST8(R(4)+R(0),R(2));
L8c083068:;
  { R(15)+=0x4u; return; }
}
void f_8c08306c(SH4Ctx *c) {
  R(6)=LD32(R(4)+4);
  R(0)=0x1du;
  R(2)=R(5)&0xFF;
  R(7)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(7)=R(7)&0xFF;
  R(7)-=R(2);
  c->t=(int32_t)R(7)>0;
  if(!c->t) goto L8c083084;
  R(7)=LD32(R(4)+4);
  R(6)=(int32_t)(int8_t)LD8(R(7)+R(0));
  { R(6)-=R(5); goto L8c083086; }
L8c083084:;
  R(6)=0x0u;
L8c083086:;
  R(5)=LD32(R(4)+4);
  ST8(R(5)+R(0),R(6));
  R(4)=LD32(R(4)+4);
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c083090(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  R(0)=0x1eu;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c083098(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  R(0)=0x1eu;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c0830a0(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=LD32(R(4)+4);
  R(0)=0x1fu;
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=0x1eu;
  ST8(R(15),R(3));
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(4)=LD32(R(4)+4);
  ST8(R(4)+R(0),R(3));
  { R(15)+=0x4u; return; }
}
void f_8c0830b6(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(7)=LD32(R(4)+4);
  R(0)=0x1eu;
  R(2)=R(7);
  R(6)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(0)=0x1fu;
  R(7)=R(2);
  ST32(R(15),R(2));
  R(2)=R(5)&0xFF;
  R(7)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(6)=R(6)&0xFF;
  R(6)+=R(2);
  R(7)=R(7)&0xFF;
  c->t=(int32_t)R(6)>(int32_t)R(7);
  if(c->t) goto L8c0830e2;
  R(7)=LD32(R(4)+4);
  R(0)=0x1eu;
  R(6)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(4)=R(7);
  R(5)+=R(6);
  { ST8(R(4)+R(0),R(5)); goto L8c0830f0; }
L8c0830e2:;
  R(5)=LD32(R(4)+4);
  R(2)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=0x1eu;
  ST8(R(15),R(2));
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(4)=LD32(R(4)+4);
  ST8(R(4)+R(0),R(2));
L8c0830f0:;
  { R(15)+=0x4u; return; }
}
void f_8c0830f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(0)=0x1eu;
  R(2)=R(5)&0xFF;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+4);
  R(6)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(6)=R(6)&0xFF;
  R(6)-=R(2);
  c->t=(int32_t)R(6)>0;
  if(!c->t) goto L8c083118;
  R(6)=LD32(R(14)+4);
  R(2)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(4)=R(6);
  R(2)-=R(5);
  R(5)=R(2);
  { ST8(R(4)+R(0),R(5)); goto L8c08311e; }
L8c083118:;
  R(5)=LD32(R(14)+4);
  R(4)=0x0u;
  ST8(R(5)+R(0),R(4));
L8c08311e:;
  R(5)=0x0u;
  { c->pr=0x8c083124u; R(4)=R(14); f_8c08302e(c); }
  R(4)=LD32(R(14)+4);
  R(0)=0x1eu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c083140(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffeacu;
  R(15)+=R(0);
  ST32(R(15)+8,R(4));
  R(0)=0x4u;
  R(13)=R(5);
  c->fr[4]=0x00000000u;
  ST32(R(15)+20,R(6));
  fp_st(c,4,R(13));
  fp_st(c,4,R(0)+R(13));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(13));
  R(4)=LD32(R(15)+8);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c083170;
  {  goto L8c083344; }
L8c083170:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c083176u;  f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(5)=R(0); if(k) goto L8c083180; }
  {  goto L8c083344; }
L8c083180:;
  R(0)=0x170u;
  R(4)=LD32(R(5)+R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c08318c;
  {  goto L8c083344; }
L8c08318c:;
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0831a8;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0831ae;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0831e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0831e6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c083220;
  R(14)=R(4);
  { R(14)+=0x8u; goto L8c083224; }
L8c0831a8:;
  R(14)=R(4);
  { R(14)+=0x30u; goto L8c083224; }
L8c0831ae:;
  R(14)=R(4);
  { R(14)+=0x58u; goto L8c083224; }
L8c0831e0:;
  R(14)=0x80u;
  {  goto L8c083222; }
L8c0831e6:;
  R(14)=0xa8u;
  {  goto L8c083222; }
L8c083220:;
  R(14)=0xd0u;
L8c083222:;
  R(14)+=R(4);
L8c083224:;
  R(3)=0x8c05a3e0u;
  R(12)=LD32(R(14)+32);
  { c->pr=0x8c08322cu; R(4)=R(12); f_8c05a3e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c083234;
  {  goto L8c083344; }
L8c083234:;
  R(3)=0x8c05a3fau;
  { c->pr=0x8c08323au; R(4)=R(12); f_8c05a3fa(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c083244;
  {  goto L8c083344; }
L8c083244:;
  R(3)=R(15);
  R(3)+=0x10u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(2)=0x8c011d88u;
  R(7)=R(15);
  R(6)+=0x8u;
  R(7)+=0x10u;
  { c->pr=0x8c083258u; R(5)=0x0u; f_8c011d88(c); }
  R(15)+=0x4u;
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c083344;
  R(3)=0x8c0a2880u;
  R(12)=LD32(R(14)+36);
  { c->pr=0x8c083268u; R(4)=LD32(R(12)+4); f_8c0a2880(c); }
  R(2)=0x8c093416u;
  { c->pr=0x8c08326eu; R(4)=R(0); f_8c093416(c); }
  R(4)=R(0);
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(12)+36);
  R(11)=LD32(R(4)+4);
  R(4)=R(15);
  { c->pr=0x8c08327cu; R(4)+=0x18u; f_8c0153d8(c); }
  R(4)=0xb0u;
  R(5)=R(15);
  R(2)=0x8c014eaau;
  R(6)=R(14);
  R(6)+=0x10u;
  R(5)+=0x18u;
  { c->pr=0x8c08328cu; R(4)+=R(15); f_8c014eaa(c); }
  R(4)=0xa4u;
  R(5)=R(15);
  R(10)=0x8c014f10u;
  R(6)=R(14);
  R(5)+=0x18u;
  R(6)+=0x4u;
  { c->pr=0x8c08329cu; R(4)+=R(15); f_8c014f10(c); }
  R(5)=0xb0u;
  R(4)=0x98u;
  R(3)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0832a8u; R(4)+=R(15); f_8c05e6ea(c); }
  R(5)=0xb0u;
  R(4)=0x8cu;
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0832b4u; R(4)+=R(15); f_8c05e6ea(c); }
  R(5)=0x98u;
  R(6)=0xa4u;
  R(4)=0x98u;
  R(5)+=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0832c4u; R(4)+=R(15); f_8c05e5f4(c); }
  R(5)=0x8cu;
  R(6)=0xa4u;
  R(4)=0x8cu;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0832d4u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0x8cu;
  R(6)=0x98u;
  R(4)=0x80u;
  R(5)+=R(15);
  R(3)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0832e4u; R(4)+=R(15); f_8c05e612(c); }
  R(2)=0xbcu;
  R(7)=R(11);
  R(6)=0x8cu;
  R(2)+=R(15);
  R(5)=0x98u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x1u;
  R(3)=R(15);
  R(3)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0786e0u;
  R(4)=0xa4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)+=R(15);
  R(5)+=R(15);
  { c->pr=0x8c083306u; R(4)+=R(15); f_8c0786e0(c); }
  R(15)+=0xcu;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c083344;
  R(0)=0xceu;
  R(7)=0x148u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xccu;
  R(7)+=R(15);
  R(3)=0x8c087680u;
  R(5)=(int32_t)(int16_t)LD16(R(15)+R(0));
  { c->pr=0x8c083320u; R(4)=R(11); f_8c087680(c); }
  R(6)=0x148u;
  R(5)=LD32(R(12)+36);
  R(4)=0x13cu;
  R(6)+=R(15);
  { uint32_t tg=R(10); c->pr=0x8c08332cu; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(3)=0x8c0151c8u;
  R(4)=0xd4u;
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c083338u; R(4)+=R(15); f_8c0151c8(c); }
  R(5)=0xd4u;
  R(6)=0x13cu;
  R(5)+=R(15);
  R(6)+=R(15);
  { uint32_t tg=R(10); c->pr=0x8c083344u; R(4)=R(13); sh4_call(c,tg); }
L8c083344:;
  R(1)=0x154u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0831e0(SH4Ctx *c) {
  R(14)=0x80u;
  {  goto L8c083222; }
L8c083222:;
  R(14)+=R(4);
  R(3)=0x8c05a3e0u;
  R(12)=LD32(R(14)+32);
  { c->pr=0x8c08322cu; R(4)=R(12); f_8c05a3e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c083234;
  {  goto L8c083344; }
L8c083234:;
  R(3)=0x8c05a3fau;
  { c->pr=0x8c08323au; R(4)=R(12); f_8c05a3fa(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c083244;
  {  goto L8c083344; }
L8c083244:;
  R(3)=R(15);
  R(3)+=0x10u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(2)=0x8c011d88u;
  R(7)=R(15);
  R(6)+=0x8u;
  R(7)+=0x10u;
  { c->pr=0x8c083258u; R(5)=0x0u; f_8c011d88(c); }
  R(15)+=0x4u;
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c083344;
  R(3)=0x8c0a2880u;
  R(12)=LD32(R(14)+36);
  { c->pr=0x8c083268u; R(4)=LD32(R(12)+4); f_8c0a2880(c); }
  R(2)=0x8c093416u;
  { c->pr=0x8c08326eu; R(4)=R(0); f_8c093416(c); }
  R(4)=R(0);
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(12)+36);
  R(11)=LD32(R(4)+4);
  R(4)=R(15);
  { c->pr=0x8c08327cu; R(4)+=0x18u; f_8c0153d8(c); }
  R(4)=0xb0u;
  R(5)=R(15);
  R(2)=0x8c014eaau;
  R(6)=R(14);
  R(6)+=0x10u;
  R(5)+=0x18u;
  { c->pr=0x8c08328cu; R(4)+=R(15); f_8c014eaa(c); }
  R(4)=0xa4u;
  R(5)=R(15);
  R(10)=0x8c014f10u;
  R(6)=R(14);
  R(5)+=0x18u;
  R(6)+=0x4u;
  { c->pr=0x8c08329cu; R(4)+=R(15); f_8c014f10(c); }
  R(5)=0xb0u;
  R(4)=0x98u;
  R(3)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0832a8u; R(4)+=R(15); f_8c05e6ea(c); }
  R(5)=0xb0u;
  R(4)=0x8cu;
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0832b4u; R(4)+=R(15); f_8c05e6ea(c); }
  R(5)=0x98u;
  R(6)=0xa4u;
  R(4)=0x98u;
  R(5)+=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0832c4u; R(4)+=R(15); f_8c05e5f4(c); }
  R(5)=0x8cu;
  R(6)=0xa4u;
  R(4)=0x8cu;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0832d4u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0x8cu;
  R(6)=0x98u;
  R(4)=0x80u;
  R(5)+=R(15);
  R(3)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0832e4u; R(4)+=R(15); f_8c05e612(c); }
  R(2)=0xbcu;
  R(7)=R(11);
  R(6)=0x8cu;
  R(2)+=R(15);
  R(5)=0x98u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x1u;
  R(3)=R(15);
  R(3)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0786e0u;
  R(4)=0xa4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)+=R(15);
  R(5)+=R(15);
  { c->pr=0x8c083306u; R(4)+=R(15); f_8c0786e0(c); }
  R(15)+=0xcu;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c083344;
  R(0)=0xceu;
  R(7)=0x148u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xccu;
  R(7)+=R(15);
  R(3)=0x8c087680u;
  R(5)=(int32_t)(int16_t)LD16(R(15)+R(0));
  { c->pr=0x8c083320u; R(4)=R(11); f_8c087680(c); }
  R(6)=0x148u;
  R(5)=LD32(R(12)+36);
  R(4)=0x13cu;
  R(6)+=R(15);
  { uint32_t tg=R(10); c->pr=0x8c08332cu; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(3)=0x8c0151c8u;
  R(4)=0xd4u;
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c083338u; R(4)+=R(15); f_8c0151c8(c); }
  R(5)=0xd4u;
  R(6)=0x13cu;
  R(5)+=R(15);
  R(6)+=R(15);
  { uint32_t tg=R(10); c->pr=0x8c083344u; R(4)=R(13); sh4_call(c,tg); }
L8c083344:;
  R(1)=0x154u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c083220(SH4Ctx *c) {
  R(14)=0xd0u;
  R(14)+=R(4);
  R(3)=0x8c05a3e0u;
  R(12)=LD32(R(14)+32);
  { c->pr=0x8c08322cu; R(4)=R(12); f_8c05a3e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c083234;
  {  goto L8c083344; }
L8c083234:;
  R(3)=0x8c05a3fau;
  { c->pr=0x8c08323au; R(4)=R(12); f_8c05a3fa(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c083244;
  {  goto L8c083344; }
L8c083244:;
  R(3)=R(15);
  R(3)+=0x10u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(2)=0x8c011d88u;
  R(7)=R(15);
  R(6)+=0x8u;
  R(7)+=0x10u;
  { c->pr=0x8c083258u; R(5)=0x0u; f_8c011d88(c); }
  R(15)+=0x4u;
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c083344;
  R(3)=0x8c0a2880u;
  R(12)=LD32(R(14)+36);
  { c->pr=0x8c083268u; R(4)=LD32(R(12)+4); f_8c0a2880(c); }
  R(2)=0x8c093416u;
  { c->pr=0x8c08326eu; R(4)=R(0); f_8c093416(c); }
  R(4)=R(0);
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(12)+36);
  R(11)=LD32(R(4)+4);
  R(4)=R(15);
  { c->pr=0x8c08327cu; R(4)+=0x18u; f_8c0153d8(c); }
  R(4)=0xb0u;
  R(5)=R(15);
  R(2)=0x8c014eaau;
  R(6)=R(14);
  R(6)+=0x10u;
  R(5)+=0x18u;
  { c->pr=0x8c08328cu; R(4)+=R(15); f_8c014eaa(c); }
  R(4)=0xa4u;
  R(5)=R(15);
  R(10)=0x8c014f10u;
  R(6)=R(14);
  R(5)+=0x18u;
  R(6)+=0x4u;
  { c->pr=0x8c08329cu; R(4)+=R(15); f_8c014f10(c); }
  R(5)=0xb0u;
  R(4)=0x98u;
  R(3)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0832a8u; R(4)+=R(15); f_8c05e6ea(c); }
  R(5)=0xb0u;
  R(4)=0x8cu;
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0832b4u; R(4)+=R(15); f_8c05e6ea(c); }
  R(5)=0x98u;
  R(6)=0xa4u;
  R(4)=0x98u;
  R(5)+=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0832c4u; R(4)+=R(15); f_8c05e5f4(c); }
  R(5)=0x8cu;
  R(6)=0xa4u;
  R(4)=0x8cu;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0832d4u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0x8cu;
  R(6)=0x98u;
  R(4)=0x80u;
  R(5)+=R(15);
  R(3)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0832e4u; R(4)+=R(15); f_8c05e612(c); }
  R(2)=0xbcu;
  R(7)=R(11);
  R(6)=0x8cu;
  R(2)+=R(15);
  R(5)=0x98u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x1u;
  R(3)=R(15);
  R(3)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0786e0u;
  R(4)=0xa4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)+=R(15);
  R(5)+=R(15);
  { c->pr=0x8c083306u; R(4)+=R(15); f_8c0786e0(c); }
  R(15)+=0xcu;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c083344;
  R(0)=0xceu;
  R(7)=0x148u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xccu;
  R(7)+=R(15);
  R(3)=0x8c087680u;
  R(5)=(int32_t)(int16_t)LD16(R(15)+R(0));
  { c->pr=0x8c083320u; R(4)=R(11); f_8c087680(c); }
  R(6)=0x148u;
  R(5)=LD32(R(12)+36);
  R(4)=0x13cu;
  R(6)+=R(15);
  { uint32_t tg=R(10); c->pr=0x8c08332cu; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(3)=0x8c0151c8u;
  R(4)=0xd4u;
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c083338u; R(4)+=R(15); f_8c0151c8(c); }
  R(5)=0xd4u;
  R(6)=0x13cu;
  R(5)+=R(15);
  R(6)+=R(15);
  { uint32_t tg=R(10); c->pr=0x8c083344u; R(4)=R(13); sh4_call(c,tg); }
L8c083344:;
  R(1)=0x154u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0833c0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(5));
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(2)); if(k) goto L8c0833f8; }
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0833d6u; R(4)=LD32(R(15)+4); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0833f8; }
  R(0)=0x170u;
  R(4)=LD32(R(4)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0833f8;
  R(0)=0xa4u;
  R(2)=LD32(R(15));
  ST32(R(4)+R(0),R(2));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0833f8;
  R(1)=LD32(R(4)+4);
  R(3)=0xfffeffffu;
  R(1)&=R(3);
  ST32(R(4)+4,R(1));
L8c0833f8:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c083400(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c083422; }
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c083414u; R(4)=LD32(R(15)); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c083422; }
  R(0)=0x170u;
  R(5)=LD32(R(4)+R(0));
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c083460;
L8c083422:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c083460:;
  R(0)=0xa4u;
  R(4)=LD32(R(5)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c08348e;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c08347a;
L8c08346e:;
  R(4)=LD32(R(4)+28);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c08348e;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c08346e;
L8c08347a:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c08348e;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08348e;
  R(0)=0xa4u;
  R(6)=0x0u;
  R(4)=R(6);
  ST32(R(5)+R(0),R(6));
L8c08348e:;
  R(0)=R(4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0834f4(SH4Ctx *c) {
  {  return; }
}
void f_8c0834f8(SH4Ctx *c) {
  R(3)=0x1u;
  ST32(R(4)+32,R(3));
  { ST32(R(4)+28,R(5)); return; }
}
void f_8c083500(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(14)=R(4);
  R(0)=R(5);
  ST16(R(15)+8,R(0));
  ST16(R(15),R(6));
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  R(5)=LD32(R(4)+16);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c083580;
  R(4)=LD32(R(14)+4);
  R(6)=0x10u;
  R(13)=0x8c0685b4u;
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+16);
  R(4)=R(15);
  R(5)=R(3);
  ST32(R(15)+4,R(3));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(3)=R(3)&0xFFFF;
  R(3)<<=2;
  R(3)<<=2;
  ST32(R(15)+12,R(3));
  R(5)=LD32(R(5));
  R(5)+=R(3);
  { uint32_t tg=R(13); c->pr=0x8c08353cu; R(4)+=0x14u; sh4_call(c,tg); }
  R(4)=LD32(R(14)+4);
  R(6)=0x10u;
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+16);
  ST32(R(15),R(3));
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+16);
  ST32(R(15)+16,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(5)=LD32(R(15));
  R(0)=R(0)&0xFFFF;
  R(0)<<=2;
  R(0)<<=2;
  ST32(R(15)+4,R(0));
  R(4)=LD32(R(15)+16);
  R(5)=LD32(R(5));
  R(4)=LD32(R(4));
  R(3)=LD32(R(15)+12);
  R(5)+=R(0);
  { uint32_t tg=R(13); c->pr=0x8c083568u; R(4)+=R(3); sh4_call(c,tg); }
  R(4)=LD32(R(14)+4);
  R(5)=R(15);
  R(6)=0x10u;
  R(4)=LD32(R(4));
  R(5)+=0x14u;
  R(3)=LD32(R(4)+16);
  R(4)=R(3);
  ST32(R(15),R(3));
  R(3)=LD32(R(15)+4);
  R(4)=LD32(R(4));
  { uint32_t tg=R(13); c->pr=0x8c083580u; R(4)+=R(3); sh4_call(c,tg); }
L8c083580:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08358a(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0835b6;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0835b6;
  R(7)=R(7)&0xFFFF;
  R(2)=LD32(R(5));
  R(6)=R(6)&0xFFFF;
  R(3)=LD32(R(4));
  R(7)<<=2;
  R(6)<<=2;
  R(7)<<=2;
  R(6)<<=2;
  R(7)+=R(2);
  R(6)+=R(3);
  R(1)=LD32(R(7)+4);
  R(3)=LD32(R(7));
  ST32(R(6),R(3));
  ST32(R(6)+4,R(1));
  R(1)=LD32(R(7)+12);
  R(3)=LD32(R(7)+8);
  ST32(R(6)+8,R(3));
  ST32(R(6)+12,R(1));
L8c0835b6:;
  {  return; }
}
void f_8c0835ba(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0835c2;
  { R(0)=(int32_t)(int16_t)LD16(R(4)+8); return; }
L8c0835c2:;
  R(0)=0x0u;
  {  return; }
}
void f_8c083620(SH4Ctx *c) {
  R(4)=R(13)&0xFFFF;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bcb48u;
  R(6)=0x7bu;
  R(4)<<=2;
  { c->pr=0x8c08362eu; R(4)<<=2; f_8c0199c4(c); }
  R(6)=0x0u;
  R(7)=0xffffu;
  R(5)=R(6);
  ST32(R(14),R(0));
  ST32(R(14)+4,R(6));
  R(6)=R(13)&0xFFFF;
  R(3)=R(0);
  R(3)=0x0u;
  c->t=R(3)>=R(6);
  { uint32_t k=c->t; R(4)=LD32(R(14)); if(k) goto L8c083650; }
L8c083644:;
  R(5)+=0x1u;
  R(0)=R(7);
  c->t=R(5)>=R(6);
  ST16(R(4)+12,R(0));
  { uint32_t k=!c->t; R(4)+=0x10u; if(k) goto L8c083644; }
L8c083650:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c083658(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(0)=(int32_t)(int16_t)LD16(R(14)+8);
  R(4)=LD32(R(14));
  R(6)=R(0)&0xFFFF;
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(14)+4);
  R(6)<<=2;
  R(6)<<=2;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
}
void f_8c08366e(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c083672(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(4)+10);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x2)==0;
  R(0)=c->t;
  { R(0)^=0x1u; return; }
}
void f_8c0836a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(4)+4);
  R(14)=LD32(R(14));
  R(10)=LD32(R(14)+4);
  c->t=(R(10)&R(10))==0;
  { uint32_t k=!c->t; R(11)=R(5); if(k) goto L8c0836be; }
  {  goto L8c0837c8; }
L8c0836be:;
  R(2)=0x8c084190u;
  { c->pr=0x8c0836c4u; R(4)=R(10); f_8c084190(c); }
  R(2)=0x8c082068u;
  R(13)=R(0);
  R(6)=LD32(R(14)+16);
  R(5)=R(11)&0xFFFF;
  { c->pr=0x8c0836d0u; R(4)=R(0); f_8c082068(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0836da;
  {  goto L8c0837c8; }
L8c0836da:;
  R(3)=0x8c0c758cu;
  R(0)=0x1au;
  R(9)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(9)=R(9)&0xFF; if(k) goto L8c0836f6; }
  R(2)=0x8c064e90u;
  R(5)=0x8c0bcb54u;
  R(6)=0x1a8u;
  { c->pr=0x8c0836f2u; R(4)=R(9); f_8c064e90(c); }
  {  goto L8c083700; }
L8c0836f6:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcb54u;
  R(6)=0x1a8u;
  { c->pr=0x8c083700u; R(4)=R(9); f_8c0199c4(c); }
L8c083700:;
  R(3)=R(0);
  R(0)=0x88u;
  ST32(R(14)+R(0),R(3));
  R(3)=R(11)&0xFFFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(9)=0x0u; if(k) goto L8c083780; }
  R(0)=0x1au;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(4)=R(9); if(k) goto L8c083748; }
  R(0)=(int32_t)(int16_t)LD16(R(12)+2);
  R(3)=R(11)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c083748;
L8c083724:;
  R(0)=0x1au;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(4)+=0x1u;
  R(3)=R(4)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c083748;
  R(2)=R(4)&0xFF;
  R(3)=R(2);
  R(3)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)+=R(12);
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  R(3)=R(11)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(!c->t) goto L8c083724;
L8c083748:;
  R(0)=0x87u;
  { ST8(R(14)+R(0),R(4)); goto L8c08379e; }
L8c083780:;
  R(2)=0x8c0841b8u;
  { c->pr=0x8c083786u; R(4)=R(10); f_8c0841b8(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c083792;
  R(0)=0x87u;
  { R(4)=R(9); goto L8c08379c; }
L8c083792:;
  R(0)=0x1au;
  R(3)=0xffu;
  R(4)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)+=0x6du;
  R(4)+=R(3);
L8c08379c:;
  ST8(R(14)+R(0),R(4));
L8c08379e:;
  { R(11)=R(9); goto L8c0837bc; }
L8c0837a2:;
  R(10)=0x8c08202cu;
  R(5)=R(12);
  { c->pr=0x8c0837aau; R(4)=R(14); f_8c08202c(c); }
  R(10)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(10)+6);
  R(4)=R(11)&0xFF;
  R(9)=R(0);
  R(0)=0x88u;
  R(12)+=0x6u;
  R(0)=LD32(R(14)+R(0));
  R(11)+=0x1u;
  ST8(R(4)+R(0),R(9));
L8c0837bc:;
  R(0)=0x1au;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(11)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0837a2;
L8c0837c8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c083800(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  ST32(R(15)+12,R(4));
  ST32(R(15),R(5));
  ST32(R(15)+8,R(6));
  R(14)=LD32(R(15)+12);
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14));
  R(4)=LD32(R(14)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c083828;
  {  goto L8c083ad4; }
L8c083828:;
  R(2)=0x8c084190u;
  { c->pr=0x8c08382eu;  f_8c084190(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; R(9)=0x0u; if(k) goto L8c08383a; }
  {  goto L8c083aba; }
L8c08383a:;
  R(0)=0x1au;
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c083846;
  {  goto L8c083aba; }
L8c083846:;
  R(0)=0x84u;
  R(2)=(int32_t)(int16_t)LD16(R(12));
  R(13)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=R(2)&0xFFFF;
  R(3)=R(13)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(6)=LD32(R(14)+16); if(k) goto L8c08385c; }
  R(13)=(int32_t)(int16_t)LD16(R(12));
  R(3)=0xffffu;
  R(13)+=R(3);
L8c08385c:;
  R(5)=R(13)&0xFFFF;
  R(11)=0x8c082068u;
  ST32(R(15)+16,R(5));
  { c->pr=0x8c083866u; R(4)=R(12); f_8c082068(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c083870;
  {  goto L8c083aba; }
L8c083870:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08387a;
  {  goto L8c083aba; }
L8c08387a:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c083884;
  {  goto L8c083aba; }
L8c083884:;
  R(3)=0x8c084190u;
  { c->pr=0x8c08388au; R(4)=LD32(R(15)); f_8c084190(c); }
  R(13)=0xffu;
  c->t=(R(0)&R(0))==0;
  R(10)=0x8c08202cu;
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c083898; }
  {  goto L8c083a80; }
L8c083898:;
  R(1)=0x1au;
  R(2)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0838a4;
  {  goto L8c083a80; }
L8c0838a4:;
  R(6)=LD32(R(14)+16);
  R(5)=0x0u;
  { uint32_t tg=R(11); c->pr=0x8c0838acu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(8)=R(0);
  c->t=(R(8)&R(8))==0;
  if(!c->t) goto L8c0838b6;
  {  goto L8c083a10; }
L8c0838b6:;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c083920;
  R(4)=LD32(R(15));
  R(0)=0x1au;
  R(1)=0x8c064e90u;
  R(4)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(5)=0x8c0bcb78u;
  R(4)=R(4)&0xFF;
  R(6)=0x96u;
  R(3)=R(4);
  R(3)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c0838d6u; R(4)+=R(3); f_8c064e90(c); }
  {  goto L8c083938; }
L8c083920:;
  R(4)=LD32(R(15));
  R(0)=0x1au;
  R(1)=0x8c0199c4u;
  R(4)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(5)=0x8c0bcb78u;
  R(4)=R(4)&0xFF;
  R(6)=0x96u;
  R(3)=R(4);
  R(3)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c083938u; R(4)+=R(3); f_8c0199c4(c); }
L8c083938:;
  R(2)=R(0);
  R(0)=0x1au;
  R(5)=R(8);
  ST32(R(15)+4,R(2));
  R(6)=LD32(R(15));
  R(6)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(6)=R(6)&0xFF;
  R(3)=R(6);
  R(3)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(3)=0x8c0685b4u;
  { c->pr=0x8c083954u; R(4)=R(2); f_8c0685b4(c); }
  R(5)=LD32(R(15)+16);
  R(6)=LD32(R(14)+16);
  { uint32_t tg=R(11); c->pr=0x8c08395cu; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  { ST32(R(15)+20,R(9)); goto L8c0839f4; }
L8c083962:;
  ST32(R(15)+28,R(9));
  R(5)=LD32(R(15)+8);
  { uint32_t tg=R(10); c->pr=0x8c08396au; R(4)=R(14); sh4_call(c,tg); }
  R(8)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(8)+6);
  R(4)=R(0)&0xFF;
  c->t=R(4)==R(13);
  if(!c->t) goto L8c083a00;
  R(3)=LD32(R(15)+4);
  ST32(R(15)+24,R(3));
  { ST32(R(15)+16,R(9)); goto L8c0839cc; }
L8c08397c:;
  R(5)=LD32(R(15)+24);
  { uint32_t tg=R(10); c->pr=0x8c083982u; R(4)=R(14); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(11)+6);
  R(4)=R(0)&0xFF;
  c->t=R(4)==R(13);
  if(!c->t) goto L8c0839da;
  R(4)=LD32(R(11));
  R(5)=LD32(R(8));
  c->t=R(5)==R(4);
  if(!c->t) goto L8c0839c0;
  R(4)=0x1u;
  { ST32(R(15)+28,R(4)); goto L8c0839da; }
L8c0839c0:;
  R(2)=LD32(R(15)+16);
  R(2)+=0x1u;
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(15)+24);
  R(3)+=0x6u;
  ST32(R(15)+24,R(3));
L8c0839cc:;
  R(2)=LD32(R(15));
  R(0)=0x1au;
  R(3)=(int32_t)(int8_t)LD8(R(2)+R(0));
  R(2)=LD32(R(15)+16);
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c08397c;
L8c0839da:;
  R(1)=LD32(R(15)+28);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0839e8;
  R(6)=LD32(R(15)+12);
  R(5)=0x2u;
  { c->pr=0x8c0839e8u; R(4)=LD32(R(15)+8); f_8c083ed8(c); }
L8c0839e8:;
  R(2)=LD32(R(15)+20);
  R(2)+=0x1u;
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(15)+8);
  R(3)+=0x6u;
  ST32(R(15)+8,R(3));
L8c0839f4:;
  R(0)=0x1au;
  R(3)=LD32(R(15)+20);
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c083962;
L8c083a00:;
  R(3)=0x8c064eb8u;
  R(4)=R(15);
  R(5)=0x8c0bcb78u;
  R(6)=0xc3u;
  { c->pr=0x8c083a0cu; R(4)+=0x4u; f_8c064eb8(c); }
  {  goto L8c083aba; }
L8c083a10:;
  R(6)=LD32(R(14)+16);
  R(5)=0x0u;
  { uint32_t tg=R(11); c->pr=0x8c083a18u; R(4)=R(12); sh4_call(c,tg); }
  R(8)=R(0);
  { ST32(R(15),R(9)); goto L8c083a3e; }
L8c083a1e:;
  R(5)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c083a24u; R(4)=R(14); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(11)+6);
  R(4)=R(0)&0xFF;
  c->t=R(4)==R(13);
  if(!c->t) goto L8c083a36;
  R(6)=LD32(R(15)+12);
  R(5)=0x2u;
  { c->pr=0x8c083a36u; R(4)=R(8); f_8c083ed8(c); }
L8c083a36:;
  R(2)=LD32(R(15));
  R(8)+=0x6u;
  R(2)+=0x1u;
  ST32(R(15),R(2));
L8c083a3e:;
  R(0)=0x1au;
  R(2)=LD32(R(15));
  R(3)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c083a1e;
  {  goto L8c083aba; }
L8c083a80:;
  R(6)=LD32(R(14)+16);
  R(5)=0x0u;
  { uint32_t tg=R(11); c->pr=0x8c083a88u; R(4)=R(12); sh4_call(c,tg); }
  R(8)=R(0);
  { ST32(R(15),R(9)); goto L8c083aae; }
L8c083a8e:;
  R(5)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c083a94u; R(4)=R(14); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(11)+6);
  R(4)=R(0)&0xFF;
  c->t=R(4)==R(13);
  if(!c->t) goto L8c083aa6;
  R(6)=LD32(R(15)+12);
  R(5)=0x2u;
  { c->pr=0x8c083aa6u; R(4)=R(8); f_8c083ed8(c); }
L8c083aa6:;
  R(2)=LD32(R(15));
  R(8)+=0x6u;
  R(2)+=0x1u;
  ST32(R(15),R(2));
L8c083aae:;
  R(0)=0x1au;
  R(2)=LD32(R(15));
  R(3)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c083a8e;
L8c083aba:;
  R(0)=0x87u;
  R(4)=R(9);
  ST8(R(14)+R(0),R(4));
  R(0)+=0x1u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c083ad4;
  R(4)=0x88u;
  R(3)=0x8c064eb8u;
  R(6)=0x1afu;
  R(5)=0x8c0bcb54u;
  { c->pr=0x8c083ad4u; R(4)+=R(14); f_8c064eb8(c); }
L8c083ad4:;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c083b20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(10)+4);
  R(14)=LD32(R(14));
  R(8)=LD32(R(14)+4);
  c->t=(R(8)&R(8))==0;
  if(!c->t) goto L8c083b40;
  {  { f_8c083d2e(c); return; } }
L8c083b40:;
  R(2)=0x8c084190u;
  { c->pr=0x8c083b46u; R(4)=R(8); f_8c084190(c); }
  R(9)=R(0);
  R(0)=0x84u;
  R(3)=0x8c082068u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(6)=LD32(R(14)+16);
  R(5)=R(5)&0xFFFF;
  { c->pr=0x8c083b56u; R(4)=R(9); f_8c082068(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c083b60;
  {  { f_8c083d2e(c); return; } }
L8c083b60:;
  R(3)=0x8c0841b8u;
  R(13)=0xffu;
  R(11)=0x8c08202cu;
  { c->pr=0x8c083b6au; R(4)=R(8); f_8c0841b8(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(int32_t)R(0)>0;
  if(c->t) goto L8c083b74;
  {  { f_8c083d0c(c); return; } }
L8c083b74:;
  {  goto L8c083c2c; }
L8c083b78:;
  R(0)=0x87u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(0)=LD32(R(14)+R(0));
  R(5)=R(5)&0xFF;
  R(4)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c083c00;
  R(0)=0x87u;
  R(6)=R(10);
  R(5)=0x0u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(3)<<=2;
  R(4)+=R(3);
  { c->pr=0x8c083ba0u; R(4)+=R(12); f_8c083ed8(c); }
  R(0)=0x87u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(5)=R(5)&0xFF;
  R(3)=R(5);
  R(3)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)+=R(12);
  { uint32_t tg=R(11); c->pr=0x8c083bb4u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+7);
  R(8)=R(0);
  R(0)=0x87u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(0)=LD32(R(14)+R(0));
  R(4)=R(4)&0xFF;
  { ST8(R(4)+R(0),R(8)); goto L8c083c24; }
L8c083c00:;
  R(0)=0x87u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(0)=LD32(R(14)+R(0));
  R(5)=R(5)&0xFF;
  R(4)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(4)=R(4)&0xFF;
  c->t=R(4)==R(13);
  if(c->t) goto L8c083c24;
  R(0)=0x87u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(5)=LD32(R(14)+R(0));
  R(4)=R(4)&0xFF;
  R(5)+=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(3)+=R(13);
  ST8(R(5),R(3));
L8c083c24:;
  R(0)=0x87u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=0x1u;
  ST8(R(14)+R(0),R(2));
L8c083c2c:;
  R(0)=0x87u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=0x1au;
  R(2)=(int32_t)(int8_t)LD8(R(9)+R(0));
  R(3)=R(4)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=R(3)==R(2);
  if(c->t) { f_8c083d2e(c); return; }
  R(2)=R(4)&0xFF;
  R(3)=R(2);
  R(3)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(3)=0x84u;
  R(2)+=R(12);
  R(3)+=R(14);
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->t=R(0)>R(3);
  if(!c->t) goto L8c083b78;
  {  { f_8c083d2e(c); return; } }
}
void f_8c083c58(SH4Ctx *c) {
  R(0)=0x87u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(0)=LD32(R(14)+R(0));
  R(4)=R(4)&0xFF;
  R(5)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c083ce0;
  R(0)=0x87u;
  R(6)=R(10);
  R(5)=0x1u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(3)<<=2;
  R(4)+=R(3);
  { c->pr=0x8c083c80u; R(4)+=R(12); f_8c083ed8(c); }
  R(0)=0x87u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(5)=R(5)&0xFF;
  R(3)=R(5);
  R(3)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)+=R(12);
  { uint32_t tg=R(11); c->pr=0x8c083c94u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+7);
  R(9)=R(0);
  R(0)=0x87u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(0)=LD32(R(14)+R(0));
  R(4)=R(4)&0xFF;
  { ST8(R(4)+R(0),R(9)); goto L8c083d04; }
L8c083ce0:;
  R(0)=0x87u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(0)=LD32(R(14)+R(0));
  R(4)=R(4)&0xFF;
  R(5)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(5)=R(5)&0xFF;
  c->t=R(5)==R(13);
  if(c->t) goto L8c083d04;
  R(0)=0x87u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(4)=LD32(R(14)+R(0));
  R(5)=R(5)&0xFF;
  R(4)+=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)+=R(13);
  ST8(R(4),R(3));
L8c083d04:;
  R(0)=0x87u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=R(13);
  ST8(R(14)+R(0),R(2));
  { f_8c083d0c(c); return; }
}
void f_8c083cc0(SH4Ctx *c) {
  c->macl=R(0)*R(8);
  ST8(R(0)+R(0),R(8));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(0)=0x87u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(0)=LD32(R(14)+R(0));
  R(4)=R(4)&0xFF;
  R(5)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(5)=R(5)&0xFF;
  c->t=R(5)==R(13);
  if(c->t) goto L8c083d04;
  R(0)=0x87u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x1u;
  R(4)=LD32(R(14)+R(0));
  R(5)=R(5)&0xFF;
  R(4)+=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)+=R(13);
  ST8(R(4),R(3));
L8c083d04:;
  R(0)=0x87u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=R(13);
  ST8(R(14)+R(0),R(2));
  { f_8c083d0c(c); return; }
}
void f_8c083d0c(SH4Ctx *c) {
  R(0)=0x87u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=R(4)&0xFF;
  c->t=R(3)==R(13);
  if(c->t) { f_8c083d2e(c); return; }
  R(3)=R(4)&0xFF;
  R(2)=R(3);
  R(2)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)+=R(12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x84u;
  R(3)+=R(14);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->t=R(0)>=R(3);
  if(c->t) { f_8c083c58(c); return; }
  { f_8c083d2e(c); return; }
}
void f_8c083d2e(SH4Ctx *c) {
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c083d40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(8)=R(4);
  R(14)=LD32(R(8)+4);
  R(14)=LD32(R(14));
  R(12)=LD32(R(14)+4);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c083d62;
  {  goto L8c083ec4; }
L8c083d62:;
  R(2)=0x8c084190u;
  { c->pr=0x8c083d68u; R(4)=R(12); f_8c084190(c); }
  ST32(R(15)+4,R(0));
  R(0)=0x84u;
  R(3)=0x8c082068u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(6)=LD32(R(14)+16);
  R(5)=R(5)&0xFFFF;
  R(5)+=0xffffffffu;
  { c->pr=0x8c083d7au; R(4)=LD32(R(15)+4); f_8c082068(c); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c083d84;
  {  goto L8c083ec4; }
L8c083d84:;
  R(3)=0x8c0841b8u;
  R(13)=0xffu;
  R(9)=0x8c08202cu;
  { c->pr=0x8c083d8eu; R(4)=R(12); f_8c0841b8(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c083e2a;
  R(0)=0x87u;
  { R(12)=(int32_t)(int8_t)LD8(R(14)+R(0)); goto L8c083e16; }
L8c083dc0:;
  R(0)=0x88u;
  R(5)=(uint32_t)(int32_t)(int8_t)R(12);
  R(0)=LD32(R(14)+R(0));
  R(4)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c083df8;
  R(11)=(uint32_t)(int32_t)(int8_t)R(12);
  R(6)=R(8);
  R(3)=R(11);
  c->t=R(11)>>31;R(11)<<=1;
  R(3)<<=2;
  R(11)+=R(3);
  R(11)+=R(10);
  R(5)=0x0u;
  { c->pr=0x8c083de2u; R(4)=R(11); f_8c083ed8(c); }
  R(5)=R(11);
  { uint32_t tg=R(9); c->pr=0x8c083de8u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+7);
  R(4)=(uint32_t)(int32_t)(int8_t)R(12);
  R(11)=R(0);
  R(0)=0x88u;
  R(0)=LD32(R(14)+R(0));
  { ST8(R(4)+R(0),R(11)); goto L8c083e14; }
L8c083df8:;
  R(0)=0x88u;
  R(5)=(uint32_t)(int32_t)(int8_t)R(12);
  R(0)=LD32(R(14)+R(0));
  R(4)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(4)=R(4)&0xFF;
  c->t=R(4)==R(13);
  if(c->t) goto L8c083e14;
  R(0)=0x88u;
  R(4)=(uint32_t)(int32_t)(int8_t)R(12);
  R(5)=LD32(R(14)+R(0));
  R(5)+=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(3)+=R(13);
  ST8(R(5),R(3));
L8c083e14:;
  R(12)+=0x1u;
L8c083e16:;
  R(3)=LD32(R(15)+4);
  R(0)=0x1au;
  R(2)=(uint32_t)(int32_t)(int8_t)R(12);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)=R(1)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  if(!c->t) goto L8c083dc0;
  R(0)=0x87u;
  { R(4)=0x0u; goto L8c083ec2; }
L8c083e2a:;
  R(0)=0x87u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(13);
  if(c->t) goto L8c083eb8;
  { R(11)=(int32_t)(int8_t)LD8(R(14)+R(0)); goto L8c083eb2; }
L8c083e60:;
  R(0)=0x88u;
  R(12)=(uint32_t)(int32_t)(int8_t)R(11);
  R(0)=LD32(R(14)+R(0));
  R(4)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c083e98;
  R(4)=(uint32_t)(int32_t)(int8_t)R(11);
  R(6)=R(8);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(3)<<=2;
  R(4)+=R(3);
  R(4)+=R(10);
  R(5)=0x1u;
  { c->pr=0x8c083e82u; ST32(R(15),R(4)); f_8c083ed8(c); }
  R(5)=LD32(R(15));
  { uint32_t tg=R(9); c->pr=0x8c083e88u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+7);
  ST8(R(15),R(0));
  R(0)=0x88u;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(0)=LD32(R(14)+R(0));
  { ST8(R(12)+R(0),R(3)); goto L8c083eb0; }
L8c083e98:;
  R(0)=0x88u;
  R(0)=LD32(R(14)+R(0));
  R(4)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(4)=R(4)&0xFF;
  c->t=R(4)==R(13);
  if(c->t) goto L8c083eb0;
  R(0)=0x88u;
  R(4)=LD32(R(14)+R(0));
  R(4)+=R(12);
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)+=R(13);
  ST8(R(4),R(3));
L8c083eb0:;
  R(11)+=0xffffffffu;
L8c083eb2:;
  R(2)=(uint32_t)(int32_t)(int8_t)R(11);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c083e60;
L8c083eb8:;
  R(4)=LD32(R(15)+4);
  R(0)=0x1au;
  R(4)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)+=0x6du;
  R(4)+=R(13);
L8c083ec2:;
  ST8(R(14)+R(0),R(4));
L8c083ec4:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c083ed8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(6);
  ST32(R(15),R(4));
  R(4)=LD32(R(14)+4);
  R(3)=0x8c08202cu;
  R(4)=LD32(R(4));
  { c->pr=0x8c083ef2u; R(5)=LD32(R(15)); f_8c08202c(c); }
  R(13)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(4)=R(0);
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c083f40;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c083fd4;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c083f5a;
  {  goto L8c083fd4; }
L8c083f40:;
  R(4)=LD32(R(13));
  R(7)=0x0u;
  R(2)=0x8c017f2cu;
  R(6)=R(7);
  ST32(R(15)+16,R(4));
  R(3)=R(4);
  R(3)=0x8c2d105cu;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  { c->pr=0x8c083f56u; R(4)=R(14); f_8c017f2c(c); }
  { R(15)+=0x4u; goto L8c083fd4; }
L8c083f5a:;
  R(12)=LD32(R(13));
  R(2)=0x6u;
  R(4)=R(12)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c083fd4;
  R(1)=0xdu;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c083fd4;
  R(4)=LD32(R(14)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(13)=LD32(R(4)+R(0));
  R(4)=LD32(R(15));
  c->t=(R(13)&R(13))==0;
  R(0)=(int32_t)(int16_t)LD16(R(4)+4);
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c083f8c; }
  R(11)=R(4)&0xFFFF;
  R(3)=R(11);
  R(11)<<=2;
  R(11)+=R(3);
  R(11)<<=2;
  R(11)+=R(13);
  { R(11)=LD32(R(11)); goto L8c083f8e; }
L8c083f8c:;
  R(11)=0x0u;
L8c083f8e:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c083fd4;
  R(3)=0x8c05689eu;
  { c->pr=0x8c083f98u; R(4)=R(14); f_8c05689e(c); }
  R(2)=0x2u;
  R(13)=R(0);
  c->t=(R(2)&R(13))==0;
  if(!c->t) goto L8c083fb8;
  R(2)=0x8c0568e0u;
  R(5)=0x2u;
  R(5)|=R(13);
  { c->pr=0x8c083faau; R(4)=R(14); f_8c0568e0(c); }
  R(3)=0x8c054be6u;
  { c->pr=0x8c083fb0u; R(4)=R(14); f_8c054be6(c); }
  R(2)=0x8c0568e0u;
  R(5)=R(13);
  { c->pr=0x8c083fb8u; R(4)=R(14); f_8c0568e0(c); }
L8c083fb8:;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c083fc2u; R(4)=LD32(R(11)+36); f_8c0163ce(c); }
  R(5)=0xfau;
  R(7)=R(15);
  R(4)=LD32(R(14)+4);
  R(7)+=0x4u;
  R(3)=0x8c043a08u;
  R(6)=0x1u;
  R(5)+=R(12);
  { c->pr=0x8c083fd4u; R(4)=LD32(R(4)); f_8c043a08(c); }
L8c083fd4:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c084020(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0xeeu;
  R(4)=LD32(R(3));
  { R(0)=(int32_t)(int16_t)LD16(R(4)+R(0)); return; }
}
void f_8c08402a(SH4Ctx *c) {
  { R(0)=(int32_t)(int8_t)LD8(R(4)+4); return; }
}
void f_8c08402e(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c084032(SH4Ctx *c) {
  { R(0)=(int32_t)(int8_t)LD8(R(4)+6); return; }
}
void f_8c084060(SH4Ctx *c) {
  { R(0)=0x20u; return; }
}
void f_8c084064(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c084080;
  { c->pr=0x8c084072u;  f_8c084060(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0bcbb0u;
  { c->pr=0x8c08407cu; R(6)=0x30u; f_8c064e90(c); }
  {  goto L8c08408e; }
L8c084080:;
  { c->pr=0x8c084084u;  f_8c084060(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0bcbb0u;
  { c->pr=0x8c08408eu; R(6)=0x30u; f_8c0199c4(c); }
L8c08408e:;
  R(4)=R(0);
  R(0)=0x1cu;
  R(5)=0x0u;
  R(6)=0x1u;
  ST32(R(4),R(5));
  ST32(R(4)+20,R(5));
  ST8(R(4)+R(0),R(5));
  R(0)=0x1eu;
  ST8(R(4)+R(0),R(6));
  R(0)=0x1du;
  ST8(R(4)+R(0),R(6));
  R(0)=0x1fu;
  ST32(R(4)+24,R(5));
  ST8(R(4)+R(0),R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c0840b0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c0bcbb0u;
  R(6)=0x42u;
  R(2)=0x8c064eb8u;
  ST32(R(15),R(4));
  { c->pr=0x8c0840c0u; R(4)=R(15); f_8c064eb8(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0840c8(SH4Ctx *c) {
  { R(0)=0xcu; return; }
}
void f_8c0840cc(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0840e8;
  { c->pr=0x8c0840dau;  f_8c0840c8(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0bcbb0u;
  { c->pr=0x8c0840e4u; R(6)=0x53u; f_8c064e90(c); }
  {  goto L8c0840f6; }
L8c0840e8:;
  { c->pr=0x8c0840ecu;  f_8c0840c8(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0bcbb0u;
  { c->pr=0x8c0840f6u; R(6)=0x53u; f_8c0199c4(c); }
L8c0840f6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0840fc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c0bcbb0u;
  R(6)=0x5au;
  R(2)=0x8c064eb8u;
  ST32(R(15),R(4));
  { c->pr=0x8c08410cu; R(4)=R(15); f_8c064eb8(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c084114(SH4Ctx *c) {
  { R(0)=0x4u; return; }
}
void f_8c084118(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c084160;
  { c->pr=0x8c084126u;  f_8c084114(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0bcbb0u;
  { c->pr=0x8c084130u; R(6)=0x69u; f_8c064e90(c); }
  {  goto L8c08416e; }
L8c084160:;
  { c->pr=0x8c084164u;  f_8c084114(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0bcbb0u;
  { c->pr=0x8c08416eu; R(6)=0x69u; f_8c0199c4(c); }
L8c08416e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c084160(SH4Ctx *c) {
  { c->pr=0x8c084164u;  f_8c084114(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0bcbb0u;
  { c->pr=0x8c08416eu; R(6)=0x69u; f_8c0199c4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c084174(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c0bcbb0u;
  R(6)=0x72u;
  R(2)=0x8c064eb8u;
  ST32(R(15),R(4));
  { c->pr=0x8c084184u; R(4)=R(15); f_8c064eb8(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c084190(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c084194(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c084198(SH4Ctx *c) {
  { R(0)=LD32(R(4)+20); return; }
}
void f_8c08419c(SH4Ctx *c) {
  { ST32(R(4)+20,R(5)); return; }
}
void f_8c0841a0(SH4Ctx *c) {
  R(0)=0x1cu;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c0841a6(SH4Ctx *c) {
  R(0)=0x1cu;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c0841ac(SH4Ctx *c) {
  R(0)=0x1eu;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c0841b2(SH4Ctx *c) {
  R(0)=0x1eu;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c0841b8(SH4Ctx *c) {
  R(0)=0x1du;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c0841be(SH4Ctx *c) {
  R(0)=0x1du;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c0841c4(SH4Ctx *c) {
  { R(0)=LD32(R(4)+24); return; }
}
void f_8c084200(SH4Ctx *c) {
  { ST32(R(4)+24,R(5)); return; }
}
void f_8c084204(SH4Ctx *c) {
  R(0)=0x1fu;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c08420a(SH4Ctx *c) {
  R(0)=0x1fu;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c084210(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c084214(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c084218(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c08421c(SH4Ctx *c) {
  { ST32(R(4)+4,R(5)); return; }
}
void f_8c084220(SH4Ctx *c) {
  { R(0)=(int32_t)(int8_t)LD8(R(4)+8); return; }
}
void f_8c084224(SH4Ctx *c) {
  R(0)=R(5);
  { ST8(R(4)+8,R(0)); return; }
}
void f_8c08422a(SH4Ctx *c) {
  R(6)=LD32(R(4)+4);
  { R(7)=0x0u; goto L8c084240; }
L8c084230:;
  R(1)=R(6);
  R(0)=LD32(R(1));
  c->t=R(0)==R(5);
  if(!c->t) goto L8c08423c;
  { R(0)=R(6); return; }
L8c08423c:;
  R(6)+=0xcu;
  R(7)+=0x1u;
L8c084240:;
  R(2)=LD32(R(4)+8);
  c->t=(int32_t)R(7)>=(int32_t)R(2);
  if(!c->t) goto L8c084230;
  R(0)=0x0u;
  {  return; }
}
void f_8c084254(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c08425e(SH4Ctx *c) {
  R(1)=LD32(R(4)+8);
  R(6)=LD32(R(4)+4);
  { R(4)=0x0u; { f_8c084276(c); return; } }
}
void f_8c084266(SH4Ctx *c) {
  R(7)=R(6);
  R(0)=LD32(R(7));
  c->t=R(0)==R(5);
  if(!c->t) goto L8c084272;
  { R(0)=R(6); return; }
L8c084272:;
  R(4)+=0x1u;
  R(6)+=0xcu;
  { f_8c084276(c); return; }
}
void f_8c084272(SH4Ctx *c) {
  R(4)+=0x1u;
  R(6)+=0xcu;
  { f_8c084276(c); return; }
}
void f_8c084276(SH4Ctx *c) {
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c08427e;
  c->t=(int32_t)R(4)>=(int32_t)R(1);
  if(!c->t) { f_8c084266(c); return; }
L8c08427e:;
  R(0)=0x0u;
  {  return; }
}
void f_8c084284(SH4Ctx *c) {
  R(6)=LD32(R(4)+12);
  R(7)=LD32(R(4)+16);
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0842a8; }
  c->t=(int32_t)R(7)>0;
  if(!c->t) goto L8c0842a8;
L8c084292:;
  R(3)=LD32(R(6));
  c->t=R(3)==R(5);
  if(!c->t) goto L8c08429c;
  { R(0)=0x1u; return; }
L8c08429c:;
  R(6)+=0x4u;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c0842a8; }
  c->t=(int32_t)R(4)>=(int32_t)R(7);
  if(!c->t) goto L8c084292;
L8c0842a8:;
  R(0)=0x0u;
  {  return; }
}
void f_8c084318(SH4Ctx *c) {
  R(4)=R(4)&0xFFFF;
  R(3)=0x8c2e24b8u;
  R(5)=R(5)&0xFFFF;
  R(4)<<=16;
  R(5)+=R(4);
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c084338;
L8c084328:;
  R(1)=LD32(R(4));
  c->t=R(1)==R(5);
  if(!c->t) goto L8c084332;
  { R(0)=LD32(R(4)+4); return; }
L8c084332:;
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c084328;
L8c084338:;
  R(0)=0x0u;
  {  return; }
}
void f_8c084346(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x8c2e24b8u;
  R(14)=0x8c064eb8u;
  R(1)=LD32(R(0));
  R(13)=0x8c0bcbdcu;
  R(3)=R(1);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(1)); if(k) goto L8c08437e; }
L8c084360:;
  R(12)=LD32(R(15));
  R(5)=R(13);
  R(4)=LD32(R(15));
  R(6)=0x5du;
  R(12)=LD32(R(12)+8);
  { uint32_t tg=R(14); c->pr=0x8c08436eu; R(4)+=0x4u; sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x5eu;
  { uint32_t tg=R(14); c->pr=0x8c084376u; R(4)=R(15); sh4_call(c,tg); }
  R(3)=R(12);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(12)); if(k) goto L8c084360; }
L8c08437e:;
  R(2)=0x8c2e24b8u;
  R(3)=0x0u;
  ST32(R(2),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08442a(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(3)=0x8c068530u;
  ST32(R(15),R(4));
  { c->pr=0x8c08443au; fp_mov(c,15,4); f_8c068530(c); }
  R(0)=0x1cu;
  R(3)=0x8c0686fcu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0x20u;
  c->fr[14]=0x00000000u;
  fp_st(c,14,R(0)+R(15));
  { c->pr=0x8c08444au; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x24u;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x14u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  R(3)=0x8c0686fcu;
  fp_st(c,14,R(0)+R(15));
  { c->pr=0x8c084464u; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4u;
  R(3)=0x8c068530u;
  fp_st(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,14,R(0)+R(15));
  { c->pr=0x8c084472u; fp_mov(c,4,15); f_8c068530(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0xcu;
  R(5)+=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c084488u; R(4)=LD32(R(15)); f_8c015c9c(c); }
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c084492(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(0)=0x8c08452cu;
  fp_mov(c,15,4);
  R(3)=0x8c068530u;
  ST32(R(15),R(4));
  fp_ld(c,3,R(0));
  fp_arith(c,0,15,3);
  { c->pr=0x8c0844aau; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  { c->pr=0x8c0844b4u; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x20u;
  R(3)=0x8c0686fcu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0x24u;
  c->fr[14]=0x00000000u;
  fp_st(c,14,R(0)+R(15));
  { c->pr=0x8c0844c4u; fp_mov(c,4,15); f_8c0686fc(c); }
  R(3)=0x8c068530u;
  R(0)=0x10u;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
  { c->pr=0x8c0844d0u; fp_mov(c,4,15); f_8c068530(c); }
  R(0)=0x14u;
  R(6)=R(15);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,14,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0xcu;
  c->fr[3]=0x3F800000u;
  R(5)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c0844f8u; R(4)=LD32(R(15)); f_8c015c9c(c); }
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c084540(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff70u;
  R(15)+=R(0);
  R(3)=0x8c014ea0u;
  ST32(R(15),R(4));
  R(4)=R(15);
  fp_mov(c,14,4);
  { c->pr=0x8c084556u; R(4)+=0x28u; f_8c014ea0(c); }
  R(2)=0x8c068530u;
  { c->pr=0x8c08455cu; fp_mov(c,4,14); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,15,0);
  { c->pr=0x8c084564u; fp_mov(c,4,14); f_8c0686fc(c); }
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  R(0)=0x8c084610u;
  fp_mov(c,4,0);
  fp_ld(c,6,R(0));
  { uint32_t k=!c->t; c->fr[5]=0x00000000u; if(k) goto L8c084576; }
  { fp_mov(c,3,15); goto L8c08457a; }
L8c084576:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c08457a:;
  fp_cmp(c,1,6,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c084582; }
  fp_mov(c,15,5);
L8c084582:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c08458a;
  { fp_mov(c,3,4); goto L8c08458e; }
L8c08458a:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c08458e:;
  fp_cmp(c,1,6,3);
  { uint32_t k=!c->t; c->fr[3]=0x3F800000u; if(k) goto L8c084596; }
  fp_mov(c,4,5);
L8c084596:;
  R(0)=0x1cu;
  R(6)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(7)=R(15);
  R(0)=0xcu;
  R(3)=0x8c015c9cu;
  R(4)=R(15);
  R(5)+=0x1cu;
  fp_st(c,15,R(0)+R(15));
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c0845d0u; R(4)+=0x28u; f_8c015c9c(c); }
  R(3)=0x8c0156cau;
  R(5)=R(15);
  R(6)=LD32(R(15));
  R(5)+=0x28u;
  { c->pr=0x8c0845dcu; R(4)=R(6); f_8c0156ca(c); }
  R(1)=0x90u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c084620(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff70u;
  R(15)+=R(0);
  R(3)=0x8c014ea0u;
  ST32(R(15),R(4));
  R(4)=R(15);
  fp_mov(c,14,4);
  { c->pr=0x8c084636u; R(4)+=0x28u; f_8c014ea0(c); }
  R(2)=0x8c068530u;
  { c->pr=0x8c08463cu; fp_mov(c,4,14); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,15,0);
  { c->pr=0x8c084644u; fp_mov(c,4,14); f_8c0686fc(c); }
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  R(0)=0x8c0846f0u;
  fp_mov(c,4,0);
  fp_ld(c,6,R(0));
  { uint32_t k=!c->t; c->fr[5]=0x00000000u; if(k) goto L8c084656; }
  { fp_mov(c,3,15); goto L8c08465a; }
L8c084656:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c08465a:;
  fp_cmp(c,1,6,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c084662; }
  fp_mov(c,15,5);
L8c084662:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c08466a;
  { fp_mov(c,3,4); goto L8c08466e; }
L8c08466a:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c08466e:;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c084674;
  fp_mov(c,4,5);
L8c084674:;
  R(0)=0x1cu;
  fp_mov(c,3,4);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  R(6)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x14u;
  c->fr[3]=0x3F800000u;
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(15));
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(0)=0xcu;
  R(5)+=0x1cu;
  R(4)=R(15);
  R(7)+=0x4u;
  fp_st(c,15,R(0)+R(15));
  R(6)+=0x10u;
  { c->pr=0x8c0846b2u; R(4)+=0x28u; f_8c015c9c(c); }
  R(3)=0x8c0156cau;
  R(5)=R(15);
  R(6)=LD32(R(15));
  R(5)+=0x28u;
  { c->pr=0x8c0846beu; R(4)=R(6); f_8c0156ca(c); }
  R(1)=0x90u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c084700(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff70u;
  R(15)+=R(0);
  R(3)=0x8c014ea0u;
  ST32(R(15),R(4));
  R(4)=R(15);
  fp_mov(c,14,4);
  { c->pr=0x8c084716u; R(4)+=0x28u; f_8c014ea0(c); }
  R(2)=0x8c068530u;
  { c->pr=0x8c08471cu; fp_mov(c,4,14); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,15,0);
  { c->pr=0x8c084724u; fp_mov(c,4,14); f_8c0686fc(c); }
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  R(0)=0x8c0847d0u;
  fp_mov(c,4,0);
  fp_ld(c,6,R(0));
  { uint32_t k=!c->t; c->fr[5]=0x00000000u; if(k) goto L8c084736; }
  { fp_mov(c,3,15); goto L8c08473a; }
L8c084736:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c08473a:;
  fp_cmp(c,1,6,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c084742; }
  fp_mov(c,15,5);
L8c084742:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c08474a;
  { fp_mov(c,3,4); goto L8c08474e; }
L8c08474a:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c08474e:;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c084754;
  fp_mov(c,4,5);
L8c084754:;
  R(0)=0x1cu;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(15));
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(0)=0xcu;
  c->fr[3]=0x3F800000u;
  R(4)=R(15);
  R(7)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x1cu;
  R(6)+=0x10u;
  { c->pr=0x8c084790u; R(4)+=0x28u; f_8c015c9c(c); }
  R(3)=0x8c0156cau;
  R(5)=R(15);
  R(6)=LD32(R(15));
  R(5)+=0x28u;
  { c->pr=0x8c08479cu; R(4)=R(6); f_8c0156ca(c); }
  R(1)=0x90u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c0847e0(SH4Ctx *c) {
  R(3)=0x8c0c85e4u;
  { fp_ld(c,0,R(3)); return; }
}
void f_8c0847e6(SH4Ctx *c) {
  R(2)=0x8c0c85e4u;
  { fp_st(c,4,R(2)); return; }
}
void f_8c0847ec(SH4Ctx *c) {
  R(3)=0x8c0c85e8u;
  { fp_ld(c,0,R(3)); return; }
}
void f_8c0847f2(SH4Ctx *c) {
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  R(2)=0x8c0c85e8u;
  { uint32_t k=c->t; fp_st(c,4,R(2)); if(k) goto L8c084804; }
  c->fr[3]=0x3F800000u;
  fp_arith(c,3,3,4);
  R(3)=0x8c0c85ecu;
  fp_st(c,3,R(3));
L8c084804:;
  {  return; }
}
void f_8c084808(SH4Ctx *c) {
  R(2)=0x8c2e24ccu;
  { fp_ld(c,0,R(2)); return; }
}
void f_8c08480e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(12)=R(6);
  R(2)=0x3u;
  ST32(R(15),R(5));
  R(13)=R(4);
  R(3)=LD32(R(12));
  fp_mov(c,15,4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  { uint32_t k=c->t; R(14)=R(7); if(k) goto L8c084860; }
  { R(3)=0x1u; goto L8c084862; }
L8c084860:;
  R(3)=0x0u;
L8c084862:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c084870;
  R(3)=0x8c0163e6u;
  { c->pr=0x8c08486eu; R(4)=R(12); f_8c0163e6(c); }
  fp_arith(c,2,15,0);
L8c084870:;
  R(3)=0x8c014eaau;
  R(4)=R(15);
  R(6)=LD32(R(15));
  R(5)=R(12);
  { c->pr=0x8c08487cu; R(4)+=0x4u; f_8c014eaa(c); }
  R(2)=0x40u;
  R(14)|=R(2);
  R(3)=R(14);
  R(4)=0x10u;
  c->t=(R(3)&R(4))==0;
  R(0)=0xcu;
  { uint32_t k=!c->t; fp_ld(c,4,R(0)+R(15)); if(k) goto L8c0848a8; }
  fp_mov(c,3,4);
  fp_arith(c,0,3,15);
  R(0)=0x80u;
  fp_ld(c,2,R(0)+R(13));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08489c;
  {  goto L8c0849c6; }
L8c08489c:;
  fp_mov(c,5,4);
  fp_arith(c,1,5,15);
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0848a8;
  R(14)|=R(4);
L8c0848a8:;
  R(2)=R(14);
  R(4)=0x8c2e24ccu;
  R(5)=0x20u;
  c->t=(R(2)&R(5))==0;
  { uint32_t k=!c->t; c->fr[7]=0x3F800000u; if(k) goto L8c084926; }
  R(1)=0x8c0c85e4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,6,R(1));
  fp_cmp(c,0,6,3);
  if(c->t) goto L8c084920;
  fp_cmp(c,1,5,6);
  if(!c->t) goto L8c0848c6;
  { fp_st(c,3,R(4)); goto L8c0849c6; }
L8c0848c6:;
  R(3)=0x8c0c85e8u;
  fp_mov(c,3,6);
  fp_ld(c,8,R(3));
  fp_arith(c,1,3,8);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0848e6;
  fp_arith(c,1,4,15);
  R(2)=0x8c0c85ecu;
  fp_ld(c,3,R(2));
  fp_arith(c,1,4,6);
  fp_arith(c,0,4,8);
  fp_arith(c,2,4,3);
  fp_unary(c,0,4);
  fp_arith(c,0,4,7);
  { fp_st(c,4,R(4)); goto L8c084928; }
L8c0848e6:;
  fp_st(c,7,R(4));
  { R(14)|=R(5); goto L8c084928; }
L8c084920:;
  fp_st(c,7,R(4));
  { R(14)|=R(5); goto L8c084928; }
L8c084926:;
  fp_st(c,7,R(4));
L8c084928:;
  R(3)=0x1u;
  R(12)=0x8c05e55cu;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c084954;
  R(5)=0xbcu;
  R(4)=R(15);
  R(5)+=R(13);
  { uint32_t tg=R(12); c->pr=0x8c08493au; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0xb8u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,4,0);
  fp_arith(c,0,2,3);
  fp_cmp(c,1,4,2);
  if(c->t) goto L8c0849c6;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,3,15);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c084954;
  R(2)=0x1u;
  R(14)|=R(2);
L8c084954:;
  R(3)=0x2u;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c08497e;
  R(5)=0xacu;
  R(4)=R(15);
  R(5)+=R(13);
  { uint32_t tg=R(12); c->pr=0x8c084964u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0xc8u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,4,0);
  fp_arith(c,0,2,3);
  fp_cmp(c,1,4,2);
  if(c->t) goto L8c0849c6;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,3,15);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c08497e;
  R(2)=0x2u;
  R(14)|=R(2);
L8c08497e:;
  R(3)=0x4u;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c0849a8;
  R(5)=0xccu;
  R(4)=R(15);
  R(5)+=R(13);
  { uint32_t tg=R(12); c->pr=0x8c08498eu; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0xd8u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,4,0);
  fp_arith(c,0,2,3);
  fp_cmp(c,1,4,2);
  if(c->t) goto L8c0849c6;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,3,15);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0849a8;
  R(2)=0x4u;
  R(14)|=R(2);
L8c0849a8:;
  R(3)=0x8u;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c084a0a;
  R(5)=0xdcu;
  R(4)=R(15);
  R(5)+=R(13);
  { uint32_t tg=R(12); c->pr=0x8c0849b8u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0xe8u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,4,0);
  fp_arith(c,0,2,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c084a00;
L8c0849c6:;
  { R(0)=0x0u; goto L8c084a0c; }
L8c084a00:;
  fp_arith(c,1,3,15);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c084a0a;
  R(2)=0x8u;
  R(14)|=R(2);
L8c084a0a:;
  R(0)=R(14);
L8c084a0c:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c084a1a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff94u;
  R(13)=R(4);
  R(3)=0x8c0151c8u;
  R(5)=R(13);
  fp_st(c,4,R(15));
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c084a32u; R(4)+=0x4u; f_8c0151c8(c); }
  R(4)=0x8c2e250cu;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  R(14)=R(15);
  c->fr[3]=0x3F800000u;
  R(14)+=0x2cu;
  fp_unary(c,0,3);
  R(5)=0x8c2e2500u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(14));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(5));
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  R(0)=0x4u;
  R(3)=0x8c05e6eau;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(5));
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(5));
  R(5)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c084aaau; R(5)+=0x5cu; sh4_call(c,tg); }
  R(0)=0xc0u;
  fp_ld(c,2,R(14));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xbcu;
  fp_arith(c,2,3,0);
  R(4)=0x8c2e24d0u;
  fp_ld(c,0,R(0)+R(13));
  R(0)+=0x8u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xc0u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(4));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xbcu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xc0u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xbcu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xb0u;
  fp_ld(c,2,R(14));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xacu;
  fp_arith(c,2,3,0);
  R(4)=0x8c2e24dcu;
  fp_ld(c,0,R(0)+R(13));
  R(0)+=0x8u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_fmac(c,3,2);
  R(0)=0xb0u;
  fp_st(c,3,R(4));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xacu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xb4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xacu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xb4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xd0u;
  fp_ld(c,2,R(14));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xccu;
  fp_arith(c,2,3,0);
  R(4)=0x8c2e24e8u;
  fp_ld(c,0,R(0)+R(13));
  R(0)+=0x8u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xd0u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(4));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xccu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xd4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xd0u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x18u;
  {  goto L8c084c00; }
L8c084c00:;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xccu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xd4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xe0u;
  fp_ld(c,2,R(14));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xdcu;
  fp_arith(c,2,3,0);
  R(4)=0x8c2e24f4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)+=0x8u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xe0u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(4));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xdcu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xe4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xe0u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xdcu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xe4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(4));
  R(3)=0x8c0c85e4u;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(3));
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c084c90(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff88u;
  R(3)=0x8c0156cau;
  R(0)=0x8u;
  ST32(R(15),R(4));
  R(4)=R(15);
  ST32(R(15)+4,R(5));
  fp_st(c,4,R(0)+R(15));
  ST32(R(15)+12,R(7));
  R(5)=LD32(R(15));
  R(5)+=0x10u;
  { c->pr=0x8c084caau; R(4)+=0x10u; f_8c0156ca(c); }
  R(0)=0x8u;
  R(5)=LD32(R(15)+4);
  fp_ld(c,4,R(0)+R(15));
  R(6)=R(15);
  R(7)=LD32(R(15)+12);
  R(6)+=0x10u;
  { c->pr=0x8c084cbau; R(4)=LD32(R(15)); f_8c08480e(c); }
  R(15)+=0x78u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c084d00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  ST32(R(15)+16,R(6));
  R(13)=R(4);
  R(6)=0x8c2e250cu;
  R(4)=R(15);
  R(3)=0x8c05e612u;
  R(14)=R(7);
  R(12)=0x0u;
  { c->pr=0x8c084d20u; R(4)+=0x30u; f_8c05e612(c); }
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(5)=LD32(R(15)+16);
  R(6)=0x8c2e250cu;
  { c->pr=0x8c084d2cu; R(4)+=0x24u; f_8c05e612(c); }
  R(0)=0x30u;
  R(4)=0x8c2e2500u;
  fp_ld(c,11,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,13,R(0)+R(4));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x24u;
  R(2)=0x40u;
  fp_ld(c,15,R(4));
  fp_st(c,3,R(15));
  R(14)|=R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=R(14);
  R(5)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  c->t=(R(3)&R(5))==0;
  fp_st(c,3,R(0)+R(15));
  R(6)=0x1u;
  R(0)=0x2cu;
  { uint32_t k=c->t; fp_ld(c,10,R(0)+R(15)); if(k) goto L8c084d6c; }
  {  goto L8c084e52; }
L8c084d6c:;
  R(0)=0x8u;
  fp_mov(c,9,11);
  fp_ld(c,4,R(0)+R(15));
  fp_arith(c,2,9,15);
  R(0)=0x4u;
  fp_ld(c,3,R(15));
  fp_arith(c,2,4,15);
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,7,1);
  fp_arith(c,2,7,3);
  fp_mov(c,5,0);
  fp_arith(c,2,6,13);
  fp_arith(c,2,5,13);
  fp_mov(c,8,10);
  fp_cmp(c,1,4,9);
  { uint32_t k=!c->t; fp_arith(c,2,8,3); if(k) goto L8c084d92; }
  { fp_mov(c,2,9); goto L8c084d94; }
L8c084d92:;
  fp_mov(c,2,4);
L8c084d94:;
  fp_cmp(c,1,6,5);
  if(!c->t) goto L8c084d9c;
  { fp_mov(c,3,5); goto L8c084d9e; }
L8c084d9c:;
  fp_mov(c,3,6);
L8c084d9e:;
  fp_cmp(c,1,8,7);
  { uint32_t k=!c->t; fp_arith(c,0,2,3); if(k) goto L8c084de0; }
  { fp_mov(c,3,7); goto L8c084de2; }
L8c084de0:;
  fp_mov(c,3,8);
L8c084de2:;
  fp_arith(c,0,2,3);
  R(0)=0x20u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(13));
  fp_unary(c,0,3);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c084df6;
  {  goto L8c085204; }
L8c084df6:;
  fp_cmp(c,1,9,4);
  if(!c->t) goto L8c084dfe;
  { fp_mov(c,3,9); goto L8c084e00; }
L8c084dfe:;
  fp_mov(c,3,4);
L8c084e00:;
  fp_cmp(c,1,5,6);
  if(!c->t) goto L8c084e08;
  { fp_mov(c,2,5); goto L8c084e0a; }
L8c084e08:;
  fp_mov(c,2,6);
L8c084e0a:;
  fp_cmp(c,1,7,8);
  { uint32_t k=!c->t; fp_arith(c,0,3,2); if(k) goto L8c084e40; }
  { fp_mov(c,2,7); goto L8c084e42; }
L8c084e40:;
  fp_mov(c,2,8);
L8c084e42:;
  fp_mov(c,7,3);
  fp_arith(c,0,7,2);
  fp_ld(c,3,R(0)+R(13));
  fp_unary(c,0,3);
  fp_cmp(c,1,3,7);
  { uint32_t k=!c->t; R(12)=R(6); if(k) goto L8c084e52; }
  R(14)|=R(5);
L8c084e52:;
  R(2)=R(14);
  R(4)=0x8c2e24ccu;
  R(5)=0x20u;
  c->t=(R(2)&R(5))==0;
  { uint32_t k=!c->t; c->fr[5]=0x3F800000u; if(k) goto L8c084ee8; }
  R(1)=0x8c0c85e4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,6,R(1));
  fp_cmp(c,0,6,3);
  if(c->t) goto L8c084ee2;
  R(12)=R(12)&0xFF;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c084eb8;
  fp_arith(c,2,11,15);
  R(0)=0xcu;
  fp_mov(c,9,0);
  fp_arith(c,2,9,13);
  fp_mov(c,7,1);
  fp_st(c,11,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,11,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,8,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,11,15);
  fp_ld(c,2,R(15));
  fp_ld(c,0,R(0)+R(15));
  fp_arith(c,2,8,13);
  fp_arith(c,2,7,2);
  fp_cmp(c,1,0,11);
  { uint32_t k=!c->t; fp_arith(c,2,10,2); if(k) goto L8c084e98; }
  { fp_mov(c,1,0); goto L8c084e9a; }
L8c084e98:;
  fp_mov(c,1,11);
L8c084e9a:;
  fp_cmp(c,1,9,8);
  { uint32_t k=!c->t; fp_unary(c,0,1); if(k) goto L8c084ea4; }
  { fp_mov(c,3,9); goto L8c084ea6; }
L8c084ea4:;
  fp_mov(c,3,8);
L8c084ea6:;
  fp_cmp(c,1,7,10);
  { uint32_t k=!c->t; fp_arith(c,1,1,3); if(k) goto L8c084eb0; }
  { fp_mov(c,3,7); goto L8c084eb2; }
L8c084eb0:;
  fp_mov(c,3,10);
L8c084eb2:;
  fp_mov(c,4,1);
  { fp_arith(c,1,4,3); goto L8c084ebc; }
L8c084eb8:;
  fp_mov(c,4,7);
  fp_unary(c,0,4);
L8c084ebc:;
  fp_cmp(c,1,4,6);
  if(!c->t) goto L8c084ec4;
  {  goto L8c085204; }
L8c084ec4:;
  R(3)=0x8c0c85e8u;
  fp_ld(c,3,R(3));
  fp_arith(c,1,6,3);
  fp_cmp(c,1,4,6);
  { uint32_t k=!c->t; fp_st(c,6,R(4)); if(k) goto L8c084edc; }
  R(2)=0x8c0c85ecu;
  fp_arith(c,1,4,6);
  fp_ld(c,3,R(2));
  fp_arith(c,2,4,3);
  { fp_arith(c,1,5,4); goto L8c084ee8; }
L8c084edc:;
  fp_st(c,5,R(4));
  { R(14)|=R(5); goto L8c084eea; }
L8c084ee2:;
  fp_st(c,5,R(4));
  { R(14)|=R(5); goto L8c084eea; }
L8c084ee8:;
  fp_st(c,5,R(4));
L8c084eea:;
  R(0)=0x30u;
  R(3)=R(14);
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(3)&R(6))==0;
  R(0)=0x2cu;
  { uint32_t k=c->t; fp_ld(c,9,R(0)+R(15)); if(k) goto L8c084f0c; }
  {  goto L8c084fda; }
L8c084f0c:;
  R(4)=0x8c2e24d0u;
  R(0)=0x4u;
  fp_mov(c,11,8);
  fp_ld(c,1,R(4));
  fp_ld(c,13,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,3,1);
  fp_arith(c,2,11,1);
  fp_mov(c,1,5);
  fp_arith(c,2,1,3);
  fp_mov(c,10,7);
  fp_arith(c,2,10,13);
  fp_mov(c,3,13);
  fp_ld(c,15,R(0)+R(4));
  fp_mov(c,13,4);
  fp_cmp(c,1,1,11);
  fp_mov(c,0,6);
  fp_arith(c,2,13,3);
  fp_arith(c,2,0,15);
  fp_mov(c,3,15);
  fp_mov(c,15,9);
  { uint32_t k=!c->t; fp_arith(c,2,15,3); if(k) goto L8c084f60; }
  { fp_mov(c,2,11); goto L8c084f62; }
L8c084f60:;
  fp_mov(c,2,1);
L8c084f62:;
  fp_cmp(c,1,13,10);
  if(!c->t) goto L8c084f6a;
  { fp_mov(c,3,10); goto L8c084f6c; }
L8c084f6a:;
  fp_mov(c,3,13);
L8c084f6c:;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; fp_arith(c,0,2,3); if(k) goto L8c084f76; }
  { fp_mov(c,3,0); goto L8c084f78; }
L8c084f76:;
  fp_mov(c,3,15);
L8c084f78:;
  fp_arith(c,0,2,3);
  R(0)=0x1cu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c084f8a;
  {  goto L8c085204; }
L8c084f8a:;
  fp_cmp(c,1,11,1);
  if(!c->t) goto L8c084f92;
  { fp_mov(c,3,11); goto L8c084f94; }
L8c084f92:;
  fp_mov(c,3,1);
L8c084f94:;
  fp_cmp(c,1,10,13);
  if(!c->t) goto L8c084fc0;
  { fp_mov(c,2,10); goto L8c084fc2; }
L8c084fc0:;
  fp_mov(c,2,13);
L8c084fc2:;
  fp_cmp(c,1,0,15);
  { uint32_t k=!c->t; fp_arith(c,0,3,2); if(k) goto L8c084fcc; }
  { fp_mov(c,2,0); goto L8c084fce; }
L8c084fcc:;
  fp_mov(c,2,15);
L8c084fce:;
  fp_mov(c,10,3);
  fp_arith(c,0,10,2);
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,10);
  if(!c->t) goto L8c084fda;
  R(14)|=R(6);
L8c084fda:;
  R(2)=R(14);
  R(5)=0x2u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c084fe6;
  {  goto L8c0850ce; }
L8c084fe6:;
  R(4)=0x8c2e24dcu;
  R(0)=0x4u;
  fp_mov(c,11,8);
  fp_ld(c,13,R(4));
  fp_ld(c,15,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,3,13);
  fp_arith(c,2,11,13);
  fp_mov(c,13,5);
  fp_arith(c,2,13,3);
  fp_mov(c,10,7);
  fp_arith(c,2,10,15);
  fp_mov(c,3,15);
  fp_ld(c,1,R(0)+R(4));
  fp_mov(c,15,4);
  fp_cmp(c,1,13,11);
  fp_mov(c,0,6);
  fp_arith(c,2,15,3);
  fp_arith(c,2,0,1);
  fp_mov(c,3,1);
  fp_mov(c,1,9);
  { uint32_t k=!c->t; fp_arith(c,2,1,3); if(k) goto L8c085018; }
  { fp_mov(c,2,11); goto L8c08501a; }
L8c085018:;
  fp_mov(c,2,13);
L8c08501a:;
  fp_cmp(c,1,15,10);
  if(!c->t) goto L8c085022;
  { fp_mov(c,3,10); goto L8c085024; }
L8c085022:;
  fp_mov(c,3,15);
L8c085024:;
  fp_cmp(c,1,1,0);
  { uint32_t k=!c->t; fp_arith(c,0,2,3); if(k) goto L8c085060; }
  { fp_mov(c,3,0); goto L8c085062; }
L8c085060:;
  fp_mov(c,3,1);
L8c085062:;
  fp_arith(c,0,2,3);
  R(0)=0x18u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c085074;
  {  goto L8c085204; }
L8c085074:;
  fp_cmp(c,1,11,13);
  if(!c->t) goto L8c08507c;
  { fp_mov(c,3,11); goto L8c08507e; }
L8c08507c:;
  fp_mov(c,3,13);
L8c08507e:;
  fp_cmp(c,1,10,15);
  if(!c->t) goto L8c085086;
  { fp_mov(c,2,10); goto L8c085088; }
L8c085086:;
  fp_mov(c,2,15);
L8c085088:;
  fp_cmp(c,1,0,1);
  { uint32_t k=!c->t; fp_arith(c,0,3,2); if(k) goto L8c0850c0; }
  { fp_mov(c,2,0); goto L8c0850c2; }
L8c0850c0:;
  fp_mov(c,2,1);
L8c0850c2:;
  fp_mov(c,10,3);
  fp_arith(c,0,10,2);
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,10);
  if(!c->t) goto L8c0850ce;
  R(14)|=R(5);
L8c0850ce:;
  R(2)=R(14);
  R(5)=0x4u;
  c->t=(R(2)&R(5))==0;
  if(!c->t) goto L8c08517c;
  R(4)=0x8c2e24e8u;
  R(0)=0x4u;
  fp_mov(c,10,8);
  fp_ld(c,15,R(4));
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,3,15);
  fp_arith(c,2,10,15);
  fp_mov(c,15,5);
  fp_arith(c,2,15,3);
  fp_mov(c,11,7);
  fp_arith(c,2,11,1);
  fp_mov(c,3,1);
  fp_ld(c,13,R(0)+R(4));
  fp_mov(c,1,4);
  fp_cmp(c,1,15,10);
  fp_mov(c,0,6);
  fp_arith(c,2,1,3);
  fp_arith(c,2,0,13);
  fp_mov(c,3,13);
  fp_mov(c,13,9);
  { uint32_t k=!c->t; fp_arith(c,2,13,3); if(k) goto L8c085108; }
  { fp_mov(c,2,10); goto L8c08510a; }
L8c085108:;
  fp_mov(c,2,15);
L8c08510a:;
  fp_cmp(c,1,1,11);
  if(!c->t) goto L8c085112;
  { fp_mov(c,3,11); goto L8c085114; }
L8c085112:;
  fp_mov(c,3,1);
L8c085114:;
  fp_cmp(c,1,13,0);
  { uint32_t k=!c->t; fp_arith(c,0,2,3); if(k) goto L8c085140; }
  { fp_mov(c,3,0); goto L8c085142; }
L8c085140:;
  fp_mov(c,3,13);
L8c085142:;
  fp_arith(c,0,2,3);
  R(0)=0x14u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xd8u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c085204;
  fp_cmp(c,1,10,15);
  if(!c->t) goto L8c085158;
  { fp_mov(c,3,10); goto L8c08515a; }
L8c085158:;
  fp_mov(c,3,15);
L8c08515a:;
  fp_cmp(c,1,11,1);
  if(!c->t) goto L8c085162;
  { fp_mov(c,2,11); goto L8c085164; }
L8c085162:;
  fp_mov(c,2,1);
L8c085164:;
  fp_cmp(c,1,0,13);
  { uint32_t k=!c->t; fp_arith(c,0,3,2); if(k) goto L8c08516e; }
  { fp_mov(c,2,0); goto L8c085170; }
L8c08516e:;
  fp_mov(c,2,13);
L8c085170:;
  fp_mov(c,10,3);
  fp_arith(c,0,10,2);
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,10);
  if(!c->t) goto L8c08517c;
  R(14)|=R(5);
L8c08517c:;
  R(2)=R(14);
  R(5)=0x8u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c085188;
  {  goto L8c08525a; }
L8c085188:;
  R(4)=0x8c2e24f4u;
  R(0)=0x4u;
  fp_ld(c,15,R(4));
  fp_ld(c,11,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,5,15);
  fp_ld(c,10,R(0)+R(4));
  fp_arith(c,2,8,15);
  fp_arith(c,2,4,11);
  fp_arith(c,2,7,11);
  fp_arith(c,2,6,10);
  fp_cmp(c,1,5,8);
  { uint32_t k=!c->t; fp_arith(c,2,9,10); if(k) goto L8c0851e0; }
  { fp_mov(c,3,8); goto L8c0851e2; }
L8c0851e0:;
  fp_mov(c,3,5);
L8c0851e2:;
  fp_cmp(c,1,4,7);
  if(!c->t) goto L8c0851ea;
  { fp_mov(c,2,7); goto L8c0851ec; }
L8c0851ea:;
  fp_mov(c,2,4);
L8c0851ec:;
  fp_cmp(c,1,9,6);
  { uint32_t k=!c->t; fp_arith(c,0,3,2); if(k) goto L8c0851f6; }
  { fp_mov(c,2,6); goto L8c0851f8; }
L8c0851f6:;
  fp_mov(c,2,9);
L8c0851f8:;
  fp_mov(c,10,3);
  fp_arith(c,0,10,2);
  R(0)=0xe8u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,10,3);
  if(!c->t) goto L8c085208;
L8c085204:;
  { R(0)=0x0u; goto L8c08525c; }
L8c085208:;
  fp_cmp(c,1,8,5);
  if(!c->t) goto L8c085210;
  { fp_mov(c,3,8); goto L8c085212; }
L8c085210:;
  fp_mov(c,3,5);
L8c085212:;
  fp_cmp(c,1,7,4);
  if(!c->t) goto L8c085240;
  { fp_mov(c,2,7); goto L8c085242; }
L8c085240:;
  fp_mov(c,2,4);
L8c085242:;
  fp_cmp(c,1,6,9);
  { uint32_t k=!c->t; fp_arith(c,0,3,2); if(k) goto L8c08524c; }
  { fp_mov(c,2,6); goto L8c08524e; }
L8c08524c:;
  fp_mov(c,2,9);
L8c08524e:;
  fp_mov(c,4,3);
  fp_arith(c,0,4,2);
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c08525a;
  R(14)|=R(5);
L8c08525a:;
  R(0)=R(14);
L8c08525c:;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c085280(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(7);
  R(13)=R(4);
  ST16(R(15),R(6));
  ST16(R(15)+4,R(0));
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0852b4; }
L8c08529c:;
  R(0)=LD32(R(4)+16);
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0852b4;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c08529c;
L8c0852b4:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=R(2)==R(3);
  if(c->t) goto L8c0852de;
  R(0)=LD32(R(13)+16);
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)=0x1u;
  c->t=R(2)>>31;R(2)<<=1;
  ST16(R(2)+R(0),R(3));
  ST16(R(5),R(14));
  R(14)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=LD32(R(13)+20);
  R(14)<<=2;
  R(8)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(8)+=R(14);
  R(5)=R(0);
  { c->pr=0x8c0852dcu; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0852ea(c); }
  ST32(R(8),R(0));
L8c0852de:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0852ea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST16(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08530c;
  R(0)=0x1u;
  ST16(R(15)+4,R(0));
L8c08530c:;
  R(8)=0x8c0c758cu;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c085360;
  R(3)=0x8c064e90u;
  R(6)=0x4au;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c08531eu; R(4)=0x20u; f_8c064e90(c); }
  {  goto L8c08536a; }
L8c085360:;
  R(2)=0x8c0199c4u;
  R(6)=0x4au;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c08536au; R(4)=0x20u; f_8c0199c4(c); }
L8c08536a:;
  R(12)=0xffu;
  R(14)=R(0);
  R(13)=0x8c0bcc14u;
  c->t=(R(14)&R(14))==0;
  R(9)=0x0u;
  { uint32_t k=!c->t; R(10)=0xffffffffu; if(k) goto L8c0853a0; }
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x4au;
  { c->pr=0x8c085382u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x4au;
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c08539eu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0853a0:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x20u;
  { c->pr=0x8c0853aau; R(4)=R(14); f_8c0686b8(c); }
  R(11)=(int32_t)(int16_t)LD16(R(15));
  R(3)=R(11);
  R(3)<<=2;
  c->t=R(11)>>31;R(11)<<=1;
  R(11)+=R(3);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0853da;
  R(2)=LD32(R(8));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0853cc;
  R(3)=0x8c064e90u;
  R(6)=0x51u;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c0853c8u; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c0853d6; }
L8c0853cc:;
  R(2)=0x8c0199c4u;
  R(6)=0x51u;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c0853d6u; R(4)=R(11); f_8c0199c4(c); }
L8c0853d6:;
  ST32(R(14)+8,R(0));
  R(1)=R(0);
L8c0853da:;
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c085408;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x51u;
  { c->pr=0x8c0853eau; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x51u;
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c085406u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c085408:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c085412u; R(4)=LD32(R(14)+8); f_8c0686b8(c); }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c08546e;
  R(2)=LD32(R(8));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c085460;
  R(3)=0x8c064e90u;
  R(6)=0x57u;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c085426u; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c08546a; }
L8c085460:;
  R(2)=0x8c0199c4u;
  R(6)=0x57u;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c08546au; R(4)=R(11); f_8c0199c4(c); }
L8c08546a:;
  ST32(R(14)+12,R(0));
  R(3)=R(0);
L8c08546e:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08549c;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x57u;
  { c->pr=0x8c08547eu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x57u;
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c08549au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c08549c:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c0854a6u; R(4)=LD32(R(14)+12); f_8c0686b8(c); }
  R(11)=(int32_t)(int16_t)LD16(R(15));
  R(3)=R(11);
  c->t=R(11)>>31;R(11)<<=1;
  R(11)+=R(3);
  R(11)<<=2;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0854d6;
  R(2)=LD32(R(8));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0854c8;
  R(3)=0x8c064e90u;
  R(6)=0x63u;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c0854c4u; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c0854d2; }
L8c0854c8:;
  R(2)=0x8c0199c4u;
  R(6)=0x63u;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c0854d2u; R(4)=R(11); f_8c0199c4(c); }
L8c0854d2:;
  ST32(R(14)+16,R(0));
  R(1)=R(0);
L8c0854d6:;
  R(2)=LD32(R(14)+16);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c085504;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x63u;
  { c->pr=0x8c0854e6u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x63u;
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c085502u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c085504:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c08550eu; R(4)=LD32(R(14)+16); f_8c0686b8(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(11)=R(0);
  R(11)<<=2;
  c->t=R(11)>>31;R(11)<<=1;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c08553c;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08552e;
  R(3)=0x8c064e90u;
  R(6)=0x69u;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c08552au; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c085538; }
L8c08552e:;
  R(2)=0x8c0199c4u;
  R(6)=0x69u;
  R(5)=0x8c0bcc14u;
  { c->pr=0x8c085538u; R(4)=R(11); f_8c0199c4(c); }
L8c085538:;
  ST32(R(14)+20,R(0));
  R(2)=R(0);
L8c08553c:;
  R(1)=LD32(R(14)+20);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c08556a;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x69u;
  { c->pr=0x8c08554cu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x69u;
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c085568u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c08556a:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c085574u; R(4)=LD32(R(14)+20); f_8c0686b8(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x0u;
  ST16(R(14)+6,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15));
  ST16(R(14)+4,R(0));
  R(0)=R(9);
  ST16(R(14)+28,R(0));
  R(0)=R(10);
  ST32(R(14)+24,R(3));
  ST16(R(14)+30,R(0));
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08559e(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(5)<<=2;
  R(4)=LD32(R(5)+R(0));
  R(5)=(uint32_t)(int32_t)(int16_t)R(6);
  R(3)=R(5);
  R(3)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(4)+8);
  R(5)+=R(3);
  R(2)+=R(5);
  ST16(R(2),R(7));
  R(3)=LD32(R(4)+8);
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=R(5);
  ST16(R(3)+2,R(0));
  R(3)=LD32(R(4)+8);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)+=R(3);
  { ST16(R(5)+4,R(0)); return; }
}
void f_8c0855c8(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(5)<<=2;
  R(4)=LD32(R(5)+R(0));
  R(5)=(uint32_t)(int32_t)(int16_t)R(6);
  R(3)=R(5);
  R(3)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(4)+12);
  R(5)+=R(3);
  R(2)+=R(5);
  ST16(R(2),R(7));
  R(3)=LD32(R(4)+12);
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=R(5);
  ST16(R(3)+2,R(0));
  R(3)=LD32(R(4)+12);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)+=R(3);
  { ST16(R(5)+4,R(0)); return; }
}
void f_8c085620(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(5)<<=2;
  R(2)=LD32(R(7));
  R(4)=LD32(R(5)+R(0));
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(6)<<=2;
  R(1)=LD32(R(7)+4);
  R(3)=LD32(R(4)+20);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  ST32(R(6),R(2));
  { ST32(R(6)+4,R(1)); return; }
}
void f_8c08563c(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(4));
  R(3)=0x8c05a3fau;
  ST16(R(15),R(5));
  R(0)=LD32(R(15)+4);
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(0)=LD32(R(0)+20);
  R(4)<<=2;
  R(4)=LD32(R(4)+R(0));
  R(4)=LD32(R(4));
  { R(15)+=0x8u; { f_8c05a3fa(c); return; } }
}
void f_8c085654(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(5)<<=2;
  R(3)=LD32(R(5)+R(0));
  { ST32(R(3),R(6)); return; }
}
void f_8c085660(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(5)<<=2;
  R(3)=LD32(R(5)+R(0));
  R(2)=LD32(R(3));
  { ST32(R(6),R(2)); return; }
}
void f_8c08566e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x2eu;
  R(13)=R(4);
  ST16(R(15),R(6));
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c08569e; }
L8c085686:;
  R(0)=LD32(R(4)+16);
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08569e;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c085686;
L8c08569e:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=R(2)==R(3);
  if(c->t) goto L8c0856c4;
  R(0)=LD32(R(13)+16);
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)=0x7u;
  c->t=R(2)>>31;R(2)<<=1;
  ST16(R(2)+R(0),R(3));
  ST16(R(5),R(14));
  R(14)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=LD32(R(13)+20);
  R(14)<<=2;
  R(8)=R(0);
  R(8)+=R(14);
  { c->pr=0x8c0856c2u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c085700(c); }
  ST32(R(8),R(0));
L8c0856c4:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c085700(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c758cu;
  ST16(R(15),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c085726;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc14u;
  R(6)=0x125u;
  { c->pr=0x8c085722u; R(4)=0x8u; f_8c064e90(c); }
  {  goto L8c085730; }
L8c085726:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc14u;
  R(6)=0x125u;
  { c->pr=0x8c085730u; R(4)=0x8u; f_8c0199c4(c); }
L8c085730:;
  R(12)=0x8c0bcc14u;
  R(14)=R(0);
  R(11)=0xffu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(10)=0xffffffffu; if(k) goto L8c085766; }
  R(3)=0x8c0125ccu;
  R(5)=R(12);
  R(6)=0x125u;
  { c->pr=0x8c085746u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x125u;
  R(3)=0x0u;
  R(1)=0x8c0c65e0u;
  R(6)=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0x8c012658u;
  { c->pr=0x8c085764u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c085766:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x8u;
  { c->pr=0x8c085770u; R(4)=R(14); f_8c0686b8(c); }
  R(13)=(int32_t)(int16_t)LD16(R(15));
  R(3)=R(13);
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0857ee;
  R(1)=0x8c0c758cu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0857e0;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc14u;
  R(6)=0x12cu;
  { c->pr=0x8c085790u; R(4)=R(13); f_8c064e90(c); }
  {  goto L8c0857ea; }
L8c0857e0:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bcc14u;
  R(6)=0x12cu;
  { c->pr=0x8c0857eau; R(4)=R(13); f_8c0199c4(c); }
L8c0857ea:;
  ST32(R(14),R(0));
  R(1)=R(0);
L8c0857ee:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08581e;
  R(3)=0x8c0125ccu;
  R(5)=R(12);
  R(6)=0x12cu;
  { c->pr=0x8c0857feu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x12cu;
  R(3)=0x0u;
  R(1)=0x8c0c65e0u;
  R(6)=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0x8c012658u;
  { c->pr=0x8c08581cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c08581e:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(13);
  { c->pr=0x8c085828u; R(4)=LD32(R(14)); f_8c0686b8(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15));
  ST16(R(14)+4,R(0));
  R(0)=R(10);
  ST16(R(14)+6,R(0));
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c085842(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(5)<<=2;
  R(2)=R(6);
  R(3)=LD32(R(5)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(2);
  R(0)=R(7);
  R(3)=LD32(R(3));
  R(6)<<=2;
  R(6)+=R(3);
  { ST16(R(6)+8,R(0)); return; }
}
void f_8c08585e(SH4Ctx *c) {
  R(3)=LD32(R(4)+20);
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(0)<<=2;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(0)=LD32(R(3)+R(0));
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(0)=LD32(R(0));
  R(6)+=R(3);
  R(6)<<=2;
  R(0)+=R(6);
  { R(0)=(int32_t)(int16_t)LD16(R(0)+8); return; }
}
void f_8c085878(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(5)<<=2;
  R(2)=R(6);
  R(3)=LD32(R(5)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(2);
  R(3)=LD32(R(3));
  R(6)<<=2;
  R(6)+=R(3);
  { fp_st(c,4,R(6)); return; }
}
void f_8c0858c0(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(5)<<=2;
  R(2)=R(6);
  R(3)=LD32(R(5)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(2);
  R(3)=LD32(R(3));
  R(6)<<=2;
  R(6)+=R(3);
  { fp_ld(c,0,R(6)); return; }
}
void f_8c0858da(SH4Ctx *c) {
  R(3)=LD32(R(4)+20);
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(0)<<=2;
  R(0)=LD32(R(3)+R(0));
  { R(0)=(int32_t)(int16_t)LD16(R(0)+4); return; }
}
void f_8c0858e6(SH4Ctx *c) {
  R(3)=LD32(R(4)+20);
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(0)<<=2;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(0)=LD32(R(3)+R(0));
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(0)=LD32(R(0));
  R(6)+=R(3);
  R(6)<<=2;
  R(0)+=R(6);
  { R(0)=LD32(R(0)+4); return; }
}
void f_8c085900(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x2eu;
  R(13)=R(4);
  ST16(R(15),R(6));
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c085930; }
L8c085918:;
  R(0)=LD32(R(4)+16);
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c085930;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c085918;
L8c085930:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=R(2)==R(3);
  if(c->t) goto L8c085956;
  R(0)=LD32(R(13)+16);
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)=0x8u;
  c->t=R(2)>>31;R(2)<<=1;
  ST16(R(2)+R(0),R(3));
  ST16(R(5),R(14));
  R(14)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=LD32(R(13)+20);
  R(14)<<=2;
  R(8)=R(0);
  R(8)+=R(14);
  { c->pr=0x8c085954u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c085962(c); }
  ST32(R(8),R(0));
L8c085956:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c085962(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c758cu;
  ST16(R(15),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c085988;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc14u;
  R(6)=0x1e2u;
  { c->pr=0x8c085984u; R(4)=0x8u; f_8c064e90(c); }
  {  goto L8c085992; }
L8c085988:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc14u;
  R(6)=0x1e2u;
  { c->pr=0x8c085992u; R(4)=0x8u; f_8c0199c4(c); }
L8c085992:;
  R(12)=0x8c0bcc14u;
  R(14)=R(0);
  R(11)=0xffu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(10)=0xffffffffu; if(k) goto L8c0859c8; }
  R(3)=0x8c0125ccu;
  R(5)=R(12);
  R(6)=0x1e2u;
  { c->pr=0x8c0859a8u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x1e2u;
  R(3)=0x0u;
  R(1)=0x8c0c65e0u;
  R(6)=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0x8c012658u;
  { c->pr=0x8c0859c6u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0859c8:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x8u;
  { c->pr=0x8c0859d2u; R(4)=R(14); f_8c0686b8(c); }
  R(13)=(int32_t)(int16_t)LD16(R(15));
  R(13)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c085a4e;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c085a40;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc14u;
  R(6)=0x1e9u;
  { c->pr=0x8c0859eeu; R(4)=R(13); f_8c064e90(c); }
  {  goto L8c085a4a; }
L8c085a40:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc14u;
  R(6)=0x1e9u;
  { c->pr=0x8c085a4au; R(4)=R(13); f_8c0199c4(c); }
L8c085a4a:;
  ST32(R(14),R(0));
  R(2)=R(0);
L8c085a4e:;
  R(1)=LD32(R(14));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c085a7e;
  R(3)=0x8c0125ccu;
  R(5)=R(12);
  R(6)=0x1e9u;
  { c->pr=0x8c085a5eu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x1e9u;
  R(3)=0x0u;
  R(1)=0x8c0c65e0u;
  R(6)=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0x8c012658u;
  { c->pr=0x8c085a7cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c085a7e:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(13);
  { c->pr=0x8c085a88u; R(4)=LD32(R(14)); f_8c0686b8(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15));
  ST16(R(14)+4,R(0));
  R(0)=R(10);
  ST16(R(14)+6,R(0));
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c085aa2(SH4Ctx *c) {
  R(3)=LD32(R(4)+20);
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(0)<<=2;
  R(0)=LD32(R(3)+R(0));
  { R(0)=(int32_t)(int16_t)LD16(R(0)+4); return; }
}
void f_8c085aae(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(5)<<=2;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  ST32(R(15)+4,R(5));
  R(0)=LD32(R(4)+20);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(3)=LD32(R(5)+R(0));
  ST32(R(15),R(6));
  R(3)=LD32(R(3));
  R(6)+=R(3);
  R(2)=(int32_t)(int16_t)LD16(R(6));
  ST16(R(7),R(2));
  R(2)=LD32(R(15)+4);
  R(0)=LD32(R(4)+20);
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(2)+R(0));
  R(2)=LD32(R(15));
  R(1)=LD32(R(1));
  R(1)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
  ST16(R(3),R(0));
  { R(15)+=0x8u; return; }
}
void f_8c085ae0(SH4Ctx *c) {
  R(3)=LD32(R(4)+20);
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(0)<<=2;
  R(0)=LD32(R(3)+R(0));
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(6)<<=2;
  R(0)=LD32(R(0));
  c->t=R(6)>>31;R(6)<<=1;
  R(0)+=R(6);
  { R(0)=LD32(R(0)+4); return; }
}
void f_8c085b20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  ST32(R(15),R(5));
  R(14)=R(4);
  ST32(R(15)+4,R(6));
  R(4)=R(15);
  R(3)=0x8c05e612u;
  ST32(R(15)+8,R(7));
  R(6)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c085b3au; R(4)+=0x18u; f_8c05e612(c); }
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(5)=LD32(R(15)+8);
  R(6)=LD32(R(15));
  { c->pr=0x8c085b46u; R(4)+=0xcu; f_8c05e612(c); }
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(14));
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c085b9a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x2cu;
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c085bac;
  {  goto L8c085ca8; }
L8c085bac:;
  R(1)=LD32(R(14)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c085bb6;
  {  goto L8c085ca8; }
L8c085bb6:;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c085c36;
  R(3)=0x8c0c758cu;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c085c20;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(6)=0x3bu;
  R(1)=0x8c064e90u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  { c->pr=0x8c085bdeu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c085c32; }
L8c085c20:;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(6)=0x3bu;
  R(1)=0x8c0199c4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  { c->pr=0x8c085c32u; R(4)<<=2; f_8c0199c4(c); }
L8c085c32:;
  ST32(R(14)+4,R(0));
  R(3)=R(0);
L8c085c36:;
  R(1)=LD32(R(14)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c085c6c;
  R(3)=0x8c0125ccu;
  R(6)=0x3bu;
  R(5)=0x8c0bcc20u;
  { c->pr=0x8c085c46u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0bcc20u;
  R(2)=0x3bu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  R(3)=0xffu;
  R(7)=0x1u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c65e0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c085c6au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c085c6c:;
  R(0)=0x2cu;
  R(2)=0x8c0686b8u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x0u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c085c80u; R(4)=LD32(R(14)+4); f_8c0686b8(c); }
  R(0)=0x2cu;
  R(6)=LD32(R(14)+4);
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(6);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(6);
  c->t=R(4)>=R(5);
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c085ca8; }
L8c085c98:;
  R(0)=0x4u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
  R(4)+=0xcu;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c085c98;
L8c085ca8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c085c20(SH4Ctx *c) {
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(6)=0x3bu;
  R(1)=0x8c0199c4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  { c->pr=0x8c085c32u; R(4)<<=2; f_8c0199c4(c); }
  ST32(R(14)+4,R(0));
  R(3)=R(0);
  R(1)=LD32(R(14)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c085c6c;
  R(3)=0x8c0125ccu;
  R(6)=0x3bu;
  R(5)=0x8c0bcc20u;
  { c->pr=0x8c085c46u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0bcc20u;
  R(2)=0x3bu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  R(3)=0xffu;
  R(7)=0x1u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c65e0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c085c6au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c085c6c:;
  R(0)=0x2cu;
  R(2)=0x8c0686b8u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x0u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c085c80u; R(4)=LD32(R(14)+4); f_8c0686b8(c); }
  R(0)=0x2cu;
  R(6)=LD32(R(14)+4);
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(6);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(6);
  c->t=R(4)>=R(5);
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c085ca8; }
L8c085c98:;
  R(0)=0x4u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
  R(4)+=0xcu;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c085c98;
L8c085ca8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c085ce0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=0x2cu;
  R(12)=R(4);
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c085d02;
  {  goto L8c08603a; }
L8c085d02:;
  R(3)=LD32(R(12)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c085dbe; }
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c085d76;
  R(3)=0x8c0c758cu;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c085d60;
  R(4)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(6)=0x5cu;
  R(1)=0x8c064e90u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  { c->pr=0x8c085d32u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c085d72; }
L8c085d60:;
  R(4)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(6)=0x5cu;
  R(1)=0x8c0199c4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  { c->pr=0x8c085d72u; R(4)<<=2; f_8c0199c4(c); }
L8c085d72:;
  ST32(R(12)+4,R(0));
  R(3)=R(0);
L8c085d76:;
  R(1)=LD32(R(12)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c085daa;
  R(3)=0x8c0125ccu;
  R(6)=0x5cu;
  R(5)=0x8c0bcc20u;
  { c->pr=0x8c085d86u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0bcc20u;
  R(2)=0x5cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  R(1)=0xffu;
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c65e0u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(3)=0x8c012658u;
  { c->pr=0x8c085da8u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c085daa:;
  R(0)=0x2cu;
  R(2)=0x8c0686b8u;
  R(6)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(5)=0x0u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c085dbeu; R(4)=LD32(R(12)+4); f_8c0686b8(c); }
L8c085dbe:;
  R(0)=0x2cu;
  R(4)=LD32(R(12)+4);
  R(5)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(4);
  c->t=R(4)>=R(5);
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c085de4; }
L8c085dd4:;
  R(0)=0x4u;
  fp_st(c,15,R(4));
  fp_st(c,15,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(4));
  R(4)+=0xcu;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c085dd4;
L8c085de4:;
  R(0)=0x2eu;
  ST16(R(15),R(11));
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c085df2;
  {  goto L8c085fc4; }
L8c085df2:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)=LD32(R(12)+16);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c085e02;
  {  goto L8c085fb0; }
L8c085e02:;
  R(8)=(int32_t)(int16_t)LD16(R(15));
  R(0)=LD32(R(12)+20);
  R(8)<<=2;
  R(8)=LD32(R(8)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(8)+4);
  R(9)=LD32(R(8)+8);
  R(3)=R(0);
  R(3)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)+=R(9);
  c->t=R(9)>=R(0);
  ST32(R(15)+4,R(0));
  { uint32_t k=!c->t; R(10)=R(11); if(k) goto L8c085e24; }
  {  goto L8c085fb0; }
L8c085e24:;
  R(13)=R(9);
  R(0)=(int32_t)(int16_t)LD16(R(13)+4);
  R(14)=LD32(R(12));
  R(4)=R(15);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(7)=R(14);
  R(0)<<=2;
  R(5)=(int32_t)(int16_t)LD16(R(13));
  R(7)+=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(13)+2);
  R(6)=R(14);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(0)<<=2;
  R(5)+=R(14);
  R(6)+=R(0);
  { c->pr=0x8c085e56u; R(4)+=0x8u; f_8c085b20(c); }
  R(3)=(uint32_t)(int32_t)(int16_t)R(10);
  R(1)=LD32(R(8)+16);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(2)=R(15);
  R(2)+=0x8u;
  c->fr[3]=0x00000000u;
  R(0)=LD32(R(2));
  R(3)<<=2;
  R(3)+=R(1);
  R(1)=LD32(R(2)+4);
  ST32(R(3),R(0));
  ST32(R(3)+4,R(1));
  R(0)=LD32(R(2)+8);
  ST32(R(3)+8,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c085e94;
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c085e94;
  R(0)=0x10u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c085e94;
  {  goto L8c085fa2; }
L8c085e94:;
  R(14)=(int32_t)(int16_t)LD16(R(9));
  R(6)=R(15);
  R(2)=LD32(R(12)+4);
  R(6)+=0x8u;
  R(3)=R(14);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(3)=0x8c05e5f4u;
  R(14)<<=2;
  R(14)+=R(2);
  R(5)=R(14);
  { c->pr=0x8c085eaeu; R(4)=R(14); f_8c05e5f4(c); }
  R(0)=(int32_t)(int16_t)LD16(R(9)+2);
  R(6)=R(15);
  R(6)+=0x8u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  {  goto L8c085ee0; }
L8c085ee0:;
  R(14)=LD32(R(12)+4);
  R(0)<<=2;
  R(2)=0x8c05e5f4u;
  R(14)+=R(0);
  R(5)=R(14);
  { c->pr=0x8c085eeeu; R(4)=R(14); f_8c05e5f4(c); }
  R(0)=(int32_t)(int16_t)LD16(R(9)+4);
  R(6)=R(15);
  R(14)=LD32(R(12)+4);
  R(6)+=0x8u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(2)=0x8c05e5f4u;
  R(0)<<=2;
  R(14)+=R(0);
  R(5)=R(14);
  { c->pr=0x8c085f08u; R(4)=R(14); f_8c05e5f4(c); }
  R(3)=(uint32_t)(int32_t)(int16_t)R(10);
  R(4)=LD32(R(8)+16);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(1)=(uint32_t)(int32_t)(int16_t)R(10);
  R(3)+=R(2);
  R(2)=R(1);
  c->t=R(1)>>31;R(1)<<=1;
  R(0)=(uint32_t)(int32_t)(int16_t)R(10);
  R(1)+=R(2);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)<<=2;
  R(3)+=R(4);
  R(0)+=R(2);
  fp_ld(c,2,R(3));
  R(2)=(uint32_t)(int32_t)(int16_t)R(10);
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)+=R(4);
  R(3)=0x4u;
  R(3)+=R(2);
  R(0)<<=2;
  fp_ld(c,0,R(3));
  R(3)=0x4u;
  R(0)+=R(4);
  fp_ld(c,3,R(0)+R(3));
  R(1)<<=2;
  R(1)+=R(4);
  fp_arith(c,2,3,0);
  R(3)=(uint32_t)(int32_t)(int16_t)R(10);
  fp_ld(c,0,R(1));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  fp_fmac(c,3,2);
  R(0)=(uint32_t)(int32_t)(int16_t)R(10);
  R(5)=LD32(R(8)+16);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(0)+=R(4);
  R(1)=0x8u;
  fp_ld(c,0,R(0)+R(1));
  R(3)<<=2;
  R(0)=R(1);
  R(3)+=R(4);
  fp_ld(c,2,R(0)+R(3));
  R(4)=(uint32_t)(int32_t)(int16_t)R(10);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  fp_fmac(c,3,2);
  R(4)+=R(3);
  R(4)<<=2;
  R(5)+=R(4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(5));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(5));
  R(5)=LD32(R(8)+16);
  R(0)=0x4u;
  fp_mov(c,2,4);
  R(5)+=R(4);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(5));
  R(0)=R(1);
  R(5)=LD32(R(8)+16);
  R(5)+=R(4);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(5));
L8c085fa2:;
  R(3)=LD32(R(15)+4);
  R(9)+=0x6u;
  c->t=R(9)>=R(3);
  { uint32_t k=c->t; R(10)+=0x1u; if(k) goto L8c085fb0; }
  {  goto L8c085e24; }
L8c085fb0:;
  R(1)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x2eu;
  R(1)+=0x1u;
  ST16(R(15),R(1));
  R(1)=(uint32_t)(int32_t)(int16_t)R(1);
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(c->t) goto L8c085fc4;
  {  goto L8c085df2; }
L8c085fc4:;
  R(0)=0x2cu;
  R(4)=LD32(R(12)+4);
  R(5)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(4);
  c->t=R(4)>=R(5);
  { uint32_t k=c->t; c->fr[7]=0x3F800000u; if(k) goto L8c08603a; }
L8c085fda:;
  fp_ld(c,2,R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c086000;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c086000;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c086000;
  R(0)=0x4u;
  fp_st(c,15,R(4));
  fp_st(c,15,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,7,R(0)+R(4)); goto L8c086034; }
L8c086000:;
  R(0)=0x4u;
  fp_ld(c,4,R(4));
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(4));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(4));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(4));
L8c086034:;
  R(4)+=0xcu;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c085fda;
L8c08603a:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c086080(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(0)=0x2eu;
  R(10)=R(4);
  R(0)=(int32_t)(int16_t)LD16(R(10)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0860a0;
  {  goto L8c086462; }
L8c0860a0:;
  R(8)=0x80u;
  R(12)=0x0u;
  R(11)=0x1u;
  R(13)=R(15);
  ST16(R(15),R(12));
  R(9)=0x7u;
  { R(13)+=0x4u; goto L8c086454; }
L8c0860e0:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)=LD32(R(10)+16);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0860f0;
  {  goto L8c08644e; }
L8c0860f0:;
  R(14)=(int32_t)(int16_t)LD16(R(15));
  R(5)=0x0u;
  R(0)=LD32(R(10)+20);
  R(14)<<=2;
  R(2)=0x8c0686b8u;
  R(14)=LD32(R(14)+R(0));
  R(0)=0x2cu;
  R(6)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(6)+=0x7u;
  c->t=R(6)&1;R(6)=(uint32_t)((int32_t)R(6)>>1);
  c->t=R(6)&1;R(6)=(uint32_t)((int32_t)R(6)>>1);
  c->t=R(6)&1;R(6)=(uint32_t)((int32_t)R(6)>>1);
  { c->pr=0x8c08610cu; R(4)=R(13); f_8c0686b8(c); }
  R(0)=(int32_t)(int16_t)LD16(R(14)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c086174; }
L8c086114:;
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  R(5)=LD32(R(14)+8);
  R(3)=R(6);
  R(3)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(3)=R(11);
  R(5)+=R(6);
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(2)=R(5);
  R(0)=R(5);
  R(2)&=R(9);
  R(0)>>=2;
  R(3)=sh4_shad(R(3),R(2));
  c->t=R(0)&1;R(0)>>=1;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)|=R(3);
  R(3)=R(11);
  ST8(R(13)+R(0),R(2));
  R(5)=LD32(R(14)+8);
  R(5)+=R(6);
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(2)=R(0);
  R(2)&=R(9);
  R(0)>>=2;
  R(3)=sh4_shad(R(3),R(2));
  c->t=R(0)&1;R(0)>>=1;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)|=R(3);
  ST8(R(13)+R(0),R(2));
  R(5)=LD32(R(14)+8);
  R(5)+=R(6);
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(3)=R(11);
  R(4)+=0x1u;
  R(5)=R(0);
  R(2)=R(5);
  R(2)&=R(9);
  R(0)>>=2;
  R(3)=sh4_shad(R(3),R(2));
  c->t=R(0)&1;R(0)>>=1;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)|=R(3);
  ST8(R(13)+R(0),R(2));
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=(int32_t)(int16_t)LD16(R(14)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c086114;
L8c086174:;
  R(0)=R(12);
  R(4)=R(0);
  ST16(R(14)+28,R(0));
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(1)=0x0u;
  R(3)+=0x7u;
  R(3)>>=2;
  c->t=R(3)&1;R(3)>>=1;
  c->t=R(1)>=R(3);
  if(c->t) goto L8c086226;
L8c08618a:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(11))==0;
  if(c->t) goto L8c08619a;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(0)+=0x1u;
  ST16(R(14)+28,R(0));
L8c08619a:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x2u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0861ac;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(0)+=0x1u;
  ST16(R(14)+28,R(0));
L8c0861ac:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x4u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0861be;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(0)+=0x1u;
  ST16(R(14)+28,R(0));
L8c0861be:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x8u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0861d0;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(0)+=0x1u;
  ST16(R(14)+28,R(0));
L8c0861d0:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x10u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0861e2;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(0)+=0x1u;
  ST16(R(14)+28,R(0));
L8c0861e2:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x20u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0861f4;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(0)+=0x1u;
  ST16(R(14)+28,R(0));
L8c0861f4:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x40u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c086206;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(0)+=0x1u;
  ST16(R(14)+28,R(0));
L8c086206:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(8))==0;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c086218; }
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(0)+=0x1u;
  ST16(R(14)+28,R(0));
L8c086218:;
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(3)+=0x7u;
  R(3)>>=2;
  c->t=R(3)&1;R(3)>>=1;
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c08618a;
L8c086226:;
  R(3)=0x2cu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(3)+=R(10);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->t=R(0)==R(3);
  if(!c->t) goto L8c086236;
  {  goto L8c08644e; }
L8c086236:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  c->t=R(0)>>31;R(0)<<=1;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0862d2;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0862c0;
  {  goto L8c086280; }
L8c086280:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(3)=0x8c064e90u;
  R(6)=0xd7u;
  R(4)=R(0);
  R(5)=0x8c0bcc20u;
  { c->pr=0x8c08628eu; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c0862ce; }
L8c0862c0:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(3)=0x8c0199c4u;
  R(6)=0xd7u;
  R(4)=R(0);
  R(5)=0x8c0bcc20u;
  { c->pr=0x8c0862ceu; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c0862ce:;
  ST32(R(14)+24,R(0));
  R(2)=R(0);
L8c0862d2:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c086306;
  R(3)=0x8c0125ccu;
  R(5)=0x8c0bcc20u;
  R(6)=0xd7u;
  { c->pr=0x8c0862e2u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0xd7u;
  R(7)=0x1u;
  R(3)=0x8c0bcc20u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0xffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c65e0u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(3)=0x8c012658u;
  { c->pr=0x8c086304u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086306:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)=0x0u;
  R(3)=0x8c0686b8u;
  R(6)=R(0);
  c->t=R(6)>>31;R(6)<<=1;
  { c->pr=0x8c086314u; R(4)=LD32(R(14)+24); f_8c0686b8(c); }
  R(0)=0x2cu;
  R(5)=R(12);
  R(2)=(int32_t)(int16_t)LD16(R(10)+R(0));
  R(1)=0x0u;
  R(2)+=0x7u;
  R(2)>>=2;
  c->t=R(2)&1;R(2)>>=1;
  c->t=R(1)>=R(2);
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c08632c; }
  {  goto L8c08644e; }
L8c08632c:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(11))==0;
  { uint32_t k=c->t; R(6)=R(4); if(k) goto L8c086348; }
  R(3)=R(4);
  R(0)=LD32(R(14)+24);
  R(3)<<=2;
  R(2)=R(5);
  c->t=R(2)>>31;R(2)<<=1;
  c->t=R(3)>>31;R(3)<<=1;
  ST16(R(2)+R(0),R(3));
  R(5)+=0x1u;
L8c086348:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x2u;
  R(3)=R(3)&0xFF;
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c086366;
  R(0)=LD32(R(14)+24);
  R(3)=R(6);
  R(1)=R(5);
  R(3)+=0x1u;
  c->t=R(1)>>31;R(1)<<=1;
  ST16(R(1)+R(0),R(3));
  R(5)+=0x1u;
L8c086366:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x4u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c086380;
  R(0)=LD32(R(14)+24);
  R(3)=R(6);
  R(1)=R(5);
  R(3)+=0x2u;
  c->t=R(1)>>31;R(1)<<=1;
  ST16(R(1)+R(0),R(3));
  R(5)+=0x1u;
L8c086380:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x8u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c08639a;
  R(0)=LD32(R(14)+24);
  R(3)=R(6);
  R(1)=R(5);
  R(3)+=0x3u;
  c->t=R(1)>>31;R(1)<<=1;
  ST16(R(1)+R(0),R(3));
  R(5)+=0x1u;
L8c08639a:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x10u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0863b4;
  R(0)=LD32(R(14)+24);
  R(3)=R(6);
  R(1)=R(5);
  R(3)+=0x4u;
  c->t=R(1)>>31;R(1)<<=1;
  ST16(R(1)+R(0),R(3));
  R(5)+=0x1u;
L8c0863b4:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x20u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0863ce;
  R(0)=LD32(R(14)+24);
  R(3)=R(6);
  R(1)=R(5);
  R(3)+=0x5u;
  c->t=R(1)>>31;R(1)<<=1;
  ST16(R(1)+R(0),R(3));
  R(5)+=0x1u;
L8c0863ce:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=0x40u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0863e8;
  R(0)=LD32(R(14)+24);
  R(3)=R(6);
  R(1)=R(5);
  R(3)+=0x6u;
  c->t=R(1)>>31;R(1)<<=1;
  ST16(R(1)+R(0),R(3));
  R(5)+=0x1u;
L8c0863e8:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(8))==0;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c086400; }
  R(0)=LD32(R(14)+24);
  R(2)=R(5);
  R(6)+=0x7u;
  c->t=R(2)>>31;R(2)<<=1;
  ST16(R(2)+R(0),R(6));
  R(5)+=0x1u;
L8c086400:;
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(10)+R(0));
  {  goto L8c086440; }
L8c086440:;
  R(3)+=0x7u;
  R(3)>>=2;
  c->t=R(3)&1;R(3)>>=1;
  c->t=R(4)>=R(3);
  if(c->t) goto L8c08644e;
  {  goto L8c08632c; }
L8c08644e:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
L8c086454:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(2)=(int32_t)(int16_t)LD16(R(10)+R(0));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c086462;
  {  goto L8c0860e0; }
L8c086462:;
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c086476(SH4Ctx *c) {
  {  return; }
}
void f_8c08647a(SH4Ctx *c) {
  {  return; }
}
void f_8c08647e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c0c758cu;
  R(0)=R(4);
  ST16(R(15)+4,R(0));
  ST16(R(15),R(5));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0864e0;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x117u;
  { c->pr=0x8c0864a8u; R(4)=0x44u; f_8c064e90(c); }
  {  goto L8c0864ea; }
L8c0864e0:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x117u;
  { c->pr=0x8c0864eau; R(4)=0x44u; f_8c0199c4(c); }
L8c0864ea:;
  R(12)=0xffu;
  R(14)=R(0);
  R(13)=0x8c0bcc20u;
  c->t=(R(14)&R(14))==0;
  R(9)=0x8c0c65e0u;
  R(8)=0x0u;
  { uint32_t k=!c->t; R(10)=0xffffffffu; if(k) goto L8c086520; }
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x117u;
  { c->pr=0x8c086504u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x117u;
  R(7)=0x1u;
  R(3)=0x8c012658u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c08651eu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086520:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x44u;
  { c->pr=0x8c08652au; R(4)=R(14); f_8c0686b8(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x2eu;
  R(1)=0x2cu;
  ST16(R(14)+R(0),R(3));
  R(1)+=R(14);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(1),R(0));
  R(11)=(int32_t)(int16_t)LD16(R(15));
  c->t=R(11)>>31;R(11)<<=1;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0865ae;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0865a0;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x11eu;
  { c->pr=0x8c086552u; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c0865aa; }
L8c0865a0:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x11eu;
  { c->pr=0x8c0865aau; R(4)=R(11); f_8c0199c4(c); }
L8c0865aa:;
  ST32(R(14)+16,R(0));
  R(2)=R(0);
L8c0865ae:;
  R(1)=LD32(R(14)+16);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0865da;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x11eu;
  { c->pr=0x8c0865beu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x11eu;
  R(7)=0x1u;
  R(3)=0x8c012658u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c0865d8u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0865da:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c0865e4u; R(4)=LD32(R(14)+16); f_8c0686b8(c); }
  R(11)=(int32_t)(int16_t)LD16(R(15));
  R(11)<<=2;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c08664e;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c086640;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x121u;
  { c->pr=0x8c0865feu; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c08664a; }
L8c086640:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x121u;
  { c->pr=0x8c08664au; R(4)=R(11); f_8c0199c4(c); }
L8c08664a:;
  ST32(R(14)+20,R(0));
  R(2)=R(0);
L8c08664e:;
  R(1)=LD32(R(14)+20);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c08667a;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x121u;
  { c->pr=0x8c08665eu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x121u;
  R(7)=0x1u;
  R(3)=0x8c012658u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c086678u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c08667a:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c086684u; R(4)=LD32(R(14)+20); f_8c0686b8(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0866ee;
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0866e0;
  R(2)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x125u;
  { c->pr=0x8c0866a6u; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c0866ea; }
L8c0866e0:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x125u;
  { c->pr=0x8c0866eau; R(4)=R(11); f_8c0199c4(c); }
L8c0866ea:;
  ST32(R(14),R(0));
  R(3)=R(0);
L8c0866ee:;
  R(1)=LD32(R(14));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c08671a;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x125u;
  { c->pr=0x8c0866feu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x125u;
  R(7)=0x1u;
  R(3)=0x8c012658u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c086718u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c08671a:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c086724u; R(4)=LD32(R(14)); f_8c0686b8(c); }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c08674c;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08673e;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x129u;
  { c->pr=0x8c08673au; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c086748; }
L8c08673e:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x129u;
  { c->pr=0x8c086748u; R(4)=R(11); f_8c0199c4(c); }
L8c086748:;
  ST32(R(14)+4,R(0));
  R(2)=R(0);
L8c08674c:;
  R(1)=LD32(R(14)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c086778;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x129u;
  { c->pr=0x8c08675cu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x129u;
  R(7)=0x1u;
  R(3)=0x8c012658u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c086776u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086778:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c086782u; R(4)=LD32(R(14)+4); f_8c0686b8(c); }
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0867c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(11));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c0867e4; }
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x13bu;
  { c->pr=0x8c0867e0u; R(4)=0x44u; f_8c064e90(c); }
  {  goto L8c0867ee; }
L8c0867e4:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x13bu;
  { c->pr=0x8c0867eeu; R(4)=0x44u; f_8c0199c4(c); }
L8c0867ee:;
  R(14)=R(0);
  R(0)=0x2eu;
  ST16(R(14)+R(0),R(13));
  R(0)=0x2cu;
  ST16(R(14)+R(0),R(12));
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08680e;
  R(3)=0x8c064e90u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(5)=0x8c0bcc20u;
  R(6)=0x141u;
  { c->pr=0x8c08680au; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c08681a; }
L8c08680e:;
  R(3)=0x8c0199c4u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(5)=0x8c0bcc20u;
  R(6)=0x141u;
  { c->pr=0x8c08681au; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c08681a:;
  ST32(R(14)+16,R(0));
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(3)=R(0); if(k) goto L8c086860; }
  R(3)=0x8c064e90u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(5)=0x8c0bcc20u;
  R(6)=0x143u;
  { c->pr=0x8c086830u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c08686c; }
L8c086860:;
  R(3)=0x8c0199c4u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(5)=0x8c0bcc20u;
  R(6)=0x143u;
  { c->pr=0x8c08686cu; R(4)<<=2; f_8c0199c4(c); }
L8c08686c:;
  ST32(R(14)+20,R(0));
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(1)=R(0); if(k) goto L8c08688c; }
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c064e90u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(3);
  R(6)=0x146u;
  { c->pr=0x8c086888u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c08689e; }
L8c08688c:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c0199c4u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(3);
  R(6)=0x146u;
  { c->pr=0x8c08689eu; R(4)<<=2; f_8c0199c4(c); }
L8c08689e:;
  ST32(R(14),R(0));
  R(1)=LD32(R(11));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(3)=R(0); if(k) goto L8c0868be; }
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c064e90u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(3);
  R(6)=0x148u;
  { c->pr=0x8c0868bau; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c0868d0; }
L8c0868be:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c0199c4u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(3);
  R(6)=0x148u;
  { c->pr=0x8c0868d0u; R(4)<<=2; f_8c0199c4(c); }
L8c0868d0:;
  ST32(R(14)+4,R(0));
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c086860(SH4Ctx *c) {
  R(3)=0x8c0199c4u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(5)=0x8c0bcc20u;
  R(6)=0x143u;
  { c->pr=0x8c08686cu; R(4)<<=2; f_8c0199c4(c); }
  ST32(R(14)+20,R(0));
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(1)=R(0); if(k) goto L8c08688c; }
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c064e90u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(3);
  R(6)=0x146u;
  { c->pr=0x8c086888u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c08689e; }
L8c08688c:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c0199c4u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(3);
  R(6)=0x146u;
  { c->pr=0x8c08689eu; R(4)<<=2; f_8c0199c4(c); }
L8c08689e:;
  ST32(R(14),R(0));
  R(1)=LD32(R(11));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(3)=R(0); if(k) goto L8c0868be; }
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c064e90u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(3);
  R(6)=0x148u;
  { c->pr=0x8c0868bau; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c0868d0; }
L8c0868be:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c0199c4u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(3);
  R(6)=0x148u;
  { c->pr=0x8c0868d0u; R(4)<<=2; f_8c0199c4(c); }
L8c0868d0:;
  ST32(R(14)+4,R(0));
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c086920(SH4Ctx *c) {
  R(0)=(uint32_t)(int32_t)(int16_t)R(6);
  R(5)=0x0u;
  c->t=(int32_t)R(0)>0;
  R(1)=R(5);
  { uint32_t k=!c->t; R(7)=LD32(R(4)+16); if(k) goto L8c086938; }
L8c08692c:;
  R(1)+=0x1u;
  ST16(R(7),R(5));
  R(2)=(uint32_t)(int32_t)(int16_t)R(1);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  { uint32_t k=!c->t; R(7)+=0x2u; if(k) goto L8c08692c; }
L8c086938:;
  R(0)=0x32u;
  ST32(R(4)+24,R(5));
  ST16(R(4)+R(0),R(5));
  ST32(R(4)+36,R(5));
  { ST32(R(4)+40,R(5)); return; }
}
void f_8c086944(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(6);
  ST32(R(15)+8,R(4));
  ST16(R(15),R(5));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(8)=LD32(R(15)+8);
  R(5)=R(0);
  { c->pr=0x8c08695cu; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c08647e(c); }
  ST32(R(8),R(0));
  R(4)=LD32(R(15)+8);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=(int32_t)(int16_t)LD16(R(15));
  R(4)=LD32(R(4));
  R(6)=R(0);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} { f_8c086920(c); return; } }
}
void f_8c086970(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(6);
  ST32(R(15)+8,R(4));
  ST16(R(15),R(5));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(8)=LD32(R(15)+8);
  R(5)=R(0);
  { c->pr=0x8c086988u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0867c0(c); }
  ST32(R(8),R(0));
  R(4)=LD32(R(15)+8);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=(int32_t)(int16_t)LD16(R(15));
  R(4)=LD32(R(4));
  R(6)=R(0);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} { f_8c086920(c); return; } }
}
void f_8c0869a2(SH4Ctx *c) {
  R(0)=0x30u;
  { R(0)=(int32_t)(int16_t)LD16(R(4)+R(0)); return; }
}
void f_8c0869a8(SH4Ctx *c) {
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(2)=LD32(R(4));
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(3)=LD32(R(5));
  R(6)<<=2;
  R(1)=LD32(R(5)+4);
  R(6)+=R(2);
  ST32(R(6),R(3));
  ST32(R(6)+4,R(1));
  R(3)=LD32(R(5)+8);
  { ST32(R(6)+8,R(3)); return; }
}
void f_8c0869c4(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  R(0)=R(6);
  ST32(R(15)+4,R(4));
  ST16(R(15)+8,R(0));
  ST16(R(15),R(7));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(4)=LD32(R(15)+4);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(4)=LD32(R(4));
  R(0)<<=2;
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(6)=R(0);
  R(3)<<=2;
  R(4)+=R(3);
  R(3)=0x8c0685b4u;
  { R(15)+=0xcu; { f_8c0685b4(c); return; } }
}
void f_8c0869f0(SH4Ctx *c) {
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(2)=LD32(R(4));
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(6)+=R(2);
  R(3)=LD32(R(6));
  R(1)=LD32(R(6)+4);
  ST32(R(5),R(3));
  ST32(R(5)+4,R(1));
  R(3)=LD32(R(6)+8);
  { ST32(R(5)+8,R(3)); return; }
}
void f_8c086a0c(SH4Ctx *c) {
  R(15)+=0xfffffff0u;
  R(0)=R(6);
  ST32(R(15)+8,R(4));
  ST32(R(15),R(5));
  ST16(R(15)+12,R(0));
  R(0)=R(7);
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(5)=LD32(R(15)+8);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(5)=LD32(R(5));
  R(0)<<=2;
  R(4)=LD32(R(15));
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=0x8c0685b4u;
  R(0)<<=2;
  R(5)+=R(0);
  { R(15)+=0x10u; { f_8c0685b4(c); return; } }
}
void f_8c086a80(SH4Ctx *c) {
  {  return; }
}
void f_8c086aa0(SH4Ctx *c) {
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(2)=LD32(R(4)+4);
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(6)+=R(2);
  R(3)=LD32(R(6));
  R(1)=LD32(R(6)+4);
  ST32(R(5),R(3));
  ST32(R(5)+4,R(1));
  R(3)=LD32(R(6)+8);
  { ST32(R(5)+8,R(3)); return; }
}
void f_8c086abc(SH4Ctx *c) {
  R(3)=(int32_t)(int16_t)LD16(R(5));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(7)=0x0u; if(k) { f_8c086ade(c); return; } }
  { f_8c086ac4(c); return; }
}
void f_8c086ac4(SH4Ctx *c) {
L8c086ac4:;
  R(0)=(uint32_t)(int32_t)(int16_t)R(7);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(2)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c086ad4;
  { R(0)=0x0u; return; }
L8c086ad4:;
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(7)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(7);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c086ac4;
  { f_8c086ade(c); return; }
}
void f_8c086ad4(SH4Ctx *c) {
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(7)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(7);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) { f_8c086ac4(c); return; }
  { f_8c086ade(c); return; }
}
void f_8c086ade(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(5));
  c->t=R(0)>>31;R(0)<<=1;
  ST16(R(4)+R(0),R(6));
  R(0)=0x1u;
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(3)+=0x1u;
  ST16(R(5),R(3));
  {  return; }
}
void f_8c086af4(SH4Ctx *c) {
  R(0)=0x2eu;
  { R(0)=(int32_t)(int16_t)LD16(R(4)+R(0)); return; }
}
void f_8c086afa(SH4Ctx *c) {
  R(0)=LD32(R(4)+16);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=0x0u;
  c->t=R(5)>>31;R(5)<<=1;
  { ST16(R(5)+R(0),R(3)); return; }
}
void f_8c086b06(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(4);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(10)=R(5); if(k) goto L8c086b24; }
  {  goto L8c086cdc; }
L8c086b24:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(10);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c086b2e;
  R(0)=0x2eu;
  R(10)=(int32_t)(int16_t)LD16(R(13)+R(0));
L8c086b2e:;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c086b44;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x245u;
  { c->pr=0x8c086b40u; R(4)=0x44u; f_8c064e90(c); }
  {  goto L8c086b4e; }
L8c086b44:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x245u;
  { c->pr=0x8c086b4eu; R(4)=0x44u; f_8c0199c4(c); }
L8c086b4e:;
  R(9)=0x8c0bcc20u;
  R(14)=R(0);
  R(8)=0xffu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c086b84; }
  R(3)=0x8c0125ccu;
  R(5)=R(9);
  R(6)=0x245u;
  { c->pr=0x8c086b64u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x245u;
  R(3)=0xffffffffu;
  R(1)=0x8c0c65e0u;
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c012658u;
  { c->pr=0x8c086b82u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086b84:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x44u;
  { c->pr=0x8c086b8eu; R(4)=R(14); f_8c0686b8(c); }
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c086b96;
  {  goto L8c086cdc; }
L8c086b96:;
  R(3)=0x8c09c3dcu;
  R(2)=R(13);
  R(1)=R(14);
  { c->pr=0x8c086ba0u; R(0)=0x44u; f_8c09c3dc(c); }
  R(11)=(uint32_t)(int32_t)(int16_t)R(10);
  c->t=R(11)>>31;R(11)<<=1;
  c->t=(R(11)&R(11))==0;
  R(0)=0x2eu;
  { uint32_t k=c->t; ST16(R(14)+R(0),R(10)); if(k) goto L8c086c2e; }
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c086c20;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x24eu;
  { c->pr=0x8c086bbeu; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c086c2a; }
L8c086c20:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x24eu;
  { c->pr=0x8c086c2au; R(4)=R(11); f_8c0199c4(c); }
L8c086c2a:;
  ST32(R(14)+16,R(0));
  R(2)=R(0);
L8c086c2e:;
  R(1)=LD32(R(14)+16);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c086c5e;
  R(3)=0x8c0125ccu;
  R(5)=R(9);
  R(6)=0x24eu;
  { c->pr=0x8c086c3eu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x24eu;
  R(3)=0xffffffffu;
  R(1)=0x8c0c65e0u;
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c012658u;
  { c->pr=0x8c086c5cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086c5e:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c086c68u; R(4)=LD32(R(14)+16); f_8c0686b8(c); }
  R(3)=(uint32_t)(int32_t)(int16_t)R(10);
  R(3)<<=2;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c086c96; }
  R(1)=0x8c0c758cu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c086c88;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x250u;
  { c->pr=0x8c086c84u; R(4)=LD32(R(15)); f_8c064e90(c); }
  {  goto L8c086c92; }
L8c086c88:;
  R(3)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x250u;
  { c->pr=0x8c086c92u; R(4)=LD32(R(15)); f_8c0199c4(c); }
L8c086c92:;
  ST32(R(14)+20,R(0));
  R(1)=R(0);
L8c086c96:;
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c086cc6;
  R(3)=0x8c0125ccu;
  R(5)=R(9);
  R(6)=0x250u;
  { c->pr=0x8c086ca6u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x250u;
  R(3)=0xffffffffu;
  R(1)=0x8c0c65e0u;
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c012658u;
  { c->pr=0x8c086cc4u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086cc6:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=LD32(R(15));
  { c->pr=0x8c086cd0u; R(4)=LD32(R(14)+20); f_8c0686b8(c); }
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c086cdc;
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c086d20;
L8c086cdc:;
  { R(0)=0x0u; goto L8c086d58; }
L8c086d20:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(10);
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c086d34; }
L8c086d28:;
  R(4)+=0x1u;
  R(0)=LD32(R(14)+16);
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  { uint32_t k=!c->t; ST16(R(11)+R(0),R(12)); if(k) goto L8c086d28; }
L8c086d34:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(!c->t) goto L8c086d56;
  R(6)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(5)=LD32(R(13)+20);
  R(3)=0x8c0685b4u;
  R(6)<<=2;
  { c->pr=0x8c086d48u; R(4)=LD32(R(14)+20); f_8c0685b4(c); }
  R(0)=0x2eu;
  R(5)=LD32(R(13)+16);
  R(6)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x8c0685b4u;
  c->t=R(6)>>31;R(6)<<=1;
  { c->pr=0x8c086d56u; R(4)=LD32(R(14)+16); f_8c0685b4(c); }
L8c086d56:;
  R(0)=R(14);
L8c086d58:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c086c20(SH4Ctx *c) {
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x24eu;
  { c->pr=0x8c086c2au; R(4)=R(11); f_8c0199c4(c); }
  ST32(R(14)+16,R(0));
  R(2)=R(0);
  R(1)=LD32(R(14)+16);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c086c5e;
  R(3)=0x8c0125ccu;
  R(5)=R(9);
  R(6)=0x24eu;
  { c->pr=0x8c086c3eu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x24eu;
  R(3)=0xffffffffu;
  R(1)=0x8c0c65e0u;
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c012658u;
  { c->pr=0x8c086c5cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086c5e:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(11);
  { c->pr=0x8c086c68u; R(4)=LD32(R(14)+16); f_8c0686b8(c); }
  R(3)=(uint32_t)(int32_t)(int16_t)R(10);
  R(3)<<=2;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c086c96; }
  R(1)=0x8c0c758cu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c086c88;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bcc20u;
  R(6)=0x250u;
  { c->pr=0x8c086c84u; R(4)=LD32(R(15)); f_8c064e90(c); }
  {  goto L8c086c92; }
L8c086c88:;
  R(3)=0x8c0199c4u;
  R(5)=0x8c0bcc20u;
  R(6)=0x250u;
  { c->pr=0x8c086c92u; R(4)=LD32(R(15)); f_8c0199c4(c); }
L8c086c92:;
  ST32(R(14)+20,R(0));
  R(1)=R(0);
L8c086c96:;
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c086cc6;
  R(3)=0x8c0125ccu;
  R(5)=R(9);
  R(6)=0x250u;
  { c->pr=0x8c086ca6u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x250u;
  R(3)=0xffffffffu;
  R(1)=0x8c0c65e0u;
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c012658u;
  { c->pr=0x8c086cc4u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086cc6:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=LD32(R(15));
  { c->pr=0x8c086cd0u; R(4)=LD32(R(14)+20); f_8c0686b8(c); }
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c086cdc;
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c086d20;
L8c086cdc:;
  { R(0)=0x0u; goto L8c086d58; }
L8c086d20:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(10);
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c086d34; }
L8c086d28:;
  R(4)+=0x1u;
  R(0)=LD32(R(14)+16);
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  { uint32_t k=!c->t; ST16(R(11)+R(0),R(12)); if(k) goto L8c086d28; }
L8c086d34:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(!c->t) goto L8c086d56;
  R(6)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(5)=LD32(R(13)+20);
  R(3)=0x8c0685b4u;
  R(6)<<=2;
  { c->pr=0x8c086d48u; R(4)=LD32(R(14)+20); f_8c0685b4(c); }
  R(0)=0x2eu;
  R(5)=LD32(R(13)+16);
  R(6)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x8c0685b4u;
  c->t=R(6)>>31;R(6)<<=1;
  { c->pr=0x8c086d56u; R(4)=LD32(R(14)+16); f_8c0685b4(c); }
L8c086d56:;
  R(0)=R(14);
L8c086d58:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c086d20(SH4Ctx *c) {
  R(5)=(uint32_t)(int32_t)(int16_t)R(10);
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c086d34; }
L8c086d28:;
  R(4)+=0x1u;
  R(0)=LD32(R(14)+16);
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  { uint32_t k=!c->t; ST16(R(11)+R(0),R(12)); if(k) goto L8c086d28; }
L8c086d34:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(!c->t) goto L8c086d56;
  R(6)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(5)=LD32(R(13)+20);
  R(3)=0x8c0685b4u;
  R(6)<<=2;
  { c->pr=0x8c086d48u; R(4)=LD32(R(14)+20); f_8c0685b4(c); }
  R(0)=0x2eu;
  R(5)=LD32(R(13)+16);
  R(6)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x8c0685b4u;
  c->t=R(6)>>31;R(6)<<=1;
  { c->pr=0x8c086d56u; R(4)=LD32(R(14)+16); f_8c0685b4(c); }
L8c086d56:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c086d6c(SH4Ctx *c) {
  R(3)=LD32(R(4)+16);
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)=(int32_t)(int16_t)LD16(R(3)+R(0)); return; }
}
void f_8c086d76(SH4Ctx *c) {
  R(0)=0x2eu;
  { R(0)=(int32_t)(int16_t)LD16(R(4)+R(0)); return; }
}
void f_8c086da0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(5);
  R(14)=R(4);
  c->t=R(14)==R(13);
  { uint32_t k=!c->t; ST32(R(15),R(6)); if(k) goto L8c086dba; }
  {  goto L8c086f9c; }
L8c086dba:;
  R(0)=LD32(R(15));
  R(12)=0x8c0bcc20u;
  R(11)=0xffu;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c086e90;
  R(0)=0x2cu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c086e36;
  R(3)=0x8c0c758cu;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c086e20;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c064e90u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  R(6)=0x29du;
  { c->pr=0x8c086deeu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c086e32; }
L8c086e20:;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c0199c4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  R(6)=0x29du;
  { c->pr=0x8c086e32u; R(4)<<=2; f_8c0199c4(c); }
L8c086e32:;
  ST32(R(13),R(0));
  R(3)=R(0);
L8c086e36:;
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c086e68;
  R(3)=0x8c0125ccu;
  R(5)=R(12);
  R(6)=0x29du;
  { c->pr=0x8c086e46u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x29du;
  R(3)=0x0u;
  R(6)=R(3);
  R(1)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c086e66u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086e68:;
  R(0)=0x2cu;
  R(2)=0x8c0686b8u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x0u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c086e7cu; R(4)=LD32(R(13)); f_8c0686b8(c); }
  R(0)=0x2cu;
  R(5)=LD32(R(14));
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=0x8c0685b4u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c086e90u; R(4)=LD32(R(13)); f_8c0685b4(c); }
L8c086e90:;
  R(0)=LD32(R(15));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c086e9a;
  {  goto L8c086f9c; }
L8c086e9a:;
  R(0)=0x2cu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c086f36;
  R(3)=0x8c0c758cu;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c086f20;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c064e90u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  R(6)=0x2a3u;
  { c->pr=0x8c086ec4u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c086f32; }
L8c086f20:;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c0199c4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  R(6)=0x2a3u;
  { c->pr=0x8c086f32u; R(4)<<=2; f_8c0199c4(c); }
L8c086f32:;
  ST32(R(13)+4,R(0));
  R(3)=R(0);
L8c086f36:;
  R(1)=LD32(R(13)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c086f68;
  R(3)=0x8c0125ccu;
  R(5)=R(12);
  R(6)=0x2a3u;
  { c->pr=0x8c086f46u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x2a3u;
  R(3)=0x0u;
  R(6)=R(3);
  R(1)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c086f66u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086f68:;
  R(0)=0x2cu;
  R(2)=0x8c0686b8u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x0u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c086f7cu; R(4)=LD32(R(13)+4); f_8c0686b8(c); }
  R(0)=0x2cu;
  R(5)=LD32(R(14)+4);
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=LD32(R(13)+4);
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0685b4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
L8c086f9c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c086e20(SH4Ctx *c) {
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c0199c4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  R(6)=0x29du;
  { c->pr=0x8c086e32u; R(4)<<=2; f_8c0199c4(c); }
  ST32(R(13),R(0));
  R(3)=R(0);
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c086e68;
  R(3)=0x8c0125ccu;
  R(5)=R(12);
  R(6)=0x29du;
  { c->pr=0x8c086e46u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x29du;
  R(3)=0x0u;
  R(6)=R(3);
  R(1)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c086e66u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086e68:;
  R(0)=0x2cu;
  R(2)=0x8c0686b8u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x0u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c086e7cu; R(4)=LD32(R(13)); f_8c0686b8(c); }
  R(0)=0x2cu;
  R(5)=LD32(R(14));
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=0x8c0685b4u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c086e90u; R(4)=LD32(R(13)); f_8c0685b4(c); }
  R(0)=LD32(R(15));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c086e9a;
  {  goto L8c086f9c; }
L8c086e9a:;
  R(0)=0x2cu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c086f36;
  R(3)=0x8c0c758cu;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c086f20;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c064e90u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  R(6)=0x2a3u;
  { c->pr=0x8c086ec4u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c086f32; }
L8c086f20:;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c0199c4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  R(6)=0x2a3u;
  { c->pr=0x8c086f32u; R(4)<<=2; f_8c0199c4(c); }
L8c086f32:;
  ST32(R(13)+4,R(0));
  R(3)=R(0);
L8c086f36:;
  R(1)=LD32(R(13)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c086f68;
  R(3)=0x8c0125ccu;
  R(5)=R(12);
  R(6)=0x2a3u;
  { c->pr=0x8c086f46u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x2a3u;
  R(3)=0x0u;
  R(6)=R(3);
  R(1)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c086f66u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086f68:;
  R(0)=0x2cu;
  R(2)=0x8c0686b8u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x0u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c086f7cu; R(4)=LD32(R(13)+4); f_8c0686b8(c); }
  R(0)=0x2cu;
  R(5)=LD32(R(14)+4);
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=LD32(R(13)+4);
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0685b4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
L8c086f9c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c086f20(SH4Ctx *c) {
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c0199c4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcc20u;
  R(4)+=R(2);
  R(6)=0x2a3u;
  { c->pr=0x8c086f32u; R(4)<<=2; f_8c0199c4(c); }
  ST32(R(13)+4,R(0));
  R(3)=R(0);
  R(1)=LD32(R(13)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c086f68;
  R(3)=0x8c0125ccu;
  R(5)=R(12);
  R(6)=0x2a3u;
  { c->pr=0x8c086f46u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x2a3u;
  R(3)=0x0u;
  R(6)=R(3);
  R(1)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c65e0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c086f66u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c086f68:;
  R(0)=0x2cu;
  R(2)=0x8c0686b8u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x0u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  { c->pr=0x8c086f7cu; R(4)=LD32(R(13)+4); f_8c0686b8(c); }
  R(0)=0x2cu;
  R(5)=LD32(R(14)+4);
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=LD32(R(13)+4);
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0685b4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
}
void f_8c086faa(SH4Ctx *c) {
  R(3)=0x0u;
  R(0)=0x2eu;
  ST16(R(7),R(3));
  R(3)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(2)=(int32_t)(int16_t)LD16(R(7));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c086fd4;
L8c086fb8:;
  R(2)=(int32_t)(int16_t)LD16(R(7));
  R(0)=LD32(R(5)+16);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c086fd4;
  R(2)=(int32_t)(int16_t)LD16(R(7));
  R(0)=0x2eu;
  R(2)+=0x1u;
  ST16(R(7),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(7));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c086fb8;
L8c086fd4:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(7));
  R(3)=(int32_t)(int16_t)LD16(R(5)+R(0));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c087020;
  { R(0)=0x0u; return; }
L8c087020:;
  R(0)=LD32(R(5)+16);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=(uint32_t)(int32_t)(int16_t)R(6);
  R(2)+=R(0);
  R(0)=LD32(R(4)+16);
  c->t=R(3)>>31;R(3)<<=1;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(6)<<=2;
  ST16(R(2),R(1));
  R(3)=(int32_t)(int16_t)LD16(R(7));
  R(0)=LD32(R(5)+20);
  R(3)<<=2;
  R(3)+=R(0);
  R(0)=LD32(R(4)+20);
  R(2)=LD32(R(6)+R(0));
  R(0)=0x1u;
  ST32(R(3),R(2));
  {  return; }
}
void f_8c087048(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c087120;
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)<<=2;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c087086;
  R(1)=0x8c0c758cu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c087076;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=0x8c064e90u;
  R(6)=0x2efu;
  R(5)=0x8c0bcc20u;
  { c->pr=0x8c087072u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c087082; }
L8c087076:;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=0x8c0199c4u;
  R(6)=0x2efu;
  R(5)=0x8c0bcc20u;
  { c->pr=0x8c087082u; R(4)<<=2; f_8c0199c4(c); }
L8c087082:;
  ST32(R(14)+8,R(0));
  R(1)=R(0);
L8c087086:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0870bc;
  R(3)=0x8c0125ccu;
  R(5)=0x8c0bcc20u;
  R(6)=0x2efu;
  { c->pr=0x8c087096u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x2efu;
  R(1)=0x0u;
  R(3)=0x8c0bcc20u;
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(1);
  R(3)=0xffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c65e0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c0870bau; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0870bc:;
  R(0)=0x2cu;
  R(4)=LD32(R(14)+8);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x0u;
  R(3)=0x8c0686b8u;
  R(6)<<=2;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0686b8(c); return; } }
L8c087120:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087126(SH4Ctx *c) {
  R(0)=0x2eu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(6)=R(5);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; R(12)=0x3u; if(k) goto L8c087140; }
  {  goto L8c087236; }
L8c087140:;
  R(3)=LD32(R(4)+16);
  R(0)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c087158;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0871a0;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0871e0;
  {  goto L8c08722a; }
L8c087158:;
  R(0)=LD32(R(4)+20);
  R(7)=(uint32_t)(int32_t)(int16_t)R(6);
  R(7)<<=2;
  R(7)=LD32(R(7)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(7)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(14)=R(5); if(k) goto L8c08722a; }
L8c087168:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=LD32(R(7)+8);
  R(3)=R(1);
  R(3)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(13)=R(5);
  R(1)+=R(3);
  R(1)+=R(2);
L8c087178:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; {int32_t v=(int16_t)LD16(R(1));R(1)+=2;R(11)=(uint32_t)v;} if(k) goto L8c08718a; }
  R(0)=LD32(R(4)+8);
  R(11)=(uint32_t)(int32_t)(int16_t)R(11);
  R(3)=LD32(R(7));
  R(11)<<=2;
  ST32(R(11)+R(0),R(3));
L8c08718a:;
  R(13)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(13);
  c->t=(int32_t)R(2)>=(int32_t)R(12);
  if(!c->t) goto L8c087178;
  R(0)=(int32_t)(int16_t)LD16(R(7)+4);
  R(14)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c087168;
  {  goto L8c08722a; }
L8c0871a0:;
  R(0)=LD32(R(4)+20);
  R(14)=(uint32_t)(int32_t)(int16_t)R(6);
  R(14)<<=2;
  R(14)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(14)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(7)=R(5); if(k) goto L8c08722a; }
L8c0871b0:;
  R(13)=(uint32_t)(int32_t)(int16_t)R(7);
  R(2)=LD32(R(14));
  R(3)=R(13);
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(3)=LD32(R(4)+8);
  R(13)<<=2;
  R(13)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(13)+8);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(11)=R(0); if(k) goto L8c0871d2; }
  R(0)=LD32(R(4)+8);
  R(11)=(uint32_t)(int32_t)(int16_t)R(11);
  R(3)=LD32(R(13)+4);
  R(11)<<=2;
  ST32(R(11)+R(0),R(3));
L8c0871d2:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+4);
  R(7)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(7);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c0871b0;
  {  goto L8c08722a; }
L8c0871e0:;
  R(0)=LD32(R(4)+20);
  R(13)=(uint32_t)(int32_t)(int16_t)R(6);
  R(13)<<=2;
  R(13)=LD32(R(13)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(13)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(14)=R(5); if(k) goto L8c08722a; }
L8c0871f0:;
  R(7)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)=LD32(R(13));
  R(2)=LD32(R(4)+8);
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  c->t=(R(2)&R(2))==0;
  R(7)+=R(3);
  { uint32_t k=c->t; R(11)=(int32_t)(int16_t)LD16(R(7)); if(k) goto L8c08720c; }
  R(0)=LD32(R(4)+8);
  R(11)=(uint32_t)(int32_t)(int16_t)R(11);
  R(3)=LD32(R(7)+4);
  R(11)<<=2;
  ST32(R(11)+R(0),R(3));
L8c08720c:;
  R(3)=LD32(R(4)+8);
  R(0)=(int32_t)(int16_t)LD16(R(7)+2);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(11)=R(0); if(k) goto L8c087220; }
  R(0)=LD32(R(4)+8);
  R(11)=(uint32_t)(int32_t)(int16_t)R(11);
  R(3)=LD32(R(7)+4);
  R(11)<<=2;
  ST32(R(11)+R(0),R(3));
L8c087220:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+4);
  R(14)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c0871f0;
L8c08722a:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(6)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c087140;
L8c087236:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087240(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c085ce0u;
  { c->pr=0x8c08724au; R(14)=R(4); f_8c085ce0(c); }
  R(2)=0x8c086080u;
  { c->pr=0x8c087250u; R(4)=R(14); f_8c086080(c); }
  { c->pr=0x8c087254u; R(4)=R(14); f_8c087b00(c); }
  R(2)=LD32(R(14));
  R(3)=R(14);
  R(3)+=0x38u;
  R(5)=R(14);
  R(1)=LD32(R(2));
  R(6)=R(14);
  R(0)=LD32(R(2)+4);
  R(4)=R(14);
  ST32(R(3),R(1));
  R(6)+=0x34u;
  ST32(R(3)+4,R(0));
  R(0)=0x34u;
  R(1)=LD32(R(2)+8);
  R(5)+=0x38u;
  c->fr[3]=0x00000000u;
  ST32(R(3)+8,R(1));
  R(3)=0x8c0a2160u;
  fp_st(c,3,R(0)+R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0a2160(c); return; } }
}
void f_8c0872a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c0872b2; }
  R(2)=0x8c085ce0u;
  { c->pr=0x8c0872b2u;  f_8c085ce0(c); }
L8c0872b2:;
  { c->pr=0x8c0872b6u; R(4)=R(14); f_8c087b00(c); }
  R(2)=LD32(R(14));
  R(3)=R(14);
  R(3)+=0x38u;
  R(5)=R(14);
  R(1)=LD32(R(2));
  R(6)=R(14);
  R(0)=LD32(R(2)+4);
  R(4)=R(14);
  ST32(R(3),R(1));
  R(6)+=0x34u;
  ST32(R(3)+4,R(0));
  R(0)=0x34u;
  R(1)=LD32(R(2)+8);
  R(5)+=0x38u;
  c->fr[3]=0x00000000u;
  ST32(R(3)+8,R(1));
  R(3)=0x8c0a2160u;
  fp_st(c,3,R(0)+R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0a2160(c); return; } }
}
void f_8c0872e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c085ce0u;
  { c->pr=0x8c0872eau; R(14)=R(4); f_8c085ce0(c); }
  { c->pr=0x8c0872eeu; R(4)=R(14); f_8c087b00(c); }
  R(3)=LD32(R(14));
  R(2)=R(14);
  R(2)+=0x38u;
  R(6)=R(14);
  R(1)=LD32(R(3));
  R(5)=R(14);
  R(0)=LD32(R(3)+4);
  R(4)=R(14);
  ST32(R(2),R(1));
  R(6)+=0x34u;
  ST32(R(2)+4,R(0));
  R(0)=0x34u;
  R(1)=LD32(R(3)+8);
  R(5)+=0x38u;
  R(3)=0x8c0a2160u;
  c->fr[3]=0x00000000u;
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0a2160(c); return; } }
}
void f_8c087318(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c086080u;
  { c->pr=0x8c087322u; R(14)=R(4); f_8c086080(c); }
  { c->pr=0x8c087326u; R(4)=R(14); f_8c087b00(c); }
  R(3)=LD32(R(14));
  R(2)=R(14);
  R(2)+=0x38u;
  R(6)=R(14);
  R(1)=LD32(R(3));
  R(5)=R(14);
  R(0)=LD32(R(3)+4);
  R(4)=R(14);
  ST32(R(2),R(1));
  R(6)+=0x34u;
  ST32(R(2)+4,R(0));
  R(0)=0x34u;
  R(1)=LD32(R(3)+8);
  R(5)+=0x38u;
  R(3)=0x8c0a2160u;
  c->fr[3]=0x00000000u;
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0a2160(c); return; } }
}
void f_8c087350(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  c->fr[4]=0x00000000u;
  R(0)=0x4u;
  R(14)=R(7);
  ST16(R(15),R(6));
  fp_st(c,4,R(14));
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(4)+16);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c087392;
  R(0)=LD32(R(4)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(5)<<=2;
  R(4)=R(14);
  R(3)=LD32(R(5)+R(0));
  ST32(R(15)+4,R(3));
  R(5)=(int32_t)(int16_t)LD16(R(15));
  R(3)=LD32(R(3)+16);
  R(2)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(2);
  R(5)<<=2;
  R(5)+=R(3);
  R(15)+=0x8u;
  R(2)=0x8c05e6eau;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e6ea(c); return; } }
L8c087392:;
  R(15)+=0x8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087398(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(6);
  ST16(R(15)+4,R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(4)+16);
  c->t=R(0)>>31;R(0)<<=1;
  R(14)=0x8c05a3fau;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(6)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(6)<<=2; if(k) goto L8c0873c0; }
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0873ca;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c087420;
  {  goto L8c087440; }
L8c0873c0:;
  R(0)=LD32(R(4)+20);
  R(3)=LD32(R(6)+R(0));
  ST32(R(15),R(3));
  { R(4)=LD32(R(3)); goto L8c087434; }
L8c0873ca:;
  R(0)=LD32(R(4)+20);
  R(3)=LD32(R(6)+R(0));
  ST32(R(15),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=LD32(R(3));
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(4)+=R(0);
  { R(4)=LD32(R(4)+4); goto L8c087434; }
L8c087420:;
  R(0)=LD32(R(4)+20);
  R(2)=LD32(R(6)+R(0));
  ST32(R(15),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=LD32(R(2));
  R(4)=R(0);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)=LD32(R(4)+4);
L8c087434:;
  { uint32_t tg=R(14); c->pr=0x8c087438u;  sh4_call(c,tg); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c087440:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087420(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(2)=LD32(R(6)+R(0));
  ST32(R(15),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=LD32(R(2));
  R(4)=R(0);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)=LD32(R(4)+4);
  { uint32_t tg=R(14); c->pr=0x8c087438u;  sh4_call(c,tg); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087440(SH4Ctx *c) {
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08744a(SH4Ctx *c) {
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(4)+16);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(7)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(7)<<=2; if(k) goto L8c087466; }
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c08746e;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c087482;
  {  goto L8c087494; }
L8c087466:;
  R(0)=LD32(R(4)+20);
  R(4)=LD32(R(7)+R(0));
  { R(0)=LD32(R(4)); return; }
L8c08746e:;
  R(0)=LD32(R(4)+20);
  R(4)=LD32(R(7)+R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(6);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=LD32(R(4));
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)+=R(2); goto L8c087490; }
L8c087482:;
  R(0)=LD32(R(4)+20);
  R(4)=LD32(R(7)+R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(6);
  R(0)<<=2;
  R(3)=LD32(R(4));
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
L8c087490:;
  { R(0)=LD32(R(0)+4); return; }
L8c087494:;
  R(0)=0x0u;
  {  return; }
}
void f_8c08746e(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  R(4)=LD32(R(7)+R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(6);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=LD32(R(4));
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)+=R(2); goto L8c087490; }
L8c087490:;
  { R(0)=LD32(R(0)+4); return; }
}
void f_8c087494(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c0874c6(SH4Ctx *c) {
  R(0)=0x1u;
  { R(15)+=0x8u; return; }
}
void f_8c0874cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(8)=R(4);
  R(4)=LD32(R(8)+20);
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(10)=R(5);
  {uint32_t v=LD32(R(4));R(4)+=4;R(3)=v;}
  R(6)<<=2;
  R(6)+=R(10);
  R(9)=0x8c0685b4u;
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4));
  R(4)=0x0u;
  R(0)=R(4);
  R(12)=R(4);
  R(14)=R(2);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(15)+16);
  R(13)=LD32(R(15)+16);
  R(14)=LD32(R(14));
  R(13)=LD32(R(13));
  ST16(R(3)+4,R(0));
  R(0)=R(12);
  R(3)=LD32(R(15)+20);
  ST16(R(3)+4,R(0));
  R(3)=R(6);
  c->t=R(10)>=R(3);
  { uint32_t k=!c->t; ST32(R(15)+28,R(6)); if(k) goto L8c087518; }
  {  goto L8c087636; }
L8c087518:;
  R(0)=LD32(R(10));
  R(1)=0x2cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  ST16(R(15)+24,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+24);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c087534;
  {  goto L8c08762a; }
L8c087534:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(5)=LD32(R(10));
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(5)=LD32(R(5));
  R(4)<<=2;
  R(6)=R(11);
  ST32(R(15),R(4));
  R(3)=LD32(R(8));
  { uint32_t tg=R(9); c->pr=0x8c08754cu; R(4)+=R(3); sh4_call(c,tg); }
  R(5)=LD32(R(10));
  R(6)=R(11);
  R(3)=LD32(R(15));
  R(4)=LD32(R(8)+4);
  R(5)=LD32(R(5)+4);
  { uint32_t tg=R(9); c->pr=0x8c08755au; R(4)+=R(3); sh4_call(c,tg); }
  R(4)=LD32(R(10));
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(11)=LD32(R(4)+20);
  R(3)<<=2;
  R(3)+=R(11);
  ST32(R(15)+12,R(3));
  R(2)=LD32(R(4)+16);
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(15)+12);
  c->t=R(11)>=R(3);
  if(c->t) goto L8c087626;
L8c087572:;
  R(0)=LD32(R(15)+8);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c087582;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0875ce;
  {  goto L8c087618; }
L8c087582:;
  R(4)=LD32(R(11));
  R(0)=(int32_t)(int16_t)LD16(R(4)+4);
  R(5)=LD32(R(4));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)=R(0);
  ST32(R(15),R(0));
  { uint32_t tg=R(9); c->pr=0x8c08759cu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0875ba;
  R(4)=LD32(R(15));
  R(4)+=R(13);
  c->t=R(13)>=R(4);
  if(c->t) goto L8c0875be;
L8c0875aa:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+8);
  R(0)+=R(12);
  ST16(R(13)+8,R(0));
  R(13)+=0xcu;
  c->t=R(13)>=R(4);
  if(!c->t) goto L8c0875aa;
  {  goto L8c0875be; }
L8c0875ba:;
  R(3)=LD32(R(15));
  R(13)+=R(3);
L8c0875be:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(2)=LD32(R(15)+16);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  R(0)+=R(3);
  ST16(R(2)+4,R(0));
  {  goto L8c087618; }
L8c0875ce:;
  R(4)=LD32(R(11));
  R(0)=(int32_t)(int16_t)LD16(R(4)+4);
  R(5)=LD32(R(4));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(6)=R(0);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  ST32(R(15),R(6));
  { uint32_t tg=R(9); c->pr=0x8c0875e4u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c087608;
  R(4)=LD32(R(15));
  R(4)+=R(14);
  c->t=R(14)>=R(4);
  if(c->t) goto L8c08760c;
L8c0875f2:;
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(2)+=R(12);
  ST16(R(14),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(14)+2);
  R(0)+=R(12);
  ST16(R(14)+2,R(0));
  R(14)+=0x8u;
  c->t=R(14)>=R(4);
  if(!c->t) goto L8c0875f2;
  {  goto L8c08760c; }
L8c087608:;
  R(3)=LD32(R(15));
  R(14)+=R(3);
L8c08760c:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(2)=LD32(R(15)+20);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  R(0)+=R(3);
  ST16(R(2)+4,R(0));
L8c087618:;
  R(3)=LD32(R(15)+8);
  R(11)+=0x4u;
  R(3)+=0x2u;
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(15)+12);
  c->t=R(11)>=R(2);
  if(!c->t) goto L8c087572;
L8c087626:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+24);
  R(12)+=R(0);
L8c08762a:;
  R(3)=LD32(R(15)+28);
  R(10)+=0x4u;
  c->t=R(10)>=R(3);
  if(c->t) goto L8c087636;
  {  goto L8c087518; }
L8c087636:;
  R(0)=0x2cu;
  ST16(R(8)+R(0),R(12));
  R(0)=R(8);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087680(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff94u;
  R(0)=R(6);
  ST16(R(15)+8,R(0));
  c->fr[15]=0x00000000u;
  R(0)=0x4u;
  R(14)=R(7);
  R(12)=R(4);
  fp_st(c,15,R(14));
  fp_st(c,15,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(14));
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(12)+16);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0876b0;
  {  goto L8c087926; }
L8c0876b0:;
  R(3)=R(15);
  R(3)+=0x4u;
  R(0)=LD32(R(12)+20);
  R(13)=(uint32_t)(int32_t)(int16_t)R(5);
  R(13)<<=2;
  R(2)=0x8c05a3fau;
  R(13)=LD32(R(13)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(15);
  R(7)+=0x4u;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x14u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0876d0u; R(4)=LD32(R(13)); f_8c05a3fa(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  R(4)=R(0);
  R(3)=0x8c011d88u;
  R(5)=0x0u;
  { c->pr=0x8c0876dcu; {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;} f_8c011d88(c); }
  R(15)+=0x4u;
  R(4)=0x8c0bde94u;
  R(0)=0x4u;
  fp_ld(c,3,R(15));
  fp_ld(c,2,R(4));
  fp_arith(c,2,2,3);
  fp_unary(c,0,2);
  fp_st(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(4));
  fp_arith(c,2,1,3);
  fp_unary(c,0,1);
  fp_st(c,1,R(0)+R(15));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(5)=LD32(R(13)+8);
  R(3)=R(0);
  R(7)=R(0);
  R(3)<<=2;
  R(4)=LD32(R(12));
  c->t=R(7)>>31;R(7)<<=1;
  R(7)+=R(3);
  R(12)=R(4);
  R(5)+=R(7);
  R(6)=R(5);
  R(2)=(int32_t)(int16_t)LD16(R(6));
  R(0)=(int32_t)(int16_t)LD16(R(6)+2);
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(3)=R(0);
  R(2)<<=2;
  R(12)+=R(2);
  c->t=R(0)>>31;R(0)<<=1;
  R(5)=R(4);
  R(0)+=R(3);
  R(0)<<=2;
  R(5)+=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(6)+4);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)+=R(0);
  ST32(R(15)+8,R(4));
  R(4)=LD32(R(13)+12);
  fp_ld(c,3,R(15));
  R(4)+=R(7);
  R(7)=LD32(R(13)+20);
  R(1)=R(4);
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  R(4)=R(7);
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(1)+4);
  R(6)<<=2;
  R(0)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  c->t=R(6)>>31;R(6)<<=1;
  c->t=R(0)>>31;R(0)<<=1;
  R(6)+=R(7);
  R(7)+=R(0);
  R(0)=0x3cu;
  R(4)+=R(3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(6));
  fp_ld(c,3,R(4));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(6));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x38u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(7));
  fp_ld(c,3,R(4));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x30u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  R(0)=0x4cu;
  fp_mov(c,4,2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_arith(c,1,4,1);
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,3,0);
  R(0)=0x3cu;
  R(3)=0x8c05e612u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  R(4)=R(15);
  R(6)=R(12);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c087862u; R(4)+=0x28u; sh4_call(c,tg); }
  R(3)=0x8c05e612u;
  R(6)=R(12);
  R(5)=LD32(R(15)+8);
  R(4)=R(15);
  { c->pr=0x8c08786eu; R(4)+=0x1cu; f_8c05e612(c); }
  R(0)=0x10u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x38u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
L8c087926:;
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x32u;
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST16(R(14)+R(0),R(5));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c087974;
  {  goto L8c087a9c; }
L8c087974:;
  R(1)=LD32(R(14)+36);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c08797e;
  {  goto L8c087a9c; }
L8c08797e:;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0879f8;
  R(3)=0x8c0c758cu;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0879e0;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c064e90u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(6)=0x517u;
  R(5)=0x8c0bcc20u;
  R(4)<<=2;
  { c->pr=0x8c0879aau; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c0879f4; }
L8c0879e0:;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(1)=0x8c0199c4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(6)=0x517u;
  R(5)=0x8c0bcc20u;
  R(4)<<=2;
  { c->pr=0x8c0879f4u; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c0879f4:;
  ST32(R(14)+36,R(0));
  R(3)=R(0);
L8c0879f8:;
  R(1)=LD32(R(14)+36);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c087a2e;
  R(3)=0x8c0125ccu;
  R(5)=0x8c0bcc20u;
  R(6)=0x517u;
  { c->pr=0x8c087a08u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x517u;
  R(1)=0x0u;
  R(3)=0x8c0bcc20u;
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(1);
  R(3)=0xffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c65e0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c087a2cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c087a2e:;
  R(0)=0x32u;
  R(2)=0x8c0686b8u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x0u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  { c->pr=0x8c087a44u; R(4)=LD32(R(14)+36); f_8c0686b8(c); }
  R(0)=0x8c087adcu;
  fp_ld(c,5,R(0));
  R(0)=0x8c087ae0u;
  fp_ld(c,4,R(0));
  R(0)=0x32u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c087a9c; }
L8c087a56:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(5);
  R(2)=LD32(R(14)+36);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(0)=0x4u;
  R(2)+=R(4);
  R(5)+=0x1u;
  fp_st(c,5,R(2));
  R(3)=LD32(R(14)+36);
  R(3)+=R(4);
  fp_st(c,5,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(14)+36);
  R(3)+=R(4);
  fp_st(c,5,R(0)+R(3));
  R(0)=0xcu;
  R(3)=LD32(R(14)+36);
  R(3)+=R(4);
  fp_st(c,4,R(0)+R(3));
  R(0)=0x10u;
  R(3)=LD32(R(14)+36);
  R(3)+=R(4);
  fp_st(c,4,R(0)+R(3));
  R(0)=0x14u;
  R(3)=LD32(R(14)+36);
  R(4)+=R(3);
  fp_st(c,4,R(0)+R(4));
  R(0)=0x32u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c087a56;
L8c087a9c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087b00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=0x32u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c087b3c;
  R(1)=LD32(R(14)+36);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c087b1e;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c087b1eu; R(4)=R(14); f_8c087960(c); }
L8c087b1e:;
  R(0)=0x32u;
  R(12)=0x8c0a24b6u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c087b3c; }
L8c087b2a:;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c087b30u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=0x32u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(13)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(13);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c087b2a;
L8c087b3c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087b46(SH4Ctx *c) {
  R(0)=0x32u;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c087b62;
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(2)=LD32(R(4)+36);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)+=R(2); return; }
L8c087b62:;
  R(0)=0x0u;
  {  return; }
}
void f_8c087b68(SH4Ctx *c) {
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(4)+16);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(6)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(6)<<=2; if(k) goto L8c087b88; }
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c087b90;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c087b90;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c087b98;
  {  goto L8c087ba0; }
L8c087b88:;
  R(0)=LD32(R(4)+20);
  R(0)=LD32(R(6)+R(0));
  { R(0)=(int32_t)(int16_t)LD16(R(0)+30); return; }
L8c087b90:;
  R(0)=LD32(R(4)+20);
  R(0)=LD32(R(6)+R(0));
  { R(0)=(int32_t)(int16_t)LD16(R(0)+6); return; }
L8c087b98:;
  R(0)=LD32(R(4)+20);
  R(0)=LD32(R(6)+R(0));
  { R(0)=(int32_t)(int16_t)LD16(R(0)+12); return; }
L8c087ba0:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c087ba6(SH4Ctx *c) {
  { R(0)=LD32(R(4)+40); return; }
}
void f_8c087be0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(0)=0x58u;
  R(14)=R(5);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,0,5);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  R(0)=0x18u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=LD32(R(4)+40);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c087c9c;
  R(2)=0x8c015e4cu;
  R(5)=R(15);
  { c->pr=0x8c087c50u; R(4)=R(14); f_8c015e4c(c); }
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,1,R(15));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c087cc0; }
L8c087c9c:;
  c->fr[3]=0x3F800000u;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(15));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c087cc0:;
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c087cdc;
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c087cdc;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c087d6e;
L8c087cdc:;
  R(0)=0x10u;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,1,4);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(15));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(15));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x18u;
  fp_st(c,2,R(0)+R(15));
  R(7)=R(15);
  R(6)+=0xcu;
  { c->pr=0x8c087d6eu; R(4)=R(14); f_8c015c9c(c); }
L8c087d6e:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087e60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c087e76;
  R(3)=0x8c064eb8u;
  R(6)=0x48u;
  R(5)=0x8c0bcc2cu;
  { c->pr=0x8c087e76u; R(4)=R(14); f_8c064eb8(c); }
L8c087e76:;
  R(3)=0xffffffffu;
  R(2)=0x0u;
  ST32(R(14),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c087e82(SH4Ctx *c) {
  R(2)=(int32_t)(int16_t)LD16(R(5));
  ST16(R(4),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  { ST16(R(4)+2,R(0)); return; }
}
void f_8c087e8c(SH4Ctx *c) {
  { R(0)=(int32_t)(int16_t)LD16(R(4)); return; }
}
void f_8c087e90(SH4Ctx *c) {
  { ST16(R(4),R(5)); return; }
}
void f_8c087e94(SH4Ctx *c) {
  { R(0)=(int32_t)(int16_t)LD16(R(4)+2); return; }
}
void f_8c087e98(SH4Ctx *c) {
  R(0)=R(5);
  { ST16(R(4)+2,R(0)); return; }
}
void f_8c087e9e(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(6)=0x1u;
  R(5)=R(5)&0xFFFF;
  R(6)=sh4_shad(R(6),R(5));
  R(5)=R(4);
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  ST16(R(15),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)|=R(6);
  ST16(R(4)+2,R(0));
  { R(15)+=0x4u; return; }
}
void f_8c087eb6(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=0x1u;
  R(5)=R(5)&0xFFFF;
  R(3)=sh4_shad(R(3),R(5));
  R(5)=R(3);
  R(6)=~R(5);
  R(5)=R(4);
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  ST16(R(15),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)&=R(6);
  ST16(R(4)+2,R(0));
  { R(15)+=0x4u; return; }
}
void f_8c087ed2(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=0x1u;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(5)=R(5)&0xFFFF;
  R(3)=sh4_shad(R(3),R(5));
  ST16(R(15),R(0));
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(5)=R(3);
  R(5)&=R(2);
  R(5)=R(5)&0xFFFF;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c087ef0;
  R(0)=0x0u;
  { R(15)+=0x4u; return; }
L8c087ef0:;
  R(0)=0x1u;
  { R(15)+=0x4u; return; }
}
void f_8c087ef0(SH4Ctx *c) {
  R(0)=0x1u;
  { R(15)+=0x4u; return; }
}
void f_8c087ef6(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(4)=R(0);
  R(4)&=R(5);
  R(5)=R(5)&0xFFFF;
  R(6)=R(0);
  R(4)=R(4)&0xFFFF;
  c->t=R(4)==R(5);
  R(0)=c->t;
  {  return; }
}
void f_8c087f40(SH4Ctx *c) {
  R(3)=0xffffu;
  { ST16(R(4),R(3)); return; }
}
void f_8c087f46(SH4Ctx *c) {
  R(2)=0x0u;
  { ST16(R(4),R(2)); return; }
}
void f_8c087f80(SH4Ctx *c) {
  R(2)=0x8c0c86f0u;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(1);
  if(!c->t) goto L8c087f9c;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0c86f4u;
  R(5)=0x8c0c8704u;
  { c->pr=0x8c087f98u;  f_8c0124a6(c); }
  R(2)=0x8c0c86f0u;
  ST8(R(2),R(0));
L8c087f9c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c087fe0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST16(R(15),R(4));
  R(12)=0x0u;
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(14)=R(5);
  R(3)=0x8c2d1dbcu;
  R(4)<<=2;
  R(2)=0x8c0cf654u;
  R(4)+=R(3);
  ST32(R(15)+4,R(4));
  { c->pr=0x8c088000u; R(4)=LD32(R(4)); f_8c0cf654(c); }
  R(3)=0x8c0cf6c0u;
  R(13)=R(0);
  R(4)=LD32(R(15)+4);
  { c->pr=0x8c08800au; R(4)=LD32(R(4)); f_8c0cf6c0(c); }
  R(3)=0xff000000u;
  c->t=R(0)==R(3);
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c088018; }
  R(0)=0x7fffu;
  {  goto L8c0880ca; }
L8c088018:;
  R(3)=0x8c0ac1a4u;
  R(5)=0x8c0bcd94u;
  { c->pr=0x8c088020u; R(4)=LD32(R(13)+36); f_8c0ac1a4(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c088030;
  R(3)=0x8c0ac1a4u;
  R(5)=0x8c0bcdb4u;
  { c->pr=0x8c08802cu; R(4)=LD32(R(13)+36); f_8c0ac1a4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c088036;
L8c088030:;
  R(0)=0x7ffdu;
  {  goto L8c0880ca; }
L8c088036:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0880c0;
  R(3)=LD32(R(13)+4);
  R(7)=0x1fu;
  R(6)=0x7fu;
  ST32(R(14),R(3));
  R(5)=0xffffff80u;
  R(2)=LD32(R(13)+4);
  R(3)=0x40000u;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(4)=0xffffffe0u; if(k) goto L8c088062; }
  R(0)=R(5);
  ST16(R(14)+12,R(0));
  R(0)=R(6);
  ST16(R(14)+14,R(0));
  R(0)=R(7);
  ST16(R(14)+16,R(0));
  R(0)=R(4);
  R(12)+=0x1u;
  ST16(R(14)+18,R(0));
L8c088062:;
  R(2)=LD32(R(13)+4);
  R(3)=0x80000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0880c4;
  R(0)=R(5);
  ST16(R(14)+20,R(0));
  R(0)=R(6);
  ST16(R(14)+22,R(0));
  R(0)=R(4);
  ST16(R(14)+24,R(0));
  R(0)=R(7);
  ST16(R(14)+26,R(0));
  { R(12)+=0x1u; goto L8c0880c4; }
L8c0880c0:;
  R(2)=0x0u;
  ST32(R(14),R(2));
L8c0880c4:;
  R(0)=R(12);
  ST16(R(14)+8,R(0));
  R(0)=0x7ffeu;
L8c0880ca:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0880d6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(4);
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(13)=R(5);
  R(3)=0x8c2d1dbcu;
  R(4)=R(0);
  R(4)<<=2;
  R(2)=0x8c0cf654u;
  R(4)+=R(3);
  ST32(R(15),R(4));
  { c->pr=0x8c0880f6u; R(4)=LD32(R(4)); f_8c0cf654(c); }
  R(3)=0x8c0cf6c0u;
  R(14)=R(0);
  R(4)=LD32(R(15));
  { c->pr=0x8c088100u; R(4)=LD32(R(4)); f_8c0cf6c0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08810a;
  R(0)=0x7fffu;
  {  goto L8c08813a; }
L8c08810a:;
  R(2)=0x8c0ac1a4u;
  R(5)=0x8c0bcd94u;
  { c->pr=0x8c088112u; R(4)=LD32(R(14)+36); f_8c0ac1a4(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c088122;
  R(2)=0x8c0ac1a4u;
  R(5)=0x8c0bcdb4u;
  { c->pr=0x8c08811eu; R(4)=LD32(R(14)+36); f_8c0ac1a4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c088128;
L8c088122:;
  R(0)=0x7ffdu;
  {  goto L8c08813a; }
L8c088128:;
  R(3)=0xfffffefeu;
  R(2)=LD32(R(14)+8);
  R(2)&=R(3);
  ST32(R(13)+4,R(2));
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  ST16(R(13)+20,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  ST16(R(13)+22,R(0));
  R(0)=0x7ffeu;
L8c08813a:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088180(SH4Ctx *c) {
  R(3)=0x0u;
  ST32(R(5),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(5)+20);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(6)+18);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c088196;
  R(0)=LD32(R(5));
  R(0)|=0x1u;
  { ST32(R(5),R(0)); goto L8c0881a6; }
L8c088196:;
  R(0)=(int32_t)(int16_t)LD16(R(5)+20);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(6)+16);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c0881a6;
  R(0)=LD32(R(5));
  R(0)|=0x2u;
  ST32(R(5),R(0));
L8c0881a6:;
  R(0)=(int32_t)(int16_t)LD16(R(5)+22);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(6)+26);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c0881b8;
  R(0)=LD32(R(5));
  R(0)|=0x8u;
  { ST32(R(5),R(0)); goto L8c0881c8; }
L8c0881b8:;
  R(0)=(int32_t)(int16_t)LD16(R(5)+22);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(6)+24);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c0881c8;
  R(0)=LD32(R(5));
  R(0)|=0x4u;
  ST32(R(5),R(0));
L8c0881c8:;
  {  return; }
}
void f_8c0881cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST16(R(15),R(4));
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x8c2d1dbcu;
  R(3)=0x8c0cf654u;
  R(4)<<=2;
  { c->pr=0x8c0881e2u; R(4)=LD32(R(4)+R(0)); f_8c0cf654(c); }
  R(5)=0x8c0bcdc0u;
  R(14)=R(0);
  R(13)=0x8c0ac1a4u;
  { c->pr=0x8c0881ecu; R(4)=LD32(R(14)+36); f_8c0ac1a4(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c088220;
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x8c2d1dbcu;
  R(3)=0x8c0cf6c0u;
  R(4)<<=2;
  { c->pr=0x8c0881fcu; R(4)=LD32(R(4)+R(0)); f_8c0cf6c0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c088206;
  R(0)=0x7fffu;
  {  goto L8c088222; }
L8c088206:;
  R(5)=0x8c0bcd94u;
  { uint32_t tg=R(13); c->pr=0x8c08820cu; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08821a;
  R(5)=0x8c0bcdb4u;
  { uint32_t tg=R(13); c->pr=0x8c088216u; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c088220;
L8c08821a:;
  R(0)=0x7ffdu;
  {  goto L8c088222; }
L8c088220:;
  R(0)=0x7ffeu;
L8c088222:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088280(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST16(R(15),R(4));
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x8c2d1dbcu;
  R(3)=0x8c0cf654u;
  R(4)<<=2;
  { c->pr=0x8c088296u; R(4)=LD32(R(4)+R(0)); f_8c0cf654(c); }
  R(5)=0x8c0bcdc0u;
  R(14)=R(0);
  R(13)=0x8c09d214u;
  R(6)=0x1eu;
  { c->pr=0x8c0882a2u; R(4)=LD32(R(14)+36); f_8c09d214(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0882aa;
  { R(0)=0x40u; goto L8c0883d0; }
L8c0882aa:;
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x8c2d1dbcu;
  R(3)=0x8c0cf6c0u;
  R(4)<<=2;
  { c->pr=0x8c0882b6u; R(4)=LD32(R(4)+R(0)); f_8c0cf6c0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0882c0;
  R(0)=0x7fffu;
  {  goto L8c0883d0; }
L8c0882c0:;
  R(5)=0x8c0bcde0u;
  R(6)=0x1eu;
  { uint32_t tg=R(13); c->pr=0x8c0882c8u; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0882d0;
  { R(0)=0x2u; goto L8c0883d0; }
L8c0882d0:;
  R(2)=0x8c0ac1a4u;
  R(6)=0x1eu;
  R(5)=0x8c0bce00u;
  { c->pr=0x8c0882dau; R(4)=LD32(R(14)+36); f_8c0ac1a4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c088340;
  { R(0)=0x10u; goto L8c0883d0; }
L8c088340:;
  R(5)=0x8c0bce20u;
  R(6)=0x1eu;
  { uint32_t tg=R(13); c->pr=0x8c088348u; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c088350;
  { R(0)=0x8u; goto L8c0883d0; }
L8c088350:;
  R(5)=0x8c0bce40u;
  R(6)=0x1eu;
  { uint32_t tg=R(13); c->pr=0x8c088358u; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c088362;
  R(0)=0x100u;
  {  goto L8c0883d0; }
L8c088362:;
  R(5)=0x8c0bce60u;
  R(6)=0x1eu;
  { uint32_t tg=R(13); c->pr=0x8c08836au; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c088374;
  R(0)=0x200u;
  {  goto L8c0883d0; }
L8c088374:;
  R(5)=0x8c0bcd94u;
  R(6)=0x1eu;
  { uint32_t tg=R(13); c->pr=0x8c08837cu; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08838c;
  R(2)=0x8c0ac1a4u;
  R(5)=0x8c0bcdb4u;
  { c->pr=0x8c088388u; R(4)=LD32(R(14)+36); f_8c0ac1a4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0883c0;
L8c08838c:;
  { R(0)=0x1u; goto L8c0883d0; }
L8c0883c0:;
  R(2)=0xf061eu;
  R(4)=LD32(R(14));
  R(2)&=R(4);
  c->t=R(4)==R(2);
  if(!c->t) goto L8c0883ce;
  { R(0)=0x20u; goto L8c0883d0; }
L8c0883ce:;
  R(0)=0x80u;
L8c0883d0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088400(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0c879cu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c08841e;
  {  goto L8c0885ba; }
L8c08841e:;
  R(4)=0x8c2e25a4u;
  R(14)=0x0u;
  R(10)=0x8c0199ecu;
  R(13)=R(14);
  R(9)=0x8c2e2574u;
  R(8)=R(4);
  R(12)=0x8c2e2544u;
  R(11)=0x8c0bce80u;
  ST32(R(15)+4,R(14));
  ST32(R(15)+8,R(4));
L8c088432:;
  R(0)=LD32(R(15)+4);
  R(0)<<=2;
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c088448;
  R(4)=LD32(R(15)+4);
  R(5)=R(11);
  R(6)=0x94u;
  R(4)<<=2;
  { uint32_t tg=R(10); c->pr=0x8c088448u; R(4)+=R(12); sh4_call(c,tg); }
L8c088448:;
  R(3)=LD32(R(15)+4);
  R(3)<<=2;
  R(3)+=R(9);
  ST32(R(15),R(3));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08845e;
  R(6)=0x96u;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c08845eu; R(4)=R(3); sh4_call(c,tg); }
L8c08845e:;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08846c;
  R(6)=0x98u;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c08846cu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
L8c08846c:;
  R(0)=R(13);
  ST32(R(12)+R(0),R(14));
  ST32(R(9)+R(0),R(14));
  R(0)=0x8c2e25a4u;
  ST32(R(13)+R(0),R(14));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
  R(3)<<=2;
  R(0)=R(3);
  R(2)=LD32(R(15)+8);
  R(2)+=0x4u;
  ST32(R(15)+8,R(2));
  ST32(R(15),R(3));
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(8)+=0x4u; if(k) goto L8c08849c; }
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0x94u;
  { uint32_t tg=R(10); c->pr=0x8c08849cu; R(4)+=R(12); sh4_call(c,tg); }
L8c08849c:;
  R(0)=LD32(R(15));
  R(3)=LD32(R(9)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0884ae;
  R(6)=0x96u;
  R(4)=R(0);
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c0884aeu; R(4)+=R(9); sh4_call(c,tg); }
L8c0884ae:;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0884bc;
  R(6)=0x98u;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c0884bcu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
L8c0884bc:;
  R(0)=R(13);
  ST32(R(12)+R(0),R(14));
  ST32(R(9)+R(0),R(14));
  R(0)=0x8c2e25a4u;
  ST32(R(13)+R(0),R(14));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
  R(3)<<=2;
  R(0)=R(3);
  R(2)=LD32(R(15)+8);
  R(2)+=0x4u;
  ST32(R(15)+8,R(2));
  ST32(R(15),R(3));
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(8)+=0x4u; if(k) goto L8c0884ec; }
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0x94u;
  { uint32_t tg=R(10); c->pr=0x8c0884ecu; R(4)+=R(12); sh4_call(c,tg); }
L8c0884ec:;
  R(3)=R(9);
  ST32(R(15)+12,R(9));
  R(0)=LD32(R(15));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c088502;
  R(6)=0x96u;
  R(4)=R(0);
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c088502u; R(4)+=R(3); sh4_call(c,tg); }
L8c088502:;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c088510;
  R(6)=0x98u;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c088510u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
L8c088510:;
  R(0)=R(13);
  ST32(R(12)+R(0),R(14));
  ST32(R(9)+R(0),R(14));
  R(0)=0x8c2e25a4u;
  ST32(R(13)+R(0),R(14));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
  R(3)<<=2;
  R(0)=R(3);
  R(2)=LD32(R(15)+8);
  R(2)+=0x4u;
  ST32(R(15)+8,R(2));
  ST32(R(15),R(3));
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(8)+=0x4u; if(k) goto L8c08856a; }
  {  goto L8c088560; }
L8c088560:;
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0x94u;
  { uint32_t tg=R(10); c->pr=0x8c08856au; R(4)+=R(12); sh4_call(c,tg); }
L8c08856a:;
  R(3)=R(9);
  ST32(R(15)+12,R(9));
  R(0)=LD32(R(15));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c088580;
  R(6)=0x96u;
  R(4)=R(0);
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c088580u; R(4)+=R(3); sh4_call(c,tg); }
L8c088580:;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08858e;
  R(6)=0x98u;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c08858eu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
L8c08858e:;
  R(0)=R(13);
  ST32(R(12)+R(0),R(14));
  ST32(R(9)+R(0),R(14));
  R(1)=0xcu;
  R(0)=0x8c2e25a4u;
  ST32(R(13)+R(0),R(14));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  c->t=(int32_t)R(3)>=(int32_t)R(1);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(15)+8);
  R(2)+=0x4u;
  ST32(R(15)+8,R(2));
  { uint32_t k=c->t; R(8)+=0x4u; if(k) goto L8c0885b2; }
  {  goto L8c088432; }
L8c0885b2:;
  R(2)=0x8c0c87a0u;
  R(3)=0x8c0c87a8u;
  ST16(R(3),R(14));
  ST16(R(2),R(14));
L8c0885ba:;
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0885d0(SH4Ctx *c) {
  R(0)=0x7ffeu;
  R(3)=0x1u;
  R(4)=0x8c0c879cu;
  { ST16(R(4),R(3)); return; }
}
void f_8c088600(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(4)=0x8c2e25a4u;
  R(14)=0x0u;
  R(10)=0x8c0199ecu;
  R(13)=R(14);
  R(9)=0x8c2e2574u;
  R(8)=R(4);
  R(12)=0x8c2e2544u;
  R(11)=0x8c0bce80u;
  ST32(R(15)+4,R(14));
  ST32(R(15)+8,R(4));
  { f_8c088626(c); return; }
}
void f_8c088626(SH4Ctx *c) {
L8c088626:;
  R(0)=LD32(R(15)+4);
  R(0)<<=2;
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08863c;
  R(4)=LD32(R(15)+4);
  R(5)=R(11);
  R(6)=0xc8u;
  R(4)<<=2;
  { uint32_t tg=R(10); c->pr=0x8c08863cu; R(4)+=R(12); sh4_call(c,tg); }
L8c08863c:;
  R(3)=LD32(R(15)+4);
  R(3)<<=2;
  R(3)+=R(9);
  ST32(R(15),R(3));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c088652;
  R(6)=0xcau;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c088652u; R(4)=R(3); sh4_call(c,tg); }
L8c088652:;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c088660;
  R(6)=0xccu;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c088660u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
L8c088660:;
  R(0)=R(13);
  ST32(R(12)+R(0),R(14));
  ST32(R(9)+R(0),R(14));
  R(0)=0x8c2e25a4u;
  ST32(R(13)+R(0),R(14));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
  R(3)<<=2;
  R(0)=R(3);
  R(2)=LD32(R(15)+8);
  R(2)+=0x4u;
  ST32(R(15)+8,R(2));
  ST32(R(15),R(3));
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(8)+=0x4u; if(k) goto L8c088690; }
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0xc8u;
  { uint32_t tg=R(10); c->pr=0x8c088690u; R(4)+=R(12); sh4_call(c,tg); }
L8c088690:;
  R(0)=LD32(R(15));
  R(3)=LD32(R(9)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0886a2;
  R(6)=0xcau;
  R(4)=R(0);
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c0886a2u; R(4)+=R(9); sh4_call(c,tg); }
L8c0886a2:;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0886b0;
  R(6)=0xccu;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c0886b0u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
L8c0886b0:;
  R(0)=R(13);
  ST32(R(12)+R(0),R(14));
  ST32(R(9)+R(0),R(14));
  R(0)=0x8c2e25a4u;
  ST32(R(13)+R(0),R(14));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
  R(3)<<=2;
  R(0)=R(3);
  R(2)=LD32(R(15)+8);
  R(2)+=0x4u;
  ST32(R(15)+8,R(2));
  ST32(R(15),R(3));
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(8)+=0x4u; if(k) goto L8c0886e0; }
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0xc8u;
  { uint32_t tg=R(10); c->pr=0x8c0886e0u; R(4)+=R(12); sh4_call(c,tg); }
L8c0886e0:;
  R(3)=R(9);
  ST32(R(15)+12,R(9));
  R(0)=LD32(R(15));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0886f6;
  R(6)=0xcau;
  R(4)=R(0);
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c0886f6u; R(4)+=R(3); sh4_call(c,tg); }
L8c0886f6:;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c088704;
  R(6)=0xccu;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c088704u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
L8c088704:;
  R(0)=R(13);
  ST32(R(12)+R(0),R(14));
  ST32(R(9)+R(0),R(14));
  R(0)=0x8c2e25a4u;
  ST32(R(13)+R(0),R(14));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
  R(3)<<=2;
  R(0)=R(3);
  R(2)=LD32(R(15)+8);
  R(2)+=0x4u;
  ST32(R(15)+8,R(2));
  ST32(R(15),R(3));
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(8)+=0x4u; if(k) goto L8c088734; }
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0xc8u;
  { uint32_t tg=R(10); c->pr=0x8c088734u; R(4)+=R(12); sh4_call(c,tg); }
L8c088734:;
  R(3)=R(9);
  ST32(R(15)+12,R(9));
  R(0)=LD32(R(15));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  {  goto L8c088780; }
L8c088780:;
  if(c->t) goto L8c08878c;
  R(6)=0xcau;
  R(4)=R(0);
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c08878cu; R(4)+=R(3); sh4_call(c,tg); }
L8c08878c:;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08879a;
  R(6)=0xccu;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c08879au; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
L8c08879a:;
  R(0)=R(13);
  ST32(R(12)+R(0),R(14));
  ST32(R(9)+R(0),R(14));
  R(1)=0xcu;
  R(0)=0x8c2e25a4u;
  ST32(R(13)+R(0),R(14));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  c->t=(int32_t)R(3)>=(int32_t)R(1);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(15)+8);
  R(2)+=0x4u;
  ST32(R(15)+8,R(2));
  { uint32_t k=c->t; R(8)+=0x4u; if(k) goto L8c0887be; }
  {  goto L8c088626; }
L8c0887be:;
  R(4)=0x8c0c879cu;
  R(0)=R(14);
  ST16(R(4)+12,R(0));
  ST16(R(4)+4,R(0));
  ST16(R(4),R(0));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088780(SH4Ctx *c) {
  if(c->t) goto L8c08878c;
  R(6)=0xcau;
  R(4)=R(0);
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c08878cu; R(4)+=R(3); sh4_call(c,tg); }
L8c08878c:;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08879a;
  R(6)=0xccu;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c08879au; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
L8c08879a:;
  R(0)=R(13);
  ST32(R(12)+R(0),R(14));
  ST32(R(9)+R(0),R(14));
  R(1)=0xcu;
  R(0)=0x8c2e25a4u;
  ST32(R(13)+R(0),R(14));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  c->t=(int32_t)R(3)>=(int32_t)R(1);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(15)+8);
  R(2)+=0x4u;
  ST32(R(15)+8,R(2));
  { uint32_t k=c->t; R(8)+=0x4u; if(k) goto L8c0887be; }
  {  { f_8c088626(c); return; } }
L8c0887be:;
  R(4)=0x8c0c879cu;
  R(0)=R(14);
  ST16(R(4)+12,R(0));
  ST16(R(4)+4,R(0));
  ST16(R(4),R(0));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0887dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c0c879cu;
  R(12)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(8)=R(4); if(k) goto L8c088800; }
  R(0)=0x1001u;
  { ST32(R(12),R(0)); goto L8c088a00; }
L8c088800:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(8);
  c->t=(int32_t)R(3)>=0;
  ST32(R(15)+4,R(3));
  if(!c->t) goto L8c088810;
  R(3)=LD32(R(15)+4);
  R(2)=0xbu;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c088840;
L8c088810:;
  R(3)=0x1005u;
  { ST32(R(12),R(3)); goto L8c088a00; }
L8c088840:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(8);
  R(11)=0x8c2e2544u;
  R(14)<<=2;
  R(0)=R(14);
  R(3)=LD32(R(11)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c088854;
  R(3)=0x100fu;
  { ST32(R(12),R(3)); goto L8c088a00; }
L8c088854:;
  R(2)=R(14);
  R(2)+=R(11);
  R(13)=0x8c0bce80u;
  R(6)=0xf7u;
  R(3)=0x8c0199c4u;
  R(5)=R(13);
  ST32(R(15),R(2));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c088868u; R(4)=0x1cu; f_8c0199c4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  ST32(R(1),R(0));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08887a;
  R(2)=0x1010u;
  { ST32(R(12),R(2)); goto L8c088a00; }
L8c08887a:;
  R(2)=LD32(R(15)+4);
  R(3)=0x4u;
  R(9)=0x8c0199ecu;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c0888e0; }
  R(0)=0x8c2e2544u;
  R(2)=0x8c087fe0u;
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c088890u; R(4)=R(8); f_8c087fe0(c); }
  R(3)=0x7fffu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0888e0;
  R(4)=R(14);
  R(6)=0xffu;
  R(4)+=R(11);
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c0888a4u; ST32(R(15),R(4)); sh4_call(c,tg); }
  R(3)=LD32(R(15));
  ST32(R(3),R(10));
  R(3)=0x100du;
  { ST32(R(12),R(3)); goto L8c088a00; }
L8c0888e0:;
  R(2)=0x8c2e2574u;
  R(5)=R(13);
  R(6)=0x107u;
  R(2)+=R(14);
  R(3)=0x8c0199c4u;
  ST32(R(15),R(2));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0888f2u; R(4)=0x18u; f_8c0199c4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  ST32(R(1),R(0));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c088914;
  R(4)=R(14);
  R(6)=0x10au;
  R(4)+=R(11);
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c08890au; ST32(R(15),R(4)); sh4_call(c,tg); }
  R(3)=LD32(R(15));
  ST32(R(3),R(10));
  R(3)=0x1010u;
  { ST32(R(12),R(3)); goto L8c088a00; }
L8c088914:;
  R(2)=0x8c0881ccu;
  { c->pr=0x8c08891au; R(4)=R(8); f_8c0881cc(c); }
  R(3)=0x7fffu;
  R(5)=R(0);
  R(4)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=R(4)==R(3);
  { uint32_t k=!c->t; ST32(R(15),R(11)); if(k) goto L8c08894c; }
  R(4)=LD32(R(15));
  R(5)=R(13);
  R(6)=0x112u;
  R(4)+=R(14);
  { uint32_t tg=R(9); c->pr=0x8c088932u; ST32(R(15)+4,R(4)); sh4_call(c,tg); }
  R(4)=0x8c2e2574u;
  R(5)=R(13);
  R(6)=0x113u;
  R(4)+=R(14);
  { uint32_t tg=R(9); c->pr=0x8c08893eu; ST32(R(15),R(4)); sh4_call(c,tg); }
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(10));
  R(3)=LD32(R(15));
  ST32(R(3),R(10));
  R(3)=0x100du;
  { ST32(R(12),R(3)); goto L8c088a00; }
L8c08894c:;
  R(2)=0x7ffdu;
  c->t=R(4)==R(2);
  if(!c->t) goto L8c088980;
  R(0)=LD32(R(15));
  R(1)=0x1u;
  R(3)=LD32(R(14)+R(0));
  R(0)=R(1);
  ST16(R(3)+10,R(0));
  {  goto L8c088996; }
L8c088980:;
  R(0)=LD32(R(15));
  R(2)=0xau;
  R(3)=LD32(R(14)+R(0));
  R(2)+=R(3);
  R(3)=0x8c088280u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+8);
  { c->pr=0x8c088992u;  f_8c088280(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST16(R(3),R(0));
L8c088996:;
  R(0)=R(14);
  R(4)=R(11);
  R(3)=LD32(R(4)+R(0));
  R(2)=0xau;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x7fffu;
  R(3)=R(3)&0xFFFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0889b4;
  R(0)=R(14);
  R(1)=0x1u;
  R(3)=LD32(R(4)+R(0));
  R(0)=R(1);
  ST16(R(3)+10,R(0));
L8c0889b4:;
  R(2)=0x8c0c87b0u;
  R(5)=R(13);
  R(3)=0x8c2e25a4u;
  R(6)=0x122u;
  R(3)+=R(14);
  ST32(R(15),R(3));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=(int32_t)(int16_t)LD16(R(2));
  R(1)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(1);
  R(1)=0x8c0199c4u;
  { c->pr=0x8c0889d0u; R(4)<<=2; f_8c0199c4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  ST32(R(2),R(0));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c088a06;
  R(4)=R(14);
  R(6)=0x125u;
  R(4)+=R(11);
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c0889e8u; ST32(R(15),R(4)); sh4_call(c,tg); }
  R(4)=0x8c2e2574u;
  R(5)=R(13);
  R(6)=0x126u;
  R(4)+=R(14);
  { uint32_t tg=R(9); c->pr=0x8c0889f4u; ST32(R(15)+4,R(4)); sh4_call(c,tg); }
  R(3)=LD32(R(15));
  ST32(R(3),R(10));
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(10));
  R(3)=0x1010u;
  ST32(R(12),R(3));
L8c088a00:;
  R(0)=0x7fffu;
  {  goto L8c088a10; }
L8c088a06:;
  R(2)=0x8c0c87a0u;
  R(0)=R(8);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)+=0x1u;
  ST16(R(2),R(3));
L8c088a10:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088a80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c0c879cu;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(10));
  R(5)=0x8c2e2540u;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c088aa0;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c088ab0; }
L8c088aa0:;
  R(11)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(11)>=0;
  if(!c->t) goto L8c088aac;
  R(2)=0xbu;
  c->t=(int32_t)R(11)>(int32_t)R(2);
  if(!c->t) goto L8c088ae0;
L8c088aac:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
L8c088ab0:;
  R(0)=0x7fffu;
  {  goto L8c088b48; }
L8c088ae0:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(12)=0x8c2e2544u;
  R(4)<<=2;
  R(0)=R(4);
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c088b46; }
  R(13)=0x8c0bce80u;
  R(4)=R(14);
  R(6)=0x148u;
  R(9)=0x8c0199ecu;
  R(5)=R(13);
  { c->pr=0x8c088afeu; R(4)+=R(12); f_8c0199ec(c); }
  R(12)=0x8c2e2574u;
  R(0)=R(14);
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c088b12;
  R(6)=0x14au;
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c088b12u; R(4)+=R(12); sh4_call(c,tg); }
L8c088b12:;
  R(12)=0x8c2e25a4u;
  R(0)=R(14);
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c088b26;
  R(6)=0x14cu;
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c088b26u; R(4)+=R(12); sh4_call(c,tg); }
L8c088b26:;
  R(0)=0x8c2e2544u;
  R(4)=0x0u;
  R(3)=0x1u;
  ST32(R(14)+R(0),R(4));
  R(3)=sh4_shad(R(3),R(11));
  R(0)=0x8c2e2574u;
  R(3)=~R(3);
  ST32(R(14)+R(0),R(4));
  R(0)=R(14);
  ST32(R(12)+R(0),R(4));
  R(0)=(int32_t)(int16_t)LD16(R(10)+12);
  R(0)&=R(3);
  ST16(R(10)+12,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(0)+=0xffffffffu;
  ST16(R(10)+4,R(0));
L8c088b46:;
  R(0)=0x0u;
L8c088b48:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088ae0(SH4Ctx *c) {
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(12)=0x8c2e2544u;
  R(4)<<=2;
  R(0)=R(4);
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c088b46; }
  R(13)=0x8c0bce80u;
  R(4)=R(14);
  R(6)=0x148u;
  R(9)=0x8c0199ecu;
  R(5)=R(13);
  { c->pr=0x8c088afeu; R(4)+=R(12); f_8c0199ec(c); }
  R(12)=0x8c2e2574u;
  R(0)=R(14);
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c088b12;
  R(6)=0x14au;
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c088b12u; R(4)+=R(12); sh4_call(c,tg); }
L8c088b12:;
  R(12)=0x8c2e25a4u;
  R(0)=R(14);
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c088b26;
  R(6)=0x14cu;
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c088b26u; R(4)+=R(12); sh4_call(c,tg); }
L8c088b26:;
  R(0)=0x8c2e2544u;
  R(4)=0x0u;
  R(3)=0x1u;
  ST32(R(14)+R(0),R(4));
  R(3)=sh4_shad(R(3),R(11));
  R(0)=0x8c2e2574u;
  R(3)=~R(3);
  ST32(R(14)+R(0),R(4));
  R(0)=R(14);
  ST32(R(12)+R(0),R(4));
  R(0)=(int32_t)(int16_t)LD16(R(10)+12);
  R(0)&=R(3);
  ST16(R(10)+12,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(0)+=0xffffffffu;
  ST16(R(10)+4,R(0));
L8c088b46:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088b58(SH4Ctx *c) {
  R(4)=0x8c0c879cu;
  R(3)=(int32_t)(int16_t)LD16(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c088b6a;
  R(0)=0x7fffu;
  R(2)=0x8c2e2540u;
  R(1)=0x1001u;
  { ST32(R(2),R(1)); return; }
L8c088b6a:;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  {  return; }
}
void f_8c088b6a(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  {  return; }
}
void f_8c088bc0(SH4Ctx *c) {
  R(2)=0x8c0c879cu;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c088bd4;
  R(1)=0x8c2e2540u;
  R(0)=0x1001u;
  ST32(R(1),R(0));
  R(0)=0x7fffu;
  {  return; }
L8c088bd4:;
  R(0)=0xcu;
  {  return; }
}
void f_8c088bda(SH4Ctx *c) {
  R(2)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c088bea;
  R(0)=0x1001u;
  { ST32(R(6),R(0)); goto L8c088bfa; }
L8c088bea:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c088bf6;
  R(2)=0xbu;
  c->t=(int32_t)R(5)>(int32_t)R(2);
  if(!c->t) goto L8c088c20;
L8c088bf6:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
L8c088bfa:;
  R(0)=0x7fffu;
  {  return; }
L8c088c20:;
  R(0)=0x8c2e2544u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)<<=2;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c088c32;
  R(0)=0x7ffdu;
  {  return; }
L8c088c32:;
  R(0)=0x7ffeu;
  {  return; }
}
void f_8c088c80(SH4Ctx *c) {
  R(3)=0x8c2e2544u;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  R(5)<<=2;
  R(5)+=R(3);
  R(2)=LD32(R(5));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c088c94;
  R(2)=0x100cu;
  { ST32(R(6),R(2)); goto L8c088c9e; }
L8c088c94:;
  R(0)=LD32(R(5));
  R(0)=(int32_t)(int16_t)LD16(R(0)+10);
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c088ca4;
L8c088c9e:;
  R(0)=0x7ffdu;
  {  return; }
L8c088ca4:;
  R(0)=0x7ffeu;
  {  return; }
}
void f_8c088caa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c879cu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c088d00;
  R(1)=0x8c2e2540u;
  R(0)=0x1001u;
  ST32(R(1),R(0));
  {  goto L8c088d22; }
L8c088d00:;
  R(13)=0x7fffu;
  R(12)=0x4u;
  R(14)=0x0u;
L8c088d06:;
  { c->pr=0x8c088d0au; R(4)=R(14); f_8c0887dc(c); }
  R(4)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(4)==R(13);
  if(c->t) goto L8c088d14;
  { R(0)=R(14); goto L8c088d24; }
L8c088d14:;
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(12);
  if(!c->t) goto L8c088d06;
  R(2)=0x8c2e2540u;
  R(3)=0x100eu;
  ST32(R(2),R(3));
L8c088d22:;
  R(0)=0x7fffu;
L8c088d24:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088d00(SH4Ctx *c) {
  R(13)=0x7fffu;
  R(12)=0x4u;
  R(14)=0x0u;
L8c088d06:;
  { c->pr=0x8c088d0au; R(4)=R(14); f_8c0887dc(c); }
  R(4)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(4)==R(13);
  if(c->t) goto L8c088d14;
  { R(0)=R(14); goto L8c088d24; }
L8c088d14:;
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(12);
  if(!c->t) goto L8c088d06;
  R(2)=0x8c2e2540u;
  R(3)=0x100eu;
  ST32(R(2),R(3));
  R(0)=0x7fffu;
L8c088d24:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088d2e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c879cu;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(12)=0x8c2e2540u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)=R(4); if(k) goto L8c088d50; }
  R(0)=0x1001u;
  { ST32(R(12),R(0)); goto L8c088e8c; }
L8c088d50:;
  R(10)=(uint32_t)(int32_t)(int16_t)R(13);
  c->t=(int32_t)R(10)>=0;
  if(!c->t) goto L8c088d5c;
  R(2)=0xbu;
  c->t=(int32_t)R(10)>(int32_t)R(2);
  if(!c->t) goto L8c088da0;
L8c088d5c:;
  R(1)=0x1005u;
  ST32(R(12),R(1));
  {  goto L8c088e8c; }
L8c088da0:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(13);
  R(11)=0x8c2e2544u;
  R(14)<<=2;
  R(0)=R(14);
  R(3)=LD32(R(11)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c088db6;
  R(0)=0x7ffdu;
  R(3)=0x100cu;
  { ST32(R(12),R(3)); goto L8c088e94; }
L8c088db6:;
  R(2)=0x8c0881ccu;
  { c->pr=0x8c088dbcu; R(4)=R(13); f_8c0881cc(c); }
  R(3)=0x7fffu;
  R(5)=R(0);
  R(4)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=R(4)==R(3);
  { uint32_t k=!c->t; R(8)=0x1u; if(k) goto L8c088dda; }
  R(1)=0x100du;
  R(0)=R(14);
  ST32(R(12),R(1));
  R(1)=0xau;
  R(2)=LD32(R(11)+R(0));
  R(1)+=R(2);
  ST16(R(1),R(8));
  {  goto L8c088e8c; }
L8c088dda:;
  R(3)=0x7ffdu;
  c->t=R(4)==R(3);
  { uint32_t k=!c->t; R(9)=R(11); if(k) goto L8c088dee; }
  R(0)=R(14);
  R(2)=LD32(R(9)+R(0));
  R(1)=0xau;
  R(1)+=R(2);
  { ST16(R(1),R(8)); goto L8c088e02; }
L8c088dee:;
  R(0)=R(14);
  R(2)=LD32(R(9)+R(0));
  R(3)=0xau;
  R(3)+=R(2);
  R(2)=0x8c088280u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c088dfeu; R(4)=R(10); f_8c088280(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST16(R(3),R(0));
L8c088e02:;
  R(0)=R(14);
  R(4)=R(11);
  R(3)=LD32(R(4)+R(0));
  R(2)=0xau;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x7fffu;
  R(3)=R(3)&0xFFFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c088e60;
  R(0)=R(14);
  R(3)=LD32(R(4)+R(0));
  R(1)=0xau;
  R(1)+=R(3);
  { ST16(R(1),R(8)); goto L8c088e76; }
L8c088e60:;
  R(0)=R(14);
  R(3)=LD32(R(4)+R(0));
  R(1)=0xau;
  R(1)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  R(1)=0x6u;
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(1))==0;
  if(c->t) goto L8c088e76;
  { c->pr=0x8c088e76u; R(4)=R(13); f_8c089280(c); }
L8c088e76:;
  R(0)=R(14);
  R(3)=0x8c087fe0u;
  R(5)=LD32(R(11)+R(0));
  { c->pr=0x8c088e80u; R(4)=R(13); f_8c087fe0(c); }
  R(3)=0x7fffu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c088e92;
  R(1)=0x100du;
  ST32(R(12),R(1));
L8c088e8c:;
  R(0)=0x7fffu;
  {  goto L8c088e94; }
L8c088e92:;
  R(0)=0x7ffeu;
L8c088e94:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c088ea6(SH4Ctx *c) {
  R(2)=0x8c0c879cu;
  R(7)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c088eb6;
  R(0)=0x1001u;
  { ST32(R(7),R(0)); goto L8c088f12; }
L8c088eb6:;
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(6)>=0;
  if(!c->t) goto L8c088ec2;
  R(2)=0xbu;
  c->t=(int32_t)R(6)>(int32_t)R(2);
  if(!c->t) goto L8c088f00;
L8c088ec2:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c088f12; }
L8c088f00:;
  R(3)=0x8c2e2544u;
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)<<=2;
  R(6)+=R(3);
  R(2)=LD32(R(6));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c088f18;
  R(2)=0x100cu;
  ST32(R(7),R(2));
L8c088f12:;
  R(0)=0x7fffu;
  {  return; }
L8c088f18:;
  R(3)=LD32(R(6));
  R(0)=R(5);
  ST16(R(3)+10,R(0));
  R(0)=0x0u;
  {  return; }
}
void f_8c088f00(SH4Ctx *c) {
  R(3)=0x8c2e2544u;
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)<<=2;
  R(6)+=R(3);
  R(2)=LD32(R(6));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c088f18;
  R(2)=0x100cu;
  ST32(R(7),R(2));
  R(0)=0x7fffu;
  {  return; }
L8c088f18:;
  R(3)=LD32(R(6));
  R(0)=R(5);
  ST16(R(3)+10,R(0));
  R(0)=0x0u;
  {  return; }
}
void f_8c088f80(SH4Ctx *c) {
  R(3)=0x8c2e2544u;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  R(5)<<=2;
  R(5)+=R(3);
  R(2)=LD32(R(5));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c088f98;
  R(2)=0x100cu;
  ST32(R(6),R(2));
  R(0)=0x7fffu;
  {  return; }
L8c088f98:;
  R(0)=LD32(R(5));
  R(0)=(int32_t)(int16_t)LD16(R(0)+10);
  {  return; }
}
void f_8c088fa0(SH4Ctx *c) {
  R(2)=0x8c0c879cu;
  R(7)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c088fb0;
  R(0)=0x1001u;
  { ST32(R(7),R(0)); goto L8c089012; }
L8c088fb0:;
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(6)>=0;
  if(!c->t) goto L8c088fbc;
  R(2)=0xbu;
  c->t=(int32_t)R(6)>(int32_t)R(2);
  if(!c->t) goto L8c089000;
L8c088fbc:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c089012; }
L8c089000:;
  R(3)=0x8c2e2544u;
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)<<=2;
  R(6)+=R(3);
  R(2)=LD32(R(6));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c089018;
  R(2)=0x100cu;
  ST32(R(7),R(2));
L8c089012:;
  R(0)=0x7fffu;
  {  return; }
L8c089018:;
  R(4)=LD32(R(6));
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(0)=(int32_t)(int16_t)LD16(R(4)+10);
  R(4)=R(0)&0xFFFF;
  R(5)&=R(4);
  c->t=R(5)==R(4);
  if(!c->t) goto L8c08902c;
  R(0)=0x7ffeu;
  {  return; }
L8c08902c:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c089032(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c089080; }
  R(0)=0x1001u;
  { ST32(R(5),R(0)); goto L8c0890a6; }
L8c089080:;
  R(7)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(7)>=0;
  if(!c->t) goto L8c08908c;
  R(2)=0xbu;
  c->t=(int32_t)R(7)>(int32_t)R(2);
  if(!c->t) goto L8c089094;
L8c08908c:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c0890a6; }
L8c089094:;
  R(3)=0x8c2e2544u;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  R(14)<<=2;
  R(14)+=R(3);
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0890ac;
  R(2)=0x100cu;
  ST32(R(5),R(2));
L8c0890a6:;
  R(0)=0x7fffu;
  {  { f_8c08910c(c); return; } }
L8c0890ac:;
  R(4)=0x1u;
  R(13)=0x20u;
  R(5)=0x0u;
  { f_8c0890b2(c); return; }
}
void f_8c089080(SH4Ctx *c) {
  R(7)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(7)>=0;
  if(!c->t) goto L8c08908c;
  R(2)=0xbu;
  c->t=(int32_t)R(7)>(int32_t)R(2);
  if(!c->t) goto L8c089094;
L8c08908c:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c0890a6; }
L8c089094:;
  R(3)=0x8c2e2544u;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  R(14)<<=2;
  R(14)+=R(3);
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0890ac;
  R(2)=0x100cu;
  ST32(R(5),R(2));
L8c0890a6:;
  R(0)=0x7fffu;
  {  { f_8c08910c(c); return; } }
L8c0890ac:;
  R(4)=0x1u;
  R(13)=0x20u;
  R(5)=0x0u;
  { f_8c0890b2(c); return; }
}
void f_8c0890b2(SH4Ctx *c) {
L8c0890b2:;
  R(7)=LD32(R(14));
  R(3)=R(4);
  R(3)=sh4_shad(R(3),R(5));
  ST32(R(15),R(7));
  R(7)=LD32(R(7));
  c->t=(R(3)&R(7))==0;
  if(c->t) goto L8c0890c4;
  { R(3)=R(4); goto L8c0890c6; }
L8c0890c4:;
  R(3)=0x0u;
L8c0890c6:;
  R(2)=R(4);
  R(5)+=0x1u;
  R(2)=sh4_shad(R(2),R(5));
  c->t=(R(7)&R(2))==0;
  R(6)+=R(3);
  if(c->t) goto L8c089100;
  { R(3)=R(4); goto L8c089102; }
L8c089100:;
  R(3)=0x0u;
L8c089102:;
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(13);
  R(6)+=R(3);
  if(!c->t) goto L8c0890b2;
  R(0)=R(6);
  { f_8c08910c(c); return; }
}
void f_8c089100(SH4Ctx *c) {
  R(3)=0x0u;
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(13);
  R(6)+=R(3);
  if(!c->t) { f_8c0890b2(c); return; }
  R(0)=R(6);
  { f_8c08910c(c); return; }
}
void f_8c08910c(SH4Ctx *c) {
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c089114(SH4Ctx *c) {
  R(2)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089124;
  R(0)=0x1001u;
  { ST32(R(6),R(0)); goto L8c08914a; }
L8c089124:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c089130;
  R(2)=0xbu;
  c->t=(int32_t)R(5)>(int32_t)R(2);
  if(!c->t) goto L8c089138;
L8c089130:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c08914a; }
L8c089138:;
  R(3)=0x8c2e2544u;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  R(5)<<=2;
  R(5)+=R(3);
  R(2)=LD32(R(5));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c089180;
  R(2)=0x100cu;
  ST32(R(6),R(2));
L8c08914a:;
  R(0)=0x7fffu;
  {  return; }
L8c089180:;
  R(0)=LD32(R(5));
  R(0)=(int32_t)(int16_t)LD16(R(0)+8);
  {  return; }
}
void f_8c089180(SH4Ctx *c) {
  R(0)=LD32(R(5));
  R(0)=(int32_t)(int16_t)LD16(R(0)+8);
  {  return; }
}
void f_8c089200(SH4Ctx *c) {
  R(3)=LD32(R(6));
  R(0)=0x0u;
  R(2)=LD32(R(3)+4);
  ST32(R(5),R(2));
  {  return; }
}
void f_8c08921e(SH4Ctx *c) {
  R(3)=LD32(R(5)+8);
  R(0)=0x0u;
  R(3)|=R(4);
  ST32(R(5)+8,R(3));
  {  return; }
}
void f_8c089280(SH4Ctx *c) {
  R(6)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089292;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c0892b6; }
L8c089292:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08929e;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c0892a6;
L8c08929e:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c0892b6; }
L8c0892a6:;
  R(0)=0x8c2e2544u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)<<=2;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0892bc;
  R(1)=0x100cu;
  ST32(R(5),R(1));
L8c0892b6:;
  R(0)=0x7fffu;
  {  return; }
L8c0892bc:;
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)|=R(3);
  ST16(R(6)+12,R(0));
  R(0)=0x0u;
  {  return; }
}
void f_8c089300(SH4Ctx *c) {
  R(6)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089312;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c089338; }
L8c089312:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08931e;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089326;
L8c08931e:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c089338; }
L8c089326:;
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(4)=0x1u;
  R(3)=R(4);
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08933e;
  R(3)=0x1002u;
  ST32(R(5),R(3));
L8c089338:;
  R(0)=0x7fffu;
  {  return; }
L8c08933e:;
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(4)=sh4_shad(R(4),R(1));
  R(4)=~R(4);
  R(0)&=R(4);
  ST16(R(6)+12,R(0));
  R(0)=0x0u;
  {  return; }
}
void f_8c089380(SH4Ctx *c) {
  R(6)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089392;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c0893b8; }
L8c089392:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08939e;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c0893a6;
L8c08939e:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c0893b8; }
L8c0893a6:;
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(7)=0x1u;
  R(3)=R(7);
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c0893be;
  R(3)=0x1002u;
  ST32(R(5),R(3));
L8c0893b8:;
  R(0)=0x7fffu;
  {  return; }
L8c0893be:;
  R(0)=0x8c2e2574u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)<<=2;
  R(2)=LD32(R(4)+R(0));
  R(3)=LD32(R(2));
  c->t=(R(7)&R(3))==0;
  if(c->t) goto L8c089400;
  R(0)=0x7ffeu;
  {  return; }
L8c089400:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c089406(SH4Ctx *c) {
  R(6)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089418;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c08943c; }
L8c089418:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089424;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c08942c;
L8c089424:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c08943c; }
L8c08942c:;
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089480;
  R(3)=0x1002u;
  ST32(R(5),R(3));
L8c08943c:;
  R(0)=0x7fffu;
  {  return; }
L8c089480:;
  R(1)=0x8c2e2574u;
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)<<=2;
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c089494;
  R(0)=0x7ffeu;
  {  return; }
L8c089494:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c08949a(SH4Ctx *c) {
  R(6)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0894ac;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c0894f0; }
L8c0894ac:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c0894b8;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c0894e0;
L8c0894b8:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c0894f0; }
L8c0894e0:;
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c0894f6;
  R(3)=0x1002u;
  ST32(R(5),R(3));
L8c0894f0:;
  R(0)=0x7fffu;
  {  return; }
L8c0894f6:;
  R(1)=0x8c2e2574u;
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)<<=2;
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c08950a;
  R(0)=0x7ffeu;
  {  return; }
L8c08950a:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c089510(SH4Ctx *c) {
  R(6)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089560;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c089584; }
L8c089560:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08956c;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089574;
L8c08956c:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c089584; }
L8c089574:;
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08958a;
  R(3)=0x1002u;
  ST32(R(5),R(3));
L8c089584:;
  R(0)=0x7fffu;
  {  return; }
L8c08958a:;
  R(1)=0x8c2e2574u;
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)<<=2;
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c08959e;
  R(0)=0x7ffeu;
  {  return; }
L8c08959e:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c0895e0(SH4Ctx *c) {
  R(6)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0895f2;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c08962c; }
L8c0895f2:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c0895fe;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089606;
L8c0895fe:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c08962c; }
L8c089606:;
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089618;
  R(3)=0x1002u;
  { ST32(R(5),R(3)); goto L8c08962c; }
L8c089618:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(6)=R(4);
  R(3)=LD32(R(6)+R(0));
  R(0)=LD32(R(3)+4);
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c089660;
  R(2)=0x1003u;
  ST32(R(5),R(2));
L8c08962c:;
  R(0)=0x7fffu;
  {  return; }
L8c089660:;
  R(0)=0x8c2e2574u;
  R(3)=LD32(R(6)+R(0));
  R(0)=LD32(R(3));
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c089670;
  R(0)=0x7ffeu;
  {  return; }
L8c089670:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c089660(SH4Ctx *c) {
  R(0)=0x8c2e2574u;
  R(3)=LD32(R(6)+R(0));
  R(0)=LD32(R(3));
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c089670;
  R(0)=0x7ffeu;
  {  return; }
L8c089670:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c0896c0(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(6)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c0896d2;
  R(3)=0x1002u;
  { ST32(R(5),R(3)); goto L8c0896e6; }
L8c0896d2:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(6)=R(4);
  R(3)=LD32(R(6)+R(0));
  R(0)=LD32(R(3)+4);
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c0896ec;
  R(2)=0x1003u;
  ST32(R(5),R(2));
L8c0896e6:;
  R(0)=0x7fffu;
  {  return; }
L8c0896ec:;
  R(0)=0x8c2e2574u;
  R(3)=LD32(R(6)+R(0));
  R(0)=LD32(R(3));
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0896fc;
  R(0)=0x7ffeu;
  {  return; }
L8c0896fc:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c089740(SH4Ctx *c) {
  R(7)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(7));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089754;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c08977a; }
L8c089754:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089760;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089768;
L8c089760:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c08977a; }
L8c089768:;
  R(0)=(int32_t)(int16_t)LD16(R(7)+12);
  R(13)=0x1u;
  R(3)=R(13);
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c0897a0;
  R(3)=0x1002u;
  ST32(R(5),R(3));
L8c08977a:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c0897a0:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)=0x8c2e2574u;
  R(4)<<=2;
  R(0)=R(4);
  R(3)=LD32(R(6)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x2u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(5)=R(4); if(k) goto L8c0897f6; }
  R(0)=R(5);
  R(3)=LD32(R(6)+R(0));
  R(3)=LD32(R(3));
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0897f6;
  R(0)=R(5);
  R(4)=LD32(R(6)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)+=0xffffffffu;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c0897da;
  R(0)=(int32_t)(int16_t)LD16(R(7)+20);
  R(4)+=R(0);
L8c0897da:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e25a4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(5)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3));
  c->t=(R(13)&R(3))==0;
  if(!c->t) goto L8c0897f6;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c0897f6:;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c0897fc(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089840;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c089864; }
L8c089840:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08984c;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089854;
L8c08984c:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c089864; }
L8c089854:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08986a;
  R(3)=0x1002u;
  ST32(R(5),R(3));
L8c089864:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08986a:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)=0x8c2e2574u;
  R(4)<<=2;
  R(0)=R(4);
  R(3)=LD32(R(6)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(7)=0x2u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(7);
  { uint32_t k=!c->t; R(5)=R(4); if(k) goto L8c0898e0; }
  R(0)=R(5);
  R(3)=LD32(R(6)+R(0));
  R(3)=LD32(R(3));
  c->t=(R(3)&R(7))==0;
  if(c->t) goto L8c0898e0;
  R(0)=R(5);
  R(4)=LD32(R(6)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)+=0xffffffffu;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c0898a4;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c0898a4:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e25a4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(5)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3));
  c->t=(R(7)&R(3))==0;
  if(!c->t) goto L8c0898e0;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c0898e0:;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c0898e6(SH4Ctx *c) {
  R(7)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(7));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0898f8;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c08991c; }
L8c0898f8:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089904;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c08990c;
L8c089904:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c08991c; }
L8c08990c:;
  R(0)=(int32_t)(int16_t)LD16(R(7)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089960;
  R(3)=0x1002u;
  ST32(R(5),R(3));
L8c08991c:;
  R(0)=0x7fffu;
  {  return; }
L8c089960:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)=0x8c2e2574u;
  R(4)<<=2;
  R(0)=R(4);
  R(3)=LD32(R(6)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x2u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(5)=R(4); if(k) goto L8c0899b6; }
  R(0)=R(5);
  R(3)=LD32(R(6)+R(0));
  R(0)=LD32(R(3));
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0899b6;
  R(0)=R(5);
  R(4)=LD32(R(6)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)+=0xffffffffu;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c08999a;
  R(0)=(int32_t)(int16_t)LD16(R(7)+20);
  R(4)+=R(0);
L8c08999a:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e25a4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(5)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c0899b6;
  R(0)=0x7ffeu;
  {  return; }
L8c0899b6:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c0899bc(SH4Ctx *c) {
  R(7)=0x8c0c879cu;
  R(5)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(7));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089a00;
  R(1)=0x1001u;
  ST32(R(5),R(1));
  {  goto L8c089a24; }
L8c089a00:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089a0c;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089a14;
L8c089a0c:;
  R(1)=0x1005u;
  ST32(R(5),R(1));
  {  goto L8c089a24; }
L8c089a14:;
  R(0)=(int32_t)(int16_t)LD16(R(7)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089a2a;
  R(3)=0x1002u;
  ST32(R(5),R(3));
L8c089a24:;
  R(0)=0x7fffu;
  {  return; }
L8c089a2a:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)=0x8c2e2574u;
  R(4)<<=2;
  R(0)=R(4);
  R(3)=LD32(R(6)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x2u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(5)=R(4); if(k) goto L8c089aa0; }
  R(0)=R(5);
  R(3)=LD32(R(6)+R(0));
  R(0)=LD32(R(3));
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c089aa0;
  R(0)=R(5);
  R(4)=LD32(R(6)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)+=0xffffffffu;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c089a64;
  R(0)=(int32_t)(int16_t)LD16(R(7)+20);
  R(4)+=R(0);
L8c089a64:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e25a4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(5)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c089aa0;
  R(0)=0x7ffeu;
  {  return; }
L8c089aa0:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c089aa6(SH4Ctx *c) {
  R(7)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(7));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089ab8;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c089b16; }
L8c089ab8:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089ac4;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089acc;
L8c089ac4:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c089b16; }
L8c089acc:;
  R(0)=(int32_t)(int16_t)LD16(R(7)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089b00;
  R(3)=0x1002u;
  { ST32(R(6),R(3)); goto L8c089b16; }
L8c089b00:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(7)=R(4);
  R(3)=LD32(R(7)+R(0));
  R(3)=LD32(R(3));
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(c->t) goto L8c089b1c;
  R(2)=0x1004u;
  ST32(R(6),R(2));
L8c089b16:;
  R(0)=0x7fffu;
  {  return; }
L8c089b1c:;
  R(0)=0x8c2e2574u;
  R(3)=LD32(R(7)+R(0));
  R(3)=LD32(R(3)+4);
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c089b2e;
  R(0)=0x7ffeu;
  {  return; }
L8c089b2e:;
  R(0)=0x7ffdu;
  {  return; }
}
void f_8c089b34(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c879cu;
  R(7)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089b80;
  R(1)=0x1001u;
  ST32(R(7),R(1));
  {  goto L8c089bbc; }
L8c089b80:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089b8c;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089b94;
L8c089b8c:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c089bbc; }
L8c089b94:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089ba6;
  R(3)=0x1002u;
  { ST32(R(7),R(3)); goto L8c089bbc; }
L8c089ba6:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(6)=R(4);
  R(3)=LD32(R(6)+R(0));
  R(3)=LD32(R(3));
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(c->t) goto L8c089c00;
  R(2)=0x1004u;
  ST32(R(7),R(2));
L8c089bbc:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c089c00:;
  R(4)=0x8c2e2574u;
  R(0)=R(6);
  R(2)=0xeu;
  R(3)=LD32(R(4)+R(0));
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x2u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c089c52;
  R(0)=R(6);
  R(3)=LD32(R(4)+R(0));
  R(3)=LD32(R(3)+4);
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c089c52;
  R(0)=R(6);
  R(3)=LD32(R(4)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)+=0xffffffffu;
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c089c38;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c089c38:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(6)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3)+4);
  c->t=(R(5)&R(3))==0;
  if(!c->t) goto L8c089c52;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c089c52:;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c089c58(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c879cu;
  R(7)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089ca0;
  R(1)=0x1001u;
  ST32(R(7),R(1));
  {  goto L8c089cdc; }
L8c089ca0:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089cac;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089cb4;
L8c089cac:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c089cdc; }
L8c089cb4:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089cc6;
  R(3)=0x1002u;
  { ST32(R(7),R(3)); goto L8c089cdc; }
L8c089cc6:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(6)=R(4);
  R(3)=LD32(R(6)+R(0));
  R(3)=LD32(R(3));
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(c->t) goto L8c089d20;
  R(2)=0x1004u;
  ST32(R(7),R(2));
L8c089cdc:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c089d20:;
  R(4)=0x8c2e2574u;
  R(0)=R(6);
  R(2)=0xeu;
  R(3)=LD32(R(4)+R(0));
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x2u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c089d72;
  R(0)=R(6);
  R(3)=LD32(R(4)+R(0));
  R(3)=LD32(R(3)+4);
  c->t=(R(3)&R(5))==0;
  if(!c->t) goto L8c089d72;
  R(0)=R(6);
  R(3)=LD32(R(4)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)+=0xffffffffu;
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c089d56;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c089d56:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(6)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3)+4);
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c089d72;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c089d72:;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c089d78(SH4Ctx *c) {
  R(7)=0x8c0c879cu;
  R(3)=0x0u;
  R(6)=0x8c2e2540u;
  ST32(R(5),R(3));
  R(2)=(int32_t)(int16_t)LD16(R(7));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c089dc0;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c089de4; }
L8c089dc0:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089dcc;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089dd4;
L8c089dcc:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c089de4; }
L8c089dd4:;
  R(0)=(int32_t)(int16_t)LD16(R(7)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089dea;
  R(3)=0x1002u;
  ST32(R(6),R(3));
L8c089de4:;
  R(0)=0x7fffu;
  {  return; }
L8c089dea:;
  R(0)=0x8c2e2574u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)<<=2;
  R(2)=LD32(R(4)+R(0));
  R(0)=0x0u;
  R(3)=LD32(R(2));
  ST32(R(5),R(3));
  {  return; }
}
void f_8c089dc0(SH4Ctx *c) {
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089dcc;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089dd4;
L8c089dcc:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c089de4; }
L8c089dd4:;
  R(0)=(int32_t)(int16_t)LD16(R(7)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089dea;
  R(3)=0x1002u;
  ST32(R(6),R(3));
L8c089de4:;
  R(0)=0x7fffu;
  {  return; }
L8c089dea:;
  R(0)=0x8c2e2574u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)<<=2;
  R(2)=LD32(R(4)+R(0));
  R(0)=0x0u;
  R(3)=LD32(R(2));
  ST32(R(5),R(3));
  {  return; }
}
void f_8c089dfc(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089e40;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c089e64; }
L8c089e40:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089e4c;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089e54;
L8c089e4c:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c089e64; }
L8c089e54:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089e6a;
  R(3)=0x1002u;
  ST32(R(6),R(3));
L8c089e64:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c089e6a:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(7)=0x8c2e2574u;
  R(4)<<=2;
  R(0)=R(4);
  R(3)=LD32(R(7)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x2u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(6)=R(4); if(k) goto L8c089f00; }
  R(0)=R(6);
  R(3)=LD32(R(7)+R(0));
  R(3)=LD32(R(3));
  c->t=(R(3)&R(5))==0;
  if(!c->t) goto L8c089f00;
  R(0)=R(6);
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)+=0xffffffffu;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c089ea4;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c089ea4:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e25a4u;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(6)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3));
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c089f00;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c089f00:;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c089f06(SH4Ctx *c) {
  R(7)=0x8c0c879cu;
  R(3)=0x0u;
  R(6)=0x8c2e2540u;
  ST32(R(5),R(3));
  R(2)=(int32_t)(int16_t)LD16(R(7));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c089f1c;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c089f40; }
L8c089f1c:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089f28;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089f30;
L8c089f28:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c089f40; }
L8c089f30:;
  R(0)=(int32_t)(int16_t)LD16(R(7)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c089f80;
  R(3)=0x1002u;
  ST32(R(6),R(3));
L8c089f40:;
  R(0)=0x7fffu;
  {  return; }
L8c089f80:;
  R(0)=0x8c2e2574u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)<<=2;
  R(2)=LD32(R(4)+R(0));
  R(0)=0x0u;
  R(3)=LD32(R(2)+4);
  ST32(R(5),R(3));
  {  return; }
}
void f_8c089f80(SH4Ctx *c) {
  R(0)=0x8c2e2574u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)<<=2;
  R(2)=LD32(R(4)+R(0));
  R(0)=0x0u;
  R(3)=LD32(R(2)+4);
  ST32(R(5),R(3));
  {  return; }
}
void f_8c089f92(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c089fa6;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c08a01e; }
L8c089fa6:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c089fb2;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c089fba;
L8c089fb2:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c08a01e; }
L8c089fba:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a000;
  R(3)=0x1002u;
  { ST32(R(6),R(3)); goto L8c08a01e; }
L8c08a000:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2574u;
  R(4)<<=2;
  R(7)=R(4);
  R(3)=LD32(R(7)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(1)=R(5);
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(!c->t) goto L8c08a024;
  R(2)=0x100bu;
  ST32(R(6),R(2));
L8c08a01e:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a024:;
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a038;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a038:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c08a052;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a052:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a000(SH4Ctx *c) {
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2574u;
  R(4)<<=2;
  R(7)=R(4);
  R(3)=LD32(R(7)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(1)=R(5);
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(!c->t) goto L8c08a024;
  R(2)=0x100bu;
  ST32(R(6),R(2));
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a024:;
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a038;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a038:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c08a052;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a052:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a024(SH4Ctx *c) {
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a038;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a038:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c08a052;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a052:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
