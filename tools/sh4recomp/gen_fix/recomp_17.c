#include "recomp_decls.h"
void f_8c09b1a0(SH4Ctx *c) {
  R(6)=LD32(R(5));
  R(7)=LD32(R(4));
  R(6)+=R(7);
  c->t=R(6)>=R(7);
  if(c->t) goto L8c09b1b0;
  R(2)=LD32(R(4)+4);
  R(2)+=0x1u;
  ST32(R(4)+4,R(2));
L8c09b1b0:;
  ST32(R(4),R(6));
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(5)+4);
  R(2)+=R(3);
  { ST32(R(4)+4,R(2)); return; }
}
void f_8c09b1bc(SH4Ctx *c) {
  R(0)=LD32(R(4)+4);
  R(1)=LD32(R(5)+4);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c09b1d2;
  R(2)=LD32(R(4));
  R(1)=0x0u;
  R(3)=LD32(R(5));
  R(2)-=R(3);
  ST32(R(4),R(2));
  { ST32(R(4)+4,R(1)); goto L8c09b1fa; }
L8c09b1d2:;
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  c->t=R(3)>=R(2);
  if(!c->t) goto L8c09b1e4;
  R(1)=LD32(R(4));
  R(3)=LD32(R(5));
  R(1)-=R(3);
  { ST32(R(4),R(1)); goto L8c09b1f2; }
L8c09b1e4:;
  R(2)=LD32(R(4));
  R(3)=LD32(R(5));
  R(2)-=R(3);
  ST32(R(4),R(2));
  R(1)=LD32(R(4)+4);
  R(1)+=0xffffffffu;
  ST32(R(4)+4,R(1));
L8c09b1f2:;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(5)+4);
  R(2)-=R(3);
  ST32(R(4)+4,R(2));
L8c09b1fa:;
  {  return; }
}
void f_8c09b1fe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0c95c2u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09b262;
  R(3)=0x8c0686b8u;
  R(4)=0x8c2e7374u;
  R(6)=0x240u;
  { c->pr=0x8c09b218u; R(5)=0x0u; f_8c0686b8(c); }
  R(3)=0x8c0c95c0u;
  R(2)=0x0u;
  R(12)=0x8c09c164u;
  R(13)=0x8c2e7368u;
  ST16(R(3),R(2));
  { c->pr=0x8c09b226u; R(4)=R(2); f_8c09c164(c); }
  ST32(R(13),R(0));
  { uint32_t tg=R(12); c->pr=0x8c09b22cu; R(4)=0x1u; sh4_call(c,tg); }
  ST32(R(13)+4,R(0));
  { uint32_t tg=R(12); c->pr=0x8c09b232u; R(4)=0x2u; sh4_call(c,tg); }
  R(3)=0x8c0c95c4u;
  ST32(R(13)+8,R(0));
  R(2)=(int32_t)(int16_t)LD16(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09b25c;
  R(1)=0x8c0c955cu;
  R(0)=0xffu;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(0);
  if(!c->t) goto L8c09b256;
  R(2)=0x8c0124a6u;
  R(4)=0x8c0c9560u;
  R(5)=0x8c0c9570u;
  { c->pr=0x8c09b252u;  f_8c0124a6(c); }
  R(3)=0x8c0c955cu;
  ST8(R(3),R(0));
L8c09b256:;
  R(1)=0x8c0c95c4u;
  R(2)=0x1u;
  ST16(R(1),R(2));
L8c09b25c:;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(3)+=0x1u;
  ST16(R(14),R(3));
L8c09b262:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09b2c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c95c2u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c09b350;
  R(13)=0x8c2e7374u;
  R(11)=0x0u;
  R(12)=0x10u;
  R(14)=R(11);
L8c09b2da:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)=R(2);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)+=R(13);
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09b2f2;
  { c->pr=0x8c09b2f2u; R(4)=R(14); f_8c09be08(c); }
L8c09b2f2:;
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=R(3);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(13);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09b30c;
  { c->pr=0x8c09b30cu; R(4)=R(14); f_8c09be08(c); }
L8c09b30c:;
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=R(3);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(13);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09b326;
  { c->pr=0x8c09b326u; R(4)=R(14); f_8c09be08(c); }
L8c09b326:;
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=R(3);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(13);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09b340;
  { c->pr=0x8c09b340u; R(4)=R(14); f_8c09be08(c); }
L8c09b340:;
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(12);
  if(!c->t) goto L8c09b2da;
  R(2)=0x8c0c95c2u;
  R(3)=0x8c0c95c0u;
  ST16(R(3),R(11));
  ST16(R(2),R(11));
L8c09b350:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09b380(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0xffffffffu;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0c95c2u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(14)=0xffu;
  R(3)=0x8c0c955cu;
  c->t=(R(2)&R(2))==0;
  R(10)=0x8c012658u;
  R(9)=0x8c0bd0b8u;
  { uint32_t k=!c->t; R(13)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c09b3b8; }
  R(2)=0x96u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x2u; goto L8c09b476; }
L8c09b3b8:;
  R(8)=0x8c0c95c0u;
  R(0)=(int32_t)(int16_t)LD16(R(8));
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c09b3d2;
  R(2)=0x9bu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x7u; goto L8c09b476; }
L8c09b3d2:;
  R(2)=0x2u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c09b420;
  R(1)=0xa0u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x3u; goto L8c09b476; }
L8c09b420:;
  R(0)=0x8c2e7368u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09b43e;
  R(3)=0xa5u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x4u; goto L8c09b476; }
L8c09b43e:;
  R(7)=0x8c2e7374u;
  R(6)=0x10u;
  R(5)=R(12);
L8c09b444:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=R(2);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)+=R(7);
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09b460;
  R(5)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  if(!c->t) goto L8c09b444;
L8c09b460:;
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c09b484;
  R(2)=0xadu;
  R(7)=0x7u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
L8c09b476:;
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c09b47eu; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09b4a0; }
L8c09b484:;
  R(6)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=R(6);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(0)=0x1u;
  R(6)+=R(7);
  ST16(R(6),R(4));
  ST16(R(6)+2,R(0));
  R(0)=R(5);
  R(3)=(int32_t)(int16_t)LD16(R(8));
  R(3)+=0x1u;
  ST16(R(8),R(3));
L8c09b4a0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09b4e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(1)=0x8c0c95c2u;
  R(10)=R(4);
  R(3)=0x8c0c955cu;
  R(9)=0xffffffffu;
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(12)=0x0u;
  R(14)=0xffu;
  R(8)=0x8c012658u;
  c->t=(R(2)&R(2))==0;
  R(11)=0x8c0bd0b8u;
  { uint32_t k=!c->t; R(5)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c09b51c; }
  R(2)=0xc3u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x2u; goto L8c09b598; }
L8c09b51c:;
  R(2)=0x10u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(10);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c09b536;
  R(1)=0xc8u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09b598; }
L8c09b536:;
  R(13)=(uint32_t)(int32_t)(int16_t)R(10);
  R(2)=0x8c2e7374u;
  R(3)=R(13);
  R(13)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  R(13)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(13)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09b580;
  R(1)=0xcdu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09b598; }
L8c09b580:;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(2)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c09b5a4;
  R(1)=0xd2u;
  R(7)=0x6u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
L8c09b598:;
  R(6)=0x0u;
  { uint32_t tg=R(8); c->pr=0x8c09b59eu; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09b5e2; }
L8c09b5a4:;
  R(3)=0x8c09c1c0u;
  R(4)=(int32_t)(int16_t)LD16(R(13));
  { c->pr=0x8c09b5acu; R(5)=R(15); f_8c09c1c0(c); }
  R(2)=LD32(R(15));
  ST32(R(13)+4,R(2));
  R(3)=LD32(R(15)+4);
  ST32(R(13)+8,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(13)+2);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c09b5ce;
  R(4)=(uint32_t)(int32_t)(int16_t)R(10);
  R(2)=0x8c2e7374u;
  R(3)=R(4);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(2);
  ST32(R(4)+20,R(12));
  ST32(R(4)+24,R(12));
L8c09b5ce:;
  R(10)=(uint32_t)(int32_t)(int16_t)R(10);
  R(0)=0x8c2e7376u;
  R(3)=R(10);
  R(10)<<=2;
  c->t=R(10)>>31;R(10)<<=1;
  R(10)+=R(3);
  R(10)<<=2;
  R(2)=0x2u;
  ST16(R(10)+R(0),R(2));
  R(0)=0x0u;
L8c09b5e2:;
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
void f_8c09b5f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(1)=0x8c0c95c2u;
  R(14)=0x0u;
  R(3)=0x8c0c955cu;
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(8)=0x8c012658u;
  R(9)=0x8c0bd0b8u;
  c->t=(R(2)&R(2))==0;
  R(12)=0xffu;
  { uint32_t k=!c->t; R(10)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c09b680; }
  R(2)=0xf8u;
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x2u; goto L8c09b6e2; }
L8c09b680:;
  R(3)=0x10u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c09b69c;
  R(1)=0xfdu;
  R(2)=0xffffffffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09b6e2; }
L8c09b69c:;
  R(13)=(uint32_t)(int32_t)(int16_t)R(4);
  R(11)=0x8c2e7374u;
  R(3)=R(13);
  R(13)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  R(2)=R(13);
  R(2)+=R(11);
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09b6c8;
  R(2)=0x102u;
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09b6e2; }
L8c09b6c8:;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c09b720;
  R(1)=0x107u;
  R(3)=0xffffffffu;
  R(7)=0x6u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
L8c09b6e2:;
  R(5)=R(10);
  R(6)=0x0u;
  { uint32_t tg=R(8); c->pr=0x8c09b6eau; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09b766; }
L8c09b720:;
  R(5)=R(13);
  R(5)+=R(11);
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=(int32_t)(int16_t)LD16(R(5)); if(k) goto L8c09b73e; }
  R(2)=0x8c09c1c0u;
  { c->pr=0x8c09b732u; R(5)=R(15); f_8c09c1c0(c); }
  R(3)=LD32(R(15));
  R(4)=R(13);
  R(4)+=R(11);
  ST32(R(4)+12,R(3));
  R(2)=LD32(R(15)+4);
  ST32(R(4)+16,R(2));
L8c09b73e:;
  R(0)=R(13);
  R(5)=R(11);
  R(0)+=R(5);
  R(0)=(int32_t)(int16_t)LD16(R(0)+2);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c09b75e;
  R(4)=R(13);
  R(4)+=R(5);
  R(2)=LD32(R(4)+20);
  ST32(R(4)+12,R(2));
  R(3)=LD32(R(4)+24);
  ST32(R(4)+16,R(3));
  ST32(R(4)+20,R(14));
  ST32(R(4)+24,R(14));
  ST32(R(4)+4,R(14));
  ST32(R(4)+8,R(14));
L8c09b75e:;
  R(0)=0x3u;
  R(13)+=R(11);
  ST16(R(13)+2,R(0));
  R(0)=0x0u;
L8c09b766:;
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
void f_8c09b77a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(1)=0x8c0c95c2u;
  R(10)=0xffffffffu;
  R(3)=0x8c0c955cu;
  R(9)=0x0u;
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(14)=0xffu;
  R(8)=0x8c012658u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(12)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c09b7b4; }
  R(2)=0x138u;
  R(3)=0x8c0bd0b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x2u; goto L8c09b846; }
L8c09b7b4:;
  R(3)=0x10u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c09b800;
  R(1)=0x13du;
  R(2)=0x8c0bd0b8u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09b846; }
L8c09b800:;
  R(13)=(uint32_t)(int32_t)(int16_t)R(4);
  R(11)=0x8c2e7374u;
  R(3)=R(13);
  R(13)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  R(2)=R(13);
  R(2)+=R(11);
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09b82c;
  R(2)=0x142u;
  R(3)=0x8c0bd0b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09b846; }
L8c09b82c:;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c09b854;
  R(1)=0x147u;
  R(7)=0x6u;
  R(3)=0x8c0bd0b8u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
L8c09b846:;
  R(5)=R(12);
  R(6)=0x0u;
  { uint32_t tg=R(8); c->pr=0x8c09b84eu; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09b89a; }
L8c09b854:;
  R(5)=R(13);
  R(5)+=R(11);
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=(int32_t)(int16_t)LD16(R(5)); if(k) goto L8c09b892; }
  R(2)=0x8c09c1c0u;
  { c->pr=0x8c09b866u; R(5)=R(15); f_8c09c1c0(c); }
  R(14)=R(13);
  R(14)+=R(11);
  R(3)=LD32(R(14)+4);
  R(5)=R(15);
  R(5)+=0x8u;
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(14)+8);
  ST32(R(15)+12,R(2));
  { c->pr=0x8c09b87au; R(4)=R(15); f_8c09b1bc(c); }
  R(2)=LD32(R(14)+20);
  R(5)=R(15);
  R(5)+=0x8u;
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(14)+24);
  ST32(R(15)+12,R(3));
  { c->pr=0x8c09b88au; R(4)=R(15); f_8c09b1a0(c); }
  R(2)=LD32(R(15));
  ST32(R(14)+20,R(2));
  R(3)=LD32(R(15)+4);
  ST32(R(14)+24,R(3));
L8c09b892:;
  R(0)=0x4u;
  R(13)+=R(11);
  ST16(R(13)+2,R(0));
  R(0)=0x0u;
L8c09b89a:;
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
void f_8c09b800(SH4Ctx *c) {
  R(13)=(uint32_t)(int32_t)(int16_t)R(4);
  R(11)=0x8c2e7374u;
  R(3)=R(13);
  R(13)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  R(2)=R(13);
  R(2)+=R(11);
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09b82c;
  R(2)=0x142u;
  R(3)=0x8c0bd0b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09b846; }
L8c09b82c:;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(2)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c09b854;
  R(1)=0x147u;
  R(7)=0x6u;
  R(3)=0x8c0bd0b8u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
L8c09b846:;
  R(5)=R(12);
  R(6)=0x0u;
  { uint32_t tg=R(8); c->pr=0x8c09b84eu; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09b89a; }
L8c09b854:;
  R(5)=R(13);
  R(5)+=R(11);
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=(int32_t)(int16_t)LD16(R(5)); if(k) goto L8c09b892; }
  R(2)=0x8c09c1c0u;
  { c->pr=0x8c09b866u; R(5)=R(15); f_8c09c1c0(c); }
  R(14)=R(13);
  R(14)+=R(11);
  R(3)=LD32(R(14)+4);
  R(5)=R(15);
  R(5)+=0x8u;
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(14)+8);
  ST32(R(15)+12,R(2));
  { c->pr=0x8c09b87au; R(4)=R(15); f_8c09b1bc(c); }
  R(2)=LD32(R(14)+20);
  R(5)=R(15);
  R(5)+=0x8u;
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(14)+24);
  ST32(R(15)+12,R(3));
  { c->pr=0x8c09b88au; R(4)=R(15); f_8c09b1a0(c); }
  R(2)=LD32(R(15));
  ST32(R(14)+20,R(2));
  R(3)=LD32(R(15)+4);
  ST32(R(14)+24,R(3));
L8c09b892:;
  R(0)=0x4u;
  R(13)+=R(11);
  ST16(R(13)+2,R(0));
  R(0)=0x0u;
L8c09b89a:;
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
void f_8c09b8e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0xffffffffu;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x0u;
  R(1)=0x8c0c95c2u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(14)=0xffu;
  R(3)=0x8c0c955cu;
  c->t=(R(2)&R(2))==0;
  R(9)=0x8c012658u;
  R(8)=0x8c0bd0b8u;
  { uint32_t k=!c->t; R(13)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c09b918; }
  R(2)=0x174u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x2u; goto L8c09b95a; }
L8c09b918:;
  R(2)=0x10u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c09b932;
  R(1)=0x179u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09b95a; }
L8c09b932:;
  R(12)=(uint32_t)(int32_t)(int16_t)R(4);
  R(2)=0x8c2e7374u;
  R(3)=R(12);
  R(12)<<=2;
  c->t=R(12)>>31;R(12)<<=1;
  R(12)+=R(3);
  R(12)<<=2;
  R(12)+=R(2);
  R(3)=(int32_t)(int16_t)LD16(R(12));
  R(1)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(1);
  if(!c->t) goto L8c09b9a0;
  R(0)=0x17eu;
  R(7)=0x6u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
L8c09b95a:;
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(9); c->pr=0x8c09b962u; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09b9f6; }
L8c09b9a0:;
  R(3)=LD32(R(5));
  R(4)=(int32_t)(int16_t)LD16(R(12));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c09b9b4; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c09b9b4:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e7368u;
  R(4)<<=2;
  R(3)=LD32(R(4)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,2); if(k) goto L8c09b9cc; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[1]=c->fpul;
  fp_arith(c,0,2,1);
L8c09b9cc:;
  R(0)=0x8c09ba6cu;
  fp_mov(c,4,3);
  fp_ld(c,0,R(0));
  R(0)=0x8c09ba70u;
  fp_ld(c,3,R(0));
  fp_arith(c,3,0,2);
  fp_arith(c,2,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c09b9e8;
  R(0)=0x8c09ba74u;
  fp_mov(c,3,4);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,3,2); goto L8c09b9ea; }
L8c09b9e8:;
  fp_mov(c,3,4);
L8c09b9ea:;
  fp_ftrc(c,3);
  R(0)=0x4u;
  R(2)=c->fpul;
  ST32(R(12)+20,R(2));
  ST16(R(12)+2,R(0));
  R(0)=0x0u;
L8c09b9f6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09ba08(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(1)=0x8c0c95c2u;
  R(14)=R(5);
  R(12)=0xffu;
  R(11)=0x0u;
  R(3)=0x8c0c955cu;
  R(10)=0xffffffffu;
  R(8)=0x8c0bd0b8u;
  R(9)=0x8c012658u;
  ST16(R(15),R(4));
  R(2)=(int32_t)(int16_t)LD16(R(1));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(5)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c09baa0; }
  R(2)=0x19bu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x2u; goto L8c09bafa; }
L8c09baa0:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(2)=0x10u;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c09baba;
  R(1)=0x1a0u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09bafa; }
L8c09baba:;
  R(13)=(int32_t)(int16_t)LD16(R(15));
  R(2)=0x8c2e7374u;
  R(3)=R(13);
  R(13)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  R(13)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(13)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09bae2;
  R(1)=0x1a5u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09bafa; }
L8c09bae2:;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(2)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c09bb40;
  R(1)=0x1aau;
  R(7)=0x6u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
L8c09bafa:;
  R(6)=0x0u;
  { uint32_t tg=R(9); c->pr=0x8c09bb00u; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09bce6; }
L8c09bb40:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+2);
  R(4)=R(0);
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09bb5a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c09bb6c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09bb88;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c09bb88;
  {  goto L8c09bb8c; }
L8c09bb5a:;
  R(3)=0x8c09c1c0u;
  R(5)=R(14);
  { c->pr=0x8c09bb62u; R(4)=(int32_t)(int16_t)LD16(R(13)); f_8c09c1c0(c); }
  R(2)=LD32(R(13)+4);
  ST32(R(15)+20,R(2));
  R(3)=LD32(R(13)+8);
  { ST32(R(15)+24,R(3)); goto L8c09bb7c; }
L8c09bb6c:;
  R(3)=LD32(R(13)+12);
  ST32(R(14),R(3));
  R(2)=LD32(R(13)+16);
  ST32(R(14)+4,R(2));
  R(3)=LD32(R(13)+4);
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(13)+8);
  ST32(R(15)+24,R(2));
L8c09bb7c:;
  R(5)=R(15);
  R(5)+=0x14u;
  { c->pr=0x8c09bb84u; R(4)=R(14); f_8c09b1bc(c); }
  {  goto L8c09bb8c; }
L8c09bb88:;
  ST32(R(14)+4,R(11));
  ST32(R(14),R(11));
L8c09bb8c:;
  R(13)=(int32_t)(int16_t)LD16(R(15));
  R(5)=R(15);
  R(2)=0x8c2e7374u;
  R(5)+=0x14u;
  R(3)=R(13);
  R(13)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  R(13)+=R(2);
  R(3)=LD32(R(13)+20);
  ST32(R(15)+20,R(3));
  R(1)=LD32(R(13)+24);
  ST32(R(15)+24,R(1));
  { c->pr=0x8c09bbacu; R(4)=R(14); f_8c09b1a0(c); }
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(0)=0x8c2e7368u;
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c09bbc4; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c09bbc4:;
  R(0)=0x8c09bc70u;
  fp_mov(c,4,3);
  fp_ld(c,2,R(0));
  R(0)=0x8c09bc74u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,2,4,2);
  fp_unary(c,0,3);
  fp_ld(c,1,R(0));
  fp_arith(c,0,4,3);
  fp_unary(c,1,4);
  fp_cmp(c,1,4,1);
  if(c->t) goto L8c09bbe0;
  {  goto L8c09bce4; }
L8c09bbe0:;
  R(2)=LD32(R(14));
  c->fr[0]=0x00000000u;
  c->fpul=R(2);
  fp_float(c,2);
  fp_cmp(c,1,0,2);
  { uint32_t k=!c->t; fp_mov(c,4,2); if(k) goto L8c09bbf8; }
  R(0)=0x8c09bc6cu;
  fp_mov(c,5,4);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,5,3); goto L8c09bbfa; }
L8c09bbf8:;
  fp_mov(c,5,4);
L8c09bbfa:;
  R(2)=LD32(R(14)+4);
  c->fr[2]=0x00000000u;
  c->fpul=R(2);
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c09bc12; }
  R(0)=0x8c09bc6cu;
  fp_mov(c,6,4);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,6,3); goto L8c09bc14; }
L8c09bc12:;
  fp_mov(c,6,4);
L8c09bc14:;
  fp_arith(c,2,5,15);
  R(0)=0x8c09bc6cu;
  fp_ld(c,7,R(0));
  R(0)=0x8c09bc78u;
  fp_ld(c,4,R(0));
  fp_mov(c,8,5);
  fp_arith(c,3,8,7);
  fp_cmp(c,1,8,4);
  { uint32_t k=!c->t; fp_arith(c,2,6,15); if(k) goto L8c09bc32; }
  R(0)=0x8c09bc7cu;
  fp_mov(c,3,8);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,3,2); goto L8c09bc34; }
L8c09bc32:;
  fp_mov(c,3,8);
L8c09bc34:;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(3)=R(2);
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  ST32(R(15)+16,R(2));
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c09bc4c; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c09bc4c:;
  fp_arith(c,2,3,7);
  fp_mov(c,8,5);
  fp_arith(c,1,8,3);
  fp_cmp(c,1,8,4);
  if(!c->t) goto L8c09bc80;
  R(0)=0x8c09bc7cu;
  fp_mov(c,3,8);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,3,2); goto L8c09bc82; }
L8c09bc80:;
  fp_mov(c,3,8);
L8c09bc82:;
  fp_ftrc(c,3);
  fp_cmp(c,1,6,4);
  R(2)=c->fpul;
  ST32(R(15)+12,R(2));
  { uint32_t k=!c->t; fp_mov(c,5,6); if(k) goto L8c09bc98; }
  R(0)=0x8c09bd00u;
  fp_mov(c,3,5);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,3,2); goto L8c09bc9a; }
L8c09bc98:;
  fp_mov(c,3,5);
L8c09bc9a:;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(3)=R(2);
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  ST32(R(15)+8,R(2));
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c09bcb2; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c09bcb2:;
  fp_arith(c,1,6,3);
  fp_mov(c,5,6);
  fp_arith(c,2,5,7);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c09bcc6;
  R(0)=0x8c09bd00u;
  fp_mov(c,3,5);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,3,2); goto L8c09bcc8; }
L8c09bcc6:;
  fp_mov(c,3,5);
L8c09bcc8:;
  fp_ftrc(c,3);
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x4u;
  R(2)=c->fpul;
  ST32(R(15)+4,R(2));
  { c->pr=0x8c09bcd8u; R(4)+=0xcu; f_8c09b1a0(c); }
  R(2)=R(15);
  R(2)+=0xcu;
  R(1)=LD32(R(2)+4);
  R(3)=LD32(R(2));
  ST32(R(14),R(3));
  ST32(R(14)+4,R(1));
L8c09bce4:;
  R(0)=0x0u;
L8c09bce6:;
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
void f_8c09bd20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0c95c2u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(8)=0xffffffffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(3)=0x8c0c955cu;
  R(12)=0xffu;
  c->t=(R(2)&R(2))==0;
  R(9)=0x8c0bd0b8u;
  R(10)=0x8c012658u;
  { uint32_t k=!c->t; R(11)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c09bd56; }
  R(2)=0x20bu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x2u; goto L8c09bdd8; }
L8c09bd56:;
  R(2)=0x10u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c09bd70;
  R(1)=0x210u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09bdd8; }
L8c09bd70:;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  R(2)=0x8c2e7374u;
  R(3)=R(1);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(1)<<=2;
  R(1)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09bdc0;
  R(1)=0x215u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x5u; goto L8c09bdd8; }
L8c09bdc0:;
  R(3)=(int32_t)(int16_t)LD16(R(1));
  R(2)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c09bde6;
  R(1)=0x21au;
  R(7)=0x6u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
L8c09bdd8:;
  R(5)=R(11);
  R(6)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c09bde0u; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09bdf8; }
L8c09bde6:;
  R(0)=0x1u;
  ST16(R(1)+2,R(0));
  R(0)=0x0u;
  ST32(R(1)+4,R(14));
  ST32(R(1)+8,R(14));
  ST32(R(1)+12,R(14));
  ST32(R(1)+16,R(14));
  ST32(R(1)+20,R(14));
  ST32(R(1)+24,R(14));
L8c09bdf8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09be08(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  R(1)=0x8c0c95c2u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(3)=0x8c0c955cu;
  R(13)=0xffu;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(12)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c09be60; }
  R(2)=0x234u;
  R(1)=0xffffffffu;
  R(3)=0x8c0bd0b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x2u; goto L8c09be90; }
L8c09be60:;
  R(3)=0x10u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c09be7c;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e7376u;
  R(2)=R(1);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(2);
  R(1)<<=2;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09bea0;
L8c09be7c:;
  R(3)=0x23au;
  R(1)=0xffffffffu;
  R(2)=0x8c0bd0b8u;
  R(7)=0x5u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
L8c09be90:;
  R(3)=0x8c012658u;
  R(5)=R(12);
  R(6)=0x0u;
  { c->pr=0x8c09be9au; R(4)=0x1u; f_8c012658(c); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09beba; }
L8c09bea0:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e7376u;
  R(3)=R(4);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  ST16(R(4)+R(0),R(14));
  R(0)=R(14);
  R(4)=0x8c0c95c0u;
  R(3)=(int32_t)(int16_t)LD16(R(4));
  R(3)+=0xffffffffu;
  ST16(R(4),R(3));
L8c09beba:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09be60(SH4Ctx *c) {
  R(3)=0x10u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c09be7c;
  R(1)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e7376u;
  R(2)=R(1);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(2);
  R(1)<<=2;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09bea0;
L8c09be7c:;
  R(3)=0x23au;
  R(1)=0xffffffffu;
  R(2)=0x8c0bd0b8u;
  R(7)=0x5u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  R(5)=R(12);
  R(6)=0x0u;
  { c->pr=0x8c09be9au; R(4)=0x1u; f_8c012658(c); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09beba; }
L8c09bea0:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e7376u;
  R(3)=R(4);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  ST16(R(4)+R(0),R(14));
  R(0)=R(14);
  R(4)=0x8c0c95c0u;
  R(3)=(int32_t)(int16_t)LD16(R(4));
  R(3)+=0xffffffffu;
  ST16(R(4),R(3));
L8c09beba:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09bec4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0xffffffffu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  R(1)=0x8c0c95c2u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(14)=0xffu;
  R(3)=0x8c0c955cu;
  c->t=(R(2)&R(2))==0;
  R(10)=0x8c012658u;
  R(9)=0x8c0bd0b8u;
  { uint32_t k=!c->t; R(13)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c09bf20; }
  R(2)=0x250u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  { R(7)=0x2u; goto L8c09bf46; }
L8c09bf20:;
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  R(2)=0x8c2e7374u;
  R(3)=R(6);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(6)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(6)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09bf54;
  R(1)=0x255u;
  R(7)=0x5u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
L8c09bf46:;
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c09bf4eu; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x7fffu;
  { R(15)+=0x18u; goto L8c09bf68; }
L8c09bf54:;
  R(4)=(int32_t)(int16_t)LD16(R(6));
  R(2)=0x2u;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(c->t) goto L8c09bf66;
  R(0)=0x8c2e7368u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)<<=2;
  R(1)=LD32(R(4)+R(0));
  ST32(R(5),R(1));
L8c09bf66:;
  R(0)=0x0u;
L8c09bf68:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09bf78(SH4Ctx *c) {
  R(2)=0x8c0c95c2u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09bfe0;
  R(0)=0x26fu;
  R(2)=0x0u;
  R(3)=0x8c0bd0b8u;
  R(7)=0x2u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0c955cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(2)=0x8c012658u;
  { c->pr=0x8c09bfa6u; R(4)=0x1u; f_8c012658(c); }
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x7fffu;
  {  return; }
L8c09bfe0:;
  R(3)=0x8c09c208u;
  { c->pr=0x8c09bfe6u;  f_8c09c208(c); }
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09bfee(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c95c2u;
  ST32(R(15),R(4));
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09c02e;
  R(0)=0x27fu;
  R(2)=0x0u;
  R(3)=0x8c0bd0b8u;
  R(7)=0x2u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0c955cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(2)=0x8c012658u;
  { c->pr=0x8c09c022u; R(4)=0x1u; f_8c012658(c); }
  R(15)+=0x18u;
  R(0)=0x7fffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
L8c09c02e:;
  R(2)=0x8c09c238u;
  { c->pr=0x8c09c034u; R(8)=LD32(R(15)); f_8c09c238(c); }
  ST32(R(8),R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c09c02e(SH4Ctx *c) {
  R(2)=0x8c09c238u;
  { c->pr=0x8c09c034u; R(8)=LD32(R(15)); f_8c09c238(c); }
  ST32(R(8),R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c09c040(SH4Ctx *c) {
  R(0)=0x7fffu;
  {  return; }
}
void f_8c09c160(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c09c164(SH4Ctx *c) {
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  R(5)=0xbebc2u;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09c178;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09c17e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09c17e;
  {  goto L8c09c182; }
L8c09c178:;
  R(4)=0x3e8u;
  {  goto L8c09c184; }
L8c09c17e:;
  { R(4)=R(5); goto L8c09c184; }
L8c09c182:;
  R(4)=0x0u;
L8c09c184:;
  { R(0)=R(4); return; }
}
void f_8c09c1c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(0)==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c09c1da; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09c1da;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09c1da;
  {  goto L8c09c1fa; }
L8c09c1da:;
  R(3)=0x8c0d115eu;
  R(13)=0x8c0c95c8u;
  { c->pr=0x8c09c1e2u;  f_8c0d115e(c); }
  ST32(R(14),R(0));
  R(2)=LD32(R(13));
  c->t=R(0)>=R(2);
  if(c->t) goto L8c09c1f0;
  R(1)=LD32(R(13)+4);
  R(1)+=0x1u;
  ST32(R(13)+4,R(1));
L8c09c1f0:;
  R(3)=LD32(R(14));
  ST32(R(13),R(3));
  R(2)=LD32(R(13)+4);
  { ST32(R(14)+4,R(2)); goto L8c09c200; }
L8c09c1fa:;
  R(4)=0x0u;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(4));
L8c09c200:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09c208(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c0d115eu;
  { c->pr=0x8c09c218u; ST32(R(15),R(4)); f_8c0d115e(c); }
  R(12)=0x8c0d1168u;
  R(13)=R(0);
L8c09c21c:;
  { uint32_t tg=R(14); c->pr=0x8c09c220u;  sh4_call(c,tg); }
  R(5)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c09c226u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15));
  c->t=R(0)>=R(2);
  if(!c->t) goto L8c09c21c;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09c238(SH4Ctx *c) {
  R(0)=0xbebc2u;
  {  return; }
}
void f_8c09c23e(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c09c280(SH4Ctx *c) {
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09c320;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)=R(0);
  c->m=0;c->q=0;c->t=0;
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(4));
  if(!c->t) goto L8c09c318;
  R(0)=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
L8c09c318:;
  R(0)+=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
L8c09c320:;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c129ae4u;
  R(2)=0x44eu;
  R(0)=0x0u;
  ST32(R(1),R(2));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
}
void f_8c09c338(SH4Ctx *c) {
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c398u;
  R(3)=LD32(R(3)+R(0));
  R(0)+=0xfffffffcu;
  { uint32_t tg=R(3); R(0)=LD32(R(2)+R(0)); sh4_call(c,tg); return; }
}
void f_8c09c344(SH4Ctx *c) {
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c398u;
  R(3)=LD32(R(3)+R(0));
  R(0)+=0xfffffffcu;
  { uint32_t tg=R(3); R(3)=LD32(R(2)+R(0)); switch(tg){ case 0x8c09c356u: goto L8c09c356; case 0x8c09c35au: goto L8c09c35a; case 0x8c09c35eu: goto L8c09c35e; case 0x8c09c362u: goto L8c09c362; case 0x8c09c366u: goto L8c09c366; case 0x8c09c36au: goto L8c09c36a; case 0x8c09c36eu: goto L8c09c36e; case 0x8c09c372u: goto L8c09c372; case 0x8c09c376u: goto L8c09c376; case 0x8c09c37au: goto L8c09c37a; case 0x8c09c37eu: goto L8c09c37e; case 0x8c09c382u: goto L8c09c382; case 0x8c09c386u: goto L8c09c386; case 0x8c09c38au: goto L8c09c38a; case 0x8c09c38eu: goto L8c09c38e; case 0x8c09c392u: goto L8c09c392; case 0x8c09c394u: goto L8c09c394; default: sh4_bad_jump(c,0x8c09c34cu,tg); return; } }
L8c09c356:;
  R(3)=LD32(R(2)+56);
  ST32(R(1)+60,R(0));
L8c09c35a:;
  R(0)=LD32(R(2)+52);
  ST32(R(1)+56,R(3));
L8c09c35e:;
  R(3)=LD32(R(2)+48);
  ST32(R(1)+52,R(0));
L8c09c362:;
  R(0)=LD32(R(2)+44);
  ST32(R(1)+48,R(3));
L8c09c366:;
  R(3)=LD32(R(2)+40);
  ST32(R(1)+44,R(0));
L8c09c36a:;
  R(0)=LD32(R(2)+36);
  ST32(R(1)+40,R(3));
L8c09c36e:;
  R(3)=LD32(R(2)+32);
  ST32(R(1)+36,R(0));
L8c09c372:;
  R(0)=LD32(R(2)+28);
  ST32(R(1)+32,R(3));
L8c09c376:;
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
L8c09c37a:;
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
L8c09c37e:;
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
L8c09c382:;
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
L8c09c386:;
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
L8c09c38a:;
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
L8c09c38e:;
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
L8c09c392:;
  ST32(R(1),R(3));
L8c09c394:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c356(SH4Ctx *c) {
  R(3)=LD32(R(2)+56);
  ST32(R(1)+60,R(0));
  R(0)=LD32(R(2)+52);
  ST32(R(1)+56,R(3));
  R(3)=LD32(R(2)+48);
  ST32(R(1)+52,R(0));
  R(0)=LD32(R(2)+44);
  ST32(R(1)+48,R(3));
  R(3)=LD32(R(2)+40);
  ST32(R(1)+44,R(0));
  R(0)=LD32(R(2)+36);
  ST32(R(1)+40,R(3));
  R(3)=LD32(R(2)+32);
  ST32(R(1)+36,R(0));
  R(0)=LD32(R(2)+28);
  ST32(R(1)+32,R(3));
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c35a(SH4Ctx *c) {
  R(0)=LD32(R(2)+52);
  ST32(R(1)+56,R(3));
  R(3)=LD32(R(2)+48);
  ST32(R(1)+52,R(0));
  R(0)=LD32(R(2)+44);
  ST32(R(1)+48,R(3));
  R(3)=LD32(R(2)+40);
  ST32(R(1)+44,R(0));
  R(0)=LD32(R(2)+36);
  ST32(R(1)+40,R(3));
  R(3)=LD32(R(2)+32);
  ST32(R(1)+36,R(0));
  R(0)=LD32(R(2)+28);
  ST32(R(1)+32,R(3));
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c35e(SH4Ctx *c) {
  R(3)=LD32(R(2)+48);
  ST32(R(1)+52,R(0));
  R(0)=LD32(R(2)+44);
  ST32(R(1)+48,R(3));
  R(3)=LD32(R(2)+40);
  ST32(R(1)+44,R(0));
  R(0)=LD32(R(2)+36);
  ST32(R(1)+40,R(3));
  R(3)=LD32(R(2)+32);
  ST32(R(1)+36,R(0));
  R(0)=LD32(R(2)+28);
  ST32(R(1)+32,R(3));
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c362(SH4Ctx *c) {
  R(0)=LD32(R(2)+44);
  ST32(R(1)+48,R(3));
  R(3)=LD32(R(2)+40);
  ST32(R(1)+44,R(0));
  R(0)=LD32(R(2)+36);
  ST32(R(1)+40,R(3));
  R(3)=LD32(R(2)+32);
  ST32(R(1)+36,R(0));
  R(0)=LD32(R(2)+28);
  ST32(R(1)+32,R(3));
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c366(SH4Ctx *c) {
  R(3)=LD32(R(2)+40);
  ST32(R(1)+44,R(0));
  R(0)=LD32(R(2)+36);
  ST32(R(1)+40,R(3));
  R(3)=LD32(R(2)+32);
  ST32(R(1)+36,R(0));
  R(0)=LD32(R(2)+28);
  ST32(R(1)+32,R(3));
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c36a(SH4Ctx *c) {
  R(0)=LD32(R(2)+36);
  ST32(R(1)+40,R(3));
  R(3)=LD32(R(2)+32);
  ST32(R(1)+36,R(0));
  R(0)=LD32(R(2)+28);
  ST32(R(1)+32,R(3));
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c36e(SH4Ctx *c) {
  R(3)=LD32(R(2)+32);
  ST32(R(1)+36,R(0));
  R(0)=LD32(R(2)+28);
  ST32(R(1)+32,R(3));
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c372(SH4Ctx *c) {
  R(0)=LD32(R(2)+28);
  ST32(R(1)+32,R(3));
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c376(SH4Ctx *c) {
  R(3)=LD32(R(2)+24);
  ST32(R(1)+28,R(0));
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c37a(SH4Ctx *c) {
  R(0)=LD32(R(2)+20);
  ST32(R(1)+24,R(3));
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c37e(SH4Ctx *c) {
  R(3)=LD32(R(2)+16);
  ST32(R(1)+20,R(0));
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c382(SH4Ctx *c) {
  R(0)=LD32(R(2)+12);
  ST32(R(1)+16,R(3));
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c386(SH4Ctx *c) {
  R(3)=LD32(R(2)+8);
  ST32(R(1)+12,R(0));
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c38a(SH4Ctx *c) {
  R(0)=LD32(R(2)+4);
  ST32(R(1)+8,R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c38e(SH4Ctx *c) {
  R(3)=LD32(R(2));
  ST32(R(1)+4,R(0));
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c392(SH4Ctx *c) {
  ST32(R(1),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c394(SH4Ctx *c) {
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c3dc(SH4Ctx *c) {
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x40u;
  c->t=R(3)>=R(0);
  if(!c->t) goto L8c09c47c;
  R(3)=0x8c09c438u;
  R(3)=LD32(R(3)+R(0));
  { uint32_t tg=R(3);  switch(tg){ case 0x8c09c3f2u: goto L8c09c3f2; case 0x8c09c3f6u: goto L8c09c3f6; case 0x8c09c3fau: goto L8c09c3fa; case 0x8c09c3feu: goto L8c09c3fe; case 0x8c09c402u: goto L8c09c402; case 0x8c09c406u: goto L8c09c406; case 0x8c09c40au: goto L8c09c40a; case 0x8c09c40eu: goto L8c09c40e; case 0x8c09c412u: goto L8c09c412; case 0x8c09c416u: goto L8c09c416; case 0x8c09c41au: goto L8c09c41a; case 0x8c09c41eu: goto L8c09c41e; case 0x8c09c422u: goto L8c09c422; case 0x8c09c426u: goto L8c09c426; case 0x8c09c42au: goto L8c09c42a; case 0x8c09c42eu: goto L8c09c42e; case 0x8c09c432u: goto L8c09c432; default: sh4_bad_jump(c,0x8c09c3e8u,tg); return; } }
L8c09c3f2:;
  R(0)=LD32(R(2)+60);
  ST32(R(1)+60,R(0));
L8c09c3f6:;
  R(0)=LD32(R(2)+56);
  ST32(R(1)+56,R(0));
L8c09c3fa:;
  R(0)=LD32(R(2)+52);
  ST32(R(1)+52,R(0));
L8c09c3fe:;
  R(0)=LD32(R(2)+48);
  ST32(R(1)+48,R(0));
L8c09c402:;
  R(0)=LD32(R(2)+44);
  ST32(R(1)+44,R(0));
L8c09c406:;
  R(0)=LD32(R(2)+40);
  ST32(R(1)+40,R(0));
L8c09c40a:;
  R(0)=LD32(R(2)+36);
  ST32(R(1)+36,R(0));
L8c09c40e:;
  R(0)=LD32(R(2)+32);
  ST32(R(1)+32,R(0));
L8c09c412:;
  R(0)=LD32(R(2)+28);
  ST32(R(1)+28,R(0));
L8c09c416:;
  R(0)=LD32(R(2)+24);
  ST32(R(1)+24,R(0));
L8c09c41a:;
  R(0)=LD32(R(2)+20);
  ST32(R(1)+20,R(0));
L8c09c41e:;
  R(0)=LD32(R(2)+16);
  ST32(R(1)+16,R(0));
L8c09c422:;
  R(0)=LD32(R(2)+12);
  ST32(R(1)+12,R(0));
L8c09c426:;
  R(0)=LD32(R(2)+8);
  ST32(R(1)+8,R(0));
L8c09c42a:;
  R(0)=LD32(R(2)+4);
  ST32(R(1)+4,R(0));
L8c09c42e:;
  R(0)=LD32(R(2));
  ST32(R(1),R(0));
L8c09c432:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
L8c09c47c:;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(2);
  R(3)+=R(0);
L8c09c482:;
  {uint32_t v=LD32(R(2));R(2)+=4;R(0)=v;}
  c->t=R(3)>=R(2);
  if(!c->t) goto L8c09c496;
  ST32(R(1),R(0));
  {uint32_t v=LD32(R(2));R(2)+=4;R(0)=v;}
  c->t=R(3)>=R(2);
  if(!c->t) goto L8c09c496;
  ST32(R(1)+4,R(0));
  { R(1)+=0x8u; goto L8c09c482; }
L8c09c496:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c09c49c(SH4Ctx *c) {
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09c4cc;
  R(4)=R(2);
  R(4)+=R(0);
L8c09c4aa:;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(0)=(uint32_t)v;}
  ST8(R(1),R(0));
  c->t=R(4)>R(2);
  if(!c->t) goto L8c09c4cc;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(0)=(uint32_t)v;}
  ST8(R(1)+1,R(0));
  c->t=R(4)>R(2);
  if(!c->t) goto L8c09c4cc;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(0)=(uint32_t)v;}
  ST8(R(1)+2,R(0));
  c->t=R(4)>R(2);
  if(!c->t) goto L8c09c4cc;
  {int32_t v=(int8_t)LD8(R(2));R(2)+=1;R(0)=(uint32_t)v;}
  ST8(R(1)+3,R(0));
  c->t=R(4)>R(2);
  R(1)+=0x4u;
  if(c->t) goto L8c09c4aa;
L8c09c4cc:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
}
void f_8c09c4d4(SH4Ctx *c) {
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=0x3u;
  R(4)=R(0);
  R(4)&=R(3);
  R(3)&=R(1);
  R(3)|=R(4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09c518;
  R(4)=R(0);
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  R(3)=R(4);
L8c09c4ec:;
  c->t=(int32_t)R(0)==0;
  ST8(R(3),R(0));
  if(c->t) goto L8c09c510;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  ST8(R(3)+1,R(0));
  if(c->t) goto L8c09c510;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  ST8(R(3)+2,R(0));
  if(c->t) goto L8c09c510;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  ST8(R(3)+3,R(0));
  if(c->t) goto L8c09c510;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  { R(3)+=0x4u; goto L8c09c4ec; }
L8c09c510:;
  R(0)=R(4);
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
L8c09c518:;
  R(3)=0x8c0ab5e4u;
  {  { f_8c0ab5e4(c); return; } }
}
void f_8c09c524(SH4Ctx *c) {
  R(0)=R(4);
  R(0)|=R(5);
  c->t=(R(0)&0x3)==0;
  if(!c->t) goto L8c09c598;
  {uint32_t v=LD32(R(5));R(5)+=4;R(3)=v;}
  R(2)=0x0u;
L8c09c530:;
  {uint32_t v=LD32(R(4));R(4)+=4;R(0)=v;}
  c->t=sh4_cmpstr(R(3),R(2));
  if(c->t) goto L8c09c562;
  c->t=R(3)==R(0);
  {uint32_t v=LD32(R(5));R(5)+=4;R(1)=v;}
  if(!c->t) goto L8c09c560;
  {uint32_t v=LD32(R(4));R(4)+=4;R(0)=v;}
  c->t=sh4_cmpstr(R(1),R(2));
  if(c->t) goto L8c09c562;
  c->t=R(1)==R(0);
  {uint32_t v=LD32(R(5));R(5)+=4;R(3)=v;}
  if(!c->t) goto L8c09c560;
  {uint32_t v=LD32(R(4));R(4)+=4;R(0)=v;}
  c->t=sh4_cmpstr(R(3),R(2));
  if(c->t) goto L8c09c562;
  c->t=R(3)==R(0);
  {uint32_t v=LD32(R(5));R(5)+=4;R(1)=v;}
  if(!c->t) goto L8c09c560;
  {uint32_t v=LD32(R(4));R(4)+=4;R(0)=v;}
  c->t=sh4_cmpstr(R(1),R(2));
  if(c->t) goto L8c09c562;
  c->t=R(1)==R(0);
  {uint32_t v=LD32(R(5));R(5)+=4;R(3)=v;}
  if(c->t) goto L8c09c530;
L8c09c560:;
  R(5)+=0xfffffffcu;
L8c09c562:;
  R(5)+=0xfffffffcu;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(1)=(uint32_t)v;}
  R(4)+=0xfffffffcu;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(0)=(uint32_t)v;}
  c->t=R(1)==R(2);
  if(c->t) goto L8c09c58e;
  c->t=R(1)==R(0);
  if(!c->t) goto L8c09c58e;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(1)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(0)=(uint32_t)v;}
  c->t=R(1)==R(2);
  if(c->t) goto L8c09c58e;
  c->t=R(1)==R(0);
  if(!c->t) goto L8c09c58e;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(1)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(0)=(uint32_t)v;}
  c->t=R(1)==R(2);
  if(c->t) goto L8c09c58e;
  c->t=R(1)==R(0);
  if(!c->t) goto L8c09c58e;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(0)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(1)=(uint32_t)v;}
L8c09c58e:;
  { R(0)-=R(1); return; }
L8c09c598:;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  if(c->t) goto L8c09c5c8;
  c->t=R(3)==R(0);
  if(!c->t) goto L8c09c5c8;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(0)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09c5c8;
  c->t=R(3)==R(0);
  if(!c->t) goto L8c09c5c8;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(0)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09c5c8;
  c->t=R(3)==R(0);
  if(!c->t) goto L8c09c5c8;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(0)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09c5c8;
  c->t=R(3)==R(0);
  if(c->t) goto L8c09c598;
L8c09c5c8:;
  { R(0)-=R(3); return; }
}
void f_8c09c592(SH4Ctx *c) {
  { R(0)-=R(3); return; }
}
void f_8c09c5cc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=0x4u;
  fp_mov(c,5,4);
  R(4)=0x0u;
  fp_st(c,5,R(0)+R(15));
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(5)=0x8u; if(k) goto L8c09c5e2; }
  R(4)=R(5);
L8c09c5e2:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,5,3);
  if(!c->t) goto L8c09c5ee;
  R(2)=0x4u;
  { R(4)|=R(2); goto L8c09c608; }
L8c09c5ee:;
  R(1)=LD32(R(15)+4);
  R(3)=0x7fffffffu;
  R(2)=0x7f800000u;
  R(1)&=R(3);
  c->t=R(1)==R(2);
  if(!c->t) goto L8c09c600;
  R(0)=0x2u;
  { R(4)|=R(0); goto L8c09c608; }
L8c09c600:;
  fp_cmp(c,0,5,5);
  if(c->t) goto L8c09c608;
  R(0)=0x1u;
  R(4)|=R(0);
L8c09c608:;
  R(2)=0x3u;
  R(0)=R(4);
  c->t=(R(2)&R(0))==0;
  if(c->t) goto L8c09c61c;
  R(1)=0x8c0bd640u;
  fp_ld(c,0,R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c09c61c:;
  c->t=(R(5)&R(0))==0;
  if(c->t) goto L8c09c622;
  fp_unary(c,0,4);
L8c09c622:;
  R(3)=0x8c0ab888u;
  R(4)=R(15);
  R(2)=0x8c0bd66cu;
  { c->pr=0x8c09c62cu; fp_ld(c,5,R(2)); f_8c0ab888(c); }
  R(0)=LD32(R(15));
  fp_mov(c,4,0);
  R(0)&=0x7u;
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c09c640; }
  R(3)=0x8c0bd69cu;
  fp_mov(c,3,4);
  fp_ld(c,4,R(3));
  fp_arith(c,0,4,3);
L8c09c640:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09c666;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c09c666;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09c670;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09c670;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c09c67c;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c09c67c;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c09c68a;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c09c68a;
  {  goto L8c09c692; }
L8c09c666:;
  R(3)=0x8c0ab648u;
  { c->pr=0x8c09c66cu;  f_8c0ab648(c); }
  {  goto L8c09c690; }
L8c09c670:;
  R(3)=0x8c0ab668u;
  { c->pr=0x8c09c676u;  f_8c0ab668(c); }
  fp_mov(c,4,0);
  { fp_mov(c,5,0); goto L8c09c686; }
L8c09c67c:;
  R(3)=0x8c0ab648u;
  { c->pr=0x8c09c682u;  f_8c0ab648(c); }
  fp_mov(c,5,0);
  fp_mov(c,4,0);
L8c09c686:;
  { fp_unary(c,0,5); goto L8c09c692; }
L8c09c68a:;
  R(3)=0x8c0ab668u;
  { c->pr=0x8c09c690u;  f_8c0ab668(c); }
L8c09c690:;
  fp_mov(c,5,0);
L8c09c692:;
  fp_mov(c,0,5);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09c6bc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=0x4u;
  fp_mov(c,5,4);
  R(6)=0x0u;
  fp_st(c,5,R(0)+R(15));
  R(3)=LD32(R(15)+4);
  R(4)=R(6);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(5)=0x8u; if(k) goto L8c09c6d8; }
  R(4)=R(5);
L8c09c6d8:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,5,3);
  { uint32_t k=!c->t; R(13)=0x1u; if(k) goto L8c09c6e6; }
  R(2)=0x4u;
  { R(4)|=R(2); goto L8c09c6fe; }
L8c09c6e6:;
  R(1)=LD32(R(15)+4);
  R(3)=0x7fffffffu;
  R(2)=0x7f800000u;
  R(1)&=R(3);
  c->t=R(1)==R(2);
  if(!c->t) goto L8c09c6f8;
  R(0)=0x2u;
  { R(4)|=R(0); goto L8c09c6fe; }
L8c09c6f8:;
  fp_cmp(c,0,5,5);
  if(c->t) goto L8c09c6fe;
  R(4)|=R(13);
L8c09c6fe:;
  R(2)=0x3u;
  R(14)=R(4);
  c->t=(R(2)&R(14))==0;
  if(c->t) goto L8c09c70e;
  R(1)=0x8c0bd640u;
  fp_ld(c,0,R(1));
  {  goto L8c09c792; }
L8c09c70e:;
  c->t=(R(5)&R(14))==0;
  if(c->t) goto L8c09c718;
  fp_unary(c,0,4);
  { R(14)=R(13); goto L8c09c71a; }
L8c09c718:;
  R(14)=R(6);
L8c09c71a:;
  R(2)=0x8c0ab888u;
  R(4)=R(15);
  R(3)=0x8c0bd66cu;
  { c->pr=0x8c09c724u; fp_ld(c,5,R(3)); f_8c0ab888(c); }
  R(0)=LD32(R(15));
  fp_mov(c,4,0);
  R(0)&=0x7u;
  c->t=(R(0)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c09c738; }
  R(3)=0x8c0bd69cu;
  fp_mov(c,3,4);
  fp_ld(c,4,R(3));
  fp_arith(c,0,4,3);
L8c09c738:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09c75e;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c09c75e;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09c768;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09c768;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c09c772;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c09c772;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c09c77e;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c09c77e;
  {  goto L8c09c78a; }
L8c09c75e:;
  R(3)=0x8c0ab668u;
  { c->pr=0x8c09c764u;  f_8c0ab668(c); }
  {  goto L8c09c76e; }
L8c09c768:;
  R(3)=0x8c0ab648u;
  { c->pr=0x8c09c76eu;  f_8c0ab648(c); }
L8c09c76e:;
  { fp_mov(c,5,0); goto L8c09c78a; }
L8c09c772:;
  R(3)=0x8c0ab668u;
  { c->pr=0x8c09c778u;  f_8c0ab668(c); }
  fp_mov(c,4,0);
  { fp_mov(c,5,0); goto L8c09c788; }
L8c09c77e:;
  R(3)=0x8c0ab648u;
  { c->pr=0x8c09c784u;  f_8c0ab648(c); }
  fp_mov(c,5,0);
  fp_mov(c,4,0);
L8c09c788:;
  fp_unary(c,0,5);
L8c09c78a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c09c790;
  fp_unary(c,0,5);
L8c09c790:;
  fp_mov(c,0,5);
L8c09c792:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09c7bc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(14)=R(7);
  ST32(R(15)+8,R(6));
  R(7)=LD32(R(4));
  R(6)=0x3u;
  R(13)=R(5);
  R(2)=R(7);
  R(2)+=0x4u;
  c->t=(R(2)&R(6))==0;
  { uint32_t k=c->t; ST32(R(15)+12,R(2)); if(k) goto L8c09c7e8; }
  R(3)=R(7);
  { R(3)+=0x8u; goto L8c09c7ea; }
L8c09c7e8:;
  R(3)=LD32(R(15)+12);
L8c09c7ea:;
  R(5)=R(3);
  ST32(R(4),R(3));
  R(3)+=0xfffffffcu;
  c->t=(R(3)&R(6))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(3)); if(k) goto L8c09c7fc; }
  R(1)=R(5);
  { R(1)+=0xfffffff8u; goto L8c09c7fe; }
L8c09c7fc:;
  R(1)=LD32(R(15)+4);
L8c09c7fe:;
  R(3)=c->fpscr;
  R(2)=0x80000u;
  fp_ld(c,3,R(1));
  R(3)|=R(2);
  R(0)=LD32(R(14)+8);
  c->fpul=c->fr[3];
  sh4_setfpscr(c,R(3));
  c->t=(int32_t)R(0)==-1;
  fp_cnvsd(c,2);
  fp_mov(c,4,2);
  { uint32_t k=!c->t; fp_mov(c,5,3); if(k) goto L8c09c81a; }
  R(2)=0x6u;
  ST32(R(14)+8,R(2));
L8c09c81a:;
  R(12)=R(15);
  R(12)+=0x18u;
  R(2)=0x30u;
  R(3)=R(12);
  ST32(R(15)+12,R(3));
  R(0)=0x8c09c9a0u;
  ST8(R(3),R(2));
  R(9)=R(13);
  R(3)=c->fpscr;
  R(2)=0x80000u;
  R(8)=0x1u;
  fp_ld(c,2,R(0));
  R(3)|=R(2);
  fp_mov(c,3,2);
  sh4_setfpscr(c,R(3));
  fp_cmp(c,0,4,2);
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c09c8a6; }
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(7)=R(15);
  R(5)=R(15);
  R(7)+=0x14u;
  R(2)&=R(3);
  R(3)=0x8c0abe40u;
  sh4_setfpscr(c,R(2));
  R(6)=R(15);
  R(5)+=0x38u;
  { c->pr=0x8c09c856u; R(4)=0x11u; f_8c0abe40(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09c88c;
  ST8(R(13),R(11));
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(14)+4);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c09c86c;
  R(0)=LD32(R(14)+8);
  { ST32(R(14)+40,R(0)); goto L8c09c870; }
L8c09c86c:;
  R(2)=LD32(R(14)+4);
  ST32(R(14)+40,R(2));
L8c09c870:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09c87e;
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c09c882;
  {  goto L8c09c886; }
L8c09c87e:;
  { R(0)=0x2bu; goto L8c09c888; }
L8c09c882:;
  { R(0)=0x2du; goto L8c09c888; }
L8c09c886:;
  R(0)=0x2au;
L8c09c888:;
  { ST8(R(14)+1,R(0)); goto L8c09cea6; }
L8c09c88c:;
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(5)=R(12);
  R(5)+=0x1u;
  R(4)=R(15);
  R(3)&=R(2);
  R(2)=0x8c0abd10u;
  sh4_setfpscr(c,R(3));
  R(6)=0x11u;
  { c->pr=0x8c09c8a2u; R(4)+=0x38u; f_8c0abd10(c); }
  {  goto L8c09c8ae; }
L8c09c8a6:;
  R(0)=0x14u;
  ST8(R(15)+R(0),R(8));
  R(0)=R(11);
  ST8(R(12)+1,R(0));
L8c09c8ae:;
  { R(10)=R(8); goto L8c09c8b4; }
L8c09c8b2:;
  R(10)+=0x1u;
L8c09c8b4:;
  R(0)=R(10);
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c09c8b2;
  c->t=(int32_t)R(10)>(int32_t)R(8);
  if(!c->t) goto L8c09c8f4;
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(4)=R(10);
  R(2)&=R(3);
  R(3)=0x8c019e40u;
  sh4_setfpscr(c,R(2));
  { c->pr=0x8c09c8d0u; R(4)+=R(12); f_8c019e40(c); }
  R(3)=LD32(R(15));
  R(2)=R(10);
  R(4)=R(8);
  R(5)=R(0);
  R(2)+=0xffffffffu;
  c->t=(int32_t)R(4)>(int32_t)R(5);
  R(3)+=R(2);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c09c8f0; }
L8c09c8e2:;
  R(0)=R(12);
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  ST8(R(4)+R(0),R(3));
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>(int32_t)R(5);
  { uint32_t k=!c->t; R(10)+=0x1u; if(k) goto L8c09c8e2; }
L8c09c8f0:;
  R(0)=R(4);
  ST8(R(12)+R(0),R(11));
L8c09c8f4:;
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(4)=R(12);
  R(4)+=0x1u;
  R(2)&=R(3);
  R(3)=0x8c019e40u;
  sh4_setfpscr(c,R(2));
  { c->pr=0x8c09c906u; ST32(R(15)+16,R(4)); f_8c019e40(c); }
  R(10)=R(0);
  R(2)=0x0u;
  R(3)=R(10);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  R(4)=LD32(R(15)+16);
  {uint32_t a=R(3),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(3)=r;}
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  R(5)=LD32(R(15)+16);
  R(4)+=R(10);
  c->t=(int32_t)R(3)>0;
  R(6)=R(11);
  R(4)+=0xffffffffu;
  { uint32_t k=!c->t; ST32(R(15)+4,R(3)); if(k) goto L8c09c936; }
L8c09c922:;
  R(7)=(int32_t)(int8_t)LD8(R(5));
  R(6)+=0x1u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  ST8(R(5),R(3));
  ST8(R(4),R(7));
  R(4)+=0xffffffffu;
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(6)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(5)+=0x1u; if(k) goto L8c09c922; }
L8c09c936:;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c09c944;
  R(3)=LD32(R(15)+16);
  R(2)=0x30u;
  R(10)=R(8);
  ST8(R(3),R(2));
  ST32(R(15),R(11));
L8c09c944:;
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==103;
  if(c->t) goto L8c09c950;
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==71;
  if(!c->t) goto L8c09c974;
L8c09c950:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(3)=0xfffffffcu;
  R(0)|=0x20u;
  ST8(R(14),R(0));
  R(4)=LD32(R(15));
  R(4)+=R(10);
  R(4)+=0xffffffffu;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c09c968;
  R(1)=LD32(R(14)+8);
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(!c->t) goto L8c09c970;
L8c09c968:;
  R(3)=LD32(R(15)+8);
  R(3)+=0xfffffffeu;
  { ST32(R(15)+8,R(3)); goto L8c09c974; }
L8c09c970:;
  R(1)=0x66u;
  ST32(R(15)+8,R(1));
L8c09c974:;
  R(0)=0x14u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c09c9b4;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)&=0x18u;
  R(4)=R(0);
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c09c990;
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c09c994;
  {  goto L8c09c9ba; }
L8c09c990:;
  { R(3)=0x2bu; goto L8c09c996; }
L8c09c994:;
  R(3)=0x20u;
L8c09c996:;
  ST8(R(13),R(3));
  { R(13)+=0x1u; goto L8c09c9ba; }
L8c09c9b4:;
  R(3)=0x2du;
  ST8(R(13),R(3));
  R(13)+=0x1u;
L8c09c9ba:;
  R(2)=R(9);
  R(2)+=0x1u;
  ST32(R(15)+4,R(2));
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c09c9ca;
  {  goto L8c09cd10; }
L8c09c9ca:;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c09ca6c;
  c->t=(int32_t)R(10)>0;
  R(4)=R(11);
  { uint32_t k=!c->t; R(5)=LD32(R(15)+16); if(k) goto L8c09c9e4; }
L8c09c9d8:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(10);
  ST8(R(13),R(3));
  { uint32_t k=!c->t; R(13)+=0x1u; if(k) goto L8c09c9d8; }
L8c09c9e4:;
  ST32(R(14)+20,R(13));
  R(3)=LD32(R(15));
  ST32(R(14)+32,R(3));
  R(3)=0x20u;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(3)&R(5))==0;
  { uint32_t k=!c->t; R(4)=R(11); if(k) goto L8c09c9fa; }
  R(1)=LD32(R(14)+8);
  c->t=(int32_t)R(1)>0;
  if(c->t) goto L8c09ca00;
L8c09c9fa:;
  R(2)=0x4u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c09ca08;
L8c09ca00:;
  R(3)=0x2eu;
  ST8(R(13),R(3));
  R(4)+=0x1u;
  R(13)+=0x1u;
L8c09ca08:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(2)=0x20u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c09ca1c;
  R(1)=0x20u;
  c->t=(R(1)&R(5))==0;
  if(c->t) goto L8c09ca26;
  R(2)=0x4u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c09ca26;
L8c09ca1c:;
  ST32(R(14)+24,R(13));
  R(2)=LD32(R(14)+8);
  ST32(R(14)+36,R(2));
  R(3)=LD32(R(14)+8);
  R(4)+=R(3);
L8c09ca26:;
  R(2)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(9));
  R(4)+=R(2);
  c->t=(int32_t)R(0)==43;
  R(4)+=R(10);
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c09ca40; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c09ca40;
  R(0)=R(5);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c09ca5a;
L8c09ca40:;
  R(2)=LD32(R(14)+4);
  c->t=(int32_t)R(2)>(int32_t)R(4);
  if(!c->t) goto L8c09ca5a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c09ca5a;
  R(2)=LD32(R(15)+4);
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(14)+4);
  R(3)-=R(4);
  ST32(R(14)+28,R(3));
  { ST32(R(14)+40,R(11)); goto L8c09cea4; }
L8c09ca5a:;
  R(3)=LD32(R(14)+4);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  if(!c->t) goto L8c09ca68;
  R(1)=LD32(R(14)+4);
  R(1)-=R(4);
  { ST32(R(14)+40,R(1)); goto L8c09cea4; }
L8c09ca68:;
  { ST32(R(14)+40,R(11)); goto L8c09cea4; }
L8c09ca6c:;
  R(3)=LD32(R(15));
  R(3)+=R(10);
  ST32(R(15),R(3));
  R(2)=LD32(R(14)+8);
  R(3)+=R(2);
  R(2)=R(3);
  c->t=(int32_t)R(2)>=(int32_t)R(10);
  ST32(R(15)+8,R(3));
  if(c->t) goto L8c09ca94;
  R(1)=LD32(R(15)+8);
  c->t=(int32_t)R(1)>=0;
  if(!c->t) goto L8c09ca94;
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(5)=LD32(R(15)+8);
  R(2)&=R(3);
  sh4_setfpscr(c,R(2));
  R(5)+=0x1u;
  { c->pr=0x8c09ca94u; R(4)=R(12); f_8c09ceba(c); }
L8c09ca94:;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c09ca9e;
  {  goto L8c09cbba; }
L8c09ca9e:;
  R(0)=LD32(R(15)+12);
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==48;
  { uint32_t k=!c->t; R(4)=R(11); if(k) goto L8c09caae; }
  R(5)=R(8);
  { R(6)=R(8); goto L8c09caba; }
L8c09caae:;
  R(3)=LD32(R(15));
  R(10)+=0x1u;
  R(5)=R(11);
  R(6)=R(11);
  R(3)+=0x1u;
  ST32(R(15),R(3));
L8c09caba:;
  {  goto L8c09cad0; }
L8c09cabe:;
  R(0)=R(5);
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(4)+=0x1u;
  ST8(R(13),R(2));
  R(5)+=0x1u;
  R(3)=LD32(R(15));
  R(13)+=0x1u;
  R(3)+=0xffffffffu;
  ST32(R(15),R(3));
L8c09cad0:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c09cabe;
  R(3)=0x2eu;
  ST8(R(13),R(3));
  { R(13)+=0x1u; goto L8c09caee; }
L8c09cade:;
  R(0)=R(5);
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(5)+=0x1u;
  ST8(R(13),R(2));
  R(13)+=0x1u;
  R(3)=LD32(R(14)+8);
  R(3)+=0xffffffffu;
  ST32(R(14)+8,R(3));
L8c09caee:;
  R(2)=R(5);
  R(2)-=R(6);
  c->t=(int32_t)R(2)>=(int32_t)R(10);
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c09cafe; }
  R(2)=LD32(R(14)+8);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c09cade;
L8c09cafe:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(2)=0x20u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c09cb12;
  R(1)=0x20u;
  c->t=(R(1)&R(5))==0;
  if(c->t) goto L8c09cb1e;
  R(2)=0x4u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c09cb1e;
L8c09cb12:;
  R(1)=LD32(R(14)+8);
  ST32(R(14)+20,R(13));
  R(3)=LD32(R(14)+8);
  R(4)+=R(1);
  { ST32(R(14)+32,R(3)); goto L8c09cb3a; }
L8c09cb1e:;
  R(0)=R(13);
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c09cb3a;
  {  goto L8c09cb30; }
L8c09cb2c:;
  R(4)+=0xffffffffu;
  R(13)+=0xffffffffu;
L8c09cb30:;
  R(0)=R(13);
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c09cb2c;
L8c09cb3a:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(2)=0x4u;
  c->t=(R(2)&R(5))==0;
  if(!c->t) goto L8c09cb68;
  R(0)=R(13);
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==46;
  if(!c->t) goto L8c09cb68;
  R(2)=LD32(R(14)+32);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09cb58;
  R(3)=0x20u;
  c->t=(R(3)&R(5))==0;
  if(c->t) goto L8c09cb68;
L8c09cb58:;
  R(3)=LD32(R(14)+32);
  R(2)=R(4);
  ST32(R(14)+32,R(11));
  R(13)+=0xffffffffu;
  R(2)-=R(3);
  ST32(R(14)+20,R(9));
  R(4)=R(2);
  R(4)+=0xffffffffu;
L8c09cb68:;
  R(0)=(int32_t)(int8_t)LD8(R(9));
  c->t=(int32_t)R(0)==43;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c09cb7c; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c09cb7c;
  R(0)=R(5);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c09cb96;
L8c09cb7c:;
  R(2)=LD32(R(14)+4);
  c->t=(int32_t)R(2)>(int32_t)R(4);
  if(!c->t) goto L8c09cb96;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c09cb96;
  R(2)=LD32(R(15)+4);
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(14)+4);
  R(3)-=R(4);
  ST32(R(14)+28,R(3));
  { ST32(R(14)+40,R(11)); goto L8c09cbaa; }
L8c09cb96:;
  R(3)=LD32(R(14)+4);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  if(!c->t) goto L8c09cba8;
  R(1)=LD32(R(14)+4);
  R(1)-=R(4);
  { ST32(R(14)+40,R(1)); goto L8c09cbaa; }
L8c09cba8:;
  ST32(R(14)+40,R(11));
L8c09cbaa:;
  R(2)=LD32(R(14)+20);
  c->t=R(2)==R(9);
  if(c->t) goto L8c09cbb4;
  {  goto L8c09cea4; }
L8c09cbb4:;
  R(1)=LD32(R(14)+16);
  { ST32(R(14)+20,R(1)); goto L8c09cea4; }
L8c09cbba:;
  R(0)=LD32(R(15)+12);
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c09cbc8;
  R(5)=R(8);
  { R(6)=R(8); goto L8c09cbd4; }
L8c09cbc8:;
  R(3)=LD32(R(15));
  R(10)+=0x1u;
  R(5)=R(11);
  R(6)=R(11);
  R(3)+=0x1u;
  ST32(R(15),R(3));
L8c09cbd4:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c09cbe4;
  R(2)=LD32(R(15)+12);
  R(5)=R(8);
  R(1)=(int32_t)(int8_t)LD8(R(2));
  { ST8(R(13),R(1)); goto L8c09cbe8; }
L8c09cbe4:;
  R(3)=0x30u;
  ST8(R(13),R(3));
L8c09cbe8:;
  R(3)=0x2eu;
  R(4)=R(8);
  R(13)+=0x1u;
  ST8(R(13),R(3));
  R(4)+=0x1u;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; R(13)+=0x1u; if(k) goto L8c09cc36; }
  ST32(R(14)+20,R(13));
  R(2)=LD32(R(15));
  R(3)=LD32(R(14)+8);
  R(2)=0u-R(2);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c09cc12;
  R(1)=LD32(R(15));
  R(1)=0u-R(1);
  ST32(R(14)+32,R(1));
  R(3)=LD32(R(15));
  { R(4)-=R(3); goto L8c09cc1a; }
L8c09cc12:;
  R(1)=LD32(R(14)+8);
  ST32(R(14)+32,R(1));
  R(3)=LD32(R(14)+8);
  R(4)+=R(3);
L8c09cc1a:;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(15));
  R(2)+=R(3);
  { ST32(R(14)+8,R(2)); goto L8c09cc36; }
L8c09cc24:;
  R(0)=R(5);
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(4)+=0x1u;
  ST8(R(13),R(2));
  R(5)+=0x1u;
  R(3)=LD32(R(14)+8);
  R(13)+=0x1u;
  R(3)+=0xffffffffu;
  ST32(R(14)+8,R(3));
L8c09cc36:;
  R(2)=R(5);
  R(2)-=R(6);
  c->t=(int32_t)R(2)>=(int32_t)R(10);
  if(c->t) goto L8c09cc44;
  R(2)=LD32(R(14)+8);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c09cc24;
L8c09cc44:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(2)=0x20u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c09cc58;
  R(1)=0x20u;
  c->t=(R(1)&R(5))==0;
  if(c->t) goto L8c09cc6a;
  R(2)=0x4u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c09cc6a;
L8c09cc58:;
  R(1)=LD32(R(14)+8);
  c->t=(int32_t)R(1)>0;
  if(!c->t) goto L8c09cc86;
  ST32(R(14)+24,R(13));
  R(2)=LD32(R(14)+8);
  ST32(R(14)+36,R(2));
  R(3)=LD32(R(14)+8);
  { R(4)+=R(3); goto L8c09cc86; }
L8c09cc6a:;
  R(0)=R(13);
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c09cc86;
  {  goto L8c09cc7c; }
L8c09cc78:;
  R(4)+=0xffffffffu;
  R(13)+=0xffffffffu;
L8c09cc7c:;
  R(0)=R(13);
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c09cc78;
L8c09cc86:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(2)=0x4u;
  c->t=(R(2)&R(5))==0;
  if(!c->t) goto L8c09ccc2;
  R(0)=R(13);
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==46;
  if(!c->t) goto L8c09ccc2;
  R(2)=LD32(R(14)+32);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09cca4;
  R(3)=LD32(R(14)+36);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09ccaa;
L8c09cca4:;
  R(3)=0x20u;
  c->t=(R(3)&R(5))==0;
  if(c->t) goto L8c09ccc2;
L8c09ccaa:;
  R(3)=LD32(R(14)+32);
  R(2)=R(4);
  R(1)=LD32(R(14)+36);
  R(13)+=0xffffffffu;
  R(2)-=R(3);
  ST32(R(14)+36,R(11));
  R(2)-=R(1);
  ST32(R(14)+32,R(11));
  R(4)=R(2);
  ST32(R(14)+20,R(9));
  ST32(R(14)+24,R(11));
  R(4)+=0xffffffffu;
L8c09ccc2:;
  R(0)=(int32_t)(int8_t)LD8(R(9));
  c->t=(int32_t)R(0)==43;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c09ccd6; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c09ccd6;
  R(0)=R(5);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c09ccf0;
L8c09ccd6:;
  R(2)=LD32(R(14)+4);
  c->t=(int32_t)R(2)>(int32_t)R(4);
  if(!c->t) goto L8c09ccf0;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c09ccf0;
  R(2)=LD32(R(15)+4);
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(14)+4);
  R(3)-=R(4);
  ST32(R(14)+28,R(3));
  { ST32(R(14)+40,R(11)); goto L8c09cd00; }
L8c09ccf0:;
  R(3)=LD32(R(14)+4);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  if(!c->t) goto L8c09ccfe;
  R(1)=LD32(R(14)+4);
  R(1)-=R(4);
  { ST32(R(14)+40,R(1)); goto L8c09cd00; }
L8c09ccfe:;
  ST32(R(14)+40,R(11));
L8c09cd00:;
  R(2)=LD32(R(14)+20);
  c->t=R(2)==R(9);
  if(c->t) goto L8c09cd0a;
  {  goto L8c09cea4; }
L8c09cd0a:;
  R(1)=LD32(R(14)+16);
  { ST32(R(14)+20,R(1)); goto L8c09cea4; }
L8c09cd10:;
  R(2)=LD32(R(14)+8);
  R(2)+=0x1u;
  c->t=(int32_t)R(2)>=(int32_t)R(10);
  if(c->t) goto L8c09cd28;
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(5)=LD32(R(14)+8);
  R(3)&=R(2);
  sh4_setfpscr(c,R(3));
  R(5)+=0x2u;
  { c->pr=0x8c09cd28u; R(4)=R(12); f_8c09ceba(c); }
L8c09cd28:;
  R(0)=LD32(R(15)+12);
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c09cd34;
  { R(6)=R(8); goto L8c09cd3e; }
L8c09cd34:;
  R(3)=LD32(R(15));
  R(10)+=0x1u;
  R(6)=R(11);
  R(3)+=0xffffffffu;
  ST32(R(15),R(3));
L8c09cd3e:;
  R(2)=LD32(R(15));
  R(0)=R(6);
  R(3)=R(10);
  R(3)-=R(6);
  R(2)+=R(3);
  R(5)=R(0);
  ST32(R(15),R(2));
  R(2)=0x2eu;
  R(1)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(4)=R(8);
  R(5)+=0x1u;
  ST8(R(13),R(1));
  R(13)+=0x1u;
  ST8(R(13),R(2));
  R(4)+=0x1u;
  { R(13)+=0x1u; goto L8c09cd72; }
L8c09cd60:;
  R(0)=R(5);
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(4)+=0x1u;
  ST8(R(13),R(2));
  R(5)+=0x1u;
  R(3)=LD32(R(14)+8);
  R(13)+=0x1u;
  R(3)+=0xffffffffu;
  ST32(R(14)+8,R(3));
L8c09cd72:;
  c->t=(int32_t)R(5)>(int32_t)R(10);
  if(c->t) goto L8c09cd7c;
  R(3)=LD32(R(14)+8);
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c09cd60;
L8c09cd7c:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(3)=0x20u;
  c->t=(R(3)&R(5))==0;
  if(c->t) goto L8c09cd90;
  R(1)=0x20u;
  c->t=(R(1)&R(5))==0;
  if(c->t) goto L8c09cd9c;
  R(2)=0x4u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c09cd9c;
L8c09cd90:;
  ST32(R(14)+20,R(13));
  R(2)=LD32(R(14)+8);
  ST32(R(14)+32,R(2));
  R(3)=LD32(R(14)+8);
  { R(4)+=R(3); goto L8c09cdbe; }
L8c09cd9c:;
  R(0)=R(13);
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c09cdbe;
  {  goto L8c09cdb4; }
L8c09cdb0:;
  R(4)+=0xffffffffu;
  R(13)+=0xffffffffu;
L8c09cdb4:;
  R(0)=R(13);
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c09cdb0;
L8c09cdbe:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(2)=0x4u;
  c->t=(R(2)&R(5))==0;
  if(!c->t) goto L8c09cdec;
  R(0)=R(13);
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==46;
  if(!c->t) goto L8c09cdec;
  R(2)=LD32(R(14)+32);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09cddc;
  R(3)=0x20u;
  c->t=(R(3)&R(5))==0;
  if(c->t) goto L8c09cdec;
L8c09cddc:;
  R(3)=LD32(R(14)+32);
  R(2)=R(4);
  ST32(R(14)+20,R(9));
  R(13)+=0xffffffffu;
  R(2)-=R(3);
  ST32(R(14)+32,R(11));
  R(4)=R(2);
  R(4)+=0xffffffffu;
L8c09cdec:;
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==101;
  if(!c->t) goto L8c09cdf6;
  { R(3)=0x65u; goto L8c09cdf8; }
L8c09cdf6:;
  R(3)=0x45u;
L8c09cdf8:;
  ST8(R(13),R(3));
  R(13)+=0x1u;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c09ce0c; }
  R(3)=0x2bu;
  ST8(R(13),R(3));
  { R(13)+=0x1u; goto L8c09ce18; }
L8c09ce0c:;
  R(3)=0x2du;
  ST8(R(13),R(3));
  R(13)+=0x1u;
  R(2)=LD32(R(15));
  R(2)=0u-R(2);
  ST32(R(15),R(2));
L8c09ce18:;
  R(2)=LD32(R(15));
  R(3)=0x64u;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c09ce28; }
  R(13)+=0x2u;
  { R(4)+=0x3u; goto L8c09ce34; }
L8c09ce28:;
  R(2)=0x30u;
  ST8(R(13),R(2));
  R(1)=R(2);
  R(13)+=0x1u;
  R(4)+=0x2u;
  ST8(R(13),R(1));
L8c09ce34:;
  R(6)=R(13);
  R(6)+=0x1u;
  { R(5)=0xau; goto L8c09ce54; }
L8c09ce3c:;
  R(3)=0x8c067a9cu;
  R(1)=LD32(R(15));
  { c->pr=0x8c09ce44u; R(0)=R(5); f_8c067a9c(c); }
  R(0)+=0x30u;
  R(3)=0x8c067940u;
  ST8(R(13),R(0));
  R(13)+=0xffffffffu;
  R(1)=LD32(R(15));
  { c->pr=0x8c09ce52u; R(0)=R(5); f_8c067940(c); }
  ST32(R(15),R(0));
L8c09ce54:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c09ce3c;
  R(0)=(int32_t)(int8_t)LD8(R(9));
  R(13)=R(6);
  c->t=(int32_t)R(0)==43;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c09ce70; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c09ce70;
  R(0)=R(5);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c09ce8a;
L8c09ce70:;
  R(2)=LD32(R(14)+4);
  c->t=(int32_t)R(2)>(int32_t)R(4);
  if(!c->t) goto L8c09ce8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c09ce8a;
  R(2)=LD32(R(15)+4);
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(14)+4);
  R(3)-=R(4);
  ST32(R(14)+28,R(3));
  { ST32(R(14)+40,R(11)); goto L8c09ce9a; }
L8c09ce8a:;
  R(3)=LD32(R(14)+4);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  if(!c->t) goto L8c09ce98;
  R(1)=LD32(R(14)+4);
  R(1)-=R(4);
  { ST32(R(14)+40,R(1)); goto L8c09ce9a; }
L8c09ce98:;
  ST32(R(14)+40,R(11));
L8c09ce9a:;
  R(2)=LD32(R(14)+20);
  c->t=R(2)==R(9);
  if(!c->t) goto L8c09cea4;
  R(1)=LD32(R(14)+16);
  ST32(R(14)+20,R(1));
L8c09cea4:;
  ST8(R(13),R(11));
L8c09cea6:;
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
void f_8c09ceba(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(6)=R(5);
  R(6)+=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(6));
  R(2)=0x34u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c09cf16;
  R(5)+=0xffffffffu;
  R(5)+=R(4);
  R(1)=0x30u;
  ST8(R(6),R(1));
  ST32(R(15),R(5));
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(3)+=0x1u;
  ST8(R(5),R(3));
  R(5)=LD32(R(15));
  R(6)=R(5);
  c->t=R(6)>R(4);
  { uint32_t k=!c->t; R(7)=0x39u; if(k) goto L8c09cf00; }
L8c09cee2:;
  R(2)=(int32_t)(int8_t)LD8(R(6));
  c->t=(int32_t)R(2)>(int32_t)R(7);
  if(!c->t) goto L8c09cef8;
  R(2)=(int32_t)(int8_t)LD8(R(5));
  R(3)=R(5);
  R(3)+=0xffffffffu;
  R(2)+=0xfffffff6u;
  ST8(R(5),R(2));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(2)+=0x1u;
  ST8(R(3),R(2));
L8c09cef8:;
  R(6)+=0xffffffffu;
  c->t=R(6)>R(4);
  { uint32_t k=c->t; R(5)+=0xffffffffu; if(k) goto L8c09cee2; }
L8c09cf00:;
  R(5)=R(4);
  R(5)+=0x1u;
  R(2)=(int32_t)(int8_t)LD8(R(5));
  c->t=(int32_t)R(2)>(int32_t)R(7);
  if(!c->t) goto L8c09cf16;
  R(2)=(int32_t)(int8_t)LD8(R(5));
  R(2)+=0xfffffff6u;
  ST8(R(5),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)+=0x1u;
  ST8(R(4),R(3));
L8c09cf16:;
  { R(15)+=0x4u; return; }
}
void f_8c09cf24(SH4Ctx *c) {
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c09cf2c;
  { R(0)=R(4); return; }
L8c09cf2c:;
  R(0)=0u-R(4);
  {  return; }
}
void f_8c09cf34(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0ab68cu;
  { c->pr=0x8c09cf3eu;  f_8c0ab68c(c); }
  R(3)=R(15);
  R(4)=0x7f800000u;
  fp_st(c,0,R(15));
  R(2)=LD32(R(3));
  R(2)&=R(4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c09cf64;
  R(2)=R(15);
  R(1)=LD32(R(2));
  R(3)=0x7fffffu;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c09cf5e;
  R(2)=0x8c129ae4u;
  R(0)=0x44du;
  { ST32(R(2),R(0)); goto L8c09cf64; }
L8c09cf5e:;
  R(1)=0x8c129ae4u;
  R(2)=0x44cu;
  ST32(R(1),R(2));
L8c09cf64:;
  fp_ld(c,0,R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09cf84(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0ab6a8u;
  { c->pr=0x8c09cf8eu;  f_8c0ab6a8(c); }
  R(3)=R(15);
  R(4)=0x7f800000u;
  fp_st(c,0,R(15));
  R(2)=LD32(R(3));
  R(2)&=R(4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c09cfb4;
  R(2)=R(15);
  R(1)=LD32(R(2));
  R(3)=0x7fffffu;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c09cfae;
  R(2)=0x8c129ae4u;
  R(0)=0x44du;
  { ST32(R(2),R(0)); goto L8c09cfb4; }
L8c09cfae:;
  R(1)=0x8c129ae4u;
  R(2)=0x44cu;
  ST32(R(1),R(2));
L8c09cfb4:;
  fp_ld(c,0,R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09cfd4(SH4Ctx *c) {
  R(3)=0x8c0ac1f8u;
  { R(5)=0x0u; { f_8c0ac1f8(c); return; } }
}
void f_8c09cfe0(SH4Ctx *c) {
  R(3)=0x8c0ac600u;
  R(6)=0xau;
  { R(5)=0x0u; { f_8c0ac600(c); return; } }
}
void f_8c09cfec(SH4Ctx *c) {
  R(3)=0x8c0ac600u;
  R(6)=0xau;
  { R(5)=0x0u; { f_8c0ac600(c); return; } }
}
void f_8c09cff8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0ab98cu;
  { c->pr=0x8c09d002u;  f_8c0ab98c(c); }
  R(3)=R(15);
  R(4)=0x7f800000u;
  fp_st(c,0,R(15));
  R(2)=LD32(R(3));
  R(2)&=R(4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c09d028;
  R(2)=R(15);
  R(1)=LD32(R(2));
  R(3)=0x7fffffu;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c09d022;
  R(2)=0x8c129ae4u;
  R(0)=0x44du;
  { ST32(R(2),R(0)); goto L8c09d028; }
L8c09d022:;
  R(1)=0x8c129ae4u;
  R(2)=0x44cu;
  ST32(R(1),R(2));
L8c09d028:;
  fp_ld(c,0,R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09d048(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  ST32(R(15)+8,R(7));
  { c->pr=0x8c09d058u; R(4)=0x1u; f_8c09d060(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09d060(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(6);
  R(8)=R(5);
  R(9)=R(4);
L8c09d07a:;
  R(10)=R(8);
  R(10)-=R(9);
  c->t=R(10)&1;R(10)>>=1;
  R(12)=R(8);
  R(10)+=R(9);
  R(13)=R(9);
  ST32(R(15),R(10));
  R(10)+=0xffffffffu;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(14));
  c->macl=R(10)*R(3);
  R(10)=c->macl;
  { R(10)+=R(2); goto L8c09d140; }
L8c09d096:;
  R(13)+=0x1u;
L8c09d098:;
  R(4)=R(13);
  R(2)=LD32(R(14)+4);
  R(4)+=0xffffffffu;
  R(1)=LD32(R(14));
  c->macl=R(4)*R(2);
  R(3)=LD32(R(14)+8);
  R(5)=R(10);
  R(4)=c->macl;
  { uint32_t tg=R(3); c->pr=0x8c09d0acu; R(4)+=R(1); sh4_call(c,tg); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c09d096;
  {  goto L8c09d0b6; }
L8c09d0b4:;
  R(12)+=0xffffffffu;
L8c09d0b6:;
  R(2)=LD32(R(14)+4);
  R(5)=R(12);
  R(5)+=0xffffffffu;
  R(1)=LD32(R(14));
  c->macl=R(5)*R(2);
  R(3)=LD32(R(14)+8);
  R(5)=c->macl;
  R(5)+=R(1);
  { uint32_t tg=R(3); c->pr=0x8c09d0cau; R(4)=R(10); sh4_call(c,tg); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c09d0b4;
  c->t=R(13)>R(12);
  if(c->t) goto L8c09d140;
  R(3)=R(13);
  R(3)+=0xffffffffu;
  R(11)=R(12);
  ST32(R(15)+4,R(3));
  R(4)=0x0u;
  { R(11)+=0xffffffffu; goto L8c09d112; }
L8c09d0e0:;
  R(0)=LD32(R(15)+4);
  R(6)=LD32(R(14)+4);
  R(5)=LD32(R(14));
  c->macl=R(0)*R(6);
  R(0)=c->macl;
  c->macl=R(11)*R(6);
  ST32(R(15)+8,R(0));
  R(0)+=R(5);
  R(3)=LD32(R(15)+8);
  R(6)=c->macl;
  R(3)+=R(5);
  R(7)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)+=R(4);
  R(6)+=R(5);
  R(6)+=R(4);
  R(2)=(int32_t)(int8_t)LD8(R(6));
  ST8(R(3),R(2));
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(14));
  c->macl=R(11)*R(3);
  R(3)=c->macl;
  R(3)+=R(2);
  R(3)+=R(4);
  R(4)+=0x1u;
  ST8(R(3),R(7));
L8c09d112:;
  R(3)=LD32(R(14)+4);
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c09d0e0;
  R(1)=LD32(R(15));
  c->t=R(13)==R(1);
  if(!c->t) goto L8c09d12a;
  R(10)=LD32(R(14)+4);
  R(3)=LD32(R(14));
  c->macl=R(11)*R(10);
  R(10)=c->macl;
  { R(10)+=R(3); goto L8c09d13c; }
L8c09d12a:;
  R(1)=LD32(R(15));
  c->t=R(12)==R(1);
  if(!c->t) goto L8c09d13c;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14));
  c->macl=R(2)*R(3);
  R(10)=c->macl;
  R(10)+=R(1);
L8c09d13c:;
  R(12)=R(11);
  R(13)+=0x1u;
L8c09d140:;
  R(3)=0x1u;
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c09d14a;
  c->t=R(13)>R(12);
  if(!c->t) goto L8c09d098;
L8c09d14a:;
  R(2)=R(8);
  R(3)=R(12);
  R(2)-=R(13);
  R(3)-=R(9);
  c->t=R(3)>=R(2);
  if(c->t) goto L8c09d16a;
  c->t=R(9)>=R(12);
  if(c->t) goto L8c09d162;
  R(5)=R(12);
  R(6)=R(14);
  { c->pr=0x8c09d162u; R(4)=R(9); f_8c09d060(c); }
L8c09d162:;
  c->t=R(13)>=R(8);
  if(c->t) goto L8c09d17e;
  { R(9)=R(13); goto L8c09d07a; }
L8c09d16a:;
  c->t=R(13)>=R(8);
  if(c->t) goto L8c09d176;
  R(5)=R(8);
  R(6)=R(14);
  { c->pr=0x8c09d176u; R(4)=R(13); f_8c09d060(c); }
L8c09d176:;
  c->t=R(9)>=R(12);
  if(c->t) goto L8c09d17e;
  { R(8)=R(12); goto L8c09d07a; }
L8c09d17e:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09d194(SH4Ctx *c) {
  R(3)=0x8c0c95d0u;
  { ST32(R(3),R(4)); return; }
}
void f_8c09d1a0(SH4Ctx *c) {
  R(6)=R(4);
  { R(7)=R(5); goto L8c09d1a8; }
L8c09d1a6:;
  R(6)+=0x1u;
L8c09d1a8:;
  R(2)=(int32_t)(int8_t)LD8(R(6));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09d1a6;
L8c09d1ae:;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(2)=(uint32_t)v;}
  ST8(R(6),R(2));
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c09d1ae; }
  { R(0)=R(4); return; }
}
void f_8c09d1c0(SH4Ctx *c) {
  R(6)=R(4);
  { R(4)=(uint32_t)(int32_t)(int8_t)R(5); goto L8c09d1d0; }
L8c09d1c6:;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09d1ce;
  { R(0)=0x0u; return; }
L8c09d1ce:;
  R(6)+=0x1u;
L8c09d1d0:;
  R(2)=(int32_t)(int8_t)LD8(R(6));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c09d1c6;
  R(0)=R(6);
  {  return; }
}
void f_8c09d1dc(SH4Ctx *c) {
  R(7)=R(4);
  { R(0)=R(5); goto L8c09d1e4; }
L8c09d1e2:;
  R(7)+=0x1u;
L8c09d1e4:;
  R(2)=(int32_t)(int8_t)LD8(R(7));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09d1e2;
  R(5)=0x0u;
  R(2)=R(5);
  c->t=R(2)>=R(6);
  if(c->t) goto L8c09d204;
L8c09d1f2:;
  {int32_t v=(int8_t)LD8(R(0));R(0)+=1;R(3)=(uint32_t)v;}
  ST8(R(7),R(3));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)+=0x1u; if(k) goto L8c09d204; }
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c09d1f2;
L8c09d204:;
  c->t=R(5)>=R(6);
  { uint32_t k=!c->t; R(0)=R(4); if(k) goto L8c09d20e; }
  R(3)=0x0u;
  ST8(R(7),R(3));
L8c09d20e:;
  {  return; }
}
void f_8c09d214(SH4Ctx *c) {
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; R(7)=R(5); if(k) goto L8c09d21e; }
  { R(0)=0x0u; return; }
L8c09d21e:;
  R(5)=0x0u;
  R(2)=R(5);
  c->t=R(2)>=R(6);
  if(c->t) goto L8c09d23e;
L8c09d226:;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(2)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  c->t=R(3)==R(2);
  if(!c->t) goto L8c09d23e;
  R(2)=R(4);
  R(2)+=0xffffffffu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d23e;
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c09d226;
L8c09d23e:;
  R(0)=R(4);
  R(7)+=0xffffffffu;
  R(0)+=0xffffffffu;
  R(3)=(int32_t)(int8_t)LD8(R(7));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(3)=R(3)&0xFF;
  R(0)=R(0)&0xFF;
  R(0)-=R(3);
  {  return; }
}
void f_8c09d254(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2e75b4u;
  if(c->t) goto L8c09d264;
  ST32(R(14),R(4));
L8c09d264:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09d26e;
  { R(0)=0x0u; goto L8c09d2c8; }
L8c09d26e:;
  { R(13)=0x0u; goto L8c09d298; }
L8c09d272:;
  { R(4)=R(13); goto L8c09d278; }
L8c09d276:;
  R(4)+=0x1u;
L8c09d278:;
  R(0)=R(5);
  R(6)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c09d28a;
  R(2)=0x8c2e75b4u;
  R(3)=LD32(R(2));
  R(3)=(int32_t)(int8_t)LD8(R(3));
  c->t=R(6)==R(3);
  if(!c->t) goto L8c09d276;
L8c09d28a:;
  R(0)=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d2a0;
  R(2)=LD32(R(14));
  R(2)+=0x1u;
  ST32(R(14),R(2));
L8c09d298:;
  R(3)=LD32(R(14));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09d272;
L8c09d2a0:;
  R(12)=LD32(R(14));
  R(2)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09d2ae;
  ST32(R(14),R(13));
  { R(0)=R(13); goto L8c09d2c8; }
L8c09d2ae:;
  R(2)=0x8c0ac1b8u;
  { c->pr=0x8c09d2b4u; R(4)=R(12); f_8c0ac1b8(c); }
  R(3)=R(0);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(14),R(0)); if(k) goto L8c09d2c6; }
  R(3)=LD32(R(14));
  ST8(R(3),R(13));
  R(2)=LD32(R(14));
  R(2)+=0x1u;
  ST32(R(14),R(2));
L8c09d2c6:;
  R(0)=R(12);
L8c09d2c8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09d2dc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0abaf8u;
  { c->pr=0x8c09d2e6u;  f_8c0abaf8(c); }
  R(3)=R(15);
  R(4)=0x7f800000u;
  fp_st(c,0,R(15));
  R(2)=LD32(R(3));
  R(2)&=R(4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c09d30c;
  R(2)=R(15);
  R(1)=LD32(R(2));
  R(3)=0x7fffffu;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c09d306;
  R(2)=0x8c129ae4u;
  R(0)=0x44du;
  { ST32(R(2),R(0)); goto L8c09d30c; }
L8c09d306:;
  R(1)=0x8c129ae4u;
  R(2)=0x44cu;
  ST32(R(1),R(2));
L8c09d30c:;
  fp_ld(c,0,R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09d34a(SH4Ctx *c) {
  { R(0)=0x14u; return; }
}
void f_8c09d38c(SH4Ctx *c) {
  R(0)=R(4);
  R(1)=0x8c0c96a8u;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c09d3cc(SH4Ctx *c) {
  R(0)=R(4);
  R(1)=0x8c0c9be8u;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c09d404(SH4Ctx *c) {
  R(0)=R(4);
  R(0)<<=2;
  R(3)=R(4);
  R(2)=0x8c0ca640u;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)+=R(2); return; }
}
void f_8c09d414(SH4Ctx *c) {
  R(0)=R(4);
  R(0)<<=2;
  R(3)=R(4);
  R(1)=0x8c0ca638u;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c09d424(SH4Ctx *c) {
  R(0)=R(4);
  R(0)<<=2;
  R(3)=R(4);
  R(1)=0x8c0ca63cu;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c09d46c(SH4Ctx *c) {
  R(0)=R(4);
  R(1)=0x8c0ca768u;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c09d4a4(SH4Ctx *c) {
  R(1)=0x8c0cb838u;
  R(0)=R(4);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c09d4e0(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d4f8;
  R(3)=0x8c064e90u;
  R(6)=0x2bu;
  R(5)=0x8c0bd3a8u;
  { c->pr=0x8c09d4f4u; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c09d502; }
L8c09d4f8:;
  R(1)=0x8c0199c4u;
  R(6)=0x2bu;
  R(5)=0x8c0bd3a8u;
  { c->pr=0x8c09d502u; R(4)=0xcu; f_8c0199c4(c); }
L8c09d502:;
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(0)=R(4); if(k) goto L8c09d512; }
  R(5)=0x0u;
  ST32(R(4),R(5));
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
L8c09d512:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09d518(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=R(4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c09d5a2; }
  R(4)=LD32(R(15));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c09d536; }
  { R(13)=LD32(R(4)); goto L8c09d538; }
L8c09d536:;
  R(13)=0x0u;
L8c09d538:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09d596;
L8c09d53c:;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09d548;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c09d548:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d554;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c09d554:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d57e;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c09d570;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c09d570:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c09d57e;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c09d57e:;
  ST32(R(4),R(14));
  ST32(R(4)+4,R(14));
  { c->pr=0x8c09d586u; ST32(R(4)+8,R(14)); f_8c09d894(c); }
  R(4)=R(13);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09d590;
  { R(13)=LD32(R(4)); goto L8c09d592; }
L8c09d590:;
  R(13)=R(14);
L8c09d592:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c09d53c;
L8c09d596:;
  R(2)=0x8c064eb8u;
  R(6)=0x46u;
  R(5)=0x8c0bd3a8u;
  { c->pr=0x8c09d5a0u; R(4)=R(15); f_8c064eb8(c); }
  ST32(R(15),R(14));
L8c09d5a2:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09d5ac(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=R(7);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=R(6);
  { uint32_t k=!c->t; R(5)=R(10); if(k) goto L8c09d5cc; }
  {  goto L8c09d6a0; }
L8c09d5cc:;
  R(4)=LD32(R(14));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(6)=0x1u; if(k) goto L8c09d626; }
L8c09d5d4:;
  R(3)=LD32(R(4)+12);
  c->t=R(3)==R(11);
  if(!c->t) goto L8c09d620;
  ST32(R(4)+20,R(13));
  ST32(R(4)+16,R(13));
  ST32(R(4)+28,R(12));
  ST32(R(4)+24,R(12));
  { R(5)=R(6); goto L8c09d626; }
L8c09d620:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c09d5d4;
L8c09d626:;
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c09d6a0;
  R(5)=R(12);
  R(6)=R(13);
  { c->pr=0x8c09d634u; R(4)=R(11); f_8c09d818(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09d6a0;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09d646;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c09d646:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d652;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c09d652:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d67c;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c09d66e;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c09d66e:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c09d67c;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c09d67c:;
  ST32(R(4),R(10));
  ST32(R(4)+4,R(10));
  ST32(R(4)+8,R(10));
  ST32(R(4),R(10));
  R(2)=LD32(R(14)+4);
  ST32(R(4)+4,R(2));
  ST32(R(4)+8,R(14));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09d694;
  { ST32(R(14),R(4)); goto L8c09d698; }
L8c09d694:;
  R(2)=LD32(R(14)+4);
  ST32(R(2),R(4));
L8c09d698:;
  ST32(R(14)+4,R(4));
  R(3)=LD32(R(14)+8);
  R(3)+=0x1u;
  ST32(R(14)+8,R(3));
L8c09d6a0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09d6ae(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c09d72e;
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c09d6c2; }
  { R(6)=LD32(R(14)); goto L8c09d6c4; }
L8c09d6c2:;
  R(6)=0x0u;
L8c09d6c4:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c09d72e;
L8c09d6c8:;
  R(2)=LD32(R(14)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c09d71e;
  R(1)=LD32(R(14));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c09d6da;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(14));
  ST32(R(3)+4,R(2));
L8c09d6da:;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d6e6;
  R(2)=LD32(R(14));
  R(3)=LD32(R(14)+4);
  ST32(R(3),R(2));
L8c09d6e6:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d710;
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c09d702;
  R(3)=LD32(R(14));
  R(1)=LD32(R(14)+8);
  ST32(R(1),R(3));
L8c09d702:;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c09d710;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14)+8);
  ST32(R(1)+4,R(3));
L8c09d710:;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(4));
  ST32(R(14)+8,R(4));
  { c->pr=0x8c09d71au; R(4)=R(14); f_8c09d894(c); }
  {  goto L8c09d72e; }
L8c09d71e:;
  R(14)=R(6);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c09d728;
  { R(6)=LD32(R(14)); goto L8c09d72a; }
L8c09d728:;
  R(6)=0x0u;
L8c09d72a:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c09d6c8;
L8c09d72e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09d740(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c09d79a;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c09d79a;
  R(4)=LD32(R(4));
  R(13)=~R(6);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c09d79a; }
L8c09d756:;
  R(2)=LD32(R(4)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c09d794;
  R(0)=R(7);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09d77a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09d77a;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09d782;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c09d782;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c09d786;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c09d78e;
  {  goto L8c09d790; }
L8c09d77a:;
  R(2)=LD32(R(4)+16);
  R(2)|=R(6);
  { ST32(R(4)+16,R(2)); goto L8c09d790; }
L8c09d782:;
  { ST32(R(4)+16,R(6)); goto L8c09d790; }
L8c09d786:;
  R(3)=LD32(R(4)+16);
  R(3)&=R(13);
  { ST32(R(4)+16,R(3)); goto L8c09d790; }
L8c09d78e:;
  ST32(R(4)+16,R(14));
L8c09d790:;
  { R(0)=0x0u; goto L8c09d79c; }
L8c09d794:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c09d756;
L8c09d79a:;
  R(0)=0xffffffffu;
L8c09d79c:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09d7a2(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09d7c4;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c09d7c4;
  R(7)=LD32(R(4));
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c09d7c4;
L8c09d7b0:;
  R(2)=LD32(R(7)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c09d7be;
  R(1)=LD32(R(7)+16);
  ST32(R(6),R(1));
  { R(0)=0x0u; return; }
L8c09d7be:;
  R(7)=LD32(R(7));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c09d7b0;
L8c09d7c4:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c09d7ca(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09d7ea;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c09d7ea;
  R(7)=LD32(R(4));
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c09d7ea;
L8c09d7d8:;
  R(2)=LD32(R(7)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c09d7e4;
  ST32(R(7)+24,R(6));
  { R(0)=0x0u; return; }
L8c09d7e4:;
  R(7)=LD32(R(7));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c09d7d8;
L8c09d7ea:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c09d7f0(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09d812;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c09d812;
  R(7)=LD32(R(4));
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c09d812;
L8c09d7fe:;
  R(2)=LD32(R(7)+12);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c09d80c;
  R(1)=LD32(R(7)+24);
  ST32(R(6),R(1));
  { R(0)=0x0u; return; }
L8c09d80c:;
  R(7)=LD32(R(7));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c09d7fe;
L8c09d812:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c09d818(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(2)=0x8c0c758cu;
  ST32(R(15)+8,R(4));
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d860;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bd3a8u;
  R(6)=0xfbu;
  { c->pr=0x8c09d834u; R(4)=0x20u; f_8c064e90(c); }
  {  goto L8c09d86a; }
L8c09d860:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bd3a8u;
  R(6)=0xfbu;
  { c->pr=0x8c09d86au; R(4)=0x20u; f_8c0199c4(c); }
L8c09d86a:;
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09d88c;
  R(5)=0x0u;
  ST32(R(4),R(5));
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  R(3)=LD32(R(15)+8);
  ST32(R(4)+12,R(3));
  R(2)=LD32(R(15)+4);
  ST32(R(4)+20,R(2));
  R(3)=LD32(R(15)+4);
  ST32(R(4)+16,R(3));
  R(2)=LD32(R(15));
  ST32(R(4)+28,R(2));
  R(3)=LD32(R(15));
  ST32(R(4)+24,R(3));
L8c09d88c:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c09d894(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=R(4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c09d8ae; }
  R(3)=0x8c064eb8u;
  R(5)=0x8c0bd3a8u;
  R(6)=0x10fu;
  { c->pr=0x8c09d8aau; R(4)=R(15); f_8c064eb8(c); }
  R(2)=0x0u;
  ST32(R(15),R(2));
L8c09d8ae:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09d8c4(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c09d900(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09d908;
  { R(0)=LD32(R(4)+24); return; }
L8c09d908:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c09d908(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c09d91c(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c09d940(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(2)=LD32(R(4)+4);
  ST32(R(5),R(3));
  ST32(R(5)+4,R(2));
  R(3)=LD32(R(4)+8);
  { ST32(R(5)+8,R(3)); return; }
}
void f_8c09d94e(SH4Ctx *c) {
  R(0)=0xcu;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c09d954(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  ST32(R(15),R(5));
  R(3)=LD32(R(4)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d984;
  R(2)=LD32(R(4));
  R(3)=R(15);
  R(3)+=0x8u;
  R(1)=LD32(R(4)+4);
  ST32(R(3),R(2));
  R(6)=R(15);
  ST32(R(3)+4,R(1));
  R(6)+=0x8u;
  R(2)=LD32(R(4)+8);
  ST32(R(3)+8,R(2));
  R(5)=LD32(R(4)+16);
  R(3)=0x8c014eaau;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c09d980u; R(4)=LD32(R(15)); f_8c014eaa(c); }
  {  goto L8c09d992; }
L8c09d984:;
  R(2)=LD32(R(4));
  R(3)=LD32(R(15));
  R(1)=LD32(R(4)+4);
  ST32(R(3),R(2));
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(4)+8);
  ST32(R(3)+8,R(2));
L8c09d992:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09d9c0(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(6)=LD32(R(5)+4);
  R(0)=0x10u;
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(6)+12);
  ST32(R(15),R(6));
  R(6)=LD32(R(6));
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09d9d8;
  { R(6)=LD32(R(6)+4); goto L8c09d9da; }
L8c09d9d8:;
  R(6)=LD32(R(6)+8);
L8c09d9da:;
  R(5)=LD32(R(6)+16);
  R(3)=0x68u;
  R(4)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(5)+6);
  R(2)=LD32(R(5));
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(0)+=R(2);
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(1)=R(0);
  R(4)+=R(2);
  R(4)<<=2;
  R(4)+=R(1);
  fp_st(c,4,R(4));
  { R(15)+=0x8u; return; }
}
void f_8c09d9fe(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(6)=LD32(R(5)+4);
  R(0)=0x10u;
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(6)+12);
  ST32(R(15),R(6));
  R(6)=LD32(R(6));
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09da16;
  { R(6)=LD32(R(6)+4); goto L8c09da18; }
L8c09da16:;
  R(6)=LD32(R(6)+8);
L8c09da18:;
  R(5)=LD32(R(6)+16);
  R(3)=0x68u;
  R(4)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(5)+6);
  R(2)=LD32(R(5));
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(0)+=R(2);
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(1)=R(0);
  R(4)+=R(2);
  R(4)<<=2;
  R(4)+=R(1);
  fp_ld(c,0,R(4));
  { R(15)+=0x8u; return; }
}
void f_8c09da3c(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(7)=LD32(R(5)+4);
  R(0)=0x10u;
  ST32(R(15)+4,R(7));
  R(7)=LD32(R(7)+12);
  ST32(R(15),R(7));
  R(7)=LD32(R(7));
  R(3)=(int32_t)(int8_t)LD8(R(7)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09da54;
  { R(7)=LD32(R(7)+4); goto L8c09da56; }
L8c09da54:;
  R(7)=LD32(R(7)+8);
L8c09da56:;
  R(5)=LD32(R(7)+16);
  R(3)=0x68u;
  R(4)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(5)+6);
  R(2)=LD32(R(5));
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(0)+=R(2);
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(1)=R(0);
  R(4)+=R(2);
  R(4)<<=2;
  R(4)+=R(1);
  ST32(R(4),R(6));
  { R(15)+=0x8u; return; }
}
void f_8c09da7a(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(6)=LD32(R(5)+4);
  R(0)=0x10u;
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(6)+12);
  ST32(R(15),R(6));
  R(6)=LD32(R(6));
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09da92;
  { R(6)=LD32(R(6)+4); goto L8c09da94; }
L8c09da92:;
  R(6)=LD32(R(6)+8);
L8c09da94:;
  R(5)=LD32(R(6)+16);
  R(3)=0x68u;
  R(4)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(5)+6);
  R(2)=LD32(R(5));
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(0)+=R(2);
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(4)<<=2;
  R(0)=LD32(R(4)+R(0));
  { R(15)+=0x8u; return; }
}
void f_8c09dab4(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(7)=LD32(R(5)+4);
  R(0)=0x10u;
  ST32(R(15)+4,R(7));
  R(7)=LD32(R(7)+12);
  ST32(R(15),R(7));
  R(7)=LD32(R(7));
  R(3)=(int32_t)(int8_t)LD8(R(7)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09dacc;
  { R(7)=LD32(R(7)+4); goto L8c09dace; }
L8c09dacc:;
  R(7)=LD32(R(7)+8);
L8c09dace:;
  R(5)=LD32(R(7)+16);
  R(3)=0x68u;
  R(4)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(5)+6);
  R(2)=LD32(R(5));
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(0)+=R(2);
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(1)=R(0);
  R(4)+=R(2);
  R(4)<<=2;
  R(4)+=R(1);
  ST32(R(4),R(6));
  { R(15)+=0x8u; return; }
}
void f_8c09daf2(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(6)=LD32(R(5)+4);
  R(0)=0x10u;
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(6)+12);
  ST32(R(15),R(6));
  R(6)=LD32(R(6));
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09db0a;
  { R(6)=LD32(R(6)+4); goto L8c09db0c; }
L8c09db0a:;
  R(6)=LD32(R(6)+8);
L8c09db0c:;
  R(5)=LD32(R(6)+16);
  R(3)=0x68u;
  R(4)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(5)+6);
  R(2)=LD32(R(5));
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(0)+=R(2);
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(4)<<=2;
  R(0)=LD32(R(4)+R(0));
  { R(15)+=0x8u; return; }
}
void f_8c09db2c(SH4Ctx *c) {
  R(15)+=0xffffffe8u;
  R(0)=R(4);
  ST8(R(15)+8,R(0));
  R(0)=0x10u;
  ST32(R(15)+12,R(6));
  R(4)=LD32(R(5)+4);
  ST32(R(15)+4,R(4));
  R(4)=LD32(R(4)+12);
  ST32(R(15),R(4));
  R(4)=LD32(R(4));
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09db4a;
  { R(3)=LD32(R(4)+4); goto L8c09db4c; }
L8c09db4a:;
  R(3)=LD32(R(4)+8);
L8c09db4c:;
  ST32(R(15)+20,R(3));
  R(4)=LD32(R(3)+16);
  R(5)=LD32(R(15)+12);
  R(3)=R(4);
  ST32(R(15)+16,R(4));
  R(0)=(int32_t)(int8_t)LD8(R(3)+6);
  R(3)=0x68u;
  R(4)=LD32(R(4));
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(4)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=0x8c05e6eau;
  R(0)<<=2;
  R(4)+=R(0);
  { R(15)+=0x18u; { f_8c05e6ea(c); return; } }
}
void f_8c09db78(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(6)=LD32(R(5)+4);
  R(0)=0x10u;
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(6)+12);
  ST32(R(15),R(6));
  R(6)=LD32(R(6));
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09db90;
  { R(6)=LD32(R(6)+4); goto L8c09db92; }
L8c09db90:;
  R(6)=LD32(R(6)+8);
L8c09db92:;
  R(5)=LD32(R(6)+16);
  R(3)=0x68u;
  R(4)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(5)+6);
  R(2)=LD32(R(5));
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(0)+=R(2);
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(4)<<=2;
  R(0)+=R(4);
  { R(15)+=0x8u; return; }
}
void f_8c09dbe0(SH4Ctx *c) {
  {  return; }
}
void f_8c09dbe4(SH4Ctx *c) {
  {  return; }
}
void f_8c09dbe8(SH4Ctx *c) {
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c09dbfa;
  R(2)=LD32(R(4));
  R(3)=0x8u;
  c->fpul=R(2);
  fp_float(c,3);
  fp_st(c,3,R(4));
  ST32(R(4)+12,R(3));
L8c09dbfa:;
  {  return; }
}
void f_8c09dbfe(SH4Ctx *c) {
  R(3)=0x8c072282u;
  {  { f_8c072282(c); return; } }
}
void f_8c09dc04(SH4Ctx *c) {
  R(3)=0x8c072282u;
  {  { f_8c072282(c); return; } }
}
void f_8c09dc0a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=0x8c0b0a20u;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c09dc1au; R(4)=LD32(R(15)); f_8c0b0a20(c); }
  R(3)=0x8c0b0a60u;
  ST32(R(15)+16,R(0));
  { c->pr=0x8c09dc22u; R(4)=LD32(R(15)); f_8c0b0a60(c); }
  R(3)=0x8c0b0a10u;
  ST32(R(15)+12,R(0));
  { c->pr=0x8c09dc2au; R(4)=LD32(R(15)+16); f_8c0b0a10(c); }
  ST32(R(15),R(0));
  { uint32_t tg=R(0); c->pr=0x8c09dc30u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(4)=LD32(R(15)+8);
  R(5)=LD32(R(15)+4);
  R(0)=LD32(R(15)+12);
  R(15)+=0x14u;
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} sh4_call(c,tg); return; }
}
void f_8c09dc3c(SH4Ctx *c) {
  {  return; }
}
void f_8c09dc40(SH4Ctx *c) {
  {  return; }
}
void f_8c09dc44(SH4Ctx *c) {
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c09dc56;
  R(2)=LD32(R(4));
  R(3)=0x8u;
  c->fpul=R(2);
  fp_float(c,3);
  fp_st(c,3,R(4));
  ST32(R(4)+12,R(3));
L8c09dc56:;
  {  return; }
}
void f_8c09dc5a(SH4Ctx *c) {
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c09dc6c;
  fp_ld(c,3,R(4));
  R(2)=0x6u;
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(4),R(3));
  ST32(R(4)+12,R(2));
L8c09dc6c:;
  {  return; }
}
void f_8c09dc70(SH4Ctx *c) {
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c09dc82;
  fp_ld(c,3,R(4));
  R(2)=0x6u;
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(4),R(3));
  ST32(R(4)+12,R(2));
L8c09dc82:;
  {  return; }
}
void f_8c09dcc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0b0a20u;
  R(14)=R(6);
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  { c->pr=0x8c09dcd4u; R(4)=LD32(R(15)); f_8c0b0a20(c); }
  R(3)=0x8c0b0a50u;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c09dcdcu; R(4)=LD32(R(15)); f_8c0b0a50(c); }
  R(3)=0x8c0b0a00u;
  ST32(R(15),R(0));
  { c->pr=0x8c09dce4u; R(4)=LD32(R(15)+4); f_8c0b0a00(c); }
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  ST32(R(15)+4,R(0));
  R(6)=0xcu;
  { c->pr=0x8c09dcf0u; R(4)=R(14); f_8c0686b8(c); }
  R(2)=0x0u;
  R(5)=R(14);
  ST32(R(14)+12,R(2));
  R(13)=LD32(R(15));
  { uint32_t tg=R(13); c->pr=0x8c09dcfcu; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=(uint32_t)(int32_t)(int8_t)R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c09dd0a;
  R(2)=LD32(R(15)+4);
  { uint32_t tg=R(2); c->pr=0x8c09dd0au; R(4)=R(14); sh4_call(c,tg); }
L8c09dd0a:;
  R(0)=R(13);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09dd40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(2)=0x8c2e7628u;
  R(13)=R(4);
  R(14)=R(5);
  c->fr[13]=0x3F800000u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; c->fr[14]=0x00000000u; if(k) goto L8c09dd62; }
  {  goto L8c09de80; }
L8c09dd62:;
  R(0)=0x4u;
  R(3)=0x8c076180u;
  R(5)=R(15);
  fp_st(c,14,R(15));
  fp_st(c,14,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x8c09de64u;
  fp_ld(c,15,R(0));
  R(4)=LD32(R(13)+8);
  fp_mov(c,4,15);
  { c->pr=0x8c09dd7cu; R(4)+=0x40u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09dda6;
  R(3)=LD32(R(13)+8);
  R(0)=0x40u;
  c->fr[3]=0x3F800000u;
  fp_st(c,14,R(0)+R(3));
  R(0)=0x44u;
  R(3)=LD32(R(13)+8);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x48u;
  R(3)=LD32(R(13)+8);
  fp_st(c,14,R(0)+R(3));
  R(5)=LD32(R(13)+8);
  R(3)=0x8c05e6eau;
  R(5)+=0x40u;
  { c->pr=0x8c09dda2u; R(4)=R(14); f_8c05e6ea(c); }
  {  goto L8c09ddea; }
L8c09dda6:;
  R(4)=LD32(R(13)+8);
  R(0)=0x40u;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x44u;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x48u;
  fp_mov(c,0,6);
  R(3)=R(4);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x40u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x44u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  R(3)=LD32(R(13)+8);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x48u;
  R(3)=LD32(R(13)+8);
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,4,3);
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
L8c09ddea:;
  R(4)=LD32(R(13)+8);
  R(5)=R(15);
  R(3)=0x8c076180u;
  fp_mov(c,4,15);
  { c->pr=0x8c09ddf6u; R(4)+=0x4cu; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09de12;
  R(3)=LD32(R(13)+8);
  R(0)=0x4cu;
  fp_st(c,14,R(0)+R(3));
  R(0)=0x50u;
  R(3)=LD32(R(13)+8);
  fp_st(c,14,R(0)+R(3));
  R(0)=0x54u;
  R(3)=LD32(R(13)+8);
  fp_st(c,13,R(0)+R(3));
  {  goto L8c09df08; }
L8c09de12:;
  R(4)=LD32(R(13)+8);
  R(0)=0x4cu;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x50u;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x54u;
  fp_mov(c,0,4);
  R(3)=R(4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x4cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)+=0x6cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x50u;
  R(3)=LD32(R(13)+8);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(3));
  R(0)+=0x6cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x54u;
  R(3)=LD32(R(13)+8);
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,4,3);
  R(0)+=0x6cu;
  { fp_st(c,4,R(0)+R(13)); goto L8c09df08; }
L8c09de80:;
  R(1)=LD32(R(13)+12);
  R(0)=0x6cu;
  R(3)=LD32(R(1)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09deda;
  R(5)=R(13);
  R(3)=0x8c05e612u;
  R(6)=R(13);
  R(5)+=0x68u;
  R(6)+=0x50u;
  { c->pr=0x8c09de98u; R(4)=R(14); f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,5,R(14));
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
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
  R(0)=0xb8u;
  fp_st(c,14,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(13));
  R(0)+=0x4u;
  { fp_st(c,13,R(0)+R(13)); goto L8c09df08; }
L8c09deda:;
  R(6)=0xb8u;
  R(5)=R(14);
  R(1)=0x8c0762fau;
  R(6)+=R(13);
  { c->pr=0x8c09dee6u; R(4)=R(13); f_8c0762fa(c); }
  R(0)=0xb8u;
  fp_st(c,14,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,13,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_unary(c,0,3);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(14));
L8c09df08:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09df18(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(12)=R(5);
  c->t=(R(12)&R(12))==0;
  R(13)=R(6);
  R(11)=R(4);
  { uint32_t k=!c->t; R(14)=R(7); if(k) goto L8c09df80; }
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(13));
  fp_st(c,4,R(0)+R(13));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x4u;
  fp_st(c,4,R(14));
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8u;
  { fp_st(c,4,R(0)+R(14)); goto L8c09e054; }
L8c09df80:;
  R(3)=0x8c046e08u;
  { c->pr=0x8c09df86u; R(4)=LD32(R(11)+12); f_8c046e08(c); }
  R(2)=0xffu;
  R(4)=R(0);
  R(10)=R(4)&0xFF;
  c->t=R(10)==R(2);
  if(c->t) goto L8c09dfb2;
  R(5)=LD32(R(12)+4);
  R(0)=0xa0u;
  R(5)=LD32(R(5));
  R(12)=LD32(R(5)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(5)=R(4)&0xFF; if(k) goto L8c09dfae; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(12);
  { R(4)=LD32(R(4)); goto L8c09dfb0; }
L8c09dfae:;
  R(4)=0x0u;
L8c09dfb0:;
  R(12)=R(4);
L8c09dfb2:;
  R(2)=0x8c0163ceu;
  R(5)=R(14);
  { c->pr=0x8c09dfbau; R(4)=LD32(R(12)+36); f_8c0163ce(c); }
  R(3)=LD32(R(11)+8);
  R(0)=0x74u;
  R(4)=0x2u;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c09dfe8;
  R(1)=LD32(R(11)+12);
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c09dfe8;
  R(1)=0xffu;
  c->t=R(10)==R(1);
  if(!c->t) goto L8c09dfe2;
  R(2)=LD32(R(12)+4);
  R(3)=LD32(R(2)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09dfe8;
L8c09dfe2:;
  R(3)=0xffu;
  c->t=R(10)==R(3);
  if(c->t) goto L8c09e020;
L8c09dfe8:;
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  { c->pr=0x8c09dff0u; R(4)=R(13); f_8c05e6ea(c); }
  {  goto L8c09e02c; }
L8c09e020:;
  R(3)=0x8c2cff44u;
  R(5)=R(13);
  R(2)=0x8c0473a0u;
  fp_ld(c,4,R(3));
  { c->pr=0x8c09e02cu; R(4)=LD32(R(11)+8); f_8c0473a0(c); }
L8c09e02c:;
  R(5)=LD32(R(11)+12);
  R(3)=0x8c05e6eau;
  R(5)+=0xcu;
  { c->pr=0x8c09e036u; R(4)=R(15); f_8c05e6ea(c); }
  R(2)=0x8c015060u;
  R(6)=R(15);
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c09e040u; R(4)=R(15); f_8c015060(c); }
  R(3)=0x8c05e5f4u;
  R(5)=R(13);
  R(6)=R(15);
  { c->pr=0x8c09e04au; R(4)=R(13); f_8c05e5f4(c); }
  R(2)=0x8c05e5f4u;
  R(5)=R(14);
  R(6)=R(15);
  { c->pr=0x8c09e054u; R(4)=R(14); f_8c05e5f4(c); }
L8c09e054:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09e064(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(0)=0x6cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+12);
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(7)=R(14); if(k) goto L8c09e082; }
  R(3)=LD32(R(14)+12);
  R(0)=0x72u;
  R(2)=0x2u;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
L8c09e082:;
  R(5)=LD32(R(14)+12);
  R(0)=0x68u;
  R(6)=R(14);
  R(7)+=0x44u;
  R(5)=LD32(R(5)+R(0));
  R(6)+=0x50u;
  { c->pr=0x8c09e092u; R(4)=R(14); f_8c09df18(c); }
  R(2)=LD32(R(14)+12);
  R(0)=0x6cu;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09e13a;
  R(5)=LD32(R(14)+12);
  R(6)=R(14);
  R(7)=R(14);
  R(7)+=0x5cu;
  R(5)=LD32(R(5)+R(0));
  R(6)+=0x68u;
  { c->pr=0x8c09e0acu; R(4)=R(14); f_8c09df18(c); }
  R(0)=0x50u;
  R(3)=LD32(R(14)+8);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x50u;
  fp_arith(c,1,0,4);
  fp_mov(c,2,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x54u;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x6cu;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x58u;
  R(3)=LD32(R(14)+8);
  fp_arith(c,1,0,4);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x54u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x58u;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x70u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x58u;
  R(3)=LD32(R(14)+8);
  fp_arith(c,1,0,4);
  fp_ld(c,3,R(0)+R(3));
  fp_mov(c,2,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x44u;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x58u;
  R(3)=LD32(R(14)+8);
  fp_arith(c,1,0,4);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x44u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x48u;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x60u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x58u;
  R(3)=LD32(R(14)+8);
  fp_arith(c,1,0,4);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x48u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x4cu;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x64u;
  fp_ld(c,0,R(0)+R(14));
  R(3)=LD32(R(14)+8);
  fp_arith(c,1,0,4);
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4cu;
  fp_mov(c,2,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
L8c09e13a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09e160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(4);
  R(3)=LD32(R(14)+12);
  R(0)=0x72u;
  R(12)=0x8c05e6eau;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(3)=0x1000u;
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c09e182;
  R(5)=LD32(R(14)+8);
  { R(5)+=0x28u; goto L8c09e1aa; }
L8c09e182:;
  R(2)=LD32(R(14)+12);
  R(0)=0x68u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c09e19c;
  R(0)=0xa0u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(14));
  R(0)+=0x4u;
  { fp_st(c,4,R(0)+R(14)); goto L8c09e242; }
L8c09e19c:;
  R(1)=LD32(R(14)+12);
  R(0)=0x6cu;
  R(2)=LD32(R(1)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09e1e0;
  R(5)=R(14);
  R(5)+=0x50u;
L8c09e1aa:;
  R(4)=0xa0u;
  { uint32_t tg=R(12); c->pr=0x8c09e1b0u; R(4)+=R(14); sh4_call(c,tg); }
  {  goto L8c09e242; }
L8c09e1e0:;
  R(2)=0x8c046e08u;
  R(0)=0x68u;
  R(4)=LD32(R(14)+12);
  { c->pr=0x8c09e1eau; R(13)=LD32(R(4)+R(0)); f_8c046e08(c); }
  R(2)=0xffu;
  R(5)=R(0);
  R(3)=R(5)&0xFF;
  c->t=R(3)==R(2);
  if(c->t) goto L8c09e216;
  R(4)=LD32(R(13)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(13)=LD32(R(4)+R(0));
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(5)=R(5)&0xFF; if(k) goto L8c09e212; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(13);
  { R(4)=LD32(R(4)); goto L8c09e214; }
L8c09e212:;
  R(4)=0x0u;
L8c09e214:;
  R(13)=R(4);
L8c09e216:;
  R(5)=LD32(R(14)+12);
  { uint32_t tg=R(12); c->pr=0x8c09e21cu; R(4)=R(15); sh4_call(c,tg); }
  R(3)=0x8c015060u;
  R(6)=R(15);
  R(5)=LD32(R(13)+36);
  { c->pr=0x8c09e226u; R(4)=R(15); f_8c015060(c); }
  R(4)=0xa0u;
  R(5)=R(14);
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c09e234u; R(4)+=R(14); f_8c05e5f4(c); }
  R(4)=0xa0u;
  R(5)=R(14);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c09e242u; R(4)+=R(14); f_8c05e5f4(c); }
L8c09e242:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09e24e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x8c09e290u;
  ST32(R(15),R(7));
  fp_ld(c,3,R(0));
  R(14)=R(5);
  fp_cmp(c,1,3,5);
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c09e2a0; }
  fp_ld(c,2,R(14));
  { fp_st(c,2,R(13)); goto L8c09e356; }
L8c09e2a0:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  { uint32_t k=!c->t; fp_mov(c,13,4); if(k) goto L8c09e310; }
  R(0)=0x8c09e380u;
  fp_mov(c,14,4);
  fp_ld(c,2,R(0));
  R(0)=0x8c09e384u;
  fp_arith(c,0,5,2);
  fp_arith(c,1,14,5);
  fp_cmp(c,1,3,14);
  { uint32_t k=!c->t; fp_ld(c,6,R(0)); if(k) goto L8c09e2bc; }
  fp_arith(c,0,14,6);
L8c09e2bc:;
  fp_mov(c,15,4);
  fp_arith(c,0,15,5);
  fp_cmp(c,1,15,6);
  if(!c->t) goto L8c09e2ca;
  R(0)=0x8c09e388u;
  fp_ld(c,3,R(0));
  fp_arith(c,0,15,3);
L8c09e2ca:;
  fp_cmp(c,1,15,14);
  if(!c->t) goto L8c09e2e0;
  fp_ld(c,5,R(14));
  fp_cmp(c,1,14,5);
  if(c->t) goto L8c09e2dc;
  fp_cmp(c,1,5,15);
  if(c->t) goto L8c09e2dc;
  { R(4)=0x1u; goto L8c09e2f0; }
L8c09e2dc:;
  { R(4)=0x0u; goto L8c09e2f0; }
L8c09e2e0:;
  fp_ld(c,5,R(14));
  fp_cmp(c,1,5,15);
  if(!c->t) goto L8c09e2ee;
  fp_cmp(c,1,14,5);
  if(!c->t) goto L8c09e2ee;
  { R(4)=0x0u; goto L8c09e2f0; }
L8c09e2ee:;
  R(4)=0x1u;
L8c09e2f0:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c09e30e;
  fp_mov(c,3,4);
  R(3)=0x8c076252u;
  fp_ld(c,4,R(14));
  { c->pr=0x8c09e2feu; fp_arith(c,1,4,3); f_8c076252(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c09e30a;
  { fp_mov(c,13,15); goto L8c09e310; }
L8c09e30a:;
  { fp_mov(c,13,14); goto L8c09e310; }
L8c09e30e:;
  fp_ld(c,13,R(14));
L8c09e310:;
  R(3)=0x8c076252u;
  fp_ld(c,3,R(14));
  fp_mov(c,4,13);
  { c->pr=0x8c09e31au; fp_arith(c,1,4,3); f_8c076252(c); }
  c->fr[2]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,2);
  R(2)=LD32(R(15));
  R(3)=0x8c2cff9cu;
  fp_st(c,4,R(2));
  { uint32_t k=!c->t; fp_ld(c,5,R(3)); if(k) goto L8c09e32e; }
  { fp_mov(c,3,4); goto L8c09e332; }
L8c09e32e:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c09e332:;
  fp_cmp(c,1,5,3);
  if(c->t) goto L8c09e352;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c09e342;
  fp_ld(c,2,R(14));
  { fp_arith(c,0,2,5); goto L8c09e346; }
L8c09e342:;
  fp_ld(c,2,R(14));
  fp_arith(c,1,2,5);
L8c09e346:;
  R(3)=0x8c07627cu;
  fp_st(c,2,R(13));
  { c->pr=0x8c09e34eu; fp_mov(c,4,2); f_8c07627c(c); }
  { fp_st(c,0,R(13)); goto L8c09e354; }
L8c09e352:;
  fp_st(c,13,R(13));
L8c09e354:;
  fp_st(c,13,R(14));
L8c09e356:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09e3a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  R(3)=LD32(R(14)+12);
  R(2)=0xb8u;
  R(13)=R(7);
  ST32(R(15)+4,R(3));
  R(7)=R(13);
  R(2)+=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c07621au;
  { c->pr=0x8c09e3c4u; R(4)=LD32(R(15)+12); f_8c07621a(c); }
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  { uint32_t k=!c->t; R(15)+=0x8u; if(k) goto L8c09e3de; }
  R(0)=LD32(R(14)+12);
  R(2)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c09e3e6;
L8c09e3de:;
  c->fr[4]=0x00000000u;
  fp_mov(c,5,4);
  { fp_mov(c,15,4); goto L8c09e3f0; }
L8c09e3e6:;
  R(4)=LD32(R(14)+12);
  R(0)=0x2cu;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x34u;
  fp_ld(c,15,R(0)+R(4));
L8c09e3f0:;
  R(0)=0x74u;
  R(6)=R(14);
  R(3)=0x0u;
  R(7)=R(14);
  ST8(R(14)+R(0),R(3));
  R(0)=0x28u;
  R(3)=LD32(R(14)+12);
  R(5)=R(13);
  R(6)+=0x78u;
  fp_ld(c,4,R(0)+R(3));
  R(7)+=0x7cu;
  { c->pr=0x8c09e40au; R(4)=R(14); f_8c09e24e(c); }
  R(0)=0x78u;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c09e41a;
  R(0)=0x74u;
  R(2)=0x1u;
  ST8(R(14)+R(0),R(2));
L8c09e41a:;
  R(0)=LD32(R(14)+8);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; fp_mov(c,5,15); if(k) goto L8c09e42e; }
  R(2)=LD32(R(14)+16);
  R(0)=0x30u;
  { fp_ld(c,4,R(0)+R(2)); goto L8c09e434; }
L8c09e42e:;
  R(3)=LD32(R(14)+12);
  R(0)=0x30u;
  fp_ld(c,4,R(0)+R(3));
L8c09e434:;
  R(5)=LD32(R(15)+24);
  R(6)=R(15);
  R(7)=R(15);
  { c->pr=0x8c09e43eu; R(4)=R(14); f_8c09e24e(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09e480(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=0x4u;
  R(3)=0x8c05e6eau;
  R(14)=R(5);
  R(13)=R(4);
  R(4)=R(15);
  R(5)=R(14);
  fp_st(c,5,R(15));
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c09e49cu; R(4)+=0x8u; f_8c05e6ea(c); }
  R(2)=0x8c0a2f0eu;
  R(4)=R(15);
  R(6)=R(13);
  R(5)=R(13);
  { c->pr=0x8c09e4a8u; R(4)+=0x4u; f_8c0a2f0e(c); }
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(13));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(14));
  fp_ld(c,1,R(13));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(0)+R(14));
  fp_ld(c,1,R(0)+R(13));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(14));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,4,2);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_fmac(c,3,5);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(0)+R(15));
  R(3)=0x8c0a2f0eu;
  R(4)=R(15);
  R(6)=R(13);
  R(5)=R(13);
  { c->pr=0x8c09e534u; R(4)+=0x4u; f_8c0a2f0e(c); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09e53e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff30u;
  R(15)+=R(0);
  R(6)=0xd0u;
  R(5)=R(4);
  R(13)=0x8c0685b4u;
  R(14)=R(4);
  { c->pr=0x8c09e556u; R(4)=R(15); f_8c0685b4(c); }
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(12)=0x8c2e7634u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c09e5a0;
  R(4)=0x8c2e7634u;
  R(6)=0x7cu;
  { uint32_t tg=R(13); c->pr=0x8c09e56cu; R(5)=LD32(R(14)+24); sh4_call(c,tg); }
  R(2)=LD32(R(14)+12);
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(2));
  fp_st(c,3,R(0)+R(12));
  R(0)=0x1cu;
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(3));
  { fp_st(c,3,R(0)+R(12)); goto L8c09e5a8; }
L8c09e5a0:;
  R(4)=0x8c2e7634u;
  R(6)=0x7cu;
  { uint32_t tg=R(13); c->pr=0x8c09e5a8u; R(5)=LD32(R(14)+12); sh4_call(c,tg); }
L8c09e5a8:;
  R(0)=0x72u;
  R(1)=0x8c2e7634u;
  R(2)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(3)=0x40u;
  R(2)|=R(3);
  ST16(R(12)+R(0),R(2));
  ST32(R(15)+12,R(1));
  { c->pr=0x8c09e5bau; R(4)=R(15); f_8c09ea62(c); }
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x2cu;
  { c->pr=0x8c09e5c6u; R(4)+=0x38u; f_8c05e6ea(c); }
  R(1)=0xd0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09e600(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  ST32(R(15),R(5));
  R(14)=R(4);
  R(4)=LD32(R(14)+12);
  R(5)=R(15);
  R(3)=0x8c075e8cu;
  R(0)=0x68u;
  R(5)+=0x4u;
  { c->pr=0x8c09e61au; R(4)=LD32(R(4)+R(0)); f_8c075e8c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09e624;
  {  goto L8c09e740; }
L8c09e624:;
  R(5)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c09e62cu; R(4)=R(14); f_8c09dd40(c); }
  R(5)=R(15);
  R(2)=0x8c075f24u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x4u;
  R(5)+=0x10u;
  { c->pr=0x8c09e63cu; R(4)+=0x28u; f_8c075f24(c); }
  R(0)=0x28u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
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
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c075fb2u;
  R(0)=0x24u;
  c->fr[3]=0x3F800000u;
  R(4)=R(15);
  R(5)+=0x28u;
  fp_st(c,3,R(0)+R(15));
  R(6)=0x0u;
  { c->pr=0x8c09e696u; R(4)+=0x1cu; f_8c075fb2(c); }
  R(0)=0x8c09e7acu;
  fp_mov(c,15,0);
  fp_ld(c,3,R(0));
  R(5)=R(14);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  fp_arith(c,0,15,3);
  R(6)=LD32(R(15));
  R(5)+=0x50u;
  { c->pr=0x8c09e6acu; R(4)+=0x1cu; f_8c05e612(c); }
  R(0)=0x1cu;
  R(5)=R(15);
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
  R(3)=0x8c05e55cu;
  R(4)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c09e6f6u; R(4)+=0x1cu; f_8c05e55c(c); }
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  fp_mov(c,4,0);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; fp_arith(c,2,15,4); if(k) goto L8c09e70e; }
  R(2)=LD32(R(14)+24);
  R(0)=0x30u;
  { fp_ld(c,4,R(0)+R(2)); goto L8c09e714; }
L8c09e70e:;
  R(3)=LD32(R(14)+12);
  R(0)=0x30u;
  fp_ld(c,4,R(0)+R(3));
L8c09e714:;
  fp_mov(c,3,15);
  fp_arith(c,2,3,4);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c09e744;
  fp_cmp(c,1,4,2);
  { uint32_t k=!c->t; c->fr[1]=0x00000000u; if(k) goto L8c09e728; }
  { fp_mov(c,3,4); goto L8c09e72c; }
L8c09e728:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c09e72c:;
  fp_cmp(c,1,15,1);
  if(!c->t) goto L8c09e734;
  { fp_mov(c,2,15); goto L8c09e738; }
L8c09e734:;
  fp_mov(c,2,15);
  fp_unary(c,0,2);
L8c09e738:;
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c09e740;
  { fp_arith(c,1,15,4); goto L8c09e744; }
L8c09e740:;
  { R(0)=0x0u; goto L8c09e74e; }
L8c09e744:;
  fp_arith(c,0,15,4);
  R(3)=LD32(R(14)+12);
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(3));
  R(0)=0x1u;
L8c09e74e:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09e758(SH4Ctx *c) {
  R(0)=0x8u;
  R(3)=LD32(R(4)+12);
  fp_ld(c,4,R(0)+R(5));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c09e76e;
  R(2)=LD32(R(4)+12);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(5));
L8c09e76e:;
  R(3)=LD32(R(4)+12);
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c09e780;
  R(2)=LD32(R(4)+12);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(5));
L8c09e780:;
  {  return; }
}
void f_8c09e7c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(13)=R(4);
  R(2)=LD32(R(13)+12);
  R(0)=0x72u;
  R(3)=0x8c2e7628u;
  R(1)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x2000u;
  R(1)=R(1)&0xFFFF;
  R(4)=(int32_t)(int8_t)LD8(R(3));
  R(14)=0x8c05e612u;
  c->t=(R(1)&R(2))==0;
  c->fr[15]=0x00000000u;
  { uint32_t k=c->t; c->fr[4]=0x3F800000u; if(k) goto L8c09e880; }
  R(4)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09e830;
  R(4)=LD32(R(13)+8);
  R(0)=0x4cu;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x50u;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x54u;
  fp_mov(c,0,5);
  R(3)=R(4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x4cu;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)+=0x6cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x50u;
  R(3)=LD32(R(13)+8);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(3));
  R(0)+=0x6cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x54u;
  R(3)=LD32(R(13)+8);
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,4,3);
  { R(0)+=0x6cu; goto L8c09e83a; }
L8c09e830:;
  R(0)=0xb8u;
  fp_st(c,15,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(13));
  R(0)+=0x4u;
L8c09e83a:;
  R(2)=0x8c2e7629u;
  R(3)=0x1u;
  R(4)=R(13);
  fp_st(c,4,R(0)+R(13));
  ST8(R(2),R(3));
  R(5)=LD32(R(13)+8);
  R(3)=0x8c05e6eau;
  R(5)+=0x34u;
  { c->pr=0x8c09e84eu; R(4)+=0x2cu; f_8c05e6ea(c); }
  R(5)=R(13);
  R(4)=0xacu;
  R(6)=R(13);
  R(5)+=0x2cu;
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c09e85cu; R(4)+=R(13); sh4_call(c,tg); }
  {  goto L8c09ea56; }
L8c09e880:;
  R(3)=LD32(R(13)+12);
  R(0)=0x68u;
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c09e940;
  R(4)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09e8d6;
  R(4)=LD32(R(13)+8);
  R(0)=0x4cu;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x50u;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x54u;
  fp_mov(c,0,4);
  R(3)=R(4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x4cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)+=0x6cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x50u;
  R(3)=LD32(R(13)+8);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(3));
  R(0)+=0x6cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x54u;
  R(3)=LD32(R(13)+8);
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,4,3);
  { R(0)+=0x6cu; goto L8c09e8e0; }
L8c09e8d6:;
  R(0)=0xb8u;
  fp_st(c,15,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(13));
  R(0)+=0x4u;
L8c09e8e0:;
  R(5)=R(15);
  R(5)+=0x14u;
  fp_st(c,4,R(0)+R(13));
  { c->pr=0x8c09e8eau; R(4)=R(13); f_8c09dd40(c); }
  R(2)=0x8c05e6eau;
  R(5)=R(13);
  R(4)=R(13);
  R(5)+=0x20u;
  { c->pr=0x8c09e8f6u; R(4)+=0x2cu; f_8c05e6ea(c); }
  R(0)=0xacu;
  fp_st(c,15,R(0)+R(13));
  R(0)+=0x4u;
  fp_st(c,15,R(0)+R(13));
  R(0)+=0x4u;
  { fp_st(c,15,R(0)+R(13)); goto L8c09ea56; }
L8c09e940:;
  R(5)=R(13);
  R(6)=R(13);
  R(4)=R(15);
  R(5)+=0x20u;
  R(6)+=0x50u;
  { uint32_t tg=R(14); c->pr=0x8c09e94eu; R(4)+=0x8u; sh4_call(c,tg); }
  R(0)=0xb8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09e974;
  R(0)=0xbcu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09e974;
  R(0)=0x8c09e9e4u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c09e974:;
  R(5)=R(15);
  R(5)+=0x14u;
  { c->pr=0x8c09e97cu; R(4)=R(13); f_8c09dd40(c); }
  R(2)=R(15);
  R(2)+=0x4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x18u;
  R(7)+=0x4u;
  R(6)+=0xcu;
  { c->pr=0x8c09e992u; R(4)=R(13); f_8c09e3a0(c); }
  R(15)+=0x4u;
  R(0)=0x4u;
  R(5)=0xb8u;
  fp_ld(c,4,R(15));
  R(4)=R(15);
  fp_ld(c,5,R(0)+R(15));
  R(5)+=R(13);
  { c->pr=0x8c09e9a4u; R(4)+=0x14u; f_8c09e480(c); }
  R(0)=0x8u;
  R(4)=LD32(R(13)+12);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x1cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,5,3);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_cmp(c,1,3,5);
  { uint32_t k=!c->t; fp_ld(c,7,R(0)+R(4)); if(k) goto L8c09e9d4; }
  { fp_mov(c,4,6); goto L8c09ea04; }
L8c09e9d4:;
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c09ea00;
  { fp_mov(c,4,7); goto L8c09ea04; }
L8c09ea00:;
  fp_unary(c,2,5);
  fp_mov(c,4,5);
L8c09ea04:;
  R(0)=0x8c09eac4u;
  fp_ld(c,5,R(0));
  fp_cmp(c,1,4,5);
  if(c->t) goto L8c09ea0e;
  fp_mov(c,4,5);
L8c09ea0e:;
  R(0)=0x14u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  R(5)=R(13);
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,2,3);
  R(6)=R(15);
  R(4)=R(13);
  R(5)+=0x50u;
  R(6)+=0x14u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c09ea40u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(5)=R(13);
  R(5)+=0x2cu;
  { c->pr=0x8c09ea48u; R(4)=LD32(R(13)+8); f_8c09e758(c); }
  R(5)=R(13);
  R(4)=0xacu;
  R(6)=R(13);
  R(5)+=0x2cu;
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c09ea56u; R(4)+=R(13); sh4_call(c,tg); }
L8c09ea56:;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09ea62(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c09ea6au; R(14)=R(4); f_8c09e7c0(c); }
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09ea9e;
  R(2)=LD32(R(14)+12);
  R(0)=0x68u;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09ea9e;
  R(2)=0x8c2e7629u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09ea9e;
  R(5)=R(14);
  R(5)+=0x2cu;
  { c->pr=0x8c09ea90u; R(4)=R(14); f_8c09e600(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09ea9e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09e7c0(c); return; } }
L8c09ea9e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09eae0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(14)=R(4);
  R(0)=LD32(R(14)+12);
  R(1)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c09eb12;
  R(2)=LD32(R(14)+12);
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x44u;
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc8u;
  { fp_st(c,3,R(0)+R(14)); goto L8c09ee24; }
L8c09eb12:;
  R(4)=LD32(R(14)+12);
  R(0)=0x72u;
  R(2)=0x2000u;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(12)=0x8c05e612u;
  R(3)=R(3)&0xFFFF;
  R(13)=0x8c2cff2cu;
  c->t=(R(3)&R(2))==0;
  { uint32_t k=!c->t; c->fr[14]=0x00000000u; if(k) goto L8c09eb2e; }
  R(0)=0x68u;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09eb80;
L8c09eb2e:;
  R(1)=LD32(R(14)+12);
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(1));
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x44u;
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc8u;
  { fp_st(c,3,R(0)+R(14)); goto L8c09ee0c; }
L8c09eb80:;
  R(0)=LD32(R(14)+12);
  R(1)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x1)==0;
  { uint32_t k=!c->t; fp_mov(c,15,14); if(k) goto L8c09ec00; }
  R(5)=R(14);
  R(6)=R(14);
  R(4)=R(15);
  R(5)+=0x2cu;
  R(6)+=0x20u;
  { uint32_t tg=R(12); c->pr=0x8c09eb9cu; R(4)+=0x1cu; sh4_call(c,tg); }
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x4cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x50u;
  fp_arith(c,2,15,3);
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c09ebc8;
  fp_ld(c,15,R(0)+R(13));
L8c09ebc8:;
  R(3)=0x8c075da0u;
  R(5)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c09ebd2u; R(4)=R(14); f_8c075da0(c); }
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x54u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c09ec00;
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,15,4);
  fp_arith(c,2,15,3);
L8c09ec00:;
  R(0)=0xc4u;
  R(1)=0x70u;
  fp_st(c,15,R(0)+R(14));
  R(0)=LD32(R(14)+12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c09ec14;
  {  goto L8c09ee08; }
L8c09ec14:;
  R(5)=R(14);
  R(6)=R(14);
  R(4)=R(15);
  R(5)+=0x50u;
  fp_mov(c,15,14);
  R(6)+=0x20u;
  { uint32_t tg=R(12); c->pr=0x8c09ec24u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ec60;
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ec60;
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ec44;
  {  goto L8c09ed4a; }
L8c09ec44:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ec60;
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ec60;
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c09ec9e;
L8c09ec60:;
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
L8c09ec9e:;
  R(5)=R(14);
  R(6)=R(14);
  R(4)=R(15);
  R(5)+=0x50u;
  R(6)+=0x2cu;
  { uint32_t tg=R(12); c->pr=0x8c09ecacu; R(4)+=0x10u; sh4_call(c,tg); }
  R(0)=0x10u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c09ecc8;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ecc8;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c09ed3a;
L8c09ecc8:;
  {  goto L8c09ed00; }
L8c09ed00:;
  R(0)=0x14u;
  fp_mov(c,0,15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c09ed3a:;
  R(5)=R(15);
  R(3)=0x8c075fb2u;
  R(4)=R(15);
  R(6)=0x0u;
  R(5)+=0x10u;
  { c->pr=0x8c09ed48u; R(4)+=0x1cu; f_8c075fb2(c); }
  fp_mov(c,15,0);
L8c09ed4a:;
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(13));
  fp_arith(c,2,15,3);
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c09ed5a;
  fp_mov(c,15,4);
L8c09ed5a:;
  R(3)=0x8c075e40u;
  R(5)=R(15);
  R(4)=LD32(R(14)+12);
  R(0)=0x68u;
  { c->pr=0x8c09ed66u; R(4)=LD32(R(4)+R(0)); f_8c075e40(c); }
  R(0)=0x60u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,2,3);
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c09ed74;
  fp_ld(c,15,R(15));
L8c09ed74:;
  R(3)=LD32(R(14)+12);
  R(0)=0x18u;
  R(5)=R(14);
  R(6)=R(14);
  fp_ld(c,3,R(0)+R(3));
  R(5)+=0x50u;
  R(4)=R(15);
  R(6)+=0x20u;
  fp_st(c,3,R(15));
  { uint32_t tg=R(12); c->pr=0x8c09ed8au; R(4)+=0x1cu; sh4_call(c,tg); }
  R(0)=0x1cu;
  fp_ld(c,2,R(15));
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_arith(c,1,2,3);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(15)); if(k) goto L8c09edb6; }
  fp_ld(c,3,R(15));
  { fp_arith(c,3,15,3); goto L8c09ee08; }
L8c09edb6:;
  fp_ld(c,2,R(15));
  fp_unary(c,0,3);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c09ee08;
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,2,0);
  { uint32_t k=!c->t; fp_mov(c,3,15); if(k) goto L8c09ee00; }
  { fp_ld(c,1,R(15)); goto L8c09ee04; }
L8c09ee00:;
  fp_ld(c,1,R(15));
  fp_unary(c,0,1);
L8c09ee04:;
  fp_mov(c,15,1);
  fp_arith(c,2,15,3);
L8c09ee08:;
  R(0)=0xc8u;
  fp_st(c,15,R(0)+R(14));
L8c09ee0c:;
  R(3)=LD32(R(14)+8);
  R(0)=0x75u;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(3)=0x1000u;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c09ee24;
  R(2)=LD32(R(14)+12);
  R(0)=0x68u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c09ee60;
L8c09ee24:;
  R(3)=LD32(R(14)+12);
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(3));
  R(0)+=0x7cu;
  { fp_st(c,3,R(0)+R(14)); goto L8c09ef92; }
L8c09ee60:;
  R(0)=0x4u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,14,R(0)+R(15));
  R(1)=0x70u;
  R(0)=LD32(R(14)+12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x10)==0;
  { uint32_t k=!c->t; fp_mov(c,15,14); if(k) goto L8c09eec6; }
  R(4)=LD32(R(14)+28);
  R(3)=0x8c04a8c0u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c09ee84u; R(4)=LD32(R(4)+8); f_8c04a8c0(c); }
  R(2)=0x8c05e6eau;
  R(5)=R(0);
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c09ee90u; R(4)+=0x1cu; f_8c05e6ea(c); }
  R(5)=0xa0u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x1cu;
  R(5)+=R(14);
  { uint32_t tg=R(12); c->pr=0x8c09ee9eu; R(4)+=0x1cu; sh4_call(c,tg); }
  R(0)=0x1cu;
  R(5)=R(15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,5);
  R(4)=R(15);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,6,R(0)+R(15));
  R(5)+=0x1cu;
  R(3)=0x8c05e6eau;
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  { c->pr=0x8c09eec6u; R(4)+=0x4u; f_8c05e6ea(c); }
L8c09eec6:;
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x68u;
  fp_ld(c,4,R(0)+R(13));
  fp_arith(c,2,15,3);
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c09eed6;
  fp_mov(c,15,4);
L8c09eed6:;
  R(2)=0x8c075da0u;
  R(5)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c09eee0u; R(4)=R(14); f_8c075da0(c); }
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(13));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_arith(c,2,3,2);
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c09ef26;
  R(0)=0x1cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(13));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_arith(c,2,15,2);
L8c09ef26:;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ef46;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ef46;
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c09ef92;
L8c09ef46:;
  R(0)=0x130u;
  R(2)=LD32(R(14));
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ef6a;
  R(0)=0x134u;
  R(2)=LD32(R(14));
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09ef6a;
  R(0)=0x138u;
  R(2)=LD32(R(14));
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c09ef92;
L8c09ef6a:;
  R(3)=0x130u;
  R(4)=R(15);
  R(5)=LD32(R(14));
  R(2)=0x8c05e55cu;
  R(5)+=R(3);
  { c->pr=0x8c09ef78u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c09efdcu;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c09ef92;
  R(0)=0x8c09efe0u;
  R(3)=LD32(R(14)+12);
  fp_ld(c,4,R(0));
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(3));
  R(0)=0x54u;
  R(3)=LD32(R(14)+12);
  fp_st(c,4,R(0)+R(3));
L8c09ef92:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f000(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(0)=0x90u;
  R(13)=R(4);
  R(11)=0x8c05e612u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(12)=0x8c05e6eau;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f01e;
  {  goto L8c09f12e; }
L8c09f01e:;
  R(3)=0x8c2cffa8u;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c09f02a;
  {  goto L8c09f12e; }
L8c09f02a:;
  R(6)=LD32(R(13)+8);
  R(5)=R(13);
  R(4)=R(15);
  R(5)+=0x2cu;
  R(6)+=0x1cu;
  { uint32_t tg=R(11); c->pr=0x8c09f038u; R(4)+=0xcu; sh4_call(c,tg); }
  R(6)=LD32(R(13)+8);
  R(5)=R(13);
  R(5)+=0x50u;
  R(6)+=0x1cu;
  { uint32_t tg=R(11); c->pr=0x8c09f044u; R(4)=R(15); sh4_call(c,tg); }
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09f060;
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09f060;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c09f120;
L8c09f060:;
  fp_ld(c,2,R(15));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09f07c;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09f07c;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c09f120;
L8c09f07c:;
  R(0)=0x4u;
  fp_ld(c,4,R(15));
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,0,4);
  R(4)=R(15);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x4u;
  R(14)=0x8c05e55cu;
  R(5)=R(15);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(14); c->pr=0x8c09f0beu; R(4)+=0xcu; sh4_call(c,tg); }
  fp_ld(c,3,R(15));
  R(0)=0xcu;
  R(4)=R(15);
  R(5)=R(15);
  fp_arith(c,2,0,3);
  fp_st(c,0,R(0)+R(15));
  { uint32_t tg=R(14); c->pr=0x8c09f0ceu; R(4)+=0xcu; sh4_call(c,tg); }
  R(0)=0x4u;
  R(4)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  R(5)=R(15);
  fp_arith(c,2,0,3);
  fp_st(c,0,R(0)+R(15));
  { uint32_t tg=R(14); c->pr=0x8c09f0e0u; R(4)+=0xcu; sh4_call(c,tg); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  R(3)=0x8c05e5f4u;
  R(4)=R(15);
  fp_arith(c,2,0,3);
  R(5)+=0xcu;
  fp_st(c,0,R(0)+R(15));
  R(6)=LD32(R(13)+8);
  R(6)+=0x1cu;
  { c->pr=0x8c09f0fau; R(4)+=0xcu; f_8c05e5f4(c); }
  {  goto L8c09f138; }
L8c09f120:;
  R(5)=LD32(R(13)+8);
  R(4)=R(15);
  R(5)+=0x1cu;
  { uint32_t tg=R(12); c->pr=0x8c09f12au; R(4)+=0xcu; sh4_call(c,tg); }
  {  goto L8c09f138; }
L8c09f12e:;
  R(5)=LD32(R(13)+8);
  R(4)=R(15);
  R(5)+=0x1cu;
  { uint32_t tg=R(12); c->pr=0x8c09f138u; R(4)+=0xcu; sh4_call(c,tg); }
L8c09f138:;
  R(5)=R(15);
  R(4)=0xacu;
  R(6)=R(13);
  R(5)+=0xcu;
  R(6)+=0x20u;
  { uint32_t tg=R(11); c->pr=0x8c09f146u; R(4)+=R(13); sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(13);
  R(5)+=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c09f150u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(3)=0x8c0a1248u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c09f15au; R(4)=R(13); f_8c0a1248(c); }
  R(4)=LD32(R(13)+8);
  R(5)=R(13);
  R(5)+=0x2cu;
  { uint32_t tg=R(12); c->pr=0x8c09f164u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f1a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffe98u;
  R(15)+=R(0);
  R(14)=R(4);
  R(4)=0xecu;
  R(3)=0x8c0685b4u;
  R(6)=0x7cu;
  fp_st(c,4,R(15));
  R(5)=LD32(R(14)+12);
  { c->pr=0x8c09f1b8u; R(4)+=R(15); f_8c0685b4(c); }
  R(0)=0x114u;
  R(5)=R(15);
  fp_ld(c,3,R(15));
  R(5)+=0x1cu;
  R(3)=0x8c076800u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c09f1c8u; R(4)=LD32(R(14)+28); f_8c076800(c); }
  R(2)=0xecu;
  R(4)=R(15);
  R(3)=0x8c09e064u;
  R(2)+=R(15);
  ST32(R(15)+40,R(2));
  { c->pr=0x8c09f1d6u; R(4)+=0x1cu; f_8c09e064(c); }
  R(4)=R(15);
  { c->pr=0x8c09f1dcu; R(4)+=0x1cu; f_8c09ea62(c); }
  R(2)=0x8c0cba28u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09f23c;
  R(5)=LD32(R(14)+8);
  R(6)=R(14);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)+=0x20u;
  R(5)+=0x10u;
  { c->pr=0x8c09f1f4u; R(4)+=0x10u; f_8c05e612(c); }
  R(5)=LD32(R(14)+8);
  R(6)=R(15);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)+=0x48u;
  R(5)+=0x10u;
  { c->pr=0x8c09f204u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,8,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_mov(c,2,8);
  fp_arith(c,2,2,8);
  fp_mov(c,0,6);
  fp_ld(c,9,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,7);
  fp_fmac(c,2,7);
  fp_mov(c,0,9);
  fp_unary(c,2,3);
  fp_fmac(c,2,9);
  fp_unary(c,2,2);
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c09f274;
L8c09f23c:;
  R(4)=LD32(R(14)+8);
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  { uint32_t k=c->t; R(6)=0x0u; if(k) goto L8c09f262; }
  R(0)=0x60u;
  R(0)=LD32(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c09f262;
  R(0)=LD32(R(14)+12);
  R(1)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x8)==0;
  { uint32_t k=c->t; R(6)=0x3u; if(k) goto L8c09f262; }
  R(6)=0x2u;
L8c09f262:;
  R(2)=0x8c0a027au;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x48u;
  { c->pr=0x8c09f26eu; R(4)+=0x1cu; f_8c0a027a(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09f2a0;
L8c09f274:;
  R(1)=0x168u;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c09f2a0:;
  R(2)=0x8c05e6eau;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x48u;
  { c->pr=0x8c09f2acu; R(4)+=0x2cu; f_8c05e6ea(c); }
  R(5)=0xc8u;
  R(4)=0xacu;
  R(3)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c09f2b8u; R(4)+=R(14); f_8c05e6ea(c); }
  R(0)=0x1u;
  R(1)=0x168u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f2c4(SH4Ctx *c) {
  R(0)=0x7cu;
  c->fr[2]=0x00000000u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(3)=0x8c2cff9cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,1,R(0)+R(4));
  fp_ld(c,15,R(3));
  fp_cmp(c,1,1,2);
  { uint32_t k=!c->t; fp_arith(c,2,15,3); if(k) goto L8c09f2de; }
  fp_unary(c,0,15);
L8c09f2de:;
  R(0)=0x78u;
  fp_mov(c,3,15);
  fp_ld(c,15,R(0)+R(4));
  R(3)=0x8c07627cu;
  fp_arith(c,0,15,3);
  { c->pr=0x8c09f2ecu; fp_mov(c,4,15); f_8c07627c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c09f2f2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(1)=0x76u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+8);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(int32_t)R(0)==-2;
  if(!c->t) goto L8c09f308;
  {  goto L8c09f474; }
L8c09f308:;
  R(0)=0x168u;
  R(13)=0x1u;
  R(2)=LD32(R(14));
  R(3)=(int32_t)(int8_t)LD8(R(2)+R(0));
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c09f360;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c09f360;
  R(2)=0x8c2cffa8u;
  R(1)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(1)&R(13))==0;
  if(!c->t) goto L8c09f360;
  R(2)=LD32(R(14)+8);
  { R(3)=0xfffffffeu; goto L8c09f45c; }
L8c09f360:;
  R(0)=0x7cu;
  R(2)=LD32(R(14)+8);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(2));
  c->fr[2]=0x00000000u;
  fp_arith(c,2,3,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c09f396;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c09f37a;
  { fp_mov(c,3,4); goto L8c09f37e; }
L8c09f37a:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c09f37e:;
  R(3)=0x8c2cff9cu;
  R(0)=0x8c09f484u;
  fp_ld(c,1,R(0));
  fp_ld(c,2,R(3));
  fp_unary(c,0,2);
  fp_arith(c,0,2,1);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c09f396;
  R(2)=LD32(R(14)+8);
  R(0)=0x76u;
  R(3)=0x0u;
  ST8(R(2)+R(0),R(3));
L8c09f396:;
  R(2)=LD32(R(14)+8);
  R(0)=0x76u;
  R(3)=(int32_t)(int8_t)LD8(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f3aa;
  R(0)=0x7cu;
  R(1)=LD32(R(14)+8);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(1));
L8c09f3aa:;
  R(0)=0x78u;
  fp_ld(c,4,R(0)+R(14));
  R(1)=0x76u;
  R(0)=LD32(R(14)+8);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c09f3c8;
  R(0)=0x7cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c09f3c8;
  { c->pr=0x8c09f3c6u; R(4)=R(14); f_8c09f2c4(c); }
  fp_mov(c,4,0);
L8c09f3c8:;
  R(0)=LD32(R(14)+8);
  R(1)=0x76u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c09f3e2;
  R(0)=0x7cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c09f3e2;
  { c->pr=0x8c09f3e0u; R(4)=R(14); f_8c09f2c4(c); }
  fp_mov(c,4,0);
L8c09f3e2:;
  { c->pr=0x8c09f3e6u; R(4)=R(14); f_8c09f1a0(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09f412;
  R(4)=LD32(R(14)+8);
  R(0)=0x76u;
  R(4)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c09f474;
  R(0)=0x7cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c09f408;
  R(2)=LD32(R(14)+8);
  R(0)=0x76u;
  { ST8(R(2)+R(0),R(13)); goto L8c09f474; }
L8c09f408:;
  R(2)=LD32(R(14)+8);
  R(0)=0x76u;
  R(3)=0xffffffffu;
  { ST8(R(2)+R(0),R(3)); goto L8c09f474; }
L8c09f412:;
  R(2)=LD32(R(14)+8);
  R(0)=0x76u;
  R(3)=(int32_t)(int8_t)LD8(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f46c;
  R(0)=0x7cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(14));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c09f42a;
  { fp_mov(c,3,4); goto L8c09f42e; }
L8c09f42a:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c09f42e:;
  R(3)=0x8c2cff9cu;
  R(0)=0x8c09f484u;
  fp_ld(c,1,R(0));
  fp_ld(c,2,R(3));
  fp_unary(c,0,2);
  fp_arith(c,0,2,1);
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c09f46c;
  { c->pr=0x8c09f442u; R(4)=R(14); f_8c09f2c4(c); }
  fp_mov(c,4,0);
  { c->pr=0x8c09f448u; R(4)=R(14); f_8c09f1a0(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09f46c;
  R(0)=0x7cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c09f462;
  R(2)=LD32(R(14)+8);
  R(3)=0xffffffffu;
L8c09f45c:;
  R(0)=0x76u;
  { ST8(R(2)+R(0),R(3)); goto L8c09f474; }
L8c09f462:;
  R(1)=LD32(R(14)+8);
  R(0)=0x76u;
  ST8(R(1)+R(0),R(13));
  {  goto L8c09f474; }
L8c09f46c:;
  R(3)=LD32(R(14)+8);
  R(0)=0x76u;
  R(2)=0xfffffffeu;
  ST8(R(3)+R(0),R(2));
L8c09f474:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f4a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(1)=0x74u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+8);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f51e;
  R(2)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x2000u;
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(2))==0;
  if(!c->t) goto L8c09f51e;
  R(3)=LD32(R(14)+12);
  R(0)=0x68u;
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c09f51e;
  R(3)=0x8c0a131cu;
  R(5)=R(14);
  R(5)+=0x2cu;
  { c->pr=0x8c09f4d4u; R(4)=R(14); f_8c0a131c(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09f4e6;
  R(3)=LD32(R(14)+8);
  R(0)=0x75u;
  R(2)=0xf7u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
L8c09f4e6:;
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c09f4fa;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09f000(c); return; } }
L8c09f4fa:;
  R(0)=0x74u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09f516;
  R(0)=LD32(R(14)+12);
  R(1)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c09f516;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09f2f2(c); return; } }
L8c09f516:;
  R(2)=LD32(R(14)+8);
  R(0)=0x76u;
  R(3)=0x0u;
  ST8(R(2)+R(0),R(3));
L8c09f51e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f560(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(4);
  { f_8c09f56e(c); return; }
}
void f_8c09f56e(SH4Ctx *c) {
L8c09f56e:;
  R(2)=0x8c0cba6eu;
  R(3)=0x1u;
  R(1)=0x8c05e6eau;
  R(4)=R(15);
  ST8(R(2),R(3));
  R(3)=0xf8u;
  R(5)=LD32(R(14));
  R(5)+=R(3);
  { c->pr=0x8c09f582u; R(4)+=0x4u; f_8c05e6ea(c); }
  R(0)=0x4u;
  R(13)=0x8c2cff2cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(13));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; c->fr[15]=0x00000000u; if(k) goto L8c09f5f4; }
  R(3)=LD32(R(14)+8);
  R(0)=0x74u;
  R(2)=0x4u;
  R(4)=0x8c123b08u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)|=R(2);
  ST8(R(3)+R(0),R(1));
  R(0)=0x48u;
  R(1)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(0)+=0x74u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8c09f658u;
  c->fpul=R(1);
  R(3)=LD32(R(14)+8);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0));
  R(0)=0x70u;
  fp_ld(c,1,R(0)+R(3));
  fp_arith(c,2,3,2);
  fp_cmp(c,1,3,1);
  if(!c->t) goto L8c09f5fa;
  R(0)=0xb4u;
  R(5)=LD32(R(14)+8);
  R(1)=LD32(R(4)+R(0));
  c->fpul=R(1);
  c->t=(int32_t)R(1)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c09f5ea; }
  R(3)=0x4f800000u;
  c->fpul=R(3);
  c->fr[1]=c->fpul;
  fp_arith(c,0,3,1);
L8c09f5ea:;
  R(0)=0x70u;
  fp_ld(c,1,R(0)+R(5));
  fp_arith(c,0,1,3);
  { fp_st(c,1,R(0)+R(5)); goto L8c09f5fa; }
L8c09f5f4:;
  R(2)=LD32(R(14)+8);
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(2));
L8c09f5fa:;
  R(4)=LD32(R(14)+12);
  R(0)=0x68u;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09f62c;
  R(0)=0x6cu;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09f62c;
  R(3)=LD32(R(14)+8);
  R(0)=0x75u;
  R(2)=0xf7u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
  R(0)=0x72u;
  R(3)=LD32(R(14)+12);
  R(1)=0x8u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)|=R(1);
  ST16(R(3)+R(0),R(2));
  R(0)=0x60u;
  R(3)=LD32(R(14)+8);
  R(2)=0x5u;
  ST32(R(3)+R(0),R(2));
L8c09f62c:;
  R(1)=LD32(R(14)+12);
  R(0)=0x72u;
  R(2)=0x4000u;
  R(3)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c09f660;
  { R(3)=0x1u; goto L8c09f662; }
L8c09f660:;
  R(3)=0x0u;
L8c09f662:;
  R(2)=0x72u;
  R(1)=0x8c2e7628u;
  ST8(R(1),R(3));
  R(0)=LD32(R(14)+12);
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c09f6a0;
  { R(2)=0x1u; goto L8c09f6a2; }
L8c09f6a0:;
  R(2)=0x0u;
L8c09f6a2:;
  R(3)=0x8c2e7629u;
  R(1)=0x8c09e064u;
  ST8(R(3),R(2));
  { c->pr=0x8c09f6acu; R(4)=R(14); f_8c09e064(c); }
  R(3)=0x8c09e160u;
  { c->pr=0x8c09f6b2u; R(4)=R(14); f_8c09e160(c); }
  R(2)=0x8c09e53eu;
  { c->pr=0x8c09f6b8u; R(4)=R(14); f_8c09e53e(c); }
  { c->pr=0x8c09f6bcu; R(4)=R(14); f_8c09e7c0(c); }
  R(4)=LD32(R(14)+8);
  R(0)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f706;
  R(2)=LD32(R(14)+12);
  R(0)=0x68u;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09f706;
  R(1)=0x8c2e7629u;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f706;
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c09f706;
  R(2)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x2000u;
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(2))==0;
  if(!c->t) goto L8c09f706;
  R(3)=0x8c09e600u;
  R(5)=R(14);
  R(5)+=0x2cu;
  { c->pr=0x8c09f6fcu; R(4)=R(14); f_8c09e600(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09f706;
  { c->pr=0x8c09f706u; R(4)=R(14); f_8c09e7c0(c); }
L8c09f706:;
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c09f720; }
  R(0)=LD32(R(14)+12);
  R(2)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c09f780;
L8c09f720:;
  R(2)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x1000u;
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(15),R(3)); if(k) goto L8c09f75a; }
  R(1)=LD32(R(15));
  R(3)=0x2000u;
  c->t=(R(1)&R(3))==0;
  if(!c->t) goto L8c09f75a;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f75a;
  R(3)=0x8c2cff60u;
  R(5)=R(14);
  R(2)=0x8c076180u;
  R(4)=R(14);
  fp_ld(c,4,R(3));
  R(5)+=0x2cu;
  { c->pr=0x8c09f754u; R(4)+=0x20u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09f780;
L8c09f75a:;
  R(3)=LD32(R(14)+16);
  R(0)=0x72u;
  R(4)=0xffbfu;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)&=R(4);
  ST16(R(3)+R(0),R(2));
  R(3)=LD32(R(14)+12);
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)&=R(4);
  ST16(R(3)+R(0),R(2));
  R(0)=0x75u;
  R(3)=LD32(R(14)+8);
  R(2)=0xfbu;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
  R(0)=0x76u;
  R(3)=LD32(R(14)+8);
  ST8(R(3)+R(0),R(12));
L8c09f780:;
  R(0)=0x7cu;
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c09f836;
  R(0)=LD32(R(14)+8);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c09f836;
  R(0)=0x90u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09f836;
  R(0)=0x34u;
  R(3)=0x8c076180u;
  R(5)=R(14);
  fp_ld(c,4,R(0)+R(13));
  R(4)=R(14);
  R(5)+=0x2cu;
  { c->pr=0x8c09f7aau; R(4)+=0x20u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  {  goto L8c09f800; }
L8c09f800:;
  if(c->t) goto L8c09f836;
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c09f814;
  R(2)=0x8c046ec0u;
  { c->pr=0x8c09f814u; R(4)=LD32(R(14)+8); f_8c046ec0(c); }
L8c09f814:;
  R(3)=LD32(R(14)+8);
  R(0)=0x75u;
  R(2)=0xf7u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
  R(0)=0x74u;
  R(3)=LD32(R(14)+8);
  R(1)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(2)&=R(1);
  ST8(R(3)+R(0),R(2));
  R(0)=0x60u;
  R(3)=LD32(R(14)+8);
  ST32(R(3)+R(0),R(12));
  {  goto L8c09f56e; }
L8c09f836:;
  R(0)=LD32(R(14)+8);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09f848;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09f848;
  {  goto L8c09f85a; }
L8c09f848:;
  R(3)=0x8c0a0dbcu;
  { c->pr=0x8c09f84eu; R(4)=R(14); f_8c0a0dbc(c); }
  R(2)=0x8c0a0ca0u;
  { c->pr=0x8c09f854u; R(4)=R(14); f_8c0a0ca0(c); }
  R(3)=0x8c0a1100u;
  { c->pr=0x8c09f85au; R(4)=R(14); f_8c0a1100(c); }
L8c09f85a:;
  R(0)=LD32(R(14)+8);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09f8a0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09f8a8;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09f8b6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c09f8e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c09f8e0;
  {  goto L8c09f8e6; }
L8c09f8a0:;
  { c->pr=0x8c09f8a4u; R(4)=R(14); f_8c09f4a0(c); }
  {  goto L8c09f8e6; }
L8c09f8a8:;
  R(3)=0x8c0a143au;
  { c->pr=0x8c09f8aeu; R(4)=R(14); f_8c0a143a(c); }
  { c->pr=0x8c09f8b2u; R(4)=R(14); f_8c09f4a0(c); }
  {  goto L8c09f8e6; }
L8c09f8b6:;
  R(2)=0x8c0a0c20u;
  { c->pr=0x8c09f8bcu; R(4)=R(14); f_8c0a0c20(c); }
  {  goto L8c09f8e6; }
L8c09f8e0:;
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  ST32(R(2)+R(0),R(12));
L8c09f8e6:;
  { c->pr=0x8c09f8eau; R(4)=R(14); f_8c09eae0(c); }
  R(4)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=0x1000u;
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(4)=R(4)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(1)=0x2000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f914;
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f950;
L8c09f914:;
  R(3)=LD32(R(14)+8);
  R(0)=0x10u;
  R(2)=0xf7u;
  fp_st(c,15,R(0)+R(3));
  R(0)=0x14u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x18u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x1cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x20u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x24u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x64u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x6cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x75u;
  R(3)=LD32(R(14)+8);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
L8c09f950:;
  R(3)=0x8c0cba28u;
  ST8(R(3),R(12));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f6a0(SH4Ctx *c) {
  R(2)=0x0u;
  R(3)=0x8c2e7629u;
  R(1)=0x8c09e064u;
  ST8(R(3),R(2));
  { c->pr=0x8c09f6acu; R(4)=R(14); f_8c09e064(c); }
  R(3)=0x8c09e160u;
  { c->pr=0x8c09f6b2u; R(4)=R(14); f_8c09e160(c); }
  R(2)=0x8c09e53eu;
  { c->pr=0x8c09f6b8u; R(4)=R(14); f_8c09e53e(c); }
  { c->pr=0x8c09f6bcu; R(4)=R(14); f_8c09e7c0(c); }
  R(4)=LD32(R(14)+8);
  R(0)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f706;
  R(2)=LD32(R(14)+12);
  R(0)=0x68u;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09f706;
  R(1)=0x8c2e7629u;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f706;
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c09f706;
  R(2)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x2000u;
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(2))==0;
  if(!c->t) goto L8c09f706;
  R(3)=0x8c09e600u;
  R(5)=R(14);
  R(5)+=0x2cu;
  { c->pr=0x8c09f6fcu; R(4)=R(14); f_8c09e600(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09f706;
  { c->pr=0x8c09f706u; R(4)=R(14); f_8c09e7c0(c); }
L8c09f706:;
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c09f720; }
  R(0)=LD32(R(14)+12);
  R(2)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c09f780;
L8c09f720:;
  R(2)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x1000u;
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(15),R(3)); if(k) goto L8c09f75a; }
  R(1)=LD32(R(15));
  R(3)=0x2000u;
  c->t=(R(1)&R(3))==0;
  if(!c->t) goto L8c09f75a;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f75a;
  R(3)=0x8c2cff60u;
  R(5)=R(14);
  R(2)=0x8c076180u;
  R(4)=R(14);
  fp_ld(c,4,R(3));
  R(5)+=0x2cu;
  { c->pr=0x8c09f754u; R(4)+=0x20u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09f780;
L8c09f75a:;
  R(3)=LD32(R(14)+16);
  R(0)=0x72u;
  R(4)=0xffbfu;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)&=R(4);
  ST16(R(3)+R(0),R(2));
  R(3)=LD32(R(14)+12);
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)&=R(4);
  ST16(R(3)+R(0),R(2));
  R(0)=0x75u;
  R(3)=LD32(R(14)+8);
  R(2)=0xfbu;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
  R(0)=0x76u;
  R(3)=LD32(R(14)+8);
  ST8(R(3)+R(0),R(12));
L8c09f780:;
  R(0)=0x7cu;
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c09f836;
  R(0)=LD32(R(14)+8);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c09f836;
  R(0)=0x90u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09f836;
  R(0)=0x34u;
  R(3)=0x8c076180u;
  R(5)=R(14);
  fp_ld(c,4,R(0)+R(13));
  R(4)=R(14);
  R(5)+=0x2cu;
  { c->pr=0x8c09f7aau; R(4)+=0x20u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  {  goto L8c09f800; }
L8c09f800:;
  if(c->t) goto L8c09f836;
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c09f814;
  R(2)=0x8c046ec0u;
  { c->pr=0x8c09f814u; R(4)=LD32(R(14)+8); f_8c046ec0(c); }
L8c09f814:;
  R(3)=LD32(R(14)+8);
  R(0)=0x75u;
  R(2)=0xf7u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
  R(0)=0x74u;
  R(3)=LD32(R(14)+8);
  R(1)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(2)&=R(1);
  ST8(R(3)+R(0),R(2));
  R(0)=0x60u;
  R(3)=LD32(R(14)+8);
  ST32(R(3)+R(0),R(12));
  {  { f_8c09f56e(c); return; } }
L8c09f836:;
  R(0)=LD32(R(14)+8);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09f848;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09f848;
  {  goto L8c09f85a; }
L8c09f848:;
  R(3)=0x8c0a0dbcu;
  { c->pr=0x8c09f84eu; R(4)=R(14); f_8c0a0dbc(c); }
  R(2)=0x8c0a0ca0u;
  { c->pr=0x8c09f854u; R(4)=R(14); f_8c0a0ca0(c); }
  R(3)=0x8c0a1100u;
  { c->pr=0x8c09f85au; R(4)=R(14); f_8c0a1100(c); }
L8c09f85a:;
  R(0)=LD32(R(14)+8);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09f8a0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09f8a8;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09f8b6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c09f8e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c09f8e0;
  {  goto L8c09f8e6; }
L8c09f8a0:;
  { c->pr=0x8c09f8a4u; R(4)=R(14); f_8c09f4a0(c); }
  {  goto L8c09f8e6; }
L8c09f8a8:;
  R(3)=0x8c0a143au;
  { c->pr=0x8c09f8aeu; R(4)=R(14); f_8c0a143a(c); }
  { c->pr=0x8c09f8b2u; R(4)=R(14); f_8c09f4a0(c); }
  {  goto L8c09f8e6; }
L8c09f8b6:;
  R(2)=0x8c0a0c20u;
  { c->pr=0x8c09f8bcu; R(4)=R(14); f_8c0a0c20(c); }
  {  goto L8c09f8e6; }
L8c09f8e0:;
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  ST32(R(2)+R(0),R(12));
L8c09f8e6:;
  { c->pr=0x8c09f8eau; R(4)=R(14); f_8c09eae0(c); }
  R(4)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=0x1000u;
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(4)=R(4)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(1)=0x2000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f914;
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f950;
L8c09f914:;
  R(3)=LD32(R(14)+8);
  R(0)=0x10u;
  R(2)=0xf7u;
  fp_st(c,15,R(0)+R(3));
  R(0)=0x14u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x18u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x1cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x20u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x24u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x64u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x6cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x75u;
  R(3)=LD32(R(14)+8);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
L8c09f950:;
  R(3)=0x8c0cba28u;
  ST8(R(3),R(12));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f800(SH4Ctx *c) {
  if(c->t) goto L8c09f836;
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c09f814;
  R(2)=0x8c046ec0u;
  { c->pr=0x8c09f814u; R(4)=LD32(R(14)+8); f_8c046ec0(c); }
L8c09f814:;
  R(3)=LD32(R(14)+8);
  R(0)=0x75u;
  R(2)=0xf7u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
  R(0)=0x74u;
  R(3)=LD32(R(14)+8);
  R(1)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(2)&=R(1);
  ST8(R(3)+R(0),R(2));
  R(0)=0x60u;
  R(3)=LD32(R(14)+8);
  ST32(R(3)+R(0),R(12));
  {  { f_8c09f56e(c); return; } }
L8c09f836:;
  R(0)=LD32(R(14)+8);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09f848;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09f848;
  {  goto L8c09f85a; }
L8c09f848:;
  R(3)=0x8c0a0dbcu;
  { c->pr=0x8c09f84eu; R(4)=R(14); f_8c0a0dbc(c); }
  R(2)=0x8c0a0ca0u;
  { c->pr=0x8c09f854u; R(4)=R(14); f_8c0a0ca0(c); }
  R(3)=0x8c0a1100u;
  { c->pr=0x8c09f85au; R(4)=R(14); f_8c0a1100(c); }
L8c09f85a:;
  R(0)=LD32(R(14)+8);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09f8a0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09f8a8;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09f8b6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c09f8e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c09f8e0;
  {  goto L8c09f8e6; }
L8c09f8a0:;
  { c->pr=0x8c09f8a4u; R(4)=R(14); f_8c09f4a0(c); }
  {  goto L8c09f8e6; }
L8c09f8a8:;
  R(3)=0x8c0a143au;
  { c->pr=0x8c09f8aeu; R(4)=R(14); f_8c0a143a(c); }
  { c->pr=0x8c09f8b2u; R(4)=R(14); f_8c09f4a0(c); }
  {  goto L8c09f8e6; }
L8c09f8b6:;
  R(2)=0x8c0a0c20u;
  { c->pr=0x8c09f8bcu; R(4)=R(14); f_8c0a0c20(c); }
  {  goto L8c09f8e6; }
L8c09f8e0:;
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  ST32(R(2)+R(0),R(12));
L8c09f8e6:;
  { c->pr=0x8c09f8eau; R(4)=R(14); f_8c09eae0(c); }
  R(4)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=0x1000u;
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(4)=R(4)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(1)=0x2000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f914;
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f950;
L8c09f914:;
  R(3)=LD32(R(14)+8);
  R(0)=0x10u;
  R(2)=0xf7u;
  fp_st(c,15,R(0)+R(3));
  R(0)=0x14u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x18u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x1cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x20u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x24u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x64u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x6cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x75u;
  R(3)=LD32(R(14)+8);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
L8c09f950:;
  R(3)=0x8c0cba28u;
  ST8(R(3),R(12));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f8a0(SH4Ctx *c) {
  { c->pr=0x8c09f8a4u; R(4)=R(14); f_8c09f4a0(c); }
  {  goto L8c09f8e6; }
L8c09f8e6:;
  { c->pr=0x8c09f8eau; R(4)=R(14); f_8c09eae0(c); }
  R(4)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=0x1000u;
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(4)=R(4)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(1)=0x2000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f914;
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f950;
L8c09f914:;
  R(3)=LD32(R(14)+8);
  R(0)=0x10u;
  R(2)=0xf7u;
  fp_st(c,15,R(0)+R(3));
  R(0)=0x14u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x18u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x1cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x20u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x24u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x64u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x6cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x75u;
  R(3)=LD32(R(14)+8);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
L8c09f950:;
  R(3)=0x8c0cba28u;
  ST8(R(3),R(12));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f8e0(SH4Ctx *c) {
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  ST32(R(2)+R(0),R(12));
  { c->pr=0x8c09f8eau; R(4)=R(14); f_8c09eae0(c); }
  R(4)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=0x1000u;
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(4)=R(4)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(1)=0x2000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c09f914;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09f914;
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09f950;
L8c09f914:;
  R(3)=LD32(R(14)+8);
  R(0)=0x10u;
  R(2)=0xf7u;
  fp_st(c,15,R(0)+R(3));
  R(0)=0x14u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x18u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x1cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x20u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x24u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x64u;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x6cu;
  R(3)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x75u;
  R(3)=LD32(R(14)+8);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
L8c09f950:;
  R(3)=0x8c0cba28u;
  ST8(R(3),R(12));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09f9a0(SH4Ctx *c) {
  R(6)=R(4);
  R(7)=LD32(R(6)+4);
  R(6)=LD32(R(7)+44);
  R(7)=LD32(R(4)+4);
  { R(7)=LD32(R(7)+40); goto L8c09f9be; }
L8c09f9ac:;
  R(7)=R(4);
  R(0)=LD32(R(7));
  c->t=R(0)==R(5);
  if(!c->t) goto L8c09f9b8;
  { R(0)=0x1u; return; }
L8c09f9b8:;
  R(7)=R(4);
  R(7)+=0x4u;
  R(6)+=0xffffffffu;
L8c09f9be:;
  c->t=(int32_t)R(6)>0;
  { uint32_t k=c->t; R(4)=R(7); if(k) goto L8c09f9ac; }
  R(0)=0x0u;
  {  return; }
}
void f_8c09f9ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(10)=R(4);
  R(4)=R(7);
  R(3)=0x8c047edeu;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  ST32(R(15)+8,R(7));
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c09f9ecu; R(4)=LD32(R(4)+20); f_8c047ede(c); }
  R(5)=LD32(R(15));
  R(9)=R(0);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)=R(10);
  { c->pr=0x8c09f9fau; R(4)+=0xcu; f_8c05e612(c); }
  R(4)=LD32(R(15)+4);
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5));
  { R(13)=R(5); goto L8c09fa4a; }
L8c09fa04:;
  R(4)=R(13);
  R(14)=LD32(R(4));
  R(4)=LD32(R(14)+4);
  R(12)=LD32(R(4)+20);
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(11)=LD32(R(4)+4); if(k) goto L8c09fa20; }
  R(3)=0x8c047edeu;
  { c->pr=0x8c09fa18u; R(4)=R(12); f_8c047ede(c); }
  R(2)=R(9)&0xFF;
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(2);
  if(c->t) goto L8c09fa2c;
L8c09fa20:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c09fa48;
  R(2)=LD32(R(11)+32);
  R(3)=0x2000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c09fa48;
L8c09fa2c:;
  R(0)=LD32(R(14)+16);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09fa48;
  R(5)=R(15);
  R(12)=0x8c09af60u;
  R(5)+=0xcu;
  R(6)=R(14);
  { c->pr=0x8c09fa3eu; R(4)=R(10); f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09fa48;
  { R(0)=0x1u; goto L8c09fa50; }
L8c09fa48:;
  R(13)=LD32(R(13)+4);
L8c09fa4a:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c09fa04;
  R(0)=0x0u;
L8c09fa50:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09faa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(6));
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; R(10)=R(4); if(k) goto L8c09fad4; }
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(5));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09fad4;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(5));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09fad4;
  {  goto L8c09fd1a; }
L8c09fad4:;
  R(3)=R(15);
  R(2)=LD32(R(5));
  R(0)=LD32(R(10)+12);
  R(1)=0x72u;
  R(3)+=0x10u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(11)=0x10u;
  R(1)=LD32(R(5)+4);
  ST32(R(3),R(2));
  R(0)=R(0)&0xFFFF;
  ST32(R(3)+4,R(1));
  c->t=(R(11)&R(0))==0;
  R(2)=LD32(R(5)+8);
  R(0)=R(15);
  R(0)+=0x4u;
  ST32(R(3)+8,R(2));
  R(11)=c->t;
  R(3)=LD32(R(6));
  R(2)=LD32(R(6)+4);
  ST32(R(0),R(3));
  ST32(R(0)+4,R(2));
  R(3)=LD32(R(6)+8);
  ST32(R(0)+8,R(3));
  R(0)=0x8c09fca0u;
  fp_ld(c,4,R(0));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=0x8c055c1au;
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(15));
  R(12)=LD32(R(10)+28);
  R(4)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c09fb88u; R(4)=LD32(R(4)+32); sh4_call(c,tg); }
  R(4)=LD32(R(10)+12);
  R(14)=R(0);
  R(13)=R(0);
  R(0)=0x68u;
  R(4)=LD32(R(4)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09fba0;
  R(3)=0x8c055c1au;
  R(2)=LD32(R(4)+4);
  { c->pr=0x8c09fb9eu; R(4)=LD32(R(2)+32); f_8c055c1a(c); }
  R(14)=R(0);
L8c09fba0:;
  R(5)=R(15);
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x4u;
  { c->pr=0x8c09fbb0u; R(4)+=0x1cu; f_8c05e612(c); }
  R(9)=0x8c0cba6eu;
  R(3)=(int32_t)(int8_t)LD8(R(9));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09fbd0;
  R(5)=R(15);
  R(3)=0x8c09af60u;
  R(4)=R(15);
  R(6)=R(14);
  R(5)+=0x1cu;
  { c->pr=0x8c09fbc6u; R(4)+=0x10u; f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09fbd0;
  {  goto L8c09fd08; }
L8c09fbd0:;
  R(3)=(uint32_t)(int32_t)(int8_t)R(11);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09fbee;
  R(5)=R(15);
  R(5)+=0x4u;
  R(4)=R(15);
  R(6)=R(14);
  R(7)=R(12);
  { c->pr=0x8c09fbe4u; R(4)+=0x10u; f_8c09f9ca(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09fbee;
  {  goto L8c09fd08; }
L8c09fbee:;
  c->t=R(14)==R(13);
  if(c->t) goto L8c09fc2e;
  R(3)=(int32_t)(int8_t)LD8(R(9));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09fc10;
  R(5)=R(15);
  R(3)=0x8c09af60u;
  R(4)=R(15);
  R(6)=R(13);
  R(5)+=0x1cu;
  { c->pr=0x8c09fc06u; R(4)+=0x10u; f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09fc10;
  {  goto L8c09fd08; }
L8c09fc10:;
  R(3)=(uint32_t)(int32_t)(int8_t)R(11);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09fc2e;
  R(5)=R(15);
  R(5)+=0x4u;
  R(4)=R(15);
  R(6)=R(13);
  R(7)=R(12);
  { c->pr=0x8c09fc24u; R(4)+=0x10u; f_8c09f9ca(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09fc2e;
  {  goto L8c09fd08; }
L8c09fc2e:;
  R(5)=R(14);
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4)+44);
  ST32(R(15),R(4));
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4)+40);
  { R(8)=R(4); goto L8c09fc88; }
L8c09fc3e:;
  R(4)=R(8);
  R(10)=LD32(R(4));
  c->t=R(10)==R(13);
  if(c->t) goto L8c09fc7a;
  R(3)=(int32_t)(int8_t)LD8(R(9));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09fc60;
  R(5)=R(15);
  R(3)=0x8c09af60u;
  R(4)=R(15);
  R(6)=R(10);
  R(5)+=0x1cu;
  { c->pr=0x8c09fc5au; R(4)+=0x10u; f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09fd08;
L8c09fc60:;
  R(3)=(uint32_t)(int32_t)(int8_t)R(11);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09fc7a;
  R(5)=R(15);
  R(5)+=0x4u;
  R(4)=R(15);
  R(6)=R(10);
  R(7)=R(12);
  { c->pr=0x8c09fc74u; R(4)+=0x10u; f_8c09f9ca(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09fd08;
L8c09fc7a:;
  R(2)=LD32(R(15));
  R(5)=R(8);
  R(5)+=0x4u;
  R(4)=R(8);
  R(2)+=0xffffffffu;
  R(8)=R(5);
  ST32(R(15),R(2));
L8c09fc88:;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c09fc3e;
  c->t=R(14)==R(13);
  if(c->t) goto L8c09fd1a;
  R(4)=LD32(R(13)+4);
  R(8)=LD32(R(4)+44);
  { R(4)=LD32(R(4)+40); goto L8c09fd14; }
L8c09fcc0:;
  R(4)=R(10);
  R(13)=LD32(R(4));
  R(5)=R(13);
  { c->pr=0x8c09fccau; R(4)=R(14); f_8c09f9a0(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09fd0c;
  c->t=R(13)==R(14);
  if(c->t) goto L8c09fd0c;
  R(3)=(int32_t)(int8_t)LD8(R(9));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09fcee;
  R(5)=R(15);
  R(3)=0x8c09af60u;
  R(4)=R(15);
  R(6)=R(13);
  R(5)+=0x1cu;
  { c->pr=0x8c09fce8u; R(4)+=0x10u; f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09fd08;
L8c09fcee:;
  R(3)=(uint32_t)(int32_t)(int8_t)R(11);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09fd0c;
  R(5)=R(15);
  R(5)+=0x4u;
  R(4)=R(15);
  R(6)=R(13);
  R(7)=R(12);
  { c->pr=0x8c09fd02u; R(4)+=0x10u; f_8c09f9ca(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09fd0c;
L8c09fd08:;
  { R(0)=0x1u; goto L8c09fd1c; }
L8c09fd0c:;
  R(4)=R(10);
  R(4)+=0x4u;
  R(8)+=0xffffffffu;
  R(5)=R(10);
L8c09fd14:;
  c->t=(int32_t)R(8)>0;
  { uint32_t k=c->t; R(10)=R(4); if(k) goto L8c09fcc0; }
L8c09fd1a:;
  R(0)=0x0u;
L8c09fd1c:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09fd30(SH4Ctx *c) {
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
  R(15)+=0xffffff9cu;
  R(0)=R(7);
  fp_mov(c,14,5);
  c->t=(int32_t)R(0)==1;
  fp_mov(c,15,4);
  R(8)=R(4);
  R(9)=R(5);
  R(10)=R(6);
  { uint32_t k=!c->t; R(11)=R(7); if(k) goto L8c09fda0; }
  R(5)=R(9);
  R(6)=R(10);
  { c->pr=0x8c09fd60u; R(4)=R(8); f_8c09faa0(c); }
  {  goto L8c09ffb2; }
L8c09fda0:;
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)=R(9);
  R(5)=R(10);
  { c->pr=0x8c09fdacu; R(4)+=0x58u; f_8c05e612(c); }
  R(0)=0x58u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  c->fr[5]=0x00000000u;
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x14u;
  c->fr[4]=0x3F800000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,3,4);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  fp_ld(c,2,R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09feb2;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09feb2;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c09feb2;
  R(0)=0xcu;
  fp_mov(c,3,5);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
L8c09feb2:;
  R(0)=0x4u;
  fp_ld(c,4,R(15));
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,15);
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_ld(c,3,R(15));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(15));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(5)=R(15);
  R(3)=0x8c05e6eau;
  fp_arith(c,2,2,3);
  R(4)=R(15);
  R(5)+=0x58u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c09ff16u; R(4)+=0x1cu; sh4_call(c,tg); }
  c->fpul=R(11);
  R(0)=0x8c09ffe8u;
  fp_ld(c,2,R(0));
  R(0)=0x18u;
  R(12)=0x8c0a2f0eu;
  c->t=(int32_t)R(11)>0;
  fp_float(c,3);
  R(14)=0x8c05e5f4u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c09ffb0; }
L8c09ff2e:;
  fp_ld(c,3,R(15));
  R(0)=0x4cu;
  fp_mov(c,2,15);
  R(5)=R(15);
  fp_arith(c,2,2,3);
  R(5)+=0x4cu;
  R(4)=R(15);
  R(6)=R(9);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(14); c->pr=0x8c09ff5cu; R(4)+=0x40u; sh4_call(c,tg); }
  fp_ld(c,3,R(15));
  R(0)=0x34u;
  fp_mov(c,2,14);
  R(5)=R(15);
  fp_arith(c,2,2,3);
  R(5)+=0x34u;
  R(4)=R(15);
  R(6)=R(10);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(14); c->pr=0x8c09ff8au; R(4)+=0x28u; sh4_call(c,tg); }
  R(5)=R(15);
  R(6)=R(15);
  R(5)+=0x40u;
  R(6)+=0x28u;
  { c->pr=0x8c09ff96u; R(4)=R(8); f_8c09faa0(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09ffa0;
  { R(0)=0x1u; goto L8c09ffb2; }
L8c09ffa0:;
  R(4)=R(15);
  R(5)=R(15);
  R(6)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c09ffaau; R(4)+=0x18u; sh4_call(c,tg); }
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(11);
  if(!c->t) goto L8c09ff2e;
L8c09ffb0:;
  R(0)=0x0u;
L8c09ffb2:;
  R(15)+=0x64u;
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
void f_8c0a0000(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffec0u;
  R(15)+=R(0);
  R(14)=R(7);
  c->t=(R(14)&R(14))==0;
  ST32(R(15)+4,R(4));
  R(13)=R(5);
  { uint32_t k=!c->t; ST32(R(15),R(6)); if(k) goto L8c0a001a; }
  {  goto L8c0a0158; }
L8c0a001a:;
  R(2)=0x8c014ea0u;
  R(4)=0xd8u;
  { c->pr=0x8c0a0022u; R(4)+=R(15); f_8c014ea0(c); }
  R(3)=0x8c014ea0u;
  R(4)=R(15);
  { c->pr=0x8c0a002au; R(4)+=0x70u; f_8c014ea0(c); }
  R(2)=0x8c01638au;
  R(5)=R(13);
  R(4)=0xd8u;
  { c->pr=0x8c0a0034u; R(4)+=R(15); f_8c01638a(c); }
  R(3)=0x8c01638au;
  R(4)=R(15);
  R(5)=LD32(R(15));
  { c->pr=0x8c0a003eu; R(4)+=0x70u; f_8c01638a(c); }
  R(5)=LD32(R(15)+4);
  R(7)=R(15);
  R(6)=0xd8u;
  R(4)=R(15);
  R(5)=LD32(R(5)+28);
  R(7)+=0x70u;
  R(3)=0x8c08d240u;
  R(6)+=R(15);
  { c->pr=0x8c0a0052u; R(4)+=0x8u; f_8c08d240(c); }
  R(4)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a0068;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(14));
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  { R(0)=0x0u; goto L8c0a015a; }
L8c0a0068:;
  R(3)=0x8c05e612u;
  R(6)=R(13);
  R(5)=LD32(R(15));
  { c->pr=0x8c0a0072u; R(4)=R(14); f_8c05e612(c); }
  R(0)=0x8u;
  fp_ld(c,3,R(14));
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,4,R(14));
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8c0a00f4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_ld(c,2,R(0));
  fp_mov(c,7,3);
  fp_arith(c,0,7,2);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,7);
  if(!c->t) goto L8c0a0100;
  R(2)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c0a00c6u; R(4)=R(14); f_8c05e6ea(c); }
  {  goto L8c0a0158; }
L8c0a0100:;
  R(0)=0x4u;
  fp_ld(c,6,R(14));
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,1,5);
  fp_arith(c,2,1,5);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,1,6);
  fp_mov(c,0,4);
  fp_fmac(c,1,4);
  fp_fsrra(c,1);
  fp_mov(c,4,1);
  fp_mov(c,0,4);
  fp_mov(c,1,6);
  fp_arith(c,2,0,1);
  fp_st(c,0,R(14));
  fp_ld(c,1,R(0)+R(14));
  fp_mov(c,0,4);
  fp_arith(c,2,0,1);
  fp_st(c,0,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(14));
  fp_mov(c,0,7);
  fp_arith(c,2,4,1);
  fp_st(c,4,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,1,R(14));
  fp_arith(c,2,0,1);
  fp_st(c,0,R(14));
  fp_ld(c,1,R(0)+R(14));
  fp_mov(c,0,7);
  fp_arith(c,2,0,1);
  R(3)=0x8c05e5f4u;
  R(5)=R(14);
  R(6)=R(13);
  fp_st(c,0,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,7,1);
  fp_st(c,7,R(0)+R(14));
  { c->pr=0x8c0a0158u; R(4)=R(14); f_8c05e5f4(c); }
L8c0a0158:;
  R(0)=0x1u;
L8c0a015a:;
  R(1)=0x140u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a0100(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,6,R(14));
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,1,5);
  fp_arith(c,2,1,5);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,1,6);
  fp_mov(c,0,4);
  fp_fmac(c,1,4);
  fp_fsrra(c,1);
  fp_mov(c,4,1);
  fp_mov(c,0,4);
  fp_mov(c,1,6);
  fp_arith(c,2,0,1);
  fp_st(c,0,R(14));
  fp_ld(c,1,R(0)+R(14));
  fp_mov(c,0,4);
  fp_arith(c,2,0,1);
  fp_st(c,0,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(14));
  fp_mov(c,0,7);
  fp_arith(c,2,4,1);
  fp_st(c,4,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,1,R(14));
  fp_arith(c,2,0,1);
  fp_st(c,0,R(14));
  fp_ld(c,1,R(0)+R(14));
  fp_mov(c,0,7);
  fp_arith(c,2,0,1);
  R(3)=0x8c05e5f4u;
  R(5)=R(14);
  R(6)=R(13);
  fp_st(c,0,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,7,1);
  fp_st(c,7,R(0)+R(14));
  { c->pr=0x8c0a0158u; R(4)=R(14); f_8c05e5f4(c); }
  R(0)=0x1u;
  R(1)=0x140u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a0166(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x40u;
  R(14)=0x8c2cff2cu;
  R(7)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x4u;
  fp_ld(c,4,R(14));
  fp_ld(c,5,R(0)+R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09fd30(c); return; } }
}
void f_8c0a01a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=R(5);
  R(3)=0x8c05e612u;
  ST32(R(15),R(4));
  R(4)=R(15);
  ST32(R(15)+4,R(6));
  R(6)=R(13);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0a01bau; R(4)+=0x8u; f_8c05e612(c); }
  R(0)=0x8u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8c0a0364u;
  fp_mov(c,2,4);
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,5,6);
  fp_mov(c,6,4);
  fp_arith(c,2,2,6);
  fp_mov(c,0,5);
  fp_unary(c,2,3);
  fp_fmac(c,2,5);
  fp_mov(c,7,3);
  fp_ld(c,3,R(0));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,0,7,3);
  fp_mov(c,0,4);
  fp_fmac(c,2,4);
  fp_fsrra(c,2);
  fp_mov(c,4,2);
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  R(0)=0x8u;
  R(6)=R(13);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,1,7);
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,1,7);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,7,2);
  fp_st(c,7,R(0)+R(15));
  R(3)=0x8c05e5f4u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c0a0246u; R(4)+=0x8u; f_8c05e5f4(c); }
  R(14)=0x8c2cff2cu;
  R(0)=0x40u;
  R(6)=R(15);
  R(5)=R(13);
  R(7)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x4u;
  fp_ld(c,4,R(14));
  R(6)+=0x8u;
  fp_ld(c,5,R(0)+R(14));
  { c->pr=0x8c0a025cu; R(4)=LD32(R(15)); f_8c09fd30(c); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a0266(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x42u;
  R(14)=0x8c2cff2cu;
  R(7)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09fd30(c); return; } }
}
void f_8c0a027a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST8(R(15),R(6));
  R(14)=R(4);
  R(3)=0x8c05e612u;
  R(6)=R(14);
  R(12)=R(5);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(12);
  { c->pr=0x8c0a029au; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  R(13)=0x8c2cff2cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x20u;
  R(3)=LD32(R(14)+12);
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_ld(c,1,R(0)+R(3));
  fp_arith(c,0,1,2);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_cmp(c,1,1,3);
  if(c->t) goto L8c0a030e;
  R(11)=(int32_t)(int8_t)LD8(R(15));
  R(3)=0x1u;
  c->t=(R(3)&R(11))==0;
  if(c->t) goto L8c0a02ec;
  R(2)=0x4u;
  c->t=(R(2)&R(11))==0;
  { uint32_t k=c->t; R(6)=R(12); if(k) goto L8c0a02dc; }
  R(1)=0x8c0a01a0u;
  {  goto L8c0a02de; }
L8c0a02dc:;
  R(1)=0x8c0a0266u;
L8c0a02de:;
  R(5)=R(14);
  R(5)+=0x44u;
  { uint32_t tg=R(1); c->pr=0x8c0a02e6u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a030e;
L8c0a02ec:;
  R(2)=0x2u;
  c->t=(R(11)&R(2))==0;
  if(c->t) goto L8c0a0312;
  R(0)=0x40u;
  R(5)=R(14);
  R(7)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(13));
  R(6)=R(12);
  R(5)+=0x20u;
  R(4)=R(14);
  { c->pr=0x8c0a0306u; fp_ld(c,4,R(13)); f_8c09fd30(c); }
  ST8(R(15),R(0));
  R(2)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a0312;
L8c0a030e:;
  { R(0)=0x1u; goto L8c0a0314; }
L8c0a0312:;
  R(0)=0x0u;
L8c0a0314:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a0322(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=0x8c05e5f4u;
  R(0)=R(7);
  ST32(R(15),R(4));
  R(4)=R(15);
  ST32(R(15)+4,R(6));
  ST8(R(15)+8,R(0));
  R(6)=LD32(R(15));
  R(6)+=0x50u;
  { c->pr=0x8c0a033au; R(4)+=0xcu; f_8c05e5f4(c); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(5)=R(15);
  R(5)+=0xcu;
  R(6)=R(0);
  { c->pr=0x8c0a0346u; R(4)=LD32(R(15)); f_8c0a027a(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a0380;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0a0380:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0a038au; R(4)=LD32(R(15)+4); f_8c05e6ea(c); }
  R(0)=0x1u;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0a0394(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff74u;
  R(15)+=R(0);
  R(6)=R(5);
  ST32(R(15),R(5));
  R(14)=R(4);
  R(4)=0x80u;
  R(3)=0x8c05e5f4u;
  R(5)=R(14);
  R(5)+=0x50u;
  { c->pr=0x8c0a03aeu; R(4)+=R(15); f_8c05e5f4(c); }
  R(2)=LD32(R(14)+12);
  R(0)=0x68u;
  R(5)=0x80u;
  R(3)=R(2);
  ST32(R(15),R(2));
  R(2)=LD32(R(3)+R(0));
  R(0)=0x6cu;
  R(5)+=R(15);
  ST32(R(15)+R(0),R(2));
  R(0)=0x6cu;
  R(3)=LD32(R(14)+12);
  R(2)=LD32(R(3)+R(0));
  R(0)=0x70u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x78u;
  R(3)=LD32(R(14)+12);
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(3)=R(15);
  R(3)+=0x4u;
  R(0)=0x7cu;
  ST8(R(15)+R(0),R(2));
  ST32(R(14)+12,R(3));
  { c->pr=0x8c0a03deu; R(4)=R(14); f_8c0a11c0(c); }
  R(0)=0x8c0a0430u;
  R(4)=0x8c2e7634u;
  R(3)=LD32(R(15));
  ST32(R(14)+12,R(3));
  fp_ld(c,4,R(0));
  R(0)=0x28u;
  fp_ld(c,5,R(0)+R(4));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0a03fc;
  R(0)=0x8c0a0434u;
  fp_mov(c,3,5);
  fp_ld(c,2,R(0));
  fp_unary(c,0,3);
  fp_mov(c,5,3);
  fp_arith(c,0,5,2);
L8c0a03fc:;
  R(0)=0x2cu;
  fp_ld(c,6,R(0)+R(15));
  fp_cmp(c,1,6,4);
  { uint32_t k=!c->t; fp_mov(c,7,5); if(k) goto L8c0a0412; }
  R(0)=0x8c0a0434u;
  fp_mov(c,3,6);
  fp_ld(c,2,R(0));
  fp_unary(c,0,3);
  fp_mov(c,6,3);
  fp_arith(c,0,6,2);
L8c0a0412:;
  fp_arith(c,1,7,6);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,7,3);
  if(!c->t) goto L8c0a0440;
  { fp_mov(c,5,7); goto L8c0a0446; }
L8c0a0440:;
  fp_mov(c,2,5);
  fp_mov(c,5,6);
  fp_arith(c,1,5,2);
L8c0a0446:;
  R(0)=0x8c0a04c0u;
  fp_mov(c,3,5);
  fp_ld(c,7,R(0));
  R(0)=0x8c0a04c4u;
  fp_ld(c,6,R(0));
  R(0)=0x8c0a04c8u;
  fp_ld(c,11,R(0));
  R(0)=0x30u;
  fp_arith(c,2,3,6);
  fp_ld(c,8,R(0)+R(4));
  fp_cmp(c,1,8,4);
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_arith(c,2,3,7);
  R(3)=c->fpul;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(3)-=R(2);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
  { uint32_t k=!c->t; fp_arith(c,2,5,11); if(k) goto L8c0a0482; }
  R(0)=0x8c0a04ccu;
  fp_mov(c,3,8);
  fp_ld(c,2,R(0));
  fp_unary(c,0,3);
  fp_mov(c,9,3);
  { fp_arith(c,0,9,2); goto L8c0a0484; }
L8c0a0482:;
  fp_mov(c,9,8);
L8c0a0484:;
  R(0)=0x34u;
  fp_ld(c,8,R(0)+R(15));
  fp_cmp(c,1,8,4);
  if(!c->t) goto L8c0a0496;
  R(0)=0x8c0a04d0u;
  fp_mov(c,4,8);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,4,3); goto L8c0a0498; }
L8c0a0496:;
  fp_mov(c,4,8);
L8c0a0498:;
  fp_mov(c,8,9);
  fp_arith(c,1,8,4);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,8,3);
  if(!c->t) goto L8c0a04e0;
  { fp_mov(c,4,8); goto L8c0a04e2; }
L8c0a04e0:;
  fp_arith(c,1,4,9);
L8c0a04e2:;
  fp_mov(c,3,4);
  fp_arith(c,2,3,6);
  R(0)=0x8c0a0564u;
  fp_ld(c,1,R(0));
  R(0)=0x18u;
  fp_ld(c,9,R(0)+R(4));
  R(0)=0x1cu;
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_arith(c,2,3,7);
  fp_ld(c,10,R(0)+R(15));
  fp_mov(c,8,9);
  fp_arith(c,1,8,10);
  R(3)=c->fpul;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(3)-=R(2);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,8,3);
  { uint32_t k=c->t; fp_arith(c,2,4,1); if(k) goto L8c0a051a; }
  fp_mov(c,2,9);
  fp_unary(c,0,2);
  fp_mov(c,8,2);
  fp_arith(c,0,8,10);
L8c0a051a:;
  fp_mov(c,3,8);
  fp_arith(c,2,3,6);
  fp_mov(c,0,1);
  R(1)=0x8cu;
  fp_ftrc(c,3);
  fp_mov(c,3,8);
  fp_arith(c,2,3,7);
  R(3)=c->fpul;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(3)-=R(2);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,6,3);
  fp_arith(c,2,6,11);
  fp_mov(c,3,4);
  fp_mov(c,4,5);
  fp_arith(c,0,4,3);
  fp_mov(c,2,4);
  fp_fmac(c,2,6);
  fp_mov(c,0,2);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a0580(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST8(R(15),R(6));
  R(14)=R(4);
  R(6)=R(14);
  R(3)=0x8c05e5f4u;
  R(13)=R(5);
  R(5)=R(13);
  R(4)=R(15);
  fp_mov(c,15,5);
  fp_mov(c,14,4);
  R(6)+=0x44u;
  { c->pr=0x8c0a05a6u; R(4)+=0x4u; f_8c05e5f4(c); }
  R(12)=(int32_t)(int8_t)LD8(R(15));
  R(3)=0x8u;
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0a05ca;
  fp_cmp(c,1,15,14);
  if(!c->t) goto L8c0a0630;
  fp_arith(c,1,15,14);
  R(0)=0x8c0a0684u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,15);
  if(c->t) goto L8c0a0630;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0a05c4u; R(4)=R(14); f_8c0a131c(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a0630;
L8c0a05ca:;
  R(0)=0x4u;
  fp_ld(c,4,R(13));
  fp_ld(c,5,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(13));
  R(0)=0x20u;
  R(2)=0x8c2cff64u;
  R(3)=LD32(R(14)+12);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_ld(c,1,R(0)+R(3));
  fp_ld(c,2,R(2));
  fp_fmac(c,3,6);
  fp_arith(c,0,1,2);
  fp_unary(c,2,3);
  fp_cmp(c,1,1,3);
  if(c->t) goto L8c0a0630;
  R(2)=0x4u;
  c->t=(R(2)&R(12))==0;
  if(!c->t) goto L8c0a060e;
  R(1)=0x8c2cff60u;
  R(5)=R(14);
  R(3)=0x8c076180u;
  R(4)=R(15);
  fp_ld(c,4,R(1));
  R(5)+=0x2cu;
  { c->pr=0x8c0a0608u; R(4)+=0x4u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a0630;
L8c0a060e:;
  R(3)=0x4u;
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0a061a;
  R(1)=0x8u;
  c->t=(R(1)&R(12))==0;
  if(c->t) goto L8c0a0634;
L8c0a061a:;
  R(2)=0x8c2cff60u;
  R(5)=R(14);
  R(3)=0x8c076180u;
  R(4)=R(15);
  fp_ld(c,4,R(2));
  R(5)+=0x20u;
  { c->pr=0x8c0a062au; R(4)+=0x4u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a0634;
L8c0a0630:;
  { R(0)=0x0u; goto L8c0a0636; }
L8c0a0634:;
  R(0)=0x1u;
L8c0a0636:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a0646(SH4Ctx *c) {
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(5));
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0a0654;
  { R(0)=0xffffffffu; return; }
L8c0a0654:;
  fp_cmp(c,0,5,4);
  if(!c->t) goto L8c0a065c;
  { R(0)=0x0u; return; }
L8c0a065c:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0a0654(SH4Ctx *c) {
  fp_cmp(c,0,5,4);
  if(!c->t) goto L8c0a065c;
  { R(0)=0x0u; return; }
L8c0a065c:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0a065c(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c0a06a0(SH4Ctx *c) {
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
  R(0)=0xfffffe8cu;
  R(15)+=R(0);
  R(0)=R(5);
  R(5)=R(15);
  R(3)=0x8c076800u;
  R(5)+=0x10u;
  R(11)=R(4);
  ST8(R(15)+4,R(0));
  { c->pr=0x8c0a06ccu; R(4)=LD32(R(11)+28); f_8c076800(c); }
  R(2)=0xe0u;
  R(6)=0x7cu;
  R(4)=0xe0u;
  R(5)=0x8c2e7634u;
  R(2)+=R(15);
  R(3)=0x8c0685b4u;
  ST32(R(15)+28,R(2));
  { c->pr=0x8c0a06deu; R(4)+=R(15); f_8c0685b4(c); }
  R(2)=0x8c09e064u;
  R(4)=R(15);
  { c->pr=0x8c0a06e6u; R(4)+=0x10u; f_8c09e064(c); }
  R(4)=0x15cu;
  R(5)=R(11);
  R(12)=0x8c05e612u;
  R(6)=R(11);
  R(5)+=0x38u;
  R(6)+=0x50u;
  { c->pr=0x8c0a06f6u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0x15cu;
  R(5)=0x168u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x160u;
  R(5)+=R(15);
  fp_mov(c,0,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x164u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x68u;
  R(4)=LD32(R(11)+12);
  R(3)=0x8c075e8cu;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  c->fr[14]=0x00000000u;
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  { c->pr=0x8c0a0722u; R(4)=LD32(R(4)+R(0)); f_8c075e8c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(9)=0x4u; if(k) goto L8c0a0738; }
  R(0)=0x168u;
  c->fr[3]=0x3F800000u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x16cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x170u;
  fp_st(c,3,R(0)+R(15));
L8c0a0738:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(10)=R(0);
  R(3)=R(10);
  c->t=(R(3)&R(9))==0;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0a074a; }
  R(1)=0x8c2cff40u;
  { fp_ld(c,13,R(1)); goto L8c0a074e; }
L8c0a074a:;
  R(3)=0x8c2cff3cu;
  fp_ld(c,13,R(3));
L8c0a074e:;
  R(0)=0x8c0a07b0u;
  fp_ld(c,4,R(0));
  R(0)=0x8c0a07b4u;
  fp_ld(c,3,R(0));
  fp_arith(c,3,4,13);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; R(8)=R(4); if(k) goto L8c0a07c0; }
  R(0)=0x8c0a07b8u;
  fp_mov(c,3,4);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,3,2); goto L8c0a07c2; }
L8c0a07c0:;
  fp_mov(c,3,4);
L8c0a07c2:;
  R(0)=0x108u;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST32(R(15)+4,R(2));
  R(2)=0x0u;
  fp_ld(c,12,R(0)+R(15));
  R(0)=0x60u;
  R(5)=LD32(R(15)+24);
  R(3)=LD32(R(5)+R(0));
  R(0)=0x60u;
  ST32(R(15)+12,R(3));
  ST32(R(5)+R(0),R(4));
  R(0)=0x110u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(15));
  ST32(R(15),R(4));
  R(3)=LD32(R(15)+4);
  c->t=R(2)>=R(3);
  if(!c->t) goto L8c0a07ee;
  {  goto L8c0a0a5c; }
L8c0a07ee:;
  R(0)=0x108u;
  R(3)=0x8c07627cu;
  fp_st(c,12,R(0)+R(15));
  { c->pr=0x8c0a07f8u; fp_mov(c,4,12); f_8c07627c(c); }
  R(0)=0x108u;
  R(2)=0x40u;
  R(4)=R(15);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x110u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x72u;
  R(3)=LD32(R(15)+28);
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(3)=0x8c09ea62u;
  { c->pr=0x8c0a0818u; R(4)+=0x10u; f_8c09ea62(c); }
  R(13)=R(8);
  R(3)=0x8c2e76b0u;
  R(13)<<=2;
  R(6)=R(15);
  R(13)<<=2;
  R(5)=R(15);
  R(13)+=R(3);
  R(5)+=0x3cu;
  R(14)=R(13);
  R(6)+=0x60u;
  { uint32_t tg=R(12); c->pr=0x8c0a0830u; R(4)=R(13); sh4_call(c,tg); }
  R(5)=R(14);
  { c->pr=0x8c0a0836u; R(4)=R(11); f_8c0a0394(c); }
  R(3)=0x8c2cffa8u;
  R(0)=0xcu;
  fp_st(c,0,R(0)+R(13));
  R(0)=(int32_t)(int16_t)LD16(R(3));
  c->t=(R(0)&0x40)==0;
  { uint32_t k=c->t; R(8)+=0x1u; if(k) goto L8c0a0848; }
  {  goto L8c0a098e; }
L8c0a0848:;
  R(1)=R(10);
  c->t=(R(1)&R(9))==0;
  if(!c->t) goto L8c0a0852;
  {  goto L8c0a098e; }
L8c0a0852:;
  R(13)=R(8);
  R(2)=0x8c2e76b0u;
  R(13)<<=2;
  R(6)=R(15);
  R(13)<<=2;
  R(5)=R(15);
  R(13)+=R(2);
  R(5)+=0x3cu;
  R(14)=R(13);
  R(6)+=0x60u;
  { uint32_t tg=R(12); c->pr=0x8c0a086au; R(4)=R(13); sh4_call(c,tg); }
  R(0)=0x4u;
  fp_ld(c,6,R(14));
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x4u;
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
  fp_mov(c,2,15);
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8c0a0974u;
  fp_ld(c,3,R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  R(0)=0x4u;
  fp_st(c,2,R(14));
  fp_ld(c,2,R(0)+R(14));
  R(5)=R(14);
  fp_mov(c,1,15);
  fp_arith(c,2,1,2);
  fp_mov(c,2,15);
  fp_arith(c,2,1,3);
  fp_st(c,1,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c0a0974u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  { c->pr=0x8c0a08d0u; R(4)=R(11); f_8c0a0394(c); }
  R(3)=0x8u;
  R(0)=0xcu;
  c->t=(R(3)&R(10))==0;
  fp_st(c,0,R(0)+R(13));
  { uint32_t k=c->t; R(8)+=0x1u; if(k) goto L8c0a098e; }
  R(13)=R(8);
  R(3)=0x8c2e76b0u;
  R(13)<<=2;
  R(6)=R(15);
  R(13)<<=2;
  R(5)=R(15);
  R(13)+=R(3);
  R(5)+=0x3cu;
  R(14)=R(13);
  R(6)+=0x60u;
  { uint32_t tg=R(12); c->pr=0x8c0a08f4u; R(4)=R(13); sh4_call(c,tg); }
  R(0)=0x4u;
  fp_ld(c,4,R(14));
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
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
  fp_mov(c,2,15);
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8c0a0978u;
  fp_ld(c,3,R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  R(0)=0x4u;
  fp_st(c,2,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_mov(c,1,15);
  fp_arith(c,2,1,2);
  fp_mov(c,2,15);
  fp_arith(c,2,1,3);
  fp_st(c,1,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c0a0978u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  {  goto L8c0a0980; }
L8c0a0980:;
  R(5)=R(14);
  fp_st(c,2,R(0)+R(14));
  { c->pr=0x8c0a0988u; R(4)=R(11); f_8c0a0394(c); }
  R(0)=0xcu;
  R(8)+=0x1u;
  fp_st(c,0,R(0)+R(13));
L8c0a098e:;
  R(0)=0x110u;
  R(2)=0x40u;
  R(4)=R(15);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x72u;
  R(3)=LD32(R(15)+28);
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(3)=0x8c09ea62u;
  { c->pr=0x8c0a09a6u; R(4)+=0x10u; f_8c09ea62(c); }
  R(13)=R(8);
  R(3)=0x8c2e76b0u;
  R(13)<<=2;
  R(6)=R(15);
  R(13)<<=2;
  R(5)=R(15);
  R(13)+=R(3);
  R(5)+=0x3cu;
  R(14)=R(13);
  R(6)+=0x60u;
  { uint32_t tg=R(12); c->pr=0x8c0a09beu; R(4)=R(13); sh4_call(c,tg); }
  R(5)=R(14);
  { c->pr=0x8c0a09c4u; R(4)=R(11); f_8c0a0394(c); }
  R(0)=0xcu;
  R(4)=R(15);
  fp_st(c,0,R(0)+R(13));
  R(0)=0x8c0a0aacu;
  fp_ld(c,3,R(0));
  R(2)=0x40u;
  R(0)=0x110u;
  R(8)+=0x1u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x72u;
  R(3)=LD32(R(15)+28);
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(3)=0x8c09ea62u;
  { c->pr=0x8c0a09e6u; R(4)+=0x10u; f_8c09ea62(c); }
  R(13)=R(8);
  R(3)=0x8c2e76b0u;
  R(13)<<=2;
  R(6)=R(15);
  R(13)<<=2;
  R(5)=R(15);
  R(13)+=R(3);
  R(5)+=0x3cu;
  R(14)=R(13);
  R(6)+=0x60u;
  { uint32_t tg=R(12); c->pr=0x8c0a09feu; R(4)=R(13); sh4_call(c,tg); }
  R(5)=R(14);
  { c->pr=0x8c0a0a04u; R(4)=R(11); f_8c0a0394(c); }
  R(0)=0xcu;
  R(4)=R(15);
  fp_st(c,0,R(0)+R(13));
  R(0)=0x8c0a0ab0u;
  fp_ld(c,3,R(0));
  R(2)=0x40u;
  R(0)=0x110u;
  R(8)+=0x1u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x72u;
  R(3)=LD32(R(15)+28);
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(3)=0x8c09ea62u;
  { c->pr=0x8c0a0a26u; R(4)+=0x10u; f_8c09ea62(c); }
  R(13)=R(8);
  R(3)=0x8c2e76b0u;
  R(13)<<=2;
  R(6)=R(15);
  R(13)<<=2;
  R(5)=R(15);
  R(13)+=R(3);
  R(5)+=0x3cu;
  R(14)=R(13);
  R(6)+=0x60u;
  { uint32_t tg=R(12); c->pr=0x8c0a0a3eu; R(4)=R(13); sh4_call(c,tg); }
  R(5)=R(14);
  { c->pr=0x8c0a0a44u; R(4)=R(11); f_8c0a0394(c); }
  R(0)=0xcu;
  fp_st(c,0,R(0)+R(13));
  R(8)+=0x1u;
  R(3)=LD32(R(15));
  R(3)+=0x1u;
  ST32(R(15),R(3));
  R(2)=LD32(R(15)+4);
  c->t=R(3)>=R(2);
  { uint32_t k=c->t; fp_arith(c,0,12,13); if(k) goto L8c0a0a5c; }
  {  goto L8c0a07ee; }
L8c0a0a5c:;
  R(0)=0x60u;
  R(3)=0x8c0cba6cu;
  ST16(R(3),R(8));
  R(2)=LD32(R(15)+24);
  R(1)=LD32(R(15)+12);
  ST32(R(2)+R(0),R(1));
  R(1)=0x174u;
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
void f_8c0a0ac0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  c->fr[4]=0x00000000u;
  R(0)=0x4u;
  R(10)=R(5);
  R(11)=R(6);
  R(14)=R(4);
  R(4)=(uint32_t)(int32_t)(int8_t)R(11);
  fp_st(c,4,R(10));
  fp_st(c,4,R(0)+R(10));
  R(0)=0x8u;
  R(3)=R(0);
  c->t=(R(3)&R(4))==0;
  fp_st(c,4,R(0)+R(10));
  { uint32_t k=c->t; fp_mov(c,15,4); if(k) goto L8c0a0b16; }
  R(1)=0x4u;
  c->t=(R(4)&R(1))==0;
  if(c->t) goto L8c0a0b00;
  R(6)=R(14);
  R(5)=R(14);
  R(6)+=0x50u;
  { R(5)+=0x20u; goto L8c0a0b08; }
L8c0a0b00:;
  R(5)=R(14);
  R(6)=R(14);
  R(5)+=0x2cu;
  R(6)+=0x50u;
L8c0a0b08:;
  R(2)=0x8c05e612u;
  { c->pr=0x8c0a0b0eu; R(4)=R(15); f_8c05e612(c); }
  R(5)=R(15);
  { c->pr=0x8c0a0b14u; R(4)=R(14); f_8c0a0394(c); }
  fp_mov(c,15,0);
L8c0a0b16:;
  R(5)=R(11);
  { c->pr=0x8c0a0b1cu; R(4)=R(14); f_8c0a06a0(c); }
  R(9)=0x8c0cba6cu;
  R(6)=0x10u;
  R(4)=0x8c2e76b0u;
  R(5)=(int32_t)(int16_t)LD16(R(9));
  R(7)=0x8c0a0646u;
  R(3)=0x8c09d048u;
  { c->pr=0x8c0a0b2cu; R(5)=R(5)&0xFFFF; f_8c09d048(c); }
  R(2)=(int32_t)(int16_t)LD16(R(9));
  R(13)=0x0u;
  R(3)=R(13);
  R(2)=R(2)&0xFFFF;
  c->t=R(3)>=R(2);
  if(c->t) goto L8c0a0b7e;
L8c0a0b38:;
  R(8)=R(13);
  R(3)=0x8c2e76b0u;
  R(8)<<=2;
  R(6)=R(11);
  R(8)<<=2;
  fp_mov(c,5,15);
  R(0)=0xcu;
  R(8)+=R(3);
  fp_ld(c,4,R(0)+R(8));
  R(5)=R(8);
  R(12)=R(8);
  { c->pr=0x8c0a0b52u; R(4)=R(14); f_8c0a0580(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a0b74;
  R(5)=R(12);
  R(6)=R(10);
  R(7)=R(11);
  { c->pr=0x8c0a0b62u; R(4)=R(14); f_8c0a0322(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a0b74;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0a0b70;
  { R(0)=0x1u; goto L8c0a0b80; }
L8c0a0b70:;
  { R(0)=0x2u; goto L8c0a0b80; }
L8c0a0b74:;
  R(3)=(int32_t)(int16_t)LD16(R(9));
  R(13)+=0x1u;
  R(3)=R(3)&0xFFFF;
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c0a0b38;
L8c0a0b7e:;
  R(0)=0x0u;
L8c0a0b80:;
  R(15)+=0xcu;
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
void f_8c0a0b96(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=0x8c2cffa8u;
  R(14)=R(4);
  R(0)=(int32_t)(int16_t)LD16(R(3));
  c->t=(R(0)&0x4)==0;
  { uint32_t k=c->t; R(6)=0x5u; if(k) goto L8c0a0baa; }
  R(6)=0xdu;
L8c0a0baa:;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0a0bb2u; R(4)=R(14); f_8c0a0ac0(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a0bda;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(14);
  R(5)+=0xcu;
  R(6)+=0x20u;
  { c->pr=0x8c0a0bc6u; R(4)=R(15); f_8c05e612(c); }
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  R(3)=0x2u;
  R(5)=R(15);
  ST32(R(2)+R(0),R(3));
  R(5)+=0xcu;
  R(4)=LD32(R(14)+8);
  R(3)=0x8c05e6eau;
  { c->pr=0x8c0a0bdau; R(4)+=0x1cu; f_8c05e6ea(c); }
L8c0a0bda:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a0c20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(1)=0x60u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+8);
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0a0c60;
  R(5)=LD32(R(14)+8);
  R(3)=0x8c075c60u;
  R(5)+=0x1cu;
  { c->pr=0x8c0a0c3au; R(4)=LD32(R(14)+28); f_8c075c60(c); }
  R(5)=0xa0u;
  R(6)=0xb8u;
  R(2)=0x8c075ca0u;
  R(5)+=R(14);
  R(6)+=R(14);
  { c->pr=0x8c0a0c48u; R(4)=LD32(R(14)+28); f_8c075ca0(c); }
  R(5)=LD32(R(14)+8);
  R(4)=R(14);
  R(3)=0x8c05e6eau;
  R(5)+=0x1cu;
  { c->pr=0x8c0a0c54u; R(4)+=0x20u; f_8c05e6ea(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(5)=LD32(R(14)+8);
  R(4)=R(14);
  R(5)+=0x1cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0a12a0(c); return; } }
L8c0a0c60:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a0ca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=R(4);
  R(4)=LD32(R(14)+8);
  R(0)=0x60u;
  ST32(R(15),R(4));
  R(4)=LD32(R(4)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a0cbe;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0a0cbe;
  {  goto L8c0a0db4; }
L8c0a0cbe:;
  R(4)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=0x1000u;
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(4)=R(4)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a0cd0;
  {  goto L8c0a0db4; }
L8c0a0cd0:;
  R(1)=0x2000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c0a0db4;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c0a0db4;
  R(5)=R(14);
  R(2)=0x8c05e612u;
  R(6)=R(14);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)+=0x20u;
  { c->pr=0x8c0a0cf2u; R(4)+=0x10u; f_8c05e612(c); }
  R(0)=0x10u;
  R(3)=LD32(R(14)+12);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(3));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0a0db4;
  R(1)=0x168u;
  R(0)=LD32(R(14));
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c0a0d2c;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0a0db4;
L8c0a0d2c:;
  R(5)=R(14);
  R(5)+=0x2cu;
  R(6)=0x3u;
  { c->pr=0x8c0a0d36u; R(4)=R(14); f_8c0a027a(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a0db4;
  R(2)=LD32(R(14)+8);
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  R(1)=0x72u;
  fp_st(c,3,R(0)+R(2));
  R(0)=LD32(R(14)+12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x8)==0;
  { uint32_t k=c->t; R(6)=0x3u; if(k) goto L8c0a0d54; }
  R(6)=0x2u;
L8c0a0d54:;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0a0d5cu; R(4)=R(14); f_8c0a0ac0(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a0da0;
  { c->pr=0x8c0a0d66u; R(4)=R(14); f_8c0a0b96(c); }
  {  goto L8c0a0db4; }
L8c0a0da0:;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0a0da8u; R(4)=R(14); f_8c0a12a0(c); }
  R(3)=LD32(R(14)+8);
  R(0)=0x75u;
  R(2)=0x8u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)|=R(2);
  ST8(R(3)+R(0),R(1));
L8c0a0db4:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a0dbc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(13)=R(4);
  R(4)=LD32(R(13)+8);
  R(0)=0x60u;
  ST32(R(15),R(4));
  R(4)=LD32(R(4)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a0de6;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0a0de6;
  {  goto L8c0a10e8; }
L8c0a0de6:;
  R(4)=LD32(R(13)+12);
  R(0)=0x72u;
  R(3)=0x8u;
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(4)=R(4)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a0df8;
  {  goto L8c0a10e8; }
L8c0a0df8:;
  R(1)=0x2000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c0a0e02;
  {  goto L8c0a10e8; }
L8c0a0e02:;
  R(0)=LD32(R(13)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0a0e12;
  {  goto L8c0a10e8; }
L8c0a0e12:;
  R(0)=0xb4u;
  R(12)=0x8c123b08u;
  R(4)=LD32(R(13)+8);
  R(2)=LD32(R(12)+R(0));
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0a0e2a; }
  R(3)=0x4f800000u;
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0a0e2a:;
  R(0)=0x68u;
  R(11)=0x8c2cff2cu;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8c0a0eb0u;
  fp_ld(c,13,R(0));
  R(0)=0x44u;
  R(2)=(int32_t)(int16_t)LD16(R(11)+R(0));
  R(0)+=0x78u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x68u;
  c->fpul=R(2);
  R(3)=LD32(R(13)+8);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,2,3,13);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a0e56;
  {  goto L8c0a10e8; }
L8c0a0e56:;
  R(2)=LD32(R(13)+8);
  c->fr[14]=0x00000000u;
  fp_st(c,14,R(0)+R(2));
  R(0)=0x6cu;
  R(3)=LD32(R(13)+8);
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0a0e6c;
  {  goto L8c0a0ffc; }
L8c0a0e6c:;
  R(0)=0x8c0a0eb8u;
  R(2)=LD32(R(13)+8);
  fp_ld(c,2,R(0));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(12));
  R(0)=0x70u;
  fp_ld(c,0,R(0)+R(2));
  fp_arith(c,2,1,2);
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c0a0ec0;
  R(3)=0x8c0cba6eu;
  R(2)=0x0u;
  { ST8(R(3),R(2)); goto L8c0a0ffc; }
L8c0a0ec0:;
  R(0)=0x4u;
  R(3)=0xf8u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0xcu;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,14,R(0)+R(15));
  R(5)=LD32(R(13));
  R(5)+=R(3);
  { c->pr=0x8c0a0edau; R(4)+=0x1cu; f_8c05e6ea(c); }
  R(5)=R(13);
  R(3)=0x8c05e612u;
  R(6)=R(13);
  R(4)=R(15);
  R(6)+=0x20u;
  R(5)+=0x44u;
  { c->pr=0x8c0a0eeau; R(4)+=0x10u; f_8c05e612(c); }
  R(0)=0x8c0a0fccu;
  R(3)=0x8c076180u;
  fp_ld(c,15,R(0));
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x4u;
  fp_mov(c,4,15);
  { c->pr=0x8c0a0efcu; R(4)+=0x1cu; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a0f06;
  {  goto L8c0a0ffc; }
L8c0a0f06:;
  R(5)=R(15);
  R(3)=0x8c076180u;
  R(4)=R(15);
  fp_mov(c,4,15);
  R(5)+=0x4u;
  { c->pr=0x8c0a0f14u; R(4)+=0x10u; f_8c076180(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a0f1e;
  {  goto L8c0a0ffc; }
L8c0a0f1e:;
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
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  R(5)=R(15);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  R(14)=0x8c05e55cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=R(15);
  R(5)+=0x1cu;
  { uint32_t tg=R(14); c->pr=0x8c0a0fa6u; R(4)+=0x10u; sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c0a0fe0;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { uint32_t tg=R(14); c->pr=0x8c0a0fb6u; R(4)+=0x10u; sh4_call(c,tg); }
  { fp_mov(c,3,0); goto L8c0a0fee; }
L8c0a0fe0:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { uint32_t tg=R(14); c->pr=0x8c0a0feau; R(4)+=0x10u; sh4_call(c,tg); }
  fp_mov(c,3,0);
  fp_unary(c,0,3);
L8c0a0fee:;
  R(0)=0x8c0a1084u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a0ffc;
  R(3)=0x8c0cba6eu;
  R(2)=0x0u;
  ST8(R(3),R(2));
L8c0a0ffc:;
  R(0)=0x42u;
  R(3)=0x8c09fd30u;
  R(7)=(int32_t)(int16_t)LD16(R(11)+R(0));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(11));
  R(6)=R(13);
  R(5)=R(13);
  R(0)=0x8u;
  R(6)+=0x20u;
  R(4)=R(13);
  R(5)+=0x44u;
  { c->pr=0x8c0a1016u; fp_ld(c,4,R(0)+R(11)); f_8c09fd30(c); }
  R(7)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0a1024;
  R(2)=LD32(R(13)+8);
  R(0)=0x6cu;
  { fp_st(c,14,R(0)+R(2)); goto L8c0a10e8; }
L8c0a1024:;
  R(0)=0xb4u;
  R(4)=LD32(R(13)+8);
  R(3)=LD32(R(12)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0a103a; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0a103a:;
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x4au;
  R(2)=(int32_t)(int16_t)LD16(R(11)+R(0));
  R(0)+=0x72u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x6cu;
  c->fpul=R(2);
  R(3)=LD32(R(13)+8);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,2,3,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a10a0;
  R(2)=LD32(R(13)+8);
  { fp_st(c,14,R(0)+R(2)); goto L8c0a10cc; }
L8c0a10a0:;
  R(5)=R(13);
  R(5)+=0x2cu;
  R(6)=0x3u;
  { c->pr=0x8c0a10aau; R(4)=R(13); f_8c0a027a(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a10e8;
  R(2)=LD32(R(13)+8);
  R(0)=0x64u;
  R(5)=R(15);
  R(5)+=0x1cu;
  fp_st(c,14,R(0)+R(2));
  R(0)=0x6cu;
  R(3)=LD32(R(13)+8);
  R(6)=0x3u;
  fp_st(c,14,R(0)+R(3));
  { c->pr=0x8c0a10c6u; R(4)=R(13); f_8c0a0ac0(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a10d4;
L8c0a10cc:;
  { c->pr=0x8c0a10d0u; R(4)=R(13); f_8c0a0b96(c); }
  {  goto L8c0a10e8; }
L8c0a10d4:;
  R(5)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c0a10dcu; R(4)=R(13); f_8c0a12a0(c); }
  R(3)=LD32(R(13)+8);
  R(0)=0x75u;
  R(2)=0x8u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)|=R(2);
  ST8(R(3)+R(0),R(1));
L8c0a10e8:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a1100(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(4);
  R(4)=LD32(R(14)+8);
  R(0)=0x60u;
  ST32(R(15),R(4));
  R(4)=LD32(R(4)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a111a;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a118a;
L8c0a111a:;
  R(4)=LD32(R(14)+12);
  R(0)=0x72u;
  R(3)=0x1000u;
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(4)=R(4)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c0a118a;
  R(1)=0x2000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c0a118a;
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c0a118a;
  R(0)=0x168u;
  R(4)=0x1u;
  R(2)=LD32(R(14));
  R(3)=(int32_t)(int8_t)LD8(R(2)+R(0));
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a118a;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a118a;
  R(3)=LD32(R(14));
  R(4)=0x2u;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c0a118a;
  R(1)=LD32(R(14)+8);
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(1));
  R(1)=0x72u;
  R(0)=LD32(R(14)+12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x8)==0;
  { uint32_t k=c->t; R(6)=0x3u; if(k) goto L8c0a116c; }
  R(6)=R(4);
L8c0a116c:;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0a1174u; R(4)=R(14); f_8c0a0ac0(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a1182;
  { c->pr=0x8c0a117eu; R(4)=R(14); f_8c0a0b96(c); }
  {  goto L8c0a118a; }
L8c0a1182:;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0a118au; R(4)=R(14); f_8c0a12a0(c); }
L8c0a118a:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a11c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  ST32(R(15)+8,R(5));
  R(5)=R(15);
  R(3)=0x8c09dd40u;
  R(14)=R(4);
  R(5)+=0x18u;
  { c->pr=0x8c0a11d6u; R(4)=R(14); f_8c09dd40(c); }
  R(5)=LD32(R(15)+8);
  R(6)=R(14);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)+=0x50u;
  { c->pr=0x8c0a11e4u; R(4)+=0xcu; f_8c05e612(c); }
  R(0)=0xcu;
  R(3)=0xb8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,0,5);
  R(3)+=R(14);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c07621au;
  R(7)=R(15);
  fp_fmac(c,3,4);
  R(5)+=0x20u;
  R(7)+=0x8u;
  R(6)+=0x14u;
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  { c->pr=0x8c0a121eu; R(4)=LD32(R(14)+12); f_8c07621a(c); }
  R(2)=LD32(R(14)+12);
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(2));
  R(0)=0x1cu;
  R(3)=LD32(R(14)+12);
  fp_st(c,15,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(3)=LD32(R(14)+12);
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=LD32(R(14)+12);
  fp_st(c,3,R(0)+R(3));
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a1248(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(3)=LD32(R(14)+12);
  ST32(R(15),R(3));
  R(2)=LD32(R(14)+16);
  ST32(R(14)+12,R(2));
  { c->pr=0x8c0a125cu; R(4)=R(14); f_8c0a11c0(c); }
  R(2)=LD32(R(15));
  ST32(R(14)+12,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a12a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(0)=0x76u;
  R(2)=0x0u;
  ST32(R(15),R(5));
  R(3)=LD32(R(14)+8);
  ST8(R(3)+R(0),R(2));
  R(3)=0x8c046e68u;
  { c->pr=0x8c0a12b8u; R(4)=LD32(R(14)+8); f_8c046e68(c); }
  R(5)=LD32(R(15));
  { c->pr=0x8c0a12beu; R(4)=R(14); f_8c0a1248(c); }
  R(2)=LD32(R(14)+8);
  R(0)=0x60u;
  R(3)=0x1u;
  ST32(R(2)+R(0),R(3));
  R(0)=0x75u;
  R(3)=LD32(R(14)+8);
  R(2)=0x4u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)|=R(2);
  ST8(R(3)+R(0),R(1));
  R(0)=0x28u;
  R(1)=LD32(R(14)+16);
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(0)+R(3));
  R(0)=0x30u;
  R(1)=LD32(R(14)+16);
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(0)+R(3));
  R(0)=0x18u;
  R(1)=LD32(R(14)+16);
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(0)+R(3));
  R(0)=0x1cu;
  R(1)=LD32(R(14)+16);
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(0)+R(3));
  R(3)=0x8c09e7c0u;
  { c->pr=0x8c0a1300u; R(4)=R(14); f_8c09e7c0(c); }
  R(4)=LD32(R(14)+8);
  R(5)=R(14);
  R(3)=0x8c05e6eau;
  R(5)+=0x20u;
  { c->pr=0x8c0a130cu; R(4)+=0x10u; f_8c05e6ea(c); }
  R(4)=LD32(R(14)+8);
  R(5)=LD32(R(15));
  R(4)+=0x1cu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c05e6eau;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e6ea(c); return; } }
}
void f_8c0a131c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=R(4);
  R(3)=LD32(R(14)+8);
  R(0)=0x60u;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a13be;
  R(1)=0x8c2cff74u;
  R(0)=0x8c123bc4u;
  R(2)=(int32_t)(int16_t)LD16(R(1));
  fp_ld(c,2,R(0));
  R(0)=0x8c0a13f4u;
  c->fpul=R(2);
  R(3)=LD32(R(14)+8);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0));
  R(0)=0x70u;
  fp_ld(c,1,R(0)+R(3));
  fp_arith(c,2,3,2);
  fp_cmp(c,1,3,1);
  if(!c->t) goto L8c0a13be;
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0a13be;
  R(6)=LD32(R(14)+8);
  R(4)=R(15);
  R(3)=0x8c05e612u;
  R(6)+=0x10u;
  { c->pr=0x8c0a1366u; R(4)+=0x10u; f_8c05e612(c); }
  R(0)=0x10u;
  R(6)=LD32(R(14)+8);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  R(4)=R(15);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(3)=0x8c05e612u;
  ST32(R(15),R(6));
  R(6)+=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  R(5)=LD32(R(15));
  R(5)+=0x1cu;
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  { c->pr=0x8c0a1394u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8c0a13fcu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0));
  fp_arith(c,0,4,3);
  fp_cmp(c,1,15,4);
  if(c->t) goto L8c0a13be;
  { R(0)=0x0u; goto L8c0a13c0; }
L8c0a13be:;
  R(0)=0x1u;
L8c0a13c0:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a1400(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(0)=0x60u;
  R(2)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+8);
  ST32(R(3)+R(0),R(2));
  R(3)=0x8c046ec0u;
  { c->pr=0x8c0a1414u; R(4)=LD32(R(14)+8); f_8c046ec0(c); }
  R(2)=0x8c046ee0u;
  { c->pr=0x8c0a141au; R(4)=LD32(R(14)+8); f_8c046ee0(c); }
  R(3)=LD32(R(14)+8);
  R(0)=0x75u;
  R(2)=0x4u;
  R(4)=R(14);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)|=R(2);
  ST8(R(3)+R(0),R(1));
  R(3)=LD32(R(14)+8);
  R(1)=0xf7u;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(2)&=R(1);
  ST8(R(3)+R(0),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c09ea62u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09ea62(c); return; } }
}
void f_8c0a143a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(4);
  R(0)=0xb4u;
  R(4)=0x8c123b08u;
  R(5)=LD32(R(14)+8);
  R(3)=LD32(R(4)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0a145a; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0a145a:;
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(5));
  R(0)=0x46u;
  R(5)=0x8c2cff2cu;
  R(6)=LD32(R(14)+8);
  R(3)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(0)+=0x76u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8c0a14e0u;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(6));
  fp_arith(c,2,3,2);
  fp_cmp(c,1,3,1);
  if(c->t) goto L8c0a1532;
  R(0)=0x7cu;
  R(0)=(int32_t)(int16_t)LD16(R(5)+R(0));
  c->t=(R(0)&0x20)==0;
  if(!c->t) goto L8c0a1532;
  R(0)=0x17cu;
  R(2)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a1532;
  R(3)=LD32(R(14)+8);
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  R(5)=R(15);
  R(6)=0xbu;
  fp_st(c,3,R(0)+R(3));
  { c->pr=0x8c0a14a2u; R(4)=R(14); f_8c0a0ac0(c); }
  R(4)=R(0);
  R(2)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a1532;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a1500;
  { c->pr=0x8c0a14b4u; R(4)=R(14); f_8c0a1400(c); }
  {  goto L8c0a152a; }
L8c0a1500:;
  R(5)=R(15);
  { c->pr=0x8c0a1506u; R(4)=R(14); f_8c0a12a0(c); }
  R(0)=LD32(R(14)+8);
  R(1)=0x75u;
  R(4)=0x8c0cba28u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0a151a;
  R(2)=0x1u;
  { ST8(R(4),R(2)); goto L8c0a151e; }
L8c0a151a:;
  R(0)=0x0u;
  ST8(R(4),R(0));
L8c0a151e:;
  R(3)=LD32(R(14)+8);
  R(0)=0x75u;
  R(2)=0xf7u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
L8c0a152a:;
  R(0)=0x17cu;
  R(2)=0x0u;
  R(3)=LD32(R(14)+8);
  ST8(R(3)+R(0),R(2));
L8c0a1532:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a1560(SH4Ctx *c) {
  fp_ld(c,6,R(5));
  R(0)=0x4u;
  fp_ld(c,7,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,8,R(0)+R(5));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(6));
  R(0)=0x8u;
  fp_ld(c,9,R(0)+R(6));
  fp_ld(c,5,R(6));
  fp_st(c,6,R(4));
  R(4)+=0x4u;
  fp_st(c,7,R(4));
  R(4)+=0x4u;
  fp_st(c,8,R(4));
  R(4)+=0x4u;
  fp_st(c,6,R(4));
  R(4)+=0x4u;
  fp_st(c,7,R(4));
  R(4)+=0x4u;
  fp_st(c,9,R(4));
  R(4)+=0x4u;
  fp_st(c,6,R(4));
  R(4)+=0x4u;
  fp_st(c,4,R(4));
  R(4)+=0x4u;
  fp_st(c,8,R(4));
  R(4)+=0x4u;
  fp_st(c,6,R(4));
  R(4)+=0x4u;
  fp_st(c,4,R(4));
  R(4)+=0x4u;
  fp_st(c,9,R(4));
  R(4)+=0x4u;
  fp_st(c,5,R(4));
  R(4)+=0x4u;
  fp_st(c,7,R(4));
  R(4)+=0x4u;
  fp_st(c,8,R(4));
  R(4)+=0x4u;
  fp_st(c,5,R(4));
  R(4)+=0x4u;
  fp_st(c,7,R(4));
  R(4)+=0x4u;
  fp_st(c,9,R(4));
  R(4)+=0x4u;
  fp_st(c,5,R(4));
  R(4)+=0x4u;
  fp_st(c,4,R(4));
  R(4)+=0x4u;
  fp_st(c,8,R(4));
  R(4)+=0x4u;
  fp_st(c,5,R(4));
  R(4)+=0x4u;
  fp_st(c,4,R(4));
  R(4)+=0x4u;
  { fp_st(c,9,R(4)); return; }
}
void f_8c0a15d4(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,3,R(6));
  fp_arith(c,1,3,4);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(6));
  fp_arith(c,1,2,4);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,1,3,4);
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(6));
  fp_arith(c,0,3,4);
  fp_st(c,3,R(5));
  fp_ld(c,2,R(0)+R(6));
  fp_arith(c,0,2,4);
  fp_st(c,2,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,0,3,4);
  { fp_st(c,3,R(0)+R(5)); return; }
}
void f_8c0a1602(SH4Ctx *c) {
  fp_ld(c,6,R(6));
  fp_ld(c,5,R(7));
  fp_arith(c,1,6,4);
  fp_cmp(c,1,5,6);
  { uint32_t k=!c->t; R(1)=LD32(R(15)); if(k) goto L8c0a1612; }
  { fp_mov(c,3,6); goto L8c0a1614; }
L8c0a1612:;
  fp_mov(c,3,5);
L8c0a1614:;
  R(0)=0x4u;
  fp_st(c,3,R(4));
  fp_ld(c,6,R(0)+R(6));
  fp_ld(c,5,R(0)+R(7));
  fp_arith(c,1,6,4);
  fp_cmp(c,1,5,6);
  if(!c->t) goto L8c0a1626;
  { fp_mov(c,3,6); goto L8c0a1628; }
L8c0a1626:;
  fp_mov(c,3,5);
L8c0a1628:;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(6));
  fp_ld(c,6,R(0)+R(7));
  fp_arith(c,1,5,4);
  fp_cmp(c,1,6,5);
  if(!c->t) goto L8c0a163a;
  { fp_mov(c,3,5); goto L8c0a163c; }
L8c0a163a:;
  fp_mov(c,3,6);
L8c0a163c:;
  fp_st(c,3,R(0)+R(4));
  fp_ld(c,5,R(6));
  fp_ld(c,6,R(1));
  fp_arith(c,0,5,4);
  fp_cmp(c,1,5,6);
  if(!c->t) goto L8c0a164c;
  { fp_mov(c,3,5); goto L8c0a164e; }
L8c0a164c:;
  fp_mov(c,3,6);
L8c0a164e:;
  R(0)=0x4u;
  fp_st(c,3,R(5));
  fp_ld(c,5,R(0)+R(6));
  fp_ld(c,6,R(0)+R(1));
  fp_arith(c,0,5,4);
  fp_cmp(c,1,5,6);
  if(!c->t) goto L8c0a1660;
  { fp_mov(c,3,5); goto L8c0a1662; }
L8c0a1660:;
  fp_mov(c,3,6);
L8c0a1662:;
  fp_st(c,3,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(6));
  fp_ld(c,6,R(0)+R(1));
  fp_arith(c,0,5,4);
  fp_cmp(c,1,5,6);
  if(!c->t) goto L8c0a1674;
  { fp_mov(c,3,5); goto L8c0a1676; }
L8c0a1674:;
  fp_mov(c,3,6);
L8c0a1676:;
  { fp_st(c,3,R(0)+R(5)); return; }
}
void f_8c0a167a(SH4Ctx *c) {
  fp_ld(c,2,R(6));
  fp_ld(c,3,R(5));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a16b2;
  fp_ld(c,2,R(7));
  fp_ld(c,3,R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a16b2;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(6));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a16b2;
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a16b2;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(6));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a16b2;
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a16b2;
  { R(0)=0x1u; return; }
L8c0a16b2:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0a16c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(4)+4);
  R(0)=0xf0u;
  R(14)=LD32(R(14));
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a16da;
  R(3)=0x8c043806u;
  R(4)=R(14);
  R(5)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c043806(c); return; } }
L8c0a16da:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a16de(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(0)=0xf0u;
  ST32(R(15),R(4));
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14));
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a1716;
  R(3)=0x8c0841b8u;
  { c->pr=0x8c0a16fcu; R(4)=LD32(R(14)+4); f_8c0841b8(c); }
  R(2)=0x8c043806u;
  R(5)=R(0);
  { c->pr=0x8c0a1704u; R(4)=R(14); f_8c043806(c); }
  R(0)=0x84u;
  R(4)=LD32(R(15));
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)+=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c054f34u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c054f34(c); return; } }
L8c0a1716:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a1740(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  { ST32(R(4)+24,R(5)); return; }
}
void f_8c0a1746(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  { R(0)=LD32(R(4)+24); return; }
}
void f_8c0a174c(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  R(3)=LD32(R(4)+24);
  R(3)|=R(5);
  { ST32(R(4)+24,R(3)); return; }
}
void f_8c0a1756(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  R(3)=LD32(R(4)+24);
  R(2)=R(3);
  R(5)&=R(3);
  R(2)-=R(5);
  { ST32(R(4)+24,R(2)); return; }
}
void f_8c0a1764(SH4Ctx *c) {
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0a1782;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0a1782;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0a179a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0a179a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0a178a;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0a1798;
  {  goto L8c0a179e; }
L8c0a1782:;
  R(4)=LD32(R(4)+4);
  R(3)=LD32(R(4)+24);
  { R(3)|=R(5); goto L8c0a1794; }
L8c0a178a:;
  R(4)=LD32(R(4)+4);
  R(2)=LD32(R(4)+24);
  R(3)=R(2);
  R(5)&=R(2);
  R(3)-=R(5);
L8c0a1794:;
  { ST32(R(4)+24,R(3)); goto L8c0a179e; }
L8c0a1798:;
  R(5)=0x0u;
L8c0a179a:;
  R(4)=LD32(R(4)+4);
  ST32(R(4)+24,R(5));
L8c0a179e:;
  {  return; }
}
void f_8c0a17c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=0x8u;
  c->fr[4]=0x00000000u;
  R(14)=R(5);
  R(11)=0x0u;
  R(12)=R(4);
  ST32(R(15)+4,R(6));
  ST32(R(15),R(7));
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8c0a1940u;
  fp_ld(c,3,R(0));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(9)=R(11); if(k) goto L8c0a18a4; }
  R(3)=0x8c047e48u;
  R(5)=R(14);
  { c->pr=0x8c0a1800u; R(4)=0x1u; f_8c047e48(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a18a4;
  R(10)=0x8c0cc3b0u;
  R(3)=0x8c0cc3acu;
  R(2)=0x8c055c1au;
  ST32(R(3),R(12));
  ST32(R(10),R(11));
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c0a1814u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(6)=LD32(R(15)+4);
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0a181eu; R(7)=LD32(R(15)); f_8c0a1b94(c); }
  R(2)=LD32(R(10));
  R(13)=R(11);
  R(8)=0x8c0cbbf0u;
  R(14)=R(12);
  c->t=(int32_t)R(2)>0;
  R(11)=0x2u;
  { uint32_t k=!c->t; R(12)=0x1u; if(k) goto L8c0a18a4; }
L8c0a182e:;
  R(4)=LD32(R(14)+40);
  R(0)=R(4);
  R(0)&=R(12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a183c;
  { ST32(R(14)+40,R(11)); goto L8c0a183e; }
L8c0a183c:;
  ST32(R(14)+40,R(12));
L8c0a183e:;
  c->t=(R(4)&R(11))==0;
  if(c->t) goto L8c0a1848;
  R(0)=LD32(R(14)+40);
  R(0)|=0x4u;
  ST32(R(14)+40,R(0));
L8c0a1848:;
  R(2)=LD32(R(14)+32);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a1886;
  R(3)=0x8c05a402u;
  { c->pr=0x8c0a1854u; R(4)=LD32(R(14)+32); f_8c05a402(c); }
  R(2)=0x8c0b2de6u;
  R(9)=R(0);
  { c->pr=0x8c0a185cu; R(4)=R(0); f_8c0b2de6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a1876;
  R(2)=0x8c0b2e20u;
  { c->pr=0x8c0a1868u; R(4)=R(9); f_8c0b2e20(c); }
  R(4)=R(0);
  fp_ld(c,3,R(4));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(4)); goto L8c0a1880; }
L8c0a1876:;
  R(3)=0x8c0cbbecu;
  R(0)=0x58u;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(14));
  fp_ld(c,3,R(8));
L8c0a1880:;
  R(0)=0x5cu;
  { fp_st(c,3,R(0)+R(14)); goto L8c0a1894; }
L8c0a1886:;
  R(3)=0x8c0cbbecu;
  R(0)=0x58u;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,3,R(8));
  fp_st(c,3,R(0)+R(14));
L8c0a1894:;
  R(9)=(uint32_t)(int32_t)(int16_t)R(13);
  R(2)=LD32(R(10));
  R(13)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(13);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  R(9)+=0x1u;
  { uint32_t k=!c->t; R(14)+=0x68u; if(k) goto L8c0a182e; }
L8c0a18a4:;
  R(0)=R(9);
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
void f_8c0a18ba(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c09341au;
  R(14)=R(6);
  ST32(R(15)+8,R(4));
  ST32(R(15),R(5));
  ST32(R(15)+4,R(7));
  { c->pr=0x8c0a18ceu; R(4)=LD32(R(14)+4); f_8c09341a(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0a1908;
  R(3)=0x8c093328u;
  { c->pr=0x8c0a18dau; R(4)=0x3u; f_8c093328(c); }
  R(7)=R(0);
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c0a1908;
  R(4)=R(14);
  R(0)=LD32(R(4)+48);
  R(5)=0x4u;
  R(5)&=R(0);
  R(0)=LD32(R(15)+8);
  R(3)=0x1u;
  R(0)=LD32(R(0)+48);
  R(0)&=0x8u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+36);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0b2980u;
  R(5)=LD32(R(15)+24);
  R(6)=LD32(R(15)+40);
  { c->pr=0x8c0a1906u; R(4)=LD32(R(15)+20); f_8c0b2980(c); }
  R(15)+=0x14u;
L8c0a1908:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a1910(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(6);
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(10)=LD32(R(15)+36);
  R(0)=LD32(R(0)+4);
  R(13)=R(4);
  R(8)=R(5);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  { uint32_t k=c->t; R(9)=R(7); if(k) goto L8c0a1980; }
  { R(0)=0x1u; goto L8c0a1982; }
L8c0a1980:;
  R(0)=0x0u;
L8c0a1982:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0a198c;
  {  goto L8c0a1b80; }
L8c0a198c:;
  R(4)=R(14);
  R(0)=LD32(R(4)+48);
  R(5)=0x1u;
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0a199e;
  {  goto L8c0a1b80; }
L8c0a199e:;
  R(12)=LD32(R(14)+4);
  R(11)=LD32(R(13)+4);
  R(3)=0x8c047edeu;
  R(12)=LD32(R(12)+20);
  R(11)=LD32(R(11)+20);
  { c->pr=0x8c0a19acu; R(4)=R(11); f_8c047ede(c); }
  c->t=(R(12)&R(12))==0;
  R(0)=R(0)&0xFF;
  { uint32_t k=c->t; {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} if(k) goto L8c0a19be; }
  R(2)=0x8c047edeu;
  { c->pr=0x8c0a19bau; R(4)=R(12); f_8c047ede(c); }
  { R(2)=R(0)&0xFF; goto L8c0a19c0; }
L8c0a19be:;
  R(2)=0x0u;
L8c0a19c0:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(c->t) goto L8c0a19ca;
  {  goto L8c0a1b80; }
L8c0a19ca:;
  R(3)=0x8c123cf0u;
  c->t=(R(11)&R(11))==0;
  R(2)=LD32(R(3));
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c0a1a24; }
  R(2)=0x8c047ef8u;
  { c->pr=0x8c0a19dau; R(4)=R(11); f_8c047ef8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a19ee;
  R(2)=0x8c05689eu;
  { c->pr=0x8c0a19e6u; R(4)=R(14); f_8c05689e(c); }
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0a19ee;
  {  goto L8c0a1b80; }
L8c0a19ee:;
  R(2)=LD32(R(15));
  c->t=R(14)==R(2);
  if(!c->t) goto L8c0a1a08;
  R(2)=0x8c047f10u;
  { c->pr=0x8c0a19fau; R(4)=R(11); f_8c047f10(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a1a04;
  {  goto L8c0a1b80; }
L8c0a1a04:;
  {  goto L8c0a1a24; }
L8c0a1a08:;
  R(3)=0x8c047f00u;
  { c->pr=0x8c0a1a0eu; R(4)=R(11); f_8c047f00(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a1a24;
  R(3)=0x8c044212u;
  { c->pr=0x8c0a1a1au; R(4)=LD32(R(14)+4); f_8c044212(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a1a24;
  {  goto L8c0a1b80; }
L8c0a1a24:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0a1a9c;
  R(2)=0x8c047ef8u;
  { c->pr=0x8c0a1a2eu; R(4)=R(12); f_8c047ef8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a1a42;
  R(2)=0x8c05689eu;
  { c->pr=0x8c0a1a3au; R(4)=R(13); f_8c05689e(c); }
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0a1a42;
  {  goto L8c0a1b80; }
L8c0a1a42:;
  R(2)=LD32(R(15));
  c->t=R(2)==R(13);
  if(!c->t) goto L8c0a1a80;
  R(2)=0x8c047f10u;
  { c->pr=0x8c0a1a4eu; R(4)=R(12); f_8c047f10(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a1a58;
  {  goto L8c0a1b80; }
L8c0a1a58:;
  {  goto L8c0a1a9c; }
L8c0a1a80:;
  R(3)=0x8c047f00u;
  { c->pr=0x8c0a1a86u; R(4)=R(12); f_8c047f00(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a1a9c;
  R(3)=0x8c044212u;
  { c->pr=0x8c0a1a92u; R(4)=LD32(R(13)+4); f_8c044212(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a1a9c;
  {  goto L8c0a1b80; }
L8c0a1a9c:;
  R(4)=R(13);
  R(11)=LD32(R(4)+52);
  R(4)=R(14);
  R(2)=LD32(R(4)+52);
  c->t=(R(11)&R(11))==0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c0a1ad8; }
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a1ad8;
  R(5)=R(14);
  R(0)=LD32(R(5)+48);
  R(4)=0x4u;
  R(3)=0x8c0b26a0u;
  R(4)&=R(0);
  R(5)=R(10);
  R(2)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13)+48);
  R(0)&=0x8u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(14)+36);
  { uint32_t tg=R(3); c->pr=0x8c0a1ad0u; R(4)=R(11); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0a1b80; }
L8c0a1ad8:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0a1b16;
  R(2)=0x8c059f90u;
  R(5)=R(14);
  { c->pr=0x8c0a1ae4u; R(4)=0x3u; f_8c059f90(c); }
  R(7)=R(0);
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(7)+R(0));
  R(2)=0x1u;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0a1b16;
  R(5)=R(14);
  R(0)=LD32(R(5)+48);
  R(4)=0x4u;
  R(1)=0x8c0b2980u;
  R(4)&=R(0);
  R(0)=LD32(R(13)+48);
  R(3)=0x1u;
  R(6)=R(10);
  R(0)&=0x8u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  R(5)=R(9);
  R(2)=LD32(R(14)+36);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(1); c->pr=0x8c0a1b14u; R(4)=R(8); sh4_call(c,tg); }
  R(15)+=0x14u;
L8c0a1b16:;
  R(4)=LD32(R(14)+4);
  R(0)=0xa8u;
  R(4)=LD32(R(4));
  R(5)=LD32(R(4)+R(0));
  R(14)=R(5);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0a1b80;
L8c0a1b24:;
  R(4)=LD32(R(14)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a1b60;
  { R(6)=R(4); goto L8c0a1b62; }
L8c0a1b60:;
  R(6)=LD32(R(14));
L8c0a1b62:;
  R(0)=LD32(R(6));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0a1b7a;
  R(0)=LD32(R(6)+48);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c0a1b7a;
  R(5)=R(8);
  R(7)=R(9);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0a1b78u; R(4)=R(13); f_8c0a18ba(c); }
  R(15)+=0x4u;
L8c0a1b7a:;
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0a1b24;
L8c0a1b80:;
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
void f_8c0a1b94(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(3)=0x8c059f8au;
  R(14)=R(4);
  ST32(R(15),R(5));
  R(5)=R(14);
  R(11)=R(6);
  R(9)=R(7);
  { c->pr=0x8c0a1bb8u; R(4)=0x1u; f_8c059f8a(c); }
  R(8)=LD32(R(14)+4);
  R(6)=R(11);
  R(5)=R(9);
  R(3)=0x8c05e612u;
  R(8)=LD32(R(8)+20);
  R(4)=R(15);
  R(5)+=0x58u;
  R(10)=R(0);
  R(6)+=0x58u;
  { c->pr=0x8c0a1bceu; R(4)+=0x24u; f_8c05e612(c); }
  R(5)=R(14);
  R(0)=LD32(R(5)+48);
  R(4)=0x10u;
  R(4)&=R(0);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a1c4c;
  R(4)=R(14);
  R(13)=LD32(R(4)+52);
  R(2)=0x8c0685b4u;
  R(4)=R(15);
  R(6)=0x18u;
  R(5)=R(13);
  { c->pr=0x8c0a1becu; R(4)+=0xcu; f_8c0685b4(c); }
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; c->fr[3]=0x00000000u; if(k) goto L8c0a1c06; }
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,1,R(0)+R(13));
  fp_arith(c,0,1,2);
  { fp_st(c,1,R(0)+R(13)); goto L8c0a1c10; }
L8c0a1c06:;
  R(0)=0x24u;
  fp_ld(c,1,R(13));
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,1,2);
  fp_st(c,1,R(13));
L8c0a1c10:;
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a1c20;
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  { R(0)=0x10u; goto L8c0a1c26; }
L8c0a1c20:;
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
L8c0a1c26:;
  fp_ld(c,1,R(0)+R(13));
  c->fr[3]=0x00000000u;
  fp_arith(c,0,1,2);
  fp_st(c,1,R(0)+R(13));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a1c3e;
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  { R(0)=0x14u; goto L8c0a1c44; }
L8c0a1c3e:;
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
L8c0a1c44:;
  fp_ld(c,1,R(0)+R(13));
  fp_arith(c,0,1,2);
  { fp_st(c,1,R(0)+R(13)); goto L8c0a1c76; }
L8c0a1c4c:;
  R(4)=R(14);
  R(13)=LD32(R(4)+52);
  R(0)=0xcu;
  fp_ld(c,15,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,15);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(13));
L8c0a1c76:;
  R(3)=0x8c047ef8u;
  { c->pr=0x8c0a1c7cu; R(4)=R(8); f_8c047ef8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a1c9a;
  R(3)=0x8c047f00u;
  { c->pr=0x8c0a1c88u; R(4)=R(8); f_8c047f00(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a1c9a;
  R(3)=0x8c047f10u;
  { c->pr=0x8c0a1c94u; R(4)=R(8); f_8c047f10(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a1d56;
L8c0a1c9a:;
  R(5)=LD32(R(15));
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4));
  { R(13)=R(4); goto L8c0a1cf8; }
L8c0a1ce0:;
  R(4)=R(13);
  R(12)=LD32(R(4));
  c->t=R(14)==R(12);
  if(c->t) goto L8c0a1cf6;
  R(6)=R(12);
  R(5)=R(10);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(7)=R(11);
  { c->pr=0x8c0a1cf4u; R(4)=R(14); f_8c0a1910(c); }
  R(15)+=0x4u;
L8c0a1cf6:;
  R(13)=LD32(R(13)+4);
L8c0a1cf8:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0a1ce0;
  R(3)=0x8c047f18u;
  { c->pr=0x8c0a1d02u; R(4)=R(8); f_8c047f18(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a1d56;
  R(4)=LD32(R(15));
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5)+44);
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(15));
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4)+40);
  { ST32(R(15)+8,R(4)); goto L8c0a1d50; }
L8c0a1d1a:;
  R(4)=LD32(R(15)+8);
  R(13)=LD32(R(4));
  R(4)=LD32(R(13)+4);
  R(4)=LD32(R(4));
  { R(13)=R(4); goto L8c0a1d3e; }
L8c0a1d26:;
  R(4)=R(13);
  R(12)=LD32(R(4));
  c->t=R(14)==R(12);
  if(c->t) goto L8c0a1d3c;
  R(6)=R(12);
  R(5)=R(10);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(7)=R(11);
  { c->pr=0x8c0a1d3au; R(4)=R(14); f_8c0a1910(c); }
  R(15)+=0x4u;
L8c0a1d3c:;
  R(13)=LD32(R(13)+4);
L8c0a1d3e:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0a1d26;
  R(3)=LD32(R(15)+4);
  R(3)+=0xffffffffu;
  ST32(R(15)+4,R(3));
  R(4)=LD32(R(15)+8);
  R(5)=R(4);
  R(5)+=0x4u;
  ST32(R(15)+8,R(5));
L8c0a1d50:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c0a1d1a;
L8c0a1d56:;
  R(3)=0x8c047ef0u;
  { c->pr=0x8c0a1d5cu; R(4)=R(8); f_8c047ef0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a1dc0;
  R(3)=0x8c094a6eu;
  { c->pr=0x8c0a1d68u; R(4)=LD32(R(15)); f_8c094a6e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a1dc0;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(6)=R(10);
  R(5)=LD32(R(15)+4);
  R(7)=R(11);
  { c->pr=0x8c0a1d7au; R(4)=R(14); f_8c0a1e04(c); }
  R(15)+=0x4u;
  R(2)=0x8c047f18u;
  { c->pr=0x8c0a1d82u; R(4)=R(8); f_8c047f18(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a1dc0;
  R(4)=LD32(R(15));
  R(5)=LD32(R(4)+4);
  R(8)=LD32(R(5)+44);
  R(5)=LD32(R(5)+40);
  { R(12)=R(5); goto L8c0a1dbc; }
L8c0a1d94:;
  R(4)=R(12);
  R(2)=0x8c094a6eu;
  R(13)=LD32(R(4));
  { c->pr=0x8c0a1d9eu; R(4)=R(13); f_8c094a6e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a1db2;
  R(6)=R(10);
  R(5)=R(13);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(7)=R(11);
  { c->pr=0x8c0a1db0u; R(4)=R(14); f_8c0a1e04(c); }
  R(15)+=0x4u;
L8c0a1db2:;
  R(4)=R(12);
  R(4)+=0x4u;
  R(5)=R(12);
  R(12)=R(4);
  R(8)+=0xffffffffu;
L8c0a1dbc:;
  c->t=(int32_t)R(8)>0;
  if(c->t) goto L8c0a1d94;
L8c0a1dc0:;
  R(4)=R(14);
  R(0)=LD32(R(4)+48);
  R(5)=0x10u;
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0a1de4;
  R(4)=R(14);
  R(3)=LD32(R(4)+52);
  R(6)=0x18u;
  R(5)=R(15);
  R(4)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c0685b4u;
  { c->pr=0x8c0a1de0u; R(5)+=0xcu; f_8c0685b4(c); }
  {  goto L8c0a1dee; }
L8c0a1de4:;
  R(3)=LD32(R(4)+52);
  R(0)=0xcu;
  R(1)=R(3);
  ST32(R(15),R(3));
  fp_st(c,15,R(0)+R(1));
L8c0a1dee:;
  R(15)+=0x30u;
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
void f_8c0a1e04(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(4);
  R(4)=R(5);
  R(14)=R(5);
  R(0)=LD32(R(4)+48);
  R(5)=0x1u;
  R(11)=LD32(R(15)+32);
  R(5)&=R(0);
  R(9)=R(6);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(10)=R(7); if(k) goto L8c0a1e30; }
  {  goto L8c0a1f82; }
L8c0a1e30:;
  R(5)=R(14);
  R(4)=R(13);
  R(0)=LD32(R(5)+48);
  R(12)=LD32(R(4)+52);
  R(4)=0x10u;
  R(4)&=R(0);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a1e80;
  R(4)=R(14);
  R(3)=LD32(R(4)+52);
  ST32(R(15),R(3));
  {  goto L8c0a1e86; }
L8c0a1e80:;
  R(4)=R(14);
  R(2)=LD32(R(4)+52);
  ST32(R(15),R(2));
L8c0a1e86:;
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(6)=LD32(R(15)); if(k) goto L8c0a1f20; }
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0a1f20;
  R(5)=R(14);
  R(0)=LD32(R(5)+48);
  R(4)=0x10u;
  R(7)=R(14);
  R(4)&=R(0);
  R(0)=LD32(R(7)+48);
  R(5)=0x4u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(5)&=R(0);
  R(0)=LD32(R(13)+48);
  R(3)=0x8c0b26a0u;
  R(0)&=0x8u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  R(5)=R(11);
  R(7)=LD32(R(14)+36);
  { c->pr=0x8c0a1eb4u; R(4)=R(12); f_8c0b26a0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0xcu; if(k) goto L8c0a1f20; }
  R(2)=LD32(R(14)+48);
  R(3)=0x200u;
  R(2)&=R(3);
  R(2)>>=8;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a1f82;
  R(12)=LD32(R(14)+8);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0a1f82;
L8c0a1ed0:;
  R(6)=R(9);
  R(5)=R(12);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  { c->pr=0x8c0a1edcu; R(4)=R(13); f_8c0a1e04(c); }
  R(12)=LD32(R(12)+20);
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0a1ed0; }
  {  goto L8c0a1f82; }
L8c0a1f20:;
  R(4)=LD32(R(14));
  R(2)=0x20u;
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c0a1f68;
  R(1)=0x8c0a2880u;
  { c->pr=0x8c0a1f2eu; R(4)=LD32(R(14)+4); f_8c0a2880(c); }
  R(3)=0x8c09341au;
  { c->pr=0x8c0a1f34u; R(4)=R(0); f_8c09341a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a1f68;
  R(3)=0x8c093320u;
  { c->pr=0x8c0a1f40u;  f_8c093320(c); }
  R(4)=R(14);
  R(7)=R(0);
  R(0)=LD32(R(4)+48);
  R(5)=0x4u;
  R(3)=0x0u;
  R(1)=0x8c0b2980u;
  R(5)&=R(0);
  R(0)=LD32(R(13)+48);
  R(6)=R(11);
  R(0)&=0x8u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  R(5)=R(10);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+36);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(1); c->pr=0x8c0a1f66u; R(4)=R(9); sh4_call(c,tg); }
  R(15)+=0x14u;
L8c0a1f68:;
  R(12)=LD32(R(14)+8);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0a1f82;
L8c0a1f6e:;
  R(6)=R(9);
  R(5)=R(12);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  { c->pr=0x8c0a1f7au; R(4)=R(13); f_8c0a1e04(c); }
  R(12)=LD32(R(12)+20);
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0a1f6e; }
L8c0a1f82:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a1fc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=R(6);
  R(11)=R(5);
  R(3)=0x8c05e612u;
  R(6)=R(7);
  R(5)=R(13);
  fp_mov(c,15,5);
  R(12)=R(4);
  fp_mov(c,14,4);
  R(14)=R(7);
  { c->pr=0x8c0a1fe6u; R(4)=R(15); f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,4,R(15));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_mov(c,3,14);
  fp_arith(c,0,3,4);
  fp_cmp(c,1,3,15);
  if(c->t) goto L8c0a2014;
  R(2)=0x8c05e6eau;
  R(5)=R(14);
  { c->pr=0x8c0a2010u; R(4)=R(12); f_8c05e6ea(c); }
  { fp_st(c,15,R(11)); goto L8c0a206c; }
L8c0a2014:;
  fp_mov(c,3,15);
  fp_arith(c,0,3,4);
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a2028;
  R(2)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c0a2024u; R(4)=R(12); f_8c05e6ea(c); }
  { fp_st(c,14,R(11)); goto L8c0a206c; }
L8c0a2028:;
  fp_mov(c,3,14);
  fp_arith(c,1,3,15);
  c->fr[2]=0x3F800000u;
  R(0)=0x4u;
  c->fr[6]=0x3F800000u;
  fp_arith(c,0,6,6);
  fp_ld(c,7,R(13));
  fp_arith(c,0,14,15);
  fp_arith(c,3,3,4);
  fp_arith(c,0,14,4);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(14));
  fp_arith(c,1,3,7);
  fp_mov(c,5,2);
  fp_arith(c,3,5,6);
  fp_mov(c,2,7);
  fp_mov(c,0,5);
  fp_fmac(c,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,3,R(0)+R(14));
  fp_ld(c,7,R(0)+R(13));
  fp_arith(c,1,3,7);
  fp_mov(c,2,7);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_ld(c,7,R(0)+R(13));
  fp_arith(c,1,3,7);
  fp_mov(c,2,7);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(12));
  fp_arith(c,3,14,6);
  fp_st(c,14,R(11));
L8c0a206c:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a207e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(6);
  R(3)=0x8c05e612u;
  R(12)=R(4);
  ST32(R(15),R(5));
  R(5)=R(14);
  R(4)=R(15);
  fp_mov(c,15,4);
  R(13)=R(7);
  R(6)=R(7);
  { c->pr=0x8c0a20a0u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_mov(c,5,3);
  fp_cmp(c,1,5,15);
  if(c->t) goto L8c0a20ce;
  R(2)=0x8c05e6eau;
  R(5)=R(14);
  { c->pr=0x8c0a20c8u; R(4)=R(12); f_8c05e6ea(c); }
  R(3)=LD32(R(15));
  { fp_st(c,15,R(3)); goto L8c0a2110; }
L8c0a20ce:;
  fp_mov(c,3,15);
  fp_arith(c,3,3,5);
  c->fr[2]=0x3F800000u;
  R(0)=0x4u;
  c->fr[7]=0x3F800000u;
  fp_arith(c,0,7,7);
  fp_ld(c,6,R(14));
  fp_arith(c,0,15,5);
  fp_arith(c,3,15,7);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(13));
  fp_arith(c,1,3,6);
  fp_mov(c,4,2);
  fp_arith(c,3,4,7);
  fp_mov(c,2,6);
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,6,R(0)+R(14));
  fp_arith(c,1,3,6);
  fp_mov(c,2,6);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,6,R(0)+R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,6);
  fp_arith(c,1,3,6);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(12));
  R(3)=LD32(R(15));
  fp_st(c,15,R(3));
L8c0a2110:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a211e(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(4));
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  { fp_st(c,3,R(5)); return; }
}
void f_8c0a2160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=0x2cu;
  R(14)=R(4);
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(13)=R(5);
  R(11)=LD32(R(14));
  R(8)=0x0u;
  c->t=(int32_t)R(3)>0;
  R(12)=R(6);
  { uint32_t k=!c->t; R(10)=R(8); if(k) goto L8c0a219e; }
L8c0a2186:;
  fp_ld(c,4,R(12));
  R(5)=R(12);
  R(6)=R(13);
  R(7)=R(11);
  { c->pr=0x8c0a2192u; R(4)=R(13); f_8c0a207e(c); }
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(10)+=0x1u;
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(11)+=0xcu; if(k) goto L8c0a2186; }
L8c0a219e:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(9)=R(8); if(k) goto L8c0a2266; }
L8c0a21a8:;
  R(3)=LD32(R(14)+16);
  R(0)=R(9);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0a21c0;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0a2200;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a225c;
  {  goto L8c0a225c; }
L8c0a21c0:;
  R(0)=LD32(R(14)+20);
  R(11)=R(9);
  R(11)<<=2;
  R(5)=R(15);
  R(11)=LD32(R(11)+R(0));
  { c->pr=0x8c0a21ceu; R(4)=R(11); f_8c0a211e(c); }
  R(0)=(int32_t)(int16_t)LD16(R(11)+14);
  R(7)=R(15);
  R(2)=LD32(R(14));
  R(6)=R(13);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=R(15);
  R(0)<<=2;
  R(5)=R(12);
  R(0)+=R(2);
  R(1)=LD32(R(0));
  R(3)+=0x4u;
  R(2)=LD32(R(0)+4);
  R(7)+=0x4u;
  ST32(R(3),R(1));
  ST32(R(3)+4,R(2));
  R(1)=LD32(R(0)+8);
  ST32(R(3)+8,R(1));
  fp_ld(c,4,R(12));
  fp_ld(c,5,R(15));
  { c->pr=0x8c0a21fcu; R(4)=R(13); f_8c0a1fc0(c); }
  {  goto L8c0a225c; }
L8c0a2200:;
  R(0)=LD32(R(14)+20);
  R(11)=R(9);
  R(11)<<=2;
  R(11)=LD32(R(11)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(11)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(10)=R(8); if(k) goto L8c0a225c; }
L8c0a2210:;
  R(4)=R(10);
  c->t=R(4)>>31;R(4)<<=1;
  R(3)=R(10);
  R(2)=LD32(R(11));
  R(4)+=R(3);
  R(7)=R(15);
  R(4)<<=2;
  R(6)=R(13);
  R(2)+=R(4);
  R(5)=R(12);
  R(0)=(int32_t)(int16_t)LD16(R(2)+8);
  R(7)+=0x4u;
  R(2)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=R(15);
  R(0)<<=2;
  R(0)+=R(2);
  R(1)=LD32(R(0));
  R(3)+=0x4u;
  R(2)=LD32(R(0)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(2));
  R(1)=LD32(R(0)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(11));
  R(4)+=R(3);
  fp_ld(c,3,R(4));
  fp_st(c,3,R(15));
  fp_ld(c,4,R(12));
  fp_mov(c,5,3);
  { c->pr=0x8c0a2254u; R(4)=R(13); f_8c0a1fc0(c); }
  R(0)=(int32_t)(int16_t)LD16(R(11)+4);
  R(10)+=0x1u;
  c->t=(int32_t)R(10)>=(int32_t)R(0);
  if(!c->t) goto L8c0a2210;
L8c0a225c:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(9)+=0x1u;
  c->t=(int32_t)R(9)>=(int32_t)R(2);
  if(!c->t) goto L8c0a21a8;
L8c0a2266:;
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
void f_8c0a227a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c758cu;
  ST32(R(15),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a2298;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bd4b4u;
  R(6)=0xe0u;
  { c->pr=0x8c0a2294u; R(4)=0x18u; f_8c064e90(c); }
  {  goto L8c0a22a2; }
L8c0a2298:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bd4b4u;
  R(6)=0xe0u;
  { c->pr=0x8c0a22a2u; R(4)=0x18u; f_8c0199c4(c); }
L8c0a22a2:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0a22d8;
  R(3)=0x8c0125ccu;
  R(5)=0x8c0bd4b4u;
  R(6)=0xe0u;
  { c->pr=0x8c0a22b2u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0xe0u;
  R(1)=0x0u;
  R(3)=0x8c0bd4b4u;
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
  { c->pr=0x8c0a22d6u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0a22d8:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x18u;
  { c->pr=0x8c0a22e2u; R(4)=R(14); f_8c0686b8(c); }
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(14));
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x14u;
  fp_st(c,4,R(0)+R(14));
  R(3)=LD32(R(15));
  ST32(R(3),R(14));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a2306(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c758cu;
  ST32(R(15),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a2380;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bd4b4u;
  R(6)=0xf8u;
  { c->pr=0x8c0a2320u; R(4)=0x10u; f_8c064e90(c); }
  {  goto L8c0a238a; }
L8c0a2380:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bd4b4u;
  R(6)=0xf8u;
  { c->pr=0x8c0a238au; R(4)=0x10u; f_8c0199c4(c); }
L8c0a238a:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0a23c0;
  R(3)=0x8c0125ccu;
  R(5)=0x8c0bd4b4u;
  R(6)=0xf8u;
  { c->pr=0x8c0a239au; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0xf8u;
  R(1)=0x0u;
  R(3)=0x8c0bd4b4u;
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
  { c->pr=0x8c0a23beu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0a23c0:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x10u;
  { c->pr=0x8c0a23cau; R(4)=R(14); f_8c0686b8(c); }
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(14));
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(14));
  R(3)=LD32(R(15));
  ST32(R(3),R(14));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a23e6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; fp_st(c,4,R(15)); if(k) goto L8c0a2400; }
  R(2)=0x8c05e6eau;
  { c->pr=0x8c0a23fau; R(4)=R(14); f_8c05e6ea(c); }
  fp_ld(c,3,R(15));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(14));
L8c0a2400:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a2408(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0a2418u; R(4)=LD32(R(15)); f_8c0a2306(c); }
  R(4)=LD32(R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(4)=LD32(R(4));
  R(5)=LD32(R(15)+4);
  R(15)+=0xcu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0a23e6(c); return; } }
}
void f_8c0a2460(SH4Ctx *c) {
  fp_ld(c,2,R(6));
  fp_ld(c,3,R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a246e;
  fp_ld(c,3,R(6));
  { fp_st(c,3,R(4)); goto L8c0a247a; }
L8c0a246e:;
  fp_ld(c,2,R(6));
  fp_ld(c,3,R(5));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a247a;
  fp_ld(c,3,R(6));
  fp_st(c,3,R(5));
L8c0a247a:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(6));
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a248a;
  fp_ld(c,3,R(0)+R(6));
  { fp_st(c,3,R(0)+R(4)); goto L8c0a2496; }
L8c0a248a:;
  fp_ld(c,2,R(0)+R(6));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a2496;
  fp_ld(c,3,R(0)+R(6));
  fp_st(c,3,R(0)+R(5));
L8c0a2496:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(6));
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a24a6;
  fp_ld(c,3,R(0)+R(6));
  { fp_st(c,3,R(0)+R(4)); goto L8c0a24b2; }
L8c0a24a6:;
  fp_ld(c,2,R(0)+R(6));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a24b2;
  fp_ld(c,3,R(0)+R(6));
  fp_st(c,3,R(0)+R(5));
L8c0a24b2:;
  {  return; }
}
void f_8c0a24b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(5);
  ST16(R(15)+12,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(14)=R(4);
  R(3)=0x8c087b46u;
  R(9)=0x0u;
  R(5)=R(0);
  { c->pr=0x8c0a24dau; R(4)=R(14); f_8c087b46(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a24e4;
  {  goto L8c0a278c; }
L8c0a24e4:;
  R(0)=0x0u;
  R(11)=0x8c05e6eau;
  ST16(R(15)+4,R(0));
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(12)=R(4);
  R(12)+=0xcu;
  R(13)=R(4);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; R(8)=0x1u; if(k) goto L8c0a24fe; }
  {  goto L8c0a278c; }
L8c0a24fe:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c087b68u;
  R(5)=R(0);
  { c->pr=0x8c0a2508u; R(4)=R(14); f_8c087b68(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  c->t=R(3)==R(0);
  if(c->t) goto L8c0a2516;
  {  goto L8c0a2776; }
L8c0a2516:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=LD32(R(14)+16);
  R(4)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)<<=2; if(k) goto L8c0a2580; }
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0a2530;
  {  goto L8c0a2630; }
L8c0a2530:;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0a2538;
  {  goto L8c0a2676; }
L8c0a2538:;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0a2540;
  {  goto L8c0a26ec; }
L8c0a2540:;
  {  goto L8c0a2776; }
L8c0a2580:;
  R(0)=LD32(R(14)+20);
  c->t=(R(9)&R(9))==0;
  { uint32_t k=!c->t; R(10)=LD32(R(4)+R(0)); if(k) goto L8c0a25b8; }
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a25b8;
  R(5)=LD32(R(10)+8);
  R(2)=LD32(R(14));
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(2);
  { uint32_t tg=R(11); c->pr=0x8c0a25a2u; R(4)=R(13); sh4_call(c,tg); }
  R(5)=LD32(R(10)+8);
  R(2)=LD32(R(14));
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(2);
  { uint32_t tg=R(11); c->pr=0x8c0a25b6u; R(4)=R(12); sh4_call(c,tg); }
  R(9)=R(8);
L8c0a25b8:;
  R(3)=0x0u;
  ST16(R(15),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  if(c->t) goto L8c0a25c6;
  {  goto L8c0a2776; }
L8c0a25c6:;
  R(6)=(int32_t)(int16_t)LD16(R(15));
  R(5)=R(12);
  R(3)=R(6);
  R(3)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  ST32(R(15)+8,R(6));
  R(3)=LD32(R(10)+8);
  R(2)=LD32(R(14));
  R(6)+=R(3);
  R(6)=(int32_t)(int16_t)LD16(R(6));
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(6)+=R(2);
  { c->pr=0x8c0a25eau; R(4)=R(13); f_8c0a2460(c); }
  R(6)=LD32(R(10)+8);
  R(5)=R(12);
  R(3)=LD32(R(15)+8);
  R(6)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(6)+2);
  R(6)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c0a2604u; R(4)=R(13); f_8c0a2460(c); }
  R(6)=LD32(R(10)+8);
  R(5)=R(12);
  R(3)=LD32(R(15)+8);
  R(6)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(6)+4);
  R(6)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c0a261eu; R(4)=R(13); f_8c0a2460(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=0x1u;
  ST16(R(15),R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(3);
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0a25c6;
  {  goto L8c0a2776; }
L8c0a2630:;
  R(0)=LD32(R(14)+20);
  c->t=(R(9)&R(9))==0;
  { uint32_t k=!c->t; R(10)=LD32(R(4)+R(0)); if(k) goto L8c0a265e; }
  R(0)=(int32_t)(int16_t)LD16(R(10)+14);
  R(5)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(5)+=R(0);
  { uint32_t tg=R(11); c->pr=0x8c0a264au; R(4)=R(13); sh4_call(c,tg); }
  R(0)=(int32_t)(int16_t)LD16(R(10)+14);
  R(5)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(5)+=R(0);
  { uint32_t tg=R(11); c->pr=0x8c0a265cu; R(4)=R(12); sh4_call(c,tg); }
  R(9)=R(8);
L8c0a265e:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+14);
  R(5)=R(12);
  R(6)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c0a2672u; R(4)=R(13); f_8c0a2460(c); }
  {  goto L8c0a2776; }
L8c0a2676:;
  R(0)=LD32(R(14)+20);
  c->t=(R(9)&R(9))==0;
  { uint32_t k=!c->t; R(10)=LD32(R(4)+R(0)); if(k) goto L8c0a26ae; }
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a26ae;
  R(5)=LD32(R(10));
  R(0)=(int32_t)(int16_t)LD16(R(5)+8);
  R(5)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(5)+=R(0);
  { uint32_t tg=R(11); c->pr=0x8c0a2698u; R(4)=R(13); sh4_call(c,tg); }
  R(5)=LD32(R(10));
  R(0)=(int32_t)(int16_t)LD16(R(5)+8);
  R(5)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(5)+=R(0);
  { uint32_t tg=R(11); c->pr=0x8c0a26acu; R(4)=R(12); sh4_call(c,tg); }
  R(9)=R(8);
L8c0a26ae:;
  R(2)=0x0u;
  ST16(R(15),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c0a2776;
L8c0a26b8:;
  R(6)=(int32_t)(int16_t)LD16(R(15));
  R(5)=R(12);
  R(2)=LD32(R(10));
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(6)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(6)+8);
  R(6)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c0a26dau; R(4)=R(13); f_8c0a2460(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=0x1u;
  ST16(R(15),R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(3);
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0a26b8;
  {  goto L8c0a2776; }
L8c0a26ec:;
  R(0)=LD32(R(14)+20);
  c->t=(R(9)&R(9))==0;
  { uint32_t k=!c->t; R(10)=LD32(R(4)+R(0)); if(k) goto L8c0a2724; }
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a2724;
  R(5)=LD32(R(10));
  R(2)=LD32(R(14));
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(2);
  { uint32_t tg=R(11); c->pr=0x8c0a270eu; R(4)=R(13); sh4_call(c,tg); }
  R(5)=LD32(R(10));
  R(2)=LD32(R(14));
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(2);
  { uint32_t tg=R(11); c->pr=0x8c0a2722u; R(4)=R(12); sh4_call(c,tg); }
  R(9)=R(8);
L8c0a2724:;
  R(3)=0x0u;
  ST16(R(15),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c0a2776;
L8c0a272e:;
  R(6)=(int32_t)(int16_t)LD16(R(15));
  R(5)=R(12);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  ST32(R(15)+8,R(6));
  R(3)=LD32(R(10));
  R(2)=LD32(R(14));
  R(6)+=R(3);
  R(6)=(int32_t)(int16_t)LD16(R(6));
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(6)+=R(2);
  { c->pr=0x8c0a274eu; R(4)=R(13); f_8c0a2460(c); }
  R(6)=LD32(R(10));
  R(5)=R(12);
  R(3)=LD32(R(15)+8);
  R(6)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(6)+2);
  R(6)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c0a2768u; R(4)=R(13); f_8c0a2460(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=0x1u;
  ST16(R(15),R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(3);
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0a272e;
L8c0a2776:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x2eu;
  R(3)+=R(14);
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c0a278c;
  {  goto L8c0a24fe; }
L8c0a278c:;
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
void f_8c0a27a0(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a27ba;
  R(3)=0x8c064e90u;
  R(6)=0x20u;
  R(5)=0x8c0bd4c0u;
  { c->pr=0x8c0a27b6u; R(4)=0x8u; f_8c064e90(c); }
  {  goto L8c0a27c4; }
L8c0a27ba:;
  R(1)=0x8c0199c4u;
  R(6)=0x20u;
  R(5)=0x8c0bd4c0u;
  { c->pr=0x8c0a27c4u; R(4)=0x8u; f_8c0199c4(c); }
L8c0a27c4:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0a27fa;
  R(3)=0x8c0125ccu;
  R(6)=0x20u;
  R(5)=0x8c0bd4c0u;
  { c->pr=0x8c0a27d4u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0bd4c0u;
  R(2)=0x20u;
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
  { c->pr=0x8c0a27f8u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0a27fa:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x8u;
  { c->pr=0x8c0a2804u; R(4)=R(14); f_8c0686b8(c); }
  R(2)=0x0u;
  R(0)=R(14);
  ST32(R(14),R(2));
  R(3)=R(2);
  ST32(R(14)+4,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a2814(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=R(4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c0a282a; }
  R(3)=0x8c064eb8u;
  R(6)=0x2fu;
  R(5)=0x8c0bd4c0u;
  { c->pr=0x8c0a282au; R(4)=R(15); f_8c064eb8(c); }
L8c0a282a:;
  R(2)=0x0u;
  ST32(R(15),R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0a2880(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c0a2888(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c0a291a(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0a2938; }
  R(3)=0x8c064e90u;
  R(6)=0x5fu;
  R(5)=0x8c0bd4d0u;
  { c->pr=0x8c0a2934u; R(4)=0x8u; f_8c064e90(c); }
  {  goto L8c0a2942; }
L8c0a2938:;
  R(1)=0x8c0199c4u;
  R(6)=0x5fu;
  R(5)=0x8c0bd4d0u;
  { c->pr=0x8c0a2942u; R(4)=0x8u; f_8c0199c4(c); }
L8c0a2942:;
  R(2)=0x8c0c758cu;
  R(14)=R(0);
  ST16(R(14),R(13));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a2960;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(3)=0x8c064e90u;
  R(5)=0x8c0bd4d0u;
  R(6)=0x64u;
  R(4)<<=2;
  { c->pr=0x8c0a295cu; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c0a296e; }
L8c0a2960:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(3)=0x8c0199c4u;
  R(5)=0x8c0bd4d0u;
  R(6)=0x64u;
  R(4)<<=2;
  { c->pr=0x8c0a296eu; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c0a296e:;
  R(4)=0x0u;
  R(2)=R(0);
  R(7)=(uint32_t)(int32_t)(int16_t)R(13);
  ST32(R(14)+4,R(0));
  c->t=(int32_t)R(7)>0;
  R(6)=R(4);
  { uint32_t k=!c->t; R(5)=R(4); if(k) goto L8c0a2994; }
L8c0a297e:;
  R(2)=LD32(R(14)+4);
  R(6)+=0x1u;
  R(2)+=R(5);
  ST16(R(2),R(4));
  R(2)=(uint32_t)(int32_t)(int16_t)R(6);
  R(3)=LD32(R(14)+4);
  c->t=(int32_t)R(2)>=(int32_t)R(7);
  R(3)+=R(5);
  ST32(R(3)+4,R(4));
  { uint32_t k=!c->t; R(5)+=0x8u; if(k) goto L8c0a297e; }
L8c0a2994:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a29c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(4);
  R(13)=0x8c0bd4d0u;
  R(11)=0x81u;
  R(12)=0x8c064eb8u;
  ST32(R(15),R(4));
  R(2)=(int32_t)(int16_t)LD16(R(3));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0a2a10; }
L8c0a29de:;
  R(2)=LD32(R(15));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)<<=2;
  R(2)=LD32(R(2)+4);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(1)=LD32(R(3)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a2a04;
  R(4)=LD32(R(15));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)<<=2;
  R(5)=R(13);
  R(4)=LD32(R(4)+4);
  c->t=R(3)>>31;R(3)<<=1;
  R(6)=R(11);
  R(4)+=R(3);
  { uint32_t tg=R(12); c->pr=0x8c0a2a04u; R(4)+=0x4u; sh4_call(c,tg); }
L8c0a2a04:;
  R(2)=LD32(R(15));
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(1)=(int32_t)(int16_t)LD16(R(2));
  c->t=(int32_t)R(3)>=(int32_t)R(1);
  if(!c->t) goto L8c0a29de;
L8c0a2a10:;
  R(4)=LD32(R(15));
  R(5)=R(13);
  R(6)=0x83u;
  { uint32_t tg=R(12); c->pr=0x8c0a2a1au; R(4)+=0x4u; sh4_call(c,tg); }
  R(6)=0x84u;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c0a2a22u; R(4)=R(15); sh4_call(c,tg); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a2a30(SH4Ctx *c) {
  R(6)<<=2;
  R(7)=R(4);
  R(6)<<=2;
  R(6)+=R(4);
  R(4)=R(5);
  c->t=R(7)>=R(6);
  R(0)=0x8c0a2a90u;
  { uint32_t k=c->t; fp_ld(c,4,R(0)); if(k) goto L8c0a2a76; }
L8c0a2a42:;
  {int32_t v=(int16_t)LD16(R(4));R(4)+=2;R(3)=(uint32_t)v;}
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(7));
  R(7)+=0x4u;
  {int32_t v=(int16_t)LD16(R(4));R(4)+=2;R(2)=(uint32_t)v;}
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(7));
  R(7)+=0x4u;
  {int32_t v=(int16_t)LD16(R(4));R(4)+=2;R(2)=(uint32_t)v;}
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(7));
  R(7)+=0x4u;
  {int32_t v=(int16_t)LD16(R(4));R(4)+=2;R(2)=(uint32_t)v;}
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(7));
  R(7)+=0x4u;
  c->t=R(7)>=R(6);
  if(!c->t) goto L8c0a2a42;
L8c0a2a76:;
  {  return; }
}
void f_8c0a2aa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0a2b04u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)=0xffff8000u;
  R(7)=0x7fffu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { fp_ld(c,4,R(0)); { f_8c0a2b46(c); return; } }
}
void f_8c0a2ab2(SH4Ctx *c) {
  fp_ld(c,3,R(5));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(5));
  R(0)=0x8u;
  fp_arith(c,2,3,4);
  fp_arith(c,2,2,4);
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(5));
  R(0)=0xcu;
  fp_arith(c,2,3,4);
  R(1)=c->fpul;
  fp_ftrc(c,2);
  c->t=(int32_t)R(1)>=(int32_t)R(14);
  R(10)=c->fpul;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,2,3,4);
  R(12)=c->fpul;
  fp_ftrc(c,3);
  { uint32_t k=c->t; R(11)=c->fpul; if(k) goto L8c0a2ae0; }
  { R(1)=R(14); goto L8c0a2ae6; }
L8c0a2ae0:;
  c->t=(int32_t)R(1)>(int32_t)R(7);
  if(!c->t) goto L8c0a2ae6;
  R(1)=R(7);
L8c0a2ae6:;
  c->t=(int32_t)R(10)>=(int32_t)R(14);
  if(c->t) goto L8c0a2aee;
  { R(10)=R(14); goto L8c0a2af4; }
L8c0a2aee:;
  c->t=(int32_t)R(10)>(int32_t)R(7);
  if(!c->t) goto L8c0a2af4;
  R(10)=R(7);
L8c0a2af4:;
  c->t=(int32_t)R(12)>=(int32_t)R(14);
  if(c->t) goto L8c0a2b20;
  { R(12)=R(14); goto L8c0a2b26; }
L8c0a2b20:;
  c->t=(int32_t)R(12)>(int32_t)R(7);
  if(!c->t) goto L8c0a2b26;
  R(12)=R(7);
L8c0a2b26:;
  c->t=(int32_t)R(11)>=(int32_t)R(14);
  if(c->t) goto L8c0a2b2e;
  { R(11)=R(14); goto L8c0a2b34; }
L8c0a2b2e:;
  c->t=(int32_t)R(11)>(int32_t)R(7);
  if(!c->t) goto L8c0a2b34;
  R(11)=R(7);
L8c0a2b34:;
  R(0)=R(10);
  ST16(R(4),R(1));
  ST16(R(4)+2,R(0));
  R(0)=R(12);
  ST16(R(4)+4,R(0));
  R(0)=R(11);
  ST16(R(4)+6,R(0));
  R(4)+=0x8u;
  R(5)+=0x10u;
  { f_8c0a2b46(c); return; }
}
void f_8c0a2b20(SH4Ctx *c) {
  c->t=(int32_t)R(12)>(int32_t)R(7);
  if(!c->t) goto L8c0a2b26;
  R(12)=R(7);
L8c0a2b26:;
  c->t=(int32_t)R(11)>=(int32_t)R(14);
  if(c->t) goto L8c0a2b2e;
  { R(11)=R(14); goto L8c0a2b34; }
L8c0a2b2e:;
  c->t=(int32_t)R(11)>(int32_t)R(7);
  if(!c->t) goto L8c0a2b34;
  R(11)=R(7);
L8c0a2b34:;
  R(0)=R(10);
  ST16(R(4),R(1));
  ST16(R(4)+2,R(0));
  R(0)=R(12);
  ST16(R(4)+4,R(0));
  R(0)=R(11);
  ST16(R(4)+6,R(0));
  R(4)+=0x8u;
  R(5)+=0x10u;
  { f_8c0a2b46(c); return; }
}
void f_8c0a2b46(SH4Ctx *c) {
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; R(6)+=0xffffffffu; if(k) { f_8c0a2ab2(c); return; } }
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a2b56(SH4Ctx *c) {
  { R(0)=(int32_t)(int16_t)LD16(R(4)); return; }
}
void f_8c0a2b5a(SH4Ctx *c) {
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(4)+4);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)=(int32_t)(int16_t)LD16(R(3)+R(0)); return; }
}
void f_8c0a2b66(SH4Ctx *c) {
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(3)=LD32(R(4)+4);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  { R(0)=LD32(R(0)+4); return; }
}
void f_8c0a2b74(SH4Ctx *c) {
  R(0)=LD32(R(4)+4);
  { R(0)=(int32_t)(int16_t)LD16(R(0)); return; }
}
void f_8c0a2b7a(SH4Ctx *c) {
  R(0)=LD32(R(4)+4);
  { R(0)=LD32(R(0)+4); return; }
}
void f_8c0a2b80(SH4Ctx *c) {
  R(3)=(uint32_t)(int32_t)(int16_t)R(6);
  R(2)=LD32(R(4)+4);
  R(3)<<=2;
  R(0)=(int32_t)(int16_t)LD16(R(5));
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(2)=(uint32_t)(int32_t)(int16_t)R(7);
  R(3)=LD32(R(3)+4);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  ST16(R(2),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  ST16(R(2)+2,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  ST16(R(2)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5)+6);
  { ST16(R(2)+6,R(0)); return; }
}
void f_8c0a2ba6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  ST16(R(15),R(6));
  ST32(R(15)+4,R(5));
  fp_mov(c,15,4);
  { c->pr=0x8c0a2bc4u; R(4)=(int32_t)(int16_t)LD16(R(14)); f_8c0a291a(c); }
  R(13)=(int32_t)(int16_t)LD16(R(15));
  R(11)=R(0);
  R(12)=LD32(R(14)+4);
  R(13)<<=2;
  R(3)=LD32(R(11)+4);
  c->t=R(13)>>31;R(13)<<=1;
  R(12)+=R(13);
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(3)+=R(13);
  ST16(R(3),R(12));
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a2bf2;
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c064e90u;
  R(6)=0x163u;
  R(4)<<=2;
  R(5)=0x8c0bd4d0u;
  { c->pr=0x8c0a2beeu; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c0a2c00; }
L8c0a2bf2:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=0x8c0199c4u;
  R(6)=0x163u;
  R(4)<<=2;
  R(5)=0x8c0bd4d0u;
  { c->pr=0x8c0a2c00u; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c0a2c00:;
  c->fr[4]=0x3F800000u;
  fp_arith(c,1,4,15);
  R(2)=LD32(R(11)+4);
  R(5)=0x0u;
  R(10)=R(0);
  R(2)+=R(13);
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(15)+4);
  R(9)=LD32(R(14)+4);
  R(14)=R(5);
  R(1)=LD32(R(1)+4);
  R(9)+=R(13);
  R(1)+=R(13);
  R(9)=LD32(R(9)+4);
  R(13)=(uint32_t)(int32_t)(int16_t)R(12);
  R(1)=LD32(R(1)+4);
  c->t=(int32_t)R(13)>0;
  { uint32_t k=!c->t; R(4)=R(5); if(k) goto L8c0a2ca2; }
L8c0a2c26:;
  R(7)=R(4);
  R(7)+=R(9);
  R(3)=(int32_t)(int16_t)LD16(R(7));
  R(6)=R(4);
  R(6)+=R(1);
  fp_mov(c,0,4);
  c->fpul=R(3);
  R(5)=R(4);
  R(3)=(int32_t)(int16_t)LD16(R(6));
  R(5)+=R(10);
  fp_float(c,3);
  c->fpul=R(3);
  fp_float(c,2);
  fp_arith(c,2,2,15);
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  ST16(R(5),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(7)+2);
  R(3)=R(0);
  c->fpul=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(6)+2);
  R(3)=R(0);
  fp_float(c,3);
  c->fpul=R(3);
  fp_float(c,2);
  fp_arith(c,2,2,15);
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  ST16(R(5)+2,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(7)+4);
  R(3)=R(0);
  c->fpul=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(6)+4);
  R(14)+=0x1u;
  R(3)=R(0);
  fp_float(c,3);
  c->fpul=R(3);
  fp_float(c,2);
  fp_arith(c,2,2,15);
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  ST16(R(5)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(7)+6);
  R(3)=R(0);
  c->fpul=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(6)+6);
  R(3)=R(0);
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(13);
  fp_float(c,2);
  fp_arith(c,2,2,15);
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  ST16(R(5)+6,R(0));
  { uint32_t k=!c->t; R(4)+=0x8u; if(k) goto L8c0a2c26; }
L8c0a2ca2:;
  R(0)=R(11);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a2ce0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(10)=R(6);
  R(12)=R(7);
  c->t=R(12)==R(10);
  R(13)=R(4);
  R(11)=R(5);
  { uint32_t k=c->t; R(14)=R(15); if(k) goto L8c0a2d0c; }
  R(2)=0x8c05e55cu;
  R(5)=R(10);
  { c->pr=0x8c0a2d08u; R(4)=R(12); f_8c05e55c(c); }
  { fp_mov(c,14,0); goto L8c0a2d0e; }
L8c0a2d0c:;
  c->fr[14]=0x3F800000u;
L8c0a2d0e:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,14,3);
  if(c->t) goto L8c0a2d5a;
  R(2)=0x8c05e55cu;
  R(5)=R(10);
  { c->pr=0x8c0a2d1cu; R(4)=R(11); f_8c05e55c(c); }
  fp_mov(c,15,0);
  R(5)=R(12);
  fp_unary(c,0,15);
  fp_arith(c,3,15,14);
  R(3)=0x8c05e6eau;
  { c->pr=0x8c0a2d2au; R(4)=R(14); f_8c05e6ea(c); }
  fp_ld(c,3,R(14));
  R(0)=0x4u;
  fp_mov(c,2,15);
  c->t=R(13)==R(11);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,15,3);
  { uint32_t k=c->t; fp_st(c,15,R(0)+R(14)); if(k) goto L8c0a2d50; }
  R(2)=0x8c05e6eau;
  R(5)=R(11);
  { c->pr=0x8c0a2d50u; R(4)=R(13); f_8c05e6ea(c); }
L8c0a2d50:;
  R(3)=0x8c05e5f4u;
  R(5)=R(13);
  R(6)=R(14);
  { c->pr=0x8c0a2d5au; R(4)=R(13); f_8c05e5f4(c); }
L8c0a2d5a:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a2d6e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(6);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  R(14)=R(4);
  R(4)+=0x4u;
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(12));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(12));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(4));
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(13));
  fp_ld(c,1,R(12));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(4));
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(0)+R(12));
  fp_ld(c,3,R(13));
  R(0)=0x8u;
  c->fr[15]=0x00000000u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8c0a2e4cu;
  fp_ld(c,5,R(4));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,5,2);
  fp_ld(c,14,R(0));
  R(0)=0x8c0a2e50u;
  { uint32_t k=!c->t; fp_ld(c,4,R(0)); if(k) goto L8c0a2dd2; }
  { fp_mov(c,3,5); goto L8c0a2dd6; }
L8c0a2dd2:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c0a2dd6:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0a2dde;
  {  goto L8c0a2e96; }
L8c0a2dde:;
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a2dec;
  { fp_ld(c,3,R(0)+R(4)); goto L8c0a2dee; }
L8c0a2dec:;
  fp_unary(c,0,3);
L8c0a2dee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a2e96;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a2e00;
  { fp_ld(c,3,R(0)+R(4)); goto L8c0a2e02; }
L8c0a2e00:;
  fp_unary(c,0,3);
L8c0a2e02:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a2e96;
  fp_ld(c,5,R(12));
  fp_ld(c,6,R(13));
  fp_mov(c,7,5);
  fp_arith(c,1,7,6);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,7,2);
  if(!c->t) goto L8c0a2e18;
  { fp_mov(c,3,7); goto L8c0a2e1e; }
L8c0a2e18:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
  fp_arith(c,0,3,6);
L8c0a2e1e:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a2e92;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a2e60;
  fp_ld(c,3,R(0)+R(12));
  fp_ld(c,2,R(0)+R(13));
  { fp_arith(c,1,3,2); goto L8c0a2e6a; }
L8c0a2e60:;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,1,R(0)+R(13));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a2e6a:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a2e92;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a2e84;
  fp_ld(c,3,R(0)+R(12));
  fp_ld(c,2,R(0)+R(13));
  { fp_arith(c,1,3,2); goto L8c0a2e8e; }
L8c0a2e84:;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,1,R(0)+R(13));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a2e8e:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0a2ee6;
L8c0a2e92:;
  { fp_st(c,14,R(14)); goto L8c0a2efe; }
L8c0a2e96:;
  R(0)=0x4u;
  fp_ld(c,6,R(4));
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,0,6);
  R(5)=R(13);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x4u;
  R(3)=0x8c05e55cu;
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
  { uint32_t tg=R(3); c->pr=0x8c0a2ed2u; R(4)=R(12); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_unary(c,0,3);
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0a2ee0;
  { fp_st(c,14,R(14)); goto L8c0a2efe; }
L8c0a2ee0:;
  c->fr[2]=0x3F800000u;
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c0a2ef6;
L8c0a2ee6:;
  R(0)=0x4u;
  fp_st(c,15,R(14));
  fp_st(c,15,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0xcu;
  { fp_st(c,15,R(0)+R(14)); goto L8c0a2efe; }
L8c0a2ef6:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c0a2efcu;  f_8c09cf34(c); }
  fp_st(c,0,R(14));
L8c0a2efe:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a2f0e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=R(4);
  ST32(R(15),R(4));
  fp_ld(c,14,R(3));
  R(13)=R(5);
  R(3)=0x8c068530u;
  R(14)=R(6);
  { c->pr=0x8c0a2f2cu; fp_mov(c,4,14); f_8c068530(c); }
  R(2)=0x8c0686fcu;
  fp_mov(c,15,0);
  { c->pr=0x8c0a2f34u; fp_mov(c,4,14); f_8c0686fc(c); }
  R(0)=0x8u;
  R(12)=LD32(R(15));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  R(12)+=0x4u;
  fp_mov(c,4,0);
  fp_ld(c,2,R(0)+R(12));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(12));
  R(0)=0x10u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(13));
  fp_ld(c,1,R(12));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,1,R(0)+R(12));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(13));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  R(0)=0x18u;
  R(3)=0x8c05e55cu;
  R(5)=R(13);
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
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a2fa4u; R(4)=R(12); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_arith(c,1,3,15);
  fp_mov(c,14,0);
  R(4)=R(15);
  R(3)=0x8c05e6eau;
  R(5)=R(12);
  fp_arith(c,2,14,3);
  { c->pr=0x8c0a2fb6u; R(4)+=0x4u; f_8c05e6ea(c); }
  R(0)=0x4u;
  fp_mov(c,2,14);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  c->t=R(13)==R(14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,14,3);
  { uint32_t k=c->t; fp_st(c,14,R(0)+R(15)); if(k) goto L8c0a2fe4; }
  R(2)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c0a2fe4u; R(4)=R(14); f_8c05e6ea(c); }
L8c0a2fe4:;
  fp_ld(c,3,R(14));
  R(0)=0x4u;
  fp_mov(c,2,15);
  R(6)=R(15);
  fp_arith(c,2,2,3);
  R(3)=0x8c05e5f4u;
  R(5)=R(14);
  R(6)+=0x4u;
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(14));
  { uint32_t tg=R(3); c->pr=0x8c0a300au; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x10u;
  { c->pr=0x8c0a3016u; R(4)=R(14); f_8c05e5f4(c); }
  R(0)=R(14);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a3060(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(0)=0x10u;
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x20u;
  R(3)=0x8c0cbd34u;
  R(14)=R(4);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(5));
  fp_mov(c,10,2);
  fp_arith(c,0,10,3);
  fp_ld(c,3,R(3));
  fp_cmp(c,1,3,10);
  { uint32_t k=c->t; c->fr[7]=0x00000000u; if(k) goto L8c0a308a; }
  {  goto L8c0a3200; }
L8c0a308a:;
  fp_ld(c,3,R(5));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x1cu;
  fp_st(c,3,R(15));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x8u;
  R(4)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(4)+=0x4u;
  R(0)=0x20u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8c0a31e4u;
  fp_ld(c,2,R(4));
  fp_ld(c,9,R(0));
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; c->fr[8]=0x3F800000u; if(k) goto L8c0a3152; }
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a3152;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a3152;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,0,3,8);
  if(!c->t) goto L8c0a3128;
  R(0)=0x4u;
  fp_st(c,8,R(4));
  { fp_st(c,7,R(0)+R(4)); goto L8c0a3136; }
L8c0a3128:;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,0,3,8);
  if(!c->t) goto L8c0a313c;
  R(0)=0x4u;
  fp_st(c,7,R(4));
  fp_st(c,8,R(0)+R(4));
L8c0a3136:;
  R(0)=0x8u;
  { fp_st(c,7,R(0)+R(4)); goto L8c0a31a8; }
L8c0a313c:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,0,3,8);
  if(!c->t) goto L8c0a320e;
  R(0)=0x4u;
  fp_st(c,7,R(4));
  fp_st(c,7,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,8,R(0)+R(4));
  { fp_st(c,9,R(14)); goto L8c0a320e; }
L8c0a3152:;
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
  R(0)=0x8c0a31e8u;
  c->fr[4]=0x3F800000u;
  fp_unary(c,0,4);
  fp_arith(c,0,10,4);
  fp_ld(c,3,R(0));
  fp_mov(c,15,10);
  R(0)=0xcu;
  fp_arith(c,2,15,3);
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(15));
  fp_arith(c,0,1,2);
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,15,4);
  fp_mov(c,14,1);
  { uint32_t k=c->t; fp_arith(c,0,14,2); if(k) goto L8c0a31ac; }
L8c0a31a8:;
  { fp_st(c,9,R(14)); goto L8c0a320e; }
L8c0a31ac:;
  fp_cmp(c,1,8,15);
  if(c->t) goto L8c0a31b4;
  { fp_st(c,7,R(14)); goto L8c0a320e; }
L8c0a31b4:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,1,14);
  if(c->t) goto L8c0a31c6;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c0a31c0u; fp_mov(c,4,15); f_8c09cf34(c); }
  fp_mov(c,2,0);
  { fp_unary(c,0,2); goto L8c0a31ce; }
L8c0a31c6:;
  R(3)=0x8c09cf34u;
  { c->pr=0x8c0a31ccu; fp_mov(c,4,15); f_8c09cf34(c); }
  fp_mov(c,2,0);
L8c0a31ce:;
  { fp_st(c,2,R(14)); goto L8c0a320e; }
L8c0a3200:;
  R(0)=0x4u;
  fp_st(c,7,R(14));
  fp_st(c,7,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,7,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,7,R(0)+R(14));
L8c0a320e:;
  R(0)=R(14);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a3200(SH4Ctx *c) {
  R(0)=0x4u;
  fp_st(c,7,R(14));
  fp_st(c,7,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,7,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,7,R(0)+R(14));
  R(0)=R(14);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a3220(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0686b8u;
  R(6)=0x16cu;
  ST32(R(15),R(4));
  { c->pr=0x8c0a322eu; R(5)=0x0u; f_8c0686b8(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0a3260(SH4Ctx *c) {
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
  R(0)=0xfffffeecu;
  R(15)+=R(0);
  R(3)=0x110u;
  R(0)=0x20u;
  c->fr[12]=0x3F800000u;
  R(8)=R(5);
  R(3)+=R(15);
  fp_unary(c,0,12);
  ST32(R(3),R(6));
  R(3)=0x0u;
  ST32(R(15),R(4));
  ST32(R(15)+16,R(7));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x34u;
  ST8(R(15)+R(0),R(3));
  R(2)=LD32(R(15));
  R(3)=R(2);
  R(3)+=0x78u;
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(15));
  R(3)=0xe0u;
  R(3)+=R(2);
  ST32(R(15)+36,R(3));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x4)==0;
  { uint32_t k=c->t; fp_mov(c,15,12); if(k) goto L8c0a32b8; }
  R(3)=0x2b0u;
  R(2)=LD32(R(15));
  R(3)+=R(2);
  ST32(R(15)+48,R(3));
L8c0a32b8:;
  R(0)=0x80u;
  R(2)=0x0u;
  c->fr[3]=0x00000000u;
  R(1)=R(2);
  R(3)=LD32(R(15)+36);
  R(9)=R(1);
  R(4)=0x8c0cbdb8u;
  R(12)=R(9);
  R(3)+=0x58u;
  ST32(R(15)+12,R(3));
  R(3)=LD32(R(15)+24);
  R(3)+=0x58u;
  ST32(R(15)+8,R(3));
  ST32(R(15)+4,R(2));
  ST32(R(15)+20,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  R(0)=R(2);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; ST32(R(4),R(2)); if(k) goto L8c0a32f0; }
  {  goto L8c0a351e; }
L8c0a32f0:;
  { R(10)=0x0u; goto L8c0a3362; }
L8c0a3320:;
  R(14)=0x68u;
  R(3)=LD32(R(15)+16);
  c->macl=R(10)*R(14);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a3360;
  R(0)=LD32(R(14)+40);
  R(0)&=R(11);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0a3360;
  R(4)=LD32(R(14)+36);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a3360;
  R(13)=0x8c092bf2u;
  { c->pr=0x8c0a3350u;  f_8c092bf2(c); }
  R(13)=0x4000000u;
  R(11)=0x8c05689eu;
  { c->pr=0x8c0a3358u; R(4)=R(0); f_8c05689e(c); }
  R(0)&=R(13);
  c->t=R(0)==R(13);
  if(!c->t) goto L8c0a3360;
  R(9)=R(14);
L8c0a3360:;
  R(10)+=0x1u;
L8c0a3362:;
  R(0)=0x110u;
  R(2)=LD32(R(15)+R(0));
  c->t=(int32_t)R(10)>=(int32_t)R(2);
  { uint32_t k=c->t; R(11)=0x2u; if(k) goto L8c0a3370; }
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0a3320;
L8c0a3370:;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c0a3378;
  {  goto L8c0a351e; }
L8c0a3378:;
  R(2)=0x1u;
  R(13)=0x8c0cbe00u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(10)=0x0u;
  R(3)=LD32(R(15)+28);
  R(7)=R(8);
  R(4)=0x11cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+32);
  R(3)=0x8c0a8880u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  R(5)=LD32(R(13));
  { c->pr=0x8c0a3396u; R(4)+=R(15); f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0xcu; if(k) goto L8c0a33a2; }
  {  goto L8c0a351e; }
L8c0a33a2:;
  R(0)=0x110u;
  R(3)=0x8c092610u;
  R(6)=LD32(R(15));
  R(5)=LD32(R(13));
  { c->pr=0x8c0a33aeu; R(4)=LD32(R(15)+R(0)); f_8c092610(c); }
  R(3)=0x8c092b06u;
  R(0)=0x110u;
  R(5)=LD32(R(13));
  { c->pr=0x8c0a33b8u; R(4)=LD32(R(15)+R(0)); f_8c092b06(c); }
  { R(4)=0x0u; goto L8c0a3408; }
L8c0a33e0:;
  R(14)=0x68u;
  R(3)=LD32(R(13));
  c->macl=R(4)*R(14);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0a3406;
  R(0)=LD32(R(14)+40);
  R(0)&=R(11);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0a3406;
  R(10)=R(14);
L8c0a3406:;
  R(4)+=0x1u;
L8c0a3408:;
  R(0)=0x110u;
  R(2)=LD32(R(15)+R(0));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(c->t) goto L8c0a3414;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0a33e0;
L8c0a3414:;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c0a341c;
  {  goto L8c0a350c; }
L8c0a341c:;
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(5)=LD32(R(15)+12);
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a3428u; R(4)+=0x74u; f_8c05e612(c); }
  R(4)=0xb0u;
  R(5)=R(10);
  R(2)=0x8c05e6eau;
  R(5)+=0x30u;
  { c->pr=0x8c0a3434u; R(4)+=R(15); f_8c05e6ea(c); }
  R(6)=0xb0u;
  R(5)=LD32(R(15)+8);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a3440u; R(4)=LD32(R(15)+12); f_8c05e5f4(c); }
  R(2)=0x1u;
  R(4)=0x11cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=R(8);
  R(3)=LD32(R(15)+40);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+32);
  R(3)=0x8c0a8880u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(13));
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0a345au; R(4)+=R(15); f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0a3500; }
  R(0)=0x110u;
  R(3)=0x8c092610u;
  R(6)=LD32(R(15));
  R(5)=LD32(R(13));
  { c->pr=0x8c0a346eu; R(4)=LD32(R(15)+R(0)); f_8c092610(c); }
  R(3)=0x8c092b06u;
  R(0)=0x110u;
  R(5)=LD32(R(13));
  { c->pr=0x8c0a3478u; R(4)=LD32(R(15)+R(0)); f_8c092b06(c); }
  R(0)=0x110u;
  R(4)=0x90u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x114u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(13));
  R(6)=LD32(R(15)+R(0));
  { c->pr=0x8c0a348eu; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(6)=0x8cu;
  R(5)=LD32(R(15)+12);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a349cu; R(4)=LD32(R(15)+8); f_8c05e5f4(c); }
  R(5)=LD32(R(15)+8);
  R(6)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=0x74u;
  { c->pr=0x8c0a34a8u; R(4)=LD32(R(15)+12); f_8c05e5f4(c); }
  {  goto L8c0a350c; }
L8c0a3500:;
  R(5)=LD32(R(15)+12);
  R(6)=R(15);
  R(3)=0x8c05e612u;
  R(6)+=0x74u;
  { c->pr=0x8c0a350cu; R(4)=LD32(R(15)+8); f_8c05e612(c); }
L8c0a350c:;
  R(0)=0x20u;
  R(3)=0x8c0a4ae0u;
  fp_ld(c,4,R(0)+R(15));
  R(5)=R(8);
  { c->pr=0x8c0a3518u; R(4)=LD32(R(15)); f_8c0a4ae0(c); }
  R(1)=0x8c0a4530u;
  {  { f_8c0a4530(c); return; } }
L8c0a351e:;
  R(0)=LD32(R(15));
  R(10)=0x8c090dacu;
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x40)==0;
  if(!c->t) goto L8c0a352c;
  { R(13)=0x0u; { f_8c0a365c(c); return; } }
L8c0a352c:;
  { R(13)=0x0u; goto L8c0a3562; }
L8c0a3530:;
  R(14)=0x68u;
  R(3)=LD32(R(15)+16);
  c->macl=R(13)*R(14);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a3560;
  R(5)=R(14);
  R(5)+=0x4u;
  { uint32_t tg=R(10); c->pr=0x8c0a3554u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a3560;
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(14)+R(0),R(4));
L8c0a3560:;
  R(13)+=0x1u;
L8c0a3562:;
  R(0)=0x110u;
  R(3)=LD32(R(15)+R(0));
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c0a3530;
  {  { f_8c0a366a(c); return; } }
}
void f_8c0a35a0(SH4Ctx *c) {
  R(14)=0x68u;
  R(3)=LD32(R(15)+16);
  c->macl=R(13)*R(14);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a365a;
  R(4)=LD32(R(14)+32);
  ST32(R(15)+44,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a35d8;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a35d8;
  { R(3)=0x1u; goto L8c0a35da; }
L8c0a35d8:;
  R(3)=0x0u;
L8c0a35da:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a3640;
  R(0)=LD32(R(14)+28);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a35fe;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a35fe;
  { R(1)=0x1u; goto L8c0a3600; }
L8c0a35fe:;
  R(1)=0x0u;
L8c0a3600:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a3640;
  { R(3)=0x1u; goto L8c0a3642; }
L8c0a3640:;
  R(3)=0x0u;
L8c0a3642:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a365a;
  R(5)=R(14);
  R(5)+=0x4u;
  { uint32_t tg=R(10); c->pr=0x8c0a3650u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a365a;
  R(11)=R(13);
  ST32(R(15)+20,R(14));
L8c0a365a:;
  R(13)+=0x1u;
  { f_8c0a365c(c); return; }
}
void f_8c0a3620(SH4Ctx *c) {
  c->t=R(0)>>31;R(0)<<=1;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(3)=0x0u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a365a;
  R(5)=R(14);
  R(5)+=0x4u;
  { uint32_t tg=R(10); c->pr=0x8c0a3650u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a365a;
  R(11)=R(13);
  ST32(R(15)+20,R(14));
L8c0a365a:;
  R(13)+=0x1u;
  { f_8c0a365c(c); return; }
}
void f_8c0a365c(SH4Ctx *c) {
  R(0)=0x110u;
  R(3)=LD32(R(15)+R(0));
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(c->t) { f_8c0a366a(c); return; }
  R(1)=LD32(R(15)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) { f_8c0a35a0(c); return; }
  { f_8c0a366a(c); return; }
}
void f_8c0a366a(SH4Ctx *c) {
  R(2)=LD32(R(15)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a36a2;
  R(2)=LD32(R(15));
  R(3)=0x100000u;
  R(1)=LD32(R(2)+12);
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0a36a2;
  R(14)=0x8c2e8700u;
  R(0)=LD32(R(14));
  R(0)&=0x40u;
  c->t=(int32_t)R(0)==64;
  R(4)=c->t;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a36a2;
  R(0)=0x20u;
  R(3)=0x8c0a6600u;
  fp_ld(c,4,R(0)+R(15));
  R(5)=R(8);
  { c->pr=0x8c0a3696u; R(4)=LD32(R(15)); f_8c0a6600(c); }
  R(2)=LD32(R(14));
  R(3)=0xffffffbfu;
  R(1)=0x8c0a4530u;
  R(2)&=R(3);
  { ST32(R(14),R(2)); { f_8c0a4530(c); return; } }
L8c0a36a2:;
  R(13)=0x1u;
  { R(4)=0x0u; goto L8c0a3702; }
L8c0a36e0:;
  R(14)=0x68u;
  R(3)=LD32(R(15)+16);
  c->macl=R(4)*R(14);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0a3700;
  R(9)=R(4);
  ST32(R(15)+4,R(14));
L8c0a3700:;
  R(4)+=0x1u;
L8c0a3702:;
  R(0)=0x110u;
  R(3)=LD32(R(15)+R(0));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c0a3710;
  R(1)=LD32(R(15)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a36e0;
L8c0a3710:;
  { R(4)=0x0u; goto L8c0a37da; }
L8c0a3714:;
  R(14)=0x68u;
  R(3)=LD32(R(15)+16);
  c->macl=R(4)*R(14);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0a3734;
  {  goto L8c0a37d8; }
L8c0a3734:;
  R(5)=LD32(R(14)+32);
  ST32(R(15)+40,R(5));
  R(5)=LD32(R(5)+12);
  R(0)=R(5);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a3750;
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a3750;
  { R(3)=0x1u; goto L8c0a3752; }
L8c0a3750:;
  R(3)=0x0u;
L8c0a3752:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a37ac;
  R(0)=LD32(R(14)+28);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a37a0;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a37a0;
  { R(1)=0x1u; goto L8c0a37a2; }
L8c0a37a0:;
  R(1)=0x0u;
L8c0a37a2:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a37ac;
  { R(3)=0x1u; goto L8c0a37ae; }
L8c0a37ac:;
  R(3)=0x0u;
L8c0a37ae:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a37ba;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0a37ba;
  R(12)=R(4);
L8c0a37ba:;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c0a37ce; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a37ce;
  { R(3)=0x0u; goto L8c0a37d0; }
L8c0a37ce:;
  R(3)=0x1u;
L8c0a37d0:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a37d8;
  R(13)=0x0u;
L8c0a37d8:;
  R(4)+=0x1u;
L8c0a37da:;
  R(0)=0x110u;
  R(2)=LD32(R(15)+R(0));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0a3714;
  R(1)=LD32(R(15)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0a37ec;
  {  { f_8c0a4530(c); return; } }
L8c0a37ec:;
  R(3)=LD32(R(15)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a37f8;
  c->t=(int32_t)R(11)>(int32_t)R(9);
  if(!c->t) goto L8c0a37f8;
  R(9)=R(11);
L8c0a37f8:;
  c->t=(int32_t)R(12)>(int32_t)R(9);
  if(!c->t) goto L8c0a37fe;
  R(9)=R(12);
L8c0a37fe:;
  R(0)=0x114u;
  R(5)=R(8);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0a8f0eu;
  R(6)=LD32(R(15)+R(0));
  R(7)=LD32(R(15)+20);
  { c->pr=0x8c0a380eu; R(4)=LD32(R(15)+4); f_8c0a8f0e(c); }
  R(13)=R(13)&0xFF;
  R(12)=0x8c05e55cu;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c0a3828; }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x40)==0;
  if(!c->t) goto L8c0a3828;
  R(11)=0x80u;
  R(11)+=R(15);
  { R(13)=0x0u; goto L8c0a388a; }
L8c0a3828:;
  R(11)=LD32(R(15)+4);
  { R(11)+=0x4u; goto L8c0a3ae8; }
L8c0a3860:;
  R(14)=0x68u;
  R(3)=LD32(R(15)+16);
  c->macl=R(13)*R(14);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a3888;
  R(3)=0x8c05e5f4u;
  R(6)=R(14);
  R(5)=R(11);
  R(6)+=0x4u;
  { c->pr=0x8c0a3888u; R(4)=R(11); f_8c05e5f4(c); }
L8c0a3888:;
  R(13)+=0x1u;
L8c0a388a:;
  R(0)=0x110u;
  R(2)=LD32(R(15)+R(0));
  c->t=(int32_t)R(13)>=(int32_t)R(2);
  if(!c->t) goto L8c0a3860;
  fp_ld(c,2,R(11));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a38ac;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(11));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a38ac;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(11));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0a38e2;
L8c0a38ac:;
  R(0)=0x4u;
  fp_ld(c,4,R(11));
  fp_ld(c,5,R(0)+R(11));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(11));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(11));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(11));
  fp_ld(c,3,R(0)+R(11));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(11));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(11)); goto L8c0a38e6; }
L8c0a38e2:;
  R(11)=LD32(R(15)+4);
  R(11)+=0x4u;
L8c0a38e6:;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c0a38ecu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a38f6;
  {  goto L8c0a3ae8; }
L8c0a38f6:;
  R(2)=LD32(R(15)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a394c;
  R(3)=LD32(R(15)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a3906;
  {  goto L8c0a3ae8; }
L8c0a3906:;
  R(0)=LD32(R(15)+20);
  R(1)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0a3940;
  R(0)=LD32(R(15)+20);
  R(2)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a3940;
  { R(2)=0x0u; goto L8c0a3942; }
L8c0a3940:;
  R(2)=0x1u;
L8c0a3942:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a394c;
  {  goto L8c0a3ae8; }
L8c0a394c:;
  { R(14)=0x0u; goto L8c0a3adc; }
L8c0a3950:;
  R(13)=0x68u;
  R(3)=LD32(R(15)+16);
  c->macl=R(14)*R(13);
  R(0)=0x2eu;
  R(13)=c->macl;
  R(13)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a3970;
  {  goto L8c0a3ada; }
L8c0a3970:;
  R(4)=0xb0u;
  R(5)=R(13);
  R(3)=0x8c05e612u;
  R(6)=R(13);
  R(6)+=0x48u;
  R(5)+=0x10u;
  { c->pr=0x8c0a3980u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0xb0u;
  R(6)=R(13);
  R(4)=0xb0u;
  R(6)+=0x3cu;
  R(2)=0x8c05e5f4u;
  R(5)+=R(15);
  { c->pr=0x8c0a3990u; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0xb0u;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c0a39ecu;
  fp_ld(c,3,R(0));
  fp_mov(c,5,4);
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c0a39a6;
  { fp_mov(c,3,5); goto L8c0a39ae; }
L8c0a39a6:;
  fp_mov(c,1,4);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c0a39ae:;
  R(0)=0x8c0a39f0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0a39ba;
  {  goto L8c0a3a80; }
L8c0a39ba:;
  R(0)=0x8c0a39ecu;
  fp_ld(c,3,R(0));
  R(0)=0xb4u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3a00;
  R(0)=0x8c0a39ecu;
  fp_ld(c,2,R(0));
  R(0)=0xb4u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a3a08; }
L8c0a3a00:;
  R(0)=0xb4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a3a08:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a3a64u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3a80;
  R(0)=0x8c0a3a68u;
  fp_ld(c,3,R(0));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3a2c;
  R(0)=0x8c0a3a68u;
  fp_ld(c,2,R(0));
  R(0)=0xb8u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a3a34; }
L8c0a3a2c:;
  R(0)=0xb8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a3a34:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a3a64u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3a80;
  { R(2)=0x1u; goto L8c0a3a82; }
L8c0a3a80:;
  R(2)=0x0u;
L8c0a3a82:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c0a3ac6; }
  R(0)=0xb0u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xb4u;
  fp_mov(c,0,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xb0u;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c0a3ac6:;
  R(4)=0xb0u;
  R(5)+=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c0a3aceu; R(4)+=R(15); sh4_call(c,tg); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c0a3ada;
  R(11)=R(13);
  R(11)+=0x4u;
  fp_mov(c,15,4);
L8c0a3ada:;
  R(14)+=0x1u;
L8c0a3adc:;
  R(0)=0x110u;
  R(2)=LD32(R(15)+R(0));
  c->t=(int32_t)R(14)>=(int32_t)R(2);
  if(c->t) goto L8c0a3ae8;
  {  goto L8c0a3950; }
L8c0a3ae8:;
  R(3)=0x8c091130u;
  R(14)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0a3af2u; R(4)=R(14); f_8c091130(c); }
  R(3)=0x8c09119cu;
  R(5)=LD32(R(15)+4);
  fp_mov(c,14,0);
  { c->pr=0x8c0a3afcu; R(4)=R(14); f_8c09119c(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_st(c,0,R(0)+R(15));
  R(5)=R(15);
  R(0)=0xecu;
  R(5)+=0x68u;
  c->fr[15]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xf0u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xf4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x90u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(12); c->pr=0x8c0a3b30u; R(4)=R(11); sh4_call(c,tg); }
  R(0)=0x18u;
  R(4)=R(14);
  fp_ld(c,5,R(0)+R(4));
  fp_mov(c,4,0);
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c0a3b80;
  R(3)=LD32(R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0a3b80;
  { R(2)=0x1u; goto L8c0a3b82; }
L8c0a3b80:;
  R(2)=0x0u;
L8c0a3b82:;
  R(0)=0x18u;
  R(1)=R(15);
  ST8(R(15)+R(0),R(2));
  R(0)=0x18u;
  R(3)=LD32(R(15));
  R(1)+=0x24u;
  R(4)=0x104u;
  fp_ld(c,3,R(0)+R(3));
  R(3)=0x8c05e612u;
  fp_cmp(c,1,3,4);
  R(0)=c->t;
  R(0)^=0x1u;
  ST8(R(1),R(0));
  R(5)=LD32(R(15)+12);
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a3ba4u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0x104u;
  R(5)=R(11);
  R(4)=0x104u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x108u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10cu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,13,3);
  { uint32_t tg=R(12); c->pr=0x8c0a3bc8u; R(4)+=R(15); sh4_call(c,tg); }
  fp_ld(c,3,R(11));
  fp_mov(c,2,0);
  fp_arith(c,2,2,3);
  R(0)=0xb0u;
  fp_mov(c,4,0);
  R(6)=0xb0u;
  R(5)=0x104u;
  fp_unary(c,0,2);
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(11));
  R(5)+=R(15);
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb4u;
  R(4)=0xbcu;
  R(3)=0x8c05e5f4u;
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0xb8u;
  fp_arith(c,2,4,3);
  fp_unary(c,0,4);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0a3c00u; R(4)+=R(15); f_8c05e5f4(c); }
  R(5)=0xbcu;
  R(6)=0xb0u;
  R(4)=0xc8u;
  R(5)+=R(15);
  R(2)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a3c10u; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0xbcu;
  fp_mov(c,2,14);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xf8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,2,14);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xfcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x100u;
  fp_arith(c,2,14,3);
  fp_st(c,14,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xd0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(6)=0xb0u;
  fp_arith(c,2,2,3);
  R(5)=0xf8u;
  R(0)=0xb8u;
  R(6)+=R(15);
  R(4)=0xf8u;
  R(5)+=R(15);
  R(3)=0x8c05e5f4u;
  fp_st(c,2,R(0)+R(15));
  { c->pr=0x8c0a3c6cu; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0xf8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xfcu;
  fp_mov(c,0,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x100u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8c0a3cc8u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,5,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0));
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c0a3ce0;
  { fp_mov(c,3,5); goto L8c0a3ce8; }
L8c0a3ce0:;
  fp_mov(c,1,6);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c0a3ce8:;
  R(0)=0x8c0a3d64u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3d80;
  R(0)=0x8c0a3d68u;
  fp_ld(c,3,R(0));
  R(0)=0xfcu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3d0a;
  R(0)=0x8c0a3d68u;
  fp_ld(c,2,R(0));
  R(0)=0xfcu;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a3d12; }
L8c0a3d0a:;
  R(0)=0xfcu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a3d12:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a3d64u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3d80;
  R(0)=0x8c0a3d68u;
  fp_ld(c,3,R(0));
  R(0)=0x100u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3d36;
  R(0)=0x8c0a3d68u;
  fp_ld(c,2,R(0));
  R(0)=0x100u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a3d3e; }
L8c0a3d36:;
  R(0)=0x100u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a3d3e:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a3d64u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3d80;
  { R(2)=0x1u; goto L8c0a3d82; }
L8c0a3d80:;
  R(2)=0x0u;
L8c0a3d82:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a3dae;
  fp_mov(c,5,15);
  fp_arith(c,3,5,4);
  R(0)=0xf8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xecu;
  fp_mov(c,2,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xfcu;
  fp_mov(c,2,5);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xf0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x100u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xf4u;
  fp_arith(c,2,5,3);
  fp_st(c,5,R(0)+R(15));
L8c0a3dae:;
  R(0)=0x104u;
  c->fr[2]=0x00000000u;
  fp_ld(c,14,R(0)+R(15));
  R(0)=0x8c0a3e10u;
  fp_ld(c,3,R(0));
  fp_mov(c,4,14);
  fp_arith(c,0,4,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0a3dc4;
  { fp_mov(c,3,4); goto L8c0a3dcc; }
L8c0a3dc4:;
  fp_mov(c,1,14);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c0a3dcc:;
  R(0)=0x8c0a3e14u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0a3dd8;
  {  goto L8c0a3ea0; }
L8c0a3dd8:;
  R(0)=0x8c0a3e10u;
  fp_ld(c,3,R(0));
  R(0)=0x108u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3e20;
  R(0)=0x8c0a3e10u;
  fp_ld(c,2,R(0));
  R(0)=0x108u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a3e28; }
L8c0a3e20:;
  R(0)=0x108u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a3e28:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a3e84u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3ea0;
  R(0)=0x8c0a3e88u;
  fp_ld(c,3,R(0));
  R(0)=0x10cu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3e4c;
  R(0)=0x8c0a3e88u;
  fp_ld(c,2,R(0));
  R(0)=0x10cu;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a3e54; }
L8c0a3e4c:;
  R(0)=0x10cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a3e54:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a3e84u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a3ea0;
  { R(2)=0x1u; goto L8c0a3ea2; }
L8c0a3ea0:;
  R(2)=0x0u;
L8c0a3ea2:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a3eca;
  fp_mov(c,4,15);
  fp_arith(c,3,4,13);
  R(0)=0xe0u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,14);
  fp_mov(c,2,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x108u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xe4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xe8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c0a3eca:;
  R(3)=LD32(R(15));
  R(2)=0x100u;
  R(1)=LD32(R(3)+8);
  c->t=(R(1)&R(2))==0;
  if(!c->t) goto L8c0a3ed8;
  {  goto L8c0a4112; }
L8c0a3ed8:;
  R(0)=0x18u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a3ee4;
  {  goto L8c0a4112; }
L8c0a3ee4:;
  R(0)=0x100u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a3ef2;
  {  goto L8c0a4112; }
L8c0a3ef2:;
  R(0)=0x10cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x100u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,0,5,3);
  if(!c->t) goto L8c0a3f04;
  {  goto L8c0a4112; }
L8c0a3f04:;
  fp_arith(c,3,4,5);
  fp_cmp(c,1,4,12);
  if(c->t) goto L8c0a3f0e;
  {  goto L8c0a4112; }
L8c0a3f0e:;
  fp_cmp(c,1,4,15);
  if(c->t) goto L8c0a3f60;
  R(0)=0xf8u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xf8u;
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xfcu;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xfcu;
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x100u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x100u;
  fp_arith(c,2,4,2);
  { fp_st(c,4,R(0)+R(15)); goto L8c0a4112; }
L8c0a3f60:;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(11);
  { c->pr=0x8c0a3f6au; R(4)+=0x44u; f_8c05e6ea(c); }
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x5cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_mov(c,3,2);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x50u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x54u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x5cu;
  R(4)=0xf8u;
  R(5)+=0x5cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(12); c->pr=0x8c0a400eu; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0xf8u;
  R(5)=R(15);
  fp_mov(c,14,0);
  R(5)+=0x50u;
  { uint32_t tg=R(12); c->pr=0x8c0a401au; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0xf8u;
  R(5)=R(15);
  fp_mov(c,12,0);
  R(5)+=0x44u;
  { uint32_t tg=R(12); c->pr=0x8c0a4026u; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0x58u;
  fp_mov(c,13,0);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10cu;
  fp_mov(c,0,14);
  fp_ld(c,4,R(0)+R(15));
  fp_arith(c,3,4,3);
  fp_mov(c,3,12);
  fp_arith(c,2,3,12);
  fp_fmac(c,3,14);
  fp_mov(c,5,3);
  fp_mov(c,6,4);
  fp_arith(c,2,6,4);
  fp_cmp(c,1,6,5);
  if(c->t) goto L8c0a408a;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,14,2);
  if(!c->t) goto L8c0a4080;
  { fp_mov(c,3,14); goto L8c0a4084; }
L8c0a4080:;
  fp_mov(c,3,14);
  fp_unary(c,0,3);
L8c0a4084:;
  R(0)=0x8c0a416cu;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
L8c0a408a:;
  R(0)=0x5cu;
  fp_mov(c,2,14);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xf8u;
  fp_arith(c,2,2,3);
  fp_mov(c,5,4);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,14);
  fp_arith(c,2,2,3);
  R(0)=0xfcu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x100u;
  fp_arith(c,2,14,3);
  fp_mov(c,2,5);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,5,3);
  R(5)=0xf8u;
  R(4)=0xf8u;
  R(6)=R(15);
  R(0)=0x40u;
  R(3)=0x8c05e5f4u;
  R(5)+=R(15);
  fp_st(c,5,R(0)+R(15));
  R(6)+=0x38u;
  { c->pr=0x8c0a40e0u; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0x44u;
  fp_mov(c,2,13);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=0xf8u;
  R(6)=R(15);
  fp_arith(c,2,2,3);
  R(4)=0xf8u;
  R(3)=0x8c05e5f4u;
  R(6)+=0x38u;
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,13);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a4112u; R(4)+=R(15); sh4_call(c,tg); }
L8c0a4112:;
  R(3)=LD32(R(15)+4);
  R(0)=0x114u;
  fp_ld(c,14,R(3));
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(4)=0x90u;
  R(3)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(15)+20);
  R(6)=LD32(R(15)+R(0));
  { c->pr=0x8c0a4128u; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(2)=LD32(R(15));
  R(3)=0x400000u;
  R(1)=LD32(R(2)+12);
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0a413a;
  R(0)=0x94u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
L8c0a413a:;
  R(3)=LD32(R(15));
  R(2)=0x100000u;
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0a41b8;
  R(0)=LD32(R(15)+4);
  R(1)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0a4180;
  R(0)=LD32(R(15)+4);
  R(2)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a4180;
  { R(2)=0x0u; goto L8c0a4182; }
L8c0a4180:;
  R(2)=0x1u;
L8c0a4182:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a41b8;
  R(3)=LD32(R(15)+4);
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(3));
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a41b8;
  R(5)=0xe0u;
  R(2)=0x8c05e55cu;
  R(5)+=R(15);
  { c->pr=0x8c0a41a2u; R(4)=R(11); f_8c05e55c(c); }
  R(0)=0x8c0a420cu;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,0);
  if(!c->t) goto L8c0a41b8;
  R(3)=0x8c05e6eau;
  R(4)=0xd4u;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0a41b4u; R(4)+=R(15); f_8c05e6ea(c); }
  {  goto L8c0a41c6; }
L8c0a41b8:;
  R(6)=0x8cu;
  R(4)=0xd4u;
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c0a41c6u; R(4)+=R(15); f_8c05e5f4(c); }
L8c0a41c6:;
  R(2)=LD32(R(15));
  R(3)=0x100000u;
  R(1)=LD32(R(2)+12);
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0a41f2;
  R(2)=0x8c0cbe04u;
  R(0)=0x8c0a421cu;
  fp_ld(c,3,R(0));
  fp_ld(c,4,R(2));
  R(0)=0xdcu;
  fp_arith(c,0,4,3);
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c0a41f2;
  R(2)=LD32(R(15)+8);
  R(0)=0x8u;
  R(3)=0x1u;
  fp_ld(c,2,R(0)+R(2));
  R(0)=0xdcu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  ST8(R(15)+R(0),R(3));
L8c0a41f2:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,14);
  if(c->t) goto L8c0a4240;
  fp_mov(c,4,15);
  { fp_arith(c,1,4,14); goto L8c0a4242; }
L8c0a4240:;
  fp_mov(c,4,3);
L8c0a4242:;
  R(0)=0xf8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xfcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x100u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0xb0u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb4u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(3));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a42ee;
  R(0)=0xb0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xb4u;
  fp_mov(c,0,4);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xb0u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+4);
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0xb0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0xb4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0xb8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c0a42ee:;
  R(0)=0x34u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a42fa;
  {  goto L8c0a4466; }
L8c0a42fa:;
  R(0)=0xb0u;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xb4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xb8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,7,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8c0a434cu;
  fp_ld(c,3,R(0));
  fp_mov(c,4,5);
  fp_arith(c,0,4,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0a4360;
  { fp_mov(c,3,4); goto L8c0a4368; }
L8c0a4360:;
  fp_mov(c,1,5);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c0a4368:;
  R(0)=0x8c0a43e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a4400;
  R(0)=0x8c0a43e8u;
  fp_ld(c,3,R(0));
  R(0)=0xb4u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a438a;
  R(0)=0x8c0a43e8u;
  fp_ld(c,2,R(0));
  R(0)=0xb4u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a4392; }
L8c0a438a:;
  R(0)=0xb4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a4392:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a43e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a4400;
  R(0)=0x8c0a43e8u;
  fp_ld(c,3,R(0));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a43b6;
  R(0)=0x8c0a43e8u;
  fp_ld(c,2,R(0));
  R(0)=0xb8u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a43be; }
L8c0a43b6:;
  R(0)=0xb8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a43be:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a43e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a4400;
  { R(2)=0x1u; goto L8c0a4402; }
L8c0a4400:;
  R(2)=0x0u;
L8c0a4402:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a4466;
  R(0)=0xb0u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb4u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xb8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xb0u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,7);
  fp_arith(c,2,2,3);
  R(0)=0xb0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb4u;
  fp_mov(c,2,7);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,7,3);
  fp_st(c,7,R(0)+R(15));
L8c0a4466:;
  R(5)=0xd4u;
  R(6)=0xb0u;
  R(4)=0xa4u;
  R(5)+=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a4476u; R(4)+=R(15); f_8c05e5f4(c); }
  R(5)=0xa4u;
  R(4)=0x98u;
  R(3)=0x8c05e612u;
  R(5)+=R(15);
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a4484u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0x98u;
  R(5)+=R(15);
  { uint32_t tg=R(12); c->pr=0x8c0a448cu; R(4)=R(11); sh4_call(c,tg); }
  R(0)=0x8c0a44f4u;
  fp_mov(c,15,0);
  fp_ld(c,3,R(0));
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c0a44a8;
  R(0)=0x24u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a44a8;
  R(0)=0x1cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,1,1,2);
  if(c->t) goto L8c0a44be;
L8c0a44a8:;
  R(2)=LD32(R(15)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a4500;
  R(5)=LD32(R(15)+4);
  R(3)=0x8c090dacu;
  R(5)+=0x4u;
  { c->pr=0x8c0a44b8u; R(4)=LD32(R(15)); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a4500;
L8c0a44be:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x40)==0;
  if(!c->t) goto L8c0a4500;
  R(5)=0xd4u;
  { R(5)+=R(15); goto L8c0a4504; }
L8c0a4500:;
  R(5)=0xa4u;
  R(5)+=R(15);
L8c0a4504:;
  R(3)=0x8c05e6eau;
  { c->pr=0x8c0a450au; R(4)=LD32(R(15)+12); f_8c05e6ea(c); }
  R(6)=0xf8u;
  R(5)=LD32(R(15)+12);
  R(3)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0a4516u; R(4)=LD32(R(15)+8); f_8c05e612(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0a4526;
  R(3)=0x8c01638au;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0a4526u; R(4)=LD32(R(15)+48); f_8c01638a(c); }
L8c0a4526:;
  R(0)=0x20u;
  R(3)=0x8c091980u;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0a4530u; R(4)=LD32(R(15)); f_8c091980(c); }
  { f_8c0a4530(c); return; }
}
void f_8c0a4530(SH4Ctx *c) {
  R(1)=0x114u;
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
void f_8c0a454e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(0)=0x48u;
  R(11)=R(6);
  R(13)=LD32(R(15)+R(0));
  R(0)=0x8c0a45b8u;
  fp_ld(c,13,R(0));
  R(0)=0x8c0a45bcu;
  fp_ld(c,4,R(11));
  R(14)=R(4);
  fp_ld(c,15,R(0));
  fp_mov(c,5,4);
  fp_arith(c,0,5,15);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,5,2);
  { uint32_t k=!c->t; c->fr[14]=0x00000000u; if(k) goto L8c0a4584; }
  { fp_mov(c,3,5); goto L8c0a458a; }
L8c0a4584:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a458a:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c0a45ee;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(11));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a45c0;
  fp_ld(c,3,R(0)+R(11));
  { fp_arith(c,0,3,15); goto L8c0a45c8; }
L8c0a45c0:;
  fp_ld(c,3,R(0)+R(11));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a45c8:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c0a45ee;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(11));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a45de;
  fp_ld(c,3,R(0)+R(11));
  { fp_arith(c,0,3,15); goto L8c0a45e6; }
L8c0a45de:;
  fp_ld(c,3,R(0)+R(11));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a45e6:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c0a45ee;
  { R(3)=0x1u; goto L8c0a45f0; }
L8c0a45ee:;
  R(3)=0x0u;
L8c0a45f0:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a45fa;
  {  goto L8c0a46de; }
L8c0a45fa:;
  R(0)=0x8u;
  R(4)=0xe0u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(7));
  R(4)+=R(5);
  R(12)=R(4);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(7));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,1,R(7));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(7));
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,1,R(0)+R(7));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(13));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,0,4,15);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; R(12)+=0x58u; if(k) goto L8c0a4680; }
  { fp_mov(c,3,4); goto L8c0a468a; }
L8c0a4680:;
  fp_mov(c,2,5);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a468a:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c0a46d6;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a46a2;
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a46ac; }
L8c0a46a2:;
  R(0)=0x1cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a46ac:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c0a46d6;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a46c4;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a46ce; }
L8c0a46c4:;
  R(0)=0x20u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a46ce:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c0a46d6;
  { R(3)=0x1u; goto L8c0a46d8; }
L8c0a46d6:;
  R(3)=0x0u;
L8c0a46d8:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a46ea;
L8c0a46de:;
  R(0)=0x4u;
  fp_st(c,14,R(14));
  fp_st(c,14,R(0)+R(14));
  R(0)=0x8u;
  { fp_st(c,14,R(0)+R(14)); goto L8c0a4918; }
L8c0a46ea:;
  R(0)=0x18u;
  R(5)=R(11);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
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
  R(3)=0x8c05e55cu;
  R(4)=R(15);
  { c->pr=0x8c0a4732u; R(4)+=0x18u; f_8c05e55c(c); }
  R(0)=0x4cu;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_mov(c,12,0); if(k) goto L8c0a4740; }
  {  goto L8c0a4874; }
L8c0a4740:;
  R(3)=0x8c0cbdb8u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0a474c;
  {  goto L8c0a4874; }
L8c0a474c:;
  fp_ld(c,5,R(11));
  c->fr[2]=0x00000000u;
  fp_mov(c,4,5);
  fp_arith(c,0,4,15);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0a475c;
  { fp_mov(c,3,4); goto L8c0a4762; }
L8c0a475c:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a4762:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c0a47d0;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(11));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a4778;
  fp_ld(c,3,R(0)+R(11));
  { fp_arith(c,0,3,15); goto L8c0a4780; }
L8c0a4778:;
  fp_ld(c,3,R(0)+R(11));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a4780:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c0a47d0;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(11));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a47c0;
  fp_ld(c,3,R(0)+R(11));
  { fp_arith(c,0,3,15); goto L8c0a47c8; }
L8c0a47c0:;
  fp_ld(c,3,R(0)+R(11));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a47c8:;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c0a47d0;
  { R(3)=0x1u; goto L8c0a47d2; }
L8c0a47d0:;
  R(3)=0x0u;
L8c0a47d2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c0a4814; }
  R(0)=0x4u;
  fp_ld(c,4,R(11));
  fp_ld(c,5,R(0)+R(11));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(11));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(11));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(15));
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c0a481e; }
L8c0a4814:;
  R(0)=0x4u;
  fp_st(c,14,R(15));
  fp_st(c,14,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,14,R(0)+R(15));
L8c0a481e:;
  R(3)=0x8c05e55cu;
  { c->pr=0x8c0a4824u; R(4)=R(15); f_8c05e55c(c); }
  R(0)=0x4u;
  fp_ld(c,7,R(11));
  fp_ld(c,4,R(0)+R(11));
  R(0)=0x8u;
  fp_mov(c,5,0);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_mov(c,0,7);
  fp_ld(c,6,R(0)+R(11));
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,12,1);
  fp_fmac(c,3,7);
  fp_mov(c,0,6);
  fp_unary(c,0,5);
  fp_fmac(c,3,6);
  { uint32_t k=!c->t; fp_unary(c,2,3); if(k) goto L8c0a484a; }
  { c->fr[2]=0x3F800000u; goto L8c0a4856; }
L8c0a484a:;
  fp_cmp(c,1,1,12);
  if(!c->t) goto L8c0a4854;
  c->fr[2]=0x3F800000u;
  { fp_unary(c,0,2); goto L8c0a4856; }
L8c0a4854:;
  c->fr[2]=0x00000000u;
L8c0a4856:;
  R(0)=0x8c0a4944u;
  fp_mov(c,4,3);
  fp_ld(c,3,R(0));
  fp_cmp(c,1,5,3);
  { uint32_t k=!c->t; fp_arith(c,2,4,2); if(k) goto L8c0a4876; }
  c->fr[2]=0x3F800000u;
  fp_arith(c,1,2,5);
  R(0)=0x8c0a4948u;
  fp_mov(c,0,4);
  fp_ld(c,1,R(0));
  fp_arith(c,3,2,1);
  fp_mov(c,4,2);
  { fp_arith(c,2,4,0); goto L8c0a4876; }
L8c0a4874:;
  fp_mov(c,4,12);
L8c0a4876:;
  R(0)=0x18u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8c0a494cu;
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,7,R(14));
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,7);
  fp_ld(c,5,R(0)+R(14));
  fp_ld(c,2,R(13));
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_arith(c,2,3,2);
  fp_arith(c,2,3,4);
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,7,R(14));
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,7);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x10u;
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_arith(c,2,3,2);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,6,R(14));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,6);
  fp_ld(c,7,R(0)+R(14));
  fp_fmac(c,3,6);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_unary(c,2,3);
  fp_ld(c,2,R(0)+R(13));
  R(6)=R(15);
  R(3)=0x8c05e5f4u;
  R(0)=0x14u;
  R(5)=R(14);
  R(6)+=0xcu;
  fp_arith(c,2,3,2);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c0a490eu; R(4)=R(14); f_8c05e5f4(c); }
  R(2)=0x8c05e5f4u;
  R(5)=R(12);
  R(6)=R(14);
  { c->pr=0x8c0a4918u; R(4)=R(12); f_8c05e5f4(c); }
L8c0a4918:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
