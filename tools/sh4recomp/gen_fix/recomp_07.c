#include "recomp_decls.h"
void f_8c044d22(SH4Ctx *c) {
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(6);
  { R(5)=R(6); goto L8c044d92; }
L8c044d60:;
  R(0)=LD32(R(6)+16);
  R(6)=R(5);
  R(6)<<=2;
  R(3)=R(5);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(0);
  R(6)=LD32(R(6)+4);
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(7)=R(5); if(k) goto L8c044d90; }
  R(2)=LD32(R(6));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c044d90;
  R(2)=0x8c0c4254u;
  R(3)=R(5);
  R(3)<<=2;
  R(0)=LD32(R(2));
  R(3)=LD32(R(3)+R(0));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c044d90;
  R(13)+=0x1u;
L8c044d90:;
  R(5)+=0x1u;
L8c044d92:;
  R(6)=0x8c0c423cu;
  R(3)=LD32(R(6));
  c->t=R(5)>=R(3);
  if(!c->t) goto L8c044d60;
  R(0)=R(13);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c044d60(SH4Ctx *c) {
L8c044d60:;
  R(0)=LD32(R(6)+16);
  R(6)=R(5);
  R(6)<<=2;
  R(3)=R(5);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(0);
  R(6)=LD32(R(6)+4);
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(7)=R(5); if(k) goto L8c044d90; }
  R(2)=LD32(R(6));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c044d90;
  R(2)=0x8c0c4254u;
  R(3)=R(5);
  R(3)<<=2;
  R(0)=LD32(R(2));
  R(3)=LD32(R(3)+R(0));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c044d90;
  R(13)+=0x1u;
L8c044d90:;
  R(5)+=0x1u;
  R(6)=0x8c0c423cu;
  R(3)=LD32(R(6));
  c->t=R(5)>=R(3);
  if(!c->t) goto L8c044d60;
  R(0)=R(13);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c044dc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c0c423cu;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(12)+4);
  R(11)=0x8c03374cu;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c044dfe; }
L8c044ddc:;
  R(4)=LD32(R(13)+16);
  R(2)=LD32(R(4)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c044df8;
  R(3)=LD32(R(4)+12);
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c044df8;
  { uint32_t tg=R(11); c->pr=0x8c044df0u;  sh4_call(c,tg); }
  R(4)=R(0);
  c->t=R(4)>R(14);
  if(!c->t) goto L8c044df8;
  R(14)=R(4);
L8c044df8:;
  R(13)=LD32(R(13));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c044ddc;
L8c044dfe:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c044e56;
  R(2)=LD32(R(12));
  R(13)=0x0u;
  R(3)=R(13);
  R(8)=0x8c0686b8u;
  c->t=R(3)>=R(2);
  { uint32_t k=c->t; R(9)=0x2cu; if(k) goto L8c044e56; }
L8c044e10:;
  c->macl=R(13)*R(9);
  R(3)=LD32(R(12)+20);
  R(10)=c->macl;
  R(10)+=R(3);
  R(2)=LD32(R(10)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c044e4e;
  R(1)=0x8c0c758cu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c044e34;
  R(3)=0x8c064e90u;
  R(5)=0x8c0b9d04u;
  R(6)=0x447u;
  { c->pr=0x8c044e30u; R(4)=R(14); f_8c064e90(c); }
  {  goto L8c044e3e; }
L8c044e34:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0b9d04u;
  R(6)=0x447u;
  { c->pr=0x8c044e3eu; R(4)=R(14); f_8c0199c4(c); }
L8c044e3e:;
  R(5)=R(13);
  R(5)+=0x1u;
  R(11)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(8); c->pr=0x8c044e4au; R(4)=R(0); sh4_call(c,tg); }
  R(4)=LD32(R(10)+12);
  ST32(R(4),R(11));
L8c044e4e:;
  R(2)=LD32(R(12));
  R(13)+=0x1u;
  c->t=R(13)>=R(2);
  if(!c->t) goto L8c044e10;
L8c044e56:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c044ea0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c0c423cu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=LD32(R(4));
  R(14)=LD32(R(4)+24);
  R(10)<<=2;
  R(8)=0x8c052360u;
  R(10)+=R(14);
  R(13)=LD32(R(4)+16);
  c->t=R(14)>=R(10);
  { uint32_t k=c->t; R(9)=0x0u; if(k) goto L8c044f18; }
L8c044ec4:;
  R(11)=LD32(R(13)+4);
  R(12)=LD32(R(11)+4);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c044f08;
  R(0)=0x10u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c044ef2;
  R(0)=LD32(R(14));
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c044eea;
  { R(0)=0x1u; goto L8c044eec; }
L8c044eea:;
  R(0)=0x0u;
L8c044eec:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c044f04;
L8c044ef2:;
  R(2)=LD32(R(12)+32);
  R(3)=0x20000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c044f08;
  R(2)=0x8c055420u;
  { c->pr=0x8c044f00u; R(4)=R(13); f_8c055420(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c044f08;
L8c044f04:;
  { uint32_t tg=R(8); c->pr=0x8c044f08u; R(4)=R(11); sh4_call(c,tg); }
L8c044f08:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c044f10;
  ST32(R(13)+20,R(9));
L8c044f10:;
  R(14)+=0x4u;
  c->t=R(14)>=R(10);
  { uint32_t k=!c->t; R(13)+=0x48u; if(k) goto L8c044ec4; }
L8c044f18:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c044f2a(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c044f44;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c044f44;
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c044f44;
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(15),R(2)); if(k) goto L8c044f4a; }
L8c044f44:;
  R(0)=0x0u;
  { R(15)+=0x4u; return; }
L8c044f4a:;
  R(4)=LD32(R(15));
  R(3)=0xffff0000u;
  R(4)=LD32(R(4)+4);
  R(1)=0x8c0c4254u;
  R(4)=LD32(R(4)+8);
  R(2)=LD32(R(1));
  R(4)+=R(3);
  R(0)=R(4);
  R(0)<<=2;
  R(0)=LD32(R(2)+R(0));
  c->t=R(0)==R(5);
  R(0)=c->t;
  { R(15)+=0x4u; return; }
}
void f_8c044f4a(SH4Ctx *c) {
  R(4)=LD32(R(15));
  R(3)=0xffff0000u;
  R(4)=LD32(R(4)+4);
  R(1)=0x8c0c4254u;
  R(4)=LD32(R(4)+8);
  R(2)=LD32(R(1));
  R(4)+=R(3);
  R(0)=R(4);
  R(0)<<=2;
  R(0)=LD32(R(2)+R(0));
  c->t=R(0)==R(5);
  R(0)=c->t;
  { R(15)+=0x4u; return; }
}
void f_8c044f66(SH4Ctx *c) {
  R(7)=0x8c0c423cu;
  R(6)=LD32(R(7));
  R(4)=LD32(R(7)+24);
  R(6)<<=2;
  R(5)=LD32(R(7)+16);
  R(6)+=R(4);
  c->t=R(4)>=R(6);
  { uint32_t k=c->t; R(7)=0x0u; if(k) goto L8c044f88; }
L8c044f78:;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c044f80;
  ST32(R(5)+20,R(7));
L8c044f80:;
  R(4)+=0x4u;
  c->t=R(4)>=R(6);
  { uint32_t k=!c->t; R(5)+=0x48u; if(k) goto L8c044f78; }
L8c044f88:;
  {  return; }
}
void f_8c044fc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c123b08u;
  R(9)=0x0u;
  R(13)=0x8c0b9d34u;
  R(14)=0xffu;
  R(12)=0x8c0c3fa8u;
  R(8)=0x8c0125ccu;
  R(10)=0x8c012658u;
  ST8(R(15),R(4));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(11)=0xffffffffu; if(k) goto L8c045004; }
  R(0)=0x54u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x31u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(12));
  { uint32_t tg=R(10); c->pr=0x8c045002u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c045004:;
  R(4)=(int32_t)(int8_t)LD8(R(15));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c045012;
  R(2)=0xau;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c045034;
L8c045012:;
  R(5)=R(13);
  R(6)=0x58u;
  { uint32_t tg=R(8); c->pr=0x8c04501au; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x58u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x13u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(12));
  { uint32_t tg=R(10); c->pr=0x8c045032u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c045034:;
  R(2)=0x8c123b08u;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(2),R(3));
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
void f_8c045080(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(3)=0x30u;
  R(4)=(int32_t)(int8_t)LD8(R(4));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c0450d4;
  R(1)=0x39u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(!c->t) goto L8c0450d4;
  R(0)=R(4);
  c->t=(int32_t)R(0)==43;
  if(c->t) goto L8c0450d4;
  R(0)=R(4);
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c0450d4;
  R(14)=0x8c0b9d34u;
  R(6)=0x6fu;
  R(3)=0x8c0125ccu;
  R(13)=0xffu;
  R(5)=R(14);
  { c->pr=0x8c0450b2u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x6fu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0xffffffffu;
  R(3)=0x8c0c3fa8u;
  R(7)=0x18u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c0450d2u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0450d4:;
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c09cfe0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09cfe0(c); return; } }
}
void f_8c0450e2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(3)=0x30u;
  R(4)=(int32_t)(int8_t)LD8(R(4));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c045140;
  R(1)=0x39u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(!c->t) goto L8c045140;
  R(0)=R(4);
  c->t=(int32_t)R(0)==43;
  if(c->t) goto L8c045140;
  R(0)=R(4);
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c045140;
  R(0)=R(4);
  c->t=(int32_t)R(0)==46;
  if(c->t) goto L8c045140;
  R(12)=0x87u;
  R(13)=0x8c0b9d34u;
  R(3)=0x8c0125ccu;
  R(14)=R(12);
  R(5)=R(13);
  R(14)+=0x78u;
  R(6)=R(12);
  { c->pr=0x8c045120u; R(4)=0x0u; f_8c0125cc(c); }
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  R(1)=0x8c0c3fa8u;
  R(3)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x19u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0x8c012658u;
  { c->pr=0x8c04513eu; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c045140:;
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c09cfd4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09cfd4(c); return; } }
}
void f_8c045180(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c4d4u;
  R(0)=0x8c123b45u;
  { c->pr=0x8c04518au; R(1)=R(4); f_8c09c4d4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c045190(SH4Ctx *c) {
  R(0)=0x8c123b45u;
  {  return; }
}
void f_8c045196(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c123b08u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c4d4u;
  R(0)=R(14);
  { c->pr=0x8c0451acu; R(0)+=0x1u; f_8c09c4d4(c); }
  R(2)=0x8c09d1c0u;
  R(4)=R(14);
  R(5)=0x24u;
  { c->pr=0x8c0451b6u; R(4)+=0x1u; f_8c09d1c0(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c0451c4; }
  R(0)=0x2c8u;
  { ST32(R(14)+R(0),R(12)); goto L8c045228; }
L8c0451c4:;
  R(0)=0x2c8u;
  ST8(R(13),R(12));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)+=0x1u; if(k) goto L8c045200; }
  { c->pr=0x8c0451d4u; R(4)=R(13); f_8c045080(c); }
  { R(11)=R(0); goto L8c045202; }
L8c045200:;
  R(11)=R(12);
L8c045202:;
  R(3)=0x8c09d1c0u;
  R(5)=0x24u;
  { c->pr=0x8c04520au; R(4)=R(13); f_8c09d1c0(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c045214;
  { R(4)=R(12); goto L8c04521c; }
L8c045214:;
  R(4)=R(13);
  { c->pr=0x8c04521au; R(4)+=0x1u; f_8c045080(c); }
  R(4)=R(0);
L8c04521c:;
  R(11)=R(11)&0xFFFF;
  R(0)=0x2c8u;
  R(4)=R(4)&0xFFFF;
  R(11)<<=16;
  R(11)+=R(4);
  ST32(R(14)+R(0),R(11));
L8c045228:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c045234(SH4Ctx *c) {
  R(0)=0x8c123b09u;
  {  return; }
}
void f_8c04523a(SH4Ctx *c) {
  R(3)=0x8c123dd0u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c045240(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c09c4d4u;
  R(0)=0x8c123b27u;
  { c->pr=0x8c04524au; R(1)=R(4); f_8c09c4d4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c045280(SH4Ctx *c) {
  R(0)=0x8c123b27u;
  {  return; }
}
void f_8c045286(SH4Ctx *c) {
  R(3)=0x8c123b27u;
  R(2)=0x0u;
  { ST8(R(3),R(2)); return; }
}
void f_8c04528e(SH4Ctx *c) {
  R(3)=0x8c123b27u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04529a;
  { R(0)=0x0u; return; }
L8c04529a:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0452a0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c04dd3cu;
  { c->pr=0x8c0452aau; ST16(R(15),R(4)); f_8c04dd3c(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0452b6; }
  R(0)=(int32_t)(int16_t)LD16(R(15));
  c->t=(int32_t)R(4)>=(int32_t)R(0);
  if(c->t) goto L8c0452be;
L8c0452b6:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0452be:;
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0452c8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c019e40u;
  ST32(R(15),R(4));
  { c->pr=0x8c0452d6u; R(14)=0x1u; f_8c019e40(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0452e2;
  R(0)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0452e4;
L8c0452e2:;
  R(14)=0x0u;
L8c0452e4:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c045320(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(12)=R(5); if(k) goto L8c04533e; }
L8c045332:;
  R(5)=R(12);
  { c->pr=0x8c045338u; R(4)=R(13); f_8c045320(c); }
  R(13)=LD32(R(13)+20);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c045332;
L8c04533e:;
  R(4)=LD32(R(14));
  R(2)=0x6u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c045394;
  R(5)=R(12)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c04536e;
  R(6)=LD32(R(14)+44);
  R(0)=R(4);
  R(5)=0x880u;
  c->t=(int32_t)R(0)==2;
  R(7)=R(14);
  R(6)|=R(5);
  { uint32_t k=!c->t; ST32(R(7)+44,R(6)); if(k) goto L8c045394; }
  R(6)=LD32(R(14)+4);
  R(0)=0xf8u;
  R(6)=LD32(R(6));
  R(4)=LD32(R(6)+R(0));
  R(5)|=R(4);
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  { ST32(R(4)+R(0),R(5)); goto L8c045394; }
L8c04536e:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c045394;
  R(7)=LD32(R(14)+44);
  R(0)=R(4);
  R(5)=0xfffff77fu;
  c->t=(int32_t)R(0)==2;
  R(6)=R(14);
  R(7)&=R(5);
  { uint32_t k=!c->t; ST32(R(6)+44,R(7)); if(k) goto L8c045394; }
  R(4)=LD32(R(14)+4);
  R(0)=0xf8u;
  R(4)=LD32(R(4));
  R(6)=LD32(R(4)+R(0));
  R(4)=LD32(R(14)+4);
  R(5)&=R(6);
  R(4)=LD32(R(4));
  ST32(R(4)+R(0),R(5));
L8c045394:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04539e(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=LD32(R(15));
  R(4)=0x8c123b68u;
  R(6)=R(0);
  R(15)+=0x8u;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(7)=R(6)&0xFF; if(k) goto L8c045406; }
  R(0)=R(7);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c045400;
  R(3)=0xffffffffu;
  { ST32(R(4),R(3)); goto L8c0454fa; }
L8c045400:;
  R(1)=0x0u;
  { ST32(R(4),R(1)); goto L8c0454fa; }
L8c045406:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c045422;
  R(0)=R(7);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c045418;
  R(0)=LD32(R(4));
  { R(0)|=0x1u; goto L8c0454a8; }
L8c045418:;
  R(2)=LD32(R(4));
  R(3)=0xfffffffeu;
  R(2)&=R(3);
  { ST32(R(4),R(2)); goto L8c0454fa; }
L8c045422:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04543e;
  R(0)=R(7);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c045434;
  R(0)=LD32(R(4));
  R(0)|=0x2u;
  {  goto L8c0454a8; }
L8c045434:;
  R(2)=LD32(R(4));
  R(3)=0xfffffffdu;
  R(2)&=R(3);
  { ST32(R(4),R(2)); goto L8c0454fa; }
L8c04543e:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c045480;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c04544e;
  R(3)=0x8000u;
  {  goto L8c0454ea; }
L8c04544e:;
  R(1)=LD32(R(4));
  R(3)=0xffff7fffu;
  R(1)&=R(3);
  { ST32(R(4),R(1)); goto L8c0454fa; }
L8c045480:;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c04549a;
  R(0)=R(7);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c045490;
  R(3)=0x1000u;
  {  goto L8c0454ea; }
L8c045490:;
  R(1)=LD32(R(4));
  R(3)=0xffffefffu;
  R(1)&=R(3);
  { ST32(R(4),R(1)); goto L8c0454fa; }
L8c04549a:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0454e0;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0454ac;
  R(0)=LD32(R(4));
  R(0)|=0x4u;
L8c0454a8:;
  { ST32(R(4),R(0)); goto L8c0454fa; }
L8c0454ac:;
  R(2)=LD32(R(4));
  R(3)=0xfffffffbu;
  R(2)&=R(3);
  { ST32(R(4),R(2)); goto L8c0454fa; }
L8c0454e0:;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0454fa;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0454f2;
  R(3)=0x400000u;
L8c0454ea:;
  R(2)=LD32(R(4));
  R(2)|=R(3);
  { ST32(R(4),R(2)); goto L8c0454fa; }
L8c0454f2:;
  R(1)=LD32(R(4));
  R(3)=0xffbfffffu;
  R(1)&=R(3);
  ST32(R(4),R(1));
L8c0454fa:;
  {  return; }
}
void f_8c0454c0(SH4Ctx *c) {
  ST32(R(0)+0,R(0));
  R(15)=0xffffffffu;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0454fa;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0454f2;
  R(3)=0x400000u;
  R(2)=LD32(R(4));
  R(2)|=R(3);
  { ST32(R(4),R(2)); goto L8c0454fa; }
L8c0454f2:;
  R(1)=LD32(R(4));
  R(3)=0xffbfffffu;
  R(1)&=R(3);
  ST32(R(4),R(1));
L8c0454fa:;
  {  return; }
}
void f_8c0454fe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff88u;
  R(14)=0x8c123b08u;
  R(0)=0xd4u;
  ST32(R(15)+4,R(4));
  ST32(R(15)+8,R(6));
  ST32(R(15)+12,R(7));
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=R(5); if(k) goto L8c045520; }
  R(0)=0xd6u;
  { R(6)=R(15); goto L8c045524; }
L8c045520:;
  R(0)=0x148u;
  R(6)=R(15);
L8c045524:;
  R(3)=0x8c079f48u;
  { c->pr=0x8c04552au; R(5)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c079f48(c); }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c045534;
  {  goto L8c04565a; }
L8c045534:;
  R(0)=0xd6u;
  R(5)=R(15);
  R(3)=0x8c011602u;
  R(5)+=0x10u;
  { c->pr=0x8c045540u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c011602(c); }
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c045580;
  R(3)=LD32(R(15)+8);
  ST32(R(15)+56,R(3));
  R(2)=LD32(R(15)+12);
  { ST32(R(15)+60,R(2)); goto L8c0455f0; }
L8c045580:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0455a6;
  R(0)=0x84u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x88u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x8cu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x90u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  { ST32(R(15)+R(0),R(2)); goto L8c0455f0; }
L8c0455a6:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0455be;
  R(0)=0x94u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x98u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x64u;
  { ST32(R(15)+R(0),R(2)); goto L8c0455f0; }
L8c0455be:;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0455f0;
  R(0)=0x94u;
  R(3)=LD32(R(15)+20);
  R(2)=LD32(R(15)+R(0));
  R(4)=0x3e8u;
  c->macl=R(2)*R(3);
  R(3)=0x8c067940u;
  R(1)=c->macl;
  { c->pr=0x8c0455d4u; R(0)=R(4); f_8c067940(c); }
  R(1)=R(15);
  R(1)+=0x60u;
  ST32(R(1),R(0));
  R(0)=0x98u;
  R(3)=LD32(R(15)+16);
  R(0)=LD32(R(15)+R(0));
  c->macl=R(0)*R(3);
  R(3)=0x8c067940u;
  R(1)=c->macl;
  { c->pr=0x8c0455eau; R(0)=R(4); f_8c067940(c); }
  R(1)=R(15);
  R(1)+=0x64u;
  ST32(R(1),R(0));
L8c0455f0:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c045640;
  R(0)=0xd6u;
  R(5)=R(15);
  R(3)=0x8c011662u;
  R(5)+=0x10u;
  { c->pr=0x8c045602u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c011662(c); }
  R(0)=0xd6u;
  R(6)=LD32(R(15));
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { R(0)+=0xfffffffeu; goto L8c045654; }
L8c045640:;
  R(0)=0x148u;
  R(5)=R(15);
  R(3)=0x8c011662u;
  R(5)+=0x10u;
  { c->pr=0x8c04564cu; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c011662(c); }
  R(0)=0x148u;
  R(6)=LD32(R(15));
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xffffff8cu;
L8c045654:;
  R(3)=0x8c036e62u;
  { c->pr=0x8c04565au; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c036e62(c); }
L8c04565a:;
  R(15)+=0x78u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c045664(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0xd4u;
  R(14)=0x8c123b08u;
  R(13)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; fp_mov(c,15,4); if(k) goto L8c0456a8; }
  R(0)=0xd6u;
  R(6)=R(15);
  R(3)=0x8c079f48u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c045688u; R(4)=R(13); f_8c079f48(c); }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0456d0;
  R(3)=0x8c079ec4u;
  fp_mov(c,4,15);
  { c->pr=0x8c045696u; R(4)=LD32(R(15)); f_8c079ec4(c); }
  R(0)=0xd6u;
  R(3)=0x8c036e62u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffffeu;
  R(6)=LD32(R(15));
  { c->pr=0x8c0456a4u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c036e62(c); }
  {  goto L8c0456d0; }
L8c0456a8:;
  R(0)=0x148u;
  R(6)=R(15);
  R(3)=0x8c079f48u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c0456b4u; R(4)=R(13); f_8c079f48(c); }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0456d0;
  R(3)=0x8c079ec4u;
  fp_mov(c,4,15);
  { c->pr=0x8c0456c2u; R(4)=LD32(R(15)); f_8c079ec4(c); }
  R(0)=0x148u;
  R(3)=0x8c036e62u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xffffff8cu;
  R(6)=LD32(R(15));
  { c->pr=0x8c0456d0u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c036e62(c); }
L8c0456d0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c045700(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0xd6u;
  R(6)=R(15);
  R(14)=0x8c123b08u;
  R(3)=0x8c079f48u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffffeu;
  { c->pr=0x8c045716u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c079f48(c); }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04572a;
  R(0)=0xd6u;
  R(3)=0x8c036e62u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffffeu;
  R(6)=LD32(R(15));
  { c->pr=0x8c04572au; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c036e62(c); }
L8c04572a:;
  R(0)=0x148u;
  R(6)=R(15);
  R(3)=0x8c079f48u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xffffff8cu;
  { c->pr=0x8c045738u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c079f48(c); }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04574c;
  R(0)=0x148u;
  R(3)=0x8c036e62u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xffffff8cu;
  R(6)=LD32(R(15));
  { c->pr=0x8c04574cu; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c036e62(c); }
L8c04574c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c045754(SH4Ctx *c) {
  R(2)=0x8c123cc4u;
  R(3)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c123bdcu;
  ST32(R(2),R(3));
  { c->pr=0x8c045762u; R(4)=(int32_t)(int16_t)LD16(R(1)); f_8c0457a0(c); }
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c045a20(c); return; } }
}
void f_8c0457a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c123b08u;
  R(12)=0x0u;
  R(0)=0x174u;
  R(10)=0xffffffffu;
  ST16(R(15),R(4));
  R(4)=0x64u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x14u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0x4u;
  R(11)=0xffu;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  R(6)=R(11);
  R(5)=0x14cu;
  ST32(R(14)+R(0),R(12));
  R(6)+=0x49u;
  R(13)=0x8c0b9d34u;
  R(0)+=0x4u;
  R(3)=0x8c0114c0u;
  R(5)+=R(14);
  R(8)=0x8c0c3fa8u;
  R(6)+=R(14);
  R(9)=0x8c012658u;
  ST32(R(14)+R(0),R(12));
  { c->pr=0x8c0457f4u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0114c0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04581c;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x1c5u;
  { c->pr=0x8c045802u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x1c5u;
  R(6)=0x0u;
  R(7)=0x28u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c04581au; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04581c:;
  R(5)=0x1b4u;
  R(0)=0x148u;
  R(3)=0x8c011920u;
  R(5)+=R(14);
  { c->pr=0x8c045828u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c011920(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c045850;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x1c7u;
  { c->pr=0x8c045836u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x1c7u;
  R(6)=0x0u;
  R(7)=0x28u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c04584eu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c045850:;
  R(5)=0x14cu;
  R(0)=0x148u;
  R(3)=0x8c011602u;
  R(5)+=R(14);
  { c->pr=0x8c04585cu; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c011602(c); }
  R(0)=0x1bcu;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c045868;
  { c->pr=0x8c045868u;  f_8c0458e0(c); }
L8c045868:;
  R(0)=0x1bcu;
  R(3)=0x8c036e62u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0xffffff8cu;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c045876u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c036e62(c); }
  R(0)=0x1bcu;
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(6)=LD32(R(14)+R(0));
  R(0)+=0xffffff8cu;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c079f00u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c079f00(c); return; } }
}
void f_8c0458e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff24u;
  R(15)+=R(0);
  R(4)=0x1bcu;
  R(5)=0x67u;
  R(3)=0x8c036bc0u;
  R(14)=0x8c123b08u;
  { c->pr=0x8c0458f4u; R(4)+=R(14); f_8c036bc0(c); }
  R(0)=0x8c0459d0u;
  R(3)=0x8c079ea0u;
  fp_ld(c,5,R(0));
  R(0)=0x8c0459d4u;
  fp_ld(c,4,R(0));
  R(0)=0x1bcu;
  { c->pr=0x8c045904u; R(4)=LD32(R(14)+R(0)); f_8c079ea0(c); }
  R(0)=0x8c0459dcu;
  R(3)=0x8c079e20u;
  fp_ld(c,5,R(0));
  R(0)=0x8c0459e0u;
  fp_ld(c,4,R(0));
  R(0)=0x1bcu;
  { c->pr=0x8c045914u; R(4)=LD32(R(14)+R(0)); f_8c079e20(c); }
  R(0)=0x1bcu;
  R(5)=R(15);
  R(3)=0x8c079e4eu;
  R(5)+=0x74u;
  { c->pr=0x8c045920u; R(4)=LD32(R(14)+R(0)); f_8c079e4e(c); }
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  R(3)=0x8c014ea0u;
  R(4)=R(15);
  fp_st(c,4,R(15));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8c0459ecu;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c045938u; R(4)+=0x74u; f_8c014ea0(c); }
  R(2)=0x8c01638au;
  R(4)=R(15);
  R(5)=R(15);
  { c->pr=0x8c045942u; R(4)+=0x74u; f_8c01638a(c); }
  R(0)=0x8c0459f8u;
  R(3)=0x8c015b80u;
  fp_ld(c,4,R(0));
  R(4)=R(15);
  { c->pr=0x8c04594eu; R(4)+=0x74u; f_8c015b80(c); }
  R(2)=0x8c014ea0u;
  R(4)=R(15);
  { c->pr=0x8c045956u; R(4)+=0xcu; f_8c014ea0(c); }
  R(0)=0x8c045a00u;
  R(3)=0x8c015c3eu;
  fp_ld(c,4,R(0));
  R(4)=R(15);
  { c->pr=0x8c045962u; R(4)+=0xcu; f_8c015c3e(c); }
  R(5)=R(15);
  R(2)=0x8c0156cau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x74u;
  R(5)+=0xcu;
  { c->pr=0x8c045972u; R(4)+=0x74u; f_8c0156ca(c); }
  R(3)=0x8c015570u;
  R(4)=R(15);
  { c->pr=0x8c04597au; R(4)+=0x74u; f_8c015570(c); }
  R(0)=0x1bcu;
  R(5)=R(15);
  R(3)=0x8c079e62u;
  R(5)+=0x74u;
  { c->pr=0x8c045986u; R(4)=LD32(R(14)+R(0)); f_8c079e62(c); }
  R(1)=0xdcu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c045990(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x140u;
  R(14)=0x8c123b08u;
  R(3)=0x8c079f00u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0xffffff96u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffffeu;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c079f00(c); return; } }
}
void f_8c045a20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x64u;
  R(0)=0x100u;
  R(14)=0x8c123b08u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(12)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x14u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x4u;
  R(10)=0x8c0125ccu;
  R(6)=R(12);
  R(11)=0x8c0b9d34u;
  R(9)=0x8c0c3fa8u;
  ST32(R(14)+R(0),R(13));
  R(5)=0xd8u;
  R(6)+=0xffffffd7u;
  R(3)=0x8c0114c0u;
  R(0)+=0xffffffa8u;
  R(6)+=R(14);
  R(5)+=R(14);
  { c->pr=0x8c045a70u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c0114c0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c045a9a;
  R(8)=0x211u;
  R(5)=R(11);
  R(6)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c045a7eu; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x28u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c045a98u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c045a9a:;
  R(3)=0x8c011920u;
  R(0)=0xd6u;
  R(5)=0x8c2cff14u;
  { c->pr=0x8c045aa4u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c011920(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c045ace;
  R(8)=0x214u;
  R(5)=R(11);
  R(6)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c045ab2u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x28u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c045accu; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c045ace:;
  R(5)=0xd8u;
  R(0)=0xd6u;
  R(3)=0x8c011602u;
  R(5)+=R(14);
  { c->pr=0x8c045adau; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c011602(c); }
  R(2)=0x8c036ceeu;
  R(5)=0x67u;
  R(4)=0x140u;
  { c->pr=0x8c045ae4u; R(4)+=R(14); f_8c036cee(c); }
  R(0)=0x8c045b58u;
  R(3)=0x8c079ea0u;
  fp_ld(c,5,R(0));
  R(0)=0x8c045b5cu;
  fp_ld(c,4,R(0));
  R(0)=0x140u;
  { c->pr=0x8c045af4u; R(4)=LD32(R(14)+R(0)); f_8c079ea0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x140u;
  R(3)=0x8c079f00u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  R(6)=LD32(R(14)+R(0));
  R(0)+=0xffffff96u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffffeu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { uint32_t tg=R(3); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
}
void f_8c045b80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff94u;
  R(2)=0x8c0c7630u;
  R(10)=R(4);
  ST8(R(15),R(5));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c045bac; }
  R(3)=0x8c06dc0au;
  { c->pr=0x8c045ba8u;  f_8c06dc0a(c); }
  R(2)=0x8c0c7630u;
  ST32(R(2),R(12));
L8c045bac:;
  R(3)=0x8c2d20d0u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c045bbc; }
  R(1)=0x8c0db69cu;
  { c->pr=0x8c045bbcu; R(4)=R(14); f_8c0db69c(c); }
L8c045bbc:;
  R(3)=0x8c09c4d4u;
  R(0)=R(15);
  R(1)=R(10);
  { c->pr=0x8c045bc6u; R(0)+=0x1cu; f_8c09c4d4(c); }
  R(2)=0x8c09d1c0u;
  R(4)=R(15);
  R(5)=0x24u;
  { c->pr=0x8c045bd0u; R(4)+=0x1cu; f_8c09d1c0(c); }
  R(13)=0x8c123b08u;
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c045be2;
  R(3)=0x8c0c603au;
  R(2)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(3),R(2));
  {  goto L8c045bfe; }
L8c045be2:;
  R(4)=R(13);
  R(4)+=0x1u;
  R(5)=R(4);
  R(2)=0x8c0337f4u;
  ST8(R(11),R(12));
  R(11)+=0x1u;
  R(4)=R(15);
  { c->pr=0x8c045bf4u; R(4)+=0x1cu; f_8c0337f4(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c045c60;
  R(3)=0x8c0c603au;
  R(2)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(3),R(2));
L8c045bfe:;
  R(2)=0x8c09c4d4u;
  R(0)=R(13);
  R(1)=R(10);
  { c->pr=0x8c045c08u; R(0)+=0x1fu; f_8c09c4d4(c); }
  { c->pr=0x8c045c0cu; R(4)=0x6u; f_8c044fc0(c); }
  {  goto L8c045eb6; }
L8c045c60:;
  { c->pr=0x8c045c64u; R(4)=R(11); f_8c045080(c); }
  R(9)=R(0);
  R(0)=0x2c8u;
  R(2)=0xffff0000u;
  R(4)=LD32(R(13)+R(0));
  R(4)&=R(2);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c045c76;
  { R(4)>>=16; goto L8c045c7c; }
L8c045c76:;
  R(4)=~R(4);
  R(4)>>=16;
  R(4)=~R(4);
L8c045c7c:;
  c->t=R(9)==R(4);
  if(!c->t) goto L8c045c84;
  {  goto L8c045eb6; }
L8c045c84:;
  R(0)=0x1e8u;
  R(4)=R(11);
  R(3)=0x8c09d1c0u;
  R(5)=0x24u;
  R(14)=LD32(R(13)+R(0));
  { c->pr=0x8c045c92u; R(4)+=0x1u; f_8c09d1c0(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c045cc0;
  { R(5)=R(12); goto L8c045cc8; }
L8c045cc0:;
  R(4)=R(11);
  { c->pr=0x8c045cc6u; R(4)+=0x1u; f_8c045080(c); }
  R(5)=R(0);
L8c045cc8:;
  R(3)=0x8c084318u;
  { c->pr=0x8c045cceu; R(4)=R(9); f_8c084318(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c045cd8;
  {  goto L8c045eb6; }
L8c045cd8:;
  R(8)=LD32(R(14)+4);
  R(2)=R(4);
  R(9)=LD32(R(14)+36);
  R(8)=LD32(R(8)+32);
  R(3)=0x8c09c3dcu;
  R(1)=R(9);
  R(8)=LD32(R(8));
  { c->pr=0x8c045ceau; R(0)=0x68u; f_8c09c3dc(c); }
  R(2)=0x8c2d03b0u;
  R(3)=LD32(R(14)+28);
  R(11)=LD32(R(2));
  c->t=R(3)==R(11);
  if(!c->t) goto L8c045cf8;
  {  goto L8c045dec; }
L8c045cf8:;
  R(0)=LD32(R(14)+4);
  R(3)=LD32(R(0)+4);
  R(0)=0x24u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c045d66;
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c045d10;
  R(1)=LD32(R(14)+24);
  R(3)=LD32(R(14)+20);
  ST32(R(3)+24,R(1));
L8c045d10:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c045d1c;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+24);
  ST32(R(3)+20,R(2));
L8c045d1c:;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c045d46;
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(14);
  if(!c->t) goto L8c045d38;
  R(3)=LD32(R(14)+20);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+8,R(3));
L8c045d38:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c045d46;
  R(3)=LD32(R(14)+24);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+12,R(3));
L8c045d46:;
  ST32(R(14)+20,R(12));
  ST32(R(14)+24,R(12));
  ST32(R(14)+28,R(12));
  ST32(R(14)+24,R(12));
  R(2)=LD32(R(11)+8);
  ST32(R(14)+20,R(2));
  ST32(R(14)+28,R(11));
  R(3)=LD32(R(11)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c045d5e;
  { ST32(R(11)+12,R(14)); goto L8c045d62; }
L8c045d5e:;
  R(2)=LD32(R(11)+8);
  ST32(R(2)+24,R(14));
L8c045d62:;
  { ST32(R(11)+8,R(14)); goto L8c045de6; }
L8c045d66:;
  R(1)=LD32(R(14)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c045d72;
  R(3)=LD32(R(14)+24);
  R(1)=LD32(R(14)+20);
  ST32(R(1)+24,R(3));
L8c045d72:;
  R(2)=LD32(R(14)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c045d7e;
  R(3)=LD32(R(14)+20);
  R(2)=LD32(R(14)+24);
  ST32(R(2)+20,R(3));
L8c045d7e:;
  R(2)=LD32(R(14)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c045da8;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+16);
  R(3)+=0xffffffffu;
  ST32(R(2)+16,R(3));
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+8);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c045d9a;
  R(3)=LD32(R(14)+20);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+8,R(3));
L8c045d9a:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c045da8;
  R(3)=LD32(R(14)+24);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+12,R(3));
L8c045da8:;
  ST32(R(14)+20,R(12));
  ST32(R(14)+24,R(12));
  ST32(R(14)+28,R(12));
  ST32(R(14)+20,R(12));
  R(2)=LD32(R(11)+12);
  ST32(R(14)+24,R(2));
  ST32(R(14)+28,R(11));
  R(3)=LD32(R(11)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c045de0;
  { ST32(R(11)+8,R(14)); goto L8c045de4; }
L8c045de0:;
  R(2)=LD32(R(11)+12);
  ST32(R(2)+20,R(14));
L8c045de4:;
  ST32(R(11)+12,R(14));
L8c045de6:;
  R(3)=LD32(R(11)+16);
  R(3)+=0x1u;
  ST32(R(11)+16,R(3));
L8c045dec:;
  R(2)=LD32(R(14)+4);
  R(5)=0x32u;
  R(3)=LD32(R(2));
  R(4)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c05ecc0u;
  { c->pr=0x8c045dfcu; R(4)+=0x18u; f_8c05ecc0(c); }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(4)=R(0);
  { c->pr=0x8c045e06u; R(5)=R(9); f_8c0685b4(c); }
  R(2)=LD32(R(14)+4);
  R(0)=0x112u;
  R(3)=LD32(R(2));
  R(3)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(0)=0x38u;
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  R(3)=0x8c064b7eu;
  fp_float(c,3);
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c045e1eu; R(4)=R(14); f_8c064b7e(c); }
  R(2)=0x8c090180u;
  { c->pr=0x8c045e24u; R(4)=R(14); f_8c090180(c); }
  R(0)=0x1f0u;
  R(3)=0x8c046a20u;
  R(4)=LD32(R(13)+R(0));
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c045e30u; R(4)=LD32(R(4)+16); f_8c046a20(c); }
  R(0)=0x1f0u;
  R(3)=0x8c047120u;
  R(4)=LD32(R(13)+R(0));
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c045e3cu; R(4)=LD32(R(4)+16); f_8c047120(c); }
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  c->fr[15]=0x00000000u;
  R(0)=0x10u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x14u;
  R(6)=R(15);
  R(3)=0x8c014eaau;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x18u;
  R(4)=R(15);
  R(5)=R(9);
  fp_st(c,4,R(0)+R(15));
  R(6)+=0x10u;
  { c->pr=0x8c045e5cu; R(4)+=0x10u; f_8c014eaa(c); }
  R(0)=0x1f0u;
  R(5)=R(15);
  R(3)=0x8c075c60u;
  R(5)+=0x10u;
  { c->pr=0x8c045e68u; R(4)=LD32(R(13)+R(0)); f_8c075c60(c); }
  R(0)=0x4u;
  c->fr[3]=0x3F800000u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(5)=R(9);
  R(0)=0x1f0u;
  R(6)=R(15);
  R(3)=0x8c075ca0u;
  R(6)+=0x4u;
  R(5)+=0x58u;
  { c->pr=0x8c045e86u; R(4)=LD32(R(13)+R(0)); f_8c075ca0(c); }
  R(3)=0x8c076c00u;
  R(0)=0x1f0u;
  { c->pr=0x8c045e8eu; R(4)=LD32(R(13)+R(0)); f_8c076c00(c); }
  R(13)=LD32(R(14)+4);
  R(13)=LD32(R(13)+32);
  R(13)=LD32(R(13));
  c->t=R(13)==R(8);
  if(c->t) goto L8c045eb2;
  R(2)=0x8c05265au;
  R(5)=R(13);
  R(6)=R(8);
  { c->pr=0x8c045ea2u; R(4)=R(14); f_8c05265a(c); }
  R(2)=0x8c2d152cu;
  R(3)=LD32(R(2));
  c->t=R(14)==R(3);
  if(!c->t) goto L8c045eb2;
  R(3)=0x8c055cc0u;
  R(5)=R(13);
  { c->pr=0x8c045eb2u; R(4)=R(8); f_8c055cc0(c); }
L8c045eb2:;
  { c->pr=0x8c045eb6u; R(4)=R(10); f_8c045196(c); }
L8c045eb6:;
  R(15)+=0x6cu;
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
void f_8c045ecc(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c045f20(SH4Ctx *c) {
  R(3)=0x8c05ea58u;
  {  { f_8c05ea58(c); return; } }
}
void f_8c045f26(SH4Ctx *c) {
  R(3)=0x8c05ea80u;
  {  { f_8c05ea80(c); return; } }
}
void f_8c045f2c(SH4Ctx *c) {
  R(3)=0x8c123dd4u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=(int32_t)(int8_t)LD8(R(3));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c045f52;
  R(2)=0x8c018d00u;
  { c->pr=0x8c045f3eu;  f_8c018d00(c); }
  R(2)=0x8c123dd4u;
  R(1)=0x1u;
  R(0)=0x8c2dc87cu;
  ST8(R(2),R(1));
  R(1)=0x8c0c585cu;
  R(3)=LD32(R(0));
  R(2)=0x8c047868u;
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c047868(c); return; } }
L8c045f52:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c045f58(SH4Ctx *c) {
  R(3)=0x8c123dd4u;
  R(2)=0x0u;
  R(0)=0x8c0c585cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST8(R(3),R(2));
  R(3)=0x8c0478c4u;
  R(2)=0x8c2dc87cu;
  R(1)=LD32(R(0));
  { c->pr=0x8c045f6cu; ST32(R(2),R(1)); f_8c0478c4(c); }
  R(3)=0x8c018d2cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c018d2c(c); return; } }
}
void f_8c045f72(SH4Ctx *c) {
  R(3)=0x8c123dd4u;
  { R(0)=(int32_t)(int8_t)LD8(R(3)); return; }
}
void f_8c045fc0(SH4Ctx *c) {
  { R(0)=0xcu; return; }
}
void f_8c045fc4(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c045fe2;
  { c->pr=0x8c045fd4u;  f_8c045fc0(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0b9d60u;
  { c->pr=0x8c045fdeu; R(6)=0x3du; f_8c064e90(c); }
  {  goto L8c045ff0; }
L8c045fe2:;
  { c->pr=0x8c045fe6u;  f_8c045fc0(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0b9d60u;
  { c->pr=0x8c045ff0u; R(6)=0x3du; f_8c0199c4(c); }
L8c045ff0:;
  R(14)=R(0);
  { c->pr=0x8c045ff6u; R(4)=R(0); f_8c046170(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c046020(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0b9d60u;
  R(3)=R(4);
  R(11)=0x8c0125ccu;
  c->t=(R(3)&R(3))==0;
  R(14)=0xffu;
  R(8)=0xffffffffu;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  ST32(R(15),R(4));
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c04606a; }
  R(5)=R(13);
  R(6)=0x46u;
  { uint32_t tg=R(11); c->pr=0x8c046050u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x46u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c046068u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04606a:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c046094;
  R(5)=R(13);
  R(6)=0x49u;
  { uint32_t tg=R(11); c->pr=0x8c04607au; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x49u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xdu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c046092u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046094:;
  R(2)=LD32(R(15));
  R(1)=0xcu;
  R(1)+=R(2);
  { c->pr=0x8c04609eu; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c045fc4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
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
void f_8c0460e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(R(3)&R(3))==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(8)=0xffffffffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c0125ccu;
  R(13)=0xffu;
  R(14)=0x8c0b9d60u;
  R(10)=0x8c012658u;
  R(9)=0x8c0c3fa8u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c046128; }
  R(5)=R(14);
  R(6)=0x5du;
  { uint32_t tg=R(12); c->pr=0x8c04610eu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x5du;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c046126u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046128:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c046152;
  R(5)=R(14);
  R(6)=0x60u;
  { uint32_t tg=R(12); c->pr=0x8c046138u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x60u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c046150u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046152:;
  R(4)=LD32(R(15));
  R(6)=0x62u;
  R(5)=R(14);
  R(4)+=0xcu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c064eb8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064eb8(c); return; } }
}
void f_8c046170(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c032dfau;
  { c->pr=0x8c04617cu; R(14)=R(4); f_8c032dfa(c); }
  R(4)=R(14);
  R(5)=0xcdcdcdcdu;
  ST32(R(15),R(0));
  R(3)=R(0);
  ST32(R(4),R(0));
  R(0)=0x0u;
  ST32(R(4)+4,R(5));
  ST8(R(4)+8,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0461c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(6)=0xcdcdcdcdu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+12);
  ST32(R(4)+4,R(6));
  R(4)=0x0u;
  R(6)=LD32(R(14)+12);
  R(0)=R(4);
  ST8(R(6)+8,R(0));
  R(0)=R(5);
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c046242;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0461f2;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0461f2;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0461f2;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0461fe;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0461fe;
  {  goto L8c046242; }
L8c0461f2:;
  R(4)=LD32(R(14)+12);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c03342au;
  R(4)=LD32(R(4));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c03342a(c); return; } }
L8c0461fe:;
  R(6)=LD32(R(14)+4);
  R(0)=0x25u;
  R(4)=0x8u;
  R(0)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(4)&R(0))==0;
  if(c->t) goto L8c046210;
  { R(4)=0x1u; goto L8c046212; }
L8c046210:;
  R(4)=0x0u;
L8c046212:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c04622e;
  R(3)=0x8c03342au;
  R(4)=LD32(R(14)+12);
  { c->pr=0x8c046220u; R(4)=LD32(R(4)); f_8c03342a(c); }
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0x8u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  { ST8(R(4)+R(0),R(2)); goto L8c046236; }
L8c04622e:;
  R(3)=0x8c0333b0u;
  R(4)=LD32(R(14)+12);
  { c->pr=0x8c046236u; R(4)=LD32(R(4)); f_8c0333b0(c); }
L8c046236:;
  R(4)=LD32(R(14)+12);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0332a0u;
  R(4)=LD32(R(4));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0332a0(c); return; } }
L8c046242:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c046280(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c0b9d60u;
  R(10)=0x0u;
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(8)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c0462cc; }
  R(6)=0xc7u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0462b2u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xc7u;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c0462cau; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0462cc:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0462f6;
  R(6)=0xcau;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0462dcu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xcau;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c0462f4u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0462f6:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c046306;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c046306;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c046306;
  c->t=(int32_t)R(0)==4;
L8c046306:;
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
void f_8c04631a(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(5)+12);
  R(2)=LD32(R(3));
  R(3)=0x8c0335ccu;
  ST32(R(15),R(2));
  R(5)=LD32(R(4)+12);
  R(4)=R(2);
  R(5)=LD32(R(5));
  { R(15)+=0x4u; { f_8c0335cc(c); return; } }
}
void f_8c046360(SH4Ctx *c) {
  R(0)=0x8c046444u;
  R(4)=0x8c2cff2cu;
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8c04644cu;
  fp_ld(c,4,R(0));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8c046450u;
  fp_ld(c,4,R(0));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x14u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8c046454u;
  fp_ld(c,3,R(0));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c046458u;
  fp_ld(c,5,R(0));
  R(0)=0x18u;
  fp_st(c,5,R(0)+R(4));
  R(0)=0x1cu;
  fp_st(c,5,R(0)+R(4));
  R(0)=0x8c04645cu;
  fp_ld(c,3,R(0));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c046460u;
  fp_ld(c,5,R(0));
  R(0)=0x24u;
  R(3)=0x3u;
  fp_st(c,5,R(0)+R(4));
  R(0)=0x28u;
  fp_st(c,5,R(0)+R(4));
  R(0)=0x2cu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8c046464u;
  fp_ld(c,3,R(0));
  R(0)=0x30u;
  R(2)=0x1u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c046468u;
  fp_ld(c,3,R(0));
  R(0)=0x34u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c04646cu;
  fp_ld(c,3,R(0));
  R(0)=0x38u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c046470u;
  fp_ld(c,3,R(0));
  R(0)=0x3cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x40u;
  ST16(R(4)+R(0),R(3));
  R(0)=0x42u;
  ST16(R(4)+R(0),R(2));
  R(0)=0x44u;
  R(3)=0x4u;
  ST16(R(4)+R(0),R(3));
  R(0)=0x46u;
  R(2)=0x14u;
  ST16(R(4)+R(0),R(2));
  R(0)=0x48u;
  R(5)=0x3cu;
  ST16(R(4)+R(0),R(5));
  R(0)=0x4au;
  ST16(R(4)+R(0),R(5));
  R(0)=0x8c046474u;
  fp_ld(c,4,R(0));
  R(0)=0x4cu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8c046478u;
  fp_ld(c,5,R(0));
  R(0)=0x50u;
  fp_st(c,5,R(0)+R(4));
  R(0)=0x8c04647cu;
  fp_ld(c,3,R(0));
  R(0)=0x54u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x60u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c046480u;
  fp_ld(c,3,R(0));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x68u;
  c->fr[4]=0x3F800000u;
  fp_st(c,5,R(0)+R(4));
  R(0)=0x6cu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x74u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x78u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x7cu;
  R(3)=0x0u;
  { ST16(R(4)+R(0),R(3)); return; }
}
void f_8c04643a(SH4Ctx *c) {
  R(0)=0x180u;
  {  return; }
}
void f_8c0464a0(SH4Ctx *c) {
  { R(0)=0x7cu; return; }
}
void f_8c0464a4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0xffffffffu;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0xffu;
  R(12)=0x8c0b9d94u;
  R(9)=0x8c0c3fa8u;
  R(8)=0x8c0125ccu;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c0464ea; }
  R(6)=0x81u;
  R(5)=R(12);
  { uint32_t tg=R(8); c->pr=0x8c0464ceu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x81u;
  R(7)=0xeu;
  R(3)=0x8c012658u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c0464e8u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0464ea:;
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c046514;
  R(6)=0x84u;
  R(5)=R(12);
  { uint32_t tg=R(8); c->pr=0x8c0464f8u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x84u;
  R(7)=0xdu;
  R(2)=0x8c012658u;
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c046512u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c046514:;
  { c->pr=0x8c046518u;  f_8c0466ea(c); }
  R(3)=R(0);
  ST32(R(14)+16,R(0));
  { c->pr=0x8c046520u; {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} f_8c046740(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  ST32(R(1),R(0));
  R(1)=0x4u;
  R(3)=LD32(R(14)+16);
  R(1)+=R(3);
  { c->pr=0x8c04652eu; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c046740(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(1)=0x8u;
  ST32(R(2),R(0));
  R(3)=LD32(R(14)+16);
  R(1)+=R(3);
  { c->pr=0x8c04653cu; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c046740(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(1)=0xcu;
  ST32(R(2),R(0));
  R(3)=LD32(R(14)+16);
  R(1)+=R(3);
  { c->pr=0x8c04654au; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c046740(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  c->fr[4]=0x00000000u;
  ST32(R(2),R(0));
  R(0)=0x4u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(2));
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0x8u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0xcu;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0x10u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0x14u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0x8c046658u;
  R(3)=LD32(R(14)+16);
  fp_ld(c,5,R(0));
  R(0)=0x18u;
  R(2)=LD32(R(3));
  fp_st(c,5,R(0)+R(2));
  R(3)=LD32(R(14)+16);
  R(0)=0x1cu;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  R(2)=LD32(R(3));
  fp_st(c,5,R(0)+R(2));
  R(0)=0x20u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,3,R(0)+R(2));
  R(0)=0x8c04665cu;
  R(3)=LD32(R(14)+16);
  fp_ld(c,3,R(0));
  R(0)=0x24u;
  R(2)=LD32(R(3));
  fp_st(c,3,R(0)+R(2));
  R(0)=0x28u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0x2cu;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0x30u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0x34u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(3)=LD32(R(14)+16);
  R(0)=0x8c046660u;
  fp_ld(c,6,R(0));
  R(0)=0x38u;
  R(2)=LD32(R(3));
  c->fr[5]=0x3F800000u;
  fp_st(c,6,R(0)+R(2));
  R(0)=0x3cu;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,5,R(0)+R(2));
  R(0)=0x40u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0x8c046664u;
  R(3)=LD32(R(14)+16);
  fp_ld(c,3,R(0));
  R(0)=0x44u;
  R(2)=LD32(R(3));
  fp_st(c,3,R(0)+R(2));
  R(0)=0x48u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,5,R(0)+R(2));
  R(0)=0x4cu;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(0)=0x50u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,6,R(0)+R(2));
  R(0)=0x54u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,5,R(0)+R(2));
  R(0)=0x58u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  {  goto L8c046680; }
L8c046680:;
  R(0)=0x8c046724u;
  fp_ld(c,3,R(0));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(2));
  R(0)=0x8c046728u;
  R(3)=LD32(R(14)+16);
  fp_ld(c,3,R(0));
  R(0)=0x60u;
  R(2)=LD32(R(3));
  fp_st(c,3,R(0)+R(2));
  R(0)=0x8c04672cu;
  R(3)=LD32(R(14)+16);
  fp_ld(c,3,R(0));
  R(0)=0x64u;
  R(2)=LD32(R(3));
  fp_st(c,3,R(0)+R(2));
  R(0)=0x68u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  ST32(R(2)+R(0),R(13));
  R(0)=0x6cu;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  ST32(R(2)+R(0),R(13));
  R(0)=0x70u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  ST16(R(2)+R(0),R(13));
  R(0)=0x72u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  ST16(R(2)+R(0),R(13));
  R(3)=LD32(R(14)+16);
  R(0)=0x74u;
  R(2)=LD32(R(3));
  ST32(R(2)+R(0),R(13));
  R(0)=0x78u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  ST8(R(2)+R(0),R(10));
  R(0)=0x79u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  ST8(R(2)+R(0),R(13));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0466ea(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c046706;
  { c->pr=0x8c0466f8u;  f_8c04643a(c); }
  R(2)=0x8c064e90u;
  R(6)=0xbeu;
  R(5)=0x8c0b9d94u;
  { c->pr=0x8c046702u; R(4)=R(0); f_8c064e90(c); }
  {  goto L8c046714; }
L8c046706:;
  { c->pr=0x8c04670au;  f_8c04643a(c); }
  R(2)=0x8c0199c4u;
  R(6)=0xbeu;
  R(5)=0x8c0b9d94u;
  { c->pr=0x8c046714u; R(4)=R(0); f_8c0199c4(c); }
L8c046714:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c046740(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04675c;
  { c->pr=0x8c04674eu;  f_8c0464a0(c); }
  R(2)=0x8c064e90u;
  R(6)=0xc5u;
  R(5)=0x8c0b9d94u;
  { c->pr=0x8c046758u; R(4)=R(0); f_8c064e90(c); }
  {  goto L8c04676a; }
L8c04675c:;
  { c->pr=0x8c046760u;  f_8c0464a0(c); }
  R(2)=0x8c0199c4u;
  R(6)=0xc5u;
  R(5)=0x8c0b9d94u;
  { c->pr=0x8c04676au; R(4)=R(0); f_8c0199c4(c); }
L8c04676a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0467a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(R(3)&R(3))==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(8)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(14)=0x8c0b9d94u;
  R(10)=0x8c012658u;
  R(9)=0x8c0c3fa8u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c0467e8; }
  R(6)=0xd1u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0467ceu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xd1u;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c0467e6u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0467e8:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+16);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c046812;
  R(6)=0xd4u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0467f8u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xd4u;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c046810u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046812:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+16);
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c04683e;
  R(6)=0xd7u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c046824u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xd7u;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c04683cu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04683e:;
  R(4)=LD32(R(15));
  R(5)=R(14);
  R(3)=0x8c064eb8u;
  R(6)=0xd9u;
  { c->pr=0x8c04684au; R(4)=LD32(R(4)+16); f_8c064eb8(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+16);
  R(1)=LD32(R(3)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c046876;
  R(6)=0xdcu;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c04685cu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xdcu;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c046874u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046876:;
  R(4)=LD32(R(15));
  R(5)=R(14);
  R(3)=0x8c064eb8u;
  R(4)=LD32(R(4)+16);
  R(6)=0xdeu;
  { c->pr=0x8c046884u; R(4)+=0x4u; f_8c064eb8(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+16);
  R(1)=LD32(R(3)+8);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0468b0;
  R(6)=0xe1u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c046896u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xe1u;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c0468aeu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0468b0:;
  R(4)=LD32(R(15));
  R(5)=R(14);
  R(3)=0x8c064eb8u;
  R(4)=LD32(R(4)+16);
  R(6)=0xe3u;
  { c->pr=0x8c0468beu; R(4)+=0x8u; f_8c064eb8(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+16);
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0468ea;
  R(6)=0xe6u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0468d0u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xe6u;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c0468e8u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0468ea:;
  R(4)=LD32(R(15));
  R(5)=R(14);
  R(3)=0x8c064eb8u;
  R(4)=LD32(R(4)+16);
  R(6)=0xe8u;
  { c->pr=0x8c0468f8u; R(4)+=0xcu; f_8c064eb8(c); }
  R(6)=0xeau;
  R(5)=R(14);
  {  goto L8c046940; }
L8c046940:;
  R(4)=LD32(R(15));
  R(4)+=0x10u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c064eb8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064eb8(c); return; } }
}
void f_8c04695a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  c->fr[4]=0x00000000u;
  R(0)=0x10u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_st(c,4,R(0)+R(14));
  R(0)=0x14u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x1cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x2cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x30u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x48u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x4cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x60u;
  R(13)=0x0u;
  ST32(R(14)+R(0),R(13));
  R(0)=0x64u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x68u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x6cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x74u;
  ST8(R(14)+R(0),R(13));
  R(0)=0x75u;
  ST8(R(14)+R(0),R(13));
  R(0)=0x76u;
  ST8(R(14)+R(0),R(13));
  R(3)=0x1u;
  R(0)=0x17cu;
  ST8(R(14)+R(0),R(3));
  { c->pr=0x8c0469e0u; R(4)=R(14); f_8c046a20(c); }
  R(2)=0x8c0c7df8u;
  R(6)=0x7cu;
  R(3)=0x8c0685b4u;
  ST32(R(2),R(13));
  R(5)=LD32(R(14));
  { c->pr=0x8c0469eeu; R(4)=LD32(R(14)+4); f_8c0685b4(c); }
  R(0)=0x74u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=0x2u;
  R(2)|=R(3);
  ST8(R(14)+R(0),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c046a20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(4);
  R(4)=LD32(R(14)+12);
  R(0)=0x68u;
  R(4)=LD32(R(4)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c046ab0;
  R(13)=0x8c0686b8u;
  R(4)=R(14);
  R(5)=0x0u;
  R(6)=0x60u;
  { c->pr=0x8c046a44u; R(4)+=0x78u; f_8c0686b8(c); }
  R(6)=0x60u;
  R(4)=R(6);
  R(4)+=0x78u;
  R(5)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c046a50u; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=0x138u;
  R(5)=0x0u;
  R(6)=0x20u;
  { uint32_t tg=R(13); c->pr=0x8c046a5au; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x4u;
  c->fr[15]=0x00000000u;
  c->fr[14]=0x3F800000u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8u;
  fp_unary(c,0,14);
  R(4)=R(14);
  fp_st(c,14,R(0)+R(15));
  R(0)=0xcu;
  R(13)=0x8c05e6eau;
  R(5)+=0x4u;
  R(3)=0x158u;
  fp_st(c,15,R(0)+R(15));
  ST32(R(15),R(14));
  { c->pr=0x8c046a7cu; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x4u;
  R(5)=R(15);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0xcu;
  R(3)=0x164u;
  R(4)=R(14);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x4u;
  ST32(R(15),R(14));
  { uint32_t tg=R(13); c->pr=0x8c046a96u; R(4)+=R(3); sh4_call(c,tg); }
  R(0)=0x4u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0xcu;
  R(3)=0x170u;
  R(4)=R(14);
  fp_st(c,14,R(0)+R(15));
  R(5)+=0x4u;
  ST32(R(15),R(14));
  { uint32_t tg=R(13); c->pr=0x8c046ab0u; R(4)+=R(3); sh4_call(c,tg); }
L8c046ab0:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c046ae0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(12)=0x8c0125ccu;
  R(8)=0x0u;
  R(13)=0xffu;
  R(14)=0x8c0b9d94u;
  R(10)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(11)=0xffffffffu; if(k) goto L8c046b2c; }
  R(6)=0x14du;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c046b12u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x14du;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(10));
  { uint32_t tg=R(9); c->pr=0x8c046b2au; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046b2c:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+16);
  R(2)=R(3);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(15)+4,R(3)); if(k) goto L8c046b5a; }
  R(6)=0x152u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c046b40u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x152u;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(10));
  { uint32_t tg=R(9); c->pr=0x8c046b58u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046b5a:;
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c046c16;
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c046b7e;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c046b7e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c046b7e;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c046b7e;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c046c16;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c046bc0;
  {  goto L8c046c16; }
L8c046b7e:;
  R(2)=LD32(R(15)+4);
  R(0)=0x68u;
  R(3)=0x8c123cf0u;
  R(1)=LD32(R(2));
  R(4)=LD32(R(3));
  ST32(R(1)+R(0),R(4));
  R(4)=LD32(R(15)+4);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04695a(c); return; } }
L8c046bc0:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+12);
  R(3)=R(1);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(1)); if(k) goto L8c046bf0; }
  R(6)=0x172u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c046bd6u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x172u;
  R(6)=0x0u;
  R(7)=0x10u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(10));
  { uint32_t tg=R(9); c->pr=0x8c046beeu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046bf0:;
  { c->pr=0x8c046bf4u; R(4)=LD32(R(15)); f_8c046ef0(c); }
  R(3)=LD32(R(15)+4);
  R(0)=0x68u;
  R(2)=0x8c123cf0u;
  R(1)=LD32(R(3));
  R(4)=LD32(R(2));
  ST32(R(1)+R(0),R(4));
  R(4)=LD32(R(15)+4);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04695a(c); return; } }
L8c046c16:;
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
void f_8c046c60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c0b9d94u;
  R(10)=0x0u;
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(8)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c046cac; }
  R(6)=0x188u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c046c92u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x188u;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c046caau; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046cac:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+16);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c046cd6;
  R(6)=0x18bu;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c046cbcu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x18bu;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c046cd4u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c046cd6:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c046cea;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c046cea;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c046cea;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c046cea;
  c->t=(int32_t)R(0)==4;
L8c046cea:;
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
void f_8c046cfe(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(6)=0x7cu;
  ST32(R(15)+4,R(5));
  R(4)=LD32(R(15));
  R(5)=LD32(R(5)+16);
  R(4)=LD32(R(4)+16);
  R(3)=0x8c0685b4u;
  R(4)=LD32(R(4));
  R(5)=LD32(R(5));
  { R(15)+=0x8u; { f_8c0685b4(c); return; } }
}
void f_8c046d40(SH4Ctx *c) {
  R(3)=0x8c0685b4u;
  R(6)=0xcu;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)+=0xcu;
  { R(15)+=0x4u; { f_8c0685b4(c); return; } }
}
void f_8c046d52(SH4Ctx *c) {
  R(0)=0x1cu;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d58(SH4Ctx *c) {
  R(0)=0x20u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d5e(SH4Ctx *c) {
  R(0)=0x24u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d64(SH4Ctx *c) {
  R(0)=0x28u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d6a(SH4Ctx *c) {
  R(0)=0x2cu;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d70(SH4Ctx *c) {
  R(0)=0x30u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d76(SH4Ctx *c) {
  R(0)=0x34u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d7c(SH4Ctx *c) {
  R(0)=0x38u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d82(SH4Ctx *c) {
  R(0)=0x3cu;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d88(SH4Ctx *c) {
  R(0)=0x40u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046d8e(SH4Ctx *c) {
  R(0)=0x44u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046dc0(SH4Ctx *c) {
  R(0)=0x4cu;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046dc6(SH4Ctx *c) {
  R(0)=0x50u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046dcc(SH4Ctx *c) {
  R(0)=0x54u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046dd2(SH4Ctx *c) {
  R(0)=0x58u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046dd8(SH4Ctx *c) {
  R(0)=0x5cu;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046dde(SH4Ctx *c) {
  R(0)=0x60u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046de4(SH4Ctx *c) {
  R(0)=0x64u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c046dea(SH4Ctx *c) {
  R(0)=0x68u;
  { R(0)=LD32(R(4)+R(0)); return; }
}
void f_8c046df0(SH4Ctx *c) {
  R(0)=0x70u;
  { ST16(R(4)+R(0),R(5)); return; }
}
void f_8c046df6(SH4Ctx *c) {
  R(0)=0x72u;
  { ST16(R(4)+R(0),R(5)); return; }
}
void f_8c046dfc(SH4Ctx *c) {
  R(0)=0x74u;
  { R(0)=LD32(R(4)+R(0)); return; }
}
void f_8c046e02(SH4Ctx *c) {
  R(0)=0x74u;
  { ST32(R(4)+R(0),R(5)); return; }
}
void f_8c046e08(SH4Ctx *c) {
  R(0)=0x78u;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c046e0e(SH4Ctx *c) {
  R(0)=0x78u;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c046e14(SH4Ctx *c) {
  R(0)=0x79u;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c046e1a(SH4Ctx *c) {
  R(0)=0x79u;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c046e20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14));
  R(6)=0x7cu;
  R(3)=0x8c0685b4u;
  { c->pr=0x8c046e30u; R(4)=LD32(R(14)+4); f_8c0685b4(c); }
  R(0)=0x74u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=0x2u;
  R(2)|=R(3);
  ST8(R(14)+R(0),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c046e40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x74u;
  R(14)=R(4);
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c046e64;
  R(0)=0x74u;
  R(1)=0x8c0685b4u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=0x1u;
  R(6)=0x7cu;
  R(2)|=R(3);
  ST8(R(14)+R(0),R(2));
  R(4)=LD32(R(14)+12);
  R(5)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
L8c046e64:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c046e68(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x75u;
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c046e8c;
  R(2)=0x8c0685b4u;
  R(6)=0x7cu;
  R(5)=LD32(R(14)+4);
  { c->pr=0x8c046e82u; R(4)=LD32(R(14)+8); f_8c0685b4(c); }
  R(0)=0x75u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=0x2u;
  R(2)|=R(3);
  ST8(R(14)+R(0),R(2));
L8c046e8c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c046ec0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14)+8);
  R(6)=0x7cu;
  R(3)=0x8c0685b4u;
  { c->pr=0x8c046ed0u; R(4)=LD32(R(14)+4); f_8c0685b4(c); }
  R(0)=0x75u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)&=R(3);
  ST8(R(14)+R(0),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c046ee0(SH4Ctx *c) {
  R(5)=R(4);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(4)+12);
  R(6)=0x7cu;
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(5)+8);
  { R(15)+=0x4u; { f_8c0685b4(c); return; } }
}
void f_8c046ef0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c758cu;
  ST32(R(15),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c046f40;
  R(3)=0x8c064e90u;
  R(5)=0x8c0b9d94u;
  R(6)=0x311u;
  { c->pr=0x8c046f08u; R(4)=0x10u; f_8c064e90(c); }
  {  goto L8c046f4a; }
L8c046f40:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0b9d94u;
  R(6)=0x311u;
  { c->pr=0x8c046f4au; R(4)=0x10u; f_8c0199c4(c); }
L8c046f4a:;
  R(4)=R(0);
  R(2)=LD32(R(15));
  R(5)=0x0u;
  ST32(R(4),R(2));
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  ST32(R(4)+12,R(5));
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c046f64;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(4)+4);
  ST32(R(3)+8,R(2));
L8c046f64:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c046f70;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4)+8);
  ST32(R(3)+4,R(2));
L8c046f70:;
  R(3)=LD32(R(4)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c046f9a;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c046f8c;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+12);
  ST32(R(1),R(3));
L8c046f8c:;
  R(2)=LD32(R(4)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c046f9a;
  R(3)=LD32(R(4)+8);
  R(1)=LD32(R(4)+12);
  ST32(R(1)+4,R(3));
L8c046f9a:;
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  ST32(R(4)+12,R(5));
  ST32(R(4)+4,R(5));
  R(0)=0x1c8u;
  R(5)=0x8c123b08u;
  R(3)=0x1c4u;
  R(2)=LD32(R(5)+R(0));
  R(0)+=0xfffffffcu;
  R(3)+=R(5);
  ST32(R(4)+8,R(2));
  ST32(R(4)+12,R(3));
  R(2)=LD32(R(5)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c046fbe;
  R(0)=0x1c4u;
  { ST32(R(5)+R(0),R(4)); goto L8c046fc4; }
L8c046fbe:;
  R(0)=0x1c8u;
  R(2)=LD32(R(5)+R(0));
  ST32(R(2)+4,R(4));
L8c046fc4:;
  R(0)=0x1c8u;
  ST32(R(5)+R(0),R(4));
  R(0)+=0x4u;
  R(3)=LD32(R(5)+R(0));
  R(3)+=0x1u;
  ST32(R(5)+R(0),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c047000(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=R(4);
  R(13)=LD32(R(12)+8);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c047024; }
L8c047014:;
  { c->pr=0x8c047018u; R(4)=R(13); f_8c047000(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c047058;
  R(13)=LD32(R(13)+20);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c047014;
L8c047024:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c047058;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c047058; }
  R(2)=LD32(R(12)+4);
  R(3)=LD32(R(2)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c047058;
  R(4)=LD32(R(12)+4);
  R(0)=0x79u;
  R(4)=LD32(R(4)+16);
  R(4)=LD32(R(4));
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(15),R(3));
  R(1)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c047058;
  R(4)=LD32(R(12)+4);
  R(4)=LD32(R(4)+16);
  { c->pr=0x8c047052u; R(4)=LD32(R(4)); f_8c046dfc(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c047058;
  R(14)=R(12);
L8c047058:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c047066(SH4Ctx *c) {
  R(0)=0x158u;
  { R(0)+=R(4); return; }
}
void f_8c04706c(SH4Ctx *c) {
  R(3)=0x158u;
  R(2)=0x8c05e6eau;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)+=R(3);
  { R(15)+=0x4u; { f_8c05e6ea(c); return; } }
}
void f_8c0470a0(SH4Ctx *c) {
  R(3)=0x164u;
  R(2)=0x8c05e6eau;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)+=R(3);
  { R(15)+=0x4u; { f_8c05e6ea(c); return; } }
}
void f_8c0470b2(SH4Ctx *c) {
  R(3)=0x170u;
  R(2)=0x8c05e6eau;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)+=R(3);
  { R(15)+=0x4u; { f_8c05e6ea(c); return; } }
}
void f_8c0470be(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(5));
  R(14)=R(4);
  R(5)=0x158u;
  R(4)=R(14);
  R(13)=0x8c05e6eau;
  R(5)+=R(4);
  ST32(R(15),R(6));
  ST32(R(15)+4,R(7));
  { c->pr=0x8c0470dau; R(4)=LD32(R(15)+8); f_8c05e6ea(c); }
  R(5)=0x164u;
  R(4)=R(14);
  R(5)+=R(4);
  { uint32_t tg=R(13); c->pr=0x8c0470e4u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(5)=0x170u;
  R(4)=R(14);
  R(5)+=R(4);
  { uint32_t tg=R(13); c->pr=0x8c0470eeu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c047120(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=0x8u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(4)=R(6);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
L8c04713a:;
  R(2)=0x138u;
  R(3)=R(4);
  R(3)<<=2;
  c->fr[2]=0x00000000u;
  R(2)+=R(13);
  R(3)+=R(2);
  fp_ld(c,3,R(3));
  fp_cmp(c,0,3,2);
  if(!c->t) goto L8c047152;
  R(4)+=0x1u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c04713a;
L8c047152:;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0471d6;
  R(11)=LD32(R(13)+12);
  R(0)=0x68u;
  R(10)=0x8c05e6eau;
  R(9)=0x20u;
  R(11)=LD32(R(11)+R(0));
  R(0)=0x8c047224u;
  fp_ld(c,14,R(0));
  R(14)=R(6);
  R(11)=LD32(R(11)+36);
  R(12)=R(6);
  c->fr[15]=0x00000000u;
  R(11)+=0x58u;
L8c04716e:;
  R(3)=0x138u;
  R(0)=0x4u;
  R(2)=R(13);
  R(4)=0xd8u;
  R(3)+=R(13);
  R(5)=R(11);
  R(3)+=R(12);
  fp_st(c,14,R(3));
  R(3)=R(13);
  R(3)+=0x78u;
  R(3)+=R(14);
  R(2)+=0x78u;
  R(2)+=R(14);
  fp_st(c,15,R(2));
  R(4)+=R(13);
  fp_st(c,15,R(0)+R(3));
  R(3)=R(13);
  R(3)+=0x78u;
  R(0)=0x8u;
  R(3)+=R(14);
  fp_st(c,15,R(0)+R(3));
  { uint32_t tg=R(10); c->pr=0x8c04719cu; R(4)+=R(14); sh4_call(c,tg); }
  R(3)=0x138u;
  R(12)+=0x4u;
  R(14)+=0xcu;
  R(2)=R(13);
  R(3)+=R(13);
  R(4)=0xd8u;
  R(3)+=R(12);
  R(5)=R(11);
  fp_st(c,14,R(3));
  R(3)=R(13);
  R(3)+=0x78u;
  R(3)+=R(14);
  R(0)=0x4u;
  R(2)+=0x78u;
  R(2)+=R(14);
  fp_st(c,15,R(2));
  R(4)+=R(13);
  fp_st(c,15,R(0)+R(3));
  R(3)=R(13);
  R(3)+=0x78u;
  R(0)=0x8u;
  R(3)+=R(14);
  fp_st(c,15,R(0)+R(3));
  { uint32_t tg=R(10); c->pr=0x8c0471ceu; R(4)+=R(14); sh4_call(c,tg); }
  R(12)+=0x4u;
  c->t=R(12)>=R(9);
  { uint32_t k=!c->t; R(14)+=0xcu; if(k) goto L8c04716e; }
L8c0471d6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0471ea(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0685b4u;
  R(6)=0x54u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(15));
  R(5)+=0x78u;
  ST32(R(15)+8,R(5));
  R(5)+=0xcu;
  { c->pr=0x8c047202u; R(4)=LD32(R(15)+8); f_8c0685b4(c); }
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(4)+=0x78u;
  R(4)+=0x54u;
  R(15)+=0xcu;
  R(3)=0x8c05e6eau;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c05e6ea(c); return; } }
}
void f_8c047240(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0xd8u;
  R(6)=0x54u;
  R(2)=0x8c0685b4u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(15));
  R(5)+=R(3);
  ST32(R(15)+8,R(5));
  R(5)+=0xcu;
  { c->pr=0x8c04725au; R(4)=LD32(R(15)+8); f_8c0685b4(c); }
  R(3)=0xd8u;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(4)+=R(3);
  R(4)+=0x54u;
  R(15)+=0xcu;
  R(2)=0x8c05e6eau;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c05e6ea(c); return; } }
}
void f_8c04726c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x138u;
  R(0)=0x4u;
  R(2)=0x8c0685b4u;
  R(6)=0x1cu;
  ST32(R(15),R(4));
  fp_st(c,4,R(0)+R(15));
  R(5)=LD32(R(15));
  R(5)+=R(3);
  ST32(R(15)+8,R(5));
  R(5)+=0x4u;
  { c->pr=0x8c047288u; R(4)=LD32(R(15)+8); f_8c0685b4(c); }
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x154u;
  fp_st(c,3,R(0)+R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0472c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_mov(c,15,4);
  { c->pr=0x8c0472d0u; R(14)=R(5); f_8c047120(c); }
  c->fr[4]=0x00000000u;
  R(0)=0x4u;
  fp_mov(c,5,4);
  R(4)=0x0u;
  R(5)=R(4);
  R(7)=0x20u;
  R(6)=R(4);
  fp_st(c,5,R(14));
  fp_st(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(14));
L8c0472e6:;
  R(3)=0x138u;
  R(4)=R(13);
  c->fr[3]=0x00000000u;
  R(4)+=0x78u;
  R(3)+=R(13);
  R(3)+=R(5);
  fp_ld(c,4,R(3));
  fp_cmp(c,0,4,3);
  { uint32_t k=c->t; R(4)+=R(6); if(k) goto L8c047338; }
  fp_ld(c,2,R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c047314;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c047314;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c047338;
L8c047314:;
  fp_ld(c,2,R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_arith(c,0,5,4);
  fp_mov(c,0,4);
  fp_fmac(c,3,2);
  fp_cmp(c,1,15,5);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_fmac(c,3,2);
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(14)); if(k) goto L8c047340; }
L8c047338:;
  R(5)+=0x4u;
  c->t=R(5)>=R(7);
  { uint32_t k=!c->t; R(6)+=0xcu; if(k) goto L8c0472e6; }
L8c047340:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,5,3);
  if(c->t) goto L8c04735c;
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_arith(c,3,3,5);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,3,2,5);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,5);
  fp_st(c,3,R(0)+R(14));
L8c04735c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0473a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_mov(c,15,4);
  { c->pr=0x8c0473b0u; R(14)=R(5); f_8c047120(c); }
  c->fr[4]=0x00000000u;
  R(0)=0x4u;
  fp_mov(c,5,4);
  R(4)=0x0u;
  R(5)=R(4);
  R(7)=0x20u;
  R(6)=R(4);
  fp_st(c,5,R(14));
  fp_st(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(14));
L8c0473c6:;
  R(3)=0x138u;
  c->fr[3]=0x00000000u;
  R(3)+=R(13);
  R(4)=0xd8u;
  R(3)+=R(5);
  fp_ld(c,4,R(3));
  R(4)+=R(13);
  fp_cmp(c,0,4,3);
  { uint32_t k=c->t; R(4)+=R(6); if(k) goto L8c047418; }
  fp_ld(c,2,R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0473f4;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0473f4;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c047418;
L8c0473f4:;
  fp_ld(c,2,R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_arith(c,0,5,4);
  fp_mov(c,0,4);
  fp_fmac(c,3,2);
  fp_cmp(c,1,15,5);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_fmac(c,3,2);
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(14)); if(k) goto L8c047420; }
L8c047418:;
  R(5)+=0x4u;
  c->t=R(5)>=R(7);
  { uint32_t k=!c->t; R(6)+=0xcu; if(k) goto L8c0473c6; }
L8c047420:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,5,3);
  if(c->t) goto L8c04743c;
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_arith(c,3,3,5);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,3,2,5);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,5);
  fp_st(c,3,R(0)+R(14));
L8c04743c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c047480(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09b1feu;
  { c->pr=0x8c047488u;  f_8c09b1fe(c); }
  R(2)=0x8c09b380u;
  { c->pr=0x8c04748eu; R(4)=0x1u; f_8c09b380(c); }
  R(3)=0x8c123b70u;
  R(2)=0x8c09c164u;
  ST16(R(3),R(0));
  { c->pr=0x8c047498u; R(4)=0x1u; f_8c09c164(c); }
  R(1)=R(0);
  R(3)=0x8c0679f4u;
  R(0)=0x3e8u;
  { c->pr=0x8c0474a2u;  f_8c0679f4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c123bd8u;
  { ST32(R(2),R(0)); return; }
}
void f_8c0474aa(SH4Ctx *c) {
  R(0)=0x8c0474fcu;
  R(3)=0x8c123bc4u;
  fp_ld(c,3,R(0));
  { fp_st(c,3,R(3)); return; }
}
void f_8c0474b4(SH4Ctx *c) {
  {  return; }
}
void f_8c0474b8(SH4Ctx *c) {
  {  return; }
}
void f_8c0474bc(SH4Ctx *c) {
  R(0)=0xbcu;
  R(4)=0x8c123b08u;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8c047508u;
  fp_ld(c,3,R(0));
  R(0)=0x70u;
  R(4)=LD32(R(4)+R(0));
  fp_mov(c,4,6);
  fp_arith(c,2,4,3);
  c->fpul=R(4);
  fp_float(c,2);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c047520;
  fp_ftrc(c,4);
  { R(4)=c->fpul; goto L8c047532; }
L8c047520:;
  R(0)=0x8c047608u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0));
  fp_arith(c,2,1,2);
  fp_ftrc(c,1);
  R(5)=c->fpul;
  c->t=(int32_t)R(4)>(int32_t)R(5);
  if(!c->t) goto L8c047532;
  R(4)=R(5);
L8c047532:;
  c->fpul=R(4);
  R(0)=0x8c04760cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c047610u;
  fp_float(c,3);
  fp_mov(c,5,3);
  fp_arith(c,2,5,2);
  fp_ld(c,3,R(0));
  fp_arith(c,3,5,6);
  fp_mov(c,1,5);
  fp_arith(c,0,1,3);
  fp_ftrc(c,1);
  R(4)=c->fpul;
  c->fpul=R(4);
  fp_float(c,1);
  fp_mov(c,0,1);
  fp_arith(c,2,0,4);
  fp_ftrc(c,0);
  { R(0)=c->fpul; return; }
}
void f_8c04755a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c09bd20u;
  R(0)=0x68u;
  R(14)=0x8c123b08u;
  { c->pr=0x8c04756au; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c09bd20(c); }
  R(3)=0x8c09b4e0u;
  R(0)=0x68u;
  { c->pr=0x8c047572u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c09b4e0(c); }
  R(3)=0x8c09ba08u;
  R(0)=0x68u;
  R(5)=R(15);
  { c->pr=0x8c04757cu; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c09ba08(c); }
  R(3)=0xc0u;
  R(2)=R(15);
  R(0)=LD32(R(2)+4);
  R(1)=LD32(R(2));
  R(3)+=R(14);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(3)=0x8c0679f4u;
  R(0)=0xd0u;
  R(1)=LD32(R(15));
  { c->pr=0x8c047594u; R(0)=LD32(R(14)+R(0)); f_8c0679f4(c); }
  R(1)=0x6cu;
  R(1)+=R(14);
  { c->pr=0x8c04759cu; ST32(R(1),R(0)); f_8c0474bc(c); }
  R(2)=0xb4u;
  R(3)=R(14);
  R(3)+=0x74u;
  R(2)+=R(14);
  ST32(R(2),R(0));
  R(4)=0x1u;
  R(0)=0x64u;
  ST32(R(14)+R(0),R(4));
  R(5)=0x0u;
  ST32(R(3),R(4));
  R(6)=0x40u;
  R(4)=0x4u;
L8c0475b4:;
  R(2)=R(14);
  R(2)+=0x74u;
  R(3)=R(14);
  R(2)+=R(4);
  R(3)+=0x74u;
  ST32(R(2),R(5));
  R(4)+=0x4u;
  R(2)=R(14);
  R(3)+=R(4);
  R(2)+=0x74u;
  ST32(R(3),R(5));
  R(4)+=0x4u;
  R(2)+=R(4);
  R(4)+=0x4u;
  c->t=R(4)>=R(6);
  { uint32_t k=!c->t; ST32(R(2),R(5)); if(k) goto L8c0475b4; }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0475de(SH4Ctx *c) {
  R(2)=0x8c09b5f6u;
  R(3)=0x8c123b70u;
  { R(4)=(int32_t)(int16_t)LD16(R(3)); { f_8c09b5f6(c); return; } }
}
void f_8c047640(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(2)=0x8c0c5a6cu;
  R(14)=0x8c123b08u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c047696;
  R(13)=0x30d0u;
  { c->pr=0x8c047658u;  f_8c0478c4(c); }
  R(0)=0xc0u;
  R(4)=LD32(R(14)+R(0));
  ST32(R(15),R(4));
  R(4)=0u-R(4);
  R(4)+=0xffffffffu;
  c->t=R(4)>=R(13);
  if(c->t) goto L8c047672;
  R(0)=0xc4u;
  R(13)-=R(4);
  ST32(R(15)+4,R(13));
  R(3)=LD32(R(14)+R(0));
  { R(3)+=0x1u; goto L8c04767c; }
L8c047672:;
  R(0)=0xc4u;
  R(1)=LD32(R(15));
  R(13)+=R(1);
  ST32(R(15)+4,R(13));
  R(3)=LD32(R(14)+R(0));
L8c04767c:;
  ST32(R(15)+8,R(3));
  R(5)=R(15);
  R(3)=0x8c09b8e0u;
  R(0)=0x68u;
  R(5)+=0x4u;
  { c->pr=0x8c04768au; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c09b8e0(c); }
  R(3)=0x8c09b4e0u;
  R(0)=0x68u;
  { c->pr=0x8c047692u; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c09b4e0(c); }
  { c->pr=0x8c047696u;  f_8c047868(c); }
L8c047696:;
  R(0)=0x64u;
  R(5)=R(15);
  R(3)=LD32(R(14)+R(0));
  R(5)+=0xcu;
  R(3)+=0x1u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x68u;
  R(3)=0x8c09ba08u;
  { c->pr=0x8c0476aau; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c09ba08(c); }
  R(0)=0xc0u;
  R(2)=LD32(R(15)+16);
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(3)=LD32(R(14)+R(0));
  R(5)=LD32(R(15)+12);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0476e0;
  R(4)=R(5);
  { R(4)-=R(6); goto L8c0476e6; }
L8c0476e0:;
  R(4)=R(5);
  R(4)-=R(6);
  c->t=R(5)>=R(6);
L8c0476e6:;
  R(3)=0x8c0c5920u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0476f0;
  c->t=R(4)>>31;R(4)<<=1;
L8c0476f0:;
  R(2)=0x8c0679f4u;
  R(1)=R(4);
  R(0)=0xd0u;
  { c->pr=0x8c0476fau; R(0)=LD32(R(14)+R(0)); f_8c0679f4(c); }
  R(1)=0x70u;
  R(3)=R(15);
  R(1)+=R(14);
  R(2)=0xc0u;
  R(3)+=0xcu;
  ST32(R(1),R(0));
  R(0)=LD32(R(3)+4);
  R(2)+=R(14);
  R(1)=LD32(R(3));
  R(3)=0x70u;
  R(3)+=R(14);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x6cu;
  R(2)=LD32(R(14)+R(0));
  R(3)=LD32(R(3));
  R(2)+=R(3);
  { c->pr=0x8c047720u; ST32(R(14)+R(0),R(2)); f_8c0474bc(c); }
  R(1)=0xb4u;
  R(5)=0x8u;
  R(13)=0x0u;
  R(4)=R(5);
  R(1)+=R(14);
  ST32(R(1),R(0));
  R(0)=0xcu;
  R(6)=0x1u;
  R(7)=0x2u;
L8c047732:;
  R(2)=R(14);
  R(3)=R(7);
  R(2)+=0x74u;
  R(3)<<=2;
  R(3)+=R(2);
  R(1)=LD32(R(3));
  c->t=R(1)==R(6);
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c04774e; }
  R(2)=R(14);
  R(2)+=0x74u;
  R(2)+=R(5);
  { ST32(R(2),R(13)); goto L8c047756; }
L8c04774e:;
  R(2)+=R(4);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST32(R(2),R(3));
L8c047756:;
  R(2)=R(7);
  R(3)=R(14);
  R(3)+=0x74u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  R(6)+=0x1u;
  R(4)+=0x4u;
  c->t=R(1)==R(6);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c047776; }
  R(2)=R(14);
  R(2)+=0x74u;
  R(2)+=R(5);
  { ST32(R(2),R(13)); goto L8c047782; }
L8c047776:;
  R(2)=R(14);
  R(2)+=0x74u;
  R(2)+=R(4);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST32(R(2),R(3));
L8c047782:;
  R(7)+=0x1u;
  R(3)=R(14);
  R(2)=R(7);
  R(3)+=0x74u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  R(6)+=0x1u;
  R(4)+=0x4u;
  c->t=R(1)==R(6);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c0477e0; }
  R(2)=R(14);
  R(2)+=0x74u;
  R(2)+=R(5);
  { ST32(R(2),R(13)); goto L8c0477ec; }
L8c0477e0:;
  R(2)=R(14);
  R(2)+=0x74u;
  R(2)+=R(4);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST32(R(2),R(3));
L8c0477ec:;
  R(7)+=0x1u;
  R(3)=R(14);
  R(2)=R(7);
  R(3)+=0x74u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  R(6)+=0x1u;
  R(4)+=0x4u;
  c->t=R(1)==R(6);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c04780e; }
  R(2)=R(14);
  R(2)+=0x74u;
  R(2)+=R(5);
  { ST32(R(2),R(13)); goto L8c04781a; }
L8c04780e:;
  R(2)=R(14);
  R(2)+=0x74u;
  R(2)+=R(4);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST32(R(2),R(3));
L8c04781a:;
  R(7)+=0x1u;
  c->t=R(7)>=R(0);
  R(5)+=0x4u;
  R(4)+=0x4u;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c047732; }
  R(0)=0x10u;
  c->t=R(7)>=R(0);
  if(c->t) goto L8c04785e;
L8c04782c:;
  R(3)=R(14);
  R(2)=R(7);
  R(3)+=0x74u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  c->t=R(1)==R(6);
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c047848; }
  R(2)=R(14);
  R(2)+=0x74u;
  R(2)+=R(5);
  { ST32(R(2),R(13)); goto L8c047854; }
L8c047848:;
  R(2)=R(14);
  R(2)+=0x74u;
  R(2)+=R(4);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST32(R(2),R(3));
L8c047854:;
  c->t=R(7)>=R(0);
  R(5)+=0x4u;
  R(4)+=0x4u;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c04782c; }
L8c04785e:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c047868(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c09ba08u;
  R(0)=0x68u;
  R(14)=0x8c123b08u;
  R(5)=R(15);
  { c->pr=0x8c04787au; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c09ba08(c); }
  R(0)=0xc0u;
  R(2)=LD32(R(15)+4);
  R(5)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(3)=LD32(R(14)+R(0));
  R(4)=LD32(R(15));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c047890;
  R(6)=R(4);
  { R(6)-=R(5); goto L8c047896; }
L8c047890:;
  R(6)=R(4);
  R(6)-=R(5);
  c->t=R(4)>=R(5);
L8c047896:;
  R(3)=0xc8u;
  R(2)=R(15);
  R(0)=LD32(R(2)+4);
  R(1)=LD32(R(2));
  R(3)+=R(14);
  ST32(R(3),R(1));
  R(1)=R(6);
  ST32(R(3)+4,R(0));
  R(0)=0xd0u;
  R(3)=0x8c0679f4u;
  { c->pr=0x8c0478aeu; R(0)=LD32(R(14)+R(0)); f_8c0679f4(c); }
  R(2)=0x6cu;
  R(1)=0xb8u;
  R(2)+=R(14);
  R(2)=LD32(R(2));
  R(1)+=R(14);
  R(0)+=R(2);
  ST32(R(1),R(0));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0478c4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0xc8u;
  R(14)=0x8c123b08u;
  R(2)=0xc0u;
  R(3)+=R(14);
  R(5)=0xc0u;
  R(2)+=R(14);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3)+4);
  R(5)+=R(14);
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xb8u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x6cu;
  ST32(R(14)+R(0),R(3));
  R(0)=0x68u;
  R(3)=0x8c09b8e0u;
  { c->pr=0x8c0478eeu; R(4)=(int32_t)(int16_t)LD16(R(14)+R(0)); f_8c09b8e0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x68u;
  R(3)=0x8c09b4e0u;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09b4e0(c); return; } }
}
void f_8c047920(SH4Ctx *c) {
  { R(0)=0x68u; return; }
}
void f_8c047924(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  c->t=(R(12)&R(12))==0;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(14)=0x8c0b9df0u;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  { uint32_t k=!c->t; R(8)=0xffffffffu; if(k) goto L8c04796a; }
  R(5)=R(14);
  R(6)=0x46u;
  { uint32_t tg=R(11); c->pr=0x8c04794eu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x46u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c047968u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04796a:;
  R(3)=LD32(R(12)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c047994;
  R(5)=R(14);
  R(6)=0x49u;
  { uint32_t tg=R(11); c->pr=0x8c047978u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x49u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xdu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c047992u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c047994:;
  { c->pr=0x8c047998u;  f_8c0479ae(c); }
  ST32(R(12)+20,R(0));
  R(4)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0482b2(c); return; } }
}
void f_8c0479ae(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c047a00;
  R(3)=0x8c064e90u;
  R(6)=0x5eu;
  R(5)=0x8c0b9df0u;
  { c->pr=0x8c0479c2u; R(4)=0x68u; f_8c064e90(c); }
  {  goto L8c047a0a; }
L8c047a00:;
  R(1)=0x8c0199c4u;
  R(6)=0x5eu;
  R(5)=0x8c0b9df0u;
  { c->pr=0x8c047a0au; R(4)=0x68u; f_8c0199c4(c); }
L8c047a0a:;
  R(4)=R(0);
  R(0)=0x41u;
  R(5)=0x0u;
  ST8(R(4)+R(0),R(5));
  R(0)=0x65u;
  R(3)=0x1u;
  ST32(R(4),R(5));
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  ST32(R(4)+12,R(5));
  ST32(R(4)+16,R(5));
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(5));
  ST8(R(4)+R(0),R(5));
  R(0)=0x40u;
  ST32(R(4)+48,R(5));
  ST32(R(4)+52,R(5));
  ST32(R(4)+56,R(5));
  ST32(R(4)+60,R(5));
  ST8(R(4)+R(0),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c047a3a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  c->t=(R(12)&R(12))==0;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(14)=0x8c0b9df0u;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  if(!c->t) goto L8c047a80;
  R(8)=0x85u;
  R(5)=R(14);
  R(6)=R(8);
  { uint32_t tg=R(11); c->pr=0x8c047a64u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c047a7eu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c047a80:;
  R(3)=LD32(R(12)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c047aac;
  R(8)=0x88u;
  R(5)=R(14);
  R(6)=R(8);
  { uint32_t tg=R(11); c->pr=0x8c047a90u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(3);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c047aaau; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c047aac:;
  { c->pr=0x8c047ab0u; R(4)=LD32(R(12)+20); f_8c0482d0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(12);
  R(3)=0x8c064eb8u;
  R(6)=0x8bu;
  R(5)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  R(4)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064eb8(c); return; } }
}
void f_8c047b00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(10)=0x8c0125ccu;
  R(14)=R(4);
  R(11)=0x8c0b9df0u;
  c->t=(R(14)&R(14))==0;
  R(12)=0xffu;
  R(9)=0x8c012658u;
  R(8)=0x8c0c3fa8u;
  ST32(R(15),R(5));
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c047b4a; }
  R(6)=0x9cu;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c047b2eu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x9cu;
  R(3)=0xffffffffu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c047b48u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c047b4a:;
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c047b74;
  R(6)=0x9fu;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c047b58u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x9fu;
  R(2)=0xffffffffu;
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c047b72u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c047b74:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c047b90;
  R(4)=LD32(R(14)+20);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0482b2(c); return; } }
L8c047b90:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c047c26;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c047be0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c047be0;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c047be0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c047c10;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c047c10;
  {  goto L8c047c26; }
L8c047be0:;
  { c->pr=0x8c047be4u; R(4)=LD32(R(14)+20); f_8c0482b2(c); }
  R(3)=LD32(R(14)+20);
  R(0)=0x65u;
  R(4)=R(14);
  ST8(R(3)+R(0),R(13));
  R(3)=LD32(R(14)+20);
  ST32(R(3)+48,R(13));
  R(2)=LD32(R(14)+20);
  ST32(R(2)+52,R(13));
  R(3)=LD32(R(14)+20);
  ST32(R(3)+56,R(13));
  R(2)=LD32(R(14)+20);
  ST32(R(2)+60,R(13));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0480e0(c); return; } }
L8c047c10:;
  R(3)=LD32(R(14)+20);
  R(0)=0x65u;
  ST8(R(3)+R(0),R(13));
  R(3)=LD32(R(14)+20);
  ST32(R(3)+48,R(13));
  R(2)=LD32(R(14)+20);
  ST32(R(2)+52,R(13));
  R(3)=LD32(R(14)+20);
  ST32(R(3)+56,R(13));
  R(2)=LD32(R(14)+20);
  ST32(R(2)+60,R(13));
L8c047c26:;
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
void f_8c047c40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c0b9df0u;
  R(10)=0x0u;
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(8)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c047c8c; }
  R(6)=0xdau;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c047c72u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xdau;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c047c8au; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c047c8c:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c047cb6;
  R(6)=0xddu;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c047c9cu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xddu;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c047cb4u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c047cb6:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c047cc6;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c047cc6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c047cc6;
  c->t=(int32_t)R(0)==4;
L8c047cc6:;
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
void f_8c047cda(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(6)=0x44u;
  ST32(R(15)+4,R(5));
  R(4)=LD32(R(15));
  R(3)=0x8c0685b4u;
  R(4)=LD32(R(4)+20);
  R(5)=LD32(R(5)+20);
  { R(15)+=0x8u; { f_8c0685b4(c); return; } }
}
void f_8c047cee(SH4Ctx *c) {
  R(0)=0x65u;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c047d20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c047d2e;
  R(14)=LD32(R(4)+4);
  { R(14)=LD32(R(14)+20); goto L8c047d30; }
L8c047d2e:;
  R(14)=0x0u;
L8c047d30:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c047d40;
  { c->pr=0x8c047d38u; R(4)=R(14); f_8c047cee(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(0)&0xFF;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c047d40:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c047d40(SH4Ctx *c) {
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c047d48(SH4Ctx *c) {
  R(0)=0x64u;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c047d4e(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  R(3)=0x8c0b9e04u;
  R(7)=R(15);
  R(6)=(uint32_t)(int32_t)(int16_t)R(5);
  R(2)=LD32(R(3));
  c->t=(int32_t)R(6)>=0;
  R(1)=LD32(R(3)+4);
  ST32(R(7),R(2));
  ST32(R(7)+4,R(1));
  R(2)=LD32(R(3)+8);
  ST32(R(7)+8,R(2));
  if(!c->t) goto L8c047d8a;
  R(1)=0x2u;
  c->t=(int32_t)R(6)>=(int32_t)R(1);
  if(c->t) goto L8c047d8a;
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  R(1)=R(4);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(1)+=0x44u;
  R(3)<<=2;
  R(3)+=R(1);
  R(1)=LD32(R(15)+12);
  R(0)=LD32(R(3)+4);
  R(2)=LD32(R(3));
  ST32(R(1),R(2));
  ST32(R(1)+4,R(0));
  { R(2)=LD32(R(3)+8); goto L8c047d96; }
L8c047d8a:;
  R(2)=LD32(R(7));
  R(1)=LD32(R(15)+12);
  R(3)=LD32(R(7)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(7)+8);
L8c047d96:;
  ST32(R(1)+8,R(2));
  { R(15)+=0xcu; return; }
}
void f_8c047d9c(SH4Ctx *c) {
  R(6)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(6)>=0;
  if(!c->t) goto L8c047db6;
  R(2)=0x2u;
  c->t=(int32_t)R(6)>=(int32_t)R(2);
  if(c->t) goto L8c047db6;
  R(3)=R(4);
  R(1)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)+=0x5cu;
  R(1)<<=2;
  R(1)+=R(3);
  { fp_ld(c,0,R(1)); return; }
L8c047db6:;
  c->fr[0]=0x00000000u;
  {  return; }
}
void f_8c047db6(SH4Ctx *c) {
  c->fr[0]=0x00000000u;
  {  return; }
}
void f_8c047dbc(SH4Ctx *c) {
  R(0)=0x65u;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c047dc2(SH4Ctx *c) {
  R(0)=0x64u;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c047e00(SH4Ctx *c) {
  R(7)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(7)>=0;
  if(!c->t) goto L8c047e28;
  R(2)=0x2u;
  c->t=(int32_t)R(7)>=(int32_t)R(2);
  if(c->t) goto L8c047e28;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(2)=R(4);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(3)=LD32(R(6));
  R(2)+=0x44u;
  R(1)=LD32(R(6)+4);
  R(5)<<=2;
  R(5)+=R(2);
  ST32(R(5),R(3));
  ST32(R(5)+4,R(1));
  R(3)=LD32(R(6)+8);
  ST32(R(5)+8,R(3));
L8c047e28:;
  {  return; }
}
void f_8c047e2c(SH4Ctx *c) {
  R(6)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(6)>=0;
  if(!c->t) goto L8c047e44;
  R(2)=0x2u;
  c->t=(int32_t)R(6)>=(int32_t)R(2);
  if(c->t) goto L8c047e44;
  R(2)=R(4);
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(2)+=0x5cu;
  R(5)<<=2;
  R(5)+=R(2);
  fp_st(c,4,R(5));
L8c047e44:;
  {  return; }
}
void f_8c047e48(SH4Ctx *c) {
  R(3)=LD32(R(5)+4);
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c047e86;
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c047e66;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c047e6e;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c047e76;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c047e7e;
  {  goto L8c047e86; }
L8c047e66:;
  R(0)=LD32(R(5)+4);
  R(0)=LD32(R(0)+20);
  { R(0)=LD32(R(0)); return; }
L8c047e6e:;
  R(0)=LD32(R(5)+4);
  R(0)=LD32(R(0)+20);
  { R(0)=LD32(R(0)+4); return; }
L8c047e76:;
  R(0)=LD32(R(5)+4);
  R(0)=LD32(R(0)+20);
  { R(0)=LD32(R(0)+8); return; }
L8c047e7e:;
  R(0)=LD32(R(5)+4);
  R(0)=LD32(R(0)+20);
  { R(0)=LD32(R(0)+12); return; }
L8c047e86:;
  R(0)=0x0u;
  {  return; }
}
void f_8c047e8c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(5)&R(5))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c047e9a;
  R(14)=LD32(R(5)+4);
  { R(14)=LD32(R(14)+20); goto L8c047e9c; }
L8c047e9a:;
  R(14)=0x0u;
L8c047e9c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c047eaa;
  { c->pr=0x8c047ea4u; R(5)=R(14); f_8c047eb2(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c047eaa:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c047eb2(SH4Ctx *c) {
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c047ec8;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c047ecc;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c047ed0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c047ed4;
  {  goto L8c047ed8; }
L8c047ec8:;
  { R(0)=LD32(R(5)+16); return; }
L8c047ecc:;
  { R(0)=LD32(R(5)+20); return; }
L8c047ed0:;
  { R(0)=LD32(R(5)+24); return; }
L8c047ed4:;
  { R(0)=LD32(R(5)+28); return; }
L8c047ed8:;
  R(0)=0x0u;
  {  return; }
}
void f_8c047ede(SH4Ctx *c) {
  R(0)=0x41u;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c047ee4(SH4Ctx *c) {
  R(0)=0x41u;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c047eea(SH4Ctx *c) {
  R(0)=0x42u;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c047ef0(SH4Ctx *c) {
  R(0)=0x42u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)&=0x1u; return; }
}
void f_8c047ef8(SH4Ctx *c) {
  R(0)=0x42u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)&=0x2u; return; }
}
void f_8c047f00(SH4Ctx *c) {
  R(0)=0x42u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)&=0x4u; return; }
}
void f_8c047f08(SH4Ctx *c) {
  R(0)=0x42u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)&=0x10u; return; }
}
void f_8c047f10(SH4Ctx *c) {
  R(0)=0x42u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)&=0x8u; return; }
}
void f_8c047f18(SH4Ctx *c) {
  R(0)=0x42u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)&=0x20u; return; }
}
void f_8c047f20(SH4Ctx *c) {
  R(0)=0x42u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)&=0x40u; return; }
}
void f_8c047f28(SH4Ctx *c) {
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c047f38;
  R(0)=0x42u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x1u;
  { R(2)|=R(3); goto L8c047f40; }
L8c047f38:;
  R(0)=0x42u;
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
L8c047f40:;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c047f60(SH4Ctx *c) {
  R(0)=LD32(R(15)+R(0));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c047f90;
  R(0)=0x42u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x2u;
  { R(2)|=R(3); goto L8c047f98; }
L8c047f90:;
  R(0)=0x42u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
L8c047f98:;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c047f80(SH4Ctx *c) {
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c047f90;
  R(0)=0x42u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x2u;
  { R(2)|=R(3); goto L8c047f98; }
L8c047f90:;
  R(0)=0x42u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
L8c047f98:;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c047f9c(SH4Ctx *c) {
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c047fac;
  R(0)=0x42u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x4u;
  { R(2)|=R(3); goto L8c047fb4; }
L8c047fac:;
  R(0)=0x42u;
  R(3)=0xfbu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
L8c047fb4:;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c047fb8(SH4Ctx *c) {
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c048000;
  R(0)=0x42u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x8u;
  { R(2)|=R(3); goto L8c048008; }
L8c048000:;
  R(0)=0x42u;
  R(3)=0xf7u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
L8c048008:;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c048000(SH4Ctx *c) {
  R(0)=0x42u;
  R(3)=0xf7u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c04800c(SH4Ctx *c) {
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c04801c;
  R(0)=0x42u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x20u;
  { R(2)|=R(3); goto L8c048024; }
L8c04801c:;
  R(0)=0x42u;
  R(3)=0xdfu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
L8c048024:;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c048028(SH4Ctx *c) {
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c048038;
  R(0)=0x42u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x40u;
  { R(2)|=R(3); goto L8c048042; }
L8c048038:;
  R(0)=0x42u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=R(0);
  R(3)+=0x7du;
  R(2)&=R(3);
L8c048042:;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c048060(SH4Ctx *c) {
  c->macl=R(0)*R(15);
  sh4_mac_l(c,R(0),R(13));R(0)+=4;R(13)+=4;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  { f_8c048080(c); return; }
}
void f_8c048080(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04808a;
  R(0)=LD32(R(4)+4);
  { R(4)=LD32(R(0)+20); goto L8c04808c; }
L8c04808a:;
  R(4)=0x0u;
L8c04808c:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04809a;
  R(0)=0x42u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  { R(0)&=0x10u; return; }
L8c04809a:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0480a0(SH4Ctx *c) {
  R(0)=0x40u;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c0480a6(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0480b2;
  R(0)=0x40u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)=R(0)&0xFF; return; }
L8c0480b2:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0480b8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c0480c6;
  R(14)=LD32(R(4)+4);
  { R(14)=LD32(R(14)+20); goto L8c0480c8; }
L8c0480c6:;
  R(14)=0x0u;
L8c0480c8:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0480d8;
  { c->pr=0x8c0480d0u; R(4)=R(14); f_8c0480a6(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(0)&0xFF;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0480d8:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0480e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c048128;
  R(14)=LD32(R(4)+20);
  R(3)=LD32(R(4));
  R(2)=LD32(R(14)+16);
  R(12)=0x8c058c1au;
  R(4)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)=LD32(R(4)+20); if(k) goto L8c048104; }
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c048104u; R(4)=LD32(R(14)+16); sh4_call(c,tg); }
L8c048104:;
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c048110;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c048110u; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
L8c048110:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04811c;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c04811cu; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
L8c04811c:;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c048128;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c048128u; R(4)=LD32(R(14)+28); sh4_call(c,tg); }
L8c048128:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c048160(SH4Ctx *c) {
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c048176;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c04817a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04817e;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c048182;
  {  goto L8c048184; }
L8c048176:;
  { ST32(R(5)+32,R(6)); goto L8c048184; }
L8c04817a:;
  { ST32(R(5)+40,R(6)); goto L8c048184; }
L8c04817e:;
  { ST32(R(5)+36,R(6)); goto L8c048184; }
L8c048182:;
  ST32(R(5)+44,R(6));
L8c048184:;
  {  return; }
}
void f_8c048188(SH4Ctx *c) {
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c04819e;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0481a2;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0481a6;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0481aa;
  {  goto L8c0481ac; }
L8c04819e:;
  { R(0)=LD32(R(5)+32); return; }
L8c0481a2:;
  { R(0)=LD32(R(5)+40); return; }
L8c0481a6:;
  { R(0)=LD32(R(5)+36); return; }
L8c0481aa:;
  R(0)=LD32(R(5)+44);
L8c0481ac:;
  {  return; }
}
void f_8c0481b0(SH4Ctx *c) {
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0481c6;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0481ca;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0481ce;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0481d2;
  {  goto L8c0481d4; }
L8c0481c6:;
  { R(0)=LD32(R(5)+48); return; }
L8c0481ca:;
  { R(0)=LD32(R(5)+60); return; }
L8c0481ce:;
  { R(0)=LD32(R(5)+52); return; }
L8c0481d2:;
  R(0)=LD32(R(5)+56);
L8c0481d4:;
  {  return; }
}
void f_8c0481d8(SH4Ctx *c) {
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0481ee;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0481f2;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0481f6;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0481fa;
  {  goto L8c0481fc; }
L8c0481ee:;
  { ST32(R(5)+48,R(6)); goto L8c0481fc; }
L8c0481f2:;
  { ST32(R(5)+60,R(6)); goto L8c0481fc; }
L8c0481f6:;
  { ST32(R(5)+52,R(6)); goto L8c0481fc; }
L8c0481fa:;
  ST32(R(5)+56,R(6));
L8c0481fc:;
  {  return; }
}
void f_8c048200(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(7);
  ST8(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST8(R(15)+8,R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=R(0)>>31;R(0)<<=1;
  ST16(R(15)+12,R(0));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c04821au; R(4)=(int32_t)(int8_t)LD8(R(15)); f_8c0481b0(c); }
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(14)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=0x3u; if(k) goto L8c048236; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04823e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c048248;
  {  goto L8c048254; }
L8c048236:;
  R(4)=sh4_shad(R(4),R(14));
  R(4)=~R(4);
  { R(6)&=R(4); goto L8c048254; }
L8c04823e:;
  R(4)=sh4_shad(R(4),R(14));
  R(4)=~R(4);
  R(6)&=R(4);
  { R(2)=0x1u; goto L8c048250; }
L8c048248:;
  R(4)=sh4_shad(R(4),R(14));
  R(4)=~R(4);
  R(2)=0x2u;
  R(6)&=R(4);
L8c048250:;
  R(2)=sh4_shad(R(2),R(14));
  R(6)|=R(2);
L8c048254:;
  R(4)=(int32_t)(int8_t)LD8(R(15));
  R(5)=LD32(R(15)+4);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0481d8(c); return; } }
}
void f_8c048260(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c048268u; ST16(R(15),R(6)); f_8c0481b0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c048290;
  R(6)=(int32_t)(int16_t)LD16(R(15));
  R(3)=0x3u;
  c->t=R(6)>>31;R(6)<<=1;
  R(5)=(uint32_t)(int32_t)(int16_t)R(6);
  R(3)=sh4_shad(R(3),R(5));
  R(5)=0u-R(5);
  R(4)&=R(3);
  R(4)=sh4_shld(R(4),R(5));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c048290;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c048298;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0482a0;
  {  goto L8c0482a8; }
L8c048290:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c048298:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c0482a0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x2u; return; }
L8c0482a8:;
  R(0)=0x3u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0482b2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05eaecu;
  R(5)=0x13u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0482beu; R(4)+=0x42u; f_8c05eaec(c); }
  R(4)=LD32(R(15));
  R(5)=0x13u;
  R(4)+=0x40u;
  R(15)+=0x4u;
  R(3)=0x8c05eaecu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c05eaec(c); return; } }
}
void f_8c0482d0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05ec74u;
  R(5)=0x13u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0482dcu; R(4)+=0x42u; f_8c05ec74(c); }
  R(4)=LD32(R(15));
  R(5)=0x13u;
  R(4)+=0x40u;
  R(15)+=0x4u;
  R(3)=0x8c05ec74u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c05ec74(c); return; } }
}
void f_8c048336(SH4Ctx *c) {
  R(2)=0xffffc000u;
  R(0)=0x8c0483a8u;
  fp_ld(c,2,R(0));
  R(2)+=R(5);
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,0,3);
  fp_arith(c,3,0,2);
  {  return; }
}
void f_8c04834a(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(1)=(uint32_t)v;}
  R(7)=R(4);
  R(6)=0x21fcu;
  R(3)=(uint32_t)(int32_t)(int16_t)R(1);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c048366; }
  R(2)=(uint32_t)(int32_t)(int16_t)R(1);
  c->fpul=R(2);
  R(0)=0x8c0483a4u;
  fp_float(c,3);
  { fp_ld(c,2,R(0)); goto L8c048372; }
L8c048366:;
  R(2)=0xffffc000u;
  R(0)=0x8c0483a8u;
  fp_ld(c,2,R(0));
  R(3)+=R(2);
  c->fpul=R(3);
  fp_float(c,3);
L8c048372:;
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  fp_st(c,4,R(7));
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(1)=(uint32_t)v;}
  R(3)=(uint32_t)(int32_t)(int16_t)R(1);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c0483c0; }
  R(2)=(uint32_t)(int32_t)(int16_t)R(1);
  c->fpul=R(2);
  R(0)=0x8c0483a4u;
  fp_float(c,3);
  { fp_ld(c,2,R(0)); goto L8c0483cc; }
L8c0483c0:;
  R(2)=0xffffc000u;
  R(0)=0x8c048444u;
  fp_ld(c,2,R(0));
  R(3)+=R(2);
  c->fpul=R(3);
  fp_float(c,3);
L8c0483cc:;
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  R(0)=0x4u;
  fp_st(c,4,R(0)+R(7));
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(1)=(uint32_t)v;}
  R(3)=(uint32_t)(int32_t)(int16_t)R(1);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c0483ea; }
  R(2)=(uint32_t)(int32_t)(int16_t)R(1);
  c->fpul=R(2);
  R(0)=0x8c048448u;
  fp_float(c,3);
  { fp_ld(c,2,R(0)); goto L8c0483f6; }
L8c0483ea:;
  R(2)=0xffffc000u;
  R(0)=0x8c048444u;
  fp_ld(c,2,R(0));
  R(3)+=R(2);
  c->fpul=R(3);
  fp_float(c,3);
L8c0483f6:;
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(7));
  R(7)=R(4);
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(1)=(uint32_t)v;}
  R(7)+=0x10u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(1);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c048418; }
  R(2)=(uint32_t)(int32_t)(int16_t)R(1);
  c->fpul=R(2);
  R(0)=0x8c048448u;
  fp_float(c,3);
  { fp_ld(c,2,R(0)); goto L8c048424; }
L8c048418:;
  R(2)=0xffffc000u;
  R(0)=0x8c048444u;
  fp_ld(c,2,R(0));
  R(3)+=R(2);
  c->fpul=R(3);
  fp_float(c,3);
L8c048424:;
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  fp_st(c,4,R(7));
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(1)=(uint32_t)v;}
  R(3)=(uint32_t)(int32_t)(int16_t)R(1);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c048460; }
  R(2)=(uint32_t)(int32_t)(int16_t)R(1);
  c->fpul=R(2);
  R(0)=0x8c048448u;
  fp_float(c,3);
  { fp_ld(c,2,R(0)); goto L8c04846c; }
L8c048460:;
  R(2)=0xffffc000u;
  R(0)=0x8c0484e4u;
  fp_ld(c,2,R(0));
  R(3)+=R(2);
  c->fpul=R(3);
  fp_float(c,3);
L8c04846c:;
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  R(0)=0x4u;
  fp_st(c,4,R(0)+R(7));
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(1)=(uint32_t)v;}
  R(3)=(uint32_t)(int32_t)(int16_t)R(1);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c04848a; }
  R(2)=(uint32_t)(int32_t)(int16_t)R(1);
  c->fpul=R(2);
  R(0)=0x8c0484e8u;
  fp_float(c,3);
  { fp_ld(c,2,R(0)); goto L8c048496; }
L8c04848a:;
  R(2)=0xffffc000u;
  R(0)=0x8c0484e4u;
  fp_ld(c,2,R(0));
  R(3)+=R(2);
  c->fpul=R(3);
  fp_float(c,3);
L8c048496:;
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  R(0)=0x8u;
  R(4)+=0x20u;
  fp_st(c,4,R(0)+R(7));
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(7)=(uint32_t)v;}
  R(3)=(uint32_t)(int32_t)(int16_t)R(7);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c0484b6; }
  R(2)=(uint32_t)(int32_t)(int16_t)R(7);
  c->fpul=R(2);
  R(0)=0x8c0484e8u;
  fp_float(c,3);
  { fp_ld(c,2,R(0)); goto L8c0484c2; }
L8c0484b6:;
  R(2)=0xffffc000u;
  R(0)=0x8c0484e4u;
  fp_ld(c,2,R(0));
  R(3)+=R(2);
  c->fpul=R(3);
  fp_float(c,3);
L8c0484c2:;
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  fp_st(c,4,R(4));
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(7)=(uint32_t)v;}
  R(3)=(uint32_t)(int32_t)(int16_t)R(7);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c048500; }
  R(2)=(uint32_t)(int32_t)(int16_t)R(7);
  c->fpul=R(2);
  R(0)=0x8c0484e8u;
  fp_float(c,3);
  { fp_ld(c,2,R(0)); goto L8c04850c; }
L8c048500:;
  R(2)=0xffffc000u;
  R(0)=0x8c048544u;
  fp_ld(c,2,R(0));
  R(3)+=R(2);
  c->fpul=R(3);
  fp_float(c,3);
L8c04850c:;
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  R(0)=0x4u;
  fp_st(c,4,R(0)+R(4));
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(7)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(7)>=(int32_t)R(6);
  if(c->t) goto L8c048528;
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  c->fpul=R(3);
  R(0)=0x8c048548u;
  fp_float(c,3);
  { fp_ld(c,2,R(0)); goto L8c048534; }
L8c048528:;
  R(3)=0xffffc000u;
  R(0)=0x8c048544u;
  fp_ld(c,2,R(0));
  R(3)+=R(7);
  c->fpul=R(3);
  fp_float(c,3);
L8c048534:;
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
  { R(15)+=0x4u; return; }
}
void f_8c048560(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  c->fr[3]=0x00000000u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,2,R(14));
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; R(13)=R(4); if(k) goto L8c04858a; }
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c04858a;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c04858a;
  R(2)=0x8c05e630u;
  { c->pr=0x8c04858au; R(4)=R(14); f_8c05e630(c); }
L8c04858a:;
  R(0)=0x10u;
  fp_ld(c,4,R(14));
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x20u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x24u;
  fp_mov(c,0,5);
  fp_fsrra(c,3);
  fp_ld(c,7,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,4,3);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x18u;
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_ld(c,7,R(0)+R(14));
  fp_fsrra(c,3);
  fp_mov(c,5,3);
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_mov(c,0,6);
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,6);
  fp_mov(c,0,8);
  fp_fmac(c,3,8);
  fp_fsrra(c,3);
  fp_mov(c,6,3);
  fp_ld(c,3,R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(13));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,5);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,6);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_arith(c,2,3,5);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,6);
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_arith(c,2,3,5);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_arith(c,2,3,6);
  fp_st(c,3,R(0)+R(13));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c048636(SH4Ctx *c) {
  R(7)=R(5);
  R(5)=R(6);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  R(0)=0x9u;
  R(6)=0x0u;
L8c048640:;
  R(2)=(int32_t)(int16_t)LD16(R(5));
  R(6)+=0x3u;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(3)=(uint32_t)v;}
  c->t=(int32_t)R(6)>=(int32_t)R(0);
  R(2)+=R(3);
  ST16(R(5),R(2));
  R(5)+=0x2u;
  R(2)=(int32_t)(int16_t)LD16(R(5));
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(3)=(uint32_t)v;}
  R(2)+=R(3);
  ST16(R(5),R(2));
  R(5)+=0x2u;
  R(2)=(int32_t)(int16_t)LD16(R(5));
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(3)=(uint32_t)v;}
  R(2)+=R(3);
  ST16(R(5),R(2));
  { uint32_t k=!c->t; R(5)+=0x2u; if(k) goto L8c048640; }
  R(5)=LD32(R(15));
  { R(15)+=0x4u; { f_8c04834a(c); return; } }
}
void f_8c04866a(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(0)=0x8c0486c4u;
  fp_ld(c,4,R(0));
  c->fpul=R(3);
  fp_ld(c,2,R(6));
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_arith(c,0,2,3);
  fp_st(c,2,R(4));
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  R(3)=R(0);
  c->fpul=R(3);
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(6));
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=(int32_t)(int8_t)LD8(R(5)+2);
  R(3)=R(0);
  c->fpul=R(3);
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(6));
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(0)+R(4)); return; }
}
void f_8c0486e0(SH4Ctx *c) {
  R(3)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0486fa;
  R(4)=0x1f4000u;
  R(2)=0x8c064e90u;
  R(6)=0xfbu;
  R(5)=0x8c0b9e34u;
  { c->pr=0x8c0486f6u;  f_8c064e90(c); }
  {  goto L8c048706; }
L8c0486fa:;
  R(4)=0x1f4000u;
  R(1)=0x8c0199c4u;
  R(6)=0xfbu;
  R(5)=0x8c0b9e34u;
  { c->pr=0x8c048706u;  f_8c0199c4(c); }
L8c048706:;
  R(1)=0x8c0c59a8u;
  R(3)=R(0);
  R(2)=0x8c2d0064u;
  R(3)=0x0u;
  ST32(R(1),R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { ST8(R(2),R(3)); return; }
}
void f_8c048716(SH4Ctx *c) {
  R(1)=0x8c0c59a8u;
  R(4)=0x0u;
  R(0)=0x8c0c59acu;
  R(2)=LD32(R(1));
  R(3)=0x8c0c59b4u;
  ST32(R(0),R(2));
  R(0)=0x8c123b74u;
  R(2)=0x8c0c59b8u;
  ST32(R(3),R(4));
  R(3)=0x8c2d0044u;
  ST32(R(2),R(4));
  R(1)=LD32(R(0));
  { ST32(R(3),R(1)); return; }
}
void f_8c048780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=0x1u;
  R(3)=0x8c0c59ccu;
  R(2)=0x2u;
  R(0)=0x8c0c59e0u;
  c->t=(R(4)&R(4))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST16(R(3),R(2));
  ST32(R(0),R(1));
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0487b0; }
  R(2)=0x8c0c59a8u;
  R(3)=0x8c0c59acu;
  R(1)=LD32(R(2));
  R(0)=0x8c0c59b4u;
  ST32(R(3),R(1));
  R(1)=0x8c123b74u;
  R(3)=0x8c0c59b8u;
  ST32(R(0),R(14));
  R(0)=0x8c2d0044u;
  ST32(R(3),R(14));
  R(2)=LD32(R(1));
  { ST32(R(0),R(2)); goto L8c0487b4; }
L8c0487b0:;
  R(2)=0x8c0c59d0u;
  ST32(R(2),R(4));
L8c0487b4:;
  R(3)=0x8c049948u;
  { c->pr=0x8c0487bau;  f_8c049948(c); }
  R(3)=0x8c2d004cu;
  R(2)=0x8c2d0050u;
  R(1)=0x8c2d0048u;
  ST32(R(1),R(14));
  ST32(R(3),R(14));
  ST32(R(2),R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0487cc(SH4Ctx *c) {
  R(1)=0x8c0c59d8u;
  R(3)=0x0u;
  { ST16(R(1),R(3)); return; }
}
void f_8c048820(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff79cu;
  R(15)+=R(0);
  R(3)=0x8c03382eu;
  ST32(R(15),R(4));
  { c->pr=0x8c048836u; R(5)=0x5cu; f_8c03382e(c); }
  R(4)=R(0);
  R(2)=0x8c09c4d4u;
  R(4)+=0x1u;
  R(0)=R(15);
  R(1)=R(4);
  { c->pr=0x8c048844u; R(0)+=0x4u; f_8c09c4d4(c); }
  R(3)=0x0u;
  R(6)=R(15);
  ST8(R(4),R(3));
  R(4)=R(15);
  R(5)=LD32(R(15));
  R(6)+=0x24u;
  R(3)=0x8c0128beu;
  { c->pr=0x8c048856u; R(4)+=0x4u; f_8c0128be(c); }
  R(1)=0x8c0c758cu;
  R(0)=0x85cu;
  R(2)=LD32(R(1));
  R(4)=LD32(R(15)+R(0));
  R(13)=0x7ffu;
  c->t=(R(2)&R(2))==0;
  R(3)=0xfffff800u;
  R(13)+=R(4);
  { uint32_t k=c->t; R(13)&=R(3); if(k) goto L8c04887a; }
  R(2)=0x8c064e90u;
  R(4)=R(13);
  R(5)=0x8c0b9e34u;
  R(6)=0x17du;
  { c->pr=0x8c048876u; R(4)+=0x20u; f_8c064e90(c); }
  {  goto L8c048886; }
L8c04887a:;
  R(2)=0x8c0199c4u;
  R(4)=R(13);
  R(5)=0x8c0b9e34u;
  R(6)=0x17du;
  { c->pr=0x8c048886u; R(4)+=0x20u; f_8c0199c4(c); }
L8c048886:;
  R(14)=R(0);
  R(3)=0xffffffe0u;
  R(14)+=0x1fu;
  R(2)=0x8c012b02u;
  R(14)&=R(3);
  R(4)=R(0);
  R(4)=R(15);
  R(6)=R(14);
  R(5)=R(13);
  { c->pr=0x8c04889cu; R(4)+=0x24u; f_8c012b02(c); }
  R(11)=0x8c012b60u;
  R(12)=0x1u;
  R(13)=0x0u;
L8c0488a2:;
  R(4)=R(15);
  { uint32_t tg=R(11); c->pr=0x8c0488a8u; R(4)+=0x24u; sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0488ae;
  R(13)=R(12);
L8c0488ae:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0488a2;
  R(3)=0x8c012accu;
  R(4)=R(15);
  { c->pr=0x8c0488bau; R(4)+=0x24u; f_8c012acc(c); }
  R(3)=0x8c0c59b0u;
  R(2)=LD32(R(14));
  R(1)=0x8c0c59c1u;
  ST32(R(3),R(2));
  R(2)=0x8c0c59bcu;
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  R(3)=0x8c0c59c0u;
  ST32(R(2),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+9);
  R(2)=0x8c0c59a8u;
  ST8(R(3),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+10);
  R(14)+=0xcu;
  ST8(R(1),R(0));
  R(1)=0x864u;
  ST32(R(2),R(14));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c048960(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c048966u;  f_8c048820(c); }
  { c->pr=0x8c04896au; R(4)=0x0u; f_8c048780(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0c59dau;
  R(3)=0x1u;
  { ST16(R(2),R(3)); return; }
}
void f_8c048974(SH4Ctx *c) {
  R(0)=0x8c0c59dau;
  R(1)=0x0u;
  R(3)=0x8c044fc0u;
  ST16(R(0),R(1));
  { R(4)=0x6u; { f_8c044fc0(c); return; } }
}
void f_8c048980(SH4Ctx *c) {
  R(3)=0x8c0c59dcu;
  { ST32(R(3),R(4)); return; }
}
void f_8c048986(SH4Ctx *c) {
  R(5)=R(4);
  R(3)=0x8c068788u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2d0064u;
  { c->pr=0x8c048992u; R(6)=0x14u; f_8c068788(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c2d0077u;
  R(3)=0x0u;
  { ST8(R(2),R(3)); return; }
}
void f_8c0489c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff38u;
  R(15)+=R(0);
  R(2)=0xc6u;
  R(2)+=R(15);
  ST16(R(2),R(4));
  R(2)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(2));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0489e2;
  {  goto L8c04923a; }
L8c0489e2:;
  R(14)=0x8c0c59acu;
  R(6)=0x2u;
  R(4)=0xc6u;
  R(5)=LD32(R(14));
  R(13)=0x8c0685b4u;
  { c->pr=0x8c0489f0u; R(4)+=R(15); f_8c0685b4(c); }
  R(0)=0xc6u;
  R(3)=0x7fffu;
  R(2)=LD32(R(14));
  R(11)=0x8c0c59c4u;
  R(2)+=0x2u;
  ST32(R(14),R(2));
  R(1)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xc6u;
  R(1)&=R(3);
  ST16(R(15)+R(0),R(1));
  R(0)=R(1)&0xFFFF;
  R(12)=LD32(R(14));
  R(0)+=0xfffffffcu;
  R(1)=0x10u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c048a14;
  {  goto L8c04923a; }
L8c048a14:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c048a38u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c048a20u+R(0));  switch(tg){ case 0x8c048a58u: goto L8c048a58; case 0x8c048aa2u: goto L8c048aa2; case 0x8c048b60u: goto L8c048b60; case 0x8c048c20u: goto L8c048c20; case 0x8c048d20u: goto L8c048d20; case 0x8c048da2u: goto L8c048da2; case 0x8c048e40u: goto L8c048e40; case 0x8c048fb0u: goto L8c048fb0; case 0x8c049040u: goto L8c049040; case 0x8c049090u: goto L8c049090; case 0x8c049100u: goto L8c049100; case 0x8c049160u: goto L8c049160; case 0x8c0491a0u: goto L8c0491a0; case 0x8c049200u: goto L8c049200; default: sh4_bad_jump(c,0x8c048a1cu,tg); return; } }
L8c048a58:;
  R(11)=0xbcu;
  R(5)=R(12);
  R(6)=0xau;
  R(11)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c048a64u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(3)+=0xau;
  ST32(R(14),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(11)+9);
  R(3)=0x8c0454feu;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(11)+8);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(11)+7);
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(11)+6);
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(11)+5);
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(11)+4);
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(11)+3);
  R(4)=(int32_t)(int8_t)LD8(R(11));
  R(7)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(11)+2);
  R(6)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(11)+1);
  R(5)=R(0)&0xFF;
  { uint32_t tg=R(3); c->pr=0x8c048a9eu; R(4)=R(4)&0xFF; sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c04923a; }
L8c048aa2:;
  R(4)=0x90u;
  R(5)=R(12);
  R(6)=0x2u;
  { uint32_t tg=R(13); c->pr=0x8c048aacu; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(6)=0x1u;
  R(4)=0x8cu;
  R(3)+=0x2u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048abcu; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(6)=0x1u;
  R(4)=0x88u;
  R(2)+=0x1u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c048accu; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x90u;
  R(3)+=0x1u;
  ST32(R(14),R(3));
  R(3)=0x2cu;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(4)=LD32(R(11));
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(3);
  R(4)=LD32(R(4));
  R(0)=0xa0u;
  R(3)=c->macl;
  R(4)+=R(3);
  R(3)=LD32(R(4));
  R(2)=LD32(R(3)+4);
  R(4)=LD32(R(2));
  R(13)=LD32(R(4)+R(0));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c048af4;
  {  goto L8c04923a; }
L8c048af4:;
  R(0)=0x8cu;
  c->t=(R(13)&R(13))==0;
  R(4)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c048b0e; }
  R(14)=R(4)&0xFFFF;
  R(3)=R(14);
  R(14)<<=2;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(13);
  { R(14)=LD32(R(14)); goto L8c048b10; }
L8c048b0e:;
  R(14)=0x0u;
L8c048b10:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c048b18;
  {  goto L8c04923a; }
L8c048b18:;
  R(0)=0x88u;
  R(2)=0x10000u;
  R(4)=LD32(R(14)+48);
  R(4)|=R(2);
  ST32(R(14)+48,R(4));
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x38u;
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,4);
  { fp_st(c,4,R(0)+R(14)); goto L8c04923a; }
L8c048b60:;
  R(4)=0x84u;
  R(5)=R(12);
  R(6)=0x2u;
  { uint32_t tg=R(13); c->pr=0x8c048b6au; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(6)=0x1u;
  R(4)=0x80u;
  R(2)+=0x2u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c048b7au; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x84u;
  R(3)+=0x1u;
  ST32(R(14),R(3));
  R(3)=0x2cu;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(4)=LD32(R(11));
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(3);
  R(4)=LD32(R(4));
  R(0)=0xa0u;
  R(3)=c->macl;
  R(4)+=R(3);
  R(3)=LD32(R(4));
  R(2)=LD32(R(3)+4);
  R(4)=LD32(R(2));
  R(13)=LD32(R(4)+R(0));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c048ba2;
  {  goto L8c04923a; }
L8c048ba2:;
  R(0)=0x80u;
  c->t=(R(13)&R(13))==0;
  R(4)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c048bbc; }
  R(14)=R(4)&0xFFFF;
  R(3)=R(14);
  R(14)<<=2;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(13);
  { R(14)=LD32(R(14)); goto L8c048bbe; }
L8c048bbc:;
  R(14)=0x0u;
L8c048bbe:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c048bc6;
  {  goto L8c04923a; }
L8c048bc6:;
  R(0)=0xc6u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==6;
  { uint32_t k=!c->t; R(4)=LD32(R(14)+44); if(k) goto L8c048bd8; }
  R(2)=0xfffffff7u;
  { R(4)&=R(2); goto L8c048be4; }
L8c048bd8:;
  R(5)=LD32(R(14)+48);
  R(1)=0x8u;
  R(2)=0xfffeffffu;
  R(4)|=R(1);
  R(5)&=R(2);
  ST32(R(14)+48,R(5));
L8c048be4:;
  { ST32(R(14)+44,R(4)); goto L8c04923a; }
L8c048c20:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x2u;
  { uint32_t tg=R(13); c->pr=0x8c048c2au; R(4)+=0x7cu; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x1u;
  R(2)+=0x2u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c048c3au; R(4)+=0x78u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(6)=0xcu;
  R(4)=0xa8u;
  R(3)+=0x1u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048c4au; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0xc6u;
  R(2)=LD32(R(14));
  R(2)+=0xcu;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c048c6a;
  R(4)=0xb4u;
  R(6)=0x12u;
  R(5)=LD32(R(14));
  { uint32_t tg=R(13); c->pr=0x8c048c64u; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(2)+=0x12u;
  ST32(R(14),R(2));
L8c048c6a:;
  R(0)=0x7cu;
  R(4)=LD32(R(11));
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(3)=0x2cu;
  R(4)=LD32(R(4));
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(3);
  R(0)=0xa0u;
  R(3)=c->macl;
  R(4)+=R(3);
  R(3)=LD32(R(4));
  R(2)=LD32(R(3)+4);
  R(4)=LD32(R(2));
  R(14)=LD32(R(4)+R(0));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c048c8c;
  {  goto L8c04923a; }
L8c048c8c:;
  R(0)=0x78u;
  R(4)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c048ca6; }
  R(13)=R(4)&0xFFFF;
  R(3)=R(13);
  R(13)<<=2;
  R(13)+=R(3);
  R(13)<<=2;
  R(13)+=R(14);
  { R(13)=LD32(R(13)); goto L8c048ca8; }
L8c048ca6:;
  R(13)=0x0u;
L8c048ca8:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c048cb0;
  {  goto L8c04923a; }
L8c048cb0:;
  R(0)=0xc6u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==9;
  { uint32_t k=!c->t; R(14)=LD32(R(13)+32); if(k) goto L8c048cd0; }
  R(5)=0xb4u;
  R(4)=R(14);
  R(5)+=R(15);
  { c->pr=0x8c048cc6u; R(4)+=0x28u; f_8c04834a(c); }
  R(5)=R(14);
  R(4)=R(14);
  R(5)+=0x28u;
  { c->pr=0x8c048cd0u; R(4)+=0x4u; f_8c048560(c); }
L8c048cd0:;
  R(5)=0xa8u;
  R(4)=R(14);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c048cdcu; R(4)+=0x58u; f_8c05e6ea(c); }
  R(2)=0x8c0164d4u;
  R(3)=0x4u;
  ST32(R(14),R(3));
  { c->pr=0x8c048ce6u; R(4)=R(14); f_8c0164d4(c); }
  R(3)=0x8c064ac4u;
  { c->pr=0x8c048cecu; R(4)=R(13); f_8c064ac4(c); }
  {  goto L8c04923a; }
L8c048d20:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c048d2au; R(4)+=0x74u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(6)=0xcu;
  R(4)=0xb8u;
  R(3)+=0x4u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048d3au; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(6)=0xcu;
  R(4)=0xacu;
  R(2)+=0xcu;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c048d4au; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0xcu;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048d5au; R(4)+=0x70u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(6)=0x2u;
  R(4)=0xa0u;
  R(2)+=0x4u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c048d6au; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0x2u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048d7au; R(4)+=0x6cu; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(0)=0x70u;
  R(3)=0x8c05a3fau;
  R(2)+=0x4u;
  ST32(R(14),R(2));
  { c->pr=0x8c048d88u; R(4)=LD32(R(15)+R(0)); f_8c05a3fa(c); }
  R(7)=R(0);
  R(6)=0xacu;
  R(5)=0xb8u;
  R(0)=0x6cu;
  R(3)=0x8c022520u;
  R(6)+=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x74u;
  R(5)+=R(15);
  { c->pr=0x8c048d9eu; R(4)=LD32(R(15)+R(0)); f_8c022520(c); }
  {  goto L8c04923a; }
L8c048da2:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x2u;
  { uint32_t tg=R(13); c->pr=0x8c048dacu; R(4)+=0x68u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0x2u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048dbcu; R(4)+=0x64u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(6)=0x4u;
  R(12)=0xc0u;
  R(2)+=0x4u;
  R(5)=R(2);
  ST32(R(14),R(2));
  R(12)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c048dceu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(2)=0x8c061b70u;
  R(3)+=0x4u;
  ST32(R(14),R(3));
  { c->pr=0x8c048ddau; R(4)=LD32(R(12)); f_8c061b70(c); }
  ST32(R(12),R(0));
  R(0)=0x68u;
  R(1)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(2)=0x2cu;
  R(3)=LD32(R(11));
  R(0)=0x68u;
  c->macl=(uint32_t)((int32_t)(int16_t)R(1)*(int32_t)(int16_t)R(2));
  R(3)=LD32(R(3));
  R(7)=0x0u;
  R(6)=R(7);
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(12));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+R(0));
  R(3)=0x8c017f2cu;
  { c->pr=0x8c048e00u; R(4)=LD32(R(2)); f_8c017f2c(c); }
  { R(15)+=0x4u; goto L8c04923a; }
L8c048e40:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c048e4au; R(4)+=0x60u; sh4_call(c,tg); }
  R(0)=0x60u;
  R(3)=LD32(R(14));
  R(3)+=0x1u;
  ST32(R(14),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(5)=R(3); if(k) goto L8c048e7c; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c048ebe;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c048f00;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c048f42;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c048e70;
  {  goto L8c048f84; }
L8c048e70:;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c048e78;
  {  goto L8c048f9a; }
L8c048e78:;
  {  goto L8c04923a; }
L8c048e7c:;
  R(4)=R(15);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c048e84u; R(4)+=0x5cu; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0x4u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048e94u; R(4)+=0x58u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(2)+=0x4u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c048ea4u; R(4)+=0x54u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x54u;
  R(3)+=0x4u;
  ST32(R(14),R(3));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(3)=0x8c03aa9au;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  { c->pr=0x8c048ebau; R(4)=LD32(R(15)+R(0)); f_8c03aa9a(c); }
  {  goto L8c04923a; }
L8c048ebe:;
  R(4)=0xb8u;
  R(6)=0xcu;
  { uint32_t tg=R(13); c->pr=0x8c048ec6u; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=0xb8u;
  R(2)=0x8c03ab40u;
  R(3)+=0xcu;
  ST32(R(14),R(3));
  { c->pr=0x8c048ed4u; R(4)+=R(15); f_8c03ab40(c); }
  {  goto L8c04923a; }
L8c048f00:;
  R(4)=R(15);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c048f08u; R(4)+=0xcu; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(2)+=0x4u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c048f18u; R(4)+=0x8u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0x4u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048f28u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x4u;
  R(2)=LD32(R(14));
  R(3)=0x8c03ace8u;
  R(2)+=0x4u;
  ST32(R(14),R(2));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  { c->pr=0x8c048f3eu; fp_ld(c,4,R(0)+R(15)); f_8c03ace8(c); }
  {  goto L8c04923a; }
L8c048f42:;
  R(4)=R(15);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c048f4au; R(4)+=0xcu; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0x4u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048f5au; R(4)+=0x8u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(2)+=0x4u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c048f6au; R(4)+=0x4u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x4u;
  R(3)+=0x4u;
  ST32(R(14),R(3));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  R(3)=0x8c03ad40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  { c->pr=0x8c048f80u; fp_ld(c,4,R(0)+R(15)); f_8c03ad40(c); }
  {  goto L8c04923a; }
L8c048f84:;
  R(6)=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c048f8au; R(4)=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(3)+=0x1u;
  ST32(R(14),R(3));
  R(3)=0x8c03aa7au;
  { c->pr=0x8c048f96u; R(4)=(int32_t)(int8_t)LD8(R(15)); f_8c03aa7a(c); }
  {  goto L8c04923a; }
L8c048f9a:;
  R(6)=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c048fa0u; R(4)=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(3)+=0x1u;
  ST32(R(14),R(3));
  R(3)=0x8c03aa86u;
  { c->pr=0x8c048facu; R(4)=(int32_t)(int8_t)LD8(R(15)); f_8c03aa86(c); }
  {  goto L8c04923a; }
L8c048fb0:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x2u;
  { uint32_t tg=R(13); c->pr=0x8c048fbau; R(4)+=0x50u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0x2u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c048fcau; R(4)+=0x4cu; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x1u;
  R(2)+=0x4u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c048fdau; R(4)+=0x48u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x50u;
  R(6)=0x1u;
  R(3)+=0x1u;
  ST32(R(14),R(3));
  R(3)=0x2cu;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x4cu;
  R(5)=LD32(R(11));
  c->macl=(uint32_t)((int32_t)(int16_t)R(2)*(int32_t)(int16_t)R(3));
  R(5)=LD32(R(5));
  R(3)=c->macl;
  R(5)+=R(3);
  R(3)=LD32(R(15)+R(0));
  R(0)=0x48u;
  R(4)=LD32(R(5));
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(4)=LD32(R(4)+48);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(6)=sh4_shad(R(6),R(3)); if(k) goto L8c049008; }
  { R(4)|=R(6); goto L8c04900c; }
L8c049008:;
  R(6)=~R(6);
  R(4)&=R(6);
L8c04900c:;
  R(6)=R(4);
  R(4)=LD32(R(5));
  { ST32(R(4)+48,R(6)); goto L8c04923a; }
L8c049040:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x2u;
  { uint32_t tg=R(13); c->pr=0x8c04904au; R(4)+=0x44u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0x2u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c04905au; R(4)+=0x10u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(0)=0x44u;
  R(3)=0x2cu;
  R(2)+=0x4u;
  ST32(R(14),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(4)=LD32(R(11));
  c->macl=(uint32_t)((int32_t)(int16_t)R(2)*(int32_t)(int16_t)R(3));
  R(4)=LD32(R(4));
  R(6)=LD32(R(15)+16);
  R(3)=c->macl;
  R(4)+=R(3);
  R(5)=LD32(R(4));
  ST32(R(5)+44,R(6));
  R(0)=LD32(R(4));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c049082;
  {  goto L8c04923a; }
L8c049082:;
  R(3)=LD32(R(4));
  R(0)=0xf8u;
  R(2)=LD32(R(3)+4);
  R(5)=LD32(R(15)+16);
  R(4)=LD32(R(2));
  { ST32(R(4)+R(0),R(5)); goto L8c04923a; }
L8c049090:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x2u;
  { uint32_t tg=R(13); c->pr=0x8c04909au; R(4)+=0x40u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(0)=0x40u;
  R(4)=R(15);
  R(6)=0x4u;
  R(2)+=0x2u;
  ST32(R(14),R(2));
  R(2)=0x2cu;
  R(1)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(3)=LD32(R(11));
  c->macl=(uint32_t)((int32_t)(int16_t)R(1)*(int32_t)(int16_t)R(2));
  R(3)=LD32(R(3));
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(15)+20,R(2));
  R(5)=LD32(R(14));
  { uint32_t tg=R(13); c->pr=0x8c0490bcu; R(4)+=0x3cu; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(6)=0x2u;
  R(4)=0x9cu;
  R(3)+=0x4u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c0490ccu; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(2)+=0x2u;
  ST32(R(14),R(2));
  R(5)=LD32(R(15)+20);
  R(4)=LD32(R(15)+60);
  R(5)=LD32(R(5));
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5));
  { ST32(R(5)+16,R(4)); goto L8c04923a; }
L8c049100:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04910au; R(4)+=0x38u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(6)=0xcu;
  R(4)=0xb8u;
  R(2)+=0x4u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c04911au; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0xcu;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c04912au; R(4)+=0x34u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(2)+=0x4u;
  R(3)=R(2);
  ST32(R(14),R(2));
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(14));
  R(3)=LD32(R(15)+52);
  R(2)+=R(3);
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c049146u; R(4)+=0x30u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x30u;
  R(5)=0xb8u;
  R(3)+=0x4u;
  ST32(R(14),R(3));
  R(5)+=R(15);
  R(3)=0x8c025562u;
  fp_ld(c,4,R(0)+R(15));
  R(6)=LD32(R(15)+20);
  { c->pr=0x8c04915cu; R(4)=LD32(R(15)+56); f_8c025562(c); }
  {  goto L8c04923a; }
L8c049160:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04916au; R(4)+=0x2cu; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(3)+=0x4u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c04917au; R(4)+=0x28u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(2)+=0x4u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c04918au; R(4)+=0x24u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x24u;
  R(3)+=0x4u;
  ST32(R(14),R(3));
  R(3)=0x8c025780u;
  R(5)=LD32(R(15)+40);
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c04919cu; R(4)=LD32(R(15)+44); f_8c025780(c); }
  {  goto L8c04923a; }
L8c0491a0:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c0491aau; R(4)+=0x20u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(6)=0x2u;
  R(4)=0x98u;
  R(3)+=0x4u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c0491bau; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  R(2)+=0x2u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c0491cau; R(4)+=0x1cu; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(3)+=0x4u;
  ST32(R(14),R(3));
  R(3)=0x8c011be8u;
  R(5)=LD32(R(15)+28);
  { c->pr=0x8c0491d8u; R(4)=LD32(R(15)+32); f_8c011be8(c); }
  {  goto L8c04923a; }
L8c049200:;
  R(4)=R(15);
  R(5)=R(12);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04920au; R(4)+=0x18u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(6)=0x2u;
  R(4)=0xa4u;
  R(3)+=0x4u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c04921au; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(6)=0x4u;
  R(4)=0x94u;
  R(2)+=0x2u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(13); c->pr=0x8c04922au; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x94u;
  R(3)+=0x4u;
  ST32(R(14),R(3));
  R(3)=0x8c012000u;
  R(5)=LD32(R(15)+R(0));
  { c->pr=0x8c04923au; R(4)=LD32(R(15)+24); f_8c012000(c); }
L8c04923a:;
  R(1)=0xc8u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04924a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(10)=0x0u;
  R(3)=0x8c0c59ccu;
  R(0)=R(10);
  ST16(R(15)+12,R(0));
  R(0)=R(10);
  ST16(R(15)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c049272; }
  {  goto L8c0493ec; }
L8c049272:;
  { c->pr=0x8c049276u; R(4)=R(13); f_8c04991e(c); }
  R(14)=0x8c0c59acu;
  R(4)=R(15);
  R(12)=0x8c0685b4u;
  R(11)=R(0);
  R(5)=LD32(R(14));
  R(6)=0x2u;
  { c->pr=0x8c049286u; R(4)+=0x8u; f_8c0685b4(c); }
  R(2)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x2u;
  R(2)+=0x2u;
  R(5)=R(2);
  ST32(R(14),R(2));
  { uint32_t tg=R(12); c->pr=0x8c049296u; R(4)+=0xcu; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(6)=0x100u;
  R(3)+=0x2u;
  ST32(R(14),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(4)=R(0);
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  R(3)&=R(6);
  c->t=R(3)==R(6);
  { uint32_t k=!c->t; R(5)=LD32(R(13)+4); if(k) goto L8c049300; }
  R(4)=LD32(R(5)+4);
  R(0)=0x25u;
  R(3)=0x4u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(6)=0x0u;
  R(5)=R(6);
  R(2)|=R(3);
  R(3)=0x8c053b54u;
  ST8(R(4)+R(0),R(2));
  { c->pr=0x8c0492c4u; R(4)=R(13); f_8c053b54(c); }
  R(0)=0x2au;
  R(2)=0x1u;
  { ST8(R(11)+R(0),R(2)); goto L8c0493ec; }
L8c049300:;
  R(6)=0x200u;
  R(2)=R(4);
  R(2)&=R(6);
  c->t=R(2)==R(6);
  if(!c->t) goto L8c049322;
  R(4)=LD32(R(5)+4);
  R(0)=0x25u;
  R(3)=0xfbu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  R(3)=0x8c054a00u;
  ST8(R(4)+R(0),R(2));
  { c->pr=0x8c04931cu; R(4)=R(13); f_8c054a00(c); }
  R(0)=0x2au;
  { ST8(R(11)+R(0),R(10)); goto L8c0493ec; }
L8c049322:;
  R(6)=0x400u;
  R(2)=R(4);
  R(2)&=R(6);
  c->t=R(2)==R(6);
  { uint32_t k=!c->t; R(5)=LD32(R(14)); if(k) goto L8c0493a0; }
  R(6)=0x1u;
  { uint32_t tg=R(12); c->pr=0x8c049334u; R(4)=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(0)=0xa0u;
  R(2)+=0x1u;
  ST32(R(14),R(2));
  R(4)=LD32(R(13)+4);
  R(4)=LD32(R(4));
  R(14)=LD32(R(4)+R(0));
  R(4)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c04935a; }
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(14);
  { R(3)=LD32(R(4)); goto L8c04935c; }
L8c04935a:;
  R(3)=0x0u;
L8c04935c:;
  R(1)=R(3);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(3)); if(k) goto L8c0493ec; }
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(6)=0x1u;
  R(3)=0x8c082920u;
  R(5)=R(5)&0xFF;
  { c->pr=0x8c049370u; R(4)=R(13); f_8c082920(c); }
  {  goto L8c0493ec; }
L8c0493a0:;
  R(6)=0x800u;
  R(4)&=R(6);
  c->t=R(4)==R(6);
  if(!c->t) goto L8c0493ec;
  R(6)=0x1u;
  { uint32_t tg=R(12); c->pr=0x8c0493aeu; R(4)=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(0)=0xa0u;
  R(2)+=0x1u;
  ST32(R(14),R(2));
  R(4)=LD32(R(13)+4);
  R(4)=LD32(R(4));
  R(14)=LD32(R(4)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(14)&R(14))==0;
  R(0)=R(0)&0xFF;
  { uint32_t k=c->t; ST16(R(15)+16,R(0)); if(k) goto L8c0493d6; }
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(14);
  { R(3)=LD32(R(0)); goto L8c0493d8; }
L8c0493d6:;
  R(3)=0x0u;
L8c0493d8:;
  R(1)=R(3);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(3)); if(k) goto L8c0493ec; }
  R(0)=(int32_t)(int16_t)LD16(R(15)+16);
  R(6)=0x0u;
  R(3)=0x8c082920u;
  R(5)=R(0);
  { c->pr=0x8c0493ecu; R(4)=R(13); f_8c082920(c); }
L8c0493ec:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c049420(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff80u;
  R(13)=R(4);
  R(4)=0x0u;
  R(3)=0x8c014ea0u;
  R(0)=R(4);
  ST16(R(15)+8,R(0));
  ST16(R(15),R(4));
  R(4)=R(15);
  { c->pr=0x8c04943cu; R(4)+=0xcu; f_8c014ea0(c); }
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0494da;
  R(14)=0x8c0c59acu;
  R(6)=0x2u;
  R(12)=0x8c0685b4u;
  R(5)=LD32(R(14));
  { c->pr=0x8c049452u; R(4)=R(15); f_8c0685b4(c); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x2u;
  R(3)+=0x2u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(12); c->pr=0x8c049462u; R(4)+=0x8u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(5)=0x100u;
  R(2)+=0x2u;
  ST32(R(14),R(2));
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c0494cc;
  R(5)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c049480u; R(4)+=0x4u; sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(4)=R(15);
  R(6)=0xcu;
  R(3)+=0x4u;
  R(5)=R(3);
  ST32(R(14),R(3));
  { uint32_t tg=R(12); c->pr=0x8c049490u; R(4)+=0x74u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(5)=R(15);
  R(3)=0x8c01638au;
  R(4)=R(15);
  R(2)+=0xcu;
  ST32(R(14),R(2));
  R(5)+=0x74u;
  { c->pr=0x8c0494a2u; R(4)+=0xcu; f_8c01638a(c); }
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(2)=R(15);
  R(2)+=0x10u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2d03b0u;
  R(3)=0x8c123cf0u;
  R(5)=LD32(R(2));
  R(1)=0x8c044650u;
  R(6)=LD32(R(3));
  { c->pr=0x8c0494bau; R(4)=LD32(R(15)+12); f_8c044650(c); }
  R(15)+=0x8u;
  R(4)=LD32(R(13)+4);
  R(0)=0x25u;
  R(3)=0x2u;
  R(4)=LD32(R(4)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  { ST8(R(4)+R(0),R(2)); goto L8c0494da; }
L8c0494cc:;
  R(5)=0x200u;
  R(4)&=R(5);
  c->t=R(4)==R(5);
  if(!c->t) goto L8c0494da;
  R(2)=0x8c052420u;
  { c->pr=0x8c0494dau; R(4)=R(13); f_8c052420(c); }
L8c0494da:;
  R(1)=0x80u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c049540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(12)=R(4);
  R(4)=0x0u;
  R(0)=R(4);
  R(3)=0x8c0c59ccu;
  R(9)=LD32(R(12)+4);
  R(9)=LD32(R(9));
  ST16(R(15)+8,R(0));
  R(0)=R(4);
  ST16(R(15)+12,R(0));
  ST16(R(15),R(4));
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c049572;
  {  goto L8c049898; }
L8c049572:;
  R(2)=0x8c0c59d0u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04957e;
  {  goto L8c049898; }
L8c04957e:;
  { c->pr=0x8c049582u; R(4)=R(12); f_8c04991e(c); }
  R(14)=0x8c0c59acu;
  R(13)=R(0);
  R(11)=0x8c0685b4u;
  R(6)=0x2u;
  R(5)=LD32(R(14));
  R(10)=LD32(R(12)+32);
  { c->pr=0x8c049592u; R(4)=R(15); f_8c0685b4(c); }
  R(4)=0x2000u;
  R(2)=LD32(R(14));
  R(2)+=0x2u;
  ST32(R(14),R(2));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(4);
  c->t=R(3)==R(4);
  { uint32_t k=!c->t; R(5)=R(2); if(k) goto L8c0495e0; }
  R(4)=R(15);
  R(6)=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c0495aeu; R(4)+=0x14u; sh4_call(c,tg); }
  R(0)=0x14u;
  R(2)=LD32(R(14));
  R(2)+=0x1u;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=R(0)&0xFF;
  { ST16(R(15)+12,R(0)); goto L8c0495ee; }
L8c0495e0:;
  R(4)=R(15);
  R(6)=0x2u;
  { uint32_t tg=R(11); c->pr=0x8c0495e8u; R(4)+=0xcu; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(2)+=0x2u;
  ST32(R(14),R(2));
L8c0495ee:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(8)=0x1u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04961e;
  R(5)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x2u;
  { uint32_t tg=R(11); c->pr=0x8c049604u; R(4)+=0x10u; sh4_call(c,tg); }
  R(4)=0x8c0c59b8u;
  R(2)=LD32(R(14));
  R(2)+=0x2u;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+16);
  R(3)=LD32(R(4));
  R(0)=R(0)&0xFFFF;
  R(3)+=R(0);
  ST32(R(4),R(3));
  R(4)=0x8c0c59b4u;
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  ST32(R(4),R(2));
L8c04961e:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x10u;
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c049642;
  R(5)=LD32(R(14));
  R(4)=R(13);
  R(6)=0xcu;
  { uint32_t tg=R(11); c->pr=0x8c049632u; R(4)+=0x8u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(5)=R(13);
  R(3)=0x8c01638au;
  R(5)+=0x8u;
  R(2)+=0xcu;
  ST32(R(14),R(2));
  { c->pr=0x8c049642u; R(4)=R(10); f_8c01638a(c); }
L8c049642:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x20u;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c049674;
  R(5)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x3u;
  { uint32_t tg=R(11); c->pr=0x8c049656u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(6)=R(13);
  R(5)=R(15);
  R(5)+=0x1cu;
  R(2)+=0x3u;
  R(4)=R(13);
  R(6)+=0x8u;
  ST32(R(14),R(2));
  { c->pr=0x8c04966au; R(4)+=0x8u; f_8c04866a(c); }
  R(2)=0x8c01638au;
  R(5)=R(13);
  R(5)+=0x8u;
  { c->pr=0x8c049674u; R(4)=R(10); f_8c01638a(c); }
L8c049674:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c0496bc;
  R(5)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x12u;
  { uint32_t tg=R(11); c->pr=0x8c049688u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(5)=R(15);
  R(5)+=0x2cu;
  R(4)=R(13);
  R(2)+=0x12u;
  ST32(R(14),R(2));
  R(6)=0x12u;
  { uint32_t tg=R(11); c->pr=0x8c04969au; R(4)+=0x14u; sh4_call(c,tg); }
  R(3)=0x8c04834au;
  R(5)=R(15);
  R(4)=R(10);
  R(5)+=0x2cu;
  { c->pr=0x8c0496a6u; R(4)+=0x28u; f_8c04834a(c); }
  R(2)=0x8c048560u;
  R(5)=R(10);
  R(4)=R(10);
  R(5)+=0x28u;
  { c->pr=0x8c0496b2u; R(4)+=0x4u; f_8c048560(c); }
  R(2)=0x8c0164d4u;
  R(3)=0x4u;
  ST32(R(10),R(3));
  { c->pr=0x8c0496bcu; R(4)=R(10); f_8c0164d4(c); }
L8c0496bc:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(4)=0x80u;
  R(3)=R(3)&0xFFFF;
  R(3)&=R(4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0496fe;
  R(5)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x9u;
  { uint32_t tg=R(11); c->pr=0x8c0496d2u; R(4)+=0x20u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(6)=R(13);
  R(5)=R(15);
  R(3)=0x8c048636u;
  R(2)+=0x9u;
  R(4)=R(10);
  R(5)+=0x20u;
  ST32(R(14),R(2));
  R(6)+=0x14u;
  { c->pr=0x8c0496e8u; R(4)+=0x28u; f_8c048636(c); }
  R(2)=0x8c048560u;
  R(5)=R(10);
  R(4)=R(10);
  R(5)+=0x28u;
  { c->pr=0x8c0496f4u; R(4)+=0x4u; f_8c048560(c); }
  R(2)=0x8c0164d4u;
  R(3)=0x4u;
  ST32(R(10),R(3));
  { c->pr=0x8c0496feu; R(4)=R(10); f_8c0164d4(c); }
L8c0496fe:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x2u;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c049760;
  R(5)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x2u;
  { uint32_t tg=R(11); c->pr=0x8c049712u; R(4)+=0x8u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(1)=0x26u;
  R(1)+=R(13);
  R(2)+=0x2u;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  { ST16(R(1),R(0)); goto L8c049766; }
L8c049760:;
  R(0)=0x26u;
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  ST16(R(15)+8,R(0));
L8c049766:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c04978a;
  R(5)=LD32(R(14));
  R(4)=R(15);
  R(6)=0x2u;
  { uint32_t tg=R(11); c->pr=0x8c04977au; R(4)+=0x4u; sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(1)=0x28u;
  R(1)+=R(13);
  R(2)+=0x2u;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  { ST16(R(1),R(0)); goto L8c049790; }
L8c04978a:;
  R(0)=0x28u;
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  ST16(R(15)+4,R(0));
L8c049790:;
  R(5)=LD32(R(12)+32);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c049798u; R(4)=LD32(R(12)+36); sh4_call(c,tg); }
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x4u;
  R(4)=R(4)&0xFFFF;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0497ac;
  R(0)=0x2u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04984c;
L8c0497ac:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(5)=LD32(R(9)+20);
  R(0)=R(0)&0xFFFF;
  R(3)=LD32(R(9)+4);
  R(0)<<=2;
  R(5)=LD32(R(5)+16);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(5)+=R(0);
  c->t=R(5)==R(3);
  if(!c->t) goto L8c0497c8;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c049820;
L8c0497c8:;
  R(2)=0x8c054c74u;
  R(6)=0x1u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  { c->pr=0x8c0497d4u; R(4)=R(12); f_8c054c74(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c054f34u;
  R(5)=R(0);
  { c->pr=0x8c0497e0u; R(4)=R(12); f_8c054f34(c); }
  {  goto L8c04984c; }
L8c049820:;
  R(10)=0x8c0c63c0u;
  R(3)=LD32(R(10));
  ST32(R(15)+24,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0xffffu;
  R(4)=R(0);
  R(0)=0x84u;
  R(4)+=R(3);
  ST16(R(9)+R(0),R(4));
  R(0)=0x2au;
  ST32(R(10),R(8));
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c049848;
  R(1)=0x8c053b54u;
  R(6)=0x0u;
  R(5)=R(6);
  { c->pr=0x8c049848u; R(4)=R(12); f_8c053b54(c); }
L8c049848:;
  R(3)=LD32(R(15)+24);
  ST32(R(10),R(3));
L8c04984c:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x8u;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c049898;
  R(5)=LD32(R(14));
  R(4)=R(13);
  R(6)=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c049860u; R(4)+=0x2bu; sh4_call(c,tg); }
  R(0)=0x2bu;
  R(2)=LD32(R(14));
  R(4)=R(12);
  R(2)+=0x1u;
  ST32(R(14),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=0x38u;
  R(2)=0xffu;
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,4);
  fp_st(c,4,R(0)+R(4));
  R(0)=0x2bu;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c04988e;
  R(0)=LD32(R(12)+44);
  R(4)=R(12);
  R(0)|=0x8u;
  R(5)=R(0);
  { ST32(R(4)+44,R(0)); goto L8c049898; }
L8c04988e:;
  R(5)=LD32(R(12)+44);
  R(3)=0xfffffff7u;
  R(4)=R(12);
  R(5)&=R(3);
  ST32(R(4)+44,R(5));
L8c049898:;
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
void f_8c0498ac(SH4Ctx *c) {
  {  return; }
}
void f_8c0498b0(SH4Ctx *c) {
  {  return; }
}
void f_8c0498e0(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0498e4(SH4Ctx *c) {
  R(2)=0x8c0c59c4u;
  R(0)=0x8c0c59c8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+4);
  { ST32(R(0),R(1)); return; }
}
void f_8c0498f0(SH4Ctx *c) {
  {  return; }
}
void f_8c0498f4(SH4Ctx *c) {
  R(3)=0x8c0c59c4u;
  R(7)=LD32(R(3));
  R(2)=LD32(R(7)+4);
  R(6)=LD32(R(7));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(5)=0x0u; if(k) { f_8c049918(c); return; } }
  { f_8c049902(c); return; }
}
void f_8c049902(SH4Ctx *c) {
L8c049902:;
  R(3)=LD32(R(6));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c04990c;
  { R(0)=R(5); return; }
L8c04990c:;
  R(2)=LD32(R(7)+4);
  R(5)+=0x1u;
  R(3)=R(5)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(6)+=0x2cu; if(k) goto L8c049902; }
  { f_8c049918(c); return; }
}
void f_8c04990c(SH4Ctx *c) {
  R(2)=LD32(R(7)+4);
  R(5)+=0x1u;
  R(3)=R(5)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(6)+=0x2cu; if(k) { f_8c049902(c); return; } }
  { f_8c049918(c); return; }
}
void f_8c049918(SH4Ctx *c) {
  R(0)=0xffffu;
  {  return; }
}
void f_8c04991e(SH4Ctx *c) {
  R(3)=0x8c0c59c4u;
  R(7)=LD32(R(3));
  R(2)=LD32(R(7)+4);
  R(5)=LD32(R(7));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c049942; }
L8c04992c:;
  R(3)=LD32(R(5));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c049936;
  { R(0)=R(5); return; }
L8c049936:;
  R(2)=LD32(R(7)+4);
  R(6)+=0x1u;
  R(3)=R(6)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(5)+=0x2cu; if(k) goto L8c04992c; }
L8c049942:;
  R(0)=0x0u;
  {  return; }
}
void f_8c049948(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(6)=0x8c0c59c4u;
  R(5)=0x0u;
  R(4)=LD32(R(6));
  ST32(R(15),R(4));
  R(3)=LD32(R(15));
  R(4)=LD32(R(4));
  R(2)=LD32(R(3)+4);
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(7)=0x1u; if(k) goto L8c049970; }
L8c04995e:;
  R(5)+=0x1u;
  R(3)=R(5)&0xFFFF;
  R(0)=0x2au;
  ST8(R(4)+R(0),R(7));
  R(2)=LD32(R(6));
  R(1)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(1);
  { uint32_t k=!c->t; R(4)+=0x2cu; if(k) goto L8c04995e; }
L8c049970:;
  { R(15)+=0x4u; return; }
}
void f_8c049974(SH4Ctx *c) {
  R(3)=0x8c123cf0u;
  { R(4)=LD32(R(3)); { f_8c0498f4(c); return; } }
}
void f_8c04997a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c058460u;
  { c->pr=0x8c049982u; R(4)=0x1u; f_8c058460(c); }
  R(4)=R(0);
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0498f4(c); return; } }
}
void f_8c0499c0(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3));
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0499d2;
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0499d6;
L8c0499d2:;
  { R(0)=0x0u; return; }
L8c0499d6:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0499d6(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c0499dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(4)=0x8c0c59d0u;
  R(12)=0x0u;
  R(5)=0x8c0c59b8u;
  R(6)=0x8c2d0044u;
  ST16(R(15),R(12));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c049a22;
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(4),R(3)); if(k) goto L8c049a0c; }
  {  goto L8c049c7a; }
L8c049a0c:;
  R(2)=0x8c0c59a8u;
  R(0)=0x8c0c59acu;
  R(1)=LD32(R(2));
  R(3)=0x8c0c59b4u;
  ST32(R(0),R(1));
  R(1)=0x8c123b74u;
  ST32(R(3),R(12));
  ST32(R(5),R(12));
  R(2)=LD32(R(1));
  { ST32(R(6),R(2)); goto L8c049c7a; }
L8c049a22:;
  R(1)=0x8c0c59b0u;
  R(3)=0x8c0c59b4u;
  R(2)=LD32(R(1));
  R(4)=LD32(R(3));
  c->t=R(4)>=R(2);
  if(c->t) goto L8c049a44;
  R(0)=0x8c0c59dcu;
  R(2)=LD32(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c049aa0;
  R(3)=0x3cu;
  c->t=R(4)>R(3);
  if(!c->t) goto L8c049aa0;
  R(2)=0x8c2d0060u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c049aa0;
L8c049a44:;
  { c->pr=0x8c049a48u;  f_8c049c90(c); }
  R(4)=0x8c2d0064u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c049a5a;
  R(3)=0x8c045b80u;
  { c->pr=0x8c049a56u; R(5)=0x0u; f_8c045b80(c); }
  R(2)=0x8c2d0064u;
  ST8(R(2),R(12));
L8c049a5a:;
  { R(0)=0x0u; goto L8c049c7c; }
L8c049aa0:;
  R(1)=0x8c123b74u;
  R(3)=LD32(R(6));
  R(2)=LD32(R(1));
  R(0)=0x8c0c59a4u;
  R(2)-=R(3);
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(14)=LD32(R(5)); if(k) goto L8c049ac4; }
  R(3)=LD32(R(15)+12);
  c->t=R(14)>R(3);
  if(!c->t) goto L8c049ac4;
  R(2)=0x8c09bf78u;
  R(4)=R(14);
  R(3)=LD32(R(15)+12);
  { c->pr=0x8c049ac4u; R(4)-=R(3); f_8c09bf78(c); }
L8c049ac4:;
  R(13)=0x8c0685b4u;
  R(10)=0x1u;
  R(11)=0x1000u;
  R(8)=0x4000u;
  R(9)=0x100u;
L8c049ace:;
  R(3)=0x8c0c59acu;
  R(6)=0x2u;
  R(5)=LD32(R(3));
  { uint32_t tg=R(13); c->pr=0x8c049ad8u; R(4)=R(15); sh4_call(c,tg); }
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(3)=0x8000u;
  R(2)=R(2)&0xFFFF;
  R(2)&=R(3);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c049aee;
  R(2)=0x8c0489c0u;
  { c->pr=0x8c049aeau; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0489c0(c); }
  {  goto L8c049c4a; }
L8c049aee:;
  R(1)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x2000u;
  R(2)=0x8c0c59acu;
  R(1)=R(1)&0xFFFF;
  R(1)&=R(0);
  R(5)=LD32(R(2));
  c->t=R(1)==R(0);
  { uint32_t k=!c->t; R(5)+=0x2u; if(k) goto L8c049b10; }
  R(4)=R(15);
  R(6)=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c049b08u; R(4)+=0x8u; sh4_call(c,tg); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  { ST16(R(15)+4,R(0)); goto L8c049b18; }
L8c049b10:;
  R(4)=R(15);
  R(6)=0x2u;
  { uint32_t tg=R(13); c->pr=0x8c049b18u; R(4)+=0x4u; sh4_call(c,tg); }
L8c049b18:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>=(int32_t)R(8);
  if(c->t) goto L8c049b80;
  { R(4)=R(12); goto L8c049b88; }
L8c049b80:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=R(10);
  R(0)-=R(8);
  ST16(R(15)+4,R(0));
L8c049b88:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(2)=0x2cu;
  R(3)=0x8c0c59c4u;
  c->t=(R(4)&R(4))==0;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(2);
  R(14)=LD32(R(3));
  R(14)=LD32(R(14));
  R(0)=c->macl;
  { uint32_t k=c->t; R(14)+=R(0); if(k) goto L8c049ba2; }
  R(1)=0x8c0646c8u;
  { c->pr=0x8c049ba2u; R(4)=LD32(R(14)); f_8c0646c8(c); }
L8c049ba2:;
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  R(3)&=R(9);
  c->t=R(3)==R(9);
  if(c->t) goto L8c049bcc;
  R(3)=0x200u;
  R(2)=0x200u;
  R(3)&=R(4);
  c->t=R(3)==R(2);
  if(c->t) goto L8c049bcc;
  R(1)=0x400u;
  R(3)=0x400u;
  R(1)&=R(4);
  c->t=R(1)==R(3);
  if(c->t) goto L8c049bcc;
  R(0)=0x800u;
  R(3)=0x800u;
  R(0)&=R(4);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c049c20;
L8c049bcc:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)=R(2)&0xFFFF;
  R(2)&=R(11);
  c->t=R(2)==R(11);
  if(!c->t) goto L8c049bde;
  { c->pr=0x8c049bdau; R(4)=LD32(R(14)); f_8c049420(c); }
  {  goto L8c049c4a; }
L8c049bde:;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+4);
  R(1)=LD32(R(3)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c049c4a;
  { c->pr=0x8c049becu; R(4)=LD32(R(14)); f_8c04924a(c); }
  {  goto L8c049c4a; }
L8c049c20:;
  R(0)=LD32(R(14));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c049c4a;
  R(5)=LD32(R(14));
  R(0)=0x25u;
  R(3)=0x4u;
  R(1)=0x8c123b6cu;
  R(5)=LD32(R(5)+4);
  R(4)=LD32(R(5)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  R(3)=0x8c04ac24u;
  ST8(R(4)+R(0),R(2));
  R(4)=LD32(R(1));
  R(5)=LD32(R(5)+4);
  R(4)+=0xffffffffu;
  ST32(R(5)+20,R(4));
  R(5)=0x0u;
  { c->pr=0x8c049c4au; R(4)=LD32(R(14)); f_8c04ac24(c); }
L8c049c4a:;
  R(0)=0x8c0c59b4u;
  R(1)=0x8c0c59b0u;
  R(3)=LD32(R(0));
  R(2)=LD32(R(1));
  c->t=R(3)>=R(2);
  if(c->t) goto L8c049c7a;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c049c64;
  {  goto L8c049ace; }
L8c049c64:;
  R(3)=0x8c0c59a4u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c049c7a;
  R(0)=0x8c0c59b8u;
  R(2)=LD32(R(15)+12);
  R(1)=LD32(R(0));
  c->t=R(1)>=R(2);
  if(c->t) goto L8c049c7a;
  {  goto L8c049ace; }
L8c049c7a:;
  R(0)=0x1u;
L8c049c7c:;
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
void f_8c049c90(SH4Ctx *c) {
  R(5)=0x8c0c59dau;
  R(4)=0x0u;
  R(3)=0x8c0c59ccu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST16(R(3),R(4));
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c049caa;
  R(1)=0x8c044fc0u;
  ST16(R(5),R(4));
  { c->pr=0x8c049caau; R(4)=0x6u; f_8c044fc0(c); }
L8c049caa:;
  R(3)=0x8c2d0048u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c049cba;
  R(2)=0x8c2d004cu;
  R(0)=0x13cu;
  R(1)=LD32(R(2));
  ST32(R(4)+R(0),R(1));
L8c049cba:;
  R(3)=0x8c2d0050u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c049cc8;
  R(1)=0x8c011be8u;
  { c->pr=0x8c049cc8u; R(5)=0x0u; f_8c011be8(c); }
L8c049cc8:;
  R(4)=0x8c0c59a8u;
  R(3)=0x8c064eb8u;
  R(6)=0x5aeu;
  R(5)=0x8c0b9e34u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c064eb8(c); return; } }
}
void f_8c049d40(SH4Ctx *c) {
  {  return; }
}
void f_8c049d48(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff6a0u;
  R(15)+=R(0);
  R(14)=0x8c2d0398u;
  R(5)=0x0u;
  R(4)=0x8c2d0078u;
  R(7)=0x28u;
  ST8(R(14),R(5));
  R(6)=R(5);
L8c049d68:;
  R(6)+=0x2u;
  ST8(R(4),R(5));
  R(3)=R(6)&0xFF;
  R(4)+=0x14u;
  c->t=(int32_t)R(3)>=(int32_t)R(7);
  ST8(R(4),R(5));
  { uint32_t k=!c->t; R(4)+=0x14u; if(k) goto L8c049d68; }
  R(13)=0x8c123b08u;
  R(10)=R(15);
  R(0)=0xc2eu;
  R(12)=R(5);
  R(8)=0x8c0b9e44u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(9)=0x8c06874cu;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(10)+=0x20u; if(k) goto L8c049e04; }
L8c049d8e:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==40;
  if(c->t) goto L8c049e04;
  R(3)=0x1eu;
  R(2)=0x2ceu;
  R(11)=R(12)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(11)*(uint32_t)(uint16_t)R(3);
  R(2)+=R(13);
  R(11)=c->macl;
  R(11)+=R(2);
  R(1)=(int32_t)(int8_t)LD8(R(11));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c049df6;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(9); c->pr=0x8c049db2u; R(4)=R(10); sh4_call(c,tg); }
  R(15)+=0x8u;
  R(5)=0x120u;
  R(3)=0x8c01297cu;
  R(5)+=R(15);
  { c->pr=0x8c049dbeu; R(4)=R(10); f_8c01297c(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c049df6;
  R(2)=0x1eu;
  R(1)=0x2ceu;
  R(3)=R(12)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->macl=(uint32_t)(uint16_t)R(3)*(uint32_t)(uint16_t)R(2);
  R(1)+=R(13);
  R(0)=R(0)&0xFF;
  R(3)=c->macl;
  R(3)+=R(1);
  R(1)=R(0);
  R(0)<<=2;
  R(0)+=R(1);
  R(1)=R(3);
  R(3)=0x8c2d0078u;
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=0x8c09c4d4u;
  { c->pr=0x8c049de8u;  f_8c09c4d4(c); }
  R(1)=(int32_t)(int8_t)LD8(R(14));
  R(4)=0x120u;
  R(3)=0x8c012accu;
  R(1)+=0x1u;
  ST8(R(14),R(1));
  { c->pr=0x8c049df6u; R(4)+=R(15); f_8c012acc(c); }
L8c049df6:;
  R(0)=0xc2eu;
  R(12)+=0x1u;
  R(2)=R(12)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c049d8e;
L8c049e04:;
  R(1)=0x960u;
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
void f_8c049e60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffcdcu;
  R(15)+=R(0);
  R(14)=0x8c2d0398u;
  R(3)=0x2u;
  R(13)=0x0u;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(9)=R(13);
  R(4)=R(4)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  { uint32_t k=c->t; R(10)=0x1u; if(k) goto L8c049e8e; }
  R(1)=0x8c2d0399u;
  ST8(R(1),R(13));
  {  goto L8c049f22; }
L8c049e8e:;
  R(12)=0x8c2d0078u;
  R(11)=R(15);
  c->t=(int32_t)R(4)>0;
  R(11)+=0x4u;
  { uint32_t k=!c->t; ST32(R(15),R(11)); if(k) goto L8c049ef8; }
  R(8)=0x8c05e964u;
L8c049e9c:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(5)=R(5)&0xFF;
  R(5)+=0xffffffffu;
  { uint32_t tg=R(8); c->pr=0x8c049ea6u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=(uint32_t)(int32_t)(int8_t)R(10);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c049ebc; }
  R(1)=0x8c2d0398u;
  R(2)=R(4)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  R(3)=R(3)&0xFF;
  R(3)+=0xffffffffu;
  c->t=R(2)==R(3);
  if(c->t) goto L8c049e9c;
L8c049ebc:;
  R(5)=R(4)&0xFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(2)=R(5);
  R(2)+=R(12);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(10)=R(13); if(k) goto L8c049eee; }
  R(3)=R(4)&0xFF;
  R(2)=0x8c09c4d4u;
  R(0)=R(3);
  R(3)<<=2;
  R(3)+=R(0);
  R(3)<<=2;
  R(3)+=R(12);
  R(1)=R(3);
  { c->pr=0x8c049ee6u; R(0)=R(11); f_8c09c4d4(c); }
  R(5)+=R(12);
  R(11)+=0x14u;
  ST8(R(5),R(13));
  R(9)+=0x1u;
L8c049eee:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(9)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c049e9c;
L8c049ef8:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)=R(12);
  R(6)=R(13);
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(5)=LD32(R(15)); if(k) goto L8c049f1e; }
L8c049f06:;
  R(3)=0x8c09c4d4u;
  R(1)=R(5);
  { c->pr=0x8c049f0eu; R(0)=R(4); f_8c09c4d4(c); }
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(6)+=0x1u;
  R(2)=R(6)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  R(4)+=0x14u;
  { uint32_t k=!c->t; R(5)+=0x14u; if(k) goto L8c049f06; }
L8c049f1e:;
  R(3)=0x8c2d0399u;
  ST8(R(3),R(13));
L8c049f22:;
  R(1)=0x324u;
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
void f_8c049f60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c0c59c4u;
  R(1)=0x8c123b74u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c2d0044u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(1));
  R(10)=0x8c044212u;
  ST32(R(0),R(2));
  R(4)=LD32(R(12));
  R(3)=LD32(R(4)+4);
  R(14)=LD32(R(4));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c049fca; }
L8c049f84:;
  R(0)=LD32(R(14));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c049fbc;
  R(4)=LD32(R(14));
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c049f98;
  { R(2)=0x0u; goto L8c049f9a; }
L8c049f98:;
  R(2)=LD32(R(4)+4);
L8c049f9a:;
  R(3)=LD32(R(2)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c049fbc;
  R(11)=LD32(R(14));
  R(0)=LD32(R(11));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c049fac;
  { R(4)=0x0u; goto L8c049fae; }
L8c049fac:;
  R(4)=LD32(R(11)+4);
L8c049fae:;
  { uint32_t tg=R(10); c->pr=0x8c049fb2u;  sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c049fbc;
  { c->pr=0x8c049fbcu; R(4)=LD32(R(14)); f_8c04924a(c); }
L8c049fbc:;
  R(3)=LD32(R(12));
  R(13)+=0x1u;
  R(2)=R(13)&0xFFFF;
  R(1)=LD32(R(3)+4);
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  { uint32_t k=!c->t; R(14)+=0x2cu; if(k) goto L8c049f84; }
L8c049fca:;
  R(3)=0x8c0c59bcu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c049fd8;
  R(2)=0x8c0489c0u;
  { c->pr=0x8c049fd8u; R(4)=R(15); f_8c0489c0(c); }
L8c049fd8:;
  R(3)=0x8c0c59c0u;
  R(14)=(int32_t)(int8_t)LD8(R(3));
  R(2)=(uint32_t)(int32_t)(int8_t)R(14);
  c->t=(int32_t)R(2)>0;
  if(!c->t) goto L8c049ff0;
L8c049fe2:;
  R(3)=0x8c0489c0u;
  { c->pr=0x8c049fe8u; R(4)=R(15); f_8c0489c0(c); }
  R(14)+=0xffffffffu;
  R(2)=(uint32_t)(int32_t)(int8_t)R(14);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c049fe2;
L8c049ff0:;
  R(2)=0x8c0c59c1u;
  R(14)=(int32_t)(int8_t)LD8(R(2));
  R(3)=(uint32_t)(int32_t)(int8_t)R(14);
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c04a008;
L8c049ffa:;
  R(3)=0x8c0489c0u;
  { c->pr=0x8c04a000u; R(4)=R(15); f_8c0489c0(c); }
  R(14)+=0xffffffffu;
  R(2)=(uint32_t)(int32_t)(int8_t)R(14);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c049ffa;
L8c04a008:;
  R(3)=0x8c0c60d0u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a030;
  R(1)=0x8c04f64eu;
  R(5)=0x0u;
  R(2)=0x8c1247d8u;
  { c->pr=0x8c04a01au; R(4)=LD32(R(2)); f_8c04f64e(c); }
  R(1)=0x8c1247d8u;
  R(7)=0x0u;
  R(2)=0x8c017f2cu;
  R(6)=R(7);
  R(3)=LD32(R(1));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2d1064u;
  R(5)=LD32(R(3));
  { c->pr=0x8c04a02eu; R(4)=0xffffffffu; f_8c017f2c(c); }
  R(15)+=0x4u;
L8c04a030:;
  R(2)=0x8c0c59e0u;
  R(3)=0x0u;
  ST32(R(2),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04a0a0(SH4Ctx *c) {
  { R(0)=0xcu; return; }
}
void f_8c04a0a4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  c->t=(R(12)&R(12))==0;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(14)=0x8c0b9e84u;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  { uint32_t k=!c->t; R(8)=0xffffffffu; if(k) goto L8c04a0ea; }
  R(5)=R(14);
  R(6)=0x3bu;
  { uint32_t tg=R(11); c->pr=0x8c04a0ceu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x3bu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c04a0e8u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04a0ea:;
  R(3)=LD32(R(12)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04a114;
  R(5)=R(14);
  R(6)=0x3eu;
  { uint32_t tg=R(11); c->pr=0x8c04a0f8u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x3eu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xdu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c04a112u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04a114:;
  { c->pr=0x8c04a118u;  f_8c04a13a(c); }
  R(3)=0x8c044212u;
  ST32(R(12)+8,R(0));
  { c->pr=0x8c04a120u; R(4)=R(12); f_8c044212(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=LD32(R(12)+8);
  R(6)=0x0u;
  R(7)=R(0);
  R(5)=R(6);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04a1bc(c); return; } }
}
void f_8c04a13a(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04a180;
  { c->pr=0x8c04a14au;  f_8c04a0a0(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a154u; R(6)=0x4au; f_8c064e90(c); }
  {  goto L8c04a18e; }
L8c04a180:;
  { c->pr=0x8c04a184u;  f_8c04a0a0(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a18eu; R(6)=0x4au; f_8c0199c4(c); }
L8c04a18e:;
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c04a1a6; }
  R(2)=0x8c064e90u;
  R(6)=0x4bu;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a1a2u; R(4)=0x1cu; f_8c064e90(c); }
  {  goto L8c04a1b0; }
L8c04a1a6:;
  R(1)=0x8c0199c4u;
  R(6)=0x4bu;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a1b0u; R(4)=0x1cu; f_8c0199c4(c); }
L8c04a1b0:;
  ST32(R(14)+4,R(0));
  R(4)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04a1bc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=R(7);
  R(13)=0x8c0c758cu;
  R(3)=R(12)&0xFF;
  ST32(R(15)+4,R(4));
  c->t=(R(3)&R(3))==0;
  ST8(R(15),R(6));
  R(14)=0x0u;
  { uint32_t k=!c->t; R(11)=0xfffffff8u; if(k) goto L8c04a1de; }
  {  goto L8c04a2c8; }
L8c04a1de:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c04a220;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04a24a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04a2a0;
  {  goto L8c04a3b2; }
L8c04a220:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a234;
  R(3)=0x8c064e90u;
  R(4)=0x174u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a230u; R(6)=0x5au; f_8c064e90(c); }
  {  goto L8c04a23e; }
L8c04a234:;
  R(2)=0x8c0199c4u;
  R(4)=0x174u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a23eu; R(6)=0x5au; f_8c0199c4(c); }
L8c04a23e:;
  R(14)=R(0);
  R(2)=LD32(R(14)+12);
  R(2)&=R(11);
  R(0)=R(2);
  { R(0)|=0x1u; goto L8c04a2c4; }
L8c04a24a:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a25e;
  R(3)=0x8c064e90u;
  R(4)=0x1fcu;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a25au; R(6)=0x5eu; f_8c064e90(c); }
  {  goto L8c04a268; }
L8c04a25e:;
  R(2)=0x8c0199c4u;
  R(4)=0x1fcu;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a268u; R(6)=0x5eu; f_8c0199c4(c); }
L8c04a268:;
  R(14)=R(0);
  R(2)=LD32(R(14)+12);
  R(2)&=R(11);
  R(0)=R(2);
  ST32(R(14)+12,R(2));
  { R(0)|=0x3u; goto L8c04a2c4; }
L8c04a2a0:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a2b4;
  R(3)=0x8c064e90u;
  R(4)=0x380u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a2b0u; R(6)=0x62u; f_8c064e90(c); }
  {  goto L8c04a2be; }
L8c04a2b4:;
  R(2)=0x8c0199c4u;
  R(4)=0x380u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a2beu; R(6)=0x62u; f_8c0199c4(c); }
L8c04a2be:;
  R(14)=R(0);
  R(0)=LD32(R(14)+12);
  R(0)|=0x7u;
L8c04a2c4:;
  { ST32(R(14)+12,R(0)); goto L8c04a3b2; }
L8c04a2c8:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c04a2da;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04a336;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04a362;
  {  goto L8c04a3b2; }
L8c04a2da:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a320;
  R(3)=0x8c064e90u;
  R(4)=0x174u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a2eau; R(6)=0x6cu; f_8c064e90(c); }
  {  goto L8c04a32a; }
L8c04a320:;
  R(2)=0x8c0199c4u;
  R(4)=0x174u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a32au; R(6)=0x6cu; f_8c0199c4(c); }
L8c04a32a:;
  R(14)=R(0);
  R(2)=LD32(R(14)+12);
  R(2)&=R(11);
  R(0)=R(2);
  { R(0)|=0x1u; goto L8c04a3b0; }
L8c04a336:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a34a;
  R(3)=0x8c064e90u;
  R(4)=0x1fcu;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a346u; R(6)=0x70u; f_8c064e90(c); }
  {  goto L8c04a354; }
L8c04a34a:;
  R(2)=0x8c0199c4u;
  R(4)=0x1fcu;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a354u; R(6)=0x70u; f_8c0199c4(c); }
L8c04a354:;
  R(14)=R(0);
  R(2)=LD32(R(14)+12);
  R(2)&=R(11);
  R(0)=R(2);
  ST32(R(14)+12,R(2));
  { R(0)|=0x3u; goto L8c04a3b0; }
L8c04a362:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a3a0;
  R(3)=0x8c064e90u;
  R(4)=0x380u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a372u; R(6)=0x74u; f_8c064e90(c); }
  {  goto L8c04a3aa; }
L8c04a3a0:;
  R(2)=0x8c0199c4u;
  R(4)=0x380u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a3aau; R(6)=0x74u; f_8c0199c4(c); }
L8c04a3aa:;
  R(14)=R(0);
  R(0)=LD32(R(14)+12);
  R(0)|=0x7u;
L8c04a3b0:;
  ST32(R(14)+12,R(0));
L8c04a3b2:;
  R(2)=R(12)&0xFF;
  R(5)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  R(4)=R(14);
  { uint32_t k=c->t; ST32(R(5),R(14)); if(k) goto L8c04a3c6; }
  R(3)=LD32(R(14)+12);
  R(2)=0x40000u;
  { R(3)|=R(2); goto L8c04a3cc; }
L8c04a3c6:;
  R(3)=LD32(R(14)+12);
  R(2)=0xfffbffffu;
  R(3)&=R(2);
L8c04a3cc:;
  ST32(R(14)+12,R(3));
  R(2)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a44a;
  R(12)=R(12)&0xFF;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c04a420;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a3f0;
  R(4)=0x16cu;
  R(3)=0x8c064e90u;
  R(6)=0x80u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a3ecu;  f_8c064e90(c); }
  {  goto L8c04a3fc; }
L8c04a3f0:;
  R(4)=0x16cu;
  R(2)=0x8c0199c4u;
  R(6)=0x80u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a3fcu;  f_8c0199c4(c); }
L8c04a3fc:;
  { R(1)=R(0); goto L8c04a44c; }
L8c04a420:;
  R(3)=LD32(R(13));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04a436;
  R(4)=0x16cu;
  R(3)=0x8c064e90u;
  R(6)=0x82u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a432u;  f_8c064e90(c); }
  {  goto L8c04a442; }
L8c04a436:;
  R(4)=0x16cu;
  R(2)=0x8c0199c4u;
  R(6)=0x82u;
  R(5)=0x8c0b9e84u;
  { c->pr=0x8c04a442u;  f_8c0199c4(c); }
L8c04a442:;
  R(2)=R(0);
  R(0)=0x170u;
  { ST32(R(14)+R(0),R(2)); goto L8c04a450; }
L8c04a44a:;
  R(1)=0x0u;
L8c04a44c:;
  R(0)=0x170u;
  ST32(R(14)+R(0),R(1));
L8c04a450:;
  R(2)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04a45e;
  R(3)=LD32(R(14)+12);
  R(2)=0x4000u;
  { R(3)|=R(2); goto L8c04a464; }
L8c04a45e:;
  R(3)=LD32(R(14)+12);
  R(2)=0xffffbfffu;
  R(3)&=R(2);
L8c04a464:;
  ST32(R(14)+12,R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04a4a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(4));
  R(5)=LD32(R(4));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; ST32(R(15),R(5)); if(k) goto L8c04a502; }
  R(2)=LD32(R(15));
  R(3)=0x40000u;
  R(1)=LD32(R(2)+12);
  R(4)=0x4000u;
  R(13)=0x8c0b9e84u;
  c->t=(R(1)&R(3))==0;
  R(14)=0x8c064eb8u;
  if(c->t) goto L8c04a4dc;
  R(0)=LD32(R(15));
  R(3)=LD32(R(0)+12);
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c04a4d6;
  R(4)=LD32(R(15));
  R(5)=R(13);
  R(3)=0x170u;
  R(6)=0x96u;
  { uint32_t tg=R(14); c->pr=0x8c04a4d6u; R(4)+=R(3); sh4_call(c,tg); }
L8c04a4d6:;
  R(6)=0x97u;
  {  goto L8c04a4f2; }
L8c04a4dc:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+12);
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c04a4f0;
  R(4)=LD32(R(15));
  R(5)=R(13);
  R(3)=0x170u;
  R(6)=0x9cu;
  { uint32_t tg=R(14); c->pr=0x8c04a4f0u; R(4)+=R(3); sh4_call(c,tg); }
L8c04a4f0:;
  R(6)=0x9du;
L8c04a4f2:;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c04a4f8u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  R(6)=0x0u;
  R(5)=R(6);
  ST32(R(4),R(6));
  ST32(R(15),R(6));
L8c04a502:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04a540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  c->t=(R(12)&R(12))==0;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(14)=0x8c0b9e84u;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  if(!c->t) goto L8c04a586;
  R(8)=0xb4u;
  R(5)=R(14);
  R(6)=R(8);
  { uint32_t tg=R(11); c->pr=0x8c04a56au; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c04a584u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04a586:;
  R(3)=LD32(R(12)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04a5b2;
  R(8)=0xb7u;
  R(5)=R(14);
  R(6)=R(8);
  { uint32_t tg=R(11); c->pr=0x8c04a596u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(3);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c04a5b0u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04a5b2:;
  { c->pr=0x8c04a5b6u; R(4)=LD32(R(12)+8); f_8c04a4a0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(12);
  R(3)=0x8c064eb8u;
  R(6)=0xbbu;
  R(5)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  R(4)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064eb8(c); return; } }
}
void f_8c04a5d2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=R(5);
  c->t=(int32_t)R(0)==6;
  ST32(R(15),R(4));
  if(c->t) goto L8c04a63c;
  R(0)=R(5);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c04a620;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04a620;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c04a620;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04a620;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c04a620;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c04a63c;
  {  goto L8c04a63c; }
L8c04a620:;
  R(4)=LD32(R(15));
  R(3)=0x8c08e6ecu;
  R(4)=LD32(R(4)+8);
  { c->pr=0x8c04a62au; R(4)=LD32(R(4)); f_8c08e6ec(c); }
  R(4)=LD32(R(15));
  R(5)=0x0u;
  R(6)=0x1cu;
  R(4)=LD32(R(4)+8);
  R(4)=LD32(R(4)+4);
  R(15)+=0x4u;
  R(3)=0x8c0686b8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0686b8(c); return; } }
L8c04a63c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04a644(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(11)=0x8c0125ccu;
  R(12)=R(4);
  R(13)=0xffu;
  c->t=(R(12)&R(12))==0;
  R(14)=0x8c0b9e84u;
  R(9)=0x8c012658u;
  R(8)=0x8c0c3fa8u;
  ST32(R(15),R(5));
  { uint32_t k=!c->t; R(10)=0x0u; if(k) goto L8c04a68e; }
  R(6)=0xe9u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c04a672u; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0xe9u;
  R(3)=0xffffffffu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c04a68cu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04a68e:;
  R(3)=LD32(R(12)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04a6b8;
  R(6)=0xecu;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c04a69cu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xecu;
  R(2)=0xffffffffu;
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c04a6b6u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04a6b8:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04a722;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04a700;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c04a722;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c04a722;
  {  goto L8c04a722; }
L8c04a700:;
  R(2)=LD32(R(12)+8);
  R(3)=LD32(R(2));
  R(2)=0x40000u;
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c04a722;
  R(4)=LD32(R(12)+8);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04a4a0(c); return; } }
L8c04a722:;
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
void f_8c04a736(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(8)=LD32(R(5)+8);
  R(9)=0x1u;
  R(14)=LD32(R(4)+8);
  R(13)=R(9);
  R(12)=LD32(R(8));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(14)); if(k) goto L8c04a75c; }
  {  goto L8c04a89c; }
L8c04a75c:;
  R(2)=0x8c044212u;
  { c->pr=0x8c04a762u;  f_8c044212(c); }
  R(5)=0x4u;
  ST8(R(15),R(0));
  R(3)=LD32(R(12)+12);
  c->t=(R(3)&R(5))==0;
  { uint32_t k=c->t; R(4)=0x2u; if(k) goto L8c04a772; }
  { R(10)=R(4); goto L8c04a77e; }
L8c04a772:;
  R(2)=LD32(R(12)+12);
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c04a77c;
  { R(10)=R(9); goto L8c04a77e; }
L8c04a77c:;
  R(10)=0x0u;
L8c04a77e:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c04a812;
  R(0)=R(10);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04a794;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04a79e;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c04a7ac;
  {  goto L8c04a7e6; }
L8c04a794:;
  R(13)=LD32(R(11)+12);
  c->t=(R(13)&R(5))==0;
  if(!c->t) goto L8c04a7a4;
  { R(13)=0x0u; goto L8c04a7e2; }
L8c04a79e:;
  R(13)=LD32(R(11)+12);
  c->t=(R(13)&R(4))==0;
  if(c->t) goto L8c04a7a8;
L8c04a7a4:;
  { R(13)=0x1u; goto L8c04a7e2; }
L8c04a7a8:;
  { R(13)=0x0u; goto L8c04a7e2; }
L8c04a7ac:;
  R(13)=LD32(R(11)+12);
  c->t=(R(13)&R(9))==0;
  if(c->t) goto L8c04a7e0;
  { R(13)=0x1u; goto L8c04a7e2; }
L8c04a7e0:;
  R(13)=0x0u;
L8c04a7e2:;
  c->t=(R(13)&R(13))==0;
  R(13)=c->t;
L8c04a7e6:;
  R(2)=LD32(R(12)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c04a7f2;
  { R(2)=0x1u; goto L8c04a7f4; }
L8c04a7f2:;
  R(2)=0x0u;
L8c04a7f4:;
  R(1)=LD32(R(11)+12);
  R(3)=0x4000u;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c04a800;
  { R(1)=0x1u; goto L8c04a802; }
L8c04a800:;
  R(1)=0x0u;
L8c04a802:;
  c->t=R(2)==R(1);
  if(c->t) goto L8c04a808;
  R(13)=R(9);
L8c04a808:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04a812;
  { c->pr=0x8c04a812u; R(4)=R(14); f_8c04a4a0(c); }
L8c04a812:;
  R(13)=R(13)&0xFF;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c04a868;
  R(6)=LD32(R(12)+12);
  R(3)=0x4000u;
  c->t=(R(6)&R(3))==0;
  { uint32_t k=c->t; R(7)=(int32_t)(int8_t)LD8(R(15)); if(k) goto L8c04a860; }
  { R(6)=0x1u; goto L8c04a862; }
L8c04a860:;
  R(6)=0x0u;
L8c04a862:;
  R(5)=R(10);
  { c->pr=0x8c04a868u; R(4)=R(14); f_8c04a1bc(c); }
L8c04a868:;
  R(3)=0x8c08eb02u;
  R(5)=LD32(R(8));
  { c->pr=0x8c04a870u; R(4)=LD32(R(14)); f_8c08eb02(c); }
  R(2)=0x8c0685b4u;
  R(6)=0x1cu;
  R(5)=LD32(R(8)+4);
  { c->pr=0x8c04a87au; R(4)=LD32(R(14)+4); f_8c0685b4(c); }
  R(3)=LD32(R(8)+8);
  ST32(R(14)+8,R(3));
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(14)); if(k) goto L8c04a890; }
  R(2)=LD32(R(4)+12);
  R(3)=0x40000u;
  R(2)|=R(3);
  { ST32(R(4)+12,R(2)); goto L8c04a89a; }
L8c04a890:;
  R(3)=LD32(R(14));
  R(1)=0xfffbffffu;
  R(2)=LD32(R(3)+12);
  R(2)&=R(1);
  ST32(R(3)+12,R(2));
L8c04a89a:;
  ST32(R(4)+12,R(2));
L8c04a89c:;
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
void f_8c04a7e0(SH4Ctx *c) {
  R(13)=0x0u;
  c->t=(R(13)&R(13))==0;
  R(13)=c->t;
  R(2)=LD32(R(12)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c04a7f2;
  { R(2)=0x1u; goto L8c04a7f4; }
L8c04a7f2:;
  R(2)=0x0u;
L8c04a7f4:;
  R(1)=LD32(R(11)+12);
  R(3)=0x4000u;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c04a800;
  { R(1)=0x1u; goto L8c04a802; }
L8c04a800:;
  R(1)=0x0u;
L8c04a802:;
  c->t=R(2)==R(1);
  if(c->t) goto L8c04a808;
  R(13)=R(9);
L8c04a808:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04a812;
  { c->pr=0x8c04a812u; R(4)=R(14); f_8c04a4a0(c); }
L8c04a812:;
  R(13)=R(13)&0xFF;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c04a868;
  R(6)=LD32(R(12)+12);
  R(3)=0x4000u;
  c->t=(R(6)&R(3))==0;
  { uint32_t k=c->t; R(7)=(int32_t)(int8_t)LD8(R(15)); if(k) goto L8c04a860; }
  { R(6)=0x1u; goto L8c04a862; }
L8c04a860:;
  R(6)=0x0u;
L8c04a862:;
  R(5)=R(10);
  { c->pr=0x8c04a868u; R(4)=R(14); f_8c04a1bc(c); }
L8c04a868:;
  R(3)=0x8c08eb02u;
  R(5)=LD32(R(8));
  { c->pr=0x8c04a870u; R(4)=LD32(R(14)); f_8c08eb02(c); }
  R(2)=0x8c0685b4u;
  R(6)=0x1cu;
  R(5)=LD32(R(8)+4);
  { c->pr=0x8c04a87au; R(4)=LD32(R(14)+4); f_8c0685b4(c); }
  R(3)=LD32(R(8)+8);
  ST32(R(14)+8,R(3));
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(14)); if(k) goto L8c04a890; }
  R(2)=LD32(R(4)+12);
  R(3)=0x40000u;
  R(2)|=R(3);
  { ST32(R(4)+12,R(2)); goto L8c04a89a; }
L8c04a890:;
  R(3)=LD32(R(14));
  R(1)=0xfffbffffu;
  R(2)=LD32(R(3)+12);
  R(2)&=R(1);
  ST32(R(3)+12,R(2));
L8c04a89a:;
  ST32(R(4)+12,R(2));
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
void f_8c04a840(SH4Ctx *c) {
  c->t=R(0)>>31;R(0)<<=1;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(6)=0x0u;
  R(5)=R(10);
  { c->pr=0x8c04a868u; R(4)=R(14); f_8c04a1bc(c); }
  R(3)=0x8c08eb02u;
  R(5)=LD32(R(8));
  { c->pr=0x8c04a870u; R(4)=LD32(R(14)); f_8c08eb02(c); }
  R(2)=0x8c0685b4u;
  R(6)=0x1cu;
  R(5)=LD32(R(8)+4);
  { c->pr=0x8c04a87au; R(4)=LD32(R(14)+4); f_8c0685b4(c); }
  R(3)=LD32(R(8)+8);
  ST32(R(14)+8,R(3));
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(14)); if(k) goto L8c04a890; }
  R(2)=LD32(R(4)+12);
  R(3)=0x40000u;
  R(2)|=R(3);
  { ST32(R(4)+12,R(2)); goto L8c04a89a; }
L8c04a890:;
  R(3)=LD32(R(14));
  R(1)=0xfffbffffu;
  R(2)=LD32(R(3)+12);
  R(2)&=R(1);
  ST32(R(3)+12,R(2));
L8c04a89a:;
  ST32(R(4)+12,R(2));
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
void f_8c04a860(SH4Ctx *c) {
  R(6)=0x0u;
  R(5)=R(10);
  { c->pr=0x8c04a868u; R(4)=R(14); f_8c04a1bc(c); }
  R(3)=0x8c08eb02u;
  R(5)=LD32(R(8));
  { c->pr=0x8c04a870u; R(4)=LD32(R(14)); f_8c08eb02(c); }
  R(2)=0x8c0685b4u;
  R(6)=0x1cu;
  R(5)=LD32(R(8)+4);
  { c->pr=0x8c04a87au; R(4)=LD32(R(14)+4); f_8c0685b4(c); }
  R(3)=LD32(R(8)+8);
  ST32(R(14)+8,R(3));
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(14)); if(k) goto L8c04a890; }
  R(2)=LD32(R(4)+12);
  R(3)=0x40000u;
  R(2)|=R(3);
  { ST32(R(4)+12,R(2)); goto L8c04a89a; }
L8c04a890:;
  R(3)=LD32(R(14));
  R(1)=0xfffbffffu;
  R(2)=LD32(R(3)+12);
  R(2)&=R(1);
  ST32(R(3)+12,R(2));
L8c04a89a:;
  ST32(R(4)+12,R(2));
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
void f_8c04a8b0(SH4Ctx *c) {
  R(2)=0x8c08e620u;
  R(5)=R(4);
  { R(4)=LD32(R(5)); { f_8c08e620(c); return; } }
}
void f_8c04a8b8(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c04a8bc(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c04a8c0(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c04a8c4(SH4Ctx *c) {
  { ST32(R(4)+4,R(5)); return; }
}
void f_8c04a8c8(SH4Ctx *c) {
  { R(0)=LD32(R(4)+8); return; }
}
void f_8c04a8cc(SH4Ctx *c) {
  { ST32(R(4)+8,R(5)); return; }
}
void f_8c04a8d0(SH4Ctx *c) {
  R(6)=LD32(R(4)+4);
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c04a8e4; }
  R(0)=LD32(R(4)+4);
  R(0)=LD32(R(0)+8);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04a8e4;
  R(4)=LD32(R(0));
  R(5)=R(4);
L8c04a8e4:;
  { R(0)=R(5); return; }
}
void f_8c04a958(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+16);
  R(3)=0x8c046deau;
  R(4)=R(2);
  ST32(R(15),R(2));
  { c->pr=0x8c04a972u; R(4)=LD32(R(4)); f_8c046dea(c); }
  R(13)=R(0);
  R(4)=LD32(R(13)+4);
  R(12)=0x8c055c1au;
  { c->pr=0x8c04a97cu; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(3)=0x8c055c1eu;
  R(5)=R(0);
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c04a986u; R(4)=LD32(R(4)+32); f_8c055c1e(c); }
  R(4)=LD32(R(14)+4);
  { uint32_t tg=R(12); c->pr=0x8c04a98cu; R(4)=LD32(R(4)+32); sh4_call(c,tg); }
  R(3)=0x8c055ae2u;
  R(4)=R(0);
  { c->pr=0x8c04a994u; R(5)=R(14); f_8c055ae2(c); }
  R(4)=LD32(R(13)+4);
  { uint32_t tg=R(12); c->pr=0x8c04a99au; R(4)=LD32(R(4)+32); sh4_call(c,tg); }
  R(5)=R(13);
  R(4)=R(0);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c055ae2u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c055ae2(c); return; } }
}
void f_8c04a9e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(3)=0x8c050c32u;
  R(0)=0x8c04abc0u;
  R(14)=R(4);
  { c->pr=0x8c04aa00u; fp_ld(c,12,R(0)); f_8c050c32(c); }
  R(0)=0x4u;
  c->fr[15]=0x00000000u;
  fp_st(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0xcu;
  R(3)=0x8c0c5a74u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  R(12)=0x8c2d0fa4u;
  R(13)=0x8c05bc94u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,14,R(3));
  fp_mov(c,13,15);
  { c->pr=0x8c04aa22u; R(4)=LD32(R(12)+R(0)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04aa36;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  R(3)=0x8c0c5a74u;
  R(0)=0x8c04abd4u;
  fp_ld(c,12,R(0));
  fp_ld(c,14,R(3));
  fp_arith(c,2,14,3);
L8c04aa36:;
  fp_mov(c,3,14);
  R(0)=0x50u;
  fp_unary(c,0,3);
  R(11)=0x8c05e5f4u;
  fp_st(c,3,R(15));
  { uint32_t tg=R(13); c->pr=0x8c04aa44u; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04aa66;
  R(0)=0x14u;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(15));
  R(5)=R(15);
  R(5)+=0x14u;
  R(4)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  R(6)+=0x8u;
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(11); c->pr=0x8c04aa66u; R(4)+=0x8u; sh4_call(c,tg); }
L8c04aa66:;
  R(0)=0x54u;
  { uint32_t tg=R(13); c->pr=0x8c04aa6cu; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04aa8c;
  R(0)=0x14u;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,14,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x1cu;
  R(4)=R(15);
  R(5)+=0x14u;
  fp_st(c,15,R(0)+R(15));
  R(6)+=0x8u;
  { uint32_t tg=R(11); c->pr=0x8c04aa8cu; R(4)+=0x8u; sh4_call(c,tg); }
L8c04aa8c:;
  R(0)=0x68u;
  { uint32_t tg=R(13); c->pr=0x8c04aa92u; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04aab2;
  R(0)=0x14u;
  R(6)=R(15);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x1cu;
  R(4)=R(15);
  R(5)+=0x14u;
  fp_st(c,15,R(0)+R(15));
  R(6)+=0x8u;
  { uint32_t tg=R(11); c->pr=0x8c04aab2u; R(4)+=0x8u; sh4_call(c,tg); }
L8c04aab2:;
  R(0)=0x6cu;
  { uint32_t tg=R(13); c->pr=0x8c04aab8u; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04aada;
  fp_ld(c,3,R(15));
  R(0)=0x14u;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  R(5)+=0x14u;
  R(4)=R(15);
  R(6)+=0x8u;
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(11); c->pr=0x8c04aadau; R(4)+=0x8u; sh4_call(c,tg); }
L8c04aada:;
  R(0)=0x60u;
  { uint32_t tg=R(13); c->pr=0x8c04aae0u; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(0)=0x64u; if(k) goto L8c04aaea; }
  fp_arith(c,0,13,12);
L8c04aaea:;
  { uint32_t tg=R(13); c->pr=0x8c04aaeeu; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(0)=0x5cu; if(k) goto L8c04aaf8; }
  fp_arith(c,1,13,12);
L8c04aaf8:;
  { uint32_t tg=R(13); c->pr=0x8c04aafcu; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04ab1e;
  R(0)=0x14u;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(15));
  R(5)=R(15);
  fp_ld(c,3,R(15));
  R(0)=0x1cu;
  R(5)+=0x14u;
  R(4)=R(15);
  R(6)+=0x8u;
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(11); c->pr=0x8c04ab1eu; R(4)+=0x8u; sh4_call(c,tg); }
L8c04ab1e:;
  R(0)=0x58u;
  { uint32_t tg=R(13); c->pr=0x8c04ab24u; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04ab44;
  R(0)=0x14u;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x1cu;
  R(4)=R(15);
  R(5)+=0x14u;
  fp_st(c,14,R(0)+R(15));
  R(6)+=0x8u;
  { uint32_t tg=R(11); c->pr=0x8c04ab44u; R(4)+=0x8u; sh4_call(c,tg); }
L8c04ab44:;
  R(0)=0x4u;
  R(3)=0x8c084492u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c04abdcu;
  fp_ld(c,2,R(0));
  fp_arith(c,0,3,13);
  fp_mov(c,4,3);
  fp_arith(c,0,4,2);
  { c->pr=0x8c04ab58u; R(4)=LD32(R(14)+32); f_8c084492(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x20u;
  { c->pr=0x8c04ab62u; R(4)=LD32(R(14)+32); f_8c0163ce(c); }
  R(5)=LD32(R(14)+32);
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(4)=R(15);
  R(6)+=0x8u;
  { c->pr=0x8c04ab70u; R(4)+=0x8u; f_8c014f10(c); }
  R(5)=R(15);
  R(6)=R(15);
  R(4)=R(15);
  R(5)+=0x20u;
  R(6)+=0x8u;
  { uint32_t tg=R(11); c->pr=0x8c04ab7eu; R(4)+=0x20u; sh4_call(c,tg); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x20u;
  { c->pr=0x8c04ab88u; R(4)=LD32(R(14)+32); f_8c01638a(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x20u;
  { c->pr=0x8c04ab92u; R(4)=LD32(R(14)+36); f_8c01638a(c); }
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c04ab9au; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  R(4)=LD32(R(14)+4);
  R(8)=R(0);
  R(3)=0x8c04a8b8u;
  R(8)+=0xcu;
  { c->pr=0x8c04aba6u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  {  goto L8c04ac00; }
L8c04ac00:;
  R(2)=LD32(R(0)+12);
  R(3)=0x80u;
  R(2)|=R(3);
  ST32(R(0)+12,R(2));
  R(0)=0x1u;
  ST32(R(8),R(2));
  R(15)+=0x2cu;
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
void f_8c04ac00(SH4Ctx *c) {
  R(2)=LD32(R(0)+12);
  R(3)=0x80u;
  R(2)|=R(3);
  ST32(R(0)+12,R(2));
  R(0)=0x1u;
  ST32(R(8),R(2));
  R(15)+=0x2cu;
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
void f_8c04ac24(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(4);
  R(4)=LD32(R(14)+4);
  R(3)=0x8c123b6cu;
  R(11)=0x1u;
  R(4)=LD32(R(4)+4);
  R(5)=LD32(R(3));
  R(2)=0x8c0163ceu;
  ST32(R(4)+20,R(5));
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c04ac4au; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04ac58;
  {  goto L8c04ada0; }
L8c04ac58:;
  R(12)=LD32(R(14)+4);
  R(12)=LD32(R(12));
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c04ac64;
  {  goto L8c04ada6; }
L8c04ac64:;
  R(13)=LD32(R(14)+4);
  R(10)=LD32(R(12)+4);
  R(13)=LD32(R(13)+4);
  c->t=(R(10)&R(10))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+32); if(k) goto L8c04aca0; }
  R(1)=0x8c084190u;
  { c->pr=0x8c04ac76u; R(4)=R(10); f_8c084190(c); }
  { R(4)=R(0); goto L8c04aca2; }
L8c04aca0:;
  R(4)=0x0u;
L8c04aca2:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04ad20;
  R(10)=0x2000u;
  c->t=(R(10)&R(13))==0;
  if(c->t) goto L8c04acb2;
  R(2)=LD32(R(14)+16);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c04ad20;
L8c04acb2:;
  R(10)=0x800u;
  c->t=(R(10)&R(13))==0;
  if(c->t) goto L8c04acbe;
  R(10)=0x1001u;
  c->t=(R(10)&R(13))==0;
  if(!c->t) goto L8c04ad20;
L8c04acbe:;
  R(10)=0x40000u;
  c->t=(R(10)&R(13))==0;
  if(c->t) goto L8c04ace0;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(10)=0x80u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(10)&R(0))==0;
  if(c->t) goto L8c04acd8;
  { R(10)=0x1u; goto L8c04acda; }
L8c04acd8:;
  R(10)=0x0u;
L8c04acda:;
  R(10)=R(10)&0xFF;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c04ad20;
L8c04ace0:;
  { R(10)=0x0u; goto L8c04ad22; }
L8c04ad20:;
  R(10)=0x1u;
L8c04ad22:;
  R(3)=R(10)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04ad2e;
  R(2)=0x800000u;
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c04ad58;
L8c04ad2e:;
  R(2)=0x8c053920u;
  { c->pr=0x8c04ad34u; R(4)=R(14); f_8c053920(c); }
  R(4)=R(0);
  R(0)=0x10cu;
  R(5)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  R(0)=c->t;
  R(4)&=R(0);
  R(0)=0x9eu;
  R(5)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(4)|=R(5);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c04ad58;
  R(3)=0x8c053b54u;
  R(5)=R(10);
  R(6)=0x0u;
  { c->pr=0x8c04ad58u; R(4)=R(14); f_8c053b54(c); }
L8c04ad58:;
  R(3)=0x8c04e540u;
  { c->pr=0x8c04ad5eu; R(4)=R(14); f_8c04e540(c); }
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(2)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04ae18;
  {  goto L8c04ada6; }
L8c04ada0:;
  R(2)=0x8c049540u;
  { c->pr=0x8c04ada6u; R(4)=R(14); f_8c049540(c); }
L8c04ada6:;
  R(3)=0x8c050ce0u;
  { c->pr=0x8c04adacu; R(4)=R(14); f_8c050ce0(c); }
  R(4)=R(14);
  R(0)=LD32(R(4)+48);
  R(0)&=0x20u;
  ST8(R(15),R(0));
  R(2)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04ae18;
  R(3)=0x8c0585d0u;
  { c->pr=0x8c04adc0u; R(4)=R(14); f_8c0585d0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04adde;
  R(3)=0x8c124740u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04adde;
  R(0)=LD32(R(14)+4);
  R(1)=0x70u;
  R(0)=LD32(R(0)+16);
  R(0)=LD32(R(0)+12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x40)==0;
  if(!c->t) goto L8c04ae18;
L8c04adde:;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04ae0c;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c04adecu;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04ae0c;
  R(2)=LD32(R(4)+12);
  R(5)=0x2u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c04ae0a;
  R(1)=LD32(R(4)+8);
  c->t=(R(1)&R(5))==0;
  if(c->t) goto L8c04ae0a;
  R(0)=0x1f8u;
  R(11)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(11)&R(11))==0;
  { R(11)=c->t; goto L8c04ae0c; }
L8c04ae0a:;
  R(11)=0x1u;
L8c04ae0c:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c04ae18;
  R(3)=0x8c055d60u;
  { c->pr=0x8c04ae18u; R(4)=R(14); f_8c055d60(c); }
L8c04ae18:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04ae60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(4);
  R(0)=LD32(R(14));
  R(12)=0x8c064a66u;
  R(10)=R(5);
  R(9)=0x8c064b2au;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(11)=R(6); if(k) goto L8c04ae86; }
  {  goto L8c04b016; }
L8c04ae86:;
  R(8)=LD32(R(14)+4);
  R(13)=LD32(R(8)+4);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c04ae92;
  {  goto L8c04b058; }
L8c04ae92:;
  R(0)=0x24u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04aec6;
  R(0)=LD32(R(8)+4);
  R(1)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c04aeaa;
  { R(0)=0x1u; goto L8c04aeac; }
L8c04aeaa:;
  R(0)=0x0u;
L8c04aeac:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04aeb6;
  {  goto L8c04b058; }
L8c04aeb6:;
  R(0)=0x8c123b6cu;
  R(2)=LD32(R(8)+4);
  R(3)=LD32(R(0));
  R(1)=LD32(R(2)+20);
  c->t=R(1)==R(3);
  if(!c->t) goto L8c04aec6;
  {  goto L8c04b058; }
L8c04aec6:;
  { uint32_t tg=R(9); c->pr=0x8c04aecau; R(4)=R(14); sh4_call(c,tg); }
  R(0)=0x24u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04aed6;
  {  goto L8c04afde; }
L8c04aed6:;
  R(2)=0x8c12473eu;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04aee6;
  R(1)=LD32(R(13)+32);
  R(3)=0x100000u;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c04af90;
L8c04aee6:;
  c->t=R(14)==R(10);
  if(!c->t) goto L8c04aef6;
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=0x7fu;
  R(2)&=R(3);
  { ST8(R(13)+R(0),R(2)); goto L8c04af8c; }
L8c04aef6:;
  R(3)=0x4c0000u;
  R(4)=LD32(R(13)+32);
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c04af8c;
  R(5)=LD32(R(14)+36);
  R(4)=R(15);
  R(2)=0x8c05e612u;
  R(6)=R(11);
  R(5)+=0x58u;
  { c->pr=0x8c04af0cu; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c04af1a;
  { fp_mov(c,3,4); goto L8c04af1e; }
L8c04af1a:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c04af1e:;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c04af2c;
  { fp_mov(c,2,5); goto L8c04af30; }
L8c04af2c:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
L8c04af30:;
  R(0)=0xcu;
  fp_arith(c,0,3,2);
  fp_ld(c,6,R(0)+R(15));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,6,2);
  if(!c->t) goto L8c04af40;
  { fp_mov(c,2,6); goto L8c04af44; }
L8c04af40:;
  fp_mov(c,2,6);
  fp_unary(c,0,2);
L8c04af44:;
  R(0)=0x2fu;
  fp_arith(c,0,3,2);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,2);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c04af80;
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=0x7fu;
  R(2)&=R(3);
  { ST8(R(13)+R(0),R(2)); goto L8c04af8c; }
L8c04af80:;
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(0);
  R(3)+=0x5bu;
  R(2)|=R(3);
  ST8(R(13)+R(0),R(2));
L8c04af8c:;
  { c->pr=0x8c04af90u; R(4)=R(14); f_8c04ac24(c); }
L8c04af90:;
  R(2)=0x8c06452cu;
  { c->pr=0x8c04af96u;  f_8c06452c(c); }
  { uint32_t tg=R(9); c->pr=0x8c04af9au; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c123cf0u;
  R(3)=LD32(R(2));
  c->t=R(14)==R(3);
  if(!c->t) goto L8c04b052;
  R(4)=R(14);
  R(3)=LD32(R(4)+8);
  R(14)=R(3);
  ST32(R(15),R(3));
  { uint32_t tg=R(12); c->pr=0x8c04afaeu; R(4)=R(3); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c04b052; }
L8c04afb4:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04afce;
  R(3)=0x8c0585d0u;
  { c->pr=0x8c04afc0u; R(4)=R(14); f_8c0585d0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04afce;
  R(5)=R(10);
  R(6)=R(11);
  { c->pr=0x8c04afceu; R(4)=R(14); f_8c04ae60(c); }
L8c04afce:;
  R(14)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c04afd4u; R(4)=R(13); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c04afb4; }
  {  goto L8c04b052; }
L8c04afde:;
  R(13)=LD32(R(14)+12);
  R(9)=0x8c064a74u;
  { c->pr=0x8c04afe6u; R(4)=R(13); f_8c064a74(c); }
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c04b052; }
L8c04afec:;
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04b006;
  R(2)=0x8c0585d0u;
  { c->pr=0x8c04aff8u; R(4)=R(14); f_8c0585d0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b006;
  R(5)=R(10);
  R(6)=R(11);
  { c->pr=0x8c04b006u; R(4)=R(13); f_8c04ae60(c); }
L8c04b006:;
  R(13)=R(12);
  { uint32_t tg=R(9); c->pr=0x8c04b00cu; R(4)=R(12); sh4_call(c,tg); }
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(12)=R(0); if(k) goto L8c04afec; }
  {  goto L8c04b052; }
L8c04b016:;
  { uint32_t tg=R(9); c->pr=0x8c04b01au; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(14);
  R(3)=LD32(R(4)+8);
  R(14)=R(3);
  ST32(R(15),R(3));
  { uint32_t tg=R(12); c->pr=0x8c04b026u; R(4)=R(3); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c04b052; }
L8c04b02c:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04b046;
  R(3)=0x8c0585d0u;
  { c->pr=0x8c04b038u; R(4)=R(14); f_8c0585d0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b046;
  R(5)=R(10);
  R(6)=R(11);
  { c->pr=0x8c04b046u; R(4)=R(14); f_8c04ae60(c); }
L8c04b046:;
  R(14)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c04b04cu; R(4)=R(13); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c04b02c; }
L8c04b052:;
  R(3)=0x8c06452cu;
  { c->pr=0x8c04b058u;  f_8c06452c(c); }
L8c04b058:;
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
void f_8c04b0a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=0x1e8u;
  R(8)=0x8c123b08u;
  R(9)=0x8c064b2au;
  ST32(R(15),R(4));
  R(11)=LD32(R(8)+R(0));
  R(2)=LD32(R(11)+36);
  R(2)+=0x58u;
  ST32(R(15)+4,R(2));
  { c->pr=0x8c04b0c6u; R(4)=LD32(R(15)); f_8c064b2a(c); }
  R(4)=LD32(R(15));
  R(3)=LD32(R(4)+8);
  R(13)=R(3);
  ST32(R(15),R(3));
  { R(4)=R(3); goto L8c04b208; }
L8c04b0d2:;
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04b0dc;
  {  goto L8c04b204; }
L8c04b0dc:;
  R(12)=LD32(R(13)+4);
  R(14)=LD32(R(12)+4);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04b0e8;
  {  goto L8c04b204; }
L8c04b0e8:;
  R(0)=LD32(R(12)+4);
  R(1)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c04b0f8;
  { R(0)=0x1u; goto L8c04b0fa; }
L8c04b0f8:;
  R(0)=0x0u;
L8c04b0fa:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04b104;
  {  goto L8c04b204; }
L8c04b104:;
  R(3)=0x8c12473eu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04b11a;
  R(1)=LD32(R(14)+32);
  R(2)=0x100000u;
  R(1)^=R(2);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04b11a;
  {  goto L8c04b204; }
L8c04b11a:;
  R(0)=0x24u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b126;
  {  goto L8c04b218; }
L8c04b126:;
  R(2)=LD32(R(12)+4);
  R(0)=0x64u;
  R(3)=LD32(R(8)+R(0));
  R(1)=LD32(R(2)+20);
  c->t=R(1)==R(3);
  if(c->t) goto L8c04b204;
  c->t=R(13)==R(11);
  if(!c->t) goto L8c04b180;
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=0x7fu;
  R(2)&=R(3);
  { ST8(R(14)+R(0),R(2)); goto L8c04b1f6; }
L8c04b180:;
  R(3)=0x4c0000u;
  R(4)=LD32(R(14)+32);
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c04b1f6;
  R(5)=LD32(R(13)+36);
  R(4)=R(15);
  R(2)=0x8c05e612u;
  R(6)=LD32(R(15)+4);
  R(5)+=0x58u;
  { c->pr=0x8c04b196u; R(4)+=0x8u; f_8c05e612(c); }
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,6,R(0)+R(15));
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c04b1a4;
  { fp_mov(c,3,6); goto L8c04b1a8; }
L8c04b1a4:;
  fp_mov(c,3,6);
  fp_unary(c,0,3);
L8c04b1a8:;
  R(0)=0xcu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c04b1b6;
  { fp_mov(c,2,4); goto L8c04b1ba; }
L8c04b1b6:;
  fp_mov(c,2,4);
  fp_unary(c,0,2);
L8c04b1ba:;
  R(0)=0x10u;
  fp_arith(c,0,3,2);
  fp_ld(c,5,R(0)+R(15));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c04b1ca;
  { fp_mov(c,2,5); goto L8c04b1ce; }
L8c04b1ca:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
L8c04b1ce:;
  R(0)=0x2fu;
  fp_arith(c,0,3,2);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,2);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c04b1ea;
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=0x7fu;
  R(2)&=R(3);
  { ST8(R(14)+R(0),R(2)); goto L8c04b1f6; }
L8c04b1ea:;
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=R(0);
  R(3)+=0x5bu;
  R(2)|=R(3);
  ST8(R(14)+R(0),R(2));
L8c04b1f6:;
  { uint32_t tg=R(9); c->pr=0x8c04b1fau; R(4)=R(13); sh4_call(c,tg); }
  { c->pr=0x8c04b1feu; R(4)=R(13); f_8c04ac24(c); }
  R(2)=0x8c06452cu;
  { c->pr=0x8c04b204u;  f_8c06452c(c); }
L8c04b204:;
  R(4)=R(10);
  R(13)=R(10);
L8c04b208:;
  R(3)=0x8c064a66u;
  { c->pr=0x8c04b20eu;  f_8c064a66(c); }
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(10)=R(0); if(k) goto L8c04b218; }
  {  goto L8c04b0d2; }
L8c04b218:;
  R(3)=0x8c06452cu;
  { c->pr=0x8c04b21eu;  f_8c06452c(c); }
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
void f_8c04b232(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c064b2au;
  R(12)=0x0u;
  R(14)=R(4);
  ST8(R(15),R(5));
  { c->pr=0x8c04b248u; R(4)=R(14); f_8c064b2a(c); }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04b252;
  {  goto L8c04b368; }
L8c04b252:;
  R(2)=0x8c12473eu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04b26a;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(3)+4);
  R(3)=0x100000u;
  R(0)=LD32(R(1)+32);
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c04b26a;
  {  goto L8c04b368; }
L8c04b26a:;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(14)+4); if(k) goto L8c04b274; }
  R(12)=0x1u;
L8c04b274:;
  R(4)=LD32(R(5)+4);
  R(0)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c04b2c0;
  { R(0)=0x1u; goto L8c04b2c2; }
L8c04b2c0:;
  R(0)=0x0u;
L8c04b2c2:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04b35c;
  R(1)=0x8c123b6cu;
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(1));
  c->t=R(3)==R(2);
  if(c->t) goto L8c04b35c;
  R(3)=0x8c123cf0u;
  R(13)=LD32(R(14)+4);
  R(4)=LD32(R(3));
  R(13)=LD32(R(13)+4);
  R(6)=LD32(R(4)+36);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(6)+=0x58u; if(k) goto L8c04b356; }
  R(1)=0x4c0000u;
  R(4)=LD32(R(13)+32);
  c->t=(R(4)&R(1))==0;
  if(c->t) goto L8c04b356;
  R(5)=LD32(R(14)+36);
  R(4)=R(15);
  R(2)=0x8c05e612u;
  R(5)+=0x58u;
  { c->pr=0x8c04b2f6u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c04b304;
  { fp_mov(c,3,4); goto L8c04b308; }
L8c04b304:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c04b308:;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c04b316;
  { fp_mov(c,2,5); goto L8c04b31a; }
L8c04b316:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
L8c04b31a:;
  R(0)=0xcu;
  fp_arith(c,0,3,2);
  fp_ld(c,6,R(0)+R(15));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,6,2);
  if(!c->t) goto L8c04b32a;
  { fp_mov(c,2,6); goto L8c04b32e; }
L8c04b32a:;
  fp_mov(c,2,6);
  fp_unary(c,0,2);
L8c04b32e:;
  R(0)=0x2fu;
  fp_arith(c,0,3,2);
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,2);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c04b34a;
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=0x7fu;
  R(2)&=R(3);
  { ST8(R(13)+R(0),R(2)); goto L8c04b356; }
L8c04b34a:;
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(0);
  R(3)+=0x5bu;
  R(2)|=R(3);
  ST8(R(13)+R(0),R(2));
L8c04b356:;
  { c->pr=0x8c04b35au; R(4)=R(14); f_8c04ac24(c); }
  R(12)=0x1u;
L8c04b35c:;
  R(2)=0x8c06452cu;
  { c->pr=0x8c04b362u;  f_8c06452c(c); }
  R(3)=0x8c064b2au;
  { c->pr=0x8c04b368u; R(4)=R(14); f_8c064b2a(c); }
L8c04b368:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c04b37a;
L8c04b36e:;
  R(5)=R(12);
  { c->pr=0x8c04b374u; R(4)=R(13); f_8c04b232(c); }
  R(13)=LD32(R(13)+20);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c04b36e;
L8c04b37a:;
  R(3)=0x8c06452cu;
  { c->pr=0x8c04b380u;  f_8c06452c(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04b38c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(12)=LD32(R(4)+4);
  R(13)=0x0u;
  R(10)=0x8c07b002u;
  R(0)=0x8c04b424u;
  R(3)=LD32(R(12)+16);
  R(11)=0x8c07afaeu;
  R(14)=LD32(R(12)+12);
  c->t=(int32_t)R(3)>0;
  R(9)=0x8c011956u;
  { uint32_t k=!c->t; fp_ld(c,15,R(0)); if(k) goto L8c04b44c; }
L8c04b3b4:;
  { uint32_t tg=R(11); c->pr=0x8c04b3b8u; R(4)=LD32(R(14)); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c04b440;
  R(5)=R(15);
  { uint32_t tg=R(10); c->pr=0x8c04b3c2u; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,3,15);
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,3,15);
  R(4)=c->fpul;
  fp_ftrc(c,3);
  fp_ld(c,3,R(15));
  R(4)=R(4)&0xFF;
  fp_arith(c,2,3,15);
  R(3)=c->fpul;
  fp_ftrc(c,3);
  R(3)=R(3)&0xFF;
  R(3)=R(3)&0xFFFF;
  R(3)<<=8;
  R(4)|=R(3);
  R(3)=c->fpul;
  R(3)=R(3)&0xFF;
  R(3)<<=16;
  { uint32_t tg=R(9); c->pr=0x8c04b3f0u; R(4)|=R(3); sh4_call(c,tg); }
  {  goto L8c04b44c; }
L8c04b440:;
  R(2)=LD32(R(12)+16);
  R(13)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(13);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c04b3b4; }
L8c04b44c:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04b460(SH4Ctx *c) {
  R(3)=0x8c2d03b0u;
  R(6)=0x800u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  R(5)=LD32(R(5)+8);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c04b4aa;
L8c04b46e:;
  R(14)=LD32(R(5)+4);
  R(0)=0x24u;
  R(14)=LD32(R(14)+4);
  R(1)=LD32(R(14)+32);
  R(1)|=R(6);
  ST32(R(14)+32,R(1));
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04b488;
  R(2)=0x80000000u;
  c->t=(R(2)&R(1))==0;
  if(c->t) goto L8c04b4a4;
L8c04b488:;
  R(4)=LD32(R(5)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04b4a4;
L8c04b48e:;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04b49e;
  R(14)=LD32(R(4)+4);
  R(14)=LD32(R(14)+4);
  R(7)=LD32(R(14)+32);
  R(7)|=R(6);
  ST32(R(14)+32,R(7));
L8c04b49e:;
  R(4)=LD32(R(4)+20);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c04b48e;
L8c04b4a4:;
  R(5)=LD32(R(5)+20);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c04b46e;
L8c04b4aa:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04b4e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x8c0c59ccu;
  R(14)=0x8c123b08u;
  R(0)=(int32_t)(int16_t)LD16(R(12));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04b50a;
  R(3)=0x8c0c59e0u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04b50a;
  R(2)=0x8c0478c4u;
  { c->pr=0x8c04b504u;  f_8c0478c4(c); }
  R(3)=0x8c049f60u;
  { c->pr=0x8c04b50au;  f_8c049f60(c); }
L8c04b50a:;
  R(2)=0x8c017d4eu;
  { c->pr=0x8c04b510u;  f_8c017d4e(c); }
  R(3)=0x8c05f724u;
  { c->pr=0x8c04b516u;  f_8c05f724(c); }
  R(2)=0x8c045f72u;
  { c->pr=0x8c04b51cu;  f_8c045f72(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04b526;
  {  goto L8c04b64e; }
L8c04b526:;
  R(2)=0x8c064aacu;
  { c->pr=0x8c04b52cu;  f_8c064aac(c); }
  R(0)=0x1ecu;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c04b540; }
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xfffffffcu;
  ST32(R(14)+R(0),R(3));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
L8c04b540:;
  { c->pr=0x8c04b544u;  f_8c04c274(c); }
  R(0)=(int32_t)(int16_t)LD16(R(12));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04b556;
  R(2)=0x8c044ea0u;
  { c->pr=0x8c04b552u;  f_8c044ea0(c); }
  {  goto L8c04b55c; }
L8c04b556:;
  R(2)=0x8c044f66u;
  { c->pr=0x8c04b55cu;  f_8c044f66(c); }
L8c04b55c:;
  R(3)=0x8c0644deu;
  { c->pr=0x8c04b562u;  f_8c0644de(c); }
  R(0)=(int32_t)(int16_t)LD16(R(12));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04b5c0;
  R(2)=0x8c0499dcu;
  { c->pr=0x8c04b570u;  f_8c0499dc(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b57a;
  {  goto L8c04b65c; }
L8c04b57a:;
  {  goto L8c04b5d6; }
L8c04b5c0:;
  R(0)=0x1e8u;
  R(3)=0x8c2d03b0u;
  R(12)=LD32(R(14)+R(0));
  { c->pr=0x8c04b5cau; R(4)=LD32(R(3)); f_8c04b0a0(c); }
  R(6)=LD32(R(12)+36);
  R(5)=R(12);
  R(3)=0x8c2d03b0u;
  R(6)+=0x58u;
  { c->pr=0x8c04b5d6u; R(4)=LD32(R(3)); f_8c04ae60(c); }
L8c04b5d6:;
  R(1)=0x8c05877cu;
  { c->pr=0x8c04b5dcu;  f_8c05877c(c); }
  R(4)=0x8c0c6b38u;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04b622;
  R(3)=0x8c2d20d0u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c04b622;
  ST32(R(4),R(13));
  R(4)=0x1u;
  R(3)=0x8c0c6b34u;
  R(0)=R(4);
  R(2)=0x8c0c6b30u;
  ST8(R(15),R(4));
  ST8(R(15)+1,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(15)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(2));
  ST8(R(15)+3,R(0));
  R(0)=R(13);
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b618;
  R(3)=0x8c0db69cu;
  R(1)=0x8c2d20d0u;
  { c->pr=0x8c04b614u; R(4)=LD32(R(1)); f_8c0db69c(c); }
  {  goto L8c04b622; }
L8c04b618:;
  R(3)=0x8c0db66eu;
  R(5)=R(15);
  R(1)=0x8c2d20d0u;
  { c->pr=0x8c04b622u; R(4)=LD32(R(1)); f_8c0db66e(c); }
L8c04b622:;
  R(2)=0x8c01b738u;
  { c->pr=0x8c04b628u;  f_8c01b738(c); }
  R(0)=0xb4u;
  R(3)=LD32(R(14)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c04b63c; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c04b63c:;
  R(0)=0x8c04b6b0u;
  R(3)=0x8c012146u;
  fp_ld(c,2,R(0));
  R(0)=0xbcu;
  fp_mov(c,4,3);
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,1,2);
  { c->pr=0x8c04b64eu; fp_arith(c,3,4,1); f_8c012146(c); }
L8c04b64e:;
  R(3)=0x8c03ab4cu;
  R(0)=0xb4u;
  { c->pr=0x8c04b656u; R(4)=LD32(R(14)+R(0)); f_8c03ab4c(c); }
  R(2)=0x8c05d520u;
  { c->pr=0x8c04b65cu;  f_8c05d520(c); }
L8c04b65c:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04b5c0(SH4Ctx *c) {
  R(0)=0x1e8u;
  R(3)=0x8c2d03b0u;
  R(12)=LD32(R(14)+R(0));
  { c->pr=0x8c04b5cau; R(4)=LD32(R(3)); f_8c04b0a0(c); }
  R(6)=LD32(R(12)+36);
  R(5)=R(12);
  R(3)=0x8c2d03b0u;
  R(6)+=0x58u;
  { c->pr=0x8c04b5d6u; R(4)=LD32(R(3)); f_8c04ae60(c); }
  R(1)=0x8c05877cu;
  { c->pr=0x8c04b5dcu;  f_8c05877c(c); }
  R(4)=0x8c0c6b38u;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04b622;
  R(3)=0x8c2d20d0u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c04b622;
  ST32(R(4),R(13));
  R(4)=0x1u;
  R(3)=0x8c0c6b34u;
  R(0)=R(4);
  R(2)=0x8c0c6b30u;
  ST8(R(15),R(4));
  ST8(R(15)+1,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(15)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(2));
  ST8(R(15)+3,R(0));
  R(0)=R(13);
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b618;
  R(3)=0x8c0db69cu;
  R(1)=0x8c2d20d0u;
  { c->pr=0x8c04b614u; R(4)=LD32(R(1)); f_8c0db69c(c); }
  {  goto L8c04b622; }
L8c04b618:;
  R(3)=0x8c0db66eu;
  R(5)=R(15);
  R(1)=0x8c2d20d0u;
  { c->pr=0x8c04b622u; R(4)=LD32(R(1)); f_8c0db66e(c); }
L8c04b622:;
  R(2)=0x8c01b738u;
  { c->pr=0x8c04b628u;  f_8c01b738(c); }
  R(0)=0xb4u;
  R(3)=LD32(R(14)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c04b63c; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c04b63c:;
  R(0)=0x8c04b6b0u;
  R(3)=0x8c012146u;
  fp_ld(c,2,R(0));
  R(0)=0xbcu;
  fp_mov(c,4,3);
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,1,2);
  { c->pr=0x8c04b64eu; fp_arith(c,3,4,1); f_8c012146(c); }
  R(3)=0x8c03ab4cu;
  R(0)=0xb4u;
  { c->pr=0x8c04b656u; R(4)=LD32(R(14)+R(0)); f_8c03ab4c(c); }
  R(2)=0x8c05d520u;
  { c->pr=0x8c04b65cu;  f_8c05d520(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04b6c0(SH4Ctx *c) {
  R(6)=R(4);
  R(3)=0x8c2d03b0u;
  R(0)=0x24u;
  R(2)=0x8c064be0u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(6)+4);
  R(5)=LD32(R(3));
  R(6)=LD32(R(6)+4);
  R(6)=(int32_t)(int8_t)LD8(R(6)+R(0));
  { R(15)+=0x4u; { f_8c064be0(c); return; } }
}
void f_8c04b6d6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+8);
  R(10)=R(4);
  R(13)=0x8c064a66u;
  R(4)=R(3);
  R(14)=R(3);
  ST32(R(15),R(3));
  {  goto L8c04b734; }
L8c04b6f6:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04b730;
  R(3)=LD32(R(14)+4);
  R(0)=0x24u;
  R(2)=LD32(R(3)+4);
  R(1)=(int32_t)(int8_t)LD8(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04b73e;
  R(4)=R(14);
  R(9)=LD32(R(4)+8);
  R(14)=R(9);
  { R(4)=R(9); goto L8c04b726; }
L8c04b712:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04b722;
  R(9)=0x8c064be0u;
  R(5)=R(10);
  R(6)=0x0u;
  { c->pr=0x8c04b722u; R(4)=R(14); f_8c064be0(c); }
L8c04b722:;
  R(4)=R(12);
  R(14)=R(12);
L8c04b726:;
  { uint32_t tg=R(13); c->pr=0x8c04b72au;  sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(12)=R(0); if(k) goto L8c04b712; }
L8c04b730:;
  R(4)=R(11);
  R(14)=R(11);
L8c04b734:;
  { uint32_t tg=R(13); c->pr=0x8c04b738u;  sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(11)=R(0); if(k) goto L8c04b6f6; }
L8c04b73e:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04b750(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c123cf0u;
  R(12)=0x8c064a66u;
  R(3)=LD32(R(2));
  R(1)=R(3);
  ST32(R(15),R(3));
  R(3)=LD32(R(1)+8);
  R(14)=R(3);
  ST32(R(15)+4,R(3));
  { c->pr=0x8c04b772u; R(4)=R(3); f_8c064a66(c); }
  R(11)=0x8c2d03b0u;
  c->t=(R(14)&R(14))==0;
  R(10)=0x8c064be0u;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c04b79c; }
L8c04b77c:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04b790;
  R(6)=LD32(R(14)+4);
  R(0)=0x24u;
  R(5)=LD32(R(11));
  R(6)=LD32(R(6)+4);
  R(6)=(int32_t)(int8_t)LD8(R(6)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c04b790u; R(4)=R(14); sh4_call(c,tg); }
L8c04b790:;
  R(14)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c04b796u; R(4)=R(13); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c04b77c; }
L8c04b79c:;
  { c->pr=0x8c04b7a0u; R(4)=LD32(R(11)); f_8c04b6d6(c); }
  R(3)=0x8c2d03b8u;
  R(4)=LD32(R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04b6d6(c); return; } }
}
void f_8c04b7e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffe5cu;
  R(15)+=R(0);
  R(0)=0xd8u;
  R(1)=0x60u;
  R(14)=0x8c123b08u;
  R(3)=0x8c011650u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  { c->pr=0x8c04b80eu; ST32(c->gbr+88,R(0)); f_8c011650(c); }
  R(9)=0x8c045f72u;
  { c->pr=0x8c04b814u;  f_8c045f72(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04b834;
  R(3)=0x8c07a9c0u;
  { c->pr=0x8c04b820u;  f_8c07a9c0(c); }
  R(10)=R(0);
  c->fpul=R(10);
  R(0)=0x8c04b8b8u;
  R(3)=0x8c07a9a0u;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  { c->pr=0x8c04b834u; R(4)=c->fpul; f_8c07a9a0(c); }
L8c04b834:;
  R(2)=0x8c058460u;
  { c->pr=0x8c04b83au; R(4)=0x1u; f_8c058460(c); }
  R(5)=0x198u;
  R(13)=R(0);
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c04b846u; R(4)=LD32(R(13)+36); f_8c0163ce(c); }
  R(3)=0x8c055c1au;
  R(4)=LD32(R(13)+4);
  { c->pr=0x8c04b84eu; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(12)=R(0);
  R(0)=0x60u;
  R(4)=0x198u;
  R(5)=R(12);
  R(3)=0x8c05f4a0u;
  R(6)=LD32(R(14)+R(0));
  { c->pr=0x8c04b85eu; R(4)+=R(15); f_8c05f4a0(c); }
  R(2)=0x8c038238u;
  { c->pr=0x8c04b864u;  f_8c038238(c); }
  R(2)=0x8c0c5198u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04b8e0;
  R(0)=0x14cu;
  R(1)=0x60u;
  R(4)=0x14cu;
  R(0)+=R(14);
  R(3)=0x8c0394beu;
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  ST32(c->gbr+88,R(0));
  { c->pr=0x8c04b882u; R(4)+=R(14); f_8c0394be(c); }
  R(0)=0xd8u;
  R(1)=0x60u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  { ST32(c->gbr+88,R(0)); goto L8c04b8e8; }
L8c04b8e0:;
  R(1)=0x8c07fd18u;
  R(5)=R(13);
  { c->pr=0x8c04b8e8u; R(4)=R(12); f_8c07fd18(c); }
L8c04b8e8:;
  R(3)=0x8c01bae0u;
  { c->pr=0x8c04b8eeu;  f_8c01bae0(c); }
  { uint32_t tg=R(9); c->pr=0x8c04b8f2u;  sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b918;
  R(0)=0x14cu;
  R(1)=0x60u;
  R(3)=0x8c082e40u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  { c->pr=0x8c04b90au; ST32(c->gbr+88,R(0)); f_8c082e40(c); }
  R(0)=0xd8u;
  R(1)=0x60u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  ST32(c->gbr+88,R(0));
L8c04b918:;
  R(3)=0x8c037d88u;
  { c->pr=0x8c04b91eu;  f_8c037d88(c); }
  R(3)=0x8c0c611cu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04b95e;
  R(1)=0x8c0c6824u;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04b95e;
  R(13)=0x18cu;
  R(0)=0x4u;
  c->fr[15]=0x00000000u;
  R(13)+=R(15);
  R(12)=0x184u;
  R(3)=0x8c07ff20u;
  R(12)+=R(15);
  fp_mov(c,5,15);
  R(5)=R(12);
  fp_st(c,15,R(13));
  fp_st(c,15,R(0)+R(13));
  R(0)=0x8c04b9e0u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8c04b9e4u;
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_st(c,4,R(12));
  fp_st(c,4,R(0)+R(12));
  R(0)=0x8c04b9e8u;
  fp_ld(c,4,R(0));
  { uint32_t tg=R(3); c->pr=0x8c04b95eu; R(4)=R(13); sh4_call(c,tg); }
L8c04b95e:;
  c->fr[12]=0x3F800000u;
  fp_arith(c,0,12,12);
  R(11)=0x8c082fa0u;
  R(0)=0x8c04b9f0u;
  R(12)=0x8c0276feu;
  { uint32_t tg=R(9); c->pr=0x8c04b96cu; fp_ld(c,13,R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b976;
  {  goto L8c04bb3c; }
L8c04b976:;
  R(0)=0x14cu;
  R(1)=0x60u;
  R(3)=0x8c07a9a0u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  ST32(c->gbr+88,R(0));
  { c->pr=0x8c04b98au; R(4)=R(10); f_8c07a9a0(c); }
  R(0)=0x8c04ba04u;
  R(3)=0x8c0c61a8u;
  fp_ld(c,14,R(0));
  R(0)=0x8c04ba08u;
  R(4)=(int32_t)(int8_t)LD8(R(3));
  fp_ld(c,15,R(0));
  R(0)=R(4)&0xFF;
  R(10)=0x8c2e2480u;
  R(13)=0x8c0c5a84u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c04ba5e; }
  R(1)=0x8c05bd92u;
  { c->pr=0x8c04b9a8u;  f_8c05bd92(c); }
  R(3)=0x1u;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  { uint32_t k=c->t; R(4)=LD32(R(10)); if(k) goto L8c04ba20; }
  { R(9)=0x3u; goto L8c04ba22; }
L8c04ba20:;
  R(9)=0x5u;
L8c04ba22:;
  R(4)+=R(9);
  { uint32_t tg=R(11); c->pr=0x8c04ba28u; R(4)+=0x1u; sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x18cu;
  R(4)=0x18cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8c04baccu;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x194u;
  fp_st(c,14,R(0)+R(15));
  fp_ld(c,4,R(13));
  { uint32_t tg=R(12); c->pr=0x8c04ba42u; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=LD32(R(10));
  { uint32_t tg=R(11); c->pr=0x8c04ba48u; R(4)+=R(9); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x18cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8c04bad0u;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x194u;
  fp_st(c,14,R(0)+R(15));
  { fp_mov(c,4,13); goto L8c04baa6; }
L8c04ba5e:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04bae0;
  R(1)=0x8c05cdf8u;
  { c->pr=0x8c04ba6au;  f_8c05cdf8(c); }
  R(4)=LD32(R(10));
  R(9)=R(0);
  { uint32_t tg=R(11); c->pr=0x8c04ba72u; R(4)+=0x2u; sh4_call(c,tg); }
  R(3)=0x1u;
  R(2)=R(9);
  R(3)&=R(9);
  R(4)=R(0);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(3)+=0x1u;
  R(2)+=0x61u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c06874cu;
  R(4)=0x98u;
  { c->pr=0x8c04ba8eu; R(4)+=R(15); f_8c06874c(c); }
  R(15)+=0xcu;
  R(0)=0x18cu;
  R(5)=0x8cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8c04bad0u;
  fp_ld(c,3,R(0));
  R(5)+=R(15);
  R(0)=0x190u;
  fp_mov(c,4,13);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x194u;
  fp_st(c,14,R(0)+R(15));
L8c04baa6:;
  R(4)=0x18cu;
  { uint32_t tg=R(12); c->pr=0x8c04baacu; R(4)+=R(15); sh4_call(c,tg); }
  {  goto L8c04bb04; }
L8c04bae0:;
  R(1)=0x8c0c6b2cu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04bb04;
  R(4)=LD32(R(10));
  { uint32_t tg=R(11); c->pr=0x8c04baeeu; R(4)+=0x7u; sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x80u;
  R(4)=0x80u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,14,R(0)+R(15));
  fp_ld(c,4,R(13));
  { uint32_t tg=R(12); c->pr=0x8c04bb04u; R(4)+=R(15); sh4_call(c,tg); }
L8c04bb04:;
  R(4)=0x8c0c5a88u;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=c->t; fp_st(c,2,R(13)); if(k) goto L8c04bb1e; }
  R(0)=0x8c04bbd8u;
  fp_ld(c,1,R(13));
  fp_ld(c,2,R(0));
  fp_cmp(c,1,1,2);
  if(!c->t) goto L8c04bb2e;
L8c04bb1e:;
  fp_ld(c,3,R(4));
  fp_mov(c,0,12);
  fp_unary(c,0,3);
  fp_mov(c,2,3);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(13));
L8c04bb2e:;
  R(0)=0xd8u;
  R(1)=0x60u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  ST32(c->gbr+88,R(0));
L8c04bb3c:;
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04bb98;
  R(1)=0x8c2e2484u;
  { uint32_t tg=R(11); c->pr=0x8c04bb4cu; R(4)=LD32(R(1)); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x8c04bbe4u;
  fp_ld(c,3,R(0));
  R(0)=0x18cu;
  R(14)=0x8c0c5a64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c04bbe8u;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  R(4)=0x18cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c04bbecu;
  fp_ld(c,3,R(0));
  R(0)=0x194u;
  fp_st(c,3,R(0)+R(15));
  fp_ld(c,4,R(14));
  { uint32_t tg=R(12); c->pr=0x8c04bb70u; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0x8c0c5a68u;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  fp_mov(c,3,2);
  fp_cmp(c,1,3,13);
  { uint32_t k=c->t; fp_st(c,2,R(14)); if(k) goto L8c04bb88; }
  fp_ld(c,2,R(14));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c04bb98;
L8c04bb88:;
  fp_ld(c,3,R(4));
  fp_mov(c,0,12);
  fp_unary(c,0,3);
  fp_mov(c,2,3);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(14));
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
L8c04bb98:;
  R(3)=0x8c0386e0u;
  { c->pr=0x8c04bb9eu;  f_8c0386e0(c); }
  R(2)=0x8c047640u;
  { c->pr=0x8c04bba4u; R(4)=0x0u; f_8c047640(c); }
  R(1)=0x1a4u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04b8e0(SH4Ctx *c) {
  R(1)=0x8c07fd18u;
  R(5)=R(13);
  { c->pr=0x8c04b8e8u; R(4)=R(12); f_8c07fd18(c); }
  R(3)=0x8c01bae0u;
  { c->pr=0x8c04b8eeu;  f_8c01bae0(c); }
  { uint32_t tg=R(9); c->pr=0x8c04b8f2u;  sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b918;
  R(0)=0x14cu;
  R(1)=0x60u;
  R(3)=0x8c082e40u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  { c->pr=0x8c04b90au; ST32(c->gbr+88,R(0)); f_8c082e40(c); }
  R(0)=0xd8u;
  R(1)=0x60u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  ST32(c->gbr+88,R(0));
L8c04b918:;
  R(3)=0x8c037d88u;
  { c->pr=0x8c04b91eu;  f_8c037d88(c); }
  R(3)=0x8c0c611cu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04b95e;
  R(1)=0x8c0c6824u;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04b95e;
  R(13)=0x18cu;
  R(0)=0x4u;
  c->fr[15]=0x00000000u;
  R(13)+=R(15);
  R(12)=0x184u;
  R(3)=0x8c07ff20u;
  R(12)+=R(15);
  fp_mov(c,5,15);
  R(5)=R(12);
  fp_st(c,15,R(13));
  fp_st(c,15,R(0)+R(13));
  R(0)=0x8c04b9e0u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8c04b9e4u;
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_st(c,4,R(12));
  fp_st(c,4,R(0)+R(12));
  R(0)=0x8c04b9e8u;
  fp_ld(c,4,R(0));
  { uint32_t tg=R(3); c->pr=0x8c04b95eu; R(4)=R(13); sh4_call(c,tg); }
L8c04b95e:;
  c->fr[12]=0x3F800000u;
  fp_arith(c,0,12,12);
  R(11)=0x8c082fa0u;
  R(0)=0x8c04b9f0u;
  R(12)=0x8c0276feu;
  { uint32_t tg=R(9); c->pr=0x8c04b96cu; fp_ld(c,13,R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04b976;
  {  goto L8c04bb3c; }
L8c04b976:;
  R(0)=0x14cu;
  R(1)=0x60u;
  R(3)=0x8c07a9a0u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  ST32(c->gbr+88,R(0));
  { c->pr=0x8c04b98au; R(4)=R(10); f_8c07a9a0(c); }
  R(0)=0x8c04ba04u;
  R(3)=0x8c0c61a8u;
  fp_ld(c,14,R(0));
  R(0)=0x8c04ba08u;
  R(4)=(int32_t)(int8_t)LD8(R(3));
  fp_ld(c,15,R(0));
  R(0)=R(4)&0xFF;
  R(10)=0x8c2e2480u;
  R(13)=0x8c0c5a84u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c04ba5e; }
  R(1)=0x8c05bd92u;
  { c->pr=0x8c04b9a8u;  f_8c05bd92(c); }
  R(3)=0x1u;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  { uint32_t k=c->t; R(4)=LD32(R(10)); if(k) goto L8c04ba20; }
  { R(9)=0x3u; goto L8c04ba22; }
L8c04ba20:;
  R(9)=0x5u;
L8c04ba22:;
  R(4)+=R(9);
  { uint32_t tg=R(11); c->pr=0x8c04ba28u; R(4)+=0x1u; sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x18cu;
  R(4)=0x18cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8c04baccu;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x194u;
  fp_st(c,14,R(0)+R(15));
  fp_ld(c,4,R(13));
  { uint32_t tg=R(12); c->pr=0x8c04ba42u; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=LD32(R(10));
  { uint32_t tg=R(11); c->pr=0x8c04ba48u; R(4)+=R(9); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x18cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8c04bad0u;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x194u;
  fp_st(c,14,R(0)+R(15));
  { fp_mov(c,4,13); goto L8c04baa6; }
L8c04ba5e:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04bae0;
  R(1)=0x8c05cdf8u;
  { c->pr=0x8c04ba6au;  f_8c05cdf8(c); }
  R(4)=LD32(R(10));
  R(9)=R(0);
  { uint32_t tg=R(11); c->pr=0x8c04ba72u; R(4)+=0x2u; sh4_call(c,tg); }
  R(3)=0x1u;
  R(2)=R(9);
  R(3)&=R(9);
  R(4)=R(0);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(3)+=0x1u;
  R(2)+=0x61u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c06874cu;
  R(4)=0x98u;
  { c->pr=0x8c04ba8eu; R(4)+=R(15); f_8c06874c(c); }
  R(15)+=0xcu;
  R(0)=0x18cu;
  R(5)=0x8cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8c04bad0u;
  fp_ld(c,3,R(0));
  R(5)+=R(15);
  R(0)=0x190u;
  fp_mov(c,4,13);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x194u;
  fp_st(c,14,R(0)+R(15));
L8c04baa6:;
  R(4)=0x18cu;
  { uint32_t tg=R(12); c->pr=0x8c04baacu; R(4)+=R(15); sh4_call(c,tg); }
  {  goto L8c04bb04; }
L8c04bae0:;
  R(1)=0x8c0c6b2cu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04bb04;
  R(4)=LD32(R(10));
  { uint32_t tg=R(11); c->pr=0x8c04baeeu; R(4)+=0x7u; sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x80u;
  R(4)=0x80u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,14,R(0)+R(15));
  fp_ld(c,4,R(13));
  { uint32_t tg=R(12); c->pr=0x8c04bb04u; R(4)+=R(15); sh4_call(c,tg); }
L8c04bb04:;
  R(4)=0x8c0c5a88u;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=c->t; fp_st(c,2,R(13)); if(k) goto L8c04bb1e; }
  R(0)=0x8c04bbd8u;
  fp_ld(c,1,R(13));
  fp_ld(c,2,R(0));
  fp_cmp(c,1,1,2);
  if(!c->t) goto L8c04bb2e;
L8c04bb1e:;
  fp_ld(c,3,R(4));
  fp_mov(c,0,12);
  fp_unary(c,0,3);
  fp_mov(c,2,3);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(13));
L8c04bb2e:;
  R(0)=0xd8u;
  R(1)=0x60u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  ST32(c->gbr+88,R(0));
L8c04bb3c:;
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04bb98;
  R(1)=0x8c2e2484u;
  { uint32_t tg=R(11); c->pr=0x8c04bb4cu; R(4)=LD32(R(1)); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x8c04bbe4u;
  fp_ld(c,3,R(0));
  R(0)=0x18cu;
  R(14)=0x8c0c5a64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c04bbe8u;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  R(4)=0x18cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c04bbecu;
  fp_ld(c,3,R(0));
  R(0)=0x194u;
  fp_st(c,3,R(0)+R(15));
  fp_ld(c,4,R(14));
  { uint32_t tg=R(12); c->pr=0x8c04bb70u; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0x8c0c5a68u;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  fp_mov(c,3,2);
  fp_cmp(c,1,3,13);
  { uint32_t k=c->t; fp_st(c,2,R(14)); if(k) goto L8c04bb88; }
  fp_ld(c,2,R(14));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c04bb98;
L8c04bb88:;
  fp_ld(c,3,R(4));
  fp_mov(c,0,12);
  fp_unary(c,0,3);
  fp_mov(c,2,3);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(14));
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
L8c04bb98:;
  R(3)=0x8c0386e0u;
  { c->pr=0x8c04bb9eu;  f_8c0386e0(c); }
  R(2)=0x8c047640u;
  { c->pr=0x8c04bba4u; R(4)=0x0u; f_8c047640(c); }
  R(1)=0x1a4u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04ba20(SH4Ctx *c) {
  R(9)=0x5u;
  R(4)+=R(9);
  { uint32_t tg=R(11); c->pr=0x8c04ba28u; R(4)+=0x1u; sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x18cu;
  R(4)=0x18cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8c04baccu;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x194u;
  fp_st(c,14,R(0)+R(15));
  fp_ld(c,4,R(13));
  { uint32_t tg=R(12); c->pr=0x8c04ba42u; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=LD32(R(10));
  { uint32_t tg=R(11); c->pr=0x8c04ba48u; R(4)+=R(9); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x18cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8c04bad0u;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x194u;
  fp_st(c,14,R(0)+R(15));
  { fp_mov(c,4,13); goto L8c04baa6; }
L8c04baa6:;
  R(4)=0x18cu;
  { uint32_t tg=R(12); c->pr=0x8c04baacu; R(4)+=R(15); sh4_call(c,tg); }
  {  goto L8c04bb04; }
L8c04bb04:;
  R(4)=0x8c0c5a88u;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=c->t; fp_st(c,2,R(13)); if(k) goto L8c04bb1e; }
  R(0)=0x8c04bbd8u;
  fp_ld(c,1,R(13));
  fp_ld(c,2,R(0));
  fp_cmp(c,1,1,2);
  if(!c->t) goto L8c04bb2e;
L8c04bb1e:;
  fp_ld(c,3,R(4));
  fp_mov(c,0,12);
  fp_unary(c,0,3);
  fp_mov(c,2,3);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(13));
L8c04bb2e:;
  R(0)=0xd8u;
  R(1)=0x60u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  ST32(c->gbr+88,R(0));
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04bb98;
  R(1)=0x8c2e2484u;
  { uint32_t tg=R(11); c->pr=0x8c04bb4cu; R(4)=LD32(R(1)); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x8c04bbe4u;
  fp_ld(c,3,R(0));
  R(0)=0x18cu;
  R(14)=0x8c0c5a64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c04bbe8u;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  R(4)=0x18cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c04bbecu;
  fp_ld(c,3,R(0));
  R(0)=0x194u;
  fp_st(c,3,R(0)+R(15));
  fp_ld(c,4,R(14));
  { uint32_t tg=R(12); c->pr=0x8c04bb70u; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0x8c0c5a68u;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  fp_mov(c,3,2);
  fp_cmp(c,1,3,13);
  { uint32_t k=c->t; fp_st(c,2,R(14)); if(k) goto L8c04bb88; }
  fp_ld(c,2,R(14));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c04bb98;
L8c04bb88:;
  fp_ld(c,3,R(4));
  fp_mov(c,0,12);
  fp_unary(c,0,3);
  fp_mov(c,2,3);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(14));
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
L8c04bb98:;
  R(3)=0x8c0386e0u;
  { c->pr=0x8c04bb9eu;  f_8c0386e0(c); }
  R(2)=0x8c047640u;
  { c->pr=0x8c04bba4u; R(4)=0x0u; f_8c047640(c); }
  R(1)=0x1a4u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04bae0(SH4Ctx *c) {
  R(1)=0x8c0c6b2cu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04bb04;
  R(4)=LD32(R(10));
  { uint32_t tg=R(11); c->pr=0x8c04baeeu; R(4)+=0x7u; sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x80u;
  R(4)=0x80u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,14,R(0)+R(15));
  fp_ld(c,4,R(13));
  { uint32_t tg=R(12); c->pr=0x8c04bb04u; R(4)+=R(15); sh4_call(c,tg); }
L8c04bb04:;
  R(4)=0x8c0c5a88u;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=c->t; fp_st(c,2,R(13)); if(k) goto L8c04bb1e; }
  R(0)=0x8c04bbd8u;
  fp_ld(c,1,R(13));
  fp_ld(c,2,R(0));
  fp_cmp(c,1,1,2);
  if(!c->t) goto L8c04bb2e;
L8c04bb1e:;
  fp_ld(c,3,R(4));
  fp_mov(c,0,12);
  fp_unary(c,0,3);
  fp_mov(c,2,3);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(13));
L8c04bb2e:;
  R(0)=0xd8u;
  R(1)=0x60u;
  R(0)+=R(14);
  ST32(c->gbr+12,R(0));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  ST32(c->gbr+88,R(0));
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04bb98;
  R(1)=0x8c2e2484u;
  { uint32_t tg=R(11); c->pr=0x8c04bb4cu; R(4)=LD32(R(1)); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x8c04bbe4u;
  fp_ld(c,3,R(0));
  R(0)=0x18cu;
  R(14)=0x8c0c5a64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c04bbe8u;
  fp_ld(c,3,R(0));
  R(0)=0x190u;
  R(4)=0x18cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c04bbecu;
  fp_ld(c,3,R(0));
  R(0)=0x194u;
  fp_st(c,3,R(0)+R(15));
  fp_ld(c,4,R(14));
  { uint32_t tg=R(12); c->pr=0x8c04bb70u; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0x8c0c5a68u;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  fp_mov(c,3,2);
  fp_cmp(c,1,3,13);
  { uint32_t k=c->t; fp_st(c,2,R(14)); if(k) goto L8c04bb88; }
  fp_ld(c,2,R(14));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c04bb98;
L8c04bb88:;
  fp_ld(c,3,R(4));
  fp_mov(c,0,12);
  fp_unary(c,0,3);
  fp_mov(c,2,3);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(14));
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
L8c04bb98:;
  R(3)=0x8c0386e0u;
  { c->pr=0x8c04bb9eu;  f_8c0386e0(c); }
  R(2)=0x8c047640u;
  { c->pr=0x8c04bba4u; R(4)=0x0u; f_8c047640(c); }
  R(1)=0x1a4u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04bc00(SH4Ctx *c) {
  R(6)=LD32(R(4)+4);
  R(5)=0x0u;
  R(6)=LD32(R(6));
  { R(4)=R(6); goto L8c04bc2e; }
L8c04bc0a:;
  R(6)=R(4);
  R(7)=LD32(R(6));
  R(1)=0x25u;
  R(0)=LD32(R(7)+4);
  R(6)=0x2u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(6))==0;
  if(c->t) goto L8c04bc22;
  { R(0)=0x1u; goto L8c04bc24; }
L8c04bc22:;
  R(0)=0x0u;
L8c04bc24:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=LD32(R(4)+4); if(k) goto L8c04bc2e; }
  R(5)+=0x1u;
L8c04bc2e:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c04bc0a;
  { R(0)=R(5); return; }
}
void f_8c04bc36(SH4Ctx *c) {
  R(3)=0x8c123cf0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(3));
  R(2)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c04bc4au; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(14)=R(0);
  { c->pr=0x8c04bc50u; R(4)=R(0); f_8c04bc00(c); }
  R(4)=LD32(R(14)+4);
  R(12)=R(0);
  R(13)=LD32(R(4)+52);
  R(4)=LD32(R(4)+48);
  { R(14)=R(4); goto L8c04bc6e; }
L8c04bc5c:;
  R(5)=R(14);
  { c->pr=0x8c04bc62u; R(4)=LD32(R(5)); f_8c04bc00(c); }
  R(5)=R(14);
  R(5)+=0x4u;
  R(4)=R(14);
  R(14)=R(5);
  R(12)+=R(0);
  R(13)+=0xffffffffu;
L8c04bc6e:;
  c->t=(int32_t)R(13)>0;
  if(c->t) goto L8c04bc5c;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04bc7e(SH4Ctx *c) {
  R(3)=0x8c2d03b0u;
  R(5)=LD32(R(4)+28);
  R(6)=LD32(R(3));
  c->t=R(5)==R(6);
  if(c->t) goto L8c04bc8e;
  R(2)=LD32(R(5)+28);
  c->t=R(2)==R(6);
  if(!c->t) goto L8c04bcb6;
L8c04bc8e:;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04bc98;
  { R(0)=0x0u; goto L8c04bc9a; }
L8c04bc98:;
  R(0)=LD32(R(4)+4);
L8c04bc9a:;
  R(0)=LD32(R(0)+4);
  R(1)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c04bcaa;
  { R(0)=0x1u; goto L8c04bcac; }
L8c04bcaa:;
  R(0)=0x0u;
L8c04bcac:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04bcb6;
  { R(0)=0x1u; return; }
L8c04bcb6:;
  R(0)=0x0u;
  {  return; }
}
void f_8c04bce0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c2d03b0u;
  R(11)=R(4);
  R(9)=0x8c064a66u;
  R(4)=LD32(R(3));
  R(2)=LD32(R(4)+8);
  R(12)=R(2);
  ST32(R(15),R(2));
  { c->pr=0x8c04bd04u; R(4)=R(2); f_8c064a66(c); }
  R(8)=0x8c064848u;
  c->t=(R(12)&R(12))==0;
  R(10)=R(0);
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c04bd12; }
  {  goto L8c04be10; }
L8c04bd12:;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04be04;
  R(3)=0x8c0585d0u;
  { c->pr=0x8c04bd1eu; R(4)=R(12); f_8c0585d0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04be04;
  { uint32_t tg=R(8); c->pr=0x8c04bd28u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(12)+4);
  R(0)=0x24u;
  R(3)=0x8c2d03b8u;
  R(1)=LD32(R(2)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=LD32(R(3)); if(k) goto L8c04bd9c; }
  R(4)=R(12);
  R(1)=LD32(R(4)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04bd46;
  R(1)=LD32(R(4)+24);
  R(2)=LD32(R(4)+20);
  ST32(R(2)+24,R(1));
L8c04bd46:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04bd52;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c04bd52:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04bd7c;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c04bd6e;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c04bd6e:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c04bd7c;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c04bd7c:;
  ST32(R(4)+20,R(13));
  ST32(R(4)+24,R(13));
  ST32(R(4)+28,R(13));
  ST32(R(4)+24,R(13));
  R(2)=LD32(R(14)+8);
  ST32(R(4)+20,R(2));
  ST32(R(4)+28,R(14));
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04bd94;
  { ST32(R(14)+12,R(4)); goto L8c04bd98; }
L8c04bd94:;
  R(2)=LD32(R(14)+8);
  ST32(R(2)+24,R(4));
L8c04bd98:;
  { ST32(R(14)+8,R(4)); goto L8c04bdfe; }
L8c04bd9c:;
  R(4)=R(12);
  R(1)=LD32(R(4)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04bdaa;
  R(1)=LD32(R(4)+24);
  R(2)=LD32(R(4)+20);
  ST32(R(2)+24,R(1));
L8c04bdaa:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04bdb6;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c04bdb6:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04bde0;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c04bdd2;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c04bdd2:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c04bde0;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c04bde0:;
  ST32(R(4)+20,R(13));
  ST32(R(4)+24,R(13));
  ST32(R(4)+28,R(13));
  ST32(R(4)+20,R(13));
  R(2)=LD32(R(14)+12);
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(14));
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04bdf8;
  { ST32(R(14)+8,R(4)); goto L8c04bdfc; }
L8c04bdf8:;
  R(2)=LD32(R(14)+12);
  ST32(R(2)+20,R(4));
L8c04bdfc:;
  ST32(R(14)+12,R(4));
L8c04bdfe:;
  R(3)=LD32(R(14)+16);
  R(3)+=0x1u;
  ST32(R(14)+16,R(3));
L8c04be04:;
  R(12)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c04be0au; R(4)=R(10); sh4_call(c,tg); }
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; R(10)=R(0); if(k) goto L8c04bd12; }
L8c04be10:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c04be3c;
  R(4)=R(11);
  R(2)=0x8c123b6cu;
  R(3)=LD32(R(4)+4);
  R(0)=0x66u;
  R(14)=LD32(R(2));
  ST8(R(3)+R(0),R(14));
  R(5)=LD32(R(4)+4);
  R(6)=LD32(R(4)+4);
  R(5)=LD32(R(5)+52);
  { R(6)=LD32(R(6)+48); goto L8c04be36; }
L8c04be2a:;
  R(6)=R(4);
  R(13)=LD32(R(6));
  R(6)+=0x4u;
  R(2)=LD32(R(13)+4);
  R(5)+=0xffffffffu;
  ST8(R(2)+R(0),R(14));
L8c04be36:;
  c->t=(int32_t)R(5)>0;
  { uint32_t k=c->t; R(4)=R(6); if(k) goto L8c04be2a; }
L8c04be3c:;
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
void f_8c04be80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c59ccu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04bf1c;
  R(2)=0x8c2d03b8u;
  R(12)=0x8c2d105cu;
  R(13)=LD32(R(2));
  R(11)=0x8c054a00u;
  R(13)=LD32(R(13)+8);
  R(10)=0x8c018400u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(9)=0x4u; if(k) goto L8c04bf1c; }
L8c04beaa:;
  R(0)=LD32(R(13)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(9))==0;
  if(c->t) goto L8c04bebc;
  { R(0)=0x1u; goto L8c04bebe; }
L8c04bebc:;
  R(0)=0x0u;
L8c04bebe:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04bf16;
  R(2)=LD32(R(13)+4);
  R(0)=0x24u;
  R(3)=LD32(R(2)+4);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04befc;
  R(14)=LD32(R(13)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c04befc;
L8c04bed6:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04bef6;
  R(5)=LD32(R(14)+4);
  { uint32_t tg=R(11); c->pr=0x8c04bee2u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0xfbu;
  R(4)=LD32(R(4)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
  R(5)=LD32(R(12));
  { uint32_t tg=R(10); c->pr=0x8c04bef6u; R(4)=R(14); sh4_call(c,tg); }
L8c04bef6:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04bed6;
L8c04befc:;
  R(5)=LD32(R(13)+4);
  { uint32_t tg=R(11); c->pr=0x8c04bf02u; R(4)=R(13); sh4_call(c,tg); }
  R(4)=LD32(R(13)+4);
  R(0)=0x25u;
  R(3)=0xfbu;
  R(4)=LD32(R(4)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
  R(5)=LD32(R(12));
  { uint32_t tg=R(10); c->pr=0x8c04bf16u; R(4)=R(13); sh4_call(c,tg); }
L8c04bf16:;
  R(13)=LD32(R(13)+20);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c04beaa;
L8c04bf1c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04bf60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x25u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(4)+4);
  R(7)=LD32(R(13)+4);
  R(6)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(0)=0x2u;
  R(6)=R(6)&0xFF;
  c->t=(R(0)&R(6))==0;
  if(c->t) goto L8c04bf78;
  { R(0)=0x1u; goto L8c04bf7a; }
L8c04bf78:;
  R(0)=0x0u;
L8c04bf7a:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04bf84;
  {  goto L8c04c0ea; }
L8c04bf84:;
  R(2)=R(5)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04bfa8;
  R(2)=0x1u;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c04bf94;
  { R(3)=0x1u; goto L8c04bf96; }
L8c04bf94:;
  R(3)=0x0u;
L8c04bf96:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04bfbe;
  R(0)=0x11u;
  R(2)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(3)=0x2u;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c04bfbe;
L8c04bfa8:;
  R(2)=0x1u;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c04bfb2;
  { R(1)=0x1u; goto L8c04bfb4; }
L8c04bfb2:;
  R(1)=0x0u;
L8c04bfb4:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04bfbe;
  {  goto L8c04c0ea; }
L8c04bfbe:;
  R(0)=0x8c2d03b8u;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(0));
  c->t=R(3)==R(2);
  if(c->t) goto L8c04bfcc;
  {  goto L8c04c0cc; }
L8c04bfcc:;
  R(2)=LD32(R(4)+4);
  R(0)=0x24u;
  R(3)=0x8c2d03b0u;
  R(7)=0x0u;
  R(1)=LD32(R(2)+4);
  R(2)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=LD32(R(3)); if(k) goto L8c04c042; }
  R(6)=R(4);
  R(2)=LD32(R(6)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04bfec;
  R(1)=LD32(R(6)+24);
  R(2)=LD32(R(6)+20);
  ST32(R(2)+24,R(1));
L8c04bfec:;
  R(3)=LD32(R(6)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04bff8;
  R(2)=LD32(R(6)+20);
  R(3)=LD32(R(6)+24);
  ST32(R(3)+20,R(2));
L8c04bff8:;
  R(3)=LD32(R(6)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04c022;
  R(3)=LD32(R(6)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(6)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(6);
  if(!c->t) goto L8c04c014;
  R(3)=LD32(R(6)+20);
  R(1)=LD32(R(6)+28);
  ST32(R(1)+8,R(3));
L8c04c014:;
  R(2)=LD32(R(6)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c04c022;
  R(3)=LD32(R(6)+24);
  R(1)=LD32(R(6)+28);
  ST32(R(1)+12,R(3));
L8c04c022:;
  ST32(R(6)+20,R(7));
  ST32(R(6)+24,R(7));
  ST32(R(6)+28,R(7));
  ST32(R(6)+24,R(7));
  R(2)=LD32(R(14)+8);
  ST32(R(6)+20,R(2));
  ST32(R(6)+28,R(14));
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04c03a;
  { ST32(R(14)+12,R(6)); goto L8c04c03e; }
L8c04c03a:;
  R(2)=LD32(R(14)+8);
  ST32(R(2)+24,R(6));
L8c04c03e:;
  { ST32(R(14)+8,R(6)); goto L8c04c0c6; }
L8c04c042:;
  R(6)=R(4);
  R(1)=LD32(R(6)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04c050;
  R(1)=LD32(R(6)+24);
  R(2)=LD32(R(6)+20);
  ST32(R(2)+24,R(1));
L8c04c050:;
  R(3)=LD32(R(6)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04c05c;
  R(2)=LD32(R(6)+20);
  R(3)=LD32(R(6)+24);
  ST32(R(3)+20,R(2));
L8c04c05c:;
  R(3)=LD32(R(6)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04c086;
  R(3)=LD32(R(6)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(6)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(6);
  if(!c->t) goto L8c04c078;
  R(3)=LD32(R(6)+20);
  R(1)=LD32(R(6)+28);
  ST32(R(1)+8,R(3));
L8c04c078:;
  R(2)=LD32(R(6)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c04c086;
  R(3)=LD32(R(6)+24);
  R(1)=LD32(R(6)+28);
  ST32(R(1)+12,R(3));
L8c04c086:;
  ST32(R(6)+20,R(7));
  ST32(R(6)+24,R(7));
  ST32(R(6)+28,R(7));
  ST32(R(6)+20,R(7));
  R(2)=LD32(R(14)+12);
  ST32(R(6)+24,R(2));
  ST32(R(6)+28,R(14));
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04c0c0;
  { ST32(R(14)+8,R(6)); goto L8c04c0c4; }
L8c04c0c0:;
  R(2)=LD32(R(14)+12);
  ST32(R(2)+20,R(6));
L8c04c0c4:;
  ST32(R(14)+12,R(6));
L8c04c0c6:;
  R(3)=LD32(R(14)+16);
  R(3)+=0x1u;
  ST32(R(14)+16,R(3));
L8c04c0cc:;
  R(6)=LD32(R(13)+4);
  R(0)=0x25u;
  R(5)=R(5)&0xFF;
  R(2)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=0x4u;
  c->t=(R(5)&R(5))==0;
  R(2)|=R(3);
  { uint32_t k=c->t; ST8(R(6)+R(0),R(2)); if(k) goto L8c04c0ea; }
  R(14)=LD32(R(4)+4);
  R(3)=0x800u;
  R(14)=LD32(R(14)+4);
  R(4)=LD32(R(14)+32);
  R(4)|=R(3);
  ST32(R(14)+32,R(4));
L8c04c0ea:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c0f0(SH4Ctx *c) {
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
  R(2)=R(13)&0xFF;
  R(3)=0x8c123b6cu;
  c->t=(R(2)&R(2))==0;
  R(10)=R(4);
  { uint32_t k=!c->t; R(11)=LD32(R(3)); if(k) goto L8c04c120; }
  R(9)=LD32(R(10)+4);
  R(0)=0x66u;
  R(2)=(uint32_t)(int32_t)(int8_t)R(11);
  R(9)=(int32_t)(int8_t)LD8(R(9)+R(0));
  c->t=R(9)==R(2);
  if(!c->t) goto L8c04c120;
  { R(9)=0x0u; goto L8c04c122; }
L8c04c120:;
  R(9)=0x1u;
L8c04c122:;
  R(4)=R(10);
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5));
  { R(14)=R(5); goto L8c04c138; }
L8c04c12c:;
  R(4)=R(14);
  R(12)=LD32(R(4));
  R(5)=R(9);
  { c->pr=0x8c04c136u; R(4)=R(12); f_8c04bf60(c); }
  R(14)=LD32(R(14)+4);
L8c04c138:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c12c;
  R(5)=R(10);
  R(4)=LD32(R(5)+4);
  R(9)=LD32(R(4)+52);
  R(4)=LD32(R(4)+48);
  { R(10)=R(4); goto L8c04c1be; }
L8c04c180:;
  R(2)=R(13)&0xFF;
  R(4)=R(10);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(14)=LD32(R(4)); if(k) goto L8c04c19a; }
  R(8)=LD32(R(14)+4);
  R(0)=0x66u;
  R(3)=(uint32_t)(int32_t)(int8_t)R(11);
  R(8)=(int32_t)(int8_t)LD8(R(8)+R(0));
  c->t=R(8)==R(3);
  if(!c->t) goto L8c04c19a;
  { R(8)=0x0u; goto L8c04c19c; }
L8c04c19a:;
  R(8)=0x1u;
L8c04c19c:;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  { R(14)=R(4); goto L8c04c1b0; }
L8c04c1a4:;
  R(4)=R(14);
  R(12)=LD32(R(4));
  R(5)=R(8);
  { c->pr=0x8c04c1aeu; R(4)=R(12); f_8c04bf60(c); }
  R(14)=LD32(R(14)+4);
L8c04c1b0:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c1a4;
  R(5)=R(10);
  R(5)+=0x4u;
  R(4)=R(10);
  R(10)=R(5);
  R(9)+=0xffffffffu;
L8c04c1be:;
  c->t=(int32_t)R(9)>0;
  if(c->t) goto L8c04c180;
  R(2)=0x8c082782u;
  { c->pr=0x8c04c1c8u;  f_8c082782(c); }
  R(12)=0x8c082764u;
  R(14)=R(0);
  R(10)=0x8c082788u;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c04c1e6;
L8c04c1d2:;
  { uint32_t tg=R(12); c->pr=0x8c04c1d6u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  { c->pr=0x8c04c1dcu; R(5)=R(13); f_8c04bf60(c); }
  { uint32_t tg=R(10); c->pr=0x8c04c1e0u; R(4)=R(14); sh4_call(c,tg); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c1d2;
L8c04c1e6:;
  R(4)=0x8c0c423cu;
  R(10)=LD32(R(4));
  R(12)=LD32(R(4)+24);
  R(10)<<=2;
  R(10)+=R(12);
  c->t=R(12)>=R(10);
  { uint32_t k=c->t; R(14)=LD32(R(4)+16); if(k) goto L8c04c23e; }
L8c04c1f6:;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(2)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04c236;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04c230;
  R(1)=LD32(R(14)+4);
  R(3)=LD32(R(1)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04c22c;
  R(3)=0x8c055c1au;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c04c214u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c22c;
  R(3)=0x8c055c1au;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c04c220u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(2)=LD32(R(0)+4);
  R(0)=0x66u;
  R(3)=(int32_t)(int8_t)LD8(R(2)+R(0));
  R(2)=(uint32_t)(int32_t)(int8_t)R(11);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c04c230;
L8c04c22c:;
  { R(5)=0x0u; goto L8c04c232; }
L8c04c230:;
  R(5)=0x1u;
L8c04c232:;
  { c->pr=0x8c04c236u; R(4)=R(14); f_8c04bf60(c); }
L8c04c236:;
  R(12)+=0x4u;
  c->t=R(12)>=R(10);
  { uint32_t k=!c->t; R(14)+=0x48u; if(k) goto L8c04c1f6; }
L8c04c23e:;
  R(2)=0x8c0c94d4u;
  R(11)=0x8c0646aeu;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  ST16(R(15),R(3));
  R(12)=(int32_t)(int16_t)LD16(R(15));
  c->t=(int32_t)R(12)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c04c260; }
L8c04c24e:;
  { uint32_t tg=R(11); c->pr=0x8c04c252u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  { c->pr=0x8c04c258u; R(5)=R(13); f_8c04bf60(c); }
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(12);
  if(!c->t) goto L8c04c24e;
L8c04c260:;
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
void f_8c04c274(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c123cf0u;
  R(2)=0x8c055c1au;
  R(4)=LD32(R(3));
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c04c286u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(14)=0x8c2d03c0u;
  R(5)=R(0);
  R(4)=LD32(R(14));
  c->t=R(5)==R(4);
  if(c->t) goto L8c04c2ae;
  R(3)=0x8c2d03c4u;
  c->t=(R(4)&R(4))==0;
  R(0)=c->t;
  ST8(R(15),R(0));
  ST32(R(3),R(4));
  ST32(R(14),R(5));
  { c->pr=0x8c04c2a0u; R(4)=LD32(R(3)); f_8c04bce0(c); }
  R(5)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c04c2a6u; R(4)=LD32(R(14)); f_8c04c0f0(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04be80(c); return; } }
L8c04c2ae:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c300(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2d0f54u;
  { c->pr=0x8c04c308u; R(4)=LD32(R(3)); f_8c04c336(c); }
  R(1)=0x8c2d0f50u;
  { c->pr=0x8c04c30eu; R(4)=LD32(R(1)); f_8c04c34e(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0c540cu;
  R(2)=0x1u;
  { ST32(R(3),R(2)); return; }
}
void f_8c04c318(SH4Ctx *c) {
  R(1)=0x8c2d0f40u;
  { ST32(R(1),R(4)); return; }
}
void f_8c04c31e(SH4Ctx *c) {
  R(2)=0x8c2d0f44u;
  R(3)=R(4);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c123c48u;
  ST32(R(2),R(4));
  R(0)=LD32(R(15));
  R(4)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  R(1)=0x8c03703au;
  R(5)=c->t;
  { R(15)+=0x4u; { f_8c03703a(c); return; } }
}
void f_8c04c336(SH4Ctx *c) {
  R(5)=0x7fu;
  c->t=R(4)>R(5);
  if(!c->t) goto L8c04c33e;
  R(4)=R(5);
L8c04c33e:;
  R(3)=0x8c2d0f54u;
  R(1)=0x8c2d106cu;
  R(2)=R(3);
  ST32(R(3),R(4));
  R(3)=0x8c018cc4u;
  R(5)=LD32(R(2));
  { R(4)=LD32(R(1)); { f_8c018cc4(c); return; } }
}
void f_8c04c34e(SH4Ctx *c) {
  R(5)=0x7fu;
  c->t=R(4)>R(5);
  if(!c->t) goto L8c04c356;
  R(4)=R(5);
L8c04c356:;
  R(3)=0x8c2d0f50u;
  R(1)=0x8c2d1068u;
  R(2)=R(3);
  ST32(R(3),R(4));
  R(3)=0x8c018cc4u;
  R(5)=LD32(R(2));
  { R(4)=LD32(R(1)); { f_8c018cc4(c); return; } }
}
void f_8c04c3c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04c3c8u; R(4)=0x7fu; f_8c04c336(c); }
  { c->pr=0x8c04c3ccu; R(4)=0x7fu; f_8c04c34e(c); }
  R(0)=0xb6cu;
  R(4)=0x0u;
  R(14)=0x8c2d03d8u;
  R(5)=R(4);
  R(3)=0x8c123c48u;
  R(2)=0x8c03703au;
  ST32(R(14)+R(0),R(4));
  { c->pr=0x8c04c3deu; R(4)=LD32(R(3)); f_8c03703a(c); }
  R(3)=0x8c07a9a0u;
  { c->pr=0x8c04c3e4u; R(4)=0x32u; f_8c07a9a0(c); }
  R(2)=0x8c010b08u;
  { c->pr=0x8c04c3eau;  f_8c010b08(c); }
  R(1)=0xb70u;
  R(1)+=R(14);
  ST32(R(1),R(0));
  R(0)=0xb6cu;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x8u;
  ST32(R(14)+R(0),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c3fe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=0x8c0c5accu;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04c424;
  R(3)=0x8c04d8dau;
  { c->pr=0x8c04c41au; R(4)=0x0u; f_8c04d8da(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(11)=0x1u; if(k) goto L8c04c428; }
  ST32(R(12),R(11));
L8c04c424:;
  { R(0)=0x0u; goto L8c04c60c; }
L8c04c428:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c04c460;
  ST32(R(12),R(11));
  { R(0)=0x2u; goto L8c04c60c; }
L8c04c460:;
  R(3)=0x8c0b9edcu;
  R(2)=0x100u;
  R(10)=0x8c2d03d8u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)+=R(10);
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(0)=0x8c0c5d14u;
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(4)=0x100u;
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(5)=0x8c0b9eecu;
  ST8(R(2),R(1));
  R(2)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0c5f14u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c067480u;
  R(7)=0x8c0b9f18u;
  R(6)=0x8c0b9efcu;
  { c->pr=0x8c04c4d6u; R(4)+=R(10); f_8c067480(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(15)+=0x18u; if(k) goto L8c04c4e2; }
  {  goto L8c04c5b6; }
L8c04c4e2:;
  R(4)=0xb6cu;
  R(5)=0x1u;
  R(13)=0x8c0676b6u;
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04c4f0u; R(4)+=R(10); f_8c0676b6(c); }
  R(3)=0x8c010b08u;
  { c->pr=0x8c04c4f6u;  f_8c010b08(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c540;
  { R(2)=0x1u; goto L8c04c542; }
L8c04c540:;
  R(2)=0x0u;
L8c04c542:;
  R(6)=0x4u;
  ST32(R(15),R(2));
  R(5)=0x1u;
  R(7)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c04c54eu; R(4)=R(15); sh4_call(c,tg); }
  R(3)=0x8c07a9c0u;
  { c->pr=0x8c04c554u;  f_8c07a9c0(c); }
  R(6)=0x4u;
  ST32(R(15),R(0));
  R(5)=0x1u;
  R(7)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c04c560u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=0xb78u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c56cu; R(4)+=R(10); sh4_call(c,tg); }
  R(4)=0xb7cu;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c578u; R(4)+=R(10); sh4_call(c,tg); }
  R(4)=0xb80u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c584u; R(4)+=R(10); sh4_call(c,tg); }
  R(4)=0x8c0c5ad0u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c04c58eu; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5404u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c04c598u; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5408u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c04c5a2u; R(5)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c0677e0u;
  { c->pr=0x8c04c5a8u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c5b0;
  { R(14)=0x0u; goto L8c04c5ba; }
L8c04c5b0:;
  R(14)=R(11);
  { ST32(R(12),R(11)); goto L8c04c5ba; }
L8c04c5b6:;
  R(14)=0x2u;
  ST32(R(12),R(11));
L8c04c5ba:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c600;
  R(4)=0x8c0be644u;
  { R(5)=0xau; goto L8c04c604; }
L8c04c600:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04c604:;
  R(2)=0x8c05b4e0u;
  { c->pr=0x8c04c60au;  f_8c05b4e0(c); }
  R(0)=R(14);
L8c04c60c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c61c(SH4Ctx *c) {
  R(4)=0x8c2d04d8u;
  {  goto L8c04c622; }
L8c04c622:;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(10)=0x8c0c5accu;
  R(3)=LD32(R(10));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04c6f0;
  R(3)=0x8c04d8dau;
  { c->pr=0x8c04c63eu; R(4)=0x0u; f_8c04d8da(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(11)=0x1u; if(k) goto L8c04c64a; }
  { ST32(R(10),R(11)); goto L8c04c6f0; }
L8c04c64a:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c04c680;
  ST32(R(10),R(11));
  { R(0)=0x2u; goto L8c04c83a; }
L8c04c680:;
  R(3)=0x8c0b9edcu;
  R(2)=0x100u;
  R(13)=0x8c2d03d8u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)+=R(13);
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)=0x8c05cdf8u;
  { c->pr=0x8c04c6dau;  f_8c05cdf8(c); }
  R(4)=R(0);
  R(5)=0x100u;
  ST32(R(15)+8,R(0));
  R(4)<<=2;
  R(0)=0x8c0bb6e8u;
  R(5)+=R(13);
  R(3)=0x8c067440u;
  { c->pr=0x8c04c6ecu; R(4)=LD32(R(4)+R(0)); f_8c067440(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c720;
L8c04c6f0:;
  { R(0)=0x0u; goto L8c04c83a; }
L8c04c720:;
  R(3)=0x8c06756au;
  R(4)=0x100u;
  { c->pr=0x8c04c728u; R(4)+=R(13); f_8c06756a(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c732;
  {  goto L8c04c820; }
L8c04c732:;
  R(4)=0xb74u;
  R(5)=0x1u;
  R(12)=0x8c06777eu;
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04c740u; R(4)+=R(13); f_8c06777e(c); }
  R(4)=0xb70u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c74cu; R(4)+=R(13); sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c758u; R(4)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c07a9a0u;
  { c->pr=0x8c04c75eu; R(4)=LD32(R(15)+4); f_8c07a9a0(c); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c768u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c04c76eu; R(4)=R(4)&0xFF; f_8c04c34e(c); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c778u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c04c77eu; R(4)=R(4)&0xFF; f_8c04c336(c); }
  R(4)=0xb80u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c78au; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x8c0c5ad0u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c794u; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5404u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c79eu; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5408u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c7a8u; R(5)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c0c540cu;
  R(2)=0x1u;
  ST32(R(3),R(2));
  R(2)=0x8c0677e0u;
  { c->pr=0x8c04c7b4u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c7cc;
  R(0)=0xb7cu;
  { c->pr=0x8c04c7beu; R(4)=LD32(R(13)+R(0)); f_8c04c336(c); }
  R(0)=0xb78u;
  { c->pr=0x8c04c7c4u; R(4)=LD32(R(13)+R(0)); f_8c04c34e(c); }
  R(2)=0x8c0c540cu;
  ST32(R(2),R(11));
  { R(14)=0x0u; goto L8c04c824; }
L8c04c7cc:;
  ST32(R(10),R(11));
  { R(14)=0x2u; goto L8c04c824; }
L8c04c820:;
  R(14)=0x3u;
  ST32(R(10),R(11));
L8c04c824:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c82e;
  R(4)=0x8c0be044u;
  { R(5)=0xau; goto L8c04c832; }
L8c04c82e:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04c832:;
  R(2)=0x8c05b4e0u;
  { c->pr=0x8c04c838u;  f_8c05b4e0(c); }
  R(0)=R(14);
L8c04c83a:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c622(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(10)=0x8c0c5accu;
  R(3)=LD32(R(10));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04c6f0;
  R(3)=0x8c04d8dau;
  { c->pr=0x8c04c63eu; R(4)=0x0u; f_8c04d8da(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(11)=0x1u; if(k) goto L8c04c64a; }
  { ST32(R(10),R(11)); goto L8c04c6f0; }
L8c04c64a:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c04c680;
  ST32(R(10),R(11));
  { R(0)=0x2u; goto L8c04c83a; }
L8c04c680:;
  R(3)=0x8c0b9edcu;
  R(2)=0x100u;
  R(13)=0x8c2d03d8u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)+=R(13);
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)=0x8c05cdf8u;
  { c->pr=0x8c04c6dau;  f_8c05cdf8(c); }
  R(4)=R(0);
  R(5)=0x100u;
  ST32(R(15)+8,R(0));
  R(4)<<=2;
  R(0)=0x8c0bb6e8u;
  R(5)+=R(13);
  R(3)=0x8c067440u;
  { c->pr=0x8c04c6ecu; R(4)=LD32(R(4)+R(0)); f_8c067440(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c720;
L8c04c6f0:;
  { R(0)=0x0u; goto L8c04c83a; }
L8c04c720:;
  R(3)=0x8c06756au;
  R(4)=0x100u;
  { c->pr=0x8c04c728u; R(4)+=R(13); f_8c06756a(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c732;
  {  goto L8c04c820; }
L8c04c732:;
  R(4)=0xb74u;
  R(5)=0x1u;
  R(12)=0x8c06777eu;
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04c740u; R(4)+=R(13); f_8c06777e(c); }
  R(4)=0xb70u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c74cu; R(4)+=R(13); sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c758u; R(4)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c07a9a0u;
  { c->pr=0x8c04c75eu; R(4)=LD32(R(15)+4); f_8c07a9a0(c); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c768u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c04c76eu; R(4)=R(4)&0xFF; f_8c04c34e(c); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c778u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c04c77eu; R(4)=R(4)&0xFF; f_8c04c336(c); }
  R(4)=0xb80u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c78au; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x8c0c5ad0u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c794u; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5404u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c79eu; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5408u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c7a8u; R(5)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c0c540cu;
  R(2)=0x1u;
  ST32(R(3),R(2));
  R(2)=0x8c0677e0u;
  { c->pr=0x8c04c7b4u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c7cc;
  R(0)=0xb7cu;
  { c->pr=0x8c04c7beu; R(4)=LD32(R(13)+R(0)); f_8c04c336(c); }
  R(0)=0xb78u;
  { c->pr=0x8c04c7c4u; R(4)=LD32(R(13)+R(0)); f_8c04c34e(c); }
  R(2)=0x8c0c540cu;
  ST32(R(2),R(11));
  { R(14)=0x0u; goto L8c04c824; }
L8c04c7cc:;
  ST32(R(10),R(11));
  { R(14)=0x2u; goto L8c04c824; }
L8c04c820:;
  R(14)=0x3u;
  ST32(R(10),R(11));
L8c04c824:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c82e;
  R(4)=0x8c0be044u;
  { R(5)=0xau; goto L8c04c832; }
L8c04c82e:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04c832:;
  R(2)=0x8c05b4e0u;
  { c->pr=0x8c04c838u;  f_8c05b4e0(c); }
  R(0)=R(14);
L8c04c83a:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c680(SH4Ctx *c) {
  R(3)=0x8c0b9edcu;
  R(2)=0x100u;
  R(13)=0x8c2d03d8u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)+=R(13);
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)=0x8c05cdf8u;
  { c->pr=0x8c04c6dau;  f_8c05cdf8(c); }
  R(4)=R(0);
  R(5)=0x100u;
  ST32(R(15)+8,R(0));
  R(4)<<=2;
  R(0)=0x8c0bb6e8u;
  R(5)+=R(13);
  R(3)=0x8c067440u;
  { c->pr=0x8c04c6ecu; R(4)=LD32(R(4)+R(0)); f_8c067440(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c720;
  { R(0)=0x0u; goto L8c04c83a; }
L8c04c720:;
  R(3)=0x8c06756au;
  R(4)=0x100u;
  { c->pr=0x8c04c728u; R(4)+=R(13); f_8c06756a(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c732;
  {  goto L8c04c820; }
L8c04c732:;
  R(4)=0xb74u;
  R(5)=0x1u;
  R(12)=0x8c06777eu;
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04c740u; R(4)+=R(13); f_8c06777e(c); }
  R(4)=0xb70u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c74cu; R(4)+=R(13); sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c758u; R(4)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c07a9a0u;
  { c->pr=0x8c04c75eu; R(4)=LD32(R(15)+4); f_8c07a9a0(c); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c768u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c04c76eu; R(4)=R(4)&0xFF; f_8c04c34e(c); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c778u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c04c77eu; R(4)=R(4)&0xFF; f_8c04c336(c); }
  R(4)=0xb80u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c78au; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x8c0c5ad0u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c794u; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5404u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c79eu; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5408u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c7a8u; R(5)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c0c540cu;
  R(2)=0x1u;
  ST32(R(3),R(2));
  R(2)=0x8c0677e0u;
  { c->pr=0x8c04c7b4u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c7cc;
  R(0)=0xb7cu;
  { c->pr=0x8c04c7beu; R(4)=LD32(R(13)+R(0)); f_8c04c336(c); }
  R(0)=0xb78u;
  { c->pr=0x8c04c7c4u; R(4)=LD32(R(13)+R(0)); f_8c04c34e(c); }
  R(2)=0x8c0c540cu;
  ST32(R(2),R(11));
  { R(14)=0x0u; goto L8c04c824; }
L8c04c7cc:;
  ST32(R(10),R(11));
  { R(14)=0x2u; goto L8c04c824; }
L8c04c820:;
  R(14)=0x3u;
  ST32(R(10),R(11));
L8c04c824:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c82e;
  R(4)=0x8c0be044u;
  { R(5)=0xau; goto L8c04c832; }
L8c04c82e:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04c832:;
  R(2)=0x8c05b4e0u;
  { c->pr=0x8c04c838u;  f_8c05b4e0(c); }
  R(0)=R(14);
L8c04c83a:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c720(SH4Ctx *c) {
  R(3)=0x8c06756au;
  R(4)=0x100u;
  { c->pr=0x8c04c728u; R(4)+=R(13); f_8c06756a(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c732;
  {  goto L8c04c820; }
L8c04c732:;
  R(4)=0xb74u;
  R(5)=0x1u;
  R(12)=0x8c06777eu;
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04c740u; R(4)+=R(13); f_8c06777e(c); }
  R(4)=0xb70u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c74cu; R(4)+=R(13); sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c758u; R(4)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c07a9a0u;
  { c->pr=0x8c04c75eu; R(4)=LD32(R(15)+4); f_8c07a9a0(c); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c768u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c04c76eu; R(4)=R(4)&0xFF; f_8c04c34e(c); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c778u; R(4)=R(15); sh4_call(c,tg); }
  R(4)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c04c77eu; R(4)=R(4)&0xFF; f_8c04c336(c); }
  R(4)=0xb80u;
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04c78au; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x8c0c5ad0u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c794u; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5404u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c79eu; R(5)=0x1u; sh4_call(c,tg); }
  R(4)=0x8c0c5408u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04c7a8u; R(5)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c0c540cu;
  R(2)=0x1u;
  ST32(R(3),R(2));
  R(2)=0x8c0677e0u;
  { c->pr=0x8c04c7b4u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c7cc;
  R(0)=0xb7cu;
  { c->pr=0x8c04c7beu; R(4)=LD32(R(13)+R(0)); f_8c04c336(c); }
  R(0)=0xb78u;
  { c->pr=0x8c04c7c4u; R(4)=LD32(R(13)+R(0)); f_8c04c34e(c); }
  R(2)=0x8c0c540cu;
  ST32(R(2),R(11));
  { R(14)=0x0u; goto L8c04c824; }
L8c04c7cc:;
  ST32(R(10),R(11));
  { R(14)=0x2u; goto L8c04c824; }
L8c04c820:;
  R(14)=0x3u;
  ST32(R(10),R(11));
L8c04c824:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c82e;
  R(4)=0x8c0be044u;
  { R(5)=0xau; goto L8c04c832; }
L8c04c82e:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04c832:;
  R(2)=0x8c05b4e0u;
  { c->pr=0x8c04c838u;  f_8c05b4e0(c); }
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c820(SH4Ctx *c) {
  R(14)=0x3u;
  ST32(R(10),R(11));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c82e;
  R(4)=0x8c0be044u;
  { R(5)=0xau; goto L8c04c832; }
L8c04c82e:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04c832:;
  R(2)=0x8c05b4e0u;
  { c->pr=0x8c04c838u;  f_8c05b4e0(c); }
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c84a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(12)=0x8c0c5accu;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04c872;
  R(3)=0x8c04d8dau;
  { c->pr=0x8c04c868u; R(4)=0x0u; f_8c04d8da(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(11)=0x1u; if(k) goto L8c04c876; }
  ST32(R(12),R(11));
L8c04c872:;
  { R(0)=0x0u; goto L8c04caec; }
L8c04c876:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c04c8a0;
  ST32(R(12),R(11));
  { R(0)=0x2u; goto L8c04caec; }
L8c04c8a0:;
  R(3)=0x8c0b9edcu;
  R(2)=0x100u;
  R(10)=0x8c2d03d8u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)+=R(10);
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)=0x8c05cdf8u;
  { c->pr=0x8c04c8fau;  f_8c05cdf8(c); }
  R(4)=R(0);
  R(5)=0x100u;
  ST32(R(15)+36,R(0));
  R(4)<<=2;
  R(0)=0x8c0bb6e8u;
  R(5)+=R(10);
  R(3)=0x8c067440u;
  { c->pr=0x8c04c90cu; R(4)=LD32(R(4)+R(0)); f_8c067440(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c940;
  { c->pr=0x8c04c914u;  f_8c04c3fe(c); }
  {  goto L8c04caec; }
L8c04c940:;
  R(2)=0x8c06756au;
  R(4)=0x100u;
  { c->pr=0x8c04c948u; R(4)+=R(10); f_8c06756a(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c952;
  {  goto L8c04cad2; }
L8c04c952:;
  R(13)=0x8c06777eu;
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04c960u; R(4)+=0x1cu; f_8c06777e(c); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c96cu; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c978u; R(4)+=0x14u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c984u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c990u; R(4)+=0xcu; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c99cu; R(4)+=0x8u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c9a8u; R(4)+=0x20u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c9b4u; R(4)+=0x4u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c9beu; R(4)=R(15); sh4_call(c,tg); }
  R(2)=0x8c0677e0u;
  R(9)=0x2u;
  { c->pr=0x8c04c9c6u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04c9ce;
  {  goto L8c04cacc; }
L8c04c9ce:;
  R(2)=0x0u;
  R(1)=0x8c0c5d14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c5f14u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=0x8c0b9eecu;
  R(4)=0x100u;
  R(1)=0x8c067480u;
  R(7)=0x8c0b9f18u;
  R(6)=0x8c0b9efcu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04c9f0u; R(4)+=R(10); f_8c067480(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(15)+=0x18u; if(k) goto L8c04cac6; }
  R(13)=0x8c0676b6u;
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04ca06u; R(4)+=0x1cu; f_8c0676b6(c); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca12u; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca1eu; R(4)+=0x14u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca2au; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca36u; R(4)+=0xcu; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca42u; R(4)+=0x8u; sh4_call(c,tg); }
  R(4)=0x8c0c5ad0u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c04ca4cu; R(5)=0x1u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca58u; R(4)+=0x4u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca62u; R(4)=R(15); sh4_call(c,tg); }
  R(2)=0x8c0677e0u;
  { c->pr=0x8c04ca68u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04cac0;
  { R(14)=0x0u; goto L8c04cad6; }
L8c04cac0:;
  R(14)=R(9);
  { ST32(R(12),R(11)); goto L8c04cad6; }
L8c04cac6:;
  ST32(R(12),R(11));
  { R(14)=R(9); goto L8c04cad6; }
L8c04cacc:;
  ST32(R(12),R(11));
  { R(14)=R(9); goto L8c04cad6; }
L8c04cad2:;
  R(14)=0x3u;
  ST32(R(12),R(11));
L8c04cad6:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04cae0;
  R(4)=0x8c0be644u;
  { R(5)=0xau; goto L8c04cae4; }
L8c04cae0:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04cae4:;
  R(3)=0x8c05b4e0u;
  { c->pr=0x8c04caeau;  f_8c05b4e0(c); }
  R(0)=R(14);
L8c04caec:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c8a0(SH4Ctx *c) {
  R(3)=0x8c0b9edcu;
  R(2)=0x100u;
  R(10)=0x8c2d03d8u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)+=R(10);
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)=0x8c05cdf8u;
  { c->pr=0x8c04c8fau;  f_8c05cdf8(c); }
  R(4)=R(0);
  R(5)=0x100u;
  ST32(R(15)+36,R(0));
  R(4)<<=2;
  R(0)=0x8c0bb6e8u;
  R(5)+=R(10);
  R(3)=0x8c067440u;
  { c->pr=0x8c04c90cu; R(4)=LD32(R(4)+R(0)); f_8c067440(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04c940;
  { c->pr=0x8c04c914u;  f_8c04c3fe(c); }
  {  goto L8c04caec; }
L8c04c940:;
  R(2)=0x8c06756au;
  R(4)=0x100u;
  { c->pr=0x8c04c948u; R(4)+=R(10); f_8c06756a(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c952;
  {  goto L8c04cad2; }
L8c04c952:;
  R(13)=0x8c06777eu;
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04c960u; R(4)+=0x1cu; f_8c06777e(c); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c96cu; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c978u; R(4)+=0x14u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c984u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c990u; R(4)+=0xcu; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c99cu; R(4)+=0x8u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c9a8u; R(4)+=0x20u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c9b4u; R(4)+=0x4u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c9beu; R(4)=R(15); sh4_call(c,tg); }
  R(2)=0x8c0677e0u;
  R(9)=0x2u;
  { c->pr=0x8c04c9c6u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04c9ce;
  {  goto L8c04cacc; }
L8c04c9ce:;
  R(2)=0x0u;
  R(1)=0x8c0c5d14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c5f14u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=0x8c0b9eecu;
  R(4)=0x100u;
  R(1)=0x8c067480u;
  R(7)=0x8c0b9f18u;
  R(6)=0x8c0b9efcu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04c9f0u; R(4)+=R(10); f_8c067480(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(15)+=0x18u; if(k) goto L8c04cac6; }
  R(13)=0x8c0676b6u;
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04ca06u; R(4)+=0x1cu; f_8c0676b6(c); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca12u; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca1eu; R(4)+=0x14u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca2au; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca36u; R(4)+=0xcu; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca42u; R(4)+=0x8u; sh4_call(c,tg); }
  R(4)=0x8c0c5ad0u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c04ca4cu; R(5)=0x1u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca58u; R(4)+=0x4u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca62u; R(4)=R(15); sh4_call(c,tg); }
  R(2)=0x8c0677e0u;
  { c->pr=0x8c04ca68u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04cac0;
  { R(14)=0x0u; goto L8c04cad6; }
L8c04cac0:;
  R(14)=R(9);
  { ST32(R(12),R(11)); goto L8c04cad6; }
L8c04cac6:;
  ST32(R(12),R(11));
  { R(14)=R(9); goto L8c04cad6; }
L8c04cacc:;
  ST32(R(12),R(11));
  { R(14)=R(9); goto L8c04cad6; }
L8c04cad2:;
  R(14)=0x3u;
  ST32(R(12),R(11));
L8c04cad6:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04cae0;
  R(4)=0x8c0be644u;
  { R(5)=0xau; goto L8c04cae4; }
L8c04cae0:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04cae4:;
  R(3)=0x8c05b4e0u;
  { c->pr=0x8c04caeau;  f_8c05b4e0(c); }
  R(0)=R(14);
L8c04caec:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04c940(SH4Ctx *c) {
  R(2)=0x8c06756au;
  R(4)=0x100u;
  { c->pr=0x8c04c948u; R(4)+=R(10); f_8c06756a(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04c952;
  {  goto L8c04cad2; }
L8c04c952:;
  R(13)=0x8c06777eu;
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04c960u; R(4)+=0x1cu; f_8c06777e(c); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c96cu; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c978u; R(4)+=0x14u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c984u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c990u; R(4)+=0xcu; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c99cu; R(4)+=0x8u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c9a8u; R(4)+=0x20u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c9b4u; R(4)+=0x4u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04c9beu; R(4)=R(15); sh4_call(c,tg); }
  R(2)=0x8c0677e0u;
  R(9)=0x2u;
  { c->pr=0x8c04c9c6u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04c9ce;
  {  goto L8c04cacc; }
L8c04c9ce:;
  R(2)=0x0u;
  R(1)=0x8c0c5d14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c5f14u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=0x8c0b9eecu;
  R(4)=0x100u;
  R(1)=0x8c067480u;
  R(7)=0x8c0b9f18u;
  R(6)=0x8c0b9efcu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04c9f0u; R(4)+=R(10); f_8c067480(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(15)+=0x18u; if(k) goto L8c04cac6; }
  R(13)=0x8c0676b6u;
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c04ca06u; R(4)+=0x1cu; f_8c0676b6(c); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca12u; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca1eu; R(4)+=0x14u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca2au; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca36u; R(4)+=0xcu; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca42u; R(4)+=0x8u; sh4_call(c,tg); }
  R(4)=0x8c0c5ad0u;
  R(6)=0x4u;
  R(7)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c04ca4cu; R(5)=0x1u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(4)=R(15);
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca58u; R(4)+=0x4u; sh4_call(c,tg); }
  R(5)=0x1u;
  R(7)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c04ca62u; R(4)=R(15); sh4_call(c,tg); }
  R(2)=0x8c0677e0u;
  { c->pr=0x8c04ca68u; R(4)=R(14); f_8c0677e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04cac0;
  { R(14)=0x0u; goto L8c04cad6; }
L8c04cac0:;
  R(14)=R(9);
  { ST32(R(12),R(11)); goto L8c04cad6; }
L8c04cac6:;
  ST32(R(12),R(11));
  { R(14)=R(9); goto L8c04cad6; }
L8c04cacc:;
  ST32(R(12),R(11));
  { R(14)=R(9); goto L8c04cad6; }
L8c04cad2:;
  R(14)=0x3u;
  ST32(R(12),R(11));
L8c04cad6:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04cae0;
  R(4)=0x8c0be644u;
  { R(5)=0xau; goto L8c04cae4; }
L8c04cae0:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04cae4:;
  R(3)=0x8c05b4e0u;
  { c->pr=0x8c04caeau;  f_8c05b4e0(c); }
  R(0)=R(14);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04cac0(SH4Ctx *c) {
  R(14)=R(9);
  { ST32(R(12),R(11)); goto L8c04cad6; }
L8c04cad6:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04cae0;
  R(4)=0x8c0be644u;
  { R(5)=0xau; goto L8c04cae4; }
L8c04cae0:;
  R(4)=0x8c0bec44u;
  R(5)=0xau;
L8c04cae4:;
  R(3)=0x8c05b4e0u;
  { c->pr=0x8c04caeau;  f_8c05b4e0(c); }
  R(0)=R(14);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04cb28(SH4Ctx *c) {
  R(2)=0x8c0c7630u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04cb48;
  R(14)=0x8c0c5f3eu;
  R(3)=0x8c05edb6u;
  R(4)=R(14);
  { c->pr=0x8c04cb3eu; R(4)+=0x1u; f_8c05edb6(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04cb50;
  R(3)=0x0u;
  ST8(R(14),R(3));
L8c04cb48:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c04cb50:;
  R(2)=0xffu;
  R(0)=0x0u;
  ST8(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04cb80(SH4Ctx *c) {
  R(3)=0x8c0c5f3eu;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(1);
  if(c->t) goto L8c04cba2;
  R(2)=0x8c05ee04u;
  R(4)=0x8c0c5f3fu;
  { c->pr=0x8c04cb96u;  f_8c05ee04(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04cba2;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c04cba2:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04cbaa(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04cbae(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04cbb2(SH4Ctx *c) {
  R(7)=LD32(R(5));
  R(6)=LD32(R(4));
  c->t=R(6)>R(7);
  if(!c->t) goto L8c04cbe0;
  { R(0)=0xffffffffu; return; }
L8c04cbe0:;
  c->t=R(6)>=R(7);
  if(c->t) goto L8c04cbe8;
  { R(0)=0x1u; return; }
L8c04cbe8:;
  R(0)=0x0u;
  {  return; }
}
void f_8c04cbe0(SH4Ctx *c) {
  c->t=R(6)>=R(7);
  if(c->t) goto L8c04cbe8;
  { R(0)=0x1u; return; }
L8c04cbe8:;
  R(0)=0x0u;
  {  return; }
}
void f_8c04cbe8(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c04cbee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(0)=0xb64u;
  R(14)=0x8c2d03d8u;
  R(4)=LD32(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04cc30;
  R(4)+=0xffffffffu;
  R(2)=0x200u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(3)=R(15);
  R(4)<<=2;
  R(2)+=R(14);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(2)=LD32(R(4)+4);
  R(1)=LD32(R(4));
  ST32(R(3),R(1));
  ST32(R(3)+4,R(2));
  R(2)=LD32(R(4)+12);
  R(1)=LD32(R(4)+8);
  ST32(R(3)+8,R(1));
  ST32(R(3)+12,R(2));
  R(2)=LD32(R(4)+20);
  R(1)=LD32(R(4)+16);
  ST32(R(3)+16,R(1));
  ST32(R(3)+20,R(2));
L8c04cc30:;
  R(4)=0x200u;
  R(6)=0x18u;
  R(3)=0x8c09d048u;
  R(5)=0x64u;
  R(7)=0x8c04cbb2u;
  { c->pr=0x8c04cc3eu; R(4)+=R(14); f_8c09d048(c); }
  R(0)=0xb64u;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04cc78;
  R(0)=0xb60u;
  R(13)=0x0u;
  R(2)=R(13);
  R(11)=0x8c068580u;
  R(3)=LD32(R(14)+R(0));
  R(12)=0x200u;
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(12)+=R(14); if(k) goto L8c04cc78; }
L8c04cc58:;
  R(5)=R(15);
  R(6)=0x18u;
  { uint32_t tg=R(11); c->pr=0x8c04cc60u; R(4)=R(12); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04cc6c;
  R(0)=0xb64u;
  R(2)=R(13);
  R(2)+=0x1u;
  ST32(R(14)+R(0),R(2));
L8c04cc6c:;
  R(0)=0xb60u;
  R(13)+=0x1u;
  R(3)=LD32(R(14)+R(0));
  c->t=R(13)>=R(3);
  { uint32_t k=!c->t; R(12)+=0x18u; if(k) goto L8c04cc58; }
L8c04cc78:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04ccc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  R(3)=0x64u;
  R(14)+=0xffffffffu;
  c->t=R(14)>=R(3);
  if(c->t) goto L8c04cd3e;
  R(1)=0x8c05cdf8u;
  { c->pr=0x8c04ccdau; R(13)=0x0u; f_8c05cdf8(c); }
  R(12)=R(0);
  c->t=(int32_t)R(12)>=0;
  if(!c->t) goto L8c04cd30;
  R(2)=0x8c065d36u;
  R(5)=R(15);
  { c->pr=0x8c04cce8u; R(4)=R(12); f_8c065d36(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04cd30;
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(3)=0xfffff83au;
  R(4)=R(4)&0xFFFF;
  R(0)=(int32_t)(int8_t)LD8(R(15)+2);
  R(4)+=R(3);
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+3);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+5);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+6);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(13)=R(4);
  R(13)|=R(0);
L8c04cd30:;
  R(3)=R(14);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(0)=0x8c2d05d8u;
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  ST32(R(14)+R(0),R(13));
L8c04cd3e:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04cd4a(SH4Ctx *c) {
  R(4)=0x200u;
  R(5)=0x0u;
  R(7)=0x8c2d03d8u;
  R(6)=0x64u;
  R(4)+=R(7);
L8c04cd54:;
  ST32(R(4),R(5));
  R(6)+=0xfffffffeu;
  R(4)+=0x18u;
  c->t=(R(6)&R(6))==0;
  ST32(R(4),R(5));
  { uint32_t k=!c->t; R(4)+=0x18u; if(k) goto L8c04cd54; }
  R(0)=0xb60u;
  { ST32(R(7)+R(0),R(5)); return; }
}
void f_8c04cda0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  R(0)=0xb60u;
  R(13)+=0xffffffffu;
  R(14)=0x8c2d03d8u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+R(0));
  c->t=R(13)>=R(3);
  if(c->t) goto L8c04ce06;
  R(3)=LD32(R(14)+R(0));
  R(12)=R(13);
  c->t=R(12)>>31;R(12)<<=1;
  R(2)=0x200u;
  R(3)+=0xffffffffu;
  R(11)=0x8c0685b4u;
  ST32(R(14)+R(0),R(3));
  R(3)=R(13);
  R(12)+=R(3);
  R(3)=LD32(R(14)+R(0));
  R(12)<<=2;
  c->t=R(12)>>31;R(12)<<=1;
  c->t=R(13)>=R(3);
  R(2)+=R(14);
  R(12)+=R(2);
  if(c->t) goto L8c04cdee;
L8c04cdd8:;
  R(5)=R(12);
  R(5)+=0x18u;
  R(6)=0x18u;
  { uint32_t tg=R(11); c->pr=0x8c04cde2u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0xb60u;
  R(13)+=0x1u;
  R(3)=LD32(R(14)+R(0));
  c->t=R(13)>=R(3);
  { uint32_t k=!c->t; R(12)+=0x18u; if(k) goto L8c04cdd8; }
L8c04cdee:;
  R(0)=0xb60u;
  R(2)=0x200u;
  R(1)=LD32(R(14)+R(0));
  R(2)+=R(14);
  R(3)=R(1);
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(3)=0x0u;
  R(1)+=R(2);
  ST32(R(1),R(3));
L8c04ce06:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04ce12(SH4Ctx *c) {
  R(0)=0xb60u;
  R(4)+=0xffffffffu;
  R(5)=0x8c2d03d8u;
  R(3)=LD32(R(5)+R(0));
  c->t=R(4)>=R(3);
  if(c->t) goto L8c04ce34;
  R(0)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(4);
  R(2)=0x200u;
  R(0)+=R(3);
  R(0)<<=2;
  R(2)+=R(5);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  { R(0)+=0x4u; return; }
L8c04ce34:;
  R(0)=0x8c0b9f48u;
  {  return; }
}
void f_8c04ce60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=0xb60u;
  R(5)+=0xffffffffu;
  R(6)=0x8c2d03d8u;
  R(3)=LD32(R(6)+R(0));
  c->t=R(5)>=R(3);
  if(c->t) goto L8c04cf00;
  R(7)=R(5);
  c->t=R(7)>>31;R(7)<<=1;
  R(3)=R(5);
  R(0)=0x200u;
  R(7)+=R(3);
  R(14)=R(15);
  R(7)<<=2;
  R(0)+=R(6);
  c->t=R(7)>>31;R(7)<<=1;
  R(0)=LD32(R(7)+R(0));
  R(0)&=0x3fu;
  ST8(R(14)+6,R(0));
  R(0)=0x200u;
  R(0)+=R(6);
  R(0)=LD32(R(7)+R(0));
  R(0)>>=2;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0x3fu;
  ST8(R(14)+5,R(0));
  R(0)=0x200u;
  R(0)+=R(6);
  R(0)=LD32(R(7)+R(0));
  R(0)>>=8;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0x1fu;
  ST8(R(14)+4,R(0));
  R(0)=0x200u;
  R(0)+=R(6);
  R(0)=LD32(R(7)+R(0));
  R(0)>>=16;
  c->t=R(0)&1;R(0)>>=1;
  R(2)=0x200u;
  R(0)&=0x1fu;
  R(1)=0xc6u;
  ST8(R(14)+3,R(0));
  R(3)=0xffffffeau;
  R(0)=0x200u;
  R(2)+=R(6);
  R(0)+=R(6);
  R(0)=LD32(R(7)+R(0));
  R(7)+=R(2);
  R(0)=sh4_shld(R(0),R(3));
  R(0)&=0xfu;
  ST8(R(14)+2,R(0));
  R(3)=LD32(R(7));
  R(3)>>=16;
  R(3)>>=8;
  R(3)>>=2;
  R(3)+=R(1);
  R(3)=R(3)&0xFF;
  ST16(R(14),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(0)=R(0)&0xFF;
  R(2)=0x8c06874cu;
  R(3)=0x8c0b9f54u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04cefcu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c06874c(c); }
  { R(15)+=0x14u; goto L8c04cf50; }
L8c04cf00:;
  R(2)=0x8c0b9f68u;
  R(3)=R(4);
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
L8c04cf50:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04cf80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  R(5)+=0x4u;
  R(3)=0x8c068788u;
  R(14)=R(4);
  R(6)=0x4u;
  { c->pr=0x8c04cf94u; R(4)=R(14); f_8c068788(c); }
  R(0)=0x25u;
  ST8(R(14)+4,R(0));
  R(0)=0x0u;
  ST8(R(14)+5,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04cfa4(SH4Ctx *c) {
  R(3)=0x8c0b9f78u;
  R(2)=R(4);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(4)=R(14);
  R(6)=0x3u;
  ST8(R(2),R(1));
  R(2)=0x8c068788u;
  { c->pr=0x8c04cff2u; R(4)+=0x9u; f_8c068788(c); }
  R(0)=0x0u;
  ST8(R(14)+12,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04cffc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=0x8c05cdf8u;
  R(14)=R(4);
  { c->pr=0x8c04d00cu; R(13)=R(5); f_8c05cdf8(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c04d04e; }
  R(2)=0x8c0b9f84u;
  R(3)=R(14);
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  R(3)+=0x1u;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(1)=(uint32_t)v;}
  ST8(R(3),R(1));
  {  goto L8c04d0e2; }
L8c04d04e:;
  R(3)=0x8c09d214u;
  R(6)=0x9u;
  R(5)=0x8c0b9f78u;
  { c->pr=0x8c04d058u; R(4)=R(13); f_8c09d214(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04d0e2;
  R(3)=0x8c09c524u;
  R(5)=0x8c0b9f90u;
  { c->pr=0x8c04d064u; R(4)=R(13); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d0e2;
  R(3)=0x8c09c524u;
  R(5)=0x8c0b9fa0u;
  { c->pr=0x8c04d070u; R(4)=R(13); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d0e2;
  R(3)=0x8c0b9fb0u;
  R(2)=R(14);
  R(6)=0x3u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)=0x8c068788u;
  R(5)=R(13);
  R(5)+=0x9u;
  { c->pr=0x8c04d0beu; R(4)=R(14); f_8c068788(c); }
  R(4)=LD32(R(15));
  R(6)=R(15);
  R(0)=0x8c0bb6e8u;
  R(6)+=0x4u;
  R(3)=0x8c0672c0u;
  R(5)=R(13);
  R(4)<<=2;
  { c->pr=0x8c04d0d0u; R(4)=LD32(R(4)+R(0)); f_8c0672c0(c); }
  R(5)=R(15);
  R(2)=0x8c068788u;
  R(4)=R(14);
  R(6)=0x4u;
  R(5)+=0x4u;
  { c->pr=0x8c04d0deu; R(4)+=0x4u; f_8c068788(c); }
  R(0)=0x0u;
  ST8(R(14)+9,R(0));
L8c04d0e2:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04d0ec(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  { c->pr=0x8c04d102u;  f_8c04cd4a(c); }
  R(2)=0x8c05cdf8u;
  { c->pr=0x8c04d108u;  f_8c05cdf8(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c04d120;
  R(0)=0x8c0bb6e8u;
  R(4)=R(14);
  R(3)=0x8c065834u;
  R(5)=R(15);
  R(4)<<=2;
  { c->pr=0x8c04d11cu; R(4)=LD32(R(4)+R(0)); f_8c065834(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d180;
L8c04d120:;
  { R(0)=0x0u; goto L8c04d262; }
L8c04d180:;
  R(3)=0x8c0bb6e8u;
  R(14)<<=2;
  R(11)=0x8c2d03d8u;
  R(10)=0x0u;
  R(14)+=R(3);
  R(13)=0x200u;
  ST32(R(15)+4,R(14));
  R(12)=R(10);
  R(2)=LD32(R(15));
  R(14)=R(15);
  R(8)=0xfffff83au;
  R(13)+=R(11);
  c->t=(int32_t)R(2)>0;
  R(9)=0x64u;
  { uint32_t k=!c->t; R(14)+=0x10u; if(k) goto L8c04d25c; }
L8c04d1a0:;
  R(3)=0x8c06596eu;
  R(5)=R(14);
  { c->pr=0x8c04d1a8u; R(4)=R(12); f_8c06596e(c); }
  R(2)=0x8c09d214u;
  R(6)=0x9u;
  R(5)=0x8c0b9f78u;
  { c->pr=0x8c04d1b2u; R(4)=R(14); f_8c09d214(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04d254;
  R(2)=0x8c09c524u;
  R(5)=0x8c0b9f90u;
  { c->pr=0x8c04d1beu; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d254;
  R(2)=0x8c09c524u;
  R(5)=0x8c0b9fa0u;
  { c->pr=0x8c04d1cau; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d254;
  R(0)=0xb60u;
  R(2)=LD32(R(11)+R(0));
  c->t=R(2)>=R(9);
  if(c->t) goto L8c04d254;
  R(1)=0x8c0b9fbau;
  R(3)=R(15);
  R(3)+=0x8u;
  R(6)=R(15);
  R(0)=(int32_t)(int16_t)LD16(R(1));
  R(6)+=0x8u;
  R(5)=R(14);
  ST16(R(3),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
  ST16(R(3)+2,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(1)+4);
  ST16(R(3)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(1)+6);
  ST16(R(3)+6,R(0));
  R(4)=LD32(R(15)+4);
  R(3)=0x8c066280u;
  { c->pr=0x8c04d1fau; R(4)=LD32(R(4)); f_8c066280(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(0)=R(0)&0xFFFF;
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+10);
  R(4)+=R(8);
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+11);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+13);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+14);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(4)|=R(0);
  R(5)=R(14);
  ST32(R(13),R(4));
  R(4)=R(13);
  { c->pr=0x8c04d246u; R(4)+=0x4u; f_8c04cffc(c); }
  R(0)=R(10);
  ST8(R(13)+13,R(0));
  R(0)=0xb60u;
  R(13)+=0x18u;
  R(3)=LD32(R(11)+R(0));
  R(3)+=0x1u;
  ST32(R(11)+R(0),R(3));
L8c04d254:;
  R(2)=LD32(R(15));
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  if(!c->t) goto L8c04d1a0;
L8c04d25c:;
  { c->pr=0x8c04d260u;  f_8c04cbee(c); }
  R(0)=0x1u;
L8c04d262:;
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
void f_8c04d2c0(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0678e0u;
  ST32(R(15),R(5));
  { c->pr=0x8c04d2ceu; R(8)=R(5); f_8c0678e0(c); }
  ST32(R(8),R(0));
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c04d2da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  ST32(R(15)+8,R(4));
  R(4)=0x0u;
  R(13)=R(4);
  R(0)=0x8c0bb6e8u;
  ST32(R(15)+4,R(5));
  R(5)=R(15);
  ST32(R(15),R(4));
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(13));
  R(4)=LD32(R(15)+8);
  R(3)=0x8c065834u;
  R(4)<<=2;
  { c->pr=0x8c04d304u; R(4)=LD32(R(4)+R(0)); f_8c065834(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d30c;
  { R(0)=0x0u; goto L8c04d35c; }
L8c04d30c:;
  R(3)=LD32(R(15));
  R(14)=R(15);
  R(11)=0x8c09d214u;
  R(12)=0x8c06596eu;
  R(3)+=0xffffffffu;
  R(10)=0x8c0b9f78u;
  c->t=(int32_t)R(3)>=0;
  ST32(R(15),R(3));
  { uint32_t k=!c->t; R(14)+=0xcu; if(k) goto L8c04d356; }
L8c04d320:;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04d326u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(5)=R(10);
  R(6)=0x9u;
  { uint32_t tg=R(11); c->pr=0x8c04d32eu; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04d34c;
  R(2)=0x8c09c524u;
  R(5)=0x8c0b9f90u;
  { c->pr=0x8c04d33au; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d34c;
  R(2)=0x8c09c524u;
  R(5)=0x8c0b9fa0u;
  { c->pr=0x8c04d346u; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d34c;
  R(13)+=0x1u;
L8c04d34c:;
  R(2)=LD32(R(15));
  R(2)+=0xffffffffu;
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c04d320; }
L8c04d356:;
  R(2)=LD32(R(15)+4);
  R(0)=0x1u;
  ST32(R(2),R(13));
L8c04d35c:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04d36c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=0x48u;
  R(3)=0x8c065e84u;
  ST32(R(15)+4,R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15)+12,R(6));
  ST32(R(15)+16,R(7));
  R(14)=LD32(R(15)+R(0));
  R(0)=0x4cu;
  R(13)=LD32(R(15)+R(0));
  R(5)=R(13);
  { c->pr=0x8c04d392u; R(4)=R(14); f_8c065e84(c); }
  R(3)=0x8c0685b4u;
  R(4)=R(14);
  R(5)=R(15);
  ST32(R(15),R(0));
  R(6)=0x4u;
  { c->pr=0x8c04d3a0u; R(4)+=R(13); f_8c0685b4(c); }
  R(11)=R(13);
  R(2)=0x8c065e5au;
  R(11)+=0x4u;
  R(5)=R(11);
  { c->pr=0x8c04d3acu; R(4)=R(14); f_8c065e5a(c); }
  R(10)=0x8c0663a0u;
  R(12)=0x14u;
  R(13)=0x0u;
L8c04d3b2:;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(0)=0x4cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x4cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+R(0));
  R(0)=0x4cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x4cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x4cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+R(0));
  R(0)=0x4cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+R(0));
  R(0)=0x4cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+44);
  R(6)=LD32(R(15)+48);
  R(7)=LD32(R(15)+52);
  { uint32_t tg=R(10); c->pr=0x8c04d3eau; R(4)=LD32(R(15)+40); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(15)+=0x24u; if(k) goto L8c04d3f8; }
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(12);
  if(!c->t) goto L8c04d3b2;
L8c04d3f8:;
  c->t=(R(4)&R(4))==0;
  R(0)=c->t;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04d40c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(9)=R(7);
  R(10)=0x8c066708u;
  R(12)=0x14u;
  ST32(R(15),R(4));
  R(9)+=0x4u;
  ST32(R(15)+8,R(5));
  R(13)=0x0u;
  R(11)=R(7);
  R(14)=R(6);
L8c04d42e:;
  R(5)=LD32(R(15)+8);
  R(6)=R(14);
  R(7)=R(9);
  { uint32_t tg=R(10); c->pr=0x8c04d438u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04d444;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(12);
  if(!c->t) goto L8c04d42e;
L8c04d444:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c04d470;
  R(3)=0x8c065e30u;
  R(5)=R(9);
  { c->pr=0x8c04d450u; R(4)=R(14); f_8c065e30(c); }
  R(2)=0x8c065e84u;
  R(5)=R(11);
  { c->pr=0x8c04d458u; R(4)=R(14); f_8c065e84(c); }
  R(5)=R(11);
  R(3)=0x8c0685b4u;
  R(4)=R(15);
  ST32(R(15),R(0));
  R(6)=0x4u;
  R(5)+=R(14);
  { c->pr=0x8c04d468u; R(4)+=0x4u; f_8c0685b4(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=R(3)==R(2);
  if(c->t) goto L8c04d4c0;
L8c04d470:;
  { R(0)=0x0u; goto L8c04d4c2; }
L8c04d4c0:;
  R(0)=0x1u;
L8c04d4c2:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04d4d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(10)=0x8c066960u;
  R(12)=0x0u;
  R(11)=0x14u;
  R(13)=R(7);
  ST32(R(15)+8,R(4));
  R(14)=R(6);
  ST32(R(15),R(5));
L8c04d4f0:;
  R(5)=LD32(R(15));
  R(6)=R(14);
  R(7)=R(13);
  { uint32_t tg=R(10); c->pr=0x8c04d4fau; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04d506;
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  if(!c->t) goto L8c04d4f0;
L8c04d506:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c04d556;
  R(3)=0x8c065e30u;
  R(5)=LD32(R(13));
  { c->pr=0x8c04d512u; R(4)=LD32(R(14)); f_8c065e30(c); }
  R(5)=LD32(R(13));
  R(2)=0x8c065e84u;
  R(5)+=0xfffffffcu;
  { c->pr=0x8c04d51cu; R(4)=LD32(R(14)); f_8c065e84(c); }
  R(4)=R(15);
  ST32(R(15),R(0));
  R(3)=LD32(R(14));
  R(6)=0x4u;
  R(5)=LD32(R(13));
  R(5)+=R(3);
  R(3)=0x8c0685b4u;
  R(5)+=0xfffffffcu;
  { c->pr=0x8c04d530u; R(4)+=0x4u; f_8c0685b4(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=R(3)==R(2);
  if(c->t) goto L8c04d5a0;
  R(3)=0x8c064ed8u;
  { c->pr=0x8c04d53eu;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d550;
  R(3)=0x8c064eb8u;
  R(5)=0x8c0b9fc4u;
  R(6)=0x2b9u;
  { c->pr=0x8c04d54cu; R(4)=R(14); f_8c064eb8(c); }
  {  goto L8c04d556; }
L8c04d550:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c04d556u; R(4)=LD32(R(14)); f_8c0d0770(c); }
L8c04d556:;
  { R(0)=0x0u; goto L8c04d5a6; }
L8c04d5a0:;
  R(2)=LD32(R(13));
  R(2)+=0xfffffffcu;
  ST32(R(13),R(2));
L8c04d5a6:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04d5b6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(2)=0x8c0b9fdau;
  R(1)=R(15);
  R(3)=0x8c09c49cu;
  R(1)+=0x14u;
  { c->pr=0x8c04d5c6u; R(0)=0x11u; f_8c09c49c(c); }
  R(1)=0x8c05cdf8u;
  { c->pr=0x8c04d5ccu;  f_8c05cdf8(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c04d5f2;
  R(2)=0x8c0c5b14u;
  R(6)=0x8c0c3a44u;
  R(3)=0x8c066576u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x8c0c5f14u;
  R(5)=R(15);
  { c->pr=0x8c04d5e2u; R(5)+=0x18u; f_8c066576(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c04d5f2; }
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c04d5f2:;
  R(0)=0x0u;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04d5fc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=0x8c066960u;
  R(14)=0x0u;
  R(13)=0x14u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+12,R(5));
  ST32(R(15)+16,R(6));
L8c04d612:;
  R(5)=LD32(R(15)+12);
  R(7)=R(15);
  R(6)=R(15);
  R(7)+=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c04d61eu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04d660;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(13);
  if(!c->t) goto L8c04d612;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04d660;
  { R(0)=0x0u; goto L8c04d698; }
L8c04d660:;
  R(3)=0x8c065e30u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c04d668u; R(4)=LD32(R(15)); f_8c065e30(c); }
  R(5)=LD32(R(15)+4);
  R(6)=0x4u;
  R(3)=LD32(R(15));
  R(2)=0x8c0685b4u;
  R(5)+=R(3);
  R(5)+=0xfffffffcu;
  { c->pr=0x8c04d678u; R(4)=LD32(R(15)+16); f_8c0685b4(c); }
  R(3)=0x8c064ed8u;
  { c->pr=0x8c04d67eu;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d690;
  R(3)=0x8c064eb8u;
  R(5)=0x8c0b9fc4u;
  R(6)=0x33bu;
  { c->pr=0x8c04d68cu; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c04d696; }
L8c04d690:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c04d696u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c04d696:;
  R(0)=0x1u;
L8c04d698:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04d6a4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(2)=0x8c0c603cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04d740;
  R(3)=0x8c2d0f80u;
  R(6)=R(15);
  R(5)=0x8c2d0f70u;
  { c->pr=0x8c04d6bau; R(4)=LD32(R(3)); f_8c04d5fc(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d6ee;
  R(1)=0x8c2d0f64u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(1));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c04d6ee;
  R(3)=0x8c2d0f80u;
  R(6)=R(15);
  R(2)=0x8c066280u;
  R(6)+=0x4u;
  R(5)=0x8c2d0f70u;
  { c->pr=0x8c04d6d8u; R(4)=LD32(R(3)); f_8c066280(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c04d6ee;
  R(4)=0x8c2d0f68u;
  R(6)=0x8u;
  R(2)=0x8c068580u;
  R(5)=R(15);
  { c->pr=0x8c04d6eau; R(5)+=0x4u; f_8c068580(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04d740;
L8c04d6ee:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c04d740:;
  R(0)=0x1u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04d74a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(2)=0x8c0c5f3cu;
  ST32(R(15)+4,R(4));
  R(4)=0x0u;
  ST32(R(15),R(4));
  R(10)=R(4);
  R(5)=(int32_t)(int16_t)LD16(R(2));
  R(9)=R(4);
  R(0)=R(5)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(5)=R(0); if(k) goto L8c04d778; }
  R(3)=0x1f80u;
  {  goto L8c04d7c2; }
L8c04d778:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04d784;
  R(3)=0x11c0u;
  {  goto L8c04d7c2; }
L8c04d784:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c04d7c0;
  R(3)=0x800u;
  {  goto L8c04d7c2; }
L8c04d7c0:;
  R(3)=R(4);
L8c04d7c2:;
  R(2)=0x8c0c5f34u;
  R(4)=0x280u;
  R(1)=(int32_t)(int16_t)LD16(R(2));
  R(1)=R(1)&0xFFFF;
  R(1)+=0xffffffffu;
  R(1)<<=8;
  c->t=R(1)>>31;R(1)<<=1;
  R(3)+=R(1);
  R(4)+=R(3);
  R(3)=0x8c065198u;
  { c->pr=0x8c04d7dau;  f_8c065198(c); }
  R(3)=0x8c0678e0u;
  R(11)=R(0);
  { c->pr=0x8c04d7e2u; R(4)=LD32(R(15)+4); f_8c0678e0(c); }
  R(8)=R(11);
  c->t=R(8)>>31;R(8)<<=1;
  R(12)=R(0);
  c->t=(int32_t)R(12)>=(int32_t)R(8);
  if(c->t) goto L8c04d8bc;
  R(4)=LD32(R(15)+4);
  R(5)=R(15);
  R(0)=0x8c0bb6e8u;
  R(3)=0x8c065834u;
  R(4)<<=2;
  { c->pr=0x8c04d7fau; R(4)=LD32(R(4)+R(0)); f_8c065834(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04d89a;
  R(3)=LD32(R(15));
  R(14)=R(15);
  R(13)=0x1u;
  R(3)+=0xffffffffu;
  c->t=(int32_t)R(3)>=0;
  ST32(R(15),R(3));
  { uint32_t k=!c->t; R(14)+=0x8u; if(k) goto L8c04d89a; }
L8c04d80e:;
  R(3)=0x8c06596eu;
  R(5)=R(14);
  { c->pr=0x8c04d816u; R(4)=LD32(R(15)); f_8c06596e(c); }
  R(2)=0x8c09c524u;
  R(5)=0x8c0b9fa0u;
  { c->pr=0x8c04d81eu; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04d826;
  { R(12)+=R(11); goto L8c04d890; }
L8c04d826:;
  R(3)=0x8c09c524u;
  R(5)=0x8c0b9f90u;
  { c->pr=0x8c04d82eu; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04d880;
  { R(9)=R(13); goto L8c04d890; }
L8c04d880:;
  R(2)=0x8c09d214u;
  R(6)=0x9u;
  R(5)=0x8c0b9f78u;
  { c->pr=0x8c04d88au; R(4)=R(14); f_8c09d214(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04d890;
  R(10)=R(13);
L8c04d890:;
  R(2)=LD32(R(15));
  R(2)+=0xffffffffu;
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c04d80e; }
L8c04d89a:;
  c->t=(int32_t)R(12)>=(int32_t)R(8);
  if(c->t) goto L8c04d8bc;
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c04d8b2;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  if(c->t) goto L8c04d8bc;
  R(10)=R(10)&0xFF;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c04d8c4;
  {  goto L8c04d8c0; }
L8c04d8b2:;
  R(10)=R(10)&0xFF;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c04d8c4;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  if(!c->t) goto L8c04d8c0;
L8c04d8bc:;
  { R(0)=0x1u; goto L8c04d8c6; }
L8c04d8c0:;
  { R(0)=0xfffffffcu; goto L8c04d8c6; }
L8c04d8c4:;
  R(0)=0xfffffffdu;
L8c04d8c6:;
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
void f_8c04d8da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c05cdf8u;
  ST8(R(15),R(4));
  { c->pr=0x8c04d8e8u; R(14)=0x1u; f_8c05cdf8(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c04d8f0;
  { R(14)=0x0u; goto L8c04d910; }
L8c04d8f0:;
  R(2)=0x8c05cdc0u;
  { c->pr=0x8c04d8f6u;  f_8c05cdc0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04d8fe;
  { R(14)=0xffffffffu; goto L8c04d910; }
L8c04d8fe:;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04d910;
  { c->pr=0x8c04d908u;  f_8c04d6a4(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04d910;
  R(14)=0xfffffffeu;
L8c04d910:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04d91a(SH4Ctx *c) {
  R(2)=0x8c0c603cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04d92e;
  { c->pr=0x8c04d928u;  f_8c04d8da(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c04d92e:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04d960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c04d970u; R(12)=R(4); f_8c05cdf8(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c04da08;
  R(3)=0x8c2d0f3cu;
  c->t=(R(12)&R(12))==0;
  R(11)=0x8c2d0f70u;
  ST32(R(3),R(12));
  { uint32_t k=c->t; R(13)=R(11); if(k) goto L8c04d990; }
  { c->pr=0x8c04d986u; R(4)=R(12); f_8c04ce12(c); }
  R(5)=R(0);
  { c->pr=0x8c04d98cu; R(4)=R(13); f_8c04cfa4(c); }
  {  goto L8c04d9e0; }
L8c04d990:;
  R(1)=0x8c0b9fa0u;
  R(2)=R(13);
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(2),R(0));
L8c04d9e0:;
  R(0)=0x8c0bb6e8u;
  R(14)<<=2;
  R(13)=0x8c2d0f80u;
  R(5)=R(11);
  R(2)=LD32(R(14)+R(0));
  R(6)=0x8c2d0f64u;
  ST32(R(13),R(2));
  { c->pr=0x8c04d9f2u; R(4)=R(2); f_8c04d5fc(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04da08;
  R(3)=0x8c066280u;
  R(5)=R(11);
  R(6)=0x8c2d0f68u;
  { c->pr=0x8c04da02u; R(4)=LD32(R(13)); f_8c066280(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04da0c;
L8c04da08:;
  { R(0)=0x0u; goto L8c04da14; }
L8c04da0c:;
  R(3)=0x8c0c603cu;
  R(4)=0x1u;
  R(0)=R(4);
  ST32(R(3),R(4));
L8c04da14:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04da20(SH4Ctx *c) {
  R(2)=0x8c0c603cu;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c04da80(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04da86u; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c04dd3c(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04dac8;
  R(0)=0x8c0c5f3cu;
  R(3)=0xf7u;
  R(2)=0x8c0c5f3fu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=(int32_t)(int16_t)LD16(R(0));
  R(0)=0x8c0bb6e8u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0c5f38u;
  R(5)=0x8c0b9fa0u;
  R(3)=LD32(R(1));
  R(7)=0x8c0b9ff4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c5f36u;
  R(6)=0x8c0b9fecu;
  R(2)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0x8c0c5b14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c5f34u;
  R(1)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x8c0c5f14u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ba010u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+36);
  R(4)<<=2;
  { c->pr=0x8c04dac6u; R(4)=LD32(R(4)+R(0)); f_8c04d36c(c); }
  R(15)+=0x24u;
L8c04dac8:;
  R(3)=0x8c2d0f38u;
  R(4)=LD32(R(3));
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c04d960(c); return; } }
}
void f_8c04dad2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(0)=0x8c0bb6e8u;
  R(14)=R(4);
  R(3)=0x8c065834u;
  R(5)=R(15);
  ST32(R(15)+4,R(4));
  R(14)<<=2;
  { c->pr=0x8c04daf0u; R(4)=LD32(R(14)+R(0)); f_8c065834(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04dbaa;
  R(13)=0x8c0bb6e8u;
  R(2)=LD32(R(15));
  R(10)=0x8c0654ceu;
  R(13)+=R(14);
  R(12)=0x8c06596eu;
  R(2)+=0xffffffffu;
  R(11)=0x8c0b9fa0u;
  c->t=(int32_t)R(2)>=0;
  R(14)=R(15);
  ST32(R(15),R(2));
  { uint32_t k=!c->t; R(14)+=0x8u; if(k) goto L8c04dbaa; }
L8c04db0c:;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c04db12u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x8c09c524u;
  R(5)=R(11);
  { c->pr=0x8c04db1au; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04dba0;
  R(5)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c04db24u; R(4)=LD32(R(13)); sh4_call(c,tg); }
  {  goto L8c04dbaa; }
L8c04dba0:;
  R(2)=LD32(R(15));
  R(2)+=0xffffffffu;
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c04db0c; }
L8c04dbaa:;
  R(3)=0x8c0c603cu;
  R(2)=0x0u;
  ST32(R(3),R(2));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04dbc0(SH4Ctx *c) {
  R(0)=0x8c0c6048u;
  R(1)=0x1u;
  { ST32(R(0),R(1)); return; }
}
void f_8c04dbc8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x7u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)+=0xffffffffu;
  c->t=R(14)>R(3);
  if(!c->t) goto L8c04dbdc;
  { R(0)=0x0u; goto L8c04dc28; }
L8c04dbdc:;
  R(2)=0x8c0c6048u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04dbfe;
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c04dbeau;  f_8c05cdf8(c); }
  c->t=R(14)==R(0);
  if(!c->t) goto L8c04dbfe;
  R(3)=0x8c0c6044u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==-10;
  if(c->t) goto L8c04dbfe;
  R(1)=0x8c0c6040u;
  R(0)=LD32(R(1));
  {  goto L8c04dc28; }
L8c04dbfe:;
  R(3)=0x8c05cdb4u;
  { c->pr=0x8c04dc04u; R(4)=R(14); f_8c05cdb4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04dc0c;
  { R(13)=0xffffffffu; goto L8c04dc12; }
L8c04dc0c:;
  { c->pr=0x8c04dc10u; R(4)=R(14); f_8c04d74a(c); }
  R(13)=R(0);
L8c04dc12:;
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c04dc18u;  f_8c05cdf8(c); }
  c->t=R(14)==R(0);
  { uint32_t k=!c->t; R(0)=R(13); if(k) goto L8c04dc28; }
  R(1)=0x8c0c6048u;
  R(2)=0x0u;
  R(3)=0x8c0c6040u;
  ST32(R(3),R(13));
  ST32(R(1),R(2));
L8c04dc28:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04dc30(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  { c->pr=0x8c04dc3au; ST32(R(15),R(4)); f_8c04dbc8(c); }
  R(2)=0x8c05cdf8u;
  ST32(R(15)+4,R(0));
  R(3)=LD32(R(15));
  R(3)+=0xffffffffu;
  { c->pr=0x8c04dc46u; R(8)=R(3); f_8c05cdf8(c); }
  c->t=R(8)==R(0);
  if(!c->t) goto L8c04dc60;
  R(4)=0x8c0c6044u;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==-10;
  if(!c->t) goto L8c04dc60;
  R(3)=0x1u;
  R(0)=0xfffffff6u;
  ST32(R(4),R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
L8c04dc60:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c04dc6a(SH4Ctx *c) {
  R(2)=0x8c0c6044u;
  R(3)=0xfffffff6u;
  { ST32(R(2),R(3)); { f_8c04d0ec(c); return; } }
}
void f_8c04dca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c04dcb6;
  R(2)=0x8c05cddcu;
  { c->pr=0x8c04dcb2u; R(4)=0xfffffffeu; f_8c05cddc(c); }
  {  goto L8c04dcbe; }
L8c04dcb6:;
  R(3)=0x7u;
  R(14)+=0xffffffffu;
  c->t=R(14)>R(3);
  if(!c->t) goto L8c04dcc8;
L8c04dcbe:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c04dcc8:;
  R(3)=0x8c05cddcu;
  { c->pr=0x8c04dcceu; R(4)=R(14); f_8c05cddc(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04dcdc;
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c04dcdc:;
  R(2)=0x8c0c6048u;
  R(4)=R(14);
  R(3)=0x1u;
  R(4)+=0x1u;
  ST32(R(2),R(3));
  { c->pr=0x8c04dceau; ST32(R(15),R(4)); f_8c04dbc8(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c04dd00; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==-4;
  if(c->t) goto L8c04dd00;
  R(0)=R(4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c04dd00:;
  { c->pr=0x8c04dd04u;  f_8c04d0ec(c); }
  { c->pr=0x8c04dd08u; R(4)=R(14); f_8c04da80(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
