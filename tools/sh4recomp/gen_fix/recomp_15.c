#include "recomp_decls.h"
void f_8c08a052(SH4Ctx *c) {
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a058(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08a0a0;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c08a0e4; }
L8c08a0a0:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08a0ac;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c08a0b4;
L8c08a0ac:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c08a0e4; }
L8c08a0b4:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a0c6;
  R(3)=0x1002u;
  { ST32(R(6),R(3)); goto L8c08a0e4; }
L8c08a0c6:;
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
  if(!c->t) goto L8c08a0ea;
  R(2)=0x100bu;
  ST32(R(6),R(2));
L8c08a0e4:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a0ea:;
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a0fe;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a0fe:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c08a140;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a140:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a0a0(SH4Ctx *c) {
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08a0ac;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c08a0b4;
L8c08a0ac:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c08a0e4; }
L8c08a0b4:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a0c6;
  R(3)=0x1002u;
  { ST32(R(6),R(3)); goto L8c08a0e4; }
L8c08a0c6:;
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
  if(!c->t) goto L8c08a0ea;
  R(2)=0x100bu;
  ST32(R(6),R(2));
L8c08a0e4:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a0ea:;
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a0fe;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a0fe:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c08a140;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a140:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a0ea(SH4Ctx *c) {
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a0fe;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a0fe:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c08a140;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a140:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a140(SH4Ctx *c) {
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a146(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08a15a;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c08a1be; }
L8c08a15a:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08a166;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c08a16e;
L8c08a166:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c08a1be; }
L8c08a16e:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a1a0;
  R(3)=0x1002u;
  { ST32(R(6),R(3)); goto L8c08a1be; }
L8c08a1a0:;
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
  if(!c->t) goto L8c08a1c4;
  R(2)=0x100bu;
  ST32(R(6),R(2));
L8c08a1be:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a1c4:;
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a1d8;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a1d8:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c08a1f2;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a1f2:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a1a0(SH4Ctx *c) {
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
  if(!c->t) goto L8c08a1c4;
  R(2)=0x100bu;
  ST32(R(6),R(2));
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a1c4:;
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a1d8;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a1d8:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c08a1f2;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a1f2:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a1c4(SH4Ctx *c) {
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a1d8;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a1d8:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c08a1f2;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a1f2:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a1f2(SH4Ctx *c) {
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a1f8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08a240;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c08a284; }
L8c08a240:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08a24c;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c08a254;
L8c08a24c:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c08a284; }
L8c08a254:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a266;
  R(3)=0x1002u;
  { ST32(R(6),R(3)); goto L8c08a284; }
L8c08a266:;
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
  if(!c->t) goto L8c08a28a;
  R(2)=0x100bu;
  ST32(R(6),R(2));
L8c08a284:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a28a:;
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a29e;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a29e:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c08a2e0;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a2e0:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a240(SH4Ctx *c) {
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08a24c;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c08a254;
L8c08a24c:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c08a284; }
L8c08a254:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a266;
  R(3)=0x1002u;
  { ST32(R(6),R(3)); goto L8c08a284; }
L8c08a266:;
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
  if(!c->t) goto L8c08a28a;
  R(2)=0x100bu;
  ST32(R(6),R(2));
L8c08a284:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a28a:;
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a29e;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a29e:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c08a2e0;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a2e0:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a28a(SH4Ctx *c) {
  R(4)=LD32(R(7)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a29e;
  R(0)=(int32_t)(int16_t)LD16(R(14)+20);
  R(4)+=R(0);
L8c08a29e:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c08a2e0;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a2e0:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a2e0(SH4Ctx *c) {
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a2e6(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08a2fa;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c08a36e; }
L8c08a2fa:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08a306;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c08a30e;
L8c08a306:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c08a36e; }
L8c08a30e:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a340;
  R(3)=0x1002u;
  { ST32(R(6),R(3)); goto L8c08a36e; }
L8c08a340:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(7)=R(4);
  R(3)=LD32(R(7)+R(0));
  R(0)=LD32(R(3)+4);
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c08a356;
  R(2)=0x1003u;
  { ST32(R(6),R(2)); goto L8c08a36e; }
L8c08a356:;
  R(0)=0x8c2e2574u;
  R(2)=0xeu;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(7)+R(0));
  R(4)=R(5);
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08a374;
  R(2)=0x100bu;
  ST32(R(6),R(2));
L8c08a36e:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a374:;
  R(3)=LD32(R(7)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)-=R(4);
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a38a;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a38a:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c08a3a4;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a3a4:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c08a340(SH4Ctx *c) {
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(7)=R(4);
  R(3)=LD32(R(7)+R(0));
  R(0)=LD32(R(3)+4);
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c08a356;
  R(2)=0x1003u;
  { ST32(R(6),R(2)); goto L8c08a36e; }
L8c08a356:;
  R(0)=0x8c2e2574u;
  R(2)=0xeu;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(7)+R(0));
  R(4)=R(5);
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08a374;
  R(2)=0x100bu;
  ST32(R(6),R(2));
L8c08a36e:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a374:;
  R(3)=LD32(R(7)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)-=R(4);
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a38a;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a38a:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c08a3a4;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a3a4:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c08a374(SH4Ctx *c) {
  R(3)=LD32(R(7)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)-=R(4);
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a38a;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a38a:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c08a3a4;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a3a4:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c08a3a4(SH4Ctx *c) {
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c08a3e0(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c879cu;
  R(6)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08a3f4;
  R(1)=0x1001u;
  ST32(R(6),R(1));
  {  goto L8c08a478; }
L8c08a3f4:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c08a400;
  R(2)=0xbu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c08a408;
L8c08a400:;
  R(1)=0x1005u;
  ST32(R(6),R(1));
  {  goto L8c08a478; }
L8c08a408:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a41a;
  R(3)=0x1002u;
  { ST32(R(6),R(3)); goto L8c08a478; }
L8c08a41a:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(7)=R(4);
  R(3)=LD32(R(7)+R(0));
  R(0)=LD32(R(3)+4);
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c08a460;
  R(2)=0x1003u;
  { ST32(R(6),R(2)); goto L8c08a478; }
L8c08a460:;
  R(0)=0x8c2e2574u;
  R(2)=0xeu;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(7)+R(0));
  R(4)=R(5);
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08a47e;
  R(2)=0x100bu;
  ST32(R(6),R(2));
L8c08a478:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a47e:;
  R(3)=LD32(R(7)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)-=R(4);
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a494;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a494:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x20)==0;
  if(!c->t) goto L8c08a4ae;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a4ae:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c08a460(SH4Ctx *c) {
  R(0)=0x8c2e2574u;
  R(2)=0xeu;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(7)+R(0));
  R(4)=R(5);
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08a47e;
  R(2)=0x100bu;
  ST32(R(6),R(2));
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a47e:;
  R(3)=LD32(R(7)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)-=R(4);
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a494;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a494:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x20)==0;
  if(!c->t) goto L8c08a4ae;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a4ae:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c08a47e(SH4Ctx *c) {
  R(3)=LD32(R(7)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)-=R(4);
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a494;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a494:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(7)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(0)=LD32(R(3));
  c->t=(R(0)&0x20)==0;
  if(!c->t) goto L8c08a4ae;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c08a4ae:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c08a4ae(SH4Ctx *c) {
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c08a4b4(SH4Ctx *c) {
  R(1)=0x8c0c879cu;
  R(7)=0x8c2e2540u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08a500;
  R(1)=0x1001u;
  ST32(R(7),R(1));
  {  goto L8c08a556; }
L8c08a500:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c08a50c;
  R(2)=0xbu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c08a514;
L8c08a50c:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c08a556; }
L8c08a514:;
  R(0)=(int32_t)(int16_t)LD16(R(1)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a526;
  R(3)=0x1002u;
  { ST32(R(7),R(3)); goto L8c08a556; }
L8c08a526:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(14)=R(4);
  R(3)=LD32(R(14)+R(0));
  R(3)=LD32(R(3));
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(c->t) goto L8c08a53e;
  R(2)=0x1004u;
  { ST32(R(7),R(2)); goto L8c08a556; }
L8c08a53e:;
  R(0)=0x8c2e2574u;
  R(2)=0xeu;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(3)=LD32(R(14)+R(0));
  R(4)=R(6);
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08a580;
  R(2)=0x100bu;
  ST32(R(7),R(2));
L8c08a556:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a580:;
  R(3)=LD32(R(14)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)-=R(4);
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a596;
  R(0)=(int32_t)(int16_t)LD16(R(1)+20);
  R(4)+=R(0);
L8c08a596:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(14)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3)+4);
  c->t=(R(5)&R(3))==0;
  if(!c->t) goto L8c08a5b0;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a5b0:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a500(SH4Ctx *c) {
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c08a50c;
  R(2)=0xbu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c08a514;
L8c08a50c:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c08a556; }
L8c08a514:;
  R(0)=(int32_t)(int16_t)LD16(R(1)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a526;
  R(3)=0x1002u;
  { ST32(R(7),R(3)); goto L8c08a556; }
L8c08a526:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2544u;
  R(4)<<=2;
  R(14)=R(4);
  R(3)=LD32(R(14)+R(0));
  R(3)=LD32(R(3));
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(c->t) goto L8c08a53e;
  R(2)=0x1004u;
  { ST32(R(7),R(2)); goto L8c08a556; }
L8c08a53e:;
  R(0)=0x8c2e2574u;
  R(2)=0xeu;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(3)=LD32(R(14)+R(0));
  R(4)=R(6);
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08a580;
  R(2)=0x100bu;
  ST32(R(7),R(2));
L8c08a556:;
  R(0)=0x7fffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a580:;
  R(3)=LD32(R(14)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)-=R(4);
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a596;
  R(0)=(int32_t)(int16_t)LD16(R(1)+20);
  R(4)+=R(0);
L8c08a596:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(14)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3)+4);
  c->t=(R(5)&R(3))==0;
  if(!c->t) goto L8c08a5b0;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a5b0:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a580(SH4Ctx *c) {
  R(3)=LD32(R(14)+R(0));
  R(2)=0xcu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  R(3)-=R(4);
  R(4)=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a596;
  R(0)=(int32_t)(int16_t)LD16(R(1)+20);
  R(4)+=R(0);
L8c08a596:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(14)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3)+4);
  c->t=(R(5)&R(3))==0;
  if(!c->t) goto L8c08a5b0;
  R(0)=0x7ffdu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c08a5b0:;
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a5b0(SH4Ctx *c) {
  R(0)=0x7ffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a5b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c879cu;
  R(7)=0x8c2e2540u;
  ST32(R(6),R(3));
  R(2)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08a5d0;
  R(1)=0x1001u;
  ST32(R(7),R(1));
  {  goto L8c08a650; }
L8c08a5d0:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c08a5dc;
  R(2)=0xbu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c08a620;
L8c08a5dc:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c08a650; }
L8c08a620:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a632;
  R(3)=0x1002u;
  { ST32(R(7),R(3)); goto L8c08a650; }
L8c08a632:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2574u;
  R(4)<<=2;
  R(14)=R(4);
  R(3)=LD32(R(14)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(1)=R(5);
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(1)>(int32_t)R(3);
  if(!c->t) goto L8c08a656;
  R(2)=0x100bu;
  ST32(R(7),R(2));
L8c08a650:;
  R(0)=0x7fffu;
  {  goto L8c08a67e; }
L8c08a656:;
  R(4)=LD32(R(14)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a66a;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a66a:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(14)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3));
  R(0)=0x0u;
  ST32(R(6),R(3));
L8c08a67e:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a620(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a632;
  R(3)=0x1002u;
  { ST32(R(7),R(3)); goto L8c08a650; }
L8c08a632:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2574u;
  R(4)<<=2;
  R(14)=R(4);
  R(3)=LD32(R(14)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(1)=R(5);
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(1)>(int32_t)R(3);
  if(!c->t) goto L8c08a656;
  R(2)=0x100bu;
  ST32(R(7),R(2));
L8c08a650:;
  R(0)=0x7fffu;
  {  goto L8c08a67e; }
L8c08a656:;
  R(4)=LD32(R(14)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a66a;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a66a:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(14)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3));
  R(0)=0x0u;
  ST32(R(6),R(3));
L8c08a67e:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a684(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c879cu;
  R(7)=0x8c2e2540u;
  ST32(R(6),R(3));
  R(2)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08a6c0;
  R(1)=0x1001u;
  ST32(R(7),R(1));
  {  goto L8c08a704; }
L8c08a6c0:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c08a6cc;
  R(2)=0xbu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c08a6d4;
L8c08a6cc:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c08a704; }
L8c08a6d4:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a6e6;
  R(3)=0x1002u;
  { ST32(R(7),R(3)); goto L8c08a704; }
L8c08a6e6:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2574u;
  R(4)<<=2;
  R(14)=R(4);
  R(3)=LD32(R(14)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(1)=R(5);
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(1)>(int32_t)R(3);
  if(!c->t) goto L8c08a70a;
  R(2)=0x100bu;
  ST32(R(7),R(2));
L8c08a704:;
  R(0)=0x7fffu;
  {  goto L8c08a732; }
L8c08a70a:;
  R(4)=LD32(R(14)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a71e;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a71e:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(14)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3)+4);
  R(0)=0x0u;
  ST32(R(6),R(3));
L8c08a732:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a6c0(SH4Ctx *c) {
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c08a6cc;
  R(2)=0xbu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c08a6d4;
L8c08a6cc:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c08a704; }
L8c08a6d4:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+12);
  R(3)=0x1u;
  R(3)=sh4_shad(R(3),R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c08a6e6;
  R(3)=0x1002u;
  { ST32(R(7),R(3)); goto L8c08a704; }
L8c08a6e6:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2574u;
  R(4)<<=2;
  R(14)=R(4);
  R(3)=LD32(R(14)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(1)=R(5);
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(1)>(int32_t)R(3);
  if(!c->t) goto L8c08a70a;
  R(2)=0x100bu;
  ST32(R(7),R(2));
L8c08a704:;
  R(0)=0x7fffu;
  {  goto L8c08a732; }
L8c08a70a:;
  R(4)=LD32(R(14)+R(0));
  R(3)=0xcu;
  R(3)+=R(4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(4)=R(4)&0xFFFF;
  R(4)-=R(1);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c08a71e;
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(4)+=R(0);
L8c08a71e:;
  R(2)=R(4);
  R(0)=0x8c2e25a4u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(14)+R(0));
  R(4)<<=2;
  R(3)+=R(4);
  R(3)=LD32(R(3)+4);
  R(0)=0x0u;
  ST32(R(6),R(3));
L8c08a732:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08a760(SH4Ctx *c) {
  R(2)=0x8c2e2540u;
  R(1)=0x5au;
  R(3)=0xfffff000u;
  R(5)=LD32(R(2));
  R(2)=0x8c0c87c5u;
  R(5)+=R(3);
  c->macl=R(5)*R(1);
  R(5)=c->macl;
  R(2)+=R(5);
  ST32(R(4),R(2));
  { R(0)=0x0u; return; }
}
void f_8c08a7a6(SH4Ctx *c) {
  R(1)=0x8c2d20c8u;
  R(0)=R(4);
  R(3)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=LD32(R(1));
  R(3)<<=2;
  R(0)+=R(3);
  R(0)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(0)+1);
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  {  return; }
}
void f_8c08a800(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c08a840(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=0x8c2d1e44u;
  R(13)=0x0u;
  R(11)=0xffu;
  R(8)=0x1u;
  ST32(R(15)+16,R(13));
  R(12)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(12)+=0x14u; if(k) goto L8c08a86c; }
  {  goto L8c08ab4c; }
L8c08a86c:;
  R(10)=0x7ffeu;
  c->t=(R(8)&R(8))==0;
  R(2)=0x2u;
  { uint32_t k=!c->t; ST32(R(15)+8,R(2)); if(k) goto L8c08a87a; }
  {  goto L8c08ab4c; }
L8c08a87a:;
  c->t=(R(8)&R(8))==0;
  if(!c->t) goto L8c08a882;
  {  goto L8c08ab4c; }
L8c08a882:;
  R(3)=LD32(R(15)+8);
  R(4)=R(14);
  R(4)+=0x1u;
  R(3)+=0xfffffffeu;
  ST32(R(15)+4,R(3));
  R(3)=LD32(R(15)+8);
  R(4)+=R(3);
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(4)=R(4)&0xFF;
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c08a8a4;
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08a8a4;
  {  goto L8c08ab36; }
L8c08a8a4:;
  R(9)=LD32(R(15)+4);
  R(3)=R(9);
  R(9)<<=2;
  R(9)<<=2;
  R(9)+=R(3);
  R(3)=0x8c0898e6u;
  c->t=R(9)>>31;R(9)<<=1;
  { c->pr=0x8c08a8b6u; R(4)=LD32(R(15)+4); f_8c0898e6(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08a8d6;
  R(3)=0x2u;
  ST32(R(15)+16,R(8));
  ST8(R(12),R(3));
  R(3)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)+=0x13u;
  R(3)+=R(9);
  ST8(R(12)+1,R(0));
  R(0)=R(13);
  ST16(R(12)+4,R(0));
  ST8(R(12)+2,R(0));
  { ST8(R(3),R(0)); goto L8c08a8ec; }
L8c08a8d6:;
  R(3)=0x8c089dfcu;
  R(5)=0x4u;
  { c->pr=0x8c08a8deu; R(4)=LD32(R(15)+4); f_8c089dfc(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08a8ec;
  R(3)=R(14);
  R(3)+=0x13u;
  R(3)+=R(9);
  ST8(R(3),R(13));
L8c08a8ec:;
  R(4)=R(14);
  R(4)+=0x13u;
  R(4)+=R(9);
  R(5)=(int32_t)(int8_t)LD8(R(4));
  R(5)=R(5)&0xFF;
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>(int32_t)R(11);
  if(!c->t) goto L8c08a920;
  { R(3)=R(11); goto L8c08a922; }
L8c08a920:;
  R(3)=R(5);
L8c08a922:;
  ST8(R(4),R(3));
  R(3)=0x8c0899bcu;
  { c->pr=0x8c08a92au; R(4)=LD32(R(15)+4); f_8c0899bc(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08a94e;
  R(3)=0x2u;
  ST32(R(15)+16,R(8));
  ST8(R(12),R(3));
  R(3)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)+=0x13u;
  R(3)+=R(9);
  ST8(R(12)+1,R(0));
  R(0)=R(8);
  ST16(R(12)+4,R(0));
  R(0)=R(13);
  ST8(R(12)+2,R(0));
  ST8(R(3)+1,R(0));
  {  goto L8c08a966; }
L8c08a94e:;
  R(3)=0x8c089dfcu;
  R(5)=0x8u;
  { c->pr=0x8c08a956u; R(4)=LD32(R(15)+4); f_8c089dfc(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08a966;
  R(3)=R(14);
  R(3)+=0x13u;
  R(0)=R(13);
  R(3)+=R(9);
  ST8(R(3)+1,R(0));
L8c08a966:;
  R(5)=R(14);
  R(5)+=0x13u;
  R(5)+=R(9);
  R(5)+=0x1u;
  R(4)=(int32_t)(int8_t)LD8(R(5));
  R(4)=R(4)&0xFF;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>(int32_t)R(11);
  if(!c->t) goto L8c08a97c;
  { R(3)=R(11); goto L8c08a97e; }
L8c08a97c:;
  R(3)=R(4);
L8c08a97e:;
  ST8(R(5),R(3));
  R(3)=0x8c089740u;
  { c->pr=0x8c08a986u; R(4)=LD32(R(15)+4); f_8c089740(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08a9aa;
  R(3)=0x2u;
  ST32(R(15)+16,R(8));
  ST8(R(12),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  ST8(R(12)+1,R(0));
  R(0)=R(3);
  R(3)=R(14);
  R(3)+=0x13u;
  ST16(R(12)+4,R(0));
  R(3)+=R(9);
  R(0)=R(13);
  ST8(R(12)+2,R(0));
  ST8(R(3)+2,R(0));
  {  goto L8c08a9c2; }
L8c08a9aa:;
  R(3)=0x8c089dfcu;
  R(5)=0x1u;
  { c->pr=0x8c08a9b2u; R(4)=LD32(R(15)+4); f_8c089dfc(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08a9c2;
  R(3)=R(14);
  R(3)+=0x13u;
  R(0)=R(13);
  R(3)+=R(9);
  ST8(R(3)+2,R(0));
L8c08a9c2:;
  R(5)=R(14);
  R(5)+=0x13u;
  R(5)+=R(9);
  R(5)+=0x2u;
  R(4)=(int32_t)(int8_t)LD8(R(5));
  R(4)=R(4)&0xFF;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>(int32_t)R(11);
  if(!c->t) goto L8c08a9d8;
  { R(3)=R(11); goto L8c08a9da; }
L8c08a9d8:;
  R(3)=R(4);
L8c08a9da:;
  ST8(R(5),R(3));
  R(3)=0x8c0897fcu;
  { c->pr=0x8c08a9e2u; R(4)=LD32(R(15)+4); f_8c0897fc(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08aa06;
  R(3)=0x2u;
  ST32(R(15)+16,R(8));
  ST8(R(12),R(3));
  R(3)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)+=0x13u;
  R(3)+=R(9);
  ST8(R(12)+1,R(0));
  R(0)=0x3u;
  ST16(R(12)+4,R(0));
  R(0)=R(13);
  ST8(R(12)+2,R(0));
  ST8(R(3)+3,R(0));
  {  goto L8c08aa1e; }
L8c08aa06:;
  R(3)=0x8c089dfcu;
  R(5)=0x2u;
  { c->pr=0x8c08aa0eu; R(4)=LD32(R(15)+4); f_8c089dfc(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08aa1e;
  R(3)=R(14);
  R(3)+=0x13u;
  R(0)=R(13);
  R(3)+=R(9);
  ST8(R(3)+3,R(0));
L8c08aa1e:;
  R(5)=R(14);
  R(5)+=0x13u;
  R(5)+=R(9);
  R(5)+=0x3u;
  R(4)=(int32_t)(int8_t)LD8(R(5));
  R(4)=R(4)&0xFF;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>(int32_t)R(11);
  if(!c->t) goto L8c08aa60;
  { R(3)=R(11); goto L8c08aa62; }
L8c08aa60:;
  R(3)=R(4);
L8c08aa62:;
  ST8(R(5),R(3));
  R(1)=0xau;
  ST32(R(15),R(1));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(0)=R(0)&0xFF;
  ST16(R(15)+12,R(0));
  R(3)=LD32(R(15)+16);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08ab36;
L8c08aa74:;
  R(5)=LD32(R(15));
  R(0)=0x8c0c694cu;
  R(5)+=0xfffffff6u;
  R(3)=0x8c089b34u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  { c->pr=0x8c08aa86u; R(4)=R(0); f_8c089b34(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08aaac;
  R(3)=0x2u;
  ST32(R(15)+16,R(8));
  ST8(R(12),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  ST8(R(12)+1,R(0));
  R(0)=LD32(R(15));
  ST16(R(12)+4,R(0));
  R(0)=R(13);
  ST8(R(12)+2,R(0));
  R(0)=R(14);
  R(0)+=0x13u;
  R(3)=LD32(R(15));
  R(0)+=R(9);
  ST8(R(3)+R(0),R(13));
  {  goto L8c08aace; }
L8c08aaac:;
  R(5)=LD32(R(15));
  R(0)=0x8c0c694cu;
  R(5)+=0xfffffff6u;
  R(3)=0x8c089c58u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  { c->pr=0x8c08aabeu; R(4)=R(0); f_8c089c58(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(10);
  if(!c->t) goto L8c08aace;
  R(0)=R(14);
  R(3)=LD32(R(15));
  R(0)+=0x13u;
  R(0)+=R(9);
  ST8(R(3)+R(0),R(13));
L8c08aace:;
  R(5)=R(14);
  R(3)=LD32(R(15));
  R(5)+=0x13u;
  R(5)+=R(9);
  R(5)+=R(3);
  R(4)=(int32_t)(int8_t)LD8(R(5));
  R(4)=R(4)&0xFF;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>(int32_t)R(11);
  if(!c->t) goto L8c08ab20;
  { R(2)=R(11); goto L8c08ab22; }
L8c08ab20:;
  R(2)=R(4);
L8c08ab22:;
  ST8(R(5),R(2));
  R(3)=LD32(R(15));
  R(3)+=0x1u;
  ST32(R(15),R(3));
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08ab36;
  R(2)=0x21u;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c08aa74;
L8c08ab36:;
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08ab4c;
  R(2)=0x12u;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c08ab4c;
  {  goto L8c08a882; }
L8c08ab4c:;
  R(3)=LD32(R(15)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08ab7e;
  R(0)=0x280u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0x4u;
  R(5)=LD32(R(14)+R(0));
  R(6)+=0xffffffffu;
  R(3)=R(6);
  R(3)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(4)=R(5);
  R(6)+=R(3);
  R(3)=0x8c068674u;
  ST32(R(15)+4,R(5));
  { c->pr=0x8c08ab6eu; R(4)+=0x6u; f_8c068674(c); }
  R(0)=0x284u;
  R(3)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(12));
  ST16(R(3),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(12)+2);
  ST16(R(3)+2,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(12)+4);
  ST16(R(3)+4,R(0));
L8c08ab7e:;
  R(0)=0x280u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; R(12)=R(13); if(k) goto L8c08ab8c; }
  {  goto L8c08ad7c; }
L8c08ab8c:;
  R(0)=0x284u;
  R(5)=R(12);
  R(3)=R(12);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(14)+R(0));
  R(3)<<=2;
  R(5)+=R(3);
  R(5)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  R(3)=0x2u;
  R(4)=R(0)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c08abaa;
  {  goto L8c08ad4c; }
L8c08abaa:;
  R(1)=0x11u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(!c->t) goto L8c08abb4;
  {  goto L8c08ad4c; }
L8c08abb4:;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c08abc0;
  {  goto L8c08ad4c; }
L8c08abc0:;
  R(0)=0x284u;
  R(3)=R(12);
  R(10)=R(12);
  c->t=R(10)>>31;R(10)<<=1;
  R(9)=LD32(R(14)+R(0));
  R(3)<<=2;
  R(10)+=R(3);
  R(9)+=R(10);
  ST32(R(15)+4,R(9));
  R(0)=(int32_t)(int8_t)LD8(R(9)+1);
  R(3)=LD32(R(15)+4);
  R(0)=R(0)&0xFF;
  R(9)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(9)+=0xfffffffeu; if(k) goto L8c08abf4; }
  R(2)=0x8c08949au;
  { c->pr=0x8c08abe8u; R(4)=R(9)&0xFF; f_8c08949a(c); }
  R(3)=0x7ffeu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c08abf4;
  {  goto L8c08aca2; }
L8c08abf4:;
  R(2)=0x8c2d20c8u;
  R(0)=LD32(R(2));
  R(0)+=R(10);
  R(0)=(int32_t)(int16_t)LD16(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08ac0e;
  R(1)=0x8c089510u;
  { c->pr=0x8c08ac06u; R(4)=R(9)&0xFF; f_8c089510(c); }
  R(3)=0x7ffeu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(3);
  if(c->t) goto L8c08aca2;
L8c08ac0e:;
  R(2)=0x8c2d20c8u;
  R(0)=LD32(R(2));
  R(0)+=R(10);
  R(0)=(int32_t)(int16_t)LD16(R(0)+4);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c08ac28;
  R(1)=0x8c089380u;
  { c->pr=0x8c08ac20u; R(4)=R(9)&0xFF; f_8c089380(c); }
  R(3)=0x7ffeu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(3);
  if(c->t) goto L8c08aca2;
L8c08ac28:;
  R(2)=0x8c2d20c8u;
  R(0)=LD32(R(2));
  R(0)+=R(10);
  R(0)=(int32_t)(int16_t)LD16(R(0)+4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c08ac66;
  R(1)=0x8c089406u;
  { c->pr=0x8c08ac3au; R(4)=R(9)&0xFF; f_8c089406(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  {  goto L8c08ac60; }
L8c08ac60:;
  R(3)=0x7ffeu;
  c->t=R(0)==R(3);
  if(c->t) goto L8c08aca2;
L8c08ac66:;
  R(2)=0x8c2d20c8u;
  R(3)=0xau;
  R(1)=LD32(R(2));
  R(1)+=R(10);
  R(0)=(int32_t)(int16_t)LD16(R(1)+4);
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(!c->t) goto L8c08acc6;
  R(1)=0x8c2d20c8u;
  R(3)=0xfu;
  R(0)=LD32(R(1));
  R(0)+=R(10);
  R(0)=(int32_t)(int16_t)LD16(R(0)+4);
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(c->t) goto L8c08acc6;
  R(2)=0x8c2d20c8u;
  R(3)=0x8c089aa6u;
  R(5)=LD32(R(2));
  R(5)+=R(10);
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(5)=R(0);
  R(0)=0x8c0c694cu;
  R(5)+=0xfffffff6u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08ac9au; R(4)=R(9)&0xFF; f_8c089aa6(c); }
  R(2)=0x7ffeu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c08acc6;
L8c08aca2:;
  R(0)=0x284u;
  R(5)=R(12);
  R(3)=R(12);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(14)+R(0));
  R(3)<<=2;
  R(5)+=R(3);
  R(5)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(5)+2);
  R(4)=R(0)&0xFF;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>(int32_t)R(11);
  if(!c->t) goto L8c08acc0;
  { R(0)=R(11); goto L8c08acc2; }
L8c08acc0:;
  R(0)=R(4);
L8c08acc2:;
  { ST8(R(5)+2,R(0)); goto L8c08ad6e; }
L8c08acc6:;
  R(2)=0x284u;
  R(0)=R(12);
  R(3)=R(12);
  R(3)<<=2;
  R(2)+=R(14);
  R(2)=LD32(R(2));
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c08ad20;
  R(0)=0x284u;
  R(3)=R(12);
  R(2)=R(12);
  c->t=R(2)>>31;R(2)<<=1;
  R(1)=LD32(R(14)+R(0));
  R(3)<<=2;
  R(2)+=R(3);
  R(2)+=R(1);
  { ST8(R(2),R(8)); goto L8c08ad6e; }
L8c08ad20:;
  R(2)=0x284u;
  R(0)=R(12);
  R(3)=R(12);
  R(3)<<=2;
  R(2)+=R(14);
  R(2)=LD32(R(2));
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08ad6e;
  R(0)=0x284u;
  R(3)=R(12);
  R(2)=R(12);
  c->t=R(2)>>31;R(2)<<=1;
  R(1)=LD32(R(14)+R(0));
  R(3)<<=2;
  R(2)+=R(3);
  R(2)+=R(1);
  { ST8(R(2),R(13)); goto L8c08ad6e; }
L8c08ad4c:;
  R(0)=0x284u;
  R(4)=R(12);
  R(3)=R(12);
  c->t=R(4)>>31;R(4)<<=1;
  R(2)=LD32(R(14)+R(0));
  R(3)<<=2;
  R(4)+=R(3);
  R(4)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c08ad68;
  { ST8(R(4),R(8)); goto L8c08ad6e; }
L8c08ad68:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08ad6e;
  ST8(R(4),R(13));
L8c08ad6e:;
  R(0)=0x280u;
  R(12)+=0x1u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  if(c->t) goto L8c08ad7c;
  {  goto L8c08ab8c; }
L8c08ad7c:;
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
void f_8c08adc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(4)+=0x8u;
  R(0)=0x8c0c69ccu;
  R(14)=0x8c2e2600u;
  R(5)=0x0u;
  ST32(R(14),R(4));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c08ade4; }
  { uint32_t tg=R(2); c->pr=0x8c08ade2u;  sh4_call(c,tg); }
  R(5)=R(0);
L8c08ade4:;
  R(0)=0x8c0c69ccu;
  ST8(R(15),R(5));
  R(5)=0x0u;
  R(4)=LD32(R(14));
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(2)=R(2)&0xFF;
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(3)); if(k) goto L8c08ae00; }
  { uint32_t tg=R(3); c->pr=0x8c08adfeu;  sh4_call(c,tg); }
  R(5)=R(0);
L8c08ae00:;
  R(0)=(int32_t)(int8_t)LD8(R(15));
  R(4)=R(5);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(0)=c->t;
  R(3)=R(0);
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(0)=c->t;
  c->t=(R(3)&R(0))==0;
  if(c->t) goto L8c08ae1a;
  { R(4)=0x1u; goto L8c08ae1c; }
L8c08ae1a:;
  R(4)=0x0u;
L8c08ae1c:;
  R(0)=R(4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08ae26(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(4)+=0x8u;
  R(0)=0x8c0c69ccu;
  R(14)=0x8c2e2600u;
  R(5)=0x0u;
  ST32(R(14),R(4));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c08ae4a; }
  { uint32_t tg=R(2); c->pr=0x8c08ae48u;  sh4_call(c,tg); }
  R(5)=R(0);
L8c08ae4a:;
  R(0)=0x8c0c69ccu;
  ST8(R(15),R(5));
  R(5)=0x0u;
  R(4)=LD32(R(14));
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(2)=R(2)&0xFF;
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(3)); if(k) goto L8c08ae66; }
  { uint32_t tg=R(3); c->pr=0x8c08ae64u;  sh4_call(c,tg); }
  R(5)=R(0);
L8c08ae66:;
  R(0)=(int32_t)(int8_t)LD8(R(15));
  R(4)=R(5);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(0)=c->t;
  R(3)=R(0);
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(0)=c->t;
  R(3)|=R(0);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08ae82;
  { R(4)=0x1u; goto L8c08ae84; }
L8c08ae82:;
  R(4)=0x0u;
L8c08ae84:;
  R(0)=R(4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08ae8e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(4)+=0x8u;
  R(0)=0x8c0c69ccu;
  R(5)=0x8c2e2600u;
  ST32(R(5),R(4));
  R(5)=0x0u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c08aeb0; }
  { uint32_t tg=R(2); c->pr=0x8c08aeaeu;  sh4_call(c,tg); }
  R(5)=R(0);
L8c08aeb0:;
  R(4)=R(5);
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08aebc;
  { R(4)=0x0u; goto L8c08aebe; }
L8c08aebc:;
  R(4)=0x1u;
L8c08aebe:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c08aec6(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c08aeca(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c08aece(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c08af00(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c08af04(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(13),R(4));
  { c->pr=0x8c08af1cu; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(12)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(13));
  R(2)+=0x8u;
  ST32(R(13),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08af32;
  {  goto L8c08afdc; }
L8c08af32:;
  R(4)=LD32(R(13));
  R(11)=0x7ffeu;
  R(0)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c08af4c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c08af80;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c08af90;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08afa0;
  {  goto L8c08afb0; }
L8c08af4c:;
  R(2)=0x8c0898e6u;
  { c->pr=0x8c08af52u; R(4)=R(12); f_8c0898e6(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08afd6;
  { R(14)=0x0u; goto L8c08afdc; }
L8c08af80:;
  R(3)=0x8c0899bcu;
  { c->pr=0x8c08af86u; R(4)=R(12); f_8c0899bc(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08afd6;
  { R(14)=0x0u; goto L8c08afdc; }
L8c08af90:;
  R(3)=0x8c089740u;
  { c->pr=0x8c08af96u; R(4)=R(12); f_8c089740(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08afd6;
  { R(14)=0x0u; goto L8c08afdc; }
L8c08afa0:;
  R(3)=0x8c0897fcu;
  { c->pr=0x8c08afa6u; R(4)=R(12); f_8c0897fc(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08afd6;
  { R(14)=0x0u; goto L8c08afdc; }
L8c08afb0:;
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0xau;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c08afdc;
  R(1)=0xfu;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c08afdc;
  R(5)=LD32(R(13));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089b34u;
  R(5)+=0xfffffff6u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08afd0u; R(4)=R(12); f_8c089b34(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(!c->t) goto L8c08afda;
L8c08afd6:;
  { R(14)=0x1u; goto L8c08afdc; }
L8c08afda:;
  R(14)=0x0u;
L8c08afdc:;
  R(2)=LD32(R(13));
  R(3)=R(14)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(14);
  R(2)+=0x8u;
  ST32(R(13),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08af80(SH4Ctx *c) {
  R(3)=0x8c0899bcu;
  { c->pr=0x8c08af86u; R(4)=R(12); f_8c0899bc(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08afd6;
  { R(14)=0x0u; goto L8c08afdc; }
L8c08afd6:;
  { R(14)=0x1u; goto L8c08afdc; }
L8c08afdc:;
  R(2)=LD32(R(13));
  R(3)=R(14)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(14);
  R(2)+=0x8u;
  ST32(R(13),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b020(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(14),R(4));
  { c->pr=0x8c08b03au; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(12)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(14));
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c08b10c;
  R(4)=LD32(R(14));
  R(10)=0x8c089dfcu;
  R(0)=(int32_t)(int16_t)LD16(R(4));
  R(11)=0x7ffeu;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c08b068;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c08b078;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c08b0c0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08b0d0;
  {  goto L8c08b0e0; }
L8c08b068:;
  R(5)=0x4u;
  { uint32_t tg=R(10); c->pr=0x8c08b06eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08b106;
  { R(13)=0x0u; goto L8c08b10c; }
L8c08b078:;
  R(5)=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c08b07eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08b106;
  { R(13)=0x0u; goto L8c08b10c; }
L8c08b0c0:;
  R(5)=0x1u;
  { uint32_t tg=R(10); c->pr=0x8c08b0c6u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08b106;
  { R(13)=0x0u; goto L8c08b10c; }
L8c08b0d0:;
  R(5)=0x2u;
  { uint32_t tg=R(10); c->pr=0x8c08b0d6u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08b106;
  { R(13)=0x0u; goto L8c08b10c; }
L8c08b0e0:;
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0xau;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c08b10c;
  R(1)=0xfu;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c08b10c;
  R(5)=LD32(R(14));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089c58u;
  R(5)+=0xfffffff6u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08b100u; R(4)=R(12); f_8c089c58(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08b10a;
L8c08b106:;
  { R(13)=0x1u; goto L8c08b10c; }
L8c08b10a:;
  R(13)=0x0u;
L8c08b10c:;
  R(2)=LD32(R(14));
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b0c0(SH4Ctx *c) {
  R(5)=0x1u;
  { uint32_t tg=R(10); c->pr=0x8c08b0c6u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08b106;
  { R(13)=0x0u; goto L8c08b10c; }
L8c08b106:;
  { R(13)=0x1u; goto L8c08b10c; }
L8c08b10c:;
  R(2)=LD32(R(14));
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(12),R(4));
  { c->pr=0x8c08b178u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(14)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(12));
  R(2)+=0x8u;
  ST32(R(12),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08b18e;
  {  goto L8c08b3a8; }
L8c08b18e:;
  R(4)=LD32(R(12));
  R(11)=0x7ffeu;
  R(0)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c08b1b0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c08b240;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c08b1a4;
  {  goto L8c08b296; }
L8c08b1a4:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c08b1ac;
  {  goto L8c08b2e8; }
L8c08b1ac:;
  {  goto L8c08b33a; }
L8c08b1b0:;
  R(2)=0x8c08949au;
  { c->pr=0x8c08b1b6u; R(4)=R(14); f_8c08949a(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08b202;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08b202;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(c->t) goto L8c08b202;
  {  goto L8c08b3a2; }
L8c08b202:;
  { R(13)=0x0u; goto L8c08b3a8; }
L8c08b240:;
  R(3)=0x8c089510u;
  { c->pr=0x8c08b246u; R(4)=R(14); f_8c089510(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08b292;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08b292;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(c->t) goto L8c08b292;
  {  goto L8c08b3a2; }
L8c08b292:;
  { R(13)=0x0u; goto L8c08b3a8; }
L8c08b296:;
  R(3)=0x8c089380u;
  { c->pr=0x8c08b29cu; R(4)=R(14); f_8c089380(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08b2e4;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08b2e4;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(!c->t) goto L8c08b3a2;
L8c08b2e4:;
  { R(13)=0x0u; goto L8c08b3a8; }
L8c08b2e8:;
  R(3)=0x8c089406u;
  { c->pr=0x8c08b2eeu; R(4)=R(14); f_8c089406(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08b336;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08b336;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(!c->t) goto L8c08b3a2;
L8c08b336:;
  { R(13)=0x0u; goto L8c08b3a8; }
L8c08b33a:;
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0xau;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c08b3a8;
  R(1)=0xfu;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c08b3a8;
  R(5)=LD32(R(12));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089aa6u;
  R(5)+=0xfffffff6u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08b35au; R(4)=R(14); f_8c089aa6(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08b3a6;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08b3a6;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(c->t) goto L8c08b3a6;
L8c08b3a2:;
  { R(13)=0x1u; goto L8c08b3a8; }
L8c08b3a6:;
  R(13)=0x0u;
L8c08b3a8:;
  R(2)=LD32(R(12));
  R(3)=R(13)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(12),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b240(SH4Ctx *c) {
  R(3)=0x8c089510u;
  { c->pr=0x8c08b246u; R(4)=R(14); f_8c089510(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08b292;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08b292;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(c->t) goto L8c08b292;
  {  goto L8c08b3a2; }
L8c08b292:;
  { R(13)=0x0u; goto L8c08b3a8; }
L8c08b3a2:;
  { R(13)=0x1u; goto L8c08b3a8; }
L8c08b3a8:;
  R(2)=LD32(R(12));
  R(3)=R(13)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(12),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b400(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(13),R(4));
  { c->pr=0x8c08b418u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(14)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(13));
  R(2)+=0x8u;
  ST32(R(13),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08b42e;
  {  goto L8c08b648; }
L8c08b42e:;
  R(4)=LD32(R(13));
  R(11)=0x7ffdu;
  R(0)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c08b450;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c08b4e0;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c08b444;
  {  goto L8c08b536; }
L8c08b444:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c08b44c;
  {  goto L8c08b588; }
L8c08b44c:;
  {  goto L8c08b5da; }
L8c08b450:;
  R(2)=0x8c08949au;
  { c->pr=0x8c08b456u; R(4)=R(14); f_8c08949a(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08b4a2;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08b4a2;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(c->t) goto L8c08b4a2;
  {  goto L8c08b642; }
L8c08b4a2:;
  { R(12)=0x0u; goto L8c08b648; }
L8c08b4e0:;
  R(3)=0x8c089510u;
  { c->pr=0x8c08b4e6u; R(4)=R(14); f_8c089510(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08b532;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08b532;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(c->t) goto L8c08b532;
  {  goto L8c08b642; }
L8c08b532:;
  { R(12)=0x0u; goto L8c08b648; }
L8c08b536:;
  R(3)=0x8c089380u;
  { c->pr=0x8c08b53cu; R(4)=R(14); f_8c089380(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08b584;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08b584;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(!c->t) goto L8c08b642;
L8c08b584:;
  { R(12)=0x0u; goto L8c08b648; }
L8c08b588:;
  R(3)=0x8c089406u;
  { c->pr=0x8c08b58eu; R(4)=R(14); f_8c089406(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08b5d6;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08b5d6;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(!c->t) goto L8c08b642;
L8c08b5d6:;
  { R(12)=0x0u; goto L8c08b648; }
L8c08b5da:;
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0xau;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c08b648;
  R(1)=0xfu;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c08b648;
  R(5)=LD32(R(13));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089aa6u;
  R(5)+=0xfffffff6u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08b5fau; R(4)=R(14); f_8c089aa6(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08b646;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08b646;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(c->t) goto L8c08b646;
L8c08b642:;
  { R(12)=0x1u; goto L8c08b648; }
L8c08b646:;
  R(12)=0x0u;
L8c08b648:;
  R(2)=LD32(R(13));
  R(0)=R(12);
  R(2)+=0x8u;
  ST32(R(13),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b4e0(SH4Ctx *c) {
  R(3)=0x8c089510u;
  { c->pr=0x8c08b4e6u; R(4)=R(14); f_8c089510(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08b532;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08b532;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(c->t) goto L8c08b532;
  {  goto L8c08b642; }
L8c08b532:;
  { R(12)=0x0u; goto L8c08b648; }
L8c08b642:;
  { R(12)=0x1u; goto L8c08b648; }
L8c08b648:;
  R(2)=LD32(R(13));
  R(0)=R(12);
  R(2)+=0x8u;
  ST32(R(13),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b680(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=0x8c2e2600u;
  R(4)+=0x8u;
  R(3)=0x8c05cadeu;
  R(12)=0x0u;
  ST32(R(14),R(4));
  { c->pr=0x8c08b698u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(2)=LD32(R(14));
  R(13)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)+=0x8u;
  R(3)=R(2);
  R(3)+=0x8u;
  R(4)=R(2);
  ST32(R(14),R(2));
  R(2)=R(3);
  R(4)=(int32_t)(int16_t)LD16(R(4));
  ST32(R(14),R(3));
  R(3)=(int32_t)(int16_t)LD16(R(2));
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(14));
  R(2)+=0x8u;
  R(3)=R(2);
  ST32(R(14),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(3));
  ST32(R(15)+4,R(2));
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c08b738;
  R(0)=R(4);
  R(12)=0x8c05b9c0u;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c08b6e6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c08b6ec;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c08b6f2;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c08b6f8;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c08b6fe;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c08b704;
  {  goto L8c08b70c; }
L8c08b6e6:;
  R(6)=R(15);
  { R(5)=0x1u; goto L8c08b708; }
L8c08b6ec:;
  R(6)=R(15);
  { R(5)=0x2u; goto L8c08b708; }
L8c08b6f2:;
  R(6)=R(15);
  { R(5)=0x4u; goto L8c08b708; }
L8c08b6f8:;
  R(6)=R(15);
  { R(5)=0x8u; goto L8c08b708; }
L8c08b6fe:;
  R(6)=R(15);
  { R(5)=0x10u; goto L8c08b708; }
L8c08b704:;
  R(5)=0x20u;
  R(6)=R(15);
L8c08b708:;
  { uint32_t tg=R(12); c->pr=0x8c08b70cu; R(4)=R(13); sh4_call(c,tg); }
L8c08b70c:;
  R(0)=0x8c08b770u;
  fp_ld(c,4,R(15));
  fp_ld(c,3,R(0));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,4,3);
  fp_ftrc(c,4);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08b728;
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(c->t) goto L8c08b728;
  { R(12)=0x1u; goto L8c08b72a; }
L8c08b728:;
  R(12)=0x0u;
L8c08b72a:;
  R(0)=R(12)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08b738;
  R(3)=0x8c2e25fcu;
  R(0)=0x14u;
  R(2)=LD32(R(3));
  fp_st(c,4,R(0)+R(2));
L8c08b738:;
  R(3)=LD32(R(14));
  R(0)=R(12);
  R(3)+=0x8u;
  ST32(R(14),R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(14),R(4));
  { c->pr=0x8c08b796u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(12)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(14));
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c08b7d2;
  R(4)=LD32(R(14));
  R(3)=0x10u;
  R(4)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08b7d2;
  R(1)=0x21u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c08b7d2;
  R(5)=LD32(R(14));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089b34u;
  R(5)+=0xfffffff0u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08b7cau; R(4)=R(12); f_8c089b34(c); }
  R(3)=0x7ffeu;
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(3);
  R(13)=c->t;
L8c08b7d2:;
  R(2)=LD32(R(14));
  R(3)=R(13)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b7ee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(14),R(4));
  { c->pr=0x8c08b804u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(12)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(14));
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c08b840;
  R(4)=LD32(R(14));
  R(3)=0x10u;
  R(4)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08b840;
  R(1)=0x21u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c08b840;
  R(5)=LD32(R(14));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089c58u;
  R(5)+=0xfffffff0u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08b838u; R(4)=R(12); f_8c089c58(c); }
  R(3)=0x7ffeu;
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(3);
  R(13)=c->t;
L8c08b840:;
  R(2)=LD32(R(14));
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b880(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(14),R(4));
  { c->pr=0x8c08b896u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(12)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(14));
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c08b91a;
  R(4)=LD32(R(14));
  R(3)=0x10u;
  R(4)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08b91a;
  R(1)=0x21u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c08b91a;
  R(5)=LD32(R(14));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089aa6u;
  R(5)+=0xfffffff0u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08b8cau; R(4)=R(12); f_8c089aa6(c); }
  R(3)=0x7ffeu;
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(3);
  if(!c->t) goto L8c08b918;
  R(0)=R(12);
  R(1)=0x8c2e2600u;
  R(0)<<=2;
  R(2)=R(12);
  R(0)<<=2;
  R(13)=LD32(R(1));
  R(0)+=R(2);
  R(2)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(2)+=R(0);
  R(13)+=R(2);
  R(2)=LD32(R(1));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(2)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08b918;
  R(0)=R(12);
  R(0)<<=2;
  R(0)<<=2;
  R(2)=R(12);
  R(13)=LD32(R(1));
  R(0)+=R(2);
  R(2)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(2)+=R(0);
  R(13)+=R(2);
  R(2)=LD32(R(1));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(2)+6);
  c->t=R(13)>R(0);
  if(c->t) goto L8c08b918;
  { R(13)=0x1u; goto L8c08b91a; }
L8c08b918:;
  R(13)=0x0u;
L8c08b91a:;
  R(2)=LD32(R(14));
  R(3)=R(13)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08b960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(14),R(4));
  { c->pr=0x8c08b976u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(13)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(14));
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c08b9fa;
  R(4)=LD32(R(14));
  R(3)=0x10u;
  R(4)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c08b9fa;
  R(1)=0x21u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c08b9fa;
  R(5)=LD32(R(14));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089aa6u;
  R(5)+=0xfffffff0u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08b9aau; R(4)=R(13); f_8c089aa6(c); }
  R(3)=0x7ffdu;
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(3);
  if(!c->t) goto L8c08b9f8;
  R(0)=R(13);
  R(1)=0x8c2e2600u;
  R(0)<<=2;
  R(2)=R(13);
  R(0)<<=2;
  R(12)=LD32(R(1));
  R(0)+=R(2);
  R(2)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(2)+=R(0);
  R(12)+=R(2);
  R(2)=LD32(R(1));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(2)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08b9f8;
  R(0)=R(13);
  R(0)<<=2;
  R(0)<<=2;
  R(2)=R(13);
  R(12)=LD32(R(1));
  R(0)+=R(2);
  R(2)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(2)+=R(0);
  R(12)+=R(2);
  R(2)=LD32(R(1));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(2)+6);
  c->t=R(12)>R(0);
  if(c->t) goto L8c08b9f8;
  { R(12)=0x1u; goto L8c08b9fa; }
L8c08b9f8:;
  R(12)=0x0u;
L8c08b9fa:;
  R(0)=R(12);
  R(2)=LD32(R(14));
  R(2)+=0x8u;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08ba40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(13),R(4));
  { c->pr=0x8c08ba58u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(12)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(13));
  R(2)+=0x8u;
  ST32(R(13),R(2));
  R(4)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c08ba72; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c08bb2c;
L8c08ba72:;
  R(4)=LD32(R(13));
  R(11)=0x7ffeu;
  R(0)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c08ba8c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c08ba9c;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c08bae0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08baf0;
  {  goto L8c08bb00; }
L8c08ba8c:;
  R(3)=0x8c0898e6u;
  { c->pr=0x8c08ba92u; R(4)=R(12); f_8c0898e6(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08bb26;
  { R(14)=0x0u; goto L8c08bb2c; }
L8c08ba9c:;
  R(3)=0x8c0899bcu;
  { c->pr=0x8c08baa2u; R(4)=R(12); f_8c0899bc(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08bb26;
  { R(14)=0x0u; goto L8c08bb2c; }
L8c08bae0:;
  R(3)=0x8c089740u;
  { c->pr=0x8c08bae6u; R(4)=R(12); f_8c089740(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08bb26;
  { R(14)=0x0u; goto L8c08bb2c; }
L8c08baf0:;
  R(3)=0x8c0897fcu;
  { c->pr=0x8c08baf6u; R(4)=R(12); f_8c0897fc(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08bb26;
  { R(14)=0x0u; goto L8c08bb2c; }
L8c08bb00:;
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0xau;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c08bb2c;
  R(1)=0xfu;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c08bb2c;
  R(5)=LD32(R(13));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089b34u;
  R(5)+=0xfffffff6u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08bb20u; R(4)=R(12); f_8c089b34(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(!c->t) goto L8c08bb2a;
L8c08bb26:;
  { R(14)=0x1u; goto L8c08bb2c; }
L8c08bb2a:;
  R(14)=0x0u;
L8c08bb2c:;
  R(2)=LD32(R(13));
  R(3)=R(14)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(14);
  R(2)+=0x8u;
  ST32(R(13),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08bae0(SH4Ctx *c) {
  R(3)=0x8c089740u;
  { c->pr=0x8c08bae6u; R(4)=R(12); f_8c089740(c); }
  R(14)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(14)==R(11);
  if(c->t) goto L8c08bb26;
  { R(14)=0x0u; goto L8c08bb2c; }
L8c08bb26:;
  { R(14)=0x1u; goto L8c08bb2c; }
L8c08bb2c:;
  R(2)=LD32(R(13));
  R(3)=R(14)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(14);
  R(2)+=0x8u;
  ST32(R(13),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08bb80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(14),R(4));
  { c->pr=0x8c08bb9au; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(12)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(14));
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(4)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c08bbb4; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c08bc6c;
L8c08bbb4:;
  R(4)=LD32(R(14));
  R(10)=0x8c089dfcu;
  R(0)=(int32_t)(int16_t)LD16(R(4));
  R(11)=0x7ffeu;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c08bbd0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c08bbe0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c08bc20;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08bc30;
  {  goto L8c08bc40; }
L8c08bbd0:;
  R(5)=0x4u;
  { uint32_t tg=R(10); c->pr=0x8c08bbd6u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08bc66;
  { R(13)=0x0u; goto L8c08bc6c; }
L8c08bbe0:;
  R(5)=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c08bbe6u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08bc66;
  { R(13)=0x0u; goto L8c08bc6c; }
L8c08bc20:;
  R(5)=0x1u;
  { uint32_t tg=R(10); c->pr=0x8c08bc26u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08bc66;
  { R(13)=0x0u; goto L8c08bc6c; }
L8c08bc30:;
  R(5)=0x2u;
  { uint32_t tg=R(10); c->pr=0x8c08bc36u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08bc66;
  { R(13)=0x0u; goto L8c08bc6c; }
L8c08bc40:;
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0xau;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c08bc6c;
  R(1)=0xfu;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c08bc6c;
  R(5)=LD32(R(14));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089c58u;
  R(5)+=0xfffffff6u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08bc60u; R(4)=R(12); f_8c089c58(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08bc6a;
L8c08bc66:;
  { R(13)=0x1u; goto L8c08bc6c; }
L8c08bc6a:;
  R(13)=0x0u;
L8c08bc6c:;
  R(2)=LD32(R(14));
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08bc20(SH4Ctx *c) {
  R(5)=0x1u;
  { uint32_t tg=R(10); c->pr=0x8c08bc26u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(c->t) goto L8c08bc66;
  { R(13)=0x0u; goto L8c08bc6c; }
L8c08bc66:;
  { R(13)=0x1u; goto L8c08bc6c; }
L8c08bc6c:;
  R(2)=LD32(R(14));
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08bcc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(12),R(4));
  { c->pr=0x8c08bcd8u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(14)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(12));
  R(2)+=0x8u;
  ST32(R(12),R(2));
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c08bcf6; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08bcf6;
  {  goto L8c08bf08; }
L8c08bcf6:;
  R(4)=LD32(R(12));
  R(11)=0x7ffeu;
  R(0)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c08bd18;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c08bda0;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c08bd0c;
  {  goto L8c08bdf6; }
L8c08bd0c:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c08bd14;
  {  goto L8c08be48; }
L8c08bd14:;
  {  goto L8c08be9a; }
L8c08bd18:;
  R(3)=0x8c08949au;
  { c->pr=0x8c08bd1eu; R(4)=R(14); f_8c08949a(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08bd6a;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08bd6a;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(c->t) goto L8c08bd6a;
  {  goto L8c08bf02; }
L8c08bd6a:;
  { R(13)=0x0u; goto L8c08bf08; }
L8c08bda0:;
  R(3)=0x8c089510u;
  { c->pr=0x8c08bda6u; R(4)=R(14); f_8c089510(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08bdf2;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08bdf2;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(c->t) goto L8c08bdf2;
  {  goto L8c08bf02; }
L8c08bdf2:;
  { R(13)=0x0u; goto L8c08bf08; }
L8c08bdf6:;
  R(3)=0x8c089380u;
  { c->pr=0x8c08bdfcu; R(4)=R(14); f_8c089380(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08be44;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08be44;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(!c->t) goto L8c08bf02;
L8c08be44:;
  { R(13)=0x0u; goto L8c08bf08; }
L8c08be48:;
  R(3)=0x8c089406u;
  { c->pr=0x8c08be4eu; R(4)=R(14); f_8c089406(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08be96;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08be96;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(!c->t) goto L8c08bf02;
L8c08be96:;
  { R(13)=0x0u; goto L8c08bf08; }
L8c08be9a:;
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0xau;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c08bf08;
  R(1)=0xfu;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c08bf08;
  R(5)=LD32(R(12));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089aa6u;
  R(5)+=0xfffffff6u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08bebau; R(4)=R(14); f_8c089aa6(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08bf06;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08bf06;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(c->t) goto L8c08bf06;
L8c08bf02:;
  { R(13)=0x1u; goto L8c08bf08; }
L8c08bf06:;
  R(13)=0x0u;
L8c08bf08:;
  R(2)=LD32(R(12));
  R(3)=R(13)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(12),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08bda0(SH4Ctx *c) {
  R(3)=0x8c089510u;
  { c->pr=0x8c08bda6u; R(4)=R(14); f_8c089510(c); }
  R(13)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(13)==R(11);
  if(!c->t) goto L8c08bdf2;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(13)>=R(0);
  if(!c->t) goto L8c08bdf2;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(13)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=R(0);
  R(13)+=R(3);
  R(3)=LD32(R(2));
  R(13)=(int32_t)(int8_t)LD8(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(13)>R(0);
  if(c->t) goto L8c08bdf2;
  {  goto L8c08bf02; }
L8c08bdf2:;
  { R(13)=0x0u; goto L8c08bf08; }
L8c08bf02:;
  { R(13)=0x1u; goto L8c08bf08; }
L8c08bf08:;
  R(2)=LD32(R(12));
  R(3)=R(13)&0xFF;
  R(4)=0x8c2d1df4u;
  R(0)=R(13);
  R(2)+=0x8u;
  ST32(R(12),R(2));
  R(2)=LD32(R(4));
  R(2)|=R(3);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08bf60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(13),R(4));
  { c->pr=0x8c08bf78u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(14)=R(0);
  R(0)=0x8c2d1e47u;
  R(2)=LD32(R(13));
  R(2)+=0x8u;
  ST32(R(13),R(2));
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c08bf96; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c08bf96;
  {  goto L8c08c1a8; }
L8c08bf96:;
  R(4)=LD32(R(13));
  R(11)=0x7ffdu;
  R(0)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c08bfb8;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c08c040;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c08bfac;
  {  goto L8c08c096; }
L8c08bfac:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c08bfb4;
  {  goto L8c08c0e8; }
L8c08bfb4:;
  {  goto L8c08c13a; }
L8c08bfb8:;
  R(3)=0x8c08949au;
  { c->pr=0x8c08bfbeu; R(4)=R(14); f_8c08949a(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08c00a;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08c00a;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(c->t) goto L8c08c00a;
  {  goto L8c08c1a2; }
L8c08c00a:;
  { R(12)=0x0u; goto L8c08c1a8; }
L8c08c040:;
  R(3)=0x8c089510u;
  { c->pr=0x8c08c046u; R(4)=R(14); f_8c089510(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08c092;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08c092;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(c->t) goto L8c08c092;
  {  goto L8c08c1a2; }
L8c08c092:;
  { R(12)=0x0u; goto L8c08c1a8; }
L8c08c096:;
  R(3)=0x8c089380u;
  { c->pr=0x8c08c09cu; R(4)=R(14); f_8c089380(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08c0e4;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08c0e4;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(!c->t) goto L8c08c1a2;
L8c08c0e4:;
  { R(12)=0x0u; goto L8c08c1a8; }
L8c08c0e8:;
  R(3)=0x8c089406u;
  { c->pr=0x8c08c0eeu; R(4)=R(14); f_8c089406(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08c136;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08c136;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(!c->t) goto L8c08c1a2;
L8c08c136:;
  { R(12)=0x0u; goto L8c08c1a8; }
L8c08c13a:;
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(3)=0xau;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c08c1a8;
  R(1)=0xfu;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c08c1a8;
  R(5)=LD32(R(13));
  R(0)=0x8c0c694cu;
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=0x8c089aa6u;
  R(5)+=0xfffffff6u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c08c15au; R(4)=R(14); f_8c089aa6(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08c1a6;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08c1a6;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(c->t) goto L8c08c1a6;
L8c08c1a2:;
  { R(12)=0x1u; goto L8c08c1a8; }
L8c08c1a6:;
  R(12)=0x0u;
L8c08c1a8:;
  R(2)=LD32(R(13));
  R(0)=R(12);
  R(2)+=0x8u;
  ST32(R(13),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c040(SH4Ctx *c) {
  R(3)=0x8c089510u;
  { c->pr=0x8c08c046u; R(4)=R(14); f_8c089510(c); }
  R(12)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(12)==R(11);
  if(!c->t) goto L8c08c092;
  R(0)=R(14);
  R(2)=0x8c2e2600u;
  R(0)<<=2;
  R(3)=R(14);
  R(0)<<=2;
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(12)>=R(0);
  if(!c->t) goto L8c08c092;
  R(0)=R(14);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(14);
  R(12)=LD32(R(2));
  R(0)+=R(3);
  R(3)=0x8c2d1e57u;
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(0);
  R(12)+=R(3);
  R(3)=LD32(R(2));
  R(12)=(int32_t)(int8_t)LD8(R(12));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(12)>R(0);
  if(c->t) goto L8c08c092;
  {  goto L8c08c1a2; }
L8c08c092:;
  { R(12)=0x0u; goto L8c08c1a8; }
L8c08c1a2:;
  { R(12)=0x1u; goto L8c08c1a8; }
L8c08c1a8:;
  R(2)=LD32(R(13));
  R(0)=R(12);
  R(2)+=0x8u;
  ST32(R(13),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c1e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05bc8au;
  ST32(R(14),R(4));
  { c->pr=0x8c08c1f0u; R(4)=LD32(R(4)); f_8c05bc8a(c); }
  R(2)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(2)+=0x8u;
  R(4)=c->t;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c204(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05bc94u;
  ST32(R(14),R(4));
  { c->pr=0x8c08c214u; R(4)=LD32(R(4)); f_8c05bc94(c); }
  R(2)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(2)+=0x8u;
  R(4)=c->t;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c228(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05bc9eu;
  ST32(R(14),R(4));
  { c->pr=0x8c08c238u; R(4)=LD32(R(4)); f_8c05bc9e(c); }
  R(2)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(2)+=0x8u;
  R(4)=c->t;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c24c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05bca8u;
  ST32(R(14),R(4));
  { c->pr=0x8c08c25cu; R(4)=LD32(R(4)); f_8c05bca8(c); }
  R(2)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(2)+=0x8u;
  R(4)=c->t;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c270(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=R(4);
  R(2)=R(9);
  R(10)=0x8c2e2600u;
  R(3)=0x8c2e2604u;
  R(2)+=0x10u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(3),R(14));
  ST32(R(10),R(2));
  { R(12)=R(14); goto L8c08c2b8; }
L8c08c294:;
  R(4)=LD32(R(10));
  R(6)=0x8c0c69ccu;
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  R(11)=LD32(R(6)+R(0));
  c->t=(R(11)&R(11))==0;
  { uint32_t k=c->t; R(5)=R(14); if(k) goto L8c08c2ac; }
  { uint32_t tg=R(11); c->pr=0x8c08c2aau;  sh4_call(c,tg); }
  R(5)=R(0);
L8c08c2ac:;
  R(4)=R(5);
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(12)+=0x1u;
  R(3)=c->t;
  R(13)&=R(3);
L8c08c2b8:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08c2c4;
  R(2)=LD32(R(9)+8);
  c->t=R(12)>=R(2);
  if(!c->t) goto L8c08c294;
L8c08c2c4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c2d6(SH4Ctx *c) {
  R(5)=0x8c2e2600u;
  R(4)+=0x8u;
  R(6)=0x8c2e2604u;
  ST32(R(5),R(4));
  R(4)=LD32(R(6));
  R(1)=0x8c2d20c8u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(2)=LD32(R(1));
  R(3)<<=2;
  R(4)+=R(3);
  R(4)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08c322;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08c322;
  R(3)=LD32(R(5));
  R(0)=(int32_t)(int16_t)LD16(R(4)+4);
  R(2)=(int32_t)(int16_t)LD16(R(3));
  c->t=R(0)==R(2);
  if(!c->t) goto L8c08c322;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=LD32(R(5));
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(2)>=R(0);
  if(!c->t) goto L8c08c322;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=LD32(R(5));
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(2)>R(0);
  if(c->t) goto L8c08c322;
  { R(4)=0x1u; goto L8c08c324; }
L8c08c322:;
  R(4)=0x0u;
L8c08c324:;
  R(3)=LD32(R(5));
  R(3)+=0x8u;
  ST32(R(5),R(3));
  R(2)=LD32(R(6));
  R(2)+=0x1u;
  ST32(R(6),R(2));
  { R(0)=R(4); return; }
}
void f_8c08c360(SH4Ctx *c) {
  R(5)=0x8c2e2600u;
  R(4)+=0x8u;
  R(6)=0x8c2e2604u;
  ST32(R(5),R(4));
  R(4)=LD32(R(6));
  R(1)=0x8c2d20c8u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(2)=LD32(R(1));
  R(3)<<=2;
  R(4)+=R(3);
  R(4)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08c3ae;
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08c3ae;
  R(3)=LD32(R(5));
  R(0)=(int32_t)(int16_t)LD16(R(4)+4);
  R(2)=(int32_t)(int16_t)LD16(R(3));
  c->t=R(0)==R(2);
  if(!c->t) goto L8c08c3ae;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=LD32(R(5));
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(2)>=R(0);
  if(!c->t) goto L8c08c3ae;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=LD32(R(5));
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(2)>R(0);
  if(c->t) goto L8c08c3ae;
  { R(4)=0x1u; goto L8c08c3b0; }
L8c08c3ae:;
  R(4)=0x0u;
L8c08c3b0:;
  R(3)=LD32(R(5));
  R(3)+=0x8u;
  ST32(R(5),R(3));
  R(2)=LD32(R(6));
  R(2)+=0x1u;
  ST32(R(6),R(2));
  { R(0)=R(4); return; }
}
void f_8c08c3c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(14),R(4));
  { c->pr=0x8c08c3d0u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(5)=0x8c2e2604u;
  R(6)=R(0);
  R(2)=LD32(R(14));
  R(6)+=0x2u;
  R(1)=0x8c2d20c8u;
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(4)=LD32(R(5));
  R(2)=LD32(R(1));
  R(3)=R(4);
  R(3)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(6);
  if(!c->t) goto L8c08c420;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08c420;
  R(3)=LD32(R(14));
  R(0)=(int32_t)(int16_t)LD16(R(4)+4);
  R(2)=(int32_t)(int16_t)LD16(R(3));
  c->t=R(0)==R(2);
  if(!c->t) goto L8c08c420;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=LD32(R(14));
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(2)>=R(0);
  if(!c->t) goto L8c08c420;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=LD32(R(14));
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(2)>R(0);
  if(c->t) goto L8c08c420;
  { R(4)=0x1u; goto L8c08c422; }
L8c08c420:;
  R(4)=0x0u;
L8c08c422:;
  R(3)=LD32(R(14));
  R(0)=R(4);
  R(3)+=0x8u;
  ST32(R(14),R(3));
  R(2)=LD32(R(5));
  R(2)+=0x1u;
  ST32(R(5),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c436(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x8u;
  R(14)=0x8c2e2600u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cadeu;
  ST32(R(14),R(4));
  { c->pr=0x8c08c446u; R(4)=(int32_t)(int16_t)LD16(R(4)); f_8c05cade(c); }
  R(5)=0x8c2e2604u;
  R(6)=R(0);
  R(2)=LD32(R(14));
  R(6)+=0x2u;
  R(1)=0x8c2d20c8u;
  R(2)+=0x8u;
  ST32(R(14),R(2));
  R(4)=LD32(R(5));
  R(2)=LD32(R(1));
  R(3)=R(4);
  R(3)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(6);
  if(!c->t) goto L8c08c498;
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08c498;
  R(3)=LD32(R(14));
  R(0)=(int32_t)(int16_t)LD16(R(4)+4);
  R(2)=(int32_t)(int16_t)LD16(R(3));
  c->t=R(0)==R(2);
  if(!c->t) goto L8c08c498;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=LD32(R(14));
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(3)+5);
  c->t=R(2)>=R(0);
  if(!c->t) goto L8c08c498;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=LD32(R(14));
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  c->t=R(2)>R(0);
  if(c->t) goto L8c08c498;
  { R(4)=0x1u; goto L8c08c49a; }
L8c08c498:;
  R(4)=0x0u;
L8c08c49a:;
  R(3)=LD32(R(14));
  R(0)=R(4);
  R(3)+=0x8u;
  ST32(R(14),R(3));
  R(2)=LD32(R(5));
  R(2)+=0x1u;
  ST32(R(5),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c4ae(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c08c4e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(14)=0x8c05e6eau;
  ST32(R(15)+8,R(4));
  R(4)=R(15);
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c08c4fcu; R(4)+=0x34u; f_8c05e6ea(c); }
  R(5)=LD32(R(15)+4);
  R(4)=R(15);
  { uint32_t tg=R(14); c->pr=0x8c08c504u; R(4)+=0x28u; sh4_call(c,tg); }
  R(5)=LD32(R(15));
  R(4)=R(15);
  { uint32_t tg=R(14); c->pr=0x8c08c50cu; R(4)+=0x1cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c0a2ce0u;
  R(4)=R(15);
  R(5)+=0x34u;
  R(7)+=0x1cu;
  R(6)+=0x1cu;
  { c->pr=0x8c08c520u; R(4)+=0x34u; f_8c0a2ce0(c); }
  R(0)=0x8c08c648u;
  c->fr[2]=0x00000000u;
  fp_ld(c,13,R(0));
  R(0)=0x8c08c64cu;
  fp_ld(c,14,R(0));
  R(0)=0x34u;
  fp_ld(c,15,R(0)+R(15));
  fp_mov(c,4,15);
  fp_arith(c,0,4,14);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c08c53a;
  { fp_mov(c,3,4); goto L8c08c540; }
L8c08c53a:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c540:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c58c;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,14);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08c558;
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,14); goto L8c08c562; }
L8c08c558:;
  R(0)=0x38u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c562:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c58c;
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,14);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08c57a;
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,14); goto L8c08c584; }
L8c08c57a:;
  R(0)=0x3cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c584:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c58c;
  { R(3)=0x1u; goto L8c08c58e; }
L8c08c58c:;
  R(3)=0x0u;
L8c08c58e:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08c598;
  {  goto L8c08c6b6; }
L8c08c598:;
  R(0)=0x38u;
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  R(7)=R(15);
  R(6)=R(15);
  R(7)+=0x1cu;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(2)=0x8c0a2ce0u;
  R(4)=R(15);
  R(6)+=0x1cu;
  R(5)+=0x28u;
  { c->pr=0x8c08c5e6u; R(4)+=0x28u; f_8c0a2ce0(c); }
  R(0)=0x28u;
  c->fr[2]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_mov(c,4,15);
  fp_arith(c,0,4,14);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c08c5f8;
  { fp_mov(c,3,4); goto L8c08c5fe; }
L8c08c5f8:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c5fe:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c672;
  R(0)=0x2cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,14);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08c616;
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,14); goto L8c08c620; }
L8c08c616:;
  R(0)=0x2cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c620:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c672;
  R(0)=0x30u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,14);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08c660;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,14); goto L8c08c66a; }
L8c08c660:;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c66a:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c672;
  { R(3)=0x1u; goto L8c08c674; }
L8c08c672:;
  R(3)=0x0u;
L8c08c674:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08c6b6;
  R(0)=0x2cu;
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c08c6ba; }
L8c08c6b6:;
  { c->fr[0]=0x00000000u; goto L8c08c6e4; }
L8c08c6ba:;
  R(5)=R(15);
  R(2)=0x8c0a2d6eu;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x28u;
  R(5)+=0x34u;
  { c->pr=0x8c08c6cau; R(4)+=0xcu; f_8c0a2d6e(c); }
  R(0)=0xcu;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  fp_ld(c,15,R(0)+R(15));
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c08c6dau; R(4)+=0x10u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,0);
  if(!c->t) goto L8c08c6e2;
  fp_unary(c,0,15);
L8c08c6e2:;
  fp_mov(c,0,15);
L8c08c6e4:;
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08c6f2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(14)=0x8c05e6eau;
  ST32(R(15)+4,R(4));
  R(4)=R(15);
  ST32(R(15),R(5));
  R(5)=R(6);
  ST32(R(15)+8,R(6));
  { c->pr=0x8c08c714u; R(4)+=0x28u; f_8c05e6ea(c); }
  R(5)=LD32(R(15)+4);
  R(4)=R(15);
  { uint32_t tg=R(14); c->pr=0x8c08c71cu; R(4)+=0x34u; sh4_call(c,tg); }
  R(0)=0x8c08c7acu;
  R(5)=R(15);
  fp_ld(c,13,R(0));
  R(0)=0x8c08c7b0u;
  fp_ld(c,15,R(0));
  R(4)=R(15);
  R(13)=0x8c05e55cu;
  R(5)+=0x28u;
  R(12)=0x8c0a2d6eu;
  c->fr[14]=0x00000000u;
  { c->pr=0x8c08c734u; R(4)+=0x34u; f_8c05e55c(c); }
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c08c748;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x28u;
  { uint32_t tg=R(13); c->pr=0x8c08c744u; R(4)+=0x34u; sh4_call(c,tg); }
  { fp_mov(c,3,0); goto L8c08c756; }
L8c08c748:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x28u;
  { uint32_t tg=R(13); c->pr=0x8c08c752u; R(4)+=0x34u; sh4_call(c,tg); }
  fp_mov(c,3,0);
  fp_unary(c,0,3);
L8c08c756:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c75e;
  { fp_mov(c,12,14); goto L8c08c8c8; }
L8c08c75e:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c0a2ce0u;
  R(4)=R(15);
  R(5)+=0x34u;
  R(7)+=0x28u;
  R(6)+=0x28u;
  { c->pr=0x8c08c772u; R(4)+=0x1cu; f_8c0a2ce0(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,0,4,15);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c08c7c0;
  { fp_mov(c,3,4); goto L8c08c7ca; }
L8c08c7c0:;
  fp_mov(c,2,5);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c08c7ca:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c816;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08c7e2;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c08c7ec; }
L8c08c7e2:;
  R(0)=0x20u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c7ec:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c816;
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08c804;
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c08c80e; }
L8c08c804:;
  R(0)=0x24u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c80e:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c816;
  { R(3)=0x1u; goto L8c08c818; }
L8c08c816:;
  R(3)=0x0u;
L8c08c818:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08c8c6;
  R(0)=0x34u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,0,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  R(6)=R(15);
  R(5)=R(15);
  R(5)+=0x34u;
  R(6)+=0x1cu;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c08c8a4u; R(4)+=0xcu; sh4_call(c,tg); }
  R(0)=0xcu;
  R(5)=R(15);
  R(6)=R(15);
  fp_ld(c,12,R(0)+R(15));
  R(4)=R(15);
  R(5)+=0x34u;
  R(6)+=0x28u;
  { uint32_t tg=R(12); c->pr=0x8c08c8b6u; R(4)+=0xcu; sh4_call(c,tg); }
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c08c940u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c08c8c8;
  { fp_unary(c,0,12); goto L8c08c8c8; }
L8c08c8c6:;
  fp_mov(c,12,14);
L8c08c8c8:;
  R(5)=LD32(R(15));
  R(4)=R(15);
  { uint32_t tg=R(14); c->pr=0x8c08c8d0u; R(4)+=0x34u; sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x28u;
  { uint32_t tg=R(13); c->pr=0x8c08c8dau; R(4)+=0x34u; sh4_call(c,tg); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(!c->t) goto L8c08c8e4;
  { fp_mov(c,15,14); goto L8c08ca48; }
L8c08c8e4:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c0a2ce0u;
  R(4)=R(15);
  R(5)+=0x34u;
  R(7)+=0x28u;
  R(6)+=0x28u;
  { c->pr=0x8c08c8f8u; R(4)+=0x1cu; f_8c0a2ce0(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,5,4);
  fp_arith(c,0,5,15);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c08c90a;
  { fp_mov(c,3,5); goto L8c08c914; }
L8c08c90a:;
  fp_mov(c,2,4);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c08c914:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c994;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08c960;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c08c96a; }
L8c08c960:;
  R(0)=0x20u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c96a:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c994;
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08c982;
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c08c98c; }
L8c08c982:;
  R(0)=0x24u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08c98c:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c08c994;
  { R(3)=0x1u; goto L8c08c996; }
L8c08c994:;
  R(3)=0x0u;
L8c08c996:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08ca46;
  R(0)=0x34u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,6);
  R(6)=R(15);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  R(5)=R(15);
  R(6)+=0x1cu;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(12); c->pr=0x8c08ca24u; R(4)+=0xcu; sh4_call(c,tg); }
  R(0)=0xcu;
  R(5)=R(15);
  R(6)=R(15);
  fp_ld(c,15,R(0)+R(15));
  R(4)=R(15);
  R(5)+=0x34u;
  R(6)+=0x28u;
  { uint32_t tg=R(12); c->pr=0x8c08ca36u; R(4)+=0xcu; sh4_call(c,tg); }
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c08cba0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c08ca48;
  { fp_unary(c,0,15); goto L8c08ca48; }
L8c08ca46:;
  fp_mov(c,15,14);
L8c08ca48:;
  fp_mov(c,4,15);
  fp_arith(c,1,4,12);
  fp_mov(c,0,4);
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08ca62(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  c->fr[7]=0x3F800000u;
  fp_mov(c,14,4);
  fp_cmp(c,0,14,7);
  { uint32_t k=!c->t; R(14)=R(4); if(k) goto L8c08ca7a; }
  {  goto L8c08cb82; }
L8c08ca7a:;
  R(0)=0x4u;
  fp_ld(c,4,R(14));
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,6,R(5));
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_ld(c,5,R(0)+R(5));
  fp_mov(c,0,6);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(5));
  R(0)=0x8c08cba4u;
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,5,R(0));
  fp_cmp(c,1,15,5);
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c08cb82; }
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c08cb82;
  fp_mov(c,5,7);
  fp_arith(c,3,5,15);
  fp_ld(c,3,R(14));
  R(0)=0x1cu;
  fp_mov(c,2,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_mov(c,2,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_arith(c,2,5,3);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,5,7);
  fp_arith(c,3,5,4);
  fp_ld(c,3,R(5));
  fp_mov(c,2,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x14u;
  fp_mov(c,2,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(5)=R(15);
  R(3)=0x8c0a2d6eu;
  R(6)=R(15);
  fp_arith(c,2,5,3);
  R(0)=0x18u;
  R(5)+=0x10u;
  R(6)+=0x1cu;
  fp_st(c,5,R(0)+R(15));
  { c->pr=0x8c08cb10u; R(4)=R(15); f_8c0a2d6e(c); }
  fp_ld(c,3,R(15));
  R(5)=R(15);
  R(3)=0x8c0a2f0eu;
  R(6)=R(15);
  fp_arith(c,3,3,14);
  R(5)+=0x10u;
  R(6)+=0x1cu;
  fp_st(c,3,R(15));
  { c->pr=0x8c08cb24u; R(4)=R(15); f_8c0a2f0e(c); }
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x1cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(14));
L8c08cb82:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08cbc0(SH4Ctx *c) {
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
  R(15)+=0xfffffff4u;
  R(0)=0x4u;
  R(13)=R(7);
  fp_st(c,5,R(15));
  R(4)=(uint32_t)(int32_t)(int8_t)R(4);
  fp_st(c,7,R(0)+R(15));
  R(0)=R(5);
  ST8(R(15)+8,R(0));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,12,6);
  c->t=(R(4)&R(4))==0;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(13));
  R(10)=R(6);
  fp_mov(c,13,4);
  R(12)=0x0u;
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_ld(c,4,R(0)+R(13));
  R(14)=LD32(R(15)+60);
  fp_mov(c,0,4);
  R(9)=0x8c05e6eau;
  fp_fmac(c,3,4);
  R(11)=LD32(R(15)+56);
  fp_unary(c,2,3);
  fp_mov(c,14,3);
  { uint32_t k=!c->t; fp_mov(c,15,3); if(k) goto L8c08cc1c; }
  R(0)=0x8c08cd24u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,14,3);
  if(c->t) goto L8c08cc30;
L8c08cc1c:;
  R(2)=0x8c05e5f4u;
  R(5)=R(10);
  R(6)=R(13);
  { c->pr=0x8c08cc26u; R(4)=R(11); f_8c05e5f4(c); }
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c08cc2cu; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c08cce2; }
L8c08cc30:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,13,3);
  if(!c->t) goto L8c08cc4a;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c08cc3cu; R(4)=R(11); sh4_call(c,tg); }
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(14));
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8u;
  { fp_st(c,4,R(0)+R(14)); goto L8c08cce2; }
L8c08cc4a:;
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c08cc50u; R(4)=R(14); sh4_call(c,tg); }
  fp_cmp(c,1,14,13);
  { uint32_t k=!c->t; R(4)=0x1u; if(k) goto L8c08cc5a; }
  R(12)=R(4);
  fp_mov(c,15,13);
L8c08cc5a:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08cc9c;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,12,3);
  { uint32_t k=c->t; fp_mov(c,4,14); if(k) goto L8c08cc82; }
  fp_mov(c,5,13);
  fp_arith(c,2,5,12);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c08cc82;
  fp_arith(c,3,4,12);
  R(0)=0x8c08cd24u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c08cc82;
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c08cc82;
  fp_mov(c,15,4);
  R(12)=R(4);
L8c08cc82:;
  fp_ld(c,2,R(15));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c08cc9c;
  fp_mov(c,5,13);
  fp_arith(c,3,5,2);
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  fp_arith(c,0,4,5);
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c08cc9c;
  fp_mov(c,15,4);
  R(12)=R(4);
L8c08cc9c:;
  R(12)=R(12)&0xFF;
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(6)=R(14); if(k) goto L8c08ccc2; }
  fp_mov(c,4,15);
  fp_arith(c,3,4,14);
  fp_ld(c,3,R(14));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(14));
L8c08ccc2:;
  R(4)=R(11);
  R(5)=R(10);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c05e5f4u;
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e5f4(c); return; } }
L8c08cce2:;
  R(15)+=0xcu;
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
void f_8c08ccfc(SH4Ctx *c) {
  R(4)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c08cd0a;
  R(0)=0x8c08cd24u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,7);
  if(!c->t) goto L8c08cd40;
L8c08cd0a:;
  { fp_mov(c,0,7); return; }
L8c08cd40:;
  fp_mov(c,9,7);
  fp_cmp(c,1,9,4);
  { uint32_t k=!c->t; R(5)=(uint32_t)(int32_t)(int8_t)R(5); if(k) goto L8c08cd4a; }
  fp_mov(c,9,4);
L8c08cd4a:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c08cd6e;
  fp_mov(c,10,4);
  fp_arith(c,2,10,6);
  fp_cmp(c,1,10,7);
  if(!c->t) goto L8c08cd5e;
  fp_arith(c,3,7,6);
  fp_cmp(c,1,9,7);
  if(!c->t) goto L8c08cd5e;
  fp_mov(c,9,7);
L8c08cd5e:;
  fp_mov(c,3,5);
  fp_mov(c,5,4);
  fp_arith(c,3,5,3);
  fp_mov(c,4,8);
  fp_arith(c,0,4,5);
  fp_cmp(c,1,9,4);
  if(!c->t) goto L8c08cd6e;
  fp_mov(c,9,4);
L8c08cd6e:;
  fp_mov(c,0,9);
  {  return; }
}
void f_8c08cd74(SH4Ctx *c) {
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
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(0)=0x170u;
  R(13)=R(4);
  R(12)=0x22cu;
  R(11)=R(6);
  R(3)=0x8c0163ceu;
  fp_st(c,4,R(15));
  R(12)+=R(13);
  R(9)=LD32(R(5)+36);
  R(5)=R(15);
  R(14)=LD32(R(13)+R(0));
  R(5)+=0x68u;
  { c->pr=0x8c08cda8u; R(4)=R(9); f_8c0163ce(c); }
  R(5)=R(12);
  R(10)=0x8c05e6eau;
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c08cdb4u; R(4)+=0x5cu; f_8c05e6ea(c); }
  R(0)=0x38u;
  R(5)=0xf8u;
  fp_ld(c,15,R(0)+R(12));
  R(4)=R(15);
  R(5)+=R(14);
  fp_mov(c,3,15);
  fp_ld(c,15,R(15));
  fp_arith(c,2,15,3);
  { uint32_t tg=R(10); c->pr=0x8c08cdc8u; R(4)+=0x44u; sh4_call(c,tg); }
  R(4)=R(15);
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c08cdd0u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(0)=0x56u;
  R(3)=R(15);
  R(3)+=0x50u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x30u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(7)=R(15);
  R(6)=R(15);
  R(6)+=0x70u;
  R(0)&=0x2u;
  R(5)=R(0);
  R(0)=0x56u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(7)+=0x64u;
  R(0)&=0x1u;
  R(4)=R(0);
  R(0)=0x4cu;
  fp_ld(c,12,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,13,R(0)+R(15));
  R(0)=0x54u;
  fp_mov(c,0,12);
  fp_mov(c,3,13);
  fp_arith(c,2,3,13);
  fp_ld(c,14,R(0)+R(15));
  fp_fmac(c,3,12);
  fp_mov(c,0,14);
  fp_fmac(c,3,14);
  fp_unary(c,2,3);
  fp_mov(c,7,3);
  R(0)=0x40u;
  fp_ld(c,6,R(0)+R(12));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(12));
  { c->pr=0x8c08ce1cu; fp_mov(c,4,15); f_8c08cbc0(c); }
  R(15)+=0x8u;
  R(5)=R(15);
  R(5)+=0x2cu;
  { uint32_t tg=R(10); c->pr=0x8c08ce26u; R(4)=R(11); sh4_call(c,tg); }
  R(0)=0x56u;
  R(8)=0x8c05e5f4u;
  R(0)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c08ce36;
  {  goto L8c08d046; }
L8c08ce36:;
  R(0)=0x48u;
  R(5)=R(12);
  fp_ld(c,14,R(0)+R(12));
  R(6)=R(15);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  fp_mov(c,3,14);
  R(6)+=0x68u;
  fp_ld(c,14,R(15));
  R(5)+=0x58u;
  fp_arith(c,2,14,3);
  { c->pr=0x8c08ce50u; R(4)+=0x44u; f_8c05e612(c); }
  R(0)=0x8c08ce98u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0));
  R(0)=0x8c08ce9cu;
  fp_ld(c,4,R(0));
  R(0)=0x44u;
  fp_ld(c,7,R(0)+R(15));
  fp_mov(c,6,7);
  fp_arith(c,0,6,4);
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c08cea0;
  { fp_mov(c,3,6); goto L8c08ceaa; }
L8c08cea0:;
  fp_mov(c,2,7);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c08ceaa:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c08cef6;
  R(0)=0x48u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08cec2;
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,4); goto L8c08cecc; }
L8c08cec2:;
  R(0)=0x48u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08cecc:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c08cef6;
  R(0)=0x4cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08cee4;
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,4); goto L8c08ceee; }
L8c08cee4:;
  R(0)=0x4cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08ceee:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c08cef6;
  { R(3)=0x1u; goto L8c08cef8; }
L8c08cef6:;
  R(3)=0x0u;
L8c08cef8:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(5)=R(12); if(k) goto L8c08cf3c; }
  R(0)=0x44u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x4cu;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x44u;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c08cf3c:;
  R(4)=R(15);
  R(5)+=0x58u;
  { uint32_t tg=R(10); c->pr=0x8c08cf44u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(4)=R(15);
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c08cf4cu; R(4)+=0x20u; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x20u;
  R(5)+=0x2cu;
  { c->pr=0x8c08cf5cu; R(4)+=0x2cu; f_8c05e612(c); }
  R(0)=0x2cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c08cfa4;
  c->fr[4]=0x3F800000u;
  fp_arith(c,3,4,15);
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
L8c08cfa4:;
  R(5)=R(15);
  R(3)=0x8c0a2d6eu;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x2cu;
  R(5)+=0x44u;
  { c->pr=0x8c08cfb4u; R(4)+=0x10u; f_8c0a2d6e(c); }
  R(0)=0x10u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x56u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)&=0x8u;
  R(5)=R(0);
  R(0)=0x56u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)&=0x4u;
  R(4)=R(0);
  R(0)=0xcu;
  fp_ld(c,8,R(0)+R(11));
  R(0)=0x50u;
  fp_ld(c,6,R(0)+R(12));
  R(0)=0x4cu;
  fp_ld(c,5,R(0)+R(12));
  { c->pr=0x8c08cfd8u; fp_mov(c,4,14); f_8c08ccfc(c); }
  c->fr[2]=0x00000000u;
  R(0)=0xcu;
  fp_mov(c,3,0);
  fp_cmp(c,0,3,2);
  { uint32_t k=c->t; fp_st(c,0,R(0)+R(11)); if(k) goto L8c08cffa; }
  fp_ld(c,3,R(0)+R(11));
  R(6)=R(15);
  R(5)=R(15);
  R(0)=0x10u;
  R(3)=0x8c0a2f0eu;
  R(4)=R(15);
  R(5)+=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x44u;
  { c->pr=0x8c08cffau; R(4)+=0x10u; f_8c0a2f0e(c); }
L8c08cffa:;
  R(0)=0x44u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(5)=R(15);
  R(6)=R(12);
  R(5)+=0x44u;
  R(6)+=0x58u;
  { uint32_t tg=R(8); c->pr=0x8c08d046u; R(4)=R(11); sh4_call(c,tg); }
L8c08d046:;
  R(0)=0x56u;
  R(4)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(3)=0x1u;
  R(4)=R(4)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c08d058;
  R(1)=0x4u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c08d0b0;
L8c08d058:;
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x68u;
  R(5)=R(11);
  { c->pr=0x8c08d066u; R(4)+=0x44u; f_8c05e612(c); }
  R(5)=0xf8u;
  R(0)=0x64u;
  fp_ld(c,4,R(0)+R(12));
  R(4)=R(15);
  R(5)+=R(14);
  { R(4)+=0x44u; goto L8c08d0a0; }
L8c08d0a0:;
  { c->pr=0x8c08d0a4u;  f_8c08ca62(c); }
  R(5)=R(15);
  R(6)=R(15);
  R(5)+=0x44u;
  R(6)+=0x68u;
  { uint32_t tg=R(8); c->pr=0x8c08d0b0u; R(4)=R(11); sh4_call(c,tg); }
L8c08d0b0:;
  R(0)=0x56u;
  R(0)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c08d140;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x44u;
  R(7)+=0x44u;
  R(6)+=0x38u;
  { c->pr=0x8c08d0ccu; R(4)=R(9); f_8c015e64(c); }
  R(0)=0x38u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(3)=0x8c0163ceu;
  R(5)+=0x44u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08d0f4u; R(4)=R(9); sh4_call(c,tg); }
  R(5)=R(15);
  R(6)=R(15);
  R(4)=R(11);
  R(5)+=0x38u;
  R(6)+=0x44u;
  { uint32_t tg=R(8); c->pr=0x8c08d102u; R(4)+=0x10u; sh4_call(c,tg); }
  R(0)=0x50u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x58u;
  R(4)=R(15);
  R(5)+=0x50u;
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(10); c->pr=0x8c08d11au; R(4)+=0x4u; sh4_call(c,tg); }
  R(5)=R(15);
  { R(5)+=0x4u; goto L8c08d1e6; }
L8c08d140:;
  R(5)=R(11);
  R(4)=R(15);
  R(5)+=0x10u;
  { uint32_t tg=R(10); c->pr=0x8c08d14au; R(4)+=0x68u; sh4_call(c,tg); }
  R(5)=R(12);
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x68u;
  R(5)+=0x4u;
  { c->pr=0x8c08d15au; R(4)+=0x5cu; f_8c05e612(c); }
  R(0)=0x1cu;
  R(5)=0x130u;
  fp_ld(c,15,R(0)+R(12));
  R(4)=R(15);
  R(5)+=R(14);
  fp_mov(c,3,15);
  fp_ld(c,15,R(15));
  fp_arith(c,2,15,3);
  { uint32_t tg=R(10); c->pr=0x8c08d16eu; R(4)+=0x44u; sh4_call(c,tg); }
  R(5)=R(11);
  R(4)=R(15);
  R(5)+=0x10u;
  { uint32_t tg=R(10); c->pr=0x8c08d178u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(0)=0x56u;
  R(3)=R(15);
  R(3)+=0x50u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x30u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(7)=R(15);
  R(6)=R(15);
  R(6)+=0x70u;
  R(0)&=0x20u;
  R(5)=R(0);
  R(0)=0x56u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(7)+=0x64u;
  R(0)&=0x10u;
  R(4)=R(0);
  R(0)=0x4cu;
  fp_ld(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,13,R(0)+R(15));
  R(0)=0x54u;
  fp_mov(c,0,14);
  fp_mov(c,3,13);
  fp_arith(c,2,3,13);
  fp_ld(c,12,R(0)+R(15));
  fp_fmac(c,3,14);
  fp_mov(c,0,12);
  fp_fmac(c,3,12);
  fp_unary(c,2,3);
  fp_mov(c,7,3);
  R(0)=0x24u;
  fp_ld(c,6,R(0)+R(12));
  R(0)=0x20u;
  fp_ld(c,5,R(0)+R(12));
  { c->pr=0x8c08d1c4u; fp_mov(c,4,15); f_8c08cbc0(c); }
  R(15)+=0x8u;
  R(5)=0x130u;
  R(0)=0x74u;
  fp_ld(c,4,R(0)+R(12));
  R(4)=R(15);
  R(5)+=R(14);
  { c->pr=0x8c08d1d4u; R(4)+=0x50u; f_8c08ca62(c); }
  R(5)=R(15);
  R(6)=R(15);
  R(4)=R(11);
  R(5)+=0x50u;
  R(6)+=0x68u;
  { uint32_t tg=R(8); c->pr=0x8c08d1e2u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=R(15);
  R(5)+=0x50u;
L8c08d1e6:;
  R(4)=0x130u;
  { uint32_t tg=R(10); c->pr=0x8c08d1ecu; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=R(13);
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
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
void f_8c08d240(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(0)=0x10u;
  R(3)=0x8c0163ceu;
  R(13)=0x0u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+12,R(5));
  R(5)=R(15);
  R(5)+=0x20u;
  ST32(R(15),R(6));
  ST32(R(15)+4,R(7));
  ST8(R(15)+R(0),R(13));
  { c->pr=0x8c08d26cu; R(4)=LD32(R(15)); f_8c0163ce(c); }
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x14u;
  { c->pr=0x8c08d276u; R(4)=LD32(R(15)+4); f_8c0163ce(c); }
  R(3)=0x8c0cbe00u;
  R(2)=0x8c0a17c0u;
  R(5)=LD32(R(15)+12);
  R(7)=LD32(R(15)+4);
  R(6)=LD32(R(15));
  { c->pr=0x8c08d284u; R(4)=LD32(R(3)); f_8c0a17c0(c); }
  ST32(R(15),R(0));
  R(0)=0x8c08d3ccu;
  R(3)=LD32(R(15));
  R(8)=R(13);
  R(10)=0x8c05e55cu;
  fp_ld(c,15,R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(12)=R(13); if(k) goto L8c08d326; }
L8c08d296:;
  R(3)=0x8c0cbe00u;
  R(11)=R(13);
  R(2)=0x8c05a3e0u;
  R(14)=LD32(R(3));
  R(14)+=R(12);
  R(9)=LD32(R(14)+32);
  { c->pr=0x8c08d2a6u; R(4)=R(9); f_8c05a3e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08d2cc;
  R(2)=0x8c05a40eu;
  { c->pr=0x8c08d2b0u; R(4)=R(9); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c08d2cc; }
  R(2)=0x8c087e94u;
  { c->pr=0x8c08d2bcu;  f_8c087e94(c); }
  R(3)=0xc000u;
  R(4)=R(0);
  R(11)=R(4)&0xFFFF;
  R(11)&=R(3);
  c->t=(R(11)&R(11))==0;
  R(11)=c->t;
  R(11)+=0xffffffffu;
  R(11)=0u-R(11);
L8c08d2cc:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c08d31c;
  R(5)=R(14);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x20u;
  R(5)+=0x10u;
  { c->pr=0x8c08d2e2u; R(4)+=0x14u; f_8c05e612(c); }
  R(5)=R(14);
  R(4)=R(15);
  R(5)+=0x4u;
  { uint32_t tg=R(10); c->pr=0x8c08d2ecu; R(4)+=0x14u; sh4_call(c,tg); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,0,3);
  if(c->t) goto L8c08d31c;
  fp_ld(c,2,R(14));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c08d314;
  R(5)=R(14);
  R(4)=R(14);
  R(5)+=0x4u;
  { uint32_t tg=R(10); c->pr=0x8c08d302u; R(4)+=0x3cu; sh4_call(c,tg); }
  fp_cmp(c,1,0,15);
  if(c->t) goto L8c08d31c;
  R(3)=0x8c09c3dcu;
  R(2)=R(14);
  R(1)=LD32(R(15)+8);
  { c->pr=0x8c08d310u; R(0)=0x68u; f_8c09c3dc(c); }
  {  goto L8c08d338; }
L8c08d314:;
  R(0)=0x10u;
  R(3)=0x1u;
  ST8(R(15)+R(0),R(3));
  ST32(R(15)+4,R(14));
L8c08d31c:;
  R(3)=LD32(R(15));
  R(8)+=0x1u;
  c->t=(int32_t)R(8)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(12)+=0x68u; if(k) goto L8c08d296; }
L8c08d326:;
  R(0)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c08d33c;
  R(3)=0x8c09c3dcu;
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(15)+8);
  { c->pr=0x8c08d338u; R(0)=0x68u; f_8c09c3dc(c); }
L8c08d338:;
  { R(0)=0x1u; goto L8c08d33e; }
L8c08d33c:;
  R(0)=0x0u;
L8c08d33e:;
  R(15)+=0x2cu;
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
void f_8c08d354(SH4Ctx *c) {
  fp_ld(c,5,R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  { uint32_t k=c->t; R(0)=0x4u; if(k) goto L8c08d360; }
  fp_unary(c,0,5);
L8c08d360:;
  fp_ld(c,6,R(0)+R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,6,3);
  { uint32_t k=c->t; R(0)=0x8u; if(k) goto L8c08d36c; }
  fp_unary(c,0,6);
L8c08d36c:;
  fp_ld(c,7,R(0)+R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,7,3);
  { uint32_t k=c->t; fp_arith(c,0,5,6); if(k) goto L8c08d378; }
  fp_unary(c,0,7);
L8c08d378:;
  fp_arith(c,0,5,7);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c08d384;
  { fp_mov(c,3,5); goto L8c08d388; }
L8c08d384:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c08d388:;
  fp_cmp(c,1,4,3);
  { R(0)=c->t; return; }
}
void f_8c08d38e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=0x8c05e6eau;
  ST32(R(15)+8,R(4));
  R(4)=R(15);
  ST32(R(15)+4,R(5));
  fp_st(c,4,R(15));
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c08d3a2u; R(4)+=0xcu; f_8c05e6ea(c); }
  R(3)=0x8c05e612u;
  R(5)=R(15);
  R(6)=LD32(R(15)+4);
  R(4)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c08d3b0u; R(4)+=0xcu; f_8c05e612(c); }
  fp_ld(c,4,R(15));
  R(4)=R(15);
  { c->pr=0x8c08d3b8u; R(4)+=0xcu; f_8c08d354(c); }
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c08d400(SH4Ctx *c) {
  R(1)=0x0u;
  R(3)=R(1);
  c->t=R(3)>=R(6);
  R(7)=0x0u;
  { uint32_t k=c->t; R(7)+=R(4); if(k) goto L8c08d434; }
L8c08d40c:;
  fp_ld(c,2,R(7));
  fp_ld(c,3,R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08d42c;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08d42c;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08d42c;
  { R(0)=0x1u; return; }
L8c08d42c:;
  R(1)+=0x1u;
  c->t=R(1)>=R(6);
  { uint32_t k=!c->t; R(7)+=0xcu; if(k) goto L8c08d40c; }
L8c08d434:;
  R(0)=0x0u;
  {  return; }
}
void f_8c08d43a(SH4Ctx *c) {
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
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffdd0u;
  R(15)+=R(0);
  ST32(R(15)+24,R(4));
  R(14)=0x0u;
  R(4)=0x124u;
  R(0)=0x44u;
  ST32(R(15)+R(0),R(6));
  R(4)+=R(15);
  ST32(R(15)+60,R(7));
  R(3)=R(4);
  R(3)+=0xcu;
  R(2)=R(4);
  R(1)=R(4);
  R(2)+=0x18u;
  ST32(R(15)+40,R(14));
  R(1)+=0x24u;
  ST32(R(15)+52,R(14));
  ST32(R(15)+20,R(4));
  ST32(R(15)+28,R(3));
  R(3)=R(4);
  R(3)+=0x30u;
  ST32(R(15),R(2));
  ST32(R(15)+12,R(1));
  R(2)=R(4);
  ST32(R(15)+16,R(3));
  R(2)+=0x3cu;
  R(1)=R(4);
  R(3)=R(4);
  ST32(R(15)+44,R(2));
  R(1)+=0x48u;
  R(3)+=0x54u;
  R(2)=R(4);
  ST32(R(15)+8,R(1));
  ST32(R(15)+48,R(3));
  R(1)=R(4);
  R(0)=0x40u;
  R(4)+=0x78u;
  R(2)+=0x60u;
  ST32(R(15)+32,R(2));
  R(1)+=0x6cu;
  R(2)=0x22cu;
  ST32(R(15)+4,R(1));
  ST32(R(15)+R(0),R(4));
  R(2)+=R(5);
  R(0)=0x170u;
  R(3)=LD32(R(5)+R(0));
  ST32(R(15)+36,R(3));
  R(3)=0x8c0163ceu;
  ST32(R(15)+56,R(2));
  R(4)=LD32(R(15)+60);
  R(5)=LD32(R(15)+48);
  { c->pr=0x8c08d4bcu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(15)+48);
  { c->pr=0x8c08d4c4u; R(4)=LD32(R(15)+16); f_8c05e6ea(c); }
  R(0)=0x260u;
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(15)+R(0));
  { c->pr=0x8c08d4ceu; R(4)=LD32(R(15)+44); f_8c05e6ea(c); }
  R(3)=0xf8u;
  R(5)=LD32(R(15)+36);
  R(2)=0x8c05e6eau;
  R(5)+=R(3);
  { c->pr=0x8c08d4dau; R(4)=LD32(R(15)+8); f_8c05e6ea(c); }
  R(3)=LD32(R(15)+8);
  R(0)=0x8c08d534u;
  fp_ld(c,3,R(0));
  fp_ld(c,5,R(3));
  c->fr[2]=0x00000000u;
  fp_mov(c,4,5);
  fp_arith(c,0,4,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c08d4f0;
  { fp_mov(c,3,4); goto L8c08d4f8; }
L8c08d4f0:;
  fp_mov(c,1,5);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c08d4f8:;
  R(0)=0x8c08d538u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08d58a;
  R(0)=0x8c08d534u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08d540;
  R(0)=0x8c08d534u;
  R(2)=LD32(R(15)+8);
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08d54a; }
L8c08d540:;
  R(3)=LD32(R(15)+8);
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08d54a:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08d604u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08d58a;
  R(0)=0x8c08d608u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08d572;
  R(0)=0x8c08d608u;
  R(2)=LD32(R(15)+8);
  fp_ld(c,2,R(0));
  R(0)=0x8u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08d57c; }
L8c08d572:;
  R(3)=LD32(R(15)+8);
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08d57c:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08d604u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08d58a;
  { R(2)=0x1u; goto L8c08d58c; }
L8c08d58a:;
  R(2)=0x0u;
L8c08d58c:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08d5c8;
  R(4)=LD32(R(15)+8);
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,6,R(4));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,6);
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
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
L8c08d5c8:;
  R(0)=0x168u;
  R(2)=0xfffffffeu;
  R(3)=LD32(R(15)+36);
  R(12)=R(14);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
  R(1)=0x56u;
  R(3)=LD32(R(15)+36);
  ST32(R(3)+4,R(14));
  R(0)=LD32(R(15)+56);
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x40)==0;
  { uint32_t k=c->t; c->fr[14]=0x00000000u; if(k) goto L8c08d620; }
  R(0)=0x260u;
  { R(5)=LD32(R(15)+R(0)); goto L8c08d8f0; }
L8c08d620:;
  R(3)=0x8c014ea0u;
  R(4)=0xbcu;
  { c->pr=0x8c08d628u; R(4)+=R(15); f_8c014ea0(c); }
  R(2)=0x8c014ea0u;
  R(4)=R(15);
  { c->pr=0x8c08d630u; R(4)+=0x54u; f_8c014ea0(c); }
  R(0)=0x8c08d6acu;
  R(5)=LD32(R(15)+44);
  fp_ld(c,13,R(0));
  fp_mov(c,4,13);
  { c->pr=0x8c08d63cu; R(4)=LD32(R(15)+16); f_8c08d38e(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08d654;
  R(3)=LD32(R(15)+56);
  R(0)=0x56u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(3)=0x100u;
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08d654;
  {  goto L8c08df76; }
L8c08d654:;
  R(10)=0x1e4u;
  R(11)=0x1u;
  R(13)=0x8c05e5f4u;
  R(8)=0x8c05e55cu;
  R(10)+=R(15);
  R(9)=0x8c01638au;
  c->fr[12]=0x3F800000u;
L8c08d662:;
  R(4)=0xbcu;
  R(5)=LD32(R(15)+16);
  { uint32_t tg=R(9); c->pr=0x8c08d66au; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=LD32(R(15)+44);
  R(4)=R(15);
  { uint32_t tg=R(9); c->pr=0x8c08d672u; R(4)+=0x54u; sh4_call(c,tg); }
  R(6)=0xbcu;
  R(7)=R(15);
  R(5)=LD32(R(15)+60);
  R(7)+=0x54u;
  R(6)+=R(15);
  { c->pr=0x8c08d680u; R(4)=LD32(R(15)+24); f_8c08d240(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>0;
  if(c->t) goto L8c08d6c0;
  { R(5)=LD32(R(15)+44); goto L8c08d8f0; }
L8c08d6c0:;
  R(5)=LD32(R(15)+24);
  R(4)=LD32(R(15)+36);
  R(3)=0x8c05e6eau;
  R(5)+=0x4u;
  { c->pr=0x8c08d6ccu; R(4)+=0xcu; f_8c05e6ea(c); }
  R(5)=LD32(R(15)+24);
  R(3)=0x8c05e6eau;
  R(5)+=0x4u;
  { c->pr=0x8c08d6d6u; R(4)=LD32(R(15)+20); f_8c05e6ea(c); }
  R(0)=0x260u;
  R(14)=LD32(R(15));
  R(3)=0x8c05e612u;
  R(6)=LD32(R(15)+48);
  R(5)=LD32(R(15)+R(0));
  { c->pr=0x8c08d6e4u; R(4)=R(14); f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,6,R(14));
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x168u;
  R(3)=LD32(R(15)+36);
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(11))==0;
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  { uint32_t k=c->t; fp_mov(c,15,3); if(k) goto L8c08d70c; }
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c08d7b8;
L8c08d70c:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c08d7b8;
  R(0)=0x168u;
  R(2)=0xfffffffdu;
  R(3)=LD32(R(15)+36);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
  R(5)=LD32(R(15)+20);
  { uint32_t tg=R(8); c->pr=0x8c08d724u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  fp_mov(c,4,0);
  fp_arith(c,3,4,15);
  R(0)=0x8c08d86cu;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c08d7b8;
  R(5)=LD32(R(15)+56);
  R(14)=LD32(R(15)+12);
  R(3)=0x8c05e612u;
  R(5)+=0x58u;
  R(6)=LD32(R(15)+48);
  { c->pr=0x8c08d73eu; R(4)=R(14); f_8c05e612(c); }
  fp_mov(c,4,12);
  fp_arith(c,3,4,15);
  R(2)=LD32(R(15));
  R(0)=0x4u;
  R(3)=R(2);
  fp_ld(c,3,R(3));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(2));
  R(3)=LD32(R(15));
  fp_mov(c,2,4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,4,R(14));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  fp_ld(c,6,R(0)+R(14));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  R(0)=0x4u;
  R(5)=R(14);
  fp_mov(c,4,3);
  fp_ld(c,3,R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(14));
  { uint32_t tg=R(8); c->pr=0x8c08d7a2u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(0)=0x8c08d870u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c08d7b8;
  R(0)=0x168u;
  R(2)=0x2u;
  R(3)=LD32(R(15)+36);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)|=R(2);
  ST8(R(3)+R(0),R(1));
L8c08d7b8:;
  R(0)=0x168u;
  R(2)=0x1u;
  R(3)=LD32(R(15)+36);
  c->fr[3]=0x00000000u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)|=R(2);
  ST8(R(3)+R(0),R(1));
  R(1)=0x4u;
  R(3)=LD32(R(15)+36);
  ST32(R(3)+4,R(1));
  R(3)=LD32(R(15)+24);
  fp_ld(c,2,R(3));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c08d894;
  R(0)=0x168u;
  R(3)=LD32(R(15)+36);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)|=R(2);
  ST8(R(3)+R(0),R(1));
  R(0)=0x30u;
  R(14)=LD32(R(15)+24);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x34u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x38u;
  fp_mov(c,0,4);
  fp_mov(c,2,6);
  fp_arith(c,2,2,6);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x30u;
  fp_fmac(c,2,4);
  fp_mov(c,0,5);
  fp_fmac(c,2,5);
  fp_mov(c,5,12);
  fp_unary(c,2,2);
  fp_mov(c,4,2);
  fp_arith(c,3,5,4);
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x48u;
  fp_mov(c,1,5);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(14));
  fp_mov(c,1,5);
  fp_arith(c,2,1,2);
  R(0)=0x4cu;
  fp_arith(c,0,4,13);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x50u;
  fp_arith(c,2,5,2);
  fp_mov(c,1,4);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  {  goto L8c08d880; }
L8c08d880:;
  fp_arith(c,2,4,2);
  R(5)=R(15);
  R(0)=0x50u;
  R(5)+=0x48u;
  fp_st(c,4,R(0)+R(15));
  R(6)=LD32(R(15)+44);
  { uint32_t tg=R(13); c->pr=0x8c08d890u; R(4)=LD32(R(15)+16); sh4_call(c,tg); }
  {  goto L8c08df76; }
L8c08d894:;
  R(3)=0x8c05e612u;
  R(5)=LD32(R(15)+44);
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c08d89eu; R(4)=LD32(R(15)+32); f_8c05e612(c); }
  R(2)=LD32(R(15)+32);
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  R(1)=R(2);
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(3));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(2));
  R(3)=LD32(R(15)+32);
  R(2)=LD32(R(15)+24);
  R(1)=R(3);
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,2,R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15)+32);
  R(2)=LD32(R(15)+24);
  R(1)=R(3);
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,2,R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(5)=LD32(R(15)+32);
  R(6)=LD32(R(15)+16);
  { uint32_t tg=R(13); c->pr=0x8c08d8d4u; R(4)=R(5); sh4_call(c,tg); }
  R(5)=LD32(R(15)+20);
  R(6)=LD32(R(15)+40);
  { c->pr=0x8c08d8dcu; R(4)=R(10); f_8c08d400(c); }
  R(14)=R(0);
  R(2)=(uint32_t)(int32_t)(int8_t)R(14);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08d8e8;
  {  goto L8c08dd26; }
L8c08d8e8:;
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c08d920;
  R(5)=LD32(R(15)+48);
L8c08d8f0:;
  R(3)=0x8c05e6eau;
  { c->pr=0x8c08d8f6u; R(4)=LD32(R(15)+16); f_8c05e6ea(c); }
  {  goto L8c08df76; }
L8c08d920:;
  R(4)=LD32(R(15)+40);
  R(5)=LD32(R(15)+20);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(3)=0x8c05e6eau;
  R(4)<<=2;
  { c->pr=0x8c08d932u; R(4)+=R(10); f_8c05e6ea(c); }
  R(2)=LD32(R(15)+40);
  R(3)=0x8c05e612u;
  R(2)+=0x1u;
  ST32(R(15)+40,R(2));
  R(6)=LD32(R(15)+24);
  R(5)=LD32(R(15)+32);
  R(6)+=0x10u;
  { c->pr=0x8c08d944u; R(4)=LD32(R(15)+28); f_8c05e612(c); }
  R(2)=LD32(R(15)+28);
  R(0)=0x4u;
  R(3)=R(2);
  fp_ld(c,5,R(0)+R(3));
  fp_ld(c,6,R(2));
  R(0)=0x8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,6);
  fp_ld(c,4,R(0)+R(3));
  R(0)=0x4u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(15)+28);
  fp_mov(c,2,4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15)+28);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
  R(4)=0x220u;
  R(3)=0x8c0a2d6eu;
  R(6)=LD32(R(15)+20);
  R(5)=LD32(R(15)+28);
  { c->pr=0x8c08d990u; R(4)+=R(15); f_8c0a2d6e(c); }
  R(0)=0x220u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c08da10u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c08d9a4;
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(15)+20);
  { c->pr=0x8c08d9a4u; R(4)=LD32(R(15)+28); f_8c05e6ea(c); }
L8c08d9a4:;
  R(3)=0x8c05e612u;
  R(5)=LD32(R(15)+32);
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c08d9aeu; R(4)=LD32(R(15)); f_8c05e612(c); }
  R(3)=LD32(R(15));
  R(0)=0x8c08da14u;
  fp_ld(c,3,R(0));
  fp_ld(c,4,R(3));
  c->fr[2]=0x00000000u;
  fp_mov(c,5,4);
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c08d9c4;
  { fp_mov(c,3,5); goto L8c08d9cc; }
L8c08d9c4:;
  fp_mov(c,1,4);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c08d9cc:;
  R(0)=0x8c08da18u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08da6a;
  R(0)=0x8c08da14u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08da20;
  R(0)=0x8c08da14u;
  R(2)=LD32(R(15));
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08da2a; }
L8c08da20:;
  R(3)=LD32(R(15));
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08da2a:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08dac0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08da6a;
  R(0)=0x8c08dac4u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08da52;
  R(0)=0x8c08dac4u;
  R(2)=LD32(R(15));
  fp_ld(c,2,R(0));
  R(0)=0x8u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08da5c; }
L8c08da52:;
  R(3)=LD32(R(15));
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08da5c:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08dac0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08da6a;
  { R(2)=0x1u; goto L8c08da6c; }
L8c08da6a:;
  R(2)=0x0u;
L8c08da6c:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08db12;
  R(4)=LD32(R(15));
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,6,R(4));
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x8c08dac8u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_mov(c,6,3);
  fp_ld(c,3,R(0));
  fp_mov(c,4,6);
  fp_arith(c,0,4,3);
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c08dae0;
  R(4)=LD32(R(15));
  R(0)=0x4u;
  fp_st(c,14,R(4));
  fp_st(c,14,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,14,R(0)+R(4)); goto L8c08db00; }
L8c08dae0:;
  fp_mov(c,5,4);
  fp_arith(c,3,5,6);
  R(4)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(4));
  fp_mov(c,0,5);
  fp_arith(c,2,0,1);
  fp_st(c,0,R(4));
  fp_ld(c,1,R(0)+R(4));
  fp_mov(c,0,5);
  fp_arith(c,2,0,1);
  fp_st(c,0,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(4));
  fp_arith(c,2,5,1);
  fp_st(c,5,R(0)+R(4));
L8c08db00:;
  R(3)=0x8c05e6eau;
  R(0)=0x40u;
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c08db0au; R(4)=LD32(R(15)+R(0)); f_8c05e6ea(c); }
  R(5)=LD32(R(15)+16);
  R(6)=LD32(R(15));
  { uint32_t tg=R(13); c->pr=0x8c08db12u; R(4)=R(5); sh4_call(c,tg); }
L8c08db12:;
  R(0)=0x260u;
  R(3)=0x8c05e612u;
  R(5)=LD32(R(15)+R(0));
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c08db1eu; R(4)=LD32(R(15)+4); f_8c05e612(c); }
  R(7)=LD32(R(15)+28);
  R(5)=LD32(R(15)+4);
  R(3)=0x8c0a2ce0u;
  R(6)=R(7);
  { c->pr=0x8c08db2au; R(4)=R(5); f_8c0a2ce0(c); }
  R(3)=LD32(R(15)+8);
  R(0)=0x8c08db90u;
  fp_ld(c,3,R(0));
  fp_ld(c,4,R(3));
  c->fr[2]=0x00000000u;
  fp_mov(c,5,4);
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c08db40;
  { fp_mov(c,3,5); goto L8c08db48; }
L8c08db40:;
  fp_mov(c,1,4);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c08db48:;
  R(0)=0x8c08db94u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dbea;
  R(0)=0x8c08db90u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dba0;
  R(0)=0x8c08db90u;
  R(2)=LD32(R(15)+8);
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08dbaa; }
L8c08dba0:;
  R(3)=LD32(R(15)+8);
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08dbaa:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08dca0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dbea;
  R(0)=0x8c08dca4u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dbd2;
  R(0)=0x8c08dca4u;
  R(2)=LD32(R(15)+8);
  fp_ld(c,2,R(0));
  R(0)=0x8u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08dbdc; }
L8c08dbd2:;
  R(3)=LD32(R(15)+8);
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08dbdc:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08dca0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dbea;
  { R(2)=0x1u; goto L8c08dbec; }
L8c08dbea:;
  R(2)=0x0u;
L8c08dbec:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08dbf6;
  {  goto L8c08dd26; }
L8c08dbf6:;
  R(3)=LD32(R(15)+4);
  R(0)=0x8c08dca4u;
  fp_ld(c,3,R(0));
  fp_ld(c,2,R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dc10;
  R(0)=0x8c08dca4u;
  R(2)=LD32(R(15)+4);
  fp_ld(c,2,R(0));
  { fp_ld(c,3,R(2)); goto L8c08dc18; }
L8c08dc10:;
  R(3)=LD32(R(15)+4);
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
L8c08dc18:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08dca0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dcc0;
  R(0)=0x8c08dca4u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dc40;
  R(0)=0x8c08dca4u;
  R(2)=LD32(R(15)+4);
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08dc4a; }
L8c08dc40:;
  R(3)=LD32(R(15)+4);
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08dc4a:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08dca0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dcc0;
  R(0)=0x8c08dca4u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dc72;
  R(0)=0x8c08dca4u;
  R(2)=LD32(R(15)+4);
  fp_ld(c,2,R(0));
  R(0)=0x8u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08dc7c; }
L8c08dc72:;
  R(3)=LD32(R(15)+4);
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08dc7c:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08dca0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08dcc0;
  { R(2)=0x1u; goto L8c08dcc2; }
L8c08dcc0:;
  R(2)=0x0u;
L8c08dcc2:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08dd26;
  R(3)=LD32(R(15)+4);
  R(0)=0x4u;
  R(2)=R(3);
  fp_ld(c,6,R(0)+R(2));
  fp_ld(c,5,R(3));
  R(0)=0x8u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,5);
  fp_ld(c,4,R(0)+R(3));
  R(0)=0x4u;
  R(2)=LD32(R(15)+4);
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  R(3)=LD32(R(15));
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(2));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  R(2)=LD32(R(15)+4);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(2));
  R(3)=LD32(R(15));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,4,3);
  R(4)=0x220u;
  fp_st(c,4,R(0)+R(3));
  R(3)=0x8c0a2d6eu;
  R(6)=LD32(R(15)+8);
  R(5)=LD32(R(15));
  { c->pr=0x8c08dd18u; R(4)+=R(15); f_8c0a2d6e(c); }
  R(0)=0x220u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c08ddccu;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c08dd26;
  R(12)=R(11);
L8c08dd26:;
  R(2)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08dd36;
  R(14)=(uint32_t)(int32_t)(int8_t)R(14);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c08dd36;
  {  goto L8c08dec6; }
L8c08dd36:;
  R(2)=LD32(R(15)+40);
  c->t=R(2)>R(11);
  if(!c->t) goto L8c08dd98;
  R(3)=LD32(R(15)+40);
  R(0)=0x1e4u;
  R(3)+=0xffffffffu;
  R(1)=LD32(R(15)+20);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  fp_ld(c,2,R(1));
  R(0)+=R(15);
  R(3)<<=2;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08dd92;
  R(3)=LD32(R(15)+40);
  R(0)=0x1e4u;
  R(3)+=0xffffffffu;
  R(2)=LD32(R(15)+20);
  R(1)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(1);
  R(0)+=R(15);
  R(3)<<=2;
  R(3)+=R(0);
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08dd92;
  R(3)=LD32(R(15)+40);
  R(0)=0x1e4u;
  R(3)+=0xffffffffu;
  R(2)=LD32(R(15)+20);
  R(1)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(1);
  R(0)+=R(15);
  R(3)<<=2;
  R(3)+=R(0);
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(2));
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c08dd98;
L8c08dd92:;
  R(0)=LD32(R(15)+52);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c08dde0;
L8c08dd98:;
  R(0)=0x168u;
  R(2)=0x2u;
  R(3)=LD32(R(15)+36);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)|=R(2);
  ST8(R(3)+R(0),R(1));
  {  goto L8c08df76; }
L8c08dde0:;
  R(0)=0x260u;
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(15)+R(0));
  { c->pr=0x8c08ddeau; R(4)=LD32(R(15)+4); f_8c05e6ea(c); }
  R(3)=0x8c05e612u;
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c08ddf4u; R(4)=R(5); f_8c05e612(c); }
  R(4)=LD32(R(15)+40);
  R(0)=0x8u;
  R(2)=LD32(R(15)+20);
  R(4)+=0xffffffffu;
  R(14)=LD32(R(15));
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  fp_ld(c,3,R(0)+R(2));
  R(4)<<=2;
  R(3)=R(2);
  R(0)=0x4u;
  R(4)+=R(10);
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(14));
  R(3)=LD32(R(15)+20);
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(3));
  fp_ld(c,1,R(4));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(14));
  R(3)=LD32(R(15)+20);
  R(0)=0x4u;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(0)+R(3));
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(3));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,4,R(14));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(5)=R(14);
  R(4)=0x1a8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(14));
  R(6)=LD32(R(15)+52);
  { c->pr=0x8c08de88u; R(4)+=R(15); f_8c08d400(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08de92;
  {  goto L8c08df76; }
L8c08de92:;
  R(4)=LD32(R(15)+52);
  R(2)=0x1a8u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(15));
  R(4)<<=2;
  R(2)+=R(15);
  { c->pr=0x8c08dea8u; R(4)+=R(2); f_8c05e6ea(c); }
  R(2)=LD32(R(15)+52);
  R(3)=0x8c0a2ce0u;
  R(2)+=0x1u;
  ST32(R(15)+52,R(2));
  R(7)=LD32(R(15));
  R(14)=LD32(R(15)+4);
  R(6)=R(7);
  R(5)=R(14);
  { c->pr=0x8c08debcu; R(4)=LD32(R(15)+12); f_8c0a2ce0(c); }
  R(3)=0x8c05e612u;
  R(5)=R(14);
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c08dec6u; R(4)=R(14); f_8c05e612(c); }
L8c08dec6:;
  R(2)=LD32(R(15)+4);
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08df20;
  R(2)=LD32(R(15)+4);
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08df20;
  R(2)=LD32(R(15)+4);
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08df20;
  R(4)=LD32(R(15)+8);
  R(0)=0x4u;
  fp_st(c,14,R(4));
  fp_st(c,14,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,14,R(0)+R(4)); goto L8c08df64; }
L8c08df20:;
  R(14)=LD32(R(15)+4);
  R(5)=LD32(R(15)+16);
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c08df2au; R(4)=LD32(R(15)+44); sh4_call(c,tg); }
  R(0)=0x4u;
  fp_ld(c,6,R(14));
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x4u;
  R(3)=LD32(R(15)+8);
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=LD32(R(15)+8);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
L8c08df64:;
  R(5)=LD32(R(15)+44);
  fp_mov(c,4,13);
  { c->pr=0x8c08df6cu; R(4)=LD32(R(15)+16); f_8c08d38e(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08df76;
  {  goto L8c08d662; }
L8c08df76:;
  R(3)=0x8c05e612u;
  R(5)=LD32(R(15)+16);
  R(6)=LD32(R(15)+48);
  { c->pr=0x8c08df80u; R(4)=LD32(R(15)); f_8c05e612(c); }
  R(3)=0xf8u;
  R(2)=0x8c05e6eau;
  R(5)=LD32(R(15));
  R(4)=LD32(R(15)+36);
  { c->pr=0x8c08df8cu; R(4)+=R(3); f_8c05e6ea(c); }
  R(5)=LD32(R(15)+56);
  R(3)=0x8c05e612u;
  R(6)=LD32(R(15)+48);
  R(5)+=0x58u;
  fp_mov(c,15,14);
  { c->pr=0x8c08df9au; R(4)=LD32(R(15)); f_8c05e612(c); }
  R(3)=LD32(R(15));
  R(0)=0x8c08dfecu;
  fp_ld(c,3,R(0));
  fp_ld(c,4,R(3));
  c->fr[2]=0x00000000u;
  fp_mov(c,5,4);
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c08dfb0;
  { fp_mov(c,3,5); goto L8c08dfb8; }
L8c08dfb0:;
  fp_mov(c,1,4);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,14);
L8c08dfb8:;
  R(0)=0x8c08dff0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e048;
  R(0)=0x8c08dfecu;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(3));
  c->fr[0]=0x00000000u;
  fp_arith(c,0,1,3);
  fp_cmp(c,1,1,0);
  if(!c->t) goto L8c08e000;
  R(0)=0x8c08dfecu;
  R(2)=LD32(R(15));
  fp_ld(c,1,R(0));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(2));
  { fp_arith(c,0,3,1); goto L8c08e00a; }
L8c08e000:;
  R(3)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
  fp_arith(c,0,3,14);
L8c08e00a:;
  R(0)=0x8c08e140u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e048;
  R(0)=0x8c08e144u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(3));
  c->fr[0]=0x00000000u;
  fp_arith(c,0,1,3);
  fp_cmp(c,1,1,0);
  if(!c->t) goto L8c08e032;
  R(0)=0x8c08e144u;
  R(2)=LD32(R(15));
  fp_ld(c,1,R(0));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  { fp_arith(c,0,3,1); goto L8c08e03c; }
L8c08e032:;
  R(3)=LD32(R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
  fp_arith(c,0,3,14);
L8c08e03c:;
  R(0)=0x8c08e140u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e048;
  { R(2)=0x1u; goto L8c08e04a; }
L8c08e048:;
  R(2)=0x0u;
L8c08e04a:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08e054;
  {  goto L8c08e1ae; }
L8c08e054:;
  R(14)=LD32(R(15));
  R(0)=0x4u;
  R(3)=0x8c05e612u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,4,R(14));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(14));
  R(5)=LD32(R(15)+56);
  R(6)=LD32(R(15)+16);
  R(5)+=0x58u;
  { uint32_t tg=R(3); c->pr=0x8c08e096u; R(4)=LD32(R(15)+12); sh4_call(c,tg); }
  R(3)=LD32(R(15)+12);
  R(0)=0x8c08e144u;
  fp_ld(c,3,R(0));
  fp_ld(c,4,R(3));
  c->fr[2]=0x00000000u;
  fp_mov(c,5,4);
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c08e0ac;
  { fp_mov(c,3,5); goto L8c08e0b4; }
L8c08e0ac:;
  fp_mov(c,1,4);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c08e0b4:;
  R(0)=0x8c08e140u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e160;
  R(0)=0x8c08e144u;
  R(3)=LD32(R(15)+12);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e0da;
  R(0)=0x8c08e144u;
  R(2)=LD32(R(15)+12);
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08e0e4; }
L8c08e0da:;
  R(3)=LD32(R(15)+12);
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08e0e4:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08e140u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e160;
  R(0)=0x8c08e144u;
  R(3)=LD32(R(15)+12);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e10c;
  R(0)=0x8c08e144u;
  R(2)=LD32(R(15)+12);
  fp_ld(c,2,R(0));
  R(0)=0x8u;
  { fp_ld(c,3,R(0)+R(2)); goto L8c08e116; }
L8c08e10c:;
  R(3)=LD32(R(15)+12);
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
L8c08e116:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08e140u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e160;
  { R(2)=0x1u; goto L8c08e162; }
L8c08e160:;
  R(2)=0x0u;
L8c08e162:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08e1ae;
  R(14)=LD32(R(15)+12);
  R(0)=0x4u;
  R(4)=0x220u;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,6,R(14));
  R(6)=R(14);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x4u;
  R(3)=0x8c0a2d6eu;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(14));
  R(5)=LD32(R(15));
  { uint32_t tg=R(3); c->pr=0x8c08e1aau; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0x220u;
  fp_ld(c,15,R(0)+R(15));
L8c08e1ae:;
  R(0)=0x44u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0xcu;
  fp_st(c,15,R(0)+R(3));
  R(3)=0x8c05e6eau;
  R(0)=0x264u;
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c08e1c0u; R(4)=LD32(R(15)+R(0)); f_8c05e6ea(c); }
  R(1)=0x230u;
  R(0)=LD32(R(15)+24);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
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
void f_8c08e1e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  ST32(R(15),R(5));
  R(3)=0x8c05e612u;
  ST32(R(15)+4,R(6));
  R(6)=R(7);
  ST32(R(15)+8,R(7));
  R(12)=LD32(R(15)+60);
  R(5)=LD32(R(15)+4);
  R(14)=LD32(R(15)+56);
  R(13)=LD32(R(15)+52);
  { c->pr=0x8c08e200u; R(4)=R(14); f_8c05e612(c); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(14);
  { c->pr=0x8c08e20au; R(4)+=0xcu; f_8c05e6ea(c); }
  R(0)=0x8c08e254u;
  fp_ld(c,6,R(14));
  fp_ld(c,5,R(0));
  R(0)=0x8c08e258u;
  fp_ld(c,4,R(0));
  fp_mov(c,7,6);
  fp_arith(c,0,7,4);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,7,2);
  if(!c->t) goto L8c08e260;
  { fp_mov(c,3,7); goto L8c08e266; }
L8c08e260:;
  fp_mov(c,3,6);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08e266:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c08e2aa;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e27c;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,0,3,4); goto L8c08e284; }
L8c08e27c:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08e284:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c08e2aa;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e29a;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,0,3,4); goto L8c08e2a2; }
L8c08e29a:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c08e2a2:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c08e2aa;
  { R(3)=0x1u; goto L8c08e2ac; }
L8c08e2aa:;
  R(3)=0x0u;
L8c08e2ac:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(7)=R(12); if(k) goto L8c08e2e8; }
  R(0)=0x4u;
  fp_ld(c,6,R(14));
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(14));
L8c08e2e8:;
  R(5)=R(15);
  R(3)=0x8c0a2ce0u;
  R(4)=R(15);
  R(6)=R(12);
  R(5)+=0xcu;
  { c->pr=0x8c08e2f6u; R(4)+=0xcu; f_8c0a2ce0(c); }
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c08e484u;
  fp_ld(c,2,R(0));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08e32a;
  R(5)=R(15);
  R(4)=LD32(R(15));
  R(3)=0x8c015e64u;
  R(6)=R(15);
  R(7)=R(12);
  R(6)+=0xcu;
  R(5)+=0x18u;
  { c->pr=0x8c08e32au; R(4)=LD32(R(4)+36); f_8c015e64(c); }
L8c08e32a:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(13));
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(12));
  fp_ld(c,1,R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(13));
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(0)+R(12));
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(12));
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(13));
  fp_ld(c,2,R(13));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08e3ca;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(13));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08e3ca;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(13));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08e3ca;
  R(5)=R(15);
  R(4)=LD32(R(15));
  R(3)=0x8c015e64u;
  R(6)=R(15);
  R(7)=R(12);
  R(6)+=0xcu;
  R(5)+=0x18u;
  { c->pr=0x8c08e390u; R(4)=LD32(R(4)+36); f_8c015e64(c); }
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(13));
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(12));
  fp_ld(c,1,R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(13));
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(0)+R(12));
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(12));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(13));
L8c08e3ca:;
  R(0)=0x4u;
  fp_ld(c,4,R(13));
  fp_ld(c,6,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(13));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(13));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(13));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(13));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(13));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(14));
  fp_ld(c,1,R(13));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(12));
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(0)+R(14));
  fp_ld(c,1,R(0)+R(13));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(14));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(12));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,6,R(12));
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(12));
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  R(0)=0x4u;
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,3,R(0)+R(12));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(12));
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08e4a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(11)=0x22cu;
  R(14)=R(4);
  R(0)=0x56u;
  R(12)=R(6);
  R(11)+=R(14);
  R(0)=(int32_t)(int16_t)LD16(R(11)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x80)==0;
  { uint32_t k=!c->t; R(13)=LD32(R(12)+32); if(k) goto L8c08e4fa; }
  R(2)=0x8c05e6eau;
  R(5)=R(11);
  R(5)+=0x68u;
  { c->pr=0x8c08e4cau; R(4)=R(15); f_8c05e6ea(c); }
  R(3)=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x10u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=0x48u;
  R(3)=R(15);
  R(3)+=0x20u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(7)=LD32(R(15)+R(0));
  R(0)=0x44u;
  R(6)=LD32(R(15)+R(0));
  { c->pr=0x8c08e4e8u; R(4)=R(14); f_8c08e1e0(c); }
  R(15)+=0xcu;
  R(5)=R(15);
  R(6)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x18u;
  R(7)=R(15);
  R(6)+=0xcu;
  { c->pr=0x8c08e4fau; R(4)=R(13); f_8c015c9c(c); }
L8c08e4fa:;
  R(3)=0x8c01638au;
  R(5)=LD32(R(15)+56);
  { c->pr=0x8c08e502u; R(4)=R(13); f_8c01638a(c); }
  R(2)=0x8c0685b4u;
  R(5)=R(13);
  R(6)=0x68u;
  { c->pr=0x8c08e50cu; R(4)=LD32(R(12)+36); f_8c0685b4(c); }
  R(0)=R(14);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08e51c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff68u;
  R(15)+=R(0);
  R(3)=0x8c08cd74u;
  R(14)=R(6);
  R(13)=R(4);
  R(11)=R(5);
  { c->pr=0x8c08e538u; fp_mov(c,15,4); f_8c08cd74(c); }
  R(0)=0x24u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x28u;
  c->fr[3]=0x3F800000u;
  R(5)=R(14);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  R(12)=0x8c05e6eau;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c08e552u; R(4)=R(15); f_8c05e6ea(c); }
  R(3)=R(15);
  R(3)+=0x18u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(13);
  R(2)=R(15);
  R(2)+=0x4u;
  R(3)=0x8c08d43au;
  R(7)=R(11);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(14);
  R(4)=R(15);
  fp_mov(c,4,15);
  { c->pr=0x8c08e56eu; R(4)+=0x38u; f_8c08d43a(c); }
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c08e5a2; }
  R(5)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c08e57au; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(14);
  R(4)=R(15);
  R(5)+=0x10u;
  { uint32_t tg=R(12); c->pr=0x8c08e584u; R(4)+=0xcu; sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0xcu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(2)=R(15);
  R(2)+=0x1cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(11);
  R(7)=R(15);
  R(7)+=0x38u;
  { c->pr=0x8c08e59cu; R(4)=R(13); f_8c08e4a0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x8u; if(k) goto L8c08e5e0; }
L8c08e5a2:;
  { R(0)=0x0u; goto L8c08e5ec; }
L8c08e5e0:;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c08e5eau; R(4)+=0x10u; sh4_call(c,tg); }
  R(0)=R(13);
L8c08e5ec:;
  R(1)=0x98u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08e5e0(SH4Ctx *c) {
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c08e5eau; R(4)+=0x10u; sh4_call(c,tg); }
  R(0)=R(13);
  R(1)=0x98u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08e620(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(13)=0x8c0686b8u;
  R(6)=0x274u;
  R(11)=0x0u;
  R(4)=0x8c2e8700u;
  R(12)=R(11);
  { c->pr=0x8c08e63cu; R(5)=R(11); f_8c0686b8(c); }
  R(3)=0x4400fu;
  ST32(R(14)+8,R(12));
  R(2)=LD32(R(14)+12);
  R(2)&=R(3);
  R(1)=R(2);
  ST32(R(14)+12,R(2));
  R(2)=0x4000u;
  R(0)=R(1);
  ST32(R(15),R(1));
  c->t=(R(0)&R(2))==0;
  if(!c->t) goto L8c08e656;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c08e660;
L8c08e656:;
  R(0)=0x170u;
  R(3)=0x8c0a3220u;
  R(12)=LD32(R(14)+R(0));
  { c->pr=0x8c08e660u; R(4)=R(12); f_8c0a3220(c); }
L8c08e660:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c08e672;
  R(6)=0x380u;
  R(5)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c08e66eu; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c08e6a6; }
L8c08e672:;
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c08e6a0; }
  R(6)=0x1fcu;
  {  goto L8c08e6a2; }
L8c08e6a0:;
  R(6)=0x174u;
L8c08e6a2:;
  { uint32_t tg=R(13); c->pr=0x8c08e6a6u; R(4)=R(14); sh4_call(c,tg); }
L8c08e6a6:;
  R(3)=LD32(R(15));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; ST32(R(14)+12,R(3)); if(k) goto L8c08e6b2; }
  R(0)=0x170u;
  ST32(R(14)+R(0),R(12));
L8c08e6b2:;
  R(0)=LD32(R(14)+12);
  R(3)=0x1u;
  R(0)|=0x80u;
  ST32(R(14)+12,R(0));
  R(0)=0x16cu;
  ST8(R(14)+R(0),R(3));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08e6ca;
  R(0)=0x184u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(14));
L8c08e6ca:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c08e6d6;
  R(4)=0x2a8u;
  R(4)+=R(14);
  ST32(R(4),R(11));
L8c08e6d6:;
  R(4)=0x8c2e8700u;
  R(6)=0x274u;
  { uint32_t tg=R(13); c->pr=0x8c08e6deu; R(5)=0x0u; sh4_call(c,tg); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08e6ec(SH4Ctx *c) {
  {  { f_8c08e620(c); return; } }
}
void f_8c08e720(SH4Ctx *c) {
  R(2)=0x4400fu;
  R(5)=0x0u;
  R(3)=0x8c2e8700u;
  ST32(R(3),R(5));
  ST32(R(4)+8,R(5));
  R(1)=LD32(R(4)+12);
  R(1)&=R(2);
  ST32(R(4)+12,R(1));
  R(0)=LD32(R(4)+12);
  R(1)=0x4000u;
  c->t=(R(0)&R(1))==0;
  if(c->t) goto L8c08e73e;
  R(0)=0x170u;
  R(6)=LD32(R(4)+R(0));
  ST32(R(6)+4,R(5));
L8c08e73e:;
  R(0)=R(5);
  R(0)|=0x80u;
  R(3)=0x1u;
  ST32(R(4)+8,R(5));
  ST32(R(4)+12,R(0));
  R(0)=0x16cu;
  ST8(R(4)+R(0),R(3));
  R(0)=LD32(R(4)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08e758;
  R(0)=0x184u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(4));
L8c08e758:;
  R(0)=LD32(R(4)+12);
  c->t=(R(0)&0x4)==0;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c08e766; }
  R(6)=0x2a8u;
  R(6)+=R(4);
  ST32(R(6),R(5));
L8c08e766:;
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x28u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x2cu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x30u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x54u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x6cu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x70u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x74u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c08e798(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(5);
  R(2)=LD32(R(13)+4);
  R(14)=R(4);
  R(4)=0x1u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08e7b6;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(4); goto L8c08e7bc; }
L8c08e7b6:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffffeu;
  R(3)&=R(2);
L8c08e7bc:;
  R(11)=0x2u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(11))==0;
  if(c->t) goto L8c08e800;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(11); goto L8c08e806; }
L8c08e800:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffffdu;
  R(3)&=R(2);
L8c08e806:;
  R(12)=0x4u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(12))==0;
  if(c->t) goto L8c08e816;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(12); goto L8c08e81c; }
L8c08e816:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffffbu;
  R(3)&=R(2);
L8c08e81c:;
  R(4)=0x8u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08e82c;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(4); goto L8c08e832; }
L8c08e82c:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffff7u;
  R(3)&=R(2);
L8c08e832:;
  R(4)=0x10u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08e842;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(4); goto L8c08e848; }
L8c08e842:;
  R(3)=LD32(R(14)+8);
  R(2)=0xffffffefu;
  R(3)&=R(2);
L8c08e848:;
  R(5)=0x20u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c08e858;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(5); goto L8c08e85e; }
L8c08e858:;
  R(3)=LD32(R(14)+8);
  R(2)=0xffffffdfu;
  R(3)&=R(2);
L8c08e85e:;
  R(5)=0x40u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c08e86e;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(5); goto L8c08e874; }
L8c08e86e:;
  R(3)=LD32(R(14)+8);
  R(2)=0xffffffbfu;
  R(3)&=R(2);
L8c08e874:;
  R(6)=0x80u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c08e886;
  R(3)=LD32(R(14)+12);
  R(2)=0x100u;
  { R(3)|=R(2); goto L8c08e88c; }
L8c08e886:;
  R(3)=LD32(R(14)+12);
  R(2)=0xfffffeffu;
  R(3)&=R(2);
L8c08e88c:;
  R(5)=0x100u;
  ST32(R(14)+12,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c08e89e;
  R(3)=LD32(R(14)+12);
  R(2)=0x200u;
  { R(3)|=R(2); goto L8c08e8a4; }
L8c08e89e:;
  R(3)=LD32(R(14)+12);
  R(2)=0xfffffdffu;
  R(3)&=R(2);
L8c08e8a4:;
  ST32(R(14)+12,R(3));
  R(2)=LD32(R(13)+4);
  R(3)=0x20000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08e8b6;
  R(2)=LD32(R(14)+12);
  R(3)=0x100000u;
  { R(2)|=R(3); goto L8c08e8bc; }
L8c08e8b6:;
  R(2)=LD32(R(14)+12);
  R(3)=0xffefffffu;
  R(2)&=R(3);
L8c08e8bc:;
  ST32(R(14)+12,R(2));
  R(2)=LD32(R(13)+4);
  R(7)=0x200u;
  c->t=(R(2)&R(7))==0;
  if(c->t) goto L8c08e900;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(6); goto L8c08e906; }
L8c08e900:;
  R(3)=LD32(R(14)+8);
  R(2)=0xffffff7fu;
  R(3)&=R(2);
L8c08e906:;
  R(6)=0x400u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c08e916;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(5); goto L8c08e91c; }
L8c08e916:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffeffu;
  R(3)&=R(2);
L8c08e91c:;
  R(5)=0x800u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c08e92c;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(7); goto L8c08e932; }
L8c08e92c:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffdffu;
  R(3)&=R(2);
L8c08e932:;
  R(7)=0x1000u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(7))==0;
  if(c->t) goto L8c08e942;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(6); goto L8c08e948; }
L8c08e942:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffbffu;
  R(3)&=R(2);
L8c08e948:;
  R(6)=0x2000u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c08e980;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(5); goto L8c08e986; }
L8c08e980:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffff7ffu;
  R(3)&=R(2);
L8c08e986:;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08e996;
  R(2)=LD32(R(14)+8);
  { R(2)|=R(7); goto L8c08e99c; }
L8c08e996:;
  R(2)=LD32(R(14)+8);
  R(3)=0xffffefffu;
  R(2)&=R(3);
L8c08e99c:;
  R(3)=0x8000u;
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(13)+4);
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c08e9e0;
  R(3)=LD32(R(14)+8);
  { R(3)|=R(6); goto L8c08e9e6; }
L8c08e9e0:;
  R(3)=LD32(R(14)+8);
  R(2)=0xffffdfffu;
  R(3)&=R(2);
L8c08e9e6:;
  R(0)=0x8u;
  ST32(R(14)+8,R(3));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x10u;
  c->fr[2]=0x3F800000u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(13));
  fp_st(c,3,R(0)+R(14));
  R(3)=LD32(R(14)+12);
  c->fr[3]=0x3F800000u;
  R(3)|=R(4);
  R(4)=R(14);
  ST32(R(14)+12,R(3));
  R(2)=LD32(R(14)+12);
  R(3)=0xffdfffffu;
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
  R(1)=LD32(R(14)+12);
  R(2)=0xfdffffffu;
  R(1)&=R(2);
  ST32(R(14)+12,R(1));
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_arith(c,3,2,3);
  fp_unary(c,2,2);
  fp_mov(c,4,2);
  fp_st(c,4,R(0)+R(4));
  R(1)=LD32(R(14)+12);
  c->t=(R(11)&R(1))==0;
  if(c->t) goto L8c08ea76;
  R(0)=0xcu;
  R(4)=0x198u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x1cu;
  R(3)=0x8c05e6eau;
  R(5)=R(13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x20u;
  R(5)+=0x30u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x174u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x178u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x17cu;
  fp_st(c,3,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08ea5cu; R(4)+=R(14); sh4_call(c,tg); }
  R(2)=0xe0u;
  R(4)=R(14);
  R(3)=0x1c8u;
  R(2)+=R(14);
  R(5)=R(2);
  ST32(R(15),R(2));
  R(2)=0x8c05e6eau;
  R(5)+=0x58u;
  ST32(R(15)+4,R(14));
  { c->pr=0x8c08ea72u; R(4)+=R(3); f_8c05e6ea(c); }
  {  goto L8c08ea94; }
L8c08ea76:;
  R(2)=LD32(R(14)+12);
  c->t=(R(12)&R(2))==0;
  if(c->t) goto L8c08ea94;
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x200u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x204u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x208u;
  fp_st(c,3,R(0)+R(14));
L8c08ea94:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08eae0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(5);
  ST32(R(15),R(4));
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08eaf6;
  R(5)=R(14);
  { c->pr=0x8c08eaf6u; R(4)=LD32(R(15)); f_8c08e798(c); }
L8c08eaf6:;
  R(2)=LD32(R(15));
  ST32(R(2)+4,R(14));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08eb02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(4)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x4000u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(13)+12);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=!c->t; R(12)=R(4); if(k) goto L8c08eb20; }
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c08eb24;
L8c08eb20:;
  R(0)=0x170u;
  R(12)=LD32(R(13)+R(0));
L8c08eb24:;
  R(0)=LD32(R(14)+12);
  R(11)=0x8c0685b4u;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c08eb38;
  R(6)=0x380u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c08eb34u; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c08eb86; }
L8c08eb38:;
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; R(5)=R(14); if(k) goto L8c08eb80; }
  R(6)=0x1fcu;
  {  goto L8c08eb82; }
L8c08eb80:;
  R(6)=0x174u;
L8c08eb82:;
  { uint32_t tg=R(11); c->pr=0x8c08eb86u; R(4)=R(13); sh4_call(c,tg); }
L8c08eb86:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c08eba2;
  R(3)=0x4000u;
  R(0)=0x170u;
  ST32(R(13)+R(0),R(12));
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08eba2;
  R(6)=0x16cu;
  R(0)=R(6);
  R(0)+=0x4u;
  R(5)=LD32(R(14)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c08eba2u; R(4)=R(12); sh4_call(c,tg); }
L8c08eba2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08ebae(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c08ebe0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15)+8,R(5));
  R(0)=0x4u;
  R(5)=0xe0u;
  R(3)=0x8c05e612u;
  R(5)+=R(4);
  fp_st(c,4,R(0)+R(15));
  R(4)+=0x78u;
  fp_st(c,5,R(15));
  R(6)=R(4);
  R(4)=R(15);
  R(5)+=0x58u;
  R(6)+=0x58u;
  { c->pr=0x8c08ec00u; R(4)+=0xcu; f_8c05e612(c); }
  R(3)=0x8c05689eu;
  { c->pr=0x8c08ec06u; R(4)=LD32(R(15)+8); f_8c05689e(c); }
  R(2)=0x80000000u;
  R(0)&=R(2);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c08ec3a;
  R(0)=0xcu;
  c->fr[2]=0x3F800000u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c08ec90u;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_ld(c,0,R(0));
  fp_unary(c,2,3);
  fp_arith(c,3,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  { R(4)=c->fpul; goto L8c08ec78; }
L8c08ec3a:;
  R(0)=0x8c08ec94u;
  R(3)=0x8c123bc4u;
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  R(1)=0x4u;
  fp_ld(c,3,R(3));
  fp_arith(c,3,2,3);
  fp_mov(c,3,2);
  fp_arith(c,0,3,4);
  fp_ftrc(c,3);
  R(5)=c->fpul;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  { uint32_t k=!c->t; R(4)=0x1u; if(k) goto L8c08ec78; }
  R(0)=0x10u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c08ec78;
  R(4)=0x2u;
L8c08ec78:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c08eca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(3)=0x4000000u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+12);
  R(10)=0x8c0a4ae0u;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=!c->t; fp_mov(c,15,4); if(k) goto L8c08ecca; }
  R(1)=0x8c0c8f04u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(1));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08ecd6;
L8c08ecca:;
  R(5)=R(11);
  fp_mov(c,4,15);
  { uint32_t tg=R(10); c->pr=0x8c08ecd2u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c08ed26; }
L8c08ecd6:;
  R(3)=0x8c0c8f04u;
  R(5)=R(11);
  fp_mov(c,4,15);
  fp_ld(c,5,R(3));
  { c->pr=0x8c08ece2u; R(4)=R(14); f_8c08ebe0(c); }
  R(3)=0x8c092f20u;
  R(5)=R(0);
  R(13)=R(0);
  { c->pr=0x8c08ececu; R(4)=R(14); f_8c092f20(c); }
  R(5)=R(11);
  fp_mov(c,4,15);
  { uint32_t tg=R(10); c->pr=0x8c08ecf4u; R(4)=R(14); sh4_call(c,tg); }
  R(9)=0x8c093060u;
  R(12)=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(13);
  if(c->t) goto L8c08ed0e;
L8c08ecfc:;
  { uint32_t tg=R(9); c->pr=0x8c08ed00u; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(11);
  fp_mov(c,4,15);
  { uint32_t tg=R(10); c->pr=0x8c08ed08u; R(4)=R(14); sh4_call(c,tg); }
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(13);
  if(!c->t) goto L8c08ecfc;
L8c08ed0e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(5)=R(13);
  R(2)=0x8c092fa6u;
  R(4)=R(14);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c092fa6(c); return; } }
L8c08ed26:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08ed38(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(3)=0x4000000u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+12);
  R(10)=0x8c0a6600u;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=!c->t; fp_mov(c,15,4); if(k) goto L8c08ed64; }
  R(1)=0x8c0c8f08u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(1));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08ed70;
L8c08ed64:;
  R(5)=R(11);
  fp_mov(c,4,15);
  { uint32_t tg=R(10); c->pr=0x8c08ed6cu; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c08edc8; }
L8c08ed70:;
  R(3)=0x8c0c8f08u;
  R(5)=R(11);
  fp_mov(c,4,15);
  fp_ld(c,5,R(3));
  { c->pr=0x8c08ed7cu; R(4)=R(14); f_8c08ebe0(c); }
  R(3)=0x8c092f20u;
  R(5)=R(0);
  R(13)=R(0);
  { c->pr=0x8c08ed86u; R(4)=R(14); f_8c092f20(c); }
  R(5)=R(11);
  fp_mov(c,4,15);
  { uint32_t tg=R(10); c->pr=0x8c08ed8eu; R(4)=R(14); sh4_call(c,tg); }
  R(8)=0x8c0cbdb8u;
  R(12)=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(13);
  { uint32_t k=c->t; R(9)=0x0u; if(k) goto L8c08edae; }
L8c08ed98:;
  R(3)=0x8c093060u;
  ST32(R(8),R(9));
  { c->pr=0x8c08eda0u; R(4)=R(14); f_8c093060(c); }
  R(5)=R(11);
  fp_mov(c,4,15);
  { uint32_t tg=R(10); c->pr=0x8c08eda8u; R(4)=R(14); sh4_call(c,tg); }
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(13);
  if(!c->t) goto L8c08ed98;
L8c08edae:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(5)=R(13);
  R(3)=0x8c092fa6u;
  R(4)=R(14);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c092fa6(c); return; } }
L8c08edc8:;
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
void f_8c08ee20(SH4Ctx *c) {
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
  R(0)=0xfffffd48u;
  R(15)+=R(0);
  R(0)=0x34u;
  R(14)=R(4);
  fp_st(c,4,R(0)+R(15));
  R(3)=0x0u;
  R(2)=R(3);
  R(0)=0x38u;
  ST32(R(15)+16,R(3));
  R(9)=0x4u;
  ST32(R(15)+32,R(2));
  R(12)=R(5);
  ST32(R(15)+12,R(3));
  ST8(R(15)+R(0),R(2));
  R(0)=0x3cu;
  ST8(R(15)+R(0),R(3));
  R(4)=LD32(R(14)+12);
  R(3)=R(4);
  c->t=(R(3)&R(9))==0;
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c08ee82; }
  R(1)=0x4000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08ee82;
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(15));
L8c08ee82:;
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08eec6;
  R(0)=0x170u;
  R(0)=LD32(R(14)+R(0));
  ST32(R(15)+12,R(0));
  R(0)=LD32(R(0)+4);
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c08eec0;
  R(3)=0x10000u;
  R(2)=LD32(R(15)+12);
  ST32(R(2)+4,R(3));
  {  goto L8c08eec6; }
L8c08eec0:;
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  ST32(R(1)+4,R(3));
L8c08eec6:;
  R(2)=LD32(R(14)+12);
  R(3)=0x2000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
  R(1)=LD32(R(14)+12);
  R(2)=0xfeffffffu;
  R(1)&=R(2);
  ST32(R(14)+12,R(1));
  R(1)=0x8c048080u;
  { c->pr=0x8c08eedcu; R(4)=R(12); f_8c048080(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08ef02;
  R(2)=0x8c092de0u;
  { c->pr=0x8c08eee8u; R(4)=R(14); f_8c092de0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08ef02;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x80)==0;
  if(!c->t) goto L8c08ef02;
  R(2)=LD32(R(14)+12);
  R(3)=0x1000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08ef02;
  R(1)=0x8c08fe0eu;
  {  { f_8c08fe0e(c); return; } }
L8c08ef02:;
  R(0)=0xbcu;
  R(13)=0x8c123b08u;
  R(10)=0xe0u;
  fp_ld(c,4,R(0)+R(13));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c08f030u;
  fp_ld(c,2,R(0));
  fp_arith(c,3,3,4);
  fp_arith(c,0,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  c->fpul=R(3);
  ST32(R(15)+20,R(3));
  R(3)=R(14);
  R(3)+=0x78u;
  fp_float(c,3);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  fp_mov(c,14,3);
  fp_arith(c,2,14,4);
  fp_mov(c,13,3);
  { uint32_t k=c->t; R(10)+=R(14); if(k) goto L8c08ef40; }
  R(3)=0x2b0u;
  R(1)=0x318u;
  R(3)+=R(14);
  R(1)+=R(14);
  ST32(R(15)+16,R(1));
  ST32(R(15)+32,R(3));
L8c08ef40:;
  R(8)=0x8c129430u;
  R(6)=0x68u;
  R(4)=0x250u;
  R(5)=LD32(R(8));
  R(11)=0x8c0685b4u;
  { c->pr=0x8c08ef4eu; R(4)+=R(15); f_8c0685b4(c); }
  R(3)=0x250u;
  R(6)=0x68u;
  R(4)=0x180u;
  R(3)+=R(15);
  ST32(R(15)+24,R(3));
  R(5)=LD32(R(8));
  { uint32_t tg=R(11); c->pr=0x8c08ef5eu; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0x180u;
  R(6)=0x68u;
  R(4)=0xb0u;
  R(3)+=R(15);
  ST32(R(15)+40,R(3));
  R(2)=LD32(R(12)+36);
  ST32(R(15)+8,R(2));
  R(5)=LD32(R(8));
  { uint32_t tg=R(11); c->pr=0x8c08ef72u; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0xb0u;
  R(1)=0x0u;
  R(0)=0x8c2e8700u;
  R(3)+=R(15);
  R(8)=0x118u;
  ST32(R(15),R(3));
  R(2)=LD32(R(14)+12);
  R(3)=0x800u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
  R(2)=R(1);
  ST32(R(0),R(1));
  R(3)=0x0u;
  R(1)=0x8c0cbdb8u;
  ST32(R(1),R(2));
  R(2)=0x8c0cbdbcu;
  ST8(R(2),R(3));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x80)==0;
  { uint32_t k=!c->t; R(8)+=R(15); if(k) goto L8c08efa0; }
  {  goto L8c08f092; }
L8c08efa0:;
  R(5)=LD32(R(15)+8);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08efa8u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08efb0u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c08efc6;
  R(5)=LD32(R(15)+8);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08efbeu; R(4)=LD32(R(15)+16); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08efc6u; R(4)=LD32(R(15)+32); sh4_call(c,tg); }
L8c08efc6:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08efdc;
  R(3)=0x1c8u;
  R(5)=R(10);
  R(2)=0x8c05e6eau;
  R(4)=R(14);
  ST32(R(15)+28,R(14));
  R(5)+=0x58u;
  { c->pr=0x8c08efdcu; R(4)+=R(3); f_8c05e6ea(c); }
L8c08efdc:;
  R(2)=LD32(R(14)+12);
  R(3)=0x1000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08f07e;
  R(6)=0x80u;
  R(7)=R(15);
  R(5)=0x8cu;
  R(7)+=0x74u;
  R(6)+=R(15);
  R(5)+=R(15);
  { R(4)=LD32(R(15)+8); goto L8c08f060; }
L8c08f060:;
  R(3)=0x8c0160c0u;
  { c->pr=0x8c08f066u;  f_8c0160c0(c); }
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(14));
L8c08f07e:;
  R(0)=0x3cu;
  R(3)=0xffffff7fu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+12);
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
L8c08f092:;
  R(4)=LD32(R(14)+12);
  R(3)=0x10u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c08f0a6;
  R(1)=0x4u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08f0a6;
  R(2)=0x8c0aa540u;
  { c->pr=0x8c08f0a6u; R(4)=R(14); f_8c0aa540(c); }
L8c08f0a6:;
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f0aeu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f0c2;
  R(5)=0x148u;
  R(6)=0x24u;
  R(4)=LD32(R(15));
  R(5)+=R(14);
  { uint32_t tg=R(11); c->pr=0x8c08f0c2u; R(4)+=0x4u; sh4_call(c,tg); }
L8c08f0c2:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f0dc;
  R(0)=0x1f8u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c08f0dc;
  R(2)=0x8c0480b8u;
  { c->pr=0x8c08f0d6u; R(4)=R(12); f_8c0480b8(c); }
  R(1)=0x1f8u;
  R(1)+=R(14);
  ST8(R(1),R(0));
L8c08f0dc:;
  R(2)=LD32(R(14)+12);
  R(3)=0x200u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08f0e8;
  {  goto L8c08f32e; }
L8c08f0e8:;
  R(13)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(13)&R(3))==0;
  { uint32_t k=c->t; R(0)=0x3cu; if(k) goto L8c08f120; }
  { R(13)=0x1u; goto L8c08f122; }
L8c08f120:;
  R(13)=0x0u;
L8c08f122:;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  fp_mov(c,2,14);
  R(5)=R(15);
  fp_arith(c,2,2,3);
  R(3)=0x8c092c96u;
  R(5)+=0x4cu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x50u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08f14eu; R(4)=R(14); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f156u; R(4)=LD32(R(15)+24); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(3)=0xe0000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f182;
  R(3)=0x8c0aa620u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  fp_mov(c,4,14);
  { c->pr=0x8c08f16au; R(4)=R(14); f_8c0aa620(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0xfffbffffu;
  R(1)&=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfff7ffffu;
  R(0)&=R(1);
  ST32(R(14)+8,R(0));
L8c08f182:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08f196;
  R(2)=0x8c0aaa94u;
  { c->pr=0x8c08f18eu; R(4)=R(14); f_8c0aaa94(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0xdfffffffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
L8c08f196:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f228;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f220;
  R(0)=0x1f8u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=0xffffffffu;
  ST8(R(14)+R(0),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08f228;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f1b8u; R(4)=R(14); f_8c08eca0(c); }
  R(2)=0x8c0480b8u;
  { c->pr=0x8c08f1beu; R(4)=R(12); f_8c0480b8(c); }
  R(3)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(!c->t) goto L8c08f228;
  R(2)=0x1c8u;
  R(5)=R(10);
  R(1)=0x8c05e6eau;
  R(4)=R(14);
  ST32(R(15)+12,R(14));
  R(5)+=0x58u;
  { c->pr=0x8c08f1d6u; R(4)+=R(2); f_8c05e6ea(c); }
  {  goto L8c08f228; }
L8c08f220:;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f228u; R(4)=R(14); f_8c08eca0(c); }
L8c08f228:;
  R(3)=0x8c091980u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f230u; R(4)=R(14); f_8c091980(c); }
  R(2)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08f238u; R(4)=R(14); f_8c091a14(c); }
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f240u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f254;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f24eu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08f254u; R(4)=R(12); f_8c064b7e(c); }
L8c08f254:;
  R(2)=0x8c0568e8u;
  { c->pr=0x8c08f25au; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08f300;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f268u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f274u; R(4)=R(12); f_8c064dda(c); }
  R(13)=R(13)&0xFF;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08f28a;
  R(13)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(13)+=R(15);
  { c->pr=0x8c08f286u; R(4)=R(13); f_8c0153d8(c); }
  {  goto L8c08f2a6; }
L8c08f28a:;
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f2a4;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08f29cu; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c08f2a4:;
  R(13)=R(8);
L8c08f2a6:;
  R(3)=0x8c0906a0u;
  R(7)=R(13);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08f2b2u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08f31e; }
L8c08f300:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08f306u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f31e;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f312u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f31eu; R(4)=R(12); f_8c064dda(c); }
L8c08f31e:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08f324u; R(4)=R(14); f_8c0919ce(c); }
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08f32au; R(4)=R(14); f_8c0a93e0(c); }
  {  { f_8c08fe0e(c); return; } }
L8c08f32e:;
  R(5)=0x98u;
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c08f338u; R(4)=LD32(R(15)+4); f_8c0163ce(c); }
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f340u; R(4)=LD32(R(15)+24); sh4_call(c,tg); }
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c08f34e;
  R(5)=LD32(R(15)+16);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f34eu; R(4)=LD32(R(15)+40); sh4_call(c,tg); }
L8c08f34e:;
  R(2)=LD32(R(14)+12);
  R(3)=0xffffffdfu;
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
  R(2)=0xffffffbfu;
  R(1)=LD32(R(14)+12);
  R(1)&=R(2);
  ST32(R(14)+12,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x2000u;
  c->t=(R(0)&R(1))==0;
  if(!c->t) goto L8c08f36a;
  {  goto L8c08f472; }
L8c08f36a:;
  R(0)=0x48u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c08f3c0;
  fp_mov(c,2,3);
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,0,3,2); goto L8c08f3ca; }
L8c08f3c0:;
  fp_ld(c,2,R(0)+R(14));
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,0);
L8c08f3ca:;
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  R(0)=0x4cu;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f3ea;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  { fp_ld(c,3,R(0)+R(14)); goto L8c08f3f0; }
L8c08f3ea:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,3);
L8c08f3f0:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  R(0)=0x50u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f412;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  { fp_ld(c,3,R(0)+R(14)); goto L8c08f418; }
L8c08f412:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,3);
L8c08f418:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  { R(2)=0x0u; goto L8c08f462; }
L8c08f460:;
  R(2)=0x1u;
L8c08f462:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08f472;
  R(3)=0x8c0aae00u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  { c->pr=0x8c08f472u; R(4)=R(14); f_8c0aae00(c); }
L8c08f472:;
  R(0)=0x54u;
  R(6)=R(14);
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x68u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x54u;
  R(3)=0x8c015060u;
  R(4)=R(14);
  fp_arith(c,2,2,3);
  R(5)=R(10);
  R(6)+=0x54u;
  fp_st(c,2,R(0)+R(14));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x64u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x60u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x5cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4aau; R(4)+=0x54u; sh4_call(c,tg); }
  R(0)=0x6cu;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(5)+=0x40u;
  R(3)=0x8c091c8au;
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x74u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4ccu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x0u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(15)+20);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; c->fr[13]=0x3F800000u; if(k) { f_8c08f4dc(c); return; } }
  {  { f_8c08f6c0(c); return; } }
}
void f_8c08eec0(SH4Ctx *c) {
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(14)+12);
  R(3)=0x2000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
  R(1)=LD32(R(14)+12);
  R(2)=0xfeffffffu;
  R(1)&=R(2);
  ST32(R(14)+12,R(1));
  R(1)=0x8c048080u;
  { c->pr=0x8c08eedcu; R(4)=R(12); f_8c048080(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08ef02;
  R(2)=0x8c092de0u;
  { c->pr=0x8c08eee8u; R(4)=R(14); f_8c092de0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08ef02;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x80)==0;
  if(!c->t) goto L8c08ef02;
  R(2)=LD32(R(14)+12);
  R(3)=0x1000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08ef02;
  R(1)=0x8c08fe0eu;
  {  { f_8c08fe0e(c); return; } }
L8c08ef02:;
  R(0)=0xbcu;
  R(13)=0x8c123b08u;
  R(10)=0xe0u;
  fp_ld(c,4,R(0)+R(13));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c08f030u;
  fp_ld(c,2,R(0));
  fp_arith(c,3,3,4);
  fp_arith(c,0,3,2);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  c->fpul=R(3);
  ST32(R(15)+20,R(3));
  R(3)=R(14);
  R(3)+=0x78u;
  fp_float(c,3);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  fp_mov(c,14,3);
  fp_arith(c,2,14,4);
  fp_mov(c,13,3);
  { uint32_t k=c->t; R(10)+=R(14); if(k) goto L8c08ef40; }
  R(3)=0x2b0u;
  R(1)=0x318u;
  R(3)+=R(14);
  R(1)+=R(14);
  ST32(R(15)+16,R(1));
  ST32(R(15)+32,R(3));
L8c08ef40:;
  R(8)=0x8c129430u;
  R(6)=0x68u;
  R(4)=0x250u;
  R(5)=LD32(R(8));
  R(11)=0x8c0685b4u;
  { c->pr=0x8c08ef4eu; R(4)+=R(15); f_8c0685b4(c); }
  R(3)=0x250u;
  R(6)=0x68u;
  R(4)=0x180u;
  R(3)+=R(15);
  ST32(R(15)+24,R(3));
  R(5)=LD32(R(8));
  { uint32_t tg=R(11); c->pr=0x8c08ef5eu; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0x180u;
  R(6)=0x68u;
  R(4)=0xb0u;
  R(3)+=R(15);
  ST32(R(15)+40,R(3));
  R(2)=LD32(R(12)+36);
  ST32(R(15)+8,R(2));
  R(5)=LD32(R(8));
  { uint32_t tg=R(11); c->pr=0x8c08ef72u; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0xb0u;
  R(1)=0x0u;
  R(0)=0x8c2e8700u;
  R(3)+=R(15);
  R(8)=0x118u;
  ST32(R(15),R(3));
  R(2)=LD32(R(14)+12);
  R(3)=0x800u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
  R(2)=R(1);
  ST32(R(0),R(1));
  R(3)=0x0u;
  R(1)=0x8c0cbdb8u;
  ST32(R(1),R(2));
  R(2)=0x8c0cbdbcu;
  ST8(R(2),R(3));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x80)==0;
  { uint32_t k=!c->t; R(8)+=R(15); if(k) goto L8c08efa0; }
  {  goto L8c08f092; }
L8c08efa0:;
  R(5)=LD32(R(15)+8);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08efa8u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08efb0u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c08efc6;
  R(5)=LD32(R(15)+8);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08efbeu; R(4)=LD32(R(15)+16); sh4_call(c,tg); }
  R(5)=LD32(R(15)+8);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08efc6u; R(4)=LD32(R(15)+32); sh4_call(c,tg); }
L8c08efc6:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08efdc;
  R(3)=0x1c8u;
  R(5)=R(10);
  R(2)=0x8c05e6eau;
  R(4)=R(14);
  ST32(R(15)+28,R(14));
  R(5)+=0x58u;
  { c->pr=0x8c08efdcu; R(4)+=R(3); f_8c05e6ea(c); }
L8c08efdc:;
  R(2)=LD32(R(14)+12);
  R(3)=0x1000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08f07e;
  R(6)=0x80u;
  R(7)=R(15);
  R(5)=0x8cu;
  R(7)+=0x74u;
  R(6)+=R(15);
  R(5)+=R(15);
  { R(4)=LD32(R(15)+8); goto L8c08f060; }
L8c08f060:;
  R(3)=0x8c0160c0u;
  { c->pr=0x8c08f066u;  f_8c0160c0(c); }
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(14));
L8c08f07e:;
  R(0)=0x3cu;
  R(3)=0xffffff7fu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+12);
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
L8c08f092:;
  R(4)=LD32(R(14)+12);
  R(3)=0x10u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c08f0a6;
  R(1)=0x4u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08f0a6;
  R(2)=0x8c0aa540u;
  { c->pr=0x8c08f0a6u; R(4)=R(14); f_8c0aa540(c); }
L8c08f0a6:;
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f0aeu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f0c2;
  R(5)=0x148u;
  R(6)=0x24u;
  R(4)=LD32(R(15));
  R(5)+=R(14);
  { uint32_t tg=R(11); c->pr=0x8c08f0c2u; R(4)+=0x4u; sh4_call(c,tg); }
L8c08f0c2:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f0dc;
  R(0)=0x1f8u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c08f0dc;
  R(2)=0x8c0480b8u;
  { c->pr=0x8c08f0d6u; R(4)=R(12); f_8c0480b8(c); }
  R(1)=0x1f8u;
  R(1)+=R(14);
  ST8(R(1),R(0));
L8c08f0dc:;
  R(2)=LD32(R(14)+12);
  R(3)=0x200u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08f0e8;
  {  goto L8c08f32e; }
L8c08f0e8:;
  R(13)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(13)&R(3))==0;
  { uint32_t k=c->t; R(0)=0x3cu; if(k) goto L8c08f120; }
  { R(13)=0x1u; goto L8c08f122; }
L8c08f120:;
  R(13)=0x0u;
L8c08f122:;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  fp_mov(c,2,14);
  R(5)=R(15);
  fp_arith(c,2,2,3);
  R(3)=0x8c092c96u;
  R(5)+=0x4cu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x50u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08f14eu; R(4)=R(14); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f156u; R(4)=LD32(R(15)+24); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(3)=0xe0000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f182;
  R(3)=0x8c0aa620u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  fp_mov(c,4,14);
  { c->pr=0x8c08f16au; R(4)=R(14); f_8c0aa620(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0xfffbffffu;
  R(1)&=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfff7ffffu;
  R(0)&=R(1);
  ST32(R(14)+8,R(0));
L8c08f182:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08f196;
  R(2)=0x8c0aaa94u;
  { c->pr=0x8c08f18eu; R(4)=R(14); f_8c0aaa94(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0xdfffffffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
L8c08f196:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f228;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f220;
  R(0)=0x1f8u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=0xffffffffu;
  ST8(R(14)+R(0),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08f228;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f1b8u; R(4)=R(14); f_8c08eca0(c); }
  R(2)=0x8c0480b8u;
  { c->pr=0x8c08f1beu; R(4)=R(12); f_8c0480b8(c); }
  R(3)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(!c->t) goto L8c08f228;
  R(2)=0x1c8u;
  R(5)=R(10);
  R(1)=0x8c05e6eau;
  R(4)=R(14);
  ST32(R(15)+12,R(14));
  R(5)+=0x58u;
  { c->pr=0x8c08f1d6u; R(4)+=R(2); f_8c05e6ea(c); }
  {  goto L8c08f228; }
L8c08f220:;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f228u; R(4)=R(14); f_8c08eca0(c); }
L8c08f228:;
  R(3)=0x8c091980u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f230u; R(4)=R(14); f_8c091980(c); }
  R(2)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08f238u; R(4)=R(14); f_8c091a14(c); }
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f240u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f254;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f24eu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08f254u; R(4)=R(12); f_8c064b7e(c); }
L8c08f254:;
  R(2)=0x8c0568e8u;
  { c->pr=0x8c08f25au; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08f300;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f268u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f274u; R(4)=R(12); f_8c064dda(c); }
  R(13)=R(13)&0xFF;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08f28a;
  R(13)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(13)+=R(15);
  { c->pr=0x8c08f286u; R(4)=R(13); f_8c0153d8(c); }
  {  goto L8c08f2a6; }
L8c08f28a:;
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f2a4;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08f29cu; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c08f2a4:;
  R(13)=R(8);
L8c08f2a6:;
  R(3)=0x8c0906a0u;
  R(7)=R(13);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08f2b2u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08f31e; }
L8c08f300:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08f306u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f31e;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f312u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f31eu; R(4)=R(12); f_8c064dda(c); }
L8c08f31e:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08f324u; R(4)=R(14); f_8c0919ce(c); }
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08f32au; R(4)=R(14); f_8c0a93e0(c); }
  {  { f_8c08fe0e(c); return; } }
L8c08f32e:;
  R(5)=0x98u;
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c08f338u; R(4)=LD32(R(15)+4); f_8c0163ce(c); }
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f340u; R(4)=LD32(R(15)+24); sh4_call(c,tg); }
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c08f34e;
  R(5)=LD32(R(15)+16);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f34eu; R(4)=LD32(R(15)+40); sh4_call(c,tg); }
L8c08f34e:;
  R(2)=LD32(R(14)+12);
  R(3)=0xffffffdfu;
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
  R(2)=0xffffffbfu;
  R(1)=LD32(R(14)+12);
  R(1)&=R(2);
  ST32(R(14)+12,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x2000u;
  c->t=(R(0)&R(1))==0;
  if(!c->t) goto L8c08f36a;
  {  goto L8c08f472; }
L8c08f36a:;
  R(0)=0x48u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c08f3c0;
  fp_mov(c,2,3);
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,0,3,2); goto L8c08f3ca; }
L8c08f3c0:;
  fp_ld(c,2,R(0)+R(14));
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,0);
L8c08f3ca:;
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  R(0)=0x4cu;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f3ea;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  { fp_ld(c,3,R(0)+R(14)); goto L8c08f3f0; }
L8c08f3ea:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,3);
L8c08f3f0:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  R(0)=0x50u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f412;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  { fp_ld(c,3,R(0)+R(14)); goto L8c08f418; }
L8c08f412:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,3);
L8c08f418:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  { R(2)=0x0u; goto L8c08f462; }
L8c08f460:;
  R(2)=0x1u;
L8c08f462:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08f472;
  R(3)=0x8c0aae00u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  { c->pr=0x8c08f472u; R(4)=R(14); f_8c0aae00(c); }
L8c08f472:;
  R(0)=0x54u;
  R(6)=R(14);
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x68u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x54u;
  R(3)=0x8c015060u;
  R(4)=R(14);
  fp_arith(c,2,2,3);
  R(5)=R(10);
  R(6)+=0x54u;
  fp_st(c,2,R(0)+R(14));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x64u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x60u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x5cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4aau; R(4)+=0x54u; sh4_call(c,tg); }
  R(0)=0x6cu;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(5)+=0x40u;
  R(3)=0x8c091c8au;
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x74u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4ccu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x0u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(15)+20);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; c->fr[13]=0x3F800000u; if(k) { f_8c08f4dc(c); return; } }
  {  { f_8c08f6c0(c); return; } }
}
void f_8c08f060(SH4Ctx *c) {
  R(3)=0x8c0160c0u;
  { c->pr=0x8c08f066u;  f_8c0160c0(c); }
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x3cu;
  R(3)=0xffffff7fu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+12);
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
  R(4)=LD32(R(14)+12);
  R(3)=0x10u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c08f0a6;
  R(1)=0x4u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08f0a6;
  R(2)=0x8c0aa540u;
  { c->pr=0x8c08f0a6u; R(4)=R(14); f_8c0aa540(c); }
L8c08f0a6:;
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f0aeu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f0c2;
  R(5)=0x148u;
  R(6)=0x24u;
  R(4)=LD32(R(15));
  R(5)+=R(14);
  { uint32_t tg=R(11); c->pr=0x8c08f0c2u; R(4)+=0x4u; sh4_call(c,tg); }
L8c08f0c2:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f0dc;
  R(0)=0x1f8u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c08f0dc;
  R(2)=0x8c0480b8u;
  { c->pr=0x8c08f0d6u; R(4)=R(12); f_8c0480b8(c); }
  R(1)=0x1f8u;
  R(1)+=R(14);
  ST8(R(1),R(0));
L8c08f0dc:;
  R(2)=LD32(R(14)+12);
  R(3)=0x200u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08f0e8;
  {  goto L8c08f32e; }
L8c08f0e8:;
  R(13)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(13)&R(3))==0;
  { uint32_t k=c->t; R(0)=0x3cu; if(k) goto L8c08f120; }
  { R(13)=0x1u; goto L8c08f122; }
L8c08f120:;
  R(13)=0x0u;
L8c08f122:;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  fp_mov(c,2,14);
  R(5)=R(15);
  fp_arith(c,2,2,3);
  R(3)=0x8c092c96u;
  R(5)+=0x4cu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x50u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08f14eu; R(4)=R(14); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f156u; R(4)=LD32(R(15)+24); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(3)=0xe0000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f182;
  R(3)=0x8c0aa620u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  fp_mov(c,4,14);
  { c->pr=0x8c08f16au; R(4)=R(14); f_8c0aa620(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0xfffbffffu;
  R(1)&=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfff7ffffu;
  R(0)&=R(1);
  ST32(R(14)+8,R(0));
L8c08f182:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08f196;
  R(2)=0x8c0aaa94u;
  { c->pr=0x8c08f18eu; R(4)=R(14); f_8c0aaa94(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0xdfffffffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
L8c08f196:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f228;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f220;
  R(0)=0x1f8u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=0xffffffffu;
  ST8(R(14)+R(0),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08f228;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f1b8u; R(4)=R(14); f_8c08eca0(c); }
  R(2)=0x8c0480b8u;
  { c->pr=0x8c08f1beu; R(4)=R(12); f_8c0480b8(c); }
  R(3)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(!c->t) goto L8c08f228;
  R(2)=0x1c8u;
  R(5)=R(10);
  R(1)=0x8c05e6eau;
  R(4)=R(14);
  ST32(R(15)+12,R(14));
  R(5)+=0x58u;
  { c->pr=0x8c08f1d6u; R(4)+=R(2); f_8c05e6ea(c); }
  {  goto L8c08f228; }
L8c08f220:;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f228u; R(4)=R(14); f_8c08eca0(c); }
L8c08f228:;
  R(3)=0x8c091980u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f230u; R(4)=R(14); f_8c091980(c); }
  R(2)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08f238u; R(4)=R(14); f_8c091a14(c); }
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f240u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f254;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f24eu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08f254u; R(4)=R(12); f_8c064b7e(c); }
L8c08f254:;
  R(2)=0x8c0568e8u;
  { c->pr=0x8c08f25au; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08f300;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f268u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f274u; R(4)=R(12); f_8c064dda(c); }
  R(13)=R(13)&0xFF;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08f28a;
  R(13)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(13)+=R(15);
  { c->pr=0x8c08f286u; R(4)=R(13); f_8c0153d8(c); }
  {  goto L8c08f2a6; }
L8c08f28a:;
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f2a4;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08f29cu; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c08f2a4:;
  R(13)=R(8);
L8c08f2a6:;
  R(3)=0x8c0906a0u;
  R(7)=R(13);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08f2b2u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08f31e; }
L8c08f300:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08f306u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f31e;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f312u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f31eu; R(4)=R(12); f_8c064dda(c); }
L8c08f31e:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08f324u; R(4)=R(14); f_8c0919ce(c); }
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08f32au; R(4)=R(14); f_8c0a93e0(c); }
  {  { f_8c08fe0e(c); return; } }
L8c08f32e:;
  R(5)=0x98u;
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c08f338u; R(4)=LD32(R(15)+4); f_8c0163ce(c); }
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f340u; R(4)=LD32(R(15)+24); sh4_call(c,tg); }
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c08f34e;
  R(5)=LD32(R(15)+16);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f34eu; R(4)=LD32(R(15)+40); sh4_call(c,tg); }
L8c08f34e:;
  R(2)=LD32(R(14)+12);
  R(3)=0xffffffdfu;
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
  R(2)=0xffffffbfu;
  R(1)=LD32(R(14)+12);
  R(1)&=R(2);
  ST32(R(14)+12,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x2000u;
  c->t=(R(0)&R(1))==0;
  if(!c->t) goto L8c08f36a;
  {  goto L8c08f472; }
L8c08f36a:;
  R(0)=0x48u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c08f3c0;
  fp_mov(c,2,3);
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,0,3,2); goto L8c08f3ca; }
L8c08f3c0:;
  fp_ld(c,2,R(0)+R(14));
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,0);
L8c08f3ca:;
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  R(0)=0x4cu;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f3ea;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  { fp_ld(c,3,R(0)+R(14)); goto L8c08f3f0; }
L8c08f3ea:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,3);
L8c08f3f0:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  R(0)=0x50u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f412;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  { fp_ld(c,3,R(0)+R(14)); goto L8c08f418; }
L8c08f412:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,3);
L8c08f418:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  { R(2)=0x0u; goto L8c08f462; }
L8c08f460:;
  R(2)=0x1u;
L8c08f462:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08f472;
  R(3)=0x8c0aae00u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  { c->pr=0x8c08f472u; R(4)=R(14); f_8c0aae00(c); }
L8c08f472:;
  R(0)=0x54u;
  R(6)=R(14);
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x68u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x54u;
  R(3)=0x8c015060u;
  R(4)=R(14);
  fp_arith(c,2,2,3);
  R(5)=R(10);
  R(6)+=0x54u;
  fp_st(c,2,R(0)+R(14));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x64u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x60u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x5cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4aau; R(4)+=0x54u; sh4_call(c,tg); }
  R(0)=0x6cu;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(5)+=0x40u;
  R(3)=0x8c091c8au;
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x74u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4ccu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x0u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(15)+20);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; c->fr[13]=0x3F800000u; if(k) { f_8c08f4dc(c); return; } }
  {  { f_8c08f6c0(c); return; } }
}
void f_8c08f120(SH4Ctx *c) {
  R(13)=0x0u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  fp_mov(c,2,14);
  R(5)=R(15);
  fp_arith(c,2,2,3);
  R(3)=0x8c092c96u;
  R(5)+=0x4cu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x50u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08f14eu; R(4)=R(14); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f156u; R(4)=LD32(R(15)+24); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(3)=0xe0000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f182;
  R(3)=0x8c0aa620u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  fp_mov(c,4,14);
  { c->pr=0x8c08f16au; R(4)=R(14); f_8c0aa620(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0xfffbffffu;
  R(1)&=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfff7ffffu;
  R(0)&=R(1);
  ST32(R(14)+8,R(0));
L8c08f182:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08f196;
  R(2)=0x8c0aaa94u;
  { c->pr=0x8c08f18eu; R(4)=R(14); f_8c0aaa94(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0xdfffffffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
L8c08f196:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f228;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f220;
  R(0)=0x1f8u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=0xffffffffu;
  ST8(R(14)+R(0),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c08f228;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f1b8u; R(4)=R(14); f_8c08eca0(c); }
  R(2)=0x8c0480b8u;
  { c->pr=0x8c08f1beu; R(4)=R(12); f_8c0480b8(c); }
  R(3)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(!c->t) goto L8c08f228;
  R(2)=0x1c8u;
  R(5)=R(10);
  R(1)=0x8c05e6eau;
  R(4)=R(14);
  ST32(R(15)+12,R(14));
  R(5)+=0x58u;
  { c->pr=0x8c08f1d6u; R(4)+=R(2); f_8c05e6ea(c); }
  {  goto L8c08f228; }
L8c08f220:;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f228u; R(4)=R(14); f_8c08eca0(c); }
L8c08f228:;
  R(3)=0x8c091980u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f230u; R(4)=R(14); f_8c091980(c); }
  R(2)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08f238u; R(4)=R(14); f_8c091a14(c); }
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f240u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f254;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f24eu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08f254u; R(4)=R(12); f_8c064b7e(c); }
L8c08f254:;
  R(2)=0x8c0568e8u;
  { c->pr=0x8c08f25au; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08f300;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f268u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f274u; R(4)=R(12); f_8c064dda(c); }
  R(13)=R(13)&0xFF;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08f28a;
  R(13)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(13)+=R(15);
  { c->pr=0x8c08f286u; R(4)=R(13); f_8c0153d8(c); }
  {  goto L8c08f2a6; }
L8c08f28a:;
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f2a4;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08f29cu; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c08f2a4:;
  R(13)=R(8);
L8c08f2a6:;
  R(3)=0x8c0906a0u;
  R(7)=R(13);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08f2b2u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08f31e; }
L8c08f300:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08f306u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f31e;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f312u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f31eu; R(4)=R(12); f_8c064dda(c); }
L8c08f31e:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08f324u; R(4)=R(14); f_8c0919ce(c); }
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08f32au; R(4)=R(14); f_8c0a93e0(c); }
  {  { f_8c08fe0e(c); return; } }
}
void f_8c08f220(SH4Ctx *c) {
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f228u; R(4)=R(14); f_8c08eca0(c); }
  R(3)=0x8c091980u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f230u; R(4)=R(14); f_8c091980(c); }
  R(2)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08f238u; R(4)=R(14); f_8c091a14(c); }
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f240u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f254;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f24eu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08f254u; R(4)=R(12); f_8c064b7e(c); }
L8c08f254:;
  R(2)=0x8c0568e8u;
  { c->pr=0x8c08f25au; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08f300;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f268u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f274u; R(4)=R(12); f_8c064dda(c); }
  R(13)=R(13)&0xFF;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08f28a;
  R(13)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(13)+=R(15);
  { c->pr=0x8c08f286u; R(4)=R(13); f_8c0153d8(c); }
  {  goto L8c08f2a6; }
L8c08f28a:;
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f2a4;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08f29cu; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c08f2a4:;
  R(13)=R(8);
L8c08f2a6:;
  R(3)=0x8c0906a0u;
  R(7)=R(13);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08f2b2u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08f31e; }
L8c08f300:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08f306u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f31e;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f312u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f31eu; R(4)=R(12); f_8c064dda(c); }
L8c08f31e:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08f324u; R(4)=R(14); f_8c0919ce(c); }
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08f32au; R(4)=R(14); f_8c0a93e0(c); }
  {  { f_8c08fe0e(c); return; } }
}
void f_8c08f300(SH4Ctx *c) {
  R(3)=0x8c05689eu;
  { c->pr=0x8c08f306u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f31e;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08f312u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f31e;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08f31eu; R(4)=R(12); f_8c064dda(c); }
L8c08f31e:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08f324u; R(4)=R(14); f_8c0919ce(c); }
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08f32au; R(4)=R(14); f_8c0a93e0(c); }
  {  { f_8c08fe0e(c); return; } }
}
void f_8c08f3c0(SH4Ctx *c) {
  fp_ld(c,2,R(0)+R(14));
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,0);
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  R(0)=0x4cu;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f3ea;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  { fp_ld(c,3,R(0)+R(14)); goto L8c08f3f0; }
L8c08f3ea:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,3);
L8c08f3f0:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  R(0)=0x50u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,3);
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f412;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  { fp_ld(c,3,R(0)+R(14)); goto L8c08f418; }
L8c08f412:;
  fp_ld(c,3,R(0)+R(14));
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,3);
L8c08f418:;
  fp_arith(c,0,3,2);
  R(0)=0x8c08f440u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f460;
  { R(2)=0x0u; goto L8c08f462; }
L8c08f460:;
  R(2)=0x1u;
L8c08f462:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08f472;
  R(3)=0x8c0aae00u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  { c->pr=0x8c08f472u; R(4)=R(14); f_8c0aae00(c); }
L8c08f472:;
  R(0)=0x54u;
  R(6)=R(14);
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x68u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x54u;
  R(3)=0x8c015060u;
  R(4)=R(14);
  fp_arith(c,2,2,3);
  R(5)=R(10);
  R(6)+=0x54u;
  fp_st(c,2,R(0)+R(14));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x64u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x60u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x5cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4aau; R(4)+=0x54u; sh4_call(c,tg); }
  R(0)=0x6cu;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(5)+=0x40u;
  R(3)=0x8c091c8au;
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x74u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4ccu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x0u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(15)+20);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; c->fr[13]=0x3F800000u; if(k) { f_8c08f4dc(c); return; } }
  {  { f_8c08f6c0(c); return; } }
}
void f_8c08f440(SH4Ctx *c) {
  ST32(R(2)+56,R(6));
  c->t=(int32_t)R(10)>=(int32_t)R(8);
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(2)=0x1u;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08f472;
  R(3)=0x8c0aae00u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  { c->pr=0x8c08f472u; R(4)=R(14); f_8c0aae00(c); }
L8c08f472:;
  R(0)=0x54u;
  R(6)=R(14);
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x68u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x54u;
  R(3)=0x8c015060u;
  R(4)=R(14);
  fp_arith(c,2,2,3);
  R(5)=R(10);
  R(6)+=0x54u;
  fp_st(c,2,R(0)+R(14));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x64u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x60u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x5cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4aau; R(4)+=0x54u; sh4_call(c,tg); }
  R(0)=0x6cu;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(5)+=0x40u;
  R(3)=0x8c091c8au;
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x74u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4ccu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x0u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(15)+20);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; c->fr[13]=0x3F800000u; if(k) { f_8c08f4dc(c); return; } }
  {  { f_8c08f6c0(c); return; } }
}
void f_8c08f460(SH4Ctx *c) {
  R(2)=0x1u;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c08f472;
  R(3)=0x8c0aae00u;
  R(6)=R(8);
  R(5)=LD32(R(15));
  { c->pr=0x8c08f472u; R(4)=R(14); f_8c0aae00(c); }
L8c08f472:;
  R(0)=0x54u;
  R(6)=R(14);
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x68u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x54u;
  R(3)=0x8c015060u;
  R(4)=R(14);
  fp_arith(c,2,2,3);
  R(5)=R(10);
  R(6)+=0x54u;
  fp_st(c,2,R(0)+R(14));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x64u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x60u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x5cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4aau; R(4)+=0x54u; sh4_call(c,tg); }
  R(0)=0x6cu;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(5)+=0x40u;
  R(3)=0x8c091c8au;
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x74u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,13);
  fp_st(c,3,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c08f4ccu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x0u;
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(15)+20);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; c->fr[13]=0x3F800000u; if(k) { f_8c08f4dc(c); return; } }
  {  { f_8c08f6c0(c); return; } }
}
void f_8c08f4dc(SH4Ctx *c) {
L8c08f4dc:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c08f4ec;
  R(2)=0x8c092c96u;
  R(5)=R(14);
  R(5)+=0x54u;
  { c->pr=0x8c08f4ecu; R(4)=R(14); f_8c092c96(c); }
L8c08f4ec:;
  R(2)=LD32(R(14)+8);
  R(3)=0x700000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f502;
  R(0)=0xbcu;
  R(6)=R(8);
  R(3)=0x8c0aa900u;
  fp_ld(c,4,R(0)+R(13));
  R(5)=LD32(R(15));
  { c->pr=0x8c08f502u; R(4)=R(14); f_8c0aa900(c); }
L8c08f502:;
  R(2)=LD32(R(14)+8);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f520;
  R(0)=0x180u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f520;
  R(0)=0xbcu;
  R(5)=0x1u;
  R(3)=0x8c0aaa60u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f520u; R(4)=R(14); f_8c0aaa60(c); }
L8c08f520:;
  R(0)=0xbcu;
  R(6)=R(8);
  R(3)=0x8c0aa300u;
  fp_ld(c,4,R(0)+R(13));
  R(5)=LD32(R(15));
  { c->pr=0x8c08f52eu; R(4)=R(14); f_8c0aa300(c); }
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08f53e;
  R(0)=0xbcu;
  R(3)=0x8c0aa298u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f53eu; R(4)=R(14); f_8c0aa298(c); }
L8c08f53e:;
  R(2)=LD32(R(14)+8);
  R(3)=0xe0000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f554;
  R(0)=0xbcu;
  R(6)=R(8);
  R(3)=0x8c0aa620u;
  fp_ld(c,4,R(0)+R(13));
  R(5)=LD32(R(15));
  { c->pr=0x8c08f554u; R(4)=R(14); f_8c0aa620(c); }
L8c08f554:;
  R(2)=LD32(R(14)+8);
  R(3)=0x3800000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f56a;
  R(0)=0xbcu;
  R(6)=R(8);
  R(3)=0x8c0aa780u;
  fp_ld(c,4,R(0)+R(13));
  R(5)=LD32(R(15));
  { c->pr=0x8c08f56au; R(4)=R(14); f_8c0aa780(c); }
L8c08f56a:;
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f620;
  R(3)=0x8c0aaa94u;
  { c->pr=0x8c08f578u; R(4)=R(14); f_8c0aaa94(c); }
  { R(4)=R(14); goto L8c08f5e0; }
L8c08f5e0:;
  R(2)=0x8c0aab02u;
  { c->pr=0x8c08f5e6u;  f_8c0aab02(c); }
  {  goto L8c08f62e; }
L8c08f620:;
  R(2)=LD32(R(14)+8);
  R(3)=0x80000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f62e;
  R(3)=0x8c0aab02u;
  { c->pr=0x8c08f62eu; R(4)=R(14); f_8c0aab02(c); }
L8c08f62e:;
  R(2)=LD32(R(14)+8);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f64a;
  R(0)=0x180u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,0,3,13);
  if(!c->t) goto L8c08f64a;
  R(0)=0xbcu;
  R(5)=0x0u;
  R(3)=0x8c0aaa60u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f64au; R(4)=R(14); f_8c0aaa60(c); }
L8c08f64a:;
  R(2)=LD32(R(14)+8);
  R(3)=0x200u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f660;
  R(0)=0xbcu;
  R(6)=R(8);
  R(3)=0x8c0aac40u;
  fp_ld(c,4,R(0)+R(13));
  R(5)=LD32(R(15));
  { c->pr=0x8c08f660u; R(4)=R(14); f_8c0aac40(c); }
L8c08f660:;
  R(0)=0xbcu;
  R(3)=0x8c091980u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f66au; R(4)=R(14); f_8c091980(c); }
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f67a;
  R(0)=0xbcu;
  R(3)=0x8c092d40u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f67au; R(4)=R(14); f_8c092d40(c); }
L8c08f67a:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08f688;
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f688u; R(4)=LD32(R(15)+16); sh4_call(c,tg); }
L8c08f688:;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f690u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f6b0;
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f6b0;
  R(0)=0x44u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f6b0;
  R(2)=LD32(R(15)+20);
  ST32(R(15)+28,R(2));
L8c08f6b0:;
  R(3)=LD32(R(15)+28);
  R(3)+=0x1u;
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(15)+20);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) { f_8c08f6c0(c); return; }
  {  goto L8c08f4dc; }
}
void f_8c08f5e0(SH4Ctx *c) {
  R(2)=0x8c0aab02u;
  { c->pr=0x8c08f5e6u;  f_8c0aab02(c); }
  {  goto L8c08f62e; }
L8c08f62e:;
  R(2)=LD32(R(14)+8);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f64a;
  R(0)=0x180u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,0,3,13);
  if(!c->t) goto L8c08f64a;
  R(0)=0xbcu;
  R(5)=0x0u;
  R(3)=0x8c0aaa60u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f64au; R(4)=R(14); f_8c0aaa60(c); }
L8c08f64a:;
  R(2)=LD32(R(14)+8);
  R(3)=0x200u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f660;
  R(0)=0xbcu;
  R(6)=R(8);
  R(3)=0x8c0aac40u;
  fp_ld(c,4,R(0)+R(13));
  R(5)=LD32(R(15));
  { c->pr=0x8c08f660u; R(4)=R(14); f_8c0aac40(c); }
L8c08f660:;
  R(0)=0xbcu;
  R(3)=0x8c091980u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f66au; R(4)=R(14); f_8c091980(c); }
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f67a;
  R(0)=0xbcu;
  R(3)=0x8c092d40u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f67au; R(4)=R(14); f_8c092d40(c); }
L8c08f67a:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08f688;
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f688u; R(4)=LD32(R(15)+16); sh4_call(c,tg); }
L8c08f688:;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f690u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f6b0;
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f6b0;
  R(0)=0x44u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f6b0;
  R(2)=LD32(R(15)+20);
  ST32(R(15)+28,R(2));
L8c08f6b0:;
  R(3)=LD32(R(15)+28);
  R(3)+=0x1u;
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(15)+20);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) { f_8c08f6c0(c); return; }
  {  { f_8c08f4dc(c); return; } }
}
void f_8c08f620(SH4Ctx *c) {
  R(2)=LD32(R(14)+8);
  R(3)=0x80000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f62e;
  R(3)=0x8c0aab02u;
  { c->pr=0x8c08f62eu; R(4)=R(14); f_8c0aab02(c); }
L8c08f62e:;
  R(2)=LD32(R(14)+8);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f64a;
  R(0)=0x180u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,0,3,13);
  if(!c->t) goto L8c08f64a;
  R(0)=0xbcu;
  R(5)=0x0u;
  R(3)=0x8c0aaa60u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f64au; R(4)=R(14); f_8c0aaa60(c); }
L8c08f64a:;
  R(2)=LD32(R(14)+8);
  R(3)=0x200u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f660;
  R(0)=0xbcu;
  R(6)=R(8);
  R(3)=0x8c0aac40u;
  fp_ld(c,4,R(0)+R(13));
  R(5)=LD32(R(15));
  { c->pr=0x8c08f660u; R(4)=R(14); f_8c0aac40(c); }
L8c08f660:;
  R(0)=0xbcu;
  R(3)=0x8c091980u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f66au; R(4)=R(14); f_8c091980(c); }
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f67a;
  R(0)=0xbcu;
  R(3)=0x8c092d40u;
  fp_ld(c,4,R(0)+R(13));
  { c->pr=0x8c08f67au; R(4)=R(14); f_8c092d40(c); }
L8c08f67a:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08f688;
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f688u; R(4)=LD32(R(15)+16); sh4_call(c,tg); }
L8c08f688:;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f690u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f6b0;
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f6b0;
  R(0)=0x44u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c08f6b0;
  R(2)=LD32(R(15)+20);
  ST32(R(15)+28,R(2));
L8c08f6b0:;
  R(3)=LD32(R(15)+28);
  R(3)+=0x1u;
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(15)+20);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) { f_8c08f6c0(c); return; }
  {  { f_8c08f4dc(c); return; } }
}
void f_8c08f6c0(SH4Ctx *c) {
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c08f6ce;
  R(5)=LD32(R(15)+40);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f6ceu; R(4)=LD32(R(15)+16); sh4_call(c,tg); }
L8c08f6ce:;
  R(5)=LD32(R(15)+24);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08f6d6u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=0x8c091ceau;
  R(5)=R(15);
  R(5)+=0x40u;
  { c->pr=0x8c08f6e0u; R(4)=R(14); f_8c091cea(c); }
  R(2)=0x8c091e52u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f6e8u; R(4)=R(14); f_8c091e52(c); }
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c08f6f6;
  R(2)=0x8c0aa3e0u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f6f6u; R(4)=R(14); f_8c0aa3e0(c); }
L8c08f6f6:;
  R(3)=0x8c091000u;
  { c->pr=0x8c08f6fcu; R(4)=R(14); f_8c091000(c); }
  R(1)=R(15);
  R(1)+=0x10u;
  ST8(R(1),R(0));
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c08f718;
  R(0)=0x2a8u;
  R(1)=R(15);
  R(1)+=0x38u;
  R(0)=LD32(R(14)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  ST8(R(1),R(0));
L8c08f718:;
  R(2)=LD32(R(14)+12);
  R(3)=0xffff7fffu;
  R(2)&=R(3);
  R(0)=R(2);
  c->t=(R(0)&0x2)==0;
  ST32(R(14)+12,R(2));
  { R(13)=0x20u; goto L8c08f780; }
L8c08f780:;
  { uint32_t k=!c->t;  if(k) goto L8c08f788; }
  {  goto L8c08f8e4; }
L8c08f788:;
  R(0)=0x1f8u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=0xffffffffu;
  ST8(R(14)+R(0),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08f79a;
  {  goto L8c08f8c0; }
L8c08f79a:;
  R(0)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c08f7b6;
  R(0)=0x38u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08f7b6;
  R(3)=0x8c048080u;
  { c->pr=0x8c08f7b0u; R(4)=R(12); f_8c048080(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08f876;
L8c08f7b6:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c08f7ca;
  R(2)=0x8c0a4bd6u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f7c6u; R(4)=R(14); f_8c0a4bd6(c); }
  {  goto L8c08f876; }
L8c08f7ca:;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c08f840;
  R(2)=0x8c0a5620u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f7d8u; R(4)=R(14); f_8c0a5620(c); }
  R(0)=0x3cu;
  R(3)=0x8c0c8f00u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x44u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(14));
  fp_ld(c,2,R(3));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f876;
  R(5)=LD32(R(15)+4);
  R(4)=R(10);
  R(2)=0x8c05e6eau;
  R(5)+=0x58u;
  { c->pr=0x8c08f806u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x44u;
  { fp_st(c,15,R(0)+R(14)); goto L8c08f876; }
L8c08f840:;
  R(2)=LD32(R(14)+8);
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c08f852;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f84eu; R(4)=R(14); f_8c08ed38(c); }
  {  goto L8c08f876; }
L8c08f852:;
  R(2)=LD32(R(14)+12);
  R(3)=0x100u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f868;
  R(3)=0x8c0a84e0u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f864u; R(4)=R(14); f_8c0a84e0(c); }
  {  goto L8c08f876; }
L8c08f868:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f876;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f876u; R(4)=R(14); f_8c08eca0(c); }
L8c08f876:;
  R(3)=0x8c0480b8u;
  { c->pr=0x8c08f87cu; R(4)=R(12); f_8c0480b8(c); }
  R(2)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(2);
  if(c->t) goto L8c08f888;
  {  goto L8c08f9ee; }
L8c08f888:;
  R(3)=0x1c8u;
  R(5)=R(10);
  R(1)=0x8c05e6eau;
  R(4)=R(14);
  ST32(R(15)+16,R(14));
  R(5)+=0x58u;
  { c->pr=0x8c08f898u; R(4)+=R(3); f_8c05e6ea(c); }
  {  goto L8c08f9ee; }
L8c08f8c0:;
  R(2)=LD32(R(14)+8);
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c08f8ce;
  R(2)=0x8c0a83c0u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f8ceu; R(4)=R(14); f_8c0a83c0(c); }
L8c08f8ce:;
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08f8da;
  {  goto L8c08f9ee; }
L8c08f8da:;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3));
  { ST32(R(0)+4,R(2)); goto L8c08f9ee; }
L8c08f8e4:;
  R(0)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c08f8fc;
  R(3)=0x8c048080u;
  { c->pr=0x8c08f8f2u; R(4)=R(12); f_8c048080(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f8fc;
  {  goto L8c08f9ee; }
L8c08f8fc:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c08f910;
  R(2)=0x8c0a4bd6u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f90cu; R(4)=R(14); f_8c0a4bd6(c); }
  {  goto L8c08f9ee; }
L8c08f910:;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c08f980;
  R(2)=0x8c0a5620u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f91eu; R(4)=R(14); f_8c0a5620(c); }
  R(0)=0x3cu;
  R(3)=0x8c0c8f00u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x40u;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x44u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(14));
  fp_ld(c,2,R(3));
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f9ee;
  R(5)=LD32(R(15)+4);
  R(4)=R(10);
  R(2)=0x8c05e6eau;
  R(5)+=0x58u;
  { c->pr=0x8c08f94cu; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x44u;
  { fp_st(c,15,R(0)+R(14)); goto L8c08f9ee; }
L8c08f980:;
  R(2)=LD32(R(14)+8);
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c08f992;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f98eu; R(4)=R(14); f_8c08ed38(c); }
  {  goto L8c08f9ee; }
L8c08f992:;
  R(2)=LD32(R(14)+12);
  R(3)=0x100u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f9e0;
  R(3)=0x8c0a84e0u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f9a4u; R(4)=R(14); f_8c0a84e0(c); }
  {  goto L8c08f9ee; }
L8c08f9e0:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f9ee;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f9eeu; R(4)=R(14); f_8c08eca0(c); }
L8c08f9ee:;
  R(5)=0x98u;
  R(3)=0x8c0aab40u;
  R(5)+=R(15);
  { c->pr=0x8c08f9f8u; R(4)=R(14); f_8c0aab40(c); }
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08fa0c;
  R(2)=0x8c090702u;
  R(5)=R(12);
  { c->pr=0x8c08fa06u; R(4)=R(14); f_8c090702(c); }
  R(1)=R(15);
  R(1)+=0x3cu;
  ST8(R(1),R(0));
L8c08fa0c:;
  R(3)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08fa14u; R(4)=R(14); f_8c091a14(c); }
  R(4)=LD32(R(14)+12);
  R(13)=R(10);
  R(2)=R(4);
  c->t=(R(2)&R(9))==0;
  { uint32_t k=c->t; R(13)+=0x58u; if(k) goto L8c08faaa; }
  R(1)=0x4000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08faaa;
  R(6)=LD32(R(15)+32);
  R(5)=R(13);
  R(4)=0xa4u;
  R(3)=0x8c05e612u;
  R(6)+=0x58u;
  { c->pr=0x8c08fa34u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa4u;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015ea8u;
  fp_ld(c,3,R(0)+R(15));
  R(7)=R(15);
  R(0)=0xa4u;
  R(5)+=0x2cu;
  fp_arith(c,3,3,14);
  R(7)+=0x30u;
  R(6)+=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08fa64u; R(4)=LD32(R(15)+32); sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(0)=0x64u;
  R(4)=R(15);
  fp_st(c,13,R(0)+R(15));
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c08fa72u; R(4)+=0x68u; f_8c05e6ea(c); }
  R(5)=0xa4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c08fa7eu; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x114u;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fa8eu; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x120u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x50u;
  R(3)=0x124u;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08faaau; R(4)+=R(3); f_8c05e6ea(c); }
L8c08faaa:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fab2u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08fac0;
  R(0)=0x3cu;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fad6;
L8c08fac0:;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08fac8u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08faceu; R(4)=R(12); f_8c064b7e(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x1000000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
L8c08fad6:;
  R(3)=0x8c0568e8u;
  { c->pr=0x8c08fadcu; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fae6;
  {  goto L8c08fbe0; }
L8c08fae6:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08faeeu; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08faf8;
  {  goto L8c08fbfe; }
L8c08faf8:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fafeu; R(4)=R(12); f_8c064dda(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fb90;
  {  goto L8c08fb80; }
L8c08fb80:;
  R(11)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(11)+=R(15);
  { c->pr=0x8c08fb8cu; R(4)=R(11); f_8c0153d8(c); }
  {  goto L8c08fbac; }
L8c08fb90:;
  R(11)=R(14);
  R(2)=LD32(R(11)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fbaa;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08fba2u; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(11)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(11)+12,R(2));
L8c08fbaa:;
  R(11)=R(8);
L8c08fbac:;
  R(3)=0x8c0906a0u;
  R(7)=R(11);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08fbb8u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08fbfe; }
L8c08fbe0:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08fbe6u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fbfe;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fbf2u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fbfe;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fbfeu; R(4)=R(12); f_8c064dda(c); }
L8c08fbfe:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08fc04u; R(4)=R(14); f_8c0919ce(c); }
  R(4)=LD32(R(14)+12);
  c->t=(R(9)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x4000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c08fc1au; R(4)+=0x4cu; f_8c05e6ea(c); }
  R(0)=0x64u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c08fc36u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x14cu;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc46u; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x158u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x18u;
  R(3)=0x15cu;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc62u; R(4)+=R(3); f_8c05e6ea(c); }
L8c08fc62:;
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08fc68u; R(4)=R(14); f_8c0a93e0(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fc78;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3)+4);
  ST32(R(0),R(2));
L8c08fc78:;
  R(0)=0x16cu;
  R(3)=LD32(R(15)+20);
  ST8(R(14)+R(0),R(3));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x6cu;
  R(3)=0xffffbfffu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+8);
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0xffff7fffu;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(1)&=R(2);
  R(2)=0xfffbffffu;
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfffeffffu;
  R(0)&=R(1);
  R(1)=0xfff7ffffu;
  R(0)&=R(3);
  R(3)=0xffefffffu;
  R(0)&=R(2);
  R(2)=0xffdfffffu;
  R(0)&=R(1);
  R(1)=0xffbfffffu;
  R(0)&=R(3);
  R(3)=0xff7fffffu;
  R(0)&=R(2);
  R(2)=0xfeffffffu;
  R(0)&=R(1);
  R(1)=0xfdffffffu;
  R(0)&=R(3);
  R(3)=0xdfffffffu;
  R(0)&=R(2);
  R(2)=0x7fffffffu;
  R(0)&=R(1);
  R(0)&=R(3);
  R(0)&=R(2);
  ST32(R(14)+8,R(0));
  R(1)=0xffffffefu;
  R(0)=LD32(R(14)+12);
  R(0)&=R(1);
  R(3)=0xffffefffu;
  R(1)=0x8c0c8f08u;
  R(0)&=R(3);
  R(2)=0x8c0c8f04u;
  ST32(R(14)+12,R(0));
  fp_st(c,15,R(2));
  fp_st(c,15,R(1));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  {  goto L8c08fda0; }
L8c08fda0:;
  if(c->t) goto L8c08fdc0;
  R(5)=0x8c2e8704u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08fdbc;
  R(2)=0x8c2e8700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fdbc;
  R(3)=0x8c091130u;
  { c->pr=0x8c08fdb6u; R(4)=R(14); f_8c091130(c); }
  R(0)=0x194u;
  { fp_st(c,0,R(0)+R(14)); goto L8c08fdc0; }
L8c08fdbc:;
  R(0)=0x194u;
  fp_st(c,15,R(0)+R(14));
L8c08fdc0:;
  R(13)=0x8c2e876cu;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08fde8;
  R(2)=0x8c2e8700u;
  R(0)=LD32(R(2));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08fde8;
  R(1)=0x8c091130u;
  R(5)=R(13);
  { c->pr=0x8c08fdd8u; R(4)=R(14); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(c->t) goto L8c08fde8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c08fdf0; }
L8c08fde8:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c08fdf0:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fe0e;
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0xffffffecu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c08fe0e:;
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08f780(SH4Ctx *c) {
  { uint32_t k=!c->t;  if(k) goto L8c08f788; }
  {  goto L8c08f8e4; }
L8c08f788:;
  R(0)=0x1f8u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=0xffffffffu;
  ST8(R(14)+R(0),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08f79a;
  {  goto L8c08f8c0; }
L8c08f79a:;
  R(0)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c08f7b6;
  R(0)=0x38u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c08f7b6;
  R(3)=0x8c048080u;
  { c->pr=0x8c08f7b0u; R(4)=R(12); f_8c048080(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08f876;
L8c08f7b6:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c08f7ca;
  R(2)=0x8c0a4bd6u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f7c6u; R(4)=R(14); f_8c0a4bd6(c); }
  {  goto L8c08f876; }
L8c08f7ca:;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c08f840;
  R(2)=0x8c0a5620u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f7d8u; R(4)=R(14); f_8c0a5620(c); }
  R(0)=0x3cu;
  R(3)=0x8c0c8f00u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x44u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(14));
  fp_ld(c,2,R(3));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f876;
  R(5)=LD32(R(15)+4);
  R(4)=R(10);
  R(2)=0x8c05e6eau;
  R(5)+=0x58u;
  { c->pr=0x8c08f806u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x44u;
  { fp_st(c,15,R(0)+R(14)); goto L8c08f876; }
L8c08f840:;
  R(2)=LD32(R(14)+8);
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c08f852;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f84eu; R(4)=R(14); f_8c08ed38(c); }
  {  goto L8c08f876; }
L8c08f852:;
  R(2)=LD32(R(14)+12);
  R(3)=0x100u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f868;
  R(3)=0x8c0a84e0u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f864u; R(4)=R(14); f_8c0a84e0(c); }
  {  goto L8c08f876; }
L8c08f868:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f876;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f876u; R(4)=R(14); f_8c08eca0(c); }
L8c08f876:;
  R(3)=0x8c0480b8u;
  { c->pr=0x8c08f87cu; R(4)=R(12); f_8c0480b8(c); }
  R(2)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(2);
  if(c->t) goto L8c08f888;
  {  goto L8c08f9ee; }
L8c08f888:;
  R(3)=0x1c8u;
  R(5)=R(10);
  R(1)=0x8c05e6eau;
  R(4)=R(14);
  ST32(R(15)+16,R(14));
  R(5)+=0x58u;
  { c->pr=0x8c08f898u; R(4)+=R(3); f_8c05e6ea(c); }
  {  goto L8c08f9ee; }
L8c08f8c0:;
  R(2)=LD32(R(14)+8);
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c08f8ce;
  R(2)=0x8c0a83c0u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f8ceu; R(4)=R(14); f_8c0a83c0(c); }
L8c08f8ce:;
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08f8da;
  {  goto L8c08f9ee; }
L8c08f8da:;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3));
  { ST32(R(0)+4,R(2)); goto L8c08f9ee; }
L8c08f8e4:;
  R(0)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c08f8fc;
  R(3)=0x8c048080u;
  { c->pr=0x8c08f8f2u; R(4)=R(12); f_8c048080(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08f8fc;
  {  goto L8c08f9ee; }
L8c08f8fc:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c08f910;
  R(2)=0x8c0a4bd6u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f90cu; R(4)=R(14); f_8c0a4bd6(c); }
  {  goto L8c08f9ee; }
L8c08f910:;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c08f980;
  R(2)=0x8c0a5620u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f91eu; R(4)=R(14); f_8c0a5620(c); }
  R(0)=0x3cu;
  R(3)=0x8c0c8f00u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x40u;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x44u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(14));
  fp_ld(c,2,R(3));
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c08f9ee;
  R(5)=LD32(R(15)+4);
  R(4)=R(10);
  R(2)=0x8c05e6eau;
  R(5)+=0x58u;
  { c->pr=0x8c08f94cu; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x44u;
  { fp_st(c,15,R(0)+R(14)); goto L8c08f9ee; }
L8c08f980:;
  R(2)=LD32(R(14)+8);
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c08f992;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f98eu; R(4)=R(14); f_8c08ed38(c); }
  {  goto L8c08f9ee; }
L8c08f992:;
  R(2)=LD32(R(14)+12);
  R(3)=0x100u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f9e0;
  R(3)=0x8c0a84e0u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f9a4u; R(4)=R(14); f_8c0a84e0(c); }
  {  goto L8c08f9ee; }
L8c08f9e0:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f9ee;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f9eeu; R(4)=R(14); f_8c08eca0(c); }
L8c08f9ee:;
  R(5)=0x98u;
  R(3)=0x8c0aab40u;
  R(5)+=R(15);
  { c->pr=0x8c08f9f8u; R(4)=R(14); f_8c0aab40(c); }
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08fa0c;
  R(2)=0x8c090702u;
  R(5)=R(12);
  { c->pr=0x8c08fa06u; R(4)=R(14); f_8c090702(c); }
  R(1)=R(15);
  R(1)+=0x3cu;
  ST8(R(1),R(0));
L8c08fa0c:;
  R(3)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08fa14u; R(4)=R(14); f_8c091a14(c); }
  R(4)=LD32(R(14)+12);
  R(13)=R(10);
  R(2)=R(4);
  c->t=(R(2)&R(9))==0;
  { uint32_t k=c->t; R(13)+=0x58u; if(k) goto L8c08faaa; }
  R(1)=0x4000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08faaa;
  R(6)=LD32(R(15)+32);
  R(5)=R(13);
  R(4)=0xa4u;
  R(3)=0x8c05e612u;
  R(6)+=0x58u;
  { c->pr=0x8c08fa34u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa4u;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015ea8u;
  fp_ld(c,3,R(0)+R(15));
  R(7)=R(15);
  R(0)=0xa4u;
  R(5)+=0x2cu;
  fp_arith(c,3,3,14);
  R(7)+=0x30u;
  R(6)+=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08fa64u; R(4)=LD32(R(15)+32); sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(0)=0x64u;
  R(4)=R(15);
  fp_st(c,13,R(0)+R(15));
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c08fa72u; R(4)+=0x68u; f_8c05e6ea(c); }
  R(5)=0xa4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c08fa7eu; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x114u;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fa8eu; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x120u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x50u;
  R(3)=0x124u;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08faaau; R(4)+=R(3); f_8c05e6ea(c); }
L8c08faaa:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fab2u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08fac0;
  R(0)=0x3cu;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fad6;
L8c08fac0:;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08fac8u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08faceu; R(4)=R(12); f_8c064b7e(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x1000000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
L8c08fad6:;
  R(3)=0x8c0568e8u;
  { c->pr=0x8c08fadcu; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fae6;
  {  goto L8c08fbe0; }
L8c08fae6:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08faeeu; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08faf8;
  {  goto L8c08fbfe; }
L8c08faf8:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fafeu; R(4)=R(12); f_8c064dda(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fb90;
  {  goto L8c08fb80; }
L8c08fb80:;
  R(11)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(11)+=R(15);
  { c->pr=0x8c08fb8cu; R(4)=R(11); f_8c0153d8(c); }
  {  goto L8c08fbac; }
L8c08fb90:;
  R(11)=R(14);
  R(2)=LD32(R(11)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fbaa;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08fba2u; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(11)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(11)+12,R(2));
L8c08fbaa:;
  R(11)=R(8);
L8c08fbac:;
  R(3)=0x8c0906a0u;
  R(7)=R(11);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08fbb8u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08fbfe; }
L8c08fbe0:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08fbe6u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fbfe;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fbf2u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fbfe;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fbfeu; R(4)=R(12); f_8c064dda(c); }
L8c08fbfe:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08fc04u; R(4)=R(14); f_8c0919ce(c); }
  R(4)=LD32(R(14)+12);
  c->t=(R(9)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x4000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c08fc1au; R(4)+=0x4cu; f_8c05e6ea(c); }
  R(0)=0x64u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c08fc36u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x14cu;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc46u; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x158u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x18u;
  R(3)=0x15cu;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc62u; R(4)+=R(3); f_8c05e6ea(c); }
L8c08fc62:;
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08fc68u; R(4)=R(14); f_8c0a93e0(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fc78;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3)+4);
  ST32(R(0),R(2));
L8c08fc78:;
  R(0)=0x16cu;
  R(3)=LD32(R(15)+20);
  ST8(R(14)+R(0),R(3));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x6cu;
  R(3)=0xffffbfffu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+8);
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0xffff7fffu;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(1)&=R(2);
  R(2)=0xfffbffffu;
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfffeffffu;
  R(0)&=R(1);
  R(1)=0xfff7ffffu;
  R(0)&=R(3);
  R(3)=0xffefffffu;
  R(0)&=R(2);
  R(2)=0xffdfffffu;
  R(0)&=R(1);
  R(1)=0xffbfffffu;
  R(0)&=R(3);
  R(3)=0xff7fffffu;
  R(0)&=R(2);
  R(2)=0xfeffffffu;
  R(0)&=R(1);
  R(1)=0xfdffffffu;
  R(0)&=R(3);
  R(3)=0xdfffffffu;
  R(0)&=R(2);
  R(2)=0x7fffffffu;
  R(0)&=R(1);
  R(0)&=R(3);
  R(0)&=R(2);
  ST32(R(14)+8,R(0));
  R(1)=0xffffffefu;
  R(0)=LD32(R(14)+12);
  R(0)&=R(1);
  R(3)=0xffffefffu;
  R(1)=0x8c0c8f08u;
  R(0)&=R(3);
  R(2)=0x8c0c8f04u;
  ST32(R(14)+12,R(0));
  fp_st(c,15,R(2));
  fp_st(c,15,R(1));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  {  goto L8c08fda0; }
L8c08fda0:;
  if(c->t) goto L8c08fdc0;
  R(5)=0x8c2e8704u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08fdbc;
  R(2)=0x8c2e8700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fdbc;
  R(3)=0x8c091130u;
  { c->pr=0x8c08fdb6u; R(4)=R(14); f_8c091130(c); }
  R(0)=0x194u;
  { fp_st(c,0,R(0)+R(14)); goto L8c08fdc0; }
L8c08fdbc:;
  R(0)=0x194u;
  fp_st(c,15,R(0)+R(14));
L8c08fdc0:;
  R(13)=0x8c2e876cu;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08fde8;
  R(2)=0x8c2e8700u;
  R(0)=LD32(R(2));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08fde8;
  R(1)=0x8c091130u;
  R(5)=R(13);
  { c->pr=0x8c08fdd8u; R(4)=R(14); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(c->t) goto L8c08fde8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c08fdf0; }
L8c08fde8:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c08fdf0:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fe0e;
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0xffffffecu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c08fe0e:;
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08f840(SH4Ctx *c) {
  R(2)=LD32(R(14)+8);
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c08f852;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f84eu; R(4)=R(14); f_8c08ed38(c); }
  {  goto L8c08f876; }
L8c08f852:;
  R(2)=LD32(R(14)+12);
  R(3)=0x100u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f868;
  R(3)=0x8c0a84e0u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f864u; R(4)=R(14); f_8c0a84e0(c); }
  {  goto L8c08f876; }
L8c08f868:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f876;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f876u; R(4)=R(14); f_8c08eca0(c); }
L8c08f876:;
  R(3)=0x8c0480b8u;
  { c->pr=0x8c08f87cu; R(4)=R(12); f_8c0480b8(c); }
  R(2)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(2);
  if(c->t) goto L8c08f888;
  {  goto L8c08f9ee; }
L8c08f888:;
  R(3)=0x1c8u;
  R(5)=R(10);
  R(1)=0x8c05e6eau;
  R(4)=R(14);
  ST32(R(15)+16,R(14));
  R(5)+=0x58u;
  { c->pr=0x8c08f898u; R(4)+=R(3); f_8c05e6ea(c); }
  {  goto L8c08f9ee; }
L8c08f9ee:;
  R(5)=0x98u;
  R(3)=0x8c0aab40u;
  R(5)+=R(15);
  { c->pr=0x8c08f9f8u; R(4)=R(14); f_8c0aab40(c); }
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08fa0c;
  R(2)=0x8c090702u;
  R(5)=R(12);
  { c->pr=0x8c08fa06u; R(4)=R(14); f_8c090702(c); }
  R(1)=R(15);
  R(1)+=0x3cu;
  ST8(R(1),R(0));
L8c08fa0c:;
  R(3)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08fa14u; R(4)=R(14); f_8c091a14(c); }
  R(4)=LD32(R(14)+12);
  R(13)=R(10);
  R(2)=R(4);
  c->t=(R(2)&R(9))==0;
  { uint32_t k=c->t; R(13)+=0x58u; if(k) goto L8c08faaa; }
  R(1)=0x4000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08faaa;
  R(6)=LD32(R(15)+32);
  R(5)=R(13);
  R(4)=0xa4u;
  R(3)=0x8c05e612u;
  R(6)+=0x58u;
  { c->pr=0x8c08fa34u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa4u;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015ea8u;
  fp_ld(c,3,R(0)+R(15));
  R(7)=R(15);
  R(0)=0xa4u;
  R(5)+=0x2cu;
  fp_arith(c,3,3,14);
  R(7)+=0x30u;
  R(6)+=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08fa64u; R(4)=LD32(R(15)+32); sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(0)=0x64u;
  R(4)=R(15);
  fp_st(c,13,R(0)+R(15));
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c08fa72u; R(4)+=0x68u; f_8c05e6ea(c); }
  R(5)=0xa4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c08fa7eu; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x114u;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fa8eu; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x120u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x50u;
  R(3)=0x124u;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08faaau; R(4)+=R(3); f_8c05e6ea(c); }
L8c08faaa:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fab2u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08fac0;
  R(0)=0x3cu;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fad6;
L8c08fac0:;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08fac8u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08faceu; R(4)=R(12); f_8c064b7e(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x1000000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
L8c08fad6:;
  R(3)=0x8c0568e8u;
  { c->pr=0x8c08fadcu; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fae6;
  {  goto L8c08fbe0; }
L8c08fae6:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08faeeu; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08faf8;
  {  goto L8c08fbfe; }
L8c08faf8:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fafeu; R(4)=R(12); f_8c064dda(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fb90;
  {  goto L8c08fb80; }
L8c08fb80:;
  R(11)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(11)+=R(15);
  { c->pr=0x8c08fb8cu; R(4)=R(11); f_8c0153d8(c); }
  {  goto L8c08fbac; }
L8c08fb90:;
  R(11)=R(14);
  R(2)=LD32(R(11)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fbaa;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08fba2u; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(11)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(11)+12,R(2));
L8c08fbaa:;
  R(11)=R(8);
L8c08fbac:;
  R(3)=0x8c0906a0u;
  R(7)=R(11);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08fbb8u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08fbfe; }
L8c08fbe0:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08fbe6u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fbfe;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fbf2u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fbfe;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fbfeu; R(4)=R(12); f_8c064dda(c); }
L8c08fbfe:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08fc04u; R(4)=R(14); f_8c0919ce(c); }
  R(4)=LD32(R(14)+12);
  c->t=(R(9)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x4000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c08fc1au; R(4)+=0x4cu; f_8c05e6ea(c); }
  R(0)=0x64u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c08fc36u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x14cu;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc46u; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x158u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x18u;
  R(3)=0x15cu;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc62u; R(4)+=R(3); f_8c05e6ea(c); }
L8c08fc62:;
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08fc68u; R(4)=R(14); f_8c0a93e0(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fc78;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3)+4);
  ST32(R(0),R(2));
L8c08fc78:;
  R(0)=0x16cu;
  R(3)=LD32(R(15)+20);
  ST8(R(14)+R(0),R(3));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x6cu;
  R(3)=0xffffbfffu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+8);
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0xffff7fffu;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(1)&=R(2);
  R(2)=0xfffbffffu;
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfffeffffu;
  R(0)&=R(1);
  R(1)=0xfff7ffffu;
  R(0)&=R(3);
  R(3)=0xffefffffu;
  R(0)&=R(2);
  R(2)=0xffdfffffu;
  R(0)&=R(1);
  R(1)=0xffbfffffu;
  R(0)&=R(3);
  R(3)=0xff7fffffu;
  R(0)&=R(2);
  R(2)=0xfeffffffu;
  R(0)&=R(1);
  R(1)=0xfdffffffu;
  R(0)&=R(3);
  R(3)=0xdfffffffu;
  R(0)&=R(2);
  R(2)=0x7fffffffu;
  R(0)&=R(1);
  R(0)&=R(3);
  R(0)&=R(2);
  ST32(R(14)+8,R(0));
  R(1)=0xffffffefu;
  R(0)=LD32(R(14)+12);
  R(0)&=R(1);
  R(3)=0xffffefffu;
  R(1)=0x8c0c8f08u;
  R(0)&=R(3);
  R(2)=0x8c0c8f04u;
  ST32(R(14)+12,R(0));
  fp_st(c,15,R(2));
  fp_st(c,15,R(1));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  {  goto L8c08fda0; }
L8c08fda0:;
  if(c->t) goto L8c08fdc0;
  R(5)=0x8c2e8704u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08fdbc;
  R(2)=0x8c2e8700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fdbc;
  R(3)=0x8c091130u;
  { c->pr=0x8c08fdb6u; R(4)=R(14); f_8c091130(c); }
  R(0)=0x194u;
  { fp_st(c,0,R(0)+R(14)); goto L8c08fdc0; }
L8c08fdbc:;
  R(0)=0x194u;
  fp_st(c,15,R(0)+R(14));
L8c08fdc0:;
  R(13)=0x8c2e876cu;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08fde8;
  R(2)=0x8c2e8700u;
  R(0)=LD32(R(2));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08fde8;
  R(1)=0x8c091130u;
  R(5)=R(13);
  { c->pr=0x8c08fdd8u; R(4)=R(14); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(c->t) goto L8c08fde8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c08fdf0; }
L8c08fde8:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c08fdf0:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fe0e;
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0xffffffecu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c08fe0e:;
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08f8c0(SH4Ctx *c) {
  R(2)=LD32(R(14)+8);
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c08f8ce;
  R(2)=0x8c0a83c0u;
  fp_mov(c,4,14);
  { c->pr=0x8c08f8ceu; R(4)=R(14); f_8c0a83c0(c); }
L8c08f8ce:;
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c08f8da;
  {  goto L8c08f9ee; }
L8c08f8da:;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3));
  { ST32(R(0)+4,R(2)); goto L8c08f9ee; }
L8c08f9ee:;
  R(5)=0x98u;
  R(3)=0x8c0aab40u;
  R(5)+=R(15);
  { c->pr=0x8c08f9f8u; R(4)=R(14); f_8c0aab40(c); }
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08fa0c;
  R(2)=0x8c090702u;
  R(5)=R(12);
  { c->pr=0x8c08fa06u; R(4)=R(14); f_8c090702(c); }
  R(1)=R(15);
  R(1)+=0x3cu;
  ST8(R(1),R(0));
L8c08fa0c:;
  R(3)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08fa14u; R(4)=R(14); f_8c091a14(c); }
  R(4)=LD32(R(14)+12);
  R(13)=R(10);
  R(2)=R(4);
  c->t=(R(2)&R(9))==0;
  { uint32_t k=c->t; R(13)+=0x58u; if(k) goto L8c08faaa; }
  R(1)=0x4000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08faaa;
  R(6)=LD32(R(15)+32);
  R(5)=R(13);
  R(4)=0xa4u;
  R(3)=0x8c05e612u;
  R(6)+=0x58u;
  { c->pr=0x8c08fa34u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa4u;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015ea8u;
  fp_ld(c,3,R(0)+R(15));
  R(7)=R(15);
  R(0)=0xa4u;
  R(5)+=0x2cu;
  fp_arith(c,3,3,14);
  R(7)+=0x30u;
  R(6)+=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08fa64u; R(4)=LD32(R(15)+32); sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(0)=0x64u;
  R(4)=R(15);
  fp_st(c,13,R(0)+R(15));
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c08fa72u; R(4)+=0x68u; f_8c05e6ea(c); }
  R(5)=0xa4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c08fa7eu; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x114u;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fa8eu; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x120u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x50u;
  R(3)=0x124u;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08faaau; R(4)+=R(3); f_8c05e6ea(c); }
L8c08faaa:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fab2u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08fac0;
  R(0)=0x3cu;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fad6;
L8c08fac0:;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08fac8u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08faceu; R(4)=R(12); f_8c064b7e(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x1000000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
L8c08fad6:;
  R(3)=0x8c0568e8u;
  { c->pr=0x8c08fadcu; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fae6;
  {  goto L8c08fbe0; }
L8c08fae6:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08faeeu; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08faf8;
  {  goto L8c08fbfe; }
L8c08faf8:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fafeu; R(4)=R(12); f_8c064dda(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fb90;
  {  goto L8c08fb80; }
L8c08fb80:;
  R(11)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(11)+=R(15);
  { c->pr=0x8c08fb8cu; R(4)=R(11); f_8c0153d8(c); }
  {  goto L8c08fbac; }
L8c08fb90:;
  R(11)=R(14);
  R(2)=LD32(R(11)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fbaa;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08fba2u; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(11)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(11)+12,R(2));
L8c08fbaa:;
  R(11)=R(8);
L8c08fbac:;
  R(3)=0x8c0906a0u;
  R(7)=R(11);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08fbb8u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08fbfe; }
L8c08fbe0:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08fbe6u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fbfe;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fbf2u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fbfe;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fbfeu; R(4)=R(12); f_8c064dda(c); }
L8c08fbfe:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08fc04u; R(4)=R(14); f_8c0919ce(c); }
  R(4)=LD32(R(14)+12);
  c->t=(R(9)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x4000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c08fc1au; R(4)+=0x4cu; f_8c05e6ea(c); }
  R(0)=0x64u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c08fc36u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x14cu;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc46u; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x158u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x18u;
  R(3)=0x15cu;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc62u; R(4)+=R(3); f_8c05e6ea(c); }
L8c08fc62:;
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08fc68u; R(4)=R(14); f_8c0a93e0(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fc78;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3)+4);
  ST32(R(0),R(2));
L8c08fc78:;
  R(0)=0x16cu;
  R(3)=LD32(R(15)+20);
  ST8(R(14)+R(0),R(3));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x6cu;
  R(3)=0xffffbfffu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+8);
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0xffff7fffu;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(1)&=R(2);
  R(2)=0xfffbffffu;
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfffeffffu;
  R(0)&=R(1);
  R(1)=0xfff7ffffu;
  R(0)&=R(3);
  R(3)=0xffefffffu;
  R(0)&=R(2);
  R(2)=0xffdfffffu;
  R(0)&=R(1);
  R(1)=0xffbfffffu;
  R(0)&=R(3);
  R(3)=0xff7fffffu;
  R(0)&=R(2);
  R(2)=0xfeffffffu;
  R(0)&=R(1);
  R(1)=0xfdffffffu;
  R(0)&=R(3);
  R(3)=0xdfffffffu;
  R(0)&=R(2);
  R(2)=0x7fffffffu;
  R(0)&=R(1);
  R(0)&=R(3);
  R(0)&=R(2);
  ST32(R(14)+8,R(0));
  R(1)=0xffffffefu;
  R(0)=LD32(R(14)+12);
  R(0)&=R(1);
  R(3)=0xffffefffu;
  R(1)=0x8c0c8f08u;
  R(0)&=R(3);
  R(2)=0x8c0c8f04u;
  ST32(R(14)+12,R(0));
  fp_st(c,15,R(2));
  fp_st(c,15,R(1));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  {  goto L8c08fda0; }
L8c08fda0:;
  if(c->t) goto L8c08fdc0;
  R(5)=0x8c2e8704u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08fdbc;
  R(2)=0x8c2e8700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fdbc;
  R(3)=0x8c091130u;
  { c->pr=0x8c08fdb6u; R(4)=R(14); f_8c091130(c); }
  R(0)=0x194u;
  { fp_st(c,0,R(0)+R(14)); goto L8c08fdc0; }
L8c08fdbc:;
  R(0)=0x194u;
  fp_st(c,15,R(0)+R(14));
L8c08fdc0:;
  R(13)=0x8c2e876cu;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08fde8;
  R(2)=0x8c2e8700u;
  R(0)=LD32(R(2));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08fde8;
  R(1)=0x8c091130u;
  R(5)=R(13);
  { c->pr=0x8c08fdd8u; R(4)=R(14); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(c->t) goto L8c08fde8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c08fdf0; }
L8c08fde8:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c08fdf0:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fe0e;
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0xffffffecu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c08fe0e:;
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08f980(SH4Ctx *c) {
  R(2)=LD32(R(14)+8);
  c->t=(R(13)&R(2))==0;
  if(c->t) goto L8c08f992;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f98eu; R(4)=R(14); f_8c08ed38(c); }
  {  goto L8c08f9ee; }
L8c08f992:;
  R(2)=LD32(R(14)+12);
  R(3)=0x100u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08f9e0;
  R(3)=0x8c0a84e0u;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f9a4u; R(4)=R(14); f_8c0a84e0(c); }
  {  goto L8c08f9ee; }
L8c08f9e0:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f9ee;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f9eeu; R(4)=R(14); f_8c08eca0(c); }
L8c08f9ee:;
  R(5)=0x98u;
  R(3)=0x8c0aab40u;
  R(5)+=R(15);
  { c->pr=0x8c08f9f8u; R(4)=R(14); f_8c0aab40(c); }
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08fa0c;
  R(2)=0x8c090702u;
  R(5)=R(12);
  { c->pr=0x8c08fa06u; R(4)=R(14); f_8c090702(c); }
  R(1)=R(15);
  R(1)+=0x3cu;
  ST8(R(1),R(0));
L8c08fa0c:;
  R(3)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08fa14u; R(4)=R(14); f_8c091a14(c); }
  R(4)=LD32(R(14)+12);
  R(13)=R(10);
  R(2)=R(4);
  c->t=(R(2)&R(9))==0;
  { uint32_t k=c->t; R(13)+=0x58u; if(k) goto L8c08faaa; }
  R(1)=0x4000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08faaa;
  R(6)=LD32(R(15)+32);
  R(5)=R(13);
  R(4)=0xa4u;
  R(3)=0x8c05e612u;
  R(6)+=0x58u;
  { c->pr=0x8c08fa34u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa4u;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015ea8u;
  fp_ld(c,3,R(0)+R(15));
  R(7)=R(15);
  R(0)=0xa4u;
  R(5)+=0x2cu;
  fp_arith(c,3,3,14);
  R(7)+=0x30u;
  R(6)+=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08fa64u; R(4)=LD32(R(15)+32); sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(0)=0x64u;
  R(4)=R(15);
  fp_st(c,13,R(0)+R(15));
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c08fa72u; R(4)+=0x68u; f_8c05e6ea(c); }
  R(5)=0xa4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c08fa7eu; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x114u;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fa8eu; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x120u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x50u;
  R(3)=0x124u;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08faaau; R(4)+=R(3); f_8c05e6ea(c); }
L8c08faaa:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fab2u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08fac0;
  R(0)=0x3cu;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fad6;
L8c08fac0:;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08fac8u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08faceu; R(4)=R(12); f_8c064b7e(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x1000000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
L8c08fad6:;
  R(3)=0x8c0568e8u;
  { c->pr=0x8c08fadcu; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fae6;
  {  goto L8c08fbe0; }
L8c08fae6:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08faeeu; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08faf8;
  {  goto L8c08fbfe; }
L8c08faf8:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fafeu; R(4)=R(12); f_8c064dda(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fb90;
  {  goto L8c08fb80; }
L8c08fb80:;
  R(11)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(11)+=R(15);
  { c->pr=0x8c08fb8cu; R(4)=R(11); f_8c0153d8(c); }
  {  goto L8c08fbac; }
L8c08fb90:;
  R(11)=R(14);
  R(2)=LD32(R(11)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fbaa;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08fba2u; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(11)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(11)+12,R(2));
L8c08fbaa:;
  R(11)=R(8);
L8c08fbac:;
  R(3)=0x8c0906a0u;
  R(7)=R(11);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08fbb8u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08fbfe; }
L8c08fbe0:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08fbe6u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fbfe;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fbf2u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fbfe;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fbfeu; R(4)=R(12); f_8c064dda(c); }
L8c08fbfe:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08fc04u; R(4)=R(14); f_8c0919ce(c); }
  R(4)=LD32(R(14)+12);
  c->t=(R(9)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x4000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c08fc1au; R(4)+=0x4cu; f_8c05e6ea(c); }
  R(0)=0x64u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c08fc36u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x14cu;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc46u; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x158u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x18u;
  R(3)=0x15cu;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc62u; R(4)+=R(3); f_8c05e6ea(c); }
L8c08fc62:;
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08fc68u; R(4)=R(14); f_8c0a93e0(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fc78;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3)+4);
  ST32(R(0),R(2));
L8c08fc78:;
  R(0)=0x16cu;
  R(3)=LD32(R(15)+20);
  ST8(R(14)+R(0),R(3));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x6cu;
  R(3)=0xffffbfffu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+8);
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0xffff7fffu;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(1)&=R(2);
  R(2)=0xfffbffffu;
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfffeffffu;
  R(0)&=R(1);
  R(1)=0xfff7ffffu;
  R(0)&=R(3);
  R(3)=0xffefffffu;
  R(0)&=R(2);
  R(2)=0xffdfffffu;
  R(0)&=R(1);
  R(1)=0xffbfffffu;
  R(0)&=R(3);
  R(3)=0xff7fffffu;
  R(0)&=R(2);
  R(2)=0xfeffffffu;
  R(0)&=R(1);
  R(1)=0xfdffffffu;
  R(0)&=R(3);
  R(3)=0xdfffffffu;
  R(0)&=R(2);
  R(2)=0x7fffffffu;
  R(0)&=R(1);
  R(0)&=R(3);
  R(0)&=R(2);
  ST32(R(14)+8,R(0));
  R(1)=0xffffffefu;
  R(0)=LD32(R(14)+12);
  R(0)&=R(1);
  R(3)=0xffffefffu;
  R(1)=0x8c0c8f08u;
  R(0)&=R(3);
  R(2)=0x8c0c8f04u;
  ST32(R(14)+12,R(0));
  fp_st(c,15,R(2));
  fp_st(c,15,R(1));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  {  goto L8c08fda0; }
L8c08fda0:;
  if(c->t) goto L8c08fdc0;
  R(5)=0x8c2e8704u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08fdbc;
  R(2)=0x8c2e8700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fdbc;
  R(3)=0x8c091130u;
  { c->pr=0x8c08fdb6u; R(4)=R(14); f_8c091130(c); }
  R(0)=0x194u;
  { fp_st(c,0,R(0)+R(14)); goto L8c08fdc0; }
L8c08fdbc:;
  R(0)=0x194u;
  fp_st(c,15,R(0)+R(14));
L8c08fdc0:;
  R(13)=0x8c2e876cu;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08fde8;
  R(2)=0x8c2e8700u;
  R(0)=LD32(R(2));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08fde8;
  R(1)=0x8c091130u;
  R(5)=R(13);
  { c->pr=0x8c08fdd8u; R(4)=R(14); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(c->t) goto L8c08fde8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c08fdf0; }
L8c08fde8:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c08fdf0:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fe0e;
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0xffffffecu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c08fe0e:;
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08f9e0(SH4Ctx *c) {
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08f9ee;
  R(5)=R(12);
  fp_mov(c,4,14);
  { c->pr=0x8c08f9eeu; R(4)=R(14); f_8c08eca0(c); }
L8c08f9ee:;
  R(5)=0x98u;
  R(3)=0x8c0aab40u;
  R(5)+=R(15);
  { c->pr=0x8c08f9f8u; R(4)=R(14); f_8c0aab40(c); }
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c08fa0c;
  R(2)=0x8c090702u;
  R(5)=R(12);
  { c->pr=0x8c08fa06u; R(4)=R(14); f_8c090702(c); }
  R(1)=R(15);
  R(1)+=0x3cu;
  ST8(R(1),R(0));
L8c08fa0c:;
  R(3)=0x8c091a14u;
  R(5)=R(10);
  { c->pr=0x8c08fa14u; R(4)=R(14); f_8c091a14(c); }
  R(4)=LD32(R(14)+12);
  R(13)=R(10);
  R(2)=R(4);
  c->t=(R(2)&R(9))==0;
  { uint32_t k=c->t; R(13)+=0x58u; if(k) goto L8c08faaa; }
  R(1)=0x4000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c08faaa;
  R(6)=LD32(R(15)+32);
  R(5)=R(13);
  R(4)=0xa4u;
  R(3)=0x8c05e612u;
  R(6)+=0x58u;
  { c->pr=0x8c08fa34u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa4u;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015ea8u;
  fp_ld(c,3,R(0)+R(15));
  R(7)=R(15);
  R(0)=0xa4u;
  R(5)+=0x2cu;
  fp_arith(c,3,3,14);
  R(7)+=0x30u;
  R(6)+=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,3,3,14);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c08fa64u; R(4)=LD32(R(15)+32); sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(0)=0x64u;
  R(4)=R(15);
  fp_st(c,13,R(0)+R(15));
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c08fa72u; R(4)+=0x68u; f_8c05e6ea(c); }
  R(5)=0xa4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c08fa7eu; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x114u;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fa8eu; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x120u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x50u;
  R(3)=0x124u;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08faaau; R(4)+=R(3); f_8c05e6ea(c); }
L8c08faaa:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fab2u; R(4)=LD32(R(15)+8); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08fac0;
  R(0)=0x3cu;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fad6;
L8c08fac0:;
  R(5)=R(10);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c08fac8u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c08faceu; R(4)=R(12); f_8c064b7e(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x1000000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
L8c08fad6:;
  R(3)=0x8c0568e8u;
  { c->pr=0x8c08fadcu; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fae6;
  {  goto L8c08fbe0; }
L8c08fae6:;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08faeeu; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c08faf8;
  {  goto L8c08fbfe; }
L8c08faf8:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fafeu; R(4)=R(12); f_8c064dda(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x20000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fb90;
  {  goto L8c08fb80; }
L8c08fb80:;
  R(11)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(11)+=R(15);
  { c->pr=0x8c08fb8cu; R(4)=R(11); f_8c0153d8(c); }
  {  goto L8c08fbac; }
L8c08fb90:;
  R(11)=R(14);
  R(2)=LD32(R(11)+12);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fbaa;
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(15));
  { c->pr=0x8c08fba2u; R(4)=R(8); f_8c0153d8(c); }
  R(2)=LD32(R(11)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(11)+12,R(2));
L8c08fbaa:;
  R(11)=R(8);
L8c08fbac:;
  R(3)=0x8c0906a0u;
  R(7)=R(11);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08fbb8u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08fbfe; }
L8c08fbe0:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c08fbe6u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fbfe;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fbf2u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fbfe;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fbfeu; R(4)=R(12); f_8c064dda(c); }
L8c08fbfe:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08fc04u; R(4)=R(14); f_8c0919ce(c); }
  R(4)=LD32(R(14)+12);
  c->t=(R(9)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x4000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c08fc1au; R(4)+=0x4cu; f_8c05e6ea(c); }
  R(0)=0x64u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c08fc36u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x14cu;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc46u; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x158u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x18u;
  R(3)=0x15cu;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc62u; R(4)+=R(3); f_8c05e6ea(c); }
L8c08fc62:;
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08fc68u; R(4)=R(14); f_8c0a93e0(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fc78;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3)+4);
  ST32(R(0),R(2));
L8c08fc78:;
  R(0)=0x16cu;
  R(3)=LD32(R(15)+20);
  ST8(R(14)+R(0),R(3));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x6cu;
  R(3)=0xffffbfffu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+8);
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0xffff7fffu;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(1)&=R(2);
  R(2)=0xfffbffffu;
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfffeffffu;
  R(0)&=R(1);
  R(1)=0xfff7ffffu;
  R(0)&=R(3);
  R(3)=0xffefffffu;
  R(0)&=R(2);
  R(2)=0xffdfffffu;
  R(0)&=R(1);
  R(1)=0xffbfffffu;
  R(0)&=R(3);
  R(3)=0xff7fffffu;
  R(0)&=R(2);
  R(2)=0xfeffffffu;
  R(0)&=R(1);
  R(1)=0xfdffffffu;
  R(0)&=R(3);
  R(3)=0xdfffffffu;
  R(0)&=R(2);
  R(2)=0x7fffffffu;
  R(0)&=R(1);
  R(0)&=R(3);
  R(0)&=R(2);
  ST32(R(14)+8,R(0));
  R(1)=0xffffffefu;
  R(0)=LD32(R(14)+12);
  R(0)&=R(1);
  R(3)=0xffffefffu;
  R(1)=0x8c0c8f08u;
  R(0)&=R(3);
  R(2)=0x8c0c8f04u;
  ST32(R(14)+12,R(0));
  fp_st(c,15,R(2));
  fp_st(c,15,R(1));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  {  goto L8c08fda0; }
L8c08fda0:;
  if(c->t) goto L8c08fdc0;
  R(5)=0x8c2e8704u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08fdbc;
  R(2)=0x8c2e8700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fdbc;
  R(3)=0x8c091130u;
  { c->pr=0x8c08fdb6u; R(4)=R(14); f_8c091130(c); }
  R(0)=0x194u;
  { fp_st(c,0,R(0)+R(14)); goto L8c08fdc0; }
L8c08fdbc:;
  R(0)=0x194u;
  fp_st(c,15,R(0)+R(14));
L8c08fdc0:;
  R(13)=0x8c2e876cu;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08fde8;
  R(2)=0x8c2e8700u;
  R(0)=LD32(R(2));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08fde8;
  R(1)=0x8c091130u;
  R(5)=R(13);
  { c->pr=0x8c08fdd8u; R(4)=R(14); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(c->t) goto L8c08fde8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c08fdf0; }
L8c08fde8:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c08fdf0:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fe0e;
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0xffffffecu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c08fe0e:;
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08fb80(SH4Ctx *c) {
  R(11)=0x1e8u;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c0153d8u;
  R(11)+=R(15);
  { c->pr=0x8c08fb8cu; R(4)=R(11); f_8c0153d8(c); }
  {  goto L8c08fbac; }
L8c08fbac:;
  R(3)=0x8c0906a0u;
  R(7)=R(11);
  R(6)=LD32(R(15)+24);
  R(5)=R(12);
  { c->pr=0x8c08fbb8u; R(4)=R(14); f_8c0906a0(c); }
  {  goto L8c08fbfe; }
L8c08fbfe:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08fc04u; R(4)=R(14); f_8c0919ce(c); }
  R(4)=LD32(R(14)+12);
  c->t=(R(9)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x4000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c08fc1au; R(4)+=0x4cu; f_8c05e6ea(c); }
  R(0)=0x64u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c08fc36u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x14cu;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc46u; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x158u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x18u;
  R(3)=0x15cu;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc62u; R(4)+=R(3); f_8c05e6ea(c); }
L8c08fc62:;
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08fc68u; R(4)=R(14); f_8c0a93e0(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fc78;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3)+4);
  ST32(R(0),R(2));
L8c08fc78:;
  R(0)=0x16cu;
  R(3)=LD32(R(15)+20);
  ST8(R(14)+R(0),R(3));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x6cu;
  R(3)=0xffffbfffu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+8);
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0xffff7fffu;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(1)&=R(2);
  R(2)=0xfffbffffu;
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfffeffffu;
  R(0)&=R(1);
  R(1)=0xfff7ffffu;
  R(0)&=R(3);
  R(3)=0xffefffffu;
  R(0)&=R(2);
  R(2)=0xffdfffffu;
  R(0)&=R(1);
  R(1)=0xffbfffffu;
  R(0)&=R(3);
  R(3)=0xff7fffffu;
  R(0)&=R(2);
  R(2)=0xfeffffffu;
  R(0)&=R(1);
  R(1)=0xfdffffffu;
  R(0)&=R(3);
  R(3)=0xdfffffffu;
  R(0)&=R(2);
  R(2)=0x7fffffffu;
  R(0)&=R(1);
  R(0)&=R(3);
  R(0)&=R(2);
  ST32(R(14)+8,R(0));
  R(1)=0xffffffefu;
  R(0)=LD32(R(14)+12);
  R(0)&=R(1);
  R(3)=0xffffefffu;
  R(1)=0x8c0c8f08u;
  R(0)&=R(3);
  R(2)=0x8c0c8f04u;
  ST32(R(14)+12,R(0));
  fp_st(c,15,R(2));
  fp_st(c,15,R(1));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  {  goto L8c08fda0; }
L8c08fda0:;
  if(c->t) goto L8c08fdc0;
  R(5)=0x8c2e8704u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08fdbc;
  R(2)=0x8c2e8700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fdbc;
  R(3)=0x8c091130u;
  { c->pr=0x8c08fdb6u; R(4)=R(14); f_8c091130(c); }
  R(0)=0x194u;
  { fp_st(c,0,R(0)+R(14)); goto L8c08fdc0; }
L8c08fdbc:;
  R(0)=0x194u;
  fp_st(c,15,R(0)+R(14));
L8c08fdc0:;
  R(13)=0x8c2e876cu;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08fde8;
  R(2)=0x8c2e8700u;
  R(0)=LD32(R(2));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08fde8;
  R(1)=0x8c091130u;
  R(5)=R(13);
  { c->pr=0x8c08fdd8u; R(4)=R(14); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(c->t) goto L8c08fde8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c08fdf0; }
L8c08fde8:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c08fdf0:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fe0e;
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0xffffffecu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c08fe0e:;
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08fbe0(SH4Ctx *c) {
  R(3)=0x8c05689eu;
  { c->pr=0x8c08fbe6u; R(4)=R(12); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fbfe;
  R(3)=0x8c091aa0u;
  R(5)=R(10);
  { c->pr=0x8c08fbf2u; R(4)=LD32(R(15)+4); f_8c091aa0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c08fbfe;
  R(3)=0x8c064ddau;
  { c->pr=0x8c08fbfeu; R(4)=R(12); f_8c064dda(c); }
L8c08fbfe:;
  R(2)=0x8c0919ceu;
  { c->pr=0x8c08fc04u; R(4)=R(14); f_8c0919ce(c); }
  R(4)=LD32(R(14)+12);
  c->t=(R(9)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x4000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c08fc62;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c08fc1au; R(4)+=0x4cu; f_8c05e6ea(c); }
  R(0)=0x64u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c08fc36u; R(4)+=0x58u; f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(3)=0x14cu;
  R(5)+=0x58u;
  R(2)=0x8c05e6eau;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc46u; R(4)+=R(3); f_8c05e6ea(c); }
  R(0)=0x170u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x158u;
  fp_st(c,3,R(0)+R(3));
  R(0)+=0x18u;
  R(3)=0x15cu;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c08fc62u; R(4)+=R(3); f_8c05e6ea(c); }
L8c08fc62:;
  R(3)=0x8c0a93e0u;
  { c->pr=0x8c08fc68u; R(4)=R(14); f_8c0a93e0(c); }
  R(2)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c08fc78;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  R(2)=LD32(R(3)+4);
  ST32(R(0),R(2));
L8c08fc78:;
  R(0)=0x16cu;
  R(3)=LD32(R(15)+20);
  ST8(R(14)+R(0),R(3));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x6cu;
  R(3)=0xffffbfffu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(14));
  R(2)=LD32(R(14)+8);
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0xffff7fffu;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffdffffu;
  R(1)&=R(2);
  R(2)=0xfffbffffu;
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0xfffeffffu;
  R(0)&=R(1);
  R(1)=0xfff7ffffu;
  R(0)&=R(3);
  R(3)=0xffefffffu;
  R(0)&=R(2);
  R(2)=0xffdfffffu;
  R(0)&=R(1);
  R(1)=0xffbfffffu;
  R(0)&=R(3);
  R(3)=0xff7fffffu;
  R(0)&=R(2);
  R(2)=0xfeffffffu;
  R(0)&=R(1);
  R(1)=0xfdffffffu;
  R(0)&=R(3);
  R(3)=0xdfffffffu;
  R(0)&=R(2);
  R(2)=0x7fffffffu;
  R(0)&=R(1);
  R(0)&=R(3);
  R(0)&=R(2);
  ST32(R(14)+8,R(0));
  R(1)=0xffffffefu;
  R(0)=LD32(R(14)+12);
  R(0)&=R(1);
  R(3)=0xffffefffu;
  R(1)=0x8c0c8f08u;
  R(0)&=R(3);
  R(2)=0x8c0c8f04u;
  ST32(R(14)+12,R(0));
  fp_st(c,15,R(2));
  fp_st(c,15,R(1));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  {  goto L8c08fda0; }
L8c08fda0:;
  if(c->t) goto L8c08fdc0;
  R(5)=0x8c2e8704u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08fdbc;
  R(2)=0x8c2e8700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fdbc;
  R(3)=0x8c091130u;
  { c->pr=0x8c08fdb6u; R(4)=R(14); f_8c091130(c); }
  R(0)=0x194u;
  { fp_st(c,0,R(0)+R(14)); goto L8c08fdc0; }
L8c08fdbc:;
  R(0)=0x194u;
  fp_st(c,15,R(0)+R(14));
L8c08fdc0:;
  R(13)=0x8c2e876cu;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08fde8;
  R(2)=0x8c2e8700u;
  R(0)=LD32(R(2));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08fde8;
  R(1)=0x8c091130u;
  R(5)=R(13);
  { c->pr=0x8c08fdd8u; R(4)=R(14); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(c->t) goto L8c08fde8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c08fdf0; }
L8c08fde8:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c08fdf0:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fe0e;
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0xffffffecu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c08fe0e:;
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08fda0(SH4Ctx *c) {
  if(c->t) goto L8c08fdc0;
  R(5)=0x8c2e8704u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c08fdbc;
  R(2)=0x8c2e8700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c08fdbc;
  R(3)=0x8c091130u;
  { c->pr=0x8c08fdb6u; R(4)=R(14); f_8c091130(c); }
  R(0)=0x194u;
  { fp_st(c,0,R(0)+R(14)); goto L8c08fdc0; }
L8c08fdbc:;
  R(0)=0x194u;
  fp_st(c,15,R(0)+R(14));
L8c08fdc0:;
  R(13)=0x8c2e876cu;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c08fde8;
  R(2)=0x8c2e8700u;
  R(0)=LD32(R(2));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c08fde8;
  R(1)=0x8c091130u;
  R(5)=R(13);
  { c->pr=0x8c08fdd8u; R(4)=R(14); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(c->t) goto L8c08fde8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c08fdf0; }
L8c08fde8:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c08fdf0:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c08fe0e;
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0xffffffecu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c08fe0e:;
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08fe0e(SH4Ctx *c) {
  R(1)=0x2b8u;
  R(0)=R(14);
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
void f_8c08fe60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(4);
  ST32(R(15),R(5));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x80)==0;
  if(!c->t) goto L8c08feb4;
  R(2)=0xe0u;
  R(6)=0x24u;
  R(3)=0x20000000u;
  R(2)+=R(14);
  R(4)=0x148u;
  ST32(R(15)+4,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x8c0685b4u;
  R(1)|=R(3);
  ST32(R(14)+8,R(1));
  R(5)=LD32(R(15));
  R(5)+=0x4u;
  { c->pr=0x8c08fe8cu; R(4)+=R(14); f_8c0685b4(c); }
  R(5)=LD32(R(15));
  R(4)=R(15);
  R(6)=LD32(R(15)+4);
  R(3)=0x8c05e612u;
  R(5)+=0x58u;
  R(6)+=0x58u;
  { c->pr=0x8c08fe9cu; R(4)+=0x8u; f_8c05e612(c); }
  R(2)=0x8c05e6eau;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x8u;
  { c->pr=0x8c08fea8u; R(4)+=0x6cu; f_8c05e6ea(c); }
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c08feb4;
  R(2)=0x8c0aa540u;
  { c->pr=0x8c08feb4u; R(4)=R(14); f_8c0aa540(c); }
L8c08feb4:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c08febc(SH4Ctx *c) {
  R(0)=LD32(R(4)+12);
  c->t=(R(0)&0x80)==0;
  if(!c->t) goto L8c08ff0a;
  R(0)=0x4u;
  R(1)=0x148u;
  fp_ld(c,3,R(5));
  R(1)+=R(4);
  fp_st(c,3,R(1));
  fp_ld(c,2,R(0)+R(5));
  fp_st(c,2,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  fp_st(c,3,R(0)+R(1));
  R(0)=0xcu;
  fp_ld(c,3,R(6));
  fp_st(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(1));
  R(0)=0x18u;
  fp_ld(c,3,R(7));
  fp_st(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(1));
  R(2)=LD32(R(4)+8);
  R(3)=0x20000000u;
  R(2)|=R(3);
  ST32(R(4)+8,R(2));
L8c08ff0a:;
  {  return; }
}
void f_8c08ff40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(14)=R(4);
  ST32(R(15)+12,R(5));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x80)==0;
  if(!c->t) goto L8c090030;
  R(13)=0xe0u;
  R(6)=R(15);
  R(7)=R(15);
  R(2)=0x8c015ea8u;
  R(5)=R(15);
  R(6)+=0x4u;
  R(13)+=R(14);
  R(7)+=0x8u;
  { c->pr=0x8c08ff66u; R(4)=R(13); f_8c015ea8(c); }
  R(3)=LD32(R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(15)+8);
  R(0)=0x4u;
  R(5)=R(15);
  R(4)=R(15);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x2cu;
  R(5)+=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x30u;
  R(3)=0x8c05e8c4u;
  fp_st(c,3,R(0)+R(15));
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c08ffc8u; R(4)+=0x10u; f_8c05e8c4(c); }
  R(0)=0x10u;
  R(2)=LD32(R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_st(c,3,R(0)+R(3));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  fp_st(c,3,R(0)+R(3));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  R(3)=LD32(R(15)+4);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+4);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(3)=LD32(R(15)+8);
  fp_st(c,3,R(3));
  R(0)=0x2cu;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(5)=R(13);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+8);
  fp_st(c,3,R(0)+R(3));
  R(3)=0x8c091d40u;
  { c->pr=0x8c090024u; R(4)=R(14); f_8c091d40(c); }
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c090030;
  R(2)=0x8c0aa540u;
  { c->pr=0x8c090030u; R(4)=R(14); f_8c0aa540(c); }
L8c090030:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090060(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(4);
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x80)==0;
  if(!c->t) goto L8c0900a4;
  R(4)=0xe0u;
  R(2)=LD32(R(14)+8);
  R(3)=0x80000000u;
  R(4)+=R(14);
  R(1)=R(4);
  R(1)+=0x58u;
  R(2)|=R(3);
  R(4)=R(15);
  ST32(R(14)+8,R(2));
  R(6)=R(1);
  R(2)=0x8c05e612u;
  ST32(R(15),R(1));
  { c->pr=0x8c09008au; R(4)+=0x4u; f_8c05e612(c); }
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c090096u; R(4)+=0x6cu; f_8c05e6ea(c); }
  R(0)=0x3cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(14));
L8c0900a4:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0900ac(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  R(0)=LD32(R(14)+12);
  R(13)=0x8c01638au;
  R(11)=R(5);
  c->t=(R(0)&0x80)==0;
  { uint32_t k=c->t; R(12)=R(6); if(k) goto L8c090100; }
  R(4)=LD32(R(11)+36);
  { uint32_t tg=R(13); c->pr=0x8c0900ceu; R(5)=R(12); sh4_call(c,tg); }
  {  goto L8c09013e; }
L8c090100:;
  R(3)=R(14);
  R(10)=0xe0u;
  R(3)+=0x78u;
  R(5)=R(12);
  ST32(R(15),R(3));
  R(10)+=R(14);
  R(2)=LD32(R(11)+36);
  ST32(R(15)+4,R(2));
  { uint32_t tg=R(13); c->pr=0x8c090114u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=R(12);
  { uint32_t tg=R(13); c->pr=0x8c09011au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x8c0685b4u;
  R(5)=R(10);
  R(6)=0x68u;
  { c->pr=0x8c090124u; R(4)=LD32(R(15)+4); f_8c0685b4(c); }
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c09013e;
  R(2)=0x318u;
  R(4)=0x2b0u;
  R(2)+=R(14);
  ST32(R(15),R(2));
  R(4)+=R(14);
  { uint32_t tg=R(13); c->pr=0x8c090138u; R(5)=R(12); sh4_call(c,tg); }
  R(5)=R(12);
  { uint32_t tg=R(13); c->pr=0x8c09013eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c09013e:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c090144u; R(4)=R(11); f_8c064b7e(c); }
  R(0)=0x3cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x6cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,4,R(0)+R(14));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c090170;
  R(0)=0x1d4u;
  fp_st(c,4,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(14));
L8c090170:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090100(SH4Ctx *c) {
  R(3)=R(14);
  R(10)=0xe0u;
  R(3)+=0x78u;
  R(5)=R(12);
  ST32(R(15),R(3));
  R(10)+=R(14);
  R(2)=LD32(R(11)+36);
  ST32(R(15)+4,R(2));
  { uint32_t tg=R(13); c->pr=0x8c090114u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=R(12);
  { uint32_t tg=R(13); c->pr=0x8c09011au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x8c0685b4u;
  R(5)=R(10);
  R(6)=0x68u;
  { c->pr=0x8c090124u; R(4)=LD32(R(15)+4); f_8c0685b4(c); }
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c09013e;
  R(2)=0x318u;
  R(4)=0x2b0u;
  R(2)+=R(14);
  ST32(R(15),R(2));
  R(4)+=R(14);
  { uint32_t tg=R(13); c->pr=0x8c090138u; R(5)=R(12); sh4_call(c,tg); }
  R(5)=R(12);
  { uint32_t tg=R(13); c->pr=0x8c09013eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c09013e:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c090144u; R(4)=R(11); f_8c064b7e(c); }
  R(0)=0x3cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x6cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x70u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x74u;
  fp_st(c,4,R(0)+R(14));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c090170;
  R(0)=0x1d4u;
  fp_st(c,4,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(14));
L8c090170:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090180(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c04a8d0u;
  { c->pr=0x8c090190u; ST32(R(15),R(4)); f_8c04a8d0(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0901e8;
  R(3)=R(14);
  R(4)=0xe0u;
  R(12)=0x8c0685b4u;
  R(3)+=0x78u;
  R(6)=0x68u;
  ST32(R(15)+4,R(3));
  R(13)=LD32(R(15));
  R(4)+=R(14);
  R(13)=LD32(R(13)+36);
  { c->pr=0x8c0901acu; R(5)=R(13); f_8c0685b4(c); }
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0901b4u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(0)=0x3cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x40u;
  R(3)=0x1000000u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(14));
  R(2)=LD32(R(14)+12);
  R(2)|=R(3);
  R(0)=R(2);
  c->t=(R(0)&0x4)==0;
  { uint32_t k=c->t; ST32(R(14)+12,R(2)); if(k) goto L8c0901e8; }
  R(2)=0x318u;
  R(6)=0x68u;
  R(4)=0x2b0u;
  R(2)+=R(14);
  ST32(R(15),R(2));
  R(4)+=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0901e0u; R(5)=R(13); sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0901e8u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c0901e8:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090220(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff5cu;
  R(15)+=R(0);
  R(0)=LD32(R(4)+12);
  c->t=(R(0)&0x80)==0;
  { uint32_t k=!c->t; fp_mov(c,14,4); if(k) goto L8c0902f8; }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,14,3);
  if(c->t) goto L8c0902f8;
  R(0)=LD32(R(4)+8);
  R(14)=0xe0u;
  c->t=(R(0)&0x8)==0;
  R(14)+=R(4);
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c0902c6; }
  R(2)=0x8c068530u;
  R(13)=R(15);
  { c->pr=0x8c090252u; fp_mov(c,4,14); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,13,0);
  { c->pr=0x8c09025au; fp_mov(c,4,14); f_8c0686fc(c); }
  R(4)=0x8cu;
  R(5)=R(14);
  R(2)=0x8c05e6eau;
  R(5)+=0x58u;
  fp_mov(c,14,0);
  { c->pr=0x8c090268u; R(4)+=R(15); f_8c05e6ea(c); }
  R(3)=0x8c129430u;
  R(6)=0x68u;
  R(2)=0x8c0685b4u;
  R(5)=LD32(R(3));
  { c->pr=0x8c090274u; R(4)=R(13); f_8c0685b4(c); }
  R(0)=0x80u;
  R(6)=R(15);
  R(5)=0x80u;
  R(7)=R(15);
  fp_st(c,13,R(0)+R(15));
  R(7)+=0x68u;
  R(0)=0x84u;
  R(5)+=R(15);
  R(3)=0x8c015c9cu;
  R(6)+=0x74u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x88u;
  fp_unary(c,0,14);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,13,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x70u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0902aeu; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0x8c0156cau;
  R(5)=R(13);
  R(6)=R(14);
  { c->pr=0x8c0902b8u; R(4)=R(14); f_8c0156ca(c); }
  R(5)=0x8cu;
  R(3)=0x8c01638au;
  R(5)+=R(15);
  { c->pr=0x8c0902c2u; R(4)=R(14); f_8c01638a(c); }
  {  goto L8c0902f8; }
L8c0902c6:;
  R(4)=0x8cu;
  R(5)=R(14);
  R(2)=0x8c05e6eau;
  R(5)+=0x58u;
  { c->pr=0x8c0902d2u; R(4)+=R(15); f_8c05e6ea(c); }
  R(0)=0x98u;
  R(5)=0x98u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x9cu;
  R(5)+=R(15);
  c->fr[3]=0x3F800000u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0xa0u;
  R(3)=0x8c015816u;
  fp_unary(c,0,3);
  fp_mov(c,4,14);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c0902eeu; R(4)=R(14); f_8c015816(c); }
  R(5)=0x8cu;
  R(2)=0x8c01638au;
  R(5)+=R(15);
  { c->pr=0x8c0902f8u; R(4)=R(14); f_8c01638a(c); }
L8c0902f8:;
  R(1)=0xa4u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090360(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=R(4);
  R(0)=LD32(R(13)+12);
  c->t=(R(0)&0x80)==0;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c090378; }
  {  goto L8c0904ba; }
L8c090378:;
  fp_ld(c,2,R(14));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c090396;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c090396;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c090396;
  {  goto L8c0904ba; }
L8c090396:;
  R(12)=0xe0u;
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015ea8u;
  R(5)+=0x8u;
  R(6)=R(15);
  R(12)+=R(13);
  R(7)+=0x4u;
  { c->pr=0x8c0903aau; R(4)=R(12); f_8c015ea8(c); }
  R(0)=0x4u;
  fp_ld(c,6,R(14));
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=LD32(R(15));
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(3)=LD32(R(15));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,3,R(2));
  fp_unary(c,0,3);
  R(0)=0x4u;
  fp_st(c,3,R(3));
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x8u;
  R(1)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(2));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  R(1)=LD32(R(15)+4);
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(1));
  R(2)=LD32(R(15));
  R(0)=0x8u;
  fp_ld(c,1,R(2));
  fp_ld(c,2,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(2)=LD32(R(15));
  R(1)=LD32(R(15)+4);
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(1));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(15));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  R(5)=R(12);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(15)+8);
  fp_ld(c,2,R(0)+R(2));
  fp_ld(c,3,R(1));
  fp_ld(c,1,R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(3)=LD32(R(15));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(15)+8);
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(1));
  R(3)=LD32(R(15));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(3)=0x8c091d40u;
  { c->pr=0x8c0904aeu; R(4)=R(13); f_8c091d40(c); }
  R(0)=LD32(R(13)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0904ba;
  R(2)=0x8c0aa540u;
  { c->pr=0x8c0904bau; R(4)=R(13); f_8c0aa540(c); }
L8c0904ba:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090500(SH4Ctx *c) {
  R(0)=0x2a8u;
  R(0)=LD32(R(4)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09051c;
  R(0)=0x2a8u;
  R(2)=LD32(R(4)+R(0));
  R(0)=0x60u;
  R(3)=LD32(R(2)+36);
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,1,4,3);
L8c09051c:;
  R(0)=0x210u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c090522(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c090536;
  {  goto L8c09066c; }
L8c090536:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c09053cu;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(4)=LD32(R(14)+12);
  R(2)=0x4u;
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c09054a;
  {  goto L8c09066c; }
L8c09054a:;
  R(1)=0x4000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c090554;
  {  goto L8c09066c; }
L8c090554:;
  R(7)=R(15);
  R(2)=0x8c015ea8u;
  R(4)=R(14);
  R(5)=R(15);
  R(6)=R(15);
  R(4)+=0x78u;
  R(7)+=0x8u;
  { c->pr=0x8c090566u; R(5)+=0x4u; f_8c015ea8(c); }
  R(0)=0x170u;
  R(4)=R(15);
  R(3)=LD32(R(14)+R(0));
  R(14)=0x114u;
  R(14)+=R(3);
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  R(5)+=0x10u;
  { c->pr=0x8c09057au; R(4)+=0x24u; f_8c05e6ea(c); }
  R(3)=0x8c05e55cu;
  R(4)=R(15);
  R(5)=LD32(R(15));
  { c->pr=0x8c090584u; R(4)+=0x24u; f_8c05e55c(c); }
  R(2)=LD32(R(15));
  R(0)=0x8u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(3)=R(2);
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  R(3)=LD32(R(15));
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(3));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x24u;
  c->fr[5]=0x3F800000u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(3));
  fp_unary(c,0,5);
  fp_cmp(c,1,4,5);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  { uint32_t k=!c->t; c->fr[15]=0x3F800000u; if(k) goto L8c090620; }
  { fp_mov(c,3,4); goto L8c090622; }
L8c090620:;
  fp_mov(c,3,5);
L8c090622:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c09062e;
  fp_cmp(c,1,4,5);
  if(c->t) goto L8c090630;
  { fp_mov(c,4,5); goto L8c090630; }
L8c09062e:;
  fp_mov(c,4,15);
L8c090630:;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c090644;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c090640u;  f_8c09cf34(c); }
  { fp_mov(c,5,0); goto L8c09064e; }
L8c090644:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c09064au;  f_8c09cf34(c); }
  fp_mov(c,5,0);
  fp_unary(c,0,5);
L8c09064e:;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c05e6eau;
  R(0)=0xcu;
  R(4)=R(14);
  fp_st(c,5,R(0)+R(14));
  R(5)+=0x18u;
  { c->pr=0x8c09066cu; R(4)+=0x10u; f_8c05e6ea(c); }
L8c09066c:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090620(SH4Ctx *c) {
  fp_mov(c,3,5);
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c09062e;
  fp_cmp(c,1,4,5);
  if(c->t) goto L8c090630;
  { fp_mov(c,4,5); goto L8c090630; }
L8c09062e:;
  fp_mov(c,4,15);
L8c090630:;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c090644;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c090640u;  f_8c09cf34(c); }
  { fp_mov(c,5,0); goto L8c09064e; }
L8c090644:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c09064au;  f_8c09cf34(c); }
  fp_mov(c,5,0);
  fp_unary(c,0,5);
L8c09064e:;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c05e6eau;
  R(0)=0xcu;
  R(4)=R(14);
  fp_st(c,5,R(0)+R(14));
  R(5)+=0x18u;
  { c->pr=0x8c09066cu; R(4)+=0x10u; f_8c05e6ea(c); }
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0906a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(11)=0x8c08ebaeu;
  R(10)=0x8c04a8d0u;
  R(12)=0xe0u;
  ST32(R(15),R(6));
  ST32(R(15)+4,R(7));
  R(14)=LD32(R(5)+8);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)+=R(4); if(k) goto L8c0906f2; }
L8c0906c0:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0906ec;
  { uint32_t tg=R(10); c->pr=0x8c0906cau; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0906ec;
  R(4)=LD32(R(13)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0906ec;
  { uint32_t tg=R(11); c->pr=0x8c0906dau;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0906ec;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15)+8);
  { c->pr=0x8c0906eau; R(4)=R(13); f_8c090a20(c); }
  R(15)+=0x4u;
L8c0906ec:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0906c0;
L8c0906f2:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090702(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(3)=LD32(R(14)+4);
  R(13)=R(5);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c090760; }
  R(3)=0x8c08ebaeu;
  { c->pr=0x8c090720u; R(4)=LD32(R(15)); f_8c08ebae(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c090760;
  { R(3)=0x1u; goto L8c090762; }
L8c090760:;
  R(3)=0x0u;
L8c090762:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09076c;
  {  goto L8c0908a0; }
L8c09076c:;
  R(4)=0x8c2e8700u;
  R(3)=0x10000u;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c09077a;
  {  goto L8c09084e; }
L8c09077a:;
  R(0)=LD32(R(14)+8);
  R(12)=0x13cu;
  c->t=(R(0)&0x10)==0;
  R(12)+=R(4);
  { uint32_t k=c->t; R(11)=LD32(R(12)+36); if(k) goto L8c090798; }
  R(2)=0x8c090decu;
  R(5)=R(12);
  { c->pr=0x8c09078eu; R(4)=R(14); f_8c090dec(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0907f0;
  {  goto L8c0908a0; }
L8c090798:;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c0907e0;
  R(2)=0x8c090d60u;
  R(5)=R(12);
  R(5)+=0x4u;
  { c->pr=0x8c0907a6u; R(4)=R(14); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0907f0;
  {  goto L8c0908a0; }
L8c0907e0:;
  R(3)=0x8c090dacu;
  R(5)=R(12);
  R(5)+=0x4u;
  { c->pr=0x8c0907eau; R(4)=R(14); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0908a0;
L8c0907f0:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c09084e;
  R(2)=0x8c092bf2u;
  { c->pr=0x8c0907fau; R(4)=R(11); f_8c092bf2(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c09084e;
  R(2)=0x8c0568e8u;
  { c->pr=0x8c090806u; R(4)=R(12); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09084e;
  R(2)=0x8c0568e8u;
  { c->pr=0x8c090812u; R(4)=R(13); f_8c0568e8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0908a0;
  R(0)=0x2a8u;
  R(0)=LD32(R(14)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c090842;
  R(0)=0x2a8u;
  R(2)=LD32(R(14)+R(0));
  c->t=R(2)==R(12);
  if(c->t) goto L8c0908a0;
  R(5)=R(13);
  { c->pr=0x8c090836u; R(4)=R(14); f_8c0909b0(c); }
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c09083eu; R(4)=R(14); f_8c0908b0(c); }
  {  goto L8c090864; }
L8c090842:;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c09084au; R(4)=R(14); f_8c0908b0(c); }
  {  goto L8c090864; }
L8c09084e:;
  R(0)=0x2a8u;
  R(0)=LD32(R(14)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0908a0;
  R(5)=R(13);
  { c->pr=0x8c090864u; R(4)=R(14); f_8c0909b0(c); }
L8c090864:;
  { R(0)=0x1u; goto L8c0908a2; }
L8c0908a0:;
  R(0)=0x0u;
L8c0908a2:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0908b0(SH4Ctx *c) {
  R(2)=LD32(R(4)+8);
  R(3)=0x40000000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0909ac;
  R(0)=0x2a8u;
  ST32(R(4)+R(0),R(6));
  R(3)=LD32(R(5)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0908c8;
  R(2)=LD32(R(5)+24);
  R(3)=LD32(R(5)+20);
  ST32(R(3)+24,R(2));
L8c0908c8:;
  R(3)=LD32(R(5)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0908d4;
  R(2)=LD32(R(5)+20);
  R(3)=LD32(R(5)+24);
  ST32(R(3)+20,R(2));
L8c0908d4:;
  R(3)=LD32(R(5)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0908fe;
  R(3)=LD32(R(5)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(5)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c0908f0;
  R(3)=LD32(R(5)+20);
  R(1)=LD32(R(5)+28);
  ST32(R(1)+8,R(3));
L8c0908f0:;
  R(2)=LD32(R(5)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c0908fe;
  R(3)=LD32(R(5)+24);
  R(1)=LD32(R(5)+28);
  ST32(R(1)+12,R(3));
L8c0908fe:;
  R(4)=R(5);
  R(7)=0x0u;
  ST32(R(5)+20,R(7));
  ST32(R(5)+24,R(7));
  ST32(R(5)+28,R(7));
  R(2)=LD32(R(4)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(5)=R(6); if(k) goto L8c090916; }
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c090916:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c090922;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c090922:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09094c;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c09093e;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c09093e:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c09094c;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c09094c:;
  ST32(R(4)+20,R(7));
  ST32(R(4)+24,R(7));
  ST32(R(4)+28,R(7));
  ST32(R(4)+20,R(7));
  R(2)=LD32(R(5)+12);
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(5));
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0909a0;
  { ST32(R(5)+8,R(4)); goto L8c0909a4; }
L8c0909a0:;
  R(2)=LD32(R(5)+12);
  ST32(R(2)+20,R(4));
L8c0909a4:;
  ST32(R(5)+12,R(4));
  R(3)=LD32(R(5)+16);
  R(3)+=0x1u;
  ST32(R(5)+16,R(3));
L8c0909ac:;
  {  return; }
}
void f_8c0909b0(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=0x40000000u;
  ST32(R(15),R(5));
  R(2)=LD32(R(4)+8);
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0909cc;
  R(0)=0x2a8u;
  R(3)=0x0u;
  R(4)+=R(0);
  ST32(R(4),R(3));
  R(3)=0x8c04b6c0u;
  R(4)=LD32(R(15));
  { R(15)+=0x4u; { f_8c04b6c0(c); return; } }
L8c0909cc:;
  { R(15)+=0x4u; return; }
}
void f_8c0909d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0909d8u; R(14)=R(4); f_8c0908b0(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x40000000u;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0909e6(SH4Ctx *c) {
  R(1)=LD32(R(4)+8);
  R(3)=0xbfffffffu;
  R(1)&=R(3);
  { ST32(R(4)+8,R(1)); { f_8c0909b0(c); return; } }
}
void f_8c090a20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff74u;
  R(15)+=R(0);
  R(0)=0xacu;
  R(10)=R(4);
  R(11)=0xe0u;
  R(14)=R(15);
  ST32(R(15)+12,R(5));
  R(12)=R(10);
  R(13)=0x8c0156cau;
  R(12)+=0x78u;
  ST32(R(15)+20,R(6));
  R(6)=R(7);
  ST32(R(15)+16,R(7));
  R(14)+=0x24u;
  R(5)=LD32(R(15)+R(0));
  R(11)+=R(10);
  { c->pr=0x8c090a54u; R(4)=R(14); f_8c0156ca(c); }
  R(3)=0x214u;
  R(5)=R(15);
  R(2)=0x8c0163ceu;
  R(5)+=0x18u;
  R(3)+=R(10);
  ST32(R(15)+16,R(3));
  { c->pr=0x8c090a64u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c05e612u;
  R(5)=R(15);
  R(6)=LD32(R(15)+16);
  R(4)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c090a72u; R(4)+=0x18u; f_8c05e612(c); }
  R(0)=0x18u;
  c->fr[14]=0x00000000u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x1cu;
  R(5)=R(14);
  R(6)=R(12);
  fp_st(c,14,R(0)+R(15));
  { uint32_t tg=R(13); c->pr=0x8c090a84u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(11);
  { uint32_t tg=R(13); c->pr=0x8c090a8cu; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(10)+8);
  R(3)=0x1000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c090a98;
  {  goto L8c090d0a; }
L8c090a98:;
  R(0)=0xacu;
  R(3)=0x8c091ae2u;
  R(5)=LD32(R(15)+R(0));
  { c->pr=0x8c090aa2u; R(4)=LD32(R(15)+20); f_8c091ae2(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c090aac;
  {  goto L8c090d0a; }
L8c090aac:;
  R(5)=R(15);
  R(3)=0x8c015ea8u;
  R(7)=R(15);
  R(5)+=0x4u;
  R(7)+=0x8u;
  R(6)=R(15);
  { c->pr=0x8c090abcu; R(4)=R(12); f_8c015ea8(c); }
  R(2)=LD32(R(15));
  R(0)=0x8u;
  fp_st(c,14,R(0)+R(2));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,6,R(0)+R(2));
  fp_ld(c,4,R(3));
  R(0)=0x8u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(3));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(2));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(15));
  fp_mov(c,2,4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  c->fr[15]=0x3F800000u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
  R(0)=0x4u;
  R(3)=LD32(R(15)+8);
  R(2)=R(3);
  fp_st(c,14,R(2));
  fp_st(c,14,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x8u;
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15));
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(15)+4);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  fp_ld(c,2,R(0)+R(2));
  fp_ld(c,3,R(1));
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(2));
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(2)=LD32(R(15));
  R(1)=LD32(R(15)+8);
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(1));
  R(3)=LD32(R(15)+4);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  R(2)=R(3);
  fp_ld(c,5,R(0)+R(2));
  fp_ld(c,4,R(3));
  R(0)=0x8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  fp_ld(c,6,R(0)+R(3));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  R(0)=0x4u;
  R(5)=R(12);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(2));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(15)+4);
  fp_mov(c,2,4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15)+4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
  R(3)=0x8c091d40u;
  { c->pr=0x8c090bacu; R(4)=R(10); f_8c091d40(c); }
  R(5)=R(15);
  R(2)=0x8c015ea8u;
  R(7)=R(15);
  R(5)+=0x4u;
  R(7)+=0x8u;
  R(6)=R(15);
  { c->pr=0x8c090bbcu; R(4)=R(11); f_8c015ea8(c); }
  R(3)=LD32(R(15));
  R(0)=0x8u;
  {  goto L8c090c20; }
L8c090c20:;
  fp_st(c,14,R(0)+R(3));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,6,R(0)+R(2));
  fp_ld(c,4,R(3));
  R(0)=0x8u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(3));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(2));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(15));
  fp_mov(c,2,4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
  R(0)=0x4u;
  R(3)=LD32(R(15)+8);
  R(2)=R(3);
  fp_st(c,14,R(2));
  fp_st(c,14,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x8u;
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15));
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(15)+4);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15));
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(2));
  fp_ld(c,1,R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(3)=LD32(R(15)+4);
  fp_arith(c,2,1,3);
  R(0)=0x4u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(2)=LD32(R(15));
  R(1)=LD32(R(15)+8);
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(1));
  R(3)=LD32(R(15)+4);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  R(2)=R(3);
  fp_ld(c,5,R(0)+R(2));
  fp_ld(c,4,R(3));
  R(0)=0x8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  fp_ld(c,6,R(0)+R(3));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(2));
  R(0)=0x4u;
  fp_mov(c,2,4);
  R(5)=R(11);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(15)+4);
  fp_mov(c,2,4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15)+4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
  R(3)=0x8c091d40u;
  { c->pr=0x8c090d0au; R(4)=R(10); f_8c091d40(c); }
L8c090d0a:;
  R(4)=LD32(R(15)+12);
  R(6)=0x68u;
  R(3)=0x8c0685b4u;
  R(5)=R(11);
  { c->pr=0x8c090d16u; R(4)=LD32(R(4)+36); f_8c0685b4(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c090d1cu; R(4)=LD32(R(15)+12); f_8c064b7e(c); }
  R(1)=0x8cu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090d60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  c->fr[4]=0x00000000u;
  R(0)=0x8u;
  R(3)=0x8c05e55cu;
  c->fr[3]=0x3F800000u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  R(5)+=0x8u;
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c090d82u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(0)=0x18u;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0)+R(4));
  fp_unary(c,0,5);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c090da2;
  R(3)=LD32(R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c090da2;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c090da2:;
  R(0)=0x0u;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c090dac(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  c->fr[4]=0x00000000u;
  R(0)=0x8u;
  R(3)=0x8c05e55cu;
  c->fr[3]=0x3F800000u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  R(5)+=0x8u;
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c090dceu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(2)=LD32(R(15));
  R(0)=0x18u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0)+R(2));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c090de2;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c090de2:;
  R(0)=0x0u;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c090dec(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  ST32(R(15),R(4));
  R(4)=R(5);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  c->fr[3]=0x3F800000u;
  R(4)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c090e0eu; R(5)+=0x4u; f_8c05e55c(c); }
  R(4)=LD32(R(15));
  R(0)=0x18u;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0)+R(4));
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  R(0)=c->t;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c090e28(SH4Ctx *c) {
L8c090e28:;
  R(7)=0x68u;
  c->macl=R(6)*R(7);
  R(0)=0x2eu;
  R(1)=c->macl;
  R(1)+=R(5);
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(0)==99;
  R(7)=c->t;
  R(7)+=0xffffffffu;
  R(7)=0u-R(7);
  R(7)=R(7)&0xFF;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c090e4e;
  fp_ld(c,2,R(1));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c090e4e;
  { R(0)=0x1u; return; }
L8c090e4e:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(4);
  if(!c->t) goto L8c090e28;
  R(0)=0x0u;
  {  return; }
}
void f_8c090e4e(SH4Ctx *c) {
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(4);
  if(!c->t) { f_8c090e28(c); return; }
  R(0)=0x0u;
  {  return; }
}
void f_8c090e80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffc30cu;
  R(15)+=R(0);
  R(14)=0x0u;
  ST32(R(15),R(5));
  R(8)=R(4);
  R(5)=R(7);
  R(4)=R(14);
  R(13)=R(14);
  { R(10)=R(14); goto L8c090f12; }
L8c090ea2:;
  c->macl=R(10)*R(14);
  R(3)=LD32(R(15));
  R(0)=0x2eu;
  R(11)=c->macl;
  R(11)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(11)+R(0));
  c->t=(int32_t)R(0)==99;
  R(1)=c->t;
  R(1)+=0xffffffffu;
  R(1)=0u-R(1);
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c090f10;
  {  goto L8c090ef4; }
L8c090ec0:;
  c->macl=R(13)*R(14);
  R(3)=0x8c09c3dcu;
  R(2)=R(5);
  R(1)=c->macl;
  R(1)+=R(12);
  { c->pr=0x8c090eceu; R(0)=0x68u; f_8c09c3dc(c); }
  R(13)+=0x1u;
L8c090ed0:;
  R(4)+=0x1u;
  c->macl=R(4)*R(14);
  R(0)=0x2eu;
  R(5)=c->macl;
  R(5)+=R(7);
  R(0)=(int32_t)(int16_t)LD16(R(5)+R(0));
  c->t=(int32_t)R(0)==99;
  R(1)=c->t;
  R(1)+=0xffffffffu;
  R(1)=0u-R(1);
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c090eee;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c090ed0;
L8c090eee:;
  c->macl=R(4)*R(14);
  R(5)=c->macl;
  R(5)+=R(7);
L8c090ef4:;
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(5));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c090f00;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c090ec0;
L8c090f00:;
  c->macl=R(13)*R(14);
  R(3)=0x8c09c3dcu;
  R(2)=R(11);
  R(1)=c->macl;
  R(1)+=R(12);
  { c->pr=0x8c090f0eu; R(0)=0x68u; f_8c09c3dc(c); }
  R(13)+=0x1u;
L8c090f10:;
  R(10)+=0x1u;
L8c090f12:;
  R(2)=LD32(R(8));
  R(12)=R(15);
  R(12)+=0x4u;
  c->t=(int32_t)R(10)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(14)=0x68u; if(k) goto L8c090ea2; }
  {  goto L8c090f8a; }
L8c090f60:;
  c->macl=R(4)*R(14);
  R(0)=0x2eu;
  R(11)=c->macl;
  R(11)+=R(7);
  R(0)=(int32_t)(int16_t)LD16(R(11)+R(0));
  c->t=(int32_t)R(0)==99;
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c090f88;
  c->macl=R(13)*R(14);
  R(3)=0x8c09c3dcu;
  R(2)=R(11);
  R(1)=c->macl;
  R(1)+=R(12);
  { c->pr=0x8c090f86u; R(0)=0x68u; f_8c09c3dc(c); }
  R(13)+=0x1u;
L8c090f88:;
  R(4)+=0x1u;
L8c090f8a:;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c090f60;
  R(4)=0x4bu;
  c->t=(int32_t)R(13)>(int32_t)R(4);
  if(!c->t) goto L8c090f96;
  R(13)=R(4);
L8c090f96:;
  c->macl=R(13)*R(14);
  R(3)=0x8c0685b4u;
  R(5)=R(12);
  R(6)=c->macl;
  { c->pr=0x8c090fa2u; R(4)=LD32(R(15)); f_8c0685b4(c); }
  R(1)=0x3cf4u;
  ST32(R(8),R(13));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090f60(SH4Ctx *c) {
L8c090f60:;
  c->macl=R(4)*R(14);
  R(0)=0x2eu;
  R(11)=c->macl;
  R(11)+=R(7);
  R(0)=(int32_t)(int16_t)LD16(R(11)+R(0));
  c->t=(int32_t)R(0)==99;
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c090f88;
  c->macl=R(13)*R(14);
  R(3)=0x8c09c3dcu;
  R(2)=R(11);
  R(1)=c->macl;
  R(1)+=R(12);
  { c->pr=0x8c090f86u; R(0)=0x68u; f_8c09c3dc(c); }
  R(13)+=0x1u;
L8c090f88:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c090f60;
  R(4)=0x4bu;
  c->t=(int32_t)R(13)>(int32_t)R(4);
  if(!c->t) goto L8c090f96;
  R(13)=R(4);
L8c090f96:;
  c->macl=R(13)*R(14);
  R(3)=0x8c0685b4u;
  R(5)=R(12);
  R(6)=c->macl;
  { c->pr=0x8c090fa2u; R(4)=LD32(R(15)); f_8c0685b4(c); }
  R(1)=0x3cf4u;
  ST32(R(8),R(13));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c090fb8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(4)+36);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c090fc6;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c090fc6:;
  R(2)=0x8c092bf2u;
  { c->pr=0x8c090fccu;  f_8c092bf2(c); }
  R(3)=0x8c05689eu;
  { c->pr=0x8c090fd2u; R(4)=R(0); f_8c05689e(c); }
  R(0)&=0x40u;
  c->t=(int32_t)R(0)==64;
  R(0)=c->t;
  R(0)^=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c091000(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(12)=0xe0u;
  R(11)=R(4);
  R(11)+=0x78u;
  R(7)=R(15);
  R(12)+=R(4);
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c015ea8u;
  R(13)=R(12);
  R(14)=R(11);
  R(5)+=0xcu;
  R(6)+=0x10u;
  R(13)+=0x58u;
  R(14)+=0x58u;
  R(7)+=0x14u;
  { c->pr=0x8c09102eu; R(4)=R(12); f_8c015ea8(c); }
  R(6)=R(15);
  R(2)=0x8c015ea8u;
  R(7)=R(15);
  R(5)=R(15);
  R(7)+=0x8u;
  R(6)+=0x4u;
  { c->pr=0x8c09103eu; R(4)=R(11); f_8c015ea8(c); }
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(3)=LD32(R(15));
  R(0)=LD32(R(15)+12);
  fp_ld(c,3,R(3));
  fp_ld(c,2,R(0));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(3)=LD32(R(15));
  R(2)=0x4u;
  R(0)=LD32(R(15)+12);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(3)=LD32(R(15));
  R(2)=0x8u;
  R(0)=LD32(R(15)+12);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x8u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(3)=LD32(R(15)+4);
  R(0)=LD32(R(15)+16);
  fp_ld(c,3,R(3));
  fp_ld(c,2,R(0));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(3)=LD32(R(15)+4);
  R(2)=0x4u;
  R(0)=LD32(R(15)+16);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(3)=LD32(R(15)+4);
  R(2)=0x8u;
  R(0)=LD32(R(15)+16);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x8u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(3)=LD32(R(15)+8);
  R(0)=LD32(R(15)+20);
  fp_ld(c,3,R(3));
  fp_ld(c,2,R(0));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(3)=LD32(R(15)+8);
  R(2)=0x4u;
  R(0)=LD32(R(15)+20);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  R(3)=LD32(R(15)+8);
  R(2)=0x8u;
  R(0)=LD32(R(15)+20);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x8u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091120;
  { R(0)=0x0u; goto L8c091122; }
L8c091120:;
  R(0)=0x1u;
L8c091122:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c091130(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(5);
  c->t=(R(13)&R(13))==0;
  ST32(R(15),R(4));
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c091146; }
  { c->fr[0]=0x00000000u; goto L8c091192; }
L8c091146:;
  R(14)=LD32(R(13)+32);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c091154;
  R(3)=0x8c05a402u;
  { c->pr=0x8c091152u; R(4)=R(14); f_8c05a402(c); }
  R(4)=R(0);
L8c091154:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c09117a; }
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c091170;
  R(0)=LD32(R(14)+12);
  R(0)=(int32_t)(int16_t)LD16(R(0)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c091170;
  { R(2)=0x1u; goto L8c091172; }
L8c091170:;
  R(2)=0x0u;
L8c091172:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09117a;
  c->fr[4]=0x3F800000u;
L8c09117a:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c091182;
  R(0)=0x58u;
  fp_ld(c,4,R(0)+R(13));
L8c091182:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+8);
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c091190;
  R(2)=LD32(R(15));
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(2));
L8c091190:;
  fp_mov(c,0,4);
L8c091192:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09119c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(5);
  c->t=(R(13)&R(13))==0;
  ST32(R(15),R(4));
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c0911b2; }
  { c->fr[0]=0x00000000u; goto L8c0911fe; }
L8c0911b2:;
  R(14)=LD32(R(13)+32);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0911c0;
  R(3)=0x8c05a402u;
  { c->pr=0x8c0911beu; R(4)=R(14); f_8c05a402(c); }
  R(4)=R(0);
L8c0911c0:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c0911e6; }
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0911dc;
  R(0)=LD32(R(14)+12);
  R(0)=(int32_t)(int16_t)LD16(R(0)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x2u;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0911dc;
  { R(2)=0x1u; goto L8c0911de; }
L8c0911dc:;
  R(2)=0x0u;
L8c0911de:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0911e6;
  c->fr[4]=0x3F800000u;
L8c0911e6:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0911ee;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(13));
L8c0911ee:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+8);
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0911fc;
  R(2)=LD32(R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(2));
L8c0911fc:;
  fp_mov(c,0,4);
L8c0911fe:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c091208(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=R(6);
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  { R(13)=0x0u; goto L8c091324; }
L8c091240:;
  R(4)=0x68u;
  R(3)=LD32(R(15));
  c->macl=R(13)*R(4);
  R(0)=0x2eu;
  R(11)=c->macl;
  R(11)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(11)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c091322;
  fp_ld(c,5,R(11));
  c->fr[4]=0x3F800000u;
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0912ee;
  R(0)=0x3cu;
  fp_st(c,4,R(11));
  fp_ld(c,6,R(0)+R(11));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(11));
  R(0)=0x44u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(11));
  R(0)=0x3cu;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x10u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  R(6)=R(11);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(11));
  R(0)=0x8u;
  R(5)=R(15);
  R(14)=0x8c05e5f4u;
  fp_arith(c,2,2,3);
  R(5)+=0x8u;
  R(4)=R(15);
  R(6)+=0x48u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(11));
  R(0)=0xcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(11));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(14); c->pr=0x8c0912deu; R(4)+=0x8u; sh4_call(c,tg); }
  R(5)=R(15);
  R(14)=0x8c05e6eau;
  R(4)=R(11);
  R(5)+=0x8u;
  { c->pr=0x8c0912eau; R(4)+=0x10u; f_8c05e6ea(c); }
  {  goto L8c091322; }
L8c0912ee:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,5);
  if(c->t) goto L8c091322;
  fp_ld(c,2,R(11));
  R(0)=0x30u;
  fp_ld(c,1,R(12));
  fp_unary(c,0,2);
  fp_arith(c,0,2,4);
  fp_arith(c,2,2,1);
  fp_st(c,2,R(0)+R(11));
  R(0)=0x4u;
  fp_ld(c,2,R(11));
  fp_ld(c,1,R(0)+R(12));
  R(0)=0x34u;
  fp_unary(c,0,2);
  fp_arith(c,0,2,4);
  fp_arith(c,2,2,1);
  fp_st(c,2,R(0)+R(11));
  R(0)=0x8u;
  fp_ld(c,2,R(11));
  fp_ld(c,1,R(0)+R(12));
  R(0)=0x38u;
  fp_unary(c,0,2);
  fp_arith(c,0,2,4);
  fp_arith(c,2,2,1);
  fp_st(c,2,R(0)+R(11));
L8c091322:;
  R(13)+=0x1u;
L8c091324:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c091240;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
