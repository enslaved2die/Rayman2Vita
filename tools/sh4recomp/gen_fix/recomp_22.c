#include "recomp_decls.h"
void f_8c0de3e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0ef940u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  { c->pr=0x8c0de3f6u; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0de402;
  R(2)=0x8c2ef180u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0de408;
L8c0de402:;
  R(0)=0xeeeeu;
  {  goto L8c0de486; }
L8c0de408:;
  R(0)=0x88u;
  R(4)=LD32(R(15));
  R(13)=LD32(R(4)+R(0));
  R(12)=R(4);
  R(0)=0x3b4u;
  R(4)=0x8c2f945cu;
  R(3)=LD32(R(13)+36);
  R(5)=LD32(R(4)+R(0));
  R(3)=R(3)&0xFFFF;
  ST32(R(4)+R(0),R(3));
  R(2)=LD32(R(4)+R(0));
  c->t=R(5)==R(2);
  { uint32_t k=c->t; R(12)+=0x18u; if(k) goto L8c0de42a; }
  R(1)=0x8c0dda14u;
  { c->pr=0x8c0de42au;  f_8c0dda14(c); }
L8c0de42a:;
  R(3)=LD32(R(15)+8);
  R(14)=0x8c0db7e0u;
  R(3)<<=2;
  R(3)<<=2;
  R(3)>>=2;
  R(3)>>=2;
  R(3)>>=2;
  ST32(R(15),R(3));
  R(5)=LD32(R(12)+12);
  { c->pr=0x8c0de440u; R(4)=0x2cu; f_8c0db7e0(c); }
  R(5)=LD32(R(12)+8);
  { uint32_t tg=R(14); c->pr=0x8c0de446u; R(4)=0x20u; sh4_call(c,tg); }
  R(4)=0xf4u;
  { uint32_t tg=R(14); c->pr=0x8c0de44cu; R(5)=LD32(R(13)+36); sh4_call(c,tg); }
  R(5)=LD32(R(13)+4);
  { uint32_t tg=R(14); c->pr=0x8c0de452u; R(4)=0x48u; sh4_call(c,tg); }
  R(4)=0x8cu;
  { uint32_t tg=R(14); c->pr=0x8c0de458u; R(5)=LD32(R(13)+8); sh4_call(c,tg); }
  R(4)=0x88u;
  R(3)=0xfffffff0u;
  R(5)=LD32(R(13)+12);
  { uint32_t tg=R(14); c->pr=0x8c0de462u; R(5)&=R(3); sh4_call(c,tg); }
  R(5)=LD32(R(13)+20);
  { uint32_t tg=R(14); c->pr=0x8c0de468u; R(4)=0x68u; sh4_call(c,tg); }
  R(5)=LD32(R(13)+24);
  { uint32_t tg=R(14); c->pr=0x8c0de46eu; R(4)=0x6cu; sh4_call(c,tg); }
  R(5)=LD32(R(15));
  { uint32_t tg=R(14); c->pr=0x8c0de474u; R(4)=0x4cu; sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(3)=0x1000000u;
  R(5)+=R(3);
  { uint32_t tg=R(14); c->pr=0x8c0de47eu; R(4)=0x60u; sh4_call(c,tg); }
  R(5)=0x1u;
  { uint32_t tg=R(14); c->pr=0x8c0de484u; R(4)=0x14u; sh4_call(c,tg); }
  R(0)=0x0u;
L8c0de486:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0de4e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0ef940u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  { c->pr=0x8c0de4f6u; R(4)=LD32(R(15)+4); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0de500;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0de506;
L8c0de500:;
  R(0)=0xeeeeu;
  {  goto L8c0de57c; }
L8c0de506:;
  R(0)=0x88u;
  R(4)=LD32(R(15)+4);
  R(12)=LD32(R(15));
  R(13)=LD32(R(4)+R(0));
  R(11)=R(4);
  R(0)=0x3b4u;
  R(4)=0x8c2f945cu;
  R(3)=LD32(R(13)+36);
  R(5)=LD32(R(4)+R(0));
  R(3)=R(3)&0xFFFF;
  ST32(R(4)+R(0),R(3));
  R(2)=LD32(R(4)+R(0));
  c->t=R(5)==R(2);
  { uint32_t k=c->t; R(11)+=0x18u; if(k) goto L8c0de52a; }
  R(1)=0x8c0dda14u;
  { c->pr=0x8c0de52au;  f_8c0dda14(c); }
L8c0de52a:;
  R(5)=LD32(R(11)+12);
  R(14)=0x8c0db7e0u;
  { c->pr=0x8c0de532u; R(4)=0x2cu; f_8c0db7e0(c); }
  R(5)=LD32(R(11)+8);
  { uint32_t tg=R(14); c->pr=0x8c0de538u; R(4)=0x20u; sh4_call(c,tg); }
  R(4)=0xf4u;
  { uint32_t tg=R(14); c->pr=0x8c0de53eu; R(5)=LD32(R(13)+36); sh4_call(c,tg); }
  R(5)=LD32(R(13)+4);
  { uint32_t tg=R(14); c->pr=0x8c0de544u; R(4)=0x48u; sh4_call(c,tg); }
  R(4)=0x8cu;
  { uint32_t tg=R(14); c->pr=0x8c0de54au; R(5)=LD32(R(13)+8); sh4_call(c,tg); }
  R(4)=0x88u;
  R(3)=0xfffffff0u;
  R(5)=LD32(R(13)+12);
  { uint32_t tg=R(14); c->pr=0x8c0de554u; R(5)&=R(3); sh4_call(c,tg); }
  R(5)=LD32(R(13)+20);
  { uint32_t tg=R(14); c->pr=0x8c0de55au; R(4)=0x68u; sh4_call(c,tg); }
  R(5)=LD32(R(13)+24);
  { uint32_t tg=R(14); c->pr=0x8c0de560u; R(4)=0x6cu; sh4_call(c,tg); }
  R(5)=LD32(R(12)+44);
  { uint32_t tg=R(14); c->pr=0x8c0de566u; R(4)=0x4cu; sh4_call(c,tg); }
  R(3)=0x8c2ef180u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0de574;
  R(5)=LD32(R(12)+28);
  { uint32_t tg=R(14); c->pr=0x8c0de574u; R(4)=0x60u; sh4_call(c,tg); }
L8c0de574:;
  R(5)=0x1u;
  { uint32_t tg=R(14); c->pr=0x8c0de57au; R(4)=0x14u; sh4_call(c,tg); }
  R(0)=0x0u;
L8c0de57c:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0de5c0(SH4Ctx *c) {
  R(7)=0xeeeeu;
  R(0)=R(5);
  c->t=(int32_t)R(0)==0;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(4));
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c0de65a; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0de5e2;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0de65a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0de5f4;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0de644;
  {  goto L8c0de65a; }
L8c0de5e2:;
  R(3)=0x3000u;
  c->t=(R(3)&R(6))==0;
  if(c->t) goto L8c0de5f0;
  R(1)=0xffffff4fu;
  R(6)&=R(1);
  { R(3)=0x40u; goto L8c0de650; }
L8c0de5f0:;
  { R(5)=R(7); goto L8c0de65c; }
L8c0de5f4:;
  R(3)=0x30u;
  c->t=(R(3)&R(6))==0;
  if(c->t) goto L8c0de640;
  R(3)=0x4000u;
  R(1)=0xffff4fffu;
  { R(6)&=R(1); goto L8c0de650; }
L8c0de640:;
  { R(5)=R(7); goto L8c0de65c; }
L8c0de644:;
  R(2)=0x300u;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c0de656;
  R(1)=0xfffcffffu;
  R(3)=0x40000u;
  R(6)&=R(1);
L8c0de650:;
  R(6)|=R(3);
  { R(5)=R(14); goto L8c0de65c; }
L8c0de656:;
  { R(5)=R(7); goto L8c0de65c; }
L8c0de65a:;
  R(5)=R(7);
L8c0de65c:;
  R(0)=R(5);
  ST32(R(4),R(6));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0de6a0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0ef940u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  { c->pr=0x8c0de6b0u; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0de6be;
  R(0)=0xeeeeu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0de6be:;
  R(5)=0x7ffu;
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(15)+4);
  R(4)=LD32(R(15));
  R(3)&=R(5);
  R(0)=0x88u;
  R(2)&=R(5);
  R(3)<<=16;
  R(4)=LD32(R(4)+R(0));
  R(3)|=R(2);
  R(0)=0x0u;
  ST32(R(4)+20,R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0de6de(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0ef940u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  { c->pr=0x8c0de6eeu; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0de6fc;
  R(0)=0xeeeeu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0de6fc:;
  R(5)=0x7ffu;
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(15)+4);
  R(4)=LD32(R(15));
  R(3)&=R(5);
  R(0)=0x88u;
  R(2)&=R(5);
  R(3)<<=16;
  R(4)=LD32(R(4)+R(0));
  R(3)|=R(2);
  R(0)=0x0u;
  ST32(R(4)+24,R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0de740(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x200u;
  R(11)=0x8c0db7e0u;
  R(14)=0x80u;
L8c0de752:;
  R(14)+=0xffffffffu;
  R(0)=0x8c2f9184u;
  R(3)=R(14);
  R(3)<<=2;
  ST32(R(3)+R(0),R(12));
  R(4)=R(14);
  R(4)<<=2;
  R(5)=0x0u;
  { uint32_t tg=R(11); c->pr=0x8c0de766u; R(4)+=R(13); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0de752;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0de778(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0686b8u;
  R(4)=0x8c2f9184u;
  R(6)=0x210u;
  { c->pr=0x8c0de784u; R(5)=0x0u; f_8c0686b8(c); }
  { c->pr=0x8c0de788u;  f_8c0de740(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x78u; return; }
}
void f_8c0de78e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2f9384u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0de7c0;
  R(2)=0xfffffffbu;
  R(1)=LD32(R(3));
  R(1)&=R(2);
  ST32(R(3),R(1));
  R(12)=0x200u;
  R(14)=0x0u;
  R(11)=0x8c0db7e0u;
  R(13)=R(12);
L8c0de7b0:;
  R(0)=0x8c2f9184u;
  R(5)=LD32(R(14)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0de7b8u; R(4)=R(13); sh4_call(c,tg); }
  R(14)+=0x4u;
  c->t=R(14)>=R(12);
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0de7b0; }
L8c0de7c0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x78u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0de800(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2f9384u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0de810;
  { c->pr=0x8c0de810u;  f_8c0de78e(c); }
L8c0de810:;
  R(3)=0x8c2f9384u;
  R(14)=0x8c0db7e0u;
  R(3)=LD32(R(3));
  R(2)=0x8c2f9384u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0de82e;
  R(3)=0xfffffffeu;
  R(1)=LD32(R(2));
  R(1)&=R(3);
  ST32(R(2),R(1));
  R(4)=0xb0u;
  R(0)=0x8c2f938cu;
  { uint32_t tg=R(14); c->pr=0x8c0de82eu; R(5)=LD32(R(0)); sh4_call(c,tg); }
L8c0de82e:;
  R(3)=0x8c2f9384u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0de846;
  R(2)=0xfffffffdu;
  R(1)=LD32(R(3));
  R(1)&=R(2);
  ST32(R(3),R(1));
  R(4)=0xb8u;
  R(0)=0x8c2f9390u;
  { uint32_t tg=R(14); c->pr=0x8c0de846u; R(5)=LD32(R(0)); sh4_call(c,tg); }
L8c0de846:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0de84c(SH4Ctx *c) {
  R(0)=0x8c2f9184u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(0)&0x1f)==0;
  if(!c->t) goto L8c0de864;
  R(2)=0x8c0ef780u;
  R(6)=0x8c2f9184u;
  R(7)=0x200u;
  { c->pr=0x8c0de85eu; R(5)=0x0u; f_8c0ef780(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0de864:;
  R(2)=0x8c2f9184u;
  R(5)=0x0u;
  R(3)=0x8c0ef780u;
  R(7)=0x200u;
  R(6)=R(2);
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0ef780(c); return; } }
}
void f_8c0de864(SH4Ctx *c) {
  R(2)=0x8c2f9184u;
  R(5)=0x0u;
  R(3)=0x8c0ef780u;
  R(7)=0x200u;
  R(6)=R(2);
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0ef780(c); return; } }
}
void f_8c0de8b2(SH4Ctx *c) {
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(0)=0x0u; if(k) goto L8c0de8c0; }
  R(5)=0x0u;
  ST32(R(4)+24,R(5));
  ST32(R(4)+20,R(5));
L8c0de8c0:;
  {  return; }
}
void f_8c0de8c4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ef2beu;
  R(4)=0x8c2f9148u;
  R(5)=0x8c2f9160u;
  { c->pr=0x8c0de8d0u;  f_8c0ef2be(c); }
  R(3)=0x8c2ef0bcu;
  R(2)=0x8c0d2d46u;
  ST32(R(3),R(2));
  R(0)=0x8c2f915cu;
  R(1)=LD32(R(0));
  R(4)=0x8c2f9148u;
  R(5)=0x8c2ef0b0u;
  R(6)=0x8c2ef0c8u;
  { uint32_t tg=R(1); c->pr=0x8c0de8e4u;  sh4_call(c,tg); }
  R(2)=0x8c2ef564u;
  R(3)=0x8c0de8b2u;
  ST32(R(2),R(3));
  R(0)=0x8c2f915cu;
  R(1)=LD32(R(0));
  R(4)=0x8c2f9148u;
  R(5)=0x8c2ef558u;
  R(6)=0x8c2ef570u;
  { uint32_t tg=R(1); c->pr=0x8c0de8f8u;  sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0de8fe(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2f9158u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0de912;
  R(1)=0x8c2f9158u;
  R(3)=LD32(R(1));
  R(4)=0x8c2f9148u;
  { uint32_t tg=R(3); c->pr=0x8c0de912u;  sh4_call(c,tg); }
L8c0de912:;
  R(3)=0x8c0686b8u;
  R(6)=0x18u;
  R(4)=0x8c2f9148u;
  { c->pr=0x8c0de91cu; R(5)=0x0u; f_8c0686b8(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0de980(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0xffd8000cu;
  R(10)=LD32(R(14));
  R(11)=0x3ffu;
  R(3)=0x1u;
  R(12)=0x10cu;
  R(13)=0x3d09u;
  R(9)=0x8c0db7eau;
  ST32(R(15),R(3));
  R(3)=LD32(R(14));
  R(2)=R(10);
  R(2)-=R(3);
  c->t=R(2)>=R(13);
  { uint32_t k=c->t; R(8)=0x0u; if(k) goto L8c0de9c6; }
L8c0de9ae:;
  { uint32_t tg=R(9); c->pr=0x8c0de9b2u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(11))==0;
  if(c->t) goto L8c0de9bc;
  { ST32(R(15),R(8)); goto L8c0de9c6; }
L8c0de9bc:;
  R(3)=LD32(R(14));
  R(2)=R(10);
  R(2)-=R(3);
  c->t=R(2)>=R(13);
  if(!c->t) goto L8c0de9ae;
L8c0de9c6:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0de9ea;
  R(3)=LD32(R(14));
  R(2)=R(10);
  R(2)-=R(3);
  c->t=R(2)>=R(13);
  if(c->t) goto L8c0de9ea;
L8c0de9d6:;
  { uint32_t tg=R(9); c->pr=0x8c0de9dau; R(4)=R(12); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(11))==0;
  if(c->t) goto L8c0de9ea;
  R(3)=LD32(R(14));
  R(2)=R(10);
  R(2)-=R(3);
  c->t=R(2)>=R(13);
  if(!c->t) goto L8c0de9d6;
L8c0de9ea:;
  R(0)=0x0u;
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
void f_8c0dea20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0xffff0000u;
  R(12)=0x0u;
  R(3)=0x8c2ef580u;
  R(11)=R(12);
  R(10)=0xdd18957u;
  R(14)&=R(4);
  ST32(R(3),R(14));
  R(9)=0x8c0db7eau;
  { c->pr=0x8c0dea44u; R(4)=R(11); f_8c0db7ea(c); }
  ST32(R(15)+4,R(0));
  { uint32_t tg=R(9); c->pr=0x8c0dea4au; R(4)=0x4u; sh4_call(c,tg); }
  R(3)=0x8c2ef570u;
  R(4)=0x5u;
  R(5)=R(0);
  ST32(R(3),R(4));
  R(1)=LD32(R(15)+4);
  R(2)=0x17fd11dbu;
  c->t=R(1)==R(2);
  if(c->t) goto L8c0dea60;
  R(1)=0x8c2ef570u;
  { ST32(R(1),R(4)); goto L8c0deac2; }
L8c0dea60:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0dea6c;
  R(0)=0x8c2ef570u;
  { ST32(R(0),R(4)); goto L8c0deac2; }
L8c0dea6c:;
  R(1)=0x11u;
  c->t=R(5)>=R(1);
  if(!c->t) goto L8c0deac2;
  R(11)=0x800408u;
  c->t=(R(14)&R(14))==0;
  R(3)=0x8c2ef570u;
  R(0)=0x6u;
  { uint32_t k=!c->t; ST32(R(3),R(0)); if(k) goto L8c0deac0; }
  R(10)=0x15d1c951u;
  {  goto L8c0deac2; }
L8c0deac0:;
  R(10)=0x15d1c955u;
L8c0deac2:;
  R(3)=0xa05f689cu;
  R(2)=0x8c2ef57cu;
  R(5)=LD32(R(3));
  ST32(R(2),R(5));
  R(0)=R(5);
  R(4)=0x101u;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(6)=0x7fu; if(k) goto L8c0deaf4; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0deafa;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0deb04;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0deb40;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0deb40;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0deb40;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0deb48;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c0deb4e;
  {  goto L8c0deb56; }
L8c0deaf4:;
  R(1)=0x8c2ef574u;
  { ST32(R(1),R(12)); goto L8c0deb00; }
L8c0deafa:;
  R(0)=0x8c2ef574u;
  R(1)=0x1u;
  ST32(R(0),R(1));
L8c0deb00:;
  { R(13)=R(12); goto L8c0deb5e; }
L8c0deb04:;
  { R(1)=0x3u; goto L8c0deb50; }
L8c0deb40:;
  R(13)=0x10101u;
  R(1)=0x8c2ef574u;
  { ST32(R(1),R(6)); goto L8c0deb5e; }
L8c0deb48:;
  R(1)=0x8c2ef574u;
  { ST32(R(1),R(6)); goto L8c0deb5c; }
L8c0deb4e:;
  R(1)=0x6fu;
L8c0deb50:;
  R(0)=0x8c2ef574u;
  { ST32(R(0),R(1)); goto L8c0deb5c; }
L8c0deb56:;
  R(0)=0x8c2ef574u;
  R(1)=0xefu;
  ST32(R(0),R(1));
L8c0deb5c:;
  R(13)=R(4);
L8c0deb5e:;
  R(4)=0xa8u;
  R(14)=0x8c0db7e0u;
  { c->pr=0x8c0deb66u; R(5)=R(10); f_8c0db7e0(c); }
  R(4)=0xa0u;
  { uint32_t tg=R(14); c->pr=0x8c0deb6cu; R(5)=0x20u; sh4_call(c,tg); }
  R(5)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0deb72u; R(4)=0x8u; sh4_call(c,tg); }
  R(4)=0xe4u;
  { uint32_t tg=R(14); c->pr=0x8c0deb78u; R(5)=0x3u; sh4_call(c,tg); }
  R(5)=0x9u;
  { uint32_t tg=R(14); c->pr=0x8c0deb7eu; R(4)=0x48u; sh4_call(c,tg); }
  { c->pr=0x8c0deb82u;  f_8c0de980(c); }
  { uint32_t tg=R(9); c->pr=0x8c0deb86u; R(4)=0x44u; sh4_call(c,tg); }
  R(5)=0x800000u;
  R(5)&=R(0);
  { uint32_t tg=R(14); c->pr=0x8c0deb8eu; R(4)=0x44u; sh4_call(c,tg); }
  R(5)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0deb94u; R(4)=0x5cu; sh4_call(c,tg); }
  R(5)=0x2800000u;
  { uint32_t tg=R(14); c->pr=0x8c0deb9au; R(4)=0x68u; sh4_call(c,tg); }
  R(5)=0x1e00000u;
  { uint32_t tg=R(14); c->pr=0x8c0deba0u; R(4)=0x6cu; sh4_call(c,tg); }
  R(3)=0x8c2ef570u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0dec00;
  R(4)=0x110u;
  R(5)=0x93f39u;
  { uint32_t tg=R(14); c->pr=0x8c0debb0u;  sh4_call(c,tg); }
  R(4)=0x98u;
  { R(5)=R(11); goto L8c0dec04; }
L8c0dec00:;
  R(4)=0x110u;
  R(5)=0x92039u;
L8c0dec04:;
  { uint32_t tg=R(14); c->pr=0x8c0dec08u;  sh4_call(c,tg); }
  R(5)=0xa0u;
  { uint32_t tg=R(14); c->pr=0x8c0dec0eu; R(4)=0x4cu; sh4_call(c,tg); }
  R(5)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dec14u; R(4)=0x74u; sh4_call(c,tg); }
  R(5)=0x3f800000u;
  { uint32_t tg=R(14); c->pr=0x8c0dec1au; R(4)=0x78u; sh4_call(c,tg); }
  R(4)=0x84u;
  { uint32_t tg=R(14); c->pr=0x8c0dec20u; R(5)=0x0u; sh4_call(c,tg); }
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c0dec26u; R(4)=0x30u; sh4_call(c,tg); }
  R(4)=0xb0u;
  R(5)=0x7f7f7fu;
  { uint32_t tg=R(14); c->pr=0x8c0dec2eu;  sh4_call(c,tg); }
  R(4)=0xb4u;
  R(5)=0x7f7f7fu;
  { uint32_t tg=R(14); c->pr=0x8c0dec36u;  sh4_call(c,tg); }
  R(4)=0xc0u;
  { uint32_t tg=R(14); c->pr=0x8c0dec3cu; R(5)=0x0u; sh4_call(c,tg); }
  R(4)=0xbcu;
  { uint32_t tg=R(14); c->pr=0x8c0dec42u; R(5)=0xffffffffu; sh4_call(c,tg); }
  R(5)=0x7u;
  R(4)=R(5);
  { uint32_t tg=R(14); c->pr=0x8c0dec4au; R(4)+=0x79u; sh4_call(c,tg); }
  R(4)=0x88u;
  R(5)=0x3727c5a0u;
  { uint32_t tg=R(14); c->pr=0x8c0dec52u;  sh4_call(c,tg); }
  R(4)=0x8cu;
  R(5)=0x1203000u;
  { uint32_t tg=R(14); c->pr=0x8c0dec5au;  sh4_call(c,tg); }
  R(5)=0x1u;
  { uint32_t tg=R(14); c->pr=0x8c0dec60u; R(4)=0x74u; sh4_call(c,tg); }
  R(2)=0x8c2ef570u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0dec6c;
L8c0dec68:;
  {  goto L8c0dec68; }
L8c0dec6c:;
  R(3)=0x8c2ef570u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==6;
  { uint32_t k=!c->t; R(4)=0x7cu; if(k) goto L8c0decc0; }
  R(5)=0x27df77u;
  {  goto L8c0decc2; }
L8c0decc0:;
  R(5)=0x7df77u;
L8c0decc2:;
  { uint32_t tg=R(14); c->pr=0x8c0decc6u;  sh4_call(c,tg); }
  R(13)=R(12);
  ST32(R(15),R(12));
  R(14)=0xa5000000u;
  R(12)=0x200000u;
  R(11)=0x8c0d1880u;
L8c0decd0:;
  R(5)=R(15);
  R(6)=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c0decd8u; R(4)=R(14); sh4_call(c,tg); }
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(12);
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c0decd0; }
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0decf4(SH4Ctx *c) {
  R(3)=0x8c2ef580u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c0decfa(SH4Ctx *c) {
  R(2)=0x8c2ef570u;
  { R(0)=LD32(R(2)); return; }
}
void f_8c0ded00(SH4Ctx *c) {
  R(3)=0x8c2ef57cu;
  { R(0)=LD32(R(3)); return; }
}
void f_8c0ded58(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(10)=0x8c0db7e0u;
  R(14)=0x0u;
  R(2)=0x8c2fa844u;
  R(13)=0x1u;
  ST32(R(15),R(14));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0ded8c;
  R(1)=0x8c2fa850u;
  R(4)=0x108u;
  R(0)=LD32(R(1));
  ST32(R(15),R(0));
  ST32(R(15)+4,R(14));
  { uint32_t tg=R(10); c->pr=0x8c0ded88u; R(5)=LD32(R(15)); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  ST32(R(15),R(2));
L8c0ded8c:;
  R(3)=0x8c2fa844u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0dedb2;
  R(13)=0x1000u;
  R(12)=R(14);
  R(9)=0x400u;
  R(11)=R(14);
L8c0ded9c:;
  R(0)=0x8c2f9844u;
  R(5)=LD32(R(12)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c0deda4u; R(4)=R(13); sh4_call(c,tg); }
  R(11)+=0x1u;
  c->t=(int32_t)R(11)>=(int32_t)R(9);
  R(13)+=0x4u;
  { uint32_t k=!c->t; R(12)+=0x4u; if(k) goto L8c0ded9c; }
  {  goto L8c0dee8c; }
L8c0dedb2:;
  R(1)=0x8c2fa844u;
  R(0)=LD32(R(1));
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0dee8c;
  R(2)=0x8c2fa848u;
  R(10)=0xa05f9000u;
  R(8)=0x8c0d1880u;
  R(0)=LD32(R(2));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(11)=0x20u; if(k) goto L8c0dee4a; }
  { R(12)=R(14); goto L8c0dee46; }
L8c0dee20:;
  R(1)=0x8c2fa848u;
  R(2)=R(13);
  R(2)=sh4_shad(R(2),R(12));
  R(3)=LD32(R(1));
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0dee44;
  R(9)=R(12);
  R(9)<<=2;
  R(9)<<=2;
  R(3)=0x8c2f9844u;
  R(5)=R(9);
  R(4)=R(9);
  R(5)<<=2;
  R(4)<<=2;
  R(6)=0x40u;
  R(5)+=R(3);
  { uint32_t tg=R(8); c->pr=0x8c0dee44u; R(4)+=R(10); sh4_call(c,tg); }
L8c0dee44:;
  R(12)+=0x1u;
L8c0dee46:;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  if(!c->t) goto L8c0dee20;
L8c0dee4a:;
  R(3)=0x8c2fa84cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0dee84;
  { R(12)=R(14); goto L8c0dee80; }
L8c0dee56:;
  R(1)=0x8c2fa84cu;
  R(3)=R(13);
  R(3)=sh4_shad(R(3),R(12));
  R(2)=LD32(R(1));
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0dee7e;
  R(9)=R(12);
  R(3)=0x200u;
  R(9)<<=2;
  R(2)=0x8c2f9844u;
  R(9)<<=2;
  R(9)+=R(3);
  R(5)=R(9);
  R(4)=R(9);
  R(5)<<=2;
  R(4)<<=2;
  R(6)=0x40u;
  R(5)+=R(2);
  { uint32_t tg=R(8); c->pr=0x8c0dee7eu; R(4)+=R(10); sh4_call(c,tg); }
L8c0dee7e:;
  R(12)+=0x1u;
L8c0dee80:;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  if(!c->t) goto L8c0dee56;
L8c0dee84:;
  R(2)=0x8c2fa848u;
  ST32(R(2),R(14));
  R(3)=0x8c2fa84cu;
  ST32(R(3),R(14));
L8c0dee8c:;
  R(2)=0x8c2fa844u;
  ST32(R(2),R(14));
  R(0)=LD32(R(15));
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
void f_8c0deee0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(6);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(12)>0;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(9)=R(6); if(k) goto L8c0def2c; }
  R(2)=0x400u;
  R(3)=R(4);
  R(3)+=R(12);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c0def2c;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0def2c;
  R(3)=0x1000u;
  R(14)=R(4);
  R(10)=0x8c0db7e0u;
  R(14)<<=2;
  c->t=(int32_t)R(12)>0;
  R(13)=0x0u;
  R(11)=R(6);
  R(14)+=R(3);
  { uint32_t k=!c->t; R(13)+=R(5); if(k) goto L8c0def2e; }
L8c0def1a:;
  {uint32_t v=LD32(R(13));R(13)+=4;R(5)=v;}
  { uint32_t tg=R(10); c->pr=0x8c0def20u; R(4)=R(14); sh4_call(c,tg); }
  R(11)+=0x1u;
  c->t=(int32_t)R(11)>=(int32_t)R(12);
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c0def1a; }
  {  goto L8c0def2e; }
L8c0def2c:;
  R(9)=0x12u;
L8c0def2e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(9);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0def40(SH4Ctx *c) {
  R(0)=0xeeeeu;
  {  return; }
}
void f_8c0df000(SH4Ctx *c) {
  { R(4)=0x2u; goto L8c0df00e; }
L8c0df00e:;
  R(2)=LD32(R(5)+4);
  R(1)=0x7u;
  R(3)=0xfffffff8u;
  R(4)&=R(1);
  R(2)&=R(3);
  R(2)|=R(4);
  R(0)=0x0u;
  ST32(R(5)+4,R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0df026(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0ef940u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0df034u; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0df080;
  R(0)=0xeeeeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0df080:;
  R(0)=0x88u;
  R(4)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  R(4)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0df094;
  R(0)=LD32(R(4)+4);
  R(0)|=0x8u;
  { ST32(R(4)+4,R(0)); goto L8c0df09c; }
L8c0df094:;
  R(2)=LD32(R(4)+4);
  R(3)=0xfffffff7u;
  R(2)&=R(3);
  ST32(R(4)+4,R(2));
L8c0df09c:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0df0e0(SH4Ctx *c) {
  R(5)=0x8c2f945cu;
  c->t=R(5)==R(4);
  R(4)=c->t;
  { R(0)=R(4); return; }
}
void f_8c0df0ea(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0679f4u;
  R(1)=LD32(R(4));
  { c->pr=0x8c0df0f4u; R(0)=LD32(R(4)+16); f_8c0679f4(c); }
  R(2)=0x8c09c280u;
  ST32(R(4)+4,R(0));
  R(1)=LD32(R(4));
  { c->pr=0x8c0df0feu; R(0)=LD32(R(4)+16); f_8c09c280(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { ST32(R(4)+8,R(0)); return; }
}
void f_8c0df104(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c280u;
  R(1)=LD32(R(4));
  { c->pr=0x8c0df10eu; R(0)=LD32(R(4)+12); f_8c09c280(c); }
  R(2)=0x8c0679f4u;
  ST32(R(4)+4,R(0));
  R(1)=LD32(R(4));
  { c->pr=0x8c0df118u; R(0)=LD32(R(4)+12); f_8c0679f4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { ST32(R(4)+8,R(0)); return; }
}
void f_8c0df11e(SH4Ctx *c) {
  R(3)=0x3b8u;
  R(5)=0x0u;
  R(4)=LD32(R(4)+8);
  R(2)=0x8c0df0eau;
  ST32(R(4),R(3));
  R(3)=0x8c0df104u;
  R(6)=0x8cu;
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  ST32(R(4)+16,R(2));
  R(2)=0x4u;
  ST32(R(4)+20,R(3));
  R(3)=R(2);
  ST32(R(4)+12,R(2));
  R(2)=R(5);
  c->t=R(2)>=R(3);
  if(c->t) goto L8c0df154;
L8c0df140:;
  c->macl=R(5)*R(6);
  R(3)=R(4);
  R(3)+=0x18u;
  R(0)=c->macl;
  R(0)+=R(3);
  ST32(R(0),R(5));
  R(5)+=0x1u;
  R(2)=LD32(R(4)+12);
  c->t=R(5)>=R(2);
  if(!c->t) goto L8c0df140;
L8c0df154:;
  {  return; }
}
void f_8c0df180(SH4Ctx *c) {
  R(3)=0x8c0df11eu;
  R(5)=0x0u;
  R(2)=0x3b8u;
  ST32(R(4)+20,R(3));
  R(4)=LD32(R(4)+8);
  R(3)=0x8c0df0eau;
  ST32(R(4),R(2));
  R(2)=0x8c0df104u;
  R(6)=0x8cu;
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  ST32(R(4)+16,R(3));
  R(3)=0x4u;
  ST32(R(4)+20,R(2));
  R(2)=R(3);
  ST32(R(4)+12,R(3));
  R(3)=R(5);
  c->t=R(3)>=R(2);
  if(c->t) goto L8c0df1ba;
L8c0df1a6:;
  c->macl=R(5)*R(6);
  R(3)=R(4);
  R(3)+=0x18u;
  R(0)=c->macl;
  R(0)+=R(3);
  ST32(R(0),R(5));
  R(5)+=0x1u;
  R(2)=LD32(R(4)+12);
  c->t=R(5)>=R(2);
  if(!c->t) goto L8c0df1a6;
L8c0df1ba:;
  { R(0)=0x0u; return; }
}
void f_8c0df1be(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2f945cu;
  R(3)=0x8c0df180u;
  R(2)=0x8c2f9820u;
  ST32(R(4),R(14));
  ST32(R(2),R(3));
  R(1)=0x8c2f915cu;
  R(0)=LD32(R(1));
  R(4)=0x8c2f9148u;
  R(6)=R(14);
  R(5)=0x8c2f9814u;
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
}
void f_8c0df1d8(SH4Ctx *c) {
  R(0)=0x88u;
  R(1)=0x8c2ef11cu;
  R(3)=LD32(R(4)+R(0));
  R(2)=LD32(R(1));
  ST32(R(3)+40,R(2));
  R(1)+=0x4u;
  R(3)=LD32(R(4)+R(0));
  R(2)=LD32(R(1));
  ST32(R(3)+36,R(2));
  c->t=(R(7)&R(7))==0;
  ST32(R(4)+28,R(6));
  ST32(R(4)+24,R(5));
  R(3)=LD32(R(4)+R(0));
  ST32(R(3)+28,R(7));
  if(c->t) goto L8c0df200;
  R(3)=LD32(R(4)+R(0));
  R(2)=0x10000u;
  R(1)=LD32(R(3)+36);
  R(1)|=R(2);
  ST32(R(3)+36,R(1));
L8c0df200:;
  { R(0)=0x0u; return; }
}
void f_8c0df260(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x0u;
  R(14)=0x8c2f945cu;
  R(10)=R(5);
  ST32(R(15)+4,R(6));
  ST32(R(15),R(7));
  ST32(R(10),R(13));
  { c->pr=0x8c0df280u; R(11)=R(13); f_8c0df0e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0df2e2;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(14)+12);
  c->t=R(2)>=R(3);
  if(c->t) goto L8c0df2dc;
  R(6)=0x8cu;
  R(4)=R(13);
  R(9)=0x8c0ef582u;
  R(13)=0x1u;
  R(5)=0x4u;
L8c0df296:;
  R(2)=LD32(R(14)+4);
  R(3)=R(13);
  R(3)=sh4_shad(R(3),R(4));
  c->t=(R(3)&R(2))==0;
  if(!c->t) goto L8c0df2d6;
  c->macl=R(4)*R(6);
  R(3)=LD32(R(14)+4);
  R(0)=R(13);
  R(0)=sh4_shad(R(0),R(4));
  R(5)=0x88u;
  R(3)|=R(0);
  R(12)=c->macl;
  ST32(R(14)+4,R(3));
  R(3)=R(14);
  R(2)=LD32(R(14)+8);
  R(3)+=0x18u;
  R(12)+=R(3);
  R(2)+=0x1u;
  R(5)+=R(12);
  ST32(R(14)+8,R(2));
  { uint32_t tg=R(9); c->pr=0x8c0df2c2u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0df2dc;
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(15));
  R(7)=LD32(R(15)+36);
  { c->pr=0x8c0df2d0u; R(4)=R(12); f_8c0df1d8(c); }
  ST32(R(10),R(12));
  { R(11)=R(13); goto L8c0df2dc; }
L8c0df2d6:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0df296;
L8c0df2dc:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0df2e8;
L8c0df2e2:;
  R(0)=0xeeeeu;
  {  goto L8c0df2ea; }
L8c0df2e8:;
  R(0)=0x0u;
L8c0df2ea:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0df320(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x8c2f945cu;
  R(14)=R(5);
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  { c->pr=0x8c0df334u; R(4)=LD32(R(15)+4); f_8c0df0e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0df342;
  R(3)=0x8c0ef940u;
  { c->pr=0x8c0df33eu; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0df348;
L8c0df342:;
  R(0)=0xeeeeu;
  {  goto L8c0df372; }
L8c0df348:;
  R(5)=LD32(R(14));
  R(4)=0x1u;
  R(3)=LD32(R(13)+4);
  R(4)=sh4_shad(R(4),R(5));
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0df362;
  R(3)=LD32(R(13)+4);
  R(4)=~R(4);
  R(3)&=R(4);
  ST32(R(13)+4,R(3));
  R(2)=LD32(R(13)+8);
  R(2)+=0xffffffffu;
  ST32(R(13)+8,R(2));
L8c0df362:;
  R(3)=0x8c0ef61cu;
  R(0)=0x88u;
  { c->pr=0x8c0df36au; R(4)=LD32(R(14)+R(0)); f_8c0ef61c(c); }
  R(4)=0x0u;
  R(0)=R(4);
  ST32(R(14)+28,R(4));
  ST32(R(14)+32,R(4));
L8c0df372:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0df3a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(12)=R(6);
  ST32(R(15)+12,R(4));
  R(6)=0x1fu;
  R(0)=R(7);
  ST16(R(15)+8,R(0));
  R(4)=LD32(R(12));
  R(10)=R(4);
  c->t=(R(10)&R(6))==0;
  { uint32_t k=!c->t; R(11)=R(5); if(k) goto L8c0df3ca; }
  { R(10)=R(4); goto L8c0df3d0; }
L8c0df3ca:;
  R(3)=0xffffffe0u;
  R(10)+=0x20u;
  R(10)&=R(3);
L8c0df3d0:;
  c->t=(R(11)&R(6))==0;
  if(!c->t) goto L8c0df3d8;
  { R(11)=R(5); goto L8c0df3de; }
L8c0df3d8:;
  R(3)=0xffffffe0u;
  R(11)+=0x20u;
  R(11)&=R(3);
L8c0df3de:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(8)=R(11);
  R(9)=0x8c0f43dcu;
  R(8)+=R(10);
  R(4)=R(0);
  R(4)<<=2;
  R(4)<<=2;
  R(3)=R(9);
  R(3)+=0x24u;
  ST32(R(15)+4,R(4));
  R(4)+=R(3);
  R(4)=LD32(R(4)+8);
  R(6)=0x0u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)=R(6); if(k) goto L8c0df424; }
L8c0df3fe:;
  R(5)=LD32(R(4)+12);
  c->t=R(5)>R(10);
  if(c->t) goto L8c0df41e;
  R(2)=LD32(R(4)+16);
  R(2)+=R(5);
  c->t=R(2)>R(10);
  if(!c->t) goto L8c0df41e;
  c->t=R(5)>R(8);
  if(c->t) goto L8c0df41e;
  R(3)=LD32(R(4)+16);
  R(3)+=R(5);
  c->t=R(3)>=R(8);
  if(!c->t) goto L8c0df41e;
  R(14)=R(4);
  { R(4)=R(6); goto L8c0df420; }
L8c0df41e:;
  R(4)=LD32(R(4)+8);
L8c0df420:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0df3fe;
L8c0df424:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0df42c;
  {  goto L8c0df566; }
L8c0df42c:;
  R(2)=LD32(R(14)+16);
  c->t=R(2)==R(11);
  if(!c->t) goto L8c0df47e;
  R(5)=R(9);
  R(3)=LD32(R(15)+4);
  R(5)+=0x24u;
  R(6)=R(14);
  R(5)+=R(3);
  ST32(R(15),R(5));
  R(5)+=0xcu;
  R(4)=LD32(R(15));
  { c->pr=0x8c0df446u; R(4)+=0x8u; f_8c0df9f0(c); }
  R(5)=R(9);
  R(3)=LD32(R(15)+4);
  R(5)+=0x24u;
  R(6)=R(14);
  R(5)+=R(3);
  ST32(R(15),R(5));
  R(5)+=0x4u;
  { c->pr=0x8c0df458u; R(4)=LD32(R(15)); f_8c0df9b0(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x1u;
  ST32(R(12),R(2));
  ST32(R(14)+20,R(12));
  ST16(R(14),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0df46e;
  R(0)=(int32_t)(int16_t)LD16(R(14));
  { R(0)|=0x40u; goto L8c0df472; }
L8c0df46e:;
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)|=0x80u;
L8c0df472:;
  ST16(R(14),R(0));
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(3)=LD32(R(15)+12);
  R(2)|=R(3);
  { ST16(R(14),R(2)); goto L8c0df5d8; }
L8c0df47e:;
  R(3)=LD32(R(14)+12);
  c->t=R(3)==R(10);
  if(!c->t) goto L8c0df500;
  { c->pr=0x8c0df488u;  f_8c0df8e4(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0df492;
  {  goto L8c0df566; }
L8c0df492:;
  R(5)=R(9);
  R(5)+=0x24u;
  R(2)=LD32(R(14)+12);
  R(6)=R(13);
  ST32(R(13)+12,R(2));
  ST32(R(13)+16,R(11));
  R(4)=LD32(R(14)+16);
  R(4)-=R(11);
  ST32(R(14)+16,R(4));
  R(3)=LD32(R(14)+12);
  R(3)+=R(11);
  ST32(R(14)+12,R(3));
  R(3)=LD32(R(15)+4);
  R(5)+=R(3);
  ST32(R(15),R(5));
  R(5)+=0x4u;
  { c->pr=0x8c0df4b6u; R(4)=LD32(R(15)); f_8c0df9b0(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0x1u;
  ST32(R(12),R(2));
  ST32(R(13)+20,R(12));
  ST16(R(13),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0df4cc;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  { R(0)|=0x40u; goto L8c0df4d0; }
L8c0df4cc:;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)|=0x80u;
L8c0df4d0:;
  ST16(R(13),R(0));
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(3)=LD32(R(15)+12);
  R(2)|=R(3);
  { ST16(R(13),R(2)); goto L8c0df5d8; }
L8c0df500:;
  R(1)=LD32(R(14)+12);
  R(3)=LD32(R(14)+16);
  R(1)+=R(3);
  c->t=R(1)==R(8);
  if(!c->t) goto L8c0df54e;
  { c->pr=0x8c0df50eu;  f_8c0df8e4(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0df566;
  R(5)=R(9);
  R(5)+=0x24u;
  R(4)=LD32(R(14)+16);
  R(6)=R(13);
  R(4)-=R(11);
  ST32(R(14)+16,R(4));
  ST32(R(13)+12,R(10));
  ST32(R(13)+16,R(11));
  R(3)=LD32(R(15)+4);
  R(5)+=R(3);
  ST32(R(15),R(5));
  R(5)+=0x4u;
  { c->pr=0x8c0df530u; R(4)=LD32(R(15)); f_8c0df9b0(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0x1u;
  ST32(R(12),R(2));
  ST32(R(13)+20,R(12));
  ST16(R(13),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0df546;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  { R(0)|=0x40u; goto L8c0df54a; }
L8c0df546:;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)|=0x80u;
L8c0df54a:;
  { ST16(R(13),R(0)); goto L8c0df5d0; }
L8c0df54e:;
  { c->pr=0x8c0df552u;  f_8c0df8e4(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0df566;
  { c->pr=0x8c0df55cu;  f_8c0df8e4(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c0df56a; }
  { c->pr=0x8c0df566u; R(4)=R(13); f_8c0df96c(c); }
L8c0df566:;
  { R(0)=0x3u; goto L8c0df5da; }
L8c0df56a:;
  R(3)=LD32(R(14)+16);
  R(5)=R(9);
  R(5)+=0x24u;
  R(2)=R(10);
  ST32(R(15)+20,R(3));
  R(6)=R(13);
  R(3)=LD32(R(14)+12);
  R(2)-=R(3);
  R(3)=R(2);
  ST32(R(15)+16,R(2));
  ST32(R(14)+16,R(2));
  ST32(R(13)+12,R(10));
  ST32(R(13)+16,R(11));
  R(3)=LD32(R(15)+4);
  R(5)+=R(3);
  ST32(R(15)+24,R(5));
  R(5)+=0x4u;
  { c->pr=0x8c0df590u; R(4)=LD32(R(15)+24); f_8c0df9b0(c); }
  R(2)=LD32(R(15));
  R(6)=R(9);
  R(6)+=0x24u;
  ST32(R(2)+12,R(8));
  R(2)=LD32(R(15)+20);
  R(1)=LD32(R(15)+16);
  R(2)-=R(11);
  R(3)=LD32(R(15));
  R(2)-=R(1);
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(15)+4);
  R(6)+=R(3);
  ST32(R(15)+16,R(6));
  R(4)=LD32(R(15)+16);
  R(5)=LD32(R(15));
  R(6)=LD32(R(6)+12);
  { c->pr=0x8c0df5b4u; R(4)+=0xcu; f_8c0df9d4(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0x1u;
  ST32(R(12),R(2));
  ST32(R(13)+20,R(12));
  ST16(R(13),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0df5ca;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  { R(0)|=0x40u; goto L8c0df5ce; }
L8c0df5ca:;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)|=0x80u;
L8c0df5ce:;
  ST16(R(13),R(0));
L8c0df5d0:;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(3)=LD32(R(15)+12);
  R(2)|=R(3);
  ST16(R(13),R(2));
L8c0df5d8:;
  R(0)=0x0u;
L8c0df5da:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0df5ee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x1fu;
  ST32(R(15)+4,R(4));
  c->t=(R(12)&R(5))==0;
  R(11)=R(6);
  { uint32_t k=!c->t; R(8)=R(7); if(k) goto L8c0df610; }
  { R(12)=R(5); goto L8c0df618; }
L8c0df610:;
  R(12)=R(5);
  R(3)=0xffffffe0u;
  R(12)+=0x20u;
  R(12)&=R(3);
L8c0df618:;
  R(10)=0x8c0f43dcu;
  R(9)=(uint32_t)(int32_t)(int16_t)R(8);
  R(9)<<=2;
  R(4)=R(10);
  R(4)+=0x24u;
  R(9)<<=2;
  R(4)+=R(9);
  R(4)=LD32(R(4)+8);
  R(5)=0x0u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c0df666; }
L8c0df630:;
  R(2)=LD32(R(4)+16);
  c->t=R(2)>=R(12);
  if(!c->t) goto L8c0df660;
  R(14)=R(4);
  { R(4)=R(5); goto L8c0df662; }
L8c0df660:;
  R(4)=LD32(R(4)+8);
L8c0df662:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0df630;
L8c0df666:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0df6c2;
  R(3)=LD32(R(14)+16);
  c->t=R(3)==R(12);
  if(!c->t) goto L8c0df6b8;
  R(5)=R(10);
  R(5)+=0x24u;
  R(5)+=R(9);
  R(6)=R(14);
  ST32(R(15),R(5));
  R(5)+=0xcu;
  R(4)=LD32(R(15));
  { c->pr=0x8c0df682u; R(4)+=0x8u; f_8c0df9f0(c); }
  R(5)=R(10);
  R(5)+=0x24u;
  R(5)+=R(9);
  R(6)=R(14);
  ST32(R(15),R(5));
  R(5)+=0x4u;
  { c->pr=0x8c0df692u; R(4)=LD32(R(15)); f_8c0df9b0(c); }
  R(2)=LD32(R(14)+12);
  R(8)=(uint32_t)(int32_t)(int16_t)R(8);
  c->t=(R(8)&R(8))==0;
  R(3)=0x1u;
  ST32(R(11),R(2));
  ST32(R(14)+20,R(11));
  { uint32_t k=!c->t; ST16(R(14),R(3)); if(k) goto L8c0df6a8; }
  R(0)=(int32_t)(int16_t)LD16(R(14));
  { R(0)|=0x10u; goto L8c0df6ac; }
L8c0df6a8:;
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)|=0x20u;
L8c0df6ac:;
  ST16(R(14),R(0));
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(3)=LD32(R(15)+4);
  R(2)|=R(3);
  { ST16(R(14),R(2)); goto L8c0df708; }
L8c0df6b8:;
  { c->pr=0x8c0df6bcu;  f_8c0df8e4(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0df6c6;
L8c0df6c2:;
  { R(0)=0x3u; goto L8c0df70a; }
L8c0df6c6:;
  R(5)=R(10);
  R(5)+=0x24u;
  R(3)=LD32(R(14)+12);
  R(5)+=R(9);
  R(6)=R(13);
  ST32(R(13)+12,R(3));
  ST32(R(13)+16,R(12));
  R(4)=LD32(R(14)+16);
  R(4)-=R(12);
  ST32(R(14)+16,R(4));
  R(2)=LD32(R(14)+12);
  R(2)+=R(12);
  ST32(R(14)+12,R(2));
  ST32(R(15),R(5));
  R(5)+=0x4u;
  { c->pr=0x8c0df6e8u; R(4)=LD32(R(15)); f_8c0df9b0(c); }
  R(2)=LD32(R(13)+12);
  R(8)=(uint32_t)(int32_t)(int16_t)R(8);
  c->t=(R(8)&R(8))==0;
  ST32(R(11),R(2));
  { uint32_t k=!c->t; ST32(R(13)+20,R(11)); if(k) goto L8c0df6fa; }
  R(0)=(int32_t)(int16_t)LD16(R(13));
  { R(0)|=0x10u; goto L8c0df6fe; }
L8c0df6fa:;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)|=0x20u;
L8c0df6fe:;
  ST16(R(13),R(0));
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(3)=LD32(R(15)+4);
  R(2)|=R(3);
  ST16(R(13),R(2));
L8c0df708:;
  R(0)=0x0u;
L8c0df70a:;
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
void f_8c0df71e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(12)=0x1fu;
  R(11)=R(6);
  c->t=(R(12)&R(5))==0;
  ST32(R(15)+8,R(4));
  R(6)=0x0u;
  R(8)=R(7);
  { uint32_t k=!c->t; R(7)=R(6); if(k) goto L8c0df760; }
  { R(12)=R(5); goto L8c0df768; }
L8c0df760:;
  R(12)=R(5);
  R(3)=0xffffffe0u;
  R(12)+=0x20u;
  R(12)&=R(3);
L8c0df768:;
  R(9)=0x8c0f43dcu;
  R(4)=(uint32_t)(int32_t)(int16_t)R(8);
  R(4)<<=2;
  R(14)=R(6);
  R(3)=R(9);
  R(4)<<=2;
  R(3)+=0x24u;
  ST32(R(15)+4,R(4));
  R(4)+=R(3);
  R(10)=R(6);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)=0x1u; if(k) goto L8c0df806; }
L8c0df784:;
  R(3)=LD32(R(4)+16);
  c->t=R(3)>=R(12);
  if(!c->t) goto L8c0df800;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c0df790;
  R(10)=R(4);
L8c0df790:;
  R(2)=LD32(R(4)+12);
  R(3)=0x7ffu;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0df7ca;
  R(5)=LD32(R(4)+12);
  R(2)=0x800u;
  R(1)=0xfffff800u;
  ST32(R(15),R(5));
  R(5)+=R(2);
  R(3)=LD32(R(4)+16);
  R(5)&=R(1);
  R(0)=LD32(R(15));
  R(0)+=R(3);
  c->t=R(5)>=R(0);
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c0df7cc; }
  R(3)=LD32(R(4)+12);
  R(2)=R(5);
  R(2)-=R(3);
  c->t=R(2)>=R(12);
  if(c->t) goto L8c0df7cc;
  R(3)=LD32(R(15));
  R(3)-=R(5);
  c->t=R(3)>=R(12);
  if(!c->t) goto L8c0df7c6;
  { R(7)=0x2u; goto L8c0df7ce; }
L8c0df7c6:;
  { R(4)=LD32(R(4)+8); goto L8c0df802; }
L8c0df7ca:;
  R(5)=LD32(R(4)+12);
L8c0df7cc:;
  R(7)=R(13);
L8c0df7ce:;
  R(14)=R(4);
  { R(4)=R(6); goto L8c0df802; }
L8c0df800:;
  R(4)=LD32(R(4)+8);
L8c0df802:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0df784;
L8c0df806:;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0df812;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0df812;
  R(14)=R(10);
  R(7)=R(13);
L8c0df812:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0df886;
  R(0)=R(7);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0df82c;
  ST32(R(11),R(5));
  R(5)=R(12);
  R(6)=R(11);
  R(7)=R(8);
  { c->pr=0x8c0df828u; R(4)=0x0u; f_8c0df3a0(c); }
  {  goto L8c0df8d0; }
L8c0df82c:;
  R(3)=LD32(R(14)+16);
  c->t=R(3)==R(12);
  if(!c->t) goto L8c0df87c;
  R(5)=R(9);
  R(3)=LD32(R(15)+4);
  R(5)+=0x24u;
  R(6)=R(14);
  R(5)+=R(3);
  ST32(R(15),R(5));
  R(5)+=0xcu;
  R(4)=LD32(R(15));
  { c->pr=0x8c0df846u; R(4)+=0x8u; f_8c0df9f0(c); }
  R(5)=R(9);
  R(3)=LD32(R(15)+4);
  R(5)+=0x24u;
  R(6)=R(14);
  R(5)+=R(3);
  ST32(R(15),R(5));
  R(5)+=0x4u;
  { c->pr=0x8c0df858u; R(4)=LD32(R(15)); f_8c0df9b0(c); }
  R(2)=LD32(R(14)+12);
  R(8)=(uint32_t)(int32_t)(int16_t)R(8);
  c->t=(R(8)&R(8))==0;
  ST32(R(11),R(2));
  ST32(R(14)+20,R(11));
  { uint32_t k=!c->t; ST16(R(14),R(13)); if(k) goto L8c0df86c; }
  R(0)=(int32_t)(int16_t)LD16(R(14));
  { R(0)|=0x10u; goto L8c0df870; }
L8c0df86c:;
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)|=0x20u;
L8c0df870:;
  ST16(R(14),R(0));
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(3)=LD32(R(15)+8);
  R(2)|=R(3);
  { ST16(R(14),R(2)); goto L8c0df8ce; }
L8c0df87c:;
  { c->pr=0x8c0df880u;  f_8c0df8e4(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0df88a;
L8c0df886:;
  { R(0)=0x3u; goto L8c0df8d0; }
L8c0df88a:;
  R(3)=LD32(R(14)+12);
  R(5)=R(9);
  R(5)+=0x24u;
  R(6)=R(13);
  ST32(R(13)+12,R(3));
  ST32(R(13)+16,R(12));
  R(4)=LD32(R(14)+16);
  R(4)-=R(12);
  ST32(R(14)+16,R(4));
  R(2)=LD32(R(14)+12);
  R(2)+=R(12);
  ST32(R(14)+12,R(2));
  R(3)=LD32(R(15)+4);
  R(5)+=R(3);
  ST32(R(15),R(5));
  R(5)+=0x4u;
  { c->pr=0x8c0df8aeu; R(4)=LD32(R(15)); f_8c0df9b0(c); }
  R(2)=LD32(R(13)+12);
  R(8)=(uint32_t)(int32_t)(int16_t)R(8);
  c->t=(R(8)&R(8))==0;
  ST32(R(11),R(2));
  { uint32_t k=!c->t; ST32(R(13)+20,R(11)); if(k) goto L8c0df8c0; }
  R(0)=(int32_t)(int16_t)LD16(R(13));
  { R(0)|=0x10u; goto L8c0df8c4; }
L8c0df8c0:;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)|=0x20u;
L8c0df8c4:;
  ST16(R(13),R(0));
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(3)=LD32(R(15)+8);
  R(2)|=R(3);
  ST16(R(13),R(2));
L8c0df8ce:;
  R(0)=0x0u;
L8c0df8d0:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0df8e4(SH4Ctx *c) {
  R(4)=0x8c0f43dcu;
  R(5)=0x0u;
  R(3)=R(5);
  R(7)=LD32(R(4)+8);
  c->t=R(3)>=R(7);
  { uint32_t k=c->t; R(6)=0x1u; if(k) goto L8c0df966; }
L8c0df8f2:;
  R(1)=R(5);
  c->t=R(1)>>31;R(1)<<=1;
  R(3)=R(5);
  R(1)+=R(3);
  R(2)=LD32(R(4)+32);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(2);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(6))==0;
  if(!c->t) goto L8c0df960;
  R(7)=R(5);
  c->t=R(7)>>31;R(7)<<=1;
  R(3)=R(5);
  R(7)+=R(3);
  R(2)=LD32(R(4)+32);
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  R(2)+=R(7);
  ST16(R(2),R(6));
  R(0)=LD32(R(4)+32);
  { R(0)+=R(7); return; }
L8c0df960:;
  R(5)+=0x1u;
  c->t=R(5)>=R(7);
  if(!c->t) goto L8c0df8f2;
L8c0df966:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0df96c(SH4Ctx *c) {
  R(5)=0x8c0f43dcu;
  R(6)=0x0u;
  R(2)=R(6);
  R(7)=0xfffeu;
  R(3)=LD32(R(5)+8);
  c->t=R(2)>=R(3);
  if(c->t) goto L8c0df9ac;
L8c0df97a:;
  R(0)=R(6);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(6);
  R(0)+=R(3);
  R(2)=LD32(R(5)+32);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  c->t=R(0)==R(4);
  if(!c->t) goto L8c0df9a4;
  R(3)=R(6);
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=R(6);
  R(3)+=R(0);
  R(2)=LD32(R(5)+32);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(1)=(int32_t)(int16_t)LD16(R(3));
  R(1)&=R(7);
  ST16(R(3),R(1));
L8c0df9a4:;
  R(3)=LD32(R(5)+8);
  R(6)+=0x1u;
  c->t=R(6)>=R(3);
  if(!c->t) goto L8c0df97a;
L8c0df9ac:;
  {  return; }
}
void f_8c0df9b0(SH4Ctx *c) {
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0df9c2;
  R(7)=0x0u;
  ST32(R(6)+4,R(7));
  ST32(R(6)+8,R(7));
  ST32(R(4),R(6));
  { ST32(R(5),R(6)); goto L8c0df9d0; }
L8c0df9c2:;
  R(5)=LD32(R(4));
  R(2)=LD32(R(5)+4);
  ST32(R(6)+4,R(2));
  R(3)=LD32(R(4));
  ST32(R(6)+8,R(3));
  ST32(R(5)+4,R(6));
  ST32(R(4),R(6));
L8c0df9d0:;
  {  return; }
}
void f_8c0df9d4(SH4Ctx *c) {
  R(3)=LD32(R(6)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0df9e2;
  ST32(R(4),R(5));
  ST32(R(5)+4,R(6));
  { R(3)=0x0u; goto L8c0df9ea; }
L8c0df9e2:;
  R(4)=LD32(R(6)+8);
  ST32(R(4)+4,R(5));
  ST32(R(5)+4,R(6));
  R(3)=LD32(R(6)+8);
L8c0df9ea:;
  ST32(R(5)+8,R(3));
  { ST32(R(6)+8,R(5)); return; }
}
void f_8c0df9f0(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(7)=LD32(R(6)+4);
  c->t=(R(7)&R(7))==0;
  ST32(R(15),R(7));
  R(3)=LD32(R(6)+8);
  { uint32_t k=!c->t; ST32(R(15)+4,R(3)); if(k) goto L8c0dfa04; }
  R(1)=LD32(R(6)+8);
  { ST32(R(4),R(1)); goto L8c0dfa0a; }
L8c0dfa04:;
  R(3)=LD32(R(6)+8);
  R(2)=LD32(R(15));
  ST32(R(2)+8,R(3));
L8c0dfa0a:;
  R(2)=LD32(R(6)+8);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0dfa16;
  R(2)=LD32(R(6)+4);
  { ST32(R(5),R(2)); goto L8c0dfa1c; }
L8c0dfa16:;
  R(3)=LD32(R(6)+4);
  R(1)=LD32(R(15)+4);
  ST32(R(1)+4,R(3));
L8c0dfa1c:;
  { R(15)+=0x8u; return; }
}
void f_8c0dfa40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(6)=0x1000u;
  R(0)=R(5);
  R(2)=0x80u;
  c->t=(int32_t)R(0)==1;
  R(7)=0x800u;
  if(c->t) goto L8c0dfa72;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0dfa80;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0dfac0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0dfad0;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0dfae0;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0dfae8;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0dfafa;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0dfa6e;
  {  goto L8c0dfb40; }
L8c0dfa6e:;
  {  goto L8c0dfb50; }
L8c0dfa72:;
  R(3)=0x20u;
  ST32(R(4),R(6));
  ST32(R(4)+4,R(2));
  R(2)=0xf90u;
  ST32(R(4)+8,R(3));
  {  goto L8c0dfb4c; }
L8c0dfa80:;
  R(1)=0x2000u;
  R(3)=0x20u;
  ST32(R(4),R(1));
  ST32(R(4)+4,R(2));
  R(2)=0xfa0u;
  ST32(R(4)+8,R(3));
  {  goto L8c0dfb4c; }
L8c0dfac0:;
  R(1)=0x3000u;
  R(3)=0x40u;
  ST32(R(4),R(1));
  ST32(R(4)+4,R(2));
  R(2)=0xfc0u;
  ST32(R(4)+8,R(3));
  {  goto L8c0dfb4c; }
L8c0dfad0:;
  R(1)=0x4000u;
  R(3)=0x60u;
  ST32(R(4),R(1));
  ST32(R(4)+4,R(2));
  R(2)=0xfe0u;
  ST32(R(4)+8,R(3));
  {  goto L8c0dfb4c; }
L8c0dfae0:;
  R(5)=0x100u;
  R(1)=0x5000u;
  { ST32(R(4),R(1)); goto L8c0dfb00; }
L8c0dfae8:;
  R(2)=0x6000u;
  R(3)=0x200u;
  ST32(R(4),R(2));
  R(2)=0x160u;
  ST32(R(4)+4,R(3));
  R(3)=0xf60u;
  ST32(R(4)+8,R(2));
  { ST32(R(4)+12,R(3)); goto L8c0dfb56; }
L8c0dfafa:;
  R(1)=0x7000u;
  R(5)=0x400u;
  ST32(R(4),R(1));
L8c0dfb00:;
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  { ST32(R(4)+12,R(6)); goto L8c0dfb56; }
L8c0dfb40:;
  R(2)=0x8000u;
  R(3)=0x560u;
  ST32(R(4),R(2));
  R(2)=0xd60u;
  ST32(R(4)+4,R(7));
  ST32(R(4)+8,R(3));
L8c0dfb4c:;
  { ST32(R(4)+12,R(2)); goto L8c0dfb56; }
L8c0dfb50:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0dfb56:;
  R(3)=0x8c0679f4u;
  R(1)=R(7);
  { c->pr=0x8c0dfb5eu; R(0)=LD32(R(4)+4); f_8c0679f4(c); }
  ST32(R(4)+16,R(0));
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0dfb68(SH4Ctx *c) {
  R(5)=0x8c0f43dcu;
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=R(6);
  R(3)=LD32(R(5)+12);
  R(14)=0xfffeu;
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(7)=0x4cu; if(k) goto L8c0dfba2; }
L8c0dfb7a:;
  c->macl=R(6)*R(7);
  R(3)=0x48u;
  R(3)+=R(5);
  R(3)=LD32(R(3));
  R(0)=c->macl;
  R(0)+=R(3);
  c->t=R(0)==R(4);
  if(!c->t) goto L8c0dfb9a;
  c->macl=R(6)*R(7);
  R(0)=0x48u;
  R(2)=LD32(R(5)+R(0));
  R(3)=c->macl;
  R(3)+=R(2);
  R(1)=(int32_t)(int16_t)LD16(R(3));
  R(1)&=R(14);
  ST16(R(3),R(1));
L8c0dfb9a:;
  R(3)=LD32(R(5)+12);
  R(6)+=0x1u;
  c->t=R(6)>=R(3);
  if(!c->t) goto L8c0dfb7a;
L8c0dfba2:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dfbe0(SH4Ctx *c) {
  R(6)=0x8c0f4400u;
  R(0)=0x0u;
  R(6)=LD32(R(6)+8);
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(7)=R(0); if(k) goto L8c0dfbfa; }
L8c0dfbec:;
  R(2)=LD32(R(6)+16);
  c->t=R(2)>R(7);
  if(!c->t) goto L8c0dfbf4;
  R(7)=LD32(R(6)+16);
L8c0dfbf4:;
  R(6)=LD32(R(6)+8);
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0dfbec;
L8c0dfbfa:;
  R(6)=0x8c0f4410u;
  R(6)=LD32(R(6)+8);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0dfc10;
L8c0dfc02:;
  R(2)=LD32(R(6)+16);
  c->t=R(2)>R(0);
  if(!c->t) goto L8c0dfc0a;
  R(0)=LD32(R(6)+16);
L8c0dfc0a:;
  R(6)=LD32(R(6)+8);
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0dfc02;
L8c0dfc10:;
  ST32(R(4),R(7));
  ST32(R(5),R(0));
  { R(0)=0x0u; return; }
}
void f_8c0dfc44(SH4Ctx *c) {
  { R(0)=0x78u; return; }
}
void f_8c0dfc48(SH4Ctx *c) {
  { R(0)=0x78u; return; }
}
void f_8c0dfc4c(SH4Ctx *c) {
  { R(0)=0x78u; return; }
}
void f_8c0dfc50(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ef1a0u;
  { c->pr=0x8c0dfc58u;  f_8c0ef1a0(c); }
  R(2)=0x8c0dd400u;
  { c->pr=0x8c0dfc5eu; R(4)=R(0); f_8c0dd400(c); }
  R(3)=0x101u;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0dfc68;
  { R(4)=0x0u; goto L8c0dfc6a; }
L8c0dfc68:;
  R(4)=0x78u;
L8c0dfc6a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c0dfd00(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(6)=R(5);
  R(3)=0x8c0dd580u;
  ST32(R(15),R(4));
  R(4)=0x0u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(15));
  { R(15)+=0x8u; { f_8c0dd580(c); return; } }
}
void f_8c0dfd40(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  R(3)=0x8c0dd580u;
  ST32(R(15),R(4));
  R(4)=0x8u;
  R(6)=0x8c2ed864u;
  { R(15)+=0x4u; { f_8c0dd580(c); return; } }
}
void f_8c0dfd80(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(6)=R(5);
  R(3)=0x8c0dd580u;
  ST32(R(15),R(4));
  R(4)=0x2u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(15));
  { R(15)+=0x8u; { f_8c0dd580(c); return; } }
}
void f_8c0dfdc0(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(6)=R(5);
  R(3)=0x8c0dd580u;
  ST32(R(15),R(4));
  R(4)=0x3u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(15));
  { R(15)+=0x8u; { f_8c0dd580(c); return; } }
}
void f_8c0dfe00(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(6)=R(5);
  R(3)=0x8c0dd580u;
  ST32(R(15),R(4));
  R(4)=0x1u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(15));
  { R(15)+=0x8u; { f_8c0dd580(c); return; } }
}
void f_8c0dfe40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0dff40u;
  ST32(R(15),R(4));
  { c->pr=0x8c0dfe4cu; ST32(R(15)+4,R(5)); f_8c0dff40(c); }
  R(4)=LD32(R(15));
  R(6)=0x0u;
  R(5)=LD32(R(15)+4);
  R(15)+=0x8u;
  R(3)=0x8c0ec620u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0ec620(c); return; } }
}
void f_8c0dfe80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=0x8c0f3b94u;
  R(2)=R(15);
  R(13)=0x8c2ecf08u;
  R(14)=R(4);
  R(0)=LD32(R(3)+4);
  R(4)=R(15);
  R(1)=LD32(R(3));
  R(6)=R(14);
  R(5)=0x0u;
  ST32(R(2),R(1));
  R(6)+=0xcu;
  ST32(R(2)+4,R(0));
  R(0)=LD32(R(3)+12);
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  R(0)=LD32(R(3)+20);
  R(1)=LD32(R(3)+16);
  R(3)=0x1u;
  ST32(R(2)+16,R(1));
  ST32(R(2)+20,R(0));
  ST32(R(14),R(3));
  R(2)=LD32(R(13)+24);
  ST32(R(14)+8,R(2));
  R(0)=LD32(R(13)+24);
  R(2)=0x8c0dc960u;
  R(0)<<=2;
  R(3)=LD32(R(4)+R(0));
  ST32(R(14)+4,R(3));
  { c->pr=0x8c0dfec6u; R(4)=0x7u; f_8c0dc960(c); }
  R(3)=0x8c0dc960u;
  R(6)=R(14);
  R(5)=0x0u;
  R(6)+=0x10u;
  { c->pr=0x8c0dfed2u; R(4)=0x8u; f_8c0dc960(c); }
  R(2)=0x8c0d1c88u;
  { c->pr=0x8c0dfed8u; R(4)=LD32(R(13)+24); f_8c0d1c88(c); }
  R(3)=0x0u;
  ST32(R(14)+20,R(0));
  ST32(R(14)+24,R(3));
  R(2)=LD32(R(13)+44);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(5)=R(14); if(k) goto L8c0dfeec; }
  R(0)=LD32(R(14)+24);
  R(0)|=0x1u;
  ST32(R(14)+24,R(0));
L8c0dfeec:;
  R(3)=0x8c2ee708u;
  R(5)+=0x1cu;
  R(4)=LD32(R(3));
  R(2)=0x7e0u;
  R(4)<<=2;
  R(1)=0x8c0d1b06u;
  R(2)+=R(13);
  R(4)+=R(2);
  { c->pr=0x8c0dff00u; R(4)=LD32(R(4)); f_8c0d1b06(c); }
  R(0)=R(15);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dff40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0dcb80u;
  { c->pr=0x8c0dff4eu;  f_8c0dcb80(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dffa4;
  R(0)=0x940u;
  R(4)=0x8c2ecf08u;
  R(3)=R(0);
  R(2)=0x100000u;
  R(3)+=R(4);
  R(14)=LD32(R(4)+R(0));
  ST32(R(15)+4,R(3));
  R(3)=R(15);
  R(3)+=0x8u;
  ST32(R(15)+8,R(2));
  ST32(R(15),R(3));
  R(3)=LD32(R(15)+4);
  R(13)=0x8c0d2ba0u;
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c0dff96;
  R(1)=LD32(R(15));
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0dff96;
L8c0dff7a:;
  { uint32_t tg=R(13); c->pr=0x8c0dff7eu; R(4)=0x7u; sh4_call(c,tg); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(2)+=0xffffffffu;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c0dff96;
  R(1)=LD32(R(15));
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0dff7a;
L8c0dff96:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0dffa4;
  R(4)=0xeeeeu;
  {  goto L8c0dffa6; }
L8c0dffa4:;
  R(4)=0x0u;
L8c0dffa6:;
  R(0)=R(4);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dffe0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x4cu;
  R(14)=0x8c2ecf08u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+R(0));
  R(0)&=0x3u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e003e;
  R(0)=0x4cu;
  R(2)=LD32(R(14)+R(0));
  R(3)=0xfffffffcu;
  R(7)=0x0u;
  R(2)&=R(3);
  ST32(R(14)+R(0),R(2));
  R(2)=0x2u;
  R(1)=LD32(R(14)+R(0));
  R(1)|=R(2);
  ST32(R(14)+R(0),R(1));
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)=0x1u; if(k) goto L8c0e0014; }
  R(0)=0x958u;
  ST32(R(14)+R(0),R(6));
  { R(5)=R(7); goto L8c0e001a; }
L8c0e0014:;
  R(0)=0x958u;
  R(5)=R(6);
  ST32(R(14)+R(0),R(7));
L8c0e001a:;
  R(3)=0x8c0d4ec0u;
  R(7)=0x0u;
  R(6)=LD32(R(14)+16);
  { c->pr=0x8c0e0024u; R(4)=0x1u; f_8c0d4ec0(c); }
  R(4)=R(0);
  R(0)=0x40u;
  R(2)=LD32(R(14)+R(0));
  R(3)=0x8c09c280u;
  R(2)+=0x1u;
  R(1)=R(2);
  ST32(R(14)+R(0),R(2));
  { c->pr=0x8c0e0036u; R(0)=LD32(R(14)+48); f_8c09c280(c); }
  R(1)=0x40u;
  R(1)+=R(14);
  { ST32(R(1),R(0)); goto L8c0e0040; }
L8c0e003e:;
  R(4)=0xffffffffu;
L8c0e0040:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e0080(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0d4c00u;
  { c->pr=0x8c0e0096u; R(12)=R(4); f_8c0d4c00(c); }
  ST32(R(15)+8,R(0));
  R(4)=LD32(R(12)+8);
  R(0)=0x7d0u;
  R(6)=LD32(R(4)+16);
  R(3)=R(6);
  R(3)+=0x1u;
  ST32(R(4)+16,R(3));
  R(4)=0x8c2ecf08u;
  R(2)=LD32(R(12)+24);
  R(2)+=0x38u;
  ST32(R(12)+24,R(2));
  R(3)=LD32(R(4)+R(0));
  R(7)=LD32(R(12)+8);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=LD32(R(7)+16); if(k) goto L8c0e00ba; }
  {  goto L8c0e01da; }
L8c0e00ba:;
  R(3)=LD32(R(12)+8);
  R(2)=LD32(R(3)+20);
  c->t=R(7)>=R(2);
  if(!c->t) goto L8c0e00c6;
  {  goto L8c0e01da; }
L8c0e00c6:;
  R(8)=R(7);
  R(8)+=0x1u;
  R(3)=R(8);
  R(8)<<=2;
  R(11)=R(6);
  R(8)+=R(3);
  R(3)=R(6);
  R(11)<<=2;
  R(11)+=R(3);
  R(13)=R(7);
  R(13)<<=2;
  R(3)=R(7);
  R(2)=R(7);
  R(2)<<=2;
  R(13)+=R(3);
  R(9)=R(6);
  R(13)<<=2;
  ST32(R(15)+4,R(2));
  R(8)<<=2;
  R(5)=0x0u;
  R(11)<<=2;
  R(9)<<=2;
L8c0e00f2:;
  R(0)=0x40u;
  R(2)=0x170u;
  R(6)=LD32(R(4)+R(0));
  R(14)=R(5);
  R(2)+=R(4);
  R(3)=R(6);
  R(6)<<=2;
  R(6)+=R(3);
  R(3)=0x8c2ee6c8u;
  R(6)<<=2;
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(2);
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(14)<<=2; if(k) goto L8c0e01c0; }
  R(1)=0x710u;
  R(2)=LD32(R(15)+4);
  R(1)+=R(4);
  R(1)+=R(2);
  R(1)=LD32(R(1));
  c->t=R(5)==R(1);
  if(!c->t) goto L8c0e01a0;
  R(1)=0x7u;
  c->t=R(7)>=R(1);
  if(c->t) goto L8c0e015a;
  R(2)=0x710u;
  R(2)+=R(4);
  R(2)+=R(9);
  R(3)=LD32(R(2));
  c->t=R(5)==R(3);
  if(c->t) goto L8c0e0146;
  R(3)=0xb0u;
  R(0)=R(6);
  R(3)+=R(4);
  R(3)+=R(11);
  R(2)=R(3);
  R(2)+=R(14);
  R(3)=LD32(R(2));
  { R(0)+=R(8); goto L8c0e0158; }
L8c0e0146:;
  R(3)=R(6);
  R(3)+=R(13);
  R(2)=R(3);
  R(2)+=R(14);
  R(0)=R(6);
  R(1)=R(6);
  R(0)+=R(8);
  ST32(R(15),R(6));
  R(3)=LD32(R(2));
L8c0e0158:;
  ST32(R(14)+R(0),R(3));
L8c0e015a:;
  R(0)=0x40u;
  R(2)=0x170u;
  R(0)=LD32(R(4)+R(0));
  R(2)+=R(4);
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=0x10000000u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)+=R(13);
  { ST32(R(14)+R(0),R(3)); goto L8c0e01d2; }
L8c0e01a0:;
  R(1)=0x710u;
  R(1)+=R(4);
  R(1)+=R(9);
  R(2)=LD32(R(1));
  c->t=R(5)==R(2);
  if(c->t) goto L8c0e01d2;
  R(2)=0xb0u;
  R(0)=R(6);
  R(0)+=R(13);
  R(2)+=R(4);
  R(2)+=R(11);
  R(1)=R(2);
  R(1)+=R(14);
  R(2)=LD32(R(1));
  { ST32(R(14)+R(0),R(2)); goto L8c0e01d2; }
L8c0e01c0:;
  R(2)=0xb0u;
  R(0)=R(6);
  R(0)+=R(13);
  R(2)+=R(4);
  R(2)+=R(11);
  R(1)=R(2);
  R(1)+=R(14);
  R(2)=LD32(R(1));
  ST32(R(14)+R(0),R(2));
L8c0e01d2:;
  R(3)=0x5u;
  R(5)+=0x1u;
  c->t=R(5)>=R(3);
  if(!c->t) goto L8c0e00f2;
L8c0e01da:;
  R(0)=LD32(R(12)+8);
  R(0)=LD32(R(0)+24);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0e01e8;
  R(2)=0x8c0d19c0u;
  { c->pr=0x8c0e01e8u; R(4)=0x1u; f_8c0d19c0(c); }
L8c0e01e8:;
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e0220(SH4Ctx *c) {
  R(5)=0x8c2ecf08u;
  R(0)=0x4cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(5)+R(0));
  R(3)=0xfffffffcu;
  c->t=(R(4)&R(4))==0;
  R(2)&=R(3);
  { uint32_t k=c->t; ST32(R(5)+R(0),R(2)); if(k) goto L8c0e0256; }
  R(0)=LD32(R(4)+4);
  c->t=(R(0)&0x20)==0;
  if(!c->t) goto L8c0e0256;
  R(2)=0x8c2ed860u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0e0256;
  R(3)=0x8c0dff40u;
  { c->pr=0x8c0e0246u;  f_8c0dff40(c); }
  R(2)=0x8c0d4e6eu;
  { c->pr=0x8c0e024cu;  f_8c0d4e6e(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e0256;
  R(2)=0x8c0dff40u;
  { c->pr=0x8c0e0256u;  f_8c0dff40(c); }
L8c0e0256:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0e0280(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c280u;
  R(1)=LD32(R(4));
  { c->pr=0x8c0e028au; R(0)=LD32(R(4)+12); f_8c09c280(c); }
  R(2)=0x8c0679f4u;
  ST32(R(4)+4,R(0));
  R(1)=LD32(R(4));
  { c->pr=0x8c0e0294u; R(0)=LD32(R(4)+12); f_8c0679f4(c); }
  R(6)=R(0);
  ST32(R(4)+8,R(0));
  R(0)=0x950u;
  R(5)=0x8c2ecf08u;
  R(3)=LD32(R(5)+R(0));
  c->t=R(6)>R(3);
  if(c->t) goto L8c0e02be;
  R(0)=0x948u;
  R(1)=LD32(R(5)+R(0));
  c->t=R(6)>=R(1);
  if(!c->t) goto L8c0e02be;
  R(0)=0x94cu;
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(5)+R(0));
  c->t=R(3)>R(2);
  if(c->t) goto L8c0e02be;
  R(0)=0x944u;
  R(1)=LD32(R(4)+4);
  R(3)=LD32(R(5)+R(0));
  c->t=R(1)>=R(3);
  if(c->t) goto L8c0e02c2;
L8c0e02be:;
  R(3)=0x1u;
  ST32(R(4)+20,R(3));
L8c0e02c2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e0300(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0679f4u;
  R(1)=LD32(R(4));
  { c->pr=0x8c0e030au; R(0)=LD32(R(4)+16); f_8c0679f4(c); }
  R(2)=LD32(R(4)+12);
  R(3)=0x8c09c280u;
  R(2)-=R(0);
  R(2)+=0xffffffffu;
  ST32(R(4)+4,R(2));
  R(1)=LD32(R(4));
  { c->pr=0x8c0e031au; R(0)=LD32(R(4)+16); f_8c09c280(c); }
  R(6)=R(0);
  ST32(R(4)+8,R(0));
  R(0)=0x950u;
  R(5)=0x8c2ecf08u;
  R(2)=LD32(R(5)+R(0));
  c->t=R(6)>R(2);
  if(c->t) goto L8c0e0344;
  R(0)=0x948u;
  R(1)=LD32(R(5)+R(0));
  c->t=R(6)>=R(1);
  if(!c->t) goto L8c0e0344;
  R(0)=0x94cu;
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(5)+R(0));
  c->t=R(3)>R(2);
  if(c->t) goto L8c0e0344;
  R(0)=0x944u;
  R(1)=LD32(R(4)+4);
  R(3)=LD32(R(5)+R(0));
  c->t=R(1)>=R(3);
  if(c->t) goto L8c0e0348;
L8c0e0344:;
  R(3)=0x1u;
  ST32(R(4)+20,R(3));
L8c0e0348:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e0380(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(3)=0x8c0f3bacu;
  R(2)=R(15);
  R(2)+=0x4u;
  R(13)=R(15);
  R(1)=LD32(R(3));
  R(13)+=0x4u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  R(0)=LD32(R(3)+12);
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  R(1)=LD32(R(3)+16);
  R(0)=LD32(R(3)+20);
  ST32(R(2)+16,R(1));
  ST32(R(2)+20,R(0));
  R(1)=LD32(R(3)+24);
  R(0)=LD32(R(3)+28);
  ST32(R(2)+24,R(1));
  ST32(R(2)+28,R(0));
  R(1)=LD32(R(3)+32);
  R(0)=LD32(R(3)+36);
  ST32(R(2)+32,R(1));
  ST32(R(2)+36,R(0));
  R(1)=LD32(R(3)+40);
  R(0)=LD32(R(3)+44);
  ST32(R(2)+40,R(1));
  ST32(R(2)+44,R(0));
  R(3)=LD32(R(4)+4);
  R(2)=0x20000u;
  c->t=(R(3)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(15),R(3)); if(k) goto L8c0e03d8; }
  R(1)=LD32(R(15));
  R(3)=0x181ffu;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0e03dc;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e03dc;
L8c0e03d8:;
  { R(0)=0xau; goto L8c0e042e; }
L8c0e03dc:;
  R(3)=0x1u;
  c->t=(int32_t)R(6)>(int32_t)R(3);
  if(!c->t) goto L8c0e0400;
  c->t=(int32_t)R(7)>(int32_t)R(3);
  if(!c->t) goto L8c0e0400;
  R(0)=R(6);
  R(0)<<=2;
  R(14)=LD32(R(13)+R(0));
  R(0)=R(7);
  R(0)<<=2;
  R(2)=LD32(R(13)+R(0));
  R(3)=0x1du;
  R(14)=sh4_shld(R(14),R(3));
  R(2)<<=16;
  R(2)<<=8;
  R(2)<<=2;
  { R(14)|=R(2); goto L8c0e0416; }
L8c0e0400:;
  c->t=(R(6)&R(6))==0;
  R(0)=c->t;
  c->t=(R(7)&R(7))==0;
  R(1)=c->t;
  R(0)|=R(1);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e0414;
  R(14)=0xb0000000u;
  {  goto L8c0e0416; }
L8c0e0414:;
  R(14)=0x94000000u;
L8c0e0416:;
  R(6)=R(5);
  c->t=R(6)>>31;R(6)<<=1;
  R(3)=R(4);
  R(6)<<=2;
  R(6)+=R(3);
  R(3)=0x3ffffffu;
  R(6)+=0x8u;
  R(2)=LD32(R(6));
  R(0)=0x0u;
  R(2)&=R(3);
  R(2)|=R(14);
  ST32(R(6),R(2));
L8c0e042e:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e0460(SH4Ctx *c) {
  R(2)=LD32(R(4)+4);
  R(3)=0x20000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0e046c;
  { R(0)=0xau; return; }
L8c0e046c:;
  R(6)=R(4);
  R(6)+=0x4u;
  R(1)=0x1fffffffu;
  R(3)=0x7u;
  R(0)=LD32(R(6));
  R(5)&=R(3);
  R(2)=0x1du;
  R(0)&=R(1);
  R(5)=sh4_shad(R(5),R(2));
  R(5)|=R(0);
  R(0)=0x0u;
  ST32(R(6),R(5));
  {  return; }
}
void f_8c0e04c0(SH4Ctx *c) {
  R(2)=0x20000u;
  R(7)=LD32(R(4)+4);
  c->t=(R(2)&R(7))==0;
  if(!c->t) goto L8c0e04d4;
  R(1)=0x181ffu;
  c->t=(R(1)&R(7))==0;
  if(c->t) goto L8c0e04d8;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e04d8;
L8c0e04d4:;
  { R(0)=0xau; return; }
L8c0e04d8:;
  R(7)=R(5);
  c->t=R(7)>>31;R(7)<<=1;
  R(3)=R(4);
  R(7)<<=2;
  R(7)+=R(3);
  R(1)=0xff3fffffu;
  R(7)+=0x8u;
  R(0)=LD32(R(7));
  R(2)=0x3u;
  R(6)&=R(2);
  R(3)=0x16u;
  R(0)&=R(1);
  R(6)=sh4_shad(R(6),R(3));
  R(6)|=R(0);
  R(0)=0x0u;
  ST32(R(7),R(6));
  {  return; }
}
void f_8c0e0520(SH4Ctx *c) {
  R(6)=LD32(R(4)+4);
  R(3)=0x20000u;
  R(6)&=R(3);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0e0530;
  R(1)=0x1u;
  c->t=(R(1)&R(5))==0;
  if(c->t) goto L8c0e053c;
L8c0e0530:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0e0540;
  R(0)=0x1u;
  R(0)&=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e0540;
L8c0e053c:;
  { R(0)=0xau; return; }
L8c0e0540:;
  R(2)=0x7u;
  R(6)=R(4);
  R(3)=0xf8ffffffu;
  R(5)&=R(2);
  R(1)=LD32(R(6));
  R(5)<<=16;
  R(5)<<=8;
  R(1)&=R(3);
  R(5)|=R(1);
  R(0)=0x0u;
  ST32(R(6),R(5));
  {  return; }
}
void f_8c0e0580(SH4Ctx *c) {
  R(2)=LD32(R(4)+4);
  R(3)=0x20000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0e058c;
  { R(0)=0xau; return; }
L8c0e058c:;
  R(6)=R(4);
  R(6)+=0x4u;
  R(2)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  R(3)=0x1fffffffu;
  R(2)&=R(3);
  R(2)|=R(5);
  { uint32_t k=c->t; ST32(R(6),R(2)); if(k) goto L8c0e05a6; }
  R(0)=LD32(R(4));
  R(0)|=0x40u;
  { ST32(R(4),R(0)); goto L8c0e05ae; }
L8c0e05a6:;
  R(1)=LD32(R(4));
  R(2)=0xffffffbfu;
  R(1)&=R(2);
  ST32(R(4),R(1));
L8c0e05ae:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0e05e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(3)=0x8c0f3bdcu;
  R(2)=R(15);
  R(2)+=0x4u;
  R(14)=R(4);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=LD32(R(3)+12);
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  R(0)=LD32(R(3)+20);
  R(1)=LD32(R(3)+16);
  ST32(R(2)+16,R(1));
  ST32(R(2)+20,R(0));
  R(0)=LD32(R(3)+28);
  R(1)=LD32(R(3)+24);
  R(3)=0x179f8u;
  ST32(R(2)+24,R(1));
  ST32(R(2)+28,R(0));
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0e0620;
  R(0)=0xau;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e0620:;
  R(6)=R(14);
  R(3)=0x1u;
  R(4)=0x7f00u;
  R(5)&=R(3);
  R(7)=LD32(R(6));
  R(2)=0xfffffffbu;
  ST32(R(15),R(5));
  R(5)<<=2;
  R(4)&=R(7);
  R(1)=0x180u;
  R(7)&=R(2);
  R(5)|=R(7);
  ST32(R(6),R(5));
  R(0)=LD32(R(14)+4);
  c->t=(R(0)&R(1))==0;
  if(c->t) goto L8c0e06de;
  R(5)=R(14);
  R(6)=LD32(R(5));
  R(7)=0x30u;
  R(0)=LD32(R(15));
  R(7)&=R(6);
  R(3)=R(15);
  R(7)>>=2;
  R(1)=0xffff80ffu;
  c->t=R(7)&1;R(7)>>=1;
  R(7)|=R(0);
  R(3)+=0x4u;
  R(7)<<=2;
  R(7)+=R(3);
  R(7)=LD32(R(7));
  R(2)=0x1u;
  R(6)&=R(1);
  R(7)+=0x8u;
  R(2)=sh4_shad(R(2),R(7));
  R(2)|=R(6);
  ST32(R(5),R(2));
  R(0)=LD32(R(14));
  R(2)=0x200u;
  c->t=(R(0)&R(2))==0;
  if(c->t) goto L8c0e06c0;
  R(3)=0x400u;
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0e06c0;
  R(5)=R(14);
  R(3)=0x8c0d1880u;
  ST32(R(15),R(5));
  R(6)=0x10u;
  R(4)=LD32(R(15));
  R(5)+=0x20u;
  { c->pr=0x8c0e0686u; R(4)+=0x10u; f_8c0d1880(c); }
  {  goto L8c0e06de; }
L8c0e06c0:;
  R(2)=LD32(R(14));
  R(3)=0x400u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0e06de;
  R(0)=0x200u;
  c->t=R(4)==R(0);
  if(!c->t) goto L8c0e06de;
  R(5)=R(14);
  R(3)=0x8c0d1880u;
  ST32(R(15),R(5));
  R(6)=0x10u;
  R(4)=LD32(R(15));
  R(5)+=0x10u;
  { c->pr=0x8c0e06deu; R(4)+=0x20u; f_8c0d1880(c); }
L8c0e06de:;
  R(0)=0x0u;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e0720(SH4Ctx *c) {
  R(2)=LD32(R(4)+4);
  R(3)=0x181ffu;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0e072c;
  { R(0)=0xau; return; }
L8c0e072c:;
  R(3)=0x3u;
  R(6)=R(4);
  R(5)&=R(3);
  R(2)=0xffffff3fu;
  R(1)=LD32(R(6));
  R(5)<<=2;
  R(5)<<=2;
  R(1)&=R(2);
  R(5)<<=2;
  R(5)|=R(1);
  R(0)=0x0u;
  ST32(R(6),R(5));
  {  return; }
}
void f_8c0e0780(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=0x179f8u;
  R(7)=LD32(R(4)+4);
  c->t=(R(3)&R(7))==0;
  if(c->t) goto L8c0e0796;
  R(1)=0x101f8u;
  c->t=(R(1)&R(7))==0;
  if(c->t) goto L8c0e079c;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e079c;
L8c0e0796:;
  R(0)=0xau;
  { R(15)+=0x4u; return; }
L8c0e079c:;
  R(7)=R(5);
  c->t=R(7)>>31;R(7)<<=1;
  R(7)<<=2;
  R(3)=R(4);
  ST32(R(15),R(7));
  R(7)+=R(3);
  R(7)+=0x8u;
  R(0)=LD32(R(6)+24);
  R(2)=LD32(R(7));
  R(3)=0xffffffc0u;
  R(0)&=0x3fu;
  R(1)=R(4);
  R(2)&=R(3);
  R(2)|=R(0);
  ST32(R(7),R(2));
  R(2)=LD32(R(15));
  R(0)=LD32(R(6)+24);
  R(1)+=R(2);
  R(2)=LD32(R(6)+8);
  R(3)=LD32(R(6)+28);
  R(0)|=R(2);
  R(2)=0xffe00000u;
  R(3)>>=2;
  R(0)&=R(2);
  R(2)=0x1fffffu;
  c->t=R(3)&1;R(3)>>=1;
  R(3)&=R(2);
  R(0)|=R(3);
  ST32(R(1)+12,R(0));
  R(0)=0x0u;
  { R(15)+=0x4u; return; }
}
void f_8c0e0800(SH4Ctx *c) {
  R(2)=0x20000u;
  R(7)=LD32(R(4)+4);
  c->t=(R(2)&R(7))==0;
  if(!c->t) goto L8c0e0814;
  R(1)=0x181ffu;
  c->t=(R(1)&R(7))==0;
  if(c->t) goto L8c0e0818;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e0818;
L8c0e0814:;
  { R(0)=0xau; return; }
L8c0e0818:;
  R(7)=R(5);
  c->t=R(7)>>31;R(7)<<=1;
  R(3)=R(4);
  R(7)<<=2;
  R(2)=0x1u;
  R(7)+=R(3);
  R(3)=0xffefffffu;
  R(6)&=R(2);
  R(7)+=0x8u;
  R(1)=LD32(R(7));
  R(6)<<=16;
  R(6)<<=2;
  R(1)&=R(3);
  R(6)<<=2;
  R(6)|=R(1);
  R(0)=0x0u;
  ST32(R(7),R(6));
  {  return; }
}
void f_8c0e0860(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(3)=0x8c0f3bfcu;
  R(2)=R(15);
  R(2)+=0x4u;
  R(14)=R(15);
  R(1)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  R(0)=LD32(R(3)+4);
  R(14)+=0x4u;
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  R(0)=LD32(R(3)+12);
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  R(1)=LD32(R(3)+16);
  R(0)=LD32(R(3)+20);
  ST32(R(2)+16,R(1));
  ST32(R(2)+20,R(0));
  R(1)=LD32(R(3)+24);
  R(0)=LD32(R(3)+28);
  ST32(R(2)+24,R(1));
  ST32(R(2)+28,R(0));
  R(0)=LD32(R(3)+36);
  R(1)=LD32(R(3)+32);
  ST32(R(2)+32,R(1));
  ST32(R(2)+36,R(0));
  R(0)=LD32(R(3)+44);
  R(1)=LD32(R(3)+40);
  ST32(R(2)+40,R(1));
  ST32(R(2)+44,R(0));
  { uint32_t k=c->t; R(13)=0x7u; if(k) goto L8c0e08ae; }
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0e08b2;
L8c0e08ae:;
  { R(4)=R(13); goto L8c0e09a8; }
L8c0e08b2:;
  R(3)=LD32(R(5));
  R(2)=0x90u;
  c->t=R(3)>=R(2);
  if(c->t) goto L8c0e08e0;
  { R(4)=0x9u; goto L8c0e09a8; }
L8c0e08e0:;
  R(1)=LD32(R(5)+4);
  R(7)=0x3u;
  R(3)=LD32(R(5)+8);
  R(6)=0x1u;
  R(1)&=R(13);
  R(0)=LD32(R(5)+12);
  R(3)&=R(7);
  R(1)<<=16;
  R(3)<<=16;
  R(1)<<=8;
  R(0)&=R(7);
  R(1)|=R(3);
  R(3)=LD32(R(5)+24);
  R(0)<<=2;
  R(0)<<=2;
  R(3)&=R(6);
  R(0)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(1)|=R(0);
  R(0)=0x808c0100u;
  R(1)|=R(3);
  R(1)|=R(0);
  ST32(R(4),R(1));
  R(1)=0x1bu;
  R(3)=LD32(R(5)+28);
  R(2)=LD32(R(5)+32);
  R(13)&=R(3);
  R(2)&=R(7);
  R(3)=0x1du;
  R(2)=sh4_shad(R(2),R(1));
  R(13)=sh4_shad(R(13),R(3));
  R(13)|=R(2);
  R(2)=LD32(R(5)+36);
  R(2)&=R(6);
  R(2)<<=16;
  R(2)<<=8;
  R(2)<<=2;
  R(13)|=R(2);
  R(13)|=R(6);
  ST32(R(4)+4,R(13));
  R(13)=R(5);
  R(13)+=0x50u;
  ST32(R(15),R(13));
  R(13)=LD32(R(13));
  R(11)=LD32(R(15));
  c->t=R(13)>R(6);
  { uint32_t k=!c->t; R(11)=LD32(R(11)+4); if(k) goto L8c0e095e; }
  c->t=R(11)>R(6);
  if(!c->t) goto L8c0e095e;
  R(0)=R(13);
  R(0)<<=2;
  R(12)=LD32(R(14)+R(0));
  R(0)=R(11);
  R(0)<<=2;
  R(2)=LD32(R(14)+R(0));
  R(3)=0x1du;
  R(12)=sh4_shld(R(12),R(3));
  R(2)<<=16;
  R(2)<<=8;
  R(2)<<=2;
  { R(12)|=R(2); goto L8c0e096a; }
L8c0e095e:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0e0968;
  R(12)=0xb0000000u;
  {  goto L8c0e096a; }
L8c0e0968:;
  R(12)=0x94000000u;
L8c0e096a:;
  R(14)=R(5);
  R(14)+=0x50u;
  R(3)=LD32(R(14)+8);
  R(1)=0x15u;
  R(2)=LD32(R(14)+12);
  R(3)&=R(6);
  R(3)<<=16;
  R(3)<<=8;
  R(2)&=R(6);
  c->t=R(3)>>31;R(3)<<=1;
  R(2)<<=16;
  R(12)|=R(3);
  R(3)=LD32(R(14)+16);
  R(2)<<=8;
  R(12)|=R(2);
  R(2)=LD32(R(14)+20);
  R(7)&=R(3);
  R(3)=0x16u;
  R(2)&=R(6);
  R(7)=sh4_shad(R(7),R(3));
  R(2)=sh4_shad(R(2),R(1));
  R(12)|=R(7);
  R(12)|=R(2);
  R(2)=LD32(R(14)+24);
  R(2)&=R(6);
  R(2)<<=16;
  R(2)<<=2;
  R(2)<<=2;
  R(12)|=R(2);
  ST32(R(4)+8,R(12));
  R(4)=0x0u;
L8c0e09a8:;
  R(0)=R(4);
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e09e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0e0a00;
  R(2)=0x8c0e0e0au;
  { c->pr=0x8c0e09f4u; R(4)=R(14); f_8c0e0e0a(c); }
  R(3)=0x8c0eeda0u;
  R(4)=R(0);
  { c->pr=0x8c0e09fcu; R(5)=LD32(R(14)+28); f_8c0eeda0(c); }
  {  goto L8c0e0a06; }
L8c0e0a00:;
  R(3)=0x8c0eec00u;
  { c->pr=0x8c0e0a06u; R(4)=LD32(R(14)+28); f_8c0eec00(c); }
L8c0e0a06:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e0a40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0eefe0u;
  { c->pr=0x8c0e0a48u;  f_8c0eefe0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e0a80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0xff00u;
  R(11)=0x0u;
  R(3)=0x1000u;
  R(12)=R(11);
  R(14)&=R(7);
  R(13)=R(11);
  c->t=R(14)==R(3);
  R(7)=R(7)&0xFF;
  { uint32_t k=c->t; ST32(R(15),R(7)); if(k) goto L8c0e0aa8; }
  R(1)=0x1100u;
  c->t=R(14)==R(1);
  if(!c->t) goto L8c0e0aae;
L8c0e0aa8:;
  R(3)=0x3u;
  { ST32(R(4),R(3)); goto L8c0e0ab2; }
L8c0e0aae:;
  R(1)=0x2u;
  ST32(R(4),R(1));
L8c0e0ab2:;
  R(3)=0x500u;
  R(10)=0x1u;
  c->t=R(14)==R(3);
  { uint32_t k=c->t; R(7)=0x4u; if(k) goto L8c0e0ac2; }
  R(1)=0x600u;
  c->t=R(14)==R(1);
  if(!c->t) goto L8c0e0aca;
L8c0e0ac2:;
  R(3)=0x28000000u;
  ST32(R(4)+4,R(10));
  { ST32(R(4)+8,R(3)); goto L8c0e0b62; }
L8c0e0aca:;
  R(1)=0x700u;
  c->t=R(14)==R(1);
  if(c->t) goto L8c0e0ad6;
  R(2)=0x800u;
  c->t=R(14)==R(2);
  if(!c->t) goto L8c0e0b00;
L8c0e0ad6:;
  R(2)=0x30000000u;
  { ST32(R(4)+4,R(10)); goto L8c0e0b2e; }
L8c0e0b00:;
  ST32(R(4)+4,R(10));
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e0b1c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e0b20;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e0b26;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0e0b2c;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0e0b32;
  {  goto L8c0e0b60; }
L8c0e0b1c:;
  { ST32(R(4)+8,R(11)); goto L8c0e0b62; }
L8c0e0b20:;
  R(2)=0x8000000u;
  {  goto L8c0e0b2e; }
L8c0e0b26:;
  R(1)=0x10000000u;
  {  goto L8c0e0b34; }
L8c0e0b2c:;
  R(2)=0x18000000u;
L8c0e0b2e:;
  { ST32(R(4)+8,R(2)); goto L8c0e0b62; }
L8c0e0b32:;
  R(1)=0x20000000u;
L8c0e0b34:;
  { ST32(R(4)+8,R(1)); goto L8c0e0b62; }
L8c0e0b60:;
  R(12)=R(7);
L8c0e0b62:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==8;
  ST32(R(4)+12,R(5));
  { uint32_t k=c->t; ST32(R(4)+16,R(6)); if(k) goto L8c0e0bd2; }
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c0e0b94;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0e0b98;
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0e0b9c;
  R(1)=0x80u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0bc0;
  R(1)=0x100u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0bc4;
  R(1)=0x200u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0bc8;
  R(1)=0x400u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0bcc;
  {  goto L8c0e0bd0; }
L8c0e0b94:;
  { R(13)=0x8u; goto L8c0e0bd2; }
L8c0e0b98:;
  { R(13)=0x10u; goto L8c0e0bd2; }
L8c0e0b9c:;
  { R(13)=0x18u; goto L8c0e0bd2; }
L8c0e0bc0:;
  { R(13)=0x20u; goto L8c0e0bd2; }
L8c0e0bc4:;
  { R(13)=0x28u; goto L8c0e0bd2; }
L8c0e0bc8:;
  { R(13)=0x30u; goto L8c0e0bd2; }
L8c0e0bcc:;
  { R(13)=0x38u; goto L8c0e0bd2; }
L8c0e0bd0:;
  R(12)=R(7);
L8c0e0bd2:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0e0c58;
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c0e0c00;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0e0c04;
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0e0c08;
  R(1)=0x80u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0c40;
  R(1)=0x100u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0c44;
  R(1)=0x200u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0c4a;
  R(1)=0x400u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0c50;
  {  goto L8c0e0c56; }
L8c0e0c00:;
  { R(13)|=R(10); goto L8c0e0c58; }
L8c0e0c04:;
  { R(2)=0x2u; goto L8c0e0c52; }
L8c0e0c08:;
  { R(1)=0x3u; goto L8c0e0c4c; }
L8c0e0c40:;
  { R(13)|=R(7); goto L8c0e0c58; }
L8c0e0c44:;
  R(3)=0x5u;
  { R(13)|=R(3); goto L8c0e0c58; }
L8c0e0c4a:;
  R(1)=0x6u;
L8c0e0c4c:;
  { R(13)|=R(1); goto L8c0e0c58; }
L8c0e0c50:;
  R(2)=0x7u;
L8c0e0c52:;
  { R(13)|=R(2); goto L8c0e0c58; }
L8c0e0c56:;
  R(12)=R(7);
L8c0e0c58:;
  R(3)=0x900u;
  c->t=R(14)==R(3);
  if(c->t) goto L8c0e0c7c;
  R(1)=0xb00u;
  c->t=R(14)==R(1);
  if(c->t) goto L8c0e0c7c;
  R(0)=0xd00u;
  c->t=R(14)==R(0);
  if(c->t) goto L8c0e0c7c;
  R(2)=0x500u;
  c->t=R(14)==R(2);
  if(c->t) goto L8c0e0c7c;
  R(1)=0x700u;
  c->t=R(14)==R(1);
  if(c->t) goto L8c0e0c7c;
  c->t=R(5)==R(6);
  if(c->t) goto L8c0e0c7c;
  R(12)=R(7);
L8c0e0c7c:;
  R(3)=0xf00u;
  c->t=R(14)==R(3);
  { uint32_t k=c->t; ST32(R(4)+24,R(11)); if(k) goto L8c0e0ca2; }
  R(1)=0x200u;
  c->t=R(14)==R(1);
  if(c->t) goto L8c0e0ca2;
  R(0)=0x400u;
  c->t=R(14)==R(0);
  if(c->t) goto L8c0e0ca2;
  R(2)=0x1100u;
  c->t=R(14)==R(2);
  if(c->t) goto L8c0e0ca2;
  R(1)=0x600u;
  c->t=R(14)==R(1);
  if(c->t) goto L8c0e0ca2;
  R(2)=0x800u;
  c->t=R(14)==R(2);
  if(!c->t) goto L8c0e0caa;
L8c0e0ca2:;
  R(1)=LD32(R(4)+24);
  R(3)=0x80000000u;
  R(1)|=R(3);
  ST32(R(4)+24,R(1));
L8c0e0caa:;
  R(5)=0xb00u;
  c->t=R(14)==R(5);
  if(c->t) goto L8c0e0cb6;
  R(2)=0x900u;
  c->t=R(14)==R(2);
  if(!c->t) goto L8c0e0cbe;
L8c0e0cb6:;
  R(1)=LD32(R(4)+24);
  R(3)=0x4000000u;
  R(1)|=R(3);
  ST32(R(4)+24,R(1));
L8c0e0cbe:;
  R(2)=0x300u;
  c->t=R(14)==R(2);
  if(c->t) goto L8c0e0cd6;
  R(1)=0x400u;
  c->t=R(14)==R(1);
  if(c->t) goto L8c0e0cd6;
  R(0)=0x1000u;
  c->t=R(14)==R(0);
  if(c->t) goto L8c0e0cd6;
  R(2)=0x1100u;
  c->t=R(14)==R(2);
  if(!c->t) goto L8c0e0cde;
L8c0e0cd6:;
  R(1)=LD32(R(4)+24);
  R(3)=0x40000000u;
  R(1)|=R(3);
  ST32(R(4)+24,R(1));
L8c0e0cde:;
  c->t=R(14)==R(5);
  if(!c->t) goto L8c0e0cea;
  R(2)=LD32(R(4)+24);
  R(3)=0x2000000u;
  R(2)|=R(3);
  ST32(R(4)+24,R(2));
L8c0e0cea:;
  R(1)=0x500u;
  c->t=R(14)==R(1);
  if(c->t) goto L8c0e0d02;
  R(2)=0x600u;
  c->t=R(14)==R(2);
  if(c->t) goto L8c0e0d02;
  R(0)=0x700u;
  c->t=R(14)==R(0);
  if(c->t) goto L8c0e0d02;
  R(2)=0x800u;
  c->t=R(14)==R(2);
  if(!c->t) goto L8c0e0d0a;
L8c0e0d02:;
  R(1)=LD32(R(4)+24);
  R(3)=0x8000u;
  R(1)|=R(3);
  ST32(R(4)+24,R(1));
L8c0e0d0a:;
  R(2)=LD32(R(4)+24);
  R(2)|=R(13);
  { c->pr=0x8c0e0d12u; ST32(R(4)+24,R(2)); f_8c0e0e8c(c); }
  {  goto L8c0e0d60; }
L8c0e0d60:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e0d72(SH4Ctx *c) {
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0e0d78;
  R(4)=R(5);
L8c0e0d78:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e0db2;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e0de0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0e0de4;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0e0e04;
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c0e0de8;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0e0dec;
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0e0df0;
  R(1)=0x80u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0df4;
  R(1)=0x100u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0df8;
  R(1)=0x200u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0dfc;
  R(1)=0x400u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e0e00;
  {  goto L8c0e0e04; }
L8c0e0db2:;
  { R(0)=0x0u; return; }
L8c0e0de0:;
  { R(0)=0x1u; return; }
L8c0e0de4:;
  { R(0)=0x2u; return; }
L8c0e0de8:;
  { R(0)=0x4u; return; }
L8c0e0dec:;
  { R(0)=0x5u; return; }
L8c0e0df0:;
  { R(0)=0x6u; return; }
L8c0e0df4:;
  { R(0)=0x7u; return; }
L8c0e0df8:;
  { R(0)=0x8u; return; }
L8c0e0dfc:;
  { R(0)=0x9u; return; }
L8c0e0e00:;
  { R(0)=0xau; return; }
L8c0e0e04:;
  R(0)=0x3u;
  {  return; }
}
void f_8c0e0e0a(SH4Ctx *c) {
  R(0)=LD32(R(4)+12);
  R(5)=0x80000000u;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0e0e22;
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c0e0e60;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0e0e6e;
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0e0e78;
  {  goto L8c0e0e86; }
L8c0e0e22:;
  R(3)=LD32(R(4)+24);
  c->t=(R(5)&R(3))==0;
  if(c->t) goto L8c0e0e2c;
  { R(0)=0x2u; return; }
L8c0e0e2c:;
  { R(0)=0x1u; return; }
L8c0e0e60:;
  R(3)=LD32(R(4)+24);
  c->t=(R(5)&R(3))==0;
  if(c->t) goto L8c0e0e6a;
  { R(0)=0x4u; return; }
L8c0e0e6a:;
  { R(0)=0x3u; return; }
L8c0e0e6e:;
  R(3)=LD32(R(4)+24);
  c->t=(R(5)&R(3))==0;
  if(c->t) goto L8c0e0e86;
  { R(0)=0x6u; return; }
L8c0e0e78:;
  R(3)=LD32(R(4)+24);
  c->t=(R(5)&R(3))==0;
  if(c->t) goto L8c0e0e82;
  { R(0)=0x8u; return; }
L8c0e0e82:;
  { R(0)=0x7u; return; }
L8c0e0e86:;
  R(0)=0x5u;
  {  return; }
}
void f_8c0e0e8c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0e0ea2;
  { c->pr=0x8c0e0e9eu; R(4)=R(14); f_8c0e107c(c); }
  {  goto L8c0e0eae; }
L8c0e0ea2:;
  R(2)=LD32(R(14)+24);
  R(3)=0x40000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0e0eb2;
  { c->pr=0x8c0e0eaeu; R(4)=R(14); f_8c0e0f54(c); }
L8c0e0eae:;
  { R(4)=R(0); goto L8c0e0ec8; }
L8c0e0eb2:;
  R(1)=LD32(R(14)+24);
  R(2)=0x8000u;
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0e0ec2;
  { c->pr=0x8c0e0ebeu; R(4)=R(14); f_8c0e0fd6(c); }
  {  goto L8c0e0ec6; }
L8c0e0ec2:;
  { c->pr=0x8c0e0ec6u; R(4)=R(14); f_8c0e0ed0(c); }
L8c0e0ec6:;
  R(4)=R(0);
L8c0e0ec8:;
  ST32(R(14)+20,R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e0ed0(SH4Ctx *c) {
  R(5)=LD32(R(4)+16);
  R(6)=LD32(R(4)+12);
  R(2)=LD32(R(4)+24);
  c->macl=R(6)*R(5);
  R(3)=0x80000000u;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(7)=c->macl; if(k) goto L8c0e0f44; }
  c->t=R(6)&1;R(6)>>=1;
  c->t=R(5)&1;R(5)>>=1;
  c->t=R(6)>=R(5);
  { uint32_t k=c->t; R(0)=0x1u; if(k) goto L8c0e0f20; }
  { R(1)=R(6); goto L8c0e0f22; }
L8c0e0f20:;
  R(1)=R(5);
L8c0e0f22:;
  c->t=R(1)>R(0);
  if(!c->t) goto L8c0e0f36;
L8c0e0f26:;
  c->macl=R(6)*R(5);
  c->t=R(6)&1;R(6)>>=1;
  c->t=R(5)&1;R(5)>>=1;
  c->t=R(1)&1;R(1)>>=1;
  R(3)=c->macl;
  c->t=R(1)>R(0);
  R(7)+=R(3);
  if(c->t) goto L8c0e0f26;
L8c0e0f36:;
  c->t=R(6)==R(5);
  if(!c->t) goto L8c0e0f3e;
  { R(7)+=0x4u; goto L8c0e0f44; }
L8c0e0f3e:;
  c->macl=R(6)*R(5);
  R(6)=c->macl;
  R(7)+=R(6);
L8c0e0f44:;
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e0f4e;
  { c->t=R(7)>>31;R(7)<<=1; goto L8c0e0f50; }
L8c0e0f4e:;
  R(7)<<=2;
L8c0e0f50:;
  { R(0)=R(7); return; }
}
void f_8c0e0f54(SH4Ctx *c) {
  R(5)=LD32(R(4)+16);
  R(6)=LD32(R(4)+12);
  R(2)=LD32(R(4)+24);
  c->t=R(6)&1;R(6)>>=1;
  R(3)=0x80000000u;
  c->t=R(5)&1;R(5)>>=1;
  c->macl=R(6)*R(5);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(7)=c->macl; if(k) goto L8c0e0fc0; }
  c->t=R(6)&1;R(6)>>=1;
  c->t=R(5)&1;R(5)>>=1;
  c->t=R(6)>=R(5);
  { uint32_t k=c->t; R(0)=0x1u; if(k) goto L8c0e0f76; }
  { R(4)=R(6); goto L8c0e0f78; }
L8c0e0f76:;
  R(4)=R(5);
L8c0e0f78:;
  c->t=R(4)>R(0);
  if(!c->t) goto L8c0e0f8c;
L8c0e0f7c:;
  c->macl=R(6)*R(5);
  c->t=R(6)&1;R(6)>>=1;
  c->t=R(5)&1;R(5)>>=1;
  c->t=R(4)&1;R(4)>>=1;
  R(3)=c->macl;
  c->t=R(4)>R(0);
  R(7)+=R(3);
  if(c->t) goto L8c0e0f7c;
L8c0e0f8c:;
  c->t=R(6)==R(5);
  if(!c->t) goto L8c0e0f94;
  { R(7)+=0x2u; goto L8c0e0f9a; }
L8c0e0f94:;
  c->macl=R(6)*R(5);
  R(6)=c->macl;
  R(7)+=R(6);
L8c0e0f9a:;
  { R(7)+=0xau; goto L8c0e0fce; }
L8c0e0fc0:;
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0e0fce;
  R(0)=LD32(R(4)+16);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0e0fce;
  R(7)+=0x10u;
L8c0e0fce:;
  R(3)=0x800u;
  R(7)+=R(3);
  { R(0)=R(7); return; }
}
void f_8c0e0fd6(SH4Ctx *c) {
  R(3)=0x80000000u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(4)+16);
  R(6)=LD32(R(4)+12);
  R(2)=LD32(R(4)+24);
  c->macl=R(6)*R(7);
  c->t=(R(2)&R(3))==0;
  R(5)=c->macl;
  { uint32_t k=c->t; R(14)=0x1u; if(k) goto L8c0e1062; }
  c->t=R(6)&1;R(6)>>=1;
  c->t=R(7)&1;R(7)>>=1;
  c->t=R(6)>=R(7);
  if(c->t) goto L8c0e0ff6;
  { R(0)=R(6); goto L8c0e0ff8; }
L8c0e0ff6:;
  R(0)=R(7);
L8c0e0ff8:;
  c->t=R(0)>R(14);
  if(!c->t) goto L8c0e100c;
L8c0e0ffc:;
  c->macl=R(6)*R(7);
  c->t=R(6)&1;R(6)>>=1;
  c->t=R(7)&1;R(7)>>=1;
  c->t=R(0)&1;R(0)>>=1;
  R(3)=c->macl;
  c->t=R(0)>R(14);
  R(5)+=R(3);
  if(c->t) goto L8c0e0ffc;
L8c0e100c:;
  c->t=R(6)==R(7);
  if(!c->t) goto L8c0e1014;
  { R(5)+=0x1u; goto L8c0e101a; }
L8c0e1014:;
  c->macl=R(6)*R(7);
  R(6)=c->macl;
  R(5)+=R(6);
L8c0e101a:;
  R(3)=LD32(R(4)+8);
  R(2)=0x28000000u;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0e1060;
  { R(5)+=0x2bu; goto L8c0e1062; }
L8c0e1060:;
  R(5)+=0xbu;
L8c0e1062:;
  R(3)=LD32(R(4)+8);
  R(2)=0x28000000u;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0e1076;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e1074;
  { R(5)=R(14); goto L8c0e1076; }
L8c0e1074:;
  c->t=R(5)&1;R(5)>>=1;
L8c0e1076:;
  R(0)=R(5);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e107c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(11)=R(4);
  R(13)=LD32(R(11)+12);
  ST32(R(15),R(13));
  c->t=R(13)&1;R(13)>>=1;
  R(14)=LD32(R(11)+16);
  ST32(R(15)+4,R(14));
  c->t=R(14)&1;R(14)>>=1;
  c->macl=R(13)*R(14);
  R(5)=LD32(R(15)+4);
  R(12)=c->macl;
  { c->pr=0x8c0e10a0u; R(4)=LD32(R(15)); f_8c0e0d72(c); }
  R(3)=0x80000000u;
  R(4)=R(0);
  R(2)=LD32(R(11)+24);
  R(5)=R(0);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(5)<<=2; if(k) goto L8c0e10ec; }
  c->t=R(13)&1;R(13)>>=1;
  c->t=R(14)&1;R(14)>>=1;
  c->t=R(13)>=R(14);
  { uint32_t k=c->t; R(6)=0x1u; if(k) goto L8c0e10bc; }
  { R(4)=R(13); goto L8c0e10be; }
L8c0e10bc:;
  R(4)=R(14);
L8c0e10be:;
  c->t=R(4)>R(6);
  if(!c->t) goto L8c0e10d2;
L8c0e10c2:;
  c->macl=R(13)*R(14);
  c->t=R(13)&1;R(13)>>=1;
  c->t=R(14)&1;R(14)>>=1;
  c->t=R(4)&1;R(4)>>=1;
  R(3)=c->macl;
  c->t=R(4)>R(6);
  R(12)+=R(3);
  if(c->t) goto L8c0e10c2;
L8c0e10d2:;
  c->t=R(13)==R(14);
  if(!c->t) goto L8c0e10da;
  { R(12)+=0x2u; goto L8c0e10e0; }
L8c0e10da:;
  c->macl=R(13)*R(14);
  R(13)=c->macl;
  R(12)+=R(13);
L8c0e10e0:;
  R(0)=0x8c0f3c48u;
  R(12)+=0xau;
  R(3)=LD32(R(5)+R(0));
  R(12)+=R(3);
  {  goto L8c0e10f2; }
L8c0e10ec:;
  R(0)=0x8c0f3c2cu;
  R(2)=LD32(R(5)+R(0));
  R(12)+=R(2);
L8c0e10f2:;
  R(0)=R(12);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1140(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0d3f64u;
L8c0e1146:;
  { uint32_t tg=R(14); c->pr=0x8c0e114au;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e1146;
  R(3)=0x8c0dda14u;
  { c->pr=0x8c0e1154u;  f_8c0dda14(c); }
  R(2)=0x8c0dda00u;
  { c->pr=0x8c0e115au;  f_8c0dda00(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e11a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(4);
  R(3)=0xffffff3fu;
  R(14)=R(5);
  R(5)=0x8c2ef58cu;
  R(0)=R(14);
  c->t=(int32_t)R(0)==7;
  ST32(R(15),R(6));
  ST32(R(15)+4,R(7));
  R(2)=LD32(R(13));
  R(2)&=R(3);
  ST32(R(5),R(2));
  R(1)=LD32(R(13)+4);
  ST32(R(5)+4,R(1));
  R(2)=LD32(R(13)+8);
  ST32(R(5)+8,R(2));
  R(1)=LD32(R(13)+12);
  ST32(R(5)+12,R(1));
  { uint32_t k=c->t; R(7)=R(5); if(k) goto L8c0e11f4; }
  R(0)=R(14);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0e11f4;
  R(0)=R(14);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e11f4;
  R(0)=R(14);
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c0e11f4;
  R(0)=R(14);
  c->t=(int32_t)R(0)==13;
  if(c->t) goto L8c0e11f4;
  R(0)=R(14);
  c->t=(int32_t)R(0)==14;
  if(c->t) goto L8c0e11f4;
  {  goto L8c0e1342; }
L8c0e11f4:;
  R(0)=LD32(R(7));
  R(0)&=0x30u;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0e1200;
  {  goto L8c0e133c; }
L8c0e1200:;
  R(0)=0x8c0e12a8u;
  R(6)=0xffu;
  fp_ld(c,4,R(0));
  R(0)=LD32(R(7));
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c0e1212;
  R(0)=R(14);
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0e12c0;
L8c0e1212:;
  R(4)=R(13);
  R(0)=0x10u;
  R(4)+=0x20u;
  R(2)=0x4f000000u;
  fp_ld(c,3,R(0)+R(4));
  c->fpul=R(2);
  fp_arith(c,2,3,4);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0e122a;
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e122a:;
  fp_ftrc(c,3);
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(4));
  R(1)=0x4f000000u;
  fp_arith(c,2,3,4);
  R(3)=c->fpul;
  c->fpul=R(1);
  R(3)&=R(6);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(3)<<=16;
  { uint32_t k=c->t; R(3)<<=8; if(k) goto L8c0e1248; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1248:;
  fp_ftrc(c,3);
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(4));
  R(1)=0x4f000000u;
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  c->fpul=R(1);
  R(2)&=R(6);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)<<=16;
  { uint32_t k=c->t; R(3)|=R(2); if(k) goto L8c0e1266; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1266:;
  fp_ftrc(c,3);
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(1)=0x4f000000u;
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  c->fpul=R(1);
  R(2)&=R(6);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)<<=8;
  { uint32_t k=c->t; R(3)|=R(2); if(k) goto L8c0e1284; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1284:;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(2)&=R(6);
  R(3)|=R(2);
  { ST32(R(7)+20,R(3)); goto L8c0e12c4; }
L8c0e12c0:;
  R(4)=R(13);
  R(4)+=0x10u;
L8c0e12c4:;
  R(0)=0x4u;
  R(2)=0x4f000000u;
  fp_ld(c,3,R(0)+R(4));
  c->fpul=R(2);
  fp_arith(c,2,3,4);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0e12d8;
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e12d8:;
  fp_ftrc(c,3);
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(1)=0x4f000000u;
  fp_arith(c,2,3,4);
  R(3)=c->fpul;
  c->fpul=R(1);
  R(3)&=R(6);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  { uint32_t k=c->t; R(3)<<=16; if(k) goto L8c0e12f4; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e12f4:;
  fp_ftrc(c,3);
  fp_ld(c,3,R(4));
  R(1)=0x4f000000u;
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  c->fpul=R(1);
  R(2)&=R(6);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)<<=8;
  { uint32_t k=c->t; R(3)|=R(2); if(k) goto L8c0e1310; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1310:;
  fp_ftrc(c,3);
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(1)=0x4f000000u;
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  c->fpul=R(1);
  R(2)&=R(6);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)<<=16;
  R(2)<<=8;
  { uint32_t k=c->t; R(3)|=R(2); if(k) goto L8c0e1330; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1330:;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(2)&=R(6);
  R(3)|=R(2);
  { ST32(R(5)+16,R(3)); goto L8c0e1342; }
L8c0e133c:;
  R(4)=0xffffffffu;
  ST32(R(7)+16,R(4));
  ST32(R(5)+20,R(4));
L8c0e1342:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==15;
  if(c->t) goto L8c0e134e;
  R(0)=R(14);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c0e1356;
L8c0e134e:;
  R(3)=LD32(R(13)+16);
  ST32(R(5)+16,R(3));
  R(2)=LD32(R(13)+20);
  ST32(R(5)+20,R(2));
L8c0e1356:;
  R(0)=0xcu;
  R(12)=0x8c2ef5a4u;
  R(11)=0x1u;
  R(3)=LD32(R(12));
  R(14)<<=2;
  R(3)|=R(11);
  ST32(R(12),R(3));
  R(2)=LD32(R(15));
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8c0f4434u;
  R(6)=LD32(R(15)+4);
  R(5)=LD32(R(15));
  R(3)=LD32(R(14)+R(0));
  R(7)=LD32(R(15)+28);
  { uint32_t tg=R(3); c->pr=0x8c0e137au; R(4)=R(13); sh4_call(c,tg); }
  R(4)=0x0u;
  R(6)=R(0);
  R(5)=0x8u;
L8c0e1380:;
  R(3)=R(12);
  R(3)+=0x8u;
  R(3)+=R(4);
  R(2)=LD32(R(3));
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  R(2)|=R(11);
  ST32(R(3),R(2));
  if(!c->t) goto L8c0e1380;
  R(2)=LD32(R(12));
  R(3)=0xfffffffeu;
  R(0)=R(6);
  R(2)&=R(3);
  ST32(R(12),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e13e0(SH4Ctx *c) {
  R(0)=0x90u;
  R(6)=0x8c2ef58cu;
  R(3)=LD32(R(4)+R(0));
  R(0)+=0x4u;
  R(5)=0xffu;
  ST32(R(6),R(3));
  R(2)=LD32(R(4)+R(0));
  R(0)+=0x4u;
  ST32(R(6)+4,R(2));
  R(3)=LD32(R(4)+R(0));
  R(0)+=0x4u;
  ST32(R(6)+8,R(3));
  R(2)=LD32(R(4)+R(0));
  R(0)=0x8c0e1510u;
  ST32(R(6)+12,R(2));
  fp_ld(c,4,R(0));
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(4));
  R(2)=0x4f000000u;
  fp_arith(c,2,3,4);
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0e1414;
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1414:;
  fp_ftrc(c,3);
  R(0)=0x74u;
  fp_ld(c,3,R(0)+R(4));
  R(1)=0x4f000000u;
  fp_arith(c,2,3,4);
  R(3)=c->fpul;
  c->fpul=R(1);
  R(3)&=R(5);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(3)<<=16;
  { uint32_t k=c->t; R(3)<<=8; if(k) goto L8c0e1432; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1432:;
  fp_ftrc(c,3);
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(4));
  R(1)=0x4f000000u;
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  c->fpul=R(1);
  R(2)&=R(5);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)<<=16;
  { uint32_t k=c->t; R(3)|=R(2); if(k) goto L8c0e1450; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1450:;
  fp_ftrc(c,3);
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(4));
  R(1)=0x4f000000u;
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  c->fpul=R(1);
  R(2)&=R(5);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)<<=8;
  { uint32_t k=c->t; R(3)|=R(2); if(k) goto L8c0e146e; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e146e:;
  fp_ftrc(c,3);
  R(0)=0x80u;
  R(2)=c->fpul;
  R(2)&=R(5);
  R(3)|=R(2);
  R(2)=0x4f000000u;
  ST32(R(6)+16,R(3));
  fp_ld(c,3,R(0)+R(4));
  c->fpul=R(2);
  fp_arith(c,2,3,4);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0e148c;
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e148c:;
  fp_ftrc(c,3);
  R(0)=0x84u;
  R(1)=0x4f000000u;
  fp_ld(c,3,R(0)+R(4));
  R(3)=c->fpul;
  fp_arith(c,2,3,4);
  c->fpul=R(1);
  R(3)&=R(5);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(3)<<=16;
  { uint32_t k=c->t; R(3)<<=8; if(k) goto L8c0e14aa; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e14aa:;
  fp_ftrc(c,3);
  R(0)=0x88u;
  R(1)=0x4f000000u;
  fp_ld(c,3,R(0)+R(4));
  R(2)=c->fpul;
  fp_arith(c,2,3,4);
  c->fpul=R(1);
  R(2)&=R(5);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)<<=16;
  { uint32_t k=c->t; R(3)|=R(2); if(k) goto L8c0e14c8; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e14c8:;
  fp_ftrc(c,3);
  R(0)=0x8cu;
  R(1)=0x4f000000u;
  fp_ld(c,3,R(0)+R(4));
  R(2)=c->fpul;
  fp_arith(c,2,3,4);
  c->fpul=R(1);
  R(2)&=R(5);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)<<=8;
  { uint32_t k=c->t; R(3)|=R(2); if(k) goto L8c0e14e6; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e14e6:;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(2)&=R(5);
  R(3)|=R(2);
  ST32(R(6)+20,R(3));
  { R(0)=0x0u; return; }
}
void f_8c0e1520(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c2ef5a4u;
  R(12)=R(4);
  R(13)=0x1u;
  R(4)=0x8c2ef58cu;
  R(0)=0xcu;
  ST32(R(15),R(5));
  R(3)=LD32(R(14));
  R(3)|=R(13);
  ST32(R(14),R(3));
  R(2)=LD32(R(12));
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(14));
  R(3)=LD32(R(15));
  R(0)=0x8c0f4434u;
  R(3)<<=2;
  R(6)=LD32(R(12)+4);
  R(7)=LD32(R(12)+8);
  R(3)=LD32(R(3)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c0e1554u; R(5)=LD32(R(12)); sh4_call(c,tg); }
  R(4)=0x0u;
  R(6)=R(0);
  R(5)=0x8u;
L8c0e155a:;
  R(3)=R(14);
  R(3)+=0x8u;
  R(3)+=R(4);
  R(2)=LD32(R(3));
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  R(2)|=R(13);
  ST32(R(3),R(2));
  if(!c->t) goto L8c0e155a;
  R(2)=LD32(R(14));
  R(3)=0xfffffffeu;
  R(0)=R(6);
  R(2)&=R(3);
  ST32(R(14),R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1582(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(1)=R(15);
  R(1)+=0x4u;
  R(3)=R(1);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  ST32(R(1)+4,R(6));
  R(6)=0x54u;
  ST32(R(1)+8,R(7));
  R(3)=LD32(R(4));
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=0x0u;
  ST32(R(15)+28,R(2));
  R(5)=LD32(R(15));
L8c0e15aa:;
  R(2)=LD32(R(5));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(4);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(5));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  {uint32_t v=LD32(R(5));R(5)+=4;R(2)=v;}
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+24);
  R(4)+=0x1cu;
  c->t=R(4)>=R(6);
  ST32(R(3)+20,R(1));
  if(!c->t) goto L8c0e15aa;
  R(2)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e15f2u; R(4)+=0x10u; f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e1620(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(14)=R(15);
  R(14)+=0x4u;
  R(3)=R(14);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  R(0)=0x8c0e1724u;
  ST32(R(14)+4,R(6));
  R(5)=0x0u;
  ST32(R(14)+8,R(7));
  R(14)=0x54u;
  R(3)=LD32(R(4));
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=0xffu;
  ST32(R(15)+28,R(2));
  R(6)=LD32(R(15));
  fp_ld(c,4,R(0));
L8c0e1650:;
  R(2)=LD32(R(6));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(5);
  R(0)=0x8u;
  R(1)=0x4f000000u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(6));
  R(3)+=0x20u;
  R(3)+=R(5);
  c->fpul=R(1);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(6));
  R(3)=R(15);
  R(3)+=0x20u;
  c->fr[2]=c->fpul;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x10u;
  {uint32_t v=LD32(R(6));R(6)+=4;R(7)=v;}
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,2,3,4);
  fp_cmp(c,1,2,3);
  { uint32_t k=c->t; R(3)+=R(5); if(k) goto L8c0e169a; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e169a:;
  R(0)=0x14u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1728u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)&=R(4);
  R(2)<<=16;
  { uint32_t k=c->t; R(2)<<=8; if(k) goto L8c0e16b6; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e16b6:;
  R(0)=0x18u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1728u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=16;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e16d2; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e16d2:;
  R(0)=0x1cu;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1728u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=8;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e16ee; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e16ee:;
  fp_ftrc(c,3);
  R(5)+=0x1cu;
  c->t=R(5)>=R(14);
  R(1)=c->fpul;
  R(1)&=R(4);
  R(2)|=R(1);
  ST32(R(3)+20,R(2));
  if(!c->t) goto L8c0e1650;
  R(2)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e1706u; R(4)+=0x10u; f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1740(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff88u;
  R(14)=R(15);
  R(14)+=0x8u;
  R(3)=R(14);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  R(5)=0x0u;
  ST32(R(14)+4,R(6));
  R(6)=R(15);
  ST32(R(14)+8,R(7));
  R(14)=0x54u;
  R(3)=LD32(R(4));
  R(6)+=0x4u;
  R(7)=0x8c2ef59cu;
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+24,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(4)+12);
  ST32(R(15)+32,R(2));
  R(4)=LD32(R(15));
L8c0e1770:;
  R(2)=LD32(R(4));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x24u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(5);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(3)+=0x24u;
  R(3)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  R(1)=0x18u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(4));
  R(3)=R(15);
  R(3)+=0x24u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(0)=(int32_t)(int8_t)LD8(R(7)+3);
  ST8(R(6)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(7)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(7)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+1,R(0));
  R(0)=R(1);
  R(3)=(int32_t)(int8_t)LD8(R(7));
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(2));
  R(2)=R(15);
  R(2)+=0x24u;
  fp_float(c,3);
  R(2)+=R(5);
  R(5)+=0x1cu;
  c->t=R(5)>=R(14);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(6),R(3));
  R(3)=LD32(R(6));
  ST32(R(2)+20,R(3));
  if(!c->t) goto L8c0e1770;
  R(3)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e17fau; R(4)+=0x14u; f_8c0ef300(c); }
  R(15)+=0x78u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1802(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(1)=R(15);
  R(1)+=0x4u;
  R(3)=R(1);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  ST32(R(1)+4,R(6));
  R(6)=0x54u;
  ST32(R(1)+8,R(7));
  R(3)=LD32(R(4));
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=0x0u;
  ST32(R(15)+28,R(2));
  R(5)=LD32(R(15));
L8c0e182a:;
  R(2)=LD32(R(5));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(4);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(5));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x10u;
  R(2)=LD32(R(5));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0xcu;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(0)=0x14u;
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x10u;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+24);
  ST32(R(3)+20,R(1));
  R(3)=R(15);
  {uint32_t v=LD32(R(5));R(5)+=4;R(2)=v;}
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+28);
  R(4)+=0x1cu;
  c->t=R(4)>=R(6);
  ST32(R(3)+24,R(1));
  if(!c->t) goto L8c0e182a;
  R(2)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e189eu; R(4)+=0x10u; f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e18a6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(1)=R(15);
  R(1)+=0x4u;
  R(3)=R(1);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  ST32(R(1)+4,R(6));
  R(6)=0x54u;
  ST32(R(1)+8,R(7));
  R(3)=LD32(R(4));
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=0x0u;
  ST32(R(15)+28,R(2));
  R(5)=LD32(R(15));
L8c0e18ce:;
  R(2)=LD32(R(5));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(4);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(5));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+16);
  ST32(R(3)+12,R(1));
  R(3)=R(15);
  R(3)+=0x20u;
  R(3)+=R(4);
  R(2)=LD32(R(5));
  R(1)=LD32(R(2)+24);
  ST32(R(3)+20,R(1));
  R(3)=R(15);
  {uint32_t v=LD32(R(5));R(5)+=4;R(2)=v;}
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+28);
  R(4)+=0x1cu;
  c->t=R(4)>=R(6);
  ST32(R(3)+24,R(1));
  if(!c->t) goto L8c0e18ce;
  R(2)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e192eu; R(4)+=0x10u; f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e1960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(14)=R(15);
  R(14)+=0x4u;
  R(3)=R(14);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  R(0)=0x8c0e1ae4u;
  ST32(R(14)+4,R(6));
  R(5)=0x0u;
  ST32(R(14)+8,R(7));
  R(14)=0x54u;
  R(3)=LD32(R(4));
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=0xffu;
  ST32(R(15)+28,R(2));
  R(6)=LD32(R(15));
  fp_ld(c,4,R(0));
  { f_8c0e1990(c); return; }
}
void f_8c0e1990(SH4Ctx *c) {
L8c0e1990:;
  R(2)=LD32(R(6));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(5);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(6));
  R(3)+=0x20u;
  R(3)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(6));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x10u;
  R(2)=LD32(R(6));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0xcu;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(6));
  R(0)=0x14u;
  R(3)+=0x20u;
  R(1)=0x4f000000u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x10u;
  R(3)+=R(5);
  c->fpul=R(1);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x20u;
  R(7)=LD32(R(6));
  R(3)=R(15);
  c->fr[2]=c->fpul;
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,2,3,4);
  fp_cmp(c,1,2,3);
  { uint32_t k=c->t; R(3)+=R(5); if(k) goto L8c0e19fa; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e19fa:;
  R(0)=0x24u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1ae8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)&=R(4);
  R(2)<<=16;
  { uint32_t k=c->t; R(2)<<=8; if(k) goto L8c0e1a16; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1a16:;
  R(0)=0x28u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1ae8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=16;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e1a32; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1a32:;
  R(0)=0x2cu;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1ae8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=8;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e1a4e; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1a4e:;
  fp_ftrc(c,3);
  R(0)=0x30u;
  R(1)=c->fpul;
  R(1)&=R(4);
  R(2)|=R(1);
  R(1)=0x4f000000u;
  ST32(R(3)+20,R(2));
  R(3)=R(15);
  {uint32_t v=LD32(R(6));R(6)+=4;R(7)=v;}
  R(3)+=0x20u;
  c->fpul=R(1);
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,2,3,4);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  { uint32_t k=c->t; R(3)+=R(5); if(k) goto L8c0e1a74; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1a74:;
  R(0)=0x34u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1ae8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)&=R(4);
  R(2)<<=16;
  { uint32_t k=c->t; R(2)<<=8; if(k) goto L8c0e1a90; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1a90:;
  R(0)=0x38u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1ae8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=16;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e1aac; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1aac:;
  R(0)=0x3cu;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1ae8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=8;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e1ac8; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1ac8:;
  fp_ftrc(c,3);
  R(5)+=0x1cu;
  R(1)=c->fpul;
  R(1)&=R(4);
  R(2)|=R(1);
  ST32(R(3)+24,R(2));
  {  goto L8c0e1b00; }
L8c0e1b00:;
  c->t=R(5)>=R(14);
  if(c->t) goto L8c0e1b08;
  {  goto L8c0e1990; }
L8c0e1b08:;
  R(2)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e1b10u; R(4)+=0x10u; f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1b00(SH4Ctx *c) {
  c->t=R(5)>=R(14);
  if(c->t) goto L8c0e1b08;
  {  { f_8c0e1990(c); return; } }
L8c0e1b08:;
  R(2)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e1b10u; R(4)+=0x10u; f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1b40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(14)=R(15);
  R(14)+=0x4u;
  R(3)=R(14);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  R(0)=0x8c0e1cc4u;
  ST32(R(14)+4,R(6));
  R(5)=0x0u;
  ST32(R(14)+8,R(7));
  R(14)=0x54u;
  R(3)=LD32(R(4));
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=0xffu;
  ST32(R(15)+28,R(2));
  R(6)=LD32(R(15));
  fp_ld(c,4,R(0));
L8c0e1b70:;
  R(2)=LD32(R(6));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(5);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(6));
  R(3)+=0x20u;
  R(3)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(6));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(6));
  R(3)+=0x20u;
  R(3)+=R(5);
  R(1)=LD32(R(2)+16);
  ST32(R(3)+12,R(1));
  R(3)=R(15);
  R(7)=LD32(R(6));
  R(3)+=0x20u;
  R(0)=0x20u;
  R(1)=0x4f000000u;
  fp_ld(c,3,R(0)+R(7));
  c->fpul=R(1);
  fp_arith(c,2,3,4);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  { uint32_t k=c->t; R(3)+=R(5); if(k) goto L8c0e1bc6; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1bc6:;
  R(0)=0x24u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1cc8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)&=R(4);
  R(2)<<=16;
  { uint32_t k=c->t; R(2)<<=8; if(k) goto L8c0e1be2; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1be2:;
  R(0)=0x28u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1cc8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=16;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e1bfe; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1bfe:;
  R(0)=0x2cu;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1cc8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=8;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e1c1a; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1c1a:;
  fp_ftrc(c,3);
  R(0)=0x30u;
  R(1)=c->fpul;
  R(1)&=R(4);
  R(2)|=R(1);
  R(1)=0x4f000000u;
  ST32(R(3)+20,R(2));
  R(3)=R(15);
  {uint32_t v=LD32(R(6));R(6)+=4;R(7)=v;}
  R(3)+=0x20u;
  c->fpul=R(1);
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,2,3,4);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  { uint32_t k=c->t; R(3)+=R(5); if(k) goto L8c0e1c40; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1c40:;
  R(0)=0x34u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1cc8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(2)=c->fpul;
  fp_cmp(c,1,2,3);
  R(2)&=R(4);
  R(2)<<=16;
  { uint32_t k=c->t; R(2)<<=8; if(k) goto L8c0e1c5c; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1c5c:;
  R(0)=0x38u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1cc8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=16;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e1c78; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1c78:;
  R(0)=0x3cu;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8c0e1cc8u;
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_cmp(c,1,2,3);
  R(1)&=R(4);
  R(1)<<=8;
  { uint32_t k=c->t; R(2)|=R(1); if(k) goto L8c0e1c94; }
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0e1c94:;
  fp_ftrc(c,3);
  R(5)+=0x1cu;
  c->t=R(5)>=R(14);
  R(1)=c->fpul;
  R(1)&=R(4);
  R(2)|=R(1);
  ST32(R(3)+24,R(2));
  if(c->t) goto L8c0e1ca8;
  {  goto L8c0e1b70; }
L8c0e1ca8:;
  R(4)=R(15);
  { R(4)+=0x10u; goto L8c0e1ce0; }
L8c0e1ce0:;
  R(2)=0x8c0ef300u;
  { c->pr=0x8c0e1ce6u;  f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1ce0(SH4Ctx *c) {
  R(2)=0x8c0ef300u;
  { c->pr=0x8c0e1ce6u;  f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1cee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff84u;
  R(14)=R(15);
  R(14)+=0xcu;
  R(3)=R(14);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  R(12)=0x54u;
  ST32(R(14)+4,R(6));
  R(6)=R(15);
  ST32(R(14)+8,R(7));
  R(7)=R(15);
  R(3)=LD32(R(4));
  R(6)+=0x4u;
  R(14)=0x8c2ef59cu;
  R(7)+=0x8u;
  ST32(R(15)+24,R(3));
  R(5)=0x0u;
  R(2)=LD32(R(4)+4);
  R(13)=R(14);
  R(13)+=0x4u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+32,R(3));
  R(2)=LD32(R(4)+12);
  ST32(R(15)+36,R(2));
  R(4)=LD32(R(15));
L8c0e1d2a:;
  R(2)=LD32(R(4));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(5);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(3)+=0x28u;
  R(3)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(4));
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x10u;
  R(2)=LD32(R(4));
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0xcu;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(0)=0x14u;
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x10u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(1)=0x18u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  ST8(R(7)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(7)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(7)+1,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  R(0)=R(1);
  R(2)=LD32(R(4));
  R(1)=0x1cu;
  fp_float(c,3);
  fp_ld(c,2,R(0)+R(2));
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(7),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(13)+3);
  ST8(R(6)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+1,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(0)=R(1);
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(2));
  R(2)=R(15);
  R(2)+=0x28u;
  fp_float(c,3);
  R(2)+=R(5);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(6),R(3));
  R(3)=LD32(R(7));
  ST32(R(2)+20,R(3));
  R(2)=R(15);
  R(2)+=0x28u;
  R(3)=LD32(R(6));
  R(2)+=R(5);
  R(5)+=0x1cu;
  ST32(R(2)+24,R(3));
  c->t=R(5)>=R(12);
  if(!c->t) goto L8c0e1d2a;
  R(3)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e1e22u; R(4)+=0x18u; f_8c0ef300(c); }
  R(15)+=0x7cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1e2e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff84u;
  R(14)=R(15);
  R(14)+=0xcu;
  R(3)=R(14);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  R(12)=0x54u;
  ST32(R(14)+4,R(6));
  R(6)=R(15);
  ST32(R(14)+8,R(7));
  R(7)=R(15);
  R(3)=LD32(R(4));
  R(6)+=0x4u;
  R(14)=0x8c2ef59cu;
  R(7)+=0x8u;
  ST32(R(15)+24,R(3));
  R(5)=0x0u;
  R(2)=LD32(R(4)+4);
  R(13)=R(14);
  R(13)+=0x4u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+32,R(3));
  R(2)=LD32(R(4)+12);
  ST32(R(15)+36,R(2));
  R(4)=LD32(R(15));
L8c0e1e6a:;
  R(2)=LD32(R(4));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(5);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(3)+=0x28u;
  R(3)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(4));
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(3)+=0x28u;
  R(3)+=R(5);
  R(1)=LD32(R(2)+16);
  ST32(R(3)+12,R(1));
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  ST8(R(7)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  R(1)=0x18u;
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(7)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(7)+1,R(0));
  R(0)=R(1);
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(2)=LD32(R(4));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(2));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(7),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(13)+3);
  ST8(R(6)+3,R(0));
  R(1)=0x1cu;
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+1,R(0));
  R(0)=R(1);
  R(3)=(int32_t)(int8_t)LD8(R(13));
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(2));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  R(2)=R(15);
  ST8(R(6),R(3));
  R(3)=LD32(R(7));
  R(2)+=0x28u;
  R(2)+=R(5);
  ST32(R(2)+20,R(3));
  R(2)=R(15);
  R(2)+=0x28u;
  R(3)=LD32(R(6));
  R(2)+=R(5);
  R(5)+=0x1cu;
  ST32(R(2)+24,R(3));
  c->t=R(5)>=R(12);
  if(!c->t) goto L8c0e1e6a;
  R(3)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e1f4eu; R(4)+=0x18u; f_8c0ef300(c); }
  R(15)+=0x7cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e1f80(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(1)=R(15);
  R(1)+=0x4u;
  R(3)=R(1);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  ST32(R(1)+4,R(6));
  R(6)=0x54u;
  ST32(R(1)+8,R(7));
  R(3)=LD32(R(4));
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=0x0u;
  ST32(R(15)+28,R(2));
  R(5)=LD32(R(15));
L8c0e1fa8:;
  R(2)=LD32(R(5));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(4);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(5));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  {uint32_t v=LD32(R(5));R(5)+=4;R(2)=v;}
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+16);
  R(4)+=0x1cu;
  c->t=R(4)>=R(6);
  ST32(R(3)+20,R(1));
  if(!c->t) goto L8c0e1fa8;
  R(2)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e1ff0u; R(4)+=0x10u; f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e1ff8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff88u;
  R(14)=R(15);
  R(14)+=0x8u;
  R(3)=R(14);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  R(5)=0x0u;
  ST32(R(14)+4,R(6));
  R(6)=R(15);
  ST32(R(14)+8,R(7));
  R(14)=0x54u;
  R(3)=LD32(R(4));
  R(6)+=0x4u;
  R(7)=0x8c2ef59cu;
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+24,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(4)+12);
  ST32(R(15)+32,R(2));
  R(4)=LD32(R(15));
L8c0e2028:;
  R(2)=LD32(R(4));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x24u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(5);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(3)+=0x24u;
  R(3)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  R(1)=0x10u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(4));
  R(3)=R(15);
  R(3)+=0x24u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(0)=(int32_t)(int8_t)LD8(R(7)+3);
  ST8(R(6)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(7)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(7)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+1,R(0));
  R(0)=R(1);
  R(3)=(int32_t)(int8_t)LD8(R(7));
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(2));
  R(2)=R(15);
  R(2)+=0x24u;
  fp_float(c,3);
  R(2)+=R(5);
  R(5)+=0x1cu;
  c->t=R(5)>=R(14);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(6),R(3));
  R(3)=LD32(R(6));
  ST32(R(2)+20,R(3));
  if(!c->t) goto L8c0e2028;
  R(3)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e20b2u; R(4)+=0x14u; f_8c0ef300(c); }
  R(15)+=0x78u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e20ba(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(1)=R(15);
  R(1)+=0x4u;
  R(3)=R(1);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  ST32(R(1)+4,R(6));
  R(6)=0x54u;
  ST32(R(1)+8,R(7));
  R(3)=LD32(R(4));
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=0x0u;
  ST32(R(15)+28,R(2));
  R(5)=LD32(R(15));
L8c0e20e2:;
  R(2)=LD32(R(5));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(4);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(5));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x10u;
  R(2)=LD32(R(5));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0xcu;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(0)=0x14u;
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x10u;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+24);
  ST32(R(3)+20,R(1));
  R(3)=R(15);
  {uint32_t v=LD32(R(5));R(5)+=4;R(2)=v;}
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+28);
  R(4)+=0x1cu;
  c->t=R(4)>=R(6);
  ST32(R(3)+24,R(1));
  if(!c->t) goto L8c0e20e2;
  R(2)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e2156u; R(4)+=0x10u; f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e215e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(1)=R(15);
  R(1)+=0x4u;
  R(3)=R(1);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  ST32(R(1)+4,R(6));
  R(6)=0x54u;
  ST32(R(1)+8,R(7));
  R(3)=LD32(R(4));
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=0x0u;
  ST32(R(15)+28,R(2));
  R(5)=LD32(R(15));
L8c0e2186:;
  R(2)=LD32(R(5));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(4);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(5));
  R(3)=R(15);
  R(3)+=0x20u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+16);
  ST32(R(3)+12,R(1));
  R(3)=R(15);
  R(3)+=0x20u;
  R(3)+=R(4);
  R(2)=LD32(R(5));
  R(1)=LD32(R(2)+24);
  ST32(R(3)+20,R(1));
  R(3)=R(15);
  {uint32_t v=LD32(R(5));R(5)+=4;R(2)=v;}
  R(3)+=0x20u;
  R(3)+=R(4);
  R(1)=LD32(R(2)+28);
  R(4)+=0x1cu;
  c->t=R(4)>=R(6);
  ST32(R(3)+24,R(1));
  if(!c->t) goto L8c0e2186;
  R(2)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e21e6u; R(4)+=0x10u; f_8c0ef300(c); }
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e2220(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff84u;
  R(14)=R(15);
  R(14)+=0xcu;
  R(3)=R(14);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  R(12)=0x54u;
  ST32(R(14)+4,R(6));
  R(6)=R(15);
  ST32(R(14)+8,R(7));
  R(7)=R(15);
  R(3)=LD32(R(4));
  R(6)+=0x4u;
  R(14)=0x8c2ef59cu;
  R(7)+=0x8u;
  ST32(R(15)+24,R(3));
  R(5)=0x0u;
  R(2)=LD32(R(4)+4);
  R(13)=R(14);
  R(13)+=0x4u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+32,R(3));
  R(2)=LD32(R(4)+12);
  ST32(R(15)+36,R(2));
  R(4)=LD32(R(15));
L8c0e225c:;
  R(2)=LD32(R(4));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(5);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(3)+=0x28u;
  R(3)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(4));
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x10u;
  R(2)=LD32(R(4));
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0xcu;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(0)=0x14u;
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x10u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(1)=0x18u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  ST8(R(7)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(7)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(7)+1,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  R(0)=R(1);
  R(2)=LD32(R(4));
  R(1)=0x1cu;
  fp_float(c,3);
  fp_ld(c,2,R(0)+R(2));
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(7),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(13)+3);
  ST8(R(6)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+1,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(0)=R(1);
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(2));
  R(2)=R(15);
  R(2)+=0x28u;
  fp_float(c,3);
  R(2)+=R(5);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(6),R(3));
  R(3)=LD32(R(7));
  ST32(R(2)+20,R(3));
  R(2)=R(15);
  R(2)+=0x28u;
  R(3)=LD32(R(6));
  R(2)+=R(5);
  R(5)+=0x1cu;
  ST32(R(2)+24,R(3));
  c->t=R(5)>=R(12);
  if(!c->t) goto L8c0e225c;
  R(3)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e2354u; R(4)+=0x18u; f_8c0ef300(c); }
  R(15)+=0x7cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2360(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff84u;
  R(14)=R(15);
  R(14)+=0xcu;
  R(3)=R(14);
  ST32(R(15),R(3));
  ST32(R(3),R(5));
  R(12)=0x54u;
  ST32(R(14)+4,R(6));
  R(6)=R(15);
  ST32(R(14)+8,R(7));
  R(7)=R(15);
  R(3)=LD32(R(4));
  R(6)+=0x4u;
  R(14)=0x8c2ef59cu;
  R(7)+=0x8u;
  ST32(R(15)+24,R(3));
  R(5)=0x0u;
  R(2)=LD32(R(4)+4);
  R(13)=R(14);
  R(13)+=0x4u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+32,R(3));
  R(2)=LD32(R(4)+12);
  ST32(R(15)+36,R(2));
  R(4)=LD32(R(15));
L8c0e239c:;
  R(2)=LD32(R(4));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(3)+=R(5);
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(3)+=0x28u;
  R(3)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(4));
  R(3)=R(15);
  R(3)+=0x28u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  R(3)+=R(5);
  fp_st(c,3,R(0)+R(3));
  R(3)=R(15);
  R(2)=LD32(R(4));
  R(3)+=0x28u;
  R(3)+=R(5);
  R(1)=LD32(R(2)+16);
  ST32(R(3)+12,R(1));
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  ST8(R(7)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  R(1)=0x18u;
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(7)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(7)+1,R(0));
  R(0)=R(1);
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(2)=LD32(R(4));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(2));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(7),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(13)+3);
  ST8(R(6)+3,R(0));
  R(1)=0x1cu;
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  R(3)=R(0)&0xFF;
  R(0)=LD32(R(4));
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(1));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  ST8(R(6)+1,R(0));
  R(0)=R(1);
  R(3)=(int32_t)(int8_t)LD8(R(13));
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_ld(c,2,R(0)+R(2));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  R(2)=R(15);
  ST8(R(6),R(3));
  R(3)=LD32(R(7));
  R(2)+=0x28u;
  R(2)+=R(5);
  ST32(R(2)+20,R(3));
  R(2)=R(15);
  R(2)+=0x28u;
  R(3)=LD32(R(6));
  R(2)+=R(5);
  R(5)+=0x1cu;
  ST32(R(2)+24,R(3));
  c->t=R(5)>=R(12);
  if(!c->t) goto L8c0e239c;
  R(3)=0x8c0ef300u;
  R(4)=R(15);
  { c->pr=0x8c0e2480u; R(4)+=0x18u; f_8c0ef300(c); }
  R(15)+=0x7cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e24c0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff90u;
  R(0)=R(15);
  R(1)=R(0);
  ST32(R(1),R(5));
  ST32(R(0)+4,R(6));
  ST32(R(0)+8,R(7));
  R(0)=0x4u;
  R(3)=LD32(R(4));
  R(6)=0x8c2ef58cu;
  ST32(R(15)+12,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(4)+12);
  R(4)=R(6);
  R(4)+=0x10u;
  ST32(R(15)+24,R(2));
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(4));
  R(5)=R(6);
  R(5)+=0x14u;
  ST32(R(15)+48,R(3));
  R(0)=0x10u;
  R(3)=LD32(R(5));
  ST32(R(15)+52,R(3));
  R(2)=LD32(R(1));
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x3cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4cu;
  R(3)=LD32(R(4));
  ST32(R(15)+R(0),R(3));
  R(0)=0x50u;
  R(2)=LD32(R(5));
  ST32(R(15)+R(0),R(2));
  R(0)=0x1cu;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x54u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(1));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  R(3)=LD32(R(4));
  R(4)=R(15);
  ST32(R(15)+R(0),R(3));
  R(0)=0x6cu;
  R(2)=LD32(R(5));
  R(3)=0x8c0ef300u;
  ST32(R(15)+R(0),R(2));
  { c->pr=0x8c0e256au; R(4)+=0xcu; f_8c0ef300(c); }
  R(15)+=0x70u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e2572(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff90u;
  R(0)=R(15);
  R(1)=R(0);
  ST32(R(1),R(5));
  ST32(R(0)+4,R(6));
  ST32(R(0)+8,R(7));
  R(0)=0x4u;
  R(3)=LD32(R(4));
  R(6)=0x8c2ef58cu;
  ST32(R(15)+12,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(4)+12);
  ST32(R(15)+24,R(2));
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(1));
  R(2)=LD32(R(3)+52);
  ST32(R(15)+40,R(2));
  R(4)=R(6);
  R(4)+=0x10u;
  R(3)=LD32(R(4));
  R(5)=R(6);
  R(5)+=0x14u;
  ST32(R(15)+48,R(3));
  R(0)=0x10u;
  R(3)=LD32(R(5));
  ST32(R(15)+52,R(3));
  R(2)=LD32(R(1));
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x3cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x44u;
  R(3)=LD32(R(1));
  R(2)=LD32(R(3)+56);
  ST32(R(15)+R(0),R(2));
  R(0)=0x4cu;
  R(3)=LD32(R(4));
  ST32(R(15)+R(0),R(3));
  R(0)=0x50u;
  R(2)=LD32(R(5));
  ST32(R(15)+R(0),R(2));
  R(0)=0x1cu;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x54u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  R(3)=LD32(R(1));
  R(2)=LD32(R(3)+60);
  ST32(R(15)+R(0),R(2));
  R(0)=0x68u;
  R(3)=LD32(R(4));
  R(4)=R(15);
  ST32(R(15)+R(0),R(3));
  R(0)=0x6cu;
  R(2)=LD32(R(5));
  R(3)=0x8c0ef300u;
  ST32(R(15)+R(0),R(2));
  { c->pr=0x8c0e2632u; R(4)+=0xcu; f_8c0ef300(c); }
  R(15)+=0x70u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e2660(SH4Ctx *c) {
  R(5)=0xffu;
  c->t=(int32_t)R(4)>=0;
  R(6)=c->t;
  c->t=(int32_t)R(4)>(int32_t)R(5);
  { uint32_t k=c->t; R(7)=0x4u; if(k) goto L8c0e266e; }
  R(5)=R(4);
L8c0e266e:;
  R(4)=0x8c2ef5a4u;
  R(2)=LD32(R(4));
  R(2)|=R(7);
  ST32(R(4),R(2));
  ST32(R(4)+24,R(6));
  { ST32(R(4)+28,R(5)); goto L8c0e2692; }
L8c0e2692:;
  R(3)=LD32(R(4)+4);
  R(3)|=R(7);
  ST32(R(4)+4,R(3));
  R(2)=LD32(R(4));
  R(3)=0xfffffffbu;
  R(2)&=R(3);
  ST32(R(4),R(2));
  { R(0)=0x0u; return; }
}
void f_8c0e26e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c2ef5a4u;
  R(12)=R(4);
  R(12)<<=2;
  ST32(R(15),R(5));
  R(0)=R(14);
  R(0)+=0x8u;
  R(3)=LD32(R(14));
  R(2)=0x0u;
  R(13)=LD32(R(14)+4);
  R(3)=~R(3);
  ST32(R(14)+4,R(2));
  R(0)=LD32(R(12)+R(0));
  R(13)&=R(3);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0e2726;
  R(0)=0x10u;
  R(3)=0x8c0ef6a0u;
  fp_ld(c,4,R(0)+R(14));
  { c->pr=0x8c0e2712u; R(4)=LD32(R(15)); f_8c0ef6a0(c); }
  R(3)=0x8c0ddda0u;
  { c->pr=0x8c0e2718u; R(4)=LD32(R(15)); f_8c0ddda0(c); }
  R(3)=R(14);
  R(3)+=0x8u;
  R(3)+=R(12);
  R(1)=LD32(R(3));
  R(2)=0xfffffffeu;
  R(1)&=R(2);
  ST32(R(3),R(1));
L8c0e2726:;
  R(3)=0x2u;
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0e2734;
  R(3)=0x8c0ef740u;
  R(0)=0x20u;
  { c->pr=0x8c0e2734u; fp_ld(c,4,R(0)+R(14)); f_8c0ef740(c); }
L8c0e2734:;
  R(2)=0x4u;
  c->t=(R(2)&R(13))==0;
  if(c->t) goto L8c0e2742;
  R(2)=0x8c0ef700u;
  R(5)=LD32(R(14)+28);
  { c->pr=0x8c0e2742u; R(4)=LD32(R(14)+24); f_8c0ef700(c); }
L8c0e2742:;
  R(3)=0x8u;
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0e274e;
  R(3)=0x8c0ef820u;
  { c->pr=0x8c0e274eu; R(4)=LD32(R(14)+20); f_8c0ef820(c); }
L8c0e274e:;
  R(2)=0x10u;
  c->t=(R(2)&R(13))==0;
  if(c->t) goto L8c0e275a;
  R(2)=0x8c0ef8e0u;
  { c->pr=0x8c0e275au; R(4)=LD32(R(14)+36); f_8c0ef8e0(c); }
L8c0e275a:;
  R(3)=0x20u;
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0e2766;
  R(3)=0x8c0ef8f8u;
  { c->pr=0x8c0e2766u; R(4)=LD32(R(14)+40); f_8c0ef8f8(c); }
L8c0e2766:;
  R(2)=0x40u;
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c0e2772;
  R(1)=0x8c0ef7e0u;
  { c->pr=0x8c0e2772u; R(4)=LD32(R(14)+44); f_8c0ef7e0(c); }
L8c0e2772:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e27c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0f4334u;
  R(0)=0x15cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e2820;
  R(0)=0x160u;
  R(5)=0x1u;
  ST32(R(4)+R(0),R(5));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(5)&R(2))==0;
  if(c->t) goto L8c0e27ea;
  R(0)=0x15cu;
  R(1)=LD32(R(14));
  R(3)=LD32(R(1)+R(0));
  R(3)+=0x1u;
  ST32(R(1)+R(0),R(3));
L8c0e27ea:;
  R(0)=0x15cu;
  R(2)=LD32(R(14));
  R(3)=0x158u;
  R(7)=0x8c0e2828u;
  R(3)+=R(2);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14));
  R(5)=LD32(R(14));
  R(6)=LD32(R(6)+R(0));
  R(0)+=0xfffffffcu;
  R(5)=LD32(R(5)+R(0));
  R(0)+=0x20u;
  R(4)=LD32(R(14));
  R(6)<<=2;
  R(3)=0x8c0e2af4u;
  R(6)<<=2;
  { c->pr=0x8c0e280eu; R(4)=LD32(R(4)+R(0)); f_8c0e2af4(c); }
  R(15)+=0x4u;
  R(0)=0x1c4u;
  R(5)=LD32(R(14));
  R(3)=0x8c0efa20u;
  R(4)=LD32(R(14));
  R(5)=LD32(R(5)+R(0));
  R(0)+=0xffffffb4u;
  { c->pr=0x8c0e2820u; R(4)=LD32(R(4)+R(0)); f_8c0efa20(c); }
L8c0e2820:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2828(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=0x1u;
  R(14)=0x8c0f4334u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0x1bcu;
  R(4)=LD32(R(14));
  R(3)=0x8c0eff2cu;
  { c->pr=0x8c0e283au; R(4)=LD32(R(4)+R(0)); f_8c0eff2c(c); }
  R(5)=0x0u;
  { R(4)=R(5); goto L8c0e2852; }
L8c0e2840:;
  R(0)=0x158u;
  R(2)=R(4);
  R(3)=LD32(R(14));
  R(2)<<=2;
  R(2)<<=2;
  R(3)=LD32(R(3)+R(0));
  R(4)+=0x1u;
  R(2)+=R(3);
  ST8(R(2),R(5));
L8c0e2852:;
  R(0)=0x15cu;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0e2840;
  R(1)=LD32(R(14));
  ST32(R(1)+R(0),R(5));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e288c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x20u;
  R(3)=0x8c0f4334u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  R(0)=0x15cu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(3));
  R(1)=LD32(R(4)+R(0));
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0e28ac; }
  R(14)=0xa000001u;
  {  goto L8c0e28e0; }
L8c0e28ac:;
  R(12)=LD32(R(4)+R(0));
  R(5)=R(13);
  R(5)+=0x4u;
  R(12)+=0x1u;
  ST32(R(4)+R(0),R(12));
  R(0)+=0xfffffffcu;
  R(12)+=0xffffffffu;
  R(3)=LD32(R(4)+R(0));
  R(12)<<=2;
  R(2)=LD32(R(13));
  R(12)<<=2;
  R(12)+=R(3);
  R(3)=0x8c0685b4u;
  R(4)=R(12);
  ST8(R(12),R(2));
  R(6)=0xeu;
  { c->pr=0x8c0e28d0u; R(4)+=0x2u; f_8c0685b4(c); }
  R(1)=0x8c0f4334u;
  R(2)=0x0u;
  R(0)=0x16cu;
  ST32(R(13)+20,R(2));
  R(3)=LD32(R(1));
  R(2)=LD32(R(3)+R(0));
  R(2)+=0xffffffffu;
  ST32(R(3)+R(0),R(2));
L8c0e28e0:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e28ec;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0e288cu;
  { c->pr=0x8c0e28ecu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e28ec:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2910(SH4Ctx *c) {
  R(3)=0x8c0f4334u;
  R(1)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(1);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(3));
  R(0)=0x17cu;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; R(5)=LD32(R(6)+R(0)); if(k) goto L8c0e292a; }
  R(14)=0xd000001u;
  {  goto L8c0e295a; }
L8c0e292a:;
  R(7)=0x40u;
  R(6)=R(1);
L8c0e292e:;
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e2942;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  { uint32_t k=!c->t; R(5)+=0x20u; if(k) goto L8c0e292e; }
  R(14)=0x7000101u;
  { ST32(R(4),R(1)); goto L8c0e295a; }
L8c0e2942:;
  R(3)=0x8c09c338u;
  R(1)=R(5);
  R(2)=0x8c0f447cu;
  { c->pr=0x8c0e294cu; R(0)=0x20u; f_8c09c338(c); }
  R(3)=0x8c0f4334u;
  R(0)=0x184u;
  ST32(R(4),R(5));
  R(1)=LD32(R(3));
  R(2)=LD32(R(1)+R(0));
  R(2)+=0x1u;
  ST32(R(1)+R(0),R(2));
L8c0e295a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e2966;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0e2910u;
  { c->pr=0x8c0e2966u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e2966:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2990(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(5)=R(4); if(k) goto L8c0e29a8; }
  R(14)=0xd000001u;
  {  goto L8c0e29cc; }
L8c0e29a8:;
  R(7)=0x7000102u;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0e29b2;
  { R(14)=R(7); goto L8c0e29cc; }
L8c0e29b2:;
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e29ca;
  R(3)=0x8c0f4334u;
  R(0)=0x184u;
  ST32(R(5),R(6));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2)+R(0));
  R(1)+=0xffffffffu;
  ST32(R(2)+R(0),R(1));
  {  goto L8c0e29cc; }
L8c0e29ca:;
  R(14)=R(7);
L8c0e29cc:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e29d8;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0e2990u;
  { c->pr=0x8c0e29d8u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e29d8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e29f8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(14)=0x0u;
  ST32(R(15)+4,R(4));
  R(0)>>=2;
  ST32(R(15),R(5));
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+8,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=0x8c0e2a7cu;
  { c->pr=0x8c0e2a1eu;  f_8c0e2a7c(c); }
  R(1)=LD32(R(15)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0e2a2a;
  R(14)=0x7000103u;
  {  goto L8c0e2a3e; }
L8c0e2a2a:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0e2a36;
  R(14)=0x7000203u;
  {  goto L8c0e2a3e; }
L8c0e2a36:;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  R(1)=LD32(R(3)+4);
  ST32(R(2),R(1));
L8c0e2a3e:;
  R(0)=LD32(R(15)+8);
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e2a5c;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0e29f8u;
  { c->pr=0x8c0e2a5cu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e2a5c:;
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2a7c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0x8c0f4334u;
  R(14)=LD32(R(3));
  R(0)>>=2;
  R(0)>>=2;
  c->t=(R(14)&R(14))==0;
  R(0)&=0xfu;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c0e2ac4; }
  R(0)=R(13);
  c->t=(int32_t)R(0)==15;
  if(!c->t) goto L8c0e2ac4;
  R(2)=0x8c0e3e90u;
  R(5)=R(15);
  R(0)=0x1acu;
  { c->pr=0x8c0e2aa6u; R(4)=LD32(R(14)+R(0)); f_8c0e3e90(c); }
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0e2ac4;
  R(2)=0x8c0f4334u;
  R(0)=0x190u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0e2ac4;
  R(1)=0x8c0f4334u;
  R(3)=0x8c0e3e08u;
  R(0)=0x1acu;
  R(4)=LD32(R(1));
  { c->pr=0x8c0e2ac4u; R(4)=LD32(R(4)+R(0)); f_8c0e3e08(c); }
L8c0e2ac4:;
  R(2)=sh4_getsr(c);
  R(0)=R(13);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2af4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(13)=0x0u;
  ST32(R(15)+12,R(5));
  R(14)=R(4);
  R(0)>>=2;
  ST32(R(15)+4,R(6));
  R(0)>>=2;
  ST32(R(15)+8,R(7));
  R(0)&=0xfu;
  ST32(R(15)+16,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(1)=0x8c0f4334u;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e2b28;
  R(13)=0xd000001u;
  {  goto L8c0e2b70; }
L8c0e2b28:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0e2b32;
  R(13)=0x7000103u;
  {  goto L8c0e2b70; }
L8c0e2b32:;
  R(3)=0x8c0e29f8u;
  R(5)=R(15);
  { c->pr=0x8c0e2b3au; R(4)=R(14); f_8c0e29f8(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0e2b46;
  R(13)=0x6000001u;
  {  goto L8c0e2b70; }
L8c0e2b46:;
  R(3)=0x8c0efa10u;
  R(5)=0x0u;
  { c->pr=0x8c0e2b4eu; R(4)=R(14); f_8c0efa10(c); }
  R(3)=0x8c0ef9f0u;
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c0e2b56u; R(4)=R(14); f_8c0ef9f0(c); }
  R(3)=0x8c0efa18u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0e2b5eu; R(4)=R(14); f_8c0efa18(c); }
  R(3)=0x8c0ef9f8u;
  R(5)=LD32(R(15)+8);
  R(6)=LD32(R(15)+32);
  { c->pr=0x8c0e2b68u; R(4)=R(14); f_8c0ef9f8(c); }
  R(2)=0x8c0efa10u;
  R(5)=0x0u;
  { c->pr=0x8c0e2b70u; R(4)=R(14); f_8c0efa10(c); }
L8c0e2b70:;
  R(0)=LD32(R(15)+16);
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0e2b8e;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0e2af4u;
  { c->pr=0x8c0e2b8eu; R(5)=R(13); f_8c0d6fc8(c); }
L8c0e2b8e:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2bc8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  ST32(R(15),R(4));
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(14)=0x8c0f4334u;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e2c0a;
  R(13)=0x8c0d6fdcu;
  {  goto L8c0e2bf8; }
L8c0e2bf4:;
  { uint32_t tg=R(13); c->pr=0x8c0e2bf8u;  sh4_call(c,tg); }
L8c0e2bf8:;
  R(0)=0x190u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e2bf4;
  R(0)=0x1a8u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(14));
  ST32(R(2)+R(0),R(3));
L8c0e2c0a:;
  R(0)=LD32(R(15)+4);
  R(2)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(1);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2c38(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x200000u;
  R(2)=R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c0e2c5c; }
  R(2)=0x0u;
  R(1)=0xa0800000u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+8);
  R(4)+=R(1);
  R(1)=0x8c0d7f00u;
  { c->pr=0x8c0e2c5au; R(6)=0x4u; f_8c0d7f00(c); }
  R(15)+=0x8u;
L8c0e2c5c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0e2c70(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0e2c82;
  R(14)=0xd000001u;
  {  goto L8c0e2c94; }
L8c0e2c82:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0e2c8c;
  R(14)=0x7000103u;
  {  goto L8c0e2c94; }
L8c0e2c8c:;
  R(3)=0x8c0f00f4u;
  { c->pr=0x8c0e2c92u;  f_8c0f00f4(c); }
  R(14)=R(0);
L8c0e2c94:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e2ca0;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0e2c70u;
  { c->pr=0x8c0e2ca0u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e2ca0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2cc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(3));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0e2cd8; }
  R(14)=0xd000001u;
  {  goto L8c0e2d1a; }
L8c0e2cd8:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0e2ce2;
  R(14)=0x7000103u;
  {  goto L8c0e2d1a; }
L8c0e2ce2:;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e2cee;
  R(14)=0x7000203u;
  {  goto L8c0e2d1a; }
L8c0e2cee:;
  R(0)=0x1b8u;
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  R(3)=0x400u;
  R(5)<<=2;
  R(2)=LD32(R(6)+R(0));
  R(5)<<=2;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  c->t=R(5)>>31;R(5)<<=1;
  R(3)+=R(2);
  R(2)=0x8c0e2c38u;
  R(0)<<=2;
  R(0)<<=2;
  R(0)<<=2;
  R(0)+=R(3);
  R(0)+=R(5);
  R(4)=R(0);
  R(4)+=0x14u;
  { c->pr=0x8c0e2d14u; R(5)=R(15); f_8c0e2c38(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(2));
L8c0e2d1a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e2d26;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0e2cc0u;
  { c->pr=0x8c0e2d26u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e2d26:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2d50(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(12)=R(4);
  R(4)=0x8c0f4334u;
  R(10)=R(5);
  ST32(R(15)+8,R(6));
  R(3)=LD32(R(4));
  R(11)=R(7);
  R(5)=0x0u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c0e2d82; }
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0e2d8c;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0e2e0e;
  ST32(R(11),R(5));
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e2d88;
L8c0e2d82:;
  R(14)=0xd000001u;
  {  goto L8c0e2e5e; }
L8c0e2d88:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0e2d92;
L8c0e2d8c:;
  R(14)=0x7000103u;
  {  goto L8c0e2e5e; }
L8c0e2d92:;
  R(0)=(int32_t)(int8_t)LD8(R(12)+1);
  R(3)=0x2cu;
  R(2)=0xa8u;
  R(6)=R(15);
  R(5)=R(0);
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  c->macl=(uint32_t)((int32_t)(int16_t)R(5)*(int32_t)(int16_t)R(3));
  R(13)=LD32(R(4));
  R(6)+=0xcu;
  R(4)=0x52535053u;
  R(7)=R(15);
  R(13)+=R(2);
  R(5)=c->macl;
  R(13)+=R(5);
  R(1)=R(13);
  R(5)=(uint32_t)(int32_t)(int8_t)R(10);
  R(1)+=0x7u;
  R(5)+=R(1);
  R(1)=0x8c0efdc4u;
  { c->pr=0x8c0e2dbcu; R(5)=(int32_t)(int8_t)LD8(R(5)); f_8c0efdc4(c); }
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e2dce;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e2dd4;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e2dda;
  {  goto L8c0e2ddc; }
L8c0e2dce:;
  R(4)=0x7000u;
  {  goto L8c0e2ddc; }
L8c0e2dd4:;
  R(4)=0xf000u;
  {  goto L8c0e2ddc; }
L8c0e2dda:;
  R(4)=0x1f000u;
L8c0e2ddc:;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(c->t) goto L8c0e2de4;
  ST32(R(15),R(4));
L8c0e2de4:;
  R(3)=0x8c0f01f4u;
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x4u;
  { c->pr=0x8c0e2df0u; R(4)=R(12); f_8c0f01f4(c); }
  R(0)=R(13);
  R(5)=(uint32_t)(int32_t)(int8_t)R(10);
  R(0)+=0xcu;
  R(4)=R(13);
  R(5)<<=2;
  R(0)=LD32(R(5)+R(0));
  R(4)+=0x14u;
  R(4)+=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=LD32(R(4)); if(k) goto L8c0e2e18; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+8);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c0e2e14;
L8c0e2e0e:;
  R(14)=0x3000001u;
  {  goto L8c0e2e5e; }
L8c0e2e14:;
  { R(5)=LD32(R(15)); goto L8c0e2e50; }
L8c0e2e18:;
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(c->t) goto L8c0e2e4c;
  { R(5)=LD32(R(15)+4); goto L8c0e2e4e; }
L8c0e2e4c:;
  R(5)=LD32(R(15));
L8c0e2e4e:;
  R(5)-=R(4);
L8c0e2e50:;
  R(2)=LD32(R(15)+8);
  c->t=(int32_t)R(2)>(int32_t)R(5);
  if(c->t) goto L8c0e2e5a;
  { R(3)=0x1u; goto L8c0e2e5c; }
L8c0e2e5a:;
  R(3)=0x0u;
L8c0e2e5c:;
  ST32(R(11),R(3));
L8c0e2e5e:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e2e6a;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0e2d50u;
  { c->pr=0x8c0e2e6au; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e2e6a:;
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2e84(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0f4334u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(9)=R(4); if(k) goto L8c0e2ea4; }
  R(12)=0xd000001u;
  {  goto L8c0e2fc2; }
L8c0e2ea4:;
  R(0)=0x20u;
  R(4)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(10)=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(10);
  if(!c->t) goto L8c0e2f0a;
  R(2)=0x2u;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(c->t) goto L8c0e2f0a;
  R(4)=R(15);
  R(4)+=0x20u;
  R(4)+=0x1u;
  R(5)=0x3u;
  c->t=(R(4)&R(5))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c0e2eca; }
  R(4)=R(15);
  R(4)+=0x20u;
  { R(4)+=0x4u; goto L8c0e2ed0; }
L8c0e2eca:;
  R(4)=R(15);
  R(4)+=0x20u;
  R(4)+=0x1u;
L8c0e2ed0:;
  { R(6)=R(14); goto L8c0e2f12; }
L8c0e2ed4:;
  R(7)=R(4);
  R(7)+=0x4u;
  R(3)=R(7);
  c->t=(R(3)&R(5))==0;
  R(13)=R(6);
  { uint32_t k=c->t; R(13)+=R(11); if(k) goto L8c0e2ee6; }
  { R(4)+=0x8u; goto L8c0e2ee8; }
L8c0e2ee6:;
  R(4)=R(7);
L8c0e2ee8:;
  R(12)=R(4);
  R(12)+=0xfffffffcu;
  R(3)=R(12);
  c->t=(R(3)&R(5))==0;
  if(c->t) goto L8c0e2ef8;
  R(2)=R(4);
  { R(2)+=0xfffffff8u; goto L8c0e2efa; }
L8c0e2ef8:;
  R(2)=R(12);
L8c0e2efa:;
  R(1)=LD32(R(2));
  ST8(R(13),R(1));
  R(7)=(int32_t)(int8_t)LD8(R(13));
  c->t=(int32_t)R(7)>=0;
  if(!c->t) goto L8c0e2f0a;
  R(2)=0xfu;
  c->t=(int32_t)R(7)>(int32_t)R(2);
  if(!c->t) goto L8c0e2f10;
L8c0e2f0a:;
  R(4)=0x3000001u;
  { R(12)=R(4); goto L8c0e2fc2; }
L8c0e2f10:;
  R(6)+=0x1u;
L8c0e2f12:;
  R(0)=0x20u;
  R(13)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(int32_t)R(6)>=(int32_t)R(13);
  { uint32_t k=!c->t; R(11)=R(15); if(k) goto L8c0e2ed4; }
  R(5)=R(11);
  R(4)=R(13);
  R(5)+=0x2u;
  R(4)+=R(11);
  c->t=R(4)>=R(5);
  if(c->t) goto L8c0e2f32;
  R(6)=0xffffffffu;
L8c0e2f2a:;
  ST8(R(4),R(6));
  R(4)+=0x1u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0e2f2a;
L8c0e2f32:;
  R(2)=0x8c0f0130u;
  R(5)=0x3u;
  { c->pr=0x8c0e2f3au; R(4)=R(9); f_8c0f0130(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0e2fc2;
  R(4)=LD32(R(9));
  R(2)=0x2cu;
  R(3)=0x8c0f4334u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(1)=0xa8u;
  R(4)=R(0);
  R(4)=(uint32_t)(int32_t)(int8_t)R(4);
  c->macl=(uint32_t)((int32_t)(int16_t)R(4)*(int32_t)(int16_t)R(2));
  R(13)=LD32(R(3));
  R(0)=0x20u;
  R(3)=0x8c0f0368u;
  R(13)+=R(1);
  R(4)=c->macl;
  R(13)+=R(4);
  ST32(R(13),R(10));
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(13)+4,R(0));
  R(0)=0x20u;
  R(5)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c0e2f6au; R(4)=LD32(R(9)); f_8c0f0368(c); }
  R(2)=0x8c0f02ecu;
  R(5)=0x0u;
  { c->pr=0x8c0e2f72u; R(4)=LD32(R(9)); f_8c0f02ec(c); }
  { R(4)=R(14); goto L8c0e2fba; }
L8c0e2f90:;
  R(0)=R(4);
  R(3)=R(13);
  R(2)=(int32_t)(int8_t)LD8(R(11)+R(0));
  R(3)+=0x7u;
  R(3)+=R(4);
  R(5)=R(0);
  ST8(R(3),R(2));
  R(3)=R(13);
  R(3)+=0xcu;
  R(2)=R(13);
  R(5)<<=2;
  R(3)+=R(5);
  ST32(R(3),R(10));
  R(3)=R(13);
  R(2)+=0x14u;
  R(3)+=0x24u;
  R(2)+=R(5);
  R(5)+=R(3);
  ST32(R(2),R(14));
  R(4)+=0x1u;
  ST32(R(5),R(14));
L8c0e2fba:;
  R(0)=0x20u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0e2f90;
L8c0e2fc2:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0e2fce;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0e2e84u;
  { c->pr=0x8c0e2fceu; R(5)=R(12); f_8c0d6fc8(c); }
L8c0e2fce:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e2fec(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f4334u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0e3002;
  R(14)=0xd000001u;
  {  goto L8c0e30ae; }
L8c0e3002:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0e300c;
  R(14)=0x7000103u;
  {  goto L8c0e30ae; }
L8c0e300c:;
  R(3)=0xfffffff0u;
  R(2)=(uint32_t)(int32_t)(int8_t)R(7);
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0e3092;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=0x2cu;
  R(2)=0xa8u;
  R(13)=R(0);
  R(4)=(uint32_t)(int32_t)(int8_t)R(13);
  c->macl=(uint32_t)((int32_t)(int16_t)R(4)*(int32_t)(int16_t)R(3));
  R(2)+=R(14);
  R(4)=c->macl;
  R(4)+=R(2);
  ST32(R(4),R(5));
  R(0)=(int32_t)(int8_t)LD8(R(4)+5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c0e3038; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e303c;
  {  goto L8c0e3092; }
L8c0e3038:;
  { R(12)=R(14); goto L8c0e303e; }
L8c0e303c:;
  R(12)=0x80u;
L8c0e303e:;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e3050;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e308a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e308e;
  {  goto L8c0e3092; }
L8c0e3050:;
  R(5)=R(14);
L8c0e3052:;
  R(3)=0x8c2ef5d4u;
  R(2)=0x21u;
  R(13)|=R(12);
  R(1)=0x8c2ef5d8u;
  R(13)|=R(5);
  ST32(R(4)+12,R(14));
  R(7)=(uint32_t)(int32_t)(int8_t)R(7);
  ST32(R(4)+16,R(14));
  ST32(R(3),R(2));
  R(3)+=0x6u;
  R(2)=0x8c2ef5d9u;
  R(7)<<=2;
  ST8(R(1),R(13));
  R(1)+=0x3u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+6);
  c->t=R(7)>>31;R(7)<<=1;
  ST8(R(2),R(0));
  ST8(R(3),R(6));
  R(6)=R(6)&0xFFFF;
  R(6)>>=8;
  R(0)=0x8c2ef5dcu;
  ST8(R(1),R(6));
  R(6)=R(4);
  R(4)=0x5u;
  ST8(R(0),R(7));
  R(6)+=0x7u;
  { R(5)=0x7u; goto L8c0e30a0; }
L8c0e308a:;
  { R(5)=0x10u; goto L8c0e3052; }
L8c0e308e:;
  { R(5)=0x30u; goto L8c0e3052; }
L8c0e3092:;
  R(14)=0x3000001u;
  {  goto L8c0e30ae; }
L8c0e3098:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  R(0)=0x8c2ef5d8u;
  ST8(R(4)+R(0),R(3));
  R(4)+=0x1u;
L8c0e30a0:;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0e3098;
  R(3)=0x8c0d6dc8u;
  R(4)=0x8c2ef5d4u;
  { c->pr=0x8c0e30acu;  f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0e30ae:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e30ba;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0e2fecu;
  { c->pr=0x8c0e30bau; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e30ba:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e30f8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0e3112;
  R(14)=0xd000001u;
  {  goto L8c0e3248; }
L8c0e3112:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0e311c;
  R(14)=0x7000103u;
  {  goto L8c0e3248; }
L8c0e311c:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(2)=0x2cu;
  R(1)=0xa8u;
  R(12)=(uint32_t)(int32_t)(int8_t)R(6);
  R(11)=R(0);
  R(3)=(uint32_t)(int32_t)(int8_t)R(11);
  c->macl=(uint32_t)((int32_t)(int16_t)R(3)*(int32_t)(int16_t)R(2));
  R(14)+=R(1);
  R(6)=0x0u;
  R(13)=R(6);
  R(3)=c->macl;
  R(14)+=R(3);
  R(0)=R(14);
  R(3)=(uint32_t)(int32_t)(int8_t)R(5);
  R(0)+=0x1cu;
  R(3)<<=2;
  R(3)+=R(0);
  ST32(R(3),R(12));
  { R(4)=R(15); goto L8c0e314c; }
L8c0e3144:;
  R(0)=R(13);
  R(0)<<=2;
  R(13)+=0x1u;
  ST32(R(4)+R(0),R(12));
L8c0e314c:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  c->t=(int32_t)R(13)>=(int32_t)R(0);
  if(!c->t) goto L8c0e3144;
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  R(13)=0x80u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(12)=(uint32_t)(int32_t)(int8_t)R(5); if(k) goto L8c0e31a8; }
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0e31a8;
  R(0)=R(12);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e316e;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e3176;
  {  goto L8c0e318c; }
L8c0e316e:;
  R(2)=LD32(R(4));
  R(2)+=R(13);
  { ST32(R(4),R(2)); goto L8c0e318c; }
L8c0e3176:;
  R(5)=R(4);
  R(5)+=0x4u;
  R(2)=LD32(R(5));
  R(3)=0xffffffffu;
  R(2)-=R(13);
  R(1)=R(2);
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  ST32(R(5),R(2));
  if(!c->t) goto L8c0e318c;
  R(0)=0xfffffffeu;
  ST32(R(4)+4,R(0));
L8c0e318c:;
  { R(5)=R(6); goto L8c0e31a2; }
L8c0e3190:;
  R(0)=R(5);
  R(0)<<=2;
  R(3)=LD32(R(4)+R(0));
  R(2)=0x0u;
  R(5)+=0x1u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  {uint32_t a=R(3),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(3)=r;}
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  ST32(R(4)+R(0),R(3));
L8c0e31a2:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  c->t=(int32_t)R(5)>=(int32_t)R(0);
  if(!c->t) goto L8c0e3190;
L8c0e31a8:;
  { R(5)=R(6); goto L8c0e31b8; }
L8c0e31ac:;
  R(0)=R(5);
  R(0)<<=2;
  R(3)=LD32(R(4)+R(0));
  R(5)+=0x1u;
  R(3)+=R(13);
  ST32(R(4)+R(0),R(3));
L8c0e31b8:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  c->t=(int32_t)R(5)>=(int32_t)R(0);
  if(!c->t) goto L8c0e31ac;
  R(3)=0x8c2ef5e8u;
  R(2)=0x26u;
  R(0)=0x8c0f449cu;
  R(14)=R(7);
  ST32(R(3),R(2));
  R(2)=0x3u;
  R(2)&=R(12);
  R(1)=0x8c2ef5ecu;
  R(3)=(int32_t)(int8_t)LD8(R(2)+R(0));
  R(0)=R(12);
  R(5)=0x8c2ef5edu;
  c->t=(int32_t)R(0)==0;
  R(3)|=R(11);
  R(13)=R(7);
  ST8(R(1),R(3));
  R(3)=0xfffffff8u;
  { uint32_t k=c->t; R(13)=sh4_shad(R(13),R(3)); if(k) goto L8c0e320c; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e3226;
  {  goto L8c0e323e; }
L8c0e320c:;
  R(2)=LD32(R(4));
  R(3)=0x8c2ef5eeu;
  ST8(R(5),R(2));
  R(2)=0x8c2ef5efu;
  R(1)=0x8c2ef5f1u;
  ST8(R(3),R(14));
  R(3)+=0x4u;
  ST8(R(2),R(13));
  R(2)+=0x4u;
  ST8(R(1),R(6));
  ST8(R(3),R(6));
  { ST8(R(2),R(6)); goto L8c0e323e; }
L8c0e3226:;
  R(3)=0x8c2ef5eeu;
  R(1)=0x8c2ef5f1u;
  R(0)=0x8c2ef5f2u;
  R(2)=0x8c2ef5efu;
  ST8(R(5),R(6));
  ST8(R(3),R(6));
  ST8(R(2),R(6));
  R(3)=LD32(R(4)+4);
  ST8(R(1),R(3));
  R(3)=0x8c2ef5f3u;
  ST8(R(0),R(14));
  ST8(R(3),R(13));
L8c0e323e:;
  R(3)=0x8c0d6dc8u;
  R(4)=0x8c2ef5e8u;
  { c->pr=0x8c0e3246u;  f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0e3248:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e3254;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0e30f8u;
  { c->pr=0x8c0e3254u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e3254:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e3288(SH4Ctx *c) {
  R(3)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0e329a;
  R(14)=0xd000001u;
  {  goto L8c0e3304; }
L8c0e329a:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0e32a4;
  R(14)=0x7000103u;
  {  goto L8c0e3304; }
L8c0e32a4:;
  R(3)=0x80u;
  R(6)=(uint32_t)(int32_t)(int8_t)R(6);
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(14)=(uint32_t)(int32_t)(int8_t)R(5);
  R(1)=0x8c2ef5fcu;
  R(6)+=R(3);
  R(4)=R(0);
  R(3)=0x3u;
  R(0)=0x8c0f44a0u;
  R(2)=0x25u;
  R(3)&=R(14);
  ST32(R(1),R(2));
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)+=0x4u;
  R(3)=0xfffffff8u;
  R(5)=R(7);
  R(2)|=R(4);
  R(4)=R(7);
  c->t=(R(14)&R(14))==0;
  ST8(R(1),R(2));
  { uint32_t k=c->t; R(4)=sh4_shad(R(4),R(3)); if(k) goto L8c0e32d6; }
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0e32e2;
L8c0e32d6:;
  R(3)=0x8c2ef602u;
  R(1)=0x8c2ef603u;
  R(2)=0x8c2ef601u;
  ST8(R(2),R(6));
  ST8(R(3),R(5));
  ST8(R(1),R(4));
L8c0e32e2:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e32ee;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0e32fa;
L8c0e32ee:;
  R(2)=0x8c2ef606u;
  R(1)=0x8c2ef607u;
  R(3)=0x8c2ef605u;
  ST8(R(3),R(6));
  ST8(R(2),R(5));
  ST8(R(1),R(4));
L8c0e32fa:;
  R(3)=0x8c0d6dc8u;
  R(4)=0x8c2ef5fcu;
  { c->pr=0x8c0e3302u;  f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0e3304:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e3310;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0e3288u;
  { c->pr=0x8c0e3310u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e3310:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e3354(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0f4334u;
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0e336a;
  R(14)=0xd000001u;
  {  goto L8c0e33ca; }
L8c0e336a:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0e3374;
  R(14)=0x7000103u;
  {  goto L8c0e33ca; }
L8c0e3374:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=0x2cu;
  R(2)=0xa8u;
  R(13)=R(0);
  R(6)=(uint32_t)(int32_t)(int8_t)R(13);
  c->macl=(uint32_t)((int32_t)(int16_t)R(6)*(int32_t)(int16_t)R(3));
  R(2)+=R(5);
  R(5)=0x0u;
  R(7)=R(5);
  R(6)=c->macl;
  R(6)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(6)+4);
  ST8(R(15),R(0));
  R(14)=(int32_t)(int8_t)LD8(R(15));
  c->t=(int32_t)R(14)>0;
  { uint32_t k=!c->t; R(4)=R(5); if(k) goto L8c0e33b8; }
  R(0)=0x1u;
L8c0e3398:;
  R(3)=R(6);
  R(3)+=0xcu;
  R(3)+=R(4);
  R(2)=R(6);
  ST32(R(3),R(0));
  R(3)=R(6);
  R(3)+=0x24u;
  R(2)+=0x14u;
  R(7)+=0x1u;
  R(3)+=R(4);
  c->t=(int32_t)R(7)>=(int32_t)R(14);
  R(2)+=R(4);
  ST32(R(2),R(5));
  ST32(R(3),R(5));
  { uint32_t k=!c->t; R(4)+=0x4u; if(k) goto L8c0e3398; }
L8c0e33b8:;
  R(2)=0x8c2ef610u;
  R(3)=0x22u;
  R(1)=0x8c2ef614u;
  ST32(R(2),R(3));
  R(3)=0x8c0d6dc8u;
  ST8(R(1),R(13));
  { c->pr=0x8c0e33c8u; R(4)=R(2); f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0e33ca:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e33d6;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0e3354u;
  { c->pr=0x8c0e33d6u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0e33d6:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e3404(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=0x8c0f4334u;
  R(0)=R(5);
  ST32(R(15)+8,R(4));
  R(8)=R(6);
  ST8(R(15)+12,R(0));
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(10)=0x0u; if(k) goto L8c0e342e; }
  R(10)=0xd000001u;
  {  goto L8c0e35ca; }
L8c0e342e:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e3438;
  c->t=(R(8)&R(8))==0;
  if(!c->t) goto L8c0e343e;
L8c0e3438:;
  R(10)=0x7000103u;
  {  goto L8c0e35ca; }
L8c0e343e:;
  R(5)=LD32(R(15)+8);
  R(3)=0x2cu;
  R(2)=0xa8u;
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  R(2)+=R(4);
  R(11)=0x8c2ef624u;
  R(5)=R(0);
  R(14)=(uint32_t)(int32_t)(int8_t)R(5);
  c->macl=(uint32_t)((int32_t)(int16_t)R(14)*(int32_t)(int16_t)R(3));
  R(13)=(uint32_t)(int32_t)(int8_t)R(5);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(14)=c->macl;
  R(14)+=R(2);
  R(2)=R(13);
  R(13)<<=2;
  R(13)+=R(2);
  R(2)=R(0);
  R(0)<<=2;
  R(13)<<=2;
  R(0)+=R(2);
  c->t=R(13)>>31;R(13)<<=1;
  R(1)=R(13);
  R(0)<<=2;
  R(1)+=R(11);
  R(12)=R(0);
  R(1)+=R(12);
  R(2)=LD32(R(1)+8);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e3484;
  R(4)=R(13);
  R(2)=0x8c0e2910u;
  R(4)+=R(11);
  R(4)+=R(12);
  { c->pr=0x8c0e3484u; R(4)+=0x8u; f_8c0e2910(c); }
L8c0e3484:;
  R(9)=R(13);
  R(9)+=R(11);
  R(3)=0x1u;
  R(7)=0x8c0e35ecu;
  R(9)+=R(12);
  ST32(R(9),R(3));
  R(3)=0x8c0e2af4u;
  ST32(R(9)+4,R(8));
  R(2)=LD32(R(15)+8);
  ST32(R(9)+12,R(2));
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(8)+12);
  R(5)=LD32(R(8)+8);
  { c->pr=0x8c0e34a2u; R(4)=LD32(R(9)+8); f_8c0e2af4(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(3)=R(14);
  R(3)+=0x14u;
  R(9)=R(0);
  R(9)<<=2;
  R(3)+=R(9);
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  { uint32_t k=c->t; R(8)=LD32(R(8)+12); if(k) goto L8c0e34c4; }
  {  goto L8c0e35c8; }
L8c0e34c4:;
  R(5)=R(14);
  R(4)=0x52535053u;
  R(3)=0x8c0efdc4u;
  R(6)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(7)=R(15);
  R(6)+=0x4u;
  R(5)+=0x7u;
  { c->pr=0x8c0e34d8u; R(5)=(int32_t)(int8_t)LD8(R(5)+R(0)); f_8c0efdc4(c); }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e34ea;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e3524;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e3530;
  {  goto L8c0e3530; }
L8c0e34ea:;
  R(3)=LD32(R(15));
  R(2)=0x7f00u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c0e3530;
  R(3)=0x7000u;
  { ST32(R(15),R(3)); goto L8c0e3530; }
L8c0e3524:;
  R(2)=LD32(R(15));
  R(1)=0xff00u;
  c->t=(int32_t)R(2)>(int32_t)R(1);
  if(!c->t) goto L8c0e3530;
  R(3)=0xf000u;
  ST32(R(15),R(3));
L8c0e3530:;
  R(2)=R(14);
  R(2)+=0x14u;
  R(2)+=R(9);
  R(3)=LD32(R(2));
  R(2)=LD32(R(15));
  R(3)+=R(8);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c0e35c8;
  R(0)=R(13);
  R(0)+=R(11);
  R(0)+=R(12);
  R(0)=LD32(R(0)+16);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e356c;
  R(3)=0x8c0e2c38u;
  R(5)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c0e3556u; R(4)=LD32(R(15)+4); f_8c0e2c38(c); }
  R(4)=LD32(R(15)+4);
  R(2)=0x8c0efeecu;
  R(5)=LD32(R(15)+16);
  R(3)=LD32(R(15));
  { c->pr=0x8c0e3562u; R(4)+=R(3); f_8c0efeec(c); }
  R(3)=R(13);
  R(3)+=R(11);
  R(2)=0x0u;
  R(3)+=R(12);
  ST32(R(3)+16,R(2));
L8c0e356c:;
  R(3)=R(14);
  R(3)+=0x14u;
  R(3)+=R(9);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e3582;
  R(2)=R(13);
  R(2)+=R(11);
  R(3)=0x1u;
  R(2)+=R(12);
  ST32(R(2)+16,R(3));
L8c0e3582:;
  R(5)=LD32(R(15)+4);
  R(4)=R(13);
  R(3)=LD32(R(15)+8);
  R(4)+=R(11);
  R(4)+=R(12);
  R(5)+=R(3);
  R(3)=0x8c0efa20u;
  { c->pr=0x8c0e3594u; R(4)=LD32(R(4)+8); f_8c0efa20(c); }
  R(2)=R(14);
  R(2)+=0x14u;
  R(2)+=R(9);
  R(3)=LD32(R(2));
  R(3)+=R(8);
  ST32(R(2),R(3));
  R(2)=R(14);
  R(2)+=0x14u;
  R(3)=LD32(R(15));
  R(2)+=R(9);
  R(1)=LD32(R(2));
  c->t=R(1)==R(3);
  if(!c->t) goto L8c0e35ca;
  R(3)=R(14);
  R(3)+=0x14u;
  R(2)=0x0u;
  R(3)+=R(9);
  ST32(R(3),R(2));
  R(3)=R(14);
  R(3)+=0x24u;
  R(3)+=R(9);
  R(2)=LD32(R(3));
  R(2)+=0x1u;
  ST32(R(3),R(2));
  {  goto L8c0e35ca; }
L8c0e35c8:;
  R(10)=0x3000001u;
L8c0e35ca:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0e35d6;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0e3404u;
  { c->pr=0x8c0e35d6u; R(5)=R(10); f_8c0d6fc8(c); }
L8c0e35d6:;
  R(0)=R(10);
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
void f_8c0e35ec(SH4Ctx *c) {
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ef9a0u;
  R(4)=LD32(R(4)+4);
  { R(15)+=0x4u; { f_8c0ef9a0(c); return; } }
}
void f_8c0e361c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(1)=0x300u;
  ST16(R(15),R(4));
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e3650;
  R(1)=0x340u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e3650;
  R(1)=0x380u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e3650;
  R(1)=0x3c0u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e3650;
  {  goto L8c0e3840; }
L8c0e3650:;
  R(2)=0x8c0f0a74u;
  R(12)=0x8c2ef6c4u;
  { c->pr=0x8c0e3658u; ST32(R(12),R(5)); f_8c0f0a74(c); }
  R(4)=0x8c0f3dfcu;
  R(14)=0x8c0f0c82u;
  { c->pr=0x8c0e3660u; ST32(R(15)+8,R(0)); f_8c0f0c82(c); }
  R(4)=0x8c0f3e20u;
  R(6)=0x8u;
  { c->pr=0x8c0e3668u; R(5)=0xau; f_8c0e3854(c); }
  R(4)=0x8c0f3e2cu;
  R(6)=0x8u;
  { c->pr=0x8c0e3670u; R(5)=0x12u; f_8c0e3854(c); }
  R(4)=0x8c0f3e38u;
  R(6)=0x8u;
  { c->pr=0x8c0e3678u; R(5)=0x1au; f_8c0e3854(c); }
  R(4)=0x8c0f3e44u;
  R(6)=0x8u;
  { c->pr=0x8c0e3680u; R(5)=0x22u; f_8c0e3854(c); }
  R(4)=0x8c0f3e50u;
  { uint32_t tg=R(14); c->pr=0x8c0e3686u;  sh4_call(c,tg); }
  R(0)=0xa8u;
  R(3)=LD32(R(12));
  R(13)=0x8c0f0cb8u;
  { c->pr=0x8c0e3690u; R(4)=LD32(R(3)+R(0)); f_8c0f0cb8(c); }
  R(4)=0x8c0f3e58u;
  { uint32_t tg=R(14); c->pr=0x8c0e3696u;  sh4_call(c,tg); }
  R(0)=0xacu;
  R(3)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c0e369eu; R(4)=LD32(R(3)+R(0)); sh4_call(c,tg); }
  R(4)=0x8c0f3e64u;
  R(6)=0x8u;
  { c->pr=0x8c0e36a6u; R(5)=0x2du; f_8c0e3854(c); }
  R(4)=LD32(R(12));
  R(6)=0x8u;
  R(11)=0xf0u;
  R(4)+=R(11);
  R(2)=LD32(R(4));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(12));
  R(2)=LD32(R(3)+4);
  ST32(R(4),R(2));
  R(4)=0x8c0f3e74u;
  { c->pr=0x8c0e36beu; R(5)=0x35u; f_8c0e3854(c); }
  R(2)=LD32(R(15)+4);
  R(6)=0x8u;
  R(0)=LD32(R(12));
  R(4)=0x8c0f3e80u;
  ST32(R(11)+R(0),R(2));
  { c->pr=0x8c0e36ccu; R(5)=0x2u; f_8c0e3854(c); }
  R(4)=0x8c0f3e90u;
  { uint32_t tg=R(14); c->pr=0x8c0e36d2u;  sh4_call(c,tg); }
  R(0)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c0e36d8u; R(4)=LD32(R(11)+R(0)); sh4_call(c,tg); }
  R(4)=0x8c0f3e98u;
  { uint32_t tg=R(14); c->pr=0x8c0e36deu;  sh4_call(c,tg); }
  R(0)=0xf4u;
  R(2)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c0e36e6u; R(4)=LD32(R(2)+R(0)); sh4_call(c,tg); }
  R(4)=0x8c0f3ea0u;
  { uint32_t tg=R(14); c->pr=0x8c0e36ecu;  sh4_call(c,tg); }
  R(0)=0xf8u;
  R(3)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c0e36f4u; R(4)=LD32(R(3)+R(0)); sh4_call(c,tg); }
  R(4)=0x8c0f3ea8u;
  { uint32_t tg=R(14); c->pr=0x8c0e36fau;  sh4_call(c,tg); }
  R(0)=0xfcu;
  R(3)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c0e3702u; R(4)=LD32(R(3)+R(0)); sh4_call(c,tg); }
  R(4)=0x8c0f3eb0u;
  { uint32_t tg=R(14); c->pr=0x8c0e3708u;  sh4_call(c,tg); }
  R(4)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c0e370eu; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(4)=0x8c0f3eb8u;
  { uint32_t tg=R(14); c->pr=0x8c0e3714u;  sh4_call(c,tg); }
  R(0)=0x100u;
  R(3)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c0e371cu; R(4)=LD32(R(3)+R(0)); sh4_call(c,tg); }
  R(4)=0x8c0f3ec0u;
  { uint32_t tg=R(14); c->pr=0x8c0e3722u;  sh4_call(c,tg); }
  R(0)=0x104u;
  R(3)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c0e372au; R(4)=LD32(R(3)+R(0)); sh4_call(c,tg); }
  R(4)=0x8c0f3ec8u;
  { uint32_t tg=R(14); c->pr=0x8c0e3730u;  sh4_call(c,tg); }
  R(0)=0x108u;
  R(3)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c0e3738u; R(4)=LD32(R(3)+R(0)); sh4_call(c,tg); }
  R(8)=0x8c0f3ed8u;
  {  goto L8c0e37b4; }
L8c0e37b4:;
  R(9)=0x8c0f3ed0u;
  R(12)=0x0u;
  R(11)=0x45u;
L8c0e37ba:;
  R(0)=R(12);
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e37c4;
  { R(0)&=0x3u; goto L8c0e37ce; }
L8c0e37c4:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x3u;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c0e37ce:;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e37d6;
  { uint32_t tg=R(14); c->pr=0x8c0e37d6u; R(4)=R(9); sh4_call(c,tg); }
L8c0e37d6:;
  R(3)=0x8c0f3ce8u;
  R(10)=R(12);
  R(10)<<=2;
  R(10)+=R(3);
  { uint32_t tg=R(13); c->pr=0x8c0e37e2u; R(4)=LD32(R(10)); sh4_call(c,tg); }
  R(4)=0x8c0f3ed4u;
  { uint32_t tg=R(14); c->pr=0x8c0e37e8u;  sh4_call(c,tg); }
  R(4)=LD32(R(10));
  { uint32_t tg=R(13); c->pr=0x8c0e37eeu; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c0e37f2u; R(4)=R(8); sh4_call(c,tg); }
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  if(!c->t) goto L8c0e37ba;
  { uint32_t tg=R(14); c->pr=0x8c0e37fcu; R(4)=R(9); sh4_call(c,tg); }
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e380a;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e3810;
  {  goto L8c0e3810; }
L8c0e380a:;
  R(4)=0x8c0f3edcu;
  {  goto L8c0e3812; }
L8c0e3810:;
  R(4)=0x8c0f3f28u;
L8c0e3812:;
  { uint32_t tg=R(14); c->pr=0x8c0e3816u;  sh4_call(c,tg); }
  R(14)=0x8c0f0bf2u;
L8c0e3818:;
  { uint32_t tg=R(14); c->pr=0x8c0e381cu;  sh4_call(c,tg); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(int32_t)R(0)==13;
  if(!c->t) goto L8c0e3818;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(2)=0xff000024u;
  R(3)=R(3)&0xFFFF;
  ST32(R(2),R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(1)=0x8c0f0c2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0f0c2c(c); return; } }
L8c0e3840:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e3854(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x8c0f0c82u;
  ST32(R(15),R(5));
  { c->pr=0x8c0e386eu; ST32(R(15)+4,R(6)); f_8c0f0c82(c); }
  R(13)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  R(11)=R(13);
  R(9)=0x8c2ef6c4u;
  R(10)=0x8c0f3ed8u;
  R(11)+=R(3);
  R(8)=0x8c0f0cb8u;
  c->t=(int32_t)R(13)>=(int32_t)R(11);
  R(14)=R(13);
  { uint32_t k=c->t; R(14)<<=2; if(k) goto L8c0e3896; }
L8c0e3884:;
  R(0)=LD32(R(9));
  { uint32_t tg=R(8); c->pr=0x8c0e388au; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  { uint32_t tg=R(12); c->pr=0x8c0e388eu; R(4)=R(10); sh4_call(c,tg); }
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(11);
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c0e3884; }
L8c0e3896:;
  R(4)=0x8c0f3ed0u;
  { uint32_t tg=R(12); c->pr=0x8c0e389cu;  sh4_call(c,tg); }
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
void f_8c0e38ea(SH4Ctx *c) {
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=R(0);
  R(0)=0x8c0e390cu;
  ST32(R(0),R(1));
  R(1)=0xffffffffu;
  R(1)<<=16;
  R(1)<<=8;
  R(1)+=0x24u;
  R(1)=LD32(R(1));
  R(0)=0x8c0e3cb0u;
  ST32(R(0),R(1));
  R(1)=0x8c0e39a4u;
  R(0)=0x0u;
  {  goto L8c0e39a4; }
L8c0e39a4:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=c->ssr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->spc;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->gbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->vbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->mach;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=sh4_getsr(c);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpul;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpscr;R(15)-=4;ST32(R(15),v);}
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(0)=sh4_getsr(c);
  R(1)=0xefffffffu;
  R(0)&=R(1);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(3)=0xfffffffeu;
  R(3)<<=8;
  R(14)=c->vbr;
  R(4)=0x8c0e3cb0u;
  R(4)=LD32(R(4));
  R(2)=R(4);
  R(2)+=R(3);
  R(0)=0x2u;
  R(0)<<=8;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(14)+=R(2);
  R(14)=LD32(R(14)+R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e3a5c;
  { uint32_t tg=R(14); c->pr=0x8c0e3a54u;  sh4_call(c,tg); }
  R(0)=0x10000000u;
  R(1)=sh4_getsr(c);
  R(1)|=R(0);
  sh4_setsr(c,R(1));
L8c0e3a5c:;
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setfpscr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;c->fpul=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setsr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->mach=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->vbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->gbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->spc=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->ssr=v;}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0e3cb0u;
  R(0)=0x2u;
  R(1)=LD32(R(1));
  R(0)<<=8;
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  { uint32_t k=!c->t; {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;} if(k) goto L8c0e3af8; }
  R(0)=c->vbr;
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;} sh4_call(c,tg); return; }
L8c0e3af8:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {  sh4_setsr(c,c->ssr); return; }
}
void f_8c0e3920(SH4Ctx *c) {
  {  goto L8c0e393e; }
L8c0e393e:;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=R(0);
  R(0)=0x8c0e3968u;
  ST32(R(0),R(1));
  R(1)=0xffffffffu;
  R(1)<<=16;
  R(1)<<=8;
  R(1)+=0x28u;
  R(1)=LD32(R(1));
  R(0)=0x8c0e3cb0u;
  ST32(R(0),R(1));
  R(1)=0x8c0e39a4u;
  R(0)=0x0u;
  {  goto L8c0e39a4; }
L8c0e39a4:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=c->ssr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->spc;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->gbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->vbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->mach;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=sh4_getsr(c);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpul;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpscr;R(15)-=4;ST32(R(15),v);}
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(0)=sh4_getsr(c);
  R(1)=0xefffffffu;
  R(0)&=R(1);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(3)=0xfffffffeu;
  R(3)<<=8;
  R(14)=c->vbr;
  R(4)=0x8c0e3cb0u;
  R(4)=LD32(R(4));
  R(2)=R(4);
  R(2)+=R(3);
  R(0)=0x2u;
  R(0)<<=8;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(14)+=R(2);
  R(14)=LD32(R(14)+R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e3a5c;
  { uint32_t tg=R(14); c->pr=0x8c0e3a54u;  sh4_call(c,tg); }
  R(0)=0x10000000u;
  R(1)=sh4_getsr(c);
  R(1)|=R(0);
  sh4_setsr(c,R(1));
L8c0e3a5c:;
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setfpscr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;c->fpul=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setsr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->mach=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->vbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->gbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->spc=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->ssr=v;}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0e3cb0u;
  R(0)=0x2u;
  R(1)=LD32(R(1));
  R(0)<<=8;
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  { uint32_t k=!c->t; {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;} if(k) goto L8c0e3af8; }
  R(0)=c->vbr;
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;} sh4_call(c,tg); return; }
L8c0e3af8:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {  sh4_setsr(c,c->ssr); return; }
}
void f_8c0e3924(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  R(4)=0x200u;
  R(0)=0xac004000u;
  R(5)=0x2u;
  { uint32_t tg=R(0); c->pr=0x8c0e3936u;  sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=R(0);
  R(0)=0x8c0e3968u;
  ST32(R(0),R(1));
  R(1)=0xffffffffu;
  R(1)<<=16;
  R(1)<<=8;
  R(1)+=0x28u;
  R(1)=LD32(R(1));
  R(0)=0x8c0e3cb0u;
  ST32(R(0),R(1));
  R(1)=0x8c0e39a4u;
  R(0)=0x0u;
  {  goto L8c0e39a4; }
L8c0e39a4:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=c->ssr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->spc;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->gbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->vbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->mach;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=sh4_getsr(c);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpul;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpscr;R(15)-=4;ST32(R(15),v);}
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(0)=sh4_getsr(c);
  R(1)=0xefffffffu;
  R(0)&=R(1);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(3)=0xfffffffeu;
  R(3)<<=8;
  R(14)=c->vbr;
  R(4)=0x8c0e3cb0u;
  R(4)=LD32(R(4));
  R(2)=R(4);
  R(2)+=R(3);
  R(0)=0x2u;
  R(0)<<=8;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(14)+=R(2);
  R(14)=LD32(R(14)+R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e3a5c;
  { uint32_t tg=R(14); c->pr=0x8c0e3a54u;  sh4_call(c,tg); }
  R(0)=0x10000000u;
  R(1)=sh4_getsr(c);
  R(1)|=R(0);
  sh4_setsr(c,R(1));
L8c0e3a5c:;
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setfpscr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;c->fpul=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setsr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->mach=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->vbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->gbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->spc=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->ssr=v;}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0e3cb0u;
  R(0)=0x2u;
  R(1)=LD32(R(1));
  R(0)<<=8;
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  { uint32_t k=!c->t; {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;} if(k) goto L8c0e3af8; }
  R(0)=c->vbr;
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;} sh4_call(c,tg); return; }
L8c0e3af8:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {  sh4_setsr(c,c->ssr); return; }
}
void f_8c0e3974(SH4Ctx *c) {
  {  sh4_setsr(c,c->ssr); return; }
}
void f_8c0e3978(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  R(4)=0x200u;
  R(0)=0xac004000u;
  R(5)=0x3u;
  { uint32_t tg=R(0); c->pr=0x8c0e398au;  sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  sh4_setsr(c,c->ssr); return; }
}
void f_8c0e39a4(SH4Ctx *c) {
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=c->ssr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->spc;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->gbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->vbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->mach;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=sh4_getsr(c);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpul;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpscr;R(15)-=4;ST32(R(15),v);}
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(0)=sh4_getsr(c);
  R(1)=0xefffffffu;
  R(0)&=R(1);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(3)=0xfffffffeu;
  R(3)<<=8;
  R(14)=c->vbr;
  R(4)=0x8c0e3cb0u;
  R(4)=LD32(R(4));
  R(2)=R(4);
  R(2)+=R(3);
  R(0)=0x2u;
  R(0)<<=8;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(14)+=R(2);
  R(14)=LD32(R(14)+R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e3a5c;
  { uint32_t tg=R(14); c->pr=0x8c0e3a54u;  sh4_call(c,tg); }
  R(0)=0x10000000u;
  R(1)=sh4_getsr(c);
  R(1)|=R(0);
  sh4_setsr(c,R(1));
L8c0e3a5c:;
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setfpscr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;c->fpul=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setsr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->mach=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->vbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->gbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->spc=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->ssr=v;}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0e3cb0u;
  R(0)=0x2u;
  R(1)=LD32(R(1));
  R(0)<<=8;
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  { uint32_t k=!c->t; {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;} if(k) goto L8c0e3af8; }
  R(0)=c->vbr;
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;} sh4_call(c,tg); return; }
L8c0e3af8:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {  sh4_setsr(c,c->ssr); return; }
}
void f_8c0e3b0c(SH4Ctx *c) {
  R(1)=R(0);
  R(0)=0x8c0e3cbcu;
  {uint32_t v=R(1);R(0)-=4;ST32(R(0),v);}
  R(0)+=0xfffffffcu;
  R(1)=LD32(R(0));
  R(1)+=0x1u;
  ST32(R(0),R(1));
  R(0)+=0x4u;
  R(1)-=1;c->t=R(1)==0;
  R(0)=LD32(R(0));
  { uint32_t k=!c->t; {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;} if(k) goto L8c0e3b32; }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0e3ca8u;
  R(15)+=0x4u;
  ST32(R(0),R(15));
  R(15)+=0xfffffffcu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  R(15)=0x0u;
L8c0e3b32:;
  {uint32_t v=c->ssr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->spc;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->gbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->vbr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->mach;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=sh4_getsr(c);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpul;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->fpscr;R(15)-=4;ST32(R(15),v);}
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  sh4_frchg(c);
  R(0)=sh4_getsr(c);
  R(1)=0xefffffffu;
  R(0)&=R(1);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(3)=0xfffffffeu;
  R(3)<<=8;
  R(14)=c->vbr;
  R(0)=0x8c0e3cb0u;
  R(4)=LD32(R(0));
  R(2)=R(4);
  R(2)+=R(3);
  R(0)=0x2u;
  R(0)<<=8;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(14)+=R(2);
  R(14)=LD32(R(14)+R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e3be0;
  { uint32_t tg=R(14); c->pr=0x8c0e3be0u;  sh4_call(c,tg); }
L8c0e3be0:;
  R(0)=0x30000000u;
  R(1)=sh4_getsr(c);
  R(1)|=R(0);
  sh4_setsr(c,R(1));
  R(0)=0x8c0e3cb4u;
  R(1)=LD32(R(0));
  R(1)+=0xffffffffu;
  ST32(R(0),R(1));
  c->t=(R(1)&R(1))==0;
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setfpscr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;c->fpul=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->mach=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->vbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->gbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->spc=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->ssr=v;}
  if(!c->t) goto L8c0e3c76;
  R(15)=0x0u;
L8c0e3c76:;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0e3cb0u;
  R(0)=0x2u;
  R(1)=LD32(R(1));
  R(0)<<=8;
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  { uint32_t k=!c->t; {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;} if(k) goto L8c0e3c94; }
  R(0)=c->vbr;
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;} sh4_call(c,tg); return; }
L8c0e3c94:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {  sh4_setsr(c,c->ssr); return; }
}
void f_8c0e3cc4(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(1)=0xff000010u;
  R(7)=0x3fu;
  R(13)=0xf6000000u;
  R(0)=LD32(R(1));
  R(1)=0x100u;
  R(0)>>=16;
  R(0)>>=2;
  R(7)&=R(0);
  R(0)=0x40u;
  c->t=R(7)>=R(0);
  if(c->t) goto L8c0e3cf2;
L8c0e3cde:;
  R(2)=R(7);
  R(2)<<=8;
  R(2)+=R(13);
  R(3)=LD32(R(2));
  R(3)&=R(1);
  c->t=R(3)==R(1);
  if(!c->t) goto L8c0e3cf2;
  R(7)+=0x1u;
  c->t=R(7)>=R(0);
  if(!c->t) goto L8c0e3cde;
L8c0e3cf2:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c0e3cfe;
  R(4)=0xffu;
  {  goto L8c0e3d4e; }
L8c0e3cfe:;
  R(3)=0xfffffc00u;
  R(0)=(uint32_t)(int32_t)(int8_t)R(6);
  c->t=(int32_t)R(0)==1;
  R(5)&=R(3);
  R(5)|=R(1);
  ST32(R(15),R(5));
  if(c->t) goto L8c0e3d1c;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e3d22;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0e3d28;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0e3d30;
  {  goto L8c0e3d34; }
L8c0e3d1c:;
  R(5)=0x1ffffc00u;
  { R(6)=0x0u; goto L8c0e3d34; }
L8c0e3d22:;
  R(5)=0x1ffff000u;
  { R(6)=0x10u; goto L8c0e3d34; }
L8c0e3d28:;
  R(5)=0x1fff0000u;
  R(6)=0x80u;
  {  goto L8c0e3d34; }
L8c0e3d30:;
  R(5)=0x1ff00000u;
  R(6)=0x90u;
L8c0e3d34:;
  R(4)&=R(5);
  R(5)=R(7);
  R(5)<<=8;
  R(1)=0xf7000000u;
  R(3)=0x13eu;
  R(13)+=R(5);
  R(4)|=R(6);
  R(2)=LD32(R(15));
  R(4)|=R(3);
  R(5)+=R(1);
  ST32(R(13),R(2));
  ST32(R(5),R(4));
  R(4)=R(7);
L8c0e3d4e:;
  R(0)=R(4);
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c0e3d56(SH4Ctx *c) {
  R(3)=0x40u;
  c->t=R(4)>=R(3);
  if(c->t) goto L8c0e3d78;
  R(5)=R(4);
  R(5)<<=8;
  R(6)=0xf6000000u;
  R(2)=R(5);
  R(1)=0xfffffeffu;
  R(3)=0x0u;
  R(2)+=R(6);
  R(4)=LD32(R(2));
  R(6)+=R(5);
  R(2)=0xf7000000u;
  R(4)&=R(1);
  R(5)+=R(2);
  ST32(R(6),R(4));
  ST32(R(5),R(3));
L8c0e3d78:;
  {  return; }
}
void f_8c0e3dcc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c0f0cf4u;
  R(13)=0x8c0f44acu;
L8c0e3dd8:;
  { uint32_t tg=R(14); c->pr=0x8c0e3ddcu; R(4)=R(15); sh4_call(c,tg); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e3dd8;
  R(0)=0x110u;
  R(2)=LD32(R(13));
  R(3)=LD32(R(2)+R(0));
  R(3)+=0x1u;
  ST32(R(2)+R(0),R(3));
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e3dd8;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e3e08(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(14)=R(4);
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(6)=0x8c0f44acu;
  R(5)=0x0u;
  R(3)=LD32(R(14));
  R(4)=LD32(R(6));
  R(3)<<=2;
  R(2)=0xecu;
  R(3)<<=2;
  R(4)=LD32(R(4));
  c->t=R(3)>>31;R(3)<<=1;
  R(4)+=R(3);
  ST32(R(4)+20,R(5));
  R(4)=0x1u;
  ST32(R(14)+44,R(5));
  ST32(R(14)+48,R(4));
  R(0)=LD32(R(6));
  R(3)=LD32(R(14));
  R(2)+=R(0);
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=0x8c0f44a4u;
  R(1)=LD32(R(3));
  R(1)+=0x1u;
  ST32(R(3),R(1));
  R(1)=LD32(R(14));
  R(3)=LD32(R(2));
  R(1)+=0xfu;
  R(4)=sh4_shad(R(4),R(1));
  ST32(R(3),R(4));
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e3e68;
  R(3)=LD32(R(14)+28);
  { uint32_t tg=R(3); c->pr=0x8c0e3e68u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
L8c0e3e68:;
  R(0)=LD32(R(15));
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e3e90(SH4Ctx *c) {
  R(2)=0x8c0f44acu;
  R(4)=LD32(R(4));
  R(3)=LD32(R(2));
  R(4)<<=2;
  R(1)=LD32(R(3));
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(3)=R(1);
  R(4)+=R(3);
  R(0)=LD32(R(4)+24);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0e3eac;
  { R(1)=0x1u; goto L8c0e3eae; }
L8c0e3eac:;
  R(1)=0x0u;
L8c0e3eae:;
  ST32(R(5),R(1));
  { R(0)=0x0u; return; }
}
void f_8c0e3eb8(SH4Ctx *c) {
  R(7)=LD32(R(4));
  R(6)=0x34u;
  R(5)=0x8c0f44acu;
  c->macl=R(7)*R(6);
  R(3)=LD32(R(5));
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2),R(7));
  R(7)=0x0u;
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3)+40,R(7));
  R(2)=LD32(R(4));
  R(3)=LD32(R(5));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+44,R(7));
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3)+48,R(7));
  R(3)=LD32(R(5));
  R(2)=LD32(R(4));
  R(3)+=0x4u;
  c->macl=R(2)*R(6);
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+4,R(7));
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3)+8,R(7));
  R(2)=LD32(R(4));
  R(3)=LD32(R(5));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+12,R(7));
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3)+16,R(7));
  R(2)=LD32(R(4));
  R(3)=LD32(R(5));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+20,R(7));
  R(1)=0x3u;
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3)+24,R(1));
  R(2)=LD32(R(4));
  R(3)=LD32(R(5));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+28,R(7));
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(6)=c->macl;
  R(6)+=R(2);
  ST32(R(6)+32,R(7));
  R(1)=LD32(R(4));
  R(3)=LD32(R(5));
  R(1)<<=2;
  R(3)=LD32(R(3));
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(4)=R(1);
  ST32(R(4)+20,R(7));
  { R(0)=R(7); return; }
}
void f_8c0e3f84(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0xd0u;
  R(12)=0x8c0f44acu;
  R(11)=0x8c0f0d08u;
L8c0e3f96:;
  R(4)=LD32(R(12));
  R(4)+=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c0e3f9eu; R(4)+=R(14); sh4_call(c,tg); }
  R(14)+=0x34u;
  c->t=R(14)>=R(13);
  if(!c->t) goto L8c0e3f96;
  R(3)=0x8c2ef7fcu;
  R(2)=0x0u;
  R(0)=R(2);
  ST32(R(3),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e3fc8(SH4Ctx *c) {
  R(6)=0x7f00000u;
  R(3)=0x46590000u;
  R(4)&=R(6);
  R(2)=0xa05f78bcu;
  R(4)>>=16;
  R(5)&=R(6);
  R(4)>>=2;
  R(5)>>=16;
  R(4)>>=2;
  R(4)<<=8;
  R(5)>>=2;
  R(6)=R(4);
  R(5)>>=2;
  R(6)|=R(5);
  R(6)|=R(3);
  ST32(R(2),R(6));
  R(1)=0x8c0f44a8u;
  ST32(R(1),R(6));
  { R(0)=0x0u; return; }
}
void f_8c0e4000(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0xd0u;
  R(12)=0x8c0f44acu;
  R(11)=0x8c0f0d40u;
L8c0e4012:;
  R(4)=LD32(R(12));
  R(4)+=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c0e401au; R(4)+=R(14); sh4_call(c,tg); }
  R(14)+=0x34u;
  c->t=R(14)>=R(13);
  if(!c->t) goto L8c0e4012;
  R(3)=0x8c2ef7fcu;
  R(2)=0x1u;
  R(0)=0x0u;
  ST32(R(3),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e4044(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c0f0d80u;
  R(13)=0x8c0f44acu;
L8c0e4050:;
  { uint32_t tg=R(14); c->pr=0x8c0e4054u; R(4)=R(15); sh4_call(c,tg); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e4050;
  R(0)=0x10cu;
  R(2)=LD32(R(13));
  R(3)=LD32(R(2)+R(0));
  R(3)+=0x1u;
  ST32(R(2)+R(0),R(3));
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e4050;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e4080(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2f09fcu;
  R(3)=0x8c2ef900u;
  R(0)=0xfc4u;
  R(2)=R(3);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(14),R(3));
  ST32(R(2)+R(0),R(4));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(6));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14));
  R(6)=0x1fu;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(6))==0;
  { uint32_t k=c->t; R(5)=0xffffffe0u; if(k) goto L8c0e40be; }
  R(0)=0xfc4u;
  R(1)=LD32(R(14));
  R(3)=LD32(R(1)+R(0));
  R(3)+=0x20u;
  ST32(R(1)+R(0),R(3));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(2)&=R(5);
  ST32(R(3)+R(0),R(2));
L8c0e40be:;
  R(0)=0xfc8u;
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+R(0));
  c->t=(R(6)&R(3))==0;
  if(c->t) goto L8c0e40d6;
  R(3)=LD32(R(4)+R(0));
  R(3)+=0x20u;
  ST32(R(4)+R(0),R(3));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(2)&=R(5);
  ST32(R(3)+R(0),R(2));
L8c0e40d6:;
  R(0)=0xfc4u;
  R(3)=LD32(R(14));
  R(4)=0xa0000000u;
  R(2)=LD32(R(3)+R(0));
  R(2)|=R(4);
  ST32(R(3)+R(0),R(2));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(2)|=R(4);
  ST32(R(3)+R(0),R(2));
  R(3)=0x8c0e4a28u;
  { c->pr=0x8c0e40f2u;  f_8c0e4a28(c); }
  R(4)=0x8c0f4030u;
  R(11)=0x8c0e5878u;
  R(10)=R(4);
  R(10)+=0x10u;
  R(5)=R(4);
  R(12)=R(4);
  R(13)=R(4);
L8c0e4100:;
  R(2)=0xf90u;
  R(0)=LD32(R(14));
  R(3)=LD32(R(13));
  R(2)+=R(0);
  R(2)+=R(3);
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0e4114;
  { uint32_t tg=R(11); c->pr=0x8c0e4114u; R(4)=LD32(R(12)); sh4_call(c,tg); }
L8c0e4114:;
  R(13)+=0x4u;
  c->t=R(13)>=R(10);
  { uint32_t k=!c->t; R(12)+=0x4u; if(k) goto L8c0e4100; }
  R(2)=0x8c0e5c5cu;
  { c->pr=0x8c0e4122u;  f_8c0e5c5c(c); }
  R(0)=0xfc0u;
  R(4)=0x1u;
  R(3)=LD32(R(14));
  R(1)=0x6155404fu;
  ST32(R(3)+R(0),R(4));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)=0x8cu;
  ST32(R(2)+R(0),R(1));
  R(0)=0x10f4u;
  R(5)=0x0u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  ST32(R(2)+16,R(5));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)+=0xffffffdcu;
  R(1)=R(3);
  R(3)=LD32(R(3)+R(0));
  R(0)+=0xfffffff0u;
  R(1)=LD32(R(1)+R(0));
  R(0)=0x80u;
  R(1)|=R(3);
  ST32(R(2)+R(0),R(1));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  ST32(R(2)+20,R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(5);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e419c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c2ef900u;
  R(11)=0x1fu;
  R(14)=0x8c2f09fcu;
  R(12)=R(7);
  R(0)=0xfc4u;
  R(2)=R(3);
  ST32(R(15)+8,R(4));
  ST32(R(15),R(5));
  ST32(R(14),R(3));
  ST32(R(2)+R(0),R(6));
  R(3)=LD32(R(14));
  R(2)=LD32(R(15));
  R(0)=0xfc8u;
  ST32(R(3)+R(0),R(2));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(11))==0;
  { uint32_t k=c->t; R(9)=0xffffffe0u; if(k) goto L8c0e41e6; }
  R(0)=0xfc4u;
  R(1)=LD32(R(14));
  R(3)=LD32(R(1)+R(0));
  R(3)+=0x20u;
  ST32(R(1)+R(0),R(3));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(2)&=R(9);
  ST32(R(3)+R(0),R(2));
L8c0e41e6:;
  R(0)=0xfc8u;
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(11))==0;
  if(c->t) goto L8c0e41fe;
  R(3)=LD32(R(4)+R(0));
  R(3)+=0x20u;
  ST32(R(4)+R(0),R(3));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(2)&=R(9);
  ST32(R(3)+R(0),R(2));
L8c0e41fe:;
  R(0)=0xfc4u;
  R(3)=LD32(R(14));
  R(10)=0xa0000000u;
  R(2)=LD32(R(3)+R(0));
  R(2)|=R(10);
  ST32(R(3)+R(0),R(2));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(2)|=R(10);
  ST32(R(3)+R(0),R(2));
  R(3)=0x8c0e4a28u;
  { c->pr=0x8c0e421au;  f_8c0e4a28(c); }
  R(13)=0x0u;
  R(4)=R(13);
  R(5)=0x60u;
L8c0e4220:;
  R(3)=0xfe8u;
  R(2)=LD32(R(14));
  R(3)+=R(2);
  R(3)+=R(4);
  ST32(R(3),R(13));
  R(3)=0xfe8u;
  R(2)=LD32(R(14));
  R(3)+=R(2);
  R(3)+=R(4);
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  R(3)+=0x60u;
  { uint32_t k=!c->t; ST32(R(3),R(13)); if(k) goto L8c0e4220; }
  R(3)=LD32(R(15)+8);
  c->t=(int32_t)R(12)>0;
  R(7)=0x400u;
  ST32(R(15)+4,R(3));
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c0e428a; }
L8c0e4248:;
  R(4)=LD32(R(15));
  R(4)+=0x4u;
  ST32(R(15),R(4));
  R(4)+=0xfffffffcu;
  R(4)=LD32(R(4));
  R(3)=R(4);
  c->t=(R(3)&R(11))==0;
  if(c->t) goto L8c0e425c;
  R(4)+=0x20u;
  R(4)&=R(9);
L8c0e425c:;
  R(1)=LD32(R(15)+4);
  R(4)|=R(10);
  R(2)=0xfe8u;
  R(5)+=0x1u;
  R(1)+=0x4u;
  c->t=(int32_t)R(5)>=(int32_t)R(12);
  ST32(R(15)+4,R(1));
  R(1)+=0xfffffffcu;
  R(1)=LD32(R(1));
  R(3)=LD32(R(14));
  R(6)=R(1);
  R(6)<<=2;
  R(2)+=R(3);
  R(2)+=R(6);
  ST32(R(2),R(4));
  R(4)+=R(7);
  R(2)=0xfe8u;
  R(3)=LD32(R(14));
  R(2)+=R(3);
  R(6)+=R(2);
  R(6)+=0x60u;
  { uint32_t k=!c->t; ST32(R(6),R(4)); if(k) goto L8c0e4248; }
L8c0e428a:;
  R(2)=LD32(R(14));
  R(4)=R(13);
  R(0)=0xfc4u;
  R(5)=0x18u;
  R(3)=R(2);
  R(1)=LD32(R(3)+R(0));
  R(0)=0x10a8u;
  ST32(R(2)+R(0),R(1));
  R(1)=R(12);
  R(3)=LD32(R(14));
  R(1)<<=8;
  R(0)=0xfc4u;
  R(1)<<=2;
  R(2)=R(3);
  R(2)=LD32(R(2)+R(0));
  R(0)=0x10acu;
  R(1)+=R(2);
  ST32(R(3)+R(0),R(1));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14));
  R(2)=R(3);
  R(1)=LD32(R(2)+R(0));
  R(0)=0xfccu;
  ST32(R(3)+R(0),R(1));
L8c0e42ba:;
  R(3)=0xf90u;
  R(0)=LD32(R(14));
  R(3)+=R(0);
  R(3)+=R(4);
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  { uint32_t k=!c->t; ST8(R(3),R(13)); if(k) goto L8c0e42ba; }
  R(11)=LD32(R(15)+8);
  c->t=(int32_t)R(12)>0;
  R(7)=0x65u;
  R(5)=R(13);
  { uint32_t k=!c->t; R(6)=0x72u; if(k) goto L8c0e432e; }
L8c0e42d6:;
  {uint32_t v=LD32(R(11));R(11)+=4;R(4)=v;}
  R(0)=R(4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e4312;
  c->t=(int32_t)R(0)==6;
  {  goto L8c0e4304; }
L8c0e4304:;
  if(c->t) goto L8c0e4312;
  c->t=(int32_t)R(0)==12;
  if(c->t) goto L8c0e4312;
  c->t=(int32_t)R(0)==18;
  if(c->t) goto L8c0e4312;
  {  goto L8c0e431e; }
L8c0e4312:;
  R(3)=0xf90u;
  R(0)=LD32(R(14));
  R(3)+=R(0);
  R(4)+=R(3);
  { ST8(R(4),R(6)); goto L8c0e4328; }
L8c0e431e:;
  R(3)=0xf90u;
  R(0)=LD32(R(14));
  R(3)+=R(0);
  R(4)+=R(3);
  ST8(R(4),R(7));
L8c0e4328:;
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(12);
  if(!c->t) goto L8c0e42d6;
L8c0e432e:;
  R(4)=0x8c0f4030u;
  R(9)=0x8c0e5878u;
  R(10)=R(4);
  R(10)+=0x10u;
  R(5)=R(4);
  R(11)=R(4);
  R(12)=R(4);
L8c0e433c:;
  R(2)=0xf90u;
  R(0)=LD32(R(14));
  R(3)=LD32(R(12));
  R(2)+=R(0);
  R(2)+=R(3);
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0e4350;
  { uint32_t tg=R(9); c->pr=0x8c0e4350u; R(4)=LD32(R(11)); sh4_call(c,tg); }
L8c0e4350:;
  R(12)+=0x4u;
  c->t=R(12)>=R(10);
  { uint32_t k=!c->t; R(11)+=0x4u; if(k) goto L8c0e433c; }
  R(2)=0x8c0e5c5cu;
  { c->pr=0x8c0e435eu;  f_8c0e5c5c(c); }
  R(0)=0xfc0u;
  R(4)=0x1u;
  R(3)=LD32(R(14));
  R(1)=0x6155404fu;
  ST32(R(3)+R(0),R(4));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)=0x8cu;
  ST32(R(2)+R(0),R(1));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  ST32(R(2)+16,R(13));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)+=0xffffffdcu;
  R(1)=R(3);
  R(3)=LD32(R(3)+R(0));
  R(0)+=0xfffffff0u;
  R(1)=LD32(R(1)+R(0));
  R(0)=0x80u;
  R(1)|=R(3);
  ST32(R(2)+R(0),R(1));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  ST32(R(2)+20,R(4));
  R(0)=R(13);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e43aa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c2f09fcu;
  R(0)=0x10e4u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(10));
  R(11)=0x44cu;
  R(3)=LD32(R(14)+R(0));
  R(12)=R(14);
  R(12)+=0x28u;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(11)+=R(14); if(k) goto L8c0e43d4; }
  R(3)=0x8c0e4c94u;
  { c->pr=0x8c0e43d4u; R(4)=LD32(R(14)+R(0)); f_8c0e4c94(c); }
L8c0e43d4:;
  R(8)=0x8c0e5878u;
  R(13)=0x1u;
  R(9)=0x18u;
  { R(14)=0x0u; goto L8c0e448c; }
L8c0e4404:;
  R(3)=0xf90u;
  R(0)=LD32(R(10));
  R(3)+=R(0);
  R(3)+=R(14);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e4486;
  R(0)=(int32_t)(int8_t)LD8(R(12)+6);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e4486;
  R(0)=(int32_t)(int8_t)LD8(R(12)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e444e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e4456;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0e4460;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0e446a;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c0e4474;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c0e4486;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c0e4486;
  c->t=(int32_t)R(0)==12;
  if(c->t) goto L8c0e4486;
  c->t=(int32_t)R(0)==13;
  if(c->t) goto L8c0e4486;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e4486;
  R(1)=0xffu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e4486;
  {  goto L8c0e4486; }
L8c0e444e:;
  { uint32_t tg=R(8); c->pr=0x8c0e4452u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c0e4486; }
L8c0e4456:;
  R(2)=0x8c0e5944u;
  { c->pr=0x8c0e445cu; R(4)=R(14); f_8c0e5944(c); }
  {  goto L8c0e4486; }
L8c0e4460:;
  R(2)=0x8c0e5900u;
  { c->pr=0x8c0e4466u; R(4)=R(14); f_8c0e5900(c); }
  {  goto L8c0e4486; }
L8c0e446a:;
  R(2)=0x8c0e58bcu;
  { c->pr=0x8c0e4470u; R(4)=R(14); f_8c0e58bc(c); }
  {  goto L8c0e4486; }
L8c0e4474:;
  R(5)=LD32(R(11));
  R(2)=R(5);
  c->t=(R(2)&R(13))==0;
  { uint32_t k=c->t; R(4)=R(14); if(k) goto L8c0e4480; }
  R(5)=R(13);
L8c0e4480:;
  R(2)=0x8c0e5816u;
  { c->pr=0x8c0e4486u;  f_8c0e5816(c); }
L8c0e4486:;
  R(11)+=0x78u;
  R(12)+=0x2cu;
  R(14)+=0x1u;
L8c0e448c:;
  c->t=(int32_t)R(14)>=(int32_t)R(9);
  if(!c->t) goto L8c0e4404;
  R(3)=0x8c0e5c5cu;
  { c->pr=0x8c0e4496u;  f_8c0e5c5c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e44aa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2f09fcu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(1)=0xfc0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x1u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c0e44c8; }
  { R(0)=0xfffffffdu; goto L8c0e466e; }
L8c0e44c8:;
  R(0)=0x10f4u;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+R(0));
  R(1)=LD32(R(3)+24);
  c->t=(R(1)&R(12))==0;
  if(c->t) goto L8c0e44f8;
  { R(0)=0xffffffffu; goto L8c0e466e; }
L8c0e44f8:;
  R(3)=0x8c0e5cbcu;
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e450c;
  R(1)=0x8c0f3fc4u;
  { c->pr=0x8c0e4506u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  { R(0)=0xfffffffeu; goto L8c0e466e; }
L8c0e450c:;
  R(3)=LD32(R(14));
  R(0)=0xfacu;
  R(2)=R(3);
  R(1)=LD32(R(2)+R(0));
  R(0)+=0x4u;
  R(3)=LD32(R(3)+R(0));
  c->t=R(3)==R(1);
  if(c->t) goto L8c0e457a;
  R(3)=LD32(R(14));
  R(0)=0xfacu;
  R(2)=R(3);
  R(1)=LD32(R(2)+R(0));
  R(0)+=0x4u;
  ST32(R(3)+R(0),R(1));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e454e;
  R(1)=0x8c0f3a0cu;
  R(3)=0x3e8u;
  R(0)=LD32(R(1));
  R(2)=LD32(R(14));
  c->macl=R(0)*R(3);
  R(3)=0x8c067940u;
  R(1)=c->macl;
  { c->pr=0x8c0e4544u; R(0)=0x14u; f_8c067940(c); }
  R(1)=0x10c0u;
  R(0)<<=16;
  R(1)+=R(2);
  { ST32(R(1),R(0)); goto L8c0e4556; }
L8c0e454e:;
  R(0)=0x10c0u;
  R(2)=0xc3500000u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
L8c0e4556:;
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  ST32(R(2)+20,R(13));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)+=0xffffffdcu;
  R(1)=R(3);
  R(3)=LD32(R(3)+R(0));
  R(0)+=0xfffffff0u;
  R(1)=LD32(R(1)+R(0));
  R(0)=0x80u;
  R(1)|=R(3);
  ST32(R(2)+R(0),R(1));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  ST32(R(2)+20,R(12));
L8c0e457a:;
  { c->pr=0x8c0e457eu;  f_8c0e43aa(c); }
  R(2)=LD32(R(14));
  R(1)=0x10b8u;
  R(3)=R(2);
  R(0)=R(2);
  R(1)+=R(3);
  R(3)=0x10a8u;
  R(1)=LD32(R(1));
  R(3)+=R(0);
  R(1)<<=2;
  R(1)+=R(3);
  R(0)=LD32(R(1));
  R(1)=0x10b0u;
  R(1)+=R(2);
  R(2)=0x8c0e5c86u;
  ST32(R(1),R(0));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(1)=0x10b8u;
  R(4)=R(3);
  R(8)=LD32(R(3)+R(0));
  R(1)+=R(4);
  R(0)=R(3);
  R(3)=0x10a8u;
  R(8)+=0x4u;
  R(4)=LD32(R(1));
  R(3)+=R(0);
  R(4)<<=2;
  R(4)+=R(3);
  { uint32_t tg=R(2); c->pr=0x8c0e45bau; R(4)=LD32(R(4)); sh4_call(c,tg); }
  ST32(R(8),R(0));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  ST32(R(2)+24,R(12));
  R(0)=0xfd8u;
  R(3)=LD32(R(14));
  R(1)=0x10b8u;
  ST32(R(3)+R(0),R(13));
  R(0)=0x10b8u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(2)^=R(12);
  ST32(R(3)+R(0),R(2));
  R(3)=LD32(R(14));
  R(2)=R(3);
  R(1)+=R(2);
  R(2)=0x10a8u;
  R(0)=R(3);
  R(1)=LD32(R(1));
  R(2)+=R(0);
  R(1)<<=2;
  R(1)+=R(2);
  R(0)=LD32(R(1));
  R(1)=0xfccu;
  R(1)+=R(3);
  ST32(R(1),R(0));
  R(0)=0x10b4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(2)^=R(12);
  ST32(R(3)+R(0),R(2));
  R(0)=0xfdcu;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(4)=LD32(R(14));
  R(4)+=0x28u;
  R(5)=R(13);
  { R(6)=0x18u; goto L8c0e465c; }
L8c0e463c:;
  R(3)=0xf90u;
  R(0)=LD32(R(14));
  R(3)+=R(0);
  R(3)+=R(5);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(5)+=0x1u; if(k) goto L8c0e465a; }
  R(0)=(int32_t)(int8_t)LD8(R(4)+6);
  ST8(R(4)+7,R(0));
  R(0)=R(13);
  ST8(R(4)+6,R(0));
  R(3)=LD32(R(4)+24);
  ST32(R(4)+28,R(3));
  ST32(R(4)+24,R(0));
L8c0e465a:;
  R(4)+=0x2cu;
L8c0e465c:;
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(!c->t) goto L8c0e463c;
  R(0)=0xfc0u;
  R(3)=LD32(R(14));
  R(2)=0x8c0e5cbcu;
  ST32(R(3)+R(0),R(13));
  R(0)=R(13);
  R(3)=LD32(R(2));
  ST8(R(3),R(13));
L8c0e466e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e467a(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(0)=0xfc0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(3));
  R(2)=LD32(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e468e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffdu; return; }
L8c0e468e:;
  R(0)=0x10f4u;
  R(3)=LD32(R(4)+R(0));
  R(0)=LD32(R(3)+24);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0e469e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0e469e:;
  R(3)=0x8c0e5cbcu;
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e46b4;
  R(1)=0x8c0f3fc4u;
  { c->pr=0x8c0e46acu; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e46b4:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e46bc(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(1)=0x1u;
  R(0)=0xfc0u;
  R(3)=LD32(R(2));
  R(2)=0x0u;
  ST32(R(3)+R(0),R(1));
  R(1)=0x8c0e5cbcu;
  R(3)=LD32(R(1));
  ST8(R(3),R(2));
  { R(0)=R(2); return; }
}
void f_8c0e46d2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0x6u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(8)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c2f09fcu;
  { R(14)=R(8); goto L8c0e473a; }
L8c0e46ec:;
  R(0)=0x8c0f4030u;
  R(3)=R(14);
  R(3)<<=2;
  R(1)=0xf90u;
  R(2)=LD32(R(3)+R(0));
  R(0)=LD32(R(10));
  R(1)+=R(0);
  R(2)+=R(1);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e4738;
  R(2)=0x8c0e5216u;
  { c->pr=0x8c0e4708u; R(4)=R(14); f_8c0e5216(c); }
  R(3)=R(14);
  R(4)=R(14);
  R(3)<<=2;
  R(11)=R(8);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(12)=R(4);
  R(13)=R(4);
L8c0e4718:;
  R(3)=0xf90u;
  R(0)=LD32(R(10));
  R(3)+=R(0);
  R(3)+=R(12);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e472e;
  R(3)=0x8c0e52dcu;
  R(5)=R(14);
  { c->pr=0x8c0e472eu; R(4)=R(13); f_8c0e52dc(c); }
L8c0e472e:;
  R(11)+=0x1u;
  c->t=(int32_t)R(11)>=(int32_t)R(9);
  R(13)+=0x1u;
  { uint32_t k=!c->t; R(12)+=0x1u; if(k) goto L8c0e4718; }
L8c0e4738:;
  R(14)+=0x1u;
L8c0e473a:;
  R(3)=0x4u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c0e46ec;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e4774(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0d115eu;
  { c->pr=0x8c0e4788u;  f_8c0d115e(c); }
  R(11)=0x8c0d1168u;
  R(9)=R(0);
  R(14)=0x8c2f09fcu;
  R(10)=0x186a0u;
  { R(12)=0x1u; goto L8c0e47a2; }
L8c0e4794:;
  { uint32_t tg=R(13); c->pr=0x8c0e4798u;  sh4_call(c,tg); }
  R(5)=R(0);
  { uint32_t tg=R(11); c->pr=0x8c0e479eu; R(4)=R(9); sh4_call(c,tg); }
  c->t=(int32_t)R(0)>(int32_t)R(10);
  if(c->t) goto L8c0e47ae;
L8c0e47a2:;
  R(0)=0x10f4u;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+R(0));
  R(1)=LD32(R(3)+24);
  c->t=(R(1)&R(12))==0;
  if(!c->t) goto L8c0e4794;
L8c0e47ae:;
  R(0)=0x10f4u;
  R(4)=0x0u;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+R(0));
  ST32(R(3)+24,R(4));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  ST32(R(2)+20,R(4));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  ST32(R(2)+16,R(4));
  R(3)=LD32(R(14));
  R(1)=0x6155404fu;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x8cu;
  ST32(R(2)+R(0),R(1));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(1)=0xc3500000u;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x80u;
  ST32(R(2)+R(0),R(1));
  R(0)=0x10f4u;
  R(3)=LD32(R(14));
  R(1)=0xcff0000u;
  R(2)=LD32(R(3)+R(0));
  { uint32_t tg=R(13); c->pr=0x8c0e47e6u; ST32(R(2)+4,R(1)); sh4_call(c,tg); }
  R(10)=0x4268u;
  { R(9)=R(0); goto L8c0e47fa; }
L8c0e47ec:;
  { uint32_t tg=R(13); c->pr=0x8c0e47f0u;  sh4_call(c,tg); }
  R(5)=R(0);
  { uint32_t tg=R(11); c->pr=0x8c0e47f6u; R(4)=R(9); sh4_call(c,tg); }
  c->t=(int32_t)R(0)>(int32_t)R(10);
  if(c->t) goto L8c0e4806;
L8c0e47fa:;
  R(0)=0x10f4u;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+R(0));
  R(1)=LD32(R(3)+24);
  c->t=(R(1)&R(12))==0;
  if(!c->t) goto L8c0e47ec;
L8c0e4806:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e4818(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(0)=0x10c8u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0e485a;
  R(0)=R(15);
  R(0)+=0x8u;
  R(5)=0x3u;
  R(0)+=0x4u;
  c->t=(R(5)&R(0))==0;
  if(c->t) goto L8c0e483c;
  R(5)=R(15);
  R(5)+=0x8u;
  { R(5)+=0x8u; goto L8c0e4842; }
L8c0e483c:;
  R(5)=R(15);
  R(5)+=0x8u;
  R(5)+=0x4u;
L8c0e4842:;
  R(3)=0x8c019e6cu;
  R(6)=R(5);
  R(4)=0x8c2ef800u;
  { c->pr=0x8c0e484cu; R(5)=LD32(R(15)+8); f_8c019e6c(c); }
  R(2)=0x8c0f44b0u;
  R(14)=LD32(R(2));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e485a;
  R(4)=0x8c2ef800u;
  { uint32_t tg=R(14); c->pr=0x8c0e485au;  sh4_call(c,tg); }
L8c0e485a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e4860(SH4Ctx *c) {
  R(2)=0x2cu;
  R(3)=0x8c2f09fcu;
  c->macl=R(4)*R(2);
  R(0)=LD32(R(3));
  R(0)+=0x28u;
  R(4)=c->macl;
  { R(0)+=R(4); return; }
}
void f_8c0e4870(SH4Ctx *c) {
  R(2)=0x78u;
  R(3)=0x8c2f09fcu;
  c->macl=R(4)*R(2);
  R(1)=0x44cu;
  R(0)=LD32(R(3));
  R(4)=c->macl;
  R(0)+=R(1);
  { R(0)+=R(4); return; }
}
void f_8c0e4882(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(0)=LD32(R(3));
  R(0)+=0x4u;
  { R(0)+=R(4); return; }
}
void f_8c0e48c4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c0e48ccu; ST32(R(15),R(5)); f_8c0e4860(c); }
  R(4)=R(0);
  R(3)=LD32(R(4)+32);
  R(2)=LD32(R(15));
  c->t=R(3)==R(2);
  R(0)=c->t;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e48de(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e48e4u;  f_8c0e4860(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+12);
  { R(0)=R(0)&0xFF; return; }
}
void f_8c0e48ee(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e48f4u;  f_8c0e4860(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(0);
  R(0)=0x1u;
  { ST8(R(4)+13,R(0)); return; }
}
void f_8c0e48fe(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(4)<<=16;
  R(0)=0x10c0u;
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e490a(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0x10c0u;
  R(0)=LD32(R(3));
  R(0)=LD32(R(1)+R(0));
  R(0)>>=16;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  { R(0)=R(0)&0xFFFF; return; }
}
void f_8c0e491a(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(1)=0x1u;
  R(0)=0x10c4u;
  R(4)&=R(1);
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e4928(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0x10c4u;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e4932(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(0)=0x10ccu;
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e493c(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0x10ccu;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e4946(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(0)=0x10d0u;
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e4950(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0x10d0u;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e495a(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0e4964;
  R(3)=0x8c0f4040u;
  R(2)=LD32(R(3));
  ST32(R(4),R(2));
L8c0e4964:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0e496e;
  R(1)=0x8c0f4044u;
  R(0)=LD32(R(1));
  ST32(R(5),R(0));
L8c0e496e:;
  {  return; }
}
void f_8c0e4972(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(0)=0x10c8u;
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e497c(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0x10c8u;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e4986(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(0)=0x10d8u;
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e4990(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0x10d8u;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e499a(SH4Ctx *c) {
  R(5)=0x8c2f09fcu;
  R(0)=0x10e0u;
  R(3)=LD32(R(5));
  ST32(R(3)+R(0),R(4));
  R(0)+=0x4u;
  R(3)=LD32(R(5));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e49aa(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0x10e4u;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e49b4(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0x10b0u;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e49be(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(0)=0x10dcu;
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e49c8(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0x10dcu;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e49d2(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(0)=0xfacu;
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e49dc(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0xfb0u;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e4a0c(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(0)=0xfbcu;
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c0e4a16(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(1)=0xfbcu;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0e4a28(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c2f09fcu;
  R(13)=0x0u;
  R(0)=0x10b4u;
  R(4)=R(13);
  R(3)=LD32(R(14));
  R(12)=0x60u;
  R(6)=0x6000u;
  R(7)=R(13);
  ST32(R(3)+R(0),R(13));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  R(5)=0x400u;
  ST32(R(3)+R(0),R(13));
L8c0e4a54:;
  R(0)=0xfc8u;
  R(3)=LD32(R(14));
  R(2)=0xfe8u;
  R(1)=LD32(R(3)+R(0));
  R(2)+=R(3);
  R(1)+=R(7);
  R(2)+=R(4);
  ST32(R(2),R(1));
  R(2)=0xfe8u;
  R(3)=LD32(R(14));
  R(1)=LD32(R(3)+R(0));
  R(2)+=R(3);
  R(2)+=R(4);
  R(4)+=0x4u;
  R(1)+=R(6);
  c->t=R(4)>=R(12);
  R(2)+=0x60u;
  ST32(R(2),R(1));
  R(6)+=R(5);
  { uint32_t k=!c->t; R(7)+=R(5); if(k) goto L8c0e4a54; }
  R(2)=LD32(R(14));
  R(6)=0x8u;
  R(0)=0xfc4u;
  R(5)=0x0u;
  R(3)=R(2);
  R(1)=LD32(R(3)+R(0));
  R(0)=0x10a8u;
  ST32(R(2)+R(0),R(1));
  R(3)=LD32(R(14));
  R(0)=0xfc4u;
  R(2)=R(3);
  R(1)=0x3000u;
  R(2)=LD32(R(2)+R(0));
  R(0)=0x10acu;
  R(2)+=R(1);
  ST32(R(3)+R(0),R(2));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14));
  R(2)=R(3);
  R(2)=LD32(R(2)+R(0));
  R(0)=0xfccu;
  ST32(R(3)+R(0),R(2));
  R(4)=LD32(R(14));
  R(3)=0x8c0e5c70u;
  { c->pr=0x8c0e4ab2u; R(4)+=0x4u; f_8c0e5c70(c); }
  R(4)=LD32(R(14));
  R(5)=0x0u;
  R(3)=0x8c0e5c70u;
  R(6)=0x108u;
  { c->pr=0x8c0e4abeu; R(4)+=0x28u; f_8c0e5c70(c); }
  R(11)=0xb40u;
  R(12)=R(13);
L8c0e4ac2:;
  R(3)=0x44cu;
  R(4)=LD32(R(14));
  R(4)+=R(3);
  { c->pr=0x8c0e4accu; R(4)+=R(12); f_8c0e579a(c); }
  R(12)+=0x78u;
  c->t=R(12)>=R(11);
  if(!c->t) goto L8c0e4ac2;
  R(4)=R(13);
  R(5)=0x18u;
L8c0e4ad6:;
  R(3)=0xf90u;
  R(0)=LD32(R(14));
  R(3)+=R(0);
  R(3)+=R(4);
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  { uint32_t k=!c->t; ST8(R(3),R(13)); if(k) goto L8c0e4ad6; }
  R(2)=0x8c0f3fecu;
  R(1)=R(15);
  R(3)=0x8c09c49cu;
  R(4)=R(15);
  R(4)+=0x4u;
  R(1)+=0x4u;
  { c->pr=0x8c0e4af6u; R(0)=0x4u; f_8c09c49c(c); }
  R(0)=0xa05f689cu;
  R(1)=LD32(R(0));
  R(3)=0x1u;
  R(1)=R(1)&0xFF;
  c->t=(int32_t)R(1)>(int32_t)R(3);
  { uint32_t k=c->t; R(11)=R(13); if(k) goto L8c0e4b38; }
  { R(9)=0x7u; goto L8c0e4b3a; }
L8c0e4b38:;
  R(9)=0xfu;
L8c0e4b3a:;
  R(5)=R(4);
  R(4)+=0x4u;
  R(6)=0x5u;
  ST32(R(15),R(4));
  R(7)=R(13);
  R(8)=0x52u;
  R(10)=0x45u;
L8c0e4b48:;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(2)=(uint32_t)(int32_t)(int8_t)R(9);
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0e4b72;
  R(3)=0xf90u;
  R(4)=R(11);
  R(0)=LD32(R(14));
  R(4)+=0x1u;
  R(12)=R(13);
  R(3)+=R(0);
  R(3)+=R(7);
  ST8(R(3),R(8));
L8c0e4b60:;
  R(3)=0xf90u;
  R(12)+=0x1u;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(12)>=(int32_t)R(6);
  R(3)+=R(0);
  R(3)+=R(4);
  ST8(R(3),R(10));
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0e4b60; }
L8c0e4b72:;
  R(3)=LD32(R(15));
  R(5)+=0x1u;
  R(11)+=0x6u;
  c->t=R(5)>=R(3);
  { uint32_t k=!c->t; R(7)+=0x6u; if(k) goto L8c0e4b48; }
  R(0)=0x10c0u;
  R(3)=0xc3500000u;
  R(1)=LD32(R(14));
  ST32(R(1)+R(0),R(3));
  R(0)=0xfdcu;
  R(2)=LD32(R(14));
  ST32(R(2)+R(0),R(13));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14));
  R(2)=0x1u;
  ST32(R(3)+R(0),R(13));
  R(0)+=0x8u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(2)=0xau;
  R(0)=0x10c8u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(0)+=0x24u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(0)+=0xffffffe4u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(6));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(0)+=0x8u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  R(2)=0x54524f50u;
  ST32(R(3)+R(0),R(6));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(0)=0xfacu;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(0)+=0xcu;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(3)=LD32(R(14));
  R(0)=0x448u;
  ST32(R(3),R(2));
  R(2)=0x20564544u;
  R(3)=LD32(R(14));
  ST32(R(3)+36,R(2));
  R(2)=0x4f464e49u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(0)=0xf8cu;
  R(2)=0x4c424e45u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(0)+=0x1cu;
  R(2)=0x54415453u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(0)+=0x3cu;
  R(2)=0x52444152u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(0)=0x10bcu;
  R(2)=0x54554f54u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(0)+=0x18u;
  R(2)=0x43515244u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(0)+=0x1cu;
  R(2)=0x434e5546u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(0)+=0x8u;
  R(2)=0x20444e45u;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(3)=0x8c0e491au;
  { c->pr=0x8c0e4c36u; R(4)=0x0u; f_8c0e491a(c); }
  R(2)=0x8c0e5c90u;
  { c->pr=0x8c0e4c3cu;  f_8c0e5c90(c); }
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
void f_8c0e4c94(SH4Ctx *c) {
  R(5)=0x8c2f09fcu;
  c->t=(int32_t)R(4)>0;
  R(0)=0xfccu;
  R(3)=LD32(R(5));
  R(1)=R(0);
  R(1)+=0xcu;
  R(2)=R(3);
  R(1)+=R(2);
  R(1)=LD32(R(1));
  R(2)=LD32(R(3)+R(0));
  R(1)<<=2;
  R(7)=0x700u;
  R(2)+=R(1);
  ST32(R(3)+R(0),R(2));
  R(1)=LD32(R(5));
  R(1)=LD32(R(1)+R(0));
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c0e4cc2; }
L8c0e4cb8:;
  R(6)+=0x1u;
  ST32(R(1),R(7));
  c->t=(int32_t)R(6)>=(int32_t)R(4);
  { uint32_t k=!c->t; R(1)+=0x4u; if(k) goto L8c0e4cb8; }
L8c0e4cc2:;
  R(0)=0xfd8u;
  R(2)=LD32(R(5));
  ST32(R(2)+R(0),R(4));
  R(0)+=0x4u;
  R(3)=LD32(R(5));
  R(4)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(2)+=R(4);
  ST32(R(3)+R(0),R(2));
  { R(0)=0x0u; return; }
}
void f_8c0e4cd8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(10)=0x2cu;
  R(9)=R(4);
  c->macl=R(9)*R(10);
  R(14)=0x8c2f09fcu;
  R(0)=R(5);
  ST8(R(15)+4,R(0));
  R(0)=0x40u;
  ST32(R(15)+24,R(6));
  R(4)=LD32(R(14));
  R(10)=c->macl;
  R(3)=R(4);
  R(3)+=0x28u;
  R(12)=LD32(R(15)+R(0));
  R(3)+=R(10);
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(11)=R(7); if(k) goto L8c0e4d1c; }
  { R(0)=0xffffffffu; goto L8c0e4f2e; }
L8c0e4d1c:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(2)=R(15);
  R(5)=0xc0u;
  R(2)+=0x10u;
  ST8(R(3)+6,R(0));
  R(8)=R(11);
  R(0)=0x8c0f4018u;
  R(8)+=R(12);
  R(4)=R(8);
  R(4)+=0x3u;
  ST32(R(15)+8,R(4));
  R(4)=0x3u;
  R(3)=(int32_t)(int8_t)LD8(R(9)+R(0));
  R(0)=0x10ccu;
  R(5)&=R(3);
  ST8(R(2),R(3));
  R(5)=R(5)&0xFF;
  ST32(R(15)+12,R(5));
  R(2)=0xfffffffau;
  R(5)=sh4_shad(R(5),R(2));
  R(5)&=R(4);
  ST32(R(15),R(5));
  R(13)=LD32(R(14));
  R(2)=R(13);
  R(3)=LD32(R(2)+R(0));
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0e4d72;
  R(0)=0xfd8u;
  R(1)=LD32(R(13)+R(0));
  c->t=(int32_t)R(1)>0;
  if(!c->t) goto L8c0e4d72;
  R(0)=0xfccu;
  R(2)=LD32(R(13)+R(0));
  R(3)=LD32(R(2));
  R(3)>>=16;
  R(3)=(uint32_t)(int32_t)(int16_t)R(3);
  R(4)&=R(3);
  R(3)=LD32(R(15));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0e4d72;
  R(0)=0x10ccu;
  { c->pr=0x8c0e4d72u; R(4)=LD32(R(13)+R(0)); f_8c0e4c94(c); }
L8c0e4d72:;
  R(0)=0xfccu;
  R(2)=LD32(R(14));
  R(1)=R(0);
  R(1)+=0xcu;
  R(3)=R(2);
  R(1)+=R(3);
  R(1)=LD32(R(1));
  R(3)=LD32(R(2)+R(0));
  R(1)<<=2;
  R(3)+=R(1);
  ST32(R(2)+R(0),R(3));
  R(1)=R(8)&0xFF;
  R(2)=LD32(R(15));
  R(13)=LD32(R(14));
  R(2)<<=16;
  R(13)=LD32(R(13)+R(0));
  R(2)|=R(1);
  ST32(R(15)+20,R(1));
  R(1)=0x10b4u;
  ST32(R(13),R(2));
  R(13)+=0x4u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)+=0x4u;
  R(0)=LD32(R(14));
  R(3)=R(0);
  R(1)+=R(3);
  R(3)=LD32(R(1));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)<<=2;
  R(2)=0xfe8u;
  R(4)=R(9);
  c->t=R(3)>>31;R(3)<<=1;
  R(0)+=R(2);
  R(4)<<=2;
  R(0)+=R(3);
  { c->pr=0x8c0e4dc2u; R(4)=LD32(R(4)+R(0)); f_8c0e5c86(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(1)=0x10c4u;
  ST32(R(2),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(6)=0xff00u;
  R(0)=R(0)&0xFF;
  R(7)=LD32(R(15)+24);
  ST32(R(15),R(0));
  R(0)=0x10u;
  R(9)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=LD32(R(14));
  R(4)=0xff0000u;
  R(0)=LD32(R(1)+R(0));
  R(5)=0xff000000u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(9)=R(9)&0xFF; if(k) goto L8c0e4e38; }
  R(3)=LD32(R(15));
  R(9)<<=16;
  R(0)=LD32(R(15)+12);
  R(9)&=R(4);
  R(3)<<=16;
  c->t=(int32_t)R(11)>0;
  R(3)<<=8;
  R(0)<<=8;
  R(3)&=R(5);
  R(0)&=R(6);
  R(3)|=R(9);
  R(3)|=R(0);
  R(0)=LD32(R(15)+20);
  R(3)|=R(0);
  ST32(R(13),R(3));
  R(13)+=0x4u;
  { uint32_t k=!c->t; R(9)=0x0u; if(k) goto L8c0e4e8c; }
L8c0e4e08:;
  {uint32_t v=LD32(R(7));R(7)+=4;R(3)=v;}
  R(9)+=0x1u;
  c->t=(int32_t)R(9)>=(int32_t)R(11);
  ST32(R(13),R(3));
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0e4e08; }
  {  goto L8c0e4e8c; }
L8c0e4e38:;
  R(3)=LD32(R(15)+12);
  R(9)<<=8;
  R(8)<<=16;
  R(0)=LD32(R(15));
  R(3)<<=16;
  c->t=(int32_t)R(11)>0;
  R(8)<<=8;
  R(3)&=R(4);
  R(9)&=R(6);
  R(8)&=R(5);
  R(3)|=R(9);
  R(3)|=R(8);
  R(3)|=R(0);
  ST32(R(13),R(3));
  R(13)+=0x4u;
  { uint32_t k=!c->t; R(8)=0x0u; if(k) goto L8c0e4e8c; }
L8c0e4e5a:;
  {uint32_t v=LD32(R(7));R(7)+=4;R(9)=v;}
  R(8)+=0x1u;
  c->t=(int32_t)R(8)>=(int32_t)R(11);
  R(2)=R(9);
  R(3)=R(9);
  R(2)<<=16;
  R(1)=R(9);
  R(3)<<=8;
  R(2)<<=8;
  R(3)&=R(4);
  R(2)&=R(5);
  R(2)|=R(3);
  R(3)=0xfffffff8u;
  R(1)=sh4_shad(R(1),R(3));
  R(1)&=R(6);
  R(2)|=R(1);
  R(1)=R(9);
  R(1)>>=16;
  R(1)>>=8;
  R(1)=(uint32_t)(int32_t)(int8_t)R(1);
  R(1)=R(1)&0xFF;
  R(2)|=R(1);
  ST32(R(13),R(2));
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0e4e5a; }
L8c0e4e8c:;
  R(1)=0x10c4u;
  R(0)=LD32(R(14));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e4ece;
  R(7)=LD32(R(15)+60);
  c->t=(int32_t)R(12)>0;
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c0e4ee2; }
L8c0e4e9e:;
  R(0)=(int32_t)(int8_t)LD8(R(7)+1);
  R(11)+=0x1u;
  R(1)=(int32_t)(int8_t)LD8(R(7));
  c->t=(int32_t)R(11)>=(int32_t)R(12);
  R(0)<<=16;
  R(0)&=R(4);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(7)+2);
  R(1)<<=16;
  R(0)<<=8;
  R(0)&=R(6);
  R(3)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(7)+3);
  R(1)<<=8;
  R(1)&=R(5);
  R(0)=R(0)&0xFF;
  R(3)|=R(1);
  R(3)|=R(0);
  ST32(R(13),R(3));
  R(13)+=0x4u;
  { uint32_t k=!c->t; R(7)+=0x4u; if(k) goto L8c0e4e9e; }
  {  goto L8c0e4ee2; }
L8c0e4ece:;
  R(5)=LD32(R(15)+60);
  c->t=(int32_t)R(12)>0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c0e4ee2; }
L8c0e4ed6:;
  {uint32_t v=LD32(R(5));R(5)+=4;R(3)=v;}
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(12);
  ST32(R(13),R(3));
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0e4ed6; }
L8c0e4ee2:;
  R(0)=0xfd8u;
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(2));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(15)+8);
  R(1)=LD32(R(3)+R(0));
  R(2)<<=2;
  R(1)+=R(2);
  ST32(R(3)+R(0),R(1));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(14));
  R(1)=LD32(R(3)+R(0));
  R(2)+=0x28u;
  R(1)+=0x1u;
  ST32(R(3)+R(0),R(1));
  R(1)+=0xffffffffu;
  R(2)+=R(10);
  ST32(R(2)+24,R(1));
  R(3)=LD32(R(14));
  R(2)=0x7fffffffu;
  R(1)=LD32(R(3)+R(0));
  R(1)&=R(2);
  ST32(R(3)+R(0),R(1));
  R(3)=LD32(R(14));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0e4f26;
  R(0)=0xfe0u;
  R(3)=0x1u;
  R(1)=LD32(R(14));
  ST32(R(1)+R(0),R(3));
L8c0e4f26:;
  R(0)=LD32(R(14));
  R(0)+=0x28u;
  R(0)+=R(10);
  R(0)=LD32(R(0)+24);
L8c0e4f2e:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e4f4a(SH4Ctx *c) {
  R(15)+=0xffffffffu;
  { f_8c0e4f4c(c); return; }
}
void f_8c0e4f4c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(0)=0x10u;
  R(10)=R(7);
  R(2)=R(15);
  R(2)+=0xcu;
  ST32(R(15),R(4));
  R(12)=R(7);
  ST8(R(15)+R(0),R(5));
  R(5)=0x3u;
  R(0)=0x8c0f4018u;
  R(13)=0x8c2f09fcu;
  ST32(R(15)+4,R(6));
  R(11)=LD32(R(15)+60);
  R(10)+=R(11);
  R(4)=R(10);
  R(4)+=0x3u;
  ST32(R(15)+8,R(4));
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(3)=0xfffffffau;
  ST8(R(15)+12,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(2));
  R(14)=LD32(R(13));
  R(0)&=0xc0u;
  R(4)=R(0);
  R(0)=0x10ccu;
  R(8)=R(4)&0xFF;
  R(2)=LD32(R(14)+R(0));
  R(9)=R(8);
  R(9)=sh4_shad(R(9),R(3));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(9)&=R(5); if(k) goto L8c0e4fbc; }
  R(0)=0xfd8u;
  R(1)=LD32(R(14)+R(0));
  c->t=(int32_t)R(1)>0;
  if(!c->t) goto L8c0e4fbc;
  R(0)=0xfccu;
  R(4)=LD32(R(14)+R(0));
  R(4)=LD32(R(4));
  R(4)>>=16;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)&=R(5);
  c->t=R(9)==R(4);
  if(!c->t) goto L8c0e4fbc;
  R(0)=0x10ccu;
  { c->pr=0x8c0e4fbcu; R(4)=LD32(R(14)+R(0)); f_8c0e4c94(c); }
L8c0e4fbc:;
  R(0)=0xfccu;
  R(9)<<=16;
  R(2)=LD32(R(13));
  R(1)=R(0);
  R(1)+=0xcu;
  R(3)=R(2);
  R(1)+=R(3);
  R(1)=LD32(R(1));
  R(3)=LD32(R(2)+R(0));
  R(1)<<=2;
  R(3)+=R(1);
  R(1)=0x10b4u;
  ST32(R(2)+R(0),R(3));
  R(2)=R(10)&0xFF;
  R(14)=LD32(R(13));
  R(9)|=R(2);
  R(14)=LD32(R(14)+R(0));
  ST32(R(15)+20,R(2));
  ST32(R(14),R(9));
  R(14)+=0x4u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)+=0x4u;
  R(0)=LD32(R(13));
  R(3)=R(0);
  R(1)+=R(3);
  R(3)=LD32(R(1));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(2)=0xfe8u;
  R(4)=LD32(R(15)+4);
  R(0)+=R(2);
  R(4)<<=2;
  R(0)+=R(3);
  { c->pr=0x8c0e500au; R(4)=LD32(R(4)+R(0)); f_8c0e5c86(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(1)=0x10c4u;
  ST32(R(2),R(0));
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(5)=0xff0000u;
  R(6)=0xff00u;
  R(3)=R(3)&0xFF;
  R(7)=LD32(R(15)+4);
  R(4)=0xff000000u;
  ST32(R(15)+4,R(3));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(0)=R(0)&0xFF;
  ST32(R(15),R(0));
  R(0)=LD32(R(13));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(9)=0x0u; if(k) goto L8c0e5084; }
  R(3)=LD32(R(15)+4);
  R(8)<<=8;
  R(0)=LD32(R(15));
  R(8)&=R(6);
  R(3)<<=16;
  c->t=(int32_t)R(12)>0;
  R(0)<<=16;
  R(3)<<=8;
  R(0)&=R(5);
  R(3)&=R(4);
  R(3)|=R(0);
  R(0)=LD32(R(15)+20);
  R(3)|=R(8);
  R(3)|=R(0);
  ST32(R(14),R(3));
  R(14)+=0x4u;
  { uint32_t k=!c->t; R(10)=R(9); if(k) goto L8c0e50d8; }
L8c0e5054:;
  {uint32_t v=LD32(R(7));R(7)+=4;R(3)=v;}
  R(10)+=0x1u;
  c->t=(int32_t)R(10)>=(int32_t)R(12);
  ST32(R(14),R(3));
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c0e5054; }
  {  goto L8c0e50d8; }
L8c0e5084:;
  R(3)=LD32(R(15));
  R(8)<<=16;
  R(10)<<=16;
  c->t=(int32_t)R(12)>0;
  R(3)<<=8;
  R(3)&=R(6);
  R(8)&=R(5);
  R(10)<<=8;
  R(8)|=R(3);
  R(3)=LD32(R(15)+4);
  R(10)&=R(4);
  R(8)|=R(10);
  R(8)|=R(3);
  ST32(R(14),R(8));
  R(14)+=0x4u;
  { uint32_t k=!c->t; R(8)=R(9); if(k) goto L8c0e50d8; }
L8c0e50a6:;
  {uint32_t v=LD32(R(7));R(7)+=4;R(10)=v;}
  R(8)+=0x1u;
  c->t=(int32_t)R(8)>=(int32_t)R(12);
  R(2)=R(10);
  R(3)=R(10);
  R(2)<<=16;
  R(1)=R(10);
  R(3)<<=8;
  R(2)<<=8;
  R(3)&=R(5);
  R(2)&=R(4);
  R(2)|=R(3);
  R(3)=0xfffffff8u;
  R(1)=sh4_shad(R(1),R(3));
  R(1)&=R(6);
  R(2)|=R(1);
  R(1)=R(10);
  R(1)>>=16;
  R(1)>>=8;
  R(1)=(uint32_t)(int32_t)(int8_t)R(1);
  R(1)=R(1)&0xFF;
  R(2)|=R(1);
  ST32(R(14),R(2));
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c0e50a6; }
L8c0e50d8:;
  R(1)=0x10c4u;
  R(0)=LD32(R(13));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e511a;
  R(7)=LD32(R(15)+56);
  c->t=(int32_t)R(11)>0;
  { uint32_t k=!c->t; R(12)=R(9); if(k) goto L8c0e512e; }
L8c0e50ea:;
  R(0)=(int32_t)(int8_t)LD8(R(7)+1);
  R(12)+=0x1u;
  R(1)=(int32_t)(int8_t)LD8(R(7));
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  R(0)<<=16;
  R(0)&=R(5);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(7)+2);
  R(1)<<=16;
  R(0)<<=8;
  R(0)&=R(6);
  R(3)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(7)+3);
  R(1)<<=8;
  R(1)&=R(4);
  R(0)=R(0)&0xFF;
  R(3)|=R(1);
  R(3)|=R(0);
  ST32(R(14),R(3));
  R(14)+=0x4u;
  { uint32_t k=!c->t; R(7)+=0x4u; if(k) goto L8c0e50ea; }
  {  goto L8c0e512e; }
L8c0e511a:;
  R(5)=LD32(R(15)+56);
  c->t=(int32_t)R(11)>0;
  { uint32_t k=!c->t; R(4)=R(9); if(k) goto L8c0e512e; }
L8c0e5122:;
  {uint32_t v=LD32(R(5));R(5)+=4;R(3)=v;}
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(11);
  ST32(R(14),R(3));
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c0e5122; }
L8c0e512e:;
  R(0)=0xfd8u;
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(13));
  ST32(R(3)+R(0),R(2));
  R(0)+=0x4u;
  R(3)=LD32(R(13));
  R(2)=LD32(R(15)+8);
  R(1)=LD32(R(3)+R(0));
  R(2)<<=2;
  R(1)+=R(2);
  ST32(R(3)+R(0),R(1));
  R(0)=0x0u;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e515a(SH4Ctx *c) {
  R(5)=0x8c2f09fcu;
  R(4)<<=16;
  R(0)=0xfccu;
  R(3)=LD32(R(5));
  R(1)=R(0);
  R(1)+=0xcu;
  R(2)=R(3);
  R(1)+=R(2);
  R(1)=LD32(R(1));
  R(2)=LD32(R(3)+R(0));
  R(1)<<=2;
  R(2)+=R(1);
  ST32(R(3)+R(0),R(2));
  R(1)=0x1u;
  R(6)=LD32(R(5));
  R(3)=0x300u;
  R(6)=LD32(R(6)+R(0));
  R(0)+=0xcu;
  R(4)|=R(3);
  ST32(R(6),R(4));
  R(2)=LD32(R(5));
  ST32(R(2)+R(0),R(1));
  R(0)+=0x4u;
  R(2)=LD32(R(5));
  R(1)=LD32(R(2)+R(0));
  R(1)+=0x4u;
  ST32(R(2)+R(0),R(1));
  { R(0)=0x0u; return; }
}
void f_8c0e5194(SH4Ctx *c) {
  R(5)=0x8c2f09fcu;
  R(4)<<=16;
  R(0)=0xfccu;
  R(3)=LD32(R(5));
  R(1)=R(0);
  R(1)+=0xcu;
  R(2)=R(3);
  R(1)+=R(2);
  R(1)=LD32(R(1));
  R(2)=LD32(R(3)+R(0));
  R(1)<<=2;
  R(2)+=R(1);
  ST32(R(3)+R(0),R(2));
  R(1)=0x1u;
  R(6)=LD32(R(5));
  R(3)=0x200u;
  R(6)=LD32(R(6)+R(0));
  R(0)+=0xcu;
  R(4)|=R(3);
  ST32(R(6),R(4));
  R(2)=LD32(R(5));
  ST32(R(2)+R(0),R(1));
  R(0)+=0x4u;
  R(2)=LD32(R(5));
  R(1)=LD32(R(2)+R(0));
  R(1)+=0x4u;
  ST32(R(2)+R(0),R(1));
  { R(0)=0x0u; return; }
}
void f_8c0e5216(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(6)=0x8c2f09fcu;
  R(3)=R(4);
  R(3)<<=2;
  R(2)=0x10b4u;
  R(5)=LD32(R(6));
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=LD32(R(6));
  R(4)<<=2;
  R(5)+=0x4u;
  R(1)=0xfe8u;
  R(5)+=R(3);
  R(3)=R(0);
  R(2)+=R(3);
  R(2)=LD32(R(2));
  R(0)+=R(1);
  R(2)=0u-R(2);
  R(2)+=0x1u;
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(0)+=R(2);
  R(2)=R(0);
  R(0)=0x8c0f4030u;
  R(3)=LD32(R(4)+R(0));
  R(3)<<=2;
  R(2)+=R(3);
  R(4)=LD32(R(2));
  R(3)=LD32(R(4));
  ST32(R(15),R(3));
  R(0)=R(3);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(7)=0x0u; if(k) goto L8c0e526a; }
  R(1)=0xffffff00u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e526a;
  {  goto L8c0e5288; }
L8c0e526a:;
  R(3)=LD32(R(5)+4);
  R(0)=0x10dcu;
  R(3)+=0x1u;
  ST32(R(5)+4,R(3));
  R(2)=LD32(R(6));
  R(1)=LD32(R(5)+4);
  R(3)=LD32(R(2)+R(0));
  c->t=R(1)>R(3);
  if(!c->t) goto L8c0e5282;
  R(6)=R(7);
  { R(4)=0xffffffffu; goto L8c0e52a2; }
L8c0e5282:;
  R(0)=0x0u;
  { R(15)+=0x4u; return; }
L8c0e5288:;
  R(1)=0x10c4u;
  R(0)=LD32(R(6));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e5298;
  R(4)=R(15);
  { R(4)+=0x1u; goto L8c0e529c; }
L8c0e5298:;
  R(4)=R(15);
  R(4)+=0x2u;
L8c0e529c:;
  R(6)=(int32_t)(int8_t)LD8(R(4));
  R(4)=R(7);
  ST32(R(5)+4,R(7));
L8c0e52a2:;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  ST8(R(5)+1,R(0));
  ST8(R(5),R(6));
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  R(6)=(int32_t)(int8_t)LD8(R(5));
  R(0)^=R(6);
  R(0)&=R(6);
  ST8(R(5)+2,R(0));
  R(6)=(int32_t)(int8_t)LD8(R(5));
  R(0)=~R(6);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  R(0)^=R(6);
  R(0)&=R(3);
  ST8(R(5)+3,R(0));
  R(0)=R(4);
  { R(15)+=0x4u; return; }
}
void f_8c0e52dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=0x8c2f09fcu;
  R(2)=R(5);
  R(2)<<=2;
  R(1)=0x10b4u;
  c->t=R(2)>>31;R(2)<<=1;
  ST32(R(15),R(5));
  R(3)=LD32(R(13));
  R(3)+=0x4u;
  R(2)+=R(3);
  R(3)=0x2cu;
  ST32(R(15)+4,R(2));
  c->macl=R(4)*R(3);
  R(14)=LD32(R(13));
  R(2)=0x44cu;
  R(14)+=0x28u;
  R(10)=LD32(R(13));
  R(3)=c->macl;
  R(10)+=R(2);
  R(0)=LD32(R(13));
  R(14)+=R(3);
  R(3)=0x78u;
  c->macl=R(4)*R(3);
  R(3)=c->macl;
  R(10)+=R(3);
  R(3)=R(0);
  R(1)+=R(3);
  R(1)=LD32(R(1));
  R(1)=0u-R(1);
  R(1)+=0x1u;
  R(3)=R(1);
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(3)=0xfe8u;
  R(1)<<=2;
  R(11)=R(4);
  R(1)<<=2;
  R(11)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  ST32(R(15)+8,R(11));
  R(0)+=R(3);
  R(0)+=R(1);
  R(11)=LD32(R(11)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14));
  ST8(R(14)+1,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  ST8(R(14)+5,R(0));
  R(1)=LD32(R(14)+28);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c0e5354; }
  R(1)=LD32(R(14)+28);
  ST32(R(14)+32,R(1));
  ST32(R(14)+28,R(12));
L8c0e5354:;
  R(0)=0x8c0f4018u;
  R(2)=0x1fu;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)&=R(2);
  R(4)=R(3);
  R(1)=R(4)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0e5372;
  R(6)=R(10);
  R(7)=R(14);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e536eu; R(5)=LD32(R(15)+8); f_8c0e5524(c); }
  { R(15)+=0x4u; goto L8c0e537c; }
L8c0e5372:;
  R(5)=R(10);
  R(6)=R(14);
  R(7)=R(11);
  { c->pr=0x8c0e537cu; R(4)=LD32(R(15)); f_8c0e5480(c); }
L8c0e537c:;
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+7);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e53a8;
  R(2)=LD32(R(13));
  R(0)=0x10b4u;
  R(3)=R(2);
  R(1)=LD32(R(3)+R(0));
  R(0)=LD32(R(15)+8);
  R(1)=0u-R(1);
  R(1)+=0x1u;
  R(3)=R(1);
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(3)=0xfe8u;
  R(1)<<=2;
  R(1)<<=2;
  R(2)+=R(3);
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(2);
  R(2)=LD32(R(1)+R(0));
  ST32(R(14)+16,R(2));
L8c0e53a8:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+13);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e53b4;
  R(0)=R(12);
  ST8(R(14)+12,R(0));
  ST8(R(14)+13,R(0));
L8c0e53b4:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+12);
  R(0)|=R(3);
  ST8(R(14)+12,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+12);
  R(0)|=R(3);
  ST8(R(14)+12,R(0));
  R(0)=R(5);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e53da(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+7);
  R(6)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c0e53f6; }
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0e53f2;
  { ST8(R(4),R(6)); goto L8c0e541e; }
L8c0e53f2:;
  { ST8(R(4),R(5)); goto L8c0e541e; }
L8c0e53f6:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(1)=0xffu;
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e5408;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e5408;
  {  goto L8c0e541c; }
L8c0e5408:;
  { ST8(R(4),R(5)); goto L8c0e541e; }
L8c0e541c:;
  ST8(R(4),R(6));
L8c0e541e:;
  { R(0)=0x0u; return; }
}
void f_8c0e5422(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(2)=0x8c2f09fcu;
  R(1)=0x10c4u;
  {uint32_t v=LD32(R(5));R(5)+=4;R(3)=v;}
  ST32(R(15),R(3));
  R(0)=LD32(R(2));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e5448;
  R(6)=R(15);
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(0)=(uint32_t)v;}
  ST8(R(4)+11,R(0));
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(0)=(uint32_t)v;}
  ST8(R(4)+10,R(0));
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(0)=(uint32_t)v;}
  ST8(R(4)+9,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(6));
  { ST8(R(4)+8,R(0)); goto L8c0e545a; }
L8c0e5448:;
  R(6)=R(15);
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(0)=(uint32_t)v;}
  ST8(R(4)+8,R(0));
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(0)=(uint32_t)v;}
  ST8(R(4)+9,R(0));
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(0)=(uint32_t)v;}
  ST8(R(4)+10,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(6));
  ST8(R(4)+11,R(0));
L8c0e545a:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(3)=0xffu;
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0e546a;
  R(1)=0xffffffffu;
  { ST32(R(4)+20,R(1)); goto L8c0e547a; }
L8c0e546a:;
  R(2)=0xe0u;
  c->t=(int32_t)R(0)>=(int32_t)R(2);
  if(c->t) goto L8c0e5476;
  R(0)=0x0u;
  { ST32(R(4)+20,R(0)); goto L8c0e547a; }
L8c0e5476:;
  R(1)=LD32(R(5));
  ST32(R(4)+20,R(1));
L8c0e547a:;
  R(0)=0x0u;
  { R(15)+=0x4u; return; }
}
void f_8c0e5480(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(7);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=R(7);
  { c->pr=0x8c0e5494u; R(4)=R(6); f_8c0e5422(c); }
  R(5)=R(13);
  { c->pr=0x8c0e549au; R(4)=R(14); f_8c0e53da(c); }
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(1)=0x10c4u;
  R(0)^=R(4);
  R(0)&=R(4);
  ST8(R(14)+2,R(0));
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=~R(4);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(0)^=R(4);
  R(0)&=R(3);
  R(3)=0x8c2f09fcu;
  ST8(R(14)+3,R(0));
  R(0)=LD32(R(3));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e54d8;
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  R(2)=0xffu;
  R(4)=R(0)&0xFF;
  c->t=R(4)==R(2);
  if(c->t) goto L8c0e54d8;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0e54d8;
  R(5)=LD32(R(13));
  R(3)=0x8c0f0d94u;
  R(5)=R(5)&0xFF;
  R(5)+=0x1u;
  { c->pr=0x8c0e54d8u; R(4)=R(13); f_8c0f0d94(c); }
L8c0e54d8:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(4)=0x1u; if(k) goto L8c0e54e4; }
  { R(0)=0x9u; goto L8c0e54e6; }
L8c0e54e4:;
  R(0)=R(4);
L8c0e54e6:;
  ST8(R(14)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  c->t=(R(0)&R(0))==0;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e54fe;
  R(0)=0x10u;
  R(5)=R(14);
  R(6)=R(13);
  ST8(R(12)+R(0),R(4));
  { c->pr=0x8c0e54feu; R(4)=R(12); f_8c0e5656(c); }
L8c0e54fe:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e5508;
  { c->pr=0x8c0e5508u; R(4)=R(12); f_8c0e579a(c); }
L8c0e5508:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e5524(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(10)=R(5);
  R(14)=R(7);
  R(13)=0x0u;
  ST8(R(15),R(4));
  R(12)=LD32(R(15)+28);
  R(11)=R(6);
  R(5)=R(12);
  { c->pr=0x8c0e5544u; R(4)=R(7); f_8c0e5422(c); }
  R(0)=R(13);
  ST8(R(14)+2,R(0));
  ST8(R(14)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(10)+2);
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(0)=R(0)&0xFF;
  R(5)=R(5)&0xFF;
  c->t=(R(0)&R(5))==0;
  { uint32_t k=c->t; R(4)=0x1u; if(k) goto L8c0e5564; }
  R(0)=R(4);
  ST8(R(14)+4,R(0));
  ST8(R(14),R(13));
  R(3)=LD32(R(14)+36);
  R(3)+=0x1u;
  ST32(R(14)+36,R(3));
L8c0e5564:;
  R(0)=(int32_t)(int8_t)LD8(R(10)+3);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(5))==0;
  if(c->t) goto L8c0e5578;
  R(0)=0x4u;
  ST8(R(14)+4,R(0));
  R(0)=R(4);
  ST8(R(14),R(13));
  ST8(R(14)+3,R(0));
  ST32(R(14)+36,R(13));
L8c0e5578:;
  R(2)=(int32_t)(int8_t)LD8(R(10));
  R(6)=0xffu;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c0e55ec;
  R(0)=(int32_t)(int8_t)LD8(R(14)+7);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e5592;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e55de;
  {  goto L8c0e55f2; }
L8c0e5592:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e55c2;
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0e55a8;
  R(0)=R(4);
  ST8(R(14)+2,R(0));
  { ST8(R(14),R(0)); goto L8c0e55de; }
L8c0e55a8:;
  R(1)=0x8c2f09fcu;
  R(3)=LD32(R(14)+36);
  R(0)=0x10d8u;
  R(3)+=0x1u;
  ST32(R(14)+36,R(3));
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+R(0));
  R(0)=LD32(R(14)+36);
  c->t=R(0)>R(3);
  if(c->t) goto L8c0e55ce;
  R(0)=R(4);
  { ST8(R(14)+4,R(0)); goto L8c0e55f2; }
L8c0e55c2:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+7);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0e55d8;
  R(0)=R(4);
  ST8(R(14)+3,R(0));
L8c0e55ce:;
  R(0)=R(6);
  ST8(R(14),R(13));
  ST8(R(14)+4,R(0));
  { ST32(R(14)+36,R(13)); goto L8c0e55f2; }
L8c0e55d8:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+7);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e55f2;
L8c0e55de:;
  R(0)=R(13);
  { ST8(R(14)+4,R(0)); goto L8c0e55f2; }
L8c0e55ec:;
  R(0)=R(6);
  ST8(R(14)+4,R(0));
  ST8(R(14),R(13));
L8c0e55f2:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e5624;
  R(0)=(int32_t)(int8_t)LD8(R(14)+7);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e5624;
  R(3)=0x8c2f09fcu;
  R(1)=0x10c4u;
  R(0)=LD32(R(3));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e5624;
  R(0)=LD32(R(12));
  R(4)=R(0);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0e5624;
  R(2)=0xffffff00u;
  c->t=R(4)==R(2);
  if(c->t) goto L8c0e5624;
  R(5)=LD32(R(12));
  R(3)=0x8c0f0d94u;
  R(5)=R(5)&0xFF;
  R(5)+=0x1u;
  { c->pr=0x8c0e5624u; R(4)=R(12); f_8c0f0d94(c); }
L8c0e5624:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e5636;
  R(0)=0x10u;
  R(5)=R(14);
  R(6)=R(12);
  ST8(R(11)+R(0),R(13));
  { c->pr=0x8c0e5636u; R(4)=R(11); f_8c0e5656(c); }
L8c0e5636:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e5644;
  R(0)=0x10u;
  ST8(R(11)+R(0),R(13));
  { c->pr=0x8c0e5644u; R(4)=R(11); f_8c0e579a(c); }
L8c0e5644:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e5656(SH4Ctx *c) {
  R(6)+=0x4u;
  R(3)=0xff0000u;
  R(5)=R(6);
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  R(2)=0xff00u;
  R(6)=R(4);
  R(0)=R(0)&0xFF;
  R(0)<<=16;
  R(0)&=R(3);
  R(1)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(5)+2);
  R(3)<<=8;
  R(0)=R(0)&0xFF;
  R(0)<<=8;
  R(0)&=R(2);
  R(1)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(7)=0x0u;
  R(0)=R(0)&0xFF;
  R(0)<<=16;
  R(0)<<=8;
  R(0)&=R(3);
  R(1)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(5)+3);
  R(5)+=0x4u;
  R(0)=R(0)&0xFF;
  R(1)|=R(0);
  ST32(R(4),R(1));
  { R(6)+=0x4u; goto L8c0e5698; }
L8c0e5692:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(6),R(3));
  R(6)+=0x1u;
L8c0e5698:;
  R(2)=R(4);
  R(2)+=0x8u;
  c->t=R(6)>=R(2);
  if(!c->t) goto L8c0e5692;
  R(6)=R(4);
  { R(6)+=0x8u; goto L8c0e56ac; }
L8c0e56a6:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(6),R(3));
  R(6)+=0x1u;
L8c0e56ac:;
  R(2)=R(4);
  R(2)+=0xcu;
  c->t=R(6)>=R(2);
  if(!c->t) goto L8c0e56a6;
  R(6)=R(4);
  { R(6)+=0xcu; goto L8c0e56c0; }
L8c0e56ba:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(6),R(3));
  R(6)+=0x1u;
L8c0e56c0:;
  R(2)=R(4);
  R(2)+=0x10u;
  c->t=R(6)>=R(2);
  if(!c->t) goto L8c0e56ba;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(0)=0x11u;
  ST8(R(4)+R(0),R(3));
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e5704;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(2)=R(4);
  R(2)+=0x12u;
  R(0)&=0x3u;
  ST8(R(2),R(0));
  R(1)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(1)+=R(4);
  R(0)=R(0)&0xFF;
  R(0)>>=2;
  R(0)&=0x3u;
  { ST8(R(1),R(0)); goto L8c0e5718; }
L8c0e5704:;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(2)=R(4);
  R(1)=0x8c0f44b4u;
  R(2)+=0x12u;
  R(0)=R(0)&0xFF;
  R(0)&=0xfu;
  R(3)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=0x13u;
  ST8(R(2),R(3));
  ST8(R(4)+R(0),R(7));
L8c0e5718:;
  R(3)=0x8c2f09fcu;
  R(1)=0x10c4u;
  R(0)=LD32(R(3));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e573c;
  R(6)=R(4);
  { R(6)+=0x14u; goto L8c0e5730; }
L8c0e572a:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(6),R(3));
  R(6)+=0x1u;
L8c0e5730:;
  R(2)=R(4);
  R(2)+=0x33u;
  c->t=R(6)>=R(2);
  if(!c->t) goto L8c0e572a;
  {  goto L8c0e5756; }
L8c0e573c:;
  R(6)=R(4);
  R(5)+=0x1u;
  { R(6)+=0x14u; goto L8c0e574a; }
L8c0e5744:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(6),R(3));
  R(6)+=0x1u;
L8c0e574a:;
  R(2)=R(4);
  R(2)+=0x32u;
  c->t=R(6)>=R(2);
  if(!c->t) goto L8c0e5744;
  R(0)=0x32u;
  ST8(R(4)+R(0),R(7));
L8c0e5756:;
  R(0)=0x33u;
  R(6)=R(4);
  ST8(R(4)+R(0),R(7));
  { R(6)+=0x34u; goto L8c0e5766; }
L8c0e5760:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(6),R(3));
  R(6)+=0x1u;
L8c0e5766:;
  R(2)=R(4);
  R(2)+=0x70u;
  c->t=R(6)>=R(2);
  if(!c->t) goto L8c0e5760;
  R(0)=0x70u;
  ST8(R(4)+R(0),R(7));
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  R(1)+=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(0)=R(0)&0xFF;
  R(3)=R(3)&0xFF;
  R(0)<<=8;
  R(0)|=R(3);
  ST16(R(1),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(5)+3);
  R(0)=R(0)&0xFF;
  R(0)<<=8;
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(5)+2);
  R(0)=R(0)&0xFF;
  R(3)|=R(0);
  R(0)=0x76u;
  ST16(R(4)+R(0),R(3));
  { R(0)=0x0u; return; }
}
void f_8c0e579a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x1eu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  { c->pr=0x8c0e57a6u; R(5)=0x0u; f_8c0e5c70(c); }
  R(2)=R(14);
  R(4)=0x6eu;
  R(0)=0x15u;
  R(2)+=0x14u;
  R(3)=0x28u;
  ST8(R(2),R(3));
  R(3)=0x6fu;
  ST8(R(14)+R(0),R(4));
  R(0)=0x16u;
  ST8(R(14)+R(0),R(3));
  R(0)=0x17u;
  ST8(R(14)+R(0),R(4));
  R(0)=0x18u;
  R(3)=0x65u;
  R(4)=R(14);
  ST8(R(14)+R(0),R(3));
  R(0)=0x19u;
  R(2)=0x29u;
  R(4)+=0x1au;
  ST8(R(14)+R(0),R(2));
  R(5)=0x20u;
L8c0e57d0:;
  R(3)=R(14);
  ST8(R(4),R(5));
  R(3)+=0x33u;
  R(4)+=0x1u;
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c0e57d0;
  R(0)=0x33u;
  R(3)=0x0u;
  ST8(R(14)+R(0),R(3));
  R(0)=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e57ea(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5804;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e57fcu; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5804:;
  { c->pr=0x8c0e5808u;  f_8c0e5816(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5816(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x0u;
  ST32(R(15),R(5));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x8u;
  { c->pr=0x8c0e582cu; R(5)=0x9u; f_8c0e4cd8(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e584c(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5866;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e585eu; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5866:;
  { c->pr=0x8c0e586au;  f_8c0e5878(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5866(SH4Ctx *c) {
  { c->pr=0x8c0e586au;  f_8c0e5878(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e586a(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5878(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  R(6)=R(3);
  R(7)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e5888u; R(5)=0x1u; f_8c0e4cd8(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5890(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e58aa;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e58a2u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e58aa:;
  { c->pr=0x8c0e58aeu;  f_8c0e58bc(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e58bc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  R(6)=R(3);
  R(7)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e58ccu; R(5)=0x4u; f_8c0e4cd8(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e58d4(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e58ee;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e58e6u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e58ee:;
  { c->pr=0x8c0e58f2u;  f_8c0e5900(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5900(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  R(6)=R(3);
  R(7)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e5910u; R(5)=0x3u; f_8c0e4cd8(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5918(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5932;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e592au; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5932:;
  { c->pr=0x8c0e5936u;  f_8c0e5944(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5944(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  R(6)=R(3);
  R(7)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e5954u; R(5)=0x2u; f_8c0e4cd8(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e595c(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5976;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e596eu; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5976:;
  { c->pr=0x8c0e597au;  f_8c0e5988(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5988(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)<<=16;
  R(14)=R(15);
  R(6)<<=8;
  ST32(R(14),R(5));
  R(3)=0x0u;
  ST32(R(14)+4,R(6));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x2u;
  R(6)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e59a6u; R(5)=0xau; f_8c0e4cd8(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e59ae(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e59c8;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e59c0u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e59c8:;
  R(3)=LD32(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e59d0u;  f_8c0e59e0(c); }
  R(15)+=0x4u;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e59e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)<<=16;
  R(14)=R(15);
  R(7)<<=16;
  ST32(R(14),R(5));
  R(3)=LD32(R(15)+16);
  R(6)<<=8;
  R(6)|=R(7);
  R(6)|=R(3);
  R(3)=0x0u;
  ST32(R(14)+4,R(6));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x2u;
  R(6)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e5a06u; R(5)=0xbu; f_8c0e4cd8(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e5a0e(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5a28;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e5a20u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5a28:;
  R(3)=LD32(R(15)+12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e5a38u;  f_8c0e5a48(c); }
  R(15)+=0xcu;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5a48(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)<<=16;
  R(14)=R(15);
  R(6)<<=8;
  ST32(R(14),R(5));
  R(7)<<=16;
  R(3)=LD32(R(15)+16);
  R(6)|=R(7);
  R(6)|=R(3);
  ST32(R(14)+4,R(6));
  R(7)=0x2u;
  R(3)=LD32(R(15)+24);
  R(6)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+24);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e5a70u; R(5)=0xcu; f_8c0e4cd8(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e5a78(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5a92;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e5a8au; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5a92:;
  R(3)=LD32(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e5a9au;  f_8c0e5aaa(c); }
  R(15)+=0x4u;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5aaa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)<<=16;
  R(14)=R(15);
  R(7)<<=16;
  ST32(R(14),R(5));
  R(3)=LD32(R(15)+16);
  R(6)<<=8;
  R(6)|=R(7);
  R(6)|=R(3);
  R(3)=0x0u;
  ST32(R(14)+4,R(6));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x2u;
  R(6)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e5ad0u; R(5)=0xdu; f_8c0e4cd8(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e5ae4(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5afe;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e5af6u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5afe:;
  { c->pr=0x8c0e5b02u;  f_8c0e5b10(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5afe(SH4Ctx *c) {
  { c->pr=0x8c0e5b02u;  f_8c0e5b10(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5b02(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5b10(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  R(5)=0xfcu;
  R(7)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0e5b20u; R(6)=R(3); f_8c0e4cd8(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5b28(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5b42;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e5b3au; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5b42:;
  { c->pr=0x8c0e5b46u;  f_8c0e5b54(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5b54(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x20u;
  ST32(R(15)+4,R(5));
  R(2)=0x1u;
  ST32(R(15),R(3));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=R(2);
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x8u;
  { c->pr=0x8c0e5b70u; R(5)=0x10u; f_8c0e4cd8(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5b78(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5b92;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e5b8au; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5b92:;
  { c->pr=0x8c0e5b96u;  f_8c0e5ba4(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5ba4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x10u;
  ST32(R(15)+4,R(5));
  R(2)=0x1u;
  ST32(R(15),R(3));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=R(2);
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x8u;
  { c->pr=0x8c0e5bc0u; R(5)=0xfu; f_8c0e4cd8(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5bc8(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0e5be2;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3ff0u;
  { c->pr=0x8c0e5bdau; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0e5be2:;
  { c->pr=0x8c0e5be6u;  f_8c0e5c04(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5c04(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(6));
  ST32(R(15)+8,R(7));
  R(7)=0x1u;
  ST32(R(15),R(5));
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+8);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x8u;
  { c->pr=0x8c0e5c20u; R(5)=0xeu; f_8c0e4cd8(c); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5c28(SH4Ctx *c) {
  {  goto L8c0e5c2c; }
L8c0e5c2c:;
  {  { f_8c0e515a(c); return; } }
}
void f_8c0e5c4a(SH4Ctx *c) {
  { c->pr=0x8c0e5c4eu;  f_8c0e5c5c(c); }
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5c4e(SH4Ctx *c) {
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e5c5c(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(0)=0xfccu;
  R(4)=LD32(R(3));
  R(2)=0x80000000u;
  R(4)=LD32(R(4)+R(0));
  R(1)=LD32(R(4));
  R(1)|=R(2);
  ST32(R(4),R(1));
  { R(0)=0x0u; return; }
}
void f_8c0e5c70(SH4Ctx *c) {
  c->t=(int32_t)R(6)>0;
  R(7)=0x0u;
  { uint32_t k=!c->t; R(0)=R(4); if(k) goto L8c0e5c82; }
L8c0e5c78:;
  R(7)+=0x1u;
  ST32(R(0),R(5));
  c->t=(int32_t)R(7)>=(int32_t)R(6);
  { uint32_t k=!c->t; R(0)+=0x4u; if(k) goto L8c0e5c78; }
L8c0e5c82:;
  { R(0)=R(6); return; }
}
void f_8c0e5c86(SH4Ctx *c) {
  R(0)=0xfffffffu;
  { R(0)&=R(4); return; }
}
void f_8c0e5c8c(SH4Ctx *c) {
  { R(0)=R(4); return; }
}
void f_8c0e5c90(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(0)=0x10f4u;
  R(1)=0xa05f6c00u;
  R(3)=LD32(R(2));
  { ST32(R(3)+R(0),R(1)); return; }
}
void f_8c0e5cc4(SH4Ctx *c) {
  R(3)=0x8c2f0a00u;
  ST32(R(3),R(4));
  { R(0)=R(4); return; }
}
void f_8c0e5ccc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f0a00u;
  c->macl=R(13)*R(12);
  R(2)=0x8c2f2e3cu;
  R(10)=0x8c0f0e50u;
  R(8)=0x8c0f4048u;
  R(12)=c->macl;
  R(11)=0xffffff30u;
  ST32(R(15),R(5));
  R(9)=LD32(R(3));
  ST32(R(15)+4,R(12));
  R(12)+=R(2);
L8c0e5cf8:;
  R(5)=LD32(R(15));
  { uint32_t tg=R(10); c->pr=0x8c0e5cfeu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e5d22;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e5d0e;
  c->t=R(14)==R(11);
  if(c->t) goto L8c0e5d60;
L8c0e5d0e:;
  R(3)=LD32(R(12)+52);
  c->t=(R(9)&R(9))==0;
  R(3)+=0x1u;
  ST32(R(12)+52,R(3));
  { uint32_t k=!c->t; R(9)+=0xffffffffu; if(k) goto L8c0e5cf8; }
  R(1)=0x8c2f0a00u;
  R(0)=LD32(R(1));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0e5cf8;
L8c0e5d22:;
  R(12)=LD32(R(15)+4);
  R(2)=R(13);
  R(3)=0x8c2f2e3cu;
  R(2)<<=2;
  R(2)<<=2;
  R(1)=0x8c2f0a24u;
  R(12)+=R(3);
  R(3)=0x8c0e636eu;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  ST32(R(15),R(2));
  R(6)=LD32(R(12)+48);
  R(7)=LD32(R(12)+52);
  R(6)+=0x1u;
  ST32(R(12)+48,R(6));
  R(6)+=0xffffffffu;
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+8);
  { uint32_t tg=R(3); c->pr=0x8c0e5d4cu; R(4)=R(13); sh4_call(c,tg); }
  R(0)=R(14);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e5d5c;
  R(1)=0xffffff01u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e5d60;
  {  goto L8c0e5d66; }
L8c0e5d5c:;
  { R(0)=0x0u; goto L8c0e5d68; }
L8c0e5d60:;
  R(0)=0xffffff01u;
  {  goto L8c0e5d68; }
L8c0e5d66:;
  R(0)=0xffff0000u;
L8c0e5d68:;
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
void f_8c0e5da0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(12)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f0a00u;
  c->macl=R(13)*R(12);
  R(2)=0x8c2f2e3cu;
  R(8)=0x8c0f4048u;
  R(11)=0xffffff30u;
  R(12)=c->macl;
  R(10)=0x8c0f102au;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(9)=LD32(R(3));
  ST32(R(15)+8,R(12));
  R(12)+=R(2);
L8c0e5dce:;
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  { uint32_t tg=R(10); c->pr=0x8c0e5dd6u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e5dfa;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e5de6;
  c->t=R(14)==R(11);
  if(c->t) goto L8c0e5e38;
L8c0e5de6:;
  R(3)=LD32(R(12)+52);
  c->t=(R(9)&R(9))==0;
  R(3)+=0x1u;
  ST32(R(12)+52,R(3));
  { uint32_t k=!c->t; R(9)+=0xffffffffu; if(k) goto L8c0e5dce; }
  R(1)=0x8c2f0a00u;
  R(0)=LD32(R(1));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0e5dce;
L8c0e5dfa:;
  R(12)=LD32(R(15)+8);
  R(2)=R(13);
  R(3)=0x8c2f2e3cu;
  R(2)<<=2;
  R(2)<<=2;
  R(1)=0x8c2f0a24u;
  R(12)+=R(3);
  R(3)=0x8c0e636eu;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  ST32(R(15),R(2));
  R(6)=LD32(R(12)+48);
  R(7)=LD32(R(12)+52);
  R(6)+=0x1u;
  ST32(R(12)+48,R(6));
  R(6)+=0xffffffffu;
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+8);
  { uint32_t tg=R(3); c->pr=0x8c0e5e24u; R(4)=R(13); sh4_call(c,tg); }
  R(0)=R(14);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e5e34;
  R(1)=0xffffff01u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e5e38;
  {  goto L8c0e5e3e; }
L8c0e5e34:;
  { R(0)=0x0u; goto L8c0e5e40; }
L8c0e5e38:;
  R(0)=0xffffff01u;
  {  goto L8c0e5e40; }
L8c0e5e3e:;
  R(0)=0xffff0000u;
L8c0e5e40:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e5e78(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(12)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f0a00u;
  c->macl=R(13)*R(12);
  R(2)=0x8c2f2e3cu;
  R(8)=0x8c0f4048u;
  R(11)=0xffffff30u;
  R(12)=c->macl;
  R(10)=0x8c0f115au;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(9)=LD32(R(3));
  ST32(R(15)+8,R(12));
  R(12)+=R(2);
L8c0e5ea6:;
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  { uint32_t tg=R(10); c->pr=0x8c0e5eaeu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0e5ed2;
  R(3)=LD32(R(8));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e5ebe;
  c->t=R(14)==R(11);
  if(c->t) goto L8c0e5f16;
L8c0e5ebe:;
  R(3)=LD32(R(12)+52);
  c->t=(R(9)&R(9))==0;
  R(3)+=0x1u;
  ST32(R(12)+52,R(3));
  { uint32_t k=!c->t; R(9)+=0xffffffffu; if(k) goto L8c0e5ea6; }
  R(1)=0x8c2f0a00u;
  R(0)=LD32(R(1));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0e5ea6;
L8c0e5ed2:;
  R(12)=LD32(R(15)+8);
  R(2)=R(13);
  R(3)=0x8c2f2e3cu;
  R(2)<<=2;
  R(2)<<=2;
  R(1)=0x8c2f0a24u;
  R(12)+=R(3);
  R(3)=0x8c0e636eu;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  ST32(R(15),R(2));
  R(6)=LD32(R(12)+48);
  R(7)=LD32(R(12)+52);
  R(6)+=0x1u;
  ST32(R(12)+48,R(6));
  R(6)+=0xffffffffu;
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+8);
  { uint32_t tg=R(3); c->pr=0x8c0e5efcu; R(4)=R(13); sh4_call(c,tg); }
  R(0)=R(14);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e5f12;
  R(1)=0xffffff01u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e5f16;
  R(1)=0xffffff40u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e5f1c;
  {  goto L8c0e5f22; }
L8c0e5f12:;
  { R(0)=0x0u; goto L8c0e5f24; }
L8c0e5f16:;
  R(0)=0xffffff01u;
  {  goto L8c0e5f24; }
L8c0e5f1c:;
  R(0)=0xffffff40u;
  {  goto L8c0e5f24; }
L8c0e5f22:;
  R(0)=0xffff0000u;
L8c0e5f24:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e5f5c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  R(4)=0x8c2f0a04u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  R(14)=0x400u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(4),R(11));
  R(6)=R(14);
  ST32(R(4)+4,R(11));
  ST32(R(4)+8,R(11));
  ST32(R(4)+12,R(11));
  ST32(R(4)+16,R(11));
  ST32(R(4)+20,R(11));
  ST32(R(4)+24,R(11));
  ST32(R(4)+28,R(11));
  R(4)=0x8c2f0a24u;
  R(13)=0x8c0686b8u;
  { c->pr=0x8c0e5f88u; R(5)=R(11); f_8c0686b8(c); }
  R(4)=0x8c2f0e24u;
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0e5f90u; R(5)=0x30u; sh4_call(c,tg); }
  R(4)=0x8c2f1224u;
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0e5f98u; R(5)=0x31u; sh4_call(c,tg); }
  R(4)=0x8c2f1624u;
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0e5fa0u; R(5)=0x32u; sh4_call(c,tg); }
  R(4)=0x8c2f1a24u;
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0e5fa8u; R(5)=0x33u; sh4_call(c,tg); }
  R(4)=0x8c2f1e24u;
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0e5fb0u; R(5)=0x34u; sh4_call(c,tg); }
  R(4)=0x8c2f2224u;
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0e5fb8u; R(5)=0x35u; sh4_call(c,tg); }
  R(4)=0x8c2f2624u;
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0e5fc0u; R(5)=0x36u; sh4_call(c,tg); }
  R(4)=0x8c2f2a24u;
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0e5fc8u; R(5)=0x37u; sh4_call(c,tg); }
  R(3)=0x8c0f0dd8u;
  { c->pr=0x8c0e5fceu;  f_8c0f0dd8(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e6008;
  { R(0)=0xffffffffu; goto L8c0e607c; }
L8c0e6008:;
  R(3)=0x1u;
  R(13)=0x8c0f0deeu;
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0e6018;
  R(4)=0x8c0e60a0u;
  R(5)=0x8c2f0e24u;
  { uint32_t tg=R(13); c->pr=0x8c0e6018u; R(6)=R(14); sh4_call(c,tg); }
L8c0e6018:;
  R(3)=0x2u;
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0e6026;
  R(4)=0x8c0e60a4u;
  R(5)=0x8c2f1224u;
  { uint32_t tg=R(13); c->pr=0x8c0e6026u; R(6)=R(14); sh4_call(c,tg); }
L8c0e6026:;
  R(3)=0x4u;
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0e6034;
  R(4)=0x8c0e60a8u;
  R(5)=0x8c2f1624u;
  { uint32_t tg=R(13); c->pr=0x8c0e6034u; R(6)=R(14); sh4_call(c,tg); }
L8c0e6034:;
  R(3)=0x8u;
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0e6042;
  R(4)=0x8c0e60acu;
  R(5)=0x8c2f1a24u;
  { uint32_t tg=R(13); c->pr=0x8c0e6042u; R(6)=R(14); sh4_call(c,tg); }
L8c0e6042:;
  R(3)=0x10u;
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0e6050;
  R(4)=0x8c0e60b0u;
  R(5)=0x8c2f1e24u;
  { uint32_t tg=R(13); c->pr=0x8c0e6050u; R(6)=R(14); sh4_call(c,tg); }
L8c0e6050:;
  R(3)=0x20u;
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0e605e;
  R(4)=0x8c0e60b4u;
  R(5)=0x8c2f2224u;
  { uint32_t tg=R(13); c->pr=0x8c0e605eu; R(6)=R(14); sh4_call(c,tg); }
L8c0e605e:;
  R(3)=0x40u;
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0e606c;
  R(4)=0x8c0e60b8u;
  R(5)=0x8c2f2624u;
  { uint32_t tg=R(13); c->pr=0x8c0e606cu; R(6)=R(14); sh4_call(c,tg); }
L8c0e606c:;
  R(3)=0x80u;
  c->t=(R(12)&R(3))==0;
  if(c->t) goto L8c0e607a;
  R(4)=0x8c0e6110u;
  R(5)=0x8c2f2a24u;
  { uint32_t tg=R(13); c->pr=0x8c0e607au; R(6)=R(14); sh4_call(c,tg); }
L8c0e607a:;
  R(0)=0x0u;
L8c0e607c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e6088(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0686b8u;
  R(4)=0x8c2f0a24u;
  R(6)=0x400u;
  { c->pr=0x8c0e6094u; R(5)=0x0u; f_8c0686b8(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0e609a(SH4Ctx *c) {
  R(3)=0x8c0f0e06u;
  {  { f_8c0f0e06(c); return; } }
}
void f_8c0e60a0(SH4Ctx *c) {
  { R(4)=0x0u; goto L8c0e6112; }
L8c0e6112:;
  R(14)=R(4);
  R(14)<<=2;
  R(14)<<=2;
  R(3)=0x8c2f0a24u;
  R(2)=0x8c2f0a04u;
  R(9)=R(4);
  R(14)<<=2;
  R(10)=0xffffff01u;
  R(9)<<=2;
  R(8)=0x8c0e6b2au;
  c->t=R(14)>>31;R(14)<<=1;
  R(11)=R(4);
  R(9)+=R(2);
  R(14)+=R(3);
  R(13)=0x0u;
L8c0e6130:;
  R(0)=LD32(R(14)+8);
  R(1)=0x15u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0e613c;
  {  goto L8c0e62fe; }
L8c0e613c:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0e6158u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0e6148u+R(0));  switch(tg){ case 0x8c0e6182u: goto L8c0e6182; case 0x8c0e618eu: goto L8c0e618e; case 0x8c0e619cu: goto L8c0e619c; case 0x8c0e61b8u: goto L8c0e61b8; case 0x8c0e61cau: goto L8c0e61ca; case 0x8c0e61deu: goto L8c0e61de; case 0x8c0e61f2u: goto L8c0e61f2; case 0x8c0e6204u: goto L8c0e6204; case 0x8c0e621au: goto L8c0e621a; case 0x8c0e6230u: goto L8c0e6230; case 0x8c0e6240u: goto L8c0e6240; case 0x8c0e6250u: goto L8c0e6250; case 0x8c0e6260u: goto L8c0e6260; case 0x8c0e6276u: goto L8c0e6276; case 0x8c0e6296u: goto L8c0e6296; case 0x8c0e62b6u: goto L8c0e62b6; case 0x8c0e62d0u: goto L8c0e62d0; case 0x8c0e62e2u: goto L8c0e62e2; case 0x8c0e62feu: goto L8c0e62fe; default: sh4_bad_jump(c,0x8c0e6144u,tg); return; } }
L8c0e6182:;
  R(3)=LD32(R(14)+20);
  ST32(R(14)+16,R(3));
  { uint32_t tg=R(8); c->pr=0x8c0e618au; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
  {  goto L8c0e62fa; }
L8c0e618e:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e6a30u;
  ST32(R(14)+16,R(3));
  { c->pr=0x8c0e6198u; R(4)=LD32(R(14)+20); f_8c0e6a30(c); }
  {  goto L8c0e62fa; }
L8c0e619c:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(7)=R(14);
  R(5)+=0x4cu;
  ST32(R(14)+16,R(2));
  R(7)+=0x6cu;
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0e6db0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61b4u; R(4)=LD32(R(14)+20); f_8c0e6db0(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e61b8:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e792eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e61c6u; R(4)=LD32(R(14)+20); f_8c0e792e(c); }
  {  goto L8c0e62fa; }
L8c0e61ca:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7d7au;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61dau; R(4)=LD32(R(14)+20); f_8c0e7d7a(c); }
  {  goto L8c0e62fa; }
L8c0e61de:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7a96u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61eeu; R(4)=LD32(R(14)+20); f_8c0e7a96(c); }
  {  goto L8c0e62fa; }
L8c0e61f2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e84b0u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  { c->pr=0x8c0e6200u; R(4)=LD32(R(14)+20); f_8c0e84b0(c); }
  {  goto L8c0e62fa; }
L8c0e6204:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(6)=R(14);
  R(2)=0x8c0e86aeu;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(6)+=0x3cu;
  { c->pr=0x8c0e6216u; R(4)=LD32(R(14)+20); f_8c0e86ae(c); }
  {  goto L8c0e62fa; }
L8c0e621a:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e89d4u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e622cu; R(4)=LD32(R(14)+20); f_8c0e89d4(c); }
  {  goto L8c0e62fa; }
L8c0e6230:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8fb8u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e623cu; R(4)=LD32(R(14)+20); f_8c0e8fb8(c); }
  {  goto L8c0e62fa; }
L8c0e6240:;
  R(2)=LD32(R(14)+20);
  R(3)=0x8c0e9d14u;
  ST32(R(14)+16,R(2));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e624cu; R(4)=LD32(R(14)+20); f_8c0e9d14(c); }
  {  goto L8c0e62fa; }
L8c0e6250:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e9d9eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e625cu; R(4)=LD32(R(14)+20); f_8c0e9d9e(c); }
  {  goto L8c0e62fa; }
L8c0e6260:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e9e0au;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6272u; R(4)=LD32(R(14)+20); f_8c0e9e0a(c); }
  {  goto L8c0e62fa; }
L8c0e6276:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(3)=R(14);
  R(2)=LD32(R(14)+40);
  R(3)+=0x6cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0e9eacu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6292u; R(4)=LD32(R(14)+20); f_8c0e9eac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e6296:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(2)=R(14);
  R(3)=LD32(R(14)+40);
  R(2)+=0x6cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ea0acu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62b2u; R(4)=LD32(R(14)+20); f_8c0ea0ac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e62b6:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(14)+36);
  R(3)=0x8c0ea342u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62ccu; R(4)=LD32(R(14)+20); f_8c0ea342(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e62d0:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8590u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e62deu; R(4)=LD32(R(14)+20); f_8c0e8590(c); }
  {  goto L8c0e62fa; }
L8c0e62e2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0ea466u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62f8u; R(4)=LD32(R(14)+20); f_8c0ea466(c); }
  R(15)+=0x4u;
L8c0e62fa:;
  { R(12)=R(0); goto L8c0e6308; }
L8c0e62fe:;
  R(2)=0x8c0f0e16u;
  { c->pr=0x8c0e6304u;  f_8c0f0e16(c); }
  {  goto L8c0e6130; }
L8c0e6308:;
  c->t=R(12)==R(10);
  if(!c->t) goto L8c0e6312;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e6312u; R(4)=LD32(R(14)+16); f_8c0e6c9a(c); }
L8c0e6312:;
  R(0)=0x7cu;
  ST32(R(9),R(12));
  R(7)=LD32(R(14)+R(0));
  R(0)=0x74u;
  R(5)=LD32(R(14)+8);
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  ST32(R(14)+12,R(13));
  ST32(R(14)+16,R(13));
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+32,R(13));
  ST32(R(14)+36,R(13));
  ST32(R(14)+40,R(13));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0e633c;
  {  goto L8c0e6130; }
L8c0e633c:;
  R(3)=LD32(R(14)+R(0));
  R(6)=R(12);
  { uint32_t tg=R(3); c->pr=0x8c0e6344u; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c0e6130; }
}
void f_8c0e60a4(SH4Ctx *c) {
  { R(4)=0x1u; goto L8c0e6112; }
L8c0e6112:;
  R(14)=R(4);
  R(14)<<=2;
  R(14)<<=2;
  R(3)=0x8c2f0a24u;
  R(2)=0x8c2f0a04u;
  R(9)=R(4);
  R(14)<<=2;
  R(10)=0xffffff01u;
  R(9)<<=2;
  R(8)=0x8c0e6b2au;
  c->t=R(14)>>31;R(14)<<=1;
  R(11)=R(4);
  R(9)+=R(2);
  R(14)+=R(3);
  R(13)=0x0u;
L8c0e6130:;
  R(0)=LD32(R(14)+8);
  R(1)=0x15u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0e613c;
  {  goto L8c0e62fe; }
L8c0e613c:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0e6158u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0e6148u+R(0));  switch(tg){ case 0x8c0e6182u: goto L8c0e6182; case 0x8c0e618eu: goto L8c0e618e; case 0x8c0e619cu: goto L8c0e619c; case 0x8c0e61b8u: goto L8c0e61b8; case 0x8c0e61cau: goto L8c0e61ca; case 0x8c0e61deu: goto L8c0e61de; case 0x8c0e61f2u: goto L8c0e61f2; case 0x8c0e6204u: goto L8c0e6204; case 0x8c0e621au: goto L8c0e621a; case 0x8c0e6230u: goto L8c0e6230; case 0x8c0e6240u: goto L8c0e6240; case 0x8c0e6250u: goto L8c0e6250; case 0x8c0e6260u: goto L8c0e6260; case 0x8c0e6276u: goto L8c0e6276; case 0x8c0e6296u: goto L8c0e6296; case 0x8c0e62b6u: goto L8c0e62b6; case 0x8c0e62d0u: goto L8c0e62d0; case 0x8c0e62e2u: goto L8c0e62e2; case 0x8c0e62feu: goto L8c0e62fe; default: sh4_bad_jump(c,0x8c0e6144u,tg); return; } }
L8c0e6182:;
  R(3)=LD32(R(14)+20);
  ST32(R(14)+16,R(3));
  { uint32_t tg=R(8); c->pr=0x8c0e618au; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
  {  goto L8c0e62fa; }
L8c0e618e:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e6a30u;
  ST32(R(14)+16,R(3));
  { c->pr=0x8c0e6198u; R(4)=LD32(R(14)+20); f_8c0e6a30(c); }
  {  goto L8c0e62fa; }
L8c0e619c:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(7)=R(14);
  R(5)+=0x4cu;
  ST32(R(14)+16,R(2));
  R(7)+=0x6cu;
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0e6db0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61b4u; R(4)=LD32(R(14)+20); f_8c0e6db0(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e61b8:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e792eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e61c6u; R(4)=LD32(R(14)+20); f_8c0e792e(c); }
  {  goto L8c0e62fa; }
L8c0e61ca:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7d7au;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61dau; R(4)=LD32(R(14)+20); f_8c0e7d7a(c); }
  {  goto L8c0e62fa; }
L8c0e61de:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7a96u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61eeu; R(4)=LD32(R(14)+20); f_8c0e7a96(c); }
  {  goto L8c0e62fa; }
L8c0e61f2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e84b0u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  { c->pr=0x8c0e6200u; R(4)=LD32(R(14)+20); f_8c0e84b0(c); }
  {  goto L8c0e62fa; }
L8c0e6204:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(6)=R(14);
  R(2)=0x8c0e86aeu;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(6)+=0x3cu;
  { c->pr=0x8c0e6216u; R(4)=LD32(R(14)+20); f_8c0e86ae(c); }
  {  goto L8c0e62fa; }
L8c0e621a:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e89d4u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e622cu; R(4)=LD32(R(14)+20); f_8c0e89d4(c); }
  {  goto L8c0e62fa; }
L8c0e6230:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8fb8u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e623cu; R(4)=LD32(R(14)+20); f_8c0e8fb8(c); }
  {  goto L8c0e62fa; }
L8c0e6240:;
  R(2)=LD32(R(14)+20);
  R(3)=0x8c0e9d14u;
  ST32(R(14)+16,R(2));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e624cu; R(4)=LD32(R(14)+20); f_8c0e9d14(c); }
  {  goto L8c0e62fa; }
L8c0e6250:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e9d9eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e625cu; R(4)=LD32(R(14)+20); f_8c0e9d9e(c); }
  {  goto L8c0e62fa; }
L8c0e6260:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e9e0au;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6272u; R(4)=LD32(R(14)+20); f_8c0e9e0a(c); }
  {  goto L8c0e62fa; }
L8c0e6276:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(3)=R(14);
  R(2)=LD32(R(14)+40);
  R(3)+=0x6cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0e9eacu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6292u; R(4)=LD32(R(14)+20); f_8c0e9eac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e6296:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(2)=R(14);
  R(3)=LD32(R(14)+40);
  R(2)+=0x6cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ea0acu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62b2u; R(4)=LD32(R(14)+20); f_8c0ea0ac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e62b6:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(14)+36);
  R(3)=0x8c0ea342u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62ccu; R(4)=LD32(R(14)+20); f_8c0ea342(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e62d0:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8590u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e62deu; R(4)=LD32(R(14)+20); f_8c0e8590(c); }
  {  goto L8c0e62fa; }
L8c0e62e2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0ea466u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62f8u; R(4)=LD32(R(14)+20); f_8c0ea466(c); }
  R(15)+=0x4u;
L8c0e62fa:;
  { R(12)=R(0); goto L8c0e6308; }
L8c0e62fe:;
  R(2)=0x8c0f0e16u;
  { c->pr=0x8c0e6304u;  f_8c0f0e16(c); }
  {  goto L8c0e6130; }
L8c0e6308:;
  c->t=R(12)==R(10);
  if(!c->t) goto L8c0e6312;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e6312u; R(4)=LD32(R(14)+16); f_8c0e6c9a(c); }
L8c0e6312:;
  R(0)=0x7cu;
  ST32(R(9),R(12));
  R(7)=LD32(R(14)+R(0));
  R(0)=0x74u;
  R(5)=LD32(R(14)+8);
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  ST32(R(14)+12,R(13));
  ST32(R(14)+16,R(13));
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+32,R(13));
  ST32(R(14)+36,R(13));
  ST32(R(14)+40,R(13));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0e633c;
  {  goto L8c0e6130; }
L8c0e633c:;
  R(3)=LD32(R(14)+R(0));
  R(6)=R(12);
  { uint32_t tg=R(3); c->pr=0x8c0e6344u; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c0e6130; }
}
void f_8c0e60a8(SH4Ctx *c) {
  { R(4)=0x2u; goto L8c0e6112; }
L8c0e6112:;
  R(14)=R(4);
  R(14)<<=2;
  R(14)<<=2;
  R(3)=0x8c2f0a24u;
  R(2)=0x8c2f0a04u;
  R(9)=R(4);
  R(14)<<=2;
  R(10)=0xffffff01u;
  R(9)<<=2;
  R(8)=0x8c0e6b2au;
  c->t=R(14)>>31;R(14)<<=1;
  R(11)=R(4);
  R(9)+=R(2);
  R(14)+=R(3);
  R(13)=0x0u;
L8c0e6130:;
  R(0)=LD32(R(14)+8);
  R(1)=0x15u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0e613c;
  {  goto L8c0e62fe; }
L8c0e613c:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0e6158u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0e6148u+R(0));  switch(tg){ case 0x8c0e6182u: goto L8c0e6182; case 0x8c0e618eu: goto L8c0e618e; case 0x8c0e619cu: goto L8c0e619c; case 0x8c0e61b8u: goto L8c0e61b8; case 0x8c0e61cau: goto L8c0e61ca; case 0x8c0e61deu: goto L8c0e61de; case 0x8c0e61f2u: goto L8c0e61f2; case 0x8c0e6204u: goto L8c0e6204; case 0x8c0e621au: goto L8c0e621a; case 0x8c0e6230u: goto L8c0e6230; case 0x8c0e6240u: goto L8c0e6240; case 0x8c0e6250u: goto L8c0e6250; case 0x8c0e6260u: goto L8c0e6260; case 0x8c0e6276u: goto L8c0e6276; case 0x8c0e6296u: goto L8c0e6296; case 0x8c0e62b6u: goto L8c0e62b6; case 0x8c0e62d0u: goto L8c0e62d0; case 0x8c0e62e2u: goto L8c0e62e2; case 0x8c0e62feu: goto L8c0e62fe; default: sh4_bad_jump(c,0x8c0e6144u,tg); return; } }
L8c0e6182:;
  R(3)=LD32(R(14)+20);
  ST32(R(14)+16,R(3));
  { uint32_t tg=R(8); c->pr=0x8c0e618au; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
  {  goto L8c0e62fa; }
L8c0e618e:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e6a30u;
  ST32(R(14)+16,R(3));
  { c->pr=0x8c0e6198u; R(4)=LD32(R(14)+20); f_8c0e6a30(c); }
  {  goto L8c0e62fa; }
L8c0e619c:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(7)=R(14);
  R(5)+=0x4cu;
  ST32(R(14)+16,R(2));
  R(7)+=0x6cu;
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0e6db0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61b4u; R(4)=LD32(R(14)+20); f_8c0e6db0(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e61b8:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e792eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e61c6u; R(4)=LD32(R(14)+20); f_8c0e792e(c); }
  {  goto L8c0e62fa; }
L8c0e61ca:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7d7au;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61dau; R(4)=LD32(R(14)+20); f_8c0e7d7a(c); }
  {  goto L8c0e62fa; }
L8c0e61de:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7a96u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61eeu; R(4)=LD32(R(14)+20); f_8c0e7a96(c); }
  {  goto L8c0e62fa; }
L8c0e61f2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e84b0u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  { c->pr=0x8c0e6200u; R(4)=LD32(R(14)+20); f_8c0e84b0(c); }
  {  goto L8c0e62fa; }
L8c0e6204:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(6)=R(14);
  R(2)=0x8c0e86aeu;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(6)+=0x3cu;
  { c->pr=0x8c0e6216u; R(4)=LD32(R(14)+20); f_8c0e86ae(c); }
  {  goto L8c0e62fa; }
L8c0e621a:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e89d4u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e622cu; R(4)=LD32(R(14)+20); f_8c0e89d4(c); }
  {  goto L8c0e62fa; }
L8c0e6230:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8fb8u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e623cu; R(4)=LD32(R(14)+20); f_8c0e8fb8(c); }
  {  goto L8c0e62fa; }
L8c0e6240:;
  R(2)=LD32(R(14)+20);
  R(3)=0x8c0e9d14u;
  ST32(R(14)+16,R(2));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e624cu; R(4)=LD32(R(14)+20); f_8c0e9d14(c); }
  {  goto L8c0e62fa; }
L8c0e6250:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e9d9eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e625cu; R(4)=LD32(R(14)+20); f_8c0e9d9e(c); }
  {  goto L8c0e62fa; }
L8c0e6260:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e9e0au;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6272u; R(4)=LD32(R(14)+20); f_8c0e9e0a(c); }
  {  goto L8c0e62fa; }
L8c0e6276:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(3)=R(14);
  R(2)=LD32(R(14)+40);
  R(3)+=0x6cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0e9eacu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6292u; R(4)=LD32(R(14)+20); f_8c0e9eac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e6296:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(2)=R(14);
  R(3)=LD32(R(14)+40);
  R(2)+=0x6cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ea0acu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62b2u; R(4)=LD32(R(14)+20); f_8c0ea0ac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e62b6:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(14)+36);
  R(3)=0x8c0ea342u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62ccu; R(4)=LD32(R(14)+20); f_8c0ea342(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e62d0:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8590u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e62deu; R(4)=LD32(R(14)+20); f_8c0e8590(c); }
  {  goto L8c0e62fa; }
L8c0e62e2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0ea466u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62f8u; R(4)=LD32(R(14)+20); f_8c0ea466(c); }
  R(15)+=0x4u;
L8c0e62fa:;
  { R(12)=R(0); goto L8c0e6308; }
L8c0e62fe:;
  R(2)=0x8c0f0e16u;
  { c->pr=0x8c0e6304u;  f_8c0f0e16(c); }
  {  goto L8c0e6130; }
L8c0e6308:;
  c->t=R(12)==R(10);
  if(!c->t) goto L8c0e6312;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e6312u; R(4)=LD32(R(14)+16); f_8c0e6c9a(c); }
L8c0e6312:;
  R(0)=0x7cu;
  ST32(R(9),R(12));
  R(7)=LD32(R(14)+R(0));
  R(0)=0x74u;
  R(5)=LD32(R(14)+8);
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  ST32(R(14)+12,R(13));
  ST32(R(14)+16,R(13));
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+32,R(13));
  ST32(R(14)+36,R(13));
  ST32(R(14)+40,R(13));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0e633c;
  {  goto L8c0e6130; }
L8c0e633c:;
  R(3)=LD32(R(14)+R(0));
  R(6)=R(12);
  { uint32_t tg=R(3); c->pr=0x8c0e6344u; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c0e6130; }
}
void f_8c0e60ac(SH4Ctx *c) {
  { R(4)=0x3u; goto L8c0e6112; }
L8c0e6112:;
  R(14)=R(4);
  R(14)<<=2;
  R(14)<<=2;
  R(3)=0x8c2f0a24u;
  R(2)=0x8c2f0a04u;
  R(9)=R(4);
  R(14)<<=2;
  R(10)=0xffffff01u;
  R(9)<<=2;
  R(8)=0x8c0e6b2au;
  c->t=R(14)>>31;R(14)<<=1;
  R(11)=R(4);
  R(9)+=R(2);
  R(14)+=R(3);
  R(13)=0x0u;
L8c0e6130:;
  R(0)=LD32(R(14)+8);
  R(1)=0x15u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0e613c;
  {  goto L8c0e62fe; }
L8c0e613c:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0e6158u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0e6148u+R(0));  switch(tg){ case 0x8c0e6182u: goto L8c0e6182; case 0x8c0e618eu: goto L8c0e618e; case 0x8c0e619cu: goto L8c0e619c; case 0x8c0e61b8u: goto L8c0e61b8; case 0x8c0e61cau: goto L8c0e61ca; case 0x8c0e61deu: goto L8c0e61de; case 0x8c0e61f2u: goto L8c0e61f2; case 0x8c0e6204u: goto L8c0e6204; case 0x8c0e621au: goto L8c0e621a; case 0x8c0e6230u: goto L8c0e6230; case 0x8c0e6240u: goto L8c0e6240; case 0x8c0e6250u: goto L8c0e6250; case 0x8c0e6260u: goto L8c0e6260; case 0x8c0e6276u: goto L8c0e6276; case 0x8c0e6296u: goto L8c0e6296; case 0x8c0e62b6u: goto L8c0e62b6; case 0x8c0e62d0u: goto L8c0e62d0; case 0x8c0e62e2u: goto L8c0e62e2; case 0x8c0e62feu: goto L8c0e62fe; default: sh4_bad_jump(c,0x8c0e6144u,tg); return; } }
L8c0e6182:;
  R(3)=LD32(R(14)+20);
  ST32(R(14)+16,R(3));
  { uint32_t tg=R(8); c->pr=0x8c0e618au; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
  {  goto L8c0e62fa; }
L8c0e618e:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e6a30u;
  ST32(R(14)+16,R(3));
  { c->pr=0x8c0e6198u; R(4)=LD32(R(14)+20); f_8c0e6a30(c); }
  {  goto L8c0e62fa; }
L8c0e619c:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(7)=R(14);
  R(5)+=0x4cu;
  ST32(R(14)+16,R(2));
  R(7)+=0x6cu;
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0e6db0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61b4u; R(4)=LD32(R(14)+20); f_8c0e6db0(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e61b8:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e792eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e61c6u; R(4)=LD32(R(14)+20); f_8c0e792e(c); }
  {  goto L8c0e62fa; }
L8c0e61ca:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7d7au;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61dau; R(4)=LD32(R(14)+20); f_8c0e7d7a(c); }
  {  goto L8c0e62fa; }
L8c0e61de:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7a96u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61eeu; R(4)=LD32(R(14)+20); f_8c0e7a96(c); }
  {  goto L8c0e62fa; }
L8c0e61f2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e84b0u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  { c->pr=0x8c0e6200u; R(4)=LD32(R(14)+20); f_8c0e84b0(c); }
  {  goto L8c0e62fa; }
L8c0e6204:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(6)=R(14);
  R(2)=0x8c0e86aeu;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(6)+=0x3cu;
  { c->pr=0x8c0e6216u; R(4)=LD32(R(14)+20); f_8c0e86ae(c); }
  {  goto L8c0e62fa; }
L8c0e621a:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e89d4u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e622cu; R(4)=LD32(R(14)+20); f_8c0e89d4(c); }
  {  goto L8c0e62fa; }
L8c0e6230:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8fb8u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e623cu; R(4)=LD32(R(14)+20); f_8c0e8fb8(c); }
  {  goto L8c0e62fa; }
L8c0e6240:;
  R(2)=LD32(R(14)+20);
  R(3)=0x8c0e9d14u;
  ST32(R(14)+16,R(2));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e624cu; R(4)=LD32(R(14)+20); f_8c0e9d14(c); }
  {  goto L8c0e62fa; }
L8c0e6250:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e9d9eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e625cu; R(4)=LD32(R(14)+20); f_8c0e9d9e(c); }
  {  goto L8c0e62fa; }
L8c0e6260:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e9e0au;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6272u; R(4)=LD32(R(14)+20); f_8c0e9e0a(c); }
  {  goto L8c0e62fa; }
L8c0e6276:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(3)=R(14);
  R(2)=LD32(R(14)+40);
  R(3)+=0x6cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0e9eacu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6292u; R(4)=LD32(R(14)+20); f_8c0e9eac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e6296:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(2)=R(14);
  R(3)=LD32(R(14)+40);
  R(2)+=0x6cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ea0acu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62b2u; R(4)=LD32(R(14)+20); f_8c0ea0ac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e62b6:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(14)+36);
  R(3)=0x8c0ea342u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62ccu; R(4)=LD32(R(14)+20); f_8c0ea342(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e62d0:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8590u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e62deu; R(4)=LD32(R(14)+20); f_8c0e8590(c); }
  {  goto L8c0e62fa; }
L8c0e62e2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0ea466u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62f8u; R(4)=LD32(R(14)+20); f_8c0ea466(c); }
  R(15)+=0x4u;
L8c0e62fa:;
  { R(12)=R(0); goto L8c0e6308; }
L8c0e62fe:;
  R(2)=0x8c0f0e16u;
  { c->pr=0x8c0e6304u;  f_8c0f0e16(c); }
  {  goto L8c0e6130; }
L8c0e6308:;
  c->t=R(12)==R(10);
  if(!c->t) goto L8c0e6312;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e6312u; R(4)=LD32(R(14)+16); f_8c0e6c9a(c); }
L8c0e6312:;
  R(0)=0x7cu;
  ST32(R(9),R(12));
  R(7)=LD32(R(14)+R(0));
  R(0)=0x74u;
  R(5)=LD32(R(14)+8);
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  ST32(R(14)+12,R(13));
  ST32(R(14)+16,R(13));
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+32,R(13));
  ST32(R(14)+36,R(13));
  ST32(R(14)+40,R(13));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0e633c;
  {  goto L8c0e6130; }
L8c0e633c:;
  R(3)=LD32(R(14)+R(0));
  R(6)=R(12);
  { uint32_t tg=R(3); c->pr=0x8c0e6344u; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c0e6130; }
}
void f_8c0e6110(SH4Ctx *c) {
  R(4)=0x7u;
  R(14)=R(4);
  R(14)<<=2;
  R(14)<<=2;
  R(3)=0x8c2f0a24u;
  R(2)=0x8c2f0a04u;
  R(9)=R(4);
  R(14)<<=2;
  R(10)=0xffffff01u;
  R(9)<<=2;
  R(8)=0x8c0e6b2au;
  c->t=R(14)>>31;R(14)<<=1;
  R(11)=R(4);
  R(9)+=R(2);
  R(14)+=R(3);
  R(13)=0x0u;
L8c0e6130:;
  R(0)=LD32(R(14)+8);
  R(1)=0x15u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0e613c;
  {  goto L8c0e62fe; }
L8c0e613c:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0e6158u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0e6148u+R(0));  switch(tg){ case 0x8c0e6182u: goto L8c0e6182; case 0x8c0e618eu: goto L8c0e618e; case 0x8c0e619cu: goto L8c0e619c; case 0x8c0e61b8u: goto L8c0e61b8; case 0x8c0e61cau: goto L8c0e61ca; case 0x8c0e61deu: goto L8c0e61de; case 0x8c0e61f2u: goto L8c0e61f2; case 0x8c0e6204u: goto L8c0e6204; case 0x8c0e621au: goto L8c0e621a; case 0x8c0e6230u: goto L8c0e6230; case 0x8c0e6240u: goto L8c0e6240; case 0x8c0e6250u: goto L8c0e6250; case 0x8c0e6260u: goto L8c0e6260; case 0x8c0e6276u: goto L8c0e6276; case 0x8c0e6296u: goto L8c0e6296; case 0x8c0e62b6u: goto L8c0e62b6; case 0x8c0e62d0u: goto L8c0e62d0; case 0x8c0e62e2u: goto L8c0e62e2; case 0x8c0e62feu: goto L8c0e62fe; default: sh4_bad_jump(c,0x8c0e6144u,tg); return; } }
L8c0e6182:;
  R(3)=LD32(R(14)+20);
  ST32(R(14)+16,R(3));
  { uint32_t tg=R(8); c->pr=0x8c0e618au; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
  {  goto L8c0e62fa; }
L8c0e618e:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e6a30u;
  ST32(R(14)+16,R(3));
  { c->pr=0x8c0e6198u; R(4)=LD32(R(14)+20); f_8c0e6a30(c); }
  {  goto L8c0e62fa; }
L8c0e619c:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(7)=R(14);
  R(5)+=0x4cu;
  ST32(R(14)+16,R(2));
  R(7)+=0x6cu;
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0e6db0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61b4u; R(4)=LD32(R(14)+20); f_8c0e6db0(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e61b8:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e792eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e61c6u; R(4)=LD32(R(14)+20); f_8c0e792e(c); }
  {  goto L8c0e62fa; }
L8c0e61ca:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7d7au;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61dau; R(4)=LD32(R(14)+20); f_8c0e7d7a(c); }
  {  goto L8c0e62fa; }
L8c0e61de:;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(2)+40);
  R(2)=0x8c0e7a96u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e61eeu; R(4)=LD32(R(14)+20); f_8c0e7a96(c); }
  {  goto L8c0e62fa; }
L8c0e61f2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e84b0u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  { c->pr=0x8c0e6200u; R(4)=LD32(R(14)+20); f_8c0e84b0(c); }
  {  goto L8c0e62fa; }
L8c0e6204:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(6)=R(14);
  R(2)=0x8c0e86aeu;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(6)+=0x3cu;
  { c->pr=0x8c0e6216u; R(4)=LD32(R(14)+20); f_8c0e86ae(c); }
  {  goto L8c0e62fa; }
L8c0e621a:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e89d4u;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e622cu; R(4)=LD32(R(14)+20); f_8c0e89d4(c); }
  {  goto L8c0e62fa; }
L8c0e6230:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8fb8u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e623cu; R(4)=LD32(R(14)+20); f_8c0e8fb8(c); }
  {  goto L8c0e62fa; }
L8c0e6240:;
  R(2)=LD32(R(14)+20);
  R(3)=0x8c0e9d14u;
  ST32(R(14)+16,R(2));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e624cu; R(4)=LD32(R(14)+20); f_8c0e9d14(c); }
  {  goto L8c0e62fa; }
L8c0e6250:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e9d9eu;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e625cu; R(4)=LD32(R(14)+20); f_8c0e9d9e(c); }
  {  goto L8c0e62fa; }
L8c0e6260:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(3)=0x8c0e9e0au;
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6272u; R(4)=LD32(R(14)+20); f_8c0e9e0a(c); }
  {  goto L8c0e62fa; }
L8c0e6276:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(3)=R(14);
  R(2)=LD32(R(14)+40);
  R(3)+=0x6cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0e9eacu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e6292u; R(4)=LD32(R(14)+20); f_8c0e9eac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e6296:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(2)=R(14);
  R(3)=LD32(R(14)+40);
  R(2)+=0x6cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ea0acu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62b2u; R(4)=LD32(R(14)+20); f_8c0ea0ac(c); }
  { R(15)+=0x8u; goto L8c0e62fa; }
L8c0e62b6:;
  R(3)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(14)+36);
  R(3)=0x8c0ea342u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62ccu; R(4)=LD32(R(14)+20); f_8c0ea342(c); }
  { R(15)+=0x4u; goto L8c0e62fa; }
L8c0e62d0:;
  R(3)=LD32(R(14)+20);
  R(2)=0x8c0e8590u;
  ST32(R(14)+16,R(3));
  R(5)=LD32(R(14)+24);
  R(6)=LD32(R(14)+28);
  { c->pr=0x8c0e62deu; R(4)=LD32(R(14)+20); f_8c0e8590(c); }
  {  goto L8c0e62fa; }
L8c0e62e2:;
  R(2)=LD32(R(14)+20);
  R(5)=R(14);
  R(5)+=0x2cu;
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(14)+36);
  R(2)=0x8c0ea466u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+28);
  R(7)=LD32(R(14)+32);
  { c->pr=0x8c0e62f8u; R(4)=LD32(R(14)+20); f_8c0ea466(c); }
  R(15)+=0x4u;
L8c0e62fa:;
  { R(12)=R(0); goto L8c0e6308; }
L8c0e62fe:;
  R(2)=0x8c0f0e16u;
  { c->pr=0x8c0e6304u;  f_8c0f0e16(c); }
  {  goto L8c0e6130; }
L8c0e6308:;
  c->t=R(12)==R(10);
  if(!c->t) goto L8c0e6312;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e6312u; R(4)=LD32(R(14)+16); f_8c0e6c9a(c); }
L8c0e6312:;
  R(0)=0x7cu;
  ST32(R(9),R(12));
  R(7)=LD32(R(14)+R(0));
  R(0)=0x74u;
  R(5)=LD32(R(14)+8);
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  ST32(R(14)+12,R(13));
  ST32(R(14)+16,R(13));
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+32,R(13));
  ST32(R(14)+36,R(13));
  ST32(R(14)+40,R(13));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0e633c;
  {  goto L8c0e6130; }
L8c0e633c:;
  R(3)=LD32(R(14)+R(0));
  R(6)=R(12);
  { uint32_t tg=R(3); c->pr=0x8c0e6344u; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c0e6130; }
}
void f_8c0e6348(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(14)<<=2;
  R(3)=0x8c2f0a24u;
  R(14)<<=2;
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(0)=0x74u;
  R(14)+=R(3);
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e636a;
  R(2)=LD32(R(14)+R(0));
  R(0)=0x7cu;
  R(7)=LD32(R(14)+R(0));
  { uint32_t tg=R(2); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0e636a:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e636e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(14)<<=2;
  R(3)=0x8c2f0a24u;
  R(14)<<=2;
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(0)=0x78u;
  R(14)+=R(3);
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e638c;
  R(2)=LD32(R(14)+R(0));
  { uint32_t tg=R(2); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0e638c:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e63e0(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=0x8c2f0a24u;
  R(3)=0x400u;
  R(7)=R(5);
  R(6)=0x80u;
  R(7)+=R(3);
  ST32(R(15),R(5));
L8c0e63ee:;
  R(0)=0x74u;
  ST32(R(5)+R(0),R(4));
  R(5)+=R(6);
  c->t=R(5)>=R(7);
  if(!c->t) goto L8c0e63ee;
  { R(15)+=0x4u; return; }
}
void f_8c0e63fc(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=0x8c2f0a24u;
  R(3)=0x400u;
  R(7)=R(5);
  R(6)=0x80u;
  R(7)+=R(3);
  ST32(R(15),R(5));
L8c0e640a:;
  R(0)=0x78u;
  ST32(R(5)+R(0),R(4));
  R(5)+=R(6);
  c->t=R(5)>=R(7);
  if(!c->t) goto L8c0e640a;
  { R(15)+=0x4u; return; }
}
void f_8c0e6418(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=0x8c2f0a24u;
  R(3)=0x400u;
  R(7)=R(5);
  R(6)=0x80u;
  R(7)+=R(3);
  ST32(R(15),R(5));
L8c0e6426:;
  R(0)=0x7cu;
  ST32(R(5)+R(0),R(4));
  R(5)+=R(6);
  c->t=R(5)>=R(7);
  if(!c->t) goto L8c0e6426;
  { R(15)+=0x4u; return; }
}
void f_8c0e6434(SH4Ctx *c) {
  R(4)<<=2;
  R(3)=0x8c2f0a24u;
  R(4)<<=2;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c0e6444(SH4Ctx *c) {
  R(4)<<=2;
  R(3)=0x8c2f0a24u;
  R(4)<<=2;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  { ST32(R(4)+8,R(5)); return; }
}
void f_8c0e6454(SH4Ctx *c) {
  R(4)<<=2;
  R(3)=0x8c2f0a24u;
  R(4)<<=2;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(6));
  ST32(R(4)+28,R(7));
  R(2)=LD32(R(15));
  ST32(R(4)+32,R(2));
  R(1)=LD32(R(15)+4);
  ST32(R(4)+36,R(1));
  R(1)=0x1u;
  R(2)=LD32(R(15)+8);
  ST32(R(4)+40,R(2));
  { ST32(R(4)+4,R(1)); return; }
}
void f_8c0e6478(SH4Ctx *c) {
  R(6)=R(4);
  R(6)<<=2;
  R(6)<<=2;
  R(3)=0x8c2f0a24u;
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(4)=R(6);
  R(4)+=0x4cu;
L8c0e648a:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(2)=R(6);
  R(2)+=0x6cu;
  ST8(R(4),R(3));
  R(4)+=0x1u;
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c0e648a;
  {  return; }
}
void f_8c0e64a4(SH4Ctx *c) {
  R(7)=R(4);
  R(7)<<=2;
  R(7)<<=2;
  R(3)=0x8c2f0a24u;
  R(7)<<=2;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=R(7)>>31;R(7)<<=1;
  R(7)+=R(3);
  R(4)=R(7);
  R(4)+=0x2cu;
  R(14)=0x0u;
L8c0e64ba:;
  R(2)=R(7);
  ST8(R(4),R(14));
  R(2)+=0x39u;
  R(4)+=0x1u;
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c0e64ba;
  R(4)=R(7);
  R(4)+=0x3cu;
L8c0e64ca:;
  R(2)=R(7);
  ST8(R(4),R(14));
  R(2)+=0x49u;
  R(4)+=0x1u;
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c0e64ca;
  R(0)=R(5);
  R(4)=R(5);
  R(5)+=0xcu;
  R(14)=R(7);
  c->t=R(4)>=R(5);
  { uint32_t k=c->t; R(14)+=0x2cu; if(k) goto L8c0e64f6; }
L8c0e64e4:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e64f6;
  {int32_t v=(int8_t)LD8(R(0));R(0)+=1;R(3)=(uint32_t)v;}
  R(4)+=0x1u;
  c->t=R(4)>=R(5);
  ST8(R(14),R(3));
  { uint32_t k=!c->t; R(14)+=0x1u; if(k) goto L8c0e64e4; }
L8c0e64f6:;
  R(14)=R(6);
  R(4)=R(6);
  R(6)+=0xcu;
  R(5)=R(7);
  c->t=R(4)>=R(6);
  { uint32_t k=c->t; R(5)+=0x3cu; if(k) goto L8c0e6516; }
L8c0e6504:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e6516;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(4)+=0x1u;
  c->t=R(4)>=R(6);
  ST8(R(5),R(3));
  { uint32_t k=!c->t; R(5)+=0x1u; if(k) goto L8c0e6504; }
L8c0e6516:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e651a(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(4)<<=2;
  R(3)=0x8c2f0a24u;
  R(4)<<=2;
  R(2)=0x8c0685b4u;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  ST32(R(15),R(4));
  R(4)+=0x6cu;
  R(6)=0x8u;
  { R(15)+=0x4u; { f_8c0685b4(c); return; } }
}
void f_8c0e6578(SH4Ctx *c) {
  R(5)=0x8c2f2e38u;
  R(3)=0x1u;
  R(4)&=R(3);
  R(2)=LD32(R(5));
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  ST32(R(2),R(4));
  { uint32_t k=!c->t; R(6)=LD32(R(5)); if(k) goto L8c0e6598; }
  R(2)=0x8c0f0db8u;
  ST32(R(6)+12,R(2));
  R(2)=0x8c0f0dcau;
  R(1)=LD32(R(5));
  ST32(R(1)+16,R(2));
  {  goto L8c0e65a2; }
L8c0e6598:;
  R(1)=0x8c0f0dd2u;
  R(0)=0x8c0f0dc2u;
  ST32(R(6)+12,R(0));
  R(2)=LD32(R(5));
  ST32(R(2)+16,R(1));
L8c0e65a2:;
  {  return; }
}
void f_8c0e65a6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(10)=R(6);
  R(6)=0x8c2f387cu;
  R(3)=0x8c2f2e24u;
  R(12)=R(5);
  R(9)=0x8c2f2e38u;
  R(5)=R(6);
  ST32(R(15),R(4));
  R(5)+=0x20u;
  R(14)=0x0u;
  ST32(R(9),R(3));
  R(4)=R(6);
L8c0e65cc:;
  ST32(R(4),R(14));
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0e65cc;
  R(4)=0x8c2f2e24u;
  R(6)=0x14u;
  R(11)=0x8c0686b8u;
  { c->pr=0x8c0e65deu; R(5)=0x0u; f_8c0686b8(c); }
  R(4)=0x8c2f2e3cu;
  R(6)=0xa40u;
  { uint32_t tg=R(11); c->pr=0x8c0e65e6u; R(5)=0x0u; sh4_call(c,tg); }
  { c->pr=0x8c0e65eau; R(4)=0x0u; f_8c0e6578(c); }
  R(4)=0x8c2f7d44u;
  R(2)=0x0u;
  R(5)=R(14);
  R(6)=0x1u;
  ST32(R(4),R(2));
  R(13)=0x8u;
L8c0e65f6:;
  R(3)=R(12);
  c->t=(R(3)&R(6))==0;
  { uint32_t k=c->t; R(5)+=0x1u; if(k) goto L8c0e6604; }
  R(1)=LD32(R(4));
  R(1)+=0x1u;
  ST32(R(4),R(1));
L8c0e6604:;
  c->t=R(6)>>31;R(6)<<=1;
  c->t=(int32_t)R(5)>=(int32_t)R(13);
  if(!c->t) goto L8c0e65f6;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0e6654;
  R(5)=R(12);
  R(6)=R(10);
  { c->pr=0x8c0e6616u; R(4)=LD32(R(15)); f_8c0e66dc(c); }
  R(2)=LD32(R(9));
  { ST32(R(2)+8,R(14)); goto L8c0e6662; }
L8c0e6654:;
  R(5)=R(12);
  R(6)=R(10);
  { c->pr=0x8c0e665cu; R(4)=LD32(R(15)); f_8c0e66a0(c); }
  R(2)=LD32(R(9));
  R(3)=0x1u;
  ST32(R(2)+8,R(3));
L8c0e6662:;
  R(3)=0x8c2f7d40u;
  R(2)=0x8c2f7d3cu;
  R(1)=0x8c0e5cc4u;
  ST32(R(2),R(13));
  ST32(R(3),R(14));
  { c->pr=0x8c0e6670u; R(4)=0xau; f_8c0e5cc4(c); }
  R(2)=0x8c2f7d3cu;
  R(4)=0x8c2f7afcu;
  R(6)=LD32(R(2));
  R(3)=R(6);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c0e6686u; R(5)=0x0u; sh4_call(c,tg); }
  R(3)=0x8c0f0e44u;
  { c->pr=0x8c0e668cu;  f_8c0f0e44(c); }
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e66a0(SH4Ctx *c) {
  R(0)=R(4);
  R(3)=0x8c2f2e38u;
  c->t=(int32_t)R(0)==15;
  { uint32_t k=c->t; R(5)=LD32(R(3)); if(k) goto L8c0e66ba; }
  c->t=(int32_t)R(0)==33;
  if(c->t) goto L8c0e66c0;
  c->t=(int32_t)R(0)==65;
  if(c->t) goto L8c0e66c4;
  c->t=(int32_t)R(0)==122;
  if(c->t) goto L8c0e66ca;
  {  goto L8c0e66d0; }
L8c0e66ba:;
  R(2)=0x0u;
  { ST32(R(5)+4,R(2)); goto L8c0e66d6; }
L8c0e66c0:;
  { R(0)=0x1u; goto L8c0e66cc; }
L8c0e66c4:;
  R(1)=0x2u;
  { ST32(R(5)+4,R(1)); goto L8c0e66d6; }
L8c0e66ca:;
  R(0)=0x3u;
L8c0e66cc:;
  { ST32(R(5)+4,R(0)); goto L8c0e66d6; }
L8c0e66d0:;
  R(0)=0xffffff00u;
  {  return; }
L8c0e66d6:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0e66dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  ST32(R(15)+4,R(5));
  R(0)=R(4);
  R(3)=0x8c2f2e38u;
  c->t=(int32_t)R(0)==15;
  R(5)=0x8c0f44d8u;
  R(10)=0x1u;
  R(14)=0x8c2f2e3cu;
  R(13)=0x0u;
  R(12)=0x8c0f44c8u;
  { uint32_t k=c->t; R(7)=LD32(R(3)); if(k) goto L8c0e6714; }
  c->t=(int32_t)R(0)==33;
  if(c->t) goto L8c0e671c;
  c->t=(int32_t)R(0)==65;
  if(c->t) goto L8c0e6726;
  c->t=(int32_t)R(0)==122;
  if(c->t) goto L8c0e6730;
  {  goto L8c0e673c; }
L8c0e6714:;
  ST32(R(7)+4,R(13));
  R(8)=LD32(R(12));
  { R(2)=LD32(R(5)); goto L8c0e6722; }
L8c0e671c:;
  ST32(R(7)+4,R(10));
  R(2)=LD32(R(5)+4);
  R(8)=LD32(R(12)+4);
L8c0e6722:;
  { ST32(R(15)+16,R(2)); goto L8c0e6768; }
L8c0e6726:;
  R(2)=0x2u;
  ST32(R(7)+4,R(2));
  R(8)=LD32(R(12)+8);
  { R(1)=LD32(R(5)+8); goto L8c0e6738; }
L8c0e6730:;
  R(2)=0x3u;
  ST32(R(7)+4,R(2));
  R(8)=LD32(R(12)+12);
  R(1)=LD32(R(5)+12);
L8c0e6738:;
  { ST32(R(15)+16,R(1)); goto L8c0e6768; }
L8c0e673c:;
  R(0)=0xffffff00u;
  {  goto L8c0e681e; }
L8c0e6768:;
  R(3)=R(8);
  R(4)<<=8;
  R(3)+=0x1u;
  R(12)=0x8c0686b8u;
  c->t=R(4)>>31;R(4)<<=1;
  R(11)=R(6);
  R(4)+=0x20u;
  R(9)=R(13);
  R(3)<<=8;
  ST32(R(15)+8,R(4));
  c->t=R(3)>>31;R(3)<<=1;
  ST32(R(15),R(10));
  { ST32(R(15)+12,R(3)); goto L8c0e6816; }
L8c0e6784:;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15));
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0e680a;
  R(3)=0x4cu;
  R(2)=0x8c2f789cu;
  c->macl=R(9)*R(3);
  R(0)=R(10);
  ST8(R(14)+2,R(0));
  R(0)=R(13);
  R(1)=0x220u;
  ST16(R(14),R(9));
  R(3)=c->macl;
  R(1)+=R(11);
  R(3)+=R(2);
  ST32(R(14)+28,R(3));
  R(3)=R(11);
  ST8(R(14)+10,R(0));
  R(3)+=0x20u;
  ST8(R(14)+11,R(0));
  ST8(R(14)+12,R(0));
  R(0)=R(13);
  ST32(R(14)+44,R(11));
  ST32(R(14)+32,R(3));
  ST32(R(14)+36,R(1));
  R(3)=LD32(R(15)+12);
  R(3)+=R(11);
  R(3)+=0x20u;
  ST32(R(14)+40,R(3));
  ST8(R(14)+8,R(0));
  ST8(R(14)+9,R(0));
  R(0)=R(10);
  ST16(R(14)+14,R(0));
  R(0)=R(8);
  ST16(R(14)+16,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+16);
  ST16(R(14)+18,R(0));
  R(0)=0x20u;
  R(5)=0x0u;
  R(4)=R(14);
  ST16(R(14)+20,R(0));
  R(6)=0x10u;
  { uint32_t tg=R(12); c->pr=0x8c0e67dcu; R(4)+=0x38u; sh4_call(c,tg); }
  R(6)=0x100u;
  R(4)=R(14);
  R(5)=0x0u;
  { uint32_t tg=R(12); c->pr=0x8c0e67e6u; R(4)+=0x48u; sh4_call(c,tg); }
  R(5)=0x47u;
  R(6)=0x20u;
  { uint32_t tg=R(12); c->pr=0x8c0e67eeu; R(4)=LD32(R(14)+44); sh4_call(c,tg); }
  R(5)=0x53u;
  R(6)=0x20u;
  { uint32_t tg=R(12); c->pr=0x8c0e67f6u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(5)=0x46u;
  R(6)=0x20u;
  { uint32_t tg=R(12); c->pr=0x8c0e67feu; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  R(5)=0x44u;
  R(6)=0x20u;
  { uint32_t tg=R(12); c->pr=0x8c0e6806u; R(4)=LD32(R(14)+40); sh4_call(c,tg); }
  R(3)=LD32(R(15)+8);
  R(11)+=R(3);
L8c0e680a:;
  R(3)=LD32(R(15));
  R(9)+=0x1u;
  R(2)=0x148u;
  c->t=R(3)>>31;R(3)<<=1;
  R(14)+=R(2);
  ST32(R(15),R(3));
L8c0e6816:;
  R(3)=0x8u;
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  if(!c->t) goto L8c0e6784;
  R(0)=0x0u;
L8c0e681e:;
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
void f_8c0e6832(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x148u;
  R(2)=R(4);
  R(1)=0x8c2f2e3cu;
  R(5)=0x0u;
  c->macl=R(2)*R(3);
  R(2)=0x8c0686b8u;
  R(6)=R(3);
  ST32(R(15),R(4));
  R(14)=c->macl;
  R(14)+=R(1);
  { c->pr=0x8c0e6850u; R(4)=R(14); f_8c0686b8(c); }
  R(2)=LD32(R(15));
  R(3)=0x4cu;
  R(1)=0x8c2f789cu;
  R(0)=0x0u;
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  R(3)+=R(1);
  ST32(R(14)+28,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e687c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c2f2e38u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+8);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0e68e4;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0e68e4;
  R(14)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(14);
  R(12)=0x8c0f44d8u;
  R(7)=0x8c0f44c8u;
  R(14)=c->macl;
  R(14)+=R(3);
  R(2)=LD32(R(14)+4);
  R(0)=R(2);
  c->t=(int32_t)R(0)==0;
  ST32(R(15),R(2));
  if(c->t) goto L8c0e68bc;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e68c2;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e68c8;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0e68ce;
  {  goto L8c0e68e4; }
L8c0e68bc:;
  R(7)=LD32(R(7));
  { R(13)=LD32(R(12)); goto L8c0e68d2; }
L8c0e68c2:;
  R(7)=LD32(R(7)+4);
  { R(13)=LD32(R(12)+4); goto L8c0e68d2; }
L8c0e68c8:;
  R(7)=LD32(R(7)+8);
  { R(13)=LD32(R(12)+8); goto L8c0e68d2; }
L8c0e68ce:;
  R(13)=LD32(R(12)+12);
  R(7)=LD32(R(7)+12);
L8c0e68d2:;
  R(2)=R(7);
  R(2)+=R(13);
  R(2)+=0x1u;
  R(2)<<=8;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=0x20u;
  c->t=(int32_t)R(2)>(int32_t)R(6);
  { uint32_t k=!c->t; ST32(R(15),R(2)); if(k) goto L8c0e68ea; }
L8c0e68e4:;
  R(0)=0xffffff00u;
  {  goto L8c0e6978; }
L8c0e68ea:;
  R(3)=0x4cu;
  R(2)=0x8c2f789cu;
  c->macl=R(4)*R(3);
  R(12)=0x1u;
  R(3)=R(7);
  R(0)=R(12);
  ST8(R(14)+2,R(0));
  ST16(R(14),R(4));
  R(3)+=0x1u;
  R(4)=c->macl;
  R(3)<<=8;
  R(1)=R(5);
  c->t=R(3)>>31;R(3)<<=1;
  R(4)+=R(2);
  ST32(R(14)+28,R(4));
  R(4)=0x0u;
  R(0)=R(4);
  ST8(R(14)+10,R(0));
  ST8(R(14)+11,R(0));
  R(3)+=R(5);
  ST8(R(14)+12,R(0));
  R(3)+=0x20u;
  R(0)=0x220u;
  R(1)+=0x20u;
  ST32(R(14)+44,R(5));
  R(0)+=R(5);
  ST32(R(14)+32,R(1));
  ST32(R(14)+36,R(0));
  R(0)=R(12);
  ST32(R(14)+40,R(3));
  ST16(R(14)+14,R(0));
  R(0)=R(7);
  ST16(R(14)+16,R(0));
  R(0)=R(13);
  ST16(R(14)+18,R(0));
  R(5)=R(4);
  R(13)=0x8c0686b8u;
  R(0)=0x20u;
  R(4)=R(14);
  ST16(R(14)+20,R(0));
  R(6)=0x10u;
  { c->pr=0x8c0e6940u; R(4)+=0x38u; f_8c0686b8(c); }
  R(6)=0x100u;
  R(4)=R(14);
  R(5)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c0e694au; R(4)+=0x48u; sh4_call(c,tg); }
  R(5)=0x47u;
  R(6)=0x20u;
  { uint32_t tg=R(13); c->pr=0x8c0e6952u; R(4)=LD32(R(14)+44); sh4_call(c,tg); }
  R(5)=0x53u;
  R(6)=0x20u;
  { uint32_t tg=R(13); c->pr=0x8c0e695au; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(5)=0x46u;
  R(6)=0x20u;
  { uint32_t tg=R(13); c->pr=0x8c0e6962u; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  R(5)=0x44u;
  R(6)=0x20u;
  { uint32_t tg=R(13); c->pr=0x8c0e696au; R(4)=LD32(R(14)+40); sh4_call(c,tg); }
  R(4)=LD32(R(14)+28);
  R(0)=R(12);
  R(3)=LD32(R(4)+28);
  ST32(R(4)+48,R(3));
  ST8(R(14)+8,R(0));
  ST8(R(14)+9,R(0));
  R(0)=0x0u;
L8c0e6978:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e6984(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0686b8u;
  R(4)=0x8c2f2e3cu;
  R(6)=0xa40u;
  { c->pr=0x8c0e6990u; R(5)=0x0u; f_8c0686b8(c); }
  R(2)=0x8c0f0e4cu;
  { c->pr=0x8c0e6996u;  f_8c0f0e4c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0e69c4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=0x1u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c0f1358u;
L8c0e69dc:;
  { uint32_t tg=R(10); c->pr=0x8c0e69e0u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c0e69e8; }
  R(12)|=R(13);
L8c0e69e8:;
  c->t=R(13)>>31;R(13)<<=1;
  c->t=(int32_t)R(14)>=(int32_t)R(11);
  if(!c->t) goto L8c0e69dc;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e69fe(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x148u;
  R(2)=0x8c2f2e3cu;
  c->macl=R(4)*R(3);
  R(1)=0x8c0f1398u;
  R(3)=c->macl;
  R(3)+=R(2);
  { c->pr=0x8c0e6a12u; ST32(R(15),R(3)); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e6a26;
  R(2)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e6a26;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c0e6a26:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0e6a30(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x148u;
  R(13)=R(4);
  R(2)=0x8c2f2e38u;
  c->macl=R(13)*R(14);
  R(0)=LD32(R(2));
  R(3)=0x8c2f2e3cu;
  R(0)=LD32(R(0)+8);
  R(14)=c->macl;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(14)+=R(3); if(k) goto L8c0e6a62; }
  R(4)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0e6c00(c); return; } }
L8c0e6a62:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e6ab6;
  R(0)=0x8c0f44ecu;
  R(11)=0x1u;
  ST32(R(14)+48,R(11));
  R(2)=LD32(R(14)+4);
  R(3)=R(2);
  R(2)<<=2;
  R(2)+=R(3);
  R(3)=R(13);
  R(2)<<=2;
  R(3)<<=2;
  R(2)<<=2;
  R(3)<<=2;
  R(1)=LD32(R(2)+R(0));
  R(3)<<=2;
  R(2)=0x8c2f0a24u;
  c->t=R(3)>>31;R(3)<<=1;
  ST32(R(14)+52,R(1));
  R(3)+=R(2);
  ST32(R(15),R(3));
  R(6)=LD32(R(14)+48);
  R(3)=0x8c0e636eu;
  R(6)+=0x1u;
  R(7)=LD32(R(14)+52);
  ST32(R(14)+48,R(6));
  R(6)+=0xffffffffu;
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c0e6aa2u; R(4)=R(13); f_8c0e636e(c); }
  R(2)=0x8c0e5cccu;
  R(12)=0x0u;
  R(5)=LD32(R(14)+28);
  { c->pr=0x8c0e6aacu; R(4)=R(13); f_8c0e5ccc(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e6abc;
  R(0)=R(12);
  ST8(R(14)+9,R(0));
  ST8(R(14)+8,R(0));
L8c0e6ab6:;
  R(0)=0xffffff01u;
  {  goto L8c0e6b1c; }
L8c0e6abc:;
  R(2)=0x8c0e9c74u;
  { c->pr=0x8c0e6ac2u; R(4)=R(14); f_8c0e9c74(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e6aca;
  { R(0)=0xffffff83u; goto L8c0e6b1c; }
L8c0e6aca:;
  R(4)=LD32(R(14)+28);
  R(0)=R(11);
  R(2)=LD32(R(4)+28);
  ST32(R(4)+48,R(2));
  R(4)=R(13);
  ST8(R(14)+9,R(0));
  ST8(R(14)+8,R(0));
  R(0)=R(12);
  ST8(R(14)+10,R(0));
  ST8(R(14)+11,R(0));
  ST8(R(14)+12,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0e9980u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0e9980(c); return; } }
L8c0e6b1c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e6b2a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x148u;
  R(13)=R(4);
  R(2)=0x4cu;
  R(1)=0x8c2f789cu;
  c->macl=R(13)*R(14);
  R(3)=0x8c2f2e3cu;
  R(0)=0x1u;
  R(14)=c->macl;
  c->macl=R(13)*R(2);
  R(14)+=R(3);
  R(3)=R(13);
  R(3)<<=2;
  R(2)=c->macl;
  R(3)<<=2;
  R(3)<<=2;
  R(2)+=R(1);
  ST32(R(14)+28,R(2));
  c->t=R(3)>>31;R(3)<<=1;
  ST32(R(14)+48,R(0));
  R(2)=LD32(R(14)+4);
  R(0)=R(2);
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0x8c0f4530u;
  R(2)<<=2;
  R(2)<<=2;
  R(2)=LD32(R(2)+R(0));
  ST32(R(14)+52,R(2));
  R(2)=0x8c2f0a24u;
  R(3)+=R(2);
  ST32(R(15),R(3));
  R(7)=LD32(R(14)+52);
  R(6)=LD32(R(14)+48);
  R(3)=0x8c0e636eu;
  R(6)+=0x1u;
  ST32(R(14)+48,R(6));
  R(6)+=0xffffffffu;
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c0e6b86u; R(4)=R(13); f_8c0e636e(c); }
  R(2)=0x8c0e5cccu;
  R(12)=0x0u;
  R(5)=LD32(R(14)+28);
  { c->pr=0x8c0e6b90u; R(4)=R(13); f_8c0e5ccc(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e6b9c;
  R(0)=R(12);
  ST8(R(14)+9,R(0));
  { ST8(R(14)+8,R(0)); goto L8c0e6bba; }
L8c0e6b9c:;
  R(3)=0x8c0e9c74u;
  { c->pr=0x8c0e6ba2u; R(4)=R(14); f_8c0e9c74(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e6bf2;
  R(4)=LD32(R(14)+28);
  R(5)=0x0u;
  R(6)=0x8c2f8f48u;
  R(2)=LD32(R(4)+28);
  R(3)=0x8c0f102au;
  ST32(R(4)+48,R(2));
  { c->pr=0x8c0e6bb6u; R(4)=R(13); f_8c0f102a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e6bc0;
L8c0e6bba:;
  R(0)=0xffffff01u;
  {  goto L8c0e6bf4; }
L8c0e6bc0:;
  R(0)=0x1u;
  ST8(R(14)+9,R(0));
  R(0)=R(12);
  ST8(R(14)+10,R(0));
  ST8(R(14)+11,R(0));
  ST8(R(14)+12,R(0));
  R(0)=LD32(R(14)+4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e6be2;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e6be6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e6bea;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0e6bee;
  {  goto L8c0e6bf2; }
L8c0e6be2:;
  { R(0)=0xfu; goto L8c0e6bf4; }
L8c0e6be6:;
  { R(0)=0x21u; goto L8c0e6bf4; }
L8c0e6bea:;
  { R(0)=0x41u; goto L8c0e6bf4; }
L8c0e6bee:;
  { R(0)=0x7au; goto L8c0e6bf4; }
L8c0e6bf2:;
  R(0)=0xffffff83u;
L8c0e6bf4:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e6c00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(13)*R(14);
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e6c48;
  R(0)=0xffffff01u;
  {  goto L8c0e6c90; }
L8c0e6c48:;
  R(3)=0x1u;
  R(0)=0x8c0f44ecu;
  ST32(R(14)+48,R(3));
  R(2)=LD32(R(14)+4);
  R(3)=R(2);
  R(2)<<=2;
  R(2)+=R(3);
  R(3)=R(13);
  R(2)<<=2;
  R(3)<<=2;
  R(2)<<=2;
  R(3)<<=2;
  R(1)=LD32(R(2)+R(0));
  R(2)=0x8c2f0a24u;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  ST32(R(14)+52,R(1));
  R(3)+=R(2);
  ST32(R(15),R(3));
  R(6)=LD32(R(14)+48);
  R(3)=0x8c0e636eu;
  R(6)+=0x1u;
  R(7)=LD32(R(14)+52);
  ST32(R(14)+48,R(6));
  R(6)+=0xffffffffu;
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c0e6c82u; R(4)=R(13); f_8c0e636e(c); }
  R(4)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0e9980u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0e9980(c); return; } }
L8c0e6c90:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e6c9a(SH4Ctx *c) {
  R(1)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(1);
  R(1)=c->macl;
  R(1)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(1)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e6cb0;
  R(0)=0xffffff01u;
  {  return; }
L8c0e6cb0:;
  R(4)=0x0u;
  R(0)=R(4);
  ST8(R(1)+9,R(0));
  ST8(R(1)+8,R(0));
  ST8(R(1)+10,R(0));
  ST8(R(1)+11,R(0));
  ST8(R(1)+12,R(0));
  ST32(R(1)+4,R(0));
  {  return; }
}
void f_8c0e6cc4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  R(3)=0x148u;
  R(13)=R(4);
  R(2)=0x8c2f2e3cu;
  c->macl=R(13)*R(3);
  ST32(R(15)+4,R(5));
  R(3)=c->macl;
  ST32(R(15)+8,R(3));
  R(3)+=R(2);
  R(1)=R(3);
  ST32(R(15),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(1)+2);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(6); if(k) goto L8c0e6d10; }
  R(2)=0x8c0f1358u;
  { c->pr=0x8c0e6ceeu; R(4)=R(13); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e6cfa;
  { c->pr=0x8c0e6cf6u; R(4)=R(13); f_8c0e6c9a(c); }
  {  goto L8c0e6d10; }
L8c0e6cfa:;
  R(3)=0x8c0f1398u;
  { c->pr=0x8c0e6d00u; R(4)=R(13); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e6d10;
  R(2)=LD32(R(15)+8);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e6d16;
L8c0e6d10:;
  R(0)=0xffffff01u;
  {  goto L8c0e6da6; }
L8c0e6d16:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e6d1cu; R(4)=R(13); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e6d26;
  R(0)=0xffffff03u;
  {  goto L8c0e6da6; }
L8c0e6d26:;
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c0e94e6u;
  R(6)+=0xcu;
  { c->pr=0x8c0e6d32u; R(4)=R(13); f_8c0e94e6(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e6d6c;
  R(0)=0xffffff05u;
  {  goto L8c0e6da6; }
L8c0e6d6c:;
  R(3)=LD32(R(15));
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x2cu;
  R(2)=LD32(R(3)+28);
  R(3)=LD32(R(15)+52);
  R(1)=LD32(R(2)+44);
  R(1)+=0x1u;
  c->macl=R(3)*R(1);
  R(3)=0xccu;
  R(1)=c->macl;
  ST32(R(14),R(1));
  R(0)=LD32(R(15)+52);
  ST16(R(14)+4,R(0));
  R(0)=LD32(R(15)+16);
  ST8(R(14)+6,R(0));
  R(0)=0x16u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(14)+7,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  ST16(R(14)+8,R(0));
  R(2)=LD32(R(15)+16);
  c->t=R(2)==R(3);
  R(3)=0x8c0e9c02u;
  R(0)=c->t;
  ST8(R(14)+6,R(0));
  { c->pr=0x8c0e6da4u; R(4)+=0xau; f_8c0e9c02(c); }
  R(0)=0x0u;
L8c0e6da6:;
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e6db0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(13)*R(14);
  ST32(R(15)+8,R(5));
  ST32(R(15)+12,R(6));
  ST32(R(15),R(7));
  R(14)=c->macl;
  ST32(R(15)+4,R(14));
  R(14)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e6de0;
  {  goto L8c0e6ff8; }
L8c0e6de0:;
  R(3)=LD32(R(15)+56);
  R(5)=0x8c0f44e8u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=0x1u; if(k) goto L8c0e6e00; }
  ST32(R(14)+48,R(4));
  R(3)=LD32(R(14)+4);
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)<<=2;
  R(5)+=R(3);
  R(3)=LD32(R(5)+12);
  { ST32(R(14)+52,R(3)); goto L8c0e6e1a; }
L8c0e6e00:;
  R(2)=0x8c067940u;
  ST32(R(14)+48,R(4));
  R(1)=LD32(R(14)+4);
  R(3)=R(1);
  R(1)<<=2;
  R(1)+=R(3);
  R(1)<<=2;
  R(1)<<=2;
  R(1)+=R(5);
  R(1)=LD32(R(1)+12);
  { c->pr=0x8c0e6e18u; R(0)=0xau; f_8c067940(c); }
  ST32(R(14)+52,R(0));
L8c0e6e1a:;
  R(3)=0x8c0f1398u;
  { c->pr=0x8c0e6e20u; R(4)=R(13); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e6e28;
  {  goto L8c0e6ff8; }
L8c0e6e28:;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e6e38;
  {  goto L8c0e6ff8; }
L8c0e6e38:;
  R(9)=R(13);
  R(3)=0x8c2f7d48u;
  R(9)<<=8;
  R(10)=0x8c0686b8u;
  R(6)=0x200u;
  c->t=R(9)>>31;R(9)<<=1;
  R(5)=0x0u;
  R(9)+=R(3);
  { c->pr=0x8c0e6e4cu; R(4)=LD32(R(14)+32); f_8c0686b8(c); }
  R(5)=LD32(R(14)+28);
  R(8)=0x8c0e5e78u;
  R(5)=LD32(R(5)+8);
  R(6)=LD32(R(14)+32);
  { c->pr=0x8c0e6e58u; R(4)=R(13); f_8c0e5e78(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e6e6c;
  R(2)=0xffffff40u;
  c->t=R(4)==R(2);
  if(c->t) goto L8c0e6e68;
  {  goto L8c0e6ff8; }
L8c0e6e68:;
  { R(0)=0xffffff81u; goto L8c0e70c6; }
L8c0e6e6c:;
  R(3)=0x8c0e5cccu;
  R(5)=LD32(R(14)+28);
  { c->pr=0x8c0e6e74u; R(4)=R(13); f_8c0e5ccc(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e6e7c;
  {  goto L8c0e6ff8; }
L8c0e6e7c:;
  R(3)=0x8c0e9c74u;
  { c->pr=0x8c0e6e82u; R(4)=R(14); f_8c0e9c74(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e6ebc;
  { R(0)=0xffffff83u; goto L8c0e70c6; }
L8c0e6ebc:;
  R(4)=LD32(R(14)+28);
  R(5)=0x0u;
  R(6)=0x200u;
  R(3)=LD32(R(4)+28);
  ST32(R(4)+48,R(3));
  { uint32_t tg=R(10); c->pr=0x8c0e6ecau; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(4)=LD32(R(14)+32);
  R(6)=0x20u;
  R(5)=R(6);
  { uint32_t tg=R(10); c->pr=0x8c0e6ed4u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(4)=0x0u;
  { R(6)=0x20u; goto L8c0e6ee8; }
L8c0e6edc:;
  R(0)=LD32(R(14)+32);
  R(2)=R(4);
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(2)+=0x10u;
  R(4)+=0x1u;
  ST8(R(2)+R(0),R(3));
L8c0e6ee8:;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c0e6edc;
  R(3)=0x8c0e9b7cu;
  R(4)=R(15);
  R(5)=LD32(R(15));
  { c->pr=0x8c0e6ef6u; R(4)+=0x10u; f_8c0e9b7c(c); }
  R(4)=LD32(R(14)+32);
  R(7)=R(15);
  R(12)=0x0u;
  R(4)+=0x30u;
  R(5)=R(12);
  R(7)+=0x10u;
  { R(6)=0x8u; goto L8c0e6f0e; }
L8c0e6f06:;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(3)=(uint32_t)v;}
  R(5)+=0x1u;
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e6f0e:;
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(!c->t) goto L8c0e6f06;
  R(3)=LD32(R(14)+28);
  R(5)=0x42u;
  R(11)=0x8c2f2e38u;
  ST32(R(15),R(3));
  R(2)=LD32(R(3)+12);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+20);
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(11));
  R(6)=LD32(R(15));
  R(2)=LD32(R(3)+16);
  R(6)=LD32(R(6)+4);
  { uint32_t tg=R(2); c->pr=0x8c0e6f30u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(2)=LD32(R(15)+12);
  R(0)=0x4eu;
  R(3)=LD32(R(14)+32);
  R(5)=0x40u;
  ST8(R(3)+R(0),R(2));
  R(0)=0x4fu;
  R(3)=LD32(R(14)+32);
  ST8(R(3)+R(0),R(12));
  R(6)=LD32(R(14)+28);
  R(3)=LD32(R(11));
  R(6)=LD32(R(6));
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6f4cu; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(3)=LD32(R(11));
  R(5)=0x4au;
  R(6)=LD32(R(15)+8);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6f58u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(3)=LD32(R(11));
  R(5)=0x46u;
  R(6)=LD32(R(15)+4);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6f64u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(6)=LD32(R(14)+28);
  R(5)=0x4cu;
  R(3)=LD32(R(11));
  R(6)=LD32(R(6)+24);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6f72u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(6)=LD32(R(14)+28);
  R(5)=0x48u;
  R(3)=LD32(R(11));
  R(6)=LD32(R(6)+16);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6f80u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(6)=LD32(R(14)+28);
  R(5)=0x50u;
  R(3)=LD32(R(11));
  R(6)=LD32(R(6)+28);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6f8eu; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(6)=LD32(R(14)+28);
  R(5)=0x52u;
  R(3)=LD32(R(11));
  R(6)=LD32(R(6)+32);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6f9cu; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(6)=LD32(R(14)+28);
  R(5)=0x54u;
  R(3)=LD32(R(11));
  R(6)=LD32(R(6)+52);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6faau; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(6)=LD32(R(14)+28);
  R(5)=0x56u;
  R(3)=LD32(R(11));
  R(6)=LD32(R(6)+56);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6fb8u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(6)=LD32(R(14)+28);
  R(5)=0x44u;
  R(3)=LD32(R(11));
  R(6)=LD32(R(6));
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e6fc6u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(6)=0x200u;
  R(5)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c0e6fceu; R(4)=R(9); sh4_call(c,tg); }
  { R(11)=0x0u; goto L8c0e7024; }
L8c0e6fd2:;
  R(2)=LD32(R(15)+56);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e6fe4;
  R(5)=R(11);
  R(6)=R(9);
  { uint32_t tg=R(8); c->pr=0x8c0e6fe0u; R(4)=R(13); sh4_call(c,tg); }
  { R(4)=R(0); goto L8c0e6fe6; }
L8c0e6fe4:;
  R(4)=R(12);
L8c0e6fe6:;
  R(1)=0xffffff01u;
  R(0)=R(4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e6ff8;
  R(1)=0xffffff40u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e6ffe;
  {  goto L8c0e7018; }
L8c0e6ff8:;
  R(0)=0xffffff01u;
  {  goto L8c0e70c6; }
L8c0e6ffe:;
  R(6)=0xffffu;
  {  goto L8c0e701a; }
L8c0e7018:;
  R(6)=0xfffcu;
L8c0e701a:;
  R(2)=0x8c0e991eu;
  R(5)=R(11);
  { c->pr=0x8c0e7022u; R(4)=R(13); f_8c0e991e(c); }
  R(11)+=0x1u;
L8c0e7024:;
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3));
  c->t=(int32_t)R(11)>=(int32_t)R(2);
  if(!c->t) goto L8c0e6fd2;
  R(4)=LD32(R(14)+28);
  R(2)=0x30u;
  R(5)=0x0u;
  R(3)=LD32(R(4)+24);
  R(2)+=R(4);
  R(2)=LD32(R(2));
  R(6)=R(3);
  R(6)<<=8;
  c->t=R(6)>>31;R(6)<<=1;
  ST32(R(15),R(3));
  { uint32_t tg=R(10); c->pr=0x8c0e7044u; R(4)=LD32(R(14)+40); sh4_call(c,tg); }
  R(3)=0x8c0e91a6u;
  { c->pr=0x8c0e704au; R(4)=R(13); f_8c0e91a6(c); }
  R(5)=LD32(R(14)+28);
  R(11)=0xfffau;
  R(3)=0x8c0e991eu;
  R(5)=LD32(R(5)+8);
  R(6)=R(11);
  { c->pr=0x8c0e7058u; R(4)=R(13); f_8c0e991e(c); }
  { R(9)=0x0u; goto L8c0e706c; }
L8c0e705c:;
  R(5)=LD32(R(14)+28);
  R(6)=R(11);
  R(3)=0x8c0e991eu;
  R(5)=LD32(R(5)+12);
  R(5)+=R(9);
  { c->pr=0x8c0e706au; R(4)=R(13); f_8c0e991e(c); }
  R(9)+=0x1u;
L8c0e706c:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+16);
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  if(!c->t) goto L8c0e705c;
  R(5)=LD32(R(14)+28);
  R(6)=R(11);
  R(3)=0x8c0e991eu;
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c0e7080u; R(4)=R(13); f_8c0e991e(c); }
  { R(9)=R(12); goto L8c0e7094; }
L8c0e7084:;
  R(5)=LD32(R(14)+28);
  R(6)=R(11);
  R(3)=0x8c0e991eu;
  R(5)=LD32(R(5)+12);
  R(5)+=R(9);
  { c->pr=0x8c0e7092u; R(4)=R(13); f_8c0e991e(c); }
  R(9)+=0x1u;
L8c0e7094:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+16);
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  if(!c->t) goto L8c0e7084;
  R(3)=0x8c0e9770u;
  { c->pr=0x8c0e70a2u; R(4)=R(13); f_8c0e9770(c); }
  R(5)=0x55u;
  R(6)=0x10u;
  { uint32_t tg=R(10); c->pr=0x8c0e70aau; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(2)=0x8c0e95dau;
  { c->pr=0x8c0e70b0u; R(4)=R(13); f_8c0e95da(c); }
  R(5)=0x0u;
  R(6)=0x10u;
  { uint32_t tg=R(10); c->pr=0x8c0e70b8u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  R(3)=0x8c0e9980u;
  R(0)=R(12);
  ST8(R(14)+11,R(0));
  ST8(R(14)+12,R(0));
  ST8(R(14)+10,R(0));
  { c->pr=0x8c0e70c6u; R(4)=R(13); f_8c0e9980(c); }
L8c0e70c6:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e70da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  R(0)=R(5);
  c->macl=R(14)*R(13);
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(13)=c->macl;
  R(13)+=R(3);
  R(4)=LD32(R(13)+28);
  R(5)=LD32(R(4)+8);
  R(2)=LD32(R(4)+16);
  R(5)-=R(2);
  R(2)=LD32(R(4)+24);
  R(7)=R(5);
  R(6)=R(5);
  R(5)=R(0);
  R(6)-=R(2);
  R(7)+=0xffffffffu;
  { c->pr=0x8c0e710cu; R(4)=R(14); f_8c0e7164(c); }
  c->t=(int32_t)R(0)>0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0e7130; }
  R(4)=LD32(R(13)+28);
  R(3)=LD32(R(4)+28);
  ST32(R(15),R(3));
  R(7)=LD32(R(15));
  R(3)=LD32(R(4)+32);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(6)=LD32(R(15));
  R(7)+=R(3);
  R(5)=R(0);
  R(7)+=0xffffffffu;
  { c->pr=0x8c0e712au; R(4)=R(14); f_8c0e7164(c); }
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0e7134; }
L8c0e7130:;
  { R(0)=R(4); goto L8c0e7136; }
L8c0e7134:;
  R(0)=0xffffffffu;
L8c0e7136:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e7164(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=0x148u;
  R(14)=R(7);
  R(11)=0x8c2f2e38u;
  R(13)=R(6);
  c->macl=R(4)*R(12);
  R(3)=0x8c2f2e3cu;
  c->t=(int32_t)R(14)>=(int32_t)R(13);
  ST16(R(15),R(5));
  R(12)=c->macl;
  { uint32_t k=!c->t; R(12)+=R(3); if(k) goto L8c0e71a6; }
L8c0e7186:;
  R(3)=LD32(R(11));
  R(5)=R(14);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(3)+12);
  { uint32_t tg=R(2); c->pr=0x8c0e7192u; R(4)=LD32(R(12)+36); sh4_call(c,tg); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0e71a0;
  { R(0)=R(14); goto L8c0e71a8; }
L8c0e71a0:;
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>=(int32_t)R(13);
  if(c->t) goto L8c0e7186;
L8c0e71a6:;
  R(0)=0xffffffffu;
L8c0e71a8:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e71b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=0x148u;
  R(12)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(12)*R(13);
  R(13)=c->macl;
  ST32(R(15),R(13));
  R(13)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c0e7200; }
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e71deu; R(4)=R(12); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e71ea;
  { c->pr=0x8c0e71e6u; R(4)=R(12); f_8c0e6c9a(c); }
  {  goto L8c0e7200; }
L8c0e71ea:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e71f0u; R(4)=R(12); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7200;
  R(2)=LD32(R(15));
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7206;
L8c0e7200:;
  R(0)=0xffffff01u;
  {  goto L8c0e72c2; }
L8c0e7206:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e720cu; R(4)=R(12); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7216;
  R(0)=0xffffff03u;
  {  goto L8c0e72c2; }
L8c0e7216:;
  R(4)=0x0u;
  { R(5)=0x20u; goto L8c0e722c; }
L8c0e721c:;
  R(3)=R(4);
  R(0)=LD32(R(13)+32);
  R(3)+=0x10u;
  R(2)=R(14);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(2)+=R(4);
  R(4)+=0x1u;
  ST8(R(2),R(1));
L8c0e722c:;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0e721c;
  R(11)=R(15);
  R(5)=LD32(R(13)+32);
  R(11)+=0x4u;
  R(6)=R(11);
  R(4)=R(11);
  R(5)+=0x30u;
  { R(6)+=0x8u; goto L8c0e7262; }
L8c0e725c:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e7262:;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c0e725c;
  R(3)=0x8c0e9c02u;
  R(4)=R(14);
  R(5)=R(11);
  { c->pr=0x8c0e7270u; R(4)+=0x30u; f_8c0e9c02(c); }
  R(2)=LD32(R(13)+28);
  R(0)=0x20u;
  R(5)=0x0u;
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST16(R(14)+R(0),R(3));
  R(0)=0x22u;
  R(2)=LD32(R(13)+28);
  R(3)=LD32(R(2)+48);
  ST16(R(14)+R(0),R(3));
  { c->pr=0x8c0e7288u; R(4)=R(12); f_8c0e72d0(c); }
  R(1)=0x26u;
  R(1)+=R(14);
  ST16(R(1),R(0));
  R(0)=0x26u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x24u;
  R(5)=0x1u;
  ST16(R(14)+R(0),R(3));
  R(0)=0x28u;
  R(2)=LD32(R(13)+28);
  R(3)=LD32(R(2)+56);
  ST16(R(14)+R(0),R(3));
  { c->pr=0x8c0e72a4u; R(4)=R(12); f_8c0e72d0(c); }
  R(1)=0x2au;
  R(1)+=R(14);
  ST16(R(1),R(0));
  R(0)=0x2cu;
  R(3)=LD32(R(13)+28);
  R(2)=LD32(R(3)+44);
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x4eu;
  R(3)=LD32(R(13)+32);
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(0)=0x2eu;
  R(2)=R(2)&0xFF;
  ST16(R(14)+R(0),R(2));
  R(0)=0x0u;
L8c0e72c2:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e72d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(14)*R(12);
  ST32(R(15),R(5));
  R(12)=c->macl;
  ST32(R(15)+4,R(12));
  R(12)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(12)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e731c;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e72fau; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7306;
  { c->pr=0x8c0e7302u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e731c; }
L8c0e7306:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e730cu; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e731c;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7322;
L8c0e731c:;
  R(0)=0xffffff01u;
  {  goto L8c0e73d6; }
L8c0e7322:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e7328u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7332;
  R(0)=0xffffff03u;
  {  goto L8c0e73d6; }
L8c0e7332:;
  R(0)=LD32(R(15));
  R(4)=0x0u;
  R(13)=0xfffcu;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(10)=R(4); if(k) goto L8c0e7380; }
  { R(11)=R(4); goto L8c0e7352; }
L8c0e7342:;
  R(3)=0x8c0e9950u;
  R(5)=R(11);
  { c->pr=0x8c0e734au; R(4)=R(14); f_8c0e9950(c); }
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(13);
  if(!c->t) goto L8c0e735a;
  R(11)+=0x1u;
L8c0e7352:;
  R(2)=LD32(R(12)+28);
  R(3)=LD32(R(2)+56);
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(!c->t) goto L8c0e7342;
L8c0e735a:;
  { R(10)=R(11); goto L8c0e73d4; }
L8c0e7380:;
  R(3)=0x8c0f404cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e73b6;
  { R(11)=R(4); goto L8c0e73aa; }
L8c0e738c:;
  R(3)=0x8c0e9950u;
  R(5)=R(11);
  { c->pr=0x8c0e7394u; R(4)=R(14); f_8c0e9950(c); }
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(13);
  if(!c->t) goto L8c0e73a8;
  R(3)=0x8c0e98bau;
  R(5)=R(11);
  { c->pr=0x8c0e73a2u; R(4)=R(14); f_8c0e98ba(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e73a8;
  R(10)+=0x1u;
L8c0e73a8:;
  R(11)+=0x1u;
L8c0e73aa:;
  R(3)=LD32(R(12)+28);
  R(2)=LD32(R(3)+48);
  c->t=(int32_t)R(11)>=(int32_t)R(2);
  if(!c->t) goto L8c0e738c;
  {  goto L8c0e73d4; }
L8c0e73b6:;
  { R(11)=R(4); goto L8c0e73cc; }
L8c0e73ba:;
  R(3)=0x8c0e9950u;
  R(5)=R(11);
  { c->pr=0x8c0e73c2u; R(4)=R(14); f_8c0e9950(c); }
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(13);
  { uint32_t k=!c->t; R(11)+=0x1u; if(k) goto L8c0e73cc; }
  R(10)+=0x1u;
L8c0e73cc:;
  R(3)=LD32(R(12)+28);
  R(2)=LD32(R(3)+48);
  c->t=(int32_t)R(11)>=(int32_t)R(2);
  if(!c->t) goto L8c0e73ba;
L8c0e73d4:;
  R(0)=R(10);
L8c0e73d6:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e73e6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(11)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(14)*R(11);
  R(11)=c->macl;
  ST32(R(15),R(11));
  R(11)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(11)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7430;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e740eu; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e741a;
  { c->pr=0x8c0e7416u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e7430; }
L8c0e741a:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e7420u; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7430;
  R(2)=LD32(R(15));
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7436;
L8c0e7430:;
  R(0)=0xffffff01u;
  {  goto L8c0e74a4; }
L8c0e7436:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e743cu; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7446;
  R(0)=0xffffff03u;
  {  goto L8c0e74a4; }
L8c0e7446:;
  R(10)=0xfffcu;
  R(4)=0x0u;
  R(12)=R(4);
  { R(13)=R(4); goto L8c0e748a; }
L8c0e7478:;
  R(2)=0x8c0e9950u;
  R(5)=R(13);
  { c->pr=0x8c0e7480u; R(4)=R(14); f_8c0e9950(c); }
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(10);
  { uint32_t k=!c->t; R(13)+=0x1u; if(k) goto L8c0e748a; }
  R(12)+=0x1u;
L8c0e748a:;
  R(4)=LD32(R(11)+28);
  R(2)=LD32(R(4)+44);
  R(3)=LD32(R(4)+16);
  R(2)+=0x1u;
  c->macl=R(3)*R(2);
  R(3)=0x0u;
  R(2)=c->macl;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=(int32_t)R(13)>=(int32_t)R(2);
  if(!c->t) goto L8c0e7478;
  R(0)=R(12);
L8c0e74a4:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e74b4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(12)=0x0u;
  R(3)=R(6);
  R(13)=R(4);
  R(0)=0x8c2f2e3eu;
  ST32(R(15),R(6));
  ST32(R(3),R(12));
  R(3)=0x148u;
  c->macl=R(13)*R(3);
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(11)=R(5); if(k) goto L8c0e7504; }
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e74e0u; R(4)=R(13); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e74ec;
  { c->pr=0x8c0e74e8u; R(4)=R(13); f_8c0e6c9a(c); }
  {  goto L8c0e7504; }
L8c0e74ec:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e74f2u; R(4)=R(13); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7504;
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(13)*R(3);
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e750a;
L8c0e7504:;
  R(0)=0xffffff01u;
  {  goto L8c0e75b8; }
L8c0e750a:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e7510u; R(4)=R(13); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e751a;
  R(0)=0xffffff03u;
  {  goto L8c0e75b8; }
L8c0e751a:;
  R(3)=0x8c0e9a6cu;
  R(5)=R(11);
  { c->pr=0x8c0e7522u; R(4)=R(13); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e7544;
  R(2)=0x8c0e9a90u;
  R(5)=R(11);
  { c->pr=0x8c0e752eu; R(4)=R(13); f_8c0e9a90(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7538;
  R(0)=0xffffff41u;
  {  goto L8c0e75b8; }
L8c0e7538:;
  R(2)=0x8c0e9a36u;
  { c->pr=0x8c0e753eu; R(4)=R(13); f_8c0e9a36(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0e7578;
L8c0e7544:;
  R(0)=0xffffff07u;
  {  goto L8c0e75b8; }
L8c0e7578:;
  R(2)=0x8c0e94e6u;
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0x4u;
  { c->pr=0x8c0e7584u; R(4)=R(13); f_8c0e94e6(c); }
  R(3)=0x8c2f7d40u;
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=c->t; ST32(R(3),R(0)); if(k) goto L8c0e7598; }
  R(1)=0x8c0e9a64u;
  { c->pr=0x8c0e7592u; R(4)=R(14); f_8c0e9a64(c); }
  R(0)=0xffffff05u;
  {  goto L8c0e75b8; }
L8c0e7598:;
  R(0)=0x40u;
  ST32(R(14)+4,R(12));
  R(3)=LD32(R(15)+44);
  ST32(R(14)+52,R(3));
  R(2)=LD32(R(15)+16);
  ST32(R(14)+56,R(2));
  R(3)=R(2);
  ST32(R(14)+R(0),R(2));
  ST32(R(14)+40,R(13));
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  ST16(R(14)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+14);
  ST8(R(14)+1,R(0));
  R(0)=R(12);
  R(3)=LD32(R(15));
  ST32(R(3),R(14));
L8c0e75b8:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
