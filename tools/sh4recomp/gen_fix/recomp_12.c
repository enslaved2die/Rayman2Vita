#include "recomp_decls.h"
#include "r2_trace.h"
void f_8c06f2a0(SH4Ctx *c) {
  R(7)=LD32(R(4));
  R(6)=LD32(R(5));
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  if(c->t) goto L8c06f2ac;
  { R(0)=0xffffffffu; return; }
L8c06f2ac:;
  c->t=R(6)==R(7);
  if(!c->t) goto L8c06f2b4;
  { R(0)=0x0u; return; }
L8c06f2b4:;
  R(0)=0x1u;
  {  return; }
}
void f_8c06f2ac(SH4Ctx *c) {
  c->t=R(6)==R(7);
  if(!c->t) goto L8c06f2b4;
  { R(0)=0x0u; return; }
L8c06f2b4:;
  R(0)=0x1u;
  {  return; }
}
void f_8c06f2b4(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c06f2ba(SH4Ctx *c) {
  R(7)=LD32(R(4));
  R(6)=LD32(R(5));
  c->t=(int32_t)R(6)>(int32_t)R(7);
  if(!c->t) goto L8c06f2c6;
  { R(0)=0xffffffffu; return; }
L8c06f2c6:;
  c->t=R(6)==R(7);
  if(!c->t) goto L8c06f2ce;
  { R(0)=0x0u; return; }
L8c06f2ce:;
  R(0)=0x1u;
  {  return; }
}
void f_8c06f2c6(SH4Ctx *c) {
  c->t=R(6)==R(7);
  if(!c->t) goto L8c06f2ce;
  { R(0)=0x0u; return; }
L8c06f2ce:;
  R(0)=0x1u;
  {  return; }
}
void f_8c06f320(SH4Ctx *c) {
  fp_cmp(c,0,4,5);
  if(!c->t) goto L8c06f328;
  { R(0)=0x0u; return; }
L8c06f328:;
  R(0)=0x1u;
  {  return; }
}
void f_8c06f328(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c06f32e(SH4Ctx *c) {
  fp_ld(c,5,R(4));
  fp_ld(c,4,R(5));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c06f33a;
  { R(0)=0xffffffffu; return; }
L8c06f33a:;
  fp_cmp(c,0,4,5);
  if(!c->t) goto L8c06f342;
  { R(0)=0x0u; return; }
L8c06f342:;
  R(0)=0x1u;
  {  return; }
}
void f_8c06f33a(SH4Ctx *c) {
  fp_cmp(c,0,4,5);
  if(!c->t) goto L8c06f342;
  { R(0)=0x0u; return; }
L8c06f342:;
  R(0)=0x1u;
  {  return; }
}
void f_8c06f342(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c06f348(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(12)=R(4);
  R(4)=LD32(R(12)+4);
  R(13)=R(5);
  R(5)=LD32(R(13));
  ST32(R(15)+8,R(4));
  R(13)+=0xcu;
  R(4)=LD32(R(4)+12);
  R(5)=R(5)&0xFF;
  R(5)<<=2;
  R(6)=R(15);
  ST32(R(15)+4,R(4));
  R(5)<<=2;
  R(4)=LD32(R(4));
  R(6)+=0xcu;
  ST32(R(15),R(4));
  R(4)=LD32(R(4)+12);
  R(11)=LD32(R(13)+4);
  R(14)=LD32(R(4));
  R(14)=LD32(R(14));
  R(14)=LD32(R(14)+4);
  R(14)+=R(5);
  R(5)=R(13);
  R(3)=LD32(R(14));
  R(14)=LD32(R(4)+8);
  R(14)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c06f38au; R(4)=R(12); sh4_call(c,tg); }
  R(11)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(13)=LD32(R(15)+12);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c06f39au; R(4)=R(12); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(4)=LD32(R(15)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(13)>(int32_t)R(0);
  if(!c->t) goto L8c06f3aa;
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(13)=R(0)&0xFF;
L8c06f3aa:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06f3b8;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c06f3c8;
  {  goto L8c06f3e0; }
L8c06f3b8:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06f3c2;
  R(7)=0x8c06f2bau;
  {  goto L8c06f3d4; }
L8c06f3c2:;
  R(7)=0x8c06f2a0u;
  {  goto L8c06f3d4; }
L8c06f3c8:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06f3d2;
  R(7)=0x8c06f2d4u;
  {  goto L8c06f3d4; }
L8c06f3d2:;
  R(7)=0x8c06f32eu;
L8c06f3d4:;
  R(2)=0x8c09d048u;
  R(4)=R(14);
  R(6)=0x4u;
  R(5)=R(13);
  { c->pr=0x8c06f3e0u; R(4)+=0x8u; f_8c09d048(c); }
L8c06f3e0:;
  R(0)=R(12);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f420(SH4Ctx *c) {
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=0x1adu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c06f43e; }
  R(1)=0x1aeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f44e;
  {  goto L8c06f458; }
L8c06f43e:;
  R(3)=0x8c05c380u;
  { c->pr=0x8c06f444u;  f_8c05c380(c); }
  R(2)=0x8c05c42eu;
  { c->pr=0x8c06f44au;  f_8c05c42e(c); }
  {  goto L8c06f460; }
L8c06f44e:;
  R(2)=0x8c05c380u;
  { c->pr=0x8c06f454u;  f_8c05c380(c); }
  {  goto L8c06f460; }
L8c06f458:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06f460u; R(4)=0x27u; f_8c074080(c); }
L8c06f460:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f4a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=R(5);
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(11)=R(4);
  R(12)+=0xfffffff4u;
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)=LD32(R(12)); if(k) goto L8c06f4c6; }
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c06f4c8; }
L8c06f4c6:;
  ST32(R(15),R(11));
L8c06f4c8:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c06f4d4u; R(4)=R(11); sh4_call(c,tg); }
  R(1)=0x1afu;
  R(14)=R(0);
  R(0)=R(12);
  R(4)=LD32(R(15)+4);
  R(5)=0xffffu;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(5)+=R(4); if(k) goto L8c06f4ee; }
  R(1)=0x1b0u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f4f4;
  {  goto L8c06f540; }
L8c06f4ee:;
  R(6)=LD32(R(15));
  { R(4)=0x1u; goto L8c06f4f8; }
L8c06f4f4:;
  R(6)=LD32(R(15));
  R(4)=0x0u;
L8c06f4f8:;
  R(3)=0x8c058ce8u;
  { c->pr=0x8c06f4feu;  f_8c058ce8(c); }
  { R(13)=R(0); goto L8c06f54c; }
L8c06f540:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06f548u; R(4)=0x28u; f_8c074080(c); }
  {  goto L8c06f586; }
L8c06f54c:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c06f586;
  R(1)=0x1afu;
  R(0)=R(12);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f562;
  R(1)=0x1b0u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f586;
  {  goto L8c06f586; }
L8c06f562:;
  R(0)=LD32(R(13)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c06f586;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c06f576u; R(4)=R(11); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x4u;
  R(3)=0x8c085878u;
  R(6)=0x0u;
  fp_ld(c,4,R(0)+R(15));
  R(5)=R(6);
  { c->pr=0x8c06f586u; R(4)=R(13); f_8c085878(c); }
L8c06f586:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f540(SH4Ctx *c) {
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06f548u; R(4)=0x28u; f_8c074080(c); }
  {  goto L8c06f586; }
L8c06f586:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f5c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=R(5);
  R(5)+=0xfffffff4u;
  R(5)=LD32(R(5));
  R(1)=0x1b1u;
  R(0)=R(5);
  R(13)=0x8c01929au;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f5e8;
  R(1)=0x1b2u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f610;
  R(1)=0x1b3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f660;
  {  goto L8c06f67c; }
L8c06f5e8:;
  R(6)=0x8c0c76fcu;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c06f5f8;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06f5fa; }
L8c06f5f8:;
  ST32(R(15),R(4));
L8c06f5fa:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06f604u; R(5)=R(14); sh4_call(c,tg); }
  R(3)=0x8c2d105cu;
  ST32(R(15)+4,R(0));
  R(5)=LD32(R(3));
  R(6)=LD32(R(15)+8);
  { R(4)=LD32(R(15)); goto L8c06f674; }
L8c06f610:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c06f61au; R(5)=R(14); sh4_call(c,tg); }
  R(3)=0x8c2d1064u;
  ST32(R(15)+4,R(0));
  R(5)=LD32(R(3));
  R(6)=LD32(R(15)+8);
  { R(4)=0xffffffffu; goto L8c06f674; }
L8c06f660:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c06f66au; R(5)=R(14); sh4_call(c,tg); }
  R(3)=0x8c2d105cu;
  R(4)=0xffffffffu;
  ST32(R(15)+4,R(0));
  R(5)=LD32(R(3));
  R(6)=LD32(R(15)+8);
L8c06f674:;
  { uint32_t tg=R(13); c->pr=0x8c06f678u;  sh4_call(c,tg); }
  { R(0)=LD32(R(15)+4); goto L8c06f686; }
L8c06f67c:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06f684u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
L8c06f686:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f660(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c06f66au; R(5)=R(14); sh4_call(c,tg); }
  R(3)=0x8c2d105cu;
  R(4)=0xffffffffu;
  ST32(R(15)+4,R(0));
  R(5)=LD32(R(3));
  R(6)=LD32(R(15)+8);
  { uint32_t tg=R(13); c->pr=0x8c06f678u;  sh4_call(c,tg); }
  { R(0)=LD32(R(15)+4); goto L8c06f686; }
L8c06f686:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f690(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06f6a2u; R(6)+=0x4u; sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c06f710u;
  fp_ld(c,3,R(0));
  R(3)=0x8c017bdcu;
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  { c->pr=0x8c06f6b6u; R(4)=c->fpul; f_8c017bdc(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c06f6c0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(1)=0x1b5u;
  ST32(R(15),R(5));
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f720;
  R(1)=0x1b6u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f72c;
  R(1)=0x1b7u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f736;
  {  goto L8c06f73e; }
L8c06f720:;
  R(2)=0x8c018fc0u;
  R(3)=0x8c2d1064u;
  { c->pr=0x8c06f728u; R(4)=LD32(R(3)); f_8c018fc0(c); }
  {  goto L8c06f73e; }
L8c06f72c:;
  R(2)=0x8c018d2cu;
  { c->pr=0x8c06f732u;  f_8c018d2c(c); }
  {  goto L8c06f73e; }
L8c06f736:;
  R(3)=0x8c018446u;
  R(2)=0x8c2d1060u;
  { c->pr=0x8c06f73eu; R(4)=LD32(R(2)); f_8c018446(c); }
L8c06f73e:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06f720(SH4Ctx *c) {
  R(2)=0x8c018fc0u;
  R(3)=0x8c2d1064u;
  { c->pr=0x8c06f728u; R(4)=LD32(R(3)); f_8c018fc0(c); }
  {  goto L8c06f73e; }
L8c06f73e:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06f780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff4cu;
  R(15)+=R(0);
  R(8)=R(5);
  R(6)=0xa4u;
  R(9)=R(4);
  ST32(R(15),R(5));
  R(8)=LD32(R(8)+4);
  R(6)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c06f7a4u; R(4)=R(9); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(8)=R(0);
  R(4)=0xa4u;
  { c->pr=0x8c06f7aeu; R(4)+=R(15); f_8c071ce0(c); }
  R(2)=0x8c04523au;
  { c->pr=0x8c06f7b4u; R(14)=R(0); f_8c04523a(c); }
  R(13)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(11)=0x8c045234u;
  R(10)=0x8c09d1c0u;
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06f7ec;
  { uint32_t tg=R(11); c->pr=0x8c06f7c4u;  sh4_call(c,tg); }
  R(2)=0x8c09c4d4u;
  R(1)=R(0);
  R(0)=R(15);
  { c->pr=0x8c06f7ceu; R(0)+=0x7cu; f_8c09c4d4(c); }
  R(5)=0x24u;
  { uint32_t tg=R(10); c->pr=0x8c06f7d4u; R(4)=R(14); sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c06f812;
  R(0)=(int32_t)(int8_t)LD8(R(12)+1);
  c->t=(int32_t)R(0)==42;
  if(c->t) goto L8c06f812;
  R(3)=0x8c09cfecu;
  R(4)=R(12);
  { c->pr=0x8c06f7e8u; R(4)+=0x1u; f_8c09cfec(c); }
  { R(14)=R(0); goto L8c06f84a; }
L8c06f7ec:;
  R(3)=0x8c09c4d4u;
  R(0)=R(15);
  R(1)=R(14);
  { c->pr=0x8c06f7f6u; R(0)+=0x7cu; f_8c09c4d4(c); }
  R(4)=R(15);
  R(5)=0x24u;
  { uint32_t tg=R(10); c->pr=0x8c06f7feu; R(4)+=0x7cu; sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c06f808;
  { R(14)=0x0u; goto L8c06f84a; }
L8c06f808:;
  R(2)=0x0u;
  ST8(R(12),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(12)+1);
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06f840;
L8c06f812:;
  { R(14)=R(13); goto L8c06f84a; }
L8c06f840:;
  R(3)=0x8c09cfecu;
  R(4)=R(12);
  { c->pr=0x8c06f848u; R(4)+=0x1u; f_8c09cfec(c); }
  R(14)=R(0);
L8c06f84a:;
  R(6)=0xa4u;
  R(5)=R(8);
  R(12)=LD32(R(8)+4);
  R(6)+=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f856u; R(4)=R(9); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(12)=R(0);
  R(4)=0xa4u;
  { c->pr=0x8c06f860u; R(4)+=R(15); f_8c071ce0(c); }
  R(6)=0xa4u;
  R(5)=R(12);
  R(2)=LD32(R(12)+4);
  R(8)=R(0);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c06f86eu; R(4)=R(9); sh4_call(c,tg); }
  R(6)=0xa4u;
  R(12)=R(0);
  R(3)=LD32(R(12)+4);
  R(5)=R(0);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c06f87cu; R(4)=R(9); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(4)=0xa4u;
  ST32(R(15),R(0));
  { c->pr=0x8c06f886u; R(4)+=R(15); f_8c071ce0(c); }
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(12)=0x8c06874cu;
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06f900;
  { uint32_t tg=R(10); c->pr=0x8c06f894u; R(5)=0x24u; sh4_call(c,tg); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c06f8a0;
  R(0)=(int32_t)(int8_t)LD8(R(10)+1);
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06f8c0;
L8c06f8a0:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c06f8ae;
  { uint32_t tg=R(11); c->pr=0x8c06f8a8u; {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(3)=0x8c0bbb7cu;
  { {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} goto L8c06f8c8; }
L8c06f8ae:;
  { uint32_t tg=R(11); c->pr=0x8c06f8b2u;  sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(0);
  R(0)=R(15);
  { c->pr=0x8c06f8bcu; R(0)+=0x54u; f_8c09c4d4(c); }
  {  goto L8c06f936; }
L8c06f8c0:;
  { uint32_t tg=R(11); c->pr=0x8c06f8c4u; {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(3)=0x8c0bbb84u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
L8c06f8c8:;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f8d0u; R(4)+=0x60u; sh4_call(c,tg); }
  { R(15)+=0xcu; goto L8c06f936; }
L8c06f900:;
  R(3)=0x8c09c4d4u;
  R(0)=R(15);
  R(1)=R(4);
  { c->pr=0x8c06f90au; R(0)+=0x54u; f_8c09c4d4(c); }
  R(4)=R(15);
  R(5)=0x24u;
  { uint32_t tg=R(10); c->pr=0x8c06f912u; R(4)+=0x54u; sh4_call(c,tg); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c06f936;
  R(0)=(int32_t)(int8_t)LD8(R(10)+1);
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06f936;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c06f932;
  R(3)=0x8c0bbb8cu;
  R(4)=R(10);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c06f92eu; R(4)+=0x1u; sh4_call(c,tg); }
  { R(15)+=0x8u; goto L8c06f936; }
L8c06f932:;
  R(3)=0x0u;
  ST8(R(10),R(3));
L8c06f936:;
  R(10)=R(15);
  { uint32_t tg=R(11); c->pr=0x8c06f93cu; R(10)+=0x7cu; sh4_call(c,tg); }
  R(2)=0x8c0337f4u;
  R(5)=R(0);
  { c->pr=0x8c06f944u; R(4)=R(10); f_8c0337f4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06f94c;
  c->t=R(14)==R(13);
  if(c->t) goto L8c06f978;
L8c06f94c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c06f962;
  R(2)=0x8c0bbb7cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f95eu; R(4)+=0x10u; sh4_call(c,tg); }
  { R(15)+=0xcu; goto L8c06f96e; }
L8c06f962:;
  R(2)=0x8c0ab5e0u;
  R(1)=R(15);
  R(0)=R(15);
  R(1)+=0x7cu;
  { c->pr=0x8c06f96eu; R(0)+=0x4u; f_8c0ab5e0(c); }
L8c06f96e:;
  R(3)=0x8c045b80u;
  R(4)=R(15);
  R(5)=0x1u;
  { c->pr=0x8c06f978u; R(4)+=0x4u; f_8c045b80(c); }
L8c06f978:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c06f9c0;
  R(3)=0x8c0bbb94u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f98au; R(4)+=0x38u; sh4_call(c,tg); }
  { R(15)+=0xcu; goto L8c06f9d2; }
L8c06f9c0:;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0bbba0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f9d0u; R(4)+=0x3cu; sh4_call(c,tg); }
  R(15)+=0x10u;
L8c06f9d2:;
  R(1)=0xb4u;
  R(0)=LD32(R(15));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f840(SH4Ctx *c) {
  R(3)=0x8c09cfecu;
  R(4)=R(12);
  { c->pr=0x8c06f848u; R(4)+=0x1u; f_8c09cfec(c); }
  R(14)=R(0);
  R(6)=0xa4u;
  R(5)=R(8);
  R(12)=LD32(R(8)+4);
  R(6)+=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f856u; R(4)=R(9); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(12)=R(0);
  R(4)=0xa4u;
  { c->pr=0x8c06f860u; R(4)+=R(15); f_8c071ce0(c); }
  R(6)=0xa4u;
  R(5)=R(12);
  R(2)=LD32(R(12)+4);
  R(8)=R(0);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c06f86eu; R(4)=R(9); sh4_call(c,tg); }
  R(6)=0xa4u;
  R(12)=R(0);
  R(3)=LD32(R(12)+4);
  R(5)=R(0);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c06f87cu; R(4)=R(9); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(4)=0xa4u;
  ST32(R(15),R(0));
  { c->pr=0x8c06f886u; R(4)+=R(15); f_8c071ce0(c); }
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(12)=0x8c06874cu;
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06f900;
  { uint32_t tg=R(10); c->pr=0x8c06f894u; R(5)=0x24u; sh4_call(c,tg); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c06f8a0;
  R(0)=(int32_t)(int8_t)LD8(R(10)+1);
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06f8c0;
L8c06f8a0:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c06f8ae;
  { uint32_t tg=R(11); c->pr=0x8c06f8a8u; {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(3)=0x8c0bbb7cu;
  { {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} goto L8c06f8c8; }
L8c06f8ae:;
  { uint32_t tg=R(11); c->pr=0x8c06f8b2u;  sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(0);
  R(0)=R(15);
  { c->pr=0x8c06f8bcu; R(0)+=0x54u; f_8c09c4d4(c); }
  {  goto L8c06f936; }
L8c06f8c0:;
  { uint32_t tg=R(11); c->pr=0x8c06f8c4u; {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(3)=0x8c0bbb84u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
L8c06f8c8:;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f8d0u; R(4)+=0x60u; sh4_call(c,tg); }
  { R(15)+=0xcu; goto L8c06f936; }
L8c06f900:;
  R(3)=0x8c09c4d4u;
  R(0)=R(15);
  R(1)=R(4);
  { c->pr=0x8c06f90au; R(0)+=0x54u; f_8c09c4d4(c); }
  R(4)=R(15);
  R(5)=0x24u;
  { uint32_t tg=R(10); c->pr=0x8c06f912u; R(4)+=0x54u; sh4_call(c,tg); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c06f936;
  R(0)=(int32_t)(int8_t)LD8(R(10)+1);
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06f936;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c06f932;
  R(3)=0x8c0bbb8cu;
  R(4)=R(10);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c06f92eu; R(4)+=0x1u; sh4_call(c,tg); }
  { R(15)+=0x8u; goto L8c06f936; }
L8c06f932:;
  R(3)=0x0u;
  ST8(R(10),R(3));
L8c06f936:;
  R(10)=R(15);
  { uint32_t tg=R(11); c->pr=0x8c06f93cu; R(10)+=0x7cu; sh4_call(c,tg); }
  R(2)=0x8c0337f4u;
  R(5)=R(0);
  { c->pr=0x8c06f944u; R(4)=R(10); f_8c0337f4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06f94c;
  c->t=R(14)==R(13);
  if(c->t) goto L8c06f978;
L8c06f94c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c06f962;
  R(2)=0x8c0bbb7cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f95eu; R(4)+=0x10u; sh4_call(c,tg); }
  { R(15)+=0xcu; goto L8c06f96e; }
L8c06f962:;
  R(2)=0x8c0ab5e0u;
  R(1)=R(15);
  R(0)=R(15);
  R(1)+=0x7cu;
  { c->pr=0x8c06f96eu; R(0)+=0x4u; f_8c0ab5e0(c); }
L8c06f96e:;
  R(3)=0x8c045b80u;
  R(4)=R(15);
  R(5)=0x1u;
  { c->pr=0x8c06f978u; R(4)+=0x4u; f_8c045b80(c); }
L8c06f978:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c06f9c0;
  R(3)=0x8c0bbb94u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f98au; R(4)+=0x38u; sh4_call(c,tg); }
  { R(15)+=0xcu; goto L8c06f9d2; }
L8c06f9c0:;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0bbba0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f9d0u; R(4)+=0x3cu; sh4_call(c,tg); }
  R(15)+=0x10u;
L8c06f9d2:;
  R(1)=0xb4u;
  R(0)=LD32(R(15));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f900(SH4Ctx *c) {
  R(3)=0x8c09c4d4u;
  R(0)=R(15);
  R(1)=R(4);
  { c->pr=0x8c06f90au; R(0)+=0x54u; f_8c09c4d4(c); }
  R(4)=R(15);
  R(5)=0x24u;
  { uint32_t tg=R(10); c->pr=0x8c06f912u; R(4)+=0x54u; sh4_call(c,tg); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c06f936;
  R(0)=(int32_t)(int8_t)LD8(R(10)+1);
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06f936;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c06f932;
  R(3)=0x8c0bbb8cu;
  R(4)=R(10);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c06f92eu; R(4)+=0x1u; sh4_call(c,tg); }
  { R(15)+=0x8u; goto L8c06f936; }
L8c06f932:;
  R(3)=0x0u;
  ST8(R(10),R(3));
L8c06f936:;
  R(10)=R(15);
  { uint32_t tg=R(11); c->pr=0x8c06f93cu; R(10)+=0x7cu; sh4_call(c,tg); }
  R(2)=0x8c0337f4u;
  R(5)=R(0);
  { c->pr=0x8c06f944u; R(4)=R(10); f_8c0337f4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06f94c;
  c->t=R(14)==R(13);
  if(c->t) goto L8c06f978;
L8c06f94c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c06f962;
  R(2)=0x8c0bbb7cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f95eu; R(4)+=0x10u; sh4_call(c,tg); }
  { R(15)+=0xcu; goto L8c06f96e; }
L8c06f962:;
  R(2)=0x8c0ab5e0u;
  R(1)=R(15);
  R(0)=R(15);
  R(1)+=0x7cu;
  { c->pr=0x8c06f96eu; R(0)+=0x4u; f_8c0ab5e0(c); }
L8c06f96e:;
  R(3)=0x8c045b80u;
  R(4)=R(15);
  R(5)=0x1u;
  { c->pr=0x8c06f978u; R(4)+=0x4u; f_8c045b80(c); }
L8c06f978:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c06f9c0;
  R(3)=0x8c0bbb94u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f98au; R(4)+=0x38u; sh4_call(c,tg); }
  { R(15)+=0xcu; goto L8c06f9d2; }
L8c06f9c0:;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0bbba0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f9d0u; R(4)+=0x3cu; sh4_call(c,tg); }
  R(15)+=0x10u;
L8c06f9d2:;
  R(1)=0xb4u;
  R(0)=LD32(R(15));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f9c0(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0bbba0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c06f9d0u; R(4)+=0x3cu; sh4_call(c,tg); }
  R(15)+=0x10u;
  R(1)=0xb4u;
  R(0)=LD32(R(15));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f9ea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(6)=0x8c0c76fcu;
  R(13)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c06fa04;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06fa06; }
L8c06fa04:;
  ST32(R(15),R(4));
L8c06fa06:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(2)=LD32(R(13)+4); if(k) goto L8c06fa14; }
  { R(14)=0x0u; goto L8c06fa18; }
L8c06fa14:;
  R(14)=LD32(R(15));
  R(14)=LD32(R(14)+4);
L8c06fa18:;
  R(6)=R(15);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c06fa20u; R(5)=R(13); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  R(5)=R(0);
  { uint32_t k=c->t; R(4)=LD32(R(15)+4); if(k) goto L8c06fa36; }
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06fa36;
  R(6)=R(4);
  R(4)=LD32(R(14)+4);
  R(0)=0x2fu;
  ST8(R(4)+R(0),R(6));
L8c06fa36:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06fa80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=R(5);
  R(5)=0x8c0c76fcu;
  R(12)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06fa9e;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c06faa0; }
L8c06fa9e:;
  ST32(R(15),R(12));
L8c06faa0:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(2)=LD32(R(13)+4); if(k) goto L8c06faae; }
  { R(14)=0x0u; goto L8c06fab2; }
L8c06faae:;
  R(14)=LD32(R(15));
  R(14)=LD32(R(14)+4);
L8c06fab2:;
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c06fabcu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=LD32(R(15)+8);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x8u;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c06faceu; R(4)=R(12); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  R(5)=R(0);
  { uint32_t k=c->t; R(7)=LD32(R(15)+8); if(k) goto L8c06faec; }
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06faec;
  R(4)=LD32(R(14)+4);
  R(0)=0x26u;
  R(6)=LD32(R(15)+4);
  ST8(R(4)+R(0),R(6));
  R(0)=0x27u;
  R(4)=LD32(R(14)+4);
  R(6)=R(7);
  ST8(R(4)+R(0),R(6));
L8c06faec:;
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06fafa(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06fb0au; R(6)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c03ad4eu;
  ST32(R(15),R(0));
  R(0)=0x4u;
  { c->pr=0x8c06fb14u; fp_ld(c,4,R(0)+R(15)); f_8c03ad4e(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06fb40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(3)=0x1c4u;
  ST32(R(15),R(5));
  R(4)=LD32(R(4));
  c->t=R(4)==R(3);
  if(!c->t) goto L8c06fb5c;
  R(1)=0x8c03ad54u;
  { c->pr=0x8c06fb58u;  f_8c03ad54(c); }
  {  goto L8c06fb62; }
L8c06fb5c:;
  R(1)=0x8c03adc0u;
  { c->pr=0x8c06fb62u;  f_8c03adc0(c); }
L8c06fb62:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06fb6c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x8u;
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06fb86u; R(5)=R(14); sh4_call(c,tg); }
  R(3)=0x1c7u;
  ST32(R(15)+4,R(0));
  R(2)=LD32(R(15));
  R(4)=LD32(R(15)+8);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c06fb98;
  R(2)=0x8c05bd80u;
  { c->pr=0x8c06fb98u;  f_8c05bd80(c); }
L8c06fb98:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06fba2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06fbb2u; R(6)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c0c5ad0u;
  R(5)=R(0);
  R(4)=LD32(R(15)+4);
  ST32(R(3),R(4));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c06fc00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(11)=R(5);
  R(11)+=0xfffffff4u;
  R(10)=0x0u;
  R(12)=R(5);
  ST32(R(15),R(4));
  R(14)=R(6);
  R(11)=LD32(R(11));
  R(0)=R(11);
  c->t=(int32_t)R(0)==4;
  { uint32_t k=!c->t; R(13)=0x6u; if(k) goto L8c06fc2a; }
  ST32(R(14),R(10));
  { ST32(R(14)+12,R(13)); goto L8c06fc62; }
L8c06fc2a:;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06fc34u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=R(11);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06fc42;
  R(0)=R(11);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c06fc62;
L8c06fc42:;
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c06fc4e; }
  { fp_ld(c,3,R(14)); goto L8c06fc54; }
L8c06fc4e:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
L8c06fc54:;
  fp_cmp(c,0,3,2);
  if(!c->t) goto L8c06fc62;
  R(2)=0x8c072ff8u;
  { c->pr=0x8c06fc5eu; R(4)=R(12); f_8c072ff8(c); }
  {  goto L8c06fd6c; }
L8c06fc62:;
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c06fc6eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x8c0722c2u;
  R(5)=R(15);
  R(12)=R(0);
  R(5)+=0x4u;
  { c->pr=0x8c06fc7au; R(4)=R(14); f_8c0722c2(c); }
  R(4)=R(0);
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=R(11);
  R(5)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(6)=0x8u; if(k) goto L8c06fc9e; }
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06fcb4;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06fcb4;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06fccc;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06fd0c;
  {  goto L8c06fd66; }
L8c06fc9e:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06fcaa;
  fp_ld(c,3,R(14));
  { fp_arith(c,0,3,4); goto L8c06fd4c; }
L8c06fcaa:;
  R(2)=LD32(R(14));
  R(5)+=R(2);
  ST32(R(14),R(5));
  { ST32(R(14)+12,R(13)); goto L8c06fd6a; }
L8c06fcb4:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06fcc2;
  fp_ld(c,3,R(14));
  fp_arith(c,1,3,4);
  {  goto L8c06fd4c; }
L8c06fcc2:;
  R(2)=LD32(R(14));
  R(2)-=R(5);
  ST32(R(14),R(2));
  { ST32(R(14)+12,R(13)); goto L8c06fd6a; }
L8c06fccc:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06fd00;
  fp_ld(c,3,R(14));
  fp_arith(c,2,3,4);
  {  goto L8c06fd4c; }
L8c06fd00:;
  R(2)=LD32(R(14));
  c->macl=R(2)*R(5);
  R(5)=c->macl;
  ST32(R(14),R(5));
  { ST32(R(14)+12,R(13)); goto L8c06fd6a; }
L8c06fd0c:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06fd38;
  R(0)=0x8c06fde0u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0));
  c->fr[1]=0x00000000u;
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c06fd28;
  fp_mov(c,2,3);
  fp_mov(c,3,4);
  { fp_arith(c,0,3,2); goto L8c06fd30; }
L8c06fd28:;
  fp_mov(c,0,4);
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  fp_arith(c,0,3,1);
L8c06fd30:;
  R(0)=0x8c06fde4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c06fd42;
L8c06fd38:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c06fd60;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c06fd60;
L8c06fd42:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06fd52;
  fp_ld(c,3,R(14));
  fp_arith(c,3,3,4);
L8c06fd4c:;
  fp_st(c,3,R(14));
  { ST32(R(14)+12,R(6)); goto L8c06fd6a; }
L8c06fd52:;
  R(2)=0x8c067940u;
  R(1)=LD32(R(14));
  { c->pr=0x8c06fd5au; R(0)=R(5); f_8c067940(c); }
  ST32(R(14),R(0));
  { ST32(R(14)+12,R(13)); goto L8c06fd6a; }
L8c06fd60:;
  ST32(R(14),R(10));
  { ST32(R(14)+12,R(13)); goto L8c06fd6a; }
L8c06fd66:;
  ST32(R(14),R(10));
  ST32(R(14)+12,R(13));
L8c06fd6a:;
  R(0)=R(12);
L8c06fd6c:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06fd00(SH4Ctx *c) {
  R(2)=LD32(R(14));
  c->macl=R(2)*R(5);
  R(5)=c->macl;
  ST32(R(14),R(5));
  { ST32(R(14)+12,R(13)); goto L8c06fd6a; }
L8c06fd6a:;
  R(0)=R(12);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06fd7c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(14)=R(5);
  R(12)=R(14);
  R(12)+=0xfffffff4u;
  R(5)=R(14);
  ST32(R(15)+4,R(4));
  R(11)=0x0u;
  ST32(R(15),R(6));
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(6)+=0x18u;
  R(12)=LD32(R(12));
  c->fr[15]=0x3F800000u;
  { uint32_t tg=R(13); c->pr=0x8c06fda6u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=R(12);
  c->t=(int32_t)R(0)==20;
  R(14)=R(15);
  { uint32_t k=c->t; R(14)+=0x18u; if(k) goto L8c06fe08; }
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c06fdbeu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=R(12);
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c06fdcc;
  R(0)=R(12);
  c->t=(int32_t)R(0)==17;
  if(!c->t) goto L8c06fdd2;
L8c06fdcc:;
  R(11)=R(15);
  { R(11)+=0x8u; goto L8c06fe08; }
L8c06fdd2:;
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06fe00;
  R(0)=0x8u;
  { fp_ld(c,15,R(0)+R(15)); goto L8c06fe08; }
L8c06fe00:;
  R(3)=LD32(R(15)+8);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06fe08:;
  R(4)=LD32(R(15));
  R(0)=R(12);
  R(2)=0x15u;
  c->t=(int32_t)R(0)==16;
  R(3)=R(4);
  ST32(R(3)+12,R(2));
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c06fe2c; }
  c->t=(int32_t)R(0)==17;
  if(c->t) goto L8c06fe38;
  c->t=(int32_t)R(0)==18;
  if(c->t) goto L8c06fe44;
  c->t=(int32_t)R(0)==19;
  if(c->t) goto L8c06fe60;
  c->t=(int32_t)R(0)==20;
  if(c->t) goto L8c06fea0;
  {  goto L8c06feba; }
L8c06fe2c:;
  R(3)=0x8c05e5f4u;
  R(6)=R(11);
  { c->pr=0x8c06fe34u; R(5)=R(14); f_8c05e5f4(c); }
  {  goto L8c06fec4; }
L8c06fe38:;
  R(2)=0x8c05e612u;
  R(6)=R(11);
  { c->pr=0x8c06fe40u; R(5)=R(14); f_8c05e612(c); }
  {  goto L8c06fec4; }
L8c06fe44:;
  fp_ld(c,3,R(14));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,15,3);
  { fp_st(c,15,R(0)+R(4)); goto L8c06fec4; }
L8c06fe60:;
  R(0)=0x8c06fee8u;
  fp_mov(c,5,15);
  fp_ld(c,3,R(0));
  c->fr[2]=0x00000000u;
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c06fe72;
  { fp_mov(c,3,5); goto L8c06fe76; }
L8c06fe72:;
  fp_mov(c,3,2);
  fp_arith(c,1,3,15);
L8c06fe76:;
  R(0)=0x8c06feecu;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06fe94;
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_arith(c,3,3,15);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,3,2,15);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,3,3,15); goto L8c06feb6; }
L8c06fe94:;
  R(0)=0x4u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,4,R(0)+R(4)); goto L8c06fec4; }
L8c06fea0:;
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_unary(c,0,3);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_unary(c,0,3);
L8c06feb6:;
  { fp_st(c,3,R(0)+R(4)); goto L8c06fec4; }
L8c06feba:;
  R(0)=0x4u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
L8c06fec4:;
  R(0)=R(13);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06fe00(SH4Ctx *c) {
  R(3)=LD32(R(15)+8);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
  R(4)=LD32(R(15));
  R(0)=R(12);
  R(2)=0x15u;
  c->t=(int32_t)R(0)==16;
  R(3)=R(4);
  ST32(R(3)+12,R(2));
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c06fe2c; }
  c->t=(int32_t)R(0)==17;
  if(c->t) goto L8c06fe38;
  c->t=(int32_t)R(0)==18;
  if(c->t) goto L8c06fe44;
  c->t=(int32_t)R(0)==19;
  if(c->t) goto L8c06fe60;
  c->t=(int32_t)R(0)==20;
  if(c->t) goto L8c06fea0;
  {  goto L8c06feba; }
L8c06fe2c:;
  R(3)=0x8c05e5f4u;
  R(6)=R(11);
  { c->pr=0x8c06fe34u; R(5)=R(14); f_8c05e5f4(c); }
  {  goto L8c06fec4; }
L8c06fe38:;
  R(2)=0x8c05e612u;
  R(6)=R(11);
  { c->pr=0x8c06fe40u; R(5)=R(14); f_8c05e612(c); }
  {  goto L8c06fec4; }
L8c06fe44:;
  fp_ld(c,3,R(14));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,15,3);
  { fp_st(c,15,R(0)+R(4)); goto L8c06fec4; }
L8c06fe60:;
  R(0)=0x8c06fee8u;
  fp_mov(c,5,15);
  fp_ld(c,3,R(0));
  c->fr[2]=0x00000000u;
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c06fe72;
  { fp_mov(c,3,5); goto L8c06fe76; }
L8c06fe72:;
  fp_mov(c,3,2);
  fp_arith(c,1,3,15);
L8c06fe76:;
  R(0)=0x8c06feecu;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06fe94;
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_arith(c,3,3,15);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,3,2,15);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,3,3,15); goto L8c06feb6; }
L8c06fe94:;
  R(0)=0x4u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,4,R(0)+R(4)); goto L8c06fec4; }
L8c06fea0:;
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_unary(c,0,3);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_unary(c,0,3);
L8c06feb6:;
  { fp_st(c,3,R(0)+R(4)); goto L8c06fec4; }
L8c06feba:;
  R(0)=0x4u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
L8c06fec4:;
  R(0)=R(13);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ff00(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06ff14u; R(5)=R(3); sh4_call(c,tg); }
  R(4)=LD32(R(15)+8);
  R(5)=R(0);
  R(3)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  ST32(R(3),R(4));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c06ff28(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09dcc0u;
  { c->pr=0x8c06ff30u;  f_8c09dcc0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06ff40;
  R(3)=0x8c074080u;
  R(4)=0x22u;
  R(5)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c074080(c); return; } }
L8c06ff40:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06ff46(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09dc0au;
  { c->pr=0x8c06ff4eu;  f_8c09dc0a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06ff5e;
  R(3)=0x8c074080u;
  R(4)=0x22u;
  R(5)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c074080(c); return; } }
L8c06ff5e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06ff64(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(6));
  R(6)=LD32(R(6)+4);
  R(3)=0x8c07275cu;
  R(6)=LD32(R(6)+12);
  { c->pr=0x8c06ff74u; R(6)=LD32(R(6)); f_8c07275c(c); }
  R(0)=R(0)&0xFF;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { c->t=(R(0)&R(0))==0; return; }
}
void f_8c06ff7e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(6));
  R(6)=LD32(R(6)+4);
  R(3)=0x8c0729f6u;
  R(6)=LD32(R(6)+12);
  { c->pr=0x8c06ff8eu; R(6)=LD32(R(6)); f_8c0729f6(c); }
  R(0)=R(0)&0xFF;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { c->t=(R(0)&R(0))==0; return; }
}
void f_8c06ff98(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(5);
  R(13)=R(4);
  R(12)=R(6);
  ST32(R(15),R(13));
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c06ffc0; }
  R(14)+=0xcu;
  R(6)=R(15);
  R(5)=R(14);
  { c->pr=0x8c06ffbeu; R(4)=R(13); f_8c06ff00(c); }
  R(14)=R(0);
L8c06ffc0:;
  R(0)=LD32(R(14));
  R(14)+=0xcu;
  R(5)=R(14);
  R(6)=R(12);
  ST8(R(15)+4,R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06ffd0u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(7)=R(12);
  R(6)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=LD32(R(12));
  { c->pr=0x8c06ffdeu; R(4)=R(0); f_8c06ff64(c); }
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ffec(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(6);
  ST32(R(15)+4,R(4));
  { c->pr=0x8c06fffcu; R(6)=R(15); f_8c06ff00(c); }
  R(14)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==11;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c070040; }
  R(6)=LD32(R(15));
  R(7)=R(13);
  R(4)=LD32(R(14));
  R(14)+=0xcu;
  { c->pr=0x8c070014u; R(5)=0x0u; f_8c06ff64(c); }
  {  goto L8c07006a; }
L8c070040:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c070054;
  R(4)=LD32(R(14));
  R(6)=R(13);
  R(14)+=0xcu;
  { c->pr=0x8c070050u; R(5)=LD32(R(15)); f_8c06ff28(c); }
  {  goto L8c07006a; }
L8c070054:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c07006a;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==25;
  if(!c->t) goto L8c07006a;
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c070068u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(14)=R(0);
L8c07006a:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070040(SH4Ctx *c) {
  R(0)=R(4);
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c070054;
  R(4)=LD32(R(14));
  R(6)=R(13);
  R(14)+=0xcu;
  { c->pr=0x8c070050u; R(5)=LD32(R(15)); f_8c06ff28(c); }
  {  goto L8c07006a; }
L8c070054:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c07006a;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==25;
  if(!c->t) goto L8c07006a;
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c070068u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(14)=R(0);
L8c07006a:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070076(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(14)=R(6);
  R(6)=R(14);
  ST32(R(15),R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c070092u; R(5)=R(13); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c0700c4;
  R(0)=LD32(R(15));
  R(4)=R(14);
  c->t=(int32_t)R(0)==13;
  { uint32_t k=c->t; R(6)=0x8u; if(k) goto L8c0700b0; }
  c->t=(int32_t)R(0)==14;
  if(c->t) goto L8c0700b4;
  c->t=(int32_t)R(0)==15;
  if(c->t) goto L8c0700bc;
  {  goto L8c0700c4; }
L8c0700b0:;
  { fp_ld(c,3,R(4)); goto L8c0700c0; }
L8c0700b4:;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  { fp_st(c,2,R(14)); goto L8c0700c2; }
L8c0700bc:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
L8c0700c0:;
  fp_st(c,3,R(14));
L8c0700c2:;
  ST32(R(14)+12,R(6));
L8c0700c4:;
  R(0)=R(5);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0700d0(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  R(0)=R(6);
  ST32(R(15),R(4));
  ST8(R(15)+4,R(0));
  R(0)=R(7);
  ST8(R(15)+8,R(0));
  R(0)=R(5);
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c0700f2;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(6)=LD32(R(15));
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(7)=LD32(R(15)+16);
  R(4)=R(0);
  { R(15)+=0xcu; { f_8c06ff64(c); return; } }
L8c0700f2:;
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c070100;
  R(4)=LD32(R(15)+12);
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+16);
  { R(15)+=0xcu; { f_8c06ff28(c); return; } }
L8c070100:;
  { R(15)+=0xcu; return; }
}
void f_8c070104(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  R(0)=R(6);
  ST32(R(15),R(4));
  ST8(R(15)+4,R(0));
  R(0)=R(7);
  ST8(R(15)+8,R(0));
  R(0)=R(5);
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c070126;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(6)=LD32(R(15));
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(7)=LD32(R(15)+16);
  R(4)=R(0);
  { R(15)+=0xcu; { f_8c06ff7e(c); return; } }
L8c070126:;
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c070134;
  R(4)=LD32(R(15)+12);
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+16);
  { R(15)+=0xcu; { f_8c06ff46(c); return; } }
L8c070134:;
  { R(15)+=0xcu; return; }
}
void f_8c070138(SH4Ctx *c) {
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c07014a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c07014e;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c070152;
  {  goto L8c070156; }
L8c07014a:;
  { fp_st(c,4,R(5)); goto L8c070156; }
L8c07014e:;
  { R(0)=0x4u; goto L8c070154; }
L8c070152:;
  R(0)=0x8u;
L8c070154:;
  fp_st(c,4,R(0)+R(5));
L8c070156:;
  {  return; }
}
void f_8c07015a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  c->fr[5]=0x00000000u;
  R(0)=0x4u;
  R(14)=R(5);
  ST32(R(15),R(5));
  fp_st(c,5,R(14));
  fp_st(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(14));
  { c->pr=0x8c070174u; R(5)=R(14); f_8c070138(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070182(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  R(2)=0xffu;
  R(0)=0x14u;
  R(3)=0x12u;
  R(9)=R(5);
  ST32(R(15)+24,R(3));
  R(3)=0x0u;
  ST8(R(15)+R(0),R(2));
  R(0)=0x10u;
  ST8(R(15)+R(0),R(3));
  R(0)=R(3);
  R(14)=R(0);
  ST8(R(15)+4,R(0));
  R(3)=R(9);
  R(3)+=0xfffffff4u;
  R(13)=R(4);
  ST32(R(15)+8,R(13));
  R(2)=LD32(R(3));
  ST32(R(15),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(9)+11);
  R(0)=R(0)&0xFF;
  ST32(R(15)+12,R(0));
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==27;
  { uint32_t k=!c->t; R(8)=R(6); if(k) goto L8c0701d4; }
  R(2)=0x8c074120u;
  { c->pr=0x8c0701d0u; R(4)=R(9); f_8c074120(c); }
  R(14)=0xffu;
  R(14)+=R(0);
L8c0701d4:;
  R(0)=LD32(R(15)+12);
  R(11)=0x1u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(12)=0x2u; if(k) goto L8c070282; }
  R(0)=LD32(R(9));
  c->t=(int32_t)R(0)==13;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0701ec; }
  R(0)=R(11);
  { ST8(R(15)+4,R(0)); goto L8c070228; }
L8c0701ec:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==14;
  if(!c->t) goto L8c070220;
  R(0)=R(12);
  { ST8(R(15)+4,R(0)); goto L8c070228; }
L8c070220:;
  c->t=(int32_t)R(0)==15;
  if(!c->t) goto L8c070228;
  R(0)=0x3u;
  ST8(R(15)+4,R(0));
L8c070228:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c070236;
  R(9)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(9)+11);
  R(0)=R(0)&0xFF;
  ST32(R(15)+12,R(0));
L8c070236:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c070282;
  R(0)=LD32(R(9));
  c->t=(int32_t)R(0)==12;
  if(!c->t) goto L8c070258;
  R(5)=R(9);
  R(6)=R(15);
  R(5)+=0xcu;
  R(6)+=0x8u;
  { c->pr=0x8c07024eu; R(4)=R(13); f_8c06ff00(c); }
  R(9)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(9)+11);
  R(0)=R(0)&0xFF;
  { ST32(R(15)+12,R(0)); goto L8c070282; }
L8c070258:;
  R(9)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(9)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c070278; }
  R(0)=LD32(R(9));
  c->t=(int32_t)R(0)==12;
  if(!c->t) goto L8c070278;
  R(5)=R(9);
  R(6)=R(15);
  R(5)+=0xcu;
  R(6)+=0x8u;
  { c->pr=0x8c070276u; R(4)=R(13); f_8c06ff00(c); }
  R(9)=R(0);
L8c070278:;
  R(2)=LD32(R(9));
  R(0)=0x14u;
  R(9)+=0xcu;
  ST8(R(15)+R(0),R(2));
  ST32(R(15)+12,R(12));
L8c070282:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c070290;
  R(2)=LD32(R(9));
  R(0)=0x14u;
  { ST8(R(15)+R(0),R(2)); goto L8c07029a; }
L8c070290:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c07029e;
  R(2)=LD32(R(9));
  ST32(R(15)+24,R(2));
L8c07029a:;
  { R(9)+=0xcu; goto L8c0702c8; }
L8c07029e:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0702c8;
  R(2)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)=R(8);
  { uint32_t tg=R(2); c->pr=0x8c0702aeu; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=LD32(R(8)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0702be;
  fp_ld(c,3,R(8));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c0702c0; }
L8c0702be:;
  R(3)=LD32(R(8));
L8c0702c0:;
  R(2)=0xbu;
  R(0)=0x10u;
  ST8(R(15)+R(0),R(3));
  ST32(R(15)+12,R(2));
L8c0702c8:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c070340;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c070318;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c0702e8u; R(4)=LD32(R(15)+16); f_8c0700d0(c); }
  R(15)+=0x8u;
  R(6)=R(15);
  R(2)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)+=0x2cu;
  { uint32_t tg=R(2); c->pr=0x8c0702f6u; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=LD32(R(15)+56);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(8); if(k) goto L8c070306; }
  R(0)=0x2cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c07030e; }
L8c070306:;
  R(3)=LD32(R(15)+44);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c07030e:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  { c->pr=0x8c070314u; R(4)=R(0); f_8c070138(c); }
  {  goto L8c07070c; }
L8c070318:;
  R(3)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)=R(8);
  { uint32_t tg=R(3); c->pr=0x8c070322u; R(4)=R(13); sh4_call(c,tg); }
  { R(9)=R(0); goto L8c07070c; }
L8c070340:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==27;
  if(!c->t) goto L8c070380;
  R(2)=R(14)&0xFF;
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c070350;
  {  goto L8c070722; }
L8c070350:;
  R(2)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)=R(8);
  { uint32_t tg=R(2); c->pr=0x8c07035au; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=0x10u;
  R(5)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x14u;
  R(6)=LD32(R(15)+8);
  R(7)=R(8);
  { c->pr=0x8c07036au; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c06ff7e(c); }
  R(0)=0x10u;
  R(14)+=0xffffffffu;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=(R(3)&R(3))==0;
  R(2)+=0x1u;
  R(0)=0x10u;
  { uint32_t k=!c->t; ST8(R(15)+R(0),R(2)); if(k) goto L8c070350; }
  {  goto L8c070722; }
L8c070380:;
  R(3)=R(15);
  R(3)+=0x1cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(2)=LD32(R(15)+28);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070398u; R(4)=LD32(R(15)+16); f_8c0700d0(c); }
  R(15)+=0x8u;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==10;
  { uint32_t k=c->t; R(14)=0x6u; if(k) goto L8c0703a8; }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0703c4;
L8c0703a8:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0703b4;
  ST32(R(15)+44,R(11));
  { ST32(R(15)+56,R(14)); goto L8c0703f6; }
L8c0703b4:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(15);
  c->fr[4]=0x3F800000u;
  R(5)+=0x2cu;
  { c->pr=0x8c0703c0u; R(4)=R(0); f_8c07015a(c); }
  {  goto L8c0703f6; }
L8c0703c4:;
  R(6)=R(15);
  R(3)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c0703d0u; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0703f6;
  R(0)=LD32(R(15)+56);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0703e4;
  R(0)=0x2cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0703ec; }
L8c0703e4:;
  R(3)=LD32(R(15)+44);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0703ec:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(15);
  R(5)+=0x2cu;
  { c->pr=0x8c0703f6u; R(4)=R(0); f_8c07015a(c); }
L8c0703f6:;
  R(0)=LD32(R(15)+40);
  R(13)=0x8u;
  c->fr[14]=0x00000000u;
  c->t=(int32_t)R(0)==21;
  R(4)=c->t;
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(15)+56); if(k) goto L8c070460; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==21;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c07046c; }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==21;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==22;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==23;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c070434;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c070438;
L8c070434:;
  { R(4)=R(11); goto L8c07046c; }
L8c070438:;
  R(0)=0x2cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  { fp_st(c,14,R(0)+R(15)); goto L8c07046c; }
L8c070460:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c07046c;
  R(0)=0x2cu;
  fp_st(c,14,R(0)+R(15));
  ST32(R(15)+56,R(13));
L8c07046c:;
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c070476;
  {  goto L8c070620; }
L8c070476:;
  R(11)=0x8c05e6eau;
  R(2)=0x15u;
  R(0)=R(4)&0xFF;
  R(13)=R(15);
  c->t=(int32_t)R(0)==1;
  fp_mov(c,15,14);
  R(12)=0x0u;
  ST32(R(8)+12,R(2));
  R(14)=R(8);
  { uint32_t k=!c->t; R(13)+=0x1cu; if(k) goto L8c0704aa; }
  R(0)=LD32(R(15)+56);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c07049a; }
  R(0)=0x2cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0704a2; }
L8c07049a:;
  R(3)=LD32(R(15)+44);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0704a2:;
  { uint32_t tg=R(11); c->pr=0x8c0704a6u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c0704ae; }
L8c0704aa:;
  R(12)=R(15);
  R(12)+=0x2cu;
L8c0704ae:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(10)=R(0);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==21;
  { uint32_t k=c->t; R(10)=R(10)&0xFF; if(k) goto L8c0704f2; }
  c->t=(int32_t)R(0)==22;
  if(c->t) goto L8c0704f6;
  c->t=(int32_t)R(0)==23;
  if(c->t) goto L8c0704fa;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0704fe;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0704ce;
  {  goto L8c070580; }
L8c0704ce:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0704d6;
  {  goto L8c0705d8; }
L8c0704d6:;
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0704de;
  {  goto L8c0705d8; }
L8c0704de:;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0704e6;
  {  goto L8c0705e6; }
L8c0704e6:;
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0704ee;
  {  goto L8c0705e6; }
L8c0704ee:;
  {  goto L8c0705f4; }
L8c0704f2:;
  { fp_st(c,15,R(14)); goto L8c07070c; }
L8c0704f6:;
  { R(0)=0x4u; goto L8c07051c; }
L8c0704fa:;
  { R(0)=0x8u; goto L8c07051c; }
L8c0704fe:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c070520;
  fp_ld(c,3,R(13));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,15,3);
L8c07051c:;
  { fp_st(c,15,R(0)+R(14)); goto L8c07070c; }
L8c070520:;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c070526u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c070560;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c070568;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c070572;
  {  goto L8c07070c; }
L8c070560:;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(12));
  { fp_arith(c,2,3,4); goto L8c0705bc; }
L8c070568:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  { fp_arith(c,2,3,4); goto L8c07057c; }
L8c070572:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x8u;
  fp_arith(c,2,3,4);
L8c07057c:;
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c070580:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c07059e;
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  fp_arith(c,3,3,15);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,3,2,15);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,3,3,15);
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c07059e:;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c0705a4u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0705b6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0705c0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0705ca;
  {  goto L8c07070c; }
L8c0705b6:;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(12));
  fp_arith(c,3,3,4);
L8c0705bc:;
  { fp_st(c,3,R(14)); goto L8c07070c; }
L8c0705c0:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  { fp_arith(c,3,3,4); goto L8c0705d4; }
L8c0705ca:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x8u;
  fp_arith(c,3,3,4);
L8c0705d4:;
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c0705d8:;
  R(3)=0x8c05e5f4u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0705e2u; R(4)=R(14); f_8c05e5f4(c); }
  {  goto L8c07070c; }
L8c0705e6:;
  R(3)=0x8c05e612u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0705f0u; R(4)=R(14); f_8c05e612(c); }
  {  goto L8c07070c; }
L8c0705f4:;
  R(0)=0x4u;
  fp_st(c,14,R(14));
  fp_st(c,14,R(0)+R(14));
  R(0)=0x8u;
  { fp_st(c,14,R(0)+R(14)); goto L8c07070c; }
L8c070620:;
  R(3)=0x8c0722c2u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c07062cu; R(4)+=0x2cu; f_8c0722c2(c); }
  R(4)=R(0);
  R(0)=0x1cu;
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(14));
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=LD32(R(15));
  R(6)=LD32(R(15)+28);
  R(5)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c070682;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c070696;
  {  goto L8c07070c; }
L8c07065e:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070668;
  { fp_arith(c,0,5,4); goto L8c0706d4; }
L8c070668:;
  R(6)+=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070670:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07067a;
  { fp_arith(c,1,5,4); goto L8c0706d4; }
L8c07067a:;
  R(6)-=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070682:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07068c;
  { fp_arith(c,2,5,4); goto L8c0706d4; }
L8c07068c:;
  c->macl=R(6)*R(5);
  R(6)=c->macl;
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070696:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0706c2;
  R(0)=0x8c0706e4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0));
  c->fr[1]=0x00000000u;
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c0706b2;
  fp_mov(c,2,3);
  fp_mov(c,3,4);
  { fp_arith(c,0,3,2); goto L8c0706ba; }
L8c0706b2:;
  fp_mov(c,0,4);
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  fp_arith(c,0,3,1);
L8c0706ba:;
  R(0)=0x8c0706e8u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0706cc;
L8c0706c2:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c07070c;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07070c;
L8c0706cc:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070700;
  fp_arith(c,3,5,4);
L8c0706d4:;
  fp_st(c,5,R(8));
  { ST32(R(8)+12,R(13)); goto L8c07070c; }
L8c070700:;
  R(2)=0x8c067940u;
  R(1)=R(6);
  { c->pr=0x8c070708u; R(0)=R(5); f_8c067940(c); }
  ST32(R(8),R(0));
  ST32(R(8)+12,R(14));
L8c07070c:;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070720u; R(4)=LD32(R(15)+16); f_8c070104(c); }
  R(15)+=0x8u;
L8c070722:;
  R(3)=0x14u;
  R(0)=R(9);
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(3));
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
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
void f_8c070220(SH4Ctx *c) {
  c->t=(int32_t)R(0)==15;
  if(!c->t) goto L8c070228;
  R(0)=0x3u;
  ST8(R(15)+4,R(0));
L8c070228:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c070236;
  R(9)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(9)+11);
  R(0)=R(0)&0xFF;
  ST32(R(15)+12,R(0));
L8c070236:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c070282;
  R(0)=LD32(R(9));
  c->t=(int32_t)R(0)==12;
  if(!c->t) goto L8c070258;
  R(5)=R(9);
  R(6)=R(15);
  R(5)+=0xcu;
  R(6)+=0x8u;
  { c->pr=0x8c07024eu; R(4)=R(13); f_8c06ff00(c); }
  R(9)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(9)+11);
  R(0)=R(0)&0xFF;
  { ST32(R(15)+12,R(0)); goto L8c070282; }
L8c070258:;
  R(9)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(9)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c070278; }
  R(0)=LD32(R(9));
  c->t=(int32_t)R(0)==12;
  if(!c->t) goto L8c070278;
  R(5)=R(9);
  R(6)=R(15);
  R(5)+=0xcu;
  R(6)+=0x8u;
  { c->pr=0x8c070276u; R(4)=R(13); f_8c06ff00(c); }
  R(9)=R(0);
L8c070278:;
  R(2)=LD32(R(9));
  R(0)=0x14u;
  R(9)+=0xcu;
  ST8(R(15)+R(0),R(2));
  ST32(R(15)+12,R(12));
L8c070282:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c070290;
  R(2)=LD32(R(9));
  R(0)=0x14u;
  { ST8(R(15)+R(0),R(2)); goto L8c07029a; }
L8c070290:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c07029e;
  R(2)=LD32(R(9));
  ST32(R(15)+24,R(2));
L8c07029a:;
  { R(9)+=0xcu; goto L8c0702c8; }
L8c07029e:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0702c8;
  R(2)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)=R(8);
  { uint32_t tg=R(2); c->pr=0x8c0702aeu; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=LD32(R(8)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0702be;
  fp_ld(c,3,R(8));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c0702c0; }
L8c0702be:;
  R(3)=LD32(R(8));
L8c0702c0:;
  R(2)=0xbu;
  R(0)=0x10u;
  ST8(R(15)+R(0),R(3));
  ST32(R(15)+12,R(2));
L8c0702c8:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c070340;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c070318;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c0702e8u; R(4)=LD32(R(15)+16); f_8c0700d0(c); }
  R(15)+=0x8u;
  R(6)=R(15);
  R(2)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)+=0x2cu;
  { uint32_t tg=R(2); c->pr=0x8c0702f6u; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=LD32(R(15)+56);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(8); if(k) goto L8c070306; }
  R(0)=0x2cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c07030e; }
L8c070306:;
  R(3)=LD32(R(15)+44);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c07030e:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  { c->pr=0x8c070314u; R(4)=R(0); f_8c070138(c); }
  {  goto L8c07070c; }
L8c070318:;
  R(3)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)=R(8);
  { uint32_t tg=R(3); c->pr=0x8c070322u; R(4)=R(13); sh4_call(c,tg); }
  { R(9)=R(0); goto L8c07070c; }
L8c070340:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==27;
  if(!c->t) goto L8c070380;
  R(2)=R(14)&0xFF;
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c070350;
  {  goto L8c070722; }
L8c070350:;
  R(2)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)=R(8);
  { uint32_t tg=R(2); c->pr=0x8c07035au; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=0x10u;
  R(5)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x14u;
  R(6)=LD32(R(15)+8);
  R(7)=R(8);
  { c->pr=0x8c07036au; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c06ff7e(c); }
  R(0)=0x10u;
  R(14)+=0xffffffffu;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=(R(3)&R(3))==0;
  R(2)+=0x1u;
  R(0)=0x10u;
  { uint32_t k=!c->t; ST8(R(15)+R(0),R(2)); if(k) goto L8c070350; }
  {  goto L8c070722; }
L8c070380:;
  R(3)=R(15);
  R(3)+=0x1cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(2)=LD32(R(15)+28);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070398u; R(4)=LD32(R(15)+16); f_8c0700d0(c); }
  R(15)+=0x8u;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==10;
  { uint32_t k=c->t; R(14)=0x6u; if(k) goto L8c0703a8; }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0703c4;
L8c0703a8:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0703b4;
  ST32(R(15)+44,R(11));
  { ST32(R(15)+56,R(14)); goto L8c0703f6; }
L8c0703b4:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(15);
  c->fr[4]=0x3F800000u;
  R(5)+=0x2cu;
  { c->pr=0x8c0703c0u; R(4)=R(0); f_8c07015a(c); }
  {  goto L8c0703f6; }
L8c0703c4:;
  R(6)=R(15);
  R(3)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c0703d0u; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0703f6;
  R(0)=LD32(R(15)+56);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0703e4;
  R(0)=0x2cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0703ec; }
L8c0703e4:;
  R(3)=LD32(R(15)+44);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0703ec:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(15);
  R(5)+=0x2cu;
  { c->pr=0x8c0703f6u; R(4)=R(0); f_8c07015a(c); }
L8c0703f6:;
  R(0)=LD32(R(15)+40);
  R(13)=0x8u;
  c->fr[14]=0x00000000u;
  c->t=(int32_t)R(0)==21;
  R(4)=c->t;
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(15)+56); if(k) goto L8c070460; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==21;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c07046c; }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==21;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==22;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==23;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c070434;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c070438;
L8c070434:;
  { R(4)=R(11); goto L8c07046c; }
L8c070438:;
  R(0)=0x2cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  { fp_st(c,14,R(0)+R(15)); goto L8c07046c; }
L8c070460:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c07046c;
  R(0)=0x2cu;
  fp_st(c,14,R(0)+R(15));
  ST32(R(15)+56,R(13));
L8c07046c:;
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c070476;
  {  goto L8c070620; }
L8c070476:;
  R(11)=0x8c05e6eau;
  R(2)=0x15u;
  R(0)=R(4)&0xFF;
  R(13)=R(15);
  c->t=(int32_t)R(0)==1;
  fp_mov(c,15,14);
  R(12)=0x0u;
  ST32(R(8)+12,R(2));
  R(14)=R(8);
  { uint32_t k=!c->t; R(13)+=0x1cu; if(k) goto L8c0704aa; }
  R(0)=LD32(R(15)+56);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c07049a; }
  R(0)=0x2cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0704a2; }
L8c07049a:;
  R(3)=LD32(R(15)+44);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0704a2:;
  { uint32_t tg=R(11); c->pr=0x8c0704a6u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c0704ae; }
L8c0704aa:;
  R(12)=R(15);
  R(12)+=0x2cu;
L8c0704ae:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(10)=R(0);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==21;
  { uint32_t k=c->t; R(10)=R(10)&0xFF; if(k) goto L8c0704f2; }
  c->t=(int32_t)R(0)==22;
  if(c->t) goto L8c0704f6;
  c->t=(int32_t)R(0)==23;
  if(c->t) goto L8c0704fa;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0704fe;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0704ce;
  {  goto L8c070580; }
L8c0704ce:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0704d6;
  {  goto L8c0705d8; }
L8c0704d6:;
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0704de;
  {  goto L8c0705d8; }
L8c0704de:;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0704e6;
  {  goto L8c0705e6; }
L8c0704e6:;
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0704ee;
  {  goto L8c0705e6; }
L8c0704ee:;
  {  goto L8c0705f4; }
L8c0704f2:;
  { fp_st(c,15,R(14)); goto L8c07070c; }
L8c0704f6:;
  { R(0)=0x4u; goto L8c07051c; }
L8c0704fa:;
  { R(0)=0x8u; goto L8c07051c; }
L8c0704fe:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c070520;
  fp_ld(c,3,R(13));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,15,3);
L8c07051c:;
  { fp_st(c,15,R(0)+R(14)); goto L8c07070c; }
L8c070520:;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c070526u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c070560;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c070568;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c070572;
  {  goto L8c07070c; }
L8c070560:;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(12));
  { fp_arith(c,2,3,4); goto L8c0705bc; }
L8c070568:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  { fp_arith(c,2,3,4); goto L8c07057c; }
L8c070572:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x8u;
  fp_arith(c,2,3,4);
L8c07057c:;
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c070580:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c07059e;
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  fp_arith(c,3,3,15);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,3,2,15);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,3,3,15);
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c07059e:;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c0705a4u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0705b6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0705c0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0705ca;
  {  goto L8c07070c; }
L8c0705b6:;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(12));
  fp_arith(c,3,3,4);
L8c0705bc:;
  { fp_st(c,3,R(14)); goto L8c07070c; }
L8c0705c0:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  { fp_arith(c,3,3,4); goto L8c0705d4; }
L8c0705ca:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x8u;
  fp_arith(c,3,3,4);
L8c0705d4:;
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c0705d8:;
  R(3)=0x8c05e5f4u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0705e2u; R(4)=R(14); f_8c05e5f4(c); }
  {  goto L8c07070c; }
L8c0705e6:;
  R(3)=0x8c05e612u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0705f0u; R(4)=R(14); f_8c05e612(c); }
  {  goto L8c07070c; }
L8c0705f4:;
  R(0)=0x4u;
  fp_st(c,14,R(14));
  fp_st(c,14,R(0)+R(14));
  R(0)=0x8u;
  { fp_st(c,14,R(0)+R(14)); goto L8c07070c; }
L8c070620:;
  R(3)=0x8c0722c2u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c07062cu; R(4)+=0x2cu; f_8c0722c2(c); }
  R(4)=R(0);
  R(0)=0x1cu;
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(14));
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=LD32(R(15));
  R(6)=LD32(R(15)+28);
  R(5)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c070682;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c070696;
  {  goto L8c07070c; }
L8c07065e:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070668;
  { fp_arith(c,0,5,4); goto L8c0706d4; }
L8c070668:;
  R(6)+=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070670:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07067a;
  { fp_arith(c,1,5,4); goto L8c0706d4; }
L8c07067a:;
  R(6)-=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070682:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07068c;
  { fp_arith(c,2,5,4); goto L8c0706d4; }
L8c07068c:;
  c->macl=R(6)*R(5);
  R(6)=c->macl;
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070696:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0706c2;
  R(0)=0x8c0706e4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0));
  c->fr[1]=0x00000000u;
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c0706b2;
  fp_mov(c,2,3);
  fp_mov(c,3,4);
  { fp_arith(c,0,3,2); goto L8c0706ba; }
L8c0706b2:;
  fp_mov(c,0,4);
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  fp_arith(c,0,3,1);
L8c0706ba:;
  R(0)=0x8c0706e8u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0706cc;
L8c0706c2:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c07070c;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07070c;
L8c0706cc:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070700;
  fp_arith(c,3,5,4);
L8c0706d4:;
  fp_st(c,5,R(8));
  { ST32(R(8)+12,R(13)); goto L8c07070c; }
L8c070700:;
  R(2)=0x8c067940u;
  R(1)=R(6);
  { c->pr=0x8c070708u; R(0)=R(5); f_8c067940(c); }
  ST32(R(8),R(0));
  ST32(R(8)+12,R(14));
L8c07070c:;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070720u; R(4)=LD32(R(15)+16); f_8c070104(c); }
  R(15)+=0x8u;
L8c070722:;
  R(3)=0x14u;
  R(0)=R(9);
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(3));
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
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
void f_8c070340(SH4Ctx *c) {
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==27;
  if(!c->t) goto L8c070380;
  R(2)=R(14)&0xFF;
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c070350;
  {  goto L8c070722; }
L8c070350:;
  R(2)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)=R(8);
  { uint32_t tg=R(2); c->pr=0x8c07035au; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=0x10u;
  R(5)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x14u;
  R(6)=LD32(R(15)+8);
  R(7)=R(8);
  { c->pr=0x8c07036au; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c06ff7e(c); }
  R(0)=0x10u;
  R(14)+=0xffffffffu;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=(R(3)&R(3))==0;
  R(2)+=0x1u;
  R(0)=0x10u;
  { uint32_t k=!c->t; ST8(R(15)+R(0),R(2)); if(k) goto L8c070350; }
  {  goto L8c070722; }
L8c070380:;
  R(3)=R(15);
  R(3)+=0x1cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(2)=LD32(R(15)+28);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070398u; R(4)=LD32(R(15)+16); f_8c0700d0(c); }
  R(15)+=0x8u;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==10;
  { uint32_t k=c->t; R(14)=0x6u; if(k) goto L8c0703a8; }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0703c4;
L8c0703a8:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0703b4;
  ST32(R(15)+44,R(11));
  { ST32(R(15)+56,R(14)); goto L8c0703f6; }
L8c0703b4:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(15);
  c->fr[4]=0x3F800000u;
  R(5)+=0x2cu;
  { c->pr=0x8c0703c0u; R(4)=R(0); f_8c07015a(c); }
  {  goto L8c0703f6; }
L8c0703c4:;
  R(6)=R(15);
  R(3)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c0703d0u; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0703f6;
  R(0)=LD32(R(15)+56);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0703e4;
  R(0)=0x2cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0703ec; }
L8c0703e4:;
  R(3)=LD32(R(15)+44);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0703ec:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(15);
  R(5)+=0x2cu;
  { c->pr=0x8c0703f6u; R(4)=R(0); f_8c07015a(c); }
L8c0703f6:;
  R(0)=LD32(R(15)+40);
  R(13)=0x8u;
  c->fr[14]=0x00000000u;
  c->t=(int32_t)R(0)==21;
  R(4)=c->t;
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(15)+56); if(k) goto L8c070460; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==21;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c07046c; }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==21;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==22;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==23;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c070434;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c070434;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c070438;
L8c070434:;
  { R(4)=R(11); goto L8c07046c; }
L8c070438:;
  R(0)=0x2cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  { fp_st(c,14,R(0)+R(15)); goto L8c07046c; }
L8c070460:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c07046c;
  R(0)=0x2cu;
  fp_st(c,14,R(0)+R(15));
  ST32(R(15)+56,R(13));
L8c07046c:;
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c070476;
  {  goto L8c070620; }
L8c070476:;
  R(11)=0x8c05e6eau;
  R(2)=0x15u;
  R(0)=R(4)&0xFF;
  R(13)=R(15);
  c->t=(int32_t)R(0)==1;
  fp_mov(c,15,14);
  R(12)=0x0u;
  ST32(R(8)+12,R(2));
  R(14)=R(8);
  { uint32_t k=!c->t; R(13)+=0x1cu; if(k) goto L8c0704aa; }
  R(0)=LD32(R(15)+56);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c07049a; }
  R(0)=0x2cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0704a2; }
L8c07049a:;
  R(3)=LD32(R(15)+44);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0704a2:;
  { uint32_t tg=R(11); c->pr=0x8c0704a6u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c0704ae; }
L8c0704aa:;
  R(12)=R(15);
  R(12)+=0x2cu;
L8c0704ae:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(10)=R(0);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==21;
  { uint32_t k=c->t; R(10)=R(10)&0xFF; if(k) goto L8c0704f2; }
  c->t=(int32_t)R(0)==22;
  if(c->t) goto L8c0704f6;
  c->t=(int32_t)R(0)==23;
  if(c->t) goto L8c0704fa;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0704fe;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0704ce;
  {  goto L8c070580; }
L8c0704ce:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0704d6;
  {  goto L8c0705d8; }
L8c0704d6:;
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0704de;
  {  goto L8c0705d8; }
L8c0704de:;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0704e6;
  {  goto L8c0705e6; }
L8c0704e6:;
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0704ee;
  {  goto L8c0705e6; }
L8c0704ee:;
  {  goto L8c0705f4; }
L8c0704f2:;
  { fp_st(c,15,R(14)); goto L8c07070c; }
L8c0704f6:;
  { R(0)=0x4u; goto L8c07051c; }
L8c0704fa:;
  { R(0)=0x8u; goto L8c07051c; }
L8c0704fe:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c070520;
  fp_ld(c,3,R(13));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,15,3);
L8c07051c:;
  { fp_st(c,15,R(0)+R(14)); goto L8c07070c; }
L8c070520:;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c070526u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c070560;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c070568;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c070572;
  {  goto L8c07070c; }
L8c070560:;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(12));
  { fp_arith(c,2,3,4); goto L8c0705bc; }
L8c070568:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  { fp_arith(c,2,3,4); goto L8c07057c; }
L8c070572:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x8u;
  fp_arith(c,2,3,4);
L8c07057c:;
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c070580:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c07059e;
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  fp_arith(c,3,3,15);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,3,2,15);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,3,3,15);
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c07059e:;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c0705a4u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0705b6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0705c0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0705ca;
  {  goto L8c07070c; }
L8c0705b6:;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(12));
  fp_arith(c,3,3,4);
L8c0705bc:;
  { fp_st(c,3,R(14)); goto L8c07070c; }
L8c0705c0:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  { fp_arith(c,3,3,4); goto L8c0705d4; }
L8c0705ca:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x8u;
  fp_arith(c,3,3,4);
L8c0705d4:;
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c0705d8:;
  R(3)=0x8c05e5f4u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0705e2u; R(4)=R(14); f_8c05e5f4(c); }
  {  goto L8c07070c; }
L8c0705e6:;
  R(3)=0x8c05e612u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0705f0u; R(4)=R(14); f_8c05e612(c); }
  {  goto L8c07070c; }
L8c0705f4:;
  R(0)=0x4u;
  fp_st(c,14,R(14));
  fp_st(c,14,R(0)+R(14));
  R(0)=0x8u;
  { fp_st(c,14,R(0)+R(14)); goto L8c07070c; }
L8c070620:;
  R(3)=0x8c0722c2u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c07062cu; R(4)+=0x2cu; f_8c0722c2(c); }
  R(4)=R(0);
  R(0)=0x1cu;
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(14));
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=LD32(R(15));
  R(6)=LD32(R(15)+28);
  R(5)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c070682;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c070696;
  {  goto L8c07070c; }
L8c07065e:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070668;
  { fp_arith(c,0,5,4); goto L8c0706d4; }
L8c070668:;
  R(6)+=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070670:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07067a;
  { fp_arith(c,1,5,4); goto L8c0706d4; }
L8c07067a:;
  R(6)-=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070682:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07068c;
  { fp_arith(c,2,5,4); goto L8c0706d4; }
L8c07068c:;
  c->macl=R(6)*R(5);
  R(6)=c->macl;
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070696:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0706c2;
  R(0)=0x8c0706e4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0));
  c->fr[1]=0x00000000u;
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c0706b2;
  fp_mov(c,2,3);
  fp_mov(c,3,4);
  { fp_arith(c,0,3,2); goto L8c0706ba; }
L8c0706b2:;
  fp_mov(c,0,4);
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  fp_arith(c,0,3,1);
L8c0706ba:;
  R(0)=0x8c0706e8u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0706cc;
L8c0706c2:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c07070c;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07070c;
L8c0706cc:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070700;
  fp_arith(c,3,5,4);
L8c0706d4:;
  fp_st(c,5,R(8));
  { ST32(R(8)+12,R(13)); goto L8c07070c; }
L8c070700:;
  R(2)=0x8c067940u;
  R(1)=R(6);
  { c->pr=0x8c070708u; R(0)=R(5); f_8c067940(c); }
  ST32(R(8),R(0));
  ST32(R(8)+12,R(14));
L8c07070c:;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070720u; R(4)=LD32(R(15)+16); f_8c070104(c); }
  R(15)+=0x8u;
L8c070722:;
  R(3)=0x14u;
  R(0)=R(9);
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(3));
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
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
void f_8c070460(SH4Ctx *c) {
  R(0)=R(5);
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c07046c;
  R(0)=0x2cu;
  fp_st(c,14,R(0)+R(15));
  ST32(R(15)+56,R(13));
L8c07046c:;
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c070476;
  {  goto L8c070620; }
L8c070476:;
  R(11)=0x8c05e6eau;
  R(2)=0x15u;
  R(0)=R(4)&0xFF;
  R(13)=R(15);
  c->t=(int32_t)R(0)==1;
  fp_mov(c,15,14);
  R(12)=0x0u;
  ST32(R(8)+12,R(2));
  R(14)=R(8);
  { uint32_t k=!c->t; R(13)+=0x1cu; if(k) goto L8c0704aa; }
  R(0)=LD32(R(15)+56);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c07049a; }
  R(0)=0x2cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0704a2; }
L8c07049a:;
  R(3)=LD32(R(15)+44);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0704a2:;
  { uint32_t tg=R(11); c->pr=0x8c0704a6u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c0704ae; }
L8c0704aa:;
  R(12)=R(15);
  R(12)+=0x2cu;
L8c0704ae:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(10)=R(0);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==21;
  { uint32_t k=c->t; R(10)=R(10)&0xFF; if(k) goto L8c0704f2; }
  c->t=(int32_t)R(0)==22;
  if(c->t) goto L8c0704f6;
  c->t=(int32_t)R(0)==23;
  if(c->t) goto L8c0704fa;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0704fe;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0704ce;
  {  goto L8c070580; }
L8c0704ce:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0704d6;
  {  goto L8c0705d8; }
L8c0704d6:;
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0704de;
  {  goto L8c0705d8; }
L8c0704de:;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0704e6;
  {  goto L8c0705e6; }
L8c0704e6:;
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0704ee;
  {  goto L8c0705e6; }
L8c0704ee:;
  {  goto L8c0705f4; }
L8c0704f2:;
  { fp_st(c,15,R(14)); goto L8c07070c; }
L8c0704f6:;
  { R(0)=0x4u; goto L8c07051c; }
L8c0704fa:;
  { R(0)=0x8u; goto L8c07051c; }
L8c0704fe:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c070520;
  fp_ld(c,3,R(13));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,15,3);
L8c07051c:;
  { fp_st(c,15,R(0)+R(14)); goto L8c07070c; }
L8c070520:;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c070526u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c070560;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c070568;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c070572;
  {  goto L8c07070c; }
L8c070560:;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(12));
  { fp_arith(c,2,3,4); goto L8c0705bc; }
L8c070568:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  { fp_arith(c,2,3,4); goto L8c07057c; }
L8c070572:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x8u;
  fp_arith(c,2,3,4);
L8c07057c:;
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c070580:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c07059e;
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  fp_arith(c,3,3,15);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,3,2,15);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,3,3,15);
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c07059e:;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c0705a4u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0705b6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0705c0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0705ca;
  {  goto L8c07070c; }
L8c0705b6:;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(12));
  fp_arith(c,3,3,4);
L8c0705bc:;
  { fp_st(c,3,R(14)); goto L8c07070c; }
L8c0705c0:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  { fp_arith(c,3,3,4); goto L8c0705d4; }
L8c0705ca:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x8u;
  fp_arith(c,3,3,4);
L8c0705d4:;
  { fp_st(c,3,R(0)+R(14)); goto L8c07070c; }
L8c0705d8:;
  R(3)=0x8c05e5f4u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0705e2u; R(4)=R(14); f_8c05e5f4(c); }
  {  goto L8c07070c; }
L8c0705e6:;
  R(3)=0x8c05e612u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0705f0u; R(4)=R(14); f_8c05e612(c); }
  {  goto L8c07070c; }
L8c0705f4:;
  R(0)=0x4u;
  fp_st(c,14,R(14));
  fp_st(c,14,R(0)+R(14));
  R(0)=0x8u;
  { fp_st(c,14,R(0)+R(14)); goto L8c07070c; }
L8c070620:;
  R(3)=0x8c0722c2u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c07062cu; R(4)+=0x2cu; f_8c0722c2(c); }
  R(4)=R(0);
  R(0)=0x1cu;
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(14));
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=LD32(R(15));
  R(6)=LD32(R(15)+28);
  R(5)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c070682;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c070696;
  {  goto L8c07070c; }
L8c07065e:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070668;
  { fp_arith(c,0,5,4); goto L8c0706d4; }
L8c070668:;
  R(6)+=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070670:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07067a;
  { fp_arith(c,1,5,4); goto L8c0706d4; }
L8c07067a:;
  R(6)-=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070682:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07068c;
  { fp_arith(c,2,5,4); goto L8c0706d4; }
L8c07068c:;
  c->macl=R(6)*R(5);
  R(6)=c->macl;
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070696:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0706c2;
  R(0)=0x8c0706e4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0));
  c->fr[1]=0x00000000u;
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c0706b2;
  fp_mov(c,2,3);
  fp_mov(c,3,4);
  { fp_arith(c,0,3,2); goto L8c0706ba; }
L8c0706b2:;
  fp_mov(c,0,4);
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  fp_arith(c,0,3,1);
L8c0706ba:;
  R(0)=0x8c0706e8u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0706cc;
L8c0706c2:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c07070c;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07070c;
L8c0706cc:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070700;
  fp_arith(c,3,5,4);
L8c0706d4:;
  fp_st(c,5,R(8));
  { ST32(R(8)+12,R(13)); goto L8c07070c; }
L8c070700:;
  R(2)=0x8c067940u;
  R(1)=R(6);
  { c->pr=0x8c070708u; R(0)=R(5); f_8c067940(c); }
  ST32(R(8),R(0));
  ST32(R(8)+12,R(14));
L8c07070c:;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070720u; R(4)=LD32(R(15)+16); f_8c070104(c); }
  R(15)+=0x8u;
  R(3)=0x14u;
  R(0)=R(9);
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(3));
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
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
void f_8c070560(SH4Ctx *c) {
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(12));
  { fp_arith(c,2,3,4); goto L8c0705bc; }
L8c0705bc:;
  { fp_st(c,3,R(14)); goto L8c07070c; }
L8c07070c:;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070720u; R(4)=LD32(R(15)+16); f_8c070104(c); }
  R(15)+=0x8u;
  R(3)=0x14u;
  R(0)=R(9);
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(3));
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
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
void f_8c070620(SH4Ctx *c) {
  R(3)=0x8c0722c2u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c07062cu; R(4)+=0x2cu; f_8c0722c2(c); }
  R(4)=R(0);
  R(0)=0x1cu;
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(14));
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=LD32(R(15));
  R(6)=LD32(R(15)+28);
  R(5)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c07065e;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c070670;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c070682;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c070696;
  {  goto L8c07070c; }
L8c07065e:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070668;
  { fp_arith(c,0,5,4); goto L8c0706d4; }
L8c070668:;
  R(6)+=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070670:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07067a;
  { fp_arith(c,1,5,4); goto L8c0706d4; }
L8c07067a:;
  R(6)-=R(5);
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070682:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07068c;
  { fp_arith(c,2,5,4); goto L8c0706d4; }
L8c07068c:;
  c->macl=R(6)*R(5);
  R(6)=c->macl;
  ST32(R(8),R(6));
  { ST32(R(8)+12,R(14)); goto L8c07070c; }
L8c070696:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0706c2;
  R(0)=0x8c0706e4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0));
  c->fr[1]=0x00000000u;
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c0706b2;
  fp_mov(c,2,3);
  fp_mov(c,3,4);
  { fp_arith(c,0,3,2); goto L8c0706ba; }
L8c0706b2:;
  fp_mov(c,0,4);
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  fp_arith(c,0,3,1);
L8c0706ba:;
  R(0)=0x8c0706e8u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0706cc;
L8c0706c2:;
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c07070c;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07070c;
L8c0706cc:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070700;
  fp_arith(c,3,5,4);
L8c0706d4:;
  fp_st(c,5,R(8));
  { ST32(R(8)+12,R(13)); goto L8c07070c; }
L8c070700:;
  R(2)=0x8c067940u;
  R(1)=R(6);
  { c->pr=0x8c070708u; R(0)=R(5); f_8c067940(c); }
  ST32(R(8),R(0));
  ST32(R(8)+12,R(14));
L8c07070c:;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070720u; R(4)=LD32(R(15)+16); f_8c070104(c); }
  R(15)+=0x8u;
  R(3)=0x14u;
  R(0)=R(9);
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(3));
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
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
void f_8c070700(SH4Ctx *c) {
  R(2)=0x8c067940u;
  R(1)=R(6);
  { c->pr=0x8c070708u; R(0)=R(5); f_8c067940(c); }
  ST32(R(8),R(0));
  ST32(R(8)+12,R(14));
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x1cu;
  R(5)=LD32(R(15)+20);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c070720u; R(4)=LD32(R(15)+16); f_8c070104(c); }
  R(15)+=0x8u;
  R(3)=0x14u;
  R(0)=R(9);
  R(2)=0x0u;
  ST32(R(8),R(2));
  ST32(R(8)+12,R(3));
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
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
void f_8c070744(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(14)=R(4);
  { c->pr=0x8c070756u; R(4)=R(14); f_8c06ff00(c); }
  R(3)=LD32(R(15));
  R(13)=R(0);
  c->t=R(14)==R(3);
  if(!c->t) goto L8c070762;
  { R(2)=0x0u; goto L8c070764; }
L8c070762:;
  R(2)=LD32(R(15));
L8c070764:;
  R(1)=0x8c0c76fcu;
  R(5)=R(13);
  ST32(R(1),R(2));
  R(6)=LD32(R(15)+4);
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c070772u; R(4)=R(14); sh4_call(c,tg); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07077c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=R(5);
  R(14)=R(6);
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c070790u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(0);
  { c->pr=0x8c070798u; R(4)=LD32(R(15)+8); f_8c06ff00(c); }
  R(3)=LD32(R(15));
  R(5)=R(0);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0707a8;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0707ac;
L8c0707a8:;
  { R(2)=0x0u; goto L8c0707b0; }
L8c0707ac:;
  R(1)=LD32(R(15));
  R(2)=LD32(R(1)+4);
L8c0707b0:;
  R(3)=0xbu;
  R(0)=R(5);
  ST32(R(14),R(2));
  ST32(R(14)+12,R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0707e4(SH4Ctx *c) {
  R(0)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(4);
  R(1)=0x8c0c7740u;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0707f4(SH4Ctx *c) {
  { R(0)=0x3u; return; }
}
void f_8c0707f8(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0707fc(SH4Ctx *c) {
  R(1)=0x8c0c786cu;
  R(0)=R(4)&0xFF;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)=(int32_t)(int16_t)LD16(R(1)+R(0)); return; }
}
void f_8c070806(SH4Ctx *c) {
  { R(0)=0x4u; return; }
}
void f_8c07080a(SH4Ctx *c) {
  { R(0)=0x2u; return; }
}
void f_8c07080e(SH4Ctx *c) {
  R(1)=0x8c0c7874u;
  R(0)=R(4)&0xFF;
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c070840(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c070858;
  R(3)=0x8c064e90u;
  R(6)=0x37u;
  R(5)=0x8c0bbbfcu;
  { c->pr=0x8c070854u; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c070862; }
L8c070858:;
  R(1)=0x8c0199c4u;
  R(6)=0x37u;
  R(5)=0x8c0bbbfcu;
  { c->pr=0x8c070862u; R(4)=0xcu; f_8c0199c4(c); }
L8c070862:;
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(0)=R(4); if(k) goto L8c070872; }
  R(5)=0x0u;
  ST32(R(4),R(5));
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
L8c070872:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c070878(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c07088e; }
  { R(13)=LD32(R(4)); goto L8c070890; }
L8c07088e:;
  R(13)=0x0u;
L8c070890:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0708f0;
L8c070894:;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0708a0;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c0708a0:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0708ac;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c0708ac:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0708d6;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0708c8;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c0708c8:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0708d6;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c0708d6:;
  R(2)=0x8c071640u;
  ST32(R(4),R(14));
  ST32(R(4)+4,R(14));
  { c->pr=0x8c0708e0u; ST32(R(4)+8,R(14)); f_8c071640(c); }
  R(4)=R(13);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0708ea;
  { R(13)=LD32(R(4)); goto L8c0708ec; }
L8c0708ea:;
  R(13)=R(14);
L8c0708ec:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c070894;
L8c0708f0:;
  R(2)=0x8c064eb8u;
  R(6)=0x53u;
  R(5)=0x8c0bbbfcu;
  { c->pr=0x8c0708fau; R(4)=R(15); f_8c064eb8(c); }
  ST32(R(15),R(14));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070906(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  ST32(R(15),R(5));
  { uint32_t k=c->t; ST32(R(15)+4,R(6)); if(k) goto L8c0709b6; }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0709b6;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c070922u; R(4)=LD32(R(15)); f_8c0715e0(c); }
  R(4)=R(0);
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c070930;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c070930:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c07093c;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c07093c:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c070966;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c070958;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c070958:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c070966;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c070966:;
  R(5)=0x0u;
  ST32(R(4),R(5));
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  ST32(R(4),R(5));
  R(2)=LD32(R(14)+4);
  ST32(R(4)+4,R(2));
  ST32(R(4)+8,R(14));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0709a0;
  { ST32(R(14),R(4)); goto L8c0709a4; }
L8c0709a0:;
  R(2)=LD32(R(14)+4);
  ST32(R(2),R(4));
L8c0709a4:;
  R(0)=0x0u;
  ST32(R(14)+4,R(4));
  R(3)=LD32(R(14)+8);
  R(3)+=0x1u;
  ST32(R(14)+8,R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0709b6:;
  R(0)=0xffffffffu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0709c0(SH4Ctx *c) {
  R(7)=LD32(R(4));
  c->t=(R(7)&R(7))==0;
  if(c->t) { f_8c0709d6(c); return; }
  { f_8c0709c6(c); return; }
}
void f_8c0709c6(SH4Ctx *c) {
L8c0709c6:;
  R(2)=LD32(R(7)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c0709d0;
  { R(0)=0x0u; return; }
L8c0709d0:;
  R(7)=LD32(R(7));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0709c6;
  { f_8c0709d6(c); return; }
}
void f_8c0709d0(SH4Ctx *c) {
  R(7)=LD32(R(7));
  c->t=(R(7)&R(7))==0;
  if(!c->t) { f_8c0709c6(c); return; }
  { f_8c0709d6(c); return; }
}
void f_8c0709d6(SH4Ctx *c) {
  {  { f_8c070906(c); return; } }
}
void f_8c0709e4(SH4Ctx *c) {
L8c0709e4:;
  R(2)=LD32(R(7)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c0709f2;
  ST32(R(7)+16,R(6));
  ST32(R(7)+20,R(6));
  { R(0)=0x0u; return; }
L8c0709f2:;
  R(7)=LD32(R(7));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0709e4;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c0709f2(SH4Ctx *c) {
  R(7)=LD32(R(7));
  c->t=(R(7)&R(7))==0;
  if(!c->t) { f_8c0709e4(c); return; }
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c0709fe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) { f_8c070a90(c); return; }
  c->t=(R(5)&R(5))==0;
  if(c->t) { f_8c070a90(c); return; }
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c070a18; }
  { R(6)=LD32(R(14)); goto L8c070a1a; }
L8c070a18:;
  R(6)=0x0u;
L8c070a1a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) { f_8c070a90(c); return; }
  { f_8c070a1e(c); return; }
}
void f_8c070a1e(SH4Ctx *c) {
L8c070a1e:;
  R(2)=LD32(R(14)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c070a80;
  R(1)=LD32(R(14));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c070a30;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(14));
  ST32(R(3)+4,R(2));
L8c070a30:;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c070a3c;
  R(2)=LD32(R(14));
  R(3)=LD32(R(14)+4);
  ST32(R(3),R(2));
L8c070a3c:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c070a66;
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c070a58;
  R(3)=LD32(R(14));
  R(1)=LD32(R(14)+8);
  ST32(R(1),R(3));
L8c070a58:;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c070a66;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14)+8);
  ST32(R(1)+4,R(3));
L8c070a66:;
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  { c->pr=0x8c070a70u; R(4)=R(14); f_8c071640(c); }
  { R(0)=R(13); { f_8c070a92(c); return; } }
L8c070a80:;
  R(14)=R(6);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070a8a;
  { R(6)=LD32(R(14)); goto L8c070a8c; }
L8c070a8a:;
  R(6)=0x0u;
L8c070a8c:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c070a1e;
  { f_8c070a90(c); return; }
}
void f_8c070a80(SH4Ctx *c) {
  R(14)=R(6);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070a8a;
  { R(6)=LD32(R(14)); goto L8c070a8c; }
L8c070a8a:;
  R(6)=0x0u;
L8c070a8c:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) { f_8c070a1e(c); return; }
  { f_8c070a90(c); return; }
}
void f_8c070a90(SH4Ctx *c) {
  R(0)=0xffffffffu;
  { f_8c070a92(c); return; }
}
void f_8c070a92(SH4Ctx *c) {
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070a9a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=c->t; R(12)=LD32(R(15)+16); if(k) goto L8c070af2; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c070af2;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c070af2;
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070af2;
L8c070ab6:;
  R(3)=LD32(R(14)+12);
  c->t=R(3)==R(6);
  if(c->t) goto L8c070ac2;
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c070ab6;
L8c070ac2:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070af2;
  R(0)=LD32(R(4));
  R(11)=0x8c09d5acu;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c070af2;
L8c070ace:;
  R(2)=LD32(R(0)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c070aec;
  R(5)=R(14);
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(6)=R(7); if(k) goto L8c070ae8; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c070ae8;
  R(7)=R(12);
  { uint32_t tg=R(11); c->pr=0x8c070ae8u; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
L8c070ae8:;
  { R(0)=0x0u; goto L8c070af4; }
L8c070aec:;
  R(0)=LD32(R(0));
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c070ace;
L8c070af2:;
  R(0)=0xffffffffu;
L8c070af4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070afe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c070b4e;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c070b4e;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c070b4e;
  R(7)=LD32(R(4));
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c070b4e;
L8c070b16:;
  R(3)=LD32(R(7)+12);
  c->t=R(3)==R(6);
  if(c->t) goto L8c070b22;
  R(7)=LD32(R(7));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c070b16;
L8c070b22:;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c070b4e;
  R(6)=LD32(R(4));
  R(13)=0x8c09d6aeu;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c070b4e;
L8c070b2e:;
  R(2)=LD32(R(6)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c070b48;
  R(14)=R(6);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(5)=R(7); if(k) goto L8c070b44; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c070b44;
  { uint32_t tg=R(13); c->pr=0x8c070b44u; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
L8c070b44:;
  { R(0)=0x0u; goto L8c070b50; }
L8c070b48:;
  R(6)=LD32(R(6));
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c070b2e;
L8c070b4e:;
  R(0)=0xffffffffu;
L8c070b50:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070b80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; ST32(R(15),R(7)); if(k) goto L8c070bcc; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c070bcc;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c070bcc;
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070bcc;
L8c070b9a:;
  R(3)=LD32(R(14)+12);
  c->t=R(3)==R(6);
  if(c->t) goto L8c070ba6;
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c070b9a;
L8c070ba6:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070bcc;
  R(13)=LD32(R(4));
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c070bcc;
L8c070bb0:;
  R(2)=LD32(R(13)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c070bc6;
  R(6)=LD32(R(15));
  R(4)=R(13);
  R(7)=LD32(R(15)+12);
  R(5)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0716ee(c); return; } }
L8c070bc6:;
  R(13)=LD32(R(13));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c070bb0;
L8c070bcc:;
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070bd6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; ST32(R(15),R(7)); if(k) goto L8c070c20; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c070c20;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c070c20;
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070c20;
L8c070bf0:;
  R(3)=LD32(R(14)+12);
  c->t=R(3)==R(6);
  if(c->t) goto L8c070bfc;
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c070bf0;
L8c070bfc:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070c20;
  R(13)=LD32(R(4));
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c070c20;
L8c070c06:;
  R(2)=LD32(R(13)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c070c1a;
  R(6)=LD32(R(15));
  R(4)=R(13);
  R(5)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07170c(c); return; } }
L8c070c1a:;
  R(13)=LD32(R(13));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c070c06;
L8c070c20:;
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070c2a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; ST32(R(15),R(7)); if(k) goto L8c070c74; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c070c74;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c070c74;
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070c74;
L8c070c44:;
  R(3)=LD32(R(14)+12);
  c->t=R(3)==R(6);
  if(c->t) goto L8c070c50;
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c070c44;
L8c070c50:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070c74;
  R(13)=LD32(R(4));
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c070c74;
L8c070c5a:;
  R(2)=LD32(R(13)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c070c6e;
  R(6)=LD32(R(15));
  R(4)=R(13);
  R(5)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07172a(c); return; } }
L8c070c6e:;
  R(13)=LD32(R(13));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c070c5a;
L8c070c74:;
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070c80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; ST32(R(15),R(7)); if(k) goto L8c070cca; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c070cca;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c070cca;
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070cca;
L8c070c9a:;
  R(3)=LD32(R(14)+12);
  c->t=R(3)==R(6);
  if(c->t) goto L8c070ca6;
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c070c9a;
L8c070ca6:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c070cca;
  R(13)=LD32(R(4));
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c070cca;
L8c070cb0:;
  R(2)=LD32(R(13)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c070cc4;
  R(6)=LD32(R(15));
  R(4)=R(13);
  R(5)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c071786(c); return; } }
L8c070cc4:;
  R(13)=LD32(R(13));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c070cb0;
L8c070cca:;
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c070cd4(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070cfe;
  R(5)=LD32(R(4));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c070cfe;
L8c070cde:;
  R(3)=LD32(R(5)+20);
  ST32(R(5)+16,R(3));
  R(4)=LD32(R(5)+24);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c070cf8;
L8c070cea:;
  R(2)=LD32(R(4)+20);
  ST32(R(4)+16,R(2));
  R(3)=LD32(R(4)+28);
  ST32(R(4)+24,R(3));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c070cea;
L8c070cf8:;
  R(5)=LD32(R(5));
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c070cde;
L8c070cfe:;
  {  return; }
}
void f_8c070d20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(13)=0x8c0c758cu;
  ST32(R(15)+48,R(7));
  ST32(R(15)+32,R(4));
  ST32(R(15)+24,R(5));
  ST32(R(15)+44,R(6));
  R(2)=LD32(R(13));
  R(14)=LD32(R(15)+32);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=LD32(R(14)+8); if(k) goto L8c070d56; }
  R(3)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b4u;
  { c->pr=0x8c070d52u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c070d62; }
L8c070d56:;
  R(2)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b4u;
  { c->pr=0x8c070d62u; R(4)<<=2; f_8c0199c4(c); }
L8c070d62:;
  R(3)=R(0);
  ST32(R(15),R(3));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c070d7c;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b5u;
  { c->pr=0x8c070d78u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c070d88; }
L8c070d7c:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b5u;
  { c->pr=0x8c070d88u; R(4)<<=2; f_8c0199c4(c); }
L8c070d88:;
  R(2)=R(0);
  ST32(R(15)+8,R(2));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c070de0;
  R(3)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b6u;
  { c->pr=0x8c070d9eu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c070dec; }
L8c070de0:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b6u;
  { c->pr=0x8c070decu; R(4)<<=2; f_8c0199c4(c); }
L8c070dec:;
  R(3)=R(0);
  ST32(R(15)+16,R(3));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c070e06;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b7u;
  { c->pr=0x8c070e02u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c070e12; }
L8c070e06:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b7u;
  { c->pr=0x8c070e12u; R(4)<<=2; f_8c0199c4(c); }
L8c070e12:;
  R(2)=R(0);
  ST32(R(15)+20,R(2));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c070e2c;
  R(3)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b8u;
  { c->pr=0x8c070e28u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c070e38; }
L8c070e2c:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b8u;
  { c->pr=0x8c070e38u; R(4)<<=2; f_8c0199c4(c); }
L8c070e38:;
  R(3)=R(0);
  ST32(R(15)+12,R(3));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c070e80;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b9u;
  { c->pr=0x8c070e4eu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c070e8c; }
L8c070e80:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b9u;
  { c->pr=0x8c070e8cu; R(4)<<=2; f_8c0199c4(c); }
L8c070e8c:;
  R(13)=0x0u;
  R(2)=R(0);
  R(14)=0x1u;
  R(10)=R(13);
  ST32(R(15)+4,R(2));
  R(12)=R(13);
  R(4)=LD32(R(15)+32);
  R(9)=R(13);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=0xffffffffu; if(k) goto L8c070ebe; }
L8c070ea4:;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(15)+24);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c070eb8;
  R(3)=LD32(R(15)+8);
  ST32(R(3),R(4));
  R(3)=LD32(R(15)+12);
  ST32(R(3),R(5));
  {  goto L8c070ebe; }
L8c070eb8:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c070ea4;
L8c070ebe:;
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c070f00;
  { R(12)=R(13); { f_8c07111a(c); return; } }
L8c070f00:;
  R(8)=0x8c068674u;
  ST32(R(15)+40,R(13));
  { f_8c070f04(c); return; }
}
void f_8c070de0(SH4Ctx *c) {
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b6u;
  { c->pr=0x8c070decu; R(4)<<=2; f_8c0199c4(c); }
  R(3)=R(0);
  ST32(R(15)+16,R(3));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c070e06;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b7u;
  { c->pr=0x8c070e02u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c070e12; }
L8c070e06:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b7u;
  { c->pr=0x8c070e12u; R(4)<<=2; f_8c0199c4(c); }
L8c070e12:;
  R(2)=R(0);
  ST32(R(15)+20,R(2));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c070e2c;
  R(3)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b8u;
  { c->pr=0x8c070e28u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c070e38; }
L8c070e2c:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b8u;
  { c->pr=0x8c070e38u; R(4)<<=2; f_8c0199c4(c); }
L8c070e38:;
  R(3)=R(0);
  ST32(R(15)+12,R(3));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c070e80;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b9u;
  { c->pr=0x8c070e4eu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c070e8c; }
L8c070e80:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b9u;
  { c->pr=0x8c070e8cu; R(4)<<=2; f_8c0199c4(c); }
L8c070e8c:;
  R(13)=0x0u;
  R(2)=R(0);
  R(14)=0x1u;
  R(10)=R(13);
  ST32(R(15)+4,R(2));
  R(12)=R(13);
  R(4)=LD32(R(15)+32);
  R(9)=R(13);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=0xffffffffu; if(k) goto L8c070ebe; }
L8c070ea4:;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(15)+24);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c070eb8;
  R(3)=LD32(R(15)+8);
  ST32(R(3),R(4));
  R(3)=LD32(R(15)+12);
  ST32(R(3),R(5));
  {  goto L8c070ebe; }
L8c070eb8:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c070ea4;
L8c070ebe:;
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c070f00;
  { R(12)=R(13); { f_8c07111a(c); return; } }
L8c070f00:;
  R(8)=0x8c068674u;
  ST32(R(15)+40,R(13));
  { f_8c070f04(c); return; }
}
void f_8c070e80(SH4Ctx *c) {
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x1b9u;
  { c->pr=0x8c070e8cu; R(4)<<=2; f_8c0199c4(c); }
  R(13)=0x0u;
  R(2)=R(0);
  R(14)=0x1u;
  R(10)=R(13);
  ST32(R(15)+4,R(2));
  R(12)=R(13);
  R(4)=LD32(R(15)+32);
  R(9)=R(13);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=0xffffffffu; if(k) goto L8c070ebe; }
L8c070ea4:;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(15)+24);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c070eb8;
  R(3)=LD32(R(15)+8);
  ST32(R(3),R(4));
  R(3)=LD32(R(15)+12);
  ST32(R(3),R(5));
  {  goto L8c070ebe; }
L8c070eb8:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c070ea4;
L8c070ebe:;
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c070f00;
  { R(12)=R(13); { f_8c07111a(c); return; } }
L8c070f00:;
  R(8)=0x8c068674u;
  ST32(R(15)+40,R(13));
  { f_8c070f04(c); return; }
}
void f_8c070f00(SH4Ctx *c) {
  R(8)=0x8c068674u;
  ST32(R(15)+40,R(13));
  { f_8c070f04(c); return; }
}
void f_8c070f04(SH4Ctx *c) {
  R(5)=0x7fffffffu;
  c->t=(int32_t)R(14)>0;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c070f26; }
L8c070f0c:;
  R(0)=LD32(R(15)+4);
  R(2)=R(4);
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  c->t=(int32_t)R(5)>(int32_t)R(3);
  if(!c->t) goto L8c070f20;
  R(5)=R(4);
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  R(9)=R(4);
L8c070f20:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c070f0c;
L8c070f26:;
  R(0)=LD32(R(15));
  R(11)=R(9);
  R(11)<<=2;
  R(4)=R(12);
  R(2)=R(0);
  R(0)=LD32(R(15)+8);
  R(4)<<=2;
  R(6)=R(14);
  R(3)=LD32(R(11)+R(0));
  R(2)+=R(4);
  R(6)-=R(9);
  R(10)=R(12);
  ST32(R(2),R(3));
  R(6)<<=2;
  R(0)=LD32(R(15)+20);
  R(12)+=0x1u;
  R(2)=R(0);
  R(0)=LD32(R(15)+4);
  R(2)+=R(4);
  R(3)=LD32(R(11)+R(0));
  ST32(R(2),R(3));
  R(0)=LD32(R(15)+16);
  R(2)=R(0);
  R(0)=LD32(R(15)+12);
  R(2)+=R(4);
  R(3)=LD32(R(11)+R(0));
  ST32(R(2),R(3));
  ST32(R(15)+24,R(6));
  R(5)=LD32(R(15)+4);
  R(5)+=R(11);
  ST32(R(15)+28,R(5));
  R(5)+=0x4u;
  { uint32_t tg=R(8); c->pr=0x8c070f6au; R(4)=LD32(R(15)+28); sh4_call(c,tg); }
  R(5)=LD32(R(15)+12);
  R(6)=LD32(R(15)+24);
  R(5)+=R(11);
  ST32(R(15)+28,R(5));
  R(5)+=0x4u;
  { uint32_t tg=R(8); c->pr=0x8c070f78u; R(4)=LD32(R(15)+28); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(6)=LD32(R(15)+24);
  R(5)+=R(11);
  ST32(R(15)+28,R(5));
  R(5)+=0x4u;
  { uint32_t tg=R(8); c->pr=0x8c070f86u; R(4)=LD32(R(15)+28); sh4_call(c,tg); }
  R(0)=LD32(R(15));
  R(11)=R(10);
  R(11)<<=2;
  R(2)=LD32(R(15)+44);
  R(4)=LD32(R(11)+R(0));
  R(3)=LD32(R(4)+12);
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; R(14)+=0xffffffffu; if(k) goto L8c070f9c; }
  R(3)=0x1u;
  ST32(R(15)+40,R(3));
L8c070f9c:;
  R(2)=LD32(R(4)+24);
  { R(4)=LD32(R(2)); { f_8c071070(c); return; } }
}
void f_8c070fa2(SH4Ctx *c) {
  R(2)=LD32(R(4)+16);
  R(3)=LD32(R(15)+48);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(6)=LD32(R(4)+12); if(k) goto L8c07106e; }
  c->t=(int32_t)R(12)>0;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c070fc4; }
L8c070fb2:;
  R(0)=LD32(R(15));
  R(2)=R(5);
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  c->t=R(3)==R(6);
  if(c->t) goto L8c070fc4;
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(12);
  if(!c->t) goto L8c070fb2;
L8c070fc4:;
  c->t=R(5)==R(12);
  if(!c->t) goto L8c07106e;
  c->t=(int32_t)R(14)>0;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c070fe0; }
L8c070fce:;
  R(0)=LD32(R(15)+8);
  R(3)=R(5);
  R(3)<<=2;
  R(3)=LD32(R(3)+R(0));
  c->t=R(3)==R(6);
  if(c->t) goto L8c070fe0;
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(14);
  if(!c->t) goto L8c070fce;
L8c070fe0:;
  c->t=R(5)==R(14);
  if(!c->t) goto L8c071040;
  R(0)=LD32(R(15)+8);
  R(5)=R(14);
  R(5)<<=2;
  ST32(R(5)+R(0),R(6));
  R(0)=LD32(R(15)+4);
  R(0)+=R(5);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+24);
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(3)=LD32(R(11)+R(0));
  R(2)=LD32(R(4)+24);
  R(3)+=R(2);
  ST32(R(1),R(3));
  R(0)=LD32(R(15)+12);
  ST32(R(5)+R(0),R(10));
  { R(14)+=0x1u; goto L8c07106e; }
L8c071040:;
  R(0)=LD32(R(15)+4);
  R(3)=R(5);
  R(3)<<=2;
  R(1)=LD32(R(4)+24);
  R(3)=LD32(R(3)+R(0));
  R(0)=LD32(R(15)+20);
  R(2)=LD32(R(11)+R(0));
  R(2)+=R(1);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c07106e;
  R(0)=LD32(R(15)+4);
  R(6)=R(5);
  R(6)<<=2;
  R(0)+=R(6);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+24);
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(11)+R(0));
  R(3)+=R(2);
  ST32(R(1),R(3));
  R(0)=LD32(R(15)+12);
  ST32(R(6)+R(0),R(10));
L8c07106e:;
  R(4)=LD32(R(4));
  { f_8c071070(c); return; }
}
void f_8c071040(SH4Ctx *c) {
  R(0)=LD32(R(15)+4);
  R(3)=R(5);
  R(3)<<=2;
  R(1)=LD32(R(4)+24);
  R(3)=LD32(R(3)+R(0));
  R(0)=LD32(R(15)+20);
  R(2)=LD32(R(11)+R(0));
  R(2)+=R(1);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c07106e;
  R(0)=LD32(R(15)+4);
  R(6)=R(5);
  R(6)<<=2;
  R(0)+=R(6);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+24);
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(11)+R(0));
  R(3)+=R(2);
  ST32(R(1),R(3));
  R(0)=LD32(R(15)+12);
  ST32(R(6)+R(0),R(10));
L8c07106e:;
  R(4)=LD32(R(4));
  { f_8c071070(c); return; }
}
void f_8c071070(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(!c->t) { f_8c070fa2(c); return; }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c071082;
  R(2)=LD32(R(15)+40);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c071082;
  {  { f_8c070f04(c); return; } }
L8c071082:;
  R(3)=LD32(R(15)+40);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=R(13); if(k) { f_8c07111a(c); return; } }
  R(4)=0x8c0bbc10u;
  R(5)=0x8c0bbc2cu;
  { c->pr=0x8c071092u;  f_8c070840(c); }
  R(12)=R(0);
  R(0)=R(10);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(14)=R(10); if(k) goto L8c0710b6; }
L8c07109c:;
  R(0)=LD32(R(15));
  R(14)<<=2;
  R(13)=R(14);
  R(11)=LD32(R(14)+R(0));
  R(5)=LD32(R(11)+12);
  R(6)=LD32(R(11)+16);
  { c->pr=0x8c0710acu; R(4)=R(12); f_8c070906(c); }
  R(0)=LD32(R(15)+16);
  R(0)=LD32(R(13)+R(0));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c07109c; }
L8c0710b6:;
  R(13)=R(10);
  c->t=(R(13)&R(13))==0;
  if(c->t) { f_8c07111a(c); return; }
L8c0710bc:;
  R(0)=LD32(R(15));
  R(13)<<=2;
  R(14)=R(13);
  R(4)=LD32(R(15)+32);
  R(6)=LD32(R(13)+R(0));
  R(7)=R(15);
  R(0)=LD32(R(15)+16);
  R(7)+=0x30u;
  R(6)=LD32(R(6)+12);
  R(5)=LD32(R(14)+R(0));
  R(0)=LD32(R(15));
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c0710dau; R(5)=LD32(R(5)+12); f_8c070bd6(c); }
  R(0)=LD32(R(15));
  R(7)=R(15);
  R(4)=LD32(R(15)+32);
  R(7)+=0x24u;
  R(6)=LD32(R(14)+R(0));
  R(0)=LD32(R(15)+16);
  R(6)=LD32(R(6)+12);
  R(5)=LD32(R(14)+R(0));
  R(0)=LD32(R(15));
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c0710f4u; R(5)=LD32(R(5)+12); f_8c070c80(c); }
  R(3)=LD32(R(15)+48);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+4);
  R(7)=LD32(R(15)+40);
  R(6)=LD32(R(14)+R(0));
  R(0)=LD32(R(15)+20);
  R(6)=LD32(R(6)+12);
  R(5)=LD32(R(14)+R(0));
  R(0)=LD32(R(15)+4);
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  R(5)=LD32(R(5)+12);
  { c->pr=0x8c071110u; R(4)=R(12); f_8c070a9a(c); }
  R(15)+=0x4u;
  R(0)=LD32(R(15)+16);
  R(13)=LD32(R(14)+R(0));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0710bc;
  { f_8c07111a(c); return; }
}
void f_8c07111a(SH4Ctx *c) {
  R(14)=0x8c0bbbfcu;
  R(6)=0x262u;
  R(13)=0x8c064eb8u;
  R(5)=R(14);
  { c->pr=0x8c071126u; R(4)=R(15); f_8c064eb8(c); }
  R(6)=0x263u;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071130u; R(4)+=0x8u; sh4_call(c,tg); }
  R(6)=0x264u;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c07113au; R(4)+=0x10u; sh4_call(c,tg); }
  R(6)=0x265u;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071144u; R(4)+=0x14u; sh4_call(c,tg); }
  R(6)=0x266u;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c07114eu; R(4)+=0xcu; sh4_call(c,tg); }
  R(6)=0x267u;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071158u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=R(12);
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0711a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(11)=R(4);
  R(12)=0x0u;
  ST32(R(15)+28,R(5));
  ST32(R(15)+44,R(12));
  R(14)=LD32(R(11)+8);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0711c4;
  { R(0)=0x0u; { f_8c071572(c); return; } }
L8c0711c4:;
  R(13)=0x8c0c758cu;
  R(3)=LD32(R(13));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0711dc;
  R(3)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x28bu;
  { c->pr=0x8c0711d8u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c0711e8; }
L8c0711dc:;
  R(2)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x28bu;
  { c->pr=0x8c0711e8u; R(4)<<=2; f_8c0199c4(c); }
L8c0711e8:;
  R(2)=R(0);
  ST32(R(15),R(2));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c071240;
  R(3)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x28fu;
  { c->pr=0x8c0711feu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c07124c; }
L8c071240:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x28fu;
  { c->pr=0x8c07124cu; R(4)<<=2; f_8c0199c4(c); }
L8c07124c:;
  R(3)=R(0);
  ST32(R(15)+8,R(3));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c071266;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x292u;
  { c->pr=0x8c071262u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c071272; }
L8c071266:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x292u;
  { c->pr=0x8c071272u; R(4)<<=2; f_8c0199c4(c); }
L8c071272:;
  R(2)=R(0);
  ST32(R(15)+24,R(2));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c07128c;
  R(3)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x295u;
  { c->pr=0x8c071288u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c071298; }
L8c07128c:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x295u;
  { c->pr=0x8c071298u; R(4)<<=2; f_8c0199c4(c); }
L8c071298:;
  R(3)=R(0);
  ST32(R(15)+16,R(3));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0712e0;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x298u;
  { c->pr=0x8c0712aeu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c0712ec; }
L8c0712e0:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x298u;
  { c->pr=0x8c0712ecu; R(4)<<=2; f_8c0199c4(c); }
L8c0712ec:;
  R(2)=R(0);
  ST32(R(15)+12,R(2));
  R(4)=LD32(R(11));
  R(13)=0xffffffffu;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=R(12); if(k) { f_8c071348(c); return; } }
  { f_8c0712fa(c); return; }
}
void f_8c071240(SH4Ctx *c) {
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x28fu;
  { c->pr=0x8c07124cu; R(4)<<=2; f_8c0199c4(c); }
  R(3)=R(0);
  ST32(R(15)+8,R(3));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c071266;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x292u;
  { c->pr=0x8c071262u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c071272; }
L8c071266:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x292u;
  { c->pr=0x8c071272u; R(4)<<=2; f_8c0199c4(c); }
L8c071272:;
  R(2)=R(0);
  ST32(R(15)+24,R(2));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c07128c;
  R(3)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x295u;
  { c->pr=0x8c071288u; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c071298; }
L8c07128c:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x295u;
  { c->pr=0x8c071298u; R(4)<<=2; f_8c0199c4(c); }
L8c071298:;
  R(3)=R(0);
  ST32(R(15)+16,R(3));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0712e0;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x298u;
  { c->pr=0x8c0712aeu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c0712ec; }
L8c0712e0:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x298u;
  { c->pr=0x8c0712ecu; R(4)<<=2; f_8c0199c4(c); }
L8c0712ec:;
  R(2)=R(0);
  ST32(R(15)+12,R(2));
  R(4)=LD32(R(11));
  R(13)=0xffffffffu;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=R(12); if(k) { f_8c071348(c); return; } }
  { f_8c0712fa(c); return; }
}
void f_8c0712e0(SH4Ctx *c) {
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0bbbfcu;
  R(6)=0x298u;
  { c->pr=0x8c0712ecu; R(4)<<=2; f_8c0199c4(c); }
  R(2)=R(0);
  ST32(R(15)+12,R(2));
  R(4)=LD32(R(11));
  R(13)=0xffffffffu;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=R(12); if(k) { f_8c071348(c); return; } }
  { f_8c0712fa(c); return; }
}
void f_8c0712fa(SH4Ctx *c) {
L8c0712fa:;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(15)+28);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c071340;
  R(3)=LD32(R(15));
  ST32(R(3),R(4));
  { R(13)=R(5); { f_8c071348(c); return; } }
L8c071340:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(5)+=0x1u; if(k) goto L8c0712fa; }
  { f_8c071348(c); return; }
}
void f_8c071340(SH4Ctx *c) {
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(5)+=0x1u; if(k) { f_8c0712fa(c); return; } }
  { f_8c071348(c); return; }
}
void f_8c071348(SH4Ctx *c) {
  R(0)=R(13);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(8)=R(12); if(k) goto L8c071354; }
  {  goto L8c071504; }
L8c071354:;
  R(4)=0x8c0bbc30u;
  R(5)=0x8c0bbc2cu;
  { c->pr=0x8c07135cu;  f_8c070840(c); }
  R(4)=R(13);
  R(4)+=0x1u;
  R(8)=R(0);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0713a8;
L8c071368:;
  R(2)=0x8c067a9cu;
  R(6)=R(12);
  R(5)=LD32(R(11));
  R(1)=R(4);
  { c->pr=0x8c071374u; R(0)=R(14); f_8c067a9c(c); }
  R(7)=R(0);
  c->t=(int32_t)R(7)>0;
  if(!c->t) goto L8c071382;
L8c07137a:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  { uint32_t k=!c->t; R(5)=LD32(R(5)); if(k) goto L8c07137a; }
L8c071382:;
  R(3)=0x8c067a9cu;
  R(1)=R(4);
  R(1)-=R(13);
  { c->pr=0x8c07138cu; R(0)=R(14); f_8c067a9c(c); }
  R(2)=LD32(R(15));
  R(4)+=0x1u;
  R(3)=0x8c067a9cu;
  R(0)<<=2;
  R(1)=R(4);
  ST32(R(2)+R(0),R(5));
  { c->pr=0x8c07139cu; R(0)=R(14); f_8c067a9c(c); }
  c->t=R(0)==R(13);
  if(!c->t) goto L8c0713a2;
  R(4)=0xffffffffu;
L8c0713a2:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c071368;
L8c0713a8:;
  R(2)=LD32(R(15));
  R(11)=R(12);
  R(9)=R(11);
  R(3)=LD32(R(2));
  R(1)=R(3);
  ST32(R(15)+36,R(3));
  R(3)=LD32(R(1)+12);
  R(2)=LD32(R(15)+8);
  ST32(R(2),R(3));
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+24);
  R(1)=LD32(R(3));
  R(0)=LD32(R(1)+16);
  ST32(R(2),R(0));
L8c0713c4:;
  R(3)=0x7fffffffu;
  R(13)=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(14);
  R(10)=0xffffffffu;
  ST32(R(15)+28,R(3));
  R(3)=R(9);
  R(3)<<=2;
  { uint32_t k=c->t; ST32(R(15)+32,R(3)); if(k) goto L8c07141e; }
L8c0713d6:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c071418;
  R(5)=R(13);
  R(6)=R(15);
  R(5)<<=2;
  ST32(R(15)+40,R(5));
  R(6)+=0x14u;
  R(0)=LD32(R(15));
  R(3)=LD32(R(15)+32);
  R(4)=LD32(R(3)+R(0));
  { c->pr=0x8c0713eeu; R(5)=LD32(R(5)+R(0)); f_8c07170c(c); }
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c071418;
  R(0)=LD32(R(15)+40);
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(5)=LD32(R(3)+R(0));
  R(0)=LD32(R(15)+32);
  R(4)=LD32(R(3)+R(0));
  { c->pr=0x8c071402u; R(6)+=0x4u; f_8c071786(c); }
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c071418;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15)+28);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c071418;
  R(2)=LD32(R(15)+4);
  R(10)=R(13);
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(15)+20);
  ST32(R(15)+44,R(3));
L8c071418:;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(14);
  if(!c->t) goto L8c0713d6;
L8c07141e:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c07145e;
  R(0)=LD32(R(15)+8);
  R(5)=R(10);
  R(5)<<=2;
  R(2)=R(0);
  R(0)=LD32(R(15));
  R(11)+=0x1u;
  R(3)=LD32(R(5)+R(0));
  R(4)=R(11);
  R(4)<<=2;
  R(3)=LD32(R(3)+12);
  R(2)+=R(4);
  R(9)<<=2;
  ST32(R(2),R(3));
  R(0)=LD32(R(15)+24);
  R(2)=R(0);
  R(0)=LD32(R(15));
  R(2)+=R(4);
  R(3)=LD32(R(5)+R(0));
  R(3)=LD32(R(3)+16);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+44);
  R(0)=LD32(R(15)+16);
  ST32(R(4)+R(0),R(3));
  R(3)=LD32(R(15)+28);
  R(0)=LD32(R(15)+12);
  ST32(R(4)+R(0),R(3));
  R(0)=LD32(R(15));
  ST32(R(9)+R(0),R(12));
  R(9)=R(10);
L8c07145e:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0713c4;
  R(2)=LD32(R(15)+16);
  R(6)=R(15);
  R(9)<<=2;
  ST32(R(2),R(12));
  R(13)=R(9);
  R(3)=LD32(R(15)+12);
  R(6)+=0x14u;
  ST32(R(3),R(12));
  R(5)=LD32(R(15)+36);
  R(0)=LD32(R(15));
  { c->pr=0x8c07147cu; R(4)=LD32(R(13)+R(0)); f_8c07170c(c); }
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c07149c;
  R(5)=LD32(R(15)+36);
  R(6)=R(15);
  R(0)=LD32(R(15));
  R(6)+=0x4u;
  { c->pr=0x8c07148cu; R(4)=LD32(R(13)+R(0)); f_8c071786(c); }
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c07149c;
  R(3)=LD32(R(15)+20);
  R(2)=LD32(R(15)+16);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15)+12);
  ST32(R(2),R(3));
L8c07149c:;
  R(6)=R(11);
  R(6)<<=2;
  ST32(R(15)+28,R(6));
  R(0)=LD32(R(15)+24);
  R(3)=LD32(R(15)+8);
  R(6)=LD32(R(6)+R(0));
  R(0)=LD32(R(15)+28);
  R(5)=LD32(R(3)+R(0));
  { c->pr=0x8c0714b0u; R(4)=R(8); f_8c070906(c); }
  R(11)+=0xffffffffu;
  c->t=(int32_t)R(11)>=0;
  R(14)=R(11);
  { uint32_t k=!c->t; R(14)<<=2; if(k) goto L8c0714ea; }
L8c0714ba:;
  R(0)=LD32(R(15)+24);
  R(6)=LD32(R(14)+R(0));
  R(0)=LD32(R(15)+8);
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0714c6u; R(4)=R(8); f_8c070906(c); }
  R(2)=LD32(R(15)+16);
  R(2)+=R(14);
  R(3)=LD32(R(2)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(12)=LD32(R(15)+12);
  R(7)=LD32(R(15)+16);
  R(12)+=R(14);
  R(7)+=R(14);
  R(5)=LD32(R(12));
  R(6)=LD32(R(12)+4);
  R(7)=LD32(R(7)+4);
  { c->pr=0x8c0714e0u; R(4)=R(8); f_8c070a9a(c); }
  R(15)+=0x4u;
  R(11)+=0xffffffffu;
  c->t=(int32_t)R(11)>=0;
  { uint32_t k=c->t; R(14)+=0xfffffffcu; if(k) goto L8c0714ba; }
L8c0714ea:;
  R(3)=LD32(R(15)+16);
  R(2)=LD32(R(3));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+4);
  R(6)=LD32(R(15)+12);
  R(5)=LD32(R(13)+R(0));
  R(7)=LD32(R(15)+16);
  R(5)=LD32(R(5)+12);
  R(7)=LD32(R(7));
  R(6)=LD32(R(6));
  { c->pr=0x8c071502u; R(4)=R(8); f_8c070a9a(c); }
  R(15)+=0x4u;
L8c071504:;
  R(14)=0x8c0bbbfcu;
  R(13)=0x8c064eb8u;
  {  goto L8c071540; }
L8c071540:;
  R(6)=0x30du;
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071548u; R(4)=R(15); sh4_call(c,tg); }
  R(6)=0x30eu;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071552u; R(4)+=0x8u; sh4_call(c,tg); }
  R(6)=0x30fu;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c07155cu; R(4)+=0x18u; sh4_call(c,tg); }
  R(6)=0x310u;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071566u; R(4)+=0x10u; sh4_call(c,tg); }
  R(6)=0x311u;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071570u; R(4)+=0xcu; sh4_call(c,tg); }
  R(0)=R(8);
  { f_8c071572(c); return; }
}
void f_8c071540(SH4Ctx *c) {
  R(6)=0x30du;
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071548u; R(4)=R(15); sh4_call(c,tg); }
  R(6)=0x30eu;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071552u; R(4)+=0x8u; sh4_call(c,tg); }
  R(6)=0x30fu;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c07155cu; R(4)+=0x18u; sh4_call(c,tg); }
  R(6)=0x310u;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071566u; R(4)+=0x10u; sh4_call(c,tg); }
  R(6)=0x311u;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c071570u; R(4)+=0xcu; sh4_call(c,tg); }
  R(0)=R(8);
  { f_8c071572(c); return; }
}
void f_8c071572(SH4Ctx *c) {
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071586(SH4Ctx *c) {
  R(0)=LD32(R(4));
  { R(0)=LD32(R(0)+12); return; }
}
void f_8c07158c(SH4Ctx *c) {
  R(0)=LD32(R(4)+4);
  { R(0)=LD32(R(0)+12); return; }
}
void f_8c071592(SH4Ctx *c) {
  { R(0)=LD32(R(4)+8); return; }
}
void f_8c071596(SH4Ctx *c) {
  c->t=(int32_t)R(5)>0;
  R(0)=0x0u;
  { uint32_t k=!c->t; R(7)=LD32(R(4)); if(k) goto L8c0715a6; }
L8c07159e:;
  R(0)+=0x1u;
  c->t=(int32_t)R(0)>=(int32_t)R(5);
  { uint32_t k=!c->t; R(7)=LD32(R(7)); if(k) goto L8c07159e; }
L8c0715a6:;
  R(3)=LD32(R(7)+16);
  ST32(R(6),R(3));
  { R(0)=LD32(R(7)+12); return; }
}
void f_8c0715e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x0u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=R(13); if(k) goto L8c071634; }
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c07160c;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bbbfcu;
  R(6)=0x364u;
  { c->pr=0x8c071608u; R(4)=0x1cu; f_8c064e90(c); }
  {  goto L8c071616; }
L8c07160c:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bbbfcu;
  R(6)=0x364u;
  { c->pr=0x8c071616u; R(4)=0x1cu; f_8c0199c4(c); }
L8c071616:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c071634;
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  R(3)=LD32(R(15)+4);
  ST32(R(14)+12,R(3));
  R(2)=LD32(R(15));
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(15));
  R(2)=0x8c09d4e0u;
  { c->pr=0x8c071632u; ST32(R(14)+20,R(3)); f_8c09d4e0(c); }
  ST32(R(14)+24,R(0));
L8c071634:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071640(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=R(4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c071662; }
  R(3)=0x8c09d518u;
  R(4)=LD32(R(15));
  { c->pr=0x8c071654u; R(4)=LD32(R(4)+24); f_8c09d518(c); }
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bbbfcu;
  R(6)=0x37eu;
  { c->pr=0x8c07165eu; R(4)=R(15); f_8c064eb8(c); }
  R(3)=0x0u;
  ST32(R(15),R(3));
L8c071662:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0716c4(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c0716dc; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0716dc;
  R(4)=LD32(R(15));
  R(3)=0x8c09d6aeu;
  R(4)=LD32(R(4)+24);
  { R(15)+=0x4u; { f_8c09d6ae(c); return; } }
L8c0716dc:;
  { R(15)+=0x4u; return; }
}
void f_8c0716e0(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0716e8;
  { R(0)=LD32(R(4)+24); return; }
L8c0716e8:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0716e8(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c0716ee(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c071706; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c071706;
  R(4)=LD32(R(15));
  R(3)=0x8c09d740u;
  R(4)=LD32(R(4)+24);
  { R(15)+=0x4u; { f_8c09d740(c); return; } }
L8c071706:;
  R(0)=0xffffffffu;
  { R(15)+=0x4u; return; }
}
void f_8c07170c(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c071724; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c071724;
  R(4)=LD32(R(15));
  R(3)=0x8c09d7a2u;
  R(4)=LD32(R(4)+24);
  { R(15)+=0x4u; { f_8c09d7a2(c); return; } }
L8c071724:;
  R(0)=0xffffffffu;
  { R(15)+=0x4u; return; }
}
void f_8c07172a(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c071780; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c071780;
  R(4)=LD32(R(15));
  R(3)=0x8c09d7cau;
  R(4)=LD32(R(4)+24);
  { R(15)+=0x4u; { f_8c09d7ca(c); return; } }
L8c071780:;
  R(0)=0xffffffffu;
  { R(15)+=0x4u; return; }
}
void f_8c071786(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c07179e; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07179e;
  R(4)=LD32(R(15));
  R(3)=0x8c09d7f0u;
  R(4)=LD32(R(4)+24);
  { R(15)+=0x4u; { f_8c09d7f0(c); return; } }
L8c07179e:;
  R(0)=0xffffffffu;
  { R(15)+=0x4u; return; }
}
void f_8c0717e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(13)=R(4);
  R(3)=0x8c09d404u;
  R(4)=R(5);
  R(12)=R(5);
  R(4)+=0xfffffff4u;
  { c->pr=0x8c071800u; R(4)=LD32(R(4)); f_8c09d404(c); }
  R(2)=0x8c019e40u;
  R(9)=R(0);
  { c->pr=0x8c071808u; R(4)=R(0); f_8c019e40(c); }
  R(4)=R(0);
  R(11)=R(4)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0718ba;
  R(8)=0x8c0bbc80u;
  c->t=(int32_t)R(11)>0;
  R(14)=0x0u;
  { uint32_t k=!c->t; R(10)=0x2u; if(k) goto L8c0718ba; }
L8c07181a:;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c071824u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=R(14)&0xFF;
  R(4)=(int32_t)(int8_t)LD8(R(9)+R(0));
  R(0)=0x8c0bb9c8u;
  R(5)=R(4)&0xFF;
  R(5)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(10))==0;
  if(c->t) goto L8c07183c;
  R(5)=R(4);
  { R(5)+=0xffffffe0u; goto L8c07183e; }
L8c07183c:;
  R(5)=R(4);
L8c07183e:;
  R(3)=0x8c0bbc74u;
  R(2)=(uint32_t)(int32_t)(int8_t)R(5);
  R(1)=(int32_t)(int8_t)LD8(R(3));
  c->t=R(2)==R(1);
  if(!c->t) goto L8c071864;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c071858; }
  fp_ld(c,3,R(15));
  fp_ftrc(c,3);
  { R(6)=c->fpul; goto L8c07185a; }
L8c071858:;
  R(6)=LD32(R(15));
L8c07185a:;
  R(2)=0x8c09da3cu;
  { c->pr=0x8c071860u; R(4)=R(14); f_8c09da3c(c); }
  {  goto L8c0718b2; }
L8c071864:;
  R(2)=0x8c0bbc78u;
  R(4)=(uint32_t)(int32_t)(int8_t)R(5);
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=R(4)==R(1);
  if(!c->t) goto L8c07188c;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c07187a; }
  { fp_ld(c,4,R(15)); goto L8c071882; }
L8c07187a:;
  R(1)=LD32(R(15));
  c->fpul=R(1);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c071882:;
  R(2)=0x8c09d9c0u;
  { c->pr=0x8c071888u; R(4)=R(14); f_8c09d9c0(c); }
  {  goto L8c0718b2; }
L8c07188c:;
  R(1)=0x8c0bbc7cu;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0718a2;
  R(3)=0x8c09db2cu;
  R(5)=R(13);
  R(6)=R(15);
  { c->pr=0x8c07189eu; R(4)=R(14); f_8c09db2c(c); }
  {  goto L8c0718b2; }
L8c0718a2:;
  R(3)=(int32_t)(int8_t)LD8(R(8));
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0718b2;
  R(3)=0x8c09dab4u;
  R(5)=R(13);
  R(6)=LD32(R(15));
  { c->pr=0x8c0718b2u; R(4)=R(14); f_8c09dab4(c); }
L8c0718b2:;
  R(14)+=0x1u;
  R(2)=R(14)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(11);
  if(!c->t) goto L8c07181a;
L8c0718ba:;
  R(0)=R(12);
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
void f_8c071920(SH4Ctx *c) {
  R(6)=LD32(R(4)+16);
  R(0)=(int32_t)(int8_t)LD8(R(6)+4);
  R(1)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(6)+5);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c07195a;
  R(2)=LD32(R(4)+16);
  R(7)=R(1)&0xFF;
  c->t=(int32_t)R(7)>0;
  R(4)=LD32(R(2));
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c07195a; }
L8c071938:;
  R(0)=0x64u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c071950;
  R(0)=0x65u;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)=R(5)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c071950;
  { R(0)=R(6); return; }
L8c071950:;
  R(6)+=0x1u;
  R(2)=R(6)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(7);
  { uint32_t k=!c->t; R(4)+=0x68u; if(k) goto L8c071938; }
L8c07195a:;
  R(0)=R(1);
  {  return; }
}
void f_8c071960(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(4)+16);
  R(0)=(int32_t)(int8_t)LD8(R(7)+4);
  R(13)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(7)+5);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0719a6;
  R(2)=LD32(R(4)+16);
  R(1)=R(13)&0xFF;
  c->t=(int32_t)R(1)>0;
  R(4)=LD32(R(2));
  { uint32_t k=!c->t; R(7)=0x0u; if(k) goto L8c0719a6; }
L8c07197a:;
  R(0)=0x64u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07199c;
  R(0)=0x65u;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)=R(5)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c07199c;
  R(0)=0x60u;
  R(2)=LD32(R(4)+R(0));
  c->t=R(2)==R(6);
  if(!c->t) goto L8c07199c;
  R(0)=R(7);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c07199c:;
  R(7)+=0x1u;
  R(2)=R(7)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  { uint32_t k=!c->t; R(4)+=0x68u; if(k) goto L8c07197a; }
L8c0719a6:;
  R(0)=R(13);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c0719ac(SH4Ctx *c) {
  R(6)=LD32(R(4)+16);
  R(0)=(int32_t)(int8_t)LD8(R(6)+4);
  R(7)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(6)+5);
  R(5)=R(7)&0xFF;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(5);
  if(c->t) goto L8c0719dc;
  R(6)=LD32(R(4)+16);
  c->t=(int32_t)R(5)>0;
  R(6)=LD32(R(6));
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c0719dc; }
L8c0719c6:;
  R(0)=0x64u;
  R(2)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0719d2;
  { R(0)=R(4); return; }
L8c0719d2:;
  R(4)+=0x1u;
  R(3)=R(4)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(5);
  { uint32_t k=!c->t; R(6)+=0x68u; if(k) goto L8c0719c6; }
L8c0719dc:;
  R(0)=R(7);
  {  return; }
}
void f_8c0719e2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x68u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(13)*(uint32_t)(uint16_t)R(2);
  R(14)=R(4);
  R(3)=LD32(R(14)+16);
  R(0)=0x8c2dd1b1u;
  R(3)=LD32(R(3));
  R(13)=c->macl;
  R(1)=(int32_t)(int8_t)LD8(R(0));
  R(0)=0x66u;
  R(2)=0x8c2dd1b0u;
  R(3)+=R(13);
  ST8(R(3)+R(0),R(1));
  R(0)=0x67u;
  R(3)=LD32(R(14)+16);
  R(1)=LD32(R(3));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(1)+=R(13);
  ST8(R(1)+R(0),R(3));
  R(1)=LD32(R(14)+16);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=LD32(R(1));
  R(1)=0x64u;
  R(3)+=R(13);
  R(1)+=R(3);
  ST8(R(1),R(0));
  R(0)=0x60u;
  R(3)=LD32(R(14)+16);
  R(1)=LD32(R(3));
  R(1)+=R(13);
  ST32(R(1)+R(0),R(7));
  R(0)=0x65u;
  R(3)=LD32(R(14)+16);
  R(5)=0x0u;
  R(1)=LD32(R(3));
  R(3)=0x8c0686b8u;
  R(1)+=R(13);
  ST8(R(1)+R(0),R(6));
  R(6)=0x60u;
  R(4)=LD32(R(14)+16);
  R(4)=LD32(R(4));
  R(4)+=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0686b8(c); return; } }
}
void f_8c071a60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  ST8(R(15),R(5));
  R(2)=0x68u;
  ST32(R(15)+4,R(6));
  R(4)=LD32(R(14)+16);
  R(0)=(int32_t)(int8_t)LD8(R(4)+6);
  R(1)=LD32(R(4));
  R(5)=R(0);
  R(3)=R(5)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(3)*(uint32_t)(uint16_t)R(2);
  R(0)=0x64u;
  R(3)=c->macl;
  R(3)+=R(1);
  R(0)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c071a9e;
  R(3)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(7)=LD32(R(15)+8);
  R(6)=R(0);
  { c->pr=0x8c071a94u; R(4)=R(14); f_8c0719e2(c); }
  R(15)+=0x4u;
  R(3)=LD32(R(14)+16);
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  R(0)+=0x1u;
  ST8(R(3)+5,R(0));
L8c071a9e:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071aa6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(2)=0x68u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+16);
  R(0)=(int32_t)(int8_t)LD8(R(4)+6);
  R(1)=LD32(R(4));
  R(5)=R(0);
  R(3)=R(5)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(3)*(uint32_t)(uint16_t)R(2);
  R(0)=0x64u;
  R(3)=c->macl;
  R(3)+=R(1);
  R(0)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c071adc;
  R(3)=0x0u;
  R(6)=R(3);
  R(7)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c071ad2u; R(4)=R(14); f_8c0719e2(c); }
  R(15)+=0x4u;
  R(3)=LD32(R(14)+16);
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  R(0)+=0xffffffffu;
  ST8(R(3)+5,R(0));
L8c071adc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071ae2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=R(4);
  ST8(R(15),R(5));
  R(4)=LD32(R(12)+16);
  R(0)=(int32_t)(int8_t)LD8(R(4)+4);
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+5);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c071b40;
  R(14)=LD32(R(12)+16);
  R(10)=R(5)&0xFF;
  c->t=(int32_t)R(10)>0;
  R(11)=0x0u;
  R(14)=LD32(R(14));
  { uint32_t k=!c->t; R(13)=R(11); if(k) goto L8c071b40; }
L8c071b0e:;
  R(0)=0x64u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c071b36;
  R(0)=0x65u;
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=R(3)>R(2);
  if(!c->t) goto L8c071b36;
  R(7)=0x0u;
  R(5)=R(13);
  R(6)=R(7);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c071b2cu; R(4)=R(12); f_8c0719e2(c); }
  R(15)+=0x4u;
  R(3)=LD32(R(12)+16);
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  R(0)+=0xffffffffu;
  ST8(R(3)+5,R(0));
L8c071b36:;
  R(13)+=0x1u;
  R(3)=R(13)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(10);
  { uint32_t k=!c->t; R(14)+=0x68u; if(k) goto L8c071b0e; }
L8c071b40:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071b50(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(11)+16);
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c071baa;
  R(4)=LD32(R(11)+16);
  R(10)=0x0u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+4);
  R(13)=LD32(R(4));
  R(14)=R(0);
  R(3)=R(14)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(12)=R(10); if(k) goto L8c071ba4; }
L8c071b78:;
  R(0)=0x64u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c071b98;
  R(0)=0x65u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c071b98;
  R(7)=0x0u;
  R(5)=R(12);
  R(6)=R(7);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c071b94u; R(4)=R(11); f_8c0719e2(c); }
  R(15)+=0x4u;
  R(14)+=0xffffffffu;
L8c071b98:;
  R(12)+=0x1u;
  R(3)=R(14)&0xFF;
  R(2)=R(12)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(13)+=0x68u; if(k) goto L8c071b78; }
L8c071ba4:;
  R(3)=LD32(R(11)+16);
  R(0)=R(14);
  ST8(R(3)+5,R(0));
L8c071baa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071bb8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(9)+16);
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(13)=R(11); if(k) goto L8c071bd8; }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c071c2a;
L8c071bd8:;
  R(4)=LD32(R(9)+16);
  R(0)=(int32_t)(int8_t)LD8(R(4)+4);
  R(14)=LD32(R(4));
  R(12)=R(0);
  R(3)=R(12)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(10)=R(11); if(k) goto L8c071c24; }
L8c071be8:;
  R(0)=0x64u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c071c18;
  R(0)=0x65u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c071c18;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c071c04;
  R(0)=0x60u;
  R(2)=LD32(R(14)+R(0));
  c->t=R(2)>=R(13);
  if(c->t) goto L8c071c08;
L8c071c04:;
  R(0)=0x60u;
  R(13)=LD32(R(14)+R(0));
L8c071c08:;
  R(7)=0x0u;
  R(5)=R(10);
  R(6)=R(7);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c071c14u; R(4)=R(9); f_8c0719e2(c); }
  R(15)+=0x4u;
  R(12)+=0xffffffffu;
L8c071c18:;
  R(10)+=0x1u;
  R(3)=R(12)&0xFF;
  R(2)=R(10)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(14)+=0x68u; if(k) goto L8c071be8; }
L8c071c24:;
  R(3)=LD32(R(9)+16);
  R(0)=R(12);
  ST8(R(3)+5,R(0));
L8c071c2a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071c3c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  R(0)=R(13);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12)+16);
  ST8(R(3)+5,R(0));
  R(3)=LD32(R(12)+16);
  ST8(R(3)+6,R(0));
  R(4)=LD32(R(12)+16);
  R(0)=(int32_t)(int8_t)LD8(R(4)+4);
  R(4)=R(0);
  R(11)=R(4)&0xFF;
  c->t=(int32_t)R(11)>0;
  { uint32_t k=!c->t; R(14)=R(13); if(k) goto L8c071c78; }
L8c071c62:;
  R(7)=0x0u;
  R(5)=R(14);
  R(6)=R(7);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c071c6eu; R(4)=R(12); f_8c0719e2(c); }
  R(14)+=0x1u;
  R(3)=R(14)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(11);
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c071c62; }
L8c071c78:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071c84(SH4Ctx *c) {
  R(2)=0x68u;
  R(3)=LD32(R(4)+16);
  R(6)=R(5)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(6)*(uint32_t)(uint16_t)R(2);
  R(3)=LD32(R(3));
  R(0)=0x66u;
  R(6)=c->macl;
  R(3)+=R(6);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(0)=0x67u;
  R(3)=0x8c2dd1b1u;
  ST8(R(3),R(1));
  R(2)=LD32(R(4)+16);
  R(1)=LD32(R(2));
  R(1)+=R(6);
  R(2)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(1)=0x8c2dd1b0u;
  ST8(R(1),R(2));
  R(2)=0x60u;
  R(0)=LD32(R(4)+16);
  R(0)=LD32(R(0));
  R(0)+=R(6);
  { R(0)=LD32(R(2)+R(0)); return; }
}
void f_8c071ce0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==9;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c071cf2; }
  { R(4)=LD32(R(14)); goto L8c071cfe; }
L8c071cf2:;
  c->t=(int32_t)R(0)==36;
  if(!c->t) goto L8c071cfe;
  R(2)=0x8c082fa0u;
  { c->pr=0x8c071cfcu; R(4)=LD32(R(14)); f_8c082fa0(c); }
  R(4)=R(0);
L8c071cfe:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071d06(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=LD32(R(4)+52);
  R(12)=R(4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c071df2; }
  c->t=R(14)==R(13);
  if(!c->t) goto L8c071d82;
  R(2)=0x8c05e6eau;
  R(5)=R(14);
  { c->pr=0x8c071d26u; R(4)=R(15); f_8c05e6ea(c); }
  R(0)=0x4u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(13));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c071dd8; }
L8c071d82:;
  R(0)=0x4u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(13));
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x14u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(13));
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x18u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
L8c071dd8:;
  R(0)=0x24u;
  R(3)=0x8c05e5f4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  R(5)=R(13);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(13));
  R(6)=LD32(R(12)+36);
  R(6)+=0x58u;
  { c->pr=0x8c071deeu; R(4)=R(13); f_8c05e5f4(c); }
  {  goto L8c071dfc; }
L8c071df2:;
  R(5)=LD32(R(12)+36);
  R(3)=0x8c05e6eau;
  R(5)+=0x58u;
  { c->pr=0x8c071dfcu; R(4)=R(13); f_8c05e6ea(c); }
L8c071dfc:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c071e08(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(5)=R(15);
  R(4)=LD32(R(15)+4);
  R(5)+=0x14u;
  R(3)=0x8c0163ceu;
  { c->pr=0x8c071e1cu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(3)=0x8c09d954u;
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c071e26u; R(4)=LD32(R(15)); f_8c09d954(c); }
  R(5)=R(15);
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x8u;
  R(5)+=0x14u;
  { c->pr=0x8c071e36u; R(4)+=0x14u; f_8c05e612(c); }
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_mov(c,0,3); return; }
}
void f_8c071e80(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(5)=R(15);
  R(4)=LD32(R(15)+4);
  R(5)+=0x14u;
  R(3)=0x8c0163ceu;
  { c->pr=0x8c071e94u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0x8u;
  { c->pr=0x8c071ea0u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=R(15);
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x8u;
  R(5)+=0x14u;
  { c->pr=0x8c071eb0u; R(4)+=0x14u; f_8c05e612(c); }
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_mov(c,0,3); return; }
}
void f_8c071ed2(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,4,R(4));
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,8,4);
  fp_arith(c,2,8,4);
  fp_mov(c,9,5);
  fp_arith(c,2,9,5);
  fp_ld(c,6,R(0)+R(4));
  R(0)=R(5)&0xFF;
  c->t=(int32_t)R(0)==1;
  fp_mov(c,7,6);
  { uint32_t k=c->t; fp_arith(c,2,7,6); if(k) goto L8c071f0a; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c071f0e;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c071f12;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c071f16;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c071f1a;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c071f22;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c071f2e;
  {  goto L8c071f2a; }
L8c071f0a:;
  { fp_mov(c,0,4); return; }
L8c071f0e:;
  { fp_mov(c,0,5); return; }
L8c071f12:;
  { fp_mov(c,0,6); return; }
L8c071f16:;
  { fp_arith(c,0,8,9); goto L8c071f1c; }
L8c071f1a:;
  fp_arith(c,0,8,7);
L8c071f1c:;
  fp_unary(c,2,8);
  { fp_mov(c,0,8); return; }
L8c071f22:;
  fp_arith(c,0,9,7);
  fp_unary(c,2,9);
  { fp_mov(c,0,9); return; }
L8c071f2a:;
  { c->fr[0]=0x00000000u; return; }
L8c071f2e:;
  R(0)=0x4u;
  fp_ld(c,5,R(4));
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(4));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,0,3);
  {  return; }
}
void f_8c071f0e(SH4Ctx *c) {
  { fp_mov(c,0,5); return; }
}
void f_8c071f12(SH4Ctx *c) {
  { fp_mov(c,0,6); return; }
}
void f_8c071f16(SH4Ctx *c) {
  { fp_arith(c,0,8,9); goto L8c071f1c; }
L8c071f1c:;
  fp_unary(c,2,8);
  { fp_mov(c,0,8); return; }
}
void f_8c071f22(SH4Ctx *c) {
  fp_arith(c,0,9,7);
  fp_unary(c,2,9);
  { fp_mov(c,0,9); return; }
}
void f_8c071f2a(SH4Ctx *c) {
  { c->fr[0]=0x00000000u; return; }
}
void f_8c071f2e(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,5,R(4));
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(4));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,0,3);
  {  return; }
}
void f_8c071f80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff7cu;
  R(15)+=R(0);
  R(14)=R(6);
  R(0)=R(14)&0xFF;
  c->t=(R(0)&0x80)==0;
  ST32(R(15),R(4));
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c071faa; }
  R(5)=R(15);
  R(5)+=0x78u;
  { c->pr=0x8c071f9eu; R(4)=LD32(R(15)); f_8c071d06(c); }
  R(5)=R(15);
  R(5)+=0x6cu;
  { c->pr=0x8c071fa6u; R(4)=R(13); f_8c071d06(c); }
  {  goto L8c071fc0; }
L8c071faa:;
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0x78u;
  { c->pr=0x8c071fb6u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x6cu;
  { c->pr=0x8c071fc0u; R(4)=LD32(R(13)+36); f_8c0163ce(c); }
L8c071fc0:;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x6cu;
  R(5)+=0x78u;
  { c->pr=0x8c071fd0u; R(4)+=0x78u; f_8c05e612(c); }
  R(2)=0x7u;
  R(14)&=R(2);
  R(0)=R(14)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c071ff4;
  R(1)=0x8c0151c8u;
  R(4)=R(15);
  R(5)=LD32(R(13)+36);
  { c->pr=0x8c071fe4u; R(4)+=0x4u; f_8c0151c8(c); }
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x78u;
  R(5)+=0x4u;
  { c->pr=0x8c071ff4u; R(4)+=0x78u; f_8c014f10(c); }
L8c071ff4:;
  R(4)=R(15);
  R(5)=R(14);
  { c->pr=0x8c071ffcu; R(4)+=0x78u; f_8c071ed2(c); }
  R(1)=0x84u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c072008(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(13)=R(6);
  R(0)=R(13)&0xFF;
  c->t=(R(0)&0x80)==0;
  R(14)=R(4);
  { uint32_t k=c->t; R(12)=R(5); if(k) goto L8c072060; }
  R(5)=R(15);
  R(5)+=0x68u;
  { c->pr=0x8c072026u; R(4)=R(12); f_8c071d06(c); }
  {  goto L8c07206a; }
L8c072060:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x68u;
  { c->pr=0x8c07206au; R(4)=LD32(R(12)+36); f_8c0163ce(c); }
L8c07206a:;
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x68u;
  { c->pr=0x8c072076u; R(4)=R(14); f_8c05e612(c); }
  R(2)=0x7u;
  R(13)&=R(2);
  R(0)=R(13)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c072092;
  R(1)=0x8c0151c8u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c072088u; R(4)=R(15); f_8c0151c8(c); }
  R(3)=0x8c014f10u;
  R(5)=R(15);
  R(6)=R(14);
  { c->pr=0x8c072092u; R(4)=R(14); f_8c014f10(c); }
L8c072092:;
  R(5)=R(13);
  { c->pr=0x8c072098u; R(4)=R(14); f_8c071ed2(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c072060(SH4Ctx *c) {
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x68u;
  { c->pr=0x8c07206au; R(4)=LD32(R(12)+36); f_8c0163ce(c); }
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x68u;
  { c->pr=0x8c072076u; R(4)=R(14); f_8c05e612(c); }
  R(2)=0x7u;
  R(13)&=R(2);
  R(0)=R(13)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c072092;
  R(1)=0x8c0151c8u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c072088u; R(4)=R(15); f_8c0151c8(c); }
  R(3)=0x8c014f10u;
  R(5)=R(15);
  R(6)=R(14);
  { c->pr=0x8c072092u; R(4)=R(14); f_8c014f10(c); }
L8c072092:;
  R(5)=R(13);
  { c->pr=0x8c072098u; R(4)=R(14); f_8c071ed2(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0720a4(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(0)=0x4u;
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  c->fr[3]=0x00000000u;
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,15,R(4));
  fp_ld(c,14,R(0)+R(4));
  R(0)=0x8c072150u;
  fp_cmp(c,0,15,3);
  { uint32_t k=c->t; fp_ld(c,13,R(0)); if(k) goto L8c0720c8; }
  R(2)=0x8c09cf84u;
  fp_mov(c,4,14);
  { c->pr=0x8c0720c4u; fp_arith(c,3,4,15); f_8c09cf84(c); }
  { fp_mov(c,4,0); goto L8c0720d4; }
L8c0720c8:;
  fp_cmp(c,1,3,14);
  if(!c->t) goto L8c0720d2;
  R(0)=0x8c072158u;
  { fp_ld(c,4,R(0)); goto L8c0720d4; }
L8c0720d2:;
  fp_mov(c,4,13);
L8c0720d4:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c0720e0;
  R(0)=0x8c07215cu;
  fp_ld(c,2,R(0));
  fp_arith(c,0,4,2);
L8c0720e0:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  R(0)=0x8c072160u;
  { uint32_t k=!c->t; fp_ld(c,5,R(0)); if(k) goto L8c0720ec; }
  fp_arith(c,0,4,5);
L8c0720ec:;
  fp_arith(c,0,4,13);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0720f8;
  R(0)=0x8c072164u;
  fp_ld(c,3,R(0));
  fp_arith(c,0,4,3);
L8c0720f8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_mov(c,0,4);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c072104(SH4Ctx *c) {
  fp_mov(c,3,4);
  fp_mov(c,4,5);
  fp_arith(c,1,4,3);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c072120;
  R(0)=0x8c07215cu;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c07212e;
  R(0)=0x8c072164u;
  fp_ld(c,1,R(0));
  { fp_arith(c,0,4,1); goto L8c07212e; }
L8c072120:;
  R(0)=0x8c072168u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c07212e;
  R(0)=0x8c072160u;
  fp_ld(c,1,R(0));
  fp_arith(c,0,4,1);
L8c07212e:;
  { fp_mov(c,0,4); return; }
}
void f_8c072180(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+4);
  R(14)=0x0u;
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c0721a2; }
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c072198u; R(4)=LD32(R(15)); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0721a2; }
  R(14)=0x22cu;
  R(14)+=R(4);
L8c0721a2:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0721ae;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0721aeu; R(4)=0x3au; f_8c074080(c); }
L8c0721ae:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0721b8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c0721d2; }
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0721ccu; R(4)=LD32(R(15)); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0721da; }
L8c0721d2:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0721da:;
  R(0)=0x170u;
  R(0)=LD32(R(4)+R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c072220(SH4Ctx *c) {
  fp_arith(c,1,6,4);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c072234;
L8c072228:;
  fp_mov(c,3,6);
  fp_mov(c,6,5);
  fp_arith(c,0,6,3);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,6);
  if(c->t) goto L8c072228;
L8c072234:;
  fp_cmp(c,1,5,6);
  if(c->t) goto L8c07223e;
L8c072238:;
  fp_arith(c,1,6,5);
  fp_cmp(c,1,5,6);
  if(!c->t) goto L8c072238;
L8c07223e:;
  fp_mov(c,3,6);
  fp_mov(c,6,4);
  fp_arith(c,0,6,3);
  { fp_mov(c,0,6); return; }
}
void f_8c072248(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_mov(c,15,5);
  fp_mov(c,14,4);
  { c->pr=0x8c07225au; fp_ld(c,6,R(14)); f_8c072220(c); }
  R(0)=0x4u;
  fp_mov(c,5,15);
  fp_st(c,0,R(14));
  fp_ld(c,6,R(0)+R(14));
  { c->pr=0x8c072266u; fp_mov(c,4,14); f_8c072220(c); }
  R(0)=0x4u;
  fp_mov(c,5,15);
  fp_st(c,0,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,6,R(0)+R(14));
  { c->pr=0x8c072274u; fp_mov(c,4,14); f_8c072220(c); }
  R(0)=0x8u;
  fp_st(c,0,R(0)+R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c072282(SH4Ctx *c) {
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==8;
  R(6)=c->t;
  R(3)=R(6)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0722be;
  R(0)=0x8c072320u;
  fp_ld(c,4,R(4));
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0722a8;
  R(0)=0x8c072324u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0722a8;
  fp_ld(c,3,R(4));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c0722b8; }
L8c0722a8:;
  fp_ld(c,2,R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0722b6;
  R(5)=0x7fffffffu;
  {  goto L8c0722b8; }
L8c0722b6:;
  R(5)=0x80000001u;
L8c0722b8:;
  R(3)=0x6u;
  ST32(R(4),R(5));
  ST32(R(4)+12,R(3));
L8c0722be:;
  { R(0)=R(6); return; }
}
void f_8c0722c2(SH4Ctx *c) {
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==8;
  R(6)=c->t;
  R(3)=R(6)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0722de;
  R(0)=LD32(R(5)+12);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0722f2;
  R(3)=LD32(R(5));
  c->fpul=R(3);
  fp_float(c,3);
  { fp_st(c,3,R(5)); goto L8c0722f2; }
L8c0722de:;
  R(0)=LD32(R(5)+12);
  c->t=(int32_t)R(0)==8;
  R(6)=c->t;
  R(2)=R(6)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0722f2;
  R(3)=LD32(R(4));
  c->fpul=R(3);
  fp_float(c,3);
  fp_st(c,3,R(4));
L8c0722f2:;
  { R(0)=R(6); return; }
}
void f_8c0722f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c04b6c0u;
  R(14)=R(4);
  ST32(R(15),R(5));
  { c->pr=0x8c072306u; R(4)=R(14); f_8c04b6c0(c); }
  R(3)=0x8c01638au;
  R(5)=LD32(R(15));
  { c->pr=0x8c07230eu; R(4)=LD32(R(14)+36); f_8c01638a(c); }
  R(3)=0x8c01638au;
  R(5)=LD32(R(15));
  { c->pr=0x8c072316u; R(4)=LD32(R(14)+32); f_8c01638a(c); }
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c072340(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(15));
  R(1)=LD32(R(2)+8);
  c->t=(R(1)&R(1))==0;
  ST32(R(3),R(1));
  if(c->t) goto L8c072372;
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(15));
  { c->pr=0x8c07235cu; R(4)=LD32(R(4)); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c072372; }
  R(2)=0x22cu;
  R(3)=LD32(R(15)+4);
  R(2)+=R(4);
  ST32(R(3),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c072372:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c072372(SH4Ctx *c) {
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c07237c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  fp_st(c,4,R(15));
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0723a4;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c072390u;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0723a4;
  R(3)=0x8c090220u;
  { c->pr=0x8c07239cu; fp_ld(c,4,R(15)); f_8c090220(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c0723a4:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0723e0(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(0)=0x8c0724c0u;
  c->fr[3]=0x00000000u;
  R(3)=R(3)&0xFF;
  fp_ld(c,4,R(0));
  c->fpul=R(3);
  R(0)=0x8c0724c4u;
  fp_ld(c,8,R(0));
  c->fr[9]=0x3F800000u;
  fp_float(c,5);
  fp_cmp(c,1,3,5);
  { uint32_t k=!c->t; c->fr[7]=0x00000000u; if(k) goto L8c0723fe; }
  { fp_mov(c,6,7); goto L8c07240a; }
L8c0723fe:;
  fp_cmp(c,1,5,8);
  if(!c->t) goto L8c072406;
  { fp_mov(c,6,9); goto L8c07240a; }
L8c072406:;
  fp_mov(c,6,5);
  fp_arith(c,2,6,4);
L8c07240a:;
  c->fr[3]=0x00000000u;
  fp_st(c,6,R(5));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=R(0)&0xFF;
  c->fpul=R(3);
  fp_float(c,5);
  fp_cmp(c,1,3,5);
  if(!c->t) goto L8c07241e;
  { fp_mov(c,6,7); goto L8c07242a; }
L8c07241e:;
  fp_cmp(c,1,5,8);
  if(!c->t) goto L8c072426;
  { fp_mov(c,6,9); goto L8c07242a; }
L8c072426:;
  fp_mov(c,6,5);
  fp_arith(c,2,6,4);
L8c07242a:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_st(c,6,R(0)+R(5));
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=R(0)&0xFF;
  c->fpul=R(3);
  fp_float(c,5);
  fp_cmp(c,1,3,5);
  if(!c->t) goto L8c072440;
  { fp_mov(c,6,7); goto L8c07244c; }
L8c072440:;
  fp_cmp(c,1,5,8);
  if(!c->t) goto L8c072448;
  { fp_mov(c,6,9); goto L8c07244c; }
L8c072448:;
  fp_mov(c,6,5);
  fp_arith(c,2,6,4);
L8c07244c:;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_st(c,6,R(0)+R(5));
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(3)=R(0)&0xFF;
  c->fpul=R(3);
  fp_float(c,5);
  fp_cmp(c,1,3,5);
  if(!c->t) goto L8c072462;
  { fp_mov(c,6,7); goto L8c07246e; }
L8c072462:;
  fp_cmp(c,1,5,8);
  if(!c->t) goto L8c07246a;
  { fp_mov(c,6,9); goto L8c07246e; }
L8c07246a:;
  fp_mov(c,6,5);
  fp_arith(c,2,6,4);
L8c07246e:;
  R(0)=0xcu;
  { fp_st(c,6,R(0)+R(5)); return; }
}
void f_8c072474(SH4Ctx *c) {
  R(0)=0x8c0724c4u;
  fp_ld(c,3,R(4));
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(5),R(3));
  R(3)=0x27u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(5)+1,R(0));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(5)+2,R(0));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(5)+3,R(0));
  { ST32(R(5)+12,R(3)); return; }
}
void f_8c0724e0(SH4Ctx *c) {
  R(6)=R(5)&0xFF;
  R(0)=R(4);
  R(6)+=0xffffffffu;
  R(6)<<=2;
  R(1)=0x19u;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c072594;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0724fcu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0724fau+R(0));  switch(tg){ case 0x8c07252eu: goto L8c07252e; case 0x8c072532u: goto L8c072532; case 0x8c072536u: goto L8c072536; case 0x8c07253au: goto L8c07253a; case 0x8c07253eu: goto L8c07253e; case 0x8c072542u: goto L8c072542; case 0x8c072546u: goto L8c072546; case 0x8c07254au: goto L8c07254a; case 0x8c07254eu: goto L8c07254e; case 0x8c072552u: goto L8c072552; case 0x8c072556u: goto L8c072556; case 0x8c07255au: goto L8c07255a; case 0x8c07255eu: goto L8c07255e; case 0x8c072562u: goto L8c072562; case 0x8c072580u: goto L8c072580; case 0x8c07258eu: goto L8c07258e; default: sh4_bad_jump(c,0x8c0724f6u,tg); return; } }
L8c07252e:;
  {  goto L8c072562; }
L8c072532:;
  {  goto L8c072562; }
L8c072536:;
  { R(0)=0x1u; return; }
L8c07253a:;
  { R(0)=0x2u; return; }
L8c07253e:;
  {  goto L8c072562; }
L8c072542:;
  {  goto L8c072562; }
L8c072546:;
  {  goto L8c072562; }
L8c07254a:;
  {  goto L8c072562; }
L8c07254e:;
  {  goto L8c072562; }
L8c072552:;
  {  goto L8c072562; }
L8c072556:;
  {  goto L8c072562; }
L8c07255a:;
  { R(0)=R(6); goto L8c07258a; }
L8c07255e:;
  { R(0)=0xcu; return; }
L8c072562:;
  { R(0)=0x4u; return; }
L8c072580:;
  R(0)=R(5)&0xFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
L8c07258a:;
  { R(0)+=0x8u; return; }
L8c07258e:;
  R(0)=R(6);
  { R(0)+=0xcu; return; }
L8c072594:;
  R(0)=0x0u;
  {  return; }
}
void f_8c07259a(SH4Ctx *c) {
  fp_ld(c,4,R(4));
  R(3)=0x8u;
  fp_st(c,4,R(6));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0725a6(SH4Ctx *c) {
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0725b2;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0725b6;
L8c0725b2:;
  { R(3)=0x0u; goto L8c0725b8; }
L8c0725b6:;
  R(3)=LD32(R(4)+4);
L8c0725b8:;
  c->t=(R(4)&R(4))==0;
  ST32(R(6),R(3));
  R(2)=0xbu;
  { uint32_t k=!c->t; ST32(R(6)+12,R(2)); if(k) goto L8c0725c6; }
  { R(0)=0x0u; return; }
L8c0725c6:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0725c6(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c0725cc(SH4Ctx *c) {
  R(4)=LD32(R(4));
  R(3)=0x19u;
  c->t=(R(4)&R(4))==0;
  ST32(R(6),R(4));
  { uint32_t k=!c->t; ST32(R(6)+12,R(3)); if(k) goto L8c0725dc; }
  { R(0)=0x0u; return; }
L8c0725dc:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0725dc(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c0725e2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c05e6eau;
  R(5)=R(4);
  ST32(R(15),R(6));
  { c->pr=0x8c0725f0u; R(4)=R(6); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0725fe(SH4Ctx *c) {
  R(4)=LD32(R(4));
  R(3)=0x2bu;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c07260a(SH4Ctx *c) {
  R(4)=LD32(R(4));
  R(3)=0x2cu;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c072640(SH4Ctx *c) {
  R(4)=LD32(R(4));
  R(3)=0xau;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c07264c(SH4Ctx *c) {
  R(4)=LD32(R(4));
  R(3)=0x18u;
  c->t=(R(4)&R(4))==0;
  ST32(R(6),R(4));
  { uint32_t k=!c->t; ST32(R(6)+12,R(3)); if(k) goto L8c07265c; }
  { R(0)=0x0u; return; }
L8c07265c:;
  R(0)=0x1u;
  {  return; }
}
void f_8c07265c(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c072662(SH4Ctx *c) {
  R(4)=LD32(R(4));
  R(3)=0x22u;
  c->t=(R(4)&R(4))==0;
  ST32(R(6),R(4));
  { uint32_t k=!c->t; ST32(R(6)+12,R(3)); if(k) goto L8c072672; }
  { R(0)=0x0u; return; }
L8c072672:;
  R(0)=0x1u;
  {  return; }
}
void f_8c072672(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c072678(SH4Ctx *c) {
  R(4)=LD32(R(4));
  R(3)=0x24u;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  ST32(R(6),R(4));
  { uint32_t k=!c->t; ST32(R(6)+12,R(3)); if(k) goto L8c07268a; }
  { R(0)=0x0u; return; }
L8c07268a:;
  R(0)=0x1u;
  {  return; }
}
void f_8c07268a(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c072690(SH4Ctx *c) {
  R(3)=0xcu;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c07269a(SH4Ctx *c) {
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(3)=0x6u;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0726a6(SH4Ctx *c) {
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(3)=0x6u;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0726b2(SH4Ctx *c) {
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(3)=0x6u;
  R(4)=R(4)&0xFF;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0726c0(SH4Ctx *c) {
  R(4)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0x6u;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0726cc(SH4Ctx *c) {
  R(4)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0x6u;
  R(4)=R(4)&0xFFFF;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0726da(SH4Ctx *c) {
  R(4)=LD32(R(4));
  R(3)=0x6u;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0726e6(SH4Ctx *c) {
  R(4)=LD32(R(4));
  R(3)=0x6u;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0726f2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x26u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(4));
  R(2)=0x8c05a3e0u;
  ST32(R(6),R(14));
  ST32(R(6)+12,R(3));
  { c->pr=0x8c072704u; R(4)=R(14); f_8c05a3e0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07270e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(4);
  R(0)=R(5);
  ST8(R(15)+4,R(0));
  R(3)=LD32(R(14));
  R(0)=0x8c0c7744u;
  ST32(R(15),R(3));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(1)=LD32(R(3)+R(0));
  ST32(R(15)+8,R(1));
  R(3)=R(1);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==11;
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c072744; }
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(0)=R(0)&0xFF;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  { R(4)=R(0); goto L8c07274a; }
L8c072744:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)=R(0);
  R(4)=R(4)&0xFF;
L8c07274a:;
  R(1)=R(14);
  R(1)+=0x8u;
  R(4)<<=2;
  { uint32_t tg=R(3); c->pr=0x8c072754u; R(4)+=R(1); sh4_call(c,tg); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07275c(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(7));
  R(4)=R(4)&0xFF;
  R(7)=LD32(R(6)+12);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=0x8c0c7744u;
  R(3)=LD32(R(7));
  R(2)=LD32(R(3));
  R(3)=LD32(R(2)+4);
  R(4)+=R(3);
  ST32(R(15),R(4));
  R(4)=LD32(R(4)+4);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  R(2)=LD32(R(4)+R(0));
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(15));
  R(2)=LD32(R(7)+8);
  R(3)=LD32(R(3));
  R(2)+=R(3);
  R(4)=R(2);
  ST32(R(15),R(2));
  R(0)=LD32(R(15)+8);
  R(6)=LD32(R(15)+4);
  { uint32_t tg=R(0); R(15)+=0xcu; sh4_call(c,tg); return; }
}
void f_8c072796(SH4Ctx *c) {
  R(0)=LD32(R(6)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0727a0;
  { fp_ld(c,3,R(6)); goto L8c0727a6; }
L8c0727a0:;
  R(2)=LD32(R(6));
  c->fpul=R(2);
  fp_float(c,3);
L8c0727a6:;
  fp_st(c,3,R(4));
  { R(0)=0x1u; return; }
}
void f_8c0727ac(SH4Ctx *c) {
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(0)=0x1u; if(k) goto L8c0727bc; }
  R(2)=LD32(R(5)+4);
  R(3)=LD32(R(2)+12);
  { ST32(R(4),R(3)); goto L8c0727c0; }
L8c0727bc:;
  R(1)=0x0u;
  ST32(R(4),R(1));
L8c0727c0:;
  {  return; }
}
void f_8c0727c4(SH4Ctx *c) {
  R(5)=LD32(R(6));
  ST32(R(4),R(5));
  { R(0)=0x1u; return; }
}
void f_8c072800(SH4Ctx *c) {
  R(5)=LD32(R(6));
  ST32(R(4),R(5));
  { R(0)=0x1u; return; }
}
void f_8c072808(SH4Ctx *c) {
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; ST32(R(4),R(5)); if(k) goto L8c072814; }
  { R(0)=0x0u; return; }
L8c072814:;
  R(0)=0x1u;
  {  return; }
}
void f_8c072814(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c07281a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c05e6eau;
  ST32(R(15),R(6));
  { c->pr=0x8c072826u; R(5)=R(6); f_8c05e6ea(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c07282e(SH4Ctx *c) {
  R(5)=LD32(R(6));
  ST32(R(4),R(5));
  { R(0)=0x1u; return; }
}
void f_8c072836(SH4Ctx *c) {
  R(5)=LD32(R(6));
  ST32(R(4),R(5));
  { R(0)=0x1u; return; }
}
void f_8c07283e(SH4Ctx *c) {
  R(5)=LD32(R(6));
  ST32(R(4),R(5));
  { R(0)=0x1u; return; }
}
void f_8c072846(SH4Ctx *c) {
  R(5)=LD32(R(6));
  ST32(R(4),R(5));
  { R(0)=0x1u; return; }
}
void f_8c07284e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(6));
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(5)=(int32_t)(int8_t)LD8(R(13));
  R(4)=R(0)&0xFF;
  R(5)=R(5)&0xFF;
  c->t=(int32_t)R(5)>(int32_t)R(4);
  if(!c->t) goto L8c072868;
  { R(3)=R(4); goto L8c07286a; }
L8c072868:;
  R(3)=R(5);
L8c07286a:;
  ST8(R(14),R(3));
  R(5)=R(13);
  R(6)=(int32_t)(int8_t)LD8(R(14));
  R(4)=R(14);
  R(3)=0x8c0685b4u;
  R(5)+=0x4u;
  R(6)=R(6)&0xFF;
  R(6)<<=2;
  { c->pr=0x8c07287eu; R(4)+=0x4u; f_8c0685b4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c072888(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c072282u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  { c->pr=0x8c072896u; R(4)=R(6); f_8c072282(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  R(1)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(2),R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0728a6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c072282u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  { c->pr=0x8c0728b4u; R(4)=R(6); f_8c072282(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  R(1)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(2),R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c072900(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c072282u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  { c->pr=0x8c07290eu; R(4)=R(6); f_8c072282(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  R(1)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(2),R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c07291e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c072282u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  { c->pr=0x8c07292cu; R(4)=R(6); f_8c072282(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  R(1)=(int32_t)(int16_t)LD16(R(3));
  ST16(R(2),R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c07293c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c072282u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  { c->pr=0x8c07294au; R(4)=R(6); f_8c072282(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  R(1)=(int32_t)(int16_t)LD16(R(3));
  ST16(R(2),R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c07295a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c072282u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  { c->pr=0x8c072968u; R(4)=R(6); f_8c072282(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c072978(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c072282u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  { c->pr=0x8c072986u; R(4)=R(6); f_8c072282(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c072996(SH4Ctx *c) {
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; ST32(R(4),R(5)); if(k) goto L8c0729a2; }
  { R(0)=0x0u; return; }
L8c0729a2:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0729a2(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c0729a8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(4);
  R(0)=R(5);
  ST8(R(15)+4,R(0));
  R(3)=LD32(R(14));
  R(0)=0x8c0c7748u;
  ST32(R(15),R(3));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(1)=LD32(R(3)+R(0));
  ST32(R(15)+8,R(1));
  R(3)=R(1);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==11;
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c0729de; }
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(0)=R(0)&0xFF;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  { R(4)=R(0); goto L8c0729e4; }
L8c0729de:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)=R(0);
  R(4)=R(4)&0xFF;
L8c0729e4:;
  R(1)=R(14);
  R(1)+=0x8u;
  R(4)<<=2;
  { uint32_t tg=R(3); c->pr=0x8c0729eeu; R(4)+=R(1); sh4_call(c,tg); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0729f6(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(7));
  R(4)=R(4)&0xFF;
  R(7)=LD32(R(6)+12);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=0x8c0c7748u;
  R(3)=LD32(R(7));
  R(2)=LD32(R(3));
  R(3)=LD32(R(2)+4);
  R(4)+=R(3);
  ST32(R(15),R(4));
  R(4)=LD32(R(4)+4);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  R(2)=LD32(R(4)+R(0));
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(15));
  R(2)=LD32(R(7)+8);
  R(3)=LD32(R(3));
  R(2)+=R(3);
  R(4)=R(2);
  ST32(R(15),R(2));
  R(0)=LD32(R(15)+8);
  R(6)=LD32(R(15)+4);
  { uint32_t tg=R(0); R(15)+=0xcu; sh4_call(c,tg); return; }
}
void f_8c072a64(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(9)=0x8c0c7c89u;
  R(11)=R(5);
  R(12)=0x8c0c7c8cu;
  R(10)=R(6);
  R(2)=0x8c2dd1d8u;
  R(13)=0x8c2dd1d4u;
  ST32(R(15),R(4));
  R(8)=LD32(R(12));
  R(14)=LD32(R(11));
  ST32(R(12),R(5));
  R(3)=(int32_t)(int8_t)LD8(R(9));
  R(3)+=0x1u;
  ST8(R(9),R(3));
  R(3)=0x8c071920u;
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c072a98u; R(4)=LD32(R(13)); f_8c071920(c); }
  R(3)=LD32(R(13));
  R(5)=R(0);
  R(2)=R(5)&0xFF;
  R(1)=LD32(R(3)+16);
  R(0)=(int32_t)(int8_t)LD8(R(1)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c072ab2;
  R(3)=LD32(R(14));
  R(2)=LD32(R(14)+4);
  R(1)=LD32(R(3));
  { ST32(R(2),R(1)); goto L8c072ac8; }
L8c072ab2:;
  R(2)=0x8c071c84u;
  { c->pr=0x8c072ab8u; R(4)=LD32(R(13)); f_8c071c84(c); }
  R(3)=LD32(R(12));
  R(4)=R(0);
  c->t=R(4)==R(3);
  if(c->t) goto L8c072ac8;
  R(3)=LD32(R(14));
  R(1)=LD32(R(14)+4);
  R(2)=LD32(R(3));
  ST32(R(1),R(2));
L8c072ac8:;
  R(5)=LD32(R(14)+4);
  R(6)=R(10);
  R(5)=LD32(R(5));
  { c->pr=0x8c072ad2u; R(4)=LD32(R(15)); f_8c073266(c); }
  R(6)=LD32(R(10));
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(9));
  R(5)=R(11);
  R(4)=R(6)&0xFF;
  R(2)+=0xffffffffu;
  R(0)&=R(4);
  ST8(R(9),R(2));
  c->t=(int32_t)R(0)==16;
  { uint32_t k=!c->t; R(5)+=0xcu; if(k) goto L8c072afa; }
  R(3)=LD32(R(14));
  R(2)=LD32(R(14)+4);
  R(1)=LD32(R(3));
  R(3)=0x0u;
  ST32(R(2),R(1));
  R(2)=0x14u;
  ST32(R(10),R(3));
  { ST32(R(10)+12,R(2)); goto L8c072b0a; }
L8c072afa:;
  R(0)=0x8u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c072b10;
  R(3)=LD32(R(14));
  R(2)=LD32(R(14)+4);
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
L8c072b0a:;
  ST32(R(12),R(8));
  { R(0)=R(5); goto L8c072b54; }
L8c072b10:;
  R(2)=0x8c2dd1d8u;
  R(3)=0x8c071920u;
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c072b1au; R(4)=LD32(R(13)); f_8c071920(c); }
  R(3)=LD32(R(13));
  R(5)=R(0);
  R(2)=R(5)&0xFF;
  R(1)=LD32(R(3)+16);
  R(0)=(int32_t)(int8_t)LD8(R(1)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c072b52;
  R(2)=0x8c071c84u;
  { c->pr=0x8c072b30u; R(4)=LD32(R(13)); f_8c071c84(c); }
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==39;
  if(c->t) goto L8c072b50;
  R(2)=LD32(R(14)+4);
  R(3)=0x8c071aa6u;
  ST32(R(2),R(4));
  { c->pr=0x8c072b44u; R(4)=LD32(R(13)); f_8c071aa6(c); }
  R(2)=0x8c2dd1d8u;
  R(3)=0x8c071a60u;
  R(5)=(int32_t)(int8_t)LD8(R(2));
  R(6)=LD32(R(12));
  { c->pr=0x8c072b50u; R(4)=LD32(R(13)); f_8c071a60(c); }
L8c072b50:;
  ST32(R(12),R(8));
L8c072b52:;
  R(0)=R(11);
L8c072b54:;
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
void f_8c072b68(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x27u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072b76(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x28u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072b84(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(3)=0x8c09dcc0u;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c072b96u; R(4)=LD32(R(4)); f_8c09dcc0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c072ba4;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c072ba4u; R(4)=0xau; f_8c074080(c); }
L8c072ba4:;
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)+=0xcu; return; }
}
void f_8c072c00(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(7)=R(6);
  ST32(R(15)+4,R(4));
  R(3)=0x8c07275cu;
  ST32(R(15),R(5));
  ST32(R(15)+8,R(6));
  R(6)=LD32(R(15)+4);
  R(4)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(4)=LD32(R(4));
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c072c1eu; R(5)=0x0u; f_8c07275c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  R(0)=LD32(R(15));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)+=0xcu; return; }
}
void f_8c072c2c(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x6u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072c3a(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x19u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072c48(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x1eu;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072c56(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x1du;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072c64(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0xbu;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072c72(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x18u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072c80(SH4Ctx *c) {
  fp_ld(c,3,R(5));
  R(3)=0x8u;
  R(0)=R(5);
  fp_st(c,3,R(6));
  ST32(R(6)+12,R(3));
  { R(0)+=0xcu; return; }
}
void f_8c072c8e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(12)+=0xcu;
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c072ca8u; R(5)=R(12); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c072cb4;
  { fp_ld(c,15,R(14)); goto L8c072cbc; }
L8c072cb4:;
  R(3)=LD32(R(14));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c072cbc:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c072cc6u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c072cd2;
  { fp_ld(c,14,R(14)); goto L8c072cda; }
L8c072cd2:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,14,3);
L8c072cda:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c072ce4u; R(4)=R(13); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c072d20;
  { fp_ld(c,4,R(14)); goto L8c072d28; }
L8c072d20:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c072d28:;
  R(0)=0x4u;
  fp_st(c,15,R(14));
  fp_st(c,14,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  R(3)=0x15u;
  ST32(R(14)+12,R(3));
  R(0)=R(5);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c072d20(SH4Ctx *c) {
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
  R(0)=0x4u;
  fp_st(c,15,R(14));
  fp_st(c,14,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  R(3)=0x15u;
  ST32(R(14)+12,R(3));
  R(0)=R(5);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c072d46(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(5));
  R(3)=0x8c05e6eau;
  ST32(R(15),R(6));
  R(5)=LD32(R(15)+4);
  R(5)=LD32(R(5));
  { c->pr=0x8c072d58u; R(4)=R(6); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)+=0xcu; return; }
}
void f_8c072d68(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0xau;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072d76(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x16u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072d84(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x17u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072d92(SH4Ctx *c) {
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(2)=0x1au;
  R(0)=R(5);
  R(3)=R(3)&0xFFFF;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072da2(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x9u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072db0(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x21u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072dbe(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x20u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072dcc(SH4Ctx *c) {
  R(2)=0x14u;
  R(3)=0x10u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c072dd8(SH4Ctx *c) {
  R(2)=0x14u;
  R(0)=R(5);
  R(3)=0x0u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072de6(SH4Ctx *c) {
  R(2)=0x14u;
  R(0)=R(5);
  R(3)=0x0u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072e20(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x22u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072e2e(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x24u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072e3c(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x26u;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072e4a(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x2au;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072e58(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x2bu;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072e66(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(2)=0x2cu;
  R(0)=R(5);
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)+=0xcu; return; }
}
void f_8c072e74(SH4Ctx *c) {
  R(0)=R(5);
  { R(0)+=0xcu; return; }
}
void f_8c072e7a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(7)=R(0)&0xFF;
  R(0)=0x8c0c7c90u;
  R(7)<<=2;
  R(3)=LD32(R(7)+R(0));
  R(2)=R(3);
  { uint32_t tg=R(2); c->pr=0x8c072e8eu; ST32(R(15),R(3)); sh4_call(c,tg); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c072e96(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(7)=LD32(R(5));
  R(5)+=0xcu;
  R(3)=0x8c0c9618u;
  R(7)<<=2;
  R(7)+=R(3);
  ST32(R(15),R(3));
  R(2)=LD32(R(7));
  ST32(R(15),R(2));
  R(0)=R(2);
  { uint32_t tg=R(0); R(15)+=0x4u; sh4_call(c,tg); return; }
}
static void f_8c072eae_o(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(6));
  R(3)=0x0u;
  R(7)=0x8c0c96a8u;
  ST32(R(15),R(3));
  R(6)=LD32(R(5));
  R(5)+=0xcu;
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(7);
  R(3)=LD32(R(6));
  R(2)=R(3);
  ST32(R(15)+8,R(3));
  { uint32_t tg=R(2); c->pr=0x8c072eceu; R(6)=R(15); sh4_call(c,tg); }
  R(1)=LD32(R(15));
  R(5)=R(0);
  R(3)=LD32(R(15)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c072edc;
  { R(2)=0x1u; goto L8c072ede; }
L8c072edc:;
  R(2)=0x0u;
L8c072ede:;
  ST32(R(3),R(2));
  R(2)=0x6u;
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c072eae(SH4Ctx *c) {
  uint32_t node_=R(5), out_=R(6), obj_=R(4);
  f_8c072eae_o(c);
  r2_tr_cond(node_, obj_, LD32(out_) & 0xffu);
}
void f_8c072f20(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(7)=LD32(R(5));
  R(5)+=0xcu;
  R(3)=0x8c0c9be8u;
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  ST32(R(15),R(3));
  R(7)+=R(3);
  R(2)=LD32(R(7));
  ST32(R(15),R(2));
  R(0)=R(2);
  { uint32_t tg=R(0); R(15)+=0x4u; sh4_call(c,tg); return; }
}
void f_8c072f3a(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(7)=LD32(R(5));
  R(5)+=0xcu;
  R(3)=0x8c0cb838u;
  R(7)<<=2;
  R(7)+=R(3);
  ST32(R(15),R(3));
  R(2)=LD32(R(7));
  ST32(R(15),R(2));
  R(0)=R(2);
  { uint32_t tg=R(0); R(15)+=0x4u; sh4_call(c,tg); return; }
}
void f_8c072f52(SH4Ctx *c) {
  R(3)=0x8c0c7d34u;
  { ST8(R(3),R(4)); return; }
}
void f_8c072f58(SH4Ctx *c) {
  R(2)=0x8c0c7d34u;
  { R(0)=(int32_t)(int8_t)LD8(R(2)); return; }
}
void f_8c072f5e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  R(5)=LD32(R(15)+4);
  R(6)=0x8c0ca768u;
  R(5)=LD32(R(5));
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(6);
  R(3)=LD32(R(5));
  R(5)=0x0u;
  ST32(R(15)+8,R(3));
  R(3)=0x8c0c7d34u;
  ST8(R(3),R(5));
  R(5)=LD32(R(15)+4);
  R(2)=LD32(R(15)+8);
  { uint32_t tg=R(2); c->pr=0x8c072f84u; R(5)+=0xcu; sh4_call(c,tg); }
  R(3)=0x8c0c7d34u;
  R(5)=R(0);
  R(1)=LD32(R(15));
  R(4)=(int32_t)(int8_t)LD8(R(3));
  R(3)=0xfffffffbu;
  R(4)=R(4)&0xFF;
  R(4)&=R(3);
  ST32(R(1),R(4));
  R(1)=0x14u;
  R(2)=LD32(R(15));
  ST32(R(2)+12,R(1));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c072fa2(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  R(4)+=0xcu;
  R(6)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  R(5)=(uint32_t)(int32_t)(int8_t)R(6);
  c->t=(int32_t)R(0)>=(int32_t)R(5);
  if(!c->t) goto L8c072fc8;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c072fc8;
L8c072fb8:;
  R(4)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  c->t=(int32_t)R(0)>=(int32_t)R(5);
  if(!c->t) goto L8c072fc8;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c072fb8;
L8c072fc8:;
  { R(0)=R(4); return; }
}
void f_8c072fcc(SH4Ctx *c) {
  R(6)=R(4);
  R(6)+=0xfffffff4u;
  R(0)=(int32_t)(int8_t)LD8(R(6)+10);
  R(6)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  R(5)=(uint32_t)(int32_t)(int8_t)R(6);
  c->t=(int32_t)R(0)>(int32_t)R(5);
  if(!c->t) goto L8c072ff4;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c072ff4;
L8c072fe4:;
  R(4)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  c->t=(int32_t)R(0)>(int32_t)R(5);
  if(!c->t) goto L8c072ff4;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c072fe4;
L8c072ff4:;
  { R(0)=R(4); return; }
}
void f_8c072ff8(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  R(4)+=0xcu;
  R(6)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  R(5)=(uint32_t)(int32_t)(int8_t)R(6);
  c->t=(int32_t)R(0)>(int32_t)R(5);
  if(!c->t) goto L8c07301e;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c07301e;
L8c07300e:;
  R(4)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  c->t=(int32_t)R(0)>(int32_t)R(5);
  if(!c->t) goto L8c07301e;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c07300e;
L8c07301e:;
  { R(0)=R(4); return; }
}
void f_8c073022(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c09d424u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  { c->pr=0x8c073030u; R(4)=R(5); f_8c09d424(c); }
  ST32(R(15),R(0));
  R(4)=LD32(R(15)+4);
  R(15)+=0x8u;
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} sh4_call(c,tg); return; }
}
void f_8c073060(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=0x8c09d414u;
  ST32(R(15),R(4));
  ST32(R(15)+16,R(5));
  ST32(R(15)+4,R(6));
  ST32(R(15)+12,R(7));
  { c->pr=0x8c073072u; R(4)=LD32(R(15)+4); f_8c09d414(c); }
  ST32(R(15)+8,R(0));
  R(5)=LD32(R(15)+16);
  { uint32_t tg=R(0); c->pr=0x8c07307au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x8c09d424u;
  ST32(R(15)+8,R(0));
  { c->pr=0x8c073082u; R(4)=LD32(R(15)+4); f_8c09d424(c); }
  ST32(R(15)+4,R(0));
  { uint32_t tg=R(0); c->pr=0x8c073088u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(2)=LD32(R(15)+12);
  R(4)=R(0);
  R(4)=R(4)&0xFF;
  ST32(R(2),R(4));
  R(2)=0x14u;
  R(3)=LD32(R(15)+12);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+8);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0730a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0c7c89u;
  R(12)=R(6);
  ST32(R(15),R(4));
  R(6)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c0730c2; }
  R(1)=0x8c0c7c8cu;
  { R(6)=LD32(R(1)); goto L8c0730c4; }
L8c0730c2:;
  R(6)=R(14);
L8c0730c4:;
  R(13)=0x8c2dd1d4u;
  R(11)=0x8c2dd1d8u;
  R(2)=LD32(R(13));
  R(4)=R(2);
  R(8)=LD32(R(2)+16);
  R(2)=0x8c071960u;
  R(8)+=0x6u;
  { c->pr=0x8c0730d6u; R(5)=(int32_t)(int8_t)LD8(R(11)); f_8c071960(c); }
  ST8(R(8),R(0));
  R(1)=R(0)&0xFF;
  R(3)=LD32(R(13));
  R(2)=LD32(R(3)+16);
  R(0)=(int32_t)(int8_t)LD8(R(2)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  if(c->t) goto L8c073134;
  R(2)=LD32(R(14));
  ST32(R(15)+4,R(2));
  R(0)=(int32_t)(int16_t)LD16(R(14)+8);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c073100;
  R(0)=(int32_t)(int16_t)LD16(R(14)+8);
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  { R(14)+=R(0); goto L8c073116; }
L8c073100:;
  R(4)=R(14);
  R(13)=R(14);
  { c->pr=0x8c073108u; R(4)+=0xcu; f_8c072fcc(c); }
  R(3)=0x8c067940u;
  R(1)=R(0);
  R(14)=R(0);
  R(1)-=R(13);
  { c->pr=0x8c073114u; R(0)=0xcu; f_8c067940(c); }
  ST16(R(13)+8,R(0));
L8c073116:;
  R(3)=0x8c09d424u;
  { c->pr=0x8c07311cu; R(4)=LD32(R(15)+4); f_8c09d424(c); }
  ST32(R(15)+4,R(0));
  { uint32_t tg=R(0); c->pr=0x8c073122u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(1)=0x8c2dd1d9u;
  R(3)=0x1u;
  R(2)=0x14u;
  R(4)=R(0)&0xFF;
  ST32(R(12),R(4));
  ST32(R(12)+12,R(2));
  ST8(R(1),R(3));
  { R(0)=R(14); goto L8c073194; }
L8c073134:;
  R(2)=0x8c071ae2u;
  R(5)=(int32_t)(int8_t)LD8(R(11));
  { c->pr=0x8c07313cu; R(4)=LD32(R(13)); f_8c071ae2(c); }
  R(3)=LD32(R(13));
  R(4)=R(3);
  R(8)=LD32(R(3)+16);
  R(3)=0x8c0719acu;
  { c->pr=0x8c073148u; R(8)+=0x6u; f_8c0719ac(c); }
  ST8(R(8),R(0));
  R(1)=R(0)&0xFF;
  R(3)=LD32(R(13));
  R(2)=LD32(R(3)+16);
  R(0)=(int32_t)(int8_t)LD8(R(2)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  if(c->t) goto L8c073182;
  R(2)=0x8c071a60u;
  R(6)=R(14);
  R(5)=(int32_t)(int8_t)LD8(R(11));
  { c->pr=0x8c073162u; R(4)=LD32(R(13)); f_8c071a60(c); }
  R(2)=0x8c2dd1d9u;
  R(3)=0x1u;
  R(6)=LD32(R(14));
  R(14)+=0xcu;
  R(5)=R(14);
  ST8(R(2),R(3));
  R(4)=LD32(R(15));
  R(7)=R(12);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c073060(c); return; } }
L8c073182:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c07318au; R(4)=0x18u; f_8c074080(c); }
  R(3)=0x14u;
  R(2)=0x0u;
  R(0)=R(2);
  ST32(R(12),R(2));
  ST32(R(12)+12,R(3));
L8c073194:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0731a4(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(2)=0x8c2dd1dcu;
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(3)=LD32(R(2));
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  R(0)+=R(3);
  ST32(R(15),R(0));
  R(0)=LD32(R(0));
  { uint32_t tg=R(0); R(15)+=0x4u; sh4_call(c,tg); return; }
}
void f_8c073200(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=R(0)==R(5);
  { R(0)=c->t; return; }
}
void f_8c07320a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x8c2dd1b0u;
  ST32(R(15)+4,R(5));
  ST8(R(15),R(6));
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(0)=R(0)&0xFF;
  R(0)&=0x20u;
  c->t=(int32_t)R(0)==32;
  { uint32_t k=c->t; R(14)=LD32(R(4)); if(k) goto L8c073258; }
  R(12)=0x8c2dd1b1u;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c073254;
  R(0)=R(14)&0xFF;
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c073242;
  R(5)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c07323cu; R(4)=LD32(R(15)+4); f_8c073200(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c07324a;
L8c073242:;
  R(2)=(int32_t)(int8_t)LD8(R(13));
  R(3)=0x1cu;
  R(14)&=R(3);
  R(14)|=R(2);
L8c07324a:;
  R(3)=0x20u;
  R(2)=0x1u;
  ST8(R(13),R(3));
  { ST8(R(12),R(2)); goto L8c073258; }
L8c073254:;
  R(1)=0x0u;
  ST8(R(12),R(1));
L8c073258:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073266(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(6);
  R(14)=R(5);
  ST32(R(15)+4,R(4));
L8c073278:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+10);
  R(5)=R(14);
  R(6)=R(13);
  ST8(R(15),R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c073286u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(6)=(int32_t)(int8_t)LD8(R(15));
  R(14)=R(0);
  R(5)=R(14);
  { c->pr=0x8c073290u; R(4)=R(13); f_8c07320a(c); }
  R(11)=R(0);
  R(0)=0x10u;
  R(12)=R(11)&0xFF;
  R(0)&=R(12);
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c0732a4;
  R(0)=0x8u;
  R(0)&=R(12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0732ac;
L8c0732a4:;
  R(2)=0x14u;
  ST32(R(13),R(12));
  { ST32(R(13)+12,R(2)); goto L8c0732fc; }
L8c0732ac:;
  R(0)=0x4u;
  R(0)&=R(12);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0732bc;
  R(3)=0x8c071aa6u;
  R(2)=0x8c2dd1d4u;
  { c->pr=0x8c0732bcu; R(4)=LD32(R(2)); f_8c071aa6(c); }
L8c0732bc:;
  R(0)=0x1u;
  R(1)=0x8c2dd1d4u;
  R(0)&=R(12);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=LD32(R(1)); if(k) goto L8c0732d4; }
  R(3)=0x8c071ae2u;
  R(2)=0x8c2dd1d8u;
  { c->pr=0x8c0732d0u; R(5)=(int32_t)(int8_t)LD8(R(2)); f_8c071ae2(c); }
  {  goto L8c0732f4; }
L8c0732d4:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0732e0;
  { R(11)=0x10u; goto L8c0732f4; }
L8c0732e0:;
  R(0)=0x2u;
  R(0)&=R(12);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0732f4;
  R(3)=0x8c0c7c88u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c073278;
  { ST32(R(4)+4,R(14)); goto L8c073278; }
L8c0732f4:;
  R(3)=0x14u;
  R(11)=R(11)&0xFF;
  ST32(R(13),R(11));
  ST32(R(13)+12,R(3));
L8c0732fc:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073340(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=0x8c2dd1d4u;
  R(9)=0x0u;
  R(2)=0x8c0c7c88u;
  R(14)=R(5);
  ST32(R(15)+8,R(4));
  ST32(R(3),R(5));
L8c07335e:;
  R(10)=0x8c2dd1d8u;
  R(8)=0x1u;
  ST8(R(2),R(9));
  R(13)=R(8);
  R(5)=LD32(R(14)+8);
  R(0)=(int32_t)(int8_t)LD8(R(5)+12);
  R(4)=R(0);
  R(0)=LD32(R(14)+16);
  R(4)+=0xffffffffu;
  R(4)=(uint32_t)(int32_t)(int8_t)R(4);
  R(0)=(int32_t)(int8_t)LD8(R(0)+4);
  R(3)=R(4);
  c->t=(int32_t)R(3)>=0;
  ST8(R(15)+12,R(0));
  ST8(R(15),R(9));
  R(12)=LD32(R(5));
  { uint32_t k=!c->t; ST32(R(15)+4,R(4)); if(k) goto L8c0733e6; }
L8c073382:;
  R(3)=0x8c071920u;
  ST8(R(10),R(13));
  R(5)=(int32_t)(int8_t)LD8(R(10));
  { c->pr=0x8c07338cu; R(4)=R(14); f_8c071920(c); }
  R(11)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(2)=R(11)&0xFF;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0733a4;
  R(2)=0x8c071c84u;
  R(5)=R(11);
  { c->pr=0x8c0733a0u; R(4)=R(14); f_8c071c84(c); }
  { R(5)=R(0); goto L8c0733a6; }
L8c0733a4:;
  R(5)=LD32(R(12));
L8c0733a6:;
  R(6)=R(15);
  R(6)+=0x10u;
  { c->pr=0x8c0733aeu; R(4)=LD32(R(15)+8); f_8c073266(c); }
  R(5)=LD32(R(15)+16);
  R(4)=R(5)&0xFF;
  R(0)=R(4);
  R(0)&=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0733be;
  { R(0)=0x1u; goto L8c0733e8; }
L8c0733be:;
  R(0)=0x8u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0733cc;
  R(2)=0x8c2dd1d9u;
  {  goto L8c07335e; }
L8c0733cc:;
  R(0)=0x10u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c0733e6;
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(12)+=0x4u;
  R(2)+=0x1u;
  ST8(R(15),R(2));
  R(2)=(uint32_t)(int32_t)(int8_t)R(2);
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  { uint32_t k=!c->t; R(13)+=0x1u; if(k) goto L8c073382; }
L8c0733e6:;
  R(0)=0x0u;
L8c0733e8:;
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
void f_8c0733fc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(5);
  R(1)=0x8c0c7c88u;
  R(3)=0x8c2dd1d4u;
  R(2)=0x1u;
  ST32(R(15),R(4));
  ST32(R(3),R(5));
  ST8(R(1),R(2));
  R(13)=LD32(R(14)+4);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c07341c;
  { R(0)=0x10u; goto L8c07347a; }
L8c07341c:;
  R(2)=0x8c2dd1d8u;
  R(3)=0x0u;
  R(5)=R(3);
  ST8(R(2),R(3));
  R(3)=0x8c071920u;
  { c->pr=0x8c07342au; R(4)=R(14); f_8c071920(c); }
  R(3)=LD32(R(14)+16);
  R(5)=R(0);
  R(2)=R(5)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(3)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c073440;
  R(2)=0x8c071c84u;
  { c->pr=0x8c07343eu; R(4)=R(14); f_8c071c84(c); }
  R(13)=R(0);
L8c073440:;
  R(0)=(int32_t)(int8_t)LD8(R(13)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c07344e;
  R(13)=LD32(R(14)+8);
  R(13)=LD32(R(13)+4);
  R(13)=LD32(R(13));
L8c07344e:;
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x4u;
  { c->pr=0x8c073458u; R(4)=LD32(R(15)); f_8c073266(c); }
  R(4)=LD32(R(15)+4);
  R(6)=R(0);
  R(5)=0x8u;
  R(13)=R(4)&0xFF;
  R(0)=R(13);
  R(0)&=R(5);
  c->t=(int32_t)R(0)==8;
  R(0)=R(13);
  R(0)&=R(5);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c073478;
  R(0)=0x2u;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c073478;
  ST32(R(14)+4,R(6));
L8c073478:;
  R(0)=R(4);
L8c07347a:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0734c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c071920u;
  { c->pr=0x8c0734ccu; R(5)=0x0u; f_8c071920(c); }
  R(3)=LD32(R(14)+16);
  R(5)=R(0);
  R(2)=R(5)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(3)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0734ec;
  R(2)=0x8c071c84u;
  { c->pr=0x8c0734e0u; R(4)=R(14); f_8c071c84(c); }
  R(3)=0x8c071b50u;
  R(4)=R(14);
  ST32(R(14)+4,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c071b50(c); return; } }
L8c0734ec:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0734f2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(10)=0x0u;
  R(11)=0x8c2dd1d9u;
  R(8)=0x1u;
  ST32(R(15),R(4));
  R(13)=0x8u;
  R(12)=R(5);
  R(9)=R(10);
L8c073512:;
  R(5)=R(12);
  ST8(R(11),R(10));
  { c->pr=0x8c07351au; R(4)=LD32(R(15)); f_8c073340(c); }
  R(14)=R(0);
  R(0)=R(14)&0xFF;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c073544;
  R(0)=R(14)&0xFF;
  R(0)&=R(8);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c073534;
  R(3)=0x8c2dd1d9u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07353c;
L8c073534:;
  { c->pr=0x8c073538u; R(4)=R(12); f_8c0734c0(c); }
  {  goto L8c073544; }
L8c07353c:;
  R(5)=R(12);
  { c->pr=0x8c073542u; R(4)=LD32(R(15)); f_8c0733fc(c); }
  R(14)=R(0);
L8c073544:;
  R(4)=R(14)&0xFF;
  R(2)=(int32_t)(int8_t)LD8(R(11));
  R(0)=R(4);
  R(0)&=R(13);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(9)|=R(2); if(k) goto L8c07355a; }
  R(0)=0x1u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c073512;
L8c07355a:;
  R(0)=R(9);
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
void f_8c0735a0(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=R(3)>=R(0);
  if(c->t) goto L8c0735c0;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(4);
  R(3)+=0x4u;
  R(2)+=0x1u;
  ST8(R(4),R(2));
  R(2)+=0xffffffffu;
  R(2)=R(2)&0xFF;
  R(2)<<=2;
  R(2)+=R(3);
  ST32(R(2),R(5));
  {  goto L8c0735c8; }
L8c0735c0:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { R(4)=0xeu; { f_8c074080(c); return; } }
L8c0735c8:;
  {  return; }
}
void f_8c0735cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(7)=(int32_t)(int8_t)LD8(R(4));
  R(6)=R(6)&0xFF;
  R(7)=R(7)&0xFF;
  ST32(R(15)+4,R(7));
  R(7)+=0x1u;
  c->t=(int32_t)R(7)>(int32_t)R(6);
  { uint32_t k=!c->t; ST32(R(15),R(6)); if(k) goto L8c0735e8; }
  { R(6)=LD32(R(15)); goto L8c0735ea; }
L8c0735e8:;
  R(6)=R(7);
L8c0735ea:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=LD32(R(15)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c07363a;
  R(7)=(int32_t)(int8_t)LD8(R(4));
  R(14)=R(4);
  R(14)+=0x4u;
  R(3)=R(7)&0xFF;
  ST32(R(15)+4,R(14));
  ST32(R(15),R(3));
  R(3)+=0xffffffffu;
  R(3)<<=2;
  R(2)=LD32(R(15));
  R(14)+=R(3);
  R(3)=LD32(R(15)+4);
  R(12)=R(7)&0xFF;
  R(13)=R(6)&0xFF;
  R(12)<<=2;
  c->t=(int32_t)R(2)>(int32_t)R(13);
  R(12)+=R(3);
  { uint32_t k=!c->t; R(12)+=0x4u; if(k) goto L8c073626; }
L8c073618:;
  R(7)+=0xffffffffu;
  R(3)=LD32(R(14));
  R(2)=R(7)&0xFF;
  c->t=(int32_t)R(2)>(int32_t)R(13);
  {uint32_t v=R(3);R(12)-=4;ST32(R(12),v);}
  { uint32_t k=c->t; R(14)+=0xfffffffcu; if(k) goto L8c073618; }
L8c073626:;
  R(2)=R(4);
  R(6)=R(6)&0xFF;
  R(2)+=0x4u;
  R(6)<<=2;
  R(6)+=R(2);
  ST32(R(6),R(5));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)+=0x1u;
  { ST8(R(4),R(3)); goto L8c07364a; }
L8c07363a:;
  R(4)=0xeu;
  R(5)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  R(3)=0x8c074080u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c074080(c); return; } }
L8c07364a:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073654(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c07365e;
  { R(0)=0x0u; return; }
L8c07365e:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c07368a; }
  R(3)=LD32(R(4)+4);
  c->t=R(3)==R(5);
  if(c->t) goto L8c07368a;
L8c07366e:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(6)+=0x1u;
  R(3)=R(6)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c07368a;
  R(3)=R(4);
  R(2)=R(6)&0xFF;
  R(3)+=0x4u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  c->t=R(1)==R(5);
  if(!c->t) goto L8c07366e;
L8c07368a:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  R(0)=c->t;
  R(0)^=0x1u;
  {  return; }
}
void f_8c07365e(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c07368a; }
  R(3)=LD32(R(4)+4);
  c->t=R(3)==R(5);
  if(c->t) goto L8c07368a;
L8c07366e:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(6)+=0x1u;
  R(3)=R(6)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c07368a;
  R(3)=R(4);
  R(2)=R(6)&0xFF;
  R(3)+=0x4u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  c->t=R(1)==R(5);
  if(!c->t) goto L8c07366e;
L8c07368a:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  R(0)=c->t;
  R(0)^=0x1u;
  {  return; }
}
void f_8c0736c0(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0736ca;
  { R(0)=0x0u; return; }
L8c0736ca:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c073706; }
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+12);
  R(3)=LD32(R(1));
  R(2)=LD32(R(3));
  c->t=R(2)==R(5);
  if(c->t) goto L8c073706;
L8c0736e2:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(6)+=0x1u;
  R(2)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c073706;
  R(2)=R(4);
  R(3)=R(6)&0xFF;
  R(2)+=0x4u;
  R(3)<<=2;
  R(3)+=R(2);
  R(1)=LD32(R(3));
  R(2)=LD32(R(1)+4);
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3));
  R(2)=LD32(R(1));
  c->t=R(2)==R(5);
  if(!c->t) goto L8c0736e2;
L8c073706:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  R(0)=c->t;
  R(0)^=0x1u;
  {  return; }
}
void f_8c0736ca(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c073706; }
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+12);
  R(3)=LD32(R(1));
  R(2)=LD32(R(3));
  c->t=R(2)==R(5);
  if(c->t) goto L8c073706;
L8c0736e2:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(6)+=0x1u;
  R(2)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c073706;
  R(2)=R(4);
  R(3)=R(6)&0xFF;
  R(2)+=0x4u;
  R(3)<<=2;
  R(3)+=R(2);
  R(1)=LD32(R(3));
  R(2)=LD32(R(1)+4);
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3));
  R(2)=LD32(R(1));
  c->t=R(2)==R(5);
  if(!c->t) goto L8c0736e2;
L8c073706:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  R(0)=c->t;
  R(0)^=0x1u;
  {  return; }
}
void f_8c073716(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c073720;
  { R(0)=0x0u; return; }
L8c073720:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c073758; }
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+20);
  c->t=R(3)==R(5);
  if(c->t) goto L8c073758;
L8c073736:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(6)+=0x1u;
  R(3)=R(6)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c073758;
  R(3)=R(4);
  R(2)=R(6)&0xFF;
  R(3)+=0x4u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  R(2)=LD32(R(3));
  R(1)=LD32(R(2)+20);
  c->t=R(1)==R(5);
  if(!c->t) goto L8c073736;
L8c073758:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  R(0)=c->t;
  R(0)^=0x1u;
  {  return; }
}
void f_8c073720(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c073758; }
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+20);
  c->t=R(3)==R(5);
  if(c->t) goto L8c073758;
L8c073736:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(6)+=0x1u;
  R(3)=R(6)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c073758;
  R(3)=R(4);
  R(2)=R(6)&0xFF;
  R(3)+=0x4u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  R(2)=LD32(R(3));
  R(1)=LD32(R(2)+20);
  c->t=R(1)==R(5);
  if(!c->t) goto L8c073736;
L8c073758:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  R(0)=c->t;
  R(0)^=0x1u;
  {  return; }
}
void f_8c073768(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c073794; }
  R(3)=LD32(R(4)+4);
  c->t=R(3)==R(5);
  if(c->t) goto L8c073794;
L8c073778:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(6)+=0x1u;
  R(3)=R(6)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c073794;
  R(3)=R(4);
  R(2)=R(6)&0xFF;
  R(3)+=0x4u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  c->t=R(1)==R(5);
  if(!c->t) goto L8c073778;
L8c073794:;
  R(3)=R(4);
  R(2)=R(6)&0xFF;
  R(3)+=0x4u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  c->t=R(1)==R(5);
  if(!c->t) goto L8c0737d8;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(5)=R(6);
  R(2)=R(5)&0xFF;
  R(3)=R(3)&0xFF;
  R(3)+=0xfffffffeu;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c0737ce;
L8c0737b2:;
  R(3)=R(4);
  R(6)=R(5)&0xFF;
  R(3)+=0x4u;
  R(6)<<=2;
  R(6)+=R(3);
  R(2)=LD32(R(6)+4);
  R(5)+=0x1u;
  R(3)=R(5)&0xFF;
  ST32(R(6),R(2));
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(2)=R(2)&0xFF;
  R(2)+=0xfffffffeu;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c0737b2;
L8c0737ce:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(2)+=0xffffffffu;
  ST8(R(4),R(2));
  { R(0)=0x1u; return; }
L8c0737d8:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0737d8(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c0737de(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=R(5)&0xFF;
  R(14)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0737ee;
  R(5)=(int32_t)(int8_t)LD8(R(4));
  R(5)+=R(14);
L8c0737ee:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(5)&0xFF;
  R(2)=R(2)&0xFF;
  R(2)+=0xffffffffu;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c07382c;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(6)=R(5);
  R(2)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  R(3)+=0xfffffffeu;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c073824;
L8c073808:;
  R(3)=R(4);
  R(5)=R(6)&0xFF;
  R(3)+=0x4u;
  R(5)<<=2;
  R(5)+=R(3);
  R(2)=LD32(R(5)+4);
  R(6)+=0x1u;
  R(3)=R(6)&0xFF;
  ST32(R(5),R(2));
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(2)=R(2)&0xFF;
  R(2)+=0xfffffffeu;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c073808;
L8c073824:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(2)+=0xffffffffu;
  { ST8(R(4),R(2)); goto L8c073850; }
L8c07382c:;
  R(1)=0xadu;
  R(2)=0x0u;
  R(3)=0x8c0bc86cu;
  R(6)=R(2);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(7)=0x10u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c7a04u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c07384eu; R(4)=0x42u; f_8c012658(c); }
  R(15)+=0x18u;
L8c073850:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073880(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff88u;
  R(14)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(13)=0x0u;
  R(3)=R(3)&0xFF;
  R(1)=R(13);
  c->t=(int32_t)R(3)>0;
  R(4)=R(13);
  { uint32_t k=!c->t; R(10)=R(15); if(k) goto L8c0738c8; }
L8c07389e:;
  R(3)=R(14);
  R(6)=R(4)&0xFF;
  R(3)+=0x4u;
  R(6)<<=2;
  R(6)+=R(3);
  R(6)=LD32(R(6));
  R(7)=LD32(R(6)+4);
  R(7)=LD32(R(7));
  R(7)=LD32(R(7)+20);
  c->t=R(7)==R(5);
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0738be; }
  R(0)=R(1)&0xFF;
  R(0)<<=2;
  ST32(R(10)+R(0),R(6));
  R(1)+=0x1u;
L8c0738be:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(4)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c07389e;
L8c0738c8:;
  R(12)=R(13);
  ST8(R(14),R(13));
  R(13)=0x0u;
  R(13)+=R(10);
  R(10)=R(1)&0xFF;
  c->t=(int32_t)R(10)>0;
  if(!c->t) goto L8c0738e4;
L8c0738d6:;
  {uint32_t v=LD32(R(13));R(13)+=4;R(5)=v;}
  { c->pr=0x8c0738dcu; R(4)=R(14); f_8c0735a0(c); }
  R(12)+=0x1u;
  R(2)=R(12)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(10);
  if(!c->t) goto L8c0738d6;
L8c0738e4:;
  R(15)+=0x78u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0738f2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff80u;
  R(12)=0x0u;
  ST32(R(15)+4,R(5));
  R(10)=R(12);
  R(5)=R(12);
  R(13)=R(4);
  R(14)=R(12);
  { c->pr=0x8c073910u; R(4)=R(13); f_8c073d76(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  R(11)=R(15);
  { uint32_t k=c->t; R(11)+=0x8u; if(k) goto L8c073944; }
L8c07391a:;
  R(5)=LD32(R(4)+4);
  ST32(R(15),R(5));
  R(5)=LD32(R(5)+12);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c073936;
  R(2)=LD32(R(5));
  R(3)=LD32(R(15)+4);
  R(1)=LD32(R(2));
  c->t=R(1)==R(3);
  if(!c->t) goto L8c073936;
  R(0)=R(10)&0xFF;
  R(0)<<=2;
  ST32(R(11)+R(0),R(4));
  R(10)+=0x1u;
L8c073936:;
  R(14)+=0x1u;
  R(5)=R(14);
  { c->pr=0x8c07393eu; R(4)=R(13); f_8c073d76(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c07391a;
L8c073944:;
  R(14)=0x0u;
  R(14)+=R(11);
  R(11)=R(10)&0xFF;
  c->t=(int32_t)R(11)>0;
  { uint32_t k=!c->t; ST8(R(13),R(12)); if(k) goto L8c07395e; }
L8c073950:;
  {uint32_t v=LD32(R(14));R(14)+=4;R(5)=v;}
  { c->pr=0x8c073956u; R(4)=R(13); f_8c0735a0(c); }
  R(12)+=0x1u;
  R(3)=R(12)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(11);
  if(!c->t) goto L8c073950;
L8c07395e:;
  R(1)=0x80u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0739a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(6);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(13)=R(12); if(k) goto L8c0739da; }
L8c0739be:;
  R(3)=R(14);
  R(5)=R(13)&0xFF;
  R(3)+=0x4u;
  R(5)<<=2;
  R(5)+=R(3);
  R(5)=LD32(R(5));
  { c->pr=0x8c0739ceu; R(4)=R(10); f_8c0735a0(c); }
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(13)+=0x1u;
  R(3)=R(13)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0739be;
L8c0739da:;
  R(2)=(int32_t)(int8_t)LD8(R(11));
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(13)=R(12); if(k) goto L8c073a3c; }
L8c0739e4:;
  R(3)=R(11);
  R(5)=R(13)&0xFF;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(3)+=0x4u;
  R(5)<<=2;
  R(5)+=R(3);
  R(2)=R(2)&0xFF;
  R(5)=LD32(R(5));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c073a1c; }
  R(2)=LD32(R(14)+4);
  c->t=R(2)==R(5);
  if(c->t) goto L8c073a1c;
L8c073a00:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)+=0x1u;
  R(2)=R(4)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c073a1c;
  R(2)=R(14);
  R(3)=R(4)&0xFF;
  R(2)+=0x4u;
  R(3)<<=2;
  R(3)+=R(2);
  R(1)=LD32(R(3));
  c->t=R(1)==R(5);
  if(!c->t) goto L8c073a00;
L8c073a1c:;
  R(2)=R(14);
  R(4)=R(4)&0xFF;
  R(2)+=0x4u;
  R(4)<<=2;
  R(4)+=R(2);
  R(3)=LD32(R(4));
  c->t=R(3)==R(5);
  if(c->t) goto L8c073a30;
  { c->pr=0x8c073a30u; R(4)=R(10); f_8c0735a0(c); }
L8c073a30:;
  R(3)=(int32_t)(int8_t)LD8(R(11));
  R(13)+=0x1u;
  R(2)=R(13)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c0739e4;
L8c073a3c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073a4a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(12));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(13)=R(11); if(k) goto L8c073aae; }
L8c073a68:;
  R(3)=R(12);
  R(5)=R(13)&0xFF;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(3)+=0x4u;
  R(5)<<=2;
  R(5)+=R(3);
  R(2)=R(2)&0xFF;
  R(5)=LD32(R(5));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(4)=R(11); if(k) goto L8c073aa2; }
L8c073a7e:;
  R(3)=R(14);
  R(2)=R(4)&0xFF;
  R(3)+=0x4u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  c->t=R(1)==R(5);
  if(!c->t) goto L8c073a96;
  { c->pr=0x8c073a92u; R(4)=R(10); f_8c0735a0(c); }
  {  goto L8c073aa2; }
L8c073a96:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)+=0x1u;
  R(2)=R(4)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c073a7e;
L8c073aa2:;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  R(13)+=0x1u;
  R(3)=R(13)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c073a68;
L8c073aae:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073abc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=R(5);
  ST32(R(15),R(4));
  R(3)=(int32_t)(int8_t)LD8(R(12));
  R(14)=R(6);
  R(11)=0x0u;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(13)=R(11); if(k) goto L8c073b32; }
L8c073ada:;
  R(3)=R(12);
  R(5)=R(13)&0xFF;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(3)+=0x4u;
  R(5)<<=2;
  R(5)+=R(3);
  R(2)=R(2)&0xFF;
  R(5)=LD32(R(5));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(4)=R(11); if(k) goto L8c073b12; }
  R(2)=LD32(R(14)+4);
  c->t=R(2)==R(5);
  if(c->t) goto L8c073b12;
L8c073af6:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)+=0x1u;
  R(2)=R(4)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c073b12;
  R(2)=R(14);
  R(3)=R(4)&0xFF;
  R(2)+=0x4u;
  R(3)<<=2;
  R(3)+=R(2);
  R(1)=LD32(R(3));
  c->t=R(1)==R(5);
  if(!c->t) goto L8c073af6;
L8c073b12:;
  R(2)=R(14);
  R(4)=R(4)&0xFF;
  R(2)+=0x4u;
  R(4)<<=2;
  R(4)+=R(2);
  R(3)=LD32(R(4));
  c->t=R(3)==R(5);
  if(c->t) goto L8c073b26;
  { c->pr=0x8c073b26u; R(4)=LD32(R(15)); f_8c0735a0(c); }
L8c073b26:;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  R(13)+=0x1u;
  R(2)=R(13)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c073ada;
L8c073b32:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073b40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(11));
  R(10)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(13)=R(12); if(k) goto L8c073bb0; }
L8c073b5e:;
  R(3)=R(11);
  R(5)=R(13)&0xFF;
  R(3)+=0x4u;
  R(5)<<=2;
  R(5)+=R(3);
  R(6)=R(10)&0xFF;
  R(5)=LD32(R(5));
  c->t=(int32_t)R(6)>0;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c073b90; }
  R(3)=LD32(R(14)+4);
  c->t=R(3)==R(5);
  if(c->t) goto L8c073b90;
L8c073b78:;
  R(4)+=0x1u;
  R(3)=R(4)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  if(c->t) goto L8c073b90;
  R(2)=R(14);
  R(3)=R(4)&0xFF;
  R(2)+=0x4u;
  R(3)<<=2;
  R(3)+=R(2);
  R(1)=LD32(R(3));
  c->t=R(1)==R(5);
  if(!c->t) goto L8c073b78;
L8c073b90:;
  R(2)=R(14);
  R(4)=R(4)&0xFF;
  R(2)+=0x4u;
  R(4)<<=2;
  R(4)+=R(2);
  R(3)=LD32(R(4));
  c->t=R(3)==R(5);
  if(c->t) goto L8c073ba4;
  { c->pr=0x8c073ba4u; R(4)=R(14); f_8c0735a0(c); }
L8c073ba4:;
  R(3)=(int32_t)(int8_t)LD8(R(11));
  R(13)+=0x1u;
  R(2)=R(13)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c073b5e;
L8c073bb0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073bbe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(6);
  R(13)=R(4);
  R(3)=0x0u;
  ST32(R(15)+4,R(5));
  ST8(R(15)+12,R(0));
  R(0)=R(7);
  ST16(R(15)+8,R(0));
  ST8(R(13),R(3));
  R(3)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  R(12)=0x8c2dd1e8u;
  R(0)=R(0)&0xFF;
  ST16(R(15),R(0));
  R(7)=R(12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(3)=0x8c059f20u;
  R(6)=R(0);
  R(0)=0x10u;
  R(5)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c073bf4u; R(4)=LD32(R(15)+8); f_8c059f20(c); }
  R(15)+=0x4u;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c073c16; }
L8c073c00:;
  R(0)=R(14)&0xFFFF;
  R(0)<<=2;
  R(5)=LD32(R(12)+R(0));
  { c->pr=0x8c073c0au; R(4)=R(13); f_8c0735a0(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(14)+=0x1u;
  R(2)=R(14)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c073c00;
L8c073c16:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073c22(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(6);
  R(13)=R(4);
  R(3)=0x0u;
  ST32(R(15)+8,R(5));
  ST8(R(15)+4,R(0));
  R(0)=R(7);
  ST16(R(15)+12,R(0));
  ST8(R(13),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  R(12)=0x8c2dd1e8u;
  R(0)=R(0)&0xFF;
  ST16(R(15),R(0));
  R(0)=0x20u;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(7)=R(12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  R(3)=0x8c058f72u;
  R(6)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(5)=R(0);
  { c->pr=0x8c073c60u; R(4)=LD32(R(15)+16); f_8c058f72(c); }
  R(15)+=0x8u;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c073c82; }
L8c073c6c:;
  R(0)=R(14)&0xFFFF;
  R(0)<<=2;
  R(5)=LD32(R(12)+R(0));
  { c->pr=0x8c073c76u; R(4)=R(13); f_8c0735a0(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(14)+=0x1u;
  R(2)=R(14)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c073c6c;
L8c073c82:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073c8e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(6);
  R(13)=R(4);
  R(3)=0x0u;
  ST32(R(15)+4,R(5));
  ST16(R(15)+12,R(0));
  R(0)=R(7);
  ST16(R(15)+8,R(0));
  ST8(R(13),R(3));
  R(3)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  R(12)=0x8c2dd1e8u;
  R(0)=R(0)&0xFF;
  ST16(R(15),R(0));
  R(7)=R(12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(3)=0x8c0597d6u;
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+16);
  R(5)=R(0);
  { c->pr=0x8c073cc4u; R(4)=LD32(R(15)+8); f_8c0597d6(c); }
  R(15)+=0x4u;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c073ce6; }
L8c073cd0:;
  R(0)=R(14)&0xFFFF;
  R(0)<<=2;
  R(5)=LD32(R(12)+R(0));
  { c->pr=0x8c073cdau; R(4)=R(13); f_8c0735a0(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(14)+=0x1u;
  R(2)=R(14)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c073cd0;
L8c073ce6:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073cf2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x1u;
  R(0)=R(6);
  R(2)=R(15);
  ST16(R(15)+4,R(0));
  ST16(R(15),R(3));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c059f20u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(7)=0x8c2dd1e8u;
  { c->pr=0x8c073d0cu; R(6)=R(0); f_8c059f20(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)^=0x1u; return; }
}
void f_8c073d40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(6);
  ST16(R(15)+4,R(0));
  R(0)=R(7);
  ST16(R(15)+8,R(0));
  R(3)=0x1u;
  R(7)=0x8c2dd1e8u;
  ST16(R(15),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(2)=R(0);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c058f72u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  { c->pr=0x8c073d66u; R(6)=R(0); f_8c058f72(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)^=0x1u; return; }
}
void f_8c073d76(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c073d8c;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(5)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(!c->t) goto L8c073d90;
  R(3)=0xffu;
  c->t=R(0)==R(3);
  if(c->t) goto L8c073d90;
L8c073d8c:;
  { R(0)=0x0u; return; }
L8c073d90:;
  R(3)=0xffu;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c073da6;
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(2)=R(4);
  R(2)+=0x4u;
  R(0)=R(0)&0xFF;
  R(0)+=0xffffffffu;
  R(0)<<=2;
  { R(0)=LD32(R(2)+R(0)); return; }
L8c073da6:;
  R(2)=R(4);
  R(0)=R(5)&0xFF;
  R(2)+=0x4u;
  R(0)<<=2;
  R(0)=LD32(R(2)+R(0));
  {  return; }
}
void f_8c073de0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff70u;
  R(15)+=R(0);
  R(13)=R(4);
  R(0)=0x14u;
  R(3)=0x0u;
  R(14)=R(13);
  R(14)+=0x4u;
  ST8(R(15),R(5));
  ST8(R(15)+R(0),R(3));
  R(3)=R(13);
  R(2)=(int32_t)(int8_t)LD8(R(13));
  R(3)+=0x4u;
  R(11)=R(6);
  R(2)=R(2)&0xFF;
  R(2)<<=2;
  R(2)+=R(3);
  c->t=R(14)>=R(2);
  { uint32_t k=c->t; R(12)=R(6); if(k) goto L8c073e44; }
L8c073e10:;
  R(6)=R(15);
  R(11)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c073e1cu; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  R(11)=R(0);
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(4)=(uint32_t)(int32_t)(int8_t)R(4);
  R(4)^=R(3);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c073e32;
  R(5)=LD32(R(14));
  R(4)=R(15);
  { c->pr=0x8c073e32u; R(4)+=0x14u; f_8c0735a0(c); }
L8c073e32:;
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(2)=R(13);
  R(2)+=0x4u;
  R(3)=R(3)&0xFF;
  R(3)<<=2;
  R(3)+=R(2);
  R(14)+=0x4u;
  c->t=R(14)>=R(3);
  if(!c->t) goto L8c073e10;
L8c073e44:;
  R(0)=0x14u;
  R(5)=R(15);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(5)+=0x14u;
  R(3)=0x8c0685b4u;
  R(6)=R(6)&0xFF;
  R(6)+=0xffffffffu;
  R(6)<<=2;
  R(6)+=0x8u;
  { c->pr=0x8c073e5au; R(4)=R(13); f_8c0685b4(c); }
  R(1)=0x90u;
  R(0)=R(11);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c073e6c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff70u;
  R(15)+=R(0);
  R(14)=R(4);
  R(2)=R(14);
  R(13)=R(15);
  R(2)+=0x4u;
  R(10)=R(14);
  R(8)=0x0u;
  R(0)=R(6);
  R(13)+=0x18u;
  R(10)+=0x4u;
  R(12)=R(8);
  R(11)=R(5);
  ST8(R(15)+4,R(0));
  ST32(R(15),R(13));
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(3)&0xFF;
  R(3)<<=2;
  R(3)+=R(2);
  c->t=R(10)>=R(3);
  { uint32_t k=c->t; R(9)=R(7); if(k) { f_8c073f1a(c); return; } }
  { f_8c073ea8(c); return; }
}
void f_8c073ea8(SH4Ctx *c) {
L8c073ea8:;
  R(6)=R(15);
  R(2)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c073eb4u; R(4)=LD32(R(10)); sh4_call(c,tg); }
  R(3)=LD32(R(15));
  R(7)=R(0);
  R(3)+=0x4u;
  ST32(R(15),R(3));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(3)+=0xfffffffcu; if(k) goto L8c073f00; }
  R(0)=0x8u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c073f06; }
L8c073f00:;
  R(2)=LD32(R(15)+8);
  c->fpul=R(2);
  fp_float(c,3);
L8c073f06:;
  fp_st(c,3,R(3));
  R(2)=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(2)+=0x4u;
  R(10)+=0x4u;
  R(3)=R(3)&0xFF;
  R(3)<<=2;
  R(3)+=R(2);
  c->t=R(10)>=R(3);
  if(!c->t) goto L8c073ea8;
  { f_8c073f1a(c); return; }
}
void f_8c073f00(SH4Ctx *c) {
  R(2)=LD32(R(15)+8);
  c->fpul=R(2);
  fp_float(c,3);
  fp_st(c,3,R(3));
  R(2)=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(2)+=0x4u;
  R(10)+=0x4u;
  R(3)=R(3)&0xFF;
  R(3)<<=2;
  R(3)+=R(2);
  c->t=R(10)>=R(3);
  if(!c->t) { f_8c073ea8(c); return; }
  { f_8c073f1a(c); return; }
}
void f_8c073f1a(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c073f90;
  R(0)=0x8c074020u;
  fp_ld(c,4,R(0));
  { R(5)=R(8); goto L8c073f7a; }
L8c073f28:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)=R(5);
  R(2)=R(4)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c073f52;
L8c073f34:;
  R(0)=R(4)&0xFF;
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c073f46;
  R(0)=R(4)&0xFF;
  R(12)=R(4);
  R(0)<<=2;
  fp_ld(c,4,R(0)+R(13));
L8c073f46:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(4)+=0x1u;
  R(3)=R(4)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c073f34;
L8c073f52:;
  R(4)=R(5)&0xFF;
  R(0)=R(13);
  R(4)<<=2;
  R(6)=R(14);
  fp_ld(c,3,R(0)+R(4));
  R(9)=R(12)&0xFF;
  R(9)<<=2;
  R(2)=R(14);
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(9));
  R(10)=R(6);
  R(0)=R(6);
  R(10)+=R(9);
  R(3)=LD32(R(4)+R(0));
  R(2)+=0x4u;
  R(9)=LD32(R(10));
  R(4)+=R(2);
  ST32(R(10),R(3));
  R(5)+=0x1u;
  ST32(R(4),R(9));
L8c073f7a:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)=R(5)&0xFF;
  R(3)=R(3)&0xFF;
  R(3)+=0xffffffffu;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c073ffc;
  R(3)=R(11)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c073f28;
  {  goto L8c073ffc; }
L8c073f90:;
  R(0)=0x8c074024u;
  fp_ld(c,4,R(0));
  { R(5)=R(8); goto L8c073fea; }
L8c073f98:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)=R(5);
  R(2)=R(4)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c073fc2;
L8c073fa4:;
  R(0)=R(4)&0xFF;
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c073fb6;
  R(0)=R(4)&0xFF;
  R(12)=R(4);
  R(0)<<=2;
  fp_ld(c,4,R(0)+R(13));
L8c073fb6:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(4)+=0x1u;
  R(3)=R(4)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c073fa4;
L8c073fc2:;
  R(4)=R(5)&0xFF;
  R(0)=R(13);
  R(4)<<=2;
  R(10)=R(14);
  fp_ld(c,3,R(0)+R(4));
  R(9)=R(12)&0xFF;
  R(9)<<=2;
  R(2)=R(14);
  R(10)+=0x4u;
  fp_st(c,3,R(0)+R(9));
  R(6)=R(10);
  R(0)=R(10);
  R(6)+=R(9);
  R(3)=LD32(R(4)+R(0));
  R(2)+=0x4u;
  R(9)=LD32(R(6));
  R(4)+=R(2);
  ST32(R(6),R(3));
  R(5)+=0x1u;
  ST32(R(4),R(9));
L8c073fea:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)=R(5)&0xFF;
  R(3)=R(3)&0xFF;
  R(3)+=0xffffffffu;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c073ffc;
  R(3)=R(11)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c073f98;
L8c073ffc:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(5)=R(11)&0xFF;
  R(4)=R(4)&0xFF;
  c->t=(int32_t)R(4)>(int32_t)R(5);
  if(!c->t) goto L8c074040;
  { R(3)=R(5); goto L8c074042; }
L8c074040:;
  R(3)=R(4);
L8c074042:;
  R(1)=0x90u;
  R(0)=R(7);
  ST8(R(14),R(3));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074040(SH4Ctx *c) {
  R(3)=R(4);
  R(1)=0x90u;
  R(0)=R(7);
  ST8(R(14),R(3));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074080(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x25u;
  R(2)=0x8c0bc8a0u;
  ST16(R(15),R(4));
  R(6)=0x0u;
  ST32(R(15)+4,R(5));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+12);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0xffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c7a04u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+24);
  R(5)=(int32_t)(int8_t)LD8(R(3));
  R(3)=0x8c012658u;
  R(7)=R(0);
  { c->pr=0x8c0740aeu; R(4)=0x42u; f_8c012658(c); }
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0740b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0740c0u; R(5)=LD32(R(14)+20); f_8c0740ca(c); }
  R(2)=LD32(R(14)+8);
  ST32(R(14)+12,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0740ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+8);
  R(2)=0x8c071c3cu;
  ST32(R(14)+12,R(3));
  ST32(R(14)+8,R(13));
  { c->pr=0x8c0740e0u; R(4)=R(14); f_8c071c3c(c); }
  R(3)=LD32(R(13)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0740ea;
  { R(3)=0x0u; goto L8c0740ee; }
L8c0740ea:;
  R(1)=LD32(R(13)+4);
  R(3)=LD32(R(1));
L8c0740ee:;
  ST32(R(14)+4,R(3));
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074120(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=R(4);
  R(3)+=0xfffffff4u;
  R(0)=(int32_t)(int8_t)LD8(R(3)+10);
  R(5)=0x0u;
  ST8(R(15),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  R(6)=(int32_t)(int8_t)LD8(R(15));
  c->t=(int32_t)R(0)>(int32_t)R(6);
  R(7)=R(6);
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c074158; }
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c074158;
L8c074140:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  c->t=R(0)==R(7);
  { uint32_t k=!c->t; R(4)+=0xcu; if(k) goto L8c07414a; }
  R(5)+=0x1u;
L8c07414a:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  c->t=(int32_t)R(0)>(int32_t)R(6);
  if(!c->t) goto L8c074158;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c074140;
L8c074158:;
  R(0)=R(5);
  { R(15)+=0x4u; return; }
}
void f_8c07415e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(4));
  R(4)=R(5);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c07416e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c07416e:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c074180;
L8c074176:;
  R(4)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c074176;
L8c074180:;
  R(4)+=0xcu;
  R(2)=0x8c067940u;
  R(4)-=R(5);
  R(1)=R(4);
  { c->pr=0x8c07418cu; R(0)=0xcu; f_8c067940(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c07419c(SH4Ctx *c) {
  R(3)=0x0u;
  R(0)=R(5);
  ST32(R(4),R(3));
  { ST8(R(4)+4,R(0)); return; }
}
void f_8c0741a6(SH4Ctx *c) {
  R(0)=0x0u;
  ST8(R(4)+12,R(0));
  ST32(R(4),R(0));
  { ST32(R(4)+4,R(0)); return; }
}
void f_8c0741e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff24u;
  R(15)+=R(0);
  R(3)=0x8c046e40u;
  ST32(R(15)+4,R(4));
  ST32(R(15)+8,R(5));
  R(14)=LD32(R(15)+4);
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  { c->pr=0x8c0741fau; R(4)=R(14); f_8c046e40(c); }
  R(3)=0x8c076800u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c074204u; R(4)=LD32(R(15)+4); f_8c076800(c); }
  R(13)=0x8c0c7df8u;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07421e;
  R(3)=LD32(R(14)+12);
  R(0)=0x68u;
  R(1)=LD32(R(13));
  R(2)=LD32(R(3)+R(0));
  c->t=R(1)==R(2);
  if(c->t) goto L8c07421e;
  R(2)=0x8c046a20u;
  { c->pr=0x8c07421eu; R(4)=R(14); f_8c046a20(c); }
L8c07421e:;
  R(3)=0x8c090522u;
  R(0)=0x68u;
  R(4)=LD32(R(15)+24);
  { c->pr=0x8c074228u; R(4)=LD32(R(4)+R(0)); f_8c090522(c); }
  R(2)=LD32(R(15)+24);
  R(0)=0x68u;
  R(3)=LD32(R(2)+R(0));
  R(1)=LD32(R(3)+4);
  R(2)=LD32(R(1)+8);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(2)); if(k) goto L8c0742ec; }
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c07423eu; R(4)=LD32(R(15)+4); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c0742ec; }
  R(0)=0x17cu;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c07425e;
  R(3)=LD32(R(15));
  R(2)=0x1000000u;
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c07425e;
  R(3)=0x17cu;
  R(0)=0x1u;
  R(3)+=R(14);
  ST8(R(3),R(0));
L8c07425e:;
  R(0)=0x170u;
  R(2)=LD32(R(15));
  c->fr[3]=0x00000000u;
  R(3)=LD32(R(2)+R(0));
  R(0)+=0xffffffdcu;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c07428c;
  R(0)=0x170u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+R(0));
  R(0)+=0xffffffe0u;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c07428c;
  R(0)=0x170u;
  R(2)=LD32(R(15));
  c->fr[3]=0x00000000u;
  R(3)=LD32(R(2)+R(0));
  R(0)+=0xffffffe4u;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0742ce;
L8c07428c:;
  R(0)=0x170u;
  R(5)=LD32(R(15));
  R(3)=0x114u;
  R(5)=LD32(R(5)+R(0));
  R(2)=0x8c0471eau;
  R(5)+=R(3);
  { c->pr=0x8c07429cu; R(4)=R(14); f_8c0471ea(c); }
  R(0)=0x170u;
  R(5)=LD32(R(15));
  R(3)=0x14cu;
  R(5)=LD32(R(5)+R(0));
  R(2)=0x8c047240u;
  R(5)+=R(3);
  { c->pr=0x8c0742acu; R(4)=LD32(R(15)+20); f_8c047240(c); }
  R(2)=0x8c123bbcu;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0742c0; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0742c0:;
  R(0)=0x8c074338u;
  fp_mov(c,4,3);
  fp_ld(c,2,R(0));
  R(3)=0x8c04726cu;
  fp_arith(c,3,4,2);
  { c->pr=0x8c0742ceu; R(4)=LD32(R(15)+20); f_8c04726c(c); }
L8c0742ce:;
  R(2)=0x8c09f560u;
  R(4)=R(15);
  { c->pr=0x8c0742d6u; R(4)+=0xcu; f_8c09f560(c); }
  R(3)=0x8c076980u;
  R(4)=R(15);
  { c->pr=0x8c0742deu; R(4)+=0xcu; f_8c076980(c); }
  R(2)=LD32(R(14)+12);
  R(0)=0x68u;
  R(3)=LD32(R(2)+R(0));
  R(0)=0x74u;
  R(2)=0x0u;
  ST32(R(13),R(3));
  ST8(R(14)+R(0),R(2));
L8c0742ec:;
  R(1)=0xdcu;
  R(0)=LD32(R(15)+8);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074360(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15),R(4));
  fp_mov(c,14,4);
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(7));
  R(0)=LD32(R(15)+32);
  R(14)=LD32(R(15)+28);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; c->fr[15]=0x00000000u; if(k) goto L8c074384; }
  R(3)=0x8c046e40u;
  { c->pr=0x8c074382u; R(4)=LD32(R(15)); f_8c046e40(c); }
  R(6)=R(14);
L8c074384:;
  R(0)=LD32(R(15)+36);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c074396;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c07439c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0743b2;
  {  goto L8c0743b4; }
L8c074396:;
  R(3)=LD32(R(15)+8);
  { fp_ld(c,15,R(3)); goto L8c0743b4; }
L8c07439c:;
  R(0)=LD32(R(15));
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0743ac;
  { fp_ld(c,15,R(14)); goto L8c0743ae; }
L8c0743ac:;
  fp_ld(c,15,R(6));
L8c0743ae:;
  { fp_arith(c,0,15,14); goto L8c0743b4; }
L8c0743b2:;
  fp_mov(c,15,14);
L8c0743b4:;
  fp_st(c,15,R(6));
  R(0)=LD32(R(15)+32);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0743c2;
  R(2)=LD32(R(15)+4);
  fp_st(c,15,R(2));
  fp_st(c,15,R(14));
L8c0743c2:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0743ce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  R(14)=R(4);
  ST32(R(15),R(5));
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0743ee; }
  R(2)=0x8c046e40u;
  { c->pr=0x8c0743e8u; R(4)=R(14); f_8c046e40(c); }
  R(4)=LD32(R(14)+12);
  { R(6)=R(4); goto L8c074400; }
L8c0743ee:;
  R(0)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; R(4)=LD32(R(14)+4); if(k) goto L8c0743fe; }
  { R(6)=LD32(R(14)+12); goto L8c074400; }
L8c0743fe:;
  R(6)=R(4);
L8c074400:;
  R(0)=0x79u;
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(5)=R(13)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(5);
  if(c->t) goto L8c074436;
  c->t=(R(5)&R(5))==0;
  ST8(R(4)+R(0),R(13));
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c074418; }
  R(0)=0x74u;
  ST32(R(4)+R(0),R(6));
L8c074418:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c074436;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c07442c;
  R(3)=LD32(R(14)+8);
  R(0)=0x74u;
  ST32(R(3)+R(0),R(6));
  R(3)=LD32(R(14)+12);
  ST32(R(3)+R(0),R(6));
L8c07442c:;
  R(3)=LD32(R(14)+8);
  R(0)=0x79u;
  ST8(R(3)+R(0),R(13));
  R(3)=LD32(R(14)+12);
  ST8(R(3)+R(0),R(13));
L8c074436:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074460(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  c->fr[4]=0x00000000u;
  R(0)=0xcu;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(7));
  R(12)=LD32(R(15)+44);
  R(13)=LD32(R(15)+56);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,4,R(0)+R(15));
  R(0)=LD32(R(15)+48);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(11)=R(6); if(k) goto L8c074494; }
  R(3)=0x8c046e40u;
  { c->pr=0x8c074492u; R(4)=LD32(R(15)); f_8c046e40(c); }
  R(11)=R(12);
L8c074494:;
  R(0)=LD32(R(15)+52);
  R(14)=0x8c05e6eau;
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0744a8;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0744ac;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0744ce;
  {  goto L8c0744d6; }
L8c0744a8:;
  { R(5)=LD32(R(15)+8); goto L8c0744d0; }
L8c0744ac:;
  R(0)=LD32(R(15));
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0744be;
  R(6)=R(13);
  { R(5)=R(12); goto L8c0744c2; }
L8c0744be:;
  R(5)=R(11);
  R(6)=R(13);
L8c0744c2:;
  R(2)=0x8c05e5f4u;
  R(4)=R(15);
  { c->pr=0x8c0744cau; R(4)+=0xcu; f_8c05e5f4(c); }
  {  goto L8c0744d6; }
L8c0744ce:;
  R(5)=R(13);
L8c0744d0:;
  R(4)=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0744d6u; R(4)+=0xcu; sh4_call(c,tg); }
L8c0744d6:;
  R(5)=R(15);
  R(5)+=0xcu;
  { uint32_t tg=R(14); c->pr=0x8c0744deu; R(4)=R(11); sh4_call(c,tg); }
  R(0)=LD32(R(15)+48);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0744f4;
  R(5)=R(15);
  R(5)+=0xcu;
  { uint32_t tg=R(14); c->pr=0x8c0744ecu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(5)=R(15);
  R(5)+=0xcu;
  { uint32_t tg=R(14); c->pr=0x8c0744f4u; R(4)=R(12); sh4_call(c,tg); }
L8c0744f4:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074502(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(3)=R(5);
  R(12)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(13)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c074560;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c074562; }
L8c074560:;
  ST32(R(15),R(13));
L8c074562:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(14)=LD32(R(14)+4);
  R(6)+=0x14u;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c074574u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(12)=R(0);
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x14u;
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c074586u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(12)=R(0);
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x14u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c074598u; R(4)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(1)=0x1cau;
  R(2)=R(15);
  R(2)+=0x14u;
  ST32(R(15)+8,R(2));
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0745b2;
  R(1)=0x1cbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0745bc;
  {  goto L8c0745e0; }
L8c0745b2:;
  R(7)=LD32(R(14)+8);
  R(6)=LD32(R(14)+4);
  R(5)=LD32(R(14));
  { R(4)=LD32(R(14)+12); goto L8c0745cc; }
L8c0745bc:;
  R(4)=LD32(R(14)+12);
  R(7)=LD32(R(14)+8);
  R(6)=LD32(R(14)+4);
  R(4)+=0xcu;
  R(5)=LD32(R(14));
  R(7)+=0xcu;
  R(6)+=0xcu;
  R(5)+=0xcu;
L8c0745cc:;
  R(2)=LD32(R(15)+8);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+16);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+24);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0745deu; R(4)=R(14); f_8c074460(c); }
  R(15)+=0x10u;
L8c0745e0:;
  R(0)=R(13);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074560(SH4Ctx *c) {
  ST32(R(15),R(13));
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(14)=LD32(R(14)+4);
  R(6)+=0x14u;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c074574u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(12)=R(0);
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x14u;
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c074586u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(12)=R(0);
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x14u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c074598u; R(4)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(1)=0x1cau;
  R(2)=R(15);
  R(2)+=0x14u;
  ST32(R(15)+8,R(2));
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0745b2;
  R(1)=0x1cbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0745bc;
  {  goto L8c0745e0; }
L8c0745b2:;
  R(7)=LD32(R(14)+8);
  R(6)=LD32(R(14)+4);
  R(5)=LD32(R(14));
  { R(4)=LD32(R(14)+12); goto L8c0745cc; }
L8c0745bc:;
  R(4)=LD32(R(14)+12);
  R(7)=LD32(R(14)+8);
  R(6)=LD32(R(14)+4);
  R(4)+=0xcu;
  R(5)=LD32(R(14));
  R(7)+=0xcu;
  R(6)+=0xcu;
  R(5)+=0xcu;
L8c0745cc:;
  R(2)=LD32(R(15)+8);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+16);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+24);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0745deu; R(4)=R(14); f_8c074460(c); }
  R(15)+=0x10u;
L8c0745e0:;
  R(0)=R(13);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074620(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(3)=R(5);
  R(6)=0x8c0c76fcu;
  R(8)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(9)=R(4);
  R(4)=0x0u;
  R(13)=R(4);
  R(11)=R(4);
  R(10)=R(4);
  ST32(R(15)+16,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(12)=R(4); if(k) goto L8c074680; }
  ST32(R(15),R(5));
  { ST32(R(6),R(4)); goto L8c074682; }
L8c074680:;
  ST32(R(15),R(9));
L8c074682:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(8)+4);
  R(5)=R(8);
  R(14)=LD32(R(14)+4);
  R(6)+=0x14u;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c074694u; R(4)=R(9); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(8)=R(0);
  R(6)=R(15);
  R(5)=R(8);
  R(6)+=0x14u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(8)+4);
  { uint32_t tg=R(3); c->pr=0x8c0746a6u; R(4)=R(9); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(8)=R(0);
  R(6)=R(15);
  R(5)=R(8);
  R(6)+=0x14u;
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(8)+4);
  { uint32_t tg=R(3); c->pr=0x8c0746b8u; R(4)=R(9); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=LD32(R(15)+16);
  R(1)=0x1ccu;
  R(0)-=R(1);
  R(1)=0x14u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0746ce;
  {  goto L8c074880; }
L8c0746ce:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0746dcu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0746dau+R(0));  switch(tg){ case 0x8c074704u: goto L8c074704; case 0x8c074716u: goto L8c074716; case 0x8c074728u: goto L8c074728; case 0x8c07473au: goto L8c07473a; case 0x8c07474cu: goto L8c07474c; case 0x8c07475eu: goto L8c07475e; case 0x8c074770u: goto L8c074770; case 0x8c074782u: goto L8c074782; case 0x8c074794u: goto L8c074794; case 0x8c0747a6u: goto L8c0747a6; case 0x8c0747b8u: goto L8c0747b8; case 0x8c0747e0u: goto L8c0747e0; case 0x8c0747f2u: goto L8c0747f2; case 0x8c074804u: goto L8c074804; case 0x8c074816u: goto L8c074816; case 0x8c074828u: goto L8c074828; case 0x8c07483au: goto L8c07483a; case 0x8c07484cu: goto L8c07484c; case 0x8c07485eu: goto L8c07485e; case 0x8c074870u: goto L8c074870; default: sh4_bad_jump(c,0x8c0746d6u,tg); return; } }
L8c074704:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x18u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x18u;
  R(10)+=0x18u;
  { R(12)+=0x18u; goto L8c074880; }
L8c074716:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x1cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x1cu;
  R(10)+=0x1cu;
  { R(12)+=0x1cu; goto L8c074880; }
L8c074728:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x20u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x20u;
  R(10)+=0x20u;
  { R(12)+=0x20u; goto L8c074880; }
L8c07473a:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x24u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x24u;
  R(10)+=0x24u;
  { R(12)+=0x24u; goto L8c074880; }
L8c07474c:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x28u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x28u;
  R(10)+=0x28u;
  { R(12)+=0x28u; goto L8c074880; }
L8c07475e:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x2cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x2cu;
  R(10)+=0x2cu;
  { R(12)+=0x2cu; goto L8c074880; }
L8c074770:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x30u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x30u;
  R(10)+=0x30u;
  { R(12)+=0x30u; goto L8c074880; }
L8c074782:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x34u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x34u;
  R(10)+=0x34u;
  { R(12)+=0x34u; goto L8c074880; }
L8c074794:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x38u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x38u;
  R(10)+=0x38u;
  { R(12)+=0x38u; goto L8c074880; }
L8c0747a6:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x3cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x3cu;
  R(10)+=0x3cu;
  { R(12)+=0x3cu; goto L8c074880; }
L8c0747b8:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x40u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x40u;
  R(10)+=0x40u;
  { R(12)+=0x40u; goto L8c074880; }
L8c0747e0:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x44u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x44u;
  R(10)+=0x44u;
  { R(12)+=0x44u; goto L8c074880; }
L8c0747f2:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x48u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x48u;
  R(10)+=0x48u;
  { R(12)+=0x48u; goto L8c074880; }
L8c074804:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x4cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x4cu;
  R(10)+=0x4cu;
  { R(12)+=0x4cu; goto L8c074880; }
L8c074816:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x50u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x50u;
  R(10)+=0x50u;
  { R(12)+=0x50u; goto L8c074880; }
L8c074828:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x54u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x54u;
  R(10)+=0x54u;
  { R(12)+=0x54u; goto L8c074880; }
L8c07483a:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x58u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x58u;
  R(10)+=0x58u;
  { R(12)+=0x58u; goto L8c074880; }
L8c07484c:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x5cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x5cu;
  R(10)+=0x5cu;
  { R(12)+=0x5cu; goto L8c074880; }
L8c07485e:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x60u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x60u;
  R(10)+=0x60u;
  { R(12)+=0x60u; goto L8c074880; }
L8c074870:;
  R(12)=LD32(R(14)+12);
  R(11)=LD32(R(14)+8);
  R(13)=LD32(R(14)+4);
  R(12)+=0x64u;
  R(10)=LD32(R(14));
  R(11)+=0x64u;
  R(13)+=0x64u;
  R(10)+=0x64u;
L8c074880:;
  R(3)=LD32(R(15)+8);
  R(6)=R(13);
  R(5)=R(10);
  R(7)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+16);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c074894u; R(4)=R(14); f_8c074360(c); }
  R(0)=LD32(R(15)+16);
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074680(SH4Ctx *c) {
  ST32(R(15),R(9));
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(8)+4);
  R(5)=R(8);
  R(14)=LD32(R(14)+4);
  R(6)+=0x14u;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c074694u; R(4)=R(9); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(8)=R(0);
  R(6)=R(15);
  R(5)=R(8);
  R(6)+=0x14u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(8)+4);
  { uint32_t tg=R(3); c->pr=0x8c0746a6u; R(4)=R(9); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(8)=R(0);
  R(6)=R(15);
  R(5)=R(8);
  R(6)+=0x14u;
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(8)+4);
  { uint32_t tg=R(3); c->pr=0x8c0746b8u; R(4)=R(9); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=LD32(R(15)+16);
  R(1)=0x1ccu;
  R(0)-=R(1);
  R(1)=0x14u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0746ce;
  {  goto L8c074880; }
L8c0746ce:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0746dcu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0746dau+R(0));  switch(tg){ case 0x8c074704u: goto L8c074704; case 0x8c074716u: goto L8c074716; case 0x8c074728u: goto L8c074728; case 0x8c07473au: goto L8c07473a; case 0x8c07474cu: goto L8c07474c; case 0x8c07475eu: goto L8c07475e; case 0x8c074770u: goto L8c074770; case 0x8c074782u: goto L8c074782; case 0x8c074794u: goto L8c074794; case 0x8c0747a6u: goto L8c0747a6; case 0x8c0747b8u: goto L8c0747b8; case 0x8c0747e0u: goto L8c0747e0; case 0x8c0747f2u: goto L8c0747f2; case 0x8c074804u: goto L8c074804; case 0x8c074816u: goto L8c074816; case 0x8c074828u: goto L8c074828; case 0x8c07483au: goto L8c07483a; case 0x8c07484cu: goto L8c07484c; case 0x8c07485eu: goto L8c07485e; case 0x8c074870u: goto L8c074870; default: sh4_bad_jump(c,0x8c0746d6u,tg); return; } }
L8c074704:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x18u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x18u;
  R(10)+=0x18u;
  { R(12)+=0x18u; goto L8c074880; }
L8c074716:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x1cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x1cu;
  R(10)+=0x1cu;
  { R(12)+=0x1cu; goto L8c074880; }
L8c074728:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x20u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x20u;
  R(10)+=0x20u;
  { R(12)+=0x20u; goto L8c074880; }
L8c07473a:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x24u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x24u;
  R(10)+=0x24u;
  { R(12)+=0x24u; goto L8c074880; }
L8c07474c:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x28u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x28u;
  R(10)+=0x28u;
  { R(12)+=0x28u; goto L8c074880; }
L8c07475e:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x2cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x2cu;
  R(10)+=0x2cu;
  { R(12)+=0x2cu; goto L8c074880; }
L8c074770:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x30u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x30u;
  R(10)+=0x30u;
  { R(12)+=0x30u; goto L8c074880; }
L8c074782:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x34u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x34u;
  R(10)+=0x34u;
  { R(12)+=0x34u; goto L8c074880; }
L8c074794:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x38u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x38u;
  R(10)+=0x38u;
  { R(12)+=0x38u; goto L8c074880; }
L8c0747a6:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x3cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x3cu;
  R(10)+=0x3cu;
  { R(12)+=0x3cu; goto L8c074880; }
L8c0747b8:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x40u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x40u;
  R(10)+=0x40u;
  { R(12)+=0x40u; goto L8c074880; }
L8c0747e0:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x44u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x44u;
  R(10)+=0x44u;
  { R(12)+=0x44u; goto L8c074880; }
L8c0747f2:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x48u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x48u;
  R(10)+=0x48u;
  { R(12)+=0x48u; goto L8c074880; }
L8c074804:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x4cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x4cu;
  R(10)+=0x4cu;
  { R(12)+=0x4cu; goto L8c074880; }
L8c074816:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x50u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x50u;
  R(10)+=0x50u;
  { R(12)+=0x50u; goto L8c074880; }
L8c074828:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x54u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x54u;
  R(10)+=0x54u;
  { R(12)+=0x54u; goto L8c074880; }
L8c07483a:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x58u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x58u;
  R(10)+=0x58u;
  { R(12)+=0x58u; goto L8c074880; }
L8c07484c:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x5cu;
  R(12)=LD32(R(14)+12);
  R(11)+=0x5cu;
  R(10)+=0x5cu;
  { R(12)+=0x5cu; goto L8c074880; }
L8c07485e:;
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x60u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x60u;
  R(10)+=0x60u;
  { R(12)+=0x60u; goto L8c074880; }
L8c074870:;
  R(12)=LD32(R(14)+12);
  R(11)=LD32(R(14)+8);
  R(13)=LD32(R(14)+4);
  R(12)+=0x64u;
  R(10)=LD32(R(14));
  R(11)+=0x64u;
  R(13)+=0x64u;
  R(10)+=0x64u;
L8c074880:;
  R(3)=LD32(R(15)+8);
  R(6)=R(13);
  R(5)=R(10);
  R(7)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+16);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c074894u; R(4)=R(14); f_8c074360(c); }
  R(0)=LD32(R(15)+16);
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0747e0(SH4Ctx *c) {
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(14)+8);
  R(10)=LD32(R(14));
  R(13)+=0x44u;
  R(12)=LD32(R(14)+12);
  R(11)+=0x44u;
  R(10)+=0x44u;
  { R(12)+=0x44u; goto L8c074880; }
L8c074880:;
  R(3)=LD32(R(15)+8);
  R(6)=R(13);
  R(5)=R(10);
  R(7)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+16);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c074894u; R(4)=R(14); f_8c074360(c); }
  R(0)=LD32(R(15)+16);
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0748aa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(12)=R(5);
  R(5)=0x8c0c76fcu;
  R(13)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c074900;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c074902; }
L8c074900:;
  ST32(R(15),R(13));
L8c074902:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(11)=LD32(R(12)+4);
  R(5)=R(12);
  R(14)=LD32(R(14)+4);
  R(6)+=0xcu;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(11); c->pr=0x8c074914u; R(4)=R(13); sh4_call(c,tg); }
  R(11)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(12)=LD32(R(15)+12);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c074924u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+12);
  R(11)=R(0);
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0xcu;
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(11)+4);
  { uint32_t tg=R(3); c->pr=0x8c074936u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=R(12);
  R(13)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==1;
  R(13)=LD32(R(13)+4);
  { uint32_t k=!c->t; R(13)=LD32(R(13)+12); if(k) goto L8c07494e; }
  R(2)=0x8c046e40u;
  { c->pr=0x8c07494au; R(4)=R(14); f_8c046e40(c); }
  { R(4)=LD32(R(14)+12); goto L8c074950; }
L8c07494e:;
  R(4)=LD32(R(14)+4);
L8c074950:;
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c074962;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c07496a;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c07496c;
  {  goto L8c07496c; }
L8c074962:;
  R(13)=LD32(R(14));
  R(0)=0x68u;
  { R(13)=LD32(R(13)+R(0)); goto L8c07496c; }
L8c07496a:;
  R(13)=0x0u;
L8c07496c:;
  R(0)=0x68u;
  ST32(R(4)+R(0),R(13));
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c074980;
  R(2)=LD32(R(14)+8);
  R(0)=0x68u;
  ST32(R(2)+R(0),R(13));
  R(3)=LD32(R(14)+12);
  ST32(R(3)+R(0),R(13));
L8c074980:;
  R(3)=0x8c0c7df8u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c074992;
  c->t=R(4)==R(13);
  if(c->t) goto L8c074992;
  R(3)=0x8c046a20u;
  { c->pr=0x8c074992u; R(4)=R(14); f_8c046a20(c); }
L8c074992:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074900(SH4Ctx *c) {
  ST32(R(15),R(13));
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(11)=LD32(R(12)+4);
  R(5)=R(12);
  R(14)=LD32(R(14)+4);
  R(6)+=0xcu;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(11); c->pr=0x8c074914u; R(4)=R(13); sh4_call(c,tg); }
  R(11)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(12)=LD32(R(15)+12);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c074924u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+12);
  R(11)=R(0);
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0xcu;
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(11)+4);
  { uint32_t tg=R(3); c->pr=0x8c074936u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=R(12);
  R(13)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==1;
  R(13)=LD32(R(13)+4);
  { uint32_t k=!c->t; R(13)=LD32(R(13)+12); if(k) goto L8c07494e; }
  R(2)=0x8c046e40u;
  { c->pr=0x8c07494au; R(4)=R(14); f_8c046e40(c); }
  { R(4)=LD32(R(14)+12); goto L8c074950; }
L8c07494e:;
  R(4)=LD32(R(14)+4);
L8c074950:;
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c074962;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c07496a;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c07496c;
  {  goto L8c07496c; }
L8c074962:;
  R(13)=LD32(R(14));
  R(0)=0x68u;
  { R(13)=LD32(R(13)+R(0)); goto L8c07496c; }
L8c07496a:;
  R(13)=0x0u;
L8c07496c:;
  R(0)=0x68u;
  ST32(R(4)+R(0),R(13));
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c074980;
  R(2)=LD32(R(14)+8);
  R(0)=0x68u;
  ST32(R(2)+R(0),R(13));
  R(3)=LD32(R(14)+12);
  ST32(R(3)+R(0),R(13));
L8c074980:;
  R(3)=0x8c0c7df8u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c074992;
  c->t=R(4)==R(13);
  if(c->t) goto L8c074992;
  R(3)=0x8c046a20u;
  { c->pr=0x8c074992u; R(4)=R(14); f_8c046a20(c); }
L8c074992:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0749a2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(13)=R(5);
  R(5)=0x8c0c76fcu;
  R(12)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0749c6;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c0749c8; }
L8c0749c6:;
  ST32(R(15),R(12));
L8c0749c8:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(14)=LD32(R(14)+4);
  R(6)+=0xcu;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c0749dau; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(11)=LD32(R(15)+12);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c0749eau; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+12);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0xcu;
  ST32(R(15)+4,R(2));
  R(10)=LD32(R(13)+4);
  { uint32_t tg=R(10); c->pr=0x8c0749fcu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=LD32(R(15)+12);
  R(10)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(13)=LD32(R(13)+4);
  R(5)=R(10);
  R(6)+=0xcu;
  R(13)=LD32(R(13)+12);
  { uint32_t tg=R(3); c->pr=0x8c074a10u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=0xcu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c074a36;
  R(2)=0x8c046ec0u;
  { c->pr=0x8c074a26u; R(4)=R(14); f_8c046ec0(c); }
  R(0)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c074a36;
  R(2)=0x8c046ee0u;
  { c->pr=0x8c074a36u; R(4)=R(14); f_8c046ee0(c); }
L8c074a36:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c074a80;
  R(2)=0x8c046e40u;
  { c->pr=0x8c074a42u; R(4)=R(14); f_8c046e40(c); }
  { R(4)=LD32(R(14)+12); goto L8c074a82; }
L8c074a80:;
  R(4)=LD32(R(14)+4);
L8c074a82:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c074a94;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c074a9c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c074a9e;
  {  goto L8c074a9e; }
L8c074a94:;
  R(13)=LD32(R(14));
  R(0)=0x68u;
  { R(13)=LD32(R(13)+R(0)); goto L8c074a9e; }
L8c074a9c:;
  R(13)=0x0u;
L8c074a9e:;
  R(0)=0x6cu;
  ST32(R(4)+R(0),R(13));
  R(0)=R(11);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c074ab2;
  R(2)=LD32(R(14)+8);
  R(0)=0x6cu;
  ST32(R(2)+R(0),R(13));
  R(3)=LD32(R(14)+12);
  ST32(R(3)+R(0),R(13));
L8c074ab2:;
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=LD32(R(15)+8);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074a80(SH4Ctx *c) {
  R(4)=LD32(R(14)+4);
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c074a94;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c074a9c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c074a9e;
  {  goto L8c074a9e; }
L8c074a94:;
  R(13)=LD32(R(14));
  R(0)=0x68u;
  { R(13)=LD32(R(13)+R(0)); goto L8c074a9e; }
L8c074a9c:;
  R(13)=0x0u;
L8c074a9e:;
  R(0)=0x6cu;
  ST32(R(4)+R(0),R(13));
  R(0)=R(11);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c074ab2;
  R(2)=LD32(R(14)+8);
  R(0)=0x6cu;
  ST32(R(2)+R(0),R(13));
  R(3)=LD32(R(14)+12);
  ST32(R(3)+R(0),R(13));
L8c074ab2:;
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=LD32(R(15)+8);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074aca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(12)=R(5);
  R(5)=0x8c0c76fcu;
  R(13)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c074aea;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c074aec; }
L8c074aea:;
  ST32(R(15),R(13));
L8c074aec:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(11)=LD32(R(12)+4);
  R(5)=R(12);
  R(14)=LD32(R(14)+4);
  R(6)+=0xcu;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(11); c->pr=0x8c074afeu; R(4)=R(13); sh4_call(c,tg); }
  R(11)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(12)=LD32(R(15)+12);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c074b0eu; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+12);
  R(11)=R(0);
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0xcu;
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(11)+4);
  { uint32_t tg=R(3); c->pr=0x8c074b20u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=R(12);
  R(13)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c074b34;
  R(2)=0x8c046e40u;
  { c->pr=0x8c074b30u; R(4)=R(14); f_8c046e40(c); }
  { R(4)=LD32(R(14)+12); goto L8c074b36; }
L8c074b34:;
  R(4)=LD32(R(14)+4);
L8c074b36:;
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c074b48;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c074b50;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c074b52;
  {  goto L8c074b52; }
L8c074b48:;
  R(13)=LD32(R(14));
  R(0)=0x78u;
  { R(13)=(int32_t)(int8_t)LD8(R(13)+R(0)); goto L8c074b52; }
L8c074b50:;
  R(13)=0xffffffffu;
L8c074b52:;
  R(0)=0x78u;
  ST8(R(4)+R(0),R(13));
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c074b66;
  R(2)=LD32(R(14)+8);
  R(0)=0x78u;
  ST8(R(2)+R(0),R(13));
  R(3)=LD32(R(14)+12);
  ST8(R(3)+R(0),R(13));
L8c074b66:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074ba0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(13)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c074bbc;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c074bbe; }
L8c074bbc:;
  ST32(R(15),R(13));
L8c074bbe:;
  R(3)=LD32(R(15));
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x10u;
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+16);
  ST32(R(15)+8,R(1));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c074bd2u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+16);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x10u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c074be4u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(4)=LD32(R(15)+16);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c074bf0;
  { R(6)=0x0u; goto L8c074bf2; }
L8c074bf0:;
  R(6)=0x1u;
L8c074bf2:;
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c074bf8u; R(4)=LD32(R(15)+8); f_8c0743ce(c); }
  R(0)=LD32(R(15)+4);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074c04(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(9)=R(5);
  R(10)=0x0u;
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(11)=R(4);
  R(9)=LD32(R(9)+4);
  R(13)=R(10);
  R(12)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c074c2cu; R(4)=R(11); sh4_call(c,tg); }
  R(9)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(9)+4);
  R(5)=R(9);
  R(14)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c074c3cu; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(9)=R(0);
  R(6)=R(15);
  R(5)=R(9);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  R(8)=LD32(R(9)+4);
  { uint32_t tg=R(8); c->pr=0x8c074c4eu; R(4)=R(11); sh4_call(c,tg); }
  R(11)=LD32(R(15)+4);
  R(8)=R(0);
  R(3)=0x8c058460u;
  R(11)=LD32(R(11)+4);
  R(11)=LD32(R(11)+12);
  { c->pr=0x8c074c5cu; R(4)=R(14); f_8c058460(c); }
  R(9)=R(0);
  c->t=R(11)==R(9);
  if(c->t) goto L8c074cce;
  R(3)=0x2u;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(c->t) goto L8c074cce;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c074cce;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c074c74;
  R(12)=LD32(R(11)+4);
  R(12)=LD32(R(12)+16);
L8c074c74:;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c074c7c;
  R(13)=LD32(R(9)+4);
  R(13)=LD32(R(13)+16);
L8c074c7c:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c074ca6;
  R(5)=0x0u;
  R(6)=0x1u;
  { c->pr=0x8c074c88u; R(4)=R(12); f_8c0743ce(c); }
  R(3)=LD32(R(12)+12);
  R(0)=0x74u;
  R(5)=R(11);
  ST32(R(3)+R(0),R(14));
  R(3)=0x8c05846eu;
  { c->pr=0x8c074c96u; R(4)=R(14); f_8c05846e(c); }
  R(0)=0x74u;
  R(2)=LD32(R(12)+4);
  ST32(R(2)+R(0),R(14));
  R(3)=LD32(R(12)+8);
  ST32(R(3)+R(0),R(14));
  R(3)=0x8c0502e0u;
  { c->pr=0x8c074ca6u; R(4)=R(11); f_8c0502e0(c); }
L8c074ca6:;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c074cce;
  R(2)=0x8c123cf8u;
  R(3)=LD32(R(2));
  c->t=R(3)==R(9);
  if(c->t) goto L8c074cce;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c074cc0;
  R(6)=0x0u;
  R(5)=R(6);
  { c->pr=0x8c074cc0u; R(4)=R(13); f_8c0743ce(c); }
L8c074cc0:;
  R(3)=LD32(R(13)+4);
  R(0)=0x74u;
  ST32(R(3)+R(0),R(10));
  R(3)=LD32(R(13)+8);
  ST32(R(3)+R(0),R(10));
  R(3)=LD32(R(13)+12);
  ST32(R(3)+R(0),R(10));
L8c074cce:;
  R(0)=R(8);
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
void f_8c074ce4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=R(5);
  R(10)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(11)=R(4);
  R(2)=LD32(R(3));
  R(12)=0x0u;
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)=R(12); if(k) goto L8c074d40; }
  ST32(R(15),R(4));
  { ST32(R(5),R(12)); goto L8c074d42; }
L8c074d40:;
  ST32(R(15),R(11));
L8c074d42:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(14)=LD32(R(14)+4);
  R(6)+=0x10u;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c074d54u; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(15)+16);
  R(10)=R(0);
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x10u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c074d66u; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(1)=0x1e5u;
  R(0)=LD32(R(15)+4);
  R(4)=LD32(R(15)+16);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c074db8; }
  R(1)=0x1e6u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c074de0;
  R(1)=0x1e7u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c074e00;
  R(1)=0x1e8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c074e22;
  R(1)=0x1e9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c074e3c;
  R(1)=0x1eau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c074d96;
  {  goto L8c074e56; }
L8c074d96:;
  R(1)=0x1ebu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c074da0;
  {  goto L8c074e70; }
L8c074da0:;
  R(1)=0x1ecu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c074daa;
  {  goto L8c074e8a; }
L8c074daa:;
  R(1)=0x1edu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c074db4;
  {  goto L8c074ea4; }
L8c074db4:;
  {  goto L8c074ec0; }
L8c074db8:;
  R(13)=LD32(R(14));
  R(0)=0x72u;
  { R(13)=(int32_t)(int16_t)LD16(R(13)+R(0)); goto L8c074ec0; }
L8c074de0:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c074dec; }
  {  goto L8c074ec0; }
L8c074dec:;
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c074dfc;
  {  goto L8c074eba; }
L8c074dfc:;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e00:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x2u;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c074e0e; }
  {  goto L8c074ec0; }
L8c074e0e:;
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c074e1e;
  {  goto L8c074eba; }
L8c074e1e:;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e22:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x4u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e3c:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x8u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e56:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x10u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e70:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x20u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e8a:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x40u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074ea4:;
  R(0)=R(4);
  R(6)=0x80u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c074ebe;
L8c074eba:;
  { R(4)=R(5); goto L8c074ec0; }
L8c074ebe:;
  R(4)=R(12);
L8c074ec0:;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+20);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+8);
  R(5)=LD32(R(14)+4);
  R(7)=LD32(R(14)+12);
  R(6)+=0x72u;
  R(3)=0x8c075be0u;
  R(5)+=0x72u;
  R(7)+=0x72u;
  { c->pr=0x8c074edau; R(4)=R(14); f_8c075be0(c); }
  R(0)=LD32(R(15)+20);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074d40(SH4Ctx *c) {
  ST32(R(15),R(11));
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(14)=LD32(R(14)+4);
  R(6)+=0x10u;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c074d54u; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(15)+16);
  R(10)=R(0);
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x10u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c074d66u; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(1)=0x1e5u;
  R(0)=LD32(R(15)+4);
  R(4)=LD32(R(15)+16);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c074db8; }
  R(1)=0x1e6u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c074de0;
  R(1)=0x1e7u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c074e00;
  R(1)=0x1e8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c074e22;
  R(1)=0x1e9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c074e3c;
  R(1)=0x1eau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c074d96;
  {  goto L8c074e56; }
L8c074d96:;
  R(1)=0x1ebu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c074da0;
  {  goto L8c074e70; }
L8c074da0:;
  R(1)=0x1ecu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c074daa;
  {  goto L8c074e8a; }
L8c074daa:;
  R(1)=0x1edu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c074db4;
  {  goto L8c074ea4; }
L8c074db4:;
  {  goto L8c074ec0; }
L8c074db8:;
  R(13)=LD32(R(14));
  R(0)=0x72u;
  { R(13)=(int32_t)(int16_t)LD16(R(13)+R(0)); goto L8c074ec0; }
L8c074de0:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c074dec; }
  {  goto L8c074ec0; }
L8c074dec:;
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c074dfc;
  {  goto L8c074eba; }
L8c074dfc:;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e00:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x2u;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c074e0e; }
  {  goto L8c074ec0; }
L8c074e0e:;
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c074e1e;
  {  goto L8c074eba; }
L8c074e1e:;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e22:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x4u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e3c:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x8u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e56:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x10u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e70:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x20u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074e8a:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x40u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c074eba;
  { R(4)=R(12); goto L8c074ec0; }
L8c074ea4:;
  R(0)=R(4);
  R(6)=0x80u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c074ec0; }
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c074ebe;
L8c074eba:;
  { R(4)=R(5); goto L8c074ec0; }
L8c074ebe:;
  R(4)=R(12);
L8c074ec0:;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+20);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+8);
  R(5)=LD32(R(14)+4);
  R(7)=LD32(R(14)+12);
  R(6)+=0x72u;
  R(3)=0x8c075be0u;
  R(5)+=0x72u;
  R(7)+=0x72u;
  { c->pr=0x8c074edau; R(4)=R(14); f_8c075be0(c); }
  R(0)=LD32(R(15)+20);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074de0(SH4Ctx *c) {
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c074dec; }
  {  goto L8c074ec0; }
L8c074dec:;
  R(3)=LD32(R(14));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c074dfc;
  {  goto L8c074eba; }
L8c074dfc:;
  { R(4)=R(12); goto L8c074ec0; }
L8c074eba:;
  { R(4)=R(5); goto L8c074ec0; }
L8c074ec0:;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+20);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+8);
  R(5)=LD32(R(14)+4);
  R(7)=LD32(R(14)+12);
  R(6)+=0x72u;
  R(3)=0x8c075be0u;
  R(5)+=0x72u;
  R(7)+=0x72u;
  { c->pr=0x8c074edau; R(4)=R(14); f_8c075be0(c); }
  R(0)=LD32(R(15)+20);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074eec(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=R(5);
  R(10)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(11)=R(4);
  R(2)=LD32(R(3));
  R(12)=0x0u;
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)=R(12); if(k) goto L8c074f40; }
  ST32(R(15),R(4));
  { ST32(R(5),R(12)); goto L8c074f42; }
L8c074f40:;
  ST32(R(15),R(11));
L8c074f42:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(14)=LD32(R(14)+4);
  R(6)+=0x10u;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c074f54u; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(15)+16);
  R(10)=R(0);
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x10u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c074f66u; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(5)=0x1u;
  R(0)=LD32(R(15)+4);
  R(4)=LD32(R(15)+16);
  R(1)=0x1eeu;
  R(0)-=R(1);
  R(1)=0xau;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c074f7c;
  {  goto L8c0750aa; }
L8c074f7c:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c074f8cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c074f88u+R(0));  switch(tg){ case 0x8c074fa0u: goto L8c074fa0; case 0x8c074fa8u: goto L8c074fa8; case 0x8c074fc8u: goto L8c074fc8; case 0x8c074feau: goto L8c074fea; case 0x8c07500cu: goto L8c07500c; case 0x8c075026u: goto L8c075026; case 0x8c075040u: goto L8c075040; case 0x8c07505au: goto L8c07505a; case 0x8c075074u: goto L8c075074; case 0x8c07508eu: goto L8c07508e; default: sh4_bad_jump(c,0x8c074f84u,tg); return; } }
L8c074fa0:;
  R(13)=LD32(R(14));
  R(0)=0x70u;
  { R(13)=(int32_t)(int16_t)LD16(R(13)+R(0)); goto L8c0750aa; }
L8c074fa8:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c074fb4; }
  {  goto L8c0750aa; }
L8c074fb4:;
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c074fc4;
  {  goto L8c0750a4; }
L8c074fc4:;
  { R(4)=R(12); goto L8c0750aa; }
L8c074fc8:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x2u;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c074fd6; }
  {  goto L8c0750aa; }
L8c074fd6:;
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c074fe6;
  {  goto L8c0750a4; }
L8c074fe6:;
  { R(4)=R(12); goto L8c0750aa; }
L8c074fea:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x4u;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c074ff8; }
  {  goto L8c0750aa; }
L8c074ff8:;
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c075008;
  {  goto L8c0750a4; }
L8c075008:;
  { R(4)=R(12); goto L8c0750aa; }
L8c07500c:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x8u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c075026:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x10u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c075040:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x20u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c07505a:;
  R(0)=R(4);
  R(6)=0x80u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c075074:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x40u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c07508e:;
  R(0)=R(4);
  R(6)=0x100u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c0750a8;
L8c0750a4:;
  { R(4)=R(5); goto L8c0750aa; }
L8c0750a8:;
  R(4)=R(12);
L8c0750aa:;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+20);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+8);
  R(5)=LD32(R(14)+4);
  R(7)=LD32(R(14)+12);
  R(6)+=0x70u;
  R(3)=0x8c075be0u;
  R(5)+=0x70u;
  R(7)+=0x70u;
  { c->pr=0x8c0750c4u; R(4)=R(14); f_8c075be0(c); }
  R(0)=LD32(R(15)+20);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c074f40(SH4Ctx *c) {
  ST32(R(15),R(11));
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(14)=LD32(R(14)+4);
  R(6)+=0x10u;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c074f54u; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(15)+16);
  R(10)=R(0);
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x10u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c074f66u; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(5)=0x1u;
  R(0)=LD32(R(15)+4);
  R(4)=LD32(R(15)+16);
  R(1)=0x1eeu;
  R(0)-=R(1);
  R(1)=0xau;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c074f7c;
  {  goto L8c0750aa; }
L8c074f7c:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c074f8cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c074f88u+R(0));  switch(tg){ case 0x8c074fa0u: goto L8c074fa0; case 0x8c074fa8u: goto L8c074fa8; case 0x8c074fc8u: goto L8c074fc8; case 0x8c074feau: goto L8c074fea; case 0x8c07500cu: goto L8c07500c; case 0x8c075026u: goto L8c075026; case 0x8c075040u: goto L8c075040; case 0x8c07505au: goto L8c07505a; case 0x8c075074u: goto L8c075074; case 0x8c07508eu: goto L8c07508e; default: sh4_bad_jump(c,0x8c074f84u,tg); return; } }
L8c074fa0:;
  R(13)=LD32(R(14));
  R(0)=0x70u;
  { R(13)=(int32_t)(int16_t)LD16(R(13)+R(0)); goto L8c0750aa; }
L8c074fa8:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c074fb4; }
  {  goto L8c0750aa; }
L8c074fb4:;
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c074fc4;
  {  goto L8c0750a4; }
L8c074fc4:;
  { R(4)=R(12); goto L8c0750aa; }
L8c074fc8:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x2u;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c074fd6; }
  {  goto L8c0750aa; }
L8c074fd6:;
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c074fe6;
  {  goto L8c0750a4; }
L8c074fe6:;
  { R(4)=R(12); goto L8c0750aa; }
L8c074fea:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x4u;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c074ff8; }
  {  goto L8c0750aa; }
L8c074ff8:;
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c075008;
  {  goto L8c0750a4; }
L8c075008:;
  { R(4)=R(12); goto L8c0750aa; }
L8c07500c:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x8u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c075026:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x10u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c075040:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x20u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c07505a:;
  R(0)=R(4);
  R(6)=0x80u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c075074:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(6)=0x40u;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c0750a4;
  { R(4)=R(12); goto L8c0750aa; }
L8c07508e:;
  R(0)=R(4);
  R(6)=0x100u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0750aa; }
  R(3)=LD32(R(14));
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c0750a8;
L8c0750a4:;
  { R(4)=R(5); goto L8c0750aa; }
L8c0750a8:;
  R(4)=R(12);
L8c0750aa:;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+20);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+8);
  R(5)=LD32(R(14)+4);
  R(7)=LD32(R(14)+12);
  R(6)+=0x70u;
  R(3)=0x8c075be0u;
  R(5)+=0x70u;
  R(7)+=0x70u;
  { c->pr=0x8c0750c4u; R(4)=R(14); f_8c075be0(c); }
  R(0)=LD32(R(15)+20);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075100(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(6)=0x8c0c76fcu;
  R(14)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07511a;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c07511c; }
L8c07511a:;
  ST32(R(15),R(4));
L8c07511c:;
  R(13)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x4u;
  R(13)=LD32(R(13)+4);
  R(13)=LD32(R(13)+16);
  { uint32_t tg=R(3); c->pr=0x8c07512cu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  R(5)=R(0);
  R(0)=R(4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c07513e;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c075148;
  {  goto L8c075152; }
L8c07513e:;
  R(0)=0x75u;
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  { R(2)&=R(3); goto L8c075150; }
L8c075148:;
  R(0)=0x75u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=0x1u;
  R(2)|=R(3);
L8c075150:;
  ST8(R(13)+R(0),R(2));
L8c075152:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075180(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(13)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07519e;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c0751a0; }
L8c07519e:;
  ST32(R(15),R(13));
L8c0751a0:;
  R(6)=R(15);
  R(12)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c0751acu; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(14)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0751bcu; R(4)=R(13); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=R(14);
  R(6)=0x8c2cff2cu;
  c->t=(int32_t)R(0)==39;
  fp_ftrc(c,4);
  { uint32_t k=!c->t; R(7)=c->fpul; if(k) goto L8c0751fc; }
  R(4)=LD32(R(15));
  R(0)=(uint32_t)(int32_t)(int16_t)R(7);
  c->t=(R(0)&0x2)==0;
  R(4)=LD32(R(4)+4);
  { uint32_t k=c->t; R(4)=LD32(R(4)+16); if(k) goto L8c0751f2; }
  R(0)=0x74u;
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(7)=~R(7);
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
  R(0)=0x7cu;
  R(1)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(1)&=R(7);
  ST16(R(6)+R(0),R(1));
  {  goto L8c0752aa; }
L8c0751f2:;
  R(0)=0x7cu;
  R(2)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(2)|=R(7);
  { ST16(R(6)+R(0),R(2)); goto L8c0752aa; }
L8c0751fc:;
  R(3)=0x11u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c075240;
  R(0)=R(14);
  R(0)+=0xffffffffu;
  R(0)<<=2;
  { fp_st(c,4,R(0)+R(6)); goto L8c0752aa; }
L8c075240:;
  R(3)=0x17u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c075252;
  R(14)+=0xffffffefu;
  R(0)=R(6);
  c->t=R(14)>>31;R(14)<<=1;
  R(0)+=0x40u;
  { ST16(R(14)+R(0),R(7)); goto L8c0752aa; }
L8c075252:;
  R(3)=0x1eu;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c0752aa;
  R(3)=0x27u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c07526a;
  R(14)+=0xffffffe2u;
  R(0)=R(6);
  R(14)<<=2;
  R(0)+=0x4cu;
  { fp_st(c,4,R(0)+R(14)); goto L8c0752aa; }
L8c07526a:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==40;
  if(!c->t) goto L8c07527c;
  R(0)=0x7cu;
  R(2)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(7)=~R(7);
  R(2)&=R(7);
  { ST16(R(6)+R(0),R(2)); goto L8c0752aa; }
L8c07527c:;
  R(3)=0x2cu;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c07528e;
  R(14)+=0xffffffd7u;
  R(0)=R(6);
  R(14)<<=2;
  R(0)+=0x70u;
  { fp_st(c,4,R(0)+R(14)); goto L8c0752aa; }
L8c07528e:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==44;
  if(!c->t) goto L8c0752aa;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  { uint32_t k=c->t; R(4)=LD32(R(4)+16); if(k) goto L8c0752a4; }
  { R(3)=0x1u; goto L8c0752a6; }
L8c0752a4:;
  R(3)=0x0u;
L8c0752a6:;
  R(0)=0x17cu;
  ST8(R(4)+R(0),R(3));
L8c0752aa:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075240(SH4Ctx *c) {
  R(3)=0x17u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c075252;
  R(14)+=0xffffffefu;
  R(0)=R(6);
  c->t=R(14)>>31;R(14)<<=1;
  R(0)+=0x40u;
  { ST16(R(14)+R(0),R(7)); goto L8c0752aa; }
L8c075252:;
  R(3)=0x1eu;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c0752aa;
  R(3)=0x27u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c07526a;
  R(14)+=0xffffffe2u;
  R(0)=R(6);
  R(14)<<=2;
  R(0)+=0x4cu;
  { fp_st(c,4,R(0)+R(14)); goto L8c0752aa; }
L8c07526a:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==40;
  if(!c->t) goto L8c07527c;
  R(0)=0x7cu;
  R(2)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(7)=~R(7);
  R(2)&=R(7);
  { ST16(R(6)+R(0),R(2)); goto L8c0752aa; }
L8c07527c:;
  R(3)=0x2cu;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c07528e;
  R(14)+=0xffffffd7u;
  R(0)=R(6);
  R(14)<<=2;
  R(0)+=0x70u;
  { fp_st(c,4,R(0)+R(14)); goto L8c0752aa; }
L8c07528e:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==44;
  if(!c->t) goto L8c0752aa;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  { uint32_t k=c->t; R(4)=LD32(R(4)+16); if(k) goto L8c0752a4; }
  { R(3)=0x1u; goto L8c0752a6; }
L8c0752a4:;
  R(3)=0x0u;
L8c0752a6:;
  R(0)=0x17cu;
  ST8(R(4)+R(0),R(3));
L8c0752aa:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0752b8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(1)=0x1f9u;
  ST32(R(15),R(5));
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0752d6;
  R(1)=0x1fau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0752e0;
  {  goto L8c0752ec; }
L8c0752d6:;
  R(4)=0x8c2cffacu;
  R(5)=0x8c2cff2cu;
  R(6)=0x80u;
  {  goto L8c0752e6; }
L8c0752e0:;
  R(4)=0x8c2cff2cu;
  R(5)=0x8c2cffacu;
  R(6)=0x80u;
L8c0752e6:;
  R(3)=0x8c0685b4u;
  { c->pr=0x8c0752ecu;  f_8c0685b4(c); }
L8c0752ec:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c075320(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(11)=R(5);
  R(3)=R(11);
  R(6)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(12)=R(4);
  R(2)=LD32(R(3));
  R(5)=0x0u;
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(6));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c075350; }
  ST32(R(15),R(4));
  { ST32(R(6),R(5)); goto L8c075352; }
L8c075350:;
  ST32(R(15),R(12));
L8c075352:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(14)=LD32(R(14)+4);
  R(6)+=0x18u;
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c075364u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+24);
  R(11)=R(0);
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0x18u;
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(11)+4);
  { uint32_t tg=R(3); c->pr=0x8c075376u; R(4)=R(12); sh4_call(c,tg); }
  R(11)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(9)=LD32(R(15)+24);
  R(6)+=0x18u;
  { uint32_t tg=R(3); c->pr=0x8c075386u; R(4)=R(12); sh4_call(c,tg); }
  R(8)=R(15);
  R(10)=0x8c05e6eau;
  R(8)+=0x18u;
  R(4)=R(15);
  R(5)=R(8);
  R(11)=R(0);
  { c->pr=0x8c075396u; R(4)+=0xcu; f_8c05e6ea(c); }
  R(1)=0x1fcu;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0753ae;
  R(1)=0x1fdu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c075400;
  R(1)=0x1feu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c075414;
  {  goto L8c075442; }
L8c0753ae:;
  R(0)=R(9);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0753bc;
  R(4)=R(14);
  R(5)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c0753bcu; R(4)+=0x28u; sh4_call(c,tg); }
L8c0753bc:;
  R(13)=0x1000u;
  {  goto L8c075442; }
L8c075400:;
  R(0)=R(9);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c07540e;
  R(4)=R(14);
  R(5)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c07540eu; R(4)+=0x34u; sh4_call(c,tg); }
L8c07540e:;
  R(13)=0x2000u;
  {  goto L8c075442; }
L8c075414:;
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)+=0x18u;
  { uint32_t tg=R(3); c->pr=0x8c075420u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=R(15);
  R(11)=R(0);
  R(0)=R(9);
  R(2)+=0x18u;
  c->t=(int32_t)R(0)==1;
  ST32(R(15)+4,R(2));
  if(!c->t) goto L8c075440;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0xcu;
  { uint32_t tg=R(10); c->pr=0x8c075438u; R(4)+=0x40u; sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(4)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c075440u; R(4)+=0x4cu; sh4_call(c,tg); }
L8c075440:;
  R(13)=0x4000u;
L8c075442:;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+16);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+8);
  R(5)=LD32(R(14)+4);
  R(7)=LD32(R(14)+12);
  R(6)+=0x72u;
  R(3)=0x8c075be0u;
  R(5)+=0x72u;
  R(7)+=0x72u;
  { c->pr=0x8c07545cu; R(4)=R(14); f_8c075be0(c); }
  R(0)=R(11);
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075400(SH4Ctx *c) {
  R(0)=R(9);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c07540e;
  R(4)=R(14);
  R(5)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c07540eu; R(4)+=0x34u; sh4_call(c,tg); }
L8c07540e:;
  R(13)=0x2000u;
  {  goto L8c075442; }
L8c075442:;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+16);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+8);
  R(5)=LD32(R(14)+4);
  R(7)=LD32(R(14)+12);
  R(6)+=0x72u;
  R(3)=0x8c075be0u;
  R(5)+=0x72u;
  R(7)+=0x72u;
  { c->pr=0x8c07545cu; R(4)=R(14); f_8c075be0(c); }
  R(0)=R(11);
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075472(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)=0x8c0c76fcu;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c075488;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c07548a; }
L8c075488:;
  ST32(R(15),R(4));
L8c07548a:;
  R(4)=LD32(R(15));
  R(3)=0x8c04695au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c075494u; R(4)=LD32(R(4)+16); f_8c04695a(c); }
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0754c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff2cu;
  R(15)+=R(0);
  R(6)=0x8c0c76fcu;
  R(13)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0754de;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0754e0; }
L8c0754de:;
  ST32(R(15),R(4));
L8c0754e0:;
  R(14)=LD32(R(15));
  R(0)=0x17cu;
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=0x1u; if(k) goto L8c07551c; }
  R(5)=LD32(R(15));
  R(4)=R(14);
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(5)+36);
  R(5)+=0x58u;
  { c->pr=0x8c0754feu; R(4)+=0x34u; f_8c05e6ea(c); }
  R(2)=0x2000u;
  R(3)=0x8c075be0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+8);
  R(7)=LD32(R(14)+12);
  R(5)=LD32(R(14)+4);
  R(6)+=0x72u;
  R(7)+=0x72u;
  R(5)+=0x72u;
  { c->pr=0x8c075518u; R(4)=R(14); f_8c075be0(c); }
  { R(15)+=0xcu; goto L8c0755cc; }
L8c07551c:;
  R(2)=0x8c046e40u;
  { c->pr=0x8c075522u; R(4)=R(14); f_8c046e40(c); }
  R(3)=0x8c076800u;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c07552cu; R(4)=LD32(R(15)); f_8c076800(c); }
  R(3)=LD32(R(15)+16);
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(3)=0x4000u;
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c075560;
  { R(2)=0x1u; goto L8c075562; }
L8c075560:;
  R(2)=0x0u;
L8c075562:;
  R(1)=0x8c2e7628u;
  ST8(R(1),R(2));
  R(2)=0x72u;
  R(0)=LD32(R(15)+16);
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c075576;
  { R(3)=0x1u; goto L8c075578; }
L8c075576:;
  R(3)=0x0u;
L8c075578:;
  R(1)=0x8c2e7629u;
  R(4)=R(15);
  R(2)=0x8c0cba6eu;
  ST8(R(1),R(3));
  R(3)=0x8c09e064u;
  ST8(R(2),R(12));
  { c->pr=0x8c075588u; R(4)+=0x4u; f_8c09e064(c); }
  R(2)=0x8c09e160u;
  R(4)=R(15);
  { c->pr=0x8c075590u; R(4)+=0x4u; f_8c09e160(c); }
  R(3)=0x8c09e53eu;
  R(4)=R(15);
  { c->pr=0x8c075598u; R(4)+=0x4u; f_8c09e53e(c); }
  R(2)=0x8c09ea62u;
  R(4)=R(15);
  { c->pr=0x8c0755a0u; R(4)+=0x4u; f_8c09ea62(c); }
  R(3)=LD32(R(15)+20);
  R(0)=0x68u;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0755cc;
  R(3)=0x8c0a0b96u;
  R(4)=R(15);
  { c->pr=0x8c0755b2u; R(4)+=0x4u; f_8c0a0b96(c); }
  R(2)=0x8c0a0c20u;
  R(4)=R(15);
  { c->pr=0x8c0755bau; R(4)+=0x4u; f_8c0a0c20(c); }
  R(3)=LD32(R(15)+16);
  R(0)=0x70u;
  R(2)=0x5u;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(3)=0x0u;
  R(0)=0x17cu;
  ST8(R(14)+R(0),R(3));
L8c0755cc:;
  R(1)=0xd4u;
  R(0)=R(13);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075560(SH4Ctx *c) {
  R(2)=0x0u;
  R(1)=0x8c2e7628u;
  ST8(R(1),R(2));
  R(2)=0x72u;
  R(0)=LD32(R(15)+16);
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c075576;
  { R(3)=0x1u; goto L8c075578; }
L8c075576:;
  R(3)=0x0u;
L8c075578:;
  R(1)=0x8c2e7629u;
  R(4)=R(15);
  R(2)=0x8c0cba6eu;
  ST8(R(1),R(3));
  R(3)=0x8c09e064u;
  ST8(R(2),R(12));
  { c->pr=0x8c075588u; R(4)+=0x4u; f_8c09e064(c); }
  R(2)=0x8c09e160u;
  R(4)=R(15);
  { c->pr=0x8c075590u; R(4)+=0x4u; f_8c09e160(c); }
  R(3)=0x8c09e53eu;
  R(4)=R(15);
  { c->pr=0x8c075598u; R(4)+=0x4u; f_8c09e53e(c); }
  R(2)=0x8c09ea62u;
  R(4)=R(15);
  { c->pr=0x8c0755a0u; R(4)+=0x4u; f_8c09ea62(c); }
  R(3)=LD32(R(15)+20);
  R(0)=0x68u;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0755cc;
  R(3)=0x8c0a0b96u;
  R(4)=R(15);
  { c->pr=0x8c0755b2u; R(4)+=0x4u; f_8c0a0b96(c); }
  R(2)=0x8c0a0c20u;
  R(4)=R(15);
  { c->pr=0x8c0755bau; R(4)+=0x4u; f_8c0a0c20(c); }
  R(3)=LD32(R(15)+16);
  R(0)=0x70u;
  R(2)=0x5u;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(3)=0x0u;
  R(0)=0x17cu;
  ST8(R(14)+R(0),R(3));
L8c0755cc:;
  R(1)=0xd4u;
  R(0)=R(13);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0755dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)=0x8c0c76fcu;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c075640;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c075642; }
L8c075640:;
  ST32(R(15),R(4));
L8c075642:;
  R(14)=LD32(R(15));
  R(0)=0x75u;
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c075658;
  R(2)=0x8c046ec0u;
  { c->pr=0x8c075658u; R(4)=R(14); f_8c046ec0(c); }
L8c075658:;
  R(0)=0x75u;
  R(3)=0xf7u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(1)=0x0u;
  R(2)&=R(3);
  ST8(R(14)+R(0),R(2));
  R(0)=0x60u;
  ST32(R(14)+R(0),R(1));
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075640(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(14)=LD32(R(15));
  R(0)=0x75u;
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c075658;
  R(2)=0x8c046ec0u;
  { c->pr=0x8c075658u; R(4)=R(14); f_8c046ec0(c); }
L8c075658:;
  R(0)=0x75u;
  R(3)=0xf7u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(1)=0x0u;
  R(2)&=R(3);
  ST8(R(14)+R(0),R(2));
  R(0)=0x60u;
  ST32(R(14)+R(0),R(1));
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075672(SH4Ctx *c) {
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
  R(0)=0xfffffed8u;
  R(15)+=R(0);
  R(7)=0x8c0c76fcu;
  ST32(R(15)+12,R(5));
  R(5)=0x0u;
  R(6)=LD32(R(7));
  R(9)=R(5);
  c->fr[15]=0x00000000u;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(12)=R(5); if(k) goto L8c0756e0; }
  ST32(R(15),R(6));
  { ST32(R(7),R(5)); goto L8c0756e2; }
L8c0756e0:;
  ST32(R(15),R(4));
L8c0756e2:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(14)=LD32(R(4)+24);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(4)+16); if(k) goto L8c0756f2; }
  {  goto L8c075b70; }
L8c0756f2:;
  R(3)=0x8c046e40u;
  { c->pr=0x8c0756f8u; R(4)=R(11); f_8c046e40(c); }
  R(3)=0x8c076800u;
  R(5)=R(15);
  R(5)+=0x58u;
  { c->pr=0x8c075702u; R(4)=LD32(R(15)); f_8c076800(c); }
  R(4)=LD32(R(11)+12);
  R(0)=0x18u;
  fp_ld(c,14,R(0)+R(4));
  R(0)=0x1cu;
  fp_ld(c,13,R(0)+R(4));
  fp_cmp(c,0,14,13);
  { uint32_t k=!c->t; R(10)=0x1u; if(k) goto L8c075714; }
  R(9)=R(10);
L8c075714:;
  R(4)=LD32(R(11)+12);
  R(0)=0x68u;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(4)=LD32(R(4)+R(0));
  R(5)+=0x4cu;
  { c->pr=0x8c075724u; R(4)=LD32(R(4)+32); f_8c0163ce(c); }
  R(0)=0x4cu;
  R(13)=0x8c05e6eau;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,1,5,3);
  fp_arith(c,1,4,0);
  R(0)=0x80u;
  R(9)=(uint32_t)(int32_t)(int8_t)R(9);
  fp_ld(c,6,R(0)+R(15));
  c->t=(R(9)&R(9))==0;
  fp_mov(c,0,5);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_arith(c,1,6,2);
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c075782; }
  fp_mov(c,5,14);
  fp_arith(c,1,5,4);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c075768;
  { fp_mov(c,3,5); goto L8c07576c; }
L8c075768:;
  fp_mov(c,3,4);
  fp_arith(c,1,3,14);
L8c07576c:;
  R(0)=0x8c0757b4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c075786;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x78u;
  { uint32_t tg=R(13); c->pr=0x8c07577eu; R(4)+=0x10u; sh4_call(c,tg); }
  { R(12)=R(10); goto L8c0757d6; }
L8c075782:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c0757c0;
L8c075786:;
  { fp_mov(c,15,14); goto L8c0757d6; }
L8c0757c0:;
  fp_cmp(c,1,4,13);
  if(!c->t) goto L8c0757c8;
  { fp_mov(c,15,13); goto L8c0757d6; }
L8c0757c8:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x78u;
  { uint32_t tg=R(13); c->pr=0x8c0757d2u; R(4)+=0x10u; sh4_call(c,tg); }
  R(12)=R(10);
  fp_mov(c,15,13);
L8c0757d6:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x78u;
  { uint32_t tg=R(13); c->pr=0x8c0757e0u; R(4)+=0x10u; sh4_call(c,tg); }
  R(12)=R(12)&0xFF;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0757ea;
  {  goto L8c075b4a; }
L8c0757ea:;
  R(3)=0x8c09e064u;
  R(4)=R(15);
  { c->pr=0x8c0757f2u; R(4)+=0x58u; f_8c09e064(c); }
  R(2)=0x8c0518d6u;
  { c->pr=0x8c0757f8u; R(4)=R(14); f_8c0518d6(c); }
  R(3)=0x8c051a0au;
  R(5)=R(0);
  R(9)=R(0);
  { c->pr=0x8c075802u; R(4)=R(14); f_8c051a0a(c); }
  R(3)=0x8c0518c0u;
  ST32(R(15)+8,R(0));
  { c->pr=0x8c07580au; R(4)=R(14); f_8c0518c0(c); }
  R(5)=R(15);
  R(8)=0x8c09d940u;
  R(5)+=0x40u;
  { c->pr=0x8c075814u; R(4)=LD32(R(15)+8); f_8c09d940(c); }
  R(3)=0x8c09d94eu;
  R(12)=0x8c0c7dfcu;
  { c->pr=0x8c07581cu; R(4)=LD32(R(15)+8); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c07582au; R(4)+=0x40u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c075834;
  {  goto L8c075910; }
L8c075834:;
  R(2)=0x8c051a0au;
  R(5)=R(9);
  R(5)+=0xffffffffu;
  { c->pr=0x8c07583eu; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075880;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c07584au; R(5)+=0x28u; sh4_call(c,tg); }
  {  goto L8c07588a; }
L8c075880:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c07588au; R(4)+=0x28u; sh4_call(c,tg); }
L8c07588a:;
  R(3)=0x8c051a0au;
  R(5)=R(9);
  R(5)+=0x1u;
  { c->pr=0x8c075894u; R(4)=R(14); f_8c051a0a(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  R(9)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0758a0u; R(4)+=0x34u; sh4_call(c,tg); }
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0758ac;
  R(5)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(8); c->pr=0x8c0758acu; R(4)=R(9); sh4_call(c,tg); }
L8c0758ac:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(3)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x28u;
  R(5)+=0x34u;
  { c->pr=0x8c0758bcu; R(4)+=R(15); f_8c0763c6(c); }
  R(5)=R(15);
  R(4)=0xa8u;
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  fp_mov(c,14,0);
  R(6)+=0x40u;
  R(5)+=0x34u;
  { c->pr=0x8c0758ceu; R(4)+=R(15); f_8c0763c6(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,14,4);
  if(c->t) goto L8c0758ec;
  R(3)=0x8c0519b8u;
  R(2)=0xffffffffu;
  R(5)=R(2);
  ST32(R(12),R(2));
  { c->pr=0x8c0758e0u; R(4)=R(14); f_8c0519b8(c); }
  R(7)=R(15);
  R(6)=R(15);
  R(7)+=0x28u;
  fp_mov(c,4,15);
  { R(6)+=0x34u; goto L8c075af2; }
L8c0758ec:;
  R(2)=0x8c0519b8u;
  R(5)=0x1u;
  ST32(R(12),R(10));
  { c->pr=0x8c0758f6u; R(4)=R(14); f_8c0519b8(c); }
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x34u;
  R(6)+=0x40u;
  { c->pr=0x8c07590cu; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075910:;
  R(3)=LD32(R(12));
  R(5)=R(9);
  R(2)=0x8c051a0au;
  R(5)-=R(3);
  { c->pr=0x8c07591cu; R(4)=R(14); f_8c051a0a(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c075960; }
  R(5)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(8); c->pr=0x8c07592au; R(4)=R(0); sh4_call(c,tg); }
  {  goto L8c07596e; }
L8c075960:;
  R(3)=LD32(R(15)+8);
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  ST32(R(15)+4,R(3));
  { uint32_t tg=R(13); c->pr=0x8c07596eu; R(4)+=0x34u; sh4_call(c,tg); }
L8c07596e:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(3)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x40u;
  R(5)+=0x34u;
  { c->pr=0x8c07597eu; R(4)+=R(15); f_8c0763c6(c); }
  R(2)=LD32(R(12));
  R(5)=R(9);
  R(3)=0x8c051a0au;
  c->t=R(2)>>31;R(2)<<=1;
  fp_mov(c,14,0);
  R(5)-=R(2);
  { c->pr=0x8c07598eu; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07599e;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c07599au; R(5)+=0x28u; sh4_call(c,tg); }
  {  goto L8c0759a8; }
L8c07599e:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c0759a8u; R(4)+=0x28u; sh4_call(c,tg); }
L8c0759a8:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x28u;
  R(5)+=0x34u;
  { c->pr=0x8c0759b8u; R(4)+=R(15); f_8c0763c6(c); }
  R(5)=LD32(R(12));
  R(3)=0x8c051a0au;
  R(5)+=R(9);
  fp_mov(c,13,0);
  { c->pr=0x8c0759c4u; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0759d4;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0759d0u; R(5)+=0x1cu; sh4_call(c,tg); }
  {  goto L8c0759de; }
L8c0759d4:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c0759deu; R(4)+=0x1cu; sh4_call(c,tg); }
L8c0759de:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x40u;
  R(5)+=0x1cu;
  { c->pr=0x8c0759eeu; R(4)+=R(15); f_8c0763c6(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,14);
  if(c->t) goto L8c075aae;
  fp_cmp(c,1,4,13);
  if(c->t) goto L8c075a40;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c075a02u; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c075b4a; }
L8c075a40:;
  fp_cmp(c,1,14,13);
  if(c->t) goto L8c075a5e;
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x34u;
  R(6)+=0x40u;
  { c->pr=0x8c075a5au; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075a5e:;
  R(3)=0x8c09d94eu;
  { c->pr=0x8c075a64u; R(4)=LD32(R(15)+4); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c075a72u; R(4)+=0x34u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c075aa0;
  R(5)=R(15);
  R(6)=R(15);
  R(2)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x28u;
  R(6)+=0x34u;
  { c->pr=0x8c075a8eu; R(4)+=0x58u; f_8c076520(c); }
  R(3)=LD32(R(12));
  R(2)=0x8c0519b8u;
  R(3)=0u-R(3);
  R(5)=R(3);
  ST32(R(12),R(3));
  { c->pr=0x8c075a9cu; R(4)=R(14); f_8c0519b8(c); }
  {  goto L8c075b4a; }
L8c075aa0:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075aaau; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c075b4a; }
L8c075aae:;
  fp_cmp(c,1,14,13);
  if(c->t) goto L8c075ac0;
  R(6)=R(15);
  R(7)=R(15);
  R(6)+=0x40u;
  fp_mov(c,4,15);
  R(7)+=0x34u;
  {  goto L8c075af2; }
L8c075ac0:;
  R(3)=0x8c09d94eu;
  { c->pr=0x8c075ac6u; R(4)=LD32(R(15)+4); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c075ad4u; R(4)+=0x34u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c075b40;
  R(2)=LD32(R(12));
  R(3)=0x8c0519b8u;
  R(2)=0u-R(2);
  R(5)=R(2);
  ST32(R(12),R(2));
  { c->pr=0x8c075ae8u; R(4)=R(14); f_8c0519b8(c); }
  R(6)=R(15);
  R(7)=R(15);
  R(6)+=0x34u;
  fp_mov(c,4,15);
  R(7)+=0x28u;
L8c075af2:;
  R(2)=0x8c076520u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c075afeu; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075b40:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075b4au; R(4)+=0x10u; sh4_call(c,tg); }
L8c075b4a:;
  R(5)=R(15);
  R(4)=R(11);
  R(5)+=0x10u;
  { uint32_t tg=R(13); c->pr=0x8c075b54u; R(4)+=0x34u; sh4_call(c,tg); }
  R(2)=0x2000u;
  R(3)=0x8c075be0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(11)+8);
  R(7)=LD32(R(11)+12);
  R(5)=LD32(R(11)+4);
  R(6)+=0x72u;
  R(7)+=0x72u;
  R(5)+=0x72u;
  { c->pr=0x8c075b6eu; R(4)=R(11); f_8c075be0(c); }
  R(15)+=0xcu;
L8c075b70:;
  R(1)=0x128u;
  R(0)=LD32(R(15)+12);
  R(15)+=R(1);
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
void f_8c0756e0(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(14)=LD32(R(4)+24);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(4)+16); if(k) goto L8c0756f2; }
  {  goto L8c075b70; }
L8c0756f2:;
  R(3)=0x8c046e40u;
  { c->pr=0x8c0756f8u; R(4)=R(11); f_8c046e40(c); }
  R(3)=0x8c076800u;
  R(5)=R(15);
  R(5)+=0x58u;
  { c->pr=0x8c075702u; R(4)=LD32(R(15)); f_8c076800(c); }
  R(4)=LD32(R(11)+12);
  R(0)=0x18u;
  fp_ld(c,14,R(0)+R(4));
  R(0)=0x1cu;
  fp_ld(c,13,R(0)+R(4));
  fp_cmp(c,0,14,13);
  { uint32_t k=!c->t; R(10)=0x1u; if(k) goto L8c075714; }
  R(9)=R(10);
L8c075714:;
  R(4)=LD32(R(11)+12);
  R(0)=0x68u;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(4)=LD32(R(4)+R(0));
  R(5)+=0x4cu;
  { c->pr=0x8c075724u; R(4)=LD32(R(4)+32); f_8c0163ce(c); }
  R(0)=0x4cu;
  R(13)=0x8c05e6eau;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,1,5,3);
  fp_arith(c,1,4,0);
  R(0)=0x80u;
  R(9)=(uint32_t)(int32_t)(int8_t)R(9);
  fp_ld(c,6,R(0)+R(15));
  c->t=(R(9)&R(9))==0;
  fp_mov(c,0,5);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_arith(c,1,6,2);
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c075782; }
  fp_mov(c,5,14);
  fp_arith(c,1,5,4);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c075768;
  { fp_mov(c,3,5); goto L8c07576c; }
L8c075768:;
  fp_mov(c,3,4);
  fp_arith(c,1,3,14);
L8c07576c:;
  R(0)=0x8c0757b4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c075786;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x78u;
  { uint32_t tg=R(13); c->pr=0x8c07577eu; R(4)+=0x10u; sh4_call(c,tg); }
  { R(12)=R(10); goto L8c0757d6; }
L8c075782:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c0757c0;
L8c075786:;
  { fp_mov(c,15,14); goto L8c0757d6; }
L8c0757c0:;
  fp_cmp(c,1,4,13);
  if(!c->t) goto L8c0757c8;
  { fp_mov(c,15,13); goto L8c0757d6; }
L8c0757c8:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x78u;
  { uint32_t tg=R(13); c->pr=0x8c0757d2u; R(4)+=0x10u; sh4_call(c,tg); }
  R(12)=R(10);
  fp_mov(c,15,13);
L8c0757d6:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x78u;
  { uint32_t tg=R(13); c->pr=0x8c0757e0u; R(4)+=0x10u; sh4_call(c,tg); }
  R(12)=R(12)&0xFF;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0757ea;
  {  goto L8c075b4a; }
L8c0757ea:;
  R(3)=0x8c09e064u;
  R(4)=R(15);
  { c->pr=0x8c0757f2u; R(4)+=0x58u; f_8c09e064(c); }
  R(2)=0x8c0518d6u;
  { c->pr=0x8c0757f8u; R(4)=R(14); f_8c0518d6(c); }
  R(3)=0x8c051a0au;
  R(5)=R(0);
  R(9)=R(0);
  { c->pr=0x8c075802u; R(4)=R(14); f_8c051a0a(c); }
  R(3)=0x8c0518c0u;
  ST32(R(15)+8,R(0));
  { c->pr=0x8c07580au; R(4)=R(14); f_8c0518c0(c); }
  R(5)=R(15);
  R(8)=0x8c09d940u;
  R(5)+=0x40u;
  { c->pr=0x8c075814u; R(4)=LD32(R(15)+8); f_8c09d940(c); }
  R(3)=0x8c09d94eu;
  R(12)=0x8c0c7dfcu;
  { c->pr=0x8c07581cu; R(4)=LD32(R(15)+8); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c07582au; R(4)+=0x40u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c075834;
  {  goto L8c075910; }
L8c075834:;
  R(2)=0x8c051a0au;
  R(5)=R(9);
  R(5)+=0xffffffffu;
  { c->pr=0x8c07583eu; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075880;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c07584au; R(5)+=0x28u; sh4_call(c,tg); }
  {  goto L8c07588a; }
L8c075880:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c07588au; R(4)+=0x28u; sh4_call(c,tg); }
L8c07588a:;
  R(3)=0x8c051a0au;
  R(5)=R(9);
  R(5)+=0x1u;
  { c->pr=0x8c075894u; R(4)=R(14); f_8c051a0a(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  R(9)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0758a0u; R(4)+=0x34u; sh4_call(c,tg); }
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0758ac;
  R(5)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(8); c->pr=0x8c0758acu; R(4)=R(9); sh4_call(c,tg); }
L8c0758ac:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(3)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x28u;
  R(5)+=0x34u;
  { c->pr=0x8c0758bcu; R(4)+=R(15); f_8c0763c6(c); }
  R(5)=R(15);
  R(4)=0xa8u;
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  fp_mov(c,14,0);
  R(6)+=0x40u;
  R(5)+=0x34u;
  { c->pr=0x8c0758ceu; R(4)+=R(15); f_8c0763c6(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,14,4);
  if(c->t) goto L8c0758ec;
  R(3)=0x8c0519b8u;
  R(2)=0xffffffffu;
  R(5)=R(2);
  ST32(R(12),R(2));
  { c->pr=0x8c0758e0u; R(4)=R(14); f_8c0519b8(c); }
  R(7)=R(15);
  R(6)=R(15);
  R(7)+=0x28u;
  fp_mov(c,4,15);
  { R(6)+=0x34u; goto L8c075af2; }
L8c0758ec:;
  R(2)=0x8c0519b8u;
  R(5)=0x1u;
  ST32(R(12),R(10));
  { c->pr=0x8c0758f6u; R(4)=R(14); f_8c0519b8(c); }
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x34u;
  R(6)+=0x40u;
  { c->pr=0x8c07590cu; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075910:;
  R(3)=LD32(R(12));
  R(5)=R(9);
  R(2)=0x8c051a0au;
  R(5)-=R(3);
  { c->pr=0x8c07591cu; R(4)=R(14); f_8c051a0a(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c075960; }
  R(5)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(8); c->pr=0x8c07592au; R(4)=R(0); sh4_call(c,tg); }
  {  goto L8c07596e; }
L8c075960:;
  R(3)=LD32(R(15)+8);
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  ST32(R(15)+4,R(3));
  { uint32_t tg=R(13); c->pr=0x8c07596eu; R(4)+=0x34u; sh4_call(c,tg); }
L8c07596e:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(3)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x40u;
  R(5)+=0x34u;
  { c->pr=0x8c07597eu; R(4)+=R(15); f_8c0763c6(c); }
  R(2)=LD32(R(12));
  R(5)=R(9);
  R(3)=0x8c051a0au;
  c->t=R(2)>>31;R(2)<<=1;
  fp_mov(c,14,0);
  R(5)-=R(2);
  { c->pr=0x8c07598eu; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07599e;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c07599au; R(5)+=0x28u; sh4_call(c,tg); }
  {  goto L8c0759a8; }
L8c07599e:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c0759a8u; R(4)+=0x28u; sh4_call(c,tg); }
L8c0759a8:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x28u;
  R(5)+=0x34u;
  { c->pr=0x8c0759b8u; R(4)+=R(15); f_8c0763c6(c); }
  R(5)=LD32(R(12));
  R(3)=0x8c051a0au;
  R(5)+=R(9);
  fp_mov(c,13,0);
  { c->pr=0x8c0759c4u; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0759d4;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0759d0u; R(5)+=0x1cu; sh4_call(c,tg); }
  {  goto L8c0759de; }
L8c0759d4:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c0759deu; R(4)+=0x1cu; sh4_call(c,tg); }
L8c0759de:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x40u;
  R(5)+=0x1cu;
  { c->pr=0x8c0759eeu; R(4)+=R(15); f_8c0763c6(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,14);
  if(c->t) goto L8c075aae;
  fp_cmp(c,1,4,13);
  if(c->t) goto L8c075a40;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c075a02u; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c075b4a; }
L8c075a40:;
  fp_cmp(c,1,14,13);
  if(c->t) goto L8c075a5e;
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x34u;
  R(6)+=0x40u;
  { c->pr=0x8c075a5au; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075a5e:;
  R(3)=0x8c09d94eu;
  { c->pr=0x8c075a64u; R(4)=LD32(R(15)+4); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c075a72u; R(4)+=0x34u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c075aa0;
  R(5)=R(15);
  R(6)=R(15);
  R(2)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x28u;
  R(6)+=0x34u;
  { c->pr=0x8c075a8eu; R(4)+=0x58u; f_8c076520(c); }
  R(3)=LD32(R(12));
  R(2)=0x8c0519b8u;
  R(3)=0u-R(3);
  R(5)=R(3);
  ST32(R(12),R(3));
  { c->pr=0x8c075a9cu; R(4)=R(14); f_8c0519b8(c); }
  {  goto L8c075b4a; }
L8c075aa0:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075aaau; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c075b4a; }
L8c075aae:;
  fp_cmp(c,1,14,13);
  if(c->t) goto L8c075ac0;
  R(6)=R(15);
  R(7)=R(15);
  R(6)+=0x40u;
  fp_mov(c,4,15);
  R(7)+=0x34u;
  {  goto L8c075af2; }
L8c075ac0:;
  R(3)=0x8c09d94eu;
  { c->pr=0x8c075ac6u; R(4)=LD32(R(15)+4); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c075ad4u; R(4)+=0x34u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c075b40;
  R(2)=LD32(R(12));
  R(3)=0x8c0519b8u;
  R(2)=0u-R(2);
  R(5)=R(2);
  ST32(R(12),R(2));
  { c->pr=0x8c075ae8u; R(4)=R(14); f_8c0519b8(c); }
  R(6)=R(15);
  R(7)=R(15);
  R(6)+=0x34u;
  fp_mov(c,4,15);
  R(7)+=0x28u;
L8c075af2:;
  R(2)=0x8c076520u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c075afeu; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075b40:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075b4au; R(4)+=0x10u; sh4_call(c,tg); }
L8c075b4a:;
  R(5)=R(15);
  R(4)=R(11);
  R(5)+=0x10u;
  { uint32_t tg=R(13); c->pr=0x8c075b54u; R(4)+=0x34u; sh4_call(c,tg); }
  R(2)=0x2000u;
  R(3)=0x8c075be0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(11)+8);
  R(7)=LD32(R(11)+12);
  R(5)=LD32(R(11)+4);
  R(6)+=0x72u;
  R(7)+=0x72u;
  R(5)+=0x72u;
  { c->pr=0x8c075b6eu; R(4)=R(11); f_8c075be0(c); }
  R(15)+=0xcu;
L8c075b70:;
  R(1)=0x128u;
  R(0)=LD32(R(15)+12);
  R(15)+=R(1);
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
void f_8c0757c0(SH4Ctx *c) {
  fp_cmp(c,1,4,13);
  if(!c->t) goto L8c0757c8;
  { fp_mov(c,15,13); goto L8c0757d6; }
L8c0757c8:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x78u;
  { uint32_t tg=R(13); c->pr=0x8c0757d2u; R(4)+=0x10u; sh4_call(c,tg); }
  R(12)=R(10);
  fp_mov(c,15,13);
L8c0757d6:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x78u;
  { uint32_t tg=R(13); c->pr=0x8c0757e0u; R(4)+=0x10u; sh4_call(c,tg); }
  R(12)=R(12)&0xFF;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0757ea;
  {  goto L8c075b4a; }
L8c0757ea:;
  R(3)=0x8c09e064u;
  R(4)=R(15);
  { c->pr=0x8c0757f2u; R(4)+=0x58u; f_8c09e064(c); }
  R(2)=0x8c0518d6u;
  { c->pr=0x8c0757f8u; R(4)=R(14); f_8c0518d6(c); }
  R(3)=0x8c051a0au;
  R(5)=R(0);
  R(9)=R(0);
  { c->pr=0x8c075802u; R(4)=R(14); f_8c051a0a(c); }
  R(3)=0x8c0518c0u;
  ST32(R(15)+8,R(0));
  { c->pr=0x8c07580au; R(4)=R(14); f_8c0518c0(c); }
  R(5)=R(15);
  R(8)=0x8c09d940u;
  R(5)+=0x40u;
  { c->pr=0x8c075814u; R(4)=LD32(R(15)+8); f_8c09d940(c); }
  R(3)=0x8c09d94eu;
  R(12)=0x8c0c7dfcu;
  { c->pr=0x8c07581cu; R(4)=LD32(R(15)+8); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c07582au; R(4)+=0x40u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c075834;
  {  goto L8c075910; }
L8c075834:;
  R(2)=0x8c051a0au;
  R(5)=R(9);
  R(5)+=0xffffffffu;
  { c->pr=0x8c07583eu; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075880;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c07584au; R(5)+=0x28u; sh4_call(c,tg); }
  {  goto L8c07588a; }
L8c075880:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c07588au; R(4)+=0x28u; sh4_call(c,tg); }
L8c07588a:;
  R(3)=0x8c051a0au;
  R(5)=R(9);
  R(5)+=0x1u;
  { c->pr=0x8c075894u; R(4)=R(14); f_8c051a0a(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  R(9)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0758a0u; R(4)+=0x34u; sh4_call(c,tg); }
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0758ac;
  R(5)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(8); c->pr=0x8c0758acu; R(4)=R(9); sh4_call(c,tg); }
L8c0758ac:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(3)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x28u;
  R(5)+=0x34u;
  { c->pr=0x8c0758bcu; R(4)+=R(15); f_8c0763c6(c); }
  R(5)=R(15);
  R(4)=0xa8u;
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  fp_mov(c,14,0);
  R(6)+=0x40u;
  R(5)+=0x34u;
  { c->pr=0x8c0758ceu; R(4)+=R(15); f_8c0763c6(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,14,4);
  if(c->t) goto L8c0758ec;
  R(3)=0x8c0519b8u;
  R(2)=0xffffffffu;
  R(5)=R(2);
  ST32(R(12),R(2));
  { c->pr=0x8c0758e0u; R(4)=R(14); f_8c0519b8(c); }
  R(7)=R(15);
  R(6)=R(15);
  R(7)+=0x28u;
  fp_mov(c,4,15);
  { R(6)+=0x34u; goto L8c075af2; }
L8c0758ec:;
  R(2)=0x8c0519b8u;
  R(5)=0x1u;
  ST32(R(12),R(10));
  { c->pr=0x8c0758f6u; R(4)=R(14); f_8c0519b8(c); }
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x34u;
  R(6)+=0x40u;
  { c->pr=0x8c07590cu; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075910:;
  R(3)=LD32(R(12));
  R(5)=R(9);
  R(2)=0x8c051a0au;
  R(5)-=R(3);
  { c->pr=0x8c07591cu; R(4)=R(14); f_8c051a0a(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c075960; }
  R(5)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(8); c->pr=0x8c07592au; R(4)=R(0); sh4_call(c,tg); }
  {  goto L8c07596e; }
L8c075960:;
  R(3)=LD32(R(15)+8);
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  ST32(R(15)+4,R(3));
  { uint32_t tg=R(13); c->pr=0x8c07596eu; R(4)+=0x34u; sh4_call(c,tg); }
L8c07596e:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(3)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x40u;
  R(5)+=0x34u;
  { c->pr=0x8c07597eu; R(4)+=R(15); f_8c0763c6(c); }
  R(2)=LD32(R(12));
  R(5)=R(9);
  R(3)=0x8c051a0au;
  c->t=R(2)>>31;R(2)<<=1;
  fp_mov(c,14,0);
  R(5)-=R(2);
  { c->pr=0x8c07598eu; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07599e;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c07599au; R(5)+=0x28u; sh4_call(c,tg); }
  {  goto L8c0759a8; }
L8c07599e:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c0759a8u; R(4)+=0x28u; sh4_call(c,tg); }
L8c0759a8:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x28u;
  R(5)+=0x34u;
  { c->pr=0x8c0759b8u; R(4)+=R(15); f_8c0763c6(c); }
  R(5)=LD32(R(12));
  R(3)=0x8c051a0au;
  R(5)+=R(9);
  fp_mov(c,13,0);
  { c->pr=0x8c0759c4u; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0759d4;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0759d0u; R(5)+=0x1cu; sh4_call(c,tg); }
  {  goto L8c0759de; }
L8c0759d4:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c0759deu; R(4)+=0x1cu; sh4_call(c,tg); }
L8c0759de:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x40u;
  R(5)+=0x1cu;
  { c->pr=0x8c0759eeu; R(4)+=R(15); f_8c0763c6(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,14);
  if(c->t) goto L8c075aae;
  fp_cmp(c,1,4,13);
  if(c->t) goto L8c075a40;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c075a02u; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c075b4a; }
L8c075a40:;
  fp_cmp(c,1,14,13);
  if(c->t) goto L8c075a5e;
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x34u;
  R(6)+=0x40u;
  { c->pr=0x8c075a5au; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075a5e:;
  R(3)=0x8c09d94eu;
  { c->pr=0x8c075a64u; R(4)=LD32(R(15)+4); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c075a72u; R(4)+=0x34u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c075aa0;
  R(5)=R(15);
  R(6)=R(15);
  R(2)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x28u;
  R(6)+=0x34u;
  { c->pr=0x8c075a8eu; R(4)+=0x58u; f_8c076520(c); }
  R(3)=LD32(R(12));
  R(2)=0x8c0519b8u;
  R(3)=0u-R(3);
  R(5)=R(3);
  ST32(R(12),R(3));
  { c->pr=0x8c075a9cu; R(4)=R(14); f_8c0519b8(c); }
  {  goto L8c075b4a; }
L8c075aa0:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075aaau; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c075b4a; }
L8c075aae:;
  fp_cmp(c,1,14,13);
  if(c->t) goto L8c075ac0;
  R(6)=R(15);
  R(7)=R(15);
  R(6)+=0x40u;
  fp_mov(c,4,15);
  R(7)+=0x34u;
  {  goto L8c075af2; }
L8c075ac0:;
  R(3)=0x8c09d94eu;
  { c->pr=0x8c075ac6u; R(4)=LD32(R(15)+4); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c075ad4u; R(4)+=0x34u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c075b40;
  R(2)=LD32(R(12));
  R(3)=0x8c0519b8u;
  R(2)=0u-R(2);
  R(5)=R(2);
  ST32(R(12),R(2));
  { c->pr=0x8c075ae8u; R(4)=R(14); f_8c0519b8(c); }
  R(6)=R(15);
  R(7)=R(15);
  R(6)+=0x34u;
  fp_mov(c,4,15);
  R(7)+=0x28u;
L8c075af2:;
  R(2)=0x8c076520u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c075afeu; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075b40:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075b4au; R(4)+=0x10u; sh4_call(c,tg); }
L8c075b4a:;
  R(5)=R(15);
  R(4)=R(11);
  R(5)+=0x10u;
  { uint32_t tg=R(13); c->pr=0x8c075b54u; R(4)+=0x34u; sh4_call(c,tg); }
  R(2)=0x2000u;
  R(3)=0x8c075be0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(11)+8);
  R(7)=LD32(R(11)+12);
  R(5)=LD32(R(11)+4);
  R(6)+=0x72u;
  R(7)+=0x72u;
  R(5)+=0x72u;
  { c->pr=0x8c075b6eu; R(4)=R(11); f_8c075be0(c); }
  R(15)+=0xcu;
  R(1)=0x128u;
  R(0)=LD32(R(15)+12);
  R(15)+=R(1);
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
void f_8c075960(SH4Ctx *c) {
  R(3)=LD32(R(15)+8);
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  ST32(R(15)+4,R(3));
  { uint32_t tg=R(13); c->pr=0x8c07596eu; R(4)+=0x34u; sh4_call(c,tg); }
  R(4)=0xa8u;
  R(5)=R(15);
  R(3)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x40u;
  R(5)+=0x34u;
  { c->pr=0x8c07597eu; R(4)+=R(15); f_8c0763c6(c); }
  R(2)=LD32(R(12));
  R(5)=R(9);
  R(3)=0x8c051a0au;
  c->t=R(2)>>31;R(2)<<=1;
  fp_mov(c,14,0);
  R(5)-=R(2);
  { c->pr=0x8c07598eu; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07599e;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c07599au; R(5)+=0x28u; sh4_call(c,tg); }
  {  goto L8c0759a8; }
L8c07599e:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c0759a8u; R(4)+=0x28u; sh4_call(c,tg); }
L8c0759a8:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x28u;
  R(5)+=0x34u;
  { c->pr=0x8c0759b8u; R(4)+=R(15); f_8c0763c6(c); }
  R(5)=LD32(R(12));
  R(3)=0x8c051a0au;
  R(5)+=R(9);
  fp_mov(c,13,0);
  { c->pr=0x8c0759c4u; R(4)=R(14); f_8c051a0a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0759d4;
  R(5)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0759d0u; R(5)+=0x1cu; sh4_call(c,tg); }
  {  goto L8c0759de; }
L8c0759d4:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c0759deu; R(4)+=0x1cu; sh4_call(c,tg); }
L8c0759de:;
  R(4)=0xa8u;
  R(5)=R(15);
  R(2)=0x8c0763c6u;
  R(6)=R(15);
  R(6)+=0x40u;
  R(5)+=0x1cu;
  { c->pr=0x8c0759eeu; R(4)+=R(15); f_8c0763c6(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,14);
  if(c->t) goto L8c075aae;
  fp_cmp(c,1,4,13);
  if(c->t) goto L8c075a40;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c075a02u; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c075b4a; }
L8c075a40:;
  fp_cmp(c,1,14,13);
  if(c->t) goto L8c075a5e;
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x34u;
  R(6)+=0x40u;
  { c->pr=0x8c075a5au; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075a5e:;
  R(3)=0x8c09d94eu;
  { c->pr=0x8c075a64u; R(4)=LD32(R(15)+4); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c075a72u; R(4)+=0x34u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c075aa0;
  R(5)=R(15);
  R(6)=R(15);
  R(2)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x28u;
  R(6)+=0x34u;
  { c->pr=0x8c075a8eu; R(4)+=0x58u; f_8c076520(c); }
  R(3)=LD32(R(12));
  R(2)=0x8c0519b8u;
  R(3)=0u-R(3);
  R(5)=R(3);
  ST32(R(12),R(3));
  { c->pr=0x8c075a9cu; R(4)=R(14); f_8c0519b8(c); }
  {  goto L8c075b4a; }
L8c075aa0:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075aaau; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c075b4a; }
L8c075aae:;
  fp_cmp(c,1,14,13);
  if(c->t) goto L8c075ac0;
  R(6)=R(15);
  R(7)=R(15);
  R(6)+=0x40u;
  fp_mov(c,4,15);
  R(7)+=0x34u;
  {  goto L8c075af2; }
L8c075ac0:;
  R(3)=0x8c09d94eu;
  { c->pr=0x8c075ac6u; R(4)=LD32(R(15)+4); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c075ad4u; R(4)+=0x34u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c075b40;
  R(2)=LD32(R(12));
  R(3)=0x8c0519b8u;
  R(2)=0u-R(2);
  R(5)=R(2);
  ST32(R(12),R(2));
  { c->pr=0x8c075ae8u; R(4)=R(14); f_8c0519b8(c); }
  R(6)=R(15);
  R(7)=R(15);
  R(6)+=0x34u;
  fp_mov(c,4,15);
  R(7)+=0x28u;
L8c075af2:;
  R(2)=0x8c076520u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c075afeu; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075b40:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075b4au; R(4)+=0x10u; sh4_call(c,tg); }
L8c075b4a:;
  R(5)=R(15);
  R(4)=R(11);
  R(5)+=0x10u;
  { uint32_t tg=R(13); c->pr=0x8c075b54u; R(4)+=0x34u; sh4_call(c,tg); }
  R(2)=0x2000u;
  R(3)=0x8c075be0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(11)+8);
  R(7)=LD32(R(11)+12);
  R(5)=LD32(R(11)+4);
  R(6)+=0x72u;
  R(7)+=0x72u;
  R(5)+=0x72u;
  { c->pr=0x8c075b6eu; R(4)=R(11); f_8c075be0(c); }
  R(15)+=0xcu;
  R(1)=0x128u;
  R(0)=LD32(R(15)+12);
  R(15)+=R(1);
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
void f_8c075a40(SH4Ctx *c) {
  fp_cmp(c,1,14,13);
  if(c->t) goto L8c075a5e;
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x34u;
  R(6)+=0x40u;
  { c->pr=0x8c075a5au; R(4)+=0x58u; f_8c076520(c); }
  {  goto L8c075b4a; }
L8c075a5e:;
  R(3)=0x8c09d94eu;
  { c->pr=0x8c075a64u; R(4)=LD32(R(15)+4); f_8c09d94e(c); }
  R(5)=R(15);
  R(2)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x78u;
  { c->pr=0x8c075a72u; R(4)+=0x34u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c075aa0;
  R(5)=R(15);
  R(6)=R(15);
  R(2)=0x8c076520u;
  R(7)=R(15);
  R(5)+=0x10u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(7)+=0x28u;
  R(6)+=0x34u;
  { c->pr=0x8c075a8eu; R(4)+=0x58u; f_8c076520(c); }
  R(3)=LD32(R(12));
  R(2)=0x8c0519b8u;
  R(3)=0u-R(3);
  R(5)=R(3);
  ST32(R(12),R(3));
  { c->pr=0x8c075a9cu; R(4)=R(14); f_8c0519b8(c); }
  {  goto L8c075b4a; }
L8c075aa0:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075aaau; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c075b4a; }
L8c075b4a:;
  R(5)=R(15);
  R(4)=R(11);
  R(5)+=0x10u;
  { uint32_t tg=R(13); c->pr=0x8c075b54u; R(4)+=0x34u; sh4_call(c,tg); }
  R(2)=0x2000u;
  R(3)=0x8c075be0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(11)+8);
  R(7)=LD32(R(11)+12);
  R(5)=LD32(R(11)+4);
  R(6)+=0x72u;
  R(7)+=0x72u;
  R(5)+=0x72u;
  { c->pr=0x8c075b6eu; R(4)=R(11); f_8c075be0(c); }
  R(15)+=0xcu;
  R(1)=0x128u;
  R(0)=LD32(R(15)+12);
  R(15)+=R(1);
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
void f_8c075b40(SH4Ctx *c) {
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c075b4au; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(11);
  R(5)+=0x10u;
  { uint32_t tg=R(13); c->pr=0x8c075b54u; R(4)+=0x34u; sh4_call(c,tg); }
  R(2)=0x2000u;
  R(3)=0x8c075be0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(11)+8);
  R(7)=LD32(R(11)+12);
  R(5)=LD32(R(11)+4);
  R(6)+=0x72u;
  R(7)+=0x72u;
  R(5)+=0x72u;
  { c->pr=0x8c075b6eu; R(4)=R(11); f_8c075be0(c); }
  R(15)+=0xcu;
  R(1)=0x128u;
  R(0)=LD32(R(15)+12);
  R(15)+=R(1);
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
void f_8c075b8e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c075b9eu; R(6)+=0x4u; sh4_call(c,tg); }
  R(2)=0x8c124740u;
  R(5)=R(0);
  R(3)=LD32(R(15)+4);
  ST8(R(2),R(3));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c075be0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(7);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+24);
  R(14)=R(0);
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(12)=~R(14); if(k) goto L8c075c0a; }
  R(2)=0x8c046e40u;
  { c->pr=0x8c075bfcu;  f_8c046e40(c); }
  R(3)=LD32(R(15)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c075c1c;
  R(1)=(int32_t)(int16_t)LD16(R(13));
  R(1)&=R(12);
  { ST16(R(13),R(1)); goto L8c075c36; }
L8c075c0a:;
  R(2)=LD32(R(15)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c075c24;
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(3)|=R(14);
  ST16(R(5),R(3));
  R(2)=(int32_t)(int16_t)LD16(R(6));
  R(2)|=R(14);
  ST16(R(6),R(2));
L8c075c1c:;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(3)|=R(14);
  { ST16(R(13),R(3)); goto L8c075c36; }
L8c075c24:;
  R(1)=(int32_t)(int16_t)LD16(R(5));
  R(1)&=R(12);
  ST16(R(5),R(1));
  R(3)=(int32_t)(int16_t)LD16(R(6));
  R(3)&=R(12);
  ST16(R(6),R(3));
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(2)&=R(12);
  ST16(R(13),R(2));
L8c075c36:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075c60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0721b8u;
  { c->pr=0x8c075c70u; R(12)=R(5); f_8c0721b8(c); }
  R(2)=0x8c01638au;
  R(5)=R(12);
  R(13)=R(0);
  { c->pr=0x8c075c7au; R(4)=LD32(R(14)+36); f_8c01638a(c); }
  R(3)=0x8c01638au;
  R(5)=R(12);
  { c->pr=0x8c075c82u; R(4)=LD32(R(14)+32); f_8c01638a(c); }
  R(0)=0xf8u;
  R(5)=R(12);
  c->fr[4]=0x00000000u;
  R(4)=R(14);
  fp_st(c,4,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(13));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c055a5cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c055a5c(c); return; } }
}
void f_8c075ca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  R(14)=R(4);
  R(3)=0x10u;
  R(2)=0x8c0721b8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(4)=LD32(R(14)+4);
  R(3)+=R(4);
  R(12)=LD32(R(4)+8);
  R(3)=LD32(R(3));
  { c->pr=0x8c075cc0u; R(4)=R(14); f_8c0721b8(c); }
  R(3)=0x8c04a8c0u;
  R(13)=R(0);
  { c->pr=0x8c075cc8u; R(4)=R(12); f_8c04a8c0(c); }
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  ST32(R(15)+8,R(0));
  R(5)+=0xcu;
  { c->pr=0x8c075cd4u; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c075cdeu; R(4)+=0x18u; f_8c05e6ea(c); }
  R(2)=R(15);
  R(2)+=0x18u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x28u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x38u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(3)=0x8c04a8b8u;
  R(6)+=0x18u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c075cfcu; R(4)=R(12); f_8c04a8b8(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  R(4)=R(0);
  R(3)=0x8c08e1e0u;
  R(5)=R(14);
  { c->pr=0x8c075d08u; R(7)=LD32(R(15)+12); f_8c08e1e0(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x3cu;
  R(7)+=0x24u;
  R(6)+=0x30u;
  { c->pr=0x8c075d1au; R(4)=LD32(R(14)+32); f_8c015c9c(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x3cu;
  R(7)+=0x24u;
  R(6)+=0x30u;
  { c->pr=0x8c075d2cu; R(4)=LD32(R(14)+36); f_8c015c9c(c); }
  R(3)=0x8c05e6eau;
  R(4)=LD32(R(15)+20);
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c075d36u; R(4)+=0x10u; f_8c05e6ea(c); }
  R(0)=0x130u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(13));
  R(15)+=0x48u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075da0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c2cff48u;
  R(14)=R(5);
  R(2)=0x8c0472c0u;
  R(5)=R(15);
  ST32(R(15),R(4));
  R(5)+=0x4u;
  fp_ld(c,4,R(3));
  { c->pr=0x8c075db8u; R(4)=LD32(R(4)+8); f_8c0472c0(c); }
  R(0)=0x4u;
  R(3)=0x8c2cff50u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  fp_ld(c,2,R(3));
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c075df2;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c075de8;
  R(2)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c075de8u; R(4)=R(14); f_8c05e6ea(c); }
L8c075de8:;
  R(0)=0x1u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c075df2:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c075e02;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(14));
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
L8c075e02:;
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075e40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c075e4e;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(14));
L8c075e4e:;
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075e84;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c075e5cu;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075e84;
  R(0)=0x170u;
  R(4)=LD32(R(4)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075e84;
  R(3)=0x8c2cff54u;
  R(0)=0x120u;
  fp_ld(c,3,R(3));
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c075e84;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(0)=0x1u; if(k) goto L8c075e7e; }
  fp_st(c,4,R(14));
L8c075e7e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c075e84:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075e8c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075eb6;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c075ea2u;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075eb6;
  R(0)=0x170u;
  R(14)=LD32(R(4)+R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c075eb6;
  R(0)=LD32(R(14)+4);
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c075ee0;
L8c075eb6:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c075ee0:;
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  R(5)+=0x34u;
  { c->pr=0x8c075eeau; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c075ef4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075f14;
  R(2)=LD32(R(4)+4);
  R(4)=LD32(R(2)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075f14;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c075f08u;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c075f14;
  R(0)=LD32(R(4)+12);
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c075f1a;
L8c075f14:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c075f1a:;
  R(0)=0x2a8u;
  R(0)=LD32(R(4)+R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c075f24(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(13)=R(5);
  R(3)=0x8c05e55cu;
  R(5)=R(6);
  ST32(R(15),R(4));
  R(14)=R(6);
  { c->pr=0x8c075f3au; R(4)=R(13); f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  { uint32_t k=c->t; fp_mov(c,4,0); if(k) goto L8c075fa0; }
  fp_ld(c,2,R(14));
  R(0)=0x4u;
  fp_mov(c,1,4);
  R(6)=R(15);
  fp_arith(c,2,1,2);
  R(3)=0x8c05e612u;
  R(5)=R(13);
  R(6)+=0x4u;
  fp_st(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xcu;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c075f6eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  {  goto L8c075fa8; }
L8c075fa0:;
  R(3)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c075fa8u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
L8c075fa8:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
