#include "recomp_decls.h"
void f_8c0b4ee0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=0x24au;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST16(R(14)+R(0),R(12));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff2u;
  R(2)=LD32(R(14)+R(0));
  R(11)=0x8c05e612u;
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  R(13)=0x8c014eaau;
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c0b4fd8;
L8c0b4f02:;
  R(0)=0x23cu;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0xeu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xeu;
  R(2)=LD32(R(2));
  R(1)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(1);
  R(1)=0x2a8u;
  R(3)<<=2;
  R(3)+=R(2);
  ST32(R(14)+R(0),R(3));
  R(1)+=R(14);
  R(3)=LD32(R(14)+R(0));
  R(2)=LD32(R(14)+4);
  R(0)=(int32_t)(int16_t)LD16(R(3)+8);
  R(2)=LD32(R(2));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(2);
  ST32(R(1),R(0));
  R(0)=0x258u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xffffffd4u;
  fp_ld(c,3,R(0)+R(14));
  fp_ld(c,2,R(3));
  R(0)=0x2b0u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(14));
  R(5)=0x8cu;
  R(0)+=0xfffffff8u;
  R(4)=0x264u;
  R(6)=LD32(R(14)+R(0));
  R(5)+=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b4f50u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x2a8u;
  R(5)=0xf4u;
  R(4)=0x270u;
  R(6)=LD32(R(14)+R(0));
  R(5)+=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b4f5eu; R(4)+=R(14); sh4_call(c,tg); }
  R(5)=0x270u;
  R(6)=0x264u;
  R(4)=0x27cu;
  R(5)+=R(14);
  R(6)+=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0b4f6cu; R(4)+=R(14); sh4_call(c,tg); }
  { c->pr=0x8c0b4f70u; R(4)=R(14); f_8c0b3f80(c); }
  R(0)=0x24cu;
  ST16(R(14)+R(0),R(12));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff4u;
  R(2)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c0b4fc4;
L8c0b4f80:;
  R(0)=0x240u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0xcu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0x10u;
  R(2)=LD32(R(2));
  R(1)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(1);
  R(3)<<=2;
  R(3)+=R(2);
  ST32(R(14)+R(0),R(3));
  R(0)+=0xfffffffcu;
  R(2)=LD32(R(14)+R(0));
  R(0)=0x534u;
  R(3)=LD32(R(2)+4);
  ST32(R(14)+R(0),R(3));
  R(0)=0x25cu;
  R(2)=LD32(R(14)+R(0));
  R(0)=0x538u;
  R(3)=LD32(R(2)+4);
  ST32(R(14)+R(0),R(3));
  { c->pr=0x8c0b4fb0u; R(4)=R(14); f_8c0b4aa0(c); }
  R(0)=0x24cu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff4u;
  R(2)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0b4f80;
L8c0b4fc4:;
  R(0)=0x24au;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff2u;
  R(2)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0b4f02;
L8c0b4fd8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b5040(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(0)=0x24au;
  R(9)=0x0u;
  R(14)=R(4);
  R(8)=0x8c140ce0u;
  ST16(R(14)+R(0),R(9));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff2u;
  R(2)=LD32(R(14)+R(0));
  R(10)=0x8c05e612u;
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0b506e;
  {  goto L8c0b554e; }
L8c0b506e:;
  R(0)=0x23cu;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0xeu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xeu;
  R(2)=LD32(R(2));
  R(1)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(1);
  R(1)=0x2a8u;
  R(3)<<=2;
  R(3)+=R(2);
  ST32(R(14)+R(0),R(3));
  R(1)+=R(14);
  R(3)=LD32(R(14)+R(0));
  R(2)=LD32(R(14)+4);
  R(0)=(int32_t)(int16_t)LD16(R(3)+8);
  R(2)=LD32(R(2));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(2);
  ST32(R(1),R(0));
  R(0)=0x258u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xffffffd4u;
  fp_ld(c,3,R(0)+R(14));
  fp_ld(c,2,R(3));
  R(0)=0x2b0u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(14));
  R(5)=0x8cu;
  R(0)+=0xfffffff8u;
  R(4)=0x264u;
  R(3)=0x8c014eaau;
  R(5)+=R(14);
  R(6)=LD32(R(14)+R(0));
  { c->pr=0x8c0b50beu; R(4)+=R(14); f_8c014eaa(c); }
  R(0)=0x2a8u;
  R(5)=0xf4u;
  R(4)=0x270u;
  R(3)=0x8c014eaau;
  R(5)+=R(14);
  R(6)=LD32(R(14)+R(0));
  { c->pr=0x8c0b50ceu; R(4)+=R(14); f_8c014eaa(c); }
  R(5)=0x270u;
  R(6)=0x264u;
  R(4)=0x27cu;
  R(5)+=R(14);
  R(6)+=R(14);
  { uint32_t tg=R(10); c->pr=0x8c0b50dcu; R(4)+=R(14); sh4_call(c,tg); }
  R(2)=0x8c0b3f80u;
  { c->pr=0x8c0b50e2u; R(4)=R(14); f_8c0b3f80(c); }
  R(0)=0x2b0u;
  R(5)=R(15);
  R(6)=0x264u;
  R(4)=R(15);
  R(3)=0x8c0a15d4u;
  R(5)+=0x14u;
  fp_ld(c,4,R(0)+R(14));
  R(6)+=R(14);
  { c->pr=0x8c0b50f6u; R(4)+=0x20u; f_8c0a15d4(c); }
  R(2)=0x540u;
  R(7)=0x544u;
  R(2)+=R(14);
  R(0)=0x53cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)+=R(14);
  R(5)=R(15);
  R(3)=0x8c033964u;
  R(6)=R(15);
  R(6)+=0x18u;
  R(5)+=0x24u;
  { c->pr=0x8c0b5110u; R(4)=LD32(R(14)+R(0)); f_8c033964(c); }
  R(15)+=0x4u;
  R(0)=0x540u;
  R(2)=LD32(R(8));
  R(2)+=0x1u;
  ST32(R(8),R(2));
  ST16(R(15),R(9));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c0b5126;
  {  goto L8c0b5536; }
L8c0b5126:;
  R(3)=0x544u;
  R(0)=R(9);
  R(5)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=R(14);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)=LD32(R(5));
  ST32(R(15)+16,R(5));
  R(5)=LD32(R(5)+28);
  R(4)=(int32_t)(int16_t)LD16(R(5));
  R(13)=R(5);
  R(13)+=0x2u;
  ST8(R(15)+8,R(0));
  R(3)=R(4);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; ST32(R(15)+12,R(4)); if(k) goto L8c0b514c; }
  {  goto L8c0b5520; }
L8c0b514c:;
  R(1)=(int32_t)(int8_t)LD8(R(13));
  R(3)=0x80u;
  R(1)=R(1)&0xFF;
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(c->t) goto L8c0b51a0;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(2)=(uint32_t)v;}
  R(0)=0x234u;
  R(2)=R(2)&0xFF;
  { ST16(R(14)+R(0),R(2)); goto L8c0b51b4; }
L8c0b51a0:;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(4)=(uint32_t)v;}
  R(1)=0x7fffu;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(2)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(4)<<=8;
  R(0)=0x234u;
  R(2)=R(2)&0xFF;
  R(4)+=R(2);
  R(4)&=R(1);
  ST16(R(14)+R(0),R(4));
L8c0b51b4:;
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(2)=0x80u;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c0b51c4;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(11)=(uint32_t)v;}
  { R(11)=R(11)&0xFF; goto L8c0b51d6; }
L8c0b51c4:;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(4)=(uint32_t)v;}
  R(1)=0x7fffu;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(3)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(4)<<=8;
  R(3)=R(3)&0xFF;
  R(4)+=R(3);
  R(4)&=R(1);
  R(11)=R(4);
L8c0b51d6:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(11);
  R(0)=0x53cu;
  ST32(R(15)+4,R(3));
  R(3)=0x234u;
  R(0)=LD32(R(14)+R(0));
  R(3)+=R(14);
  R(1)=0x8c140ce4u;
  R(3)=(int32_t)(int16_t)LD16(R(3));
  R(0)=LD32(R(0)+8);
  c->t=R(3)>>31;R(3)<<=1;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(3)=LD32(R(15)+4);
  R(2)=R(2)&0xFFFF;
  R(0)=LD32(R(1));
  R(2)+=R(3);
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  R(2)=LD32(R(8));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0b5202;
  {  goto L8c0b550e; }
L8c0b5202:;
  R(3)=0x234u;
  R(0)=LD32(R(14)+16);
  R(3)+=R(14);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  R(0)=LD32(R(0)+16);
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0b5240;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0b521c;
  {  goto L8c0b54a0; }
L8c0b521c:;
  {  goto L8c0b54ee; }
L8c0b5240:;
  R(2)=LD32(R(14)+24);
  R(3)=0x20000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0b5282;
  R(2)=0x234u;
  R(0)=LD32(R(14)+16);
  R(2)+=R(14);
  R(2)=(int32_t)(int16_t)LD16(R(2));
  R(0)=LD32(R(0)+20);
  R(2)<<=2;
  R(1)=LD32(R(2)+R(0));
  R(0)=0x238u;
  ST32(R(14)+R(0),R(1));
  R(0)+=0x10u;
  ST16(R(14)+R(0),R(11));
  R(0)+=0x10u;
  R(2)=LD32(R(14)+R(0));
  R(0)=0x534u;
  R(1)=LD32(R(2)+4);
  ST32(R(14)+R(0),R(1));
  R(0)=0x238u;
  R(2)=LD32(R(14)+R(0));
  R(0)=0x538u;
  R(1)=LD32(R(2));
  R(2)=0x8c0b40e0u;
  ST32(R(14)+R(0),R(1));
  { c->pr=0x8c0b5278u; R(4)=R(14); f_8c0b40e0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b5282;
  {  goto L8c0b54ee; }
L8c0b5282:;
  R(2)=LD32(R(14)+24);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0b528e;
  {  goto L8c0b54ee; }
L8c0b528e:;
  R(0)=0x258u;
  R(12)=(uint32_t)(int32_t)(int16_t)R(11);
  R(3)=R(12);
  R(3)<<=2;
  R(0)=LD32(R(14)+R(0));
  c->t=R(12)>>31;R(12)<<=1;
  R(12)+=R(3);
  R(2)=LD32(R(0)+4);
  R(0)=0x534u;
  ST32(R(14)+R(0),R(2));
  R(0)=0x238u;
  R(1)=LD32(R(14)+R(0));
  R(0)=0x538u;
  R(2)=LD32(R(1));
  ST32(R(14)+R(0),R(2));
  R(0)=0x230u;
  ST16(R(14)+R(0),R(9));
  R(0)+=0x8u;
  R(1)=LD32(R(14)+R(0));
  R(0)+=0x5cu;
  R(2)=LD32(R(14)+16);
  R(1)=LD32(R(1)+8);
  R(2)=LD32(R(2));
  R(1)+=R(12);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  R(1)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(1);
  R(3)<<=2;
  R(3)+=R(2);
  ST32(R(14)+R(0),R(3));
  R(2)=LD32(R(14)+16);
  R(0)+=0xffffffa4u;
  R(2)=LD32(R(2));
  R(3)=LD32(R(14)+R(0));
  R(4)=0x29cu;
  R(1)=LD32(R(3)+8);
  R(1)+=R(12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
  R(1)=0x298u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(1)+=R(14);
  R(0)+=R(2);
  ST32(R(1),R(0));
  R(0)=0x294u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(5)=LD32(R(14)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c0b52f8u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(3)=LD32(R(3));
  R(1)=LD32(R(2)+8);
  R(1)+=R(12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+4);
  R(1)=0x298u;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(1)+=R(14);
  R(0)+=R(3);
  ST32(R(1),R(0));
  R(0)=0x238u;
  R(5)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=LD32(R(5)+16);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(5)+=R(3);
  R(3)=0x8c0b6200u;
  { c->pr=0x8c0b5330u; R(4)=R(14); f_8c0b6200(c); }
  R(0)=0x230u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(0)+=0x8u;
  R(2)=LD32(R(14)+R(0));
  R(3)=LD32(R(14)+16);
  R(1)=LD32(R(2)+8);
  R(3)=LD32(R(3));
  R(1)+=R(12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
  R(1)=0x294u;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(1)+=R(14);
  R(0)+=R(3);
  ST32(R(1),R(0));
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(3)=LD32(R(3));
  R(1)=LD32(R(2)+8);
  R(1)+=R(12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+4);
  R(1)=0x298u;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(0)+=R(3);
  R(1)+=R(14);
  R(4)=0x29cu;
  ST32(R(1),R(0));
  R(0)=0x294u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(5)=LD32(R(14)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c0b5382u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x60u;
  R(3)=LD32(R(3));
  R(1)=LD32(R(2)+8);
  R(1)+=R(12);
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(1)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(2)<<=2;
  R(2)+=R(3);
  ST32(R(14)+R(0),R(2));
  R(0)+=0xffffffa0u;
  R(5)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=LD32(R(5)+16);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(5)+=R(3);
  R(3)=0x8c0b6200u;
  { c->pr=0x8c0b53b8u; R(4)=R(14); f_8c0b6200(c); }
  R(0)=0x230u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(0)+=0x8u;
  R(2)=LD32(R(14)+R(0));
  R(3)=LD32(R(14)+16);
  R(1)=LD32(R(2)+8);
  R(3)=LD32(R(3));
  R(1)+=R(12);
  R(0)=(int32_t)(int16_t)LD16(R(1)+4);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  {  goto L8c0b5400; }
L8c0b5400:;
  R(1)=0x294u;
  R(0)+=R(3);
  R(4)=0x29cu;
  R(1)+=R(14);
  ST32(R(1),R(0));
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x60u;
  R(3)=LD32(R(3));
  R(1)=LD32(R(2)+8);
  R(1)+=R(12);
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(1)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(2)<<=2;
  R(2)+=R(3);
  ST32(R(14)+R(0),R(2));
  R(0)+=0xfffffffcu;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(5)=LD32(R(14)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c0b5432u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(3)=LD32(R(3));
  R(1)=LD32(R(2)+8);
  R(12)+=R(1);
  R(1)=0x298u;
  R(0)=(int32_t)(int16_t)LD16(R(12)+2);
  R(1)+=R(14);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(0)+=R(3);
  ST32(R(1),R(0));
  R(0)=0x238u;
  R(5)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=LD32(R(5)+16);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(5)+=R(3);
  R(3)=0x8c0b6200u;
  { c->pr=0x8c0b546au; R(4)=R(14); f_8c0b6200(c); }
  R(0)=0x230u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)+=0x1u;
  { ST16(R(14)+R(0),R(2)); goto L8c0b54ee; }
L8c0b54a0:;
  R(1)=LD32(R(14)+24);
  R(3)=0x80000u;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0b54ee;
  R(2)=0x234u;
  R(0)=LD32(R(14)+16);
  R(2)+=R(14);
  R(2)=(int32_t)(int16_t)LD16(R(2));
  R(0)=LD32(R(0)+20);
  R(2)<<=2;
  R(1)=LD32(R(2)+R(0));
  R(0)=0x240u;
  ST32(R(14)+R(0),R(1));
  R(0)+=0xcu;
  ST16(R(14)+R(0),R(11));
  R(0)+=0xfffffff4u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0xcu;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0x10u;
  R(2)=LD32(R(2));
  R(3)=R(1);
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(1)<<=2;
  R(1)+=R(2);
  ST32(R(14)+R(0),R(1));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x534u;
  R(2)=LD32(R(3)+4);
  ST32(R(14)+R(0),R(2));
  R(0)=0x25cu;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x538u;
  R(2)=LD32(R(3)+4);
  ST32(R(14)+R(0),R(2));
  { c->pr=0x8c0b54eeu; R(4)=R(14); f_8c0b4aa0(c); }
L8c0b54ee:;
  R(3)=0x234u;
  R(0)=0x53cu;
  R(3)+=R(14);
  R(1)=0x8c140ce4u;
  R(0)=LD32(R(14)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(3));
  R(0)=LD32(R(0)+8);
  c->t=R(3)>>31;R(3)<<=1;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(3)=LD32(R(15)+4);
  R(2)=R(2)&0xFFFF;
  R(0)=LD32(R(1));
  R(2)+=R(3);
  R(3)=LD32(R(8));
  R(2)<<=2;
  ST32(R(2)+R(0),R(3));
L8c0b550e:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)+=0x1u;
  ST8(R(15)+8,R(0));
  R(0)=R(0)&0xFF;
  R(3)=LD32(R(15)+12);
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c0b5520;
  {  goto L8c0b514c; }
L8c0b5520:;
  R(3)=0x540u;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=R(14);
  R(0)+=0x1u;
  ST16(R(15),R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c0b5536;
  {  goto L8c0b5126; }
L8c0b5536:;
  R(0)=0x24au;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=0x1u;
  ST16(R(14)+R(0),R(3));
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff2u;
  R(3)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0b554e;
  {  goto L8c0b506e; }
L8c0b554e:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b55a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff38u;
  R(15)+=R(0);
  R(14)=R(4);
  R(3)=LD32(R(14)+16);
  R(0)=0x32u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0b55d8;
  R(0)=0x53cu;
  R(5)=R(15);
  R(6)=LD32(R(14)+R(0));
  c->t=(R(6)&R(6))==0;
  R(6)=c->t;
  R(6)+=0xffffffffu;
  R(6)=0u-R(6);
  { c->pr=0x8c0b55ceu; R(4)=R(14); f_8c0b5740(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b55d8;
  {  goto L8c0b570c; }
L8c0b55d8:;
  R(0)=0x53cu;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b55e4;
  {  goto L8c0b5700; }
L8c0b55e4:;
  R(0)=0x234u;
  R(3)=0x0u;
  R(10)=0x8c087b68u;
  R(12)=0x80000u;
  R(13)=0x20000u;
  ST16(R(14)+R(0),R(3));
  { R(11)=0xffffffffu; goto L8c0b56c2; }
L8c0b55f4:;
  R(2)=LD32(R(14)+16);
  R(0)=0x32u;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b5660;
  R(0)=0x234u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c0b5606u; R(4)=LD32(R(14)+16); sh4_call(c,tg); }
  R(4)=R(0);
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0b5612;
  { R(3)=0xffffffffu; goto L8c0b561c; }
L8c0b5612:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)=R(15);
  R(2)<<=2;
  R(2)+=R(3);
  R(3)=LD32(R(2));
L8c0b561c:;
  R(0)=0x254u;
  ST32(R(14)+R(0),R(3));
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0b56ba;
  {  goto L8c0b5664; }
L8c0b5660:;
  R(0)=0x254u;
  ST32(R(14)+R(0),R(11));
L8c0b5664:;
  R(3)=0x234u;
  R(0)=LD32(R(14)+16);
  R(3)+=R(14);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  R(0)=LD32(R(0)+16);
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0b567e;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0b569e;
  {  goto L8c0b56ba; }
L8c0b567e:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0b56ba;
  R(3)=0x234u;
  R(0)=LD32(R(14)+16);
  R(3)+=R(14);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  R(0)=LD32(R(0)+20);
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x238u;
  ST32(R(14)+R(0),R(2));
  { c->pr=0x8c0b569au; R(4)=R(14); f_8c0b4700(c); }
  {  goto L8c0b56ba; }
L8c0b569e:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0b56ba;
  R(3)=0x234u;
  R(0)=LD32(R(14)+16);
  R(3)+=R(14);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  R(0)=LD32(R(0)+20);
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x240u;
  ST32(R(14)+R(0),R(2));
  { c->pr=0x8c0b56bau; R(4)=R(14); f_8c0b4ee0(c); }
L8c0b56ba:;
  R(0)=0x234u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=0x1u;
  ST16(R(14)+R(0),R(3));
L8c0b56c2:;
  R(0)=0x234u;
  R(3)=LD32(R(14)+16);
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x2eu;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  if(!c->t) goto L8c0b55f4;
  {  goto L8c0b570c; }
L8c0b5700:;
  R(2)=LD32(R(14)+24);
  R(3)=0x1e0000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0b570c;
  { c->pr=0x8c0b570cu; R(4)=R(14); f_8c0b5040(c); }
L8c0b570c:;
  R(1)=0xc8u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b5740(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffacu;
  R(0)=R(6);
  R(11)=0x0u;
  R(14)=R(4);
  ST32(R(15),R(5));
  ST8(R(15)+12,R(0));
  R(0)=0x14u;
  ST8(R(15)+R(0),R(11));
  R(4)=R(15);
  R(0)=0x23cu;
  R(6)=LD32(R(14)+4);
  R(3)=LD32(R(14)+R(0));
  R(6)=LD32(R(6));
  R(2)=LD32(R(3));
  R(5)=0x8cu;
  R(0)=(int32_t)(int16_t)LD16(R(2)+8);
  R(10)=0x8c014eaau;
  R(5)+=R(14);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c0b5782u; R(4)+=0x48u; f_8c014eaa(c); }
  R(0)=0x23cu;
  R(5)=R(15);
  R(6)=R(15);
  R(4)=R(15);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0xfffffff0u;
  fp_ld(c,3,R(0)+R(14));
  R(6)+=0x48u;
  R(3)=LD32(R(2));
  R(5)+=0x30u;
  fp_ld(c,4,R(3));
  R(3)=0x8c0a15d4u;
  fp_arith(c,3,4,3);
  { c->pr=0x8c0b57a0u; R(4)+=0x3cu; f_8c0a15d4(c); }
  R(0)=0x23cu;
  R(12)=0x1u;
  R(8)=0x8c0a1602u;
  R(2)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(12)>=(int32_t)R(0);
  { uint32_t k=c->t; R(13)=R(12); if(k) goto L8c0b5814; }
L8c0b57b0:;
  R(0)=0x23cu;
  R(9)=(uint32_t)(int32_t)(int16_t)R(13);
  R(2)=R(9);
  c->t=R(9)>>31;R(9)<<=1;
  R(3)=LD32(R(14)+R(0));
  R(9)+=R(2);
  R(9)<<=2;
  R(6)=LD32(R(14)+4);
  R(3)=LD32(R(3));
  R(4)=R(15);
  R(6)=LD32(R(6));
  R(3)+=R(9);
  R(5)=0x8cu;
  R(0)=(int32_t)(int16_t)LD16(R(3)+8);
  R(5)+=R(14);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { uint32_t tg=R(10); c->pr=0x8c0b57dcu; R(4)+=0x48u; sh4_call(c,tg); }
  R(0)=0x23cu;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0xfffffff0u;
  fp_ld(c,3,R(0)+R(14));
  R(3)=LD32(R(2));
  R(9)+=R(3);
  R(3)=R(15);
  fp_ld(c,4,R(9));
  R(3)+=0x30u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_arith(c,3,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x34u;
  R(4)=R(15);
  R(6)+=0x4cu;
  R(7)+=0x40u;
  { uint32_t tg=R(8); c->pr=0x8c0b5804u; R(4)+=0x40u; sh4_call(c,tg); }
  R(0)=0x23cu;
  R(13)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(13);
  R(3)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0b57b0; }
L8c0b5814:;
  R(0)=R(11);
  ST16(R(15)+8,R(0));
  R(3)=LD32(R(14)+16);
  R(0)=0x32u;
  R(8)=LD32(R(14)+16);
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(9)=LD32(R(15));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=c->t; R(8)=LD32(R(8)+36); if(k) goto L8c0b582c; }
  {  goto L8c0b5942; }
L8c0b582c:;
  R(3)=R(8);
  R(2)=0x8c0a167au;
  R(5)=R(15);
  R(3)+=0xcu;
  R(5)+=0x3cu;
  R(4)=R(15);
  ST32(R(9),R(11));
  R(6)=R(3);
  ST32(R(15),R(8));
  ST32(R(15)+4,R(3));
  R(7)=LD32(R(15));
  { c->pr=0x8c0b5846u; R(4)+=0x30u; f_8c0a167a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b5926;
  R(0)=0x23cu;
  R(2)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(13)=R(11); if(k) goto L8c0b5926; }
L8c0b5858:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(13);
  R(0)=0x23cu;
  R(1)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=LD32(R(14)+R(0));
  R(2)+=R(1);
  R(2)<<=2;
  R(6)=LD32(R(14)+4);
  ST32(R(15)+16,R(2));
  R(4)=R(15);
  R(3)=LD32(R(3));
  R(6)=LD32(R(6));
  R(2)+=R(3);
  R(5)=0x8cu;
  R(0)=(int32_t)(int16_t)LD16(R(2)+8);
  R(5)+=R(14);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { uint32_t tg=R(10); c->pr=0x8c0b5886u; R(4)+=0x48u; sh4_call(c,tg); }
  R(0)=0x23cu;
  R(5)=R(15);
  R(3)=LD32(R(15)+16);
  R(6)=R(15);
  R(2)=LD32(R(14)+R(0));
  R(4)=R(15);
  R(0)=0x22cu;
  R(6)+=0x48u;
  R(1)=LD32(R(2));
  R(5)+=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(1)+=R(3);
  R(3)=0x8c0a15d4u;
  fp_ld(c,4,R(1));
  fp_arith(c,3,4,3);
  { c->pr=0x8c0b58a8u; R(4)+=0x24u; f_8c0a15d4(c); }
  R(5)=R(15);
  R(3)=0x8c0a167au;
  R(7)=LD32(R(15));
  R(4)=R(15);
  R(6)=LD32(R(15)+4);
  R(5)+=0x24u;
  { c->pr=0x8c0b58b8u; R(4)+=0x18u; f_8c0a167a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b5918;
  R(3)=(uint32_t)(int32_t)(int16_t)R(13);
  {  goto L8c0b5900; }
L8c0b5900:;
  R(2)=R(12);
  R(0)=0x14u;
  R(2)=sh4_shad(R(2),R(3));
  R(3)=LD32(R(9));
  R(3)|=R(2);
  ST32(R(9),R(3));
  ST8(R(15)+R(0),R(12));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b5918;
  { R(0)=0x1u; goto L8c0b5946; }
L8c0b5918:;
  R(0)=0x23cu;
  R(13)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(13);
  R(2)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0b5858;
L8c0b5926:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(2)=0x32u;
  R(8)+=0x18u;
  R(0)+=0x1u;
  ST16(R(15)+8,R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(3)=LD32(R(14)+16);
  R(2)+=R(3);
  R(2)=(int32_t)(int16_t)LD16(R(2));
  c->t=(int32_t)R(0)>=(int32_t)R(2);
  { uint32_t k=c->t; R(9)+=0x4u; if(k) goto L8c0b5942; }
  {  goto L8c0b582c; }
L8c0b5942:;
  R(0)=0x14u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
L8c0b5946:;
  R(15)+=0x54u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b5980(SH4Ctx *c) {
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} if(k) goto L8c0b59be; }
  R(1)=(uint32_t)(int32_t)(int16_t)R(1);
  R(2)=0x0u;
  c->q=R(1)>>31;c->m=R(2)>>31;c->t=c->q^c->m;
  {uint32_t a=R(1),b=R(2),s=a-b,r=s-c->t;c->t=(a<s)|(s<r);R(1)=r;}
  R(0)<<=16;
  c->q=R(1)>>31;c->m=R(0)>>31;c->t=c->q^c->m;
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(1)=sh4_div1(c,R(1),R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(1);
  {uint32_t o=R(0)>>31;R(0)=(R(0)<<1)|c->t;c->t=o;}
  {uint32_t a=R(0),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(0)=r;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
L8c0b59be:;
  R(2)=0x8c129ae4u;
  R(1)=0x44eu;
  ST32(R(2),R(1));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
}
void f_8c0b59d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(0)=R(6);
  R(9)=R(15);
  R(3)=0x8c0686b8u;
  R(8)=R(5);
  R(6)=0x8u;
  ST32(R(15)+4,R(4));
  R(5)=0x0u;
  ST8(R(15)+8,R(0));
  R(9)+=0xcu;
  R(12)=0x3fu;
  { c->pr=0x8c0b59fau; R(4)=R(9); f_8c0686b8(c); }
  R(11)=0x0u;
  R(13)=R(11);
  { R(14)=LD32(R(15)+4); goto L8c0b5a08; }
L8c0b5a02:;
  R(12)+=0xfffffff8u;
  R(11)+=0x1u;
  R(14)+=0x1u;
L8c0b5a08:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0b5a02;
  R(10)=0x80u;
  { R(4)=R(10); goto L8c0b5a1a; }
L8c0b5a14:;
  R(4)=R(4)&0xFF;
  R(13)+=0x1u;
  c->t=R(4)&1;R(4)>>=1;
L8c0b5a1a:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(4)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0b5a14;
  R(5)=0x8u;
  R(3)=0x8c0b373cu;
  R(5)-=R(11);
  R(6)=R(13);
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0b5a32u; R(4)=R(14); f_8c0b373c(c); }
  R(3)=0x8c0685b4u;
  R(12)-=R(13);
  R(6)=LD32(R(15)+4);
  R(5)=R(14);
  { c->pr=0x8c0b5a3eu; R(4)=R(9); f_8c0685b4(c); }
  c->t=(int32_t)R(8)>=0;
  R(14)=R(15);
  { uint32_t k=c->t; R(14)+=0x20u; if(k) goto L8c0b5a60; }
  R(3)=0x8c0b5f24u;
  R(5)=R(15);
  R(6)=R(14);
  { c->pr=0x8c0b5a50u; R(4)=0u-R(8); f_8c0b5f24(c); }
  R(2)=0x8c0b5c78u;
  R(5)=R(14);
  R(7)=R(9);
  R(6)=R(12);
  { c->pr=0x8c0b5a5cu; R(4)=R(15); f_8c0b5c78(c); }
  {  goto L8c0b5a76; }
L8c0b5a60:;
  R(2)=0x8c0b5f24u;
  R(5)=R(15);
  R(6)=R(14);
  { c->pr=0x8c0b5a6au; R(4)=R(8); f_8c0b5f24(c); }
  R(3)=0x8c0b5e98u;
  R(5)=R(14);
  R(7)=R(9);
  R(6)=R(12);
  { c->pr=0x8c0b5a76u; R(4)=R(15); f_8c0b5e98(c); }
L8c0b5a76:;
  R(2)=0x8c0b6164u;
  R(5)=0x9u;
  R(6)=0x1au;
  { c->pr=0x8c0b5a80u; R(4)=R(14); f_8c0b6164(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(13)=0x8c0b5e50u;
  R(3)+=0x7fu;
  { ST16(R(15),R(3)); goto L8c0b5a96; }
L8c0b5a8a:;
  R(5)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c0b5a90u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=0xffffffffu;
  ST16(R(15),R(3));
L8c0b5a96:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(10))==0;
  if(c->t) goto L8c0b5a8a;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(int32_t)R(3)>0;
  R(13)=R(0);
  if(c->t) goto L8c0b5b14;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0b5abe;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0b5ac4;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0b5aca;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0b5b00;
  {  goto L8c0b5b06; }
L8c0b5abe:;
  R(2)=0x4c4u;
  {  goto L8c0b5acc; }
L8c0b5ac4:;
  R(0)=0x4ecu;
  {  goto L8c0b5b02; }
L8c0b5aca:;
  R(2)=0x500u;
L8c0b5acc:;
  R(3)=0x8c129ae4u;
  { ST32(R(3),R(2)); goto L8c0b5b06; }
L8c0b5b00:;
  R(0)=0x44cu;
L8c0b5b02:;
  R(1)=0x8c129ae4u;
  ST32(R(1),R(0));
L8c0b5b06:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x4u;
  { c->pr=0x8c0b5b10u; R(4)=R(14); f_8c0686b8(c); }
  R(2)=0x0u;
  ST16(R(15),R(2));
L8c0b5b14:;
  R(4)=R(14);
  R(4)+=0x3u;
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1f)==0;
  { uint32_t k=c->t; R(5)=0x18u; if(k) goto L8c0b5b28; }
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)|=0x20u;
  ST8(R(4),R(0));
L8c0b5b28:;
  R(2)=0x8c0b6078u;
  { c->pr=0x8c0b5b2eu; R(4)=R(14); f_8c0b6078(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0b5b38;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
L8c0b5b38:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0b5b4c;
  R(0)=0x20u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0b5b4c;
  R(2)=0x1u;
  ST16(R(15),R(2));
L8c0b5b4c:;
  R(2)=0xffu;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0b5b94;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0b5b6a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0b5b72;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0b5b78;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0b5b80;
  {  goto L8c0b5b86; }
L8c0b5b6a:;
  R(3)=0x8c129ae4u;
  R(1)=0x4bau;
  { ST32(R(3),R(1)); goto L8c0b5b86; }
L8c0b5b72:;
  R(3)=0x4e2u;
  {  goto L8c0b5b82; }
L8c0b5b78:;
  R(1)=0x8c129ae4u;
  R(3)=0x4f6u;
  { ST32(R(1),R(3)); goto L8c0b5b86; }
L8c0b5b80:;
  R(3)=0x44cu;
L8c0b5b82:;
  R(0)=0x8c129ae4u;
  ST32(R(0),R(3));
L8c0b5b86:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x4u;
  { c->pr=0x8c0b5b90u; R(4)=R(14); f_8c0686b8(c); }
  R(3)=0xffu;
  ST16(R(15),R(3));
L8c0b5b94:;
  R(3)=0x8c0b6a14u;
  R(5)=R(14);
  { c->pr=0x8c0b5b9cu; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0b6a14(c); }
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b5bcc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=R(5);
  R(1)=R(6);
  R(5)=R(15);
  R(3)=0x8c067940u;
  R(1)+=0x1u;
  ST32(R(15),R(4));
  R(5)+=0x4u;
  { c->pr=0x8c0b5beau; R(0)=0x5u; f_8c067940(c); }
  R(14)=R(0);
  R(14)+=0x1u;
  c->t=R(14)>>31;R(14)<<=1;
  R(3)=0x8c0685b4u;
  R(4)-=R(14);
  R(6)=R(14);
  R(11)=R(4);
  R(5)-=R(14);
  R(11)+=0x8u;
  R(12)=R(5);
  R(5)=R(11);
  R(12)+=0x8u;
  { c->pr=0x8c0b5c06u; R(4)=R(12); f_8c0685b4(c); }
  R(2)=0x8c0b373cu;
  R(5)=R(14);
  R(6)=0x2u;
  { c->pr=0x8c0b5c10u; R(4)=R(12); f_8c0b373c(c); }
  R(3)=0x8c0b6900u;
  R(5)=R(12);
  R(6)=R(14);
  { c->pr=0x8c0b5c1au; R(4)=R(11); f_8c0b6900(c); }
  R(2)=0x8c0b5e50u;
  R(5)=R(14);
  { c->pr=0x8c0b5c22u; R(4)=R(11); f_8c0b5e50(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0b5c52;
  R(4)=LD32(R(15));
  R(7)=0x0u;
  R(12)=0x100u;
  R(5)=R(7);
  R(14)=0x1u;
  R(6)=0x7u;
  R(4)+=0x7u;
L8c0b5c34:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  R(3)+=R(13);
  R(5)+=R(3);
  ST8(R(4),R(5));
  R(5)=R(5)&0xFFFF;
  c->t=(int32_t)R(5)>=(int32_t)R(12);
  if(!c->t) goto L8c0b5c52;
  R(6)+=0xffffffffu;
  R(13)=R(7);
  R(3)=R(6)&0xFFFF;
  R(5)=R(14);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c0b5c34; }
L8c0b5c52:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b5c78(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  R(0)=R(6);
  R(12)=0x8c0686b8u;
  R(14)=R(15);
  ST32(R(15)+4,R(5));
  R(14)+=0x2cu;
  R(10)=R(4);
  R(5)=0x0u;
  ST16(R(15)+8,R(0));
  R(6)=0x4u;
  ST32(R(15),R(7));
  { c->pr=0x8c0b5ca2u; R(4)=R(14); f_8c0686b8(c); }
  R(5)=LD32(R(15));
  R(4)=R(14);
  R(8)=0x8c0685b4u;
  R(4)+=0x4u;
  R(6)=0x8u;
  { c->pr=0x8c0b5cb0u; ST32(R(15)+12,R(4)); f_8c0685b4(c); }
  R(11)=R(15);
  R(5)=0x0u;
  R(6)=0x4u;
  R(11)+=0x20u;
  { uint32_t tg=R(12); c->pr=0x8c0b5cbcu; R(4)=R(11); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(4)=R(11);
  R(6)=0x8u;
  { uint32_t tg=R(8); c->pr=0x8c0b5cc6u; R(4)+=0x4u; sh4_call(c,tg); }
  R(13)=R(15);
  R(5)=0x0u;
  R(6)=0x10u;
  R(13)+=0x10u;
  { uint32_t tg=R(12); c->pr=0x8c0b5cd2u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=R(13);
  R(12)=0x8c0b5e50u;
  R(3)+=0xbu;
  ST32(R(15),R(3));
  { R(9)=0x42u; goto L8c0b5d12; }
L8c0b5cde:;
  R(5)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c0b5ce4u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c0b38b8u;
  R(5)=R(14);
  R(7)=0xcu;
  R(6)=R(11);
  { c->pr=0x8c0b5cf0u; R(4)=0x0u; f_8c0b38b8(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0b5d00;
  R(3)=LD32(R(15));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(2)+=0x1u;
  ST8(R(3),R(2));
  {  goto L8c0b5d0a; }
L8c0b5d00:;
  R(2)=0x8c0b6900u;
  R(5)=R(11);
  R(6)=0xcu;
  { c->pr=0x8c0b5d0au; R(4)=R(14); f_8c0b6900(c); }
L8c0b5d0a:;
  R(5)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c0b5d10u; R(4)=R(14); sh4_call(c,tg); }
  R(9)+=0xffffffffu;
L8c0b5d12:;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c0b5cde;
  R(9)=0x8c0b6b18u;
  { R(11)=0x2u; goto L8c0b5d3c; }
L8c0b5d34:;
  R(5)=0x10u;
  { uint32_t tg=R(9); c->pr=0x8c0b5d3au; R(4)=R(13); sh4_call(c,tg); }
  R(11)+=0xffffffffu;
L8c0b5d3c:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0b5d34;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5d8a;
  R(3)=LD32(R(15)+12);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+6);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+7);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+9);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+10);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5d8a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b5d90;
L8c0b5d8a:;
  R(0)=(int32_t)(int8_t)LD8(R(13)+12);
  R(0)|=0x20u;
  ST8(R(13)+12,R(0));
L8c0b5d90:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=(int32_t)(int16_t)LD16(R(10));
  R(0)-=R(3);
  ST16(R(10),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5dd0;
  R(0)=(int32_t)(int8_t)LD8(R(13)+5);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5dd0;
  R(0)=(int32_t)(int8_t)LD8(R(13)+6);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5dd0;
  R(0)=(int32_t)(int8_t)LD8(R(13)+7);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5dd0;
  R(0)=(int32_t)(int8_t)LD8(R(13)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5dd0;
  R(0)=(int32_t)(int8_t)LD8(R(13)+9);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5dd0;
  R(0)=(int32_t)(int8_t)LD8(R(13)+10);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b5dd0;
  R(3)=LD32(R(15));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0b5dd0;
  R(0)=(int32_t)(int8_t)LD8(R(13)+12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b5dec;
L8c0b5dd0:;
  R(11)=0x80u;
  R(14)=R(13);
  { R(14)+=0x4u; goto L8c0b5de4; }
L8c0b5dd8:;
  R(5)=0x9u;
  { uint32_t tg=R(12); c->pr=0x8c0b5ddeu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=(int32_t)(int16_t)LD16(R(10));
  R(2)+=0xffffffffu;
  ST16(R(10),R(2));
L8c0b5de4:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(11))==0;
  if(c->t) goto L8c0b5dd8;
L8c0b5dec:;
  R(5)=R(13);
  R(5)+=0x4u;
  R(6)=0x9u;
  { uint32_t tg=R(8); c->pr=0x8c0b5df6u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b5e0c(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(4)=R(15);
  R(4)+=0x4u;
  R(5)=0x7ff00000u;
  R(2)=R(15);
  R(2)+=0x4u;
  fp_st(c,5,R(15));
  fp_st(c,4,R(2));
  R(3)=LD32(R(4));
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(c->t) goto L8c0b5e2a;
  R(0)=0x0u;
  { R(15)+=0x8u; return; }
L8c0b5e2a:;
  R(2)=LD32(R(4));
  R(3)=0xfffffu;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0b5e3a;
  R(4)+=0xfffffffcu;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b5e40;
L8c0b5e3a:;
  R(0)=0x1u;
  { R(15)+=0x8u; return; }
L8c0b5e40:;
  R(0)=0x2u;
  { R(15)+=0x8u; return; }
}
void f_8c0b5e50(SH4Ctx *c) {
  R(6)=R(5);
  R(6)+=0xffffffffu;
  R(5)=R(6);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x80u;
  R(5)+=R(4);
  c->t=R(5)>=R(4);
  R(7)=0x0u;
  { uint32_t k=!c->t; R(6)=R(5); if(k) goto L8c0b5e84; }
L8c0b5e64:;
  R(1)=(int32_t)(int8_t)LD8(R(5));
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(1)=R(1)&0xFF;
  c->t=R(3)>>31;R(3)<<=1;
  c->t=(R(7)&R(7))==0;
  R(1)&=R(14);
  { uint32_t k=c->t; ST8(R(5),R(3)); if(k) goto L8c0b5e7a; }
  R(0)=(int32_t)(int8_t)LD8(R(6));
  R(0)|=0x1u;
  ST8(R(6),R(0));
L8c0b5e7a:;
  R(5)+=0xffffffffu;
  R(7)=R(1);
  c->t=R(5)>=R(4);
  { uint32_t k=c->t; R(6)+=0xffffffffu; if(k) goto L8c0b5e64; }
L8c0b5e84:;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c0b5e8e;
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0b5e8e:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b5e98(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=R(4);
  R(14)=R(15);
  ST32(R(15),R(5));
  R(14)+=0x8u;
  ST32(R(15)+4,R(7));
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(6)+=R(3);
  R(3)=0x8c0b6948u;
  ST16(R(13),R(6));
  R(6)=R(14);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0b5ebau; R(4)=LD32(R(15)); f_8c0b6948(c); }
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0b5eca;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(2)+=0x1u;
  { ST16(R(13),R(2)); goto L8c0b5ed2; }
L8c0b5eca:;
  R(2)=0x8c0b5e50u;
  R(5)=0x10u;
  { c->pr=0x8c0b5ed2u; R(4)=R(14); f_8c0b5e50(c); }
L8c0b5ed2:;
  R(3)=0x8c0b6164u;
  R(5)=0x10u;
  R(6)=0x42u;
  { c->pr=0x8c0b5edcu; R(4)=R(14); f_8c0b6164(c); }
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  R(5)=R(14);
  R(3)=0x8c0685b4u;
  R(6)=0x9u;
  R(0)&=0xe0u;
  ST8(R(14)+8,R(0));
  { c->pr=0x8c0b5eecu; R(4)=LD32(R(15)); f_8c0685b4(c); }
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b5f08(SH4Ctx *c) {
  R(0)=R(4);
  R(0)+=0x4u;
  R(7)=0x18u;
  R(6)=R(4);
L8c0b5f10:;
  R(2)=LD32(R(5));
  R(3)=0u-R(7);
  R(2)=sh4_shld(R(2),R(3));
  ST8(R(6),R(2));
  R(6)+=0x1u;
  c->t=R(6)>=R(0);
  { uint32_t k=!c->t; R(7)+=0xfffffff8u; if(k) goto L8c0b5f10; }
  {  return; }
}
void f_8c0b5f24(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(13)=0x0u;
  c->t=(int32_t)R(4)>=0;
  ST32(R(15)+8,R(5));
  ST32(R(15)+12,R(6));
  { uint32_t k=!c->t; R(8)=0x1u; if(k) goto L8c0b5f46; }
  { R(12)=R(13); goto L8c0b5f4a; }
L8c0b5f46:;
  R(4)=0u-R(4);
  R(12)=R(8);
L8c0b5f4a:;
  R(3)=0x8c067940u;
  R(1)=R(4);
  R(5)=0x1bu;
  { c->pr=0x8c0b5f54u; R(0)=R(5); f_8c067940(c); }
  R(2)=0x8c067a9cu;
  R(1)=R(4);
  R(10)=R(0);
  { c->pr=0x8c0b5f5eu; R(0)=R(5); f_8c067a9c(c); }
  R(11)=R(0);
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  R(14)=R(15);
  { uint32_t k=!c->t; R(14)+=0x1cu; if(k) goto L8c0b5f8a; }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0b5f8a;
  R(3)=R(5);
  R(2)=0x8c0bdae0u;
  R(3)-=R(11);
  R(5)=0x8c0bda90u;
  R(11)=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(6)=0x8u;
  ST16(R(15),R(3));
  R(3)=0x8c0685b4u;
  { c->pr=0x8c0b5f84u; R(4)=R(14); f_8c0685b4(c); }
  R(0)=R(13);
  { ST8(R(14)+8,R(0)); goto L8c0b5f9c; }
L8c0b5f8a:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x9u;
  { c->pr=0x8c0b5f94u; R(4)=R(14); f_8c0686b8(c); }
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)|=0x80u;
  ST8(R(14),R(0));
  ST16(R(15),R(13));
L8c0b5f9c:;
  R(9)=R(13);
  R(13)=R(12);
  R(12)<<=2;
  R(2)=0x8c0bda50u;
  R(13)<<=2;
  R(3)=0x8c0bdad0u;
  R(12)<<=2;
  R(1)=R(14);
  R(13)<<=2;
  ST32(R(15)+4,R(1));
  R(12)<<=2;
  R(13)+=R(3);
  R(12)+=R(2);
L8c0b5fb6:;
  R(3)=R(10);
  c->t=(R(3)&R(8))==0;
  if(c->t) goto L8c0b5fe2;
  R(3)=0x8c0b5e98u;
  R(7)=R(12);
  R(6)=(int32_t)(int16_t)LD16(R(13));
  R(5)=R(14);
  { c->pr=0x8c0b5fc8u; R(4)=R(15); f_8c0b5e98(c); }
  R(2)=0x8c0b6078u;
  R(5)=0x40u;
  { c->pr=0x8c0b5fd0u; R(4)=R(14); f_8c0b6078(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b5fe2;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(3)=LD32(R(15)+4);
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)|=0x80u;
  ST8(R(3),R(0));
L8c0b5fe2:;
  R(2)=0x8u;
  R(9)+=0x1u;
  c->t=R(10)&1;R(10)=(uint32_t)((int32_t)R(10)>>1);
  c->t=(int32_t)R(9)>=(int32_t)R(2);
  R(13)+=0x2u;
  { uint32_t k=!c->t; R(12)+=0x8u; if(k) goto L8c0b5fb6; }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0b6026;
  R(3)=0x8c0b6a80u;
  R(5)=LD32(R(15)+8);
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0b5ffeu; R(4)=R(11); f_8c0b6a80(c); }
  R(6)=LD32(R(15)+8);
  R(5)=R(14);
  R(3)=0x8c0b5e98u;
  R(6)=(int32_t)(int16_t)LD16(R(6));
  R(7)=LD32(R(15)+12);
  { c->pr=0x8c0b600cu; R(4)=R(15); f_8c0b5e98(c); }
  R(2)=0x8c0b6078u;
  R(5)=0x40u;
  { c->pr=0x8c0b6014u; R(4)=R(14); f_8c0b6078(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0b6026;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(3)=LD32(R(15)+4);
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)|=0x80u;
  ST8(R(3),R(0));
L8c0b6026:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(5)=R(14);
  R(3)=LD32(R(15)+8);
  R(6)=0x8u;
  ST16(R(3),R(2));
  R(3)=0x8c0685b4u;
  { c->pr=0x8c0b6036u; R(4)=LD32(R(15)+12); f_8c0685b4(c); }
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
void f_8c0b6078(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c067940u;
  R(1)=R(5);
  R(6)=0x8u;
  R(14)=0x0u;
  { c->pr=0x8c0b608cu; R(0)=R(6); f_8c067940(c); }
  R(13)=R(0);
  R(0)=R(5);
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(13)+=R(4); if(k) goto L8c0b609a; }
  { R(0)&=0x7u; goto L8c0b60a4; }
L8c0b609a:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x7u;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c0b60a4:;
  R(7)=0x80u;
  R(0)=0u-R(0);
  R(3)=0x8c067940u;
  R(7)=sh4_shad(R(7),R(0));
  R(7)=R(7)&0xFF;
  ST32(R(15),R(7));
  c->t=R(7)&1;R(7)=(uint32_t)((int32_t)R(7)>>1);
  R(0)=R(7)&0xFF;
  R(7)=R(5);
  ST32(R(15)+8,R(0));
  R(7)+=0xffffffffu;
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  R(1)=R(7);
  ST8(R(15)+4,R(0));
  { uint32_t tg=R(3); c->pr=0x8c0b60c4u; R(0)=R(6); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=R(7);
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(5)+=R(4); if(k) goto L8c0b60d2; }
  { R(0)&=0x7u; goto L8c0b60dc; }
L8c0b60d2:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x7u;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c0b60dc:;
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(0)=0u-R(0);
  R(2)=LD32(R(15));
  R(6)=0x80u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  R(6)=sh4_shad(R(6),R(0));
  { uint32_t k=c->t; R(7)=0x1u; if(k) goto L8c0b6114; }
  R(1)=(int32_t)(int8_t)LD8(R(13));
  R(1)=R(1)&0xFF;
  ST32(R(15),R(1));
  R(3)=LD32(R(15)+8);
  c->t=(R(1)&R(3))==0;
  if(!c->t) goto L8c0b6104;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(1)=LD32(R(15));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(1))==0;
  if(c->t) goto L8c0b6108;
L8c0b6104:;
  { R(14)=R(7); goto L8c0b6114; }
L8c0b6108:;
  R(2)=(int32_t)(int8_t)LD8(R(5));
  R(3)=R(6)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0b6114;
  R(14)=R(7);
L8c0b6114:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0b6150;
  {  goto L8c0b6132; }
L8c0b611e:;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(2)=~R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(3)&=R(2);
  R(2)=R(6)&0xFF;
  ST8(R(5),R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0b6132;
  R(6)=R(7);
  R(5)+=0xffffffffu;
L8c0b6132:;
  R(2)=(int32_t)(int8_t)LD8(R(5));
  R(3)=R(6)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0b6140;
  c->t=R(5)>=R(4);
  if(c->t) goto L8c0b611e;
L8c0b6140:;
  c->t=R(5)>=R(4);
  if(!c->t) goto L8c0b614c;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(3)|=R(6);
  { ST8(R(5),R(3)); goto L8c0b6150; }
L8c0b614c:;
  { R(0)=0x1u; goto L8c0b6152; }
L8c0b6150:;
  R(0)=0x0u;
L8c0b6152:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b6164(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c067940u;
  { c->pr=0x8c0b6172u; R(1)=R(6); f_8c067940(c); }
  R(14)=R(0);
  R(0)=R(6);
  c->t=(int32_t)R(0)>=0;
  R(14)+=R(4);
  { uint32_t k=!c->t; R(7)=R(14); if(k) goto L8c0b6182; }
  { R(0)&=0x7u; goto L8c0b618c; }
L8c0b6182:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x7u;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c0b618c:;
  R(13)=0x80u;
  R(0)=0u-R(0);
  R(3)=(int32_t)(int8_t)LD8(R(7));
  R(13)=sh4_shad(R(13),R(0));
  R(2)=R(13)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(2))==0;
  if(!c->t) goto L8c0b61d8;
  R(6)=R(13);
  { R(0)=0x0u; goto L8c0b61a8; }
L8c0b61a2:;
  R(0)|=R(6);
  R(6)=R(6)&0xFF;
  c->t=R(6)&1;R(6)>>=1;
L8c0b61a8:;
  R(3)=R(6)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0b61a2;
  R(1)=(int32_t)(int8_t)LD8(R(7));
  R(0)=R(0)&0xFF;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(0))==0;
  if(c->t) goto L8c0b61c0;
  R(2)=(int32_t)(int8_t)LD8(R(7));
  R(2)|=R(13);
  { ST8(R(7),R(2)); goto L8c0b61d8; }
L8c0b61c0:;
  { R(4)+=R(5); goto L8c0b61d2; }
L8c0b61c4:;
  R(3)=(int32_t)(int8_t)LD8(R(7));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b61d2;
  R(1)=(int32_t)(int8_t)LD8(R(14));
  R(1)|=R(13);
  { ST8(R(14),R(1)); goto L8c0b61d8; }
L8c0b61d2:;
  R(7)+=0x1u;
  c->t=R(7)>=R(4);
  if(!c->t) goto L8c0b61c4;
L8c0b61d8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b6200(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff90u;
  R(0)=0x2b8u;
  R(12)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(14)=R(5); if(k) goto L8c0b622c; }
  R(3)=0x8c0b4060u;
  { c->pr=0x8c0b6226u; R(4)=R(12); f_8c0b4060(c); }
  R(0)=0x2b8u;
  R(2)=0x1u;
  ST8(R(12)+R(0),R(2));
L8c0b622c:;
  R(0)=0x2b0u;
  R(5)=0x29cu;
  R(6)=0x264u;
  fp_ld(c,4,R(0)+R(12));
  R(0)+=0xffffffe4u;
  R(3)=0x8c078100u;
  R(6)+=R(12);
  R(5)+=R(12);
  { c->pr=0x8c0b6240u; R(4)=LD32(R(12)+R(0)); f_8c078100(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b624a;
  {  goto L8c0b68c6; }
L8c0b624a:;
  R(0)=0x27cu;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x280u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x68u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x284u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x6cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2b8u;
  R(3)=(int32_t)(int8_t)LD8(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b627c;
  R(3)=0x8c0b4060u;
  { c->pr=0x8c0b6276u; R(4)=R(12); f_8c0b4060(c); }
  R(0)=0x2b8u;
  R(2)=0x0u;
  ST8(R(12)+R(0),R(2));
L8c0b627c:;
  R(0)=0x2b0u;
  R(8)=0x3u;
  R(6)=0x270u;
  R(5)=0x29cu;
  R(3)=0x8c078100u;
  R(6)+=R(12);
  fp_ld(c,4,R(0)+R(12));
  R(0)+=0xffffffe4u;
  R(10)=0x8c014eaau;
  R(5)+=R(12);
  R(9)=0x8c014f10u;
  R(13)=0x8c05e612u;
  R(11)=0x8c05e55cu;
  { c->pr=0x8c0b629au; R(4)=LD32(R(12)+R(0)); f_8c078100(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b62a4;
  {  goto L8c0b64e2; }
L8c0b62a4:;
  R(0)=0x294u;
  R(4)=R(15);
  R(5)=0x264u;
  R(6)=LD32(R(12)+R(0));
  R(5)+=R(12);
  { uint32_t tg=R(13); c->pr=0x8c0b62b2u; R(4)+=0x58u; sh4_call(c,tg); }
  R(5)=0x29cu;
  R(4)=R(15);
  R(5)+=R(12);
  { uint32_t tg=R(11); c->pr=0x8c0b62bcu; R(4)+=0x58u; sh4_call(c,tg); }
  R(0)=0x29cu;
  fp_mov(c,4,0);
  fp_ld(c,6,R(0)+R(12));
  R(0)+=0x4u;
  fp_ld(c,7,R(0)+R(12));
  R(0)+=0x4u;
  fp_mov(c,0,6);
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_ld(c,5,R(0)+R(12));
  R(0)=0x8c0b632cu;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_ld(c,5,R(0));
  fp_arith(c,3,4,3);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0b6340;
  { fp_mov(c,4,5); goto L8c0b634a; }
L8c0b6340:;
  R(0)=0x8c0b6470u;
  fp_ld(c,5,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0b634a;
  fp_mov(c,4,5);
L8c0b634a:;
  R(0)=0x294u;
  R(6)=R(15);
  fp_mov(c,0,4);
  R(4)=R(15);
  R(2)=LD32(R(12)+R(0));
  R(0)+=0x8u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x4cu;
  fp_ld(c,3,R(2));
  R(6)+=0x4cu;
  R(5)=0x264u;
  fp_fmac(c,3,2);
  R(5)+=R(12);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x294u;
  R(3)=LD32(R(12)+R(0));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x2a0u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x50u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x294u;
  R(3)=LD32(R(12)+R(0));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x2a4u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x54u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(13); c->pr=0x8c0b638eu; R(4)+=0x34u; sh4_call(c,tg); }
  R(5)=LD32(R(12)+20);
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x34u;
  { uint32_t tg=R(9); c->pr=0x8c0b639au; R(4)+=0x34u; sh4_call(c,tg); }
  R(0)=0x4u;
  R(4)=LD32(R(12)+20);
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
  R(0)=0x40u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x14u;
  R(4)=LD32(R(12)+20);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x44u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x18u;
  R(4)=LD32(R(12)+20);
  R(5)=R(15);
  R(5)+=0x40u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x48u;
  R(4)=R(15);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x22cu;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x2b0u;
  fp_ld(c,2,R(0)+R(12));
  fp_arith(c,2,2,3);
  fp_mov(c,12,2);
  { uint32_t tg=R(11); c->pr=0x8c0b6414u; R(4)+=0x34u; sh4_call(c,tg); }
  fp_arith(c,1,12,0);
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,12);
  fp_arith(c,2,2,3);
  fp_mov(c,4,12);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x298u;
  R(3)=LD32(R(12)+R(0));
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0b6480;
  { R(14)=0x7u; goto L8c0b6482; }
L8c0b6480:;
  R(14)=0x8u;
L8c0b6482:;
  R(5)=LD32(R(12)+20);
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x4cu;
  { uint32_t tg=R(10); c->pr=0x8c0b648eu; R(4)+=0x4cu; sh4_call(c,tg); }
  R(5)=LD32(R(12)+20);
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x64u;
  { uint32_t tg=R(9); c->pr=0x8c0b649au; R(4)+=0x64u; sh4_call(c,tg); }
  R(6)=0x264u;
  R(4)=R(15);
  R(5)=LD32(R(12)+20);
  R(6)+=R(12);
  { uint32_t tg=R(10); c->pr=0x8c0b64a6u; R(4)+=0x28u; sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x28u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x20u;
  R(2)=R(15);
  R(2)+=0x68u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(0)=0x538u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(12)+28);
  c->fr[4]=0x3F800000u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12)+R(0));
  R(0)=0x258u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(12)+R(0));
  R(5)=R(15);
  R(0)=0x534u;
  R(4)=R(15);
  R(6)=R(15);
  fp_ld(c,5,R(2));
  R(7)=LD32(R(12)+R(0));
  R(4)+=0x50u;
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { fp_unary(c,0,4); goto L8c0b666a; }
L8c0b64e2:;
  R(3)=R(15);
  R(3)+=0x40u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=0x2b0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x8u;
  R(7)=0x29cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(0)+R(12));
  R(0)+=0xffffffe4u;
  R(5)=R(15);
  R(4)=0x270u;
  R(3)=0x8c07820au;
  R(7)+=R(12);
  R(6)=LD32(R(12)+R(0));
  R(5)+=0x70u;
  { c->pr=0x8c0b650cu; R(4)+=R(12); f_8c07820a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0xcu; if(k) goto L8c0b6518; }
  {  goto L8c0b66a0; }
L8c0b6518:;
  R(0)=0x298u;
  R(3)=LD32(R(12)+R(0));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0b6560;
  { R(11)=0x7u; goto L8c0b6562; }
L8c0b6560:;
  R(11)=0x8u;
L8c0b6562:;
  R(5)=LD32(R(12)+20);
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x40u;
  { uint32_t tg=R(10); c->pr=0x8c0b656eu; R(4)+=0x34u; sh4_call(c,tg); }
  R(5)=R(15);
  R(6)=R(15);
  R(4)=R(15);
  R(5)+=0x4cu;
  R(6)+=0x40u;
  { uint32_t tg=R(13); c->pr=0x8c0b657cu; R(4)+=0x58u; sh4_call(c,tg); }
  R(0)=0x2b0u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2b0u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2b0u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x10u;
  R(4)=LD32(R(12)+20);
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
  R(0)=0x1cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x14u;
  R(4)=LD32(R(12)+20);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x18u;
  R(4)=LD32(R(12)+20);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  R(0)=0x8u;
  c->fr[4]=0x00000000u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x24u;
  R(6)=R(15);
  R(4)=R(15);
  fp_fmac(c,3,2);
  R(6)+=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,4,R(0)+R(15));
  R(5)=LD32(R(12)+20);
  { uint32_t tg=R(9); c->pr=0x8c0b6624u; R(4)+=0x64u; sh4_call(c,tg); }
  R(6)=0x264u;
  R(4)=R(15);
  R(5)=LD32(R(12)+20);
  R(6)+=R(12);
  { uint32_t tg=R(10); c->pr=0x8c0b6630u; R(4)+=0x10u; sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x10u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x20u;
  R(2)=R(15);
  R(2)+=0x68u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(0)=0x538u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(12)+28);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12)+R(0));
  R(0)=0x258u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(12)+R(0));
  R(5)=R(15);
  R(0)=0x534u;
  R(4)=R(15);
  fp_ld(c,5,R(2));
  R(6)=R(15);
  R(7)=LD32(R(12)+R(0));
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(15));
  R(4)+=0x44u;
  R(6)+=0x38u;
  R(5)+=0x50u;
L8c0b666a:;
  R(3)=0x8c0b2a00u;
  { c->pr=0x8c0b6670u;  f_8c0b2a00(c); }
  { R(15)+=0x1cu; goto L8c0b68c6; }
L8c0b66a0:;
  R(0)=0x2b0u;
  R(5)=0x29cu;
  R(6)=0x264u;
  fp_ld(c,4,R(0)+R(12));
  R(0)+=0xffffffe4u;
  R(3)=0x8c078100u;
  R(6)+=R(12);
  R(5)+=R(12);
  { c->pr=0x8c0b66b4u; R(4)=LD32(R(12)+R(0)); f_8c078100(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b66be;
  {  goto L8c0b68c6; }
L8c0b66be:;
  R(0)=0x294u;
  R(4)=R(15);
  R(5)=0x264u;
  R(6)=LD32(R(12)+R(0));
  R(5)+=R(12);
  { uint32_t tg=R(13); c->pr=0x8c0b66ccu; R(4)+=0x4u; sh4_call(c,tg); }
  R(5)=0x29cu;
  R(4)=R(15);
  R(5)+=R(12);
  { uint32_t tg=R(11); c->pr=0x8c0b66d6u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x29cu;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0)+R(12));
  R(0)+=0x4u;
  fp_ld(c,6,R(0)+R(12));
  R(0)+=0x4u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,7,R(0)+R(12));
  R(0)+=0xfffffff0u;
  R(3)=LD32(R(12)+R(0));
  R(0)=0x34u;
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_arith(c,3,4,3);
  fp_ld(c,3,R(3));
  fp_fmac(c,3,4);
  fp_mov(c,0,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x294u;
  R(3)=LD32(R(12)+R(0));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x2a0u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x38u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x294u;
  R(3)=LD32(R(12)+R(0));
  R(0)=0x8u;
  R(5)=0x264u;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(3));
  R(4)=R(15);
  R(0)=0x2a4u;
  R(5)+=R(12);
  R(6)+=0x34u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(13); c->pr=0x8c0b6734u; R(4)+=0x28u; sh4_call(c,tg); }
  R(5)=LD32(R(12)+20);
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x28u;
  { uint32_t tg=R(9); c->pr=0x8c0b6740u; R(4)+=0x28u; sh4_call(c,tg); }
  R(0)=0x28u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x28u;
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
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2b0u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x28u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2b0u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x2cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,0,R(0)+R(15));
  R(4)=R(15);
  R(0)=0x2b0u;
  R(6)+=0x34u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x30u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(5)=LD32(R(12)+20);
  { uint32_t tg=R(10); c->pr=0x8c0b67deu; R(4)+=0x34u; sh4_call(c,tg); }
  R(0)=0x4u;
  R(4)=LD32(R(12)+20);
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
  R(0)=0x1cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x14u;
  R(4)=LD32(R(12)+20);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x18u;
  R(4)=LD32(R(12)+20);
  R(6)=R(15);
  R(6)+=0x64u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x24u;
  R(4)=R(15);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(5)=LD32(R(12)+20);
  { uint32_t tg=R(9); c->pr=0x8c0b684eu; R(4)+=0x64u; sh4_call(c,tg); }
  R(6)=0x264u;
  R(4)=R(15);
  R(5)=LD32(R(12)+20);
  R(6)+=R(12);
  { R(4)+=0x10u; goto L8c0b6880; }
L8c0b6880:;
  { uint32_t tg=R(10); c->pr=0x8c0b6884u;  sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x10u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x20u;
  R(2)=R(15);
  R(2)+=0x68u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(0)=0x538u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8u;
  R(2)=LD32(R(12)+28);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(12)+R(0));
  R(0)=0x258u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12)+R(0));
  R(5)=R(15);
  R(0)=0x534u;
  R(4)=R(15);
  R(2)=0x8c0b2a00u;
  R(6)=R(15);
  R(7)=LD32(R(12)+R(0));
  R(0)=0x8c0b68e8u;
  fp_ld(c,5,R(1));
  R(6)+=0x38u;
  R(5)+=0x50u;
  R(4)+=0x44u;
  { c->pr=0x8c0b68c4u; fp_ld(c,4,R(0)); f_8c0b2a00(c); }
  R(15)+=0x1cu;
L8c0b68c6:;
  R(15)+=0x70u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b6900(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  R(14)+=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=R(14);
  R(6)+=R(5);
  R(5)=R(14);
  R(13)=0x100u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)+=R(4);
  c->t=R(5)>=R(4);
  { uint32_t k=!c->t; R(7)=0x0u; if(k) goto L8c0b693a; }
L8c0b691a:;
  R(3)=(int32_t)(int8_t)LD8(R(6));
  R(14)=(int32_t)(int8_t)LD8(R(5));
  R(3)=R(3)&0xFF;
  R(2)=0x8c067940u;
  R(14)=R(14)&0xFF;
  R(14)+=R(3);
  R(14)+=R(7);
  R(1)=R(14);
  ST8(R(5),R(14));
  { c->pr=0x8c0b6930u; R(0)=R(13); f_8c067940(c); }
  R(5)+=0xffffffffu;
  R(7)=R(0);
  c->t=R(5)>=R(4);
  { uint32_t k=c->t; R(6)+=0xffffffffu; if(k) goto L8c0b691a; }
L8c0b693a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b6948(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(10)=R(6);
  R(3)=0x8c0686b8u;
  R(9)=R(5);
  ST32(R(15)+4,R(4));
  R(5)=0x0u;
  R(6)=0x10u;
  { c->pr=0x8c0b696cu; R(4)=R(10); f_8c0686b8(c); }
  R(13)=R(15);
  R(8)=0x7u;
  R(11)=R(8);
  R(13)+=0x8u;
L8c0b6974:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(11);
  R(0)=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(9)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b69e4;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x10u;
  { c->pr=0x8c0b698au; R(4)=R(13); f_8c0686b8(c); }
  R(12)=R(8);
L8c0b698c:;
  R(0)=LD32(R(15)+4);
  R(5)=(uint32_t)(int32_t)(int16_t)R(12);
  R(4)=R(14);
  R(4)+=R(5);
  R(6)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=R(9);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)+=R(13);
  R(6)=R(6)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=R(3)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(6)*(uint32_t)(uint16_t)R(3);
  R(0)=R(0)&0xFF;
  ST16(R(15),R(0));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(6)=c->macl;
  R(3)+=R(6);
  ST16(R(15),R(3));
  R(3)=0x8c0b6c40u;
  { c->pr=0x8c0b69b6u; R(5)=R(15); f_8c0b6c40(c); }
  R(12)+=0xffffffffu;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c0b698c;
  R(0)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0b69d6;
  R(5)=R(14);
  R(2)=0x8c0685b4u;
  R(4)=R(14);
  R(6)=0x9u;
  R(5)+=R(13);
  { c->pr=0x8c0b69d2u; R(4)+=R(10); f_8c0685b4(c); }
  {  goto L8c0b69e4; }
L8c0b69d6:;
  R(5)=R(14);
  R(2)=0x8c0b6900u;
  R(4)=R(14);
  R(6)=0x9u;
  R(5)+=R(13);
  { c->pr=0x8c0b69e4u; R(4)+=R(10); f_8c0b6900(c); }
L8c0b69e4:;
  R(11)+=0xffffffffu;
  R(3)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(3)>=0;
  if(c->t) goto L8c0b6974;
  R(15)+=0x18u;
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
void f_8c0b6a14(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(4);
  ST16(R(15)+4,R(0));
  R(14)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(14)+=0xcu;
  R(3)=0x8c0685b4u;
  R(4)=R(14);
  R(0)&=0x7fu;
  R(4)+=0x1u;
  ST8(R(5),R(0));
  R(6)=0x3u;
  { c->pr=0x8c0b6a34u; ST32(R(15)+8,R(4)); f_8c0685b4(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(2)=0x0u;
  R(4)=R(0);
  R(3)=R(4);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  R(0)=R(4);
  {uint32_t a=R(3),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(3)=r;}
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=(int32_t)R(0)>=0;
  ST8(R(14),R(3));
  R(3)=LD32(R(15)+8);
  if(!c->t) goto L8c0b6a50;
  { R(0)&=0x1u; goto L8c0b6a5a; }
L8c0b6a50:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x1u;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c0b6a5a:;
  R(1)=(int32_t)(int8_t)LD8(R(3));
  R(2)=0x7u;
  R(0)=sh4_shad(R(0),R(2));
  R(5)=R(14);
  R(1)|=R(0);
  ST8(R(3),R(1));
  R(3)=0x8c0b5f08u;
  { c->pr=0x8c0b6a6cu; R(4)=R(15); f_8c0b5f08(c); }
  fp_ld(c,0,R(15));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b6a80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=R(4);
  R(3)+=0x3fu;
  R(2)=0x8c0b3788u;
  R(13)=R(5);
  R(5)=R(15);
  ST32(R(15),R(6));
  ST16(R(13),R(3));
  { c->pr=0x8c0b6a9eu; R(5)+=0x8u; f_8c0b3788(c); }
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x8u;
  { c->pr=0x8c0b6aa8u; R(4)=LD32(R(15)); f_8c0686b8(c); }
  R(11)=0x0u;
  R(14)=R(15);
  R(12)=R(11);
  { R(14)+=0x8u; goto L8c0b6abc; }
L8c0b6ab2:;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(11)+=0x1u;
  R(14)+=0x1u;
  R(3)+=0xfffffff8u;
  ST16(R(13),R(3));
L8c0b6abc:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0b6ab2;
  R(4)=0x80u;
  {  goto L8c0b6ace; }
L8c0b6ac8:;
  R(4)=R(4)&0xFF;
  R(12)+=0x1u;
  c->t=R(4)&1;R(4)>>=1;
L8c0b6ace:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(4)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0b6ac8;
  R(5)=0x8u;
  R(3)=0x8c0b373cu;
  R(5)-=R(11);
  R(6)=R(12);
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0b6ae6u; R(4)=R(14); f_8c0b373c(c); }
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(5)=R(14);
  R(3)=0x8c0685b4u;
  R(2)-=R(12);
  ST16(R(13),R(2));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0b6af6u; R(4)=LD32(R(15)); f_8c0685b4(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b6b18(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(6)=0x0u;
  c->t=(int32_t)R(5)>0;
  R(6)+=R(4);
  R(7)=0x0u;
  R(4)=R(6);
  R(14)=R(7);
  ST32(R(15),R(6));
  { uint32_t k=!c->t; R(13)=0x1u; if(k) goto L8c0b6b56; }
L8c0b6b32:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(12)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  R(12)=R(12)&0xFF;
  c->t=R(3)&1;R(3)>>=1;
  c->t=(R(7)&R(7))==0;
  R(12)&=R(13);
  { uint32_t k=c->t; ST8(R(4),R(3)); if(k) goto L8c0b6b4a; }
  R(0)=(int32_t)(int8_t)LD8(R(6));
  R(0)|=0x80u;
  ST8(R(6),R(0));
L8c0b6b4a:;
  R(14)+=0x1u;
  R(7)=R(12);
  c->t=(int32_t)R(14)>=(int32_t)R(5);
  R(6)+=0x1u;
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0b6b32; }
L8c0b6b56:;
  R(0)=R(7);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b6b64(SH4Ctx *c) {
  R(0)=0x8c2eaf90u;
  ST32(R(0),R(5));
  R(4)+=0x50u;
  fp_ld(c,0,R(4));R(4)+=fp_sz(c);
  fp_ld(c,1,R(4));R(4)+=fp_sz(c);
  fp_ld(c,2,R(4));R(4)+=fp_sz(c);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_ld(c,4,R(4));R(4)+=fp_sz(c);
  fp_ld(c,5,R(4));R(4)+=fp_sz(c);
  fp_ld(c,6,R(4));R(4)+=fp_sz(c);
  fp_ld(c,7,R(4));R(4)+=fp_sz(c);
  fp_ld(c,8,R(4));R(4)+=fp_sz(c);
  fp_ld(c,9,R(4));R(4)+=fp_sz(c);
  fp_ld(c,10,R(4));R(4)+=fp_sz(c);
  fp_ld(c,11,R(4));R(4)+=fp_sz(c);
  fp_ld(c,12,R(4));R(4)+=fp_sz(c);
  fp_ld(c,13,R(4));R(4)+=fp_sz(c);
  fp_ld(c,14,R(4));R(4)+=fp_sz(c);
  fp_ld(c,15,R(4));
  R(0)=LD32(R(4)+4);
  c->fpul=R(0);
  R(0)=LD32(R(4)+8);
  sh4_setfpscr(c,R(0));
  R(4)+=0xffffffa8u;
  R(0)=LD32(R(4)+24);
  c->gbr=R(0);
  R(0)=LD32(R(4)+20);
  c->macl=R(0);
  R(0)=LD32(R(4)+16);
  c->mach=R(0);
  R(1)=LD32(R(4)+8);
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  R(4)+=0xffffffccu;
  R(5)=LD32(R(4)+44);
  R(6)=LD32(R(4)+40);
  R(7)=LD32(R(4)+36);
  R(8)=LD32(R(4)+32);
  R(9)=LD32(R(4)+28);
  R(10)=LD32(R(4)+24);
  R(11)=LD32(R(4)+20);
  R(12)=LD32(R(4)+16);
  R(13)=LD32(R(4)+12);
  R(14)=LD32(R(4)+4);
  R(0)=R(4);
  R(4)=LD32(R(0)+48);
  R(15)=LD32(R(0));
  R(0)=LD32(R(0)+8);
  c->pr=R(0);
  R(0)=0x8c2eaf90u;
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c0b6bd0;
  R(0)=0x1u;
L8c0b6bd0:;
  {  return; }
}
void f_8c0b6bd8(SH4Ctx *c) {
  ST32(R(4),R(15));
  ST32(R(4)+4,R(14));
  R(14)=c->pr;
  ST32(R(4)+8,R(14));
  R(14)=LD32(R(4)+4);
  ST32(R(4)+12,R(13));
  ST32(R(4)+16,R(12));
  ST32(R(4)+20,R(11));
  ST32(R(4)+24,R(10));
  ST32(R(4)+28,R(9));
  ST32(R(4)+32,R(8));
  ST32(R(4)+36,R(7));
  ST32(R(4)+40,R(6));
  ST32(R(4)+44,R(5));
  ST32(R(4)+48,R(4));
  R(4)+=0x30u;
  ST32(R(4)+4,R(3));
  ST32(R(4)+8,R(2));
  ST32(R(4)+12,R(1));
  ST32(R(4)+16,R(0));
  R(0)=c->mach;
  ST32(R(4)+20,R(0));
  R(0)=c->macl;
  ST32(R(4)+24,R(0));
  R(0)=c->gbr;
  ST32(R(4)+28,R(0));
  R(4)+=0x5cu;
  R(0)=c->fpscr;
  ST32(R(4)+8,R(0));
  R(0)=c->fpul;
  ST32(R(4)+4,R(0));
  fp_st(c,15,R(4));
  R(4)-=fp_sz(c);fp_st(c,14,R(4));
  R(4)-=fp_sz(c);fp_st(c,13,R(4));
  R(4)-=fp_sz(c);fp_st(c,12,R(4));
  R(4)-=fp_sz(c);fp_st(c,11,R(4));
  R(4)-=fp_sz(c);fp_st(c,10,R(4));
  R(4)-=fp_sz(c);fp_st(c,9,R(4));
  R(4)-=fp_sz(c);fp_st(c,8,R(4));
  R(4)-=fp_sz(c);fp_st(c,7,R(4));
  R(4)-=fp_sz(c);fp_st(c,6,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  R(4)+=0xffffffe0u;
  R(4)=LD32(R(4));
  { R(0)=0x0u; return; }
}
void f_8c0b6c40(SH4Ctx *c) {
  R(0)=R(4);
  R(0)+=0x2u;
  R(7)=0x8u;
  R(6)=R(4);
L8c0b6c48:;
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(2)=0u-R(7);
  R(3)=R(3)&0xFFFF;
  R(3)=sh4_shld(R(3),R(2));
  ST8(R(6),R(3));
  R(6)+=0x1u;
  c->t=R(6)>=R(0);
  { uint32_t k=!c->t; R(7)+=0xfffffff8u; if(k) goto L8c0b6c48; }
  {  return; }
}
void f_8c0cc540(SH4Ctx *c) {
  R(2)=0x8c0f2da8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  R(1)=(int32_t)(int8_t)LD8(R(3));
  R(5)=0x8c00f400u;
  R(6)=0x41474553u;
  R(4)=0x8c00c000u;
L8c0cc54e:;
  ST32(R(4),R(6));
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0cc54e;
  { c->pr=0x8c0cc55au;  f_8c0cc578(c); }
  { c->pr=0x8c0cc55eu;  f_8c0cc568(c); }
  R(2)=0x8c010d92u;
  { c->pr=0x8c0cc564u;  f_8c010d92(c); }
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0cc570(c); return; } }
}
void f_8c0cc568(SH4Ctx *c) {
  R(2)=0x8c0cc88au;
  R(3)=0x8c0f2c7cu;
  { R(4)=LD32(R(3)); { f_8c0cc88a(c); return; } }
}
void f_8c0cc570(SH4Ctx *c) {
  R(3)=0x8c0cc8e2u;
  R(2)=0x8c0f2c7cu;
  { R(4)=LD32(R(2)); { f_8c0cc8e2(c); return; } }
}
void f_8c0cc578(SH4Ctx *c) {
  R(3)=0x8c0b6c78u;
  R(4)=0x0u;
  R(6)=0x8c0b6c84u;
  { R(5)=LD32(R(3)); goto L8c0cc586; }
L8c0cc582:;
  ST32(R(5),R(4));
  R(5)+=0x4u;
L8c0cc586:;
  R(3)=LD32(R(6));
  c->t=R(5)>=R(3);
  if(!c->t) goto L8c0cc582;
  R(3)=0x8c0b6c68u;
  R(2)=0x8c0b6c60u;
  R(5)=LD32(R(3));
  R(7)=0x8c0b6c74u;
  { R(6)=LD32(R(2)); goto L8c0cc59e; }
L8c0cc598:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  ST8(R(5),R(3));
  R(5)+=0x1u;
L8c0cc59e:;
  R(2)=LD32(R(7));
  c->t=R(5)>=R(2);
  if(!c->t) goto L8c0cc598;
  R(2)=0x8c0f2ca4u;
  R(6)=0x8c0f2cb0u;
  { R(5)=LD32(R(2)); goto L8c0cc5b0; }
L8c0cc5ac:;
  ST8(R(5),R(4));
  R(5)+=0x1u;
L8c0cc5b0:;
  R(2)=LD32(R(6));
  c->t=R(5)>=R(2);
  if(!c->t) goto L8c0cc5ac;
  R(2)=0x8c0f2c94u;
  R(3)=0x8c0f2c8cu;
  R(4)=LD32(R(2));
  R(6)=0x8c0f2ca0u;
  { R(5)=LD32(R(3)); goto L8c0cc5c8; }
L8c0cc5c2:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(2)=(uint32_t)v;}
  ST8(R(4),R(2));
  R(4)+=0x1u;
L8c0cc5c8:;
  R(3)=LD32(R(6));
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c0cc5c2;
  {  return; }
}
void f_8c0cc61c(SH4Ctx *c) {
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(4),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  {  return; }
}
void f_8c0cc634(SH4Ctx *c) {
  R(0)=LD32(R(4));
  R(2)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(1);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  {  return; }
}
void f_8c0cc64a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c00fff0u;
  ST32(R(15),R(4));
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cc65e;
  R(4)=0x8c00fc00u;
  { c->pr=0x8c0cc65eu; R(5)=0x78u; f_8c0cc706(c); }
L8c0cc65e:;
  R(0)=0x8c00fff4u;
  R(3)=0x8c00fff0u;
  R(1)=LD32(R(0));
  R(2)=LD32(R(15));
  R(4)=LD32(R(3));
  ST32(R(2),R(1));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c0cc672(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(4)=R(15);
  { c->pr=0x8c0cc67eu; R(4)+=0x4u; f_8c0cc64a(c); }
  R(5)=R(0);
  { R(4)=0x0u; goto L8c0cc6a2; }
L8c0cc684:;
  R(3)=R(4);
  R(2)=R(5);
  R(3)<<=2;
  R(0)=LD32(R(15));
  R(2)+=0x8u;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(1)=LD32(R(3));
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0cc6a0;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
L8c0cc6a0:;
  R(4)+=0x1u;
L8c0cc6a2:;
  R(2)=LD32(R(5));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0cc684;
  R(0)=0xfffffffdu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cc6b2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(4)=R(15);
  { c->pr=0x8c0cc6c6u; R(4)+=0x4u; f_8c0cc64a(c); }
  R(11)=0x8c068580u;
  R(13)=R(0);
  { R(14)=0x0u; goto L8c0cc6f0; }
L8c0cc6ce:;
  R(12)=R(14);
  R(3)=R(13);
  R(12)<<=2;
  R(3)+=0x8u;
  c->t=R(12)>>31;R(12)<<=1;
  R(12)+=R(3);
  R(12)=LD32(R(12));
  R(6)=0x10u;
  R(5)=R(12);
  R(5)+=0x10u;
  { uint32_t tg=R(11); c->pr=0x8c0cc6e6u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0cc6ee;
  { R(0)=R(14); goto L8c0cc6f8; }
L8c0cc6ee:;
  R(14)+=0x1u;
L8c0cc6f0:;
  R(2)=LD32(R(13));
  c->t=(int32_t)R(14)>=(int32_t)R(2);
  if(!c->t) goto L8c0cc6ce;
  R(0)=0xfffffffeu;
L8c0cc6f8:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cc706(SH4Ctx *c) {
  R(3)=0x8c00fff0u;
  R(2)=0x8c00fff4u;
  ST32(R(3),R(4));
  { ST32(R(2),R(5)); return; }
}
void f_8c0cc710(SH4Ctx *c) {
  {  return; }
}
void f_8c0cc714(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+8,R(4));
  { c->pr=0x8c0cc720u; R(4)=R(15); f_8c0cc61c(c); }
  R(4)=R(15);
  { c->pr=0x8c0cc726u; R(4)+=0x4u; f_8c0cc64a(c); }
  ST32(R(15)+12,R(0));
  { c->pr=0x8c0cc72cu; R(4)=LD32(R(15)+8); f_8c0cc6b2(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0cc758;
  R(5)=LD32(R(15)+12);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(5)+=0x8u;
  R(5)+=R(4);
  R(3)=LD32(R(5)+4);
  R(14)=LD32(R(5));
  R(3)+=0x1u;
  { ST32(R(5)+4,R(3)); goto L8c0cc75a; }
L8c0cc758:;
  R(14)=0x0u;
L8c0cc75a:;
  { c->pr=0x8c0cc75eu; R(4)=R(15); f_8c0cc634(c); }
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cc768(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+8,R(4));
  { c->pr=0x8c0cc772u; R(4)=R(15); f_8c0cc61c(c); }
  R(4)=R(15);
  { c->pr=0x8c0cc778u; R(4)+=0x4u; f_8c0cc64a(c); }
  ST32(R(15)+12,R(0));
  { c->pr=0x8c0cc77eu; R(4)=LD32(R(15)+8); f_8c0cc6b2(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0cc794;
  R(3)=LD32(R(15)+12);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(3)+=0x8u;
  R(4)+=R(3);
  R(2)=LD32(R(4)+4);
  R(2)+=0xffffffffu;
  ST32(R(4)+4,R(2));
L8c0cc794:;
  { c->pr=0x8c0cc798u; R(4)=R(15); f_8c0cc634(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cc7a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(4));
  { c->pr=0x8c0cc7acu; R(4)=R(15); f_8c0cc61c(c); }
  R(4)=R(15);
  { c->pr=0x8c0cc7b2u; R(4)+=0x8u; f_8c0cc64a(c); }
  R(4)=LD32(R(15)+4);
  R(14)=R(0);
  { c->pr=0x8c0cc7bau; R(4)+=0x10u; f_8c0cc6b2(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0cc7e2;
  R(4)=LD32(R(14));
  R(3)=R(14);
  R(2)=LD32(R(15)+4);
  R(3)+=0x8u;
  R(5)=R(4);
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(3)+=R(5);
  ST32(R(3),R(2));
  R(3)=R(14);
  R(3)+=0x8u;
  R(5)+=R(3);
  R(2)=0x0u;
  ST32(R(5)+4,R(2));
  R(3)=LD32(R(14));
  R(3)+=0x1u;
  ST32(R(14),R(3));
L8c0cc7e2:;
  { c->pr=0x8c0cc7e6u; R(4)=R(15); f_8c0cc634(c); }
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cc7f0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(4));
  { c->pr=0x8c0cc7fcu; R(4)=R(15); f_8c0cc61c(c); }
  R(4)=R(15);
  { c->pr=0x8c0cc802u; R(4)+=0x4u; f_8c0cc64a(c); }
  R(14)=R(0);
  { c->pr=0x8c0cc808u; R(4)=LD32(R(15)+8); f_8c0cc672(c); }
  R(5)=R(0);
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c0cc866;
  R(3)=LD32(R(14));
  R(3)+=0xffffffffu;
  ST32(R(14),R(3));
  { R(4)=R(5); goto L8c0cc844; }
L8c0cc818:;
  R(6)=R(4);
  R(6)+=0x1u;
  R(7)=R(14);
  R(6)<<=2;
  R(7)+=0x8u;
  R(5)=R(4);
  R(2)=R(7);
  R(5)<<=2;
  R(3)=R(7);
  R(7)=R(14);
  c->t=R(5)>>31;R(5)<<=1;
  c->t=R(6)>>31;R(6)<<=1;
  R(2)+=R(6);
  R(1)=LD32(R(2));
  R(7)+=0x8u;
  R(3)+=R(5);
  R(6)+=R(7);
  ST32(R(3),R(1));
  R(3)=LD32(R(6)+4);
  R(5)+=R(7);
  R(4)+=0x1u;
  ST32(R(5)+4,R(3));
L8c0cc844:;
  R(2)=LD32(R(14));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0cc818;
  R(6)=R(4);
  R(2)=R(14);
  R(6)<<=2;
  R(3)=R(14);
  R(2)+=0x8u;
  c->t=R(6)>>31;R(6)<<=1;
  R(3)+=0x8u;
  R(2)+=R(6);
  R(6)+=R(3);
  R(5)=0x0u;
  ST32(R(2),R(5));
  ST32(R(6)+4,R(5));
  { R(14)=R(5); goto L8c0cc868; }
L8c0cc866:;
  R(14)=0xfffffffeu;
L8c0cc868:;
  { c->pr=0x8c0cc86cu; R(4)=R(15); f_8c0cc634(c); }
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cc876(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c0cc87a(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+4);
  ST8(R(5),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+5);
  { ST8(R(6),R(0)); return; }
}
void f_8c0cc884(SH4Ctx *c) {
  R(0)=R(4);
  { R(0)+=0x10u; return; }
}
void f_8c0cc88a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x10u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0f2e9cu;
  R(13)=0x8c068580u;
  R(5)=0x8c0f2e8cu;
  { c->pr=0x8c0cc8a4u; R(4)+=0x30u; f_8c068580(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0cc8ac;
  { R(0)=0xffffffffu; goto L8c0cc8d4; }
L8c0cc8ac:;
  R(12)=0x1u;
L8c0cc8ae:;
  R(14)=R(12);
  R(14)<<=2;
  R(3)=R(10);
  R(14)<<=2;
  R(3)+=0x20u;
  R(5)=R(11);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(4)=R(14);
  R(6)=0x10u;
  { uint32_t tg=R(13); c->pr=0x8c0cc8c6u; R(4)+=0x10u; sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0cc8d2;
  { c->pr=0x8c0cc8ceu; R(4)=R(14); f_8c0cc7a0(c); }
  { R(12)+=0x1u; goto L8c0cc8ae; }
L8c0cc8d2:;
  R(0)=0x0u;
L8c0cc8d4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cc8e2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x10u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0f2e9cu;
  R(13)=0x8c068580u;
  R(5)=0x8c0f2e8cu;
  { c->pr=0x8c0cc8fcu; R(4)+=0x30u; f_8c068580(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0cc904;
  { R(0)=0xffffffffu; goto L8c0cc92c; }
L8c0cc904:;
  R(12)=0x1u;
L8c0cc906:;
  R(14)=R(12);
  R(14)<<=2;
  R(3)=R(10);
  R(14)<<=2;
  R(3)+=0x20u;
  R(5)=R(11);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(4)=R(14);
  R(6)=0x10u;
  { uint32_t tg=R(13); c->pr=0x8c0cc91eu; R(4)+=0x10u; sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0cc92a;
  { c->pr=0x8c0cc926u; R(4)=R(14); f_8c0cc7f0(c); }
  { R(12)+=0x1u; goto L8c0cc906; }
L8c0cc92a:;
  R(0)=0x0u;
L8c0cc92c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cc958(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d16d8u;
  { c->pr=0x8c0cc960u; R(4)=0x0u; f_8c0d16d8(c); }
  R(2)=0x8c0d1768u;
  { c->pr=0x8c0cc966u;  f_8c0d1768(c); }
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+12);
  c->t=(int32_t)R(0)==49;
  if(c->t) goto L8c0cc97e;
  c->t=(int32_t)R(0)==50;
  if(c->t) goto L8c0cc982;
  c->t=(int32_t)R(0)==51;
  if(c->t) goto L8c0cc986;
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c0cc98a;
  {  goto L8c0cc98a; }
L8c0cc97e:;
  { R(4)=0x1u; goto L8c0cc98c; }
L8c0cc982:;
  { R(4)=0x2u; goto L8c0cc98c; }
L8c0cc986:;
  { R(4)=0x3u; goto L8c0cc98c; }
L8c0cc98a:;
  R(4)=0x0u;
L8c0cc98c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c0cc992(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0d16b4u;
  { c->pr=0x8c0cc99cu;  f_8c0d16b4(c); }
  { c->pr=0x8c0cc9a0u; ST32(R(15),R(0)); f_8c0cc958(c); }
  R(2)=LD32(R(15));
  R(4)=R(0);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0cc9b0;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c0cc9b0:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0cc9c6;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0cc9c6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0cc9ce;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0cc9ce;
  {  goto L8c0cc9ce; }
L8c0cc9c6:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x2u; return; }
L8c0cc9ce:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cc9e4(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cc9ec;
  { R(0)=0xffffffffu; return; }
L8c0cc9ec:;
  R(2)=0x8c0f4304u;
  R(0)=0x0u;
  ST32(R(2),R(4));
  {  return; }
}
void f_8c0cc9f6(SH4Ctx *c) {
  R(2)=0x8c0f4304u;
  R(3)=0x0u;
  ST32(R(2),R(3));
  { R(0)=R(3); return; }
}
void f_8c0cca00(SH4Ctx *c) {
  R(2)=0x8c0f4304u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0cca28;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cca14;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cca28;
L8c0cca14:;
  R(2)=0x8c00007eu;
  ST8(R(2),R(4));
  R(3)=0x8c0f4304u;
  R(1)=0x8c0d177cu;
  R(5)=LD32(R(3));
  { c->pr=0x8c0cca22u; R(4)=0x2u; f_8c0d177c(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0cca2e; }
L8c0cca28:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0cca2e:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cca2e(SH4Ctx *c) {
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cca36(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cca74;
  R(2)=0x8c0f4304u;
  R(3)=0x0u;
  ST32(R(14),R(3));
  R(5)=LD32(R(2));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0cca74;
  R(2)=0x8c0d177cu;
  { c->pr=0x8c0cca52u; R(4)=0x0u; f_8c0d177c(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0cca74; }
  R(3)=0x8c00007eu;
  R(5)=(int32_t)(int8_t)LD8(R(3));
  R(4)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cca68;
  R(1)=0x0u;
  { ST32(R(14),R(1)); goto L8c0cca7c; }
L8c0cca68:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cca74;
  R(2)=0x1u;
  { ST32(R(14),R(2)); goto L8c0cca7c; }
L8c0cca74:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0cca7c:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cca84(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cca9a;
  R(3)=0x30u;
  { c->pr=0x8c0cca94u; ST32(R(14),R(3)); f_8c0ccbac(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ccaa2;
L8c0cca9a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0ccaa2:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  ST32(R(14),R(0));
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ccaa2(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  ST32(R(14),R(0));
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ccaae(SH4Ctx *c) {
  R(0)=R(4);
  { R(0)+=0xffffffd0u; return; }
}
void f_8c0ccab4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ccad8;
  R(3)=0x8c0f4304u;
  R(2)=0x0u;
  ST32(R(14),R(2));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ccad8;
  R(3)=0x8c0d177cu;
  { c->pr=0x8c0ccad2u; R(4)=0x0u; f_8c0d177c(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0ccae2; }
L8c0ccad8:;
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0ccae2:;
  R(3)=0x8c00007du;
  R(5)=(int32_t)(int8_t)LD8(R(3));
  R(4)=(uint32_t)(int32_t)(int8_t)R(5);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0ccb06;
  { c->pr=0x8c0ccaf2u; R(4)=R(15); f_8c0ccb12(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0ccafe;
  R(2)=0x1u;
  { ST32(R(14),R(2)); goto L8c0ccb08; }
L8c0ccafe:;
  { c->pr=0x8c0ccb02u; R(4)=LD32(R(15)); f_8c0ccaae(c); }
  { ST32(R(14),R(0)); goto L8c0ccb08; }
L8c0ccb06:;
  ST32(R(14),R(4));
L8c0ccb08:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ccb12(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ccb28;
  R(3)=0x0u;
  { c->pr=0x8c0ccb22u; ST32(R(14),R(3)); f_8c0ccbac(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ccb30;
L8c0ccb28:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0ccb30:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  ST32(R(14),R(0));
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ccb3c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ccb52;
  R(3)=0x30u;
  { c->pr=0x8c0ccb4cu; ST32(R(14),R(3)); f_8c0ccbac(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ccb5a;
L8c0ccb52:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0ccb5a:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+12);
  ST32(R(14),R(0));
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ccb5a(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+12);
  ST32(R(14),R(0));
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ccb66(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(4)); if(k) goto L8c0ccb7a; }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0ccb7a:;
  R(3)=0x8c0d16d8u;
  { c->pr=0x8c0ccb80u; R(4)=0x0u; f_8c0d16d8(c); }
  R(2)=0x8c0d1768u;
  { c->pr=0x8c0ccb86u;  f_8c0d1768(c); }
  R(5)=R(0);
  R(3)=0x8c0685b4u;
  ST32(R(15)+4,R(5));
  R(6)=0x6u;
  R(5)+=0x2u;
  { c->pr=0x8c0ccb94u; R(4)=LD32(R(15)); f_8c0685b4(c); }
  { c->pr=0x8c0ccb98u; R(4)=LD32(R(15)+4); f_8c0ccbe8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ccba0;
  { R(4)=0x1u; goto L8c0ccba2; }
L8c0ccba0:;
  R(4)=0x2u;
L8c0ccba2:;
  R(0)=R(4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ccbac(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d16d8u;
  { c->pr=0x8c0ccbb4u; R(4)=0x0u; f_8c0d16d8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ccbc0;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0ccbc0:;
  R(3)=0x8c0d1768u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0d1768(c); return; } }
}
void f_8c0ccbe8(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(7)=0x6u;
  R(5)=0x0u;
  R(6)=0x0u;
  ST8(R(15),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  ST8(R(15)+4,R(0));
L8c0ccbf8:;
  R(3)=R(5);
  R(3)+=R(4);
  R(0)=(int32_t)(int8_t)LD8(R(3)+2);
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(7);
  R(0)=R(0)&0xFF;
  { uint32_t k=!c->t; R(6)+=R(0); if(k) goto L8c0ccbf8; }
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)=R(6)&0xFF;
  R(5)=R(4)&0xFF;
  R(0)=R(0)&0xFF;
  c->t=R(5)==R(0);
  if(!c->t) goto L8c0ccc26;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(2)=~R(5);
  R(2)=R(2)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0ccc26;
  R(0)=0x1u;
  { R(15)+=0x8u; return; }
L8c0ccc26:;
  R(0)=0x0u;
  { R(15)+=0x8u; return; }
}
void f_8c0ccc2c(SH4Ctx *c) {
  R(3)=0x8c0080fcu;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ccc54;
  R(2)=0x8c0080feu;
  R(0)=(int32_t)(int8_t)LD8(R(2));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ccc46;
  R(1)=0x8c008300u;
  { uint32_t tg=R(1);  sh4_call(c,tg); return; }
L8c0ccc46:;
  R(0)=0x8c000064u;
  R(1)=0x8c008000u;
  ST32(R(0),R(1));
  R(1)=0x8c0000e0u;
  R(3)=LD32(R(1));
  { uint32_t tg=R(3); R(4)=0x3u; sh4_call(c,tg); return; }
L8c0ccc54:;
  R(1)=0x8c0000e0u;
  R(2)=LD32(R(1));
  { uint32_t tg=R(2); R(4)=0x1u; sh4_call(c,tg); return; }
}
void f_8c0ccc5c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0cffe0u;
  { c->pr=0x8c0ccc64u;  f_8c0cffe0(c); }
  R(3)=0x8c0000e0u;
  R(4)=0x2u;
  R(0)=LD32(R(3));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} sh4_call(c,tg); return; }
}
void f_8c0ccca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=0x8c2ecf08u;
  R(13)=R(15);
  ST32(R(15),R(5));
  R(12)=R(4);
  ST32(R(15)+4,R(6));
  R(13)+=0xcu;
  ST32(R(15)+8,R(7));
  R(5)=LD32(R(14));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c0cccea; }
  R(2)=0x8c0d2440u;
  R(0)=0x42u;
  R(3)=0x8c0d2680u;
  R(0)&=R(12);
  ST32(R(4),R(2));
  c->t=(int32_t)R(0)==66;
  R(4)=0x8c0d2a80u;
  ST32(R(13)+4,R(4));
  ST32(R(13)+8,R(3));
  { uint32_t k=!c->t; ST32(R(13)+12,R(4)); if(k) goto L8c0ccd60; }
  R(0)=0x964u;
  R(3)=0x8c0d2ba0u;
  ST32(R(14)+R(0),R(12));
  { c->pr=0x8c0ccce0u; R(4)=0xbu; f_8c0d2ba0(c); }
  R(0)=0x968u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  { ST32(R(14)+R(0),R(2)); goto L8c0ccd60; }
L8c0cccea:;
  R(1)=0x10000u;
  c->t=R(5)==R(1);
  if(!c->t) goto L8c0cccfe;
  R(5)=0x8c0d2060u;
  ST32(R(4),R(5));
  R(4)=0x8c0d2300u;
  ST32(R(13)+4,R(4));
  ST32(R(13)+8,R(5));
  { ST32(R(13)+12,R(4)); goto L8c0ccd60; }
L8c0cccfe:;
  { R(0)=0x1u; goto L8c0ccdcc; }
L8c0ccd60:;
  R(3)=0x1u;
  R(7)=R(14);
  ST32(R(14)+36,R(3));
  R(6)=R(14);
  R(6)+=0x14u;
  ST32(R(14)+12,R(12));
  R(2)=LD32(R(15));
  R(7)+=0x20u;
  ST32(R(14)+24,R(2));
  R(3)=LD32(R(15)+4);
  ST32(R(14)+16,R(3));
  R(3)=0x8c0d1d20u;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0ccd7eu; R(4)=LD32(R(14)+12); f_8c0d1d20(c); }
  R(0)=LD32(R(14)+32);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ccd98; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c0ccd98;
  R(2)=0x1eu;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0ccd9e;
  R(1)=0x22u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c0ccd9e;
L8c0ccd98:;
  R(2)=0x1u;
  { ST32(R(14)+40,R(2)); goto L8c0ccda2; }
L8c0ccd9e:;
  R(1)=0x0u;
  ST32(R(14)+40,R(1));
L8c0ccda2:;
  R(0)=LD32(R(14)+28);
  R(3)=0x8c0d2ca0u;
  R(0)|=0x3u;
  { c->pr=0x8c0ccdacu; ST32(R(14)+28,R(0)); f_8c0d2ca0(c); }
  R(0)=0x3u;
  R(0)&=R(12);
  R(0)<<=2;
  R(3)=LD32(R(13)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c0ccdb8u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c0d38acu;
  { c->pr=0x8c0ccdbeu; R(4)=LD32(R(15)); f_8c0d38ac(c); }
  R(2)=0x8c0d1940u;
  { c->pr=0x8c0ccdc4u; R(4)=0x1u; f_8c0d1940(c); }
  R(0)=0x93cu;
  R(3)=0x1u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x0u;
L8c0ccdcc:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cce00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0d66acu;
  { c->pr=0x8c0cce18u; R(14)=R(4); f_8c0d66ac(c); }
  R(3)=0x100u;
  R(9)=0x1u;
  R(2)=LD32(R(14)+4);
  R(13)=0x8c2ecf08u;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c0cce2c; }
  R(0)=0x960u;
  { ST32(R(13)+R(0),R(9)); goto L8c0cce30; }
L8c0cce2c:;
  R(0)=0x960u;
  ST32(R(13)+R(0),R(12));
L8c0cce30:;
  R(3)=LD32(R(14)+32);
  R(0)=0x7f8u;
  ST32(R(15),R(3));
  R(2)=LD32(R(14)+24);
  R(1)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)>>=2;
  R(2)<<=2;
  R(3)+=R(2);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d1e80u;
  R(5)=LD32(R(14)+24);
  R(7)=LD32(R(14)+28);
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0cce56u; R(4)=LD32(R(13)+R(0)); f_8c0d1e80(c); }
  R(2)=LD32(R(14)+4);
  R(3)=0x100000u;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c0cce64; }
  { R(4)=0x1u; goto L8c0cce66; }
L8c0cce64:;
  R(4)=0x0u;
L8c0cce66:;
  R(2)=0x8c0d19c0u;
  { c->pr=0x8c0cce6cu;  f_8c0d19c0(c); }
  R(0)=LD32(R(14)+4);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0ccea0;
  ST32(R(13)+44,R(9));
  R(5)=LD32(R(14)+16);
  { R(4)=0x1u; goto L8c0ccea6; }
L8c0ccea0:;
  R(5)=0x0u;
  ST32(R(13)+44,R(12));
  R(4)=R(5);
L8c0ccea6:;
  R(2)=0x8c0d2c40u;
  { c->pr=0x8c0cceacu;  f_8c0d2c40(c); }
  R(3)=0x8c0d3fc0u;
  { c->pr=0x8c0cceb2u;  f_8c0d3fc0(c); }
  R(2)=0x8c0d63e0u;
  { c->pr=0x8c0cceb8u; R(4)=R(14); f_8c0d63e0(c); }
  R(2)=0x8c0d5aa0u;
  { c->pr=0x8c0ccebeu; R(4)=R(14); f_8c0d5aa0(c); }
  R(2)=0x8c0d6480u;
  { c->pr=0x8c0ccec4u; R(4)=R(14); f_8c0d6480(c); }
  R(2)=0x8c0d5e00u;
  { c->pr=0x8c0ccecau; R(4)=R(14); f_8c0d5e00(c); }
  R(2)=0x8c0d6580u;
  { c->pr=0x8c0cced0u; R(4)=R(14); f_8c0d6580(c); }
  R(2)=0x8c0d65ccu;
  { c->pr=0x8c0cced6u; R(4)=R(14); f_8c0d65cc(c); }
  R(2)=0x8c0d6364u;
  { c->pr=0x8c0ccedcu;  f_8c0d6364(c); }
  R(4)=R(12);
  R(10)=0x8u;
L8c0ccee0:;
  R(3)=0x7d8u;
  R(0)=0x8c2ee6ccu;
  R(3)+=R(13);
  R(3)+=R(4);
  R(2)=LD32(R(3));
  ST32(R(4)+R(0),R(2));
  R(4)+=0x4u;
  c->t=R(4)>=R(10);
  if(!c->t) goto L8c0ccee0;
  R(2)=LD32(R(14)+12);
  R(3)=0x0u;
  R(8)=0xa5000000u;
  c->t=R(3)>=R(2);
  { uint32_t k=c->t; R(11)=R(12); if(k) goto L8c0ccf32; }
L8c0ccefe:;
  R(3)=0x7e0u;
  R(4)=R(11);
  R(4)<<=2;
  R(0)=0x8c2ee6d4u;
  R(3)+=R(13);
  R(3)+=R(4);
  R(2)=LD32(R(3));
  ST32(R(4)+R(0),R(2));
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c0ccf2a;
  R(0)=LD32(R(14)+8);
  R(5)=R(11);
  R(5)<<=2;
  R(3)=0x8c0d18d4u;
  R(5)=LD32(R(5)+R(0));
  ST32(R(15),R(5));
  R(4)=LD32(R(15));
  R(5)=LD32(R(5)+20);
  R(4)=LD32(R(4)+28);
  { c->pr=0x8c0ccf2au; R(4)+=R(8); f_8c0d18d4(c); }
L8c0ccf2a:;
  R(2)=LD32(R(14)+12);
  R(11)+=0x1u;
  c->t=R(11)>=R(2);
  if(!c->t) goto L8c0ccefe;
L8c0ccf32:;
  R(0)=0x82cu;
  R(1)=0x1eu;
  R(2)=0x8c2ed878u;
  ST32(R(13)+R(0),R(1));
  R(0)+=0xffffffc8u;
  ST32(R(13)+R(0),R(12));
  R(3)=LD32(R(14)+40);
  ST32(R(2),R(3));
  R(3)=0x8c2ed87cu;
  R(1)=0x2u;
  ST32(R(3),R(1));
  R(1)=0x8c2ed880u;
  R(0)=LD32(R(14)+12);
  ST32(R(1),R(0));
  R(0)=0x48u;
  R(3)=0x8c2ee714u;
  R(2)=LD32(R(13)+R(0));
  ST32(R(3),R(2));
  R(0)=0x830u;
  R(5)=R(12);
  R(7)=0x14u;
  ST32(R(13)+R(0),R(12));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(12));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(12));
L8c0ccf66:;
  R(6)=R(5);
  R(6)<<=2;
  R(3)=R(5);
  R(6)+=R(3);
  R(6)<<=2;
  R(4)=R(12);
L8c0ccf72:;
  R(0)=0x854u;
  R(0)+=R(13);
  R(0)+=R(6);
  ST32(R(4)+R(0),R(12));
  R(4)+=0x4u;
  c->t=R(4)>=R(7);
  if(!c->t) goto L8c0ccf72;
  R(5)+=0x1u;
  c->t=R(5)>=R(10);
  if(!c->t) goto L8c0ccf66;
  R(3)=LD32(R(13)+44);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ccf92;
  R(3)=LD32(R(13)+40);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ccf9e;
L8c0ccf92:;
  R(5)=0x8c2ee6d8u;
  R(5)=LD32(R(5));
  R(3)=0x8c0d1bb6u;
  R(4)=0x8c2ee6d4u;
  { c->pr=0x8c0ccf9eu; R(4)=LD32(R(4)); f_8c0d1bb6(c); }
L8c0ccf9e:;
  R(0)=0x93cu;
  ST32(R(13)+R(0),R(9));
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
void f_8c0cd020(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d2c00u;
  { c->pr=0x8c0cd028u; R(4)=LD32(R(15)+4); f_8c0d2c00(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0cd060(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cd072;
  R(14)=0xd000001u;
  {  goto L8c0cd09e; }
L8c0cd072:;
  R(3)=0x8c2eafa0u;
  R(4)=0x1u;
  R(2)=0x80u;
  R(1)=0x8c2eafa5u;
  ST32(R(3),R(2));
  R(3)+=0x6u;
  R(2)=0x8c2eafa4u;
  ST8(R(2),R(4));
  R(2)+=0x3u;
  ST8(R(1),R(4));
  R(1)=0x8c2eafa8u;
  ST8(R(3),R(4));
  R(3)+=0x3u;
  ST8(R(2),R(4));
  R(4)=0x0u;
  ST8(R(1),R(4));
  ST8(R(3),R(4));
  R(2)=0x8c0d6dc8u;
  R(4)=0x8c2eafa0u;
  { c->pr=0x8c0cd09cu;  f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0cd09e:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cd0aa;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0cd060u;
  { c->pr=0x8c0cd0aau; R(5)=R(14); f_8c0d6fc8(c); }
L8c0cd0aa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cd0d8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(11)=0x0u;
  R(14)=R(11);
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(12)=0x8c0f4334u;
  R(2)=LD32(R(12));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0cd10c;
  R(14)=0xd000001u;
  {  goto L8c0cd16e; }
L8c0cd10c:;
  R(2)=0x8c0f4338u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cd15e;
  R(1)=0x8c0d6f40u;
  { c->pr=0x8c0cd11au;  f_8c0d6f40(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0cd16e;
  R(3)=0x8c0cd060u;
  { c->pr=0x8c0cd126u;  f_8c0cd060(c); }
  R(2)=0x8c0d6e7cu;
  { c->pr=0x8c0cd12cu;  f_8c0d6e7c(c); }
  R(13)=0x8c0d6fdcu;
  R(10)=0x8c0cd1dcu;
L8c0cd130:;
  { uint32_t tg=R(10); c->pr=0x8c0cd134u;  sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c0cd138u; R(14)=R(0); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0cd130;
  R(10)=0x8c0d6f04u;
L8c0cd13e:;
  R(0)=0x1bcu;
  R(5)=R(15);
  R(4)=LD32(R(12));
  { uint32_t tg=R(10); c->pr=0x8c0cd148u; R(4)=LD32(R(4)+R(0)); sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c0cd14cu;  sh4_call(c,tg); }
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cd13e;
  R(1)=0x8c0d6c60u;
  { c->pr=0x8c0cd158u;  f_8c0d6c60(c); }
  R(2)=0x8c0d6eccu;
  { c->pr=0x8c0cd15eu;  f_8c0d6ecc(c); }
L8c0cd15e:;
  R(3)=0x8c0d1004u;
  R(0)=0x1acu;
  R(4)=LD32(R(12));
  { c->pr=0x8c0cd168u; R(4)=LD32(R(4)+R(0)); f_8c0d1004(c); }
  R(2)=0x8c0f4338u;
  ST32(R(12),R(11));
  ST32(R(2),R(11));
L8c0cd16e:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cd17a;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0cd0d8u;
  { c->pr=0x8c0cd17au; R(5)=R(14); f_8c0d6fc8(c); }
L8c0cd17a:;
  R(0)=LD32(R(15)+4);
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cd1dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d6cdcu;
  { c->pr=0x8c0cd1e6u;  f_8c0d6cdc(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cd1f4;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0cd1dcu;
  { c->pr=0x8c0cd1f4u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0cd1f4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cd208(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(4));
  R(4)=0x8c0f2f30u;
  R(3)=0x8c0ce6c0u;
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0cd21cu; R(13)=0x0u; f_8c0ce6c0(c); }
  R(3)=0x8c0cefbau;
  R(5)=R(13);
  { c->pr=0x8c0cd224u; R(4)=LD32(R(15)+8); f_8c0cefba(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cd24e;
  R(3)=0x8c0ce72au;
  R(5)=R(15);
  { c->pr=0x8c0cd232u; R(4)=R(14); f_8c0ce72a(c); }
  R(3)=0x8c0ce802u;
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0cd23cu; R(4)=R(14); f_8c0ce802(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(14); if(k) goto L8c0cd244; }
  R(13)=0xffffffffu;
L8c0cd244:;
  R(3)=0x8c0ce6d8u;
  { c->pr=0x8c0cd24au;  f_8c0ce6d8(c); }
  {  goto L8c0cd250; }
L8c0cd24e:;
  R(13)=0xffffffffu;
L8c0cd250:;
  R(3)=0x8c010fa0u;
  { c->pr=0x8c0cd256u;  f_8c010fa0(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0cd260;
  R(3)=0x8c0ccc2cu;
  { c->pr=0x8c0cd260u;  f_8c0ccc2c(c); }
L8c0cd260:;
  R(2)=LD32(R(15)+4);
  { uint32_t tg=R(2); c->pr=0x8c0cd266u;  sh4_call(c,tg); }
  R(0)=0x1u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cd272(SH4Ctx *c) {
  R(4)=0x8c0f2f34u;
  R(5)=0x8c008300u;
  { R(6)=0x1u; { f_8c0cd208(c); return; } }
}
void f_8c0cd2a4(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  R(0)<<=8;
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(2)=R(2)&0xFF;
  R(0)=R(0)&0xFF;
  R(0)<<=16;
  R(3)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(0)=R(0)&0xFF;
  R(0)<<=16;
  R(0)<<=8;
  R(3)|=R(0);
  R(4)=R(3);
  R(4)|=R(2);
  { R(0)=R(4); return; }
}
void f_8c0cd2ca(SH4Ctx *c) {
  R(6)=R(4);
  R(7)=0x8c0f2fccu;
  R(5)=0x5u;
  R(4)=0x0u;
  R(6)+=0x1u;
L8c0cd2d4:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(2)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(3)=(uint32_t)v;}
  c->t=R(3)==R(2);
  if(c->t) goto L8c0cd2e0;
  { R(0)=0x0u; return; }
L8c0cd2e0:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0cd2d4;
  R(0)=0x1u;
  {  return; }
}
void f_8c0cd2ec(SH4Ctx *c) {
  R(2)=0x8c0f430cu;
  R(3)=LD32(R(2));
  ST32(R(3)+48,R(4));
  { R(0)=0x1u; return; }
}
void f_8c0cd2f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(13)=0x8c0f430cu;
  R(2)=0x1u;
  R(3)=LD32(R(13));
  ST32(R(3)+32,R(2));
  R(14)=LD32(R(13));
  R(14)=LD32(R(14)+28);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c0cd31c; }
  { R(4)=0x0u; goto L8c0cd31e; }
L8c0cd31c:;
  R(4)=LD32(R(14)+60);
L8c0cd31e:;
  R(11)=LD32(R(13));
  R(10)=R(15);
  R(10)+=0x1cu;
  R(11)=LD32(R(11)+12);
  R(11)=LD32(R(11)+16);
  { uint32_t tg=R(11); c->pr=0x8c0cd32cu; R(5)=R(10); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(11)=R(0); if(k) goto L8c0cd336; }
  {  goto L8c0cd564; }
L8c0cd336:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(9)=0x2u; if(k) goto L8c0cd36e; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0cd36e;
  c->t=(int32_t)R(0)==65;
  if(!c->t) goto L8c0cd34a;
  {  goto L8c0cd468; }
L8c0cd34a:;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0cd352;
  {  goto L8c0cd49c; }
L8c0cd352:;
  c->t=(int32_t)R(0)==67;
  if(!c->t) goto L8c0cd35a;
  {  goto L8c0cd564; }
L8c0cd35a:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0cd362;
  {  goto L8c0cd4b0; }
L8c0cd362:;
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c0cd36a;
  {  goto L8c0cd4b0; }
L8c0cd36a:;
  {  goto L8c0cd558; }
L8c0cd36e:;
  R(0)=0x48u;
  R(3)=LD32(R(13));
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  ST32(R(3)+28,R(12));
  R(0)=0x50u;
  ST16(R(14)+R(0),R(11));
  R(0)=0x48u;
  ST32(R(14)+60,R(12));
  ST16(R(14)+R(0),R(12));
  R(0)=R(11);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0cd38a;
  {  goto L8c0cd564; }
L8c0cd38a:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cd3b4;
  R(3)=LD32(R(10));
  R(0)=0x4au;
  ST32(R(14)+24,R(3));
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+28);
  R(2)+=R(3);
  ST32(R(14)+20,R(2));
  ST16(R(14)+R(0),R(9));
  R(3)=LD32(R(14)+36);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cd3aa;
  {  goto L8c0cd564; }
L8c0cd3aa:;
  R(3)=LD32(R(14)+36);
  { uint32_t tg=R(3); c->pr=0x8c0cd3b0u; R(4)=LD32(R(14)+40); sh4_call(c,tg); }
  {  goto L8c0cd564; }
L8c0cd3b4:;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0cd3ca;
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0cd3d0;
  R(3)=LD32(R(14)+32);
  ST32(R(14)+24,R(3));
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+28);
  R(2)+=R(3);
  ST32(R(14)+20,R(2));
L8c0cd3ca:;
  R(0)=0x4au;
  { ST16(R(14)+R(0),R(9)); goto L8c0cd564; }
L8c0cd3d0:;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0cd41c;
  R(4)=LD32(R(13));
  R(5)=R(15);
  R(3)=0x8c0d70d4u;
  R(5)+=0x4u;
  { c->pr=0x8c0cd3e0u; R(4)+=0x40u; f_8c0d70d4(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cd3f8;
  R(0)=0x50u;
  R(3)=0x5u;
  ST16(R(14)+R(0),R(3));
  R(0)=0x52u;
  R(2)=0xffffffedu;
  ST16(R(14)+R(0),R(2));
  R(0)=0x44u;
  { ST32(R(14)+R(0),R(12)); goto L8c0cd518; }
L8c0cd3f8:;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(14)+8);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(14)+8);
  ST32(R(2)+4,R(3));
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(14)+8);
  ST32(R(2)+8,R(3));
  R(3)=LD32(R(15)+16);
  R(2)=LD32(R(14)+8);
  ST32(R(2)+12,R(3));
  R(1)=LD32(R(15)+20);
  R(3)=0xffffffu;
  R(2)=LD32(R(14)+8);
  R(1)&=R(3);
  { ST32(R(2)+16,R(1)); goto L8c0cd564; }
L8c0cd41c:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0cd426;
  {  goto L8c0cd564; }
L8c0cd426:;
  R(3)=LD32(R(13));
  R(0)=0x48u;
  R(5)=0x8c2eaff4u;
  R(2)=LD32(R(3)+12);
  R(4)=0x8c2eaff0u;
  R(1)=LD32(R(2)+R(0));
  R(7)=0x8c2eaff8u;
  { uint32_t tg=R(1); c->pr=0x8c0cd438u; R(6)=LD32(R(14)+4); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cd452;
  R(0)=0x50u;
  ST32(R(14)+60,R(4));
  R(2)=0x4u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x48u;
  R(3)=0x6u;
  ST16(R(14)+R(0),R(3));
  R(2)=LD32(R(13));
  { ST32(R(2)+28,R(14)); goto L8c0cd564; }
L8c0cd452:;
  R(0)=0x50u;
  R(2)=0x5u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x52u;
  R(3)=0xffffffe4u;
  ST16(R(14)+R(0),R(3));
  R(0)=0x44u;
  ST32(R(14)+R(0),R(12));
  R(3)=LD32(R(14)+4);
  { ST32(R(3),R(12)); goto L8c0cd518; }
L8c0cd468:;
  R(2)=LD32(R(13));
  R(5)=R(15);
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+36);
  { uint32_t tg=R(1); c->pr=0x8c0cd474u; R(4)=LD32(R(14)+60); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cd490;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(2)>0;
  if(!c->t) goto L8c0cd486;
  R(0)=0x4au;
  { ST16(R(14)+R(0),R(12)); goto L8c0cd48a; }
L8c0cd486:;
  R(0)=0x4au;
  ST16(R(14)+R(0),R(9));
L8c0cd48a:;
  R(3)=LD32(R(14)+32);
  { ST32(R(14)+24,R(3)); goto L8c0cd564; }
L8c0cd490:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cd564;
  R(2)=LD32(R(15));
  { ST32(R(14)+24,R(2)); goto L8c0cd564; }
L8c0cd49c:;
  R(1)=LD32(R(10)+8);
  R(0)=0x40u;
  ST32(R(14)+R(0),R(1));
  R(0)=0x48u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cd564;
  R(2)=LD32(R(10));
  { ST32(R(14)+24,R(2)); goto L8c0cd564; }
L8c0cd4b0:;
  R(0)=0x50u;
  ST16(R(14)+R(0),R(11));
  R(0)=0x52u;
  R(3)=LD32(R(10));
  ST16(R(14)+R(0),R(3));
  R(0)=0x44u;
  R(2)=LD32(R(10)+4);
  ST32(R(14)+R(0),R(2));
  ST32(R(14)+60,R(12));
  R(3)=LD32(R(13));
  ST32(R(3)+28,R(12));
  R(0)=0x52u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==-29;
  if(!c->t) goto L8c0cd518;
  R(0)=0x44u;
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c0cd508;
  { c->pr=0x8c0cd4dau;  f_8c0cdf6c(c); }
  c->t=(int32_t)R(0)==6;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0cd4e4; }
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cd518;
L8c0cd4e4:;
  R(0)=0x52u;
  R(3)=0xffffffe9u;
  { ST16(R(14)+R(0),R(3)); goto L8c0cd518; }
L8c0cd508:;
  R(0)=0x44u;
  R(1)=0x104u;
  R(2)=LD32(R(14)+R(0));
  c->t=R(2)==R(1);
  if(!c->t) goto L8c0cd518;
  R(0)=0x52u;
  R(3)=0xffffffdbu;
  ST16(R(14)+R(0),R(3));
L8c0cd518:;
  R(0)=0x52u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==-23;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0cd528; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==-33;
  if(!c->t) goto L8c0cd52e;
L8c0cd528:;
  R(3)=LD32(R(13));
  R(2)=0x1u;
  ST32(R(3)+52,R(2));
L8c0cd52e:;
  R(3)=LD32(R(13));
  R(2)=LD32(R(3)+36);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0cd544;
  R(2)=LD32(R(13));
  R(0)=0x52u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=LD32(R(2)+36);
  R(4)=R(2);
  { uint32_t tg=R(3); c->pr=0x8c0cd544u; R(4)=LD32(R(4)+40); sh4_call(c,tg); }
L8c0cd544:;
  R(3)=LD32(R(14)+52);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0cd564;
  R(0)=0x52u;
  R(3)=LD32(R(14)+52);
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c0cd554u; R(4)=LD32(R(14)+56); sh4_call(c,tg); }
  {  goto L8c0cd564; }
L8c0cd558:;
  R(0)=0x50u;
  R(2)=R(11)&0xFF;
  ST16(R(14)+R(0),R(2));
  ST32(R(14)+60,R(12));
  R(3)=LD32(R(13));
  ST32(R(3)+28,R(12));
L8c0cd564:;
  R(3)=LD32(R(13));
  ST32(R(3)+32,R(12));
  R(0)=R(11);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cd57c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0f430cu;
  ST32(R(15)+8,R(4));
  R(2)=0x8c0ce666u;
  ST32(R(15),R(5));
  R(5)=0x0u;
  ST32(R(15)+4,R(6));
  R(7)=LD32(R(15));
  R(4)=LD32(R(3));
  R(7)<<=8;
  R(6)=LD32(R(15)+8);
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  { c->pr=0x8c0cd59cu; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cd5aa;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffff3u; return; }
L8c0cd5aa:;
  R(3)=0x8c0ce802u;
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0cd5b2u; R(5)=LD32(R(15)); f_8c0ce802(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cd5ba(SH4Ctx *c) {
  R(6)=LD32(R(4)+28);
  c->t=(R(6)&R(6))==0;
  R(5)=0x0u;
  { uint32_t k=c->t; R(4)=R(5); if(k) goto L8c0cd5ce; }
  R(2)=LD32(R(6)+44);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0cd5ce;
  R(5)=LD32(R(6)+48);
  R(4)=LD32(R(6)+44);
L8c0cd5ce:;
  R(3)=0x8c0da96cu;
  {  { f_8c0da96c(c); return; } }
}
void f_8c0cd5d4(SH4Ctx *c) {
  R(0)=LD32(R(4)+32);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0cd5de;
  {  { f_8c0cdea6(c); return; } }
L8c0cd5de:;
  {  return; }
}
void f_8c0cd5e2(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cd5f4;
  R(3)=LD32(R(4));
  R(2)=0x2u;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0cd5f4;
  R(4)+=0x10u;
  R(3)=LD32(R(4));
  ST32(R(4)+44,R(3));
L8c0cd5f4:;
  {  return; }
}
void f_8c0cd60c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(0)=sh4_getsr(c);
  R(10)=R(15);
  R(10)+=0x18u;
  R(3)=R(10);
  R(3)+=0x4u;
  R(0)>>=2;
  R(8)=0x8c2eafb4u;
  R(0)>>=2;
  ST32(R(15)+8,R(3));
  R(0)&=0xfu;
  R(4)=R(8);
  R(3)=0xffffff0fu;
  R(2)=R(8);
  R(1)=R(4);
  R(1)+=0xeu;
  R(2)+=0xcu;
  R(4)+=0xfu;
  ST32(R(15)+16,R(2));
  ST32(R(15),R(1));
  ST32(R(15)+4,R(4));
  ST32(R(15)+12,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(12)=0x8c0f4310u;
  R(14)=0x8c0f430cu;
  R(2)=LD32(R(12));
  R(13)=0x8c0d0160u;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0cd66a;
  R(5)=0x8c0cd5d4u;
  R(6)=0x50u;
  R(7)=LD32(R(14));
  R(11)=0x900u;
  { uint32_t tg=R(13); c->pr=0x8c0cd668u; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(12),R(0));
L8c0cd66a:;
  R(12)=0x8c0f4314u;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cd680;
  R(5)=0x8c0cd5bau;
  R(6)=0x10u;
  R(7)=LD32(R(14));
  R(11)=0xa40u;
  { uint32_t tg=R(13); c->pr=0x8c0cd67eu; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(12),R(0));
L8c0cd680:;
  R(4)=LD32(R(14));
  R(7)=0x0u;
  R(12)=0x8c0ce666u;
  R(5)=R(7);
  R(6)=R(7);
  { c->pr=0x8c0cd68eu; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0cd702;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+28);
  { uint32_t tg=R(1); c->pr=0x8c0cd69eu;  sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cd702;
  R(0)=0x50u;
  ST32(R(13)+60,R(4));
  R(9)=0x4u;
  ST16(R(13)+R(0),R(9));
  R(3)=LD32(R(13));
  ST32(R(3)+28,R(13));
  R(2)=0x8c0ce5d4u;
  { c->pr=0x8c0cd6b6u; R(4)=R(13); f_8c0ce5d4(c); }
  R(3)=LD32(R(14));
  R(11)=R(0);
  R(2)=LD32(R(3)+12);
  R(1)=LD32(R(2)+32);
  { uint32_t tg=R(1); c->pr=0x8c0cd6c2u; R(4)=R(10); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0cd702;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0cd6e2;
  R(0)=R(11);
  c->t=(int32_t)R(0)==-29;
  if(c->t) goto L8c0cd6d4;
  {  goto L8c0cd8c2; }
L8c0cd6d4:;
  R(0)=LD32(R(15)+24);
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0cd6de;
  {  goto L8c0cd8c2; }
L8c0cd6de:;
  { R(5)=0xffffffe9u; goto L8c0cd8da; }
L8c0cd6e2:;
  R(2)=LD32(R(15)+8);
  R(4)=0x80u;
  R(3)=LD32(R(2));
  c->t=R(3)==R(4);
  if(c->t) goto L8c0cd6f0;
  {  goto L8c0cd8d8; }
L8c0cd6f0:;
  R(4)=LD32(R(14));
  R(7)=0x0u;
  R(5)=R(7);
  R(6)=R(7);
  { uint32_t tg=R(12); c->pr=0x8c0cd6fcu; R(4)=LD32(R(4)+20); sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0cd734;
L8c0cd702:;
  { R(5)=0xfffffffeu; goto L8c0cd8da; }
L8c0cd734:;
  R(3)=LD32(R(14));
  R(13)=0x0u;
  R(0)=0x4cu;
  ST32(R(3)+44,R(13));
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0cd746u; R(4)=R(8); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cd790;
  R(0)=0x50u;
  ST32(R(12)+60,R(4));
  ST16(R(12)+R(0),R(9));
  R(3)=LD32(R(12));
  ST32(R(3)+28,R(12));
  R(2)=0x8c0ce5d4u;
  { c->pr=0x8c0cd75cu; R(4)=R(12); f_8c0ce5d4(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cd790;
  R(2)=LD32(R(15)+16);
  R(3)=LD32(R(14));
  R(1)=(int32_t)(int8_t)LD8(R(2));
  R(2)=LD32(R(3)+44);
  R(1)+=0xffffffd0u;
  R(1)<<=16;
  R(2)|=R(1);
  ST32(R(3)+44,R(2));
  R(2)=LD32(R(15));
  R(3)=LD32(R(14));
  R(1)=(int32_t)(int8_t)LD8(R(2));
  R(2)=LD32(R(3)+44);
  R(1)+=0xffffffd0u;
  R(1)<<=8;
  R(2)|=R(1);
  ST32(R(3)+44,R(2));
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(14));
  R(1)=(int32_t)(int8_t)LD8(R(2));
  R(2)=LD32(R(3)+44);
  R(1)+=0xffffffd0u;
  R(2)|=R(1);
  ST32(R(3)+44,R(2));
L8c0cd790:;
  R(6)=LD32(R(14));
  R(5)=0x1u;
  R(12)=0x8c0f2fc4u;
  R(6)+=0x40u;
  { c->pr=0x8c0cd79cu; R(4)=LD32(R(12)); f_8c0cd57c(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cd7a6;
  {  goto L8c0cd8ca; }
L8c0cd7a6:;
  R(4)=LD32(R(14));
  { c->pr=0x8c0cd7acu; R(4)+=0x40u; f_8c0cd2ca(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0cd7b4;
  {  goto L8c0cd8d8; }
L8c0cd7b4:;
  R(2)=LD32(R(14));
  R(1)=0x4u;
  R(12)=0x8cu;
  R(1)+=R(2);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14));
  R(4)+=0x40u;
  { c->pr=0x8c0cd7c6u; R(4)+=R(12); f_8c0cd2a4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  R(1)=0x8u;
  R(11)=0x96u;
  R(12)+=0xfffffff8u;
  ST32(R(3),R(0));
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+4);
  R(3)+=R(11);
  ST32(R(2)+4,R(3));
  R(2)=LD32(R(14));
  R(1)+=R(2);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14));
  R(4)+=0x40u;
  { c->pr=0x8c0cd7e6u; R(4)+=R(12); f_8c0cd2a4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  R(4)=0x8c0080f0u;
  ST32(R(3),R(0));
  R(2)=0x8c2eafd4u;
  R(12)=0x8c2eafecu;
  R(3)=R(2);
  ST32(R(12),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(4)+12);
  ST16(R(3),R(0));
  R(0)=LD32(R(12));
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cd828;
  R(2)=LD32(R(12));
  R(5)=R(4);
  R(0)=(int32_t)(int8_t)LD8(R(4)+13);
  R(4)=R(13);
  ST16(R(2)+2,R(0));
  R(3)=LD32(R(12));
  ST32(R(3)+4,R(13));
  R(6)=LD32(R(12));
  R(6)+=0x8u;
L8c0cd812:;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0cd826;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(2)=(uint32_t)v;}
  R(7)=0xcu;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(7);
  ST8(R(6),R(2));
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c0cd812; }
L8c0cd826:;
  ST8(R(6),R(13));
L8c0cd828:;
  R(4)=LD32(R(14));
  R(9)=0x9eu;
  R(4)+=0x40u;
  { c->pr=0x8c0cd832u; R(4)+=R(9); f_8c0cd2a4(c); }
  R(9)=R(0);
  R(4)=LD32(R(14));
  R(9)+=R(11);
  R(11)=0xa6u;
  R(4)+=0x40u;
  { c->pr=0x8c0cd840u; R(4)+=R(11); f_8c0cd2a4(c); }
  R(2)=LD32(R(14));
  R(7)=R(0);
  R(5)=R(9);
  R(3)=LD32(R(2)+16);
  ST32(R(3)+8,R(13));
  R(6)=LD32(R(14));
  R(4)=LD32(R(14));
  R(3)=0x8c0d770au;
  R(6)=LD32(R(6)+16);
  { c->pr=0x8c0cd856u; R(4)+=0x40u; f_8c0d770a(c); }
  c->t=(int32_t)R(0)==-12;
  { uint32_t k=c->t; R(11)=R(0); if(k) goto L8c0cd8c2; }
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0cd8ca;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+16);
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0cd8d8;
  {  goto L8c0cd890; }
L8c0cd890:;
  R(11)=LD32(R(12));
  R(0)=(int32_t)(int16_t)LD16(R(11));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cd8e4;
  R(5)=R(15);
  R(4)=R(11);
  R(5)+=0x14u;
  { c->pr=0x8c0cd8a2u; R(4)+=0x8u; f_8c0cdcfe(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0cd8ca;
  R(3)=LD32(R(15)+20);
  R(7)=0x1u;
  R(5)=LD32(R(12));
  ST32(R(5)+4,R(3));
  R(5)=R(3);
  R(6)=LD32(R(14));
  R(4)=LD32(R(14));
  R(6)=LD32(R(6)+16);
  R(3)=0x8c0d770au;
  { c->pr=0x8c0cd8bcu; R(4)+=0x40u; f_8c0d770a(c); }
  c->t=(int32_t)R(0)==-12;
  { uint32_t k=!c->t; R(11)=R(0); if(k) goto L8c0cd8c6; }
L8c0cd8c2:;
  { R(4)=R(11); goto L8c0cd8ee; }
L8c0cd8c6:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0cd8ce;
L8c0cd8ca:;
  { R(5)=0xfffffffcu; goto L8c0cd8da; }
L8c0cd8ce:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+16);
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0cd8de;
L8c0cd8d8:;
  R(5)=0xfffffffbu;
L8c0cd8da:;
  { R(4)=R(5); goto L8c0cd8ee; }
L8c0cd8de:;
  R(4)=LD32(R(14));
  { c->pr=0x8c0cd8e4u; R(4)=LD32(R(4)+16); f_8c0cd5e2(c); }
L8c0cd8e4:;
  R(2)=LD32(R(14));
  R(0)=0x38u;
  R(4)=0x1u;
  ST16(R(2)+R(0),R(4));
  R(4)=R(13);
L8c0cd8ee:;
  R(0)=LD32(R(15)+12);
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(0)=R(4);
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
void f_8c0cd916(SH4Ctx *c) {
  R(3)=0x8c0ceefcu;
  {  { f_8c0ceefc(c); return; } }
}
void f_8c0cd91c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=0x8c0f430cu;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  ST32(R(15)+16,R(6));
  ST32(R(15)+12,R(7));
  R(4)=LD32(R(14));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cd944;
  R(0)=0x38u;
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cd944;
  { R(0)=0x0u; goto L8c0cda2c; }
L8c0cd944:;
  R(0)=LD32(R(15));
  c->t=(R(0)&0x1f)==0;
  if(c->t) goto L8c0cd94e;
  { R(0)=0xfffffff2u; goto L8c0cda2c; }
L8c0cd94e:;
  R(2)=0x8c0d7534u;
  { c->pr=0x8c0cd954u;  f_8c0d7534(c); }
  R(12)=R(0);
  R(3)=LD32(R(12));
  { uint32_t tg=R(3); c->pr=0x8c0cd95cu;  sh4_call(c,tg); }
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+8,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=LD32(R(15));
  R(0)=0x38u;
  R(13)=0x0u;
  R(3)=R(2);
  ST32(R(14),R(2));
  ST16(R(3)+R(0),R(13));
  R(3)=LD32(R(14));
  ST32(R(3)+32,R(13));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(14));
  ST32(R(2),R(3));
  R(8)=LD32(R(14));
  R(5)=LD32(R(15)+16);
  R(3)=0x8c0ce6b4u;
  R(8)+=0x10u;
  { c->pr=0x8c0cd992u; R(4)=LD32(R(15)+12); f_8c0ce6b4(c); }
  ST32(R(8),R(0));
  R(3)=LD32(R(14));
  ST32(R(3)+12,R(12));
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(13));
  R(3)=LD32(R(14));
  R(0)=0x3au;
  R(5)=R(13);
  ST16(R(3)+R(0),R(13));
  R(3)=LD32(R(14));
  ST32(R(3)+36,R(13));
  R(2)=LD32(R(14));
  ST32(R(2)+52,R(13));
  R(2)=LD32(R(15)+40);
  R(3)=LD32(R(14));
  ST32(R(3)+60,R(2));
  R(3)=0x1080u;
  R(4)=LD32(R(14));
  { R(4)+=R(3); goto L8c0cd9e0; }
L8c0cd9d4:;
  R(0)=0x4cu;
  ST16(R(4)+R(0),R(13));
  R(5)+=0x1u;
  R(3)=LD32(R(14));
  ST32(R(4),R(3));
  R(4)+=0x54u;
L8c0cd9e0:;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0cd9d4;
  R(3)=LD32(R(14));
  R(7)=0x0u;
  R(1)=0x1080u;
  R(5)=R(7);
  R(2)=R(3);
  R(6)=R(7);
  R(1)+=R(2);
  ST32(R(3)+20,R(1));
  R(3)=LD32(R(14));
  R(1)=0x1080u;
  R(2)=R(3);
  R(1)+=R(2);
  R(1)+=0x54u;
  ST32(R(3)+24,R(1));
  R(4)=LD32(R(14));
  { c->pr=0x8c0cda0cu; R(4)=LD32(R(4)+20); f_8c0cdd48(c); }
  R(0)=LD32(R(15)+8);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0cd60c(c); return; } }
L8c0cda2c:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cda3a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c0f430cu;
  R(4)=LD32(R(14));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cda54;
  { R(0)=0xffffffffu; goto L8c0cdb08; }
L8c0cda54:;
  R(12)=0x1080u;
  R(13)=0x0u;
  R(10)=0x8c0ce6d8u;
  R(11)=R(13);
  { R(12)+=R(4); goto L8c0cda68; }
L8c0cda60:;
  { uint32_t tg=R(10); c->pr=0x8c0cda64u; R(4)=R(12); sh4_call(c,tg); }
  R(11)+=0x1u;
  R(12)+=0x54u;
L8c0cda68:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3));
  R(2)+=0x1u;
  c->t=(int32_t)R(11)>=(int32_t)R(2);
  if(!c->t) goto L8c0cda60;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3));
  { uint32_t tg=R(1); c->pr=0x8c0cda90u;  sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(0)=0x38u;
  ST16(R(2)+R(0),R(13));
  R(3)=LD32(R(14));
  ST32(R(3)+32,R(13));
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(13));
  R(3)=LD32(R(14));
  R(0)=0x3au;
  R(5)=R(13);
  ST16(R(3)+R(0),R(13));
  R(3)=0x1080u;
  R(4)=LD32(R(14));
  { R(4)+=R(3); goto L8c0cdaba; }
L8c0cdaae:;
  R(0)=0x4cu;
  ST16(R(4)+R(0),R(13));
  R(5)+=0x1u;
  R(3)=LD32(R(14));
  ST32(R(4),R(3));
  R(4)+=0x54u;
L8c0cdaba:;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0cdaae;
  R(3)=LD32(R(14));
  R(7)=0x0u;
  R(1)=0x1080u;
  R(5)=R(7);
  R(2)=R(3);
  R(6)=R(7);
  R(1)+=R(2);
  ST32(R(3)+20,R(1));
  R(3)=LD32(R(14));
  R(1)=0x1080u;
  R(2)=R(3);
  R(1)+=R(2);
  R(1)+=0x54u;
  ST32(R(3)+24,R(1));
  R(4)=LD32(R(14));
  { c->pr=0x8c0cdae6u; R(4)=LD32(R(4)+20); f_8c0cdd48(c); }
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
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0cd60c(c); return; } }
L8c0cdb08:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cdb24(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0f4310u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(1));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cdb3e;
  R(2)=0x8c0d0468u;
  { c->pr=0x8c0cdb3eu;  f_8c0d0468(c); }
L8c0cdb3e:;
  R(3)=0x8c0f4314u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cdb4c;
  R(1)=0x8c0d0468u;
  { c->pr=0x8c0cdb4cu;  f_8c0d0468(c); }
L8c0cdb4c:;
  R(11)=0x8c0f430cu;
  R(12)=0x0u;
  R(2)=0x8c0f4314u;
  R(14)=R(12);
  R(3)=0x8c0f4310u;
  R(10)=0x8c0ce6d8u;
  R(1)=0x1080u;
  ST32(R(3),R(12));
  ST32(R(2),R(12));
  R(13)=LD32(R(11));
  { R(13)+=R(1); goto L8c0cdb6c; }
L8c0cdb64:;
  { uint32_t tg=R(10); c->pr=0x8c0cdb68u; R(4)=R(13); sh4_call(c,tg); }
  R(14)+=0x1u;
  R(13)+=0x54u;
L8c0cdb6c:;
  R(2)=LD32(R(11));
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c0cdb64;
  ST32(R(11),R(12));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cdb86(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  c->t=(R(13)&R(13))==0;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(9)=0x8c0f430cu;
  { uint32_t k=!c->t; R(14)=LD32(R(9)); if(k) goto L8c0cdba2; }
  R(13)=LD32(R(14)+16);
L8c0cdba2:;
  R(11)=0x8c2eafecu;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  R(10)=LD32(R(11));
  c->t=(int32_t)R(0)==47;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0cdbb4; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==92;
  if(!c->t) goto L8c0cdbf2;
L8c0cdbb4:;
  R(0)=(int32_t)(int16_t)LD16(R(10));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cdbd4;
  R(2)=0x8u;
  R(4)=R(14);
  R(3)=0x8c0d794au;
  R(2)+=R(10);
  R(4)+=0x40u;
  R(7)=R(12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14)+4);
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c0cdbd0u; R(4)+=0x40u; f_8c0d794a(c); }
  { R(15)+=0x4u; goto L8c0cdbe4; }
L8c0cdbd4:;
  R(4)=R(14);
  R(3)=0x8c0d784au;
  R(5)=LD32(R(14)+4);
  R(7)=R(12);
  R(6)=LD32(R(14)+8);
  R(4)+=0x40u;
  { c->pr=0x8c0cdbe4u; R(4)+=0x40u; f_8c0d784a(c); }
L8c0cdbe4:;
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cdc02;
  R(7)=0x800u;
  R(12)=0x96u;
  { R(12)+=R(4); goto L8c0cdc54; }
L8c0cdbf2:;
  R(3)=0x8c0d77dau;
  R(6)=0x0u;
  R(5)=LD32(R(14)+16);
  { c->pr=0x8c0cdbfcu; R(4)=R(12); f_8c0d77da(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0cdc06;
L8c0cdc02:;
  { R(0)=0xfffffff8u; goto L8c0cdc82; }
L8c0cdc06:;
  R(5)+=0xffffffffu;
  R(4)=LD32(R(9));
  R(3)=0x2cu;
  c->macl=R(5)*R(3);
  R(4)=LD32(R(4)+16);
  R(4)+=0x10u;
  R(5)=c->macl;
  R(4)+=R(5);
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c0cdc4c;
  { R(0)=0xfffffff5u; goto L8c0cdc82; }
L8c0cdc4c:;
  R(12)=LD32(R(4));
  R(3)=0x96u;
  R(7)=LD32(R(4)+4);
  R(12)+=R(3);
L8c0cdc54:;
  R(4)=LD32(R(9));
  R(6)=R(13);
  R(3)=0x8c0d770au;
  R(5)=R(12);
  { c->pr=0x8c0cdc60u; R(4)+=0x40u; f_8c0d770a(c); }
  R(14)=R(0);
  R(0)=LD32(R(11));
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cdc80;
  R(2)=LD32(R(11));
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(12);
  if(!c->t) goto L8c0cdc80;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cdc7c;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-12;
  if(!c->t) goto L8c0cdc80;
L8c0cdc7c:;
  { c->pr=0x8c0cdc80u; R(4)=R(13); f_8c0cd5e2(c); }
L8c0cdc80:;
  R(0)=R(14);
L8c0cdc82:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cdc92(SH4Ctx *c) {
  {  { f_8c0cdb86(c); return; } }
}
void f_8c0cdc96(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f430cu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(3));
  R(11)=LD32(R(4));
  R(13)=LD32(R(13)+16);
  R(12)=LD32(R(13)+4);
  c->t=(int32_t)R(12)>(int32_t)R(11);
  { uint32_t k=!c->t; R(2)=LD32(R(4)+8); if(k) goto L8c0cdcba; }
  { R(10)=R(11); goto L8c0cdcbc; }
L8c0cdcba:;
  R(10)=R(12);
L8c0cdcbc:;
  R(8)=R(4);
  R(9)=R(13);
  c->t=(int32_t)R(10)>0;
  R(8)+=0x10u;
  R(14)=0x0u;
  ST32(R(13)+8,R(2));
  { uint32_t k=!c->t; R(9)+=0x10u; if(k) goto L8c0cdce0; }
L8c0cdccc:;
  R(5)=R(9);
  R(2)=0x8c0d7568u;
  R(4)=R(8);
  R(6)=0x2cu;
  R(9)+=0x2cu;
  { c->pr=0x8c0cdcdau; R(8)+=0x2cu; f_8c0d7568(c); }
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  if(!c->t) goto L8c0cdccc;
L8c0cdce0:;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  { uint32_t k=c->t; ST32(R(13),R(14)); if(k) goto L8c0cdcea; }
  { R(0)=0xfffffff4u; goto L8c0cdcec; }
L8c0cdcea:;
  R(0)=0x0u;
L8c0cdcec:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cdcfe(SH4Ctx *c) {
  R(3)=0x8c0f430cu;
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  R(2)=0x8c0d77dau;
  { c->pr=0x8c0cdd10u; R(5)=LD32(R(5)+16); f_8c0d77da(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0cdd1e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xfffffff8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0cdd1e:;
  R(2)=0x2cu;
  R(3)=0x8c0f430cu;
  R(5)+=0xffffffffu;
  R(1)=0x96u;
  c->macl=R(5)*R(2);
  R(4)=LD32(R(3));
  R(4)=LD32(R(4)+16);
  R(5)=c->macl;
  R(4)+=0x10u;
  R(4)+=R(5);
  R(0)=LD32(R(4));
  R(0)+=R(1);
  ST32(R(14),R(0));
  R(3)=LD32(R(4)+4);
  ST32(R(14)+4,R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  ST8(R(14)+8,R(0));
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cdd48(SH4Ctx *c) {
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0cdd68;
  { R(0)=0x0u; return; }
L8c0cdd68:;
  R(3)=0x7ffu;
  R(2)=R(7);
  R(1)=0xfffffff5u;
  ST32(R(4)+4,R(5));
  R(2)+=R(3);
  ST32(R(4)+8,R(6));
  R(5)=0x0u;
  ST32(R(4)+12,R(7));
  R(2)=sh4_shad(R(2),R(1));
  R(0)=0x40u;
  ST32(R(4)+16,R(2));
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(5));
  ST32(R(4)+32,R(5));
  ST32(R(4)+36,R(5));
  ST32(R(4)+44,R(5));
  ST32(R(4)+52,R(5));
  ST32(R(4)+60,R(5));
  ST32(R(4)+R(0),R(5));
  R(0)=0x44u;
  ST32(R(4)+R(0),R(5));
  R(0)=0x48u;
  ST16(R(4)+R(0),R(5));
  R(0)=0x4au;
  ST16(R(4)+R(0),R(5));
  R(0)=0x4cu;
  R(2)=0x1u;
  ST16(R(4)+R(0),R(2));
  R(0)=0x4eu;
  R(2)=0x8c0f2fc8u;
  R(1)=(int32_t)(int16_t)LD16(R(2));
  ST16(R(4)+R(0),R(1));
  R(0)=0x50u;
  ST16(R(4)+R(0),R(5));
  R(0)=0x52u;
  ST16(R(4)+R(0),R(5));
  R(0)=R(4);
  {  return; }
}
void f_8c0cddb8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  c->t=(R(13)&R(13))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c0cddce; }
  R(3)=0x8c0f430cu;
  R(13)=LD32(R(3));
  R(13)=LD32(R(13)+16);
L8c0cddce:;
  R(2)=0x8c0d77dau;
  { c->pr=0x8c0cddd4u; R(5)=R(13); f_8c0d77da(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0cdde2;
  { c->pr=0x8c0cdddeu; R(4)=0xfffffff8u; f_8c0cd2ec(c); }
  {  goto L8c0cde24; }
L8c0cdde2:;
  R(7)=R(5);
  R(2)=0x8c0f430cu;
  R(7)+=0xffffffffu;
  R(12)=0x96u;
  R(3)=0x2cu;
  R(6)=LD32(R(2));
  c->macl=R(7)*R(3);
  R(14)=LD32(R(6)+24);
  R(4)=0x0u;
  { R(7)=c->macl; goto L8c0cde1a; }
L8c0cddf8:;
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cde16;
  R(13)+=0x10u;
  R(13)+=R(7);
  R(6)=LD32(R(13));
  R(7)=LD32(R(13)+4);
  R(6)+=R(12);
  { c->pr=0x8c0cde0eu; R(4)=R(14); f_8c0cdd48(c); }
  { c->pr=0x8c0cde12u; R(4)=0x0u; f_8c0cd2ec(c); }
  { R(0)=R(14); goto L8c0cde26; }
L8c0cde16:;
  R(14)+=0x54u;
  R(4)+=0x1u;
L8c0cde1a:;
  R(3)=LD32(R(6));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c0cddf8;
  { c->pr=0x8c0cde24u; R(4)=0xfffffff7u; f_8c0cd2ec(c); }
L8c0cde24:;
  R(0)=0x0u;
L8c0cde26:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cde30(SH4Ctx *c) {
  {  { f_8c0cddb8(c); return; } }
}
void f_8c0cde34(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(3)=0xb05eu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(c->t) goto L8c0cde4c;
  { c->pr=0x8c0cde48u; R(4)=0xffffffe0u; f_8c0cd2ec(c); }
  {  goto L8c0cde9a; }
L8c0cde4c:;
  R(2)=0x8c0f430cu;
  R(12)=R(5);
  R(12)<<=8;
  R(6)=LD32(R(2));
  R(12)<<=2;
  R(4)=0x0u;
  R(14)=LD32(R(6)+24);
  { c->t=R(12)>>31;R(12)<<=1; goto L8c0cde90; }
L8c0cde5e:;
  R(0)=0x4cu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0cde8c;
  R(5)=0x0u;
  R(6)=R(13);
  R(7)=R(12);
  { c->pr=0x8c0cde70u; R(4)=R(14); f_8c0cdd48(c); }
  { c->pr=0x8c0cde74u; R(4)=0x0u; f_8c0cd2ec(c); }
  { R(0)=R(14); goto L8c0cde9c; }
L8c0cde8c:;
  R(14)+=0x54u;
  R(4)+=0x1u;
L8c0cde90:;
  R(2)=LD32(R(6));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0cde5e;
  { c->pr=0x8c0cde9au; R(4)=0xfffffff7u; f_8c0cd2ec(c); }
L8c0cde9a:;
  R(0)=0x0u;
L8c0cde9c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cdea6(SH4Ctx *c) {
  R(2)=0x8c0f430cu;
  R(0)=0x40u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+12);
  R(0)=LD32(R(1)+R(0));
  { uint32_t tg=R(0); c->pr=0x8c0cdeb6u;  sh4_call(c,tg); }
  R(2)=0x8c0f430cu;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+28);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0cdec4;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0cd2f6(c); return; } }
L8c0cdec4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cdeca(SH4Ctx *c) {
  R(1)=0x8c0f430cu;
  R(0)=LD32(R(1));
  { R(0)=LD32(R(0)+48); return; }
}
void f_8c0cded2(SH4Ctx *c) {
  R(3)=0x8c0f430cu;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(0)+28); return; }
}
void f_8c0cdeda(SH4Ctx *c) {
  R(3)=0x8c0f430cu;
  R(0)=LD32(R(3));
  { R(0)=LD32(R(0)+20); return; }
}
void f_8c0cdee2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0f430cu;
  R(7)=0x0u;
  ST32(R(15),R(4));
  R(6)=R(7);
  R(2)=0x8c0ce666u;
  ST32(R(15)+4,R(5));
  R(5)=R(7);
  R(4)=LD32(R(3));
  { c->pr=0x8c0cdefcu; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0cdf0c;
  R(0)=0xfffffff3u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0cdf0c:;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+8,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(1)=0x8c0f430cu;
  R(5)=LD32(R(15)+4);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+12);
  R(0)=LD32(R(3)+56);
  { uint32_t tg=R(0); c->pr=0x8c0cdf2eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cdf40;
  R(0)=0x50u;
  ST32(R(14)+60,R(4));
  R(3)=0x4u;
  ST16(R(14)+R(0),R(3));
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(14));
L8c0cdf40:;
  R(0)=LD32(R(15)+8);
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cdf5a;
  { R(4)=0xfffffff3u; goto L8c0cdf62; }
L8c0cdf5a:;
  R(2)=0x8c0ce5d4u;
  { c->pr=0x8c0cdf60u; R(4)=R(14); f_8c0ce5d4(c); }
  R(4)=R(0);
L8c0cdf62:;
  R(0)=R(4);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cdf0c(SH4Ctx *c) {
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+8,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(1)=0x8c0f430cu;
  R(5)=LD32(R(15)+4);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+12);
  R(0)=LD32(R(3)+56);
  { uint32_t tg=R(0); c->pr=0x8c0cdf2eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cdf40;
  R(0)=0x50u;
  ST32(R(14)+60,R(4));
  R(3)=0x4u;
  ST16(R(14)+R(0),R(3));
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(14));
L8c0cdf40:;
  R(0)=LD32(R(15)+8);
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cdf5a;
  { R(4)=0xfffffff3u; goto L8c0cdf62; }
L8c0cdf5a:;
  R(2)=0x8c0ce5d4u;
  { c->pr=0x8c0cdf60u; R(4)=R(14); f_8c0ce5d4(c); }
  R(4)=R(0);
L8c0cdf62:;
  R(0)=R(4);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cdf6c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c0f430cu;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+12);
  R(0)=LD32(R(1)+32);
  { uint32_t tg=R(0); c->pr=0x8c0cdf7cu; R(4)=R(15); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cdf8a;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0cdf8a:;
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cdfa4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=0x8c0f430cu;
  R(7)=0x0u;
  R(3)=0x8c0ce666u;
  R(6)=R(7);
  R(4)=LD32(R(12));
  R(5)=R(7);
  { c->pr=0x8c0cdfbeu; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ce022;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(13)=LD32(R(12));
  R(5)=0xeu;
  R(6)=LD32(R(12));
  R(13)=LD32(R(13)+12);
  R(6)+=0x40u;
  R(13)=LD32(R(13)+60);
  { uint32_t tg=R(13); c->pr=0x8c0cdfe8u; R(4)=0x1u; sh4_call(c,tg); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ce00c;
  R(0)=0x50u;
  ST32(R(14)+60,R(13));
  R(2)=0x4u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x48u;
  R(3)=0xau;
  ST16(R(14)+R(0),R(3));
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(14));
  R(3)=LD32(R(12));
  R(0)=0x40u;
  R(2)=LD32(R(3)+12);
  R(1)=LD32(R(2)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ce00cu;  sh4_call(c,tg); }
L8c0ce00c:;
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0ce026;
L8c0ce022:;
  { R(0)=0xfffffff3u; goto L8c0ce028; }
L8c0ce026:;
  R(0)=0x0u;
L8c0ce028:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce034(SH4Ctx *c) {
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  R(6)=R(0);
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(7)=0x8c0f430cu;
  R(0)=R(6);
  R(0)&=0xfu;
  R(2)=LD32(R(7));
  R(0)<<=2;
  R(0)<<=2;
  ST32(R(2)+36,R(4));
  R(3)=LD32(R(7));
  R(2)=sh4_getsr(c);
  ST32(R(3)+40,R(5));
  R(3)=0xffffff0fu;
  R(2)&=R(3);
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  {  return; }
}
void f_8c0ce074(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c2eafecu;
  R(11)=R(4);
  ST32(R(15),R(6));
  R(4)=LD32(R(3));
  R(0)=(int32_t)(int16_t)LD16(R(4));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(10)=R(5); if(k) goto L8c0ce09c; }
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(5)=R(0);
  R(5)+=0xfffffffcu;
  R(10)+=R(5);
  R(11)+=R(5);
L8c0ce09c:;
  R(3)=0x3u;
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(!c->t) goto L8c0ce144;
  R(13)=0x8c0f430cu;
  R(7)=0x0u;
  R(3)=0x8c0ce666u;
  R(6)=R(7);
  R(4)=LD32(R(13));
  R(5)=R(7);
  { c->pr=0x8c0ce0b2u; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ce144;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(12)=LD32(R(13));
  R(5)=R(10);
  R(6)=LD32(R(15));
  R(12)=LD32(R(12)+12);
  R(12)=LD32(R(12)+40);
  { uint32_t tg=R(12); c->pr=0x8c0ce0dau; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0ce12e;
  R(0)=0x50u;
  ST32(R(14)+60,R(12));
  R(2)=0x4u;
  ST16(R(14)+R(0),R(2));
  R(3)=LD32(R(13));
  R(2)=0x10001u;
  R(1)=LD32(R(3)+44);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(!c->t) goto L8c0ce118;
  R(1)=LD32(R(13));
  R(4)=0x1u;
  R(3)=0x8c2eaffcu;
  R(0)=0x3au;
  R(2)=0x8c2eb000u;
  ST16(R(1)+R(0),R(4));
  ST32(R(3),R(4));
  R(0)=0x8c2eb008u;
  ST32(R(2),R(11));
  R(2)=0x8c2eb00cu;
  R(1)=0x8c2eb004u;
  ST32(R(1),R(10));
  R(3)=LD32(R(15));
  ST32(R(0),R(3));
  R(3)=0x8u;
  R(0)=0x48u;
  ST32(R(14)+4,R(2));
  { ST16(R(14)+R(0),R(3)); goto L8c0ce11e; }
L8c0ce118:;
  R(0)=0x48u;
  R(1)=0x6u;
  ST16(R(14)+R(0),R(1));
L8c0ce11e:;
  R(3)=LD32(R(14));
  ST32(R(3)+28,R(14));
  R(2)=LD32(R(13));
  R(0)=0x40u;
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ce12eu;  sh4_call(c,tg); }
L8c0ce12e:;
  R(0)=LD32(R(15)+4);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0ce148;
L8c0ce144:;
  { R(0)=0xfffffff3u; goto L8c0ce14a; }
L8c0ce148:;
  R(0)=0x0u;
L8c0ce14a:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce180(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0xb05eu;
  R(11)=R(4);
  ST32(R(15)+4,R(5));
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  { uint32_t k=!c->t; ST32(R(15),R(6)); if(k) goto L8c0ce23e; }
  R(13)=0x8c0f430cu;
  R(7)=0x0u;
  R(3)=0x8c0ce666u;
  R(6)=R(7);
  R(4)=LD32(R(13));
  R(5)=R(7);
  { c->pr=0x8c0ce1a8u; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ce23e;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+8,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(12)=LD32(R(13));
  R(5)=LD32(R(15)+4);
  R(12)=LD32(R(12)+12);
  R(6)=LD32(R(15));
  R(12)=LD32(R(12)+44);
  { uint32_t tg=R(12); c->pr=0x8c0ce1d0u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0ce228;
  R(0)=0x50u;
  ST32(R(14)+60,R(12));
  R(2)=0x4u;
  ST16(R(14)+R(0),R(2));
  R(3)=LD32(R(13));
  R(2)=0x10001u;
  R(1)=LD32(R(3)+44);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(!c->t) goto L8c0ce212;
  R(3)=LD32(R(13));
  R(0)=0x3au;
  R(1)=0x1u;
  R(2)=0x8c2eb000u;
  ST16(R(3)+R(0),R(1));
  R(3)=0x2u;
  R(1)=0x8c2eaffcu;
  R(0)=0x8c2eb004u;
  ST32(R(1),R(3));
  ST32(R(2),R(11));
  R(2)=0x8u;
  R(3)=LD32(R(15)+4);
  ST32(R(0),R(3));
  R(0)=0x48u;
  R(1)=LD32(R(15));
  R(3)=0x8c2eb008u;
  ST32(R(3),R(1));
  R(1)=0x8c2eb00cu;
  ST32(R(14)+4,R(1));
  { ST16(R(14)+R(0),R(2)); goto L8c0ce218; }
L8c0ce212:;
  R(0)=0x48u;
  R(3)=0x6u;
  ST16(R(14)+R(0),R(3));
L8c0ce218:;
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(14));
  R(3)=LD32(R(13));
  R(0)=0x40u;
  R(2)=LD32(R(3)+12);
  R(1)=LD32(R(2)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ce228u;  sh4_call(c,tg); }
L8c0ce228:;
  R(0)=LD32(R(15)+8);
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0ce242;
L8c0ce23e:;
  { R(0)=0xfffffff3u; goto L8c0ce244; }
L8c0ce242:;
  R(0)=0x0u;
L8c0ce244:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce278(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0f430cu;
  R(7)=0x0u;
  R(3)=0x8c0ce666u;
  R(6)=R(7);
  R(4)=LD32(R(13));
  R(5)=R(7);
  { c->pr=0x8c0ce292u; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ce310;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(12)=LD32(R(13));
  R(12)=LD32(R(12)+12);
  R(12)=LD32(R(12)+48);
  { uint32_t tg=R(12); c->pr=0x8c0ce2b6u;  sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0ce2fa;
  R(0)=0x50u;
  ST32(R(14)+60,R(12));
  R(2)=0x4u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x3au;
  R(3)=LD32(R(13));
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ce2e4;
  R(2)=LD32(R(13));
  R(3)=0x10001u;
  R(1)=LD32(R(2)+44);
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(!c->t) goto L8c0ce2e4;
  R(0)=0x8c2eb010u;
  R(3)=0x8u;
  ST32(R(14)+4,R(0));
  R(0)=0x48u;
  { ST16(R(14)+R(0),R(3)); goto L8c0ce2ea; }
L8c0ce2e4:;
  R(0)=0x48u;
  R(1)=0x6u;
  ST16(R(14)+R(0),R(1));
L8c0ce2ea:;
  R(3)=LD32(R(14));
  ST32(R(3)+28,R(14));
  R(2)=LD32(R(13));
  R(0)=0x40u;
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ce2fau;  sh4_call(c,tg); }
L8c0ce2fa:;
  R(0)=LD32(R(15));
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0ce314;
L8c0ce310:;
  { R(0)=0xfffffff3u; goto L8c0ce316; }
L8c0ce314:;
  R(0)=0x0u;
L8c0ce316:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce322(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0f430cu;
  R(7)=0x0u;
  R(3)=0x8c0ce666u;
  R(6)=R(7);
  R(4)=LD32(R(13));
  R(5)=R(7);
  { c->pr=0x8c0ce33cu; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ce3cc;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(12)=LD32(R(13));
  R(12)=LD32(R(12)+12);
  R(12)=LD32(R(12)+48);
  { uint32_t tg=R(12); c->pr=0x8c0ce360u;  sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0ce3b6;
  R(0)=0x50u;
  ST32(R(14)+60,R(12));
  R(2)=0x4u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x3au;
  R(3)=LD32(R(13));
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ce3a0;
  R(2)=LD32(R(13));
  R(3)=0x10001u;
  R(1)=LD32(R(2)+44);
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(!c->t) goto L8c0ce3a0;
  R(0)=0x8c2eb010u;
  R(3)=0x8u;
  ST32(R(14)+4,R(0));
  R(0)=0x48u;
  { ST16(R(14)+R(0),R(3)); goto L8c0ce3a6; }
L8c0ce3a0:;
  R(0)=0x48u;
  R(1)=0x6u;
  ST16(R(14)+R(0),R(1));
L8c0ce3a6:;
  R(3)=LD32(R(14));
  ST32(R(3)+28,R(14));
  R(2)=LD32(R(13));
  R(0)=0x40u;
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ce3b6u;  sh4_call(c,tg); }
L8c0ce3b6:;
  R(0)=LD32(R(15));
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0ce3d0;
L8c0ce3cc:;
  { R(0)=0xfffffff3u; goto L8c0ce3d2; }
L8c0ce3d0:;
  R(0)=0x0u;
L8c0ce3d2:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce3de(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(11)=0x8c0f430cu;
  R(7)=0x0u;
  ST32(R(15),R(4));
  R(6)=R(7);
  R(4)=LD32(R(11));
  R(5)=R(7);
  R(3)=0x8c0ce666u;
  { c->pr=0x8c0ce3fcu; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ce4ea;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(4)=LD32(R(11));
  R(0)=0x3au;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ce432;
  R(0)=0x8c2eb00cu;
  R(1)=0x8c2eb010u;
  R(2)=LD32(R(0));
  R(3)=LD32(R(1));
  c->t=R(2)==R(3);
  if(c->t) goto L8c0ce432;
  R(0)=0x3au;
  R(3)=0x0u;
  ST16(R(4)+R(0),R(3));
L8c0ce432:;
  R(12)=LD32(R(11));
  R(0)=0x3au;
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ce4a8;
  R(2)=LD32(R(12)+44);
  R(3)=0x10001u;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c0ce4a8;
  R(3)=0x8c2eb004u;
  R(0)=0x8c2eb008u;
  R(5)=LD32(R(3));
  R(3)=0x8c2eaffcu;
  R(6)=LD32(R(0));
  R(0)=LD32(R(3));
  R(2)=0x8c2eb000u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=LD32(R(2)); if(k) goto L8c0ce45e; }
  R(13)=LD32(R(12)+12);
  { R(13)=LD32(R(13)+40); goto L8c0ce462; }
L8c0ce45e:;
  R(13)=LD32(R(12)+12);
  R(13)=LD32(R(13)+44);
L8c0ce462:;
  { uint32_t tg=R(13); c->pr=0x8c0ce466u;  sh4_call(c,tg); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ce4d4;
  R(0)=0x50u;
  R(3)=0x8c2eb00cu;
  R(2)=0x4u;
  ST32(R(14)+60,R(13));
  ST16(R(14)+R(0),R(2));
  R(2)=0x8u;
  R(0)=0x48u;
  ST32(R(14)+4,R(3));
  { ST16(R(14)+R(0),R(2)); goto L8c0ce4c4; }
L8c0ce4a8:;
  R(13)=LD32(R(12)+12);
  R(13)=LD32(R(13)+52);
  { uint32_t tg=R(13); c->pr=0x8c0ce4b0u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ce4d4;
  R(0)=0x50u;
  ST32(R(14)+60,R(13));
  R(2)=0x4u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x48u;
  R(3)=0x6u;
  ST16(R(14)+R(0),R(3));
L8c0ce4c4:;
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(14));
  R(3)=LD32(R(11));
  R(0)=0x40u;
  R(2)=LD32(R(3)+12);
  R(1)=LD32(R(2)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ce4d4u;  sh4_call(c,tg); }
L8c0ce4d4:;
  R(0)=LD32(R(15)+4);
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0ce4ee;
L8c0ce4ea:;
  { R(0)=0xfffffff3u; goto L8c0ce4f0; }
L8c0ce4ee:;
  R(0)=0x0u;
L8c0ce4f0:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce4fe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x8c0f430cu;
  R(7)=0x0u;
  ST32(R(15),R(4));
  R(6)=R(7);
  R(4)=LD32(R(12));
  R(5)=R(7);
  R(3)=0x8c0ce666u;
  { c->pr=0x8c0ce51au; R(4)=LD32(R(4)+20); f_8c0ce666(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ce582;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(13)=LD32(R(12));
  R(5)=0x64u;
  R(6)=LD32(R(12));
  R(13)=LD32(R(13)+12);
  R(6)+=0x40u;
  R(13)=LD32(R(13)+60);
  { uint32_t tg=R(13); c->pr=0x8c0ce544u; R(4)=0x0u; sh4_call(c,tg); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ce56c;
  R(0)=0x50u;
  ST32(R(14)+60,R(13));
  R(2)=0x4u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x48u;
  R(3)=0x7u;
  ST16(R(14)+R(0),R(3));
  R(2)=LD32(R(15));
  ST32(R(14)+8,R(2));
  R(3)=LD32(R(14));
  ST32(R(3)+28,R(14));
  R(2)=LD32(R(12));
  R(0)=0x40u;
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ce56cu;  sh4_call(c,tg); }
L8c0ce56c:;
  R(0)=LD32(R(15)+4);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0ce586;
L8c0ce582:;
  { R(0)=0xfffffff3u; goto L8c0ce588; }
L8c0ce586:;
  R(0)=0x0u;
L8c0ce588:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce594(SH4Ctx *c) {
  R(3)=0x8c0f430cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  R(0)=LD32(R(0)+52);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ce5b2;
  { c->pr=0x8c0ce5a4u;  f_8c0cdf6c(c); }
  c->t=(int32_t)R(0)==6;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0ce5b8; }
  R(2)=0x8c0f430cu;
  R(1)=0x1u;
  R(3)=LD32(R(2));
  ST32(R(3)+52,R(1));
L8c0ce5b2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c0ce5b8:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ce5c0;
  { c->pr=0x8c0ce5c0u;  f_8c0cdfa4(c); }
L8c0ce5c0:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ce5d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0d115eu;
  { c->pr=0x8c0ce5eau; R(11)=LD32(R(14)+24); f_8c0d115e(c); }
  R(10)=0xee6b28u;
  R(12)=R(0);
  R(9)=0x8c0d1168u;
L8c0ce5f0:;
  R(2)=LD32(R(14));
  R(0)=0x48u;
  R(3)=LD32(R(2)+60);
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ce5fcu;  sh4_call(c,tg); }
  { c->pr=0x8c0ce600u; R(4)=R(14); f_8c0cec88(c); }
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ce622; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ce626;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ce62a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0ce62a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0ce62a;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0ce63a;
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0ce63a;
  {  goto L8c0ce640; }
L8c0ce622:;
  { R(0)=0xffffffe0u; goto L8c0ce656; }
L8c0ce626:;
  { R(0)=0x0u; goto L8c0ce656; }
L8c0ce62a:;
  R(2)=LD32(R(14)+24);
  c->t=R(11)==R(2);
  if(c->t) goto L8c0ce644;
  { uint32_t tg=R(13); c->pr=0x8c0ce634u;  sh4_call(c,tg); }
  R(12)=R(0);
  { R(11)=LD32(R(14)+24); goto L8c0ce644; }
L8c0ce63a:;
  R(0)=0x52u;
  { R(0)=(int32_t)(int16_t)LD16(R(14)+R(0)); goto L8c0ce656; }
L8c0ce640:;
  { R(0)=0xffffffe7u; goto L8c0ce656; }
L8c0ce644:;
  { uint32_t tg=R(13); c->pr=0x8c0ce648u;  sh4_call(c,tg); }
  R(5)=R(0);
  { uint32_t tg=R(9); c->pr=0x8c0ce64eu; R(4)=R(12); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=R(4)>R(10);
  if(!c->t) goto L8c0ce5f0;
  R(0)=0xffffffebu;
L8c0ce656:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce666(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ce672;
  R(3)=LD32(R(4));
  R(2)=LD32(R(3)+28);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0ce676;
L8c0ce672:;
  { R(0)=0x0u; return; }
L8c0ce676:;
  ST32(R(4)+4,R(5));
  R(5)=0x0u;
  R(0)=0x44u;
  R(3)=0x7ffu;
  R(2)=R(7);
  R(1)=0xfffffff5u;
  R(2)+=R(3);
  ST32(R(4)+8,R(6));
  R(2)=sh4_shad(R(2),R(1));
  ST32(R(4)+12,R(7));
  ST32(R(4)+16,R(2));
  R(2)=0x1u;
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(5));
  ST32(R(4)+32,R(5));
  ST32(R(4)+60,R(5));
  ST32(R(4)+R(0),R(5));
  R(0)=0x48u;
  ST16(R(4)+R(0),R(5));
  R(0)=0x4au;
  ST16(R(4)+R(0),R(5));
  R(0)=0x4cu;
  ST16(R(4)+R(0),R(2));
  R(0)=0x50u;
  ST16(R(4)+R(0),R(5));
  R(0)=0x52u;
  ST16(R(4)+R(0),R(5));
  R(0)=R(4);
  {  return; }
}
void f_8c0ce6b4(SH4Ctx *c) {
  R(6)=0x0u;
  ST32(R(4),R(6));
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(6));
  { R(0)=R(4); return; }
}
void f_8c0ce6c0(SH4Ctx *c) {
  R(3)=0x8c0cef62u;
  { R(5)=0x0u; { f_8c0cef62(c); return; } }
}
void f_8c0ce6d8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ce70a;
  R(0)=0x4cu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ce70a;
  R(0)=0x50u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ce700; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0ce700;
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0ce704;
L8c0ce700:;
  { c->pr=0x8c0ce704u; R(4)=R(14); f_8c0cecb6(c); }
L8c0ce704:;
  R(0)=0x4cu;
  R(3)=0x0u;
  ST16(R(14)+R(0),R(3));
L8c0ce70a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce710(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ce71c;
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ce720;
L8c0ce71c:;
  { R(0)=0x0u; return; }
L8c0ce720:;
  R(3)=LD32(R(4)+12);
  R(0)=0x1u;
  ST32(R(5),R(3));
  {  return; }
}
void f_8c0ce720(SH4Ctx *c) {
  R(3)=LD32(R(4)+12);
  R(0)=0x1u;
  ST32(R(5),R(3));
  {  return; }
}
void f_8c0ce72a(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ce736;
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ce73a;
L8c0ce736:;
  { R(0)=0x0u; return; }
L8c0ce73a:;
  R(3)=LD32(R(4)+16);
  R(0)=0x1u;
  ST32(R(5),R(3));
  {  return; }
}
void f_8c0ce754(SH4Ctx *c) {
  R(3)=LD32(R(4)+8);
  R(0)=0x1u;
  ST32(R(5),R(3));
  {  return; }
}
void f_8c0ce75e(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ce76a;
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ce76e;
L8c0ce76a:;
  { R(0)=0xfffffff6u; return; }
L8c0ce76e:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(7)=LD32(R(4)+16); if(k) goto L8c0ce782; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ce786;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ce78c;
  {  goto L8c0ce792; }
L8c0ce782:;
  { R(6)=R(5); goto L8c0ce796; }
L8c0ce786:;
  R(6)=LD32(R(4)+20);
  { R(6)+=R(5); goto L8c0ce796; }
L8c0ce78c:;
  R(6)=R(5);
  { R(6)+=R(7); goto L8c0ce796; }
L8c0ce792:;
  { R(0)=0xfffffff0u; return; }
L8c0ce796:;
  c->t=(int32_t)R(6)>=0;
  if(!c->t) goto L8c0ce79e;
  c->t=(int32_t)R(6)>(int32_t)R(7);
  if(!c->t) goto L8c0ce7a2;
L8c0ce79e:;
  { R(0)=0xffffffefu; return; }
L8c0ce7a2:;
  R(0)=0x0u;
  ST32(R(4)+20,R(6));
  {  return; }
}
void f_8c0ce76e(SH4Ctx *c) {
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(7)=LD32(R(4)+16); if(k) goto L8c0ce782; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ce786;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ce78c;
  {  goto L8c0ce792; }
L8c0ce782:;
  { R(6)=R(5); goto L8c0ce796; }
L8c0ce786:;
  R(6)=LD32(R(4)+20);
  { R(6)+=R(5); goto L8c0ce796; }
L8c0ce78c:;
  R(6)=R(5);
  { R(6)+=R(7); goto L8c0ce796; }
L8c0ce792:;
  { R(0)=0xfffffff0u; return; }
L8c0ce796:;
  c->t=(int32_t)R(6)>=0;
  if(!c->t) goto L8c0ce79e;
  c->t=(int32_t)R(6)>(int32_t)R(7);
  if(!c->t) goto L8c0ce7a2;
L8c0ce79e:;
  { R(0)=0xffffffefu; return; }
L8c0ce7a2:;
  R(0)=0x0u;
  ST32(R(4)+20,R(6));
  {  return; }
}
void f_8c0ce796(SH4Ctx *c) {
  c->t=(int32_t)R(6)>=0;
  if(!c->t) goto L8c0ce79e;
  c->t=(int32_t)R(6)>(int32_t)R(7);
  if(!c->t) goto L8c0ce7a2;
L8c0ce79e:;
  { R(0)=0xffffffefu; return; }
L8c0ce7a2:;
  R(0)=0x0u;
  ST32(R(4)+20,R(6));
  {  return; }
}
void f_8c0ce7a2(SH4Ctx *c) {
  R(0)=0x0u;
  ST32(R(4)+20,R(6));
  {  return; }
}
void f_8c0ce7ba(SH4Ctx *c) {
  R(0)=LD32(R(4)+20);
  {  return; }
}
void f_8c0ce7d0(SH4Ctx *c) {
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+16);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c0ce7de;
  R(0)=0x1u;
  { ST32(R(5),R(0)); goto L8c0ce7e2; }
L8c0ce7de:;
  R(2)=0x0u;
  ST32(R(5),R(2));
L8c0ce7e2:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0ce7f8(SH4Ctx *c) {
  R(0)=0x4eu;
  ST16(R(4)+R(0),R(5));
  R(0)=0x0u;
  {  return; }
}
void f_8c0ce802(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x1fu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(6);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  c->t=(R(3)&R(11))==0;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c0ce824; }
  { R(9)=0x1u; goto L8c0ce826; }
L8c0ce824:;
  R(9)=R(4);
L8c0ce826:;
  R(10)=0x4e20u;
  R(8)=0xc350u;
  { R(13)=R(4); goto L8c0ce866; }
L8c0ce82e:;
  R(0)=R(9);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ce840;
  R(5)=R(12);
  R(6)=R(11);
  { c->pr=0x8c0ce83cu; R(4)=R(14); f_8c0ce968(c); }
  {  goto L8c0ce848; }
L8c0ce840:;
  R(5)=R(12);
  R(6)=R(11);
  { c->pr=0x8c0ce848u; R(4)=R(14); f_8c0ce890(c); }
L8c0ce848:;
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ce86a;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0ce86a;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+16);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c0ce86a;
  { R(5)=R(8); goto L8c0ce860; }
L8c0ce85e:;
  R(5)+=0xffffffffu;
L8c0ce860:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0ce85e;
  R(13)+=0x1u;
L8c0ce866:;
  c->t=(int32_t)R(13)>=(int32_t)R(10);
  if(!c->t) goto L8c0ce82e;
L8c0ce86a:;
  c->t=R(13)==R(10);
  if(!c->t) goto L8c0ce872;
  { R(0)=0xffffffebu; goto L8c0ce87e; }
L8c0ce872:;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0ce87c;
  { c->pr=0x8c0ce87au; R(4)=R(14); f_8c0ce5d4(c); }
  R(4)=R(0);
L8c0ce87c:;
  R(0)=R(4);
L8c0ce87e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce890(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c0ce8ac; }
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ce8b0;
L8c0ce8ac:;
  { R(0)=0xfffffff6u; goto L8c0ce95a; }
L8c0ce8b0:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0ce958;
  R(12)=LD32(R(14)+20);
  R(4)=LD32(R(14)+8);
  R(3)=LD32(R(14)+16);
  R(12)+=R(4);
  R(4)+=R(3);
  c->t=(int32_t)R(12)>=(int32_t)R(4);
  { uint32_t k=c->t; R(11)=0x1u; if(k) goto L8c0ce8d8; }
  R(3)=R(13);
  R(3)+=R(12);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  if(!c->t) goto L8c0ce8d4;
  R(13)=R(4);
  R(13)-=R(12);
L8c0ce8d4:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0ce8e8;
L8c0ce8d8:;
  R(2)=0x0u;
  R(0)=0x50u;
  ST32(R(14)+24,R(2));
  { ST16(R(14)+R(0),R(11)); goto L8c0ce958; }
L8c0ce8e8:;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=LD32(R(14));
  R(5)=R(13);
  R(7)=0x0u;
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+4);
  { uint32_t tg=R(1); c->pr=0x8c0ce90au; R(4)=R(12); sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0ce93a;
  R(2)=0x2u;
  ST32(R(14)+60,R(12));
  R(0)=0x50u;
  ST32(R(14)+28,R(13));
  ST16(R(14)+R(0),R(2));
  R(0)=0x4au;
  ST16(R(14)+R(0),R(11));
  R(3)=0x0u;
  R(0)=0x48u;
  ST16(R(14)+R(0),R(11));
  ST32(R(14)+24,R(3));
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(14));
  R(3)=LD32(R(14));
  R(0)=0x40u;
  R(2)=LD32(R(3)+12);
  R(1)=LD32(R(2)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ce936u;  sh4_call(c,tg); }
  {  goto L8c0ce93e; }
L8c0ce93a:;
  R(0)=0x50u;
  ST16(R(14)+R(0),R(11));
L8c0ce93e:;
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0ce958;
  { R(0)=R(13); goto L8c0ce95a; }
L8c0ce958:;
  R(0)=0x0u;
L8c0ce95a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ce968(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c0ce986; }
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ce98a;
L8c0ce986:;
  { R(0)=0xfffffff6u; goto L8c0cea42; }
L8c0ce98a:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0cea40;
  R(3)=0x1fu;
  c->t=(R(3)&R(6))==0;
  if(c->t) goto L8c0ce99c;
  { R(0)=0xfffffff2u; goto L8c0cea42; }
L8c0ce99c:;
  R(12)=LD32(R(14)+20);
  R(10)=0x0u;
  R(4)=LD32(R(14)+8);
  R(3)=LD32(R(14)+16);
  R(12)+=R(4);
  R(4)+=R(3);
  c->t=(int32_t)R(12)>=(int32_t)R(4);
  { uint32_t k=!c->t; R(11)=0x1u; if(k) goto L8c0ce9b6; }
  R(0)=0x50u;
  ST32(R(14)+24,R(10));
  { ST16(R(14)+R(0),R(11)); goto L8c0cea40; }
L8c0ce9b6:;
  R(2)=R(13);
  R(2)+=R(12);
  c->t=(int32_t)R(2)>(int32_t)R(4);
  if(!c->t) goto L8c0ce9c2;
  R(13)=R(4);
  R(13)-=R(12);
L8c0ce9c2:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0ce9d0;
  R(0)=0x50u;
  ST32(R(14)+24,R(10));
  { ST16(R(14)+R(0),R(11)); goto L8c0cea3c; }
L8c0ce9d0:;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=LD32(R(14));
  R(0)=0x4eu;
  R(7)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=R(13);
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+4);
  { uint32_t tg=R(1); c->pr=0x8c0ce9f4u; R(4)=R(12); sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0cea22;
  R(2)=0x2u;
  ST32(R(14)+60,R(12));
  R(0)=0x50u;
  ST32(R(14)+28,R(13));
  ST16(R(14)+R(0),R(2));
  R(0)=0x4au;
  ST16(R(14)+R(0),R(11));
  R(0)=0x48u;
  ST16(R(14)+R(0),R(11));
  ST32(R(14)+24,R(10));
  R(3)=LD32(R(14));
  ST32(R(3)+28,R(14));
  R(2)=LD32(R(14));
  R(0)=0x40u;
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0cea1eu;  sh4_call(c,tg); }
  {  goto L8c0cea26; }
L8c0cea22:;
  R(0)=0x50u;
  ST16(R(14)+R(0),R(11));
L8c0cea26:;
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0cea40;
L8c0cea3c:;
  { R(0)=R(13); goto L8c0cea42; }
L8c0cea40:;
  R(0)=0x0u;
L8c0cea42:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cea52(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c0cea70; }
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cea74;
L8c0cea70:;
  { R(0)=0xfffffff6u; goto L8c0ceb20; }
L8c0cea74:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0ceb1e;
  R(4)=LD32(R(14)+20);
  R(11)=0x0u;
  R(5)=LD32(R(14)+8);
  R(3)=LD32(R(14)+16);
  R(4)+=R(5);
  R(5)+=R(3);
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  { uint32_t k=!c->t; R(12)=0x1u; if(k) goto L8c0cea96; }
  R(0)=0x50u;
  ST32(R(14)+24,R(11));
  { ST16(R(14)+R(0),R(12)); goto L8c0ceb1e; }
L8c0cea96:;
  R(2)=R(13);
  R(2)+=R(4);
  c->t=(int32_t)R(2)>(int32_t)R(5);
  if(!c->t) goto L8c0ceaa2;
  R(13)=R(5);
  R(13)-=R(4);
L8c0ceaa2:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0ceaae;
  R(0)=0x50u;
  ST32(R(14)+24,R(11));
  { ST16(R(14)+R(0),R(12)); goto L8c0ceb1a; }
L8c0ceaae:;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(10)=LD32(R(14));
  R(10)=LD32(R(10)+12);
  R(10)=LD32(R(10)+8);
  { uint32_t tg=R(10); c->pr=0x8c0ceaccu; R(5)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0ceb00;
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(14));
  R(3)=0x2u;
  ST32(R(14)+60,R(10));
  R(0)=0x50u;
  ST32(R(14)+28,R(13));
  ST16(R(14)+R(0),R(3));
  R(0)=0x4au;
  ST16(R(14)+R(0),R(12));
  R(0)=0x48u;
  R(3)=0x4u;
  ST16(R(14)+R(0),R(3));
  R(0)=0x40u;
  ST32(R(14)+32,R(11));
  ST32(R(14)+24,R(11));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+12);
  R(1)=LD32(R(2)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ceafau;  sh4_call(c,tg); }
  {  goto L8c0ceb04; }
L8c0ceb00:;
  R(0)=0x50u;
  ST16(R(14)+R(0),R(12));
L8c0ceb04:;
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0ceb1e;
L8c0ceb1a:;
  { R(0)=R(13); goto L8c0ceb20; }
L8c0ceb1e:;
  R(0)=0x0u;
L8c0ceb20:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ceb30(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  R(13)=R(5);
  { uint32_t k=c->t; ST32(R(15),R(6)); if(k) goto L8c0ceb4a; }
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ceb4e;
L8c0ceb4a:;
  { R(0)=0xfffffff6u; goto L8c0cebd2; }
L8c0ceb4e:;
  R(3)=LD32(R(15));
  R(4)=0x1fu;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0ceb5a;
  { R(0)=0xfffffff2u; goto L8c0cebd2; }
L8c0ceb5a:;
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c0ceb62;
  { R(0)=0xfffffff1u; goto L8c0cebd2; }
L8c0ceb62:;
  R(0)=0x48u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0ceb6e;
  { R(0)=0xffffffecu; goto L8c0cebd2; }
L8c0ceb6e:;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=LD32(R(14));
  R(6)=R(13);
  R(5)=LD32(R(15));
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+12);
  { uint32_t tg=R(1); c->pr=0x8c0ceb90u; R(4)=LD32(R(14)+60); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0cebb2;
  R(0)=0x4au;
  R(2)=0x1u;
  ST16(R(14)+R(0),R(2));
  R(3)=0x0u;
  R(0)=0x40u;
  ST32(R(14)+32,R(13));
  ST32(R(14)+24,R(3));
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0cebaeu;  sh4_call(c,tg); }
  { R(4)=0x0u; goto L8c0cebbe; }
L8c0cebb2:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0cebbc;
  { R(4)=0xffffffe8u; goto L8c0cebbe; }
L8c0cebbc:;
  R(4)=0xfffffff3u;
L8c0cebbe:;
  R(0)=LD32(R(15)+4);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=R(4);
L8c0cebd2:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cebdc(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cebe8;
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cebec;
L8c0cebe8:;
  { R(0)=0xfffffff6u; return; }
L8c0cebec:;
  R(0)=0x4au;
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  {  return; }
}
void f_8c0cec88(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cec94;
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cec98;
L8c0cec94:;
  { R(0)=0xfffffff6u; return; }
L8c0cec98:;
  R(0)=0x50u;
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  {  return; }
}
void f_8c0ceca0(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cecac;
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cecb0;
L8c0cecac:;
  { R(0)=0x0u; return; }
L8c0cecb0:;
  R(0)=LD32(R(4)+24);
  {  return; }
}
void f_8c0cecb6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c0cecd4; }
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cecd8;
L8c0cecd4:;
  { R(0)=0xfffffff6u; goto L8c0cedd4; }
L8c0cecd8:;
  R(0)=0x50u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0cece8; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0ced10;
L8c0cece8:;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+28);
  c->t=R(3)==R(14);
  if(c->t) goto L8c0cecf6;
  { R(0)=0xfffffff3u; goto L8c0cedd4; }
L8c0cecf6:;
  R(12)=0x8c0d115eu;
  { c->pr=0x8c0cecfcu;  f_8c0d115e(c); }
  { R(10)=R(0); goto L8c0ced3a; }
L8c0ced00:;
  R(0)=0x50u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ced18; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0ced18;
L8c0ced10:;
  R(0)=0x50u;
  ST16(R(14)+R(0),R(13));
  { R(0)=0x0u; goto L8c0cedd4; }
L8c0ced18:;
  { uint32_t tg=R(12); c->pr=0x8c0ced1cu;  sh4_call(c,tg); }
  R(5)=R(0);
  { uint32_t tg=R(11); c->pr=0x8c0ced22u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=0xee6b28u;
  R(4)=R(0);
  c->t=R(4)>R(5);
  if(!c->t) goto L8c0ced2e;
  { R(0)=0xffffffebu; goto L8c0cedd4; }
L8c0ced2e:;
  R(2)=LD32(R(14));
  R(0)=0x48u;
  R(3)=LD32(R(2)+60);
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c0ced3au;  sh4_call(c,tg); }
L8c0ced3a:;
  R(11)=0x8c0d1168u;
  R(0)=0x40u;
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ced00;
  { uint32_t tg=R(12); c->pr=0x8c0ced48u;  sh4_call(c,tg); }
  R(10)=0x61bu;
  R(9)=R(0);
L8c0ced4c:;
  { uint32_t tg=R(12); c->pr=0x8c0ced50u;  sh4_call(c,tg); }
  R(5)=R(0);
  { uint32_t tg=R(11); c->pr=0x8c0ced56u; R(4)=R(9); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=R(4)>=R(10);
  if(!c->t) goto L8c0ced4c;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  R(12)=R(0);
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(0)=0x50u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0xfffffff3u;
  R(11)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ced8c; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0ced8c;
  R(0)=0x50u;
  ST16(R(14)+R(0),R(13));
  { R(4)=R(13); goto L8c0cedc0; }
L8c0ced8c:;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+28);
  c->t=R(3)==R(14);
  if(c->t) goto L8c0ced98;
  { R(4)=R(5); goto L8c0cedc0; }
L8c0ced98:;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+12);
  R(1)=LD32(R(3)+20);
  { uint32_t tg=R(1); c->pr=0x8c0ceda2u; R(4)=LD32(R(14)+60); sh4_call(c,tg); }
  R(0)=0x48u;
  R(2)=0xffffff0fu;
  ST16(R(14)+R(0),R(11));
  R(0)=R(12);
  R(3)=sh4_getsr(c);
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  { c->pr=0x8c0cedbcu; R(4)=R(14); f_8c0ce5d4(c); }
  { R(4)=R(0); goto L8c0cedd2; }
L8c0cedc0:;
  R(3)=sh4_getsr(c);
  R(0)=R(12);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
L8c0cedd2:;
  R(0)=R(4);
L8c0cedd4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cede4(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0cedf0;
  R(0)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cedf4;
L8c0cedf0:;
  { R(0)=0x0u; return; }
L8c0cedf4:;
  R(0)=0x52u;
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  {  return; }
}
void f_8c0ceece(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ceede;
  R(0)=LD32(R(14)+24);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0ceede:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ceee4(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ceef6;
  R(0)=0x4cu;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0ceef6:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ceefc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f2f48u;
  R(14)=0x8c0f4318u;
  R(2)=R(3);
  R(1)=R(2);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(14),R(3));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0cef10u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cef18(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cef28;
  R(0)=LD32(R(14)+16);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cef28:;
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cef2e(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cef46;
  R(1)=LD32(R(14)+20);
  { uint32_t tg=R(1); c->pr=0x8c0cef40u;  sh4_call(c,tg); }
  R(2)=0x8c0f4318u;
  R(3)=0x0u;
  ST32(R(2),R(3));
L8c0cef46:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cef4c(SH4Ctx *c) {
  R(1)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(1));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cef5c;
  R(0)=LD32(R(14)+56);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cef5c:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cef62(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cef72;
  R(0)=LD32(R(14)+32);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cef72:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cef78(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cef88;
  R(0)=LD32(R(14)+36);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cef88:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cef8e(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cef9e;
  R(0)=LD32(R(14)+40);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cef9e:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cefa4(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cefb4;
  R(0)=LD32(R(14)+44);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cefb4:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cefba(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cefca;
  R(0)=LD32(R(14)+60);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cefca:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cefd0(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cefe2;
  R(0)=0x40u;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cefe2:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cefe8(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ceffa;
  R(0)=0x44u;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0ceffa:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf000(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf010;
  R(0)=LD32(R(14)+48);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf010:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf016(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf026;
  R(0)=LD32(R(14)+52);
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf026:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf02c(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf03e;
  R(0)=0x48u;
  R(1)=LD32(R(14)+R(0));
  { uint32_t tg=R(1); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf03e:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf042(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf054;
  R(0)=0x74u;
  R(1)=LD32(R(14)+R(0));
  { uint32_t tg=R(1); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf054:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf058(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf06a;
  R(0)=0x50u;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf06a:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf070(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf082;
  R(0)=0x54u;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf082:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf088(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf09a;
  R(0)=0x58u;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf09a:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf0a0(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf0b2;
  R(0)=0x5cu;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf0b2:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf0b8(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf0ca;
  R(0)=0x60u;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf0ca:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf0d0(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf0e2;
  R(0)=0x64u;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf0e2:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf10a(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf11c;
  R(0)=0x6cu;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf11c:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf122(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf134;
  R(0)=0x70u;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf134:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf13a(SH4Ctx *c) {
  R(3)=0x8c0f4318u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf14c;
  R(0)=0x78u;
  R(0)=LD32(R(14)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0cf14c:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf158(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c2eb560u;
  R(14)=0x0u;
  R(2)=0x8c2eb018u;
  R(1)=0x1u;
  R(0)=0x8c2eb014u;
  R(12)=0x8c2eb020u;
  ST32(R(15)+4,R(5));
  R(5)=R(14);
  ST32(R(15),R(6));
  ST32(R(3),R(4));
  R(3)=0x8c2eb01cu;
  ST32(R(2),R(14));
  R(6)=0x4e0u;
  R(2)=0x8c0686b8u;
  ST32(R(0),R(1));
  ST32(R(3),R(14));
  { c->pr=0x8c0cf18eu; R(4)=R(12); f_8c0686b8(c); }
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0cf1a8;
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0cf1a8;
  R(2)=0x8c2eb018u;
  R(3)=0x1u;
  ST32(R(2),R(3));
  R(3)=0x8c0d866cu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0cf1a8u; R(4)=LD32(R(15)+4); f_8c0d866c(c); }
L8c0cf1a8:;
  R(8)=0x8c2eb500u;
  R(13)=R(14);
  R(10)=0x18u;
  R(9)=0x34u;
L8c0cf1b0:;
  c->macl=R(13)*R(9);
  R(3)=0x8c0d8c06u;
  R(11)=c->macl;
  R(11)+=R(12);
  { c->pr=0x8c0cf1bcu; R(4)=R(13); f_8c0d8c06(c); }
  ST32(R(11)+48,R(0));
  { c->pr=0x8c0cf1c2u; R(4)=R(11); f_8c0cf2d6(c); }
  R(0)=R(13);
  R(0)<<=2;
  ST32(R(8)+R(0),R(14));
  R(0)=0x8c2eb566u;
  ST8(R(13)+R(0),R(14));
  R(0)=0x8c2eb57eu;
  ST8(R(13)+R(0),R(14));
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(10);
  if(!c->t) goto L8c0cf1b0;
  R(0)=0x8c2eb565u;
  R(1)=0xa0u;
  R(2)=0xc0u;
  R(3)=0x8c2eb564u;
  ST8(R(3),R(2));
  ST8(R(0),R(1));
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
void f_8c0cf2d6(SH4Ctx *c) {
  R(2)=0x8c2eb560u;
  R(5)=0x0u;
  ST32(R(4),R(5));
  ST32(R(4)+4,R(5));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(6)=0xffffffffu; if(k) goto L8c0cf2f0; }
  ST32(R(4)+8,R(5));
  ST32(R(4)+12,R(6));
  ST32(R(4)+16,R(5));
  { ST32(R(4)+20,R(5)); goto L8c0cf2f8; }
L8c0cf2f0:;
  ST32(R(4)+8,R(6));
  ST32(R(4)+12,R(5));
  ST32(R(4)+16,R(6));
  ST32(R(4)+20,R(6));
L8c0cf2f8:;
  R(0)=R(5);
  ST16(R(4)+24,R(0));
  ST16(R(4)+26,R(0));
  R(0)=0x22u;
  ST16(R(4)+R(0),R(5));
  R(0)=0x20u;
  ST16(R(4)+R(0),R(5));
  R(0)=R(5);
  R(3)=0x8c0f3034u;
  ST16(R(4)+30,R(0));
  ST16(R(4)+28,R(0));
  ST32(R(4)+40,R(0));
  { ST32(R(4)+36,R(3)); return; }
}
void f_8c0cf314(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffff0000u;
  R(14)=0x8c2eb566u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(5)+8);
  R(5)+=0x8u;
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  R(13)=R(5);
  R(7)=(int32_t)(int8_t)LD8(R(5));
  R(13)+=0x3u;
  R(0)=R(0)&0xFF;
  R(2)=(int32_t)(int8_t)LD8(R(13));
  R(0)<<=8;
  R(7)=R(7)&0xFF;
  R(7)|=R(0);
  R(0)=0x8c2eb564u;
  R(7)|=R(3);
  R(1)=(int32_t)(int8_t)LD8(R(0));
  c->t=R(2)>=R(1);
  { uint32_t k=!c->t; R(14)+=R(6); if(k) goto L8c0cf390; }
  R(1)=0xfffdffffu;
  R(3)=0x1u;
  R(7)&=R(1);
  { ST8(R(14),R(3)); goto L8c0cf3ae; }
L8c0cf390:;
  R(3)=0x8c2eb565u;
  R(1)=(int32_t)(int8_t)LD8(R(13));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=R(1)>R(2);
  if(c->t) goto L8c0cf3a4;
  R(1)=0x20000u;
  R(2)=0x0u;
  R(7)|=R(1);
  { ST8(R(14),R(2)); goto L8c0cf3ae; }
L8c0cf3a4:;
  R(1)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0cf3ae;
  R(1)=0xfffdffffu;
  R(7)&=R(1);
L8c0cf3ae:;
  R(1)=0x8c2eb564u;
  R(12)=R(5);
  R(12)+=0x2u;
  R(14)=0x8c2eb57eu;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=R(3)>=R(2);
  { uint32_t k=!c->t; R(14)+=R(6); if(k) goto L8c0cf3c8; }
  R(2)=0xfffeffffu;
  R(7)&=R(2);
  { R(3)=0x1u; goto L8c0cf3d8; }
L8c0cf3c8:;
  R(0)=0x8c2eb565u;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  R(3)=(int32_t)(int8_t)LD8(R(0));
  c->t=R(2)>R(3);
  if(c->t) goto L8c0cf3dc;
  R(2)=0x10000u;
  R(3)=0x0u;
  R(7)|=R(2);
L8c0cf3d8:;
  { ST8(R(14),R(3)); goto L8c0cf3e6; }
L8c0cf3dc:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0cf3e6;
  R(2)=0xfffeffffu;
  R(7)&=R(2);
L8c0cf3e6:;
  R(1)=0x8c2eb560u;
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cf3f2;
  R(3)=0xffffffffu;
  R(7)^=R(3);
L8c0cf3f2:;
  R(3)=0x10000u;
  ST32(R(4)+8,R(7));
  R(0)=LD32(R(4)+4);
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c0cf402;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  { R(0)=R(0)&0xFF; goto L8c0cf404; }
L8c0cf402:;
  R(0)=0x0u;
L8c0cf404:;
  ST16(R(4)+24,R(0));
  R(0)=LD32(R(4)+4);
  R(3)=0x20000u;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c0cf414;
  R(0)=(int32_t)(int8_t)LD8(R(13));
  { R(0)=R(0)&0xFF; goto L8c0cf416; }
L8c0cf414:;
  R(0)=0x0u;
L8c0cf416:;
  ST16(R(4)+26,R(0));
  R(0)=LD32(R(4)+4);
  R(3)=0x40000u;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c0cf428;
  R(0)=(int32_t)(int8_t)LD8(R(5)+4);
  R(0)=R(0)&0xFF;
  { R(0)+=0xffffff80u; goto L8c0cf42a; }
L8c0cf428:;
  R(0)=0x0u;
L8c0cf42a:;
  ST16(R(4)+28,R(0));
  R(0)=LD32(R(4)+4);
  R(3)=0x80000u;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c0cf43c;
  R(0)=(int32_t)(int8_t)LD8(R(5)+5);
  R(0)=R(0)&0xFF;
  { R(0)+=0xffffff80u; goto L8c0cf43e; }
L8c0cf43c:;
  R(0)=0x0u;
L8c0cf43e:;
  R(3)=0x100000u;
  ST16(R(4)+30,R(0));
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0cf452;
  R(0)=(int32_t)(int8_t)LD8(R(5)+6);
  R(0)=R(0)&0xFF;
  R(2)=R(0);
  { R(2)+=0xffffff80u; goto L8c0cf454; }
L8c0cf452:;
  R(2)=0x0u;
L8c0cf454:;
  R(3)=0x200000u;
  R(0)=0x20u;
  ST16(R(4)+R(0),R(2));
  R(1)=LD32(R(4)+4);
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0cf46a;
  R(0)=(int32_t)(int8_t)LD8(R(5)+7);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  { R(3)+=0xffffff80u; goto L8c0cf46c; }
L8c0cf46a:;
  R(3)=0x0u;
L8c0cf46c:;
  R(0)=0x22u;
  ST16(R(4)+R(0),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf4a8(SH4Ctx *c) {
  R(3)=0x20000u;
  R(5)=R(4);
  R(2)=0x3fff00u;
  R(5)>>=8;
  c->t=(R(3)&R(4))==0;
  R(5)>>=2;
  { uint32_t k=c->t; R(5)&=R(2); if(k) goto L8c0cf4bc; }
  R(0)=0xf0u;
  R(5)|=R(0);
L8c0cf4bc:;
  R(3)=0x10000u;
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c0cf4c6;
  R(1)=0xfu;
  R(5)|=R(1);
L8c0cf4c6:;
  { R(0)=R(5); return; }
}
void f_8c0cf4ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(5);
  R(0)=LD32(R(13));
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c0cf4f0; }
  R(2)=0x8c0d8f0au;
  R(5)=R(13);
  { c->pr=0x8c0cf4e4u; R(4)=R(15); f_8c0d8f0a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0cf4f0;
  R(4)=0x0u;
  ST32(R(14)+4,R(4));
  { ST32(R(14),R(4)); goto L8c0cf510; }
L8c0cf4f0:;
  R(2)=0x8c0d91f2u;
  { c->pr=0x8c0cf4f6u; R(4)=0x5u; f_8c0d91f2(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0cf502;
  { c->pr=0x8c0cf4feu; R(4)=LD32(R(15)); f_8c0cf4a8(c); }
  { ST32(R(14)+4,R(0)); goto L8c0cf506; }
L8c0cf502:;
  R(3)=LD32(R(15));
  ST32(R(14)+4,R(3));
L8c0cf506:;
  R(3)=R(13);
  R(2)=LD32(R(14)+4);
  R(3)+=0x14u;
  ST32(R(14),R(2));
  ST32(R(14)+36,R(3));
L8c0cf510:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf51a(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(6)+4);
  R(1)=0xfcu;
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0cf53e;
  R(1)=0xffu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0cf544;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0cf544;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0cf544;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0cf544;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0cf544;
  {  goto L8c0cf548; }
L8c0cf53e:;
  R(0)=0xff0000fcu;
  {  return; }
L8c0cf544:;
  { R(0)=0x0u; return; }
L8c0cf548:;
  R(0)=0xff000000u;
  {  return; }
}
void f_8c0cf54e(SH4Ctx *c) {
  R(2)=0x8c0f3030u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cf580;
  {  return; }
L8c0cf580:;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x18u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0x6u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(8)=0xffffffffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
L8c0cf598:;
  R(3)=0x8c0d8bf4u;
  { c->pr=0x8c0cf59eu; R(4)=R(13); f_8c0d8bf4(c); }
  R(2)=0x8c0d8c06u;
  R(11)=R(0);
  { c->pr=0x8c0cf5a6u; R(4)=R(13); f_8c0d8c06(c); }
  R(14)=0x34u;
  R(3)=0x8c2eb020u;
  c->macl=R(13)*R(14);
  R(1)=R(13);
  R(1)<<=2;
  R(12)=R(0);
  R(6)=R(11);
  R(5)=R(12);
  R(14)=c->macl;
  R(14)+=R(3);
  R(3)=0x8c2eb500u;
  ST32(R(14)+48,R(0));
  R(2)=LD32(R(14)+8);
  R(3)+=R(1);
  ST32(R(14)+44,R(2));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0cf5cau; R(4)=R(14); f_8c0cf51a(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(1)=R(13);
  R(3)=0x8c067a9cu;
  ST32(R(2),R(0));
  { c->pr=0x8c0cf5d6u; R(0)=R(9); f_8c067a9c(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0cf636;
  R(0)=LD32(R(12));
  c->t=(R(0)&0x21)==0;
  if(c->t) goto L8c0cf600;
  R(0)=(int32_t)(int8_t)LD8(R(11)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0cf600;
  R(0)=(int32_t)(int8_t)LD8(R(11)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0cf600;
  R(5)=R(12);
  { c->pr=0x8c0cf5f4u; R(4)=R(14); f_8c0cf4ca(c); }
  R(5)=R(11);
  R(6)=R(13);
  { c->pr=0x8c0cf5fcu; R(4)=R(14); f_8c0cf314(c); }
  {  goto L8c0cf604; }
L8c0cf600:;
  { c->pr=0x8c0cf604u; R(4)=R(14); f_8c0cf2d6(c); }
L8c0cf604:;
  R(1)=0x8c2eb560u;
  R(2)=LD32(R(14)+8);
  R(2)=~R(2);
  ST32(R(14)+12,R(2));
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0cf622;
  R(4)=LD32(R(14)+44);
  R(5)=LD32(R(14)+8);
  R(4)^=R(5);
  R(5)&=R(4);
  ST32(R(14)+16,R(5));
  R(3)=LD32(R(14)+12);
  { R(4)&=R(3); goto L8c0cf632; }
L8c0cf622:;
  R(4)=LD32(R(14)+44);
  R(5)=LD32(R(14)+8);
  R(4)^=R(5);
  R(4)^=R(8);
  R(5)|=R(4);
  ST32(R(14)+16,R(5));
  R(3)=LD32(R(14)+12);
  R(4)|=R(3);
L8c0cf632:;
  { ST32(R(14)+20,R(4)); goto L8c0cf63c; }
L8c0cf636:;
  R(3)=R(12);
  R(3)+=0x14u;
  ST32(R(14)+36,R(3));
L8c0cf63c:;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(10);
  if(!c->t) goto L8c0cf598;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf654(SH4Ctx *c) {
  R(0)=0x34u;
  R(3)=0x8c2eb020u;
  c->macl=R(4)*R(0);
  R(0)=c->macl;
  { R(0)+=R(3); return; }
}
void f_8c0cf678(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c2eb018u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0cf690;
  R(2)=0x8c0d8b8eu;
  { c->pr=0x8c0cf690u;  f_8c0d8b8e(c); }
L8c0cf690:;
  R(3)=0x8c0686b8u;
  R(4)=0x8c2eb020u;
  R(6)=0x4e0u;
  { c->pr=0x8c0cf69au; R(5)=0x0u; f_8c0686b8(c); }
  R(11)=0x4e0u;
  R(12)=0x0u;
  R(4)=0x8c2eb020u;
  R(13)=0x8c2eb500u;
  R(11)+=R(4);
  R(14)=R(4);
L8c0cf6a6:;
  { c->pr=0x8c0cf6aau; R(4)=R(14); f_8c0cf2d6(c); }
  R(14)+=0x34u;
  ST32(R(13),R(12));
  c->t=R(14)>=R(11);
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0cf6a6; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf6c0(SH4Ctx *c) {
  R(1)=0x8c2eb500u;
  R(0)=R(4);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0cf6ca(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=0x8c0d8c06u;
  ST32(R(15),R(4));
  { R(15)+=0x4u; { f_8c0d8c06(c); return; } }
}
void f_8c0cf6f2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d91f2u;
  { c->pr=0x8c0cf6fau; R(4)=0x0u; f_8c0d91f2(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cf70a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0cf728;
  R(2)=0x8c0d914au;
  R(5)=R(14);
  { c->pr=0x8c0cf71cu; R(4)=0x8u; f_8c0d914a(c); }
  R(3)=0x8c0d914au;
  R(5)=0xffffffffu;
  { c->pr=0x8c0cf724u; R(4)=0x9u; f_8c0d914a(c); }
  R(2)=0x8c2eb01cu;
  ST32(R(2),R(14));
L8c0cf728:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cf72e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d914au;
  R(5)=0x0u;
  { c->pr=0x8c0cf738u; R(4)=0x8u; f_8c0d914a(c); }
  R(2)=0x8c0d914au;
  R(5)=0x0u;
  { c->pr=0x8c0cf740u; R(4)=0x9u; f_8c0d914a(c); }
  R(2)=0x8c0d9286u;
  R(5)=0x0u;
  R(3)=0x8c0f302cu;
  { c->pr=0x8c0cf74au; R(4)=LD32(R(3)); f_8c0d9286(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c2eb01cu;
  R(1)=0x0u;
  { ST32(R(2),R(1)); return; }
}
void f_8c0cf754(SH4Ctx *c) {
  R(3)=0x8c0d91f2u;
  { R(4)=0x8u; { f_8c0d91f2(c); return; } }
}
void f_8c0cf76c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d91f2u;
  { c->pr=0x8c0cf774u; R(4)=0x9u; f_8c0d91f2(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cf77a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d9272u;
  { c->pr=0x8c0cf782u;  f_8c0d9272(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c0cf790;
  R(0)=0x8c0f3040u;
  R(3)=R(4);
  R(3)<<=2;
  R(4)=LD32(R(3)+R(0));
L8c0cf790:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c0cf830(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  ST32(R(15),R(4));
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=0x8c0cffe0u;
  { c->pr=0x8c0cf850u;  f_8c0cffe0(c); }
  R(3)=LD32(R(15));
  R(4)=0xff00001cu;
  R(1)=0x800u;
  ST32(R(4),R(3));
  R(2)=LD32(R(4));
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  R(2)|=R(1);
  R(1)=0xffffff0fu;
  ST32(R(4),R(2));
  R(2)=0xfffffff7u;
  R(0)=LD32(R(4));
  R(3)=sh4_getsr(c);
  R(0)&=R(2);
  R(0)|=0x8u;
  ST32(R(4),R(0));
  R(3)&=R(1);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)&=0xfu;
  R(0)<<=2;
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0cf892(SH4Ctx *c) {
  R(3)=0xff00001cu;
  R(0)=LD32(R(3));
  R(0)|=0x8u;
  { ST32(R(3),R(0)); return; }
}
void f_8c0cf89c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(5);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(12)=R(4); if(k) goto L8c0cf8b2; }
  R(3)=0x8c0cfaf0u;
  {  goto L8c0cfaf0; }
L8c0cf8b2:;
  R(2)=0x30000u;
  R(14)=0x9fffffe0u;
  c->t=R(13)>=R(2);
  { uint32_t k=!c->t; R(14)&=R(12); if(k) goto L8c0cf8c2; }
  R(3)=0x8c0cf902u;
  {  goto L8c0cf902; }
L8c0cf8c2:;
  R(5)=0x1fu;
  R(4)=R(14);
  R(5)&=R(12);
  R(5)+=R(13);
  {  goto L8c0cf8ec; }
L8c0cf8ec:;
  R(5)+=0x1fu;
  R(5)>>=2;
  R(5)>>=2;
  c->t=R(5)&1;R(5)>>=1;
L8c0cf8f4:;
  
  R(5)-=1;c->t=R(5)==0;
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0cf8f4; }
  R(2)=0x8c0cfaf0u;
  {  goto L8c0cfaf0; }
L8c0cf902:;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  {  goto L8c0cf920; }
L8c0cf920:;
  R(0)=0x8c0cf930u;
  R(1)=0xa0000000u;
  R(1)|=R(0);
  { uint32_t tg=R(1);  sh4_call(c,tg); return; }
L8c0cfaf0:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cfadc(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)=sh4_getsr(c);
  R(0)=R(0)&0xFFFF;
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cfafa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(5);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(12)=R(4); if(k) goto L8c0cfb10; }
  R(3)=0x8c0cfd44u;
  {  goto L8c0cfd44; }
L8c0cfb10:;
  R(2)=0x10000u;
  R(14)=0x9fffffe0u;
  c->t=R(13)>=R(2);
  { uint32_t k=!c->t; R(14)&=R(12); if(k) goto L8c0cfb20; }
  R(3)=0x8c0cfb56u;
  {  goto L8c0cfb56; }
L8c0cfb20:;
  R(5)=0x1fu;
  R(4)=R(14);
  R(5)&=R(12);
  R(5)+=R(13);
  {  goto L8c0cfb40; }
L8c0cfb40:;
  R(5)+=0x1fu;
  R(5)>>=2;
  R(5)>>=2;
  c->t=R(5)&1;R(5)>>=1;
L8c0cfb48:;
  
  R(5)-=1;c->t=R(5)==0;
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0cfb48; }
  R(2)=0x8c0cfd44u;
  {  goto L8c0cfd44; }
L8c0cfb56:;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  {  goto L8c0cfb74; }
L8c0cfb74:;
  R(0)=0x8c0cfb84u;
  R(1)=0xa0000000u;
  R(1)|=R(0);
  { uint32_t tg=R(1);  sh4_call(c,tg); return; }
L8c0cfd44:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cfd30(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)=sh4_getsr(c);
  R(0)=R(0)&0xFFFF;
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cfd4e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(5);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(12)=R(4); if(k) goto L8c0cfd64; }
  R(3)=0x8c0cff98u;
  {  goto L8c0cff98; }
L8c0cfd64:;
  R(2)=0x10000u;
  R(14)=0x9fffffe0u;
  c->t=R(13)>=R(2);
  { uint32_t k=!c->t; R(14)&=R(12); if(k) goto L8c0cfd74; }
  R(3)=0x8c0cfdaau;
  {  goto L8c0cfdaa; }
L8c0cfd74:;
  R(5)=0x1fu;
  R(4)=R(14);
  R(5)&=R(12);
  R(5)+=R(13);
  {  goto L8c0cfd94; }
L8c0cfd94:;
  R(5)+=0x1fu;
  R(5)>>=2;
  R(5)>>=2;
  c->t=R(5)&1;R(5)>>=1;
L8c0cfd9c:;
  
  R(5)-=1;c->t=R(5)==0;
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0cfd9c; }
  R(2)=0x8c0cff98u;
  {  goto L8c0cff98; }
L8c0cfdaa:;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  {  goto L8c0cfdc8; }
L8c0cfdc8:;
  R(0)=0x8c0cfdd8u;
  R(1)=0xa0000000u;
  R(1)|=R(0);
  { uint32_t tg=R(1);  sh4_call(c,tg); return; }
L8c0cff98:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cff84(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)=sh4_getsr(c);
  R(0)=R(0)&0xFFFF;
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0cffa2(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(3)=0x9fffffe0u;
  ST32(R(15)+4,R(5));
  R(0)=LD32(R(15));
  R(4)=LD32(R(15));
  R(0)&=0x1fu;
  R(4)&=R(3);
  R(5)+=R(0);
  {  goto L8c0cffc0; }
L8c0cffc0:;
  R(5)+=0x1fu;
  R(5)>>=2;
  R(5)>>=2;
  c->t=R(5)&1;R(5)>>=1;
L8c0cffc8:;
  sh4_pref(c,R(4));
  R(5)-=1;c->t=R(5)==0;
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0cffc8; }
  { R(15)+=0x8u; return; }
}
void f_8c0cffd4(SH4Ctx *c) {
  R(0)=R(5);
  ST32(R(4),R(0));
  {  return; }
}
void f_8c0cffe0(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  {  goto L8c0cfffc; }
L8c0cfffc:;
  R(0)=0x8c0d000cu;
  R(1)=0xa0000000u;
  R(1)|=R(0);
  { uint32_t tg=R(1);  sh4_call(c,tg); return; }
}
void f_8c0d0078(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)=sh4_getsr(c);
  R(0)=R(0)&0xFFFF;
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  { R(15)+=0x4u; return; }
}
void f_8c0d0090(SH4Ctx *c) {
  R(7)=0x8c2eb598u;
  R(1)=0x8c2eb59cu;
  { R(6)=LD32(R(7)); goto L8c0d00a6; }
L8c0d0098:;
  R(3)=R(6);
  R(3)<<=8;
  R(0)=R(6);
  R(3)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(6)+=0x1u;
  ST16(R(1)+R(0),R(3));
L8c0d00a6:;
  R(2)=LD32(R(7));
  R(2)+=R(5);
  c->t=R(6)>=R(2);
  if(c->t) goto L8c0d00b4;
  R(2)=0x8u;
  c->t=R(6)>=R(2);
  if(!c->t) goto L8c0d0098;
L8c0d00b4:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0d00cc;
  R(2)=LD32(R(7));
  R(3)=0x7c000000u;
  R(2)<<=8;
  R(2)<<=2;
  R(2)|=R(3);
  ST32(R(4),R(2));
  R(1)=LD32(R(7));
  R(1)+=R(5);
  ST32(R(7),R(1));
L8c0d00cc:;
  {  return; }
}
void f_8c0d0110(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(6)=0x1000u;
  R(5)=0x0u;
  R(7)=0x8c2eb5acu;
  R(6)+=R(7);
  R(4)=R(7);
L8c0d0130:;
  ST32(R(4)+12,R(5));
  R(4)+=0x10u;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c0d0130;
  R(6)=0x300u;
  R(7)=0x8c2ec5acu;
  R(6)+=R(7);
  R(4)=R(7);
L8c0d0140:;
  ST32(R(4),R(5));
  R(4)+=0x4u;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c0d0140;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)=sh4_getsr(c);
  R(0)=R(0)&0xFFFF;
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  { R(15)+=0x4u; return; }
}
void f_8c0d0160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(4);
  ST16(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(8)=R(7);
  ST32(R(15),R(5));
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15)+8,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0xfffffffcu;
  R(9)=0x8c2ec5acu;
  R(11)=R(6);
  R(13)=R(0);
  R(0)=R(13);
  R(0)=sh4_shad(R(0),R(3));
  R(7)=0x80000000u;
  R(0)<<=2;
  R(4)=LD32(R(9)+R(0));
  R(5)=R(4);
  { R(11)|=R(7); goto L8c0d01ac; }
L8c0d01a8:;
  R(5)=R(4);
  R(4)=LD32(R(4)+4);
L8c0d01ac:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d01b6;
  R(2)=LD32(R(4)+12);
  c->t=R(2)>=R(11);
  if(!c->t) goto L8c0d01a8;
L8c0d01b6:;
  R(10)=0x8c2eb5acu;
  R(12)=0x1u;
  R(6)=0x100u;
  R(14)=R(12);
L8c0d01be:;
  R(2)=R(14);
  R(2)<<=2;
  R(2)<<=2;
  R(2)+=R(10);
  R(3)=LD32(R(2)+12);
  c->t=(R(3)&R(7))==0;
  if(c->t) goto L8c0d01d2;
  R(14)+=0x1u;
  c->t=R(14)>=R(6);
  if(!c->t) goto L8c0d01be;
L8c0d01d2:;
  c->t=R(14)>=R(6);
  if(!c->t) goto L8c0d01da;
  {  goto L8c0d02e2; }
L8c0d01da:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d02ae;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0d02ae;
  R(4)=0x900u;
  c->t=(int32_t)R(13)>=(int32_t)R(4);
  if(c->t) goto L8c0d0200;
  R(3)=0xfffffe00u;
  R(2)=c->vbr;
  R(3)+=R(13);
  R(0)=0x200u;
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  R(2)+=R(3);
  R(3)=0x8c0d030eu;
  ST32(R(2)+R(0),R(3));
  {  goto L8c0d0252; }
L8c0d0200:;
  c->t=R(13)==R(4);
  if(!c->t) goto L8c0d0238;
  R(2)=0x8c0dfe00u;
  R(4)=0x8c0d0332u;
  { c->pr=0x8c0d020cu; R(5)=0x0u; f_8c0dfe00(c); }
  {  goto L8c0d0252; }
L8c0d0238:;
  R(2)=0x920u;
  c->t=R(13)==R(2);
  if(!c->t) goto L8c0d024a;
  R(1)=0x8c0dfd80u;
  R(4)=0x8c0d037cu;
  { c->pr=0x8c0d0246u; R(5)=0x0u; f_8c0dfd80(c); }
  {  goto L8c0d0252; }
L8c0d024a:;
  R(1)=c->vbr;
  R(0)=0x22cu;
  R(3)=0x8c0d03a2u;
  ST32(R(1)+R(0),R(3));
L8c0d0252:;
  R(4)=R(14);
  R(4)<<=2;
  R(0)=R(13);
  R(3)=0xfffffffcu;
  R(4)<<=2;
  R(0)=sh4_shad(R(0),R(3));
  R(4)+=R(10);
  R(0)<<=2;
  ST32(R(9)+R(0),R(4));
  R(3)=0x0u;
  ST32(R(4)+4,R(3));
  R(3)=0xfffffff8u;
  R(2)=LD32(R(15));
  ST32(R(4),R(2));
  ST32(R(4)+8,R(8));
  ST32(R(4)+12,R(11));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=R(0);
  R(4)=R(4)&0xFF;
  R(0)=R(13);
  R(4)>>=2;
  R(0)=sh4_shad(R(0),R(3));
  R(4)>>=2;
  c->t=R(4)&1;R(4)>>=1;
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0d0296;
  R(3)=0xa05f6920u;
  R(4)+=0xcu;
  R(12)=sh4_shad(R(12),R(4));
  R(2)=LD32(R(3));
  R(2)|=R(12);
  ST32(R(3),R(2));
  {  goto L8c0d02de; }
L8c0d0296:;
  R(3)=0xfffffff8u;
  R(0)=R(13);
  R(0)=sh4_shad(R(0),R(3));
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c0d02de;
  R(3)=0xa05f6924u;
  R(12)=sh4_shad(R(12),R(4));
  R(2)=LD32(R(3));
  R(2)|=R(12);
  ST32(R(3),R(2));
  {  goto L8c0d02de; }
L8c0d02ae:;
  R(0)=R(13);
  R(3)=0xfffffffcu;
  R(0)=sh4_shad(R(0),R(3));
  R(12)=R(14);
  R(0)<<=2;
  R(2)=LD32(R(9)+R(0));
  R(12)<<=2;
  R(12)<<=2;
  c->t=R(4)==R(2);
  { uint32_t k=!c->t; R(12)+=R(10); if(k) goto L8c0d02d2; }
  R(3)=0xfffffffcu;
  R(0)=R(13);
  R(0)=sh4_shad(R(0),R(3));
  ST32(R(12)+4,R(4));
  R(0)<<=2;
  { ST32(R(9)+R(0),R(12)); goto L8c0d02d6; }
L8c0d02d2:;
  ST32(R(5)+4,R(12));
  ST32(R(12)+4,R(4));
L8c0d02d6:;
  R(2)=LD32(R(15));
  ST32(R(12),R(2));
  ST32(R(12)+8,R(8));
  ST32(R(12)+12,R(11));
L8c0d02de:;
  { R(4)=R(14); goto L8c0d02e4; }
L8c0d02e2:;
  R(4)=0x0u;
L8c0d02e4:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=sh4_getsr(c);
  R(0)=R(0)&0xFFFF;
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(0)=R(4);
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
void f_8c0d030e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0xfffffffcu;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2ec5acu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=sh4_shad(R(14),R(3));
  R(14)<<=2;
  { R(14)=LD32(R(14)+R(0)); goto L8c0d0328; }
L8c0d0320:;
  R(3)=LD32(R(14));
  { uint32_t tg=R(3); c->pr=0x8c0d0326u; R(4)=LD32(R(14)+8); sh4_call(c,tg); }
  R(14)=LD32(R(14)+4);
L8c0d0328:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d0320;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0332(SH4Ctx *c) {
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)&=R(3);
  R(0)|=0x60u;
  sh4_setsr(c,R(0));
  R(14)=0x8c2ec7ecu;
  { R(14)=LD32(R(14)); goto L8c0d034e; }
L8c0d0346:;
  R(3)=LD32(R(14));
  { uint32_t tg=R(3); c->pr=0x8c0d034cu; R(4)=LD32(R(14)+8); sh4_call(c,tg); }
  R(14)=LD32(R(14)+4);
L8c0d034e:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d0346;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d037c(SH4Ctx *c) {
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)&=R(3);
  R(0)|=0x60u;
  sh4_setsr(c,R(0));
  R(14)=0x8c2ec7f4u;
  { R(14)=LD32(R(14)); goto L8c0d0398; }
L8c0d0390:;
  R(3)=LD32(R(14));
  { uint32_t tg=R(3); c->pr=0x8c0d0396u; R(4)=LD32(R(14)+8); sh4_call(c,tg); }
  R(14)=LD32(R(14)+4);
L8c0d0398:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d0390;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d03a2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0xfffffffcu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(0)=sh4_shad(R(0),R(3));
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(0)==50;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c0d043e;
  c->t=(int32_t)R(0)==54;
  if(c->t) goto L8c0d03c4;
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0d043e;
  {  goto L8c0d043e; }
L8c0d03c4:;
  R(0)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=R(1);
  R(0)|=0x40u;
  sh4_setsr(c,R(0));
  R(0)=0xa05f6900u;
  R(4)=0x0u;
  R(2)=0xa05f6920u;
  R(12)=LD32(R(0));
  R(3)=LD32(R(2));
  R(12)&=R(3);
  R(12)>>=8;
  R(12)>>=2;
  R(12)>>=2;
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(14)=0x1u; if(k) goto L8c0d0410; }
  R(11)=0x80u;
  R(10)=0xa00u;
  { R(13)=R(4); goto L8c0d0404; }
L8c0d03ee:;
  R(3)=R(14);
  R(3)=sh4_shad(R(3),R(13));
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0d0402;
  R(4)=R(13);
  R(4)<<=2;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c0d0402u; R(4)+=R(10); f_8c0d030e(c); }
L8c0d0402:;
  R(13)+=0x1u;
L8c0d0404:;
  R(2)=R(14);
  R(2)=sh4_shad(R(2),R(13));
  c->t=R(2)==R(11);
  if(!c->t) goto L8c0d03ee;
  {  goto L8c0d043e; }
L8c0d0410:;
  R(2)=0xa05f6904u;
  R(1)=0xa05f6924u;
  R(11)=LD32(R(2));
  R(3)=LD32(R(1));
  R(12)=0xb00u;
  R(11)&=R(3);
  { R(13)=R(4); goto L8c0d0436; }
L8c0d0420:;
  R(2)=R(14);
  R(2)=sh4_shad(R(2),R(13));
  c->t=(R(2)&R(11))==0;
  if(c->t) goto L8c0d0434;
  R(4)=R(13);
  R(4)<<=2;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c0d0434u; R(4)+=R(12); f_8c0d030e(c); }
L8c0d0434:;
  R(13)+=0x1u;
L8c0d0436:;
  R(0)=R(14);
  R(0)=sh4_shad(R(0),R(13));
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c0d0420;
L8c0d043e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0468(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(12)=R(4);
  R(12)<<=2;
  R(7)=0x8c2eb5acu;
  R(12)<<=2;
  R(13)=R(12);
  R(4)=0x100u;
  R(5)=0x1u;
  R(6)=R(5);
  R(13)+=R(7);
L8c0d049e:;
  R(14)=R(6);
  R(14)<<=2;
  R(14)<<=2;
  R(14)+=R(7);
  R(3)=LD32(R(14)+4);
  c->t=R(3)==R(13);
  if(!c->t) goto L8c0d04b4;
  R(2)=LD32(R(14)+12);
  R(3)=0x80000000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0d04ba;
L8c0d04b4:;
  R(6)+=0x1u;
  c->t=R(6)>=R(4);
  if(!c->t) goto L8c0d049e;
L8c0d04ba:;
  c->t=R(6)==R(4);
  { uint32_t k=c->t; R(1)=0x0u; if(k) goto L8c0d04d2; }
  R(4)=R(12);
  R(6)<<=2;
  R(4)+=R(7);
  R(3)=LD32(R(4)+4);
  R(6)<<=2;
  R(6)+=R(7);
  ST32(R(6)+4,R(3));
  { ST32(R(4)+12,R(1)); goto L8c0d05ac; }
L8c0d04d2:;
  R(13)=R(12);
  R(13)+=R(7);
  R(7)=0x90u;
  R(14)=R(5);
  R(10)=0xa05f6920u;
  R(4)=0x8c2ec5acu;
  R(9)=0xa05f6924u;
  R(12)=0xc0u;
  R(8)=0x200u;
L8c0d04e4:;
  R(0)=R(14);
  R(0)<<=2;
  R(3)=LD32(R(4)+R(0));
  c->t=R(3)==R(13);
  if(!c->t) goto L8c0d05a4;
  R(6)=R(14);
  R(6)<<=2;
  R(6)+=R(4);
  R(3)=LD32(R(13)+4);
  ST32(R(6),R(3));
  ST32(R(13)+12,R(1));
  R(2)=LD32(R(6));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d05aa;
  c->t=R(14)==R(7);
  if(!c->t) goto L8c0d0510;
  R(2)=0x8c0dfe00u;
  R(5)=0x0u;
  { c->pr=0x8c0d050cu; R(4)=R(5); f_8c0dfe00(c); }
  {  goto L8c0d05aa; }
L8c0d0510:;
  R(2)=0x92u;
  c->t=R(14)==R(2);
  if(!c->t) goto L8c0d0522;
  R(1)=0x8c0dfd80u;
  R(5)=0x0u;
  { c->pr=0x8c0d051eu; R(4)=R(5); f_8c0dfd80(c); }
  {  goto L8c0d05aa; }
L8c0d0522:;
  R(13)=R(14);
  R(13)<<=2;
  R(13)<<=2;
  R(4)=R(13);
  R(7)=R(4)&0xFF;
  R(3)=0xfffffff8u;
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  R(7)>>=2;
  R(6)=sh4_shad(R(6),R(3));
  R(0)=R(6);
  R(7)>>=2;
  c->t=R(7)&1;R(7)>>=1;
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0d054e;
  R(3)=R(5);
  R(7)+=0xcu;
  R(1)=LD32(R(10));
  R(3)=sh4_shad(R(3),R(7));
  R(3)=~R(3);
  R(1)&=R(3);
  { ST32(R(10),R(1)); goto L8c0d055e; }
L8c0d054e:;
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c0d055e;
  R(3)=R(5);
  R(1)=LD32(R(9));
  R(3)=sh4_shad(R(3),R(7));
  R(3)=~R(3);
  R(1)&=R(3);
  ST32(R(9),R(1));
L8c0d055e:;
  R(2)=0xfffffe00u;
  R(3)=c->vbr;
  R(13)+=R(2);
  R(0)=0x8c0d7aa4u;
  R(13)>>=2;
  c->t=R(13)&1;R(13)>>=1;
  R(3)+=R(13);
  R(3)+=R(8);
  ST32(R(3),R(0));
  {  goto L8c0d05aa; }
L8c0d05a4:;
  R(14)+=0x1u;
  c->t=R(14)>=R(12);
  if(!c->t) goto L8c0d04e4;
L8c0d05aa:;
  c->t=R(14)==R(12);
L8c0d05ac:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)=sh4_getsr(c);
  R(0)=R(0)&0xFFFF;
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d05d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  R(4)+=0x1fu;
  R(2)=0x8c2ec8dcu;
  R(3)=0x8c2ec8d4u;
  R(5)=0xffffffe0u;
  R(4)&=R(5);
  R(1)=0x8c2ec8d8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)&=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(3),R(4));
  ST32(R(2),R(4));
  R(4)=0x8c2ec8b0u;
  R(2)=0x8c2ec8d0u;
  ST32(R(1),R(14));
  R(1)=0x0u;
  R(3)=R(4);
  ST32(R(2),R(4));
  ST32(R(4),R(3));
  ST32(R(4)+4,R(1));
  { c->pr=0x8c0d0602u; R(4)=R(1); f_8c0d061a(c); }
  R(2)=0x8c2ec8d4u;
  R(14)>>=2;
  R(14)>>=2;
  R(13)=LD32(R(2));
  c->t=R(14)&1;R(14)>>=1;
  R(4)=R(13);
  ST32(R(13)+4,R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0d077a(c); return; } }
}
void f_8c0d061a(SH4Ctx *c) {
  R(5)=0x8c2ec8acu;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(6)=LD32(R(5)); if(k) goto L8c0d0628; }
  R(2)=0x8c0f30c8u;
  { ST32(R(5),R(2)); goto L8c0d062a; }
L8c0d0628:;
  ST32(R(5),R(4));
L8c0d062a:;
  { R(0)=R(6); return; }
}
void f_8c0d062e(SH4Ctx *c) {
  {  return; }
}
void f_8c0d0632(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=0x8c2ec8d0u;
  R(6)=0x0u;
  R(7)=R(6);
  R(14)=R(6);
  R(12)=LD32(R(2));
  R(6)=LD32(R(12));
L8c0d0658:;
  R(3)=LD32(R(6)+4);
  R(2)=0x0u;
  c->t=R(3)>R(2);
  if(!c->t) goto L8c0d066e;
  R(0)=LD32(R(6)+4);
  R(0)+=0xffffffffu;
  c->t=R(7)>=R(0);
  { uint32_t k=c->t; R(14)+=R(0); if(k) goto L8c0d066e; }
  R(7)=LD32(R(6)+4);
  R(7)+=0xffffffffu;
L8c0d066e:;
  c->t=R(6)==R(12);
  if(c->t) goto L8c0d0676;
  { R(6)=LD32(R(6)); goto L8c0d0658; }
L8c0d0676:;
  R(3)=sh4_getsr(c);
  R(14)<<=2;
  R(2)=0xffffff0fu;
  R(7)<<=2;
  R(14)<<=2;
  R(7)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  c->t=R(7)>>31;R(7)<<=1;
  ST32(R(4),R(14));
  R(3)&=R(2);
  ST32(R(5),R(7));
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(0)&=0xfu;
  R(0)<<=2;
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d06a2(SH4Ctx *c) {
  R(1)=0x8c2ec8acu;
  R(0)=LD32(R(1));
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0d06ac(SH4Ctx *c) {
  R(3)=0x8c2ec8acu;
  R(0)=LD32(R(3));
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0d06b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(14)=0x8c2ec8d0u;
  R(5)=R(4);
  R(5)+=0x1fu;
  R(7)=(int32_t)(int16_t)LD16(R(15));
  R(1)=LD32(R(14));
  R(5)>>=2;
  R(5)>>=2;
  R(6)=R(1);
  R(4)=LD32(R(6));
  c->t=R(5)&1;R(5)>>=1;
  R(7)=R(7)&0xFFFF;
  R(5)+=0x1u;
  { f_8c0d06e6(c); return; }
}
void f_8c0d06e6(SH4Ctx *c) {
L8c0d06e6:;
  R(2)=LD32(R(4)+4);
  c->t=R(2)>=R(5);
  if(!c->t) goto L8c0d0746;
  R(1)=LD32(R(4)+4);
  c->t=R(1)==R(5);
  if(!c->t) goto L8c0d0718;
  R(2)=LD32(R(4));
  { ST32(R(6),R(2)); goto L8c0d0728; }
L8c0d0718:;
  R(1)-=R(5);
  R(3)=R(1);
  R(3)<<=2;
  R(3)<<=2;
  ST32(R(4)+4,R(1));
  c->t=R(3)>>31;R(3)<<=1;
  R(4)+=R(3);
  ST32(R(4)+4,R(5));
L8c0d0728:;
  R(0)=R(7);
  R(3)=0xffffff0fu;
  R(2)=sh4_getsr(c);
  R(0)&=0xfu;
  ST32(R(14),R(6));
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=R(4);
  R(0)+=0x20u;
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d0746:;
  c->t=R(4)==R(1);
  if(!c->t) goto L8c0d0764;
  R(3)=sh4_getsr(c);
  R(0)=R(7);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d0764:;
  R(6)=R(4);
  { R(4)=LD32(R(4)); goto L8c0d06e6; }
}
void f_8c0d0746(SH4Ctx *c) {
  c->t=R(4)==R(1);
  if(!c->t) goto L8c0d0764;
  R(3)=sh4_getsr(c);
  R(0)=R(7);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d0764:;
  R(6)=R(4);
  { R(4)=LD32(R(4)); { f_8c0d06e6(c); return; } }
}
void f_8c0d0764(SH4Ctx *c) {
  R(6)=R(4);
  { R(4)=LD32(R(4)); { f_8c0d06e6(c); return; } }
}
void f_8c0d0770(SH4Ctx *c) {
  R(0)=0x8c2ec8acu;
  R(1)=LD32(R(0));
  R(3)=LD32(R(1)+4);
  { uint32_t tg=R(3);  sh4_call(c,tg); return; }
}
void f_8c0d077a(SH4Ctx *c) {
  R(2)=0x8c2ec8acu;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+4);
  { uint32_t tg=R(1);  sh4_call(c,tg); return; }
}
void f_8c0d0784(SH4Ctx *c) {
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  R(7)=R(0);
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d0808;
  R(3)=0x8c2ec8d0u;
  R(5)=R(4);
  R(5)+=0xffffffe0u;
  { R(4)=LD32(R(3)); goto L8c0d07b6; }
L8c0d07a6:;
  R(6)=LD32(R(4));
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c0d07b4;
  c->t=R(5)>R(4);
  if(c->t) goto L8c0d07c0;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c0d07c0;
L8c0d07b4:;
  R(4)=LD32(R(4));
L8c0d07b6:;
  c->t=R(5)>R(4);
  if(!c->t) goto L8c0d07a6;
  R(2)=LD32(R(4));
  c->t=R(5)>=R(2);
  if(c->t) goto L8c0d07a6;
L8c0d07c0:;
  R(1)=LD32(R(5)+4);
  R(3)=LD32(R(4));
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(5);
  c->t=R(1)==R(3);
  if(!c->t) goto L8c0d07e2;
  R(1)=LD32(R(4));
  R(2)=LD32(R(5)+4);
  R(3)=LD32(R(1)+4);
  R(2)+=R(3);
  ST32(R(5)+4,R(2));
  R(1)=LD32(R(4));
  R(3)=LD32(R(1));
  { ST32(R(5),R(3)); goto L8c0d07e6; }
L8c0d07e2:;
  R(1)=LD32(R(4));
  ST32(R(5),R(1));
L8c0d07e6:;
  R(3)=LD32(R(4)+4);
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(4);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c0d0802;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(5)+4);
  R(2)+=R(3);
  ST32(R(4)+4,R(2));
  R(1)=LD32(R(5));
  { ST32(R(4),R(1)); goto L8c0d0804; }
L8c0d0802:;
  ST32(R(4),R(5));
L8c0d0804:;
  R(2)=0x8c2ec8d0u;
  ST32(R(2),R(4));
L8c0d0808:;
  R(3)=sh4_getsr(c);
  R(0)=R(7)&0xFFFF;
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  {  return; }
}
void f_8c0d083c(SH4Ctx *c) {
  R(0)=sh4_getsr(c);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)>>=2;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(0)>>=2;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(0)&=0xfu;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(11)=R(0);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(13)=R(5);
  R(13)+=0x1fu;
  R(13)>>=2;
  R(4)+=0xffffffe0u;
  R(13)>>=2;
  R(2)=LD32(R(4)+4);
  c->t=R(13)&1;R(13)>>=1;
  R(13)+=0x1u;
  c->t=R(13)>R(2);
  { uint32_t k=c->t; R(12)=R(14); if(k) goto L8c0d087a; }
  { R(10)=R(13); goto L8c0d087c; }
L8c0d087a:;
  R(10)=LD32(R(4)+4);
L8c0d087c:;
  { c->pr=0x8c0d0880u; R(4)=R(14); f_8c0d077a(c); }
  R(8)=0x8c2ec8d0u;
  R(0)=R(10);
  R(0)<<=2;
  R(6)=LD32(R(8));
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(5)=R(6);
  R(4)=LD32(R(5));
L8c0d0890:;
  R(3)=LD32(R(4)+4);
  c->t=R(3)>=R(13);
  { uint32_t k=!c->t; R(7)=R(11)&0xFFFF; if(k) goto L8c0d091a; }
  R(1)=LD32(R(4)+4);
  c->t=R(1)==R(13);
  if(!c->t) goto L8c0d08a4;
  R(2)=LD32(R(4));
  { ST32(R(5),R(2)); goto L8c0d08b2; }
L8c0d08a4:;
  R(1)-=R(13);
  R(3)=R(1);
  R(3)<<=2;
  R(3)<<=2;
  ST32(R(4)+4,R(1));
  c->t=R(3)>>31;R(3)<<=1;
  R(4)+=R(3);
L8c0d08b2:;
  R(14)=R(4);
  R(14)+=0x20u;
  c->t=R(12)==R(14);
  if(c->t) goto L8c0d0900;
  c->t=R(12)>=R(14);
  if(c->t) goto L8c0d08de;
  R(6)=R(0);
  R(6)+=R(4);
  R(6)+=0x20u;
  c->t=R(6)>R(14);
  if(!c->t) goto L8c0d0900;
L8c0d08c8:;
  R(2)=R(12);
  R(3)=0x8c09c338u;
  R(1)=R(6);
  R(12)+=0xffffffe0u;
  R(6)+=0xffffffe0u;
  { c->pr=0x8c0d08d6u; R(0)=0x20u; f_8c09c338(c); }
  c->t=R(6)>R(14);
  if(c->t) goto L8c0d08c8;
  {  goto L8c0d0900; }
L8c0d08de:;
  c->t=R(12)>R(14);
  if(!c->t) goto L8c0d0900;
  R(11)=R(0);
  R(11)+=R(4);
  R(11)+=0x20u;
  R(6)=R(14);
  c->t=R(6)>=R(11);
  if(c->t) goto L8c0d0900;
L8c0d08ee:;
  R(2)=R(12);
  R(3)=0x8c09c338u;
  R(1)=R(6);
  R(12)+=0x20u;
  R(6)+=0x20u;
  { c->pr=0x8c0d08fcu; R(0)=0x20u; f_8c09c338(c); }
  c->t=R(6)>=R(11);
  if(!c->t) goto L8c0d08ee;
L8c0d0900:;
  R(0)=R(7);
  R(0)&=0xfu;
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)<<=2;
  R(0)<<=2;
  ST32(R(4)+4,R(13));
  R(3)&=R(2);
  ST32(R(8),R(5));
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  { R(0)=R(14); goto L8c0d093a; }
L8c0d091a:;
  c->t=R(4)==R(6);
  if(!c->t) goto L8c0d0934;
  R(2)=sh4_getsr(c);
  R(0)=R(7);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  { R(0)=0x0u; goto L8c0d093a; }
L8c0d0934:;
  R(5)=R(4);
  { R(4)=LD32(R(4)); goto L8c0d0890; }
L8c0d093a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d096e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(14)=R(5);
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  c->macl=R(14)*R(4);
  R(13)=(int32_t)(int16_t)LD16(R(15));
  R(13)=R(13)&0xFFFF;
  R(14)=c->macl;
  { c->pr=0x8c0d0998u; R(4)=R(14); f_8c0d06ac(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(7)=R(0); if(k) goto L8c0d09e2; }
  R(5)=0x0u;
  R(3)=R(5);
  c->t=R(3)>=R(14);
  { uint32_t k=c->t; R(4)=R(5); if(k) goto L8c0d09b4; }
L8c0d09a8:;
  R(1)=R(7);
  R(1)+=R(4);
  R(4)+=0x4u;
  c->t=R(4)>=R(14);
  { uint32_t k=!c->t; ST32(R(1),R(5)); if(k) goto L8c0d09a8; }
L8c0d09b4:;
  R(2)=0x3u;
  R(6)=R(7);
  R(14)&=R(2);
  R(4)+=0xfffffffcu;
  c->t=R(4)>=R(14);
  { uint32_t k=c->t; R(6)+=R(4); if(k) goto L8c0d09cc; }
L8c0d09c2:;
  R(4)+=0x1u;
  ST8(R(6),R(5));
  c->t=R(4)>=R(14);
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c0d09c2; }
L8c0d09cc:;
  R(3)=sh4_getsr(c);
  R(0)=R(13);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  { R(0)=R(7); goto L8c0d09f6; }
L8c0d09e2:;
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
L8c0d09f6:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0a08(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d0a0eu;  f_8c0d0dcc(c); }
  R(2)=0x8c2ec8e0u;
  ST32(R(2),R(0));
  R(1)=0x8c2ec8e4u;
  R(3)=0x0u;
  ST32(R(1),R(3));
  { c->pr=0x8c0d0a1cu;  f_8c0d0a40(c); }
  R(4)=0x900u;
  R(7)=0x0u;
  R(2)=0x8c0d0160u;
  R(5)=0x8c0d0a40u;
  { c->pr=0x8c0d0a28u; R(6)=0x5cu; f_8c0d0160(c); }
  R(3)=0x8c2ec8e8u;
  ST32(R(3),R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d0a32(SH4Ctx *c) {
  R(2)=0x8c2ec8e0u;
  R(3)=0x0u;
  ST32(R(2),R(3));
  R(3)=0x8c0d0468u;
  R(1)=0x8c2ec8e8u;
  { R(4)=LD32(R(1)); { f_8c0d0468(c); return; } }
}
void f_8c0d0a40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2ec8e4u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c0d0a54;
  R(1)=0x8c2ec8e0u;
  { c->pr=0x8c0d0a50u; R(4)=LD32(R(1)); f_8c0d0d56(c); }
  R(3)=0x8c2ec8e0u;
  ST32(R(3),R(0));
L8c0d0a54:;
  R(2)=0x8c2ec8e4u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0d0a64;
  { c->pr=0x8c0d0a60u;  f_8c0d0dcc(c); }
  R(3)=0x8c2ec8e0u;
  ST32(R(3),R(0));
L8c0d0a64:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d0a6a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2ec8e4u;
  R(0)=LD32(R(3));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(14)=R(4); if(k) goto L8c0d0a8e; }
  { c->pr=0x8c0d0a80u;  f_8c0d0dcc(c); }
  R(5)=R(14);
  R(13)=R(0);
  { c->pr=0x8c0d0a88u; R(4)=R(0); f_8c0d0bf4(c); }
  R(2)=0x8c2ec8e0u;
  { ST32(R(2),R(13)); goto L8c0d0a96; }
L8c0d0a8e:;
  R(2)=0x8c2ec8e0u;
  R(5)=R(14);
  { c->pr=0x8c0d0a96u; R(4)=LD32(R(2)); f_8c0d0bf4(c); }
L8c0d0a96:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(6)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(5)=R(0);
  { c->pr=0x8c0d0aa2u; R(4)=(int32_t)(int16_t)LD16(R(14)); f_8c0d0f08(c); }
  ST8(R(14)+7,R(0));
  { c->pr=0x8c0d0aa8u; R(4)=R(14); f_8c0d0f44(c); }
  R(3)=0x8c2ec8e4u;
  ST8(R(14)+8,R(0));
  R(0)=LD32(R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0b22(SH4Ctx *c) {
  R(3)=0x8c2ec8e4u;
  { ST32(R(3),R(4)); return; }
}
void f_8c0d0b28(SH4Ctx *c) {
  R(2)=0x8c2ec8e4u;
  { R(0)=LD32(R(2)); return; }
}
void f_8c0d0b2e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(5));
  R(5)=R(15);
  { c->pr=0x8c0d0b3au; R(5)+=0x4u; f_8c0d0b60(c); }
  R(5)=R(15);
  { c->pr=0x8c0d0b40u; R(4)=LD32(R(15)+8); f_8c0d0b60(c); }
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0d0b4c;
  { R(4)=0x0u; goto L8c0d0b58; }
L8c0d0b4c:;
  R(1)=LD32(R(15)+4);
  c->t=R(1)>R(2);
  if(!c->t) goto L8c0d0b56;
  { R(4)=0x1u; goto L8c0d0b58; }
L8c0d0b56:;
  R(4)=0xffffffffu;
L8c0d0b58:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c0d0b60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(3)=0x8c09c338u;
  R(1)=R(15);
  R(2)=0x8c0f310cu;
  { c->pr=0x8c0d0b6eu; R(0)=0x30u; f_8c09c338(c); }
  R(6)=(int32_t)(int16_t)LD16(R(4));
  R(2)=0x3u;
  R(3)=0xfffff862u;
  R(0)=0x16du;
  R(6)=R(6)&0xFFFF;
  R(6)+=R(3);
  c->macl=R(6)*R(0);
  R(7)=R(6);
  R(7)+=0x2u;
  R(1)=R(7);
  R(1)>>=2;
  c->t=(R(7)&R(2))==0;
  R(6)=R(1);
  R(0)=c->macl;
  { uint32_t k=!c->t; R(6)+=R(0); if(k) goto L8c0d0b9a; }
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(1)=0x2u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(1);
  if(c->t) goto L8c0d0b9a;
  R(6)+=0xffffffffu;
L8c0d0b9a:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(3)=R(15);
  R(7)=0x3cu;
  R(0)=R(0)&0xFF;
  R(0)+=0xffffffffu;
  R(0)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(6)+=R(2);
  R(0)=R(0)&0xFF;
  R(0)+=0xffffffffu;
  R(6)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+4);
  R(2)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(2);
  R(6)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+5);
  c->macl=R(6)*R(7);
  R(0)=R(0)&0xFF;
  R(6)=c->macl;
  R(6)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+6);
  c->macl=R(6)*R(7);
  R(0)=R(0)&0xFF;
  R(6)=c->macl;
  R(6)+=R(0);
  ST32(R(5),R(6));
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d0bf4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(2)=0x8c0f313cu;
  R(14)=R(5);
  R(3)=0x8c09c338u;
  R(5)=R(15);
  R(1)=R(15);
  { c->pr=0x8c0d0c08u; R(0)=0x30u; f_8c09c338(c); }
  R(3)=0x8c09c280u;
  R(1)=R(4);
  R(6)=0x3cu;
  { c->pr=0x8c0d0c12u; R(0)=R(6); f_8c09c280(c); }
  R(3)=0x8c0679f4u;
  ST8(R(14)+6,R(0));
  R(0)=R(6);
  { c->pr=0x8c0d0c1cu; R(1)=R(4); f_8c0679f4(c); }
  R(3)=0x8c09c280u;
  R(1)=R(0);
  R(4)=R(0);
  { c->pr=0x8c0d0c26u; R(0)=R(6); f_8c09c280(c); }
  R(3)=0x8c0679f4u;
  ST8(R(14)+5,R(0));
  R(0)=R(6);
  { c->pr=0x8c0d0c30u; R(1)=R(4); f_8c0679f4(c); }
  R(3)=0x8c09c280u;
  R(1)=R(0);
  R(4)=R(0);
  R(6)=0x18u;
  { c->pr=0x8c0d0c3cu; R(0)=R(6); f_8c09c280(c); }
  R(3)=0x8c0679f4u;
  ST8(R(14)+4,R(0));
  R(0)=R(6);
  { c->pr=0x8c0d0c46u; R(1)=R(4); f_8c0679f4(c); }
  R(3)=0x8c0679f4u;
  R(4)=R(0);
  R(2)=0x16du;
  R(1)=R(0);
  { c->pr=0x8c0d0c52u; R(0)=R(2); f_8c0679f4(c); }
  R(3)=0x8c09c280u;
  R(1)=R(4);
  R(7)=R(0);
  { c->pr=0x8c0d0c5cu; R(0)=R(2); f_8c09c280(c); }
  R(4)=R(7);
  R(4)+=0x1u;
  R(4)>>=2;
  R(6)=R(0);
  c->t=R(4)>R(6);
  if(c->t) goto L8c0d0c72;
  R(3)=0x79eu;
  R(6)-=R(4);
  R(7)+=R(3);
  { ST16(R(14),R(7)); goto L8c0d0c98; }
L8c0d0c72:;
  R(3)=0x79du;
  R(2)-=R(4);
  R(7)+=R(3);
  ST16(R(14),R(7));
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(6)+=R(2); if(k) goto L8c0d0c88; }
  { R(0)&=0x3u; goto L8c0d0c92; }
L8c0d0c88:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x3u;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c0d0c92:;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d0c98;
  R(6)+=0x1u;
L8c0d0c98:;
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(4)=0x1u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(7)=0xcu; if(k) goto L8c0d0ca8; }
  { R(0)&=0x3u; goto L8c0d0cb2; }
L8c0d0ca8:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x3u;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c0d0cb2:;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d0cd4;
  R(1)=LD32(R(5)+4);
  c->t=R(6)>=R(1);
  if(!c->t) goto L8c0d0ce6;
  R(4)=0x2u;
L8c0d0cbe:;
  R(0)=R(4);
  R(0)<<=2;
  R(3)=LD32(R(5)+R(0));
  R(3)+=0x1u;
  c->t=R(6)>=R(3);
  if(!c->t) goto L8c0d0ce6;
  R(4)+=0x1u;
  c->t=R(4)>=R(7);
  if(!c->t) goto L8c0d0cbe;
  {  goto L8c0d0ce6; }
L8c0d0cd4:;
  R(4)=0x1u;
L8c0d0cd6:;
  R(0)=R(4);
  R(0)<<=2;
  R(3)=LD32(R(5)+R(0));
  c->t=R(6)>=R(3);
  if(!c->t) goto L8c0d0ce6;
  R(4)+=0x1u;
  c->t=R(4)>=R(7);
  if(!c->t) goto L8c0d0cd6;
L8c0d0ce6:;
  R(0)=R(4);
  ST8(R(14)+2,R(0));
  R(0)+=0xffffffffu;
  R(0)<<=2;
  R(3)=LD32(R(5)+R(0));
  R(6)-=R(3);
  R(0)=R(6);
  R(0)+=0x1u;
  ST8(R(14)+3,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0d0d1c;
  { R(0)&=0x3u; goto L8c0d0d26; }
L8c0d0d1c:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x3u;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c0d0d26:;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d0d3a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(3)=0x2u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(!c->t) goto L8c0d0d3a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(0)+=0xffffffffu;
  ST8(R(14)+3,R(0));
L8c0d0d3a:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(6)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(5)=R(0);
  { c->pr=0x8c0d0d46u; R(4)=(int32_t)(int16_t)LD16(R(14)); f_8c0d0f08(c); }
  ST8(R(14)+7,R(0));
  { c->pr=0x8c0d0d4cu; R(4)=R(14); f_8c0d0f44(c); }
  ST8(R(14)+8,R(0));
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0d56(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(11)=R(15);
  R(11)+=0x4u;
  R(13)=R(11);
  R(14)=R(13);
  R(10)=R(13);
  ST32(R(15),R(13));
  R(12)=R(4);
  R(9)=R(4);
  { R(10)+=0x8u; goto L8c0d0d88; }
L8c0d0d7a:;
  { c->pr=0x8c0d0d7eu; R(4)=R(14); f_8c0d0e38(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d0d84;
  ST32(R(13),R(12));
L8c0d0d84:;
  R(14)+=0x4u;
  R(13)+=0x4u;
L8c0d0d88:;
  c->t=R(14)>=R(10);
  if(!c->t) goto L8c0d0d7a;
  R(14)=R(11);
  R(4)=LD32(R(15));
  R(14)+=0x4u;
  c->t=R(4)>=R(14);
  R(6)=0x0u;
  { uint32_t k=c->t; R(5)=R(14); if(k) goto L8c0d0db0; }
  R(7)=0x1u;
L8c0d0d9c:;
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  c->t=R(3)==R(2);
  if(c->t) goto L8c0d0da8;
  { R(6)=R(7); goto L8c0d0db0; }
L8c0d0da8:;
  R(4)+=0x4u;
  c->t=R(4)>=R(14);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c0d0d9c; }
L8c0d0db0:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0d0db8;
  R(9)=LD32(R(15));
  R(9)=LD32(R(9));
L8c0d0db8:;
  R(0)=R(9);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0dcc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x0u;
  R(13)=0x1u;
  R(14)=R(12);
L8c0d0de0:;
  R(4)=R(15);
  { c->pr=0x8c0d0de6u; R(4)+=0x4u; f_8c0d0e38(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d0dee;
  R(14)=R(13);
L8c0d0dee:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0d0de0;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d0dfa;
  { R(0)=0xffffffffu; goto L8c0d0e28; }
L8c0d0dfa:;
  R(10)=0x3u;
  R(11)=R(12);
L8c0d0dfe:;
  R(14)=R(12);
L8c0d0e00:;
  { c->pr=0x8c0d0e04u; R(4)=R(15); f_8c0d0e38(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d0e1a;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0d0e1a;
  R(14)+=0x1u;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  { uint32_t k=!c->t; ST32(R(15)+4,R(1)); if(k) goto L8c0d0e00; }
L8c0d0e1a:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0d0e22;
  R(11)=R(13);
L8c0d0e22:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0d0dfe;
  R(0)=LD32(R(15));
L8c0d0e28:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0e38(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=0x1u;
  R(14)=R(15);
  ST32(R(15),R(4));
  R(14)+=0xcu;
  R(4)=0xa0710000u;
  R(6)=0x4u;
  R(2)=0x8c0d7f00u;
  R(7)=0x2u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d0e56u; R(5)=R(14); f_8c0d7f00(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c0d0e66; }
  R(0)=0xffffffffu;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d0e66:;
  R(3)=R(14);
  R(0)=0xffff0000u;
  R(2)=LD32(R(15));
  ST32(R(15)+8,R(3));
  {uint32_t v=LD32(R(3));R(3)+=4;R(1)=v;}
  R(1)<<=16;
  ST32(R(15)+4,R(3));
  R(1)&=R(0);
  R(0)=LD32(R(3));
  R(0)=R(0)&0xFFFF;
  R(1)|=R(0);
  ST32(R(2),R(1));
  R(4)=LD32(R(15)+8);
  { c->pr=0x8c0d0e84u; R(4)=LD32(R(4)); f_8c0d0fd8(c); }
  R(4)=LD32(R(15)+4);
  { c->pr=0x8c0d0e8au; R(4)=LD32(R(4)); f_8c0d0fd8(c); }
  R(0)=0x0u;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0e94(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x1u;
  R(5)=0xa0710008u;
  R(14)=0x0u;
  ST16(R(15),R(3));
  R(7)=R(3);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d8220u;
  R(6)=0x4u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c0d0eb2u; R(4)+=0x8u; f_8c0d8220(c); }
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0ebc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x0u;
  ST32(R(15),R(4));
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  R(5)=0xa0710004u;
  R(6)=0x4u;
  R(2)=0x8c0d8220u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c0d0ed8u; R(4)+=0x8u; f_8c0d8220(c); }
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0ee2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x0u;
  ST32(R(15),R(4));
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  R(5)=0xa0710000u;
  R(6)=0x4u;
  R(2)=0x8c0d8220u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c0d0efeu; R(4)+=0x8u; f_8c0d8220(c); }
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d0f08(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x2u;
  R(3)=R(5)&0xFF;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c0d0f16;
  R(5)+=0xcu;
  R(4)+=0xffffffffu;
L8c0d0f16:;
  R(3)=0xdu;
  R(2)=0x8c067940u;
  R(1)=R(5)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(1)*(uint32_t)(uint16_t)R(3);
  R(1)=c->macl;
  R(1)+=0x8u;
  { c->pr=0x8c0d0f26u; R(0)=0x5u; f_8c067940(c); }
  R(7)=R(4)&0xFFFF;
  R(2)=0x8c067a9cu;
  R(1)=R(7);
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(1)+=R(0);
  R(6)=R(6)&0xFF;
  R(1)+=R(7);
  R(1)+=R(6);
  R(1)+=0xfffffff1u;
  { c->pr=0x8c0d0f3eu; R(0)=0x7u; f_8c067a9c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d0f44(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c0d0f4cu; R(5)=R(15); f_8c0d0b60(c); }
  R(2)=LD32(R(15));
  R(4)=0x5cb417d1u;
  R(5)=0x26ee7fu;
  c->t=R(2)>=R(4);
  if(!c->t) goto L8c0d0f68;
  R(4)=LD32(R(15));
  R(0)=R(5);
  R(3)=0xa34be82fu;
  R(2)=0x8c09c280u;
  R(4)+=R(3);
  { c->pr=0x8c0d0f64u; R(1)=R(4); f_8c09c280(c); }
  { R(4)=R(0); goto L8c0d0f7c; }
L8c0d0f68:;
  R(3)=LD32(R(15));
  R(0)=R(5);
  R(2)=0x8c09c280u;
  R(4)-=R(3);
  { c->pr=0x8c0d0f74u; R(1)=R(4); f_8c09c280(c); }
  R(1)=R(5);
  R(4)=R(0);
  R(1)-=R(4);
  R(4)=R(1);
L8c0d0f7c:;
  R(3)=0x8c0679f4u;
  R(0)=0x15180u;
  { c->pr=0x8c0d0f84u; R(1)=R(4); f_8c0679f4(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d0fd8(SH4Ctx *c) {
  R(2)=0x8c2ec8e4u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0d0ff4;
  R(3)=0x8c2ec8f4u;
  R(6)=0x8c2ec8f0u;
  R(1)=LD32(R(3));
  R(5)=LD32(R(6));
  c->t=R(5)>=R(1);
  if(c->t) goto L8c0d0ff4;
  ST32(R(5),R(4));
  R(1)=LD32(R(6));
  R(1)+=0x4u;
  ST32(R(6),R(1));
L8c0d0ff4:;
  {  return; }
}
void f_8c0d1004(SH4Ctx *c) {
  R(0)=LD32(R(4)+40);
  R(6)=0x0u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(5)=R(6); if(k) goto L8c0d1014; }
  R(5)=0x90102u;
  {  goto L8c0d1016; }
L8c0d1014:;
  ST32(R(4)+40,R(6));
L8c0d1016:;
  { R(0)=R(5); return; }
}
void f_8c0d1020(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d1026u;  f_8c0d10c0(c); }
  R(2)=0x8c0f431cu;
  R(1)=0x8c0d7bbcu;
  R(3)=0x8c0f31c8u;
  R(5)=LD32(R(2));
  { c->pr=0x8c0d1032u; R(4)=LD32(R(3)); f_8c0d7bbc(c); }
  R(2)=0x8c0d7d94u;
  { c->pr=0x8c0d1038u;  f_8c0d7d94(c); }
  R(2)=0x8c0cf830u;
  R(3)=0xa0000000u;
  R(1)=0x8c0f31c4u;
  R(2)|=R(3);
  { uint32_t tg=R(2); c->pr=0x8c0d1044u; R(4)=LD32(R(1)); sh4_call(c,tg); }
  R(3)=0x8c0d1138u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0d1138(c); return; } }
}
void f_8c0d104a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d0110u;
  { c->pr=0x8c0d1052u;  f_8c0d0110(c); }
  R(2)=0x8c0d8048u;
  R(4)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0d8048(c); return; } }
}
void f_8c0d105a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=0x8c0d7e42u;
  { c->pr=0x8c0d1078u;  f_8c0d7e42(c); }
  { c->pr=0x8c0d107cu;  f_8c0d1096(c); }
  R(0)=LD32(R(15));
  R(2)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(1);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d1096(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=0xa0000000u;
  R(4)=0x8c0d10a6u;
  R(4)|=R(3);
  R(2)=R(4);
  ST32(R(15),R(4));
  { uint32_t tg=R(2); R(15)+=0x4u; sh4_call(c,tg); return; }
}
void f_8c0d10a6(SH4Ctx *c) {
  R(7)=0xff00001cu;
  R(5)=0x0u;
  ST32(R(7),R(5));
  R(4)=0xf4000000u;
  R(6)=0xf4004000u;
L8c0d10b0:;
  ST32(R(4),R(5));
  R(4)+=0x20u;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c0d10b0;
  R(2)=0x800u;
  ST32(R(7),R(2));
  { ST32(R(7),R(5)); return; }
}
void f_8c0d10c0(SH4Ctx *c) {
  R(3)=0xffd00000u;
  R(4)=0x0u;
  ST16(R(3),R(4));
  R(2)=0xffd00004u;
  ST16(R(2),R(4));
  R(1)=0xffd00008u;
  ST16(R(1),R(4));
  R(3)+=0xcu;
  ST16(R(3),R(4));
  R(4)=0x8c0f31ccu;
L8c0d10d4:;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d10e4;
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(4));
  ST32(R(2),R(3));
  { R(4)+=0x8u; goto L8c0d10d4; }
L8c0d10e4:;
  {  return; }
}
void f_8c0d1138(SH4Ctx *c) {
  R(2)=0xffd80000u;
  R(3)=0x0u;
  ST8(R(2),R(3));
  R(4)=0xffd80004u;
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)&=0xfeu;
  ST8(R(4),R(0));
  R(1)=0xffd80010u;
  R(3)=0x2u;
  ST16(R(1),R(3));
  R(3)=0xffd80008u;
  R(5)=0xffffffffu;
  ST32(R(3),R(5));
  R(2)+=0xcu;
  ST32(R(2),R(5));
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)|=0x1u;
  { ST8(R(4),R(0)); return; }
}
void f_8c0d115e(SH4Ctx *c) {
  R(2)=0xffd8000cu;
  R(0)=0xffffffffu;
  R(3)=LD32(R(2));
  { R(0)-=R(3); return; }
}
void f_8c0d1168(SH4Ctx *c) {
  R(0)=R(5);
  { R(0)-=R(4); return; }
}
void f_8c0d116e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c280u;
  R(1)=R(4);
  R(5)=0x64u;
  { c->pr=0x8c0d117au; R(0)=R(5); f_8c09c280(c); }
  R(1)=R(0);
  R(1)<<=2;
  R(1)<<=2;
  R(3)=0x8c0679f4u;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  { c->pr=0x8c0d118au; R(0)=R(5); f_8c0679f4(c); }
  R(2)=0x8c0679f4u;
  R(1)=R(4);
  R(3)=R(0);
  { c->pr=0x8c0d1194u; R(0)=R(5); f_8c0679f4(c); }
  R(0)<<=2;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)+=R(3); return; }
}
void f_8c0d11a2(SH4Ctx *c) {
  R(0)=0x7fu;
  R(2)=R(4);
  R(0)&=R(4);
  R(5)=0x64u;
  c->macl=R(0)*R(5);
  R(3)=0xfffffff9u;
  R(2)=sh4_shld(R(2),R(3));
  R(0)=c->macl;
  c->macl=R(2)*R(5);
  R(0)=sh4_shld(R(0),R(3));
  R(2)=c->macl;
  { R(0)+=R(2); return; }
}
void f_8c0d11bc(SH4Ctx *c) {
  { R(7)=0x2u; goto L8c0d11c0; }
L8c0d11c0:;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0xffd80004u;
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0d11d0;
  { R(0)=0xffffffffu; goto L8c0d1238; }
L8c0d11d0:;
  R(3)=0xffd80000u;
  R(2)=0x0u;
  ST8(R(3),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(0)&=0xfdu;
  ST8(R(13),R(0));
  R(14)=0xffd8001cu;
  ST16(R(14),R(7));
  R(7)=0xfffffeffu;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d1210;
  R(1)=c->vbr;
  R(0)=0x244u;
  R(2)=0x8c0d1294u;
  R(3)=0x8c2ec8f8u;
  ST32(R(1)+R(0),R(2));
  R(2)=0x8c2ec8fcu;
  ST32(R(3),R(5));
  ST32(R(2),R(6));
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)|=0x20u;
  ST16(R(14),R(0));
  R(1)=0xfffff0ffu;
  R(6)=0xffd00004u;
  R(0)=(int32_t)(int16_t)LD16(R(6));
  R(3)=0xf00u;
  R(0)&=R(1);
  R(0)|=R(3);
  ST16(R(6),R(0));
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(2)&=R(7);
  ST16(R(14),R(2));
L8c0d1210:;
  R(3)=0xffd80014u;
  ST32(R(3),R(4));
  R(2)=0xffd80018u;
  ST32(R(2),R(4));
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(5)&R(5))==0;
  R(0)|=0x2u;
  { uint32_t k=!c->t; ST8(R(13),R(0)); if(k) goto L8c0d1236; }
  R(4)=0x100u;
L8c0d1224:;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0d1224;
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(0)&=0xfdu;
  ST8(R(13),R(0));
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(3)&=R(7);
  ST16(R(14),R(3));
L8c0d1236:;
  R(0)=0x0u;
L8c0d1238:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d11c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0xffd80004u;
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0d11d0;
  { R(0)=0xffffffffu; goto L8c0d1238; }
L8c0d11d0:;
  R(3)=0xffd80000u;
  R(2)=0x0u;
  ST8(R(3),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(0)&=0xfdu;
  ST8(R(13),R(0));
  R(14)=0xffd8001cu;
  ST16(R(14),R(7));
  R(7)=0xfffffeffu;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d1210;
  R(1)=c->vbr;
  R(0)=0x244u;
  R(2)=0x8c0d1294u;
  R(3)=0x8c2ec8f8u;
  ST32(R(1)+R(0),R(2));
  R(2)=0x8c2ec8fcu;
  ST32(R(3),R(5));
  ST32(R(2),R(6));
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)|=0x20u;
  ST16(R(14),R(0));
  R(1)=0xfffff0ffu;
  R(6)=0xffd00004u;
  R(0)=(int32_t)(int16_t)LD16(R(6));
  R(3)=0xf00u;
  R(0)&=R(1);
  R(0)|=R(3);
  ST16(R(6),R(0));
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(2)&=R(7);
  ST16(R(14),R(2));
L8c0d1210:;
  R(3)=0xffd80014u;
  ST32(R(3),R(4));
  R(2)=0xffd80018u;
  ST32(R(2),R(4));
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(5)&R(5))==0;
  R(0)|=0x2u;
  { uint32_t k=!c->t; ST8(R(13),R(0)); if(k) goto L8c0d1236; }
  R(4)=0x100u;
L8c0d1224:;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0d1224;
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(0)&=0xfdu;
  ST8(R(13),R(0));
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(3)&=R(7);
  ST16(R(14),R(3));
L8c0d1236:;
  R(0)=0x0u;
L8c0d1238:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d123e(SH4Ctx *c) {
  R(3)=0xffd80004u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)&=0xfdu;
  ST8(R(3),R(0));
  R(2)=0xffffffdfu;
  R(3)+=0x18u;
  R(1)=(int32_t)(int16_t)LD16(R(3));
  R(1)&=R(2);
  { ST16(R(3),R(1)); return; }
}
void f_8c0d1294(SH4Ctx *c) {
  R(3)=0xffd80004u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)&=0xfdu;
  ST8(R(3),R(0));
  R(4)=0xffd8001cu;
  R(3)=0xffffffdfu;
  R(2)=(int32_t)(int16_t)LD16(R(4));
  R(2)&=R(3);
  ST16(R(4),R(2));
  R(2)=0xfffffeffu;
  R(1)=(int32_t)(int16_t)LD16(R(4));
  R(1)&=R(2);
  ST16(R(4),R(1));
  R(1)=0x8c2ec8f8u;
  R(3)=0x8c2ec8fcu;
  R(0)=LD32(R(1));
  { uint32_t tg=R(0); R(4)=LD32(R(3)); sh4_call(c,tg); return; }
}
void f_8c0d12b8(SH4Ctx *c) {
  R(3)=0xffd80004u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)&=0xfbu;
  ST8(R(3),R(0));
  R(4)=0xffd80028u;
  R(3)=0xffffffdfu;
  R(2)=(int32_t)(int16_t)LD16(R(4));
  R(2)&=R(3);
  ST16(R(4),R(2));
  R(2)=0xfffffeffu;
  R(1)=(int32_t)(int16_t)LD16(R(4));
  R(1)&=R(2);
  ST16(R(4),R(1));
  R(1)=0x8c2ec900u;
  R(3)=0x8c2ec904u;
  R(0)=LD32(R(1));
  { uint32_t tg=R(0); R(4)=LD32(R(3)); sh4_call(c,tg); return; }
}
void f_8c0d12ec(SH4Ctx *c) {
  R(3)=0xffd80004u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)&=0xfbu;
  { ST8(R(3),R(0)); return; }
}
void f_8c0d12f6(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(7)=0xffd80004u;
  R(3)=(int32_t)(int8_t)LD8(R(7));
  ST8(R(15),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(7));
  R(6)=0xffd80028u;
  c->t=(R(4)&R(4))==0;
  R(0)&=0xfbu;
  { uint32_t k=c->t; ST8(R(7),R(0)); if(k) goto L8c0d1334; }
  R(2)=c->vbr;
  R(0)=0x248u;
  R(3)=0x8c0d12b8u;
  ST32(R(2)+R(0),R(3));
  R(3)=0x8c2ec904u;
  R(2)=0x8c2ec900u;
  ST32(R(2),R(4));
  ST32(R(3),R(5));
  R(0)=(int32_t)(int16_t)LD16(R(6));
  R(0)|=0x20u;
  ST16(R(6),R(0));
  R(1)=0xffffff0fu;
  R(5)=0xffd00004u;
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)&=R(1);
  R(0)|=0xf0u;
  ST16(R(5),R(0));
  R(2)=0xfffffeffu;
  R(0)=(int32_t)(int16_t)LD16(R(6));
  R(0)&=R(2);
  ST16(R(6),R(0));
L8c0d1334:;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; ST8(R(7),R(3)); if(k) goto L8c0d135e; }
  R(2)=0xffd80000u;
  R(1)=0x0u;
  ST8(R(2),R(1));
  R(0)=(int32_t)(int8_t)LD8(R(7));
  R(0)|=0x4u;
  ST8(R(7),R(0));
  R(4)=0x100u;
L8c0d134a:;
  R(2)=(int32_t)(int16_t)LD16(R(6));
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c0d134a;
  R(0)=(int32_t)(int8_t)LD8(R(7));
  R(0)&=0xfbu;
  ST8(R(7),R(0));
  R(3)=0xfffffeffu;
  R(2)=(int32_t)(int16_t)LD16(R(6));
  R(2)&=R(3);
  ST16(R(6),R(2));
L8c0d135e:;
  { R(15)+=0x4u; return; }
}
void f_8c0d1362(SH4Ctx *c) {
  R(4)=0xffd80004u;
  R(5)=(int32_t)(int8_t)LD8(R(4));
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)&=0xfbu;
  ST8(R(4),R(0));
  R(3)=0xffd80028u;
  R(2)=0xffffffdfu;
  R(1)=(int32_t)(int16_t)LD16(R(3));
  R(1)&=R(2);
  ST16(R(3),R(1));
  { ST8(R(4),R(5)); return; }
}
void f_8c0d13e6(SH4Ctx *c) {
  R(5)=0xffd80004u;
  R(6)=(int32_t)(int8_t)LD8(R(5));
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(0)&=0xfbu;
  ST8(R(5),R(0));
  R(2)=0xffd80020u;
  R(3)=0xffffffffu;
  ST32(R(2),R(3));
  R(3)=0xffd80024u;
  R(4)=0u-R(4);
  ST32(R(3),R(4));
  { ST8(R(5),R(6)); return; }
}
void f_8c0d1400(SH4Ctx *c) {
  R(2)=0xffd80024u;
  R(0)=0xffffffffu;
  R(3)=LD32(R(2));
  { R(0)-=R(3); return; }
}
void f_8c0d140a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=R(5)&0xFFFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0d1422;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d1426;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0d142a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d1430;
  {  goto L8c0d1436; }
L8c0d1422:;
  { R(5)=0x8u; goto L8c0d1438; }
L8c0d1426:;
  { R(5)=0x20u; goto L8c0d1438; }
L8c0d142a:;
  R(5)=0x200u;
  {  goto L8c0d1438; }
L8c0d1430:;
  R(5)=0x800u;
  {  goto L8c0d1438; }
L8c0d1436:;
  R(5)=0x80u;
L8c0d1438:;
  R(2)=0x8c09c280u;
  R(1)=R(4);
  R(6)=0x64u;
  { c->pr=0x8c0d1442u; R(0)=R(6); f_8c09c280(c); }
  c->macl=R(0)*R(5);
  R(3)=0x8c0679f4u;
  R(1)=c->macl;
  { c->pr=0x8c0d144cu; R(0)=R(6); f_8c0679f4(c); }
  R(2)=0x8c0679f4u;
  R(1)=R(4);
  R(3)=R(0);
  { c->pr=0x8c0d1456u; R(0)=R(6); f_8c0679f4(c); }
  c->macl=R(0)*R(5);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=c->macl;
  { R(0)+=R(3); return; }
}
void f_8c0d1460(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=R(5)&0xFFFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0d1478;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d147c;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0d1480;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d14a4;
  {  goto L8c0d14aa; }
L8c0d1478:;
  { R(5)=0x8u; goto L8c0d14ac; }
L8c0d147c:;
  { R(5)=0x20u; goto L8c0d14ac; }
L8c0d1480:;
  R(5)=0x200u;
  {  goto L8c0d14ac; }
L8c0d14a4:;
  R(5)=0x800u;
  {  goto L8c0d14ac; }
L8c0d14aa:;
  R(5)=0x80u;
L8c0d14ac:;
  R(2)=0x8c09c280u;
  R(1)=R(4);
  R(6)=0x64u;
  { c->pr=0x8c0d14b6u; R(0)=R(5); f_8c09c280(c); }
  c->macl=R(0)*R(6);
  R(3)=0x8c0679f4u;
  R(1)=c->macl;
  { c->pr=0x8c0d14c0u; R(0)=R(5); f_8c0679f4(c); }
  R(2)=0x8c0679f4u;
  R(1)=R(4);
  R(3)=R(0);
  { c->pr=0x8c0d14cau; R(0)=R(5); f_8c0679f4(c); }
  c->macl=R(0)*R(6);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=c->macl;
  { R(0)+=R(3); return; }
}
void f_8c0d14e4(SH4Ctx *c) {
  {  return; }
}
void f_8c0d14e8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x8c0f3528u;
  R(14)=R(4);
  R(3)=0x8c0d8c06u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { c->pr=0x8c0d14fau; R(4)=R(4)&0xFF; f_8c0d8c06(c); }
  R(3)=0x8c0d8c06u;
  ST32(R(15),R(0));
  { c->pr=0x8c0d1502u; R(4)=R(14); f_8c0d8c06(c); }
  R(5)=R(0);
  R(0)=R(14);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d151a;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0d151a;
  c->t=(int32_t)R(0)==14;
  if(c->t) goto L8c0d151a;
  c->t=(int32_t)R(0)==20;
  if(c->t) goto L8c0d151a;
  {  goto L8c0d151e; }
L8c0d151a:;
  { R(4)=0x1u; goto L8c0d1520; }
L8c0d151e:;
  R(4)=0x0u;
L8c0d1520:;
  R(0)=LD32(R(15));
  R(3)=R(5);
  R(3)+=0x12u;
  R(1)=0x8c0f3500u;
  R(0)+=0x12u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)=R(2)&0xFF;
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  R(0)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d1542(SH4Ctx *c) {
  {  return; }
}
void f_8c0d1554(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(5));
  R(14)=R(4);
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0d1566u; R(4)=R(14); f_8c0d1604(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d156e;
  { R(0)=0xfffffffeu; goto L8c0d15b0; }
L8c0d156e:;
  R(0)=0x8c0f3510u;
  R(2)=0x8c2ec908u;
  R(13)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(6)=LD32(R(15)+4);
  R(13)=R(13)&0xFF;
  R(5)=LD32(R(15));
  R(3)=R(13);
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  R(13)<<=2;
  R(13)<<=2;
  R(13)+=R(2);
  { c->pr=0x8c0d158cu; R(4)=R(13); f_8c0d1678(c); }
  R(2)=0x30u;
  R(1)=0x8c0d8d8cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=0x4u;
  R(6)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(3);
  { c->pr=0x8c0d15a2u; R(4)=R(14); f_8c0d8d8c(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0d15ae; }
  { R(0)=0xffffffffu; goto L8c0d15b0; }
L8c0d15ae:;
  R(0)=0x0u;
L8c0d15b0:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d15ba(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0d15c6u; R(4)=LD32(R(15)); f_8c0d1604(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d15d2;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0d15d2:;
  R(3)=0x30u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0x0u;
  R(2)=LD32(R(15)+8);
  R(5)=0x4u;
  R(6)=R(1);
  R(7)=R(1);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0d8d8cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d15eau; R(4)=LD32(R(15)+12); f_8c0d8d8c(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0d15fa; }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d15fa:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d1604(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0d8c06u;
  { c->pr=0x8c0d1610u; ST32(R(15),R(4)); f_8c0d8c06(c); }
  R(2)=0x8c0d9022u;
  R(4)=R(15);
  R(14)=R(0);
  R(5)=R(0);
  { c->pr=0x8c0d161cu; R(4)+=0x4u; f_8c0d9022(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0d164e;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==14;
  if(!c->t) goto L8c0d164e;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d164e;
  R(0)=(int32_t)(int16_t)LD16(R(15)+6);
  R(3)=0xc0u;
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0d164e;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d164e;
  R(0)=(int32_t)(int8_t)LD8(R(15)+10);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d164e;
  R(0)=(int32_t)(int8_t)LD8(R(15)+11);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d1658;
L8c0d164e:;
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d1658:;
  R(0)=0x1u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d1678(SH4Ctx *c) {
  R(0)=R(6);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d168a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d1690;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0d1696;
  {  goto L8c0d169c; }
L8c0d168a:;
  R(3)=0x8c0d984eu;
  {  { f_8c0d984e(c); return; } }
L8c0d1690:;
  R(3)=0x8c0d981cu;
  {  { f_8c0d981c(c); return; } }
L8c0d1696:;
  R(3)=0x8c0d987au;
  {  { f_8c0d987a(c); return; } }
L8c0d169c:;
  R(3)=0x8c0d98a6u;
  {  { f_8c0d98a6(c); return; } }
}
void f_8c0d16b4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d16bau;  f_8c0d16c6(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=0x3u;
  R(0)>>=8;
  R(4)&=R(0);
  { R(0)=R(4); return; }
}
void f_8c0d16c6(SH4Ctx *c) {
  R(3)=0xff800030u;
  R(2)=0x300u;
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(4)&0xFFFF;
  { R(0)&=R(2); return; }
}
void f_8c0d16d8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0d1740u;
  { c->pr=0x8c0d16e4u;  f_8c0d1740(c); }
  R(4)=0x1a05eu;
  R(14)=R(15);
  R(3)=0x8c0daa20u;
  R(6)=0x2u;
  ST32(R(15),R(0));
  R(14)+=0x4u;
  { c->pr=0x8c0d16f4u; R(5)=R(14); f_8c0daa20(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d171e;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)=0xffu;
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0d170a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(4);
  if(c->t) goto L8c0d171e;
L8c0d170a:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)=0x8c000070u;
  ST8(R(4),R(3));
  R(4)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(3)=0x8c0cfd4eu;
  ST8(R(4),R(0));
  R(4)=0x8c000070u;
  { c->pr=0x8c0d171eu; R(5)=0x2u; f_8c0cfd4e(c); }
L8c0d171e:;
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d1740(SH4Ctx *c) {
  R(7)=0x0u;
  R(0)=0x8c0000b0u;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0d1768(SH4Ctx *c) {
  R(7)=0x3u;
  R(0)=0x8c0000b0u;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0d177c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  R(3)=0x8c0daeb4u;
  R(14)=R(4);
  { c->pr=0x8c0d1790u; R(4)=0x2u; f_8c0daeb4(c); }
  c->t=(int32_t)R(0)==-8;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0d17a6; }
  R(3)=0x8c0dafb8u;
  { c->pr=0x8c0d179cu; R(4)=0x0u; f_8c0dafb8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d184a;
  {  goto L8c0d17aa; }
L8c0d17a6:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d184a;
L8c0d17aa:;
  R(2)=0x8c0db044u;
  R(12)=R(15);
  R(5)=R(12);
  { c->pr=0x8c0d17b4u; R(4)=0x5u; f_8c0db044(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d184a;
  R(13)=0x8c0db0c0u;
L8c0d17bc:;
  { uint32_t tg=R(13); c->pr=0x8c0d17c0u;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0d17bc; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d184a;
  R(3)=0x8c0d1768u;
  { c->pr=0x8c0d17d2u;  f_8c0d1768(c); }
  c->t=(R(14)&R(14))==0;
  R(4)=R(0);
  { uint32_t k=!c->t; R(4)+=0x10u; if(k) goto L8c0d17f0; }
  R(6)=R(12);
  { R(5)=0x8u; goto L8c0d17e8; }
L8c0d17e0:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  R(5)+=0xffffffffu;
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0d17e8:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0d17e0;
  {  goto L8c0d184e; }
L8c0d17f0:;
  R(5)=R(12);
  R(6)=0x0u;
  R(11)=0x5u;
  R(5)+=0x7u;
  R(4)+=0x7u;
  { R(7)=0x1u; goto L8c0d1828; }
L8c0d17fe:;
  R(3)=R(14);
  c->t=(R(3)&R(7))==0;
  if(c->t) goto L8c0d1820;
  R(0)=R(6);
  R(1)=(int32_t)(int8_t)LD8(R(4));
  c->t=(int32_t)R(0)==4;
  { uint32_t k=!c->t; ST8(R(5),R(1)); if(k) goto L8c0d1820; }
  R(4)+=0xffffffffu;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(4)+=0xffffffffu;
  {uint32_t v=R(3);R(5)-=1;ST8(R(5),v);}
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(4)+=0xffffffffu;
  {uint32_t v=R(3);R(5)-=1;ST8(R(5),v);}
  R(3)=(int32_t)(int8_t)LD8(R(4));
  {uint32_t v=R(3);R(5)-=1;ST8(R(5),v);}
L8c0d1820:;
  R(4)+=0xffffffffu;
  R(6)+=0x1u;
  c->t=R(14)&1;R(14)=(uint32_t)((int32_t)R(14)>>1);
  R(5)+=0xffffffffu;
L8c0d1828:;
  c->t=(int32_t)R(6)>=(int32_t)R(11);
  if(!c->t) goto L8c0d17fe;
  R(2)=0x8c0db080u;
  R(5)=R(12);
  { c->pr=0x8c0d1834u; R(4)=0x5u; f_8c0db080(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d184a;
L8c0d183a:;
  { uint32_t tg=R(13); c->pr=0x8c0d183eu;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0d183a; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d184e;
L8c0d184a:;
  { R(0)=0xffffffffu; goto L8c0d1850; }
L8c0d184e:;
  R(0)=0x0u;
L8c0d1850:;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d1880(SH4Ctx *c) {
  R(0)=R(4);
  R(0)|=R(5);
  R(0)|=R(6);
  c->t=(R(0)&0x7)==0;
  if(!c->t) goto L8c0d189e;
  c->fpscr^=SH4_FPSCR_SZ;
  R(6)>>=2;
  c->t=R(6)&1;R(6)>>=1;
L8c0d1890:;
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(6)-=1;c->t=R(6)==0;
  fp_st(c,0,R(4));
  { uint32_t k=!c->t; R(4)+=0x8u; if(k) goto L8c0d1890; }
  { c->fpscr^=SH4_FPSCR_SZ; return; }
L8c0d189e:;
  c->t=(R(0)&0x3)==0;
  if(!c->t) goto L8c0d18b2;
  R(6)>>=2;
L8c0d18a4:;
  {uint32_t v=LD32(R(5));R(5)+=4;R(0)=v;}
  R(6)-=1;c->t=R(6)==0;
  ST32(R(4),R(0));
  { uint32_t k=!c->t; R(4)+=0x4u; if(k) goto L8c0d18a4; }
  {  return; }
L8c0d18b2:;
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c0d18c6;
  c->t=R(6)&1;R(6)>>=1;
L8c0d18b8:;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(0)=(uint32_t)v;}
  R(6)-=1;c->t=R(6)==0;
  ST16(R(4),R(0));
  { uint32_t k=!c->t; R(4)+=0x2u; if(k) goto L8c0d18b8; }
  {  return; }
L8c0d18c6:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(0)=(uint32_t)v;}
  R(6)-=1;c->t=R(6)==0;
  ST8(R(4),R(0));
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0d18c6; }
  {  return; }
}
void f_8c0d18d4(SH4Ctx *c) {
  R(0)=R(4);
  R(0)|=R(5);
  c->t=(R(0)&0x7)==0;
  if(!c->t) goto L8c0d18f2;
  c->fr[0]=0x00000000u;
  c->fr[1]=0x00000000u;
  c->fpscr^=SH4_FPSCR_SZ;
  R(5)>>=2;
  c->t=R(5)&1;R(5)>>=1;
L8c0d18e6:;
  R(5)-=1;c->t=R(5)==0;
  fp_st(c,0,R(4));
  { uint32_t k=!c->t; R(4)+=0x8u; if(k) goto L8c0d18e6; }
  { c->fpscr^=SH4_FPSCR_SZ; return; }
L8c0d18f2:;
  c->t=(R(0)&0x3)==0;
  if(!c->t) goto L8c0d190c;
  R(0)=0x0u;
  R(5)>>=2;
L8c0d18fa:;
  R(5)-=1;c->t=R(5)==0;
  ST32(R(4),R(0));
  { uint32_t k=!c->t; R(4)+=0x4u; if(k) goto L8c0d18fa; }
  {  return; }
L8c0d190c:;
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c0d1924;
  R(0)=0x0u;
  c->t=R(5)&1;R(5)>>=1;
L8c0d1914:;
  R(5)-=1;c->t=R(5)==0;
  ST16(R(4),R(0));
  { uint32_t k=!c->t; R(4)+=0x2u; if(k) goto L8c0d1914; }
  {  return; }
L8c0d1924:;
  R(0)=0x0u;
L8c0d1926:;
  R(5)-=1;c->t=R(5)==0;
  ST8(R(4),R(0));
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0d1926; }
  {  return; }
}
void f_8c0d1940(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0db7e0u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d1962;
  R(2)=0x8c2ef0e8u;
  R(3)=0xfffffffeu;
  R(5)=LD32(R(2));
  R(5)&=R(3);
  { uint32_t tg=R(14); c->pr=0x8c0d1958u; R(4)=0x44u; sh4_call(c,tg); }
  R(3)=0x8c2ef124u;
  R(0)=LD32(R(3));
  R(0)|=0x8u;
  { R(5)=R(0); goto L8c0d1972; }
L8c0d1962:;
  R(2)=0x8c2ef0e8u;
  R(3)=0xfffffffeu;
  R(5)=LD32(R(2));
  R(5)&=R(3);
  { uint32_t tg=R(14); c->pr=0x8c0d196eu; R(4)=0x44u; sh4_call(c,tg); }
  R(3)=0x8c2ef124u;
  R(5)=LD32(R(3));
L8c0d1972:;
  R(4)=0xe8u;
  { uint32_t tg=R(14); c->pr=0x8c0d1978u;  sh4_call(c,tg); }
  R(2)=0x8c2ef0e8u;
  R(5)=LD32(R(2));
  { uint32_t tg=R(14); c->pr=0x8c0d1980u; R(4)=0x44u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d19c0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0dcb80u;
  { c->pr=0x8c0d19cau; ST32(R(15),R(4)); f_8c0dcb80(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d19e6;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d19d8;
  { R(3)=0x1u; goto L8c0d19da; }
L8c0d19d8:;
  R(3)=0x0u;
L8c0d19da:;
  R(1)=0x8c2ef584u;
  ST32(R(1),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0d19e6:;
  R(0)=0xeeeeu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d1a20(SH4Ctx *c) {
  R(6)=0xd0u;
  R(5)=0x0u;
  R(7)=0x8c2ef190u;
  R(6)+=R(7);
  R(4)=R(7);
L8c0d1a2a:;
  ST32(R(4)+40,R(5));
  R(4)+=0x34u;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c0d1a2a;
  {  return; }
}
void f_8c0d1a36(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=0x8c0f35a0u;
  R(2)=R(15);
  R(7)=0x8c2ef190u;
  R(13)=0x0u;
  R(0)=LD32(R(3)+4);
  R(1)=LD32(R(3));
  R(5)=R(7);
  R(6)=R(7);
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
  R(0)=0xd0u;
  R(0)+=R(7);
  c->t=R(5)>=R(0);
  { uint32_t k=c->t; R(7)=0x1u; if(k) goto L8c0d1a7c; }
L8c0d1a68:;
  R(3)=LD32(R(5)+40);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d1a74;
  R(13)=R(7);
  { R(5)=R(6); goto L8c0d1a7c; }
L8c0d1a74:;
  R(5)+=0x34u;
  c->t=R(5)>=R(0);
  { uint32_t k=!c->t; R(6)+=0x34u; if(k) goto L8c0d1a68; }
L8c0d1a7c:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0d1ac0;
  R(0)=0x0u;
  R(15)+=0x18u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c0d1ac0:;
  R(1)=0x8c2ef0ccu;
  R(2)=0x0u;
  ST32(R(5)+40,R(7));
  ST32(R(5)+28,R(4));
  ST32(R(5)+36,R(4));
  ST32(R(5),R(2));
  R(2)=R(15);
  R(3)=LD32(R(1));
  R(3)<<=2;
  R(3)+=R(2);
  R(0)=LD32(R(3));
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  ST32(R(5)+4,R(0));
  R(0)=R(1);
  R(3)=LD32(R(0));
  ST32(R(5)+8,R(3));
  R(3)=0x8c2ef138u;
  R(2)=LD32(R(3));
  ST32(R(5)+12,R(2));
  R(2)=0x8c2ef13cu;
  R(1)=LD32(R(2));
  ST32(R(5)+16,R(1));
  R(1)=LD32(R(5)+4);
  R(0)=LD32(R(3));
  c->macl=R(0)*R(1);
  R(0)=R(5);
  R(1)=c->macl;
  R(1)>>=2;
  R(1)>>=2;
  R(1)>>=2;
  ST32(R(5)+44,R(1));
  R(15)+=0x18u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c0d1b06(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c0d1b3e; }
  R(6)=0x8c2ef190u;
  R(7)=0x1u;
  R(3)=0xd0u;
  R(1)=R(6);
  ST32(R(15),R(6));
  R(1)+=R(3);
L8c0d1b1c:;
  c->t=R(6)==R(4);
  { uint32_t k=!c->t; R(6)+=0x34u; if(k) goto L8c0d1b24; }
  R(14)=R(7);
L8c0d1b24:;
  c->t=R(6)>=R(1);
  if(!c->t) goto L8c0d1b1c;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0d1b36;
  R(2)=LD32(R(4)+40);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d1b36;
  R(3)=LD32(R(4)+28);
  ST32(R(5),R(3));
L8c0d1b36:;
  R(0)=0x0u;
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d1b3e:;
  R(0)=0xeeeeu;
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d1b80(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(6)=0x0u; if(k) goto L8c0d1bb0; }
  R(5)=R(4);
  R(4)=0x8c2ef190u;
  R(3)=0xd0u;
  R(7)=0x1u;
  R(1)=R(4);
  ST32(R(15),R(4));
  R(1)+=R(3);
L8c0d1b96:;
  c->t=R(4)==R(5);
  { uint32_t k=!c->t; R(4)+=0x34u; if(k) goto L8c0d1b9e; }
  R(6)=R(7);
L8c0d1b9e:;
  c->t=R(4)>=R(1);
  if(!c->t) goto L8c0d1b96;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d1bb0;
  R(2)=LD32(R(5)+40);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d1bb0;
  R(3)=0x0u;
  ST32(R(5)+40,R(3));
L8c0d1bb0:;
  R(0)=0x0u;
  { R(15)+=0x4u; return; }
}
void f_8c0d1bb6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x1u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2ef0c8u;
  R(12)=0x8c0db7e0u;
  R(0)=LD32(R(3));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d1bda;
  R(1)=0x8c2ef0c8u;
  R(0)=LD32(R(1));
  R(0)&=0x2cu;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0d1bda;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0d1be2;
L8c0d1bda:;
  R(3)=0x8c2ef180u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d1c40;
L8c0d1be2:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d1c6a;
  R(14)=LD32(R(4)+28);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d1c6a;
  R(2)=0x8c2ef180u;
  R(13)=LD32(R(5)+28);
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d1c70;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0d1bfcu; R(4)=0x60u; sh4_call(c,tg); }
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c0d1c02u; R(4)=0x64u; sh4_call(c,tg); }
  {  goto L8c0d1c70; }
L8c0d1c40:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d1c54;
  R(14)=0x8c2ef15cu;
  R(3)=LD32(R(14));
  R(14)=LD32(R(4)+28);
  R(13)=0x8c2ef160u;
  R(14)+=R(3);
  R(3)=LD32(R(13));
  { R(13)=LD32(R(4)+28); goto L8c0d1c66; }
L8c0d1c54:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d1c6a;
  R(14)=0x8c2ef15cu;
  R(3)=LD32(R(14));
  R(14)=LD32(R(5)+28);
  R(13)=0x8c2ef160u;
  R(14)+=R(3);
  R(3)=LD32(R(13));
  R(13)=LD32(R(5)+28);
L8c0d1c66:;
  { R(13)+=R(3); goto L8c0d1c70; }
L8c0d1c6a:;
  R(0)=0xeeeeu;
  {  goto L8c0d1c7e; }
L8c0d1c70:;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0d1c76u; R(4)=0x50u; sh4_call(c,tg); }
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c0d1c7cu; R(4)=0x54u; sh4_call(c,tg); }
  R(0)=0x0u;
L8c0d1c7e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d1c88(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(3)=0x8c0f35b8u;
  R(2)=R(15);
  R(2)+=0xcu;
  R(5)=R(15);
  R(0)=LD32(R(3)+4);
  R(5)+=0xcu;
  R(1)=LD32(R(3));
  R(6)=R(15);
  R(6)+=0x4u;
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
  R(0)=R(4);
  R(0)<<=2;
  R(1)=0x8c0dc960u;
  R(2)=LD32(R(5)+R(0));
  R(5)=0x0u;
  ST32(R(15)+8,R(2));
  { c->pr=0x8c0d1cc2u; R(4)=0x7u; f_8c0dc960(c); }
  R(3)=0x8c0dc960u;
  R(5)=0x0u;
  R(6)=R(15);
  { c->pr=0x8c0d1cccu; R(4)=0x8u; f_8c0dc960(c); }
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(15)+4);
  R(1)=LD32(R(15));
  c->macl=R(2)*R(3);
  R(4)=c->macl;
  c->macl=R(4)*R(1);
  R(4)=c->macl;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c0d1d20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(3)=0x8c0f35d0u;
  R(2)=R(15);
  R(2)+=0x18u;
  R(11)=R(15);
  R(10)=R(15);
  ST32(R(15),R(5));
  R(1)=LD32(R(3));
  R(11)+=0x4u;
  R(0)=LD32(R(3)+4);
  R(14)=R(7);
  ST32(R(2),R(1));
  R(13)=R(4);
  ST32(R(2)+4,R(0));
  R(10)+=0x18u;
  R(1)=LD32(R(3)+8);
  R(0)=LD32(R(3)+12);
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  R(1)=LD32(R(3)+16);
  ST32(R(2)+16,R(1));
  R(1)=R(15);
  R(2)=0x8c0f35e4u;
  R(1)+=0x4u;
  R(0)=LD32(R(2));
  R(3)=LD32(R(2)+4);
  ST32(R(1),R(0));
  ST32(R(1)+4,R(3));
  R(0)=LD32(R(2)+8);
  R(3)=LD32(R(2)+12);
  ST32(R(1)+8,R(0));
  ST32(R(1)+12,R(3));
  R(0)=LD32(R(2)+16);
  R(12)=0x42u;
  ST32(R(1)+16,R(0));
  R(12)&=R(13);
  R(1)=LD32(R(15));
  R(0)=R(12);
  c->t=(int32_t)R(0)==66;
  { uint32_t k=!c->t; ST32(R(6),R(1)); if(k) goto L8c0d1d86; }
  R(2)=0x8c0d2a20u;
  { c->pr=0x8c0d1d84u; R(4)=R(13); f_8c0d2a20(c); }
  R(7)=R(0);
L8c0d1d86:;
  R(3)=LD32(R(15));
  R(4)=R(13);
  R(6)=0x1u;
  R(5)=R(7);
  c->t=(R(3)&R(3))==0;
  R(4)&=R(6);
  { uint32_t k=c->t; R(5)<<=2; if(k) goto L8c0d1de0; }
  R(0)=R(12);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d1dbe;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d1db4;
  R(0)=0x2cu;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0d1db4;
  R(0)=R(5);
  R(3)=LD32(R(11)+R(0));
  ST32(R(14),R(3));
  {  goto L8c0d1e56; }
L8c0d1db4:;
  R(0)=R(5);
  R(3)=LD32(R(10)+R(0));
  ST32(R(14),R(3));
  {  goto L8c0d1e56; }
L8c0d1dbe:;
  R(2)=0x20u;
  c->t=(R(2)&R(13))==0;
  if(c->t) goto L8c0d1dda;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d1dd6;
  R(0)=0x2cu;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0d1dd6;
  { R(3)=0x2u; goto L8c0d1e02; }
L8c0d1dd6:;
  { ST32(R(14),R(6)); goto L8c0d1e56; }
L8c0d1dda:;
  R(2)=0x4u;
  { ST32(R(14),R(2)); goto L8c0d1e56; }
L8c0d1de0:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d1dea;
  R(3)=0x0u;
  {  goto L8c0d1e02; }
L8c0d1dea:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d1e40;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d1e08;
  R(0)=0x2cu;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0d1e08;
  R(0)=R(5);
  R(3)=LD32(R(11)+R(0));
L8c0d1e02:;
  ST32(R(14),R(3));
  {  goto L8c0d1e56; }
L8c0d1e08:;
  R(0)=R(5);
  R(3)=LD32(R(10)+R(0));
  ST32(R(14),R(3));
  {  goto L8c0d1e56; }
L8c0d1e40:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d1e54;
  R(0)=0x2cu;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0d1e54;
  R(3)=0x2u;
  { ST32(R(14),R(3)); goto L8c0d1e56; }
L8c0d1e54:;
  ST32(R(14),R(6));
L8c0d1e56:;
  R(0)=0x0u;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d1e80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x48u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x1fu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0f43dcu;
  ST32(R(14)+8,R(5));
  ST32(R(14)+32,R(6));
  ST32(R(14)+12,R(7));
  R(2)=LD32(R(15)+24);
  ST32(R(14)+R(0),R(2));
  R(0)=0x4cu;
  R(5)=LD32(R(14)+R(0));
  c->t=(R(3)&R(5))==0;
  if(!c->t) goto L8c0d1ea8;
  { R(3)=R(5); goto L8c0d1eb0; }
L8c0d1ea8:;
  R(1)=R(5);
  R(3)=0xffffffe0u;
  R(1)+=0x20u;
  R(3)&=R(1);
L8c0d1eb0:;
  R(7)=R(4);
  ST32(R(14)+R(0),R(3));
  ST32(R(14)+4,R(4));
  R(13)=0x0u;
  R(4)=LD32(R(14)+R(0));
  R(0)=LD32(R(14));
  R(12)=0x8c0db7e0u;
  R(10)=0x8c0df8e4u;
  c->t=(int32_t)R(0)==1;
  R(6)=0x1000000u;
  R(11)=0xe4u;
  R(5)=0x800000u;
  { uint32_t k=!c->t; R(4)=0u-R(4); if(k) goto L8c0d1f40; }
  c->t=R(7)==R(6);
  if(!c->t) goto L8c0d1ee0;
  R(0)=0x50u;
  R(4)+=R(6);
  ST32(R(14)+R(0),R(4));
  ST32(R(14)+16,R(13));
  R(3)=LD32(R(14)+R(0));
  ST32(R(14)+20,R(3));
  { ST32(R(14)+24,R(6)); goto L8c0d1eee; }
L8c0d1ee0:;
  R(0)=0x50u;
  R(4)+=R(5);
  ST32(R(14)+R(0),R(4));
  ST32(R(14)+16,R(13));
  R(3)=LD32(R(14)+R(0));
  ST32(R(14)+20,R(3));
  ST32(R(14)+24,R(5));
L8c0d1eee:;
  R(5)=0x0u;
  ST32(R(14)+28,R(13));
  { uint32_t tg=R(12); c->pr=0x8c0d1ef6u; R(4)=R(11); sh4_call(c,tg); }
  { c->pr=0x8c0d1efau;  f_8c0d1fd2(c); }
  { uint32_t tg=R(10); c->pr=0x8c0d1efeu;  sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d1f96;
  R(3)=LD32(R(14)+16);
  ST32(R(4)+12,R(3));
  R(2)=LD32(R(14)+20);
  ST32(R(4)+16,R(2));
  R(3)=LD32(R(14)+44);
  ST32(R(4)+8,R(3));
  ST32(R(14)+44,R(4));
  R(2)=LD32(R(14)+48);
  ST32(R(4)+4,R(2));
  { ST32(R(14)+48,R(4)); goto L8c0d1fb0; }
L8c0d1f40:;
  c->t=R(7)==R(6);
  if(!c->t) goto L8c0d1f54;
  R(0)=0x50u;
  R(4)+=R(5);
  ST32(R(14)+R(0),R(4));
  ST32(R(14)+16,R(13));
  R(3)=LD32(R(14)+R(0));
  ST32(R(14)+20,R(3));
  {  goto L8c0d1f62; }
L8c0d1f54:;
  R(0)=0x50u;
  R(5)=0x400000u;
  R(4)+=R(5);
  ST32(R(14)+R(0),R(4));
  ST32(R(14)+16,R(13));
  R(3)=LD32(R(14)+R(0));
  ST32(R(14)+20,R(3));
L8c0d1f62:;
  ST32(R(14)+24,R(5));
  ST32(R(14)+28,R(5));
  R(5)=0x0u;
  { uint32_t tg=R(12); c->pr=0x8c0d1f6cu; R(4)=R(11); sh4_call(c,tg); }
  { c->pr=0x8c0d1f70u;  f_8c0d1fd2(c); }
  { uint32_t tg=R(10); c->pr=0x8c0d1f74u;  sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d1f96;
  R(3)=LD32(R(14)+16);
  ST32(R(4)+12,R(3));
  R(2)=LD32(R(14)+20);
  ST32(R(4)+16,R(2));
  R(3)=LD32(R(14)+44);
  ST32(R(4)+8,R(3));
  ST32(R(14)+44,R(4));
  R(2)=LD32(R(14)+48);
  ST32(R(4)+4,R(2));
  { uint32_t tg=R(10); c->pr=0x8c0d1f90u; ST32(R(14)+48,R(4)); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d1f9a;
L8c0d1f96:;
  { R(0)=0x3u; goto L8c0d1fc4; }
L8c0d1f9a:;
  R(2)=LD32(R(14)+24);
  R(0)=0x40u;
  ST32(R(4)+12,R(2));
  R(3)=LD32(R(14)+28);
  ST32(R(4)+16,R(3));
  R(2)=LD32(R(14)+60);
  ST32(R(4)+8,R(2));
  ST32(R(14)+60,R(4));
  R(3)=LD32(R(14)+R(0));
  ST32(R(4)+4,R(3));
  ST32(R(14)+R(0),R(4));
L8c0d1fb0:;
  R(0)=0x4cu;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d1fc2;
  R(0)=0x54u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x50u;
  R(2)=LD32(R(14)+R(0));
  ST32(R(3),R(2));
L8c0d1fc2:;
  R(0)=0x0u;
L8c0d1fc4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d1fd2(SH4Ctx *c) {
  R(4)=0x8c0f43dcu;
  R(5)=0x0u;
  R(2)=R(5);
  R(3)=LD32(R(4)+8);
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(6)=R(5); if(k) goto L8c0d1ffa; }
L8c0d1fe0:;
  R(0)=R(6);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(6);
  R(0)+=R(3);
  R(2)=LD32(R(4)+32);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(6)+=0x1u;
  R(0)+=R(2);
  ST16(R(0),R(5));
  R(3)=LD32(R(4)+8);
  c->t=R(6)>=R(3);
  if(!c->t) goto L8c0d1fe0;
L8c0d1ffa:;
  R(0)=0x40u;
  R(6)=R(5);
  R(2)=0x0u;
  ST32(R(4)+36,R(5));
  ST32(R(4)+40,R(5));
  ST32(R(4)+44,R(5));
  ST32(R(4)+48,R(5));
  ST32(R(4)+52,R(5));
  ST32(R(4)+56,R(5));
  ST32(R(4)+60,R(5));
  ST32(R(4)+R(0),R(5));
  R(3)=LD32(R(4)+12);
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(7)=0x4cu; if(k) goto L8c0d202e; }
L8c0d2018:;
  c->macl=R(6)*R(7);
  R(3)=0x48u;
  R(3)+=R(4);
  R(3)=LD32(R(3));
  R(6)+=0x1u;
  R(0)=c->macl;
  R(0)+=R(3);
  ST16(R(0),R(5));
  R(2)=LD32(R(4)+12);
  c->t=R(6)>=R(2);
  if(!c->t) goto L8c0d2018;
L8c0d202e:;
  R(0)=0x44u;
  ST32(R(4)+R(0),R(5));
  { R(0)=0x0u; return; }
}
void f_8c0d2060(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff04u;
  R(15)+=R(0);
  R(2)=0x8c0d3818u;
  R(3)=0x8c2ef0c8u;
  { c->pr=0x8c0d206eu; ST32(R(3),R(4)); f_8c0d3818(c); }
  R(3)=0x353u;
  R(4)=0x1u;
  ST32(R(15)+8,R(3));
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2090;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d2090;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2090;
  R(3)=0x218u;
  { ST32(R(15)+20,R(3)); goto L8c0d2094; }
L8c0d2090:;
  R(1)=0x10cu;
  ST32(R(15)+20,R(1));
L8c0d2094:;
  R(3)=0x8cu;
  R(2)=0x334u;
  ST32(R(15),R(3));
  R(3)=0x8c2ef0c8u;
  ST32(R(15)+4,R(2));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d20bc;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d20bc;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d20bc;
  R(2)=0x214u;
  R(3)=0x24u;
  ST32(R(15)+12,R(3));
  { ST32(R(15)+16,R(2)); goto L8c0d20c4; }
L8c0d20bc:;
  R(3)=0x10au;
  R(1)=0x12u;
  ST32(R(15)+12,R(1));
  ST32(R(15)+16,R(3));
L8c0d20c4:;
  R(3)=0x8c2ef0c8u;
  R(2)=0x57u;
  ST32(R(15)+24,R(2));
  R(0)=LD32(R(3));
  c->t=(R(0)&0x20)==0;
  { uint32_t k=c->t; R(5)=0x15u; if(k) goto L8c0d2100; }
  R(1)=0x104u;
  {  goto L8c0d2102; }
L8c0d2100:;
  R(1)=0x102u;
L8c0d2102:;
  R(0)=0x74u;
  R(3)=0x8c2ef0c8u;
  ST32(R(15)+R(0),R(1));
  R(0)=0x78u;
  ST32(R(15)+R(0),R(5));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2126;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d2126;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2126;
  R(3)=0xcu;
  { ST32(R(15)+28,R(3)); goto L8c0d212a; }
L8c0d2126:;
  R(1)=0x6u;
  ST32(R(15)+28,R(1));
L8c0d212a:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2146;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d2146;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2146;
  R(3)=0x16cu;
  { ST32(R(15)+32,R(3)); goto L8c0d214a; }
L8c0d2146:;
  R(1)=0x319u;
  ST32(R(15)+32,R(1));
L8c0d214a:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d21a0;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d21a0;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d21a0;
  R(3)=0x1fu;
  { ST32(R(15)+36,R(3)); goto L8c0d21a4; }
L8c0d21a0:;
  R(1)=0xfu;
  ST32(R(15)+36,R(1));
L8c0d21a4:;
  R(3)=0x8c2ef0c8u;
  R(5)=0x0u;
  ST32(R(15)+40,R(4));
  ST32(R(15)+44,R(5));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d21bc;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d21d4;
  {  goto L8c0d21d0; }
L8c0d21bc:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d21cc;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d21d4;
  {  goto L8c0d21d0; }
L8c0d21cc:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d21d4;
L8c0d21d0:;
  { ST32(R(15)+48,R(4)); goto L8c0d21d6; }
L8c0d21d4:;
  ST32(R(15)+48,R(5));
L8c0d21d6:;
  R(0)=0x40u;
  R(3)=0x8c2ef0c8u;
  R(7)=0x16u;
  ST32(R(15)+52,R(5));
  ST32(R(15)+56,R(5));
  ST32(R(15)+60,R(5));
  ST32(R(15)+R(0),R(5));
  R(0)=0x44u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x70u;
  ST32(R(15)+R(0),R(7));
  R(0)=LD32(R(3));
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0d2220;
  R(0)=0x6cu;
  { ST32(R(15)+R(0),R(5)); goto L8c0d2224; }
L8c0d2220:;
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
L8c0d2224:;
  R(0)=0x48u;
  R(3)=0xa0u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(5));
  R(0)=0xf8u;
  R(2)=0x1e0u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x60u;
  R(3)=0x8c2ef0c8u;
  ST32(R(15)+R(0),R(5));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)=0x17u; if(k) goto L8c0d2264; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d22a0;
  {  goto L8c0d2278; }
L8c0d2264:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d2274;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d22a0;
  {  goto L8c0d2278; }
L8c0d2274:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d22a0;
L8c0d2278:;
  R(0)=0xf0u;
  { ST32(R(15)+R(0),R(6)); goto L8c0d22a4; }
L8c0d22a0:;
  R(0)=0xf0u;
  ST32(R(15)+R(0),R(7));
L8c0d22a4:;
  R(0)=0xf4u;
  R(3)=0xf0u;
  R(2)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(6));
  ST32(R(2),R(3));
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  R(0)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=LD32(R(0));
  R(1)+=R(3);
  R(3)=0x8c2ef174u;
  ST32(R(3),R(1));
  R(1)=0x8c2ef178u;
  R(2)=LD32(R(15)+12);
  ST32(R(1),R(2));
  R(0)=0x8c2ef0d0u;
  R(2)=LD32(R(0));
  { uint32_t tg=R(2); c->pr=0x8c0d22d0u; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d2100(SH4Ctx *c) {
  R(1)=0x102u;
  R(0)=0x74u;
  R(3)=0x8c2ef0c8u;
  ST32(R(15)+R(0),R(1));
  R(0)=0x78u;
  ST32(R(15)+R(0),R(5));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2126;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d2126;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2126;
  R(3)=0xcu;
  { ST32(R(15)+28,R(3)); goto L8c0d212a; }
L8c0d2126:;
  R(1)=0x6u;
  ST32(R(15)+28,R(1));
L8c0d212a:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2146;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d2146;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2146;
  R(3)=0x16cu;
  { ST32(R(15)+32,R(3)); goto L8c0d214a; }
L8c0d2146:;
  R(1)=0x319u;
  ST32(R(15)+32,R(1));
L8c0d214a:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d21a0;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d21a0;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d21a0;
  R(3)=0x1fu;
  { ST32(R(15)+36,R(3)); goto L8c0d21a4; }
L8c0d21a0:;
  R(1)=0xfu;
  ST32(R(15)+36,R(1));
L8c0d21a4:;
  R(3)=0x8c2ef0c8u;
  R(5)=0x0u;
  ST32(R(15)+40,R(4));
  ST32(R(15)+44,R(5));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d21bc;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d21d4;
  {  goto L8c0d21d0; }
L8c0d21bc:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d21cc;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d21d4;
  {  goto L8c0d21d0; }
L8c0d21cc:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d21d4;
L8c0d21d0:;
  { ST32(R(15)+48,R(4)); goto L8c0d21d6; }
L8c0d21d4:;
  ST32(R(15)+48,R(5));
L8c0d21d6:;
  R(0)=0x40u;
  R(3)=0x8c2ef0c8u;
  R(7)=0x16u;
  ST32(R(15)+52,R(5));
  ST32(R(15)+56,R(5));
  ST32(R(15)+60,R(5));
  ST32(R(15)+R(0),R(5));
  R(0)=0x44u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x70u;
  ST32(R(15)+R(0),R(7));
  R(0)=LD32(R(3));
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0d2220;
  R(0)=0x6cu;
  { ST32(R(15)+R(0),R(5)); goto L8c0d2224; }
L8c0d2220:;
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
L8c0d2224:;
  R(0)=0x48u;
  R(3)=0xa0u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(5));
  R(0)=0xf8u;
  R(2)=0x1e0u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x60u;
  R(3)=0x8c2ef0c8u;
  ST32(R(15)+R(0),R(5));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)=0x17u; if(k) goto L8c0d2264; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d22a0;
  {  goto L8c0d2278; }
L8c0d2264:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d2274;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d22a0;
  {  goto L8c0d2278; }
L8c0d2274:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d22a0;
L8c0d2278:;
  R(0)=0xf0u;
  { ST32(R(15)+R(0),R(6)); goto L8c0d22a4; }
L8c0d22a0:;
  R(0)=0xf0u;
  ST32(R(15)+R(0),R(7));
L8c0d22a4:;
  R(0)=0xf4u;
  R(3)=0xf0u;
  R(2)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(6));
  ST32(R(2),R(3));
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  R(0)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=LD32(R(0));
  R(1)+=R(3);
  R(3)=0x8c2ef174u;
  ST32(R(3),R(1));
  R(1)=0x8c2ef178u;
  R(2)=LD32(R(15)+12);
  ST32(R(1),R(2));
  R(0)=0x8c2ef0d0u;
  R(2)=LD32(R(0));
  { uint32_t tg=R(2); c->pr=0x8c0d22d0u; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d21a0(SH4Ctx *c) {
  R(1)=0xfu;
  ST32(R(15)+36,R(1));
  R(3)=0x8c2ef0c8u;
  R(5)=0x0u;
  ST32(R(15)+40,R(4));
  ST32(R(15)+44,R(5));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d21bc;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d21d4;
  {  goto L8c0d21d0; }
L8c0d21bc:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d21cc;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d21d4;
  {  goto L8c0d21d0; }
L8c0d21cc:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d21d4;
L8c0d21d0:;
  { ST32(R(15)+48,R(4)); goto L8c0d21d6; }
L8c0d21d4:;
  ST32(R(15)+48,R(5));
L8c0d21d6:;
  R(0)=0x40u;
  R(3)=0x8c2ef0c8u;
  R(7)=0x16u;
  ST32(R(15)+52,R(5));
  ST32(R(15)+56,R(5));
  ST32(R(15)+60,R(5));
  ST32(R(15)+R(0),R(5));
  R(0)=0x44u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x70u;
  ST32(R(15)+R(0),R(7));
  R(0)=LD32(R(3));
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0d2220;
  R(0)=0x6cu;
  { ST32(R(15)+R(0),R(5)); goto L8c0d2224; }
L8c0d2220:;
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
L8c0d2224:;
  R(0)=0x48u;
  R(3)=0xa0u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(5));
  R(0)=0xf8u;
  R(2)=0x1e0u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x60u;
  R(3)=0x8c2ef0c8u;
  ST32(R(15)+R(0),R(5));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)=0x17u; if(k) goto L8c0d2264; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d22a0;
  {  goto L8c0d2278; }
L8c0d2264:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d2274;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d22a0;
  {  goto L8c0d2278; }
L8c0d2274:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d22a0;
L8c0d2278:;
  R(0)=0xf0u;
  { ST32(R(15)+R(0),R(6)); goto L8c0d22a4; }
L8c0d22a0:;
  R(0)=0xf0u;
  ST32(R(15)+R(0),R(7));
L8c0d22a4:;
  R(0)=0xf4u;
  R(3)=0xf0u;
  R(2)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(6));
  ST32(R(2),R(3));
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  R(0)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=LD32(R(0));
  R(1)+=R(3);
  R(3)=0x8c2ef174u;
  ST32(R(3),R(1));
  R(1)=0x8c2ef178u;
  R(2)=LD32(R(15)+12);
  ST32(R(1),R(2));
  R(0)=0x8c2ef0d0u;
  R(2)=LD32(R(0));
  { uint32_t tg=R(2); c->pr=0x8c0d22d0u; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d2220(SH4Ctx *c) {
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x48u;
  R(3)=0xa0u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(5));
  R(0)=0xf8u;
  R(2)=0x1e0u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x60u;
  R(3)=0x8c2ef0c8u;
  ST32(R(15)+R(0),R(5));
  R(0)=LD32(R(3));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)=0x17u; if(k) goto L8c0d2264; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d22a0;
  {  goto L8c0d2278; }
L8c0d2264:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d2274;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d22a0;
  {  goto L8c0d2278; }
L8c0d2274:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d22a0;
L8c0d2278:;
  R(0)=0xf0u;
  { ST32(R(15)+R(0),R(6)); goto L8c0d22a4; }
L8c0d22a0:;
  R(0)=0xf0u;
  ST32(R(15)+R(0),R(7));
L8c0d22a4:;
  R(0)=0xf4u;
  R(3)=0xf0u;
  R(2)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(6));
  ST32(R(2),R(3));
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  R(0)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=LD32(R(0));
  R(1)+=R(3);
  R(3)=0x8c2ef174u;
  ST32(R(3),R(1));
  R(1)=0x8c2ef178u;
  R(2)=LD32(R(15)+12);
  ST32(R(1),R(2));
  R(0)=0x8c2ef0d0u;
  R(2)=LD32(R(0));
  { uint32_t tg=R(2); c->pr=0x8c0d22d0u; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d22a0(SH4Ctx *c) {
  R(0)=0xf0u;
  ST32(R(15)+R(0),R(7));
  R(0)=0xf4u;
  R(3)=0xf0u;
  R(2)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(6));
  ST32(R(2),R(3));
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  R(0)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=LD32(R(0));
  R(1)+=R(3);
  R(3)=0x8c2ef174u;
  ST32(R(3),R(1));
  R(1)=0x8c2ef178u;
  R(2)=LD32(R(15)+12);
  ST32(R(1),R(2));
  R(0)=0x8c2ef0d0u;
  R(2)=LD32(R(0));
  { uint32_t tg=R(2); c->pr=0x8c0d22d0u; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d2300(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff04u;
  R(15)+=R(0);
  R(3)=0x8c2ef0c8u;
  R(13)=R(4);
  ST32(R(3),R(4));
  R(2)=0x8c0d3818u;
  { c->pr=0x8c0d2316u; R(4)=R(13); f_8c0d3818(c); }
  R(3)=0x353u;
  R(0)=0x74u;
  R(2)=0x211u;
  R(14)=0x0u;
  ST32(R(15)+8,R(3));
  R(5)=0x24u;
  R(3)=0x88u;
  R(4)=0x208u;
  ST32(R(15)+20,R(2));
  ST32(R(15),R(3));
  R(3)=0x51u;
  R(2)=0x343u;
  ST32(R(15)+4,R(2));
  R(2)=0x3u;
  ST32(R(15)+12,R(5));
  ST32(R(15)+16,R(4));
  ST32(R(15)+24,R(3));
  R(3)=0x319u;
  ST32(R(15)+28,R(2));
  R(2)=0xfu;
  ST32(R(15)+32,R(3));
  R(3)=0x15u;
  ST32(R(15)+36,R(2));
  ST32(R(15)+R(0),R(4));
  R(0)=0x78u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x40u;
  ST32(R(15)+52,R(14));
  ST32(R(15)+56,R(14));
  ST32(R(15)+60,R(14));
  ST32(R(15)+R(0),R(14));
  R(0)=0x44u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x70u;
  R(3)=0x16u;
  ST32(R(15)+R(0),R(3));
  R(3)=0x10u;
  c->t=(R(13)&R(3))==0;
  { uint32_t k=c->t; R(4)=0x1u; if(k) goto L8c0d236c; }
  R(0)=0x6cu;
  { ST32(R(15)+R(0),R(14)); goto L8c0d2370; }
L8c0d236c:;
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
L8c0d2370:;
  R(0)=0x48u;
  R(6)=0x1e0u;
  R(3)=0x90u;
  ST32(R(15)+40,R(14));
  ST32(R(15)+44,R(14));
  ST32(R(15)+48,R(14));
  ST32(R(15)+R(0),R(4));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(14));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(14));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x60u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(6));
  R(4)=0x23u;
  R(0)=0xf8u;
  ST32(R(15)+R(0),R(3));
  R(3)+=0x15u;
  R(0)=0xf0u;
  ST32(R(15)+R(0),R(4));
  R(0)=0xf4u;
  ST32(R(15)+R(0),R(4));
  R(0)=0xf8u;
  ST32(R(15)+R(0),R(3));
  R(0)=0xf0u;
  R(3)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0xf4u;
  ST32(R(15)+R(0),R(5));
  ST32(R(3),R(6));
  R(0)=R(3);
  R(2)=LD32(R(0));
  R(1)=LD32(R(15)+12);
  R(1)+=R(2);
  R(2)=0x8c2ef174u;
  ST32(R(2),R(1));
  R(1)=0x8c2ef178u;
  R(0)=LD32(R(15)+12);
  ST32(R(1),R(0));
  R(0)=0x8c2ef0d0u;
  R(3)=LD32(R(0));
  { uint32_t tg=R(3); c->pr=0x8c0d23d8u; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(0)=R(14);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d2440(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff04u;
  R(15)+=R(0);
  R(3)=0x8c2ef0c8u;
  R(14)=R(4);
  ST32(R(3),R(4));
  R(2)=0x8c0d3818u;
  { c->pr=0x8c0d2454u; R(4)=R(14); f_8c0d3818(c); }
  R(6)=0x1u;
  R(5)=R(14);
  R(5)&=R(6);
  R(3)=0x359u;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  ST32(R(15)+8,R(3));
  if(c->t) goto L8c0d2474;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d2474;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d2474;
  R(2)=0x20cu;
  { ST32(R(15)+20,R(2)); goto L8c0d2478; }
L8c0d2474:;
  R(1)=0x106u;
  ST32(R(15)+20,R(1));
L8c0d2478:;
  R(2)=0x345u;
  R(0)=R(5);
  R(4)=0x102u;
  R(3)=0x7eu;
  c->t=(int32_t)R(0)==1;
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  { uint32_t k=c->t; R(7)=0x12u; if(k) goto L8c0d249a; }
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d249a;
  R(3)=0x204u;
  R(2)=0x24u;
  ST32(R(15)+12,R(2));
  { ST32(R(15)+16,R(3)); goto L8c0d249e; }
L8c0d249a:;
  ST32(R(15)+12,R(7));
  ST32(R(15)+16,R(4));
L8c0d249e:;
  R(2)=0x20u;
  R(3)=0x3fu;
  c->t=(R(2)&R(14))==0;
  ST32(R(15)+24,R(3));
  if(c->t) goto L8c0d24e0;
  R(1)=0x104u;
  R(0)=0x74u;
  { ST32(R(15)+R(0),R(1)); goto L8c0d24e4; }
L8c0d24e0:;
  R(0)=0x74u;
  ST32(R(15)+R(0),R(4));
L8c0d24e4:;
  R(0)=0x78u;
  R(3)=0x15u;
  ST32(R(15)+R(0),R(3));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d24fc;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d24fc;
  R(2)=0x6u;
  { ST32(R(15)+28,R(2)); goto L8c0d2500; }
L8c0d24fc:;
  R(1)=0x3u;
  ST32(R(15)+28,R(1));
L8c0d2500:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2512;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d2512;
  R(2)=0x16cu;
  { ST32(R(15)+32,R(2)); goto L8c0d2516; }
L8c0d2512:;
  R(1)=0x319u;
  ST32(R(15)+32,R(1));
L8c0d2516:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2528;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d2528;
  R(2)=0x1fu;
  { ST32(R(15)+36,R(2)); goto L8c0d252c; }
L8c0d2528:;
  R(1)=0xfu;
  ST32(R(15)+36,R(1));
L8c0d252c:;
  R(0)=R(5);
  R(4)=0x0u;
  c->t=(int32_t)R(0)==1;
  ST32(R(15)+40,R(6));
  ST32(R(15)+44,R(4));
  if(!c->t) goto L8c0d2560;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2576;
  {  goto L8c0d2572; }
L8c0d2560:;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d256e;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d2576;
  {  goto L8c0d2572; }
L8c0d256e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2576;
L8c0d2572:;
  { ST32(R(15)+48,R(6)); goto L8c0d2578; }
L8c0d2576:;
  ST32(R(15)+48,R(4));
L8c0d2578:;
  R(0)=0x40u;
  ST32(R(15)+52,R(4));
  R(3)=0x16u;
  ST32(R(15)+56,R(4));
  R(2)=0x10u;
  ST32(R(15)+60,R(4));
  ST32(R(15)+R(0),R(4));
  R(0)=0x44u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x70u;
  c->t=(R(2)&R(14))==0;
  ST32(R(15)+R(0),R(3));
  if(c->t) goto L8c0d2598;
  R(0)=0x6cu;
  { ST32(R(15)+R(0),R(4)); goto L8c0d259c; }
L8c0d2598:;
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(6));
L8c0d259c:;
  R(0)=0x48u;
  R(3)=0xa4u;
  ST32(R(15)+R(0),R(6));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(4));
  R(0)=0xf8u;
  R(2)=0x1e0u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x60u;
  ST32(R(15)+R(0),R(4));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d2600;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2618;
  {  goto L8c0d2612; }
L8c0d2600:;
  R(3)=0x2cu;
  c->t=(R(14)&R(3))==0;
  if(c->t) goto L8c0d260e;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d2618;
  {  goto L8c0d2612; }
L8c0d260e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2618;
L8c0d2612:;
  R(0)=0xf0u;
  { ST32(R(15)+R(0),R(7)); goto L8c0d261e; }
L8c0d2618:;
  R(0)=0xf0u;
  R(2)=0x11u;
  ST32(R(15)+R(0),R(2));
L8c0d261e:;
  R(0)=0xf4u;
  R(3)=0xf0u;
  R(2)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(7));
  ST32(R(2),R(3));
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  R(0)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=LD32(R(0));
  R(1)+=R(3);
  R(3)=0x8c2ef174u;
  ST32(R(3),R(1));
  R(1)=0x8c2ef178u;
  R(2)=LD32(R(15)+12);
  ST32(R(1),R(2));
  R(0)=0x8c2ef0d0u;
  R(2)=LD32(R(0));
  { uint32_t tg=R(2); c->pr=0x8c0d264au; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d24e0(SH4Ctx *c) {
  R(0)=0x74u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x78u;
  R(3)=0x15u;
  ST32(R(15)+R(0),R(3));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d24fc;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d24fc;
  R(2)=0x6u;
  { ST32(R(15)+28,R(2)); goto L8c0d2500; }
L8c0d24fc:;
  R(1)=0x3u;
  ST32(R(15)+28,R(1));
L8c0d2500:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2512;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d2512;
  R(2)=0x16cu;
  { ST32(R(15)+32,R(2)); goto L8c0d2516; }
L8c0d2512:;
  R(1)=0x319u;
  ST32(R(15)+32,R(1));
L8c0d2516:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2528;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d2528;
  R(2)=0x1fu;
  { ST32(R(15)+36,R(2)); goto L8c0d252c; }
L8c0d2528:;
  R(1)=0xfu;
  ST32(R(15)+36,R(1));
L8c0d252c:;
  R(0)=R(5);
  R(4)=0x0u;
  c->t=(int32_t)R(0)==1;
  ST32(R(15)+40,R(6));
  ST32(R(15)+44,R(4));
  if(!c->t) goto L8c0d2560;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2576;
  {  goto L8c0d2572; }
L8c0d2560:;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d256e;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d2576;
  {  goto L8c0d2572; }
L8c0d256e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2576;
L8c0d2572:;
  { ST32(R(15)+48,R(6)); goto L8c0d2578; }
L8c0d2576:;
  ST32(R(15)+48,R(4));
L8c0d2578:;
  R(0)=0x40u;
  ST32(R(15)+52,R(4));
  R(3)=0x16u;
  ST32(R(15)+56,R(4));
  R(2)=0x10u;
  ST32(R(15)+60,R(4));
  ST32(R(15)+R(0),R(4));
  R(0)=0x44u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x70u;
  c->t=(R(2)&R(14))==0;
  ST32(R(15)+R(0),R(3));
  if(c->t) goto L8c0d2598;
  R(0)=0x6cu;
  { ST32(R(15)+R(0),R(4)); goto L8c0d259c; }
L8c0d2598:;
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(6));
L8c0d259c:;
  R(0)=0x48u;
  R(3)=0xa4u;
  ST32(R(15)+R(0),R(6));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(4));
  R(0)=0xf8u;
  R(2)=0x1e0u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x60u;
  ST32(R(15)+R(0),R(4));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d2600;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2618;
  {  goto L8c0d2612; }
L8c0d2600:;
  R(3)=0x2cu;
  c->t=(R(14)&R(3))==0;
  if(c->t) goto L8c0d260e;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d2618;
  {  goto L8c0d2612; }
L8c0d260e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2618;
L8c0d2612:;
  R(0)=0xf0u;
  { ST32(R(15)+R(0),R(7)); goto L8c0d261e; }
L8c0d2618:;
  R(0)=0xf0u;
  R(2)=0x11u;
  ST32(R(15)+R(0),R(2));
L8c0d261e:;
  R(0)=0xf4u;
  R(3)=0xf0u;
  R(2)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(7));
  ST32(R(2),R(3));
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  R(0)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=LD32(R(0));
  R(1)+=R(3);
  R(3)=0x8c2ef174u;
  ST32(R(3),R(1));
  R(1)=0x8c2ef178u;
  R(2)=LD32(R(15)+12);
  ST32(R(1),R(2));
  R(0)=0x8c2ef0d0u;
  R(2)=LD32(R(0));
  { uint32_t tg=R(2); c->pr=0x8c0d264au; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d2560(SH4Ctx *c) {
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d256e;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d2576;
  {  goto L8c0d2572; }
L8c0d256e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2576;
L8c0d2572:;
  { ST32(R(15)+48,R(6)); goto L8c0d2578; }
L8c0d2576:;
  ST32(R(15)+48,R(4));
L8c0d2578:;
  R(0)=0x40u;
  ST32(R(15)+52,R(4));
  R(3)=0x16u;
  ST32(R(15)+56,R(4));
  R(2)=0x10u;
  ST32(R(15)+60,R(4));
  ST32(R(15)+R(0),R(4));
  R(0)=0x44u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x70u;
  c->t=(R(2)&R(14))==0;
  ST32(R(15)+R(0),R(3));
  if(c->t) goto L8c0d2598;
  R(0)=0x6cu;
  { ST32(R(15)+R(0),R(4)); goto L8c0d259c; }
L8c0d2598:;
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(6));
L8c0d259c:;
  R(0)=0x48u;
  R(3)=0xa4u;
  ST32(R(15)+R(0),R(6));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(4));
  R(0)=0xf8u;
  R(2)=0x1e0u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x60u;
  ST32(R(15)+R(0),R(4));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d2600;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2618;
  {  goto L8c0d2612; }
L8c0d2600:;
  R(3)=0x2cu;
  c->t=(R(14)&R(3))==0;
  if(c->t) goto L8c0d260e;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d2618;
  {  goto L8c0d2612; }
L8c0d260e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2618;
L8c0d2612:;
  R(0)=0xf0u;
  { ST32(R(15)+R(0),R(7)); goto L8c0d261e; }
L8c0d2618:;
  R(0)=0xf0u;
  R(2)=0x11u;
  ST32(R(15)+R(0),R(2));
L8c0d261e:;
  R(0)=0xf4u;
  R(3)=0xf0u;
  R(2)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(7));
  ST32(R(2),R(3));
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  R(0)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=LD32(R(0));
  R(1)+=R(3);
  R(3)=0x8c2ef174u;
  ST32(R(3),R(1));
  R(1)=0x8c2ef178u;
  R(2)=LD32(R(15)+12);
  ST32(R(1),R(2));
  R(0)=0x8c2ef0d0u;
  R(2)=LD32(R(0));
  { uint32_t tg=R(2); c->pr=0x8c0d264au; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d2600(SH4Ctx *c) {
  R(3)=0x2cu;
  c->t=(R(14)&R(3))==0;
  if(c->t) goto L8c0d260e;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d2618;
  {  goto L8c0d2612; }
L8c0d260e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2618;
L8c0d2612:;
  R(0)=0xf0u;
  { ST32(R(15)+R(0),R(7)); goto L8c0d261e; }
L8c0d2618:;
  R(0)=0xf0u;
  R(2)=0x11u;
  ST32(R(15)+R(0),R(2));
L8c0d261e:;
  R(0)=0xf4u;
  R(3)=0xf0u;
  R(2)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(7));
  ST32(R(2),R(3));
  R(1)=LD32(R(15)+12);
  R(3)=0x0u;
  R(0)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=LD32(R(0));
  R(1)+=R(3);
  R(3)=0x8c2ef174u;
  ST32(R(3),R(1));
  R(1)=0x8c2ef178u;
  R(2)=LD32(R(15)+12);
  ST32(R(1),R(2));
  R(0)=0x8c2ef0d0u;
  R(2)=LD32(R(0));
  { uint32_t tg=R(2); c->pr=0x8c0d264au; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d2680(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffef0u;
  R(15)+=R(0);
  R(3)=0x8c2ef0c8u;
  R(14)=R(4);
  ST32(R(3),R(4));
  R(2)=0x8c0d3818u;
  { c->pr=0x8c0d269au; R(4)=R(14); f_8c0d3818(c); }
  R(12)=0x42u;
  R(12)&=R(14);
  R(0)=R(12);
  c->t=(int32_t)R(0)==66;
  R(13)=0x20u;
  { uint32_t k=!c->t; R(13)&=R(14); if(k) goto L8c0d26ea; }
  R(2)=0x8c0f35f8u;
  R(3)=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(0)=LD32(R(2)+12);
  ST32(R(3)+8,R(1));
  ST32(R(3)+12,R(0));
  R(1)=LD32(R(2)+16);
  ST32(R(3)+16,R(1));
  { c->pr=0x8c0d26c4u; R(4)=R(14); f_8c0d2a20(c); }
  R(2)=0x8c2ef188u;
  ST32(R(2),R(0));
  R(1)=R(2);
  R(3)=LD32(R(1));
  R(0)=R(15);
  c->t=(R(13)&R(13))==0;
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(3)=0x8c2ef13cu;
  { uint32_t k=!c->t; ST32(R(3),R(2)); if(k) goto L8c0d26ea; }
  R(1)=0x8c2ef13cu;
  R(2)=LD32(R(1));
  R(1)=0x0u;
  R(3)=0x8c2ef13cu;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(1),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  ST32(R(3),R(2));
L8c0d26ea:;
  R(3)=0x8du;
  R(5)=R(14);
  R(6)=0x1u;
  R(2)=0x34bu;
  R(5)&=R(6);
  R(1)=0x35fu;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  ST32(R(15)+28,R(1));
  ST32(R(15)+20,R(3));
  R(3)=0x3fu;
  ST32(R(15)+24,R(2));
  ST32(R(15)+44,R(3));
  if(c->t) goto L8c0d2716;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d2716;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d2716;
  R(2)=0x270u;
  { ST32(R(15)+40,R(2)); goto L8c0d271a; }
L8c0d2716:;
  R(1)=0x138u;
  ST32(R(15)+40,R(1));
L8c0d271a:;
  R(0)=R(12);
  R(4)=0x134u;
  R(7)=0x26cu;
  c->t=(int32_t)R(0)==66;
  { uint32_t k=!c->t; R(11)=0x16u; if(k) goto L8c0d2796; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2780;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d2780;
  R(2)=0x2cu;
  ST32(R(15)+32,R(2));
  { ST32(R(15)+36,R(7)); goto L8c0d2784; }
L8c0d2780:;
  ST32(R(15)+32,R(11));
  ST32(R(15)+36,R(4));
L8c0d2784:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d2790;
  R(0)=0x88u;
  R(2)=0x136u;
  { ST32(R(15)+R(0),R(2)); goto L8c0d27e4; }
L8c0d2790:;
  R(0)=0x88u;
  { ST32(R(15)+R(0),R(4)); goto L8c0d27e4; }
L8c0d2796:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d27aa;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d27aa;
  R(2)=0x2cu;
  ST32(R(15)+32,R(2));
  { ST32(R(15)+36,R(7)); goto L8c0d27ae; }
L8c0d27aa:;
  ST32(R(15)+32,R(11));
  ST32(R(15)+36,R(4));
L8c0d27ae:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d27e0;
  R(0)=0x88u;
  R(2)=0x136u;
  { ST32(R(15)+R(0),R(2)); goto L8c0d27e4; }
L8c0d27e0:;
  R(0)=0x88u;
  ST32(R(15)+R(0),R(4));
L8c0d27e4:;
  R(0)=0x8cu;
  R(3)=0x15u;
  ST32(R(15)+R(0),R(3));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0d280a; }
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d280a;
  R(2)=0x16au;
  R(3)=0x1fu;
  R(0)=0x44u;
  ST32(R(15)+52,R(2));
  R(2)=0x5u;
  ST32(R(15)+56,R(3));
  ST32(R(15)+48,R(2));
  { ST32(R(15)+R(0),R(6)); goto L8c0d281a; }
L8c0d280a:;
  R(2)=0x31fu;
  R(0)=0x44u;
  R(3)=0xfu;
  ST32(R(15)+52,R(2));
  R(2)=0x3u;
  ST32(R(15)+56,R(3));
  ST32(R(15)+48,R(2));
  ST32(R(15)+R(0),R(4));
L8c0d281a:;
  R(0)=0x48u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(4));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d2838;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2880;
  {  goto L8c0d2842; }
L8c0d2838:;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c0d2842;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2880;
L8c0d2842:;
  R(0)=0x58u;
  { ST32(R(15)+R(0),R(4)); goto L8c0d2886; }
L8c0d2880:;
  R(0)=0x58u;
  R(2)=0x2u;
  ST32(R(15)+R(0),R(2));
L8c0d2886:;
  R(3)=0x10u;
  R(0)=0x84u;
  c->t=(R(3)&R(14))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(11)); if(k) goto L8c0d2896; }
  R(0)=0x80u;
  { ST32(R(15)+R(0),R(4)); goto L8c0d289a; }
L8c0d2896:;
  R(0)=0x80u;
  ST32(R(15)+R(0),R(6));
L8c0d289a:;
  R(0)=0x40u;
  ST32(R(15)+60,R(4));
  ST32(R(15)+R(0),R(6));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(6));
  R(0)=0x60u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x70u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x7cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x74u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x78u;
  R(4)=0xf0u;
  R(3)=0xaeu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x10cu;
  ST32(R(15)+R(0),R(3));
  R(0)=R(12);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d2960;
  R(2)=0x8c0f360cu;
  R(3)=R(15);
  R(4)=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(0)=LD32(R(2)+12);
  ST32(R(3)+8,R(1));
  ST32(R(3)+12,R(0));
  R(1)=LD32(R(2)+16);
  ST32(R(3)+16,R(1));
  R(3)=0x8c2ef188u;
  R(0)=LD32(R(3));
  R(0)<<=2;
  R(1)=LD32(R(4)+R(0));
  R(0)=0x108u;
  R(4)=R(1);
  ST32(R(15)+R(0),R(1));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2908;
  R(1)=0x2cu;
  c->t=(R(14)&R(1))==0;
  if(c->t) goto L8c0d2908;
  R(4)+=0xffffffffu;
L8c0d2908:;
  R(0)=0x104u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(4)); if(k) goto L8c0d2922; }
  R(1)=0x8c2ef13cu;
  R(2)=LD32(R(1));
  R(3)=0x0u;
  R(0)=0x8c2ef17cu;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  { ST32(R(0),R(2)); goto L8c0d2982; }
L8c0d2922:;
  R(3)=0x8c2ef13cu;
  R(1)=LD32(R(3));
  R(2)=0x8c2ef17cu;
  { ST32(R(2),R(1)); goto L8c0d2982; }
L8c0d2960:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(6)=0x2eu; if(k) goto L8c0d2976; }
  R(3)=0x2cu;
  c->t=(R(14)&R(3))==0;
  if(c->t) goto L8c0d2976;
  R(0)=0x104u;
  R(2)=0x2du;
  { ST32(R(15)+R(0),R(2)); goto L8c0d297a; }
L8c0d2976:;
  R(0)=0x104u;
  ST32(R(15)+R(0),R(6));
L8c0d297a:;
  R(0)=0x108u;
  R(3)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(6));
  ST32(R(3),R(4));
L8c0d2982:;
  R(2)=LD32(R(15)+32);
  R(3)=0x0u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  R(3)=0x8c2ef17cu;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(1)=LD32(R(3));
  R(0)=0x8c2ef174u;
  R(2)+=R(1);
  ST32(R(0),R(2));
  R(2)=0x8c2ef178u;
  R(1)=LD32(R(15)+32);
  ST32(R(2),R(1));
  R(0)=0x8c2ef0d0u;
  R(1)=LD32(R(0));
  R(4)=R(15);
  { uint32_t tg=R(1); c->pr=0x8c0d29a6u; R(4)+=0x14u; sh4_call(c,tg); }
  R(1)=0x110u;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d2780(SH4Ctx *c) {
  ST32(R(15)+32,R(11));
  ST32(R(15)+36,R(4));
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d2790;
  R(0)=0x88u;
  R(2)=0x136u;
  { ST32(R(15)+R(0),R(2)); goto L8c0d27e4; }
L8c0d2790:;
  R(0)=0x88u;
  { ST32(R(15)+R(0),R(4)); goto L8c0d27e4; }
L8c0d27e4:;
  R(0)=0x8cu;
  R(3)=0x15u;
  ST32(R(15)+R(0),R(3));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0d280a; }
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d280a;
  R(2)=0x16au;
  R(3)=0x1fu;
  R(0)=0x44u;
  ST32(R(15)+52,R(2));
  R(2)=0x5u;
  ST32(R(15)+56,R(3));
  ST32(R(15)+48,R(2));
  { ST32(R(15)+R(0),R(6)); goto L8c0d281a; }
L8c0d280a:;
  R(2)=0x31fu;
  R(0)=0x44u;
  R(3)=0xfu;
  ST32(R(15)+52,R(2));
  R(2)=0x3u;
  ST32(R(15)+56,R(3));
  ST32(R(15)+48,R(2));
  ST32(R(15)+R(0),R(4));
L8c0d281a:;
  R(0)=0x48u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(4));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d2838;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2880;
  {  goto L8c0d2842; }
L8c0d2838:;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c0d2842;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2880;
L8c0d2842:;
  R(0)=0x58u;
  { ST32(R(15)+R(0),R(4)); goto L8c0d2886; }
L8c0d2880:;
  R(0)=0x58u;
  R(2)=0x2u;
  ST32(R(15)+R(0),R(2));
L8c0d2886:;
  R(3)=0x10u;
  R(0)=0x84u;
  c->t=(R(3)&R(14))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(11)); if(k) goto L8c0d2896; }
  R(0)=0x80u;
  { ST32(R(15)+R(0),R(4)); goto L8c0d289a; }
L8c0d2896:;
  R(0)=0x80u;
  ST32(R(15)+R(0),R(6));
L8c0d289a:;
  R(0)=0x40u;
  ST32(R(15)+60,R(4));
  ST32(R(15)+R(0),R(6));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(6));
  R(0)=0x60u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x70u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x7cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x74u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x78u;
  R(4)=0xf0u;
  R(3)=0xaeu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x10cu;
  ST32(R(15)+R(0),R(3));
  R(0)=R(12);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d2960;
  R(2)=0x8c0f360cu;
  R(3)=R(15);
  R(4)=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(0)=LD32(R(2)+12);
  ST32(R(3)+8,R(1));
  ST32(R(3)+12,R(0));
  R(1)=LD32(R(2)+16);
  ST32(R(3)+16,R(1));
  R(3)=0x8c2ef188u;
  R(0)=LD32(R(3));
  R(0)<<=2;
  R(1)=LD32(R(4)+R(0));
  R(0)=0x108u;
  R(4)=R(1);
  ST32(R(15)+R(0),R(1));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2908;
  R(1)=0x2cu;
  c->t=(R(14)&R(1))==0;
  if(c->t) goto L8c0d2908;
  R(4)+=0xffffffffu;
L8c0d2908:;
  R(0)=0x104u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(4)); if(k) goto L8c0d2922; }
  R(1)=0x8c2ef13cu;
  R(2)=LD32(R(1));
  R(3)=0x0u;
  R(0)=0x8c2ef17cu;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  { ST32(R(0),R(2)); goto L8c0d2982; }
L8c0d2922:;
  R(3)=0x8c2ef13cu;
  R(1)=LD32(R(3));
  R(2)=0x8c2ef17cu;
  { ST32(R(2),R(1)); goto L8c0d2982; }
L8c0d2960:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(6)=0x2eu; if(k) goto L8c0d2976; }
  R(3)=0x2cu;
  c->t=(R(14)&R(3))==0;
  if(c->t) goto L8c0d2976;
  R(0)=0x104u;
  R(2)=0x2du;
  { ST32(R(15)+R(0),R(2)); goto L8c0d297a; }
L8c0d2976:;
  R(0)=0x104u;
  ST32(R(15)+R(0),R(6));
L8c0d297a:;
  R(0)=0x108u;
  R(3)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(6));
  ST32(R(3),R(4));
L8c0d2982:;
  R(2)=LD32(R(15)+32);
  R(3)=0x0u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  R(3)=0x8c2ef17cu;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(1)=LD32(R(3));
  R(0)=0x8c2ef174u;
  R(2)+=R(1);
  ST32(R(0),R(2));
  R(2)=0x8c2ef178u;
  R(1)=LD32(R(15)+32);
  ST32(R(2),R(1));
  R(0)=0x8c2ef0d0u;
  R(1)=LD32(R(0));
  R(4)=R(15);
  { uint32_t tg=R(1); c->pr=0x8c0d29a6u; R(4)+=0x14u; sh4_call(c,tg); }
  R(1)=0x110u;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d27e0(SH4Ctx *c) {
  R(0)=0x88u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x8cu;
  R(3)=0x15u;
  ST32(R(15)+R(0),R(3));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0d280a; }
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d280a;
  R(2)=0x16au;
  R(3)=0x1fu;
  R(0)=0x44u;
  ST32(R(15)+52,R(2));
  R(2)=0x5u;
  ST32(R(15)+56,R(3));
  ST32(R(15)+48,R(2));
  { ST32(R(15)+R(0),R(6)); goto L8c0d281a; }
L8c0d280a:;
  R(2)=0x31fu;
  R(0)=0x44u;
  R(3)=0xfu;
  ST32(R(15)+52,R(2));
  R(2)=0x3u;
  ST32(R(15)+56,R(3));
  ST32(R(15)+48,R(2));
  ST32(R(15)+R(0),R(4));
L8c0d281a:;
  R(0)=0x48u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(4));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d2838;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2880;
  {  goto L8c0d2842; }
L8c0d2838:;
  R(3)=0x2cu;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c0d2842;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d2880;
L8c0d2842:;
  R(0)=0x58u;
  { ST32(R(15)+R(0),R(4)); goto L8c0d2886; }
L8c0d2880:;
  R(0)=0x58u;
  R(2)=0x2u;
  ST32(R(15)+R(0),R(2));
L8c0d2886:;
  R(3)=0x10u;
  R(0)=0x84u;
  c->t=(R(3)&R(14))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(11)); if(k) goto L8c0d2896; }
  R(0)=0x80u;
  { ST32(R(15)+R(0),R(4)); goto L8c0d289a; }
L8c0d2896:;
  R(0)=0x80u;
  ST32(R(15)+R(0),R(6));
L8c0d289a:;
  R(0)=0x40u;
  ST32(R(15)+60,R(4));
  ST32(R(15)+R(0),R(6));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(6));
  R(0)=0x60u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x70u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x7cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x74u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x78u;
  R(4)=0xf0u;
  R(3)=0xaeu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x10cu;
  ST32(R(15)+R(0),R(3));
  R(0)=R(12);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d2960;
  R(2)=0x8c0f360cu;
  R(3)=R(15);
  R(4)=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(0)=LD32(R(2)+12);
  ST32(R(3)+8,R(1));
  ST32(R(3)+12,R(0));
  R(1)=LD32(R(2)+16);
  ST32(R(3)+16,R(1));
  R(3)=0x8c2ef188u;
  R(0)=LD32(R(3));
  R(0)<<=2;
  R(1)=LD32(R(4)+R(0));
  R(0)=0x108u;
  R(4)=R(1);
  ST32(R(15)+R(0),R(1));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2908;
  R(1)=0x2cu;
  c->t=(R(14)&R(1))==0;
  if(c->t) goto L8c0d2908;
  R(4)+=0xffffffffu;
L8c0d2908:;
  R(0)=0x104u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(4)); if(k) goto L8c0d2922; }
  R(1)=0x8c2ef13cu;
  R(2)=LD32(R(1));
  R(3)=0x0u;
  R(0)=0x8c2ef17cu;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  { ST32(R(0),R(2)); goto L8c0d2982; }
L8c0d2922:;
  R(3)=0x8c2ef13cu;
  R(1)=LD32(R(3));
  R(2)=0x8c2ef17cu;
  { ST32(R(2),R(1)); goto L8c0d2982; }
L8c0d2960:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(6)=0x2eu; if(k) goto L8c0d2976; }
  R(3)=0x2cu;
  c->t=(R(14)&R(3))==0;
  if(c->t) goto L8c0d2976;
  R(0)=0x104u;
  R(2)=0x2du;
  { ST32(R(15)+R(0),R(2)); goto L8c0d297a; }
L8c0d2976:;
  R(0)=0x104u;
  ST32(R(15)+R(0),R(6));
L8c0d297a:;
  R(0)=0x108u;
  R(3)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(6));
  ST32(R(3),R(4));
L8c0d2982:;
  R(2)=LD32(R(15)+32);
  R(3)=0x0u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  R(3)=0x8c2ef17cu;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(1)=LD32(R(3));
  R(0)=0x8c2ef174u;
  R(2)+=R(1);
  ST32(R(0),R(2));
  R(2)=0x8c2ef178u;
  R(1)=LD32(R(15)+32);
  ST32(R(2),R(1));
  R(0)=0x8c2ef0d0u;
  R(1)=LD32(R(0));
  R(4)=R(15);
  { uint32_t tg=R(1); c->pr=0x8c0d29a6u; R(4)+=0x14u; sh4_call(c,tg); }
  R(1)=0x110u;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d2880(SH4Ctx *c) {
  R(0)=0x58u;
  R(2)=0x2u;
  ST32(R(15)+R(0),R(2));
  R(3)=0x10u;
  R(0)=0x84u;
  c->t=(R(3)&R(14))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(11)); if(k) goto L8c0d2896; }
  R(0)=0x80u;
  { ST32(R(15)+R(0),R(4)); goto L8c0d289a; }
L8c0d2896:;
  R(0)=0x80u;
  ST32(R(15)+R(0),R(6));
L8c0d289a:;
  R(0)=0x40u;
  ST32(R(15)+60,R(4));
  ST32(R(15)+R(0),R(6));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(6));
  R(0)=0x60u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x70u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x7cu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x74u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x78u;
  R(4)=0xf0u;
  R(3)=0xaeu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x10cu;
  ST32(R(15)+R(0),R(3));
  R(0)=R(12);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d2960;
  R(2)=0x8c0f360cu;
  R(3)=R(15);
  R(4)=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(0)=LD32(R(2)+12);
  ST32(R(3)+8,R(1));
  ST32(R(3)+12,R(0));
  R(1)=LD32(R(2)+16);
  ST32(R(3)+16,R(1));
  R(3)=0x8c2ef188u;
  R(0)=LD32(R(3));
  R(0)<<=2;
  R(1)=LD32(R(4)+R(0));
  R(0)=0x108u;
  R(4)=R(1);
  ST32(R(15)+R(0),R(1));
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d2908;
  R(1)=0x2cu;
  c->t=(R(14)&R(1))==0;
  if(c->t) goto L8c0d2908;
  R(4)+=0xffffffffu;
L8c0d2908:;
  R(0)=0x104u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(4)); if(k) goto L8c0d2922; }
  R(1)=0x8c2ef13cu;
  R(2)=LD32(R(1));
  R(3)=0x0u;
  R(0)=0x8c2ef17cu;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  { ST32(R(0),R(2)); goto L8c0d2982; }
L8c0d2922:;
  R(3)=0x8c2ef13cu;
  R(1)=LD32(R(3));
  R(2)=0x8c2ef17cu;
  { ST32(R(2),R(1)); goto L8c0d2982; }
L8c0d2960:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(6)=0x2eu; if(k) goto L8c0d2976; }
  R(3)=0x2cu;
  c->t=(R(14)&R(3))==0;
  if(c->t) goto L8c0d2976;
  R(0)=0x104u;
  R(2)=0x2du;
  { ST32(R(15)+R(0),R(2)); goto L8c0d297a; }
L8c0d2976:;
  R(0)=0x104u;
  ST32(R(15)+R(0),R(6));
L8c0d297a:;
  R(0)=0x108u;
  R(3)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(6));
  ST32(R(3),R(4));
L8c0d2982:;
  R(2)=LD32(R(15)+32);
  R(3)=0x0u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  R(3)=0x8c2ef17cu;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(1)=LD32(R(3));
  R(0)=0x8c2ef174u;
  R(2)+=R(1);
  ST32(R(0),R(2));
  R(2)=0x8c2ef178u;
  R(1)=LD32(R(15)+32);
  ST32(R(2),R(1));
  R(0)=0x8c2ef0d0u;
  R(1)=LD32(R(0));
  R(4)=R(15);
  { uint32_t tg=R(1); c->pr=0x8c0d29a6u; R(4)+=0x14u; sh4_call(c,tg); }
  R(1)=0x110u;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d29b8(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d29c4;
  R(2)=0x8c2ef18cu;
  ST32(R(2),R(4));
  { R(0)=0x0u; return; }
L8c0d29c4:;
  R(3)=0x8c2ef18cu;
  R(2)=0x8c0d2d40u;
  ST32(R(3),R(2));
  R(0)=0xeeeeu;
  {  return; }
}
void f_8c0d2a20(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c2ef18cu;
  ST32(R(15),R(4));
  R(3)=LD32(R(2));
  { uint32_t tg=R(3); c->pr=0x8c0d2a2eu; R(4)=R(15); sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0d2a3a;
  R(2)=0x4u;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(!c->t) goto L8c0d2a3e;
L8c0d2a3a:;
  R(1)=0x1u;
  ST32(R(15)+4,R(1));
L8c0d2a3e:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d2a80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff04u;
  R(15)+=R(0);
  R(3)=0x8c2ef0c8u;
  R(13)=R(4);
  ST32(R(3),R(4));
  R(2)=0x8c0d3818u;
  { c->pr=0x8c0d2a96u; R(4)=R(13); f_8c0d3818(c); }
  R(3)=0x359u;
  R(0)=0x74u;
  R(2)=0x20cu;
  R(14)=0x0u;
  ST32(R(15)+8,R(3));
  R(3)=0x7eu;
  R(4)=0x208u;
  R(5)=0x28u;
  ST32(R(15)+20,R(2));
  ST32(R(15),R(3));
  R(3)=0x3fu;
  R(2)=0x345u;
  ST32(R(15)+4,R(2));
  R(2)=0x3u;
  ST32(R(15)+12,R(5));
  ST32(R(15)+16,R(4));
  ST32(R(15)+24,R(3));
  R(3)=0x319u;
  ST32(R(15)+28,R(2));
  R(2)=0xfu;
  ST32(R(15)+32,R(3));
  R(3)=0x15u;
  ST32(R(15)+36,R(2));
  ST32(R(15)+R(0),R(4));
  R(0)=0x78u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x40u;
  ST32(R(15)+52,R(14));
  ST32(R(15)+56,R(14));
  ST32(R(15)+60,R(14));
  ST32(R(15)+R(0),R(14));
  R(0)=0x44u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x70u;
  R(3)=0x16u;
  ST32(R(15)+R(0),R(3));
  R(3)=0x10u;
  c->t=(R(13)&R(3))==0;
  { uint32_t k=c->t; R(4)=0x1u; if(k) goto L8c0d2aec; }
  R(0)=0x6cu;
  { ST32(R(15)+R(0),R(14)); goto L8c0d2af0; }
L8c0d2aec:;
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(4));
L8c0d2af0:;
  R(0)=0x48u;
  R(3)=0xa8u;
  ST32(R(15)+40,R(14));
  ST32(R(15)+44,R(14));
  ST32(R(15)+48,R(14));
  ST32(R(15)+R(0),R(4));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(14));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(14));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x60u;
  R(4)=0x1e0u;
  ST32(R(15)+R(0),R(14));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(4));
  R(0)=0xf8u;
  ST32(R(15)+R(0),R(3));
  R(0)=0xf0u;
  R(3)=0x8c2ef17cu;
  ST32(R(15)+R(0),R(5));
  R(0)=0xf4u;
  ST32(R(15)+R(0),R(5));
  ST32(R(3),R(4));
  R(0)=R(3);
  R(2)=LD32(R(0));
  R(1)=LD32(R(15)+12);
  R(1)+=R(2);
  R(2)=0x8c2ef174u;
  ST32(R(2),R(1));
  R(1)=0x8c2ef178u;
  R(0)=LD32(R(15)+12);
  ST32(R(1),R(0));
  R(0)=0x8c2ef0d0u;
  R(3)=LD32(R(0));
  { uint32_t tg=R(3); c->pr=0x8c0d2b48u; R(4)=R(15); sh4_call(c,tg); }
  R(1)=0xfcu;
  R(0)=R(14);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d2ba0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=R(4);
  R(3)=0x8c2ef284u;
  R(2)<<=2;
  ST32(R(15),R(4));
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(4)=R(2);
  ST32(R(15)+4,R(2));
  R(1)=LD32(R(2));
  { uint32_t tg=R(1); c->pr=0x8c0d2bbau; R(4)=LD32(R(4)+4); sh4_call(c,tg); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d2c00(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0xffffffu;
  R(5)=R(4);
  R(2)=0x8c0db7e0u;
  ST32(R(15),R(4));
  R(5)&=R(3);
  { c->pr=0x8c0d2c12u; R(4)=0x40u; f_8c0db7e0(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d2c40(SH4Ctx *c) {
  R(7)=R(5);
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c0d2c48;
  R(7)+=0x1fu;
L8c0d2c48:;
  R(3)=0xfffffffbu;
  R(2)=0x8c2ef0e8u;
  R(7)=sh4_shad(R(7),R(3));
  R(3)=0xffa0ffffu;
  R(6)=LD32(R(2));
  R(2)=0x1u;
  R(1)=0x1fu;
  R(6)&=R(3);
  R(2)&=R(4);
  R(3)=0x16u;
  R(7)&=R(1);
  R(2)=sh4_shad(R(2),R(3));
  R(7)<<=16;
  R(7)|=R(2);
  R(2)=0x8c2ef0e8u;
  R(6)|=R(7);
  ST32(R(2),R(6));
  R(3)=0x8c2ef180u;
  ST32(R(3),R(4));
  R(1)=0x8c2ef184u;
  ST32(R(1),R(5));
  { R(0)=0x0u; return; }
}
void f_8c0d2ca0(SH4Ctx *c) {
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
  R(11)=0x10cu;
  R(3)=0x1u;
  R(12)=0x2000u;
  R(13)=0x3d09u;
  R(9)=0x8c0db7eau;
  ST32(R(15),R(3));
  R(3)=LD32(R(14));
  R(2)=R(10);
  R(2)-=R(3);
  c->t=R(2)>=R(13);
  { uint32_t k=c->t; R(8)=0x0u; if(k) goto L8c0d2ce6; }
L8c0d2cce:;
  { uint32_t tg=R(9); c->pr=0x8c0d2cd2u; R(4)=R(11); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(12))==0;
  if(!c->t) goto L8c0d2cdc;
  { ST32(R(15),R(8)); goto L8c0d2ce6; }
L8c0d2cdc:;
  R(3)=LD32(R(14));
  R(2)=R(10);
  R(2)-=R(3);
  c->t=R(2)>=R(13);
  if(!c->t) goto L8c0d2cce;
L8c0d2ce6:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d2d0a;
  R(3)=LD32(R(14));
  R(2)=R(10);
  R(2)-=R(3);
  c->t=R(2)>=R(13);
  if(c->t) goto L8c0d2d0a;
L8c0d2cf6:;
  { uint32_t tg=R(9); c->pr=0x8c0d2cfau; R(4)=R(11); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(12))==0;
  if(!c->t) goto L8c0d2d0a;
  R(3)=LD32(R(14));
  R(2)=R(10);
  R(2)-=R(3);
  c->t=R(2)>=R(13);
  if(!c->t) goto L8c0d2cf6;
L8c0d2d0a:;
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
void f_8c0d2d40(SH4Ctx *c) {
  R(3)=0x1u;
  { ST32(R(4)+4,R(3)); return; }
}
void f_8c0d2d46(SH4Ctx *c) {
  R(0)=0xb8u;
  R(2)=0x0u;
  R(3)=0x8c0d35c0u;
  R(4)=LD32(R(4)+8);
  ST32(R(4)+8,R(3));
  ST32(R(4)+R(0),R(2));
  R(0)+=0xcu;
  R(2)=0x8c0d1a20u;
  R(3)=0x8c0d2d40u;
  { ST32(R(4)+R(0),R(3)); { f_8c0d1a20(c); return; } }
}
void f_8c0d2d5c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2ef0d4u;
  R(14)=0x8c0db7e0u;
  R(5)=LD32(R(3));
  { c->pr=0x8c0d2d6au; R(4)=0x68u; f_8c0db7e0(c); }
  R(2)=0x8c2ef0d8u;
  R(5)=LD32(R(2));
  { uint32_t tg=R(14); c->pr=0x8c0d2d72u; R(4)=0x6cu; sh4_call(c,tg); }
  R(3)=0x8c2ef0e0u;
  R(5)=LD32(R(3));
  { uint32_t tg=R(14); c->pr=0x8c0d2d7au; R(4)=0x5cu; sh4_call(c,tg); }
  R(2)=0x8c2ef0e4u;
  R(5)=LD32(R(2));
  { uint32_t tg=R(14); c->pr=0x8c0d2d82u; R(4)=0x4cu; sh4_call(c,tg); }
  R(4)=0x118u;
  R(3)=0x8c2ef11cu;
  { uint32_t tg=R(14); c->pr=0x8c0d2d8au; R(5)=LD32(R(3)); sh4_call(c,tg); }
  R(4)=0xf4u;
  R(2)=0x8c2ef120u;
  { uint32_t tg=R(14); c->pr=0x8c0d2d92u; R(5)=LD32(R(2)); sh4_call(c,tg); }
  R(3)=0x8c2ef0ecu;
  R(5)=LD32(R(3));
  { uint32_t tg=R(14); c->pr=0x8c0d2d9au; R(4)=0x48u; sh4_call(c,tg); }
  R(2)=0x8c2ef0e8u;
  R(3)=0xfffffffeu;
  R(5)=LD32(R(2));
  R(5)&=R(3);
  { uint32_t tg=R(14); c->pr=0x8c0d2da6u; R(4)=0x44u; sh4_call(c,tg); }
  R(3)=0x8c2ef124u;
  R(0)=LD32(R(3));
  R(4)=0xe8u;
  R(0)|=0x8u;
  { uint32_t tg=R(14); c->pr=0x8c0d2db2u; R(5)=R(0); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d2e00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x58u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  R(4)+=0x8u;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x54u;
  R(2)=LD32(R(4)+R(0));
  R(5)=0x7ffu;
  R(2)&=R(5);
  R(2)<<=16;
  R(3)&=R(5);
  R(3)|=R(2);
  R(2)=0x8c2ef0d4u;
  ST32(R(2),R(3));
  R(0)=0x60u;
  R(1)=LD32(R(4)+R(0));
  R(0)=0x5cu;
  R(3)=LD32(R(4)+R(0));
  R(1)&=R(5);
  R(3)&=R(5);
  R(3)<<=16;
  R(1)|=R(3);
  R(3)=0x8c2ef0d8u;
  ST32(R(3),R(1));
  R(0)=0x48u;
  R(2)=LD32(R(4)+R(0));
  R(0)=0x4cu;
  R(1)=LD32(R(4)+R(0));
  R(6)=0x1fu;
  R(5)=0xfu;
  R(1)&=R(6);
  R(1)<<=2;
  R(1)<<=2;
  R(2)&=R(5);
  R(0)=0x50u;
  R(2)|=R(1);
  R(1)=LD32(R(4)+R(0));
  R(1)&=R(5);
  R(1)<<=8;
  c->t=R(1)>>31;R(1)<<=1;
  R(2)|=R(1);
  R(1)=0x8c2ef0dcu;
  ST32(R(1),R(2));
  R(2)=0x8c2ef148u;
  R(3)=LD32(R(4));
  ST32(R(2),R(3));
  R(3)=0x8c2ef14cu;
  R(1)=LD32(R(4)+4);
  ST32(R(3),R(1));
  R(14)=LD32(R(4)+8);
  R(5)=0x3ffu;
  R(7)=LD32(R(4));
  R(14)&=R(5);
  R(0)=0x8c2ef144u;
  R(14)<<=16;
  R(13)=LD32(R(4)+4);
  R(14)<<=2;
  R(7)&=R(5);
  R(1)=LD32(R(0));
  c->t=(int32_t)R(1)>0;
  { uint32_t k=!c->t; R(14)<<=2; if(k) goto L8c0d2ec0; }
  R(1)=0x8c2ef144u;
  R(2)=LD32(R(1));
  R(13)-=R(2);
  R(3)=0x8c2ef0e0u;
  R(13)&=R(5);
  R(13)<<=8;
  R(13)<<=2;
  R(7)|=R(13);
  R(7)|=R(14);
  { ST32(R(3),R(7)); goto L8c0d2ece; }
L8c0d2ec0:;
  R(13)&=R(5);
  R(1)=0x8c2ef0e0u;
  R(13)<<=8;
  R(13)<<=2;
  R(7)|=R(13);
  R(7)|=R(14);
  ST32(R(1),R(7));
L8c0d2ece:;
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  R(2)=R(2)&0xFF;
  R(1)=0x8c2ef11cu;
  R(2)<<=8;
  R(3)=R(3)&0xFF;
  R(3)|=R(2);
  ST32(R(1),R(3));
  R(2)=LD32(R(4)+12);
  R(5)=0x1u;
  R(0)=LD32(R(4)+28);
  R(3)=LD32(R(4)+16);
  R(2)&=R(5);
  R(0)&=R(5);
  R(3)=R(3)&0xFFFF;
  R(2)<<=16;
  R(0)<<=16;
  R(3)|=R(2);
  R(2)=0x8c2ef120u;
  R(0)<<=2;
  R(3)|=R(0);
  ST32(R(2),R(3));
  R(0)=0x44u;
  R(3)=0x1ffu;
  R(0)=LD32(R(4)+R(0));
  R(2)+=0xffffffc4u;
  R(0)&=R(3);
  ST32(R(2),R(0));
  R(0)=LD32(R(4)+44);
  R(7)=0x7u;
  R(1)=LD32(R(4)+48);
  R(0)&=R(5);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)&=R(7);
  R(1)|=R(0);
  R(0)=LD32(R(4)+52);
  R(0)=R(0)&0xFF;
  R(0)<<=8;
  R(1)|=R(0);
  R(0)=LD32(R(4)+56);
  R(0)=R(0)&0xFF;
  R(0)<<=16;
  R(1)|=R(0);
  R(0)=0x8c2ef0ecu;
  ST32(R(0),R(1));
  R(1)=LD32(R(4)+40);
  R(2)=0x16u;
  R(0)=LD32(R(4)+60);
  R(3)=LD32(R(4)+32);
  R(1)&=R(5);
  R(0)&=0x3u;
  R(3)&=R(5);
  c->t=R(1)>>31;R(1)<<=1;
  R(0)<<=2;
  R(3)|=R(1);
  R(3)|=R(0);
  R(0)=0x40u;
  R(0)=LD32(R(4)+R(0));
  R(7)&=R(0);
  R(0)=0x70u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(7)<<=2;
  R(7)<<=2;
  R(1)=R(1)&0xFF;
  R(1)<<=8;
  R(3)|=R(7);
  R(0)=0x68u;
  R(3)|=R(1);
  R(1)=LD32(R(4)+R(0));
  R(0)=0x64u;
  R(6)&=R(1);
  R(1)=LD32(R(4)+R(0));
  R(6)<<=16;
  R(1)&=R(5);
  R(1)=sh4_shad(R(1),R(2));
  R(3)|=R(6);
  R(3)|=R(1);
  R(0)=0x6cu;
  R(1)=LD32(R(4)+R(0));
  R(2)=0x17u;
  R(1)&=R(5);
  R(1)=sh4_shad(R(1),R(2));
  R(3)|=R(1);
  R(1)=0x8c2ef0e8u;
  ST32(R(1),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d2fa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff34u;
  R(15)+=R(0);
  R(3)=0x8c0f3620u;
  R(2)=R(15);
  R(2)+=0x40u;
  R(6)=R(15);
  R(1)=LD32(R(3));
  R(9)=R(15);
  R(0)=LD32(R(3)+4);
  R(9)+=0x2cu;
  ST32(R(2),R(1));
  R(6)+=0x40u;
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  R(0)=LD32(R(3)+12);
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  R(1)=LD32(R(3)+16);
  R(0)=LD32(R(3)+20);
  ST32(R(2)+16,R(1));
  R(1)=R(15);
  ST32(R(2)+20,R(0));
  R(1)+=0x2cu;
  R(2)=0x8c0f3638u;
  R(0)=LD32(R(2));
  R(3)=LD32(R(2)+4);
  ST32(R(1),R(0));
  ST32(R(1)+4,R(3));
  R(0)=LD32(R(2)+8);
  R(3)=LD32(R(2)+12);
  ST32(R(1)+8,R(0));
  ST32(R(1)+12,R(3));
  R(0)=LD32(R(2)+16);
  ST32(R(1)+16,R(0));
  R(1)=0x8c0f364cu;
  R(0)=R(15);
  R(0)+=0x18u;
  R(3)=LD32(R(1));
  R(2)=LD32(R(1)+4);
  ST32(R(0),R(3));
  ST32(R(0)+4,R(2));
  R(3)=LD32(R(1)+8);
  R(2)=LD32(R(1)+12);
  ST32(R(0)+8,R(3));
  ST32(R(0)+12,R(2));
  R(3)=LD32(R(1)+16);
  ST32(R(0)+16,R(3));
  R(0)=R(4);
  R(0)<<=2;
  R(3)=0x8c2ef0c8u;
  R(12)=LD32(R(6)+R(0));
  R(6)=0x1u;
  R(0)=LD32(R(3));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c0d3032; }
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0d3032;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d3032;
  { ST32(R(15)+8,R(6)); goto L8c0d3034; }
L8c0d3032:;
  ST32(R(15)+8,R(13));
L8c0d3034:;
  R(3)=0x8c2ef138u;
  R(7)=LD32(R(3));
  R(1)=0x8c2ef13cu;
  R(2)=LD32(R(1));
  c->t=(R(5)&R(5))==0;
  ST32(R(15)+4,R(2));
  if(c->t) goto L8c0d3080;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x20)==0;
  if(!c->t) goto L8c0d3080;
  R(1)=0x2u;
  { ST32(R(15)+16,R(1)); goto L8c0d3082; }
L8c0d3080:;
  ST32(R(15)+16,R(6));
L8c0d3082:;
  R(14)=R(15);
  R(0)=0x40u;
  R(14)+=0x58u;
  R(3)=0x8c2ef0c8u;
  ST32(R(14)+32,R(6));
  ST32(R(14)+56,R(13));
  ST32(R(14)+52,R(13));
  ST32(R(14)+R(0),R(13));
  R(0)=0x70u;
  ST32(R(14)+R(0),R(13));
  R(0)=0x68u;
  ST32(R(14)+R(0),R(13));
  R(0)=0x64u;
  ST32(R(14)+R(0),R(13));
  R(0)=LD32(R(3));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d30ae;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d30ba;
  {  goto L8c0d30b2; }
L8c0d30ae:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d30ba;
L8c0d30b2:;
  R(0)=0x6cu;
  ST32(R(14)+R(0),R(6));
  { R(8)=R(6); goto L8c0d30c6; }
L8c0d30ba:;
  R(0)=0x6cu;
  ST32(R(14)+R(0),R(13));
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d30ca;
  R(8)=0x2u;
L8c0d30c6:;
  { ST32(R(15)+20,R(13)); goto L8c0d30ce; }
L8c0d30ca:;
  ST32(R(15)+20,R(6));
  R(8)=R(6);
L8c0d30ce:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c0d30e0;
  c->t=(int32_t)R(0)==24;
  if(c->t) goto L8c0d310c;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0d3140;
  {  goto L8c0d314a; }
L8c0d30e0:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0d30ee;
  R(2)=0x3u;
  ST32(R(14)+48,R(2));
  { ST32(R(14)+60,R(13)); goto L8c0d3148; }
L8c0d30ee:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d30f8;
  ST32(R(14)+48,R(6));
  { ST32(R(14)+60,R(6)); goto L8c0d3148; }
L8c0d30f8:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d3104;
  ST32(R(14)+48,R(13));
  { ST32(R(14)+60,R(13)); goto L8c0d3108; }
L8c0d3104:;
  ST32(R(14)+48,R(6));
  ST32(R(14)+60,R(6));
L8c0d3108:;
  { ST32(R(14)+44,R(13)); goto L8c0d314a; }
L8c0d310c:;
  R(3)=0x4u;
  R(2)=0x2u;
  ST32(R(14)+48,R(3));
  { ST32(R(14)+60,R(2)); goto L8c0d3148; }
L8c0d3140:;
  R(3)=0x3u;
  R(2)=0x6u;
  ST32(R(14)+48,R(2));
  ST32(R(14)+60,R(3));
L8c0d3148:;
  ST32(R(14)+44,R(13));
L8c0d314a:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=0x20u; if(k) goto L8c0d3166; }
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d3166;
  R(3)=0x8c2ef0c8u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c0d3166;
  { ST32(R(14)+40,R(6)); goto L8c0d3168; }
L8c0d3166:;
  ST32(R(14)+40,R(13));
L8c0d3168:;
  c->macl=R(7)*R(12);
  R(2)=LD32(R(15)+8);
  ST32(R(14)+36,R(2));
  R(3)=c->macl;
  ST32(R(14)+28,R(13));
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c0d317a; }
  R(3)+=0x3fu;
L8c0d317a:;
  R(2)=0xfffffffau;
  R(3)=sh4_shad(R(3),R(2));
  R(2)=0x8c067940u;
  R(0)=0x44u;
  ST32(R(14)+R(0),R(3));
  R(1)=LD32(R(15));
  { c->pr=0x8c0d318au; R(0)=R(4); f_8c067940(c); }
  R(2)=0x0u;
  R(0)+=0xffffffffu;
  ST32(R(14),R(0));
  R(11)=0x8u;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  {uint32_t a=R(3),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(3)=r;}
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  R(3)+=0xffffffffu;
  ST32(R(15)+12,R(3));
  R(0)=LD32(R(15)+8);
  R(10)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(10)+=0xffffffffu; if(k) goto L8c0d31f4; }
  R(2)=0x8c2ef0c8u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c0d31d8;
  R(3)=LD32(R(15)+12);
  ST32(R(14)+4,R(3));
  R(3)=0x8c067940u;
  R(1)=LD32(R(15));
  { c->pr=0x8c0d31bcu; R(0)=R(4); f_8c067940(c); }
  R(3)=0x8c2ef15cu;
  R(0)+=0x1u;
  R(1)=0x0u;
  ST32(R(14)+8,R(0));
  ST32(R(3),R(1));
  R(2)=0x8c067940u;
  R(1)=R(12);
  R(3)+=0x4u;
  { c->pr=0x8c0d31d0u; R(0)=R(11); f_8c067940(c); }
  c->macl=R(0)*R(7);
  R(0)=c->macl;
  { ST32(R(3),R(0)); goto L8c0d329a; }
L8c0d31d8:;
  R(3)=0x8c2ef15cu;
  R(1)=0x0u;
  ST32(R(14)+4,R(10));
  ST32(R(3),R(1));
  R(2)=0x8c067940u;
  R(1)=R(12);
  R(3)+=0x4u;
  { c->pr=0x8c0d31eau; R(0)=R(11); f_8c067940(c); }
  c->macl=R(0)*R(7);
  R(0)=c->macl;
  ST32(R(3),R(0));
  { ST32(R(14)+8,R(6)); goto L8c0d329a; }
L8c0d31f4:;
  R(2)=0x8c2ef0c8u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(6))==0;
  if(c->t) goto L8c0d3218;
  R(3)=0x8c2ef15cu;
  R(1)=0x0u;
  ST32(R(14)+4,R(10));
  ST32(R(3),R(1));
  R(2)=0x8c067940u;
  R(1)=R(12);
  R(3)+=0x4u;
  { c->pr=0x8c0d320eu; R(0)=R(11); f_8c067940(c); }
  c->macl=R(0)*R(7);
  R(0)=c->macl;
  ST32(R(3),R(0));
  { ST32(R(14)+8,R(6)); goto L8c0d329a; }
L8c0d3218:;
  R(0)=0x8c2ef0c8u;
  R(1)=LD32(R(0));
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c0d3280;
  R(3)=LD32(R(15)+12);
  R(1)=0x8c2ef15cu;
  ST32(R(14)+4,R(3));
  R(3)=0x0u;
  ST32(R(1),R(3));
  R(3)=0x8c067940u;
  R(1)=R(12);
  R(2)=0x8c2ef160u;
  { c->pr=0x8c0d3234u; R(0)=R(11); f_8c067940(c); }
  c->macl=R(0)*R(7);
  R(0)=c->macl;
  ST32(R(2),R(0));
  R(3)=0x8c067940u;
  R(1)=LD32(R(15));
  { c->pr=0x8c0d3242u; R(0)=R(4); f_8c067940(c); }
  R(0)+=0x1u;
  { ST32(R(14)+8,R(0)); goto L8c0d329a; }
L8c0d3280:;
  R(1)=0x8c2ef15cu;
  R(3)=0x0u;
  ST32(R(14)+4,R(10));
  ST32(R(1),R(3));
  R(3)=0x8c067940u;
  R(1)=R(12);
  R(2)=0x8c2ef160u;
  { c->pr=0x8c0d3292u; R(0)=R(11); f_8c067940(c); }
  c->macl=R(0)*R(7);
  R(0)=c->macl;
  ST32(R(2),R(0));
  ST32(R(14)+8,R(6));
L8c0d329a:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0d32a2;
  {  goto L8c0d33a0; }
L8c0d32a2:;
  R(1)=0x8c2ef0c8u;
  ST32(R(14)+12,R(6));
  R(3)=LD32(R(14)+4);
  R(3)+=0xfffffffeu;
  ST32(R(14)+4,R(3));
  R(2)=LD32(R(1));
  c->t=(R(2)&R(6))==0;
  { uint32_t k=c->t; R(5)=0x2u; if(k) goto L8c0d32ba; }
  R(0)=0x401u;
  { ST32(R(14)+16,R(0)); goto L8c0d34a6; }
L8c0d32ba:;
  R(2)=0x8c2ef0c8u;
  R(3)=0xffffffecu;
  R(0)=LD32(R(2));
  R(0)&=R(3);
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c0d3320;
  c->t=(int32_t)R(0)==104;
  if(c->t) goto L8c0d3320;
  c->t=(int32_t)R(0)==96;
  if(c->t) goto L8c0d3336;
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0d3336;
  c->t=(int32_t)R(0)==68;
  if(c->t) goto L8c0d3336;
  c->t=(int32_t)R(0)==36;
  if(c->t) goto L8c0d3354;
  c->t=(int32_t)R(0)==40;
  if(c->t) goto L8c0d3354;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0d3366;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0d3366;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d3366;
  {  goto L8c0d34a6; }
L8c0d3320:;
  R(1)=0x8c2ef188u;
  R(0)=LD32(R(1));
  R(0)<<=2;
  R(2)=LD32(R(9)+R(0));
  ST32(R(14)+16,R(2));
  R(2)=0x8c067940u;
  R(1)=LD32(R(15));
  { c->pr=0x8c0d3332u; R(0)=R(4); f_8c067940(c); }
  {  goto L8c0d3360; }
L8c0d3336:;
  R(1)=0x8c2ef15cu;
  R(2)=0x0u;
  ST32(R(1),R(2));
  R(0)=0x8c2ef160u;
  R(3)=R(2);
  ST32(R(0),R(2));
  R(3)=0x8c2ef188u;
  R(1)=R(15);
  R(1)+=0x18u;
  R(2)=LD32(R(3));
  R(2)<<=2;
  R(2)+=R(1);
  R(0)=LD32(R(2));
  { ST32(R(14)+16,R(0)); goto L8c0d3376; }
L8c0d3354:;
  R(1)=0x401u;
  R(2)=0x8c067940u;
  ST32(R(14)+16,R(1));
  R(1)=LD32(R(15));
  { c->pr=0x8c0d3360u; R(0)=R(4); f_8c067940(c); }
L8c0d3360:;
  R(0)+=0x1u;
  { ST32(R(14)+8,R(0)); goto L8c0d34a6; }
L8c0d3366:;
  R(1)=0x8c2ef15cu;
  R(2)=0x0u;
  ST32(R(1),R(2));
  R(0)=0x8c2ef160u;
  R(3)=R(2);
  ST32(R(0),R(2));
  R(2)=0x800u;
  ST32(R(14)+16,R(2));
L8c0d3376:;
  { ST32(R(14)+8,R(6)); goto L8c0d34a6; }
L8c0d33a0:;
  R(3)=0x8c2ef0c8u;
  ST32(R(14)+12,R(13));
  R(2)=LD32(R(14)+4);
  R(2)+=0xffffffffu;
  ST32(R(14)+4,R(2));
  R(0)=LD32(R(3));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(5)=0x42u; if(k) goto L8c0d33bc; }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d3440;
  {  goto L8c0d33d2; }
L8c0d33bc:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  R(0)&=0x2cu;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0d33ce;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d3440;
  {  goto L8c0d33d2; }
L8c0d33ce:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d3440;
L8c0d33d2:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=R(5);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d33ec;
  R(2)=0x8c2ef188u;
  R(0)=R(15);
  R(0)+=0x18u;
  R(1)=LD32(R(2));
  R(1)<<=2;
  R(3)=LD32(R(1)+R(0));
  { ST32(R(14)+16,R(3)); goto L8c0d33f0; }
L8c0d33ec:;
  R(2)=0x800u;
  ST32(R(14)+16,R(2));
L8c0d33f0:;
  R(3)=0x8c2ef15cu;
  R(2)=0x0u;
  ST32(R(3),R(2));
  R(1)=0x8c2ef160u;
  ST32(R(1),R(2));
  ST32(R(14)+8,R(6));
  R(0)=LD32(R(14)+4);
  R(0)+=0xffffffffu;
  { ST32(R(14)+4,R(0)); goto L8c0d34a4; }
L8c0d3440:;
  R(2)=0x8c2ef0c8u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(6))==0;
  if(c->t) goto L8c0d344e;
  R(0)=0x400u;
  { ST32(R(14)+16,R(0)); goto L8c0d34a4; }
L8c0d344e:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=R(5);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d3464;
  R(1)=0x8c2ef188u;
  R(0)=LD32(R(1));
  R(0)<<=2;
  R(2)=LD32(R(9)+R(0));
  { ST32(R(14)+16,R(2)); goto L8c0d34a4; }
L8c0d3464:;
  R(0)=0x8c2ef0c8u;
  R(1)=LD32(R(0));
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c0d34a0;
  R(2)=0x401u;
  {  goto L8c0d34a2; }
L8c0d34a0:;
  R(2)=0x400u;
L8c0d34a2:;
  ST32(R(14)+16,R(2));
L8c0d34a4:;
  R(5)=R(6);
L8c0d34a6:;
  R(3)=LD32(R(14)+4);
  R(2)=0x40u;
  R(1)=R(7);
  R(3)+=0xffffffffu;
  ST32(R(14)+4,R(3));
  R(3)=0x80u;
  ST32(R(14)+20,R(2));
  R(2)=0x8c067940u;
  ST32(R(14)+24,R(3));
  { c->pr=0x8c0d34bcu; R(0)=R(4); f_8c067940(c); }
  c->macl=R(0)*R(5);
  R(3)=0x8c2ef164u;
  R(0)=c->macl;
  ST32(R(3),R(0));
  R(1)=LD32(R(15)+4);
  R(2)=LD32(R(15)+16);
  c->macl=R(1)*R(8);
  R(3)=0x8c067940u;
  R(1)=c->macl;
  c->macl=R(1)*R(2);
  R(1)=c->macl;
  { c->pr=0x8c0d34d6u; R(0)=R(4); f_8c067940(c); }
  R(1)=LD32(R(15)+20);
  R(3)=0x8c2ef168u;
  R(0)+=R(1);
  ST32(R(3),R(0));
  R(0)=R(3);
  R(4)=0xfu;
  R(2)=LD32(R(0));
  c->t=R(2)>R(4);
  { uint32_t k=!c->t; R(2)=0x9u; if(k) goto L8c0d34ee; }
  R(3)=0x8c2ef168u;
  ST32(R(3),R(4));
L8c0d34ee:;
  R(0)=0x4cu;
  ST32(R(14)+R(0),R(2));
  R(0)=0x48u;
  R(3)=0x6u;
  ST32(R(14)+R(0),R(3));
  R(0)=R(12);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c0d3504;
  R(0)=0x50u;
  { ST32(R(14)+R(0),R(11)); goto L8c0d350a; }
L8c0d3504:;
  R(0)=0x50u;
  R(2)=0xbu;
  ST32(R(14)+R(0),R(2));
L8c0d350a:;
  R(0)=0x58u;
  R(3)=0x8c2ef0c8u;
  ST32(R(14)+R(0),R(13));
  R(0)=0x54u;
  R(7)+=0xffffffffu;
  ST32(R(14)+R(0),R(7));
  R(0)=0x60u;
  ST32(R(14)+R(0),R(13));
  R(0)=LD32(R(3));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d352a;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d356c;
  {  goto L8c0d3564; }
L8c0d352a:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  R(0)&=0x2cu;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0d3560;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0d356c;
  {  goto L8c0d3564; }
L8c0d3560:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d356c;
L8c0d3564:;
  R(3)=LD32(R(15)+12);
  R(0)=0x5cu;
  { ST32(R(14)+R(0),R(3)); goto L8c0d3570; }
L8c0d356c:;
  R(0)=0x5cu;
  ST32(R(14)+R(0),R(10));
L8c0d3570:;
  R(3)=0x8c09c3dcu;
  R(0)=0x74u;
  R(2)=R(14);
  R(15)-=R(0);
  { c->pr=0x8c0d357cu; R(1)=R(15); f_8c09c3dc(c); }
  { c->pr=0x8c0d3580u;  f_8c0d2e00(c); }
  R(1)=0x8c2ef16cu;
  ST32(R(1),R(13));
  R(3)=0x8c2ef170u;
  ST32(R(3),R(13));
  R(1)=0x140u;
  R(0)=R(13);
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
void f_8c0d35c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2ef140u;
  ST32(R(3),R(5));
  R(2)=0x8c2ef144u;
  ST32(R(2),R(5));
  R(0)=0xf8u;
  R(3)+=0x10u;
  R(1)=LD32(R(4)+R(0));
  ST32(R(3),R(1));
  R(0)+=0xfffffff8u;
  R(1)=0x8c2ef154u;
  R(2)=LD32(R(4)+R(0));
  ST32(R(1),R(2));
  R(0)+=0x4u;
  R(2)=0x8c2ef158u;
  R(3)=LD32(R(4)+R(0));
  ST32(R(2),R(3));
  R(0)=0x54u;
  R(2)=LD32(R(4)+44);
  R(1)=LD32(R(4)+R(0));
  R(0)=0x50u;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x5cu;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)|=R(3);
  R(3)=LD32(R(4)+R(0));
  R(0)=0x68u;
  R(3)<<=2;
  R(1)|=R(3);
  R(3)=LD32(R(4)+R(0));
  R(0)=0x60u;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(1)|=R(3);
  R(3)=LD32(R(4)+48);
  R(3)<<=2;
  R(3)<<=2;
  R(1)|=R(3);
  R(3)=LD32(R(4)+R(0));
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(1)|=R(3);
  R(3)=LD32(R(4)+40);
  R(3)<<=2;
  R(3)<<=2;
  R(3)<<=2;
  R(1)|=R(3);
  R(3)=0x7u;
  R(2)=sh4_shad(R(2),R(3));
  R(0)=0x48u;
  R(1)|=R(2);
  R(2)=LD32(R(4)+R(0));
  R(0)=0x4cu;
  R(2)<<=8;
  R(1)|=R(2);
  R(2)=LD32(R(4)+R(0));
  R(2)<<=8;
  c->t=R(2)>>31;R(2)<<=1;
  R(1)|=R(2);
  R(2)=0x8c2ef100u;
  ST32(R(2),R(1));
  R(1)=LD32(R(4));
  R(5)=0x7ffu;
  R(3)=LD32(R(4)+4);
  R(1)&=R(5);
  R(1)<<=16;
  R(3)&=R(5);
  R(3)|=R(1);
  R(1)=0x8c2ef10cu;
  ST32(R(1),R(3));
  R(2)=LD32(R(4)+4);
  R(3)=0x8c2ef104u;
  R(2)&=R(5);
  R(2)<<=16;
  ST32(R(3),R(2));
  R(2)=LD32(R(4)+20);
  R(0)=LD32(R(4)+8);
  R(2)&=R(5);
  R(2)<<=16;
  R(0)&=R(5);
  R(0)|=R(2);
  R(2)=0x8c2ef110u;
  ST32(R(2),R(0));
  R(0)=LD32(R(4)+12);
  R(1)=LD32(R(4)+16);
  R(0)&=R(5);
  R(0)<<=16;
  R(1)&=R(5);
  R(1)|=R(0);
  R(0)=0x8c2ef114u;
  ST32(R(0),R(1));
  R(0)=0x74u;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x78u;
  R(1)=LD32(R(4)+R(0));
  R(3)&=R(5);
  R(1)&=R(5);
  R(1)<<=16;
  R(3)|=R(1);
  R(1)=0x8c2ef108u;
  ST32(R(1),R(3));
  R(2)=LD32(R(4)+28);
  R(6)=0xfu;
  R(3)=LD32(R(4)+24);
  R(5)=0x7fu;
  R(2)&=R(6);
  R(1)=LD32(R(4)+32);
  R(2)<<=8;
  R(3)&=R(5);
  R(3)|=R(2);
  R(2)=0x3ffu;
  R(0)=0x16u;
  R(1)&=R(2);
  R(1)<<=8;
  R(1)<<=2;
  R(1)<<=2;
  R(3)|=R(1);
  R(1)=LD32(R(4)+36);
  R(1)&=R(5);
  R(1)=sh4_shad(R(1),R(0));
  R(3)|=R(1);
  R(1)=0x8c2ef118u;
  ST32(R(1),R(3));
  R(0)=LD32(R(4)+52);
  R(0)&=0x1u;
  R(3)=R(0);
  R(0)=LD32(R(4)+56);
  R(0)&=0x1u;
  c->t=R(0)>>31;R(0)<<=1;
  R(3)|=R(0);
  R(0)=LD32(R(4)+60);
  R(0)&=0x1u;
  R(0)<<=2;
  R(3)|=R(0);
  R(0)=0x40u;
  R(0)=LD32(R(4)+R(0));
  R(0)&=0x1u;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(3)|=R(0);
  R(0)=0x44u;
  R(2)=LD32(R(4)+R(0));
  R(0)=0x6cu;
  R(0)=LD32(R(4)+R(0));
  R(6)&=R(2);
  R(6)<<=2;
  R(0)&=0x1u;
  R(6)<<=2;
  R(0)<<=8;
  R(3)|=R(6);
  R(3)|=R(0);
  R(0)=0x70u;
  R(0)=LD32(R(4)+R(0));
  R(0)&=0x3fu;
  R(0)<<=16;
  R(2)=0x8c2ef124u;
  R(3)|=R(0);
  ST32(R(2),R(3));
  R(0)=0x8c2ef140u;
  R(3)=LD32(R(0));
  R(1)+=0x38u;
  R(0)=LD32(R(1));
  R(0)+=R(3);
  R(3)=0x8c2ef128u;
  ST32(R(3),R(0));
  R(0)=0x8c2ef144u;
  R(2)=LD32(R(0));
  R(3)+=0x2cu;
  R(0)=LD32(R(3));
  R(1)+=0xfffffff4u;
  R(0)+=R(2);
  R(2)=LD32(R(1));
  R(1)=LD32(R(3)+4);
  R(1)+=R(2);
  R(2)=0x8c2ef12cu;
  R(1)<<=16;
  R(0)|=R(1);
  ST32(R(2),R(0));
  R(1)=0x8c0db7eau;
  R(14)=0x8c0db7e0u;
  { c->pr=0x8c0d3732u; R(4)=0x44u; f_8c0db7ea(c); }
  R(5)=0x800000u;
  R(5)&=R(0);
  { uint32_t tg=R(14); c->pr=0x8c0d373au; R(4)=0x44u; sh4_call(c,tg); }
  R(5)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0d3740u; R(4)=0x5cu; sh4_call(c,tg); }
  R(3)=0x8c2ef108u;
  { R(5)=LD32(R(3)); goto L8c0d37c0; }
L8c0d37c0:;
  R(4)=0xccu;
  { uint32_t tg=R(14); c->pr=0x8c0d37c6u;  sh4_call(c,tg); }
  R(4)=0xd0u;
  R(2)=0x8c2ef100u;
  { uint32_t tg=R(14); c->pr=0x8c0d37ceu; R(5)=LD32(R(2)); sh4_call(c,tg); }
  R(4)=0xd4u;
  R(3)=0x8c2ef10cu;
  { uint32_t tg=R(14); c->pr=0x8c0d37d6u; R(5)=LD32(R(3)); sh4_call(c,tg); }
  R(4)=0xd8u;
  R(2)=0x8c2ef110u;
  { uint32_t tg=R(14); c->pr=0x8c0d37deu; R(5)=LD32(R(2)); sh4_call(c,tg); }
  R(4)=0xdcu;
  R(3)=0x8c2ef114u;
  { uint32_t tg=R(14); c->pr=0x8c0d37e6u; R(5)=LD32(R(3)); sh4_call(c,tg); }
  R(4)=0xe0u;
  R(2)=0x8c2ef118u;
  { uint32_t tg=R(14); c->pr=0x8c0d37eeu; R(5)=LD32(R(2)); sh4_call(c,tg); }
  R(4)=0xecu;
  R(3)=0x8c2ef128u;
  { uint32_t tg=R(14); c->pr=0x8c0d37f6u; R(5)=LD32(R(3)); sh4_call(c,tg); }
  R(4)=0xf0u;
  R(2)=0x8c2ef12cu;
  { uint32_t tg=R(14); c->pr=0x8c0d37feu; R(5)=LD32(R(2)); sh4_call(c,tg); }
  R(3)=0x8c2ef124u;
  R(0)=LD32(R(3));
  R(4)=0xe8u;
  R(0)|=0x8u;
  { uint32_t tg=R(14); c->pr=0x8c0d380au; R(5)=R(0); sh4_call(c,tg); }
  R(4)=0xc8u;
  R(2)=0x8c2ef104u;
  { uint32_t tg=R(14); c->pr=0x8c0d3812u; R(5)=LD32(R(2)); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d37c0(SH4Ctx *c) {
  R(4)=0xccu;
  { uint32_t tg=R(14); c->pr=0x8c0d37c6u;  sh4_call(c,tg); }
  R(4)=0xd0u;
  R(2)=0x8c2ef100u;
  { uint32_t tg=R(14); c->pr=0x8c0d37ceu; R(5)=LD32(R(2)); sh4_call(c,tg); }
  R(4)=0xd4u;
  R(3)=0x8c2ef10cu;
  { uint32_t tg=R(14); c->pr=0x8c0d37d6u; R(5)=LD32(R(3)); sh4_call(c,tg); }
  R(4)=0xd8u;
  R(2)=0x8c2ef110u;
  { uint32_t tg=R(14); c->pr=0x8c0d37deu; R(5)=LD32(R(2)); sh4_call(c,tg); }
  R(4)=0xdcu;
  R(3)=0x8c2ef114u;
  { uint32_t tg=R(14); c->pr=0x8c0d37e6u; R(5)=LD32(R(3)); sh4_call(c,tg); }
  R(4)=0xe0u;
  R(2)=0x8c2ef118u;
  { uint32_t tg=R(14); c->pr=0x8c0d37eeu; R(5)=LD32(R(2)); sh4_call(c,tg); }
  R(4)=0xecu;
  R(3)=0x8c2ef128u;
  { uint32_t tg=R(14); c->pr=0x8c0d37f6u; R(5)=LD32(R(3)); sh4_call(c,tg); }
  R(4)=0xf0u;
  R(2)=0x8c2ef12cu;
  { uint32_t tg=R(14); c->pr=0x8c0d37feu; R(5)=LD32(R(2)); sh4_call(c,tg); }
  R(3)=0x8c2ef124u;
  R(0)=LD32(R(3));
  R(4)=0xe8u;
  R(0)|=0x8u;
  { uint32_t tg=R(14); c->pr=0x8c0d380au; R(5)=R(0); sh4_call(c,tg); }
  R(4)=0xc8u;
  R(2)=0x8c2ef104u;
  { uint32_t tg=R(14); c->pr=0x8c0d3812u; R(5)=LD32(R(2)); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d3818(SH4Ctx *c) {
  R(3)=0x20u;
  c->t=(R(3)&R(4))==0;
  R(5)=0x42u;
  { uint32_t k=c->t; R(5)&=R(4); if(k) goto L8c0d3880; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d3830;
  R(3)=0x8c2ef13cu;
  R(2)=0x200u;
  { ST32(R(3),R(2)); goto L8c0d3894; }
L8c0d3830:;
  R(1)=0x8c2ef13cu;
  R(0)=0x1e0u;
  { ST32(R(1),R(0)); goto L8c0d3894; }
L8c0d3880:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0d388e;
  R(2)=0x8c2ef13cu;
  R(3)=0x100u;
  { ST32(R(2),R(3)); goto L8c0d3894; }
L8c0d388e:;
  R(1)=0x8c2ef13cu;
  R(0)=0xf0u;
  ST32(R(1),R(0));
L8c0d3894:;
  R(3)=0x10u;
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c0d38a2;
  R(2)=0x8c2ef138u;
  R(1)=0x280u;
  { ST32(R(2),R(1)); goto L8c0d38a8; }
L8c0d38a2:;
  R(0)=0x8c2ef138u;
  R(2)=0x140u;
  ST32(R(0),R(2));
L8c0d38a8:;
  {  return; }
}
void f_8c0d38ac(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2ef0ccu;
  ST32(R(3),R(4));
  { c->pr=0x8c0d38b6u; R(5)=0x0u; f_8c0d2fa0(c); }
  { c->pr=0x8c0d38bau;  f_8c0d2d5c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d38e0(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  R(3)=0x8c0dd580u;
  ST32(R(15),R(4));
  R(4)=0xbu;
  R(6)=0x8c2ed86cu;
  { R(15)+=0x4u; { f_8c0dd580(c); return; } }
}
void f_8c0d3920(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d2ba0u;
  { c->pr=0x8c0d3928u; R(4)=0x2u; f_8c0d2ba0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0d392e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d2ba0u;
  { c->pr=0x8c0d3936u; R(4)=0x4u; f_8c0d2ba0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0d393c(SH4Ctx *c) {
  {  return; }
}
void f_8c0d3940(SH4Ctx *c) {
  R(3)=0x1u;
  { ST32(R(4)+4,R(3)); return; }
}
void f_8c0d3946(SH4Ctx *c) {
  R(1)=0x8c2ed874u;
  R(2)=LD32(R(1));
  { ST32(R(4)+4,R(2)); return; }
}
void f_8c0d394e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0xffff0000u;
  R(2)=R(4);
  R(1)=0x8c0f3660u;
  R(14)=0x8c2ecf08u;
  R(2)&=R(3);
  ST32(R(15),R(4));
  ST32(R(14),R(2));
  ST32(R(14)+4,R(1));
  R(1)=0x10000u;
  R(2)=0x8c0f36bcu;
  ST32(R(14)+8,R(2));
  R(0)=LD32(R(14));
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0d39a0;
  R(2)=0x1000000u;
  {  goto L8c0d39a2; }
L8c0d39a0:;
  R(2)=0x800000u;
L8c0d39a2:;
  R(3)=0x8c0de8c4u;
  R(0)=0x7f8u;
  { c->pr=0x8c0d39aau; ST32(R(14)+R(0),R(2)); f_8c0de8c4(c); }
  R(1)=0x8c0dced8u;
  { c->pr=0x8c0d39b0u;  f_8c0dced8(c); }
  R(6)=0x95cu;
  R(5)=0x8c0d393cu;
  R(3)=0x8c0dd580u;
  R(6)+=R(14);
  { c->pr=0x8c0d39bcu; R(4)=0x8u; f_8c0dd580(c); }
  R(6)=0x964u;
  R(5)=0x8c0d3940u;
  R(2)=0x8c0dd580u;
  R(6)+=R(14);
  { c->pr=0x8c0d39c8u; R(4)=0xbu; f_8c0dd580(c); }
  R(3)=0x8c0d29b8u;
  R(4)=0x8c0d3946u;
  { c->pr=0x8c0d39d0u;  f_8c0d29b8(c); }
  R(3)=0x8c0dea20u;
  { c->pr=0x8c0d39d6u; R(4)=LD32(R(15)); f_8c0dea20(c); }
  R(2)=0x8c0de778u;
  { c->pr=0x8c0d39dcu;  f_8c0de778(c); }
  R(0)=0x950u;
  R(3)=0xfu;
  R(2)=0x28u;
  ST32(R(14)+R(0),R(3));
  R(0)+=0xfffffffcu;
  ST32(R(14)+R(0),R(2));
  R(0)+=0xfffffffcu;
  R(13)=0x0u;
  R(3)=0x8c0dd1e2u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0xfffffffcu;
  { c->pr=0x8c0d39f6u; ST32(R(14)+R(0),R(13)); f_8c0dd1e2(c); }
  R(2)=0x8c0dbc80u;
  R(6)=R(13);
  R(5)=0x8c0d3920u;
  { c->pr=0x8c0d3a00u; R(4)=0x1eu; f_8c0dbc80(c); }
  R(3)=0x8c0dbc80u;
  R(6)=R(13);
  R(5)=0x8c0d392eu;
  { c->pr=0x8c0d3a0au; R(4)=0x1au; f_8c0dbc80(c); }
  R(2)=0x8c0dccc0u;
  { c->pr=0x8c0d3a10u;  f_8c0dccc0(c); }
  R(3)=0x8c0dc660u;
  { c->pr=0x8c0d3a16u;  f_8c0dc660(c); }
  R(2)=0x8c0df1beu;
  R(4)=0x7d4u;
  { c->pr=0x8c0d3a1eu; R(4)+=R(14); f_8c0df1be(c); }
  R(0)=0x940u;
  ST32(R(14)+R(0),R(13));
  R(0)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d3aa0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e1140u;
  { c->pr=0x8c0d3aa8u;  f_8c0e1140(c); }
  R(2)=0x8c0de8feu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0de8fe(c); return; } }
}
void f_8c0d3ae0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(13)=R(4);
  R(4)=LD32(R(13)+8);
  R(2)=0xb0u;
  R(4)=LD32(R(4)+16);
  R(14)=0x8c2ecf08u;
  R(12)=R(4);
  R(12)<<=2;
  R(3)=R(4);
  R(12)+=R(3);
  R(12)<<=2;
  R(2)+=R(14);
  R(2)+=R(12);
  ST32(R(13),R(2));
  R(0)=LD32(R(13)+8);
  R(0)=LD32(R(0)+24);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0d3b22;
  R(11)=0x8c0dfc50u;
L8c0d3b14:;
  { uint32_t tg=R(11); c->pr=0x8c0d3b18u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d3b14;
  R(2)=0x8c0d19c0u;
  { c->pr=0x8c0d3b22u; R(4)=0x0u; f_8c0d19c0(c); }
L8c0d3b22:;
  R(5)=0x14u;
  R(4)=0x0u;
L8c0d3b26:;
  R(3)=0x40u;
  R(1)=0x170u;
  R(3)+=R(14);
  R(0)=0xb0u;
  R(3)=LD32(R(3));
  R(1)+=R(14);
  R(0)+=R(14);
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(1);
  R(2)=R(3);
  R(2)+=R(12);
  R(3)=R(2);
  R(3)+=R(4);
  R(2)=LD32(R(3));
  R(0)+=R(12);
  ST32(R(4)+R(0),R(2));
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0d3b26;
  R(2)=0x8c0d4a6cu;
  { c->pr=0x8c0d3b5cu; R(4)=R(13); f_8c0d4a6c(c); }
  ST32(R(15)+4,R(0));
  R(6)=R(15);
  R(5)=LD32(R(13)+8);
  R(0)=0x7d8u;
  R(3)=0x8c0dcc40u;
  R(5)=LD32(R(5)+16);
  { c->pr=0x8c0d3b6cu; R(4)=LD32(R(14)+R(0)); f_8c0dcc40(c); }
  R(14)=R(15);
  R(14)+=0xcu;
  R(2)=R(14);
  R(3)=R(14);
  R(2)+=0x10u;
  R(6)=R(14);
  R(3)+=0xcu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(7)=R(14);
  R(3)=0x8c0ddd60u;
  ST32(R(15)+16,R(5));
  R(7)+=0x8u;
  R(6)+=0x4u;
  { c->pr=0x8c0d3b8eu; R(4)=LD32(R(15)+8); f_8c0ddd60(c); }
  R(15)+=0x8u;
  R(11)=0x808c0002u;
  R(5)=0x0u;
  R(8)=0xe0000000u;
  R(10)=0x1000000u;
  R(12)=0x20800000u;
  R(6)=LD32(R(13));
  R(13)=R(14);
  R(7)=LD32(R(15)+8);
  { R(13)+=0x14u; goto L8c0d3c3c; }
L8c0d3c00:;
  R(2)=LD32(R(7));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d3c36;
  R(14)=R(6);
  R(4)=0x3ffffffu;
  R(0)=LD32(R(14));
  R(2)=0xff00003cu;
  R(4)&=R(0);
  R(3)=0xff000038u;
  R(0)>>=16;
  R(0)>>=8;
  ST32(R(2),R(0));
  R(4)|=R(8);
  ST32(R(3),R(0));
  R(0)=R(5);
  R(0)|=R(11);
  ST32(R(4),R(0));
  R(4)+=0x4u;
  R(0)=0x80000000u;
  ST32(R(4),R(0));
  R(4)+=0x4u;
  ST32(R(4),R(12));
  R(4)+=0x4u;
  sh4_pref(c,R(4));
  R(0)=LD32(R(14));
  R(0)+=0x20u;
  ST32(R(14),R(0));
L8c0d3c36:;
  R(7)+=0x4u;
  R(6)+=0x4u;
  R(5)+=R(10);
L8c0d3c3c:;
  c->t=R(7)>=R(13);
  if(!c->t) goto L8c0d3c00;
  R(0)=LD32(R(15)+4);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d3c80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=R(4);
  R(0)=LD32(R(13)+4);
  R(14)=0x8c2ecf08u;
  c->t=(R(0)&0x10)==0;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c0d3cf2; }
  R(0)=0x7d0u;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d3ce8;
  R(4)=R(11);
  R(5)=0x14u;
L8c0d3caa:;
  R(2)=0x670u;
  R(3)=0x170u;
  R(2)+=R(14);
  R(2)+=R(4);
  R(3)+=R(14);
  R(1)=LD32(R(2));
  R(3)+=R(4);
  R(4)+=0x4u;
  ST32(R(3),R(1));
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0d3caa;
  R(0)=0x44u;
  R(4)=0x170u;
  R(4)+=R(14);
  R(2)=R(4);
  R(3)=R(4);
  R(3)+=0x14u;
  ST32(R(15)+8,R(4));
  R(5)=LD32(R(13)+R(0));
  R(5)<<=2;
  R(2)+=R(5);
  R(1)=LD32(R(2));
  R(3)+=R(5);
  R(2)=0x170u;
  ST32(R(3),R(1));
  R(3)=LD32(R(13)+R(0));
  R(2)+=R(14);
  R(1)=0x10000000u;
  R(3)<<=2;
  R(3)+=R(2);
  ST32(R(3),R(1));
L8c0d3ce8:;
  R(12)=0x8c0dfc50u;
L8c0d3cea:;
  { uint32_t tg=R(12); c->pr=0x8c0d3ceeu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d3cea;
L8c0d3cf2:;
  R(0)=0x4cu;
  R(0)=LD32(R(14)+R(0));
  c->t=(R(0)&0x3)==0;
  if(c->t) goto L8c0d3cfe;
  {  goto L8c0d3e4c; }
L8c0d3cfe:;
  R(0)=0x4cu;
  R(2)=LD32(R(14)+R(0));
  R(3)=0xfffffffcu;
  R(8)=0x1u;
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(8);
  ST32(R(14)+R(0),R(1));
  R(2)=LD32(R(14)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d3d8e;
  R(12)=0x8c0d3f64u;
L8c0d3d16:;
  { uint32_t tg=R(12); c->pr=0x8c0d3d1au;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d3d16;
  R(2)=LD32(R(14)+28);
  c->t=(R(2)&R(8))==0;
  { uint32_t k=c->t; R(10)=0x8u; if(k) goto L8c0d3d66; }
  R(9)=0x8c0dc3a0u;
  R(12)=R(11);
L8c0d3d2a:;
  R(2)=0x8c0dcb40u;
  R(6)=R(15);
  R(7)=LD32(R(14)+20);
  R(5)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c0d3d38u; R(4)=LD32(R(14)+12); f_8c0dcb40(c); }
  R(4)=0x7d8u;
  R(3)=0x8c0ddf20u;
  R(4)+=R(14);
  R(7)=LD32(R(13)+52);
  R(6)=LD32(R(15)+4);
  R(4)+=R(12);
  R(5)=LD32(R(15));
  { c->pr=0x8c0d3d4au; R(4)=LD32(R(4)); f_8c0ddf20(c); }
  R(4)=0x7d8u;
  R(4)+=R(14);
  R(4)+=R(12);
  { uint32_t tg=R(9); c->pr=0x8c0d3d54u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(4)=0x7d8u;
  R(3)=0x8c0ddda0u;
  R(4)+=R(14);
  R(4)+=R(12);
  { c->pr=0x8c0d3d60u; R(4)=LD32(R(4)); f_8c0ddda0(c); }
  R(12)+=0x4u;
  c->t=R(12)>=R(10);
  if(!c->t) goto L8c0d3d2a;
L8c0d3d66:;
  R(0)=LD32(R(14)+28);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0d3d8c;
  R(12)=R(11);
L8c0d3d6e:;
  R(9)=0x7d8u;
  R(3)=0x8c0dc5e0u;
  R(9)+=R(14);
  R(5)=LD32(R(14)+20);
  R(9)+=R(12);
  R(9)=LD32(R(9));
  { c->pr=0x8c0d3d7eu; R(4)=R(9); f_8c0dc5e0(c); }
  R(2)=0x8c0de160u;
  R(5)=LD32(R(14)+32);
  { c->pr=0x8c0d3d86u; R(4)=R(9); f_8c0de160(c); }
  R(12)+=0x4u;
  c->t=R(12)>=R(10);
  if(!c->t) goto L8c0d3d6e;
L8c0d3d8c:;
  ST32(R(14)+28,R(11));
L8c0d3d8e:;
  R(0)=0x44u;
  R(2)=R(13);
  R(2)+=0x38u;
  ST32(R(14)+52,R(11));
  ST32(R(14)+R(0),R(11));
  R(0)=0x7f0u;
  R(3)=LD32(R(13)+36);
  ST32(R(3)+24,R(2));
  ST32(R(14)+R(0),R(11));
  {  goto L8c0d3e00; }
L8c0d3e00:;
  R(0)=LD32(R(13)+4);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0d3e1e;
  R(3)=0x100000u;
  R(0)=0x7f0u;
  ST32(R(14)+R(0),R(8));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0d3e2a;
  R(2)=LD32(R(13)+36);
  R(2)=LD32(R(2)+8);
  R(0)=LD32(R(2)+24);
  R(0)|=0x4u;
  { ST32(R(2)+24,R(0)); goto L8c0d3e2a; }
L8c0d3e1e:;
  R(3)=LD32(R(13)+36);
  R(2)=0xfffffffbu;
  R(3)=LD32(R(3)+8);
  R(1)=LD32(R(3)+24);
  R(1)&=R(2);
  ST32(R(3)+24,R(1));
L8c0d3e2a:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d3e3e;
  R(0)=LD32(R(13)+4);
  c->t=(R(0)&0x20)==0;
  if(!c->t) goto L8c0d3e3a;
  R(0)=0x954u;
  { ST32(R(14)+R(0),R(8)); goto L8c0d3e3e; }
L8c0d3e3a:;
  R(0)=0x954u;
  ST32(R(14)+R(0),R(11));
L8c0d3e3e:;
  R(0)=0x7f0u;
  R(3)=0x8c0d485eu;
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0d3e48u; R(4)=LD32(R(13)+36); f_8c0d485e(c); }
  { R(4)=R(0); goto L8c0d3e4e; }
L8c0d3e4c:;
  R(4)=0xeeeeu;
L8c0d3e4e:;
  R(0)=R(4);
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
void f_8c0d3ea0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d3eacu;  f_8c0d41e2(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c0d3ece; }
  R(13)=0x2000u;
  R(12)=0x8c0dd340u;
L8c0d3eb6:;
  R(0)=LD32(R(14)+20);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0d3ec8;
  R(5)=0x0u;
  R(6)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c0d3ec4u; R(4)=LD32(R(14)+60); sh4_call(c,tg); }
  {  goto L8c0d3ece; }
L8c0d3ec8:;
  R(14)=LD32(R(14)+16);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d3eb6;
L8c0d3ece:;
  R(2)=0x8c2ed73cu;
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST32(R(2),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d3ee0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d3eecu;  f_8c0d41e2(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) { f_8c0d3f46(c); return; } }
  R(13)=0x8000u;
  R(12)=0x8c0dd340u;
  { f_8c0d3ef6(c); return; }
}
void f_8c0d3ef6(SH4Ctx *c) {
L8c0d3ef6:;
  R(0)=LD32(R(14)+20);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0d3f40;
  R(5)=0x1u;
  R(6)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c0d3f04u; R(4)=LD32(R(14)+60); sh4_call(c,tg); }
  {  { f_8c0d3f46(c); return; } }
L8c0d3f40:;
  R(14)=LD32(R(14)+16);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d3ef6;
  { f_8c0d3f46(c); return; }
}
void f_8c0d3f40(SH4Ctx *c) {
  R(14)=LD32(R(14)+16);
  c->t=(R(14)&R(14))==0;
  if(!c->t) { f_8c0d3ef6(c); return; }
  { f_8c0d3f46(c); return; }
}
void f_8c0d3f46(SH4Ctx *c) {
  R(0)=0x838u;
  R(2)=0x3u;
  R(4)=0x8c2ecf08u;
  R(3)=LD32(R(4)+R(0));
  R(3)+=0x1u;
  ST32(R(4)+R(0),R(3));
  R(0)=0x95cu;
  R(3)=0x8c0d2ba0u;
  ST32(R(4)+R(0),R(2));
  R(4)=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0d2ba0(c); return; } }
}
void f_8c0d3f64(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2ee72cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d3f7a;
  R(3)=0x8c0dff40u;
  { c->pr=0x8c0d3f74u;  f_8c0dff40(c); }
  R(3)=0x8c2ee72cu;
  R(2)=0x0u;
  ST32(R(3),R(2));
L8c0d3f7a:;
  R(5)=0xe20u;
  R(4)=0x0u;
  R(6)=0x1c4u;
L8c0d3f80:;
  R(0)=0x8c2ed8a8u;
  R(2)=LD32(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d3f90;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xeeeeu;
  {  return; }
L8c0d3f90:;
  R(4)+=R(6);
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0d3f80;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d3fc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x10u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x8u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0xffffffffu;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c2ecf08u;
  R(2)=0x8c0f4324u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0d4040; }
  R(1)=0x8c0f4324u;
  R(3)=0x8c2ed878u;
  ST32(R(1),R(3));
  R(4)=R(14);
L8c0d3fea:;
  R(3)=0x7d8u;
  R(3)+=R(13);
  R(3)+=R(4);
  R(4)+=0x4u;
  c->t=R(4)>=R(10);
  { uint32_t k=!c->t; ST32(R(3),R(14)); if(k) goto L8c0d3fea; }
  R(4)=R(14);
L8c0d3ffa:;
  R(3)=0x7e0u;
  R(3)+=R(13);
  R(3)+=R(4);
  R(4)+=0x4u;
  c->t=R(4)>=R(12);
  { uint32_t k=!c->t; ST32(R(3),R(14)); if(k) goto L8c0d3ffa; }
  {  goto L8c0d4096; }
L8c0d4040:;
  R(1)=0x8c0e1140u;
  { c->pr=0x8c0d4046u;  f_8c0e1140(c); }
  R(11)=R(14);
  R(8)=R(14);
L8c0d404a:;
  R(3)=0x7d8u;
  R(3)+=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d4066;
  R(5)=0x7d8u;
  R(3)=0x8c0df320u;
  R(5)+=R(13);
  R(0)=0x7d4u;
  R(5)+=R(8);
  R(5)=LD32(R(5));
  { c->pr=0x8c0d4066u; R(4)=LD32(R(13)+R(0)); f_8c0df320(c); }
L8c0d4066:;
  R(11)+=0x4u;
  c->t=R(11)>=R(10);
  { uint32_t k=!c->t; R(8)+=0x4u; if(k) goto L8c0d404a; }
  R(8)=0x8c0d1b80u;
  R(11)=R(14);
  R(10)=R(14);
L8c0d4074:;
  R(0)=0x8c2ee6e4u;
  ST32(R(11)+R(0),R(9));
  R(3)=0x7e0u;
  R(3)+=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d408e;
  R(4)=0x7e0u;
  R(4)+=R(13);
  R(4)+=R(10);
  { uint32_t tg=R(8); c->pr=0x8c0d408eu; R(4)=LD32(R(4)); sh4_call(c,tg); }
L8c0d408e:;
  R(11)+=0x4u;
  c->t=R(11)>=R(12);
  { uint32_t k=!c->t; R(10)+=0x4u; if(k) goto L8c0d4074; }
L8c0d4096:;
  R(2)=0x8c2ee6f8u;
  ST32(R(2),R(14));
  R(3)=0x8c2ee704u;
  ST32(R(3),R(14));
  R(1)=0x8c2ee708u;
  ST32(R(1),R(9));
  R(2)=0x8c2ed884u;
  ST32(R(2),R(14));
  R(3)=0x8c2ed888u;
  ST32(R(3),R(14));
  R(1)=0x8c2ed88cu;
  ST32(R(1),R(14));
  R(2)+=0xcu;
  ST32(R(2),R(14));
  R(3)+=0xcu;
  ST32(R(3),R(14));
  R(1)+=0xcu;
  ST32(R(1),R(14));
  R(2)+=0xcu;
  ST32(R(2),R(14));
  R(3)+=0xcu;
  ST32(R(3),R(14));
  R(1)+=0xcu;
  ST32(R(1),R(14));
  R(2)=0x8c2ee718u;
  ST32(R(2),R(14));
  R(3)=0x8c2ee71cu;
  ST32(R(3),R(14));
  R(1)=0x8c2ee724u;
  ST32(R(1),R(14));
  R(5)=0xe20u;
  R(4)=R(14);
  R(6)=0x1c4u;
L8c0d40d8:;
  R(0)=0x8c2ed8a8u;
  ST32(R(4)+R(0),R(14));
  R(3)=R(0);
  R(3)+=R(4);
  ST32(R(3)+12,R(14));
  R(2)=R(0);
  R(2)+=R(4);
  R(4)+=R(6);
  c->t=R(4)>=R(5);
  { uint32_t k=!c->t; ST32(R(2)+16,R(14)); if(k) goto L8c0d40d8; }
  R(2)=0x8c2ee6fcu;
  ST32(R(2),R(14));
  R(3)=0x8c2ee700u;
  ST32(R(3),R(14));
  R(1)=0x8c2ee728u;
  ST32(R(1),R(14));
  R(2)=0x8c0dbc80u;
  R(6)=0x0u;
  R(5)=0x8c0d4676u;
  { c->pr=0x8c0d4104u; R(4)=0x14u; f_8c0dbc80(c); }
  R(3)=0x8c0dbc80u;
  R(6)=0x0u;
  R(5)=0x8c0d45a6u;
  { c->pr=0x8c0d410eu; R(4)=0x1du; f_8c0dbc80(c); }
  R(2)=0x8c0dde20u;
  R(5)=0x8c0d3ea0u;
  { c->pr=0x8c0d4116u; R(4)=0x0u; f_8c0dde20(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0dde20u;
  R(4)=0x1u;
  R(5)=0x8c0d3ee0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0dde20(c); return; } }
}
