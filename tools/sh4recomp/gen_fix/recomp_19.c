#include "recomp_decls.h"
void f_8c0ade60(SH4Ctx *c) {
  R(2)=LD32(R(13)+4);
  R(0)=0x354u;
  R(3)=0xbu;
  R(7)=0x354u;
  R(5)=0x0u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x360u;
  R(7)+=R(15);
  ST32(R(15)+R(0),R(3));
  R(0)=0x48u;
  R(6)=LD32(R(15)+28);
  R(3)=0x8c0729f6u;
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ade82u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=0x8c0c76b8u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ade9a;
  R(5)=0x318u;
  R(0)=0x8c0adf10u;
  R(2)=0x8c0268f0u;
  fp_ld(c,4,R(0));
  R(5)+=R(15);
  { c->pr=0x8c0ade98u; R(4)=R(13); f_8c0268f0(c); }
  R(12)=R(0);
L8c0ade9a:;
  R(3)=0x8c027d80u;
  R(5)=R(9);
  { c->pr=0x8c0adea2u; R(4)=R(13); f_8c027d80(c); }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0adf40;
  R(0)=0xffffffffu;
  R(3)=R(15);
  ST16(R(15)+4,R(0));
  R(5)=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(4)=0x334u;
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0adeceu; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(3)=0x8c019e40u;
  ST32(R(15)+44,R(0));
  { c->pr=0x8c0aded8u; R(4)=R(9); f_8c019e40(c); }
  R(2)=0x8c0c76b8u;
  ST16(R(15)+4,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0adf80;
  R(3)=0x8c0269a0u;
  R(5)=R(9);
  R(7)=(uint32_t)(int32_t)(int16_t)R(0);
  R(6)=0x0u;
  { c->pr=0x8c0adeeeu; R(4)=R(12); f_8c0269a0(c); }
  {  goto L8c0adf80; }
L8c0adf40:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(15);
  R(4)=0x334u;
  R(5)=R(13);
  ST32(R(15)+16,R(0));
  R(7)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0adf66u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=R(0); if(k) goto L8c0adf80; }
  R(3)=0x8c0269a0u;
  R(5)=R(9);
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0adf80u; R(4)=R(12); f_8c0269a0(c); }
L8c0adf80:;
  R(2)=LD32(R(15));
  c->t=R(2)==R(14);
  if(c->t) goto L8c0adfa6;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0adf94;
  R(2)=LD32(R(15));
  R(2)=0u-R(2);
  { ST32(R(15),R(2)); goto L8c0adfa6; }
L8c0adf94:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15));
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0adfa6:;
  R(5)=0x324u;
  R(3)=0x8c05730cu;
  R(5)+=R(15);
  { c->pr=0x8c0adfb0u; R(4)=R(9); f_8c05730c(c); }
  R(3)=0x8c0c76b8u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ae000;
  R(2)=0x8c0646c8u;
  { c->pr=0x8c0adfbeu; R(4)=R(13); f_8c0646c8(c); }
  {  goto L8c0ae2c6; }
L8c0ae000:;
  R(2)=LD32(R(13)+36);
  R(14)=LD32(R(13)+4);
  R(14)=LD32(R(14)+8);
  ST32(R(15)+16,R(2));
  R(2)=0x8c0646f4u;
  { c->pr=0x8c0ae00eu; R(4)=R(13); f_8c0646f4(c); }
  R(0)=0x38u;
  R(5)=0x30cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30cu;
  R(5)+=R(15);
  R(3)=0x8c01638au;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x310u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x314u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c0ae030u; R(4)=LD32(R(15)+16); f_8c01638a(c); }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ae046;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0ae03au; R(4)=R(14); f_8c04a8b8(c); }
  R(6)=0x30cu;
  R(4)=R(0);
  R(2)=0x8c0900acu;
  R(6)+=R(15);
  { c->pr=0x8c0ae046u; R(5)=R(13); f_8c0900ac(c); }
L8c0ae046:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c0ae04cu; R(4)=R(13); f_8c064b7e(c); }
  {  goto L8c0ae2c6; }
L8c0ae2c6:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(7)=0x354u;
  R(5)=0x0u;
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(4)+=R(11);
  R(0)=R(0)&0xFF;
  ST32(R(4),R(0));
  R(7)+=R(15);
  R(3)=LD32(R(15)+44);
  ST32(R(4)+12,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(4)+16,R(0));
  R(0)=0x354u;
  R(3)=LD32(R(15));
  ST32(R(15)+R(0),R(3));
  R(0)=0x360u;
  R(3)=0x8c0729f6u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x28u;
  R(6)=LD32(R(15)+28);
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ae306u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+36);
  R(3)=0x6u;
  R(0)=R(10);
  ST32(R(2)+12,R(3));
  { f_8c0ae314(c); return; }
}
void f_8c0adf40(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(15);
  R(4)=0x334u;
  R(5)=R(13);
  ST32(R(15)+16,R(0));
  R(7)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0adf66u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=R(0); if(k) goto L8c0adf80; }
  R(3)=0x8c0269a0u;
  R(5)=R(9);
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0adf80u; R(4)=R(12); f_8c0269a0(c); }
L8c0adf80:;
  R(2)=LD32(R(15));
  c->t=R(2)==R(14);
  if(c->t) goto L8c0adfa6;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0adf94;
  R(2)=LD32(R(15));
  R(2)=0u-R(2);
  { ST32(R(15),R(2)); goto L8c0adfa6; }
L8c0adf94:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15));
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0adfa6:;
  R(5)=0x324u;
  R(3)=0x8c05730cu;
  R(5)+=R(15);
  { c->pr=0x8c0adfb0u; R(4)=R(9); f_8c05730c(c); }
  R(3)=0x8c0c76b8u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ae000;
  R(2)=0x8c0646c8u;
  { c->pr=0x8c0adfbeu; R(4)=R(13); f_8c0646c8(c); }
  {  goto L8c0ae2c6; }
L8c0ae000:;
  R(2)=LD32(R(13)+36);
  R(14)=LD32(R(13)+4);
  R(14)=LD32(R(14)+8);
  ST32(R(15)+16,R(2));
  R(2)=0x8c0646f4u;
  { c->pr=0x8c0ae00eu; R(4)=R(13); f_8c0646f4(c); }
  R(0)=0x38u;
  R(5)=0x30cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30cu;
  R(5)+=R(15);
  R(3)=0x8c01638au;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x310u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x314u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c0ae030u; R(4)=LD32(R(15)+16); f_8c01638a(c); }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ae046;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0ae03au; R(4)=R(14); f_8c04a8b8(c); }
  R(6)=0x30cu;
  R(4)=R(0);
  R(2)=0x8c0900acu;
  R(6)+=R(15);
  { c->pr=0x8c0ae046u; R(5)=R(13); f_8c0900ac(c); }
L8c0ae046:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c0ae04cu; R(4)=R(13); f_8c064b7e(c); }
  {  goto L8c0ae2c6; }
L8c0ae2c6:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(7)=0x354u;
  R(5)=0x0u;
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(4)+=R(11);
  R(0)=R(0)&0xFF;
  ST32(R(4),R(0));
  R(7)+=R(15);
  R(3)=LD32(R(15)+44);
  ST32(R(4)+12,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(4)+16,R(0));
  R(0)=0x354u;
  R(3)=LD32(R(15));
  ST32(R(15)+R(0),R(3));
  R(0)=0x360u;
  R(3)=0x8c0729f6u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x28u;
  R(6)=LD32(R(15)+28);
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ae306u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+36);
  R(3)=0x6u;
  R(0)=R(10);
  ST32(R(2)+12,R(3));
  { f_8c0ae314(c); return; }
}
void f_8c0ae000(SH4Ctx *c) {
  R(2)=LD32(R(13)+36);
  R(14)=LD32(R(13)+4);
  R(14)=LD32(R(14)+8);
  ST32(R(15)+16,R(2));
  R(2)=0x8c0646f4u;
  { c->pr=0x8c0ae00eu; R(4)=R(13); f_8c0646f4(c); }
  R(0)=0x38u;
  R(5)=0x30cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30cu;
  R(5)+=R(15);
  R(3)=0x8c01638au;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x310u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x314u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c0ae030u; R(4)=LD32(R(15)+16); f_8c01638a(c); }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ae046;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0ae03au; R(4)=R(14); f_8c04a8b8(c); }
  R(6)=0x30cu;
  R(4)=R(0);
  R(2)=0x8c0900acu;
  R(6)+=R(15);
  { c->pr=0x8c0ae046u; R(5)=R(13); f_8c0900ac(c); }
L8c0ae046:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c0ae04cu; R(4)=R(13); f_8c064b7e(c); }
  {  goto L8c0ae2c6; }
L8c0ae2c6:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(7)=0x354u;
  R(5)=0x0u;
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(4)+=R(11);
  R(0)=R(0)&0xFF;
  ST32(R(4),R(0));
  R(7)+=R(15);
  R(3)=LD32(R(15)+44);
  ST32(R(4)+12,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(4)+16,R(0));
  R(0)=0x354u;
  R(3)=LD32(R(15));
  ST32(R(15)+R(0),R(3));
  R(0)=0x360u;
  R(3)=0x8c0729f6u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x28u;
  R(6)=LD32(R(15)+28);
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ae306u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+36);
  R(3)=0x6u;
  R(0)=R(10);
  ST32(R(2)+12,R(3));
  { f_8c0ae314(c); return; }
}
void f_8c0ae080(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(5)=R(0);
  R(0)=0x6cu;
  R(5)+=R(11);
  R(2)=LD32(R(12)+R(0));
  R(4)=LD32(R(5)+8);
  R(2)-=R(4);
  ST32(R(15)+16,R(2));
  R(2)=0x8c0c76b8u;
  R(0)=LD32(R(5));
  ST8(R(15)+12,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae0ae;
  R(3)=0x8c026bb6u;
  { c->pr=0x8c0ae0acu; R(4)=LD32(R(15)+20); f_8c026bb6(c); }
  R(8)=R(0);
L8c0ae0ae:;
  R(3)=LD32(R(15)+16);
  R(2)=LD32(R(15));
  c->t=R(3)>=R(2);
  if(c->t) goto L8c0ae0ba;
  {  goto L8c0ae240; }
L8c0ae0ba:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(13)=R(0);
  R(13)+=R(11);
  R(13)=LD32(R(13)+4);
  R(3)=R(13);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(13)); if(k) goto L8c0ae180; }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c019e40u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0ae0deu; R(4)=R(9); f_8c019e40(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0ae1c0;
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0ae1c0;
L8c0ae0ec:;
  R(3)=R(15);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(14)=R(0);
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(2)=LD32(R(15)+44);
  R(4)=0x334u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  R(3)=0x8c057b20u;
  { c->pr=0x8c0ae112u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae12c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=R(14);
  R(7)=R(0);
  { c->pr=0x8c0ae12cu; R(4)=R(8); f_8c0269a0(c); }
L8c0ae12c:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c019e40u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0ae136u; R(4)=R(9); f_8c019e40(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0ae1c0;
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ae0ec;
  {  goto L8c0ae1c0; }
L8c0ae180:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(15);
  R(4)=0x334u;
  R(7)=0x0u;
  ST32(R(15)+16,R(0));
  R(6)=R(9);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c0ae1a6u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae1c0;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=LD32(R(15)+16);
  R(7)=R(0);
  { c->pr=0x8c0ae1c0u; R(4)=R(8); f_8c0269a0(c); }
L8c0ae1c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6cu;
  R(2)+=R(12);
  R(0)=R(0)&0xFF;
  R(2)=LD32(R(2));
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+8,R(2));
  R(3)=LD32(R(15));
  c->t=R(3)==R(13);
  if(c->t) goto L8c0ae1fc;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0ae1ea;
  R(2)=LD32(R(15));
  R(2)=0u-R(2);
  { ST32(R(15),R(2)); goto L8c0ae1fc; }
L8c0ae1ea:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15));
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0ae1fc:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6cu;
  R(2)+=R(12);
  R(0)=R(0)&0xFF;
  R(2)=LD32(R(2));
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  { ST32(R(0)+8,R(2)); goto L8c0ae2c6; }
L8c0ae240:;
  R(1)=LD32(R(15)+44);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ae2c6;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(7)=0x0u;
  R(4)=0x334u;
  R(6)=R(9);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=R(15);
  R(0)<<=2;
  R(14)=R(0);
  R(14)+=R(11);
  R(14)=LD32(R(14)+4);
  R(3)+=0x18u;
  ST32(R(15)+24,R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST32(R(15)+16,R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c0ae282u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae29c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=LD32(R(15)+16);
  R(7)=R(0);
  { c->pr=0x8c0ae29cu; R(4)=R(8); f_8c0269a0(c); }
L8c0ae29c:;
  R(2)=LD32(R(15)+24);
  c->t=R(2)==R(14);
  if(c->t) goto L8c0ae2c6;
  R(1)=LD32(R(15)+24);
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0ae2b0;
  R(2)=LD32(R(15)+24);
  R(2)=0u-R(2);
  { ST32(R(15)+24,R(2)); goto L8c0ae2c2; }
L8c0ae2b0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15)+24);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0ae2c2:;
  R(3)=LD32(R(15)+24);
  ST32(R(15),R(3));
L8c0ae2c6:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(7)=0x354u;
  R(5)=0x0u;
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(4)+=R(11);
  R(0)=R(0)&0xFF;
  ST32(R(4),R(0));
  R(7)+=R(15);
  R(3)=LD32(R(15)+44);
  ST32(R(4)+12,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(4)+16,R(0));
  R(0)=0x354u;
  R(3)=LD32(R(15));
  ST32(R(15)+R(0),R(3));
  R(0)=0x360u;
  R(3)=0x8c0729f6u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x28u;
  R(6)=LD32(R(15)+28);
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ae306u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+36);
  R(3)=0x6u;
  R(0)=R(10);
  ST32(R(2)+12,R(3));
  { f_8c0ae314(c); return; }
}
void f_8c0ae180(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(15);
  R(4)=0x334u;
  R(7)=0x0u;
  ST32(R(15)+16,R(0));
  R(6)=R(9);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c0ae1a6u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae1c0;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=LD32(R(15)+16);
  R(7)=R(0);
  { c->pr=0x8c0ae1c0u; R(4)=R(8); f_8c0269a0(c); }
L8c0ae1c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6cu;
  R(2)+=R(12);
  R(0)=R(0)&0xFF;
  R(2)=LD32(R(2));
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+8,R(2));
  R(3)=LD32(R(15));
  c->t=R(3)==R(13);
  if(c->t) goto L8c0ae1fc;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0ae1ea;
  R(2)=LD32(R(15));
  R(2)=0u-R(2);
  { ST32(R(15),R(2)); goto L8c0ae1fc; }
L8c0ae1ea:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15));
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0ae1fc:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6cu;
  R(2)+=R(12);
  R(0)=R(0)&0xFF;
  R(2)=LD32(R(2));
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  { ST32(R(0)+8,R(2)); goto L8c0ae2c6; }
L8c0ae2c6:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(7)=0x354u;
  R(5)=0x0u;
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(4)+=R(11);
  R(0)=R(0)&0xFF;
  ST32(R(4),R(0));
  R(7)+=R(15);
  R(3)=LD32(R(15)+44);
  ST32(R(4)+12,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(4)+16,R(0));
  R(0)=0x354u;
  R(3)=LD32(R(15));
  ST32(R(15)+R(0),R(3));
  R(0)=0x360u;
  R(3)=0x8c0729f6u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x28u;
  R(6)=LD32(R(15)+28);
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ae306u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+36);
  R(3)=0x6u;
  R(0)=R(10);
  ST32(R(2)+12,R(3));
  { f_8c0ae314(c); return; }
}
void f_8c0ae240(SH4Ctx *c) {
  R(1)=LD32(R(15)+44);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ae2c6;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(7)=0x0u;
  R(4)=0x334u;
  R(6)=R(9);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=R(15);
  R(0)<<=2;
  R(14)=R(0);
  R(14)+=R(11);
  R(14)=LD32(R(14)+4);
  R(3)+=0x18u;
  ST32(R(15)+24,R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST32(R(15)+16,R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c0ae282u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae29c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=LD32(R(15)+16);
  R(7)=R(0);
  { c->pr=0x8c0ae29cu; R(4)=R(8); f_8c0269a0(c); }
L8c0ae29c:;
  R(2)=LD32(R(15)+24);
  c->t=R(2)==R(14);
  if(c->t) goto L8c0ae2c6;
  R(1)=LD32(R(15)+24);
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0ae2b0;
  R(2)=LD32(R(15)+24);
  R(2)=0u-R(2);
  { ST32(R(15)+24,R(2)); goto L8c0ae2c2; }
L8c0ae2b0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15)+24);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0ae2c2:;
  R(3)=LD32(R(15)+24);
  ST32(R(15),R(3));
L8c0ae2c6:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(7)=0x354u;
  R(5)=0x0u;
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(4)+=R(11);
  R(0)=R(0)&0xFF;
  ST32(R(4),R(0));
  R(7)+=R(15);
  R(3)=LD32(R(15)+44);
  ST32(R(4)+12,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(4)+16,R(0));
  R(0)=0x354u;
  R(3)=LD32(R(15));
  ST32(R(15)+R(0),R(3));
  R(0)=0x360u;
  R(3)=0x8c0729f6u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x28u;
  R(6)=LD32(R(15)+28);
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ae306u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+36);
  R(3)=0x6u;
  R(0)=R(10);
  ST32(R(2)+12,R(3));
  { f_8c0ae314(c); return; }
}
void f_8c0ae314(SH4Ctx *c) {
  R(1)=0x364u;
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
void f_8c0ae360(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=R(5);
  R(5)=R(13);
  R(5)+=0xfffffff4u;
  R(14)=0x8c2e7608u;
  c->fr[4]=0x3F800000u;
  c->fr[15]=0x3F800000u;
  ST32(R(15),R(6));
  R(5)=LD32(R(5));
  c->fr[14]=0x00000000u;
  R(0)=R(5);
  c->t=(int32_t)R(0)==108;
  { uint32_t k=c->t; fp_unary(c,0,4); if(k) goto L8c0ae39e; }
  c->t=(int32_t)R(0)==109;
  if(c->t) goto L8c0ae3a2;
  c->t=(int32_t)R(0)==112;
  if(c->t) goto L8c0ae3a8;
  c->t=(int32_t)R(0)==110;
  if(c->t) goto L8c0ae3aa;
  c->t=(int32_t)R(0)==113;
  if(c->t) goto L8c0ae3ec;
  c->t=(int32_t)R(0)==111;
  if(c->t) goto L8c0ae3ee;
  {  goto L8c0ae438; }
L8c0ae39e:;
  { R(0)=0x8u; goto L8c0ae3a4; }
L8c0ae3a2:;
  R(0)=0xcu;
L8c0ae3a4:;
  { fp_ld(c,4,R(0)+R(14)); goto L8c0ae42e; }
L8c0ae3a8:;
  fp_mov(c,15,4);
L8c0ae3aa:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c0ae3b4u; R(5)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c0ae3c4; }
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0ae3ca; }
L8c0ae3c4:;
  R(3)=LD32(R(15)+4);
  c->fpul=R(3);
  fp_float(c,3);
L8c0ae3ca:;
  fp_arith(c,2,4,3);
  R(0)=0x8u;
  fp_mov(c,3,4);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0xcu;
  fp_arith(c,0,4,3);
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0ae3e0;
  { fp_ld(c,4,R(0)+R(14)); goto L8c0ae3e8; }
L8c0ae3e0:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0ae3e8;
  fp_mov(c,4,14);
L8c0ae3e8:;
  { R(0)=0x8u; goto L8c0ae42c; }
L8c0ae3ec:;
  fp_mov(c,15,4);
L8c0ae3ee:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c0ae3f8u; R(5)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c0ae408; }
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0ae40e; }
L8c0ae408:;
  R(3)=LD32(R(15)+4);
  c->fpul=R(3);
  fp_float(c,3);
L8c0ae40e:;
  fp_arith(c,2,4,3);
  R(0)=0xcu;
  fp_mov(c,3,4);
  fp_ld(c,4,R(0)+R(14));
  fp_arith(c,0,4,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  { uint32_t k=!c->t; R(0)=0x8u; if(k) goto L8c0ae422; }
  fp_mov(c,4,14);
L8c0ae422:;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0ae42a;
  fp_st(c,4,R(0)+R(14));
L8c0ae42a:;
  R(0)=0xcu;
L8c0ae42c:;
  fp_st(c,4,R(0)+R(14));
L8c0ae42e:;
  R(3)=LD32(R(15));
  R(2)=0x8u;
  fp_st(c,4,R(3));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
L8c0ae438:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ae480(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=R(5);
  R(5)=R(13);
  R(5)+=0xfffffff4u;
  R(14)=0x8c2e7608u;
  ST32(R(15),R(6));
  R(5)=LD32(R(5));
  R(0)=R(5);
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c0ae53c;
  c->t=(int32_t)R(0)==103;
  if(!c->t) goto L8c0ae4a2;
  {  goto L8c0ae590; }
L8c0ae4a2:;
  c->t=(int32_t)R(0)==104;
  if(c->t) goto L8c0ae4b6;
  c->t=(int32_t)R(0)==105;
  if(c->t) goto L8c0ae4e8;
  c->t=(int32_t)R(0)==106;
  if(c->t) goto L8c0ae50e;
  c->t=(int32_t)R(0)==107;
  if(c->t) goto L8c0ae540;
  {  goto L8c0ae59c; }
L8c0ae4b6:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0ae4c0u; R(5)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)); if(k) goto L8c0ae4d4; }
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c0ae4d6; }
L8c0ae4d4:;
  R(4)=LD32(R(15)+4);
L8c0ae4d6:;
  R(2)+=R(4);
  R(1)=R(2);
  ST32(R(14),R(2));
  R(3)=LD32(R(14)+4);
  c->t=(int32_t)R(1)>(int32_t)R(3);
  if(!c->t) goto L8c0ae53c;
  R(0)=LD32(R(14)+4);
  { ST32(R(14),R(0)); goto L8c0ae53c; }
L8c0ae4e8:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c0ae4f2u; R(5)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c0ae506; }
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c0ae508; }
L8c0ae506:;
  R(4)=LD32(R(15)+4);
L8c0ae508:;
  R(2)+=R(4);
  { ST32(R(14)+4,R(2)); goto L8c0ae590; }
L8c0ae50e:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c0ae518u; R(5)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)); if(k) goto L8c0ae52c; }
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c0ae52e; }
L8c0ae52c:;
  R(4)=LD32(R(15)+4);
L8c0ae52e:;
  R(2)-=R(4);
  R(3)=R(2);
  c->t=(int32_t)R(3)>=0;
  ST32(R(14),R(2));
  if(c->t) goto L8c0ae53c;
  R(1)=0x0u;
  ST32(R(14),R(1));
L8c0ae53c:;
  { R(4)=LD32(R(14)); goto L8c0ae592; }
L8c0ae540:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c0ae54au; R(5)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c0ae580; }
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c0ae582; }
L8c0ae580:;
  R(4)=LD32(R(15)+4);
L8c0ae582:;
  R(2)-=R(4);
  R(3)=R(2);
  c->t=(int32_t)R(3)>=0;
  ST32(R(14)+4,R(2));
  if(c->t) goto L8c0ae590;
  R(1)=0x0u;
  ST32(R(14)+4,R(1));
L8c0ae590:;
  R(4)=LD32(R(14)+4);
L8c0ae592:;
  R(3)=LD32(R(15));
  R(2)=0x6u;
  ST32(R(3),R(4));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
L8c0ae59c:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ae580(SH4Ctx *c) {
  R(4)=LD32(R(15)+4);
  R(2)-=R(4);
  R(3)=R(2);
  c->t=(int32_t)R(3)>=0;
  ST32(R(14)+4,R(2));
  if(c->t) goto L8c0ae590;
  R(1)=0x0u;
  ST32(R(14)+4,R(1));
L8c0ae590:;
  R(4)=LD32(R(14)+4);
  R(3)=LD32(R(15));
  R(2)=0x6u;
  ST32(R(3),R(4));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ae5a8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(13)=R(4);
  R(0)=LD32(R(13)+16);
  R(12)=0x8c0869f0u;
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c0ae5c8; }
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0ae5de;
  {  goto L8c0ae636; }
L8c0ae5c8:;
  R(3)=0x8c08585eu;
  R(6)=0x0u;
  R(5)=R(6);
  { c->pr=0x8c0ae5d2u; R(4)=R(13); f_8c08585e(c); }
  R(5)=R(14);
  R(6)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0ae5dau; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c0ae632; }
L8c0ae5de:;
  R(3)=R(15);
  R(3)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(2)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x4u;
  { c->pr=0x8c0ae5f2u; R(4)=R(13); f_8c085aae(c); }
  R(15)+=0x4u;
  R(5)=R(15);
  R(6)=(int32_t)(int16_t)LD16(R(15));
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c0ae5feu; R(4)=R(13); sh4_call(c,tg); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(15);
  R(5)+=0x8u;
  R(6)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0ae60au; R(4)=R(13); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)+=0x14u;
  R(6)+=0x8u;
  { c->pr=0x8c0ae618u; R(4)=R(14); f_8c05e5f4(c); }
  R(0)=0x8c0ae670u;
  fp_ld(c,3,R(14));
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
L8c0ae632:;
  { R(4)=0x1u; goto L8c0ae638; }
L8c0ae636:;
  R(4)=0x0u;
L8c0ae638:;
  R(0)=R(4);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ae680(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(0)=R(5);
  ST16(R(15)+4,R(0));
  R(0)=R(7);
  ST8(R(15)+8,R(0));
  R(0)=0x94u;
  R(3)=0x0u;
  R(12)=R(4);
  R(8)=R(6);
  R(14)=LD32(R(15)+R(0));
  R(5)=R(12);
  ST8(R(15),R(3));
  R(3)=0x8c05a1aeu;
  { c->pr=0x8c0ae6aeu; R(4)=R(8); f_8c05a1ae(c); }
  R(9)=0x8c014eaau;
  R(10)=R(0);
  c->t=(int32_t)R(10)>0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) { f_8c0ae6bc(c); return; } }
  {  { f_8c0ae82a(c); return; } }
}
void f_8c0ae6bc(SH4Ctx *c) {
L8c0ae6bc:;
  R(3)=0x8c058ce8u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0ae6c6u; R(4)=R(8); f_8c058ce8(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0ae6d0;
  {  goto L8c0ae820; }
L8c0ae6d0:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c058952u;
  R(5)=R(0);
  { c->pr=0x8c0ae6dau; R(4)=R(11); f_8c058952(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ae6e2;
  {  goto L8c0ae820; }
L8c0ae6e2:;
  R(3)=0x8c0588a0u;
  R(5)=R(8);
  R(6)=R(13);
  { c->pr=0x8c0ae6ecu; R(4)=R(12); f_8c0588a0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ae6f4;
  {  goto L8c0ae820; }
L8c0ae6f4:;
  R(5)=R(14);
  { c->pr=0x8c0ae6fau; R(4)=R(11); f_8c0ae5a8(c); }
  ST8(R(15),R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ae706;
  {  goto L8c0ae820; }
L8c0ae706:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ae718;
  R(5)=LD32(R(12)+36);
  R(6)=R(14);
  { uint32_t tg=R(9); c->pr=0x8c0ae714u; R(4)=R(14); sh4_call(c,tg); }
  {  { f_8c0ae82a(c); return; } }
L8c0ae718:;
  R(4)=LD32(R(12)+36);
  R(3)=0x3u;
  R(2)=LD32(R(4));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c0ae760;
  { R(2)=0x1u; goto L8c0ae762; }
L8c0ae760:;
  R(2)=0x0u;
L8c0ae762:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) { f_8c0ae82a(c); return; }
  R(6)=R(15);
  R(3)=0x8c0160c0u;
  R(7)=R(15);
  R(5)=R(15);
  R(7)+=0x68u;
  R(6)+=0x5cu;
  { c->pr=0x8c0ae778u; R(5)+=0x50u; f_8c0160c0(c); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(14);
  { c->pr=0x8c0ae782u; R(4)+=0x44u; f_8c05e6ea(c); }
  R(0)=0x48u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x48u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(14)); { f_8c0ae82a(c); return; } }
L8c0ae820:;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(10);
  if(c->t) { f_8c0ae82a(c); return; }
  {  goto L8c0ae6bc; }
}
void f_8c0ae760(SH4Ctx *c) {
  R(2)=0x0u;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) { f_8c0ae82a(c); return; }
  R(6)=R(15);
  R(3)=0x8c0160c0u;
  R(7)=R(15);
  R(5)=R(15);
  R(7)+=0x68u;
  R(6)+=0x5cu;
  { c->pr=0x8c0ae778u; R(5)+=0x50u; f_8c0160c0(c); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(14);
  { c->pr=0x8c0ae782u; R(4)+=0x44u; f_8c05e6ea(c); }
  R(0)=0x48u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x48u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(14)); { f_8c0ae82a(c); return; } }
}
void f_8c0ae820(SH4Ctx *c) {
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(10);
  if(c->t) { f_8c0ae82a(c); return; }
  {  { f_8c0ae6bc(c); return; } }
}
void f_8c0ae82a(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae834;
  {  { f_8c0ae922(c); return; } }
L8c0ae834:;
  R(4)=LD32(R(12)+4);
  R(0)=0xa8u;
  R(4)=LD32(R(4));
  R(5)=LD32(R(4)+R(0));
  R(10)=R(5);
  c->t=(R(10)&R(10))==0;
  if(!c->t) { f_8c0ae846(c); return; }
  {  { f_8c0ae922(c); return; } }
}
void f_8c0ae846(SH4Ctx *c) {
L8c0ae846:;
  R(11)=LD32(R(10));
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0ae850;
  {  goto L8c0ae91c; }
L8c0ae850:;
  R(0)=LD32(R(11));
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c0ae85a;
  {  goto L8c0ae91c; }
L8c0ae85a:;
  R(0)=LD32(R(11)+48);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c0ae91c;
  R(2)=0x8c09341au;
  { c->pr=0x8c0ae866u; R(4)=LD32(R(11)+4); f_8c09341a(c); }
  R(4)=R(0);
  R(0)=R(8)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ae87e;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0ae888;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0ae8c0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ae8ca;
  {  goto L8c0ae8d4; }
L8c0ae87e:;
  R(3)=0x8c0932dcu;
  { c->pr=0x8c0ae884u;  f_8c0932dc(c); }
  {  goto L8c0ae8d0; }
L8c0ae888:;
  R(3)=0x8c0932d8u;
  { c->pr=0x8c0ae88eu;  f_8c0932d8(c); }
  {  goto L8c0ae8d0; }
L8c0ae8c0:;
  R(3)=0x8c093320u;
  { c->pr=0x8c0ae8c6u;  f_8c093320(c); }
  {  goto L8c0ae8d0; }
L8c0ae8ca:;
  R(3)=0x8c093324u;
  { c->pr=0x8c0ae8d0u;  f_8c093324(c); }
L8c0ae8d0:;
  { R(13)=R(0); goto L8c0ae8d6; }
L8c0ae8d4:;
  R(13)=0x0u;
L8c0ae8d6:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ae91c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c058952u;
  R(5)=R(0);
  { c->pr=0x8c0ae8e4u; R(4)=R(13); f_8c058952(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ae91c;
  R(5)=R(14);
  { c->pr=0x8c0ae8eeu; R(4)=R(13); f_8c0ae5a8(c); }
  ST8(R(15),R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ae91c;
  R(5)=LD32(R(11)+36);
  R(6)=R(14);
  { uint32_t tg=R(9); c->pr=0x8c0ae8feu; R(4)=R(14); sh4_call(c,tg); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) { f_8c0ae922(c); return; }
  R(3)=0x8c0153d8u;
  R(4)=R(15);
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c0ae90eu; R(4)+=0xcu; f_8c0153d8(c); }
  R(5)=R(15);
  R(5)+=0xcu;
  R(6)=R(14);
  { uint32_t tg=R(9); c->pr=0x8c0ae918u; R(4)=R(14); sh4_call(c,tg); }
  {  { f_8c0ae922(c); return; } }
L8c0ae91c:;
  R(10)=LD32(R(10)+8);
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c0ae846;
  { f_8c0ae922(c); return; }
}
void f_8c0ae8c0(SH4Ctx *c) {
  R(3)=0x8c093320u;
  { c->pr=0x8c0ae8c6u;  f_8c093320(c); }
  {  goto L8c0ae8d0; }
L8c0ae8d0:;
  { R(13)=R(0); goto L8c0ae8d6; }
L8c0ae8d6:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ae91c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c058952u;
  R(5)=R(0);
  { c->pr=0x8c0ae8e4u; R(4)=R(13); f_8c058952(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ae91c;
  R(5)=R(14);
  { c->pr=0x8c0ae8eeu; R(4)=R(13); f_8c0ae5a8(c); }
  ST8(R(15),R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ae91c;
  R(5)=LD32(R(11)+36);
  R(6)=R(14);
  { uint32_t tg=R(9); c->pr=0x8c0ae8feu; R(4)=R(14); sh4_call(c,tg); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) { f_8c0ae922(c); return; }
  R(3)=0x8c0153d8u;
  R(4)=R(15);
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c0ae90eu; R(4)+=0xcu; f_8c0153d8(c); }
  R(5)=R(15);
  R(5)+=0xcu;
  R(6)=R(14);
  { uint32_t tg=R(9); c->pr=0x8c0ae918u; R(4)=R(14); sh4_call(c,tg); }
  {  { f_8c0ae922(c); return; } }
L8c0ae91c:;
  R(10)=LD32(R(10)+8);
  c->t=(R(10)&R(10))==0;
  if(!c->t) { f_8c0ae846(c); return; }
  { f_8c0ae922(c); return; }
}
void f_8c0ae922(SH4Ctx *c) {
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ae936(SH4Ctx *c) {
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
  R(15)+=0xffffffc8u;
  R(0)=0x68u;
  R(11)=R(4);
  R(12)=R(5);
  ST32(R(15)+28,R(7));
  R(13)=LD32(R(15)+R(0));
  R(0)=0x78u;
  R(8)=LD32(R(15)+R(0));
  R(0)=0x7cu;
  R(10)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x14u;
  fp_st(c,7,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,8,R(0)+R(15));
  R(0)=0x74u;
  R(4)=LD32(R(15)+R(0));
  R(9)=R(6);
  fp_mov(c,12,4);
  R(5)=LD32(R(4)+4);
  fp_mov(c,14,6);
  R(5)=LD32(R(5));
  fp_mov(c,13,5);
  { ST32(R(15)+16,R(5)); { f_8c0aecb0(c); return; } }
}
void f_8c0ae97e(SH4Ctx *c) {
  R(4)=LD32(R(15)+16);
  R(3)=LD32(R(4));
  R(2)=R(3);
  ST32(R(15)+4,R(3));
  R(1)=LD32(R(15)+28);
  c->t=R(2)==R(1);
  if(!c->t) goto L8c0ae990;
  {  goto L8c0aecaa; }
L8c0ae990:;
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ae9a6;
  {  goto L8c0aecaa; }
L8c0ae9a6:;
  R(0)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0ae9e0;
  { R(2)=0x1u; goto L8c0ae9e2; }
L8c0ae9e0:;
  R(2)=0x0u;
L8c0ae9e2:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ae9ec;
  {  goto L8c0aecaa; }
L8c0ae9ec:;
  R(1)=LD32(R(4)+32);
  R(1)&=R(8);
  c->t=R(1)==R(8);
  if(c->t) goto L8c0ae9f8;
  {  goto L8c0aecaa; }
L8c0ae9f8:;
  R(4)=LD32(R(15)+4);
  R(5)=R(15);
  R(14)=0x8c0163ceu;
  R(5)+=0x2cu;
  { c->pr=0x8c0aea04u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(3)=R(10)&0xFFFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0aea1c;
  R(2)=R(15);
  R(2)+=0x2cu;
  R(6)=0x2u;
  R(5)=R(10);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  { c->pr=0x8c0aea1au; R(4)=LD32(R(15)+8); f_8c0ae680(c); }
  R(15)+=0x4u;
L8c0aea1c:;
  R(0)=0x80u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==114;
  if(!c->t) goto L8c0aeaa0;
  R(0)=0x2cu;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,1,4,3);
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,1,5,0);
  R(0)=0x34u;
  fp_ld(c,6,R(0)+R(15));
  fp_arith(c,1,6,2);
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(12));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c0aea5a;
  {  goto L8c0aecaa; }
L8c0aea5a:;
  fp_st(c,4,R(12));
  R(11)=LD32(R(15)+4);
  R(4)=R(11);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  { c->t=(R(4)&R(4))==0; goto L8c0aecaa; }
L8c0aeaa0:;
  R(0)=0x80u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==116;
  if(!c->t) goto L8c0aeb80;
  R(6)=R(15);
  R(14)=0x8c05e612u;
  R(4)=R(15);
  R(5)=R(13);
  R(6)+=0x2cu;
  { c->pr=0x8c0aeab6u; R(4)+=0x2cu; f_8c05e612(c); }
  R(0)=0x2cu;
  R(14)=0x8c05e55cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x2cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x6cu;
  R(5)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c0aeb00u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x8c0aeb6cu;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c0aeb0e;
  {  goto L8c0aecaa; }
L8c0aeb0e:;
  R(0)=0x2cu;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,1,4,3);
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,1,5,0);
  R(0)=0x34u;
  fp_ld(c,6,R(0)+R(15));
  fp_arith(c,1,6,2);
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(12));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c0aeb44;
  {  goto L8c0aecaa; }
L8c0aeb44:;
  fp_st(c,4,R(12));
  R(11)=LD32(R(15)+4);
  R(4)=R(11);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  { c->t=(R(4)&R(4))==0; goto L8c0aecaa; }
L8c0aeb80:;
  R(0)=0x70u;
  R(14)=0x8c014eaau;
  R(5)=LD32(R(15)+R(0));
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x2cu;
  { c->pr=0x8c0aeb90u; R(4)+=0x20u; f_8c014eaa(c); }
  R(0)=0x20u;
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  c->fr[4]=0x00000000u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x8u;
  R(0)=0x28u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(3)+=0xcu;
  fp_st(c,3,R(3));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c0aebea;
  R(0)=0xcu;
  R(14)=0x8c09cf84u;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0aebe6u; fp_arith(c,3,4,15); f_8c09cf84(c); }
  { fp_mov(c,4,0); goto L8c0aebf0; }
L8c0aebea:;
  R(0)=0x8c0aece8u;
  fp_ld(c,5,R(0));
  fp_mov(c,4,5);
L8c0aebf0:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,2,2,15);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0aecaa;
  R(2)=0x8c0686fcu;
  { c->pr=0x8c0aec06u;  f_8c0686fc(c); }
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,0);
  if(!c->t) goto L8c0aecaa;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0aec3e;
  fp_ld(c,1,R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c0aec24;
  R(0)=0x8c0aecf0u;
  { fp_ld(c,5,R(0)); goto L8c0aec48; }
L8c0aec24:;
  fp_ld(c,3,R(15));
  fp_mov(c,5,2);
  fp_arith(c,3,5,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0aec34;
  { fp_mov(c,3,5); goto L8c0aec38; }
L8c0aec34:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c0aec38:;
  fp_mov(c,4,3);
  { fp_unary(c,0,4); goto L8c0aec98; }
L8c0aec3e:;
  fp_ld(c,1,R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c0aec4c;
  R(0)=0x8c0aecf4u;
  fp_ld(c,5,R(0));
L8c0aec48:;
  { fp_mov(c,4,5); goto L8c0aec98; }
L8c0aec4c:;
  fp_ld(c,3,R(15));
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,3,1);
  if(c->t) goto L8c0aec56;
  fp_unary(c,0,3);
L8c0aec56:;
  R(0)=0x20u;
  fp_st(c,3,R(15));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,4,12);
  fp_mov(c,2,0);
  fp_arith(c,2,2,0);
  fp_unary(c,2,3);
  fp_mov(c,5,3);
  fp_ld(c,3,R(15));
  fp_mov(c,0,3);
  fp_fmac(c,2,3);
  fp_arith(c,3,4,3);
  fp_mov(c,3,13);
  fp_unary(c,2,2);
  fp_arith(c,3,3,2);
  fp_mov(c,2,14);
  fp_arith(c,3,2,5);
  fp_arith(c,0,4,3);
  fp_mov(c,3,4);
  fp_mov(c,4,2);
  fp_arith(c,0,4,3);
L8c0aec98:;
  fp_ld(c,2,R(9));
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0aecaa;
  fp_st(c,4,R(9));
  R(11)=LD32(R(15)+4);
  R(4)=R(11);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
L8c0aecaa:;
  R(2)=LD32(R(15)+16);
  R(3)=LD32(R(2)+4);
  ST32(R(15)+16,R(3));
  { f_8c0aecb0(c); return; }
}
void f_8c0ae9e0(SH4Ctx *c) {
  R(2)=0x0u;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ae9ec;
  {  goto L8c0aecaa; }
L8c0ae9ec:;
  R(1)=LD32(R(4)+32);
  R(1)&=R(8);
  c->t=R(1)==R(8);
  if(c->t) goto L8c0ae9f8;
  {  goto L8c0aecaa; }
L8c0ae9f8:;
  R(4)=LD32(R(15)+4);
  R(5)=R(15);
  R(14)=0x8c0163ceu;
  R(5)+=0x2cu;
  { c->pr=0x8c0aea04u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(3)=R(10)&0xFFFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0aea1c;
  R(2)=R(15);
  R(2)+=0x2cu;
  R(6)=0x2u;
  R(5)=R(10);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  { c->pr=0x8c0aea1au; R(4)=LD32(R(15)+8); f_8c0ae680(c); }
  R(15)+=0x4u;
L8c0aea1c:;
  R(0)=0x80u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==114;
  if(!c->t) goto L8c0aeaa0;
  R(0)=0x2cu;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,1,4,3);
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,1,5,0);
  R(0)=0x34u;
  fp_ld(c,6,R(0)+R(15));
  fp_arith(c,1,6,2);
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(12));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c0aea5a;
  {  goto L8c0aecaa; }
L8c0aea5a:;
  fp_st(c,4,R(12));
  R(11)=LD32(R(15)+4);
  R(4)=R(11);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  { c->t=(R(4)&R(4))==0; goto L8c0aecaa; }
L8c0aeaa0:;
  R(0)=0x80u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==116;
  if(!c->t) goto L8c0aeb80;
  R(6)=R(15);
  R(14)=0x8c05e612u;
  R(4)=R(15);
  R(5)=R(13);
  R(6)+=0x2cu;
  { c->pr=0x8c0aeab6u; R(4)+=0x2cu; f_8c05e612(c); }
  R(0)=0x2cu;
  R(14)=0x8c05e55cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x2cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x6cu;
  R(5)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c0aeb00u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x8c0aeb6cu;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c0aeb0e;
  {  goto L8c0aecaa; }
L8c0aeb0e:;
  R(0)=0x2cu;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,1,4,3);
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,1,5,0);
  R(0)=0x34u;
  fp_ld(c,6,R(0)+R(15));
  fp_arith(c,1,6,2);
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(12));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c0aeb44;
  {  goto L8c0aecaa; }
L8c0aeb44:;
  fp_st(c,4,R(12));
  R(11)=LD32(R(15)+4);
  R(4)=R(11);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  { c->t=(R(4)&R(4))==0; goto L8c0aecaa; }
L8c0aeb80:;
  R(0)=0x70u;
  R(14)=0x8c014eaau;
  R(5)=LD32(R(15)+R(0));
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x2cu;
  { c->pr=0x8c0aeb90u; R(4)+=0x20u; f_8c014eaa(c); }
  R(0)=0x20u;
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  c->fr[4]=0x00000000u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x8u;
  R(0)=0x28u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(3)+=0xcu;
  fp_st(c,3,R(3));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c0aebea;
  R(0)=0xcu;
  R(14)=0x8c09cf84u;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0aebe6u; fp_arith(c,3,4,15); f_8c09cf84(c); }
  { fp_mov(c,4,0); goto L8c0aebf0; }
L8c0aebea:;
  R(0)=0x8c0aece8u;
  fp_ld(c,5,R(0));
  fp_mov(c,4,5);
L8c0aebf0:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,2,2,15);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0aecaa;
  R(2)=0x8c0686fcu;
  { c->pr=0x8c0aec06u;  f_8c0686fc(c); }
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,0);
  if(!c->t) goto L8c0aecaa;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0aec3e;
  fp_ld(c,1,R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c0aec24;
  R(0)=0x8c0aecf0u;
  { fp_ld(c,5,R(0)); goto L8c0aec48; }
L8c0aec24:;
  fp_ld(c,3,R(15));
  fp_mov(c,5,2);
  fp_arith(c,3,5,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0aec34;
  { fp_mov(c,3,5); goto L8c0aec38; }
L8c0aec34:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c0aec38:;
  fp_mov(c,4,3);
  { fp_unary(c,0,4); goto L8c0aec98; }
L8c0aec3e:;
  fp_ld(c,1,R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c0aec4c;
  R(0)=0x8c0aecf4u;
  fp_ld(c,5,R(0));
L8c0aec48:;
  { fp_mov(c,4,5); goto L8c0aec98; }
L8c0aec4c:;
  fp_ld(c,3,R(15));
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,3,1);
  if(c->t) goto L8c0aec56;
  fp_unary(c,0,3);
L8c0aec56:;
  R(0)=0x20u;
  fp_st(c,3,R(15));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,4,12);
  fp_mov(c,2,0);
  fp_arith(c,2,2,0);
  fp_unary(c,2,3);
  fp_mov(c,5,3);
  fp_ld(c,3,R(15));
  fp_mov(c,0,3);
  fp_fmac(c,2,3);
  fp_arith(c,3,4,3);
  fp_mov(c,3,13);
  fp_unary(c,2,2);
  fp_arith(c,3,3,2);
  fp_mov(c,2,14);
  fp_arith(c,3,2,5);
  fp_arith(c,0,4,3);
  fp_mov(c,3,4);
  fp_mov(c,4,2);
  fp_arith(c,0,4,3);
L8c0aec98:;
  fp_ld(c,2,R(9));
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0aecaa;
  fp_st(c,4,R(9));
  R(11)=LD32(R(15)+4);
  R(4)=R(11);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
L8c0aecaa:;
  R(2)=LD32(R(15)+16);
  R(3)=LD32(R(2)+4);
  ST32(R(15)+16,R(3));
  { f_8c0aecb0(c); return; }
}
void f_8c0aeaa0(SH4Ctx *c) {
  R(0)=0x80u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==116;
  if(!c->t) goto L8c0aeb80;
  R(6)=R(15);
  R(14)=0x8c05e612u;
  R(4)=R(15);
  R(5)=R(13);
  R(6)+=0x2cu;
  { c->pr=0x8c0aeab6u; R(4)+=0x2cu; f_8c05e612(c); }
  R(0)=0x2cu;
  R(14)=0x8c05e55cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x2cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x6cu;
  R(5)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c0aeb00u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x8c0aeb6cu;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c0aeb0e;
  {  goto L8c0aecaa; }
L8c0aeb0e:;
  R(0)=0x2cu;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,1,4,3);
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,1,5,0);
  R(0)=0x34u;
  fp_ld(c,6,R(0)+R(15));
  fp_arith(c,1,6,2);
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(12));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c0aeb44;
  {  goto L8c0aecaa; }
L8c0aeb44:;
  fp_st(c,4,R(12));
  R(11)=LD32(R(15)+4);
  R(4)=R(11);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  { c->t=(R(4)&R(4))==0; goto L8c0aecaa; }
L8c0aeb80:;
  R(0)=0x70u;
  R(14)=0x8c014eaau;
  R(5)=LD32(R(15)+R(0));
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x2cu;
  { c->pr=0x8c0aeb90u; R(4)+=0x20u; f_8c014eaa(c); }
  R(0)=0x20u;
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  c->fr[4]=0x00000000u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x8u;
  R(0)=0x28u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(3)+=0xcu;
  fp_st(c,3,R(3));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c0aebea;
  R(0)=0xcu;
  R(14)=0x8c09cf84u;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0aebe6u; fp_arith(c,3,4,15); f_8c09cf84(c); }
  { fp_mov(c,4,0); goto L8c0aebf0; }
L8c0aebea:;
  R(0)=0x8c0aece8u;
  fp_ld(c,5,R(0));
  fp_mov(c,4,5);
L8c0aebf0:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,2,2,15);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0aecaa;
  R(2)=0x8c0686fcu;
  { c->pr=0x8c0aec06u;  f_8c0686fc(c); }
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,0);
  if(!c->t) goto L8c0aecaa;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0aec3e;
  fp_ld(c,1,R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c0aec24;
  R(0)=0x8c0aecf0u;
  { fp_ld(c,5,R(0)); goto L8c0aec48; }
L8c0aec24:;
  fp_ld(c,3,R(15));
  fp_mov(c,5,2);
  fp_arith(c,3,5,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0aec34;
  { fp_mov(c,3,5); goto L8c0aec38; }
L8c0aec34:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c0aec38:;
  fp_mov(c,4,3);
  { fp_unary(c,0,4); goto L8c0aec98; }
L8c0aec3e:;
  fp_ld(c,1,R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c0aec4c;
  R(0)=0x8c0aecf4u;
  fp_ld(c,5,R(0));
L8c0aec48:;
  { fp_mov(c,4,5); goto L8c0aec98; }
L8c0aec4c:;
  fp_ld(c,3,R(15));
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,3,1);
  if(c->t) goto L8c0aec56;
  fp_unary(c,0,3);
L8c0aec56:;
  R(0)=0x20u;
  fp_st(c,3,R(15));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,4,12);
  fp_mov(c,2,0);
  fp_arith(c,2,2,0);
  fp_unary(c,2,3);
  fp_mov(c,5,3);
  fp_ld(c,3,R(15));
  fp_mov(c,0,3);
  fp_fmac(c,2,3);
  fp_arith(c,3,4,3);
  fp_mov(c,3,13);
  fp_unary(c,2,2);
  fp_arith(c,3,3,2);
  fp_mov(c,2,14);
  fp_arith(c,3,2,5);
  fp_arith(c,0,4,3);
  fp_mov(c,3,4);
  fp_mov(c,4,2);
  fp_arith(c,0,4,3);
L8c0aec98:;
  fp_ld(c,2,R(9));
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0aecaa;
  fp_st(c,4,R(9));
  R(11)=LD32(R(15)+4);
  R(4)=R(11);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
L8c0aecaa:;
  R(2)=LD32(R(15)+16);
  R(3)=LD32(R(2)+4);
  ST32(R(15)+16,R(3));
  { f_8c0aecb0(c); return; }
}
void f_8c0aeb80(SH4Ctx *c) {
  R(0)=0x70u;
  R(14)=0x8c014eaau;
  R(5)=LD32(R(15)+R(0));
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x2cu;
  { c->pr=0x8c0aeb90u; R(4)+=0x20u; f_8c014eaa(c); }
  R(0)=0x20u;
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  c->fr[4]=0x00000000u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x8u;
  R(0)=0x28u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(3)+=0xcu;
  fp_st(c,3,R(3));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c0aebea;
  R(0)=0xcu;
  R(14)=0x8c09cf84u;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0aebe6u; fp_arith(c,3,4,15); f_8c09cf84(c); }
  { fp_mov(c,4,0); goto L8c0aebf0; }
L8c0aebea:;
  R(0)=0x8c0aece8u;
  fp_ld(c,5,R(0));
  fp_mov(c,4,5);
L8c0aebf0:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,2,2,15);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0aecaa;
  R(2)=0x8c0686fcu;
  { c->pr=0x8c0aec06u;  f_8c0686fc(c); }
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,0);
  if(!c->t) goto L8c0aecaa;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0aec3e;
  fp_ld(c,1,R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c0aec24;
  R(0)=0x8c0aecf0u;
  { fp_ld(c,5,R(0)); goto L8c0aec48; }
L8c0aec24:;
  fp_ld(c,3,R(15));
  fp_mov(c,5,2);
  fp_arith(c,3,5,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0aec34;
  { fp_mov(c,3,5); goto L8c0aec38; }
L8c0aec34:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c0aec38:;
  fp_mov(c,4,3);
  { fp_unary(c,0,4); goto L8c0aec98; }
L8c0aec3e:;
  fp_ld(c,1,R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c0aec4c;
  R(0)=0x8c0aecf4u;
  fp_ld(c,5,R(0));
L8c0aec48:;
  { fp_mov(c,4,5); goto L8c0aec98; }
L8c0aec4c:;
  fp_ld(c,3,R(15));
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,3,1);
  if(c->t) goto L8c0aec56;
  fp_unary(c,0,3);
L8c0aec56:;
  R(0)=0x20u;
  fp_st(c,3,R(15));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,4,12);
  fp_mov(c,2,0);
  fp_arith(c,2,2,0);
  fp_unary(c,2,3);
  fp_mov(c,5,3);
  fp_ld(c,3,R(15));
  fp_mov(c,0,3);
  fp_fmac(c,2,3);
  fp_arith(c,3,4,3);
  fp_mov(c,3,13);
  fp_unary(c,2,2);
  fp_arith(c,3,3,2);
  fp_mov(c,2,14);
  fp_arith(c,3,2,5);
  fp_arith(c,0,4,3);
  fp_mov(c,3,4);
  fp_mov(c,4,2);
  fp_arith(c,0,4,3);
L8c0aec98:;
  fp_ld(c,2,R(9));
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0aecaa;
  fp_st(c,4,R(9));
  R(11)=LD32(R(15)+4);
  R(4)=R(11);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
L8c0aecaa:;
  R(2)=LD32(R(15)+16);
  R(3)=LD32(R(2)+4);
  ST32(R(15)+16,R(3));
  { f_8c0aecb0(c); return; }
}
void f_8c0aecb0(SH4Ctx *c) {
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0aecba;
  {  { f_8c0ae97e(c); return; } }
L8c0aecba:;
  R(0)=R(11);
  R(15)+=0x38u;
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
void f_8c0aed00(SH4Ctx *c) {
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
  R(0)=0xfffffeb4u;
  R(15)+=R(0);
  R(0)=0x8c0aedc8u;
  c->fr[4]=0x00000000u;
  ST32(R(15)+32,R(6));
  R(13)=R(5);
  R(6)=0x8c0c76fcu;
  R(14)=R(4);
  R(10)=R(13);
  R(4)=0x0u;
  R(9)=R(4);
  fp_mov(c,12,4);
  R(10)+=0xfffffff4u;
  ST32(R(15)+44,R(4));
  fp_ld(c,3,R(0));
  R(0)=0x10u;
  fp_mov(c,13,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8c0aedccu;
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c0aedd0u;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c0aedd4u;
  fp_ld(c,3,R(0));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(10)=LD32(R(10)); if(k) goto L8c0aed66; }
  ST32(R(15),R(5));
  { ST32(R(6),R(4)); goto L8c0aed68; }
L8c0aed66:;
  ST32(R(15),R(14));
L8c0aed68:;
  R(6)=0x13cu;
  R(5)=R(13);
  R(3)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0aed74u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0aed88;
  R(0)=0x13cu;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(8)=c->fpul; goto L8c0aed8c; }
L8c0aed88:;
  R(0)=0x13cu;
  R(8)=LD32(R(15)+R(0));
L8c0aed8c:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==119;
  if(c->t) goto L8c0aede0;
  c->t=(int32_t)R(0)==118;
  if(c->t) goto L8c0aede0;
  c->t=(int32_t)R(0)==114;
  if(!c->t) goto L8c0aed9e;
  {  goto L8c0aef56; }
L8c0aed9e:;
  c->t=(int32_t)R(0)==116;
  if(!c->t) goto L8c0aeda6;
  {  goto L8c0aef56; }
L8c0aeda6:;
  {  goto L8c0af328; }
L8c0aede0:;
  R(13)=LD32(R(15)+4);
  R(6)=0x13cu;
  R(5)=LD32(R(15)+4);
  R(13)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c0aedeeu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(13)+4); if(k) goto L8c0aee00; }
  R(0)=0x13cu;
  { fp_ld(c,13,R(0)+R(15)); goto L8c0aee0a; }
L8c0aee00:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,13,3);
L8c0aee0a:;
  R(6)=0x13cu;
  R(5)=R(13);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0aee14u; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(13)+4); if(k) goto L8c0aee26; }
  R(0)=0x13cu;
  { fp_ld(c,12,R(0)+R(15)); goto L8c0aee30; }
L8c0aee26:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,12,3);
L8c0aee30:;
  R(6)=0x13cu;
  R(5)=R(13);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0aee3au; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0aee80;
  R(0)=0x13cu;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0aee88; }
L8c0aee80:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
L8c0aee88:;
  R(6)=0x13cu;
  R(0)=0x18u;
  R(5)=R(13);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0aee98u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x13cu;
  R(2)=0xbcu;
  R(3)+=R(15);
  ST32(R(15)+4,R(0));
  R(1)=LD32(R(3));
  R(2)+=R(15);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=R(10);
  R(1)=LD32(R(3)+8);
  c->t=(int32_t)R(0)==119;
  ST32(R(2)+8,R(1));
  { uint32_t k=!c->t; R(9)=0x1u; if(k) goto L8c0aef56; }
  R(13)=LD32(R(15)+4);
  R(6)=0x13cu;
  R(5)=LD32(R(15)+4);
  R(13)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c0aeec4u; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0aeed4;
  R(0)=0x13cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0aeede; }
L8c0aeed4:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0aeede:;
  R(0)=0x8c0aef28u;
  R(3)=0x8c068530u;
  fp_ld(c,14,R(0));
  fp_mov(c,4,15);
  { c->pr=0x8c0aeeeau; fp_arith(c,2,4,14); f_8c068530(c); }
  R(6)=0x13cu;
  R(0)=0x1cu;
  R(5)=R(13);
  fp_st(c,0,R(0)+R(15));
  R(3)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0aeefau; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0aef40;
  R(0)=0x13cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0aef4a; }
L8c0aef40:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0aef4a:;
  R(2)=0x8c0686fcu;
  fp_mov(c,4,15);
  { c->pr=0x8c0aef52u; fp_arith(c,2,4,14); f_8c0686fc(c); }
  R(0)=0x14u;
  fp_st(c,0,R(0)+R(15));
L8c0aef56:;
  R(4)=LD32(R(15));
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0aef60u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(13)=R(0);
  R(0)=R(10);
  c->t=(int32_t)R(0)==114;
  if(!c->t) goto L8c0aef78;
  R(5)=0x130u;
  R(4)=LD32(R(15));
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c0aef74u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  {  goto L8c0af25c; }
L8c0aef78:;
  c->t=(int32_t)R(0)==116;
  if(!c->t) goto L8c0aefc0;
  R(14)=LD32(R(15));
  R(5)=0x130u;
  R(3)=0x8c0163ceu;
  R(14)=LD32(R(14)+36);
  R(5)+=R(15);
  { c->pr=0x8c0aef8au; R(4)=R(14); f_8c0163ce(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015ea8u;
  R(5)+=0x24u;
  R(7)+=0x28u;
  R(6)+=0x8u;
  { c->pr=0x8c0aef9cu; R(4)=R(14); f_8c015ea8(c); }
  {  goto L8c0af25c; }
L8c0aefc0:;
  R(5)=LD32(R(15));
  R(6)=0x68u;
  R(3)=0x8c0685b4u;
  R(4)=R(15);
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c0aefceu; R(4)+=0x30u; f_8c0685b4(c); }
  R(0)=0xbcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  {  goto L8c0af250; }
L8c0aefee:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(2)=0x8c015e64u;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af002u; R(4)+=0x30u; f_8c015e64(c); }
  R(0)=0xbcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,0,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  R(0)=0xa4u;
  R(5)=0x98u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  R(5)+=R(15);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,2,3);
  R(14)=0x8c05e55cu;
  R(4)=0xa4u;
  c->fr[15]=0x3F800000u;
  fp_unary(c,0,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0af06cu; R(4)+=R(15); f_8c05e55c(c); }
  fp_arith(c,0,0,15);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c0af0c0;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af07eu; R(4)+=R(15); sh4_call(c,tg); }
  fp_mov(c,3,0);
  { fp_arith(c,0,3,15); goto L8c0af0d2; }
L8c0af0c0:;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af0cau; R(4)+=R(15); sh4_call(c,tg); }
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,3,2);
L8c0af0d2:;
  R(0)=0x8c0af194u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0af1a0;
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,1);
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  { fp_st(c,1,R(0)+R(15)); goto L8c0af23c; }
L8c0af1a0:;
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
L8c0af23c:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af250u; R(4)+=0x30u; f_8c015c9c(c); }
L8c0af250:;
  R(4)=0xc8u;
  R(5)=R(15);
  R(2)=0x8c0151c8u;
  R(5)+=0x30u;
  { c->pr=0x8c0af25cu; R(4)+=R(15); f_8c0151c8(c); }
L8c0af25c:;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+28);
  R(3)=0x148u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x48u;
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af294u; R(4)=LD32(R(15)+R(0)); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=LD32(R(13)+4);
  R(14)=R(0);
  R(11)=LD32(R(4)+36);
  { R(4)=LD32(R(4)+32); goto L8c0af306; }
L8c0af2c0:;
  R(4)=R(13);
  R(12)=LD32(R(4)+4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+28);
  R(2)=0x148u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af2fau; R(4)=R(14); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=R(13);
  R(4)+=0x8u;
  R(5)=R(13);
  R(14)=R(0);
  R(11)+=0xffffffffu;
L8c0af306:;
  c->t=(int32_t)R(11)>0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0af2c0; }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+32); if(k) goto L8c0af318; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0af31c;
L8c0af318:;
  { R(3)=0x0u; goto L8c0af31e; }
L8c0af31c:;
  R(3)=LD32(R(14)+4);
L8c0af31e:;
  ST32(R(2),R(3));
  R(3)=0xbu;
  R(2)=LD32(R(15)+32);
  { ST32(R(2)+12,R(3)); goto L8c0af330; }
L8c0af328:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0af330u; R(4)=0x27u; f_8c074080(c); }
L8c0af330:;
  R(1)=0x14cu;
  R(0)=LD32(R(15)+4);
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
void f_8c0aede0(SH4Ctx *c) {
  R(13)=LD32(R(15)+4);
  R(6)=0x13cu;
  R(5)=LD32(R(15)+4);
  R(13)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c0aedeeu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(13)+4); if(k) goto L8c0aee00; }
  R(0)=0x13cu;
  { fp_ld(c,13,R(0)+R(15)); goto L8c0aee0a; }
L8c0aee00:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,13,3);
L8c0aee0a:;
  R(6)=0x13cu;
  R(5)=R(13);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0aee14u; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(13)+4); if(k) goto L8c0aee26; }
  R(0)=0x13cu;
  { fp_ld(c,12,R(0)+R(15)); goto L8c0aee30; }
L8c0aee26:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,12,3);
L8c0aee30:;
  R(6)=0x13cu;
  R(5)=R(13);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0aee3au; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0aee80;
  R(0)=0x13cu;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0aee88; }
L8c0aee80:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
L8c0aee88:;
  R(6)=0x13cu;
  R(0)=0x18u;
  R(5)=R(13);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0aee98u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x13cu;
  R(2)=0xbcu;
  R(3)+=R(15);
  ST32(R(15)+4,R(0));
  R(1)=LD32(R(3));
  R(2)+=R(15);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=R(10);
  R(1)=LD32(R(3)+8);
  c->t=(int32_t)R(0)==119;
  ST32(R(2)+8,R(1));
  { uint32_t k=!c->t; R(9)=0x1u; if(k) goto L8c0aef56; }
  R(13)=LD32(R(15)+4);
  R(6)=0x13cu;
  R(5)=LD32(R(15)+4);
  R(13)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c0aeec4u; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0aeed4;
  R(0)=0x13cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0aeede; }
L8c0aeed4:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0aeede:;
  R(0)=0x8c0aef28u;
  R(3)=0x8c068530u;
  fp_ld(c,14,R(0));
  fp_mov(c,4,15);
  { c->pr=0x8c0aeeeau; fp_arith(c,2,4,14); f_8c068530(c); }
  R(6)=0x13cu;
  R(0)=0x1cu;
  R(5)=R(13);
  fp_st(c,0,R(0)+R(15));
  R(3)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0aeefau; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0aef40;
  R(0)=0x13cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0aef4a; }
L8c0aef40:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0aef4a:;
  R(2)=0x8c0686fcu;
  fp_mov(c,4,15);
  { c->pr=0x8c0aef52u; fp_arith(c,2,4,14); f_8c0686fc(c); }
  R(0)=0x14u;
  fp_st(c,0,R(0)+R(15));
L8c0aef56:;
  R(4)=LD32(R(15));
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0aef60u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(13)=R(0);
  R(0)=R(10);
  c->t=(int32_t)R(0)==114;
  if(!c->t) goto L8c0aef78;
  R(5)=0x130u;
  R(4)=LD32(R(15));
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c0aef74u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  {  goto L8c0af25c; }
L8c0aef78:;
  c->t=(int32_t)R(0)==116;
  if(!c->t) goto L8c0aefc0;
  R(14)=LD32(R(15));
  R(5)=0x130u;
  R(3)=0x8c0163ceu;
  R(14)=LD32(R(14)+36);
  R(5)+=R(15);
  { c->pr=0x8c0aef8au; R(4)=R(14); f_8c0163ce(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015ea8u;
  R(5)+=0x24u;
  R(7)+=0x28u;
  R(6)+=0x8u;
  { c->pr=0x8c0aef9cu; R(4)=R(14); f_8c015ea8(c); }
  {  goto L8c0af25c; }
L8c0aefc0:;
  R(5)=LD32(R(15));
  R(6)=0x68u;
  R(3)=0x8c0685b4u;
  R(4)=R(15);
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c0aefceu; R(4)+=0x30u; f_8c0685b4(c); }
  R(0)=0xbcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  {  goto L8c0af250; }
L8c0aefee:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(2)=0x8c015e64u;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af002u; R(4)+=0x30u; f_8c015e64(c); }
  R(0)=0xbcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,0,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  R(0)=0xa4u;
  R(5)=0x98u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  R(5)+=R(15);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,2,3);
  R(14)=0x8c05e55cu;
  R(4)=0xa4u;
  c->fr[15]=0x3F800000u;
  fp_unary(c,0,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0af06cu; R(4)+=R(15); f_8c05e55c(c); }
  fp_arith(c,0,0,15);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c0af0c0;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af07eu; R(4)+=R(15); sh4_call(c,tg); }
  fp_mov(c,3,0);
  { fp_arith(c,0,3,15); goto L8c0af0d2; }
L8c0af0c0:;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af0cau; R(4)+=R(15); sh4_call(c,tg); }
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,3,2);
L8c0af0d2:;
  R(0)=0x8c0af194u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0af1a0;
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,1);
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  { fp_st(c,1,R(0)+R(15)); goto L8c0af23c; }
L8c0af1a0:;
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
L8c0af23c:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af250u; R(4)+=0x30u; f_8c015c9c(c); }
L8c0af250:;
  R(4)=0xc8u;
  R(5)=R(15);
  R(2)=0x8c0151c8u;
  R(5)+=0x30u;
  { c->pr=0x8c0af25cu; R(4)+=R(15); f_8c0151c8(c); }
L8c0af25c:;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+28);
  R(3)=0x148u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x48u;
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af294u; R(4)=LD32(R(15)+R(0)); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=LD32(R(13)+4);
  R(14)=R(0);
  R(11)=LD32(R(4)+36);
  { R(4)=LD32(R(4)+32); goto L8c0af306; }
L8c0af2c0:;
  R(4)=R(13);
  R(12)=LD32(R(4)+4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+28);
  R(2)=0x148u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af2fau; R(4)=R(14); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=R(13);
  R(4)+=0x8u;
  R(5)=R(13);
  R(14)=R(0);
  R(11)+=0xffffffffu;
L8c0af306:;
  c->t=(int32_t)R(11)>0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0af2c0; }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+32); if(k) goto L8c0af318; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0af31c;
L8c0af318:;
  { R(3)=0x0u; goto L8c0af31e; }
L8c0af31c:;
  R(3)=LD32(R(14)+4);
L8c0af31e:;
  ST32(R(2),R(3));
  R(3)=0xbu;
  R(2)=LD32(R(15)+32);
  { ST32(R(2)+12,R(3)); goto L8c0af330; }
L8c0af330:;
  R(1)=0x14cu;
  R(0)=LD32(R(15)+4);
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
void f_8c0aee80(SH4Ctx *c) {
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  R(6)=0x13cu;
  R(0)=0x18u;
  R(5)=R(13);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0aee98u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x13cu;
  R(2)=0xbcu;
  R(3)+=R(15);
  ST32(R(15)+4,R(0));
  R(1)=LD32(R(3));
  R(2)+=R(15);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=R(10);
  R(1)=LD32(R(3)+8);
  c->t=(int32_t)R(0)==119;
  ST32(R(2)+8,R(1));
  { uint32_t k=!c->t; R(9)=0x1u; if(k) goto L8c0aef56; }
  R(13)=LD32(R(15)+4);
  R(6)=0x13cu;
  R(5)=LD32(R(15)+4);
  R(13)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c0aeec4u; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0aeed4;
  R(0)=0x13cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0aeede; }
L8c0aeed4:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0aeede:;
  R(0)=0x8c0aef28u;
  R(3)=0x8c068530u;
  fp_ld(c,14,R(0));
  fp_mov(c,4,15);
  { c->pr=0x8c0aeeeau; fp_arith(c,2,4,14); f_8c068530(c); }
  R(6)=0x13cu;
  R(0)=0x1cu;
  R(5)=R(13);
  fp_st(c,0,R(0)+R(15));
  R(3)=LD32(R(13)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0aeefau; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x148u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0aef40;
  R(0)=0x13cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c0aef4a; }
L8c0aef40:;
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c0aef4a:;
  R(2)=0x8c0686fcu;
  fp_mov(c,4,15);
  { c->pr=0x8c0aef52u; fp_arith(c,2,4,14); f_8c0686fc(c); }
  R(0)=0x14u;
  fp_st(c,0,R(0)+R(15));
L8c0aef56:;
  R(4)=LD32(R(15));
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0aef60u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(13)=R(0);
  R(0)=R(10);
  c->t=(int32_t)R(0)==114;
  if(!c->t) goto L8c0aef78;
  R(5)=0x130u;
  R(4)=LD32(R(15));
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c0aef74u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  {  goto L8c0af25c; }
L8c0aef78:;
  c->t=(int32_t)R(0)==116;
  if(!c->t) goto L8c0aefc0;
  R(14)=LD32(R(15));
  R(5)=0x130u;
  R(3)=0x8c0163ceu;
  R(14)=LD32(R(14)+36);
  R(5)+=R(15);
  { c->pr=0x8c0aef8au; R(4)=R(14); f_8c0163ce(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015ea8u;
  R(5)+=0x24u;
  R(7)+=0x28u;
  R(6)+=0x8u;
  { c->pr=0x8c0aef9cu; R(4)=R(14); f_8c015ea8(c); }
  {  goto L8c0af25c; }
L8c0aefc0:;
  R(5)=LD32(R(15));
  R(6)=0x68u;
  R(3)=0x8c0685b4u;
  R(4)=R(15);
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c0aefceu; R(4)+=0x30u; f_8c0685b4(c); }
  R(0)=0xbcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  {  goto L8c0af250; }
L8c0aefee:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(2)=0x8c015e64u;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af002u; R(4)+=0x30u; f_8c015e64(c); }
  R(0)=0xbcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,0,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  R(0)=0xa4u;
  R(5)=0x98u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  R(5)+=R(15);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,2,3);
  R(14)=0x8c05e55cu;
  R(4)=0xa4u;
  c->fr[15]=0x3F800000u;
  fp_unary(c,0,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0af06cu; R(4)+=R(15); f_8c05e55c(c); }
  fp_arith(c,0,0,15);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c0af0c0;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af07eu; R(4)+=R(15); sh4_call(c,tg); }
  fp_mov(c,3,0);
  { fp_arith(c,0,3,15); goto L8c0af0d2; }
L8c0af0c0:;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af0cau; R(4)+=R(15); sh4_call(c,tg); }
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,3,2);
L8c0af0d2:;
  R(0)=0x8c0af194u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0af1a0;
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,1);
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  { fp_st(c,1,R(0)+R(15)); goto L8c0af23c; }
L8c0af1a0:;
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
L8c0af23c:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af250u; R(4)+=0x30u; f_8c015c9c(c); }
L8c0af250:;
  R(4)=0xc8u;
  R(5)=R(15);
  R(2)=0x8c0151c8u;
  R(5)+=0x30u;
  { c->pr=0x8c0af25cu; R(4)+=R(15); f_8c0151c8(c); }
L8c0af25c:;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+28);
  R(3)=0x148u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x48u;
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af294u; R(4)=LD32(R(15)+R(0)); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=LD32(R(13)+4);
  R(14)=R(0);
  R(11)=LD32(R(4)+36);
  { R(4)=LD32(R(4)+32); goto L8c0af306; }
L8c0af2c0:;
  R(4)=R(13);
  R(12)=LD32(R(4)+4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+28);
  R(2)=0x148u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af2fau; R(4)=R(14); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=R(13);
  R(4)+=0x8u;
  R(5)=R(13);
  R(14)=R(0);
  R(11)+=0xffffffffu;
L8c0af306:;
  c->t=(int32_t)R(11)>0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0af2c0; }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+32); if(k) goto L8c0af318; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0af31c;
L8c0af318:;
  { R(3)=0x0u; goto L8c0af31e; }
L8c0af31c:;
  R(3)=LD32(R(14)+4);
L8c0af31e:;
  ST32(R(2),R(3));
  R(3)=0xbu;
  R(2)=LD32(R(15)+32);
  { ST32(R(2)+12,R(3)); goto L8c0af330; }
L8c0af330:;
  R(1)=0x14cu;
  R(0)=LD32(R(15)+4);
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
void f_8c0aef40(SH4Ctx *c) {
  R(0)=0x13cu;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
  R(2)=0x8c0686fcu;
  fp_mov(c,4,15);
  { c->pr=0x8c0aef52u; fp_arith(c,2,4,14); f_8c0686fc(c); }
  R(0)=0x14u;
  fp_st(c,0,R(0)+R(15));
  R(4)=LD32(R(15));
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0aef60u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(13)=R(0);
  R(0)=R(10);
  c->t=(int32_t)R(0)==114;
  if(!c->t) goto L8c0aef78;
  R(5)=0x130u;
  R(4)=LD32(R(15));
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c0aef74u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  {  goto L8c0af25c; }
L8c0aef78:;
  c->t=(int32_t)R(0)==116;
  if(!c->t) goto L8c0aefc0;
  R(14)=LD32(R(15));
  R(5)=0x130u;
  R(3)=0x8c0163ceu;
  R(14)=LD32(R(14)+36);
  R(5)+=R(15);
  { c->pr=0x8c0aef8au; R(4)=R(14); f_8c0163ce(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015ea8u;
  R(5)+=0x24u;
  R(7)+=0x28u;
  R(6)+=0x8u;
  { c->pr=0x8c0aef9cu; R(4)=R(14); f_8c015ea8(c); }
  {  goto L8c0af25c; }
L8c0aefc0:;
  R(5)=LD32(R(15));
  R(6)=0x68u;
  R(3)=0x8c0685b4u;
  R(4)=R(15);
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c0aefceu; R(4)+=0x30u; f_8c0685b4(c); }
  R(0)=0xbcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  {  goto L8c0af250; }
L8c0aefee:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(2)=0x8c015e64u;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af002u; R(4)+=0x30u; f_8c015e64(c); }
  R(0)=0xbcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,0,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  R(0)=0xa4u;
  R(5)=0x98u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  R(5)+=R(15);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,2,3);
  R(14)=0x8c05e55cu;
  R(4)=0xa4u;
  c->fr[15]=0x3F800000u;
  fp_unary(c,0,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0af06cu; R(4)+=R(15); f_8c05e55c(c); }
  fp_arith(c,0,0,15);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c0af0c0;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af07eu; R(4)+=R(15); sh4_call(c,tg); }
  fp_mov(c,3,0);
  { fp_arith(c,0,3,15); goto L8c0af0d2; }
L8c0af0c0:;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af0cau; R(4)+=R(15); sh4_call(c,tg); }
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,3,2);
L8c0af0d2:;
  R(0)=0x8c0af194u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0af1a0;
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,1);
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  { fp_st(c,1,R(0)+R(15)); goto L8c0af23c; }
L8c0af1a0:;
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
L8c0af23c:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af250u; R(4)+=0x30u; f_8c015c9c(c); }
L8c0af250:;
  R(4)=0xc8u;
  R(5)=R(15);
  R(2)=0x8c0151c8u;
  R(5)+=0x30u;
  { c->pr=0x8c0af25cu; R(4)+=R(15); f_8c0151c8(c); }
L8c0af25c:;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+28);
  R(3)=0x148u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x48u;
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af294u; R(4)=LD32(R(15)+R(0)); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=LD32(R(13)+4);
  R(14)=R(0);
  R(11)=LD32(R(4)+36);
  { R(4)=LD32(R(4)+32); goto L8c0af306; }
L8c0af2c0:;
  R(4)=R(13);
  R(12)=LD32(R(4)+4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+28);
  R(2)=0x148u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af2fau; R(4)=R(14); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=R(13);
  R(4)+=0x8u;
  R(5)=R(13);
  R(14)=R(0);
  R(11)+=0xffffffffu;
L8c0af306:;
  c->t=(int32_t)R(11)>0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0af2c0; }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+32); if(k) goto L8c0af318; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0af31c;
L8c0af318:;
  { R(3)=0x0u; goto L8c0af31e; }
L8c0af31c:;
  R(3)=LD32(R(14)+4);
L8c0af31e:;
  ST32(R(2),R(3));
  R(3)=0xbu;
  R(2)=LD32(R(15)+32);
  { ST32(R(2)+12,R(3)); goto L8c0af330; }
L8c0af330:;
  R(1)=0x14cu;
  R(0)=LD32(R(15)+4);
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
void f_8c0aefc0(SH4Ctx *c) {
  R(5)=LD32(R(15));
  R(6)=0x68u;
  R(3)=0x8c0685b4u;
  R(4)=R(15);
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c0aefceu; R(4)+=0x30u; f_8c0685b4(c); }
  R(0)=0xbcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aefee;
  {  goto L8c0af250; }
L8c0aefee:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(2)=0x8c015e64u;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af002u; R(4)+=0x30u; f_8c015e64(c); }
  R(0)=0xbcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,0,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  R(0)=0xa4u;
  R(5)=0x98u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  R(5)+=R(15);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,2,3);
  R(14)=0x8c05e55cu;
  R(4)=0xa4u;
  c->fr[15]=0x3F800000u;
  fp_unary(c,0,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0af06cu; R(4)+=R(15); f_8c05e55c(c); }
  fp_arith(c,0,0,15);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c0af0c0;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af07eu; R(4)+=R(15); sh4_call(c,tg); }
  fp_mov(c,3,0);
  { fp_arith(c,0,3,15); goto L8c0af0d2; }
L8c0af0c0:;
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af0cau; R(4)+=R(15); sh4_call(c,tg); }
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,3,2);
L8c0af0d2:;
  R(0)=0x8c0af194u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0af1a0;
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,1);
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  { fp_st(c,1,R(0)+R(15)); goto L8c0af23c; }
L8c0af1a0:;
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
L8c0af23c:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af250u; R(4)+=0x30u; f_8c015c9c(c); }
L8c0af250:;
  R(4)=0xc8u;
  R(5)=R(15);
  R(2)=0x8c0151c8u;
  R(5)+=0x30u;
  { c->pr=0x8c0af25cu; R(4)+=R(15); f_8c0151c8(c); }
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+28);
  R(3)=0x148u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x48u;
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af294u; R(4)=LD32(R(15)+R(0)); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=LD32(R(13)+4);
  R(14)=R(0);
  R(11)=LD32(R(4)+36);
  { R(4)=LD32(R(4)+32); goto L8c0af306; }
L8c0af2c0:;
  R(4)=R(13);
  R(12)=LD32(R(4)+4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+28);
  R(2)=0x148u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af2fau; R(4)=R(14); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=R(13);
  R(4)+=0x8u;
  R(5)=R(13);
  R(14)=R(0);
  R(11)+=0xffffffffu;
L8c0af306:;
  c->t=(int32_t)R(11)>0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0af2c0; }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+32); if(k) goto L8c0af318; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0af31c;
L8c0af318:;
  { R(3)=0x0u; goto L8c0af31e; }
L8c0af31c:;
  R(3)=LD32(R(14)+4);
L8c0af31e:;
  ST32(R(2),R(3));
  R(3)=0xbu;
  R(2)=LD32(R(15)+32);
  { ST32(R(2)+12,R(3)); goto L8c0af330; }
L8c0af330:;
  R(1)=0x14cu;
  R(0)=LD32(R(15)+4);
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
void f_8c0af0c0(SH4Ctx *c) {
  R(5)=0x98u;
  R(4)=0xa4u;
  R(5)+=R(15);
  { uint32_t tg=R(14); c->pr=0x8c0af0cau; R(4)+=R(15); sh4_call(c,tg); }
  fp_unary(c,0,0);
  fp_mov(c,3,0);
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,3,2);
  R(0)=0x8c0af194u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0af1a0;
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,1);
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  { fp_st(c,1,R(0)+R(15)); goto L8c0af23c; }
L8c0af1a0:;
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
L8c0af23c:;
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af250u; R(4)+=0x30u; f_8c015c9c(c); }
  R(4)=0xc8u;
  R(5)=R(15);
  R(2)=0x8c0151c8u;
  R(5)+=0x30u;
  { c->pr=0x8c0af25cu; R(4)+=R(15); f_8c0151c8(c); }
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+28);
  R(3)=0x148u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x48u;
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af294u; R(4)=LD32(R(15)+R(0)); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=LD32(R(13)+4);
  R(14)=R(0);
  R(11)=LD32(R(4)+36);
  { R(4)=LD32(R(4)+32); goto L8c0af306; }
L8c0af2c0:;
  R(4)=R(13);
  R(12)=LD32(R(4)+4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+28);
  R(2)=0x148u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af2fau; R(4)=R(14); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=R(13);
  R(4)+=0x8u;
  R(5)=R(13);
  R(14)=R(0);
  R(11)+=0xffffffffu;
L8c0af306:;
  c->t=(int32_t)R(11)>0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0af2c0; }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+32); if(k) goto L8c0af318; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0af31c;
L8c0af318:;
  { R(3)=0x0u; goto L8c0af31e; }
L8c0af31c:;
  R(3)=LD32(R(14)+4);
L8c0af31e:;
  ST32(R(2),R(3));
  R(3)=0xbu;
  R(2)=LD32(R(15)+32);
  { ST32(R(2)+12,R(3)); goto L8c0af330; }
L8c0af330:;
  R(1)=0x14cu;
  R(0)=LD32(R(15)+4);
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
void f_8c0af1a0(SH4Ctx *c) {
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xb8u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xa0u;
  fp_arith(c,2,0,3);
  fp_arith(c,1,1,0);
  fp_st(c,1,R(0)+R(15));
  R(6)=0xa4u;
  R(4)=R(15);
  R(5)=0xb0u;
  R(7)=0x98u;
  R(6)+=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=R(15);
  R(7)+=R(15);
  { c->pr=0x8c0af250u; R(4)+=0x30u; f_8c015c9c(c); }
  R(4)=0xc8u;
  R(5)=R(15);
  R(2)=0x8c0151c8u;
  R(5)+=0x30u;
  { c->pr=0x8c0af25cu; R(4)+=R(15); f_8c0151c8(c); }
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+28);
  R(3)=0x148u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x48u;
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af294u; R(4)=LD32(R(15)+R(0)); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=LD32(R(13)+4);
  R(14)=R(0);
  R(11)=LD32(R(4)+36);
  { R(4)=LD32(R(4)+32); goto L8c0af306; }
L8c0af2c0:;
  R(4)=R(13);
  R(12)=LD32(R(4)+4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=0x30u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0xd8u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,5,12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+28);
  R(2)=0x148u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  fp_mov(c,4,13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x34u;
  R(7)=LD32(R(15)+28);
  R(6)=R(15);
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(5)+=0x2cu;
  R(6)+=0x28u;
  { c->pr=0x8c0af2fau; R(4)=R(14); f_8c0ae936(c); }
  R(15)+=0x1cu;
  R(4)=R(13);
  R(4)+=0x8u;
  R(5)=R(13);
  R(14)=R(0);
  R(11)+=0xffffffffu;
L8c0af306:;
  c->t=(int32_t)R(11)>0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0af2c0; }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+32); if(k) goto L8c0af318; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0af31c;
L8c0af318:;
  { R(3)=0x0u; goto L8c0af31e; }
L8c0af31c:;
  R(3)=LD32(R(14)+4);
L8c0af31e:;
  ST32(R(2),R(3));
  R(3)=0xbu;
  R(2)=LD32(R(15)+32);
  { ST32(R(2)+12,R(3)); goto L8c0af330; }
L8c0af330:;
  R(1)=0x14cu;
  R(0)=LD32(R(15)+4);
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
void f_8c0af380(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(14)=R(6);
  R(5)=R(13);
  R(6)=R(14);
  R(11)=R(4);
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c0af3aau; R(4)=R(11); sh4_call(c,tg); }
  R(13)=R(0);
  R(2)=LD32(R(13)+4);
  R(12)=LD32(R(14));
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af3b8u; R(4)=R(11); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=LD32(R(13)+4);
  R(9)=LD32(R(14));
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0af3c6u; R(4)=R(11); sh4_call(c,tg); }
  R(8)=LD32(R(14));
  c->t=(R(12)&R(12))==0;
  R(13)=R(0);
  { uint32_t k=!c->t; R(10)=0x6u; if(k) goto L8c0af3ea; }
  R(2)=LD32(R(15)+8);
  R(3)=0x92u;
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0af3e2;
  R(2)=0x0u;
  R(1)=0x2bu;
  ST32(R(14),R(2));
  { ST32(R(14)+12,R(1)); goto L8c0af4e4; }
L8c0af3e2:;
  R(0)=0xffffffffu;
  ST32(R(14),R(0));
  { ST32(R(14)+12,R(10)); goto L8c0af4e4; }
L8c0af3ea:;
  R(1)=0x92u;
  R(0)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af440;
  R(1)=0x93u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af466;
  R(1)=0x94u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af49a;
  R(1)=0x95u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af4b6;
  {  goto L8c0af4dc; }
L8c0af440:;
  R(3)=0x8c070bd6u;
  R(7)=R(15);
  R(5)=R(9);
  R(7)+=0x4u;
  R(6)=R(8);
  { c->pr=0x8c0af44eu; R(4)=R(12); f_8c070bd6(c); }
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0af45c;
  R(3)=0x0u;
  R(2)=0x2bu;
  ST32(R(14),R(3));
  { ST32(R(14)+12,R(2)); goto L8c0af4e4; }
L8c0af45c:;
  R(1)=LD32(R(15)+4);
  R(3)=0x2bu;
  ST32(R(14),R(1));
  { ST32(R(14)+12,R(3)); goto L8c0af4e4; }
L8c0af466:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0af470u; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c0af480u; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(5)=R(9);
  R(4)=LD32(R(14));
  R(6)=R(8);
  R(3)=0x8c070b80u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+8);
  { c->pr=0x8c0af492u; R(4)=R(12); f_8c070b80(c); }
  R(15)+=0x4u;
  R(4)=R(0);
  { ST32(R(14),R(0)); goto L8c0af4d6; }
L8c0af49a:;
  R(2)=0x8c070c80u;
  R(5)=R(9);
  R(7)=R(15);
  R(6)=R(8);
  { c->pr=0x8c0af4a6u; R(4)=R(12); f_8c070c80(c); }
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0af4ae;
  { R(2)=0xffffffffu; goto L8c0af4b0; }
L8c0af4ae:;
  R(2)=LD32(R(15));
L8c0af4b0:;
  ST32(R(14),R(2));
  { ST32(R(14)+12,R(10)); goto L8c0af4e4; }
L8c0af4b6:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af4c0u; R(4)=R(11); sh4_call(c,tg); }
  R(5)=R(9);
  ST32(R(15)+8,R(0));
  R(3)=LD32(R(14));
  R(6)=R(8);
  R(7)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c070c2au;
  { c->pr=0x8c0af4d2u; R(4)=R(12); f_8c070c2a(c); }
  ST32(R(14),R(0));
  R(4)=R(0);
L8c0af4d6:;
  ST32(R(14)+12,R(10));
  { R(0)=LD32(R(15)+8); goto L8c0af4e6; }
L8c0af4dc:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0af4e4u; R(4)=0x27u; f_8c074080(c); }
L8c0af4e4:;
  R(0)=R(13);
L8c0af4e6:;
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
void f_8c0af420(SH4Ctx *c) {
  R(0)=c->rb[1];
  
  ST8(R(0)+R(0),R(9));
  ST16(R(0)+R(0),R(9));
  
  
  
  
  
  
  
  
  
  
  
  
  R(3)=0x8c070bd6u;
  R(7)=R(15);
  R(5)=R(9);
  R(7)+=0x4u;
  R(6)=R(8);
  { c->pr=0x8c0af44eu; R(4)=R(12); f_8c070bd6(c); }
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0af45c;
  R(3)=0x0u;
  R(2)=0x2bu;
  ST32(R(14),R(3));
  { ST32(R(14)+12,R(2)); goto L8c0af4e4; }
L8c0af45c:;
  R(1)=LD32(R(15)+4);
  R(3)=0x2bu;
  ST32(R(14),R(1));
  { ST32(R(14)+12,R(3)); goto L8c0af4e4; }
L8c0af4e4:;
  R(0)=R(13);
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
void f_8c0af440(SH4Ctx *c) {
  R(3)=0x8c070bd6u;
  R(7)=R(15);
  R(5)=R(9);
  R(7)+=0x4u;
  R(6)=R(8);
  { c->pr=0x8c0af44eu; R(4)=R(12); f_8c070bd6(c); }
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0af45c;
  R(3)=0x0u;
  R(2)=0x2bu;
  ST32(R(14),R(3));
  { ST32(R(14)+12,R(2)); goto L8c0af4e4; }
L8c0af45c:;
  R(1)=LD32(R(15)+4);
  R(3)=0x2bu;
  ST32(R(14),R(1));
  { ST32(R(14)+12,R(3)); goto L8c0af4e4; }
L8c0af4e4:;
  R(0)=R(13);
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
void f_8c0af4fa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=R(5);
  R(11)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(8)=R(4);
  R(2)=LD32(R(3));
  R(14)=R(6);
  ST32(R(15)+8,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c0af560; }
  ST32(R(15),R(4));
  { ST32(R(5),R(12)); goto L8c0af562; }
L8c0af560:;
  ST32(R(15),R(8));
L8c0af562:;
  R(13)=LD32(R(15));
  R(5)=R(11);
  R(10)=LD32(R(11)+4);
  R(6)=R(14);
  R(13)=LD32(R(13)+4);
  R(13)=LD32(R(13)+24);
  { uint32_t tg=R(10); c->pr=0x8c0af572u; R(4)=R(8); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=R(12);
  R(11)=LD32(R(14));
  R(4)=0x1u;
  ST8(R(15)+4,R(0));
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==127;
  { uint32_t k=c->t; R(9)=0x6u; if(k) goto L8c0af5a8; }
  R(1)=0x81u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af63c;
  R(1)=0x80u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af640;
  R(1)=0x83u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0af59a;
  {  goto L8c0af688; }
L8c0af59a:;
  R(1)=0x82u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0af5a4;
  {  goto L8c0af68c; }
L8c0af5a4:;
  {  goto L8c0af700; }
L8c0af5a8:;
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0af5b2u; R(4)=R(8); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(10)=R(0);
  R(5)=R(10);
  R(6)=R(14);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c0af5c2u; R(4)=R(8); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  c->t=(R(13)&R(13))==0;
  R(10)=R(0);
  { uint32_t k=c->t; ST32(R(15)+8,R(2)); if(k) goto L8c0af656; }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0af656;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0af600;
  { R(4)=0x0u; goto L8c0af604; }
L8c0af600:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
L8c0af604:;
  R(2)=0x8c0a1746u;
  { c->pr=0x8c0af60au;  f_8c0a1746(c); }
  R(5)=LD32(R(15)+4);
  R(7)=R(0);
  R(3)=0x8c070d20u;
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0af616u; R(4)=R(11); f_8c070d20(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0af630;
  R(3)=0x8c051888u;
  R(5)=R(11);
  R(6)=0x0u;
  { c->pr=0x8c0af626u; R(4)=R(13); f_8c051888(c); }
  R(2)=0x8c071592u;
  { c->pr=0x8c0af62cu; R(4)=R(11); f_8c071592(c); }
  { R(4)=R(0); goto L8c0af638; }
L8c0af630:;
  R(2)=0x8c051860u;
  { c->pr=0x8c0af636u; R(4)=R(13); f_8c051860(c); }
  R(4)=R(12);
L8c0af638:;
  { ST32(R(14),R(4)); goto L8c0af6d4; }
L8c0af63c:;
  R(0)=R(4);
  ST8(R(15)+4,R(0));
L8c0af640:;
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0af64au; R(4)=R(8); sh4_call(c,tg); }
  c->t=(R(13)&R(13))==0;
  R(10)=R(0);
  { uint32_t k=c->t; R(5)=LD32(R(14)); if(k) goto L8c0af656; }
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0af65a;
L8c0af656:;
  { ST32(R(14),R(12)); goto L8c0af6d4; }
L8c0af65a:;
  R(3)=0x8c0711a0u;
  { c->pr=0x8c0af660u; R(4)=R(11); f_8c0711a0(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0af67c;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(11);
  R(3)=0x8c051888u;
  R(6)=R(0);
  { c->pr=0x8c0af672u; R(4)=R(13); f_8c051888(c); }
  R(2)=0x8c071592u;
  { c->pr=0x8c0af678u; R(4)=R(11); f_8c071592(c); }
  { R(4)=R(0); goto L8c0af684; }
L8c0af67c:;
  R(2)=0x8c051860u;
  { c->pr=0x8c0af682u; R(4)=R(13); f_8c051860(c); }
  R(4)=R(12);
L8c0af684:;
  { ST32(R(14),R(4)); goto L8c0af6d4; }
L8c0af688:;
  R(0)=R(4);
  ST8(R(15)+4,R(0));
L8c0af68c:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0af694;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0af698;
L8c0af694:;
  { ST32(R(14),R(12)); goto L8c0af6d4; }
L8c0af698:;
  R(4)=R(12);
  { R(8)=LD32(R(11)); goto L8c0af6a6; }
L8c0af6a6:;
  R(2)=0x8c0711a0u;
  R(5)=LD32(R(8)+12);
  { c->pr=0x8c0af6aeu; R(4)=R(11); f_8c0711a0(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0af6ca;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(11);
  R(3)=0x8c051888u;
  R(6)=R(0);
  { c->pr=0x8c0af6c0u; R(4)=R(13); f_8c051888(c); }
  R(2)=0x8c071592u;
  { c->pr=0x8c0af6c6u; R(4)=R(11); f_8c071592(c); }
  { R(4)=R(0); goto L8c0af6d2; }
L8c0af6ca:;
  R(2)=0x8c051860u;
  { c->pr=0x8c0af6d0u; R(4)=R(13); f_8c051860(c); }
  R(4)=R(12);
L8c0af6d2:;
  ST32(R(14),R(4));
L8c0af6d4:;
  { ST32(R(14)+12,R(9)); goto L8c0af708; }
L8c0af700:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0af708u; R(4)=0x27u; f_8c074080(c); }
L8c0af708:;
  R(0)=R(10);
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
void f_8c0af560(SH4Ctx *c) {
  ST32(R(15),R(8));
  R(13)=LD32(R(15));
  R(5)=R(11);
  R(10)=LD32(R(11)+4);
  R(6)=R(14);
  R(13)=LD32(R(13)+4);
  R(13)=LD32(R(13)+24);
  { uint32_t tg=R(10); c->pr=0x8c0af572u; R(4)=R(8); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=R(12);
  R(11)=LD32(R(14));
  R(4)=0x1u;
  ST8(R(15)+4,R(0));
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==127;
  { uint32_t k=c->t; R(9)=0x6u; if(k) goto L8c0af5a8; }
  R(1)=0x81u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af63c;
  R(1)=0x80u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af640;
  R(1)=0x83u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0af59a;
  {  goto L8c0af688; }
L8c0af59a:;
  R(1)=0x82u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0af5a4;
  {  goto L8c0af68c; }
L8c0af5a4:;
  {  goto L8c0af700; }
L8c0af5a8:;
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0af5b2u; R(4)=R(8); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(10)=R(0);
  R(5)=R(10);
  R(6)=R(14);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c0af5c2u; R(4)=R(8); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  c->t=(R(13)&R(13))==0;
  R(10)=R(0);
  { uint32_t k=c->t; ST32(R(15)+8,R(2)); if(k) goto L8c0af656; }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0af656;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0af600;
  { R(4)=0x0u; goto L8c0af604; }
L8c0af600:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
L8c0af604:;
  R(2)=0x8c0a1746u;
  { c->pr=0x8c0af60au;  f_8c0a1746(c); }
  R(5)=LD32(R(15)+4);
  R(7)=R(0);
  R(3)=0x8c070d20u;
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0af616u; R(4)=R(11); f_8c070d20(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0af630;
  R(3)=0x8c051888u;
  R(5)=R(11);
  R(6)=0x0u;
  { c->pr=0x8c0af626u; R(4)=R(13); f_8c051888(c); }
  R(2)=0x8c071592u;
  { c->pr=0x8c0af62cu; R(4)=R(11); f_8c071592(c); }
  { R(4)=R(0); goto L8c0af638; }
L8c0af630:;
  R(2)=0x8c051860u;
  { c->pr=0x8c0af636u; R(4)=R(13); f_8c051860(c); }
  R(4)=R(12);
L8c0af638:;
  { ST32(R(14),R(4)); goto L8c0af6d4; }
L8c0af63c:;
  R(0)=R(4);
  ST8(R(15)+4,R(0));
L8c0af640:;
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0af64au; R(4)=R(8); sh4_call(c,tg); }
  c->t=(R(13)&R(13))==0;
  R(10)=R(0);
  { uint32_t k=c->t; R(5)=LD32(R(14)); if(k) goto L8c0af656; }
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0af65a;
L8c0af656:;
  { ST32(R(14),R(12)); goto L8c0af6d4; }
L8c0af65a:;
  R(3)=0x8c0711a0u;
  { c->pr=0x8c0af660u; R(4)=R(11); f_8c0711a0(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0af67c;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(11);
  R(3)=0x8c051888u;
  R(6)=R(0);
  { c->pr=0x8c0af672u; R(4)=R(13); f_8c051888(c); }
  R(2)=0x8c071592u;
  { c->pr=0x8c0af678u; R(4)=R(11); f_8c071592(c); }
  { R(4)=R(0); goto L8c0af684; }
L8c0af67c:;
  R(2)=0x8c051860u;
  { c->pr=0x8c0af682u; R(4)=R(13); f_8c051860(c); }
  R(4)=R(12);
L8c0af684:;
  { ST32(R(14),R(4)); goto L8c0af6d4; }
L8c0af688:;
  R(0)=R(4);
  ST8(R(15)+4,R(0));
L8c0af68c:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0af694;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0af698;
L8c0af694:;
  { ST32(R(14),R(12)); goto L8c0af6d4; }
L8c0af698:;
  R(4)=R(12);
  { R(8)=LD32(R(11)); goto L8c0af6a6; }
L8c0af6a6:;
  R(2)=0x8c0711a0u;
  R(5)=LD32(R(8)+12);
  { c->pr=0x8c0af6aeu; R(4)=R(11); f_8c0711a0(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0af6ca;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(11);
  R(3)=0x8c051888u;
  R(6)=R(0);
  { c->pr=0x8c0af6c0u; R(4)=R(13); f_8c051888(c); }
  R(2)=0x8c071592u;
  { c->pr=0x8c0af6c6u; R(4)=R(11); f_8c071592(c); }
  { R(4)=R(0); goto L8c0af6d2; }
L8c0af6ca:;
  R(2)=0x8c051860u;
  { c->pr=0x8c0af6d0u; R(4)=R(13); f_8c051860(c); }
  R(4)=R(12);
L8c0af6d2:;
  ST32(R(14),R(4));
L8c0af6d4:;
  { ST32(R(14)+12,R(9)); goto L8c0af708; }
L8c0af700:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0af708u; R(4)=0x27u; f_8c074080(c); }
L8c0af708:;
  R(0)=R(10);
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
void f_8c0af600(SH4Ctx *c) {
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(2)=0x8c0a1746u;
  { c->pr=0x8c0af60au;  f_8c0a1746(c); }
  R(5)=LD32(R(15)+4);
  R(7)=R(0);
  R(3)=0x8c070d20u;
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0af616u; R(4)=R(11); f_8c070d20(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0af630;
  R(3)=0x8c051888u;
  R(5)=R(11);
  R(6)=0x0u;
  { c->pr=0x8c0af626u; R(4)=R(13); f_8c051888(c); }
  R(2)=0x8c071592u;
  { c->pr=0x8c0af62cu; R(4)=R(11); f_8c071592(c); }
  { R(4)=R(0); goto L8c0af638; }
L8c0af630:;
  R(2)=0x8c051860u;
  { c->pr=0x8c0af636u; R(4)=R(13); f_8c051860(c); }
  R(4)=R(12);
L8c0af638:;
  { ST32(R(14),R(4)); goto L8c0af6d4; }
L8c0af6d4:;
  { ST32(R(14)+12,R(9)); goto L8c0af708; }
L8c0af708:;
  R(0)=R(10);
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
void f_8c0af700(SH4Ctx *c) {
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0af708u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(10);
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
void f_8c0af71e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(7)=0x8c0c76fcu;
  R(10)=R(4);
  R(4)=R(5);
  R(14)=R(6);
  R(6)=LD32(R(7));
  R(4)+=0xfffffff4u;
  R(4)=LD32(R(4));
  R(13)=R(5);
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c0af748; }
  ST32(R(15)+4,R(6));
  { ST32(R(7),R(5)); goto L8c0af74a; }
L8c0af748:;
  ST32(R(15)+4,R(10));
L8c0af74a:;
  R(12)=LD32(R(15)+4);
  R(12)=LD32(R(12)+4);
  R(12)=LD32(R(12)+24);
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; R(11)=0x6u; if(k) goto L8c0af7ae; }
  R(1)=0x8au;
  R(0)=R(4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af768;
  R(1)=0x8bu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0af7a0;
  {  goto L8c0af7a6; }
L8c0af768:;
  R(2)=0xau;
  ST32(R(14),R(5));
  { ST32(R(14)+12,R(2)); goto L8c0af7a6; }
L8c0af7a0:;
  R(2)=0x2bu;
  ST32(R(14),R(5));
  ST32(R(14)+12,R(2));
L8c0af7a6:;
  R(1)=0xffffffffu;
  ST32(R(14),R(1));
  {  goto L8c0af822; }
L8c0af7ae:;
  R(0)=R(4);
  R(1)=0x84u;
  R(0)-=R(1);
  R(1)=0xdu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0af7be;
  {  goto L8c0af9ba; }
L8c0af7be:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0af7ccu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0af7cau+R(0));  switch(tg){ case 0x8c0af7e6u: goto L8c0af7e6; case 0x8c0af7f2u: goto L8c0af7f2; case 0x8c0af80cu: goto L8c0af80c; case 0x8c0af818u: goto L8c0af818; case 0x8c0af826u: goto L8c0af826; case 0x8c0af840u: goto L8c0af840; case 0x8c0af85eu: goto L8c0af85e; case 0x8c0af87cu: goto L8c0af87c; case 0x8c0af89au: goto L8c0af89a; case 0x8c0af8d8u: goto L8c0af8d8; case 0x8c0af940u: goto L8c0af940; case 0x8c0af970u: goto L8c0af970; case 0x8c0af98cu: goto L8c0af98c; default: sh4_bad_jump(c,0x8c0af7c6u,tg); return; } }
L8c0af7e6:;
  R(3)=0x8c0518d6u;
  { c->pr=0x8c0af7ecu; R(4)=R(12); f_8c0518d6(c); }
  R(4)=R(0);
  { ST32(R(14),R(0)); goto L8c0af822; }
L8c0af7f2:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0af7fcu; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c051940u;
  ST32(R(15),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c0af806u; R(4)=R(12); f_8c051940(c); }
  R(4)=R(0);
  { ST32(R(14),R(0)); goto L8c0af8f0; }
L8c0af80c:;
  R(2)=0x8c051902u;
  { c->pr=0x8c0af812u; R(4)=R(12); f_8c051902(c); }
  R(4)=R(0);
  { ST32(R(14),R(0)); goto L8c0af822; }
L8c0af818:;
  R(2)=0x8c0518eau;
  { c->pr=0x8c0af81eu; R(4)=R(12); f_8c0518ea(c); }
  ST32(R(14),R(0));
  R(4)=R(0);
L8c0af822:;
  { ST32(R(14)+12,R(11)); goto L8c0af9c2; }
L8c0af826:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af830u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c0519b8u;
  ST32(R(15),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c0af83au; R(4)=R(12); f_8c0519b8(c); }
  R(4)=R(0);
  { ST32(R(14),R(0)); goto L8c0af8f0; }
L8c0af840:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af84au; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c0519b8u;
  ST32(R(15),R(0));
  R(5)=LD32(R(14));
  R(5)=0u-R(5);
  { c->pr=0x8c0af856u; R(4)=R(12); f_8c0519b8(c); }
  ST32(R(14),R(0));
  R(4)=R(0);
  {  goto L8c0af8f0; }
L8c0af85e:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af868u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c051a0au;
  ST32(R(15),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c0af872u; R(4)=R(12); f_8c051a0a(c); }
  R(2)=0xau;
  ST32(R(14),R(0));
  R(4)=R(0);
  { ST32(R(14)+12,R(2)); goto L8c0af9b6; }
L8c0af87c:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af886u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c051a5au;
  ST32(R(15),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c0af890u; R(4)=R(12); f_8c051a5a(c); }
  R(2)=0x2bu;
  ST32(R(14),R(0));
  R(4)=R(0);
  { ST32(R(14)+12,R(2)); goto L8c0af9b6; }
L8c0af89a:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af8a4u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15),R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c0af8b4u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15)+12,R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c0af8c4u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c051ac6u;
  ST32(R(15)+8,R(0));
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(14));
  { c->pr=0x8c0af8d2u; R(4)=R(12); f_8c051ac6(c); }
  R(4)=R(0);
  { ST32(R(14),R(0)); goto L8c0af96a; }
L8c0af8d8:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af8e2u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c051b6cu;
  ST32(R(15),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c0af8ecu; R(4)=R(12); f_8c051b6c(c); }
  ST32(R(14),R(0));
  R(4)=R(0);
L8c0af8f0:;
  { ST32(R(14)+12,R(11)); goto L8c0af9b6; }
L8c0af940:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af94au; R(4)=R(10); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15),R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c0af95au; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c051bd8u;
  ST32(R(15)+8,R(0));
  R(5)=LD32(R(15));
  R(6)=LD32(R(14));
  { c->pr=0x8c0af966u; R(4)=R(12); f_8c051bd8(c); }
  ST32(R(14),R(0));
  R(4)=R(0);
L8c0af96a:;
  ST32(R(14)+12,R(11));
  { R(0)=LD32(R(15)+8); goto L8c0af9c4; }
L8c0af970:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af97au; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c05197eu;
  ST32(R(15),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c0af984u; R(4)=R(12); f_8c05197e(c); }
  ST32(R(14),R(0));
  R(4)=R(0);
  { ST32(R(14)+12,R(11)); goto L8c0af9b6; }
L8c0af98c:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af996u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c05197eu;
  ST32(R(15),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c0af9a0u; R(4)=R(12); f_8c05197e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c0af9b0; }
  R(3)=0x8c051940u;
  { c->pr=0x8c0af9acu; R(4)=R(12); f_8c051940(c); }
  { R(4)=R(0); goto L8c0af9b2; }
L8c0af9b0:;
  R(4)=0xffffffffu;
L8c0af9b2:;
  ST32(R(14),R(4));
  ST32(R(14)+12,R(11));
L8c0af9b6:;
  { R(0)=LD32(R(15)); goto L8c0af9c4; }
L8c0af9ba:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0af9c2u; R(4)=0x27u; f_8c074080(c); }
L8c0af9c2:;
  R(0)=R(13);
L8c0af9c4:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0af7a0(SH4Ctx *c) {
  R(2)=0x2bu;
  ST32(R(14),R(5));
  ST32(R(14)+12,R(2));
  R(1)=0xffffffffu;
  ST32(R(14),R(1));
  {  goto L8c0af822; }
L8c0af822:;
  { ST32(R(14)+12,R(11)); goto L8c0af9c2; }
L8c0af9c2:;
  R(0)=R(13);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0af940(SH4Ctx *c) {
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0af94au; R(4)=R(10); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15),R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c0af95au; R(4)=R(10); sh4_call(c,tg); }
  R(3)=0x8c051bd8u;
  ST32(R(15)+8,R(0));
  R(5)=LD32(R(15));
  R(6)=LD32(R(14));
  { c->pr=0x8c0af966u; R(4)=R(12); f_8c051bd8(c); }
  ST32(R(14),R(0));
  R(4)=R(0);
  ST32(R(14)+12,R(11));
  { R(0)=LD32(R(15)+8); goto L8c0af9c4; }
L8c0af9c4:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0af9d4(SH4Ctx *c) {
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
  R(15)+=0xffffff90u;
  R(3)=R(5);
  R(12)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(11)=R(4);
  R(10)=0x0u;
  R(2)=LD32(R(3));
  R(13)=R(10);
  c->fr[14]=0x3F800000u;
  R(14)=R(6);
  ST32(R(15)+20,R(2));
  R(8)=R(13);
  fp_unary(c,0,14);
  ST32(R(15)+32,R(10));
  ST32(R(15)+28,R(10));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; fp_mov(c,15,14); if(k) goto L8c0afa18; }
  ST32(R(15)+8,R(4));
  { ST32(R(5),R(10)); goto L8c0afa1a; }
L8c0afa18:;
  ST32(R(15)+8,R(11));
L8c0afa1a:;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0afa24u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(2)=LD32(R(12)+4);
  R(9)=LD32(R(14));
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0afa32u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(3)=LD32(R(14));
  ST32(R(15)+24,R(3));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==121;
  if(c->t) goto L8c0afa56;
  c->t=(int32_t)R(0)==120;
  if(c->t) goto L8c0afa82;
  c->t=(int32_t)R(0)==123;
  if(!c->t) goto L8c0afa4a;
  {  goto L8c0afbb8; }
L8c0afa4a:;
  c->t=(int32_t)R(0)==122;
  if(!c->t) goto L8c0afa52;
  {  goto L8c0afbe4; }
L8c0afa52:;
  {  goto L8c0afd14; }
L8c0afa56:;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0afa60u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(2)=LD32(R(12)+4);
  R(13)=LD32(R(14));
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0afa6eu; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(3)=LD32(R(12)+4);
  R(8)=LD32(R(14));
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0afa7cu; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(12)=R(0);
  ST32(R(15)+28,R(2));
L8c0afa82:;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c0afac0;
  { ST32(R(14),R(10)); goto L8c0afbb2; }
L8c0afac0:;
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0x58u;
  { c->pr=0x8c0afaccu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(4)=LD32(R(15)+8);
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0afad6u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(3)=0x8c071592u;
  ST32(R(15)+16,R(0));
  { c->pr=0x8c0afadeu; R(4)=R(9); f_8c071592(c); }
  ST32(R(15)+12,R(0));
  ST32(R(15)+4,R(10));
  R(3)=LD32(R(15)+12);
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0afbae;
L8c0afae8:;
  R(3)=0x8c071596u;
  R(6)=R(15);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0afaf2u; R(4)=R(9); f_8c071596(c); }
  R(11)=R(0);
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==121;
  if(!c->t) goto L8c0afb0c;
  c->t=R(11)==R(8);
  if(c->t) goto L8c0afba2;
  R(3)=LD32(R(15)+28);
  c->t=R(11)==R(3);
  if(c->t) goto L8c0afba2;
  R(1)=LD32(R(15));
  R(1)&=R(13);
  c->t=R(1)==R(13);
  if(!c->t) goto L8c0afba2;
L8c0afb0c:;
  R(2)=0x8c09d954u;
  R(5)=R(15);
  R(5)+=0x64u;
  { c->pr=0x8c0afb16u; R(4)=R(11); f_8c09d954(c); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x58u;
  R(5)+=0x64u;
  { c->pr=0x8c0afb26u; R(4)+=0x4cu; f_8c05e612(c); }
  R(0)=0x4cu;
  fp_cmp(c,0,15,14);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x54u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0afb4a; }
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c0afba2;
L8c0afb4a:;
  R(3)=LD32(R(15)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0afb84;
  R(3)=0x8c09af60u;
  R(5)=R(15);
  R(6)=LD32(R(15)+16);
  R(4)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c0afb5eu; R(4)+=0x58u; f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0afba2;
  R(0)=0x4cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x54u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  { ST32(R(15)+32,R(11)); goto L8c0afba2; }
L8c0afb84:;
  R(0)=0x4cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x54u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  ST32(R(15)+32,R(11));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
L8c0afba2:;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(15)+12);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0afae8;
L8c0afbae:;
  R(3)=LD32(R(15)+32);
  ST32(R(14),R(3));
L8c0afbb2:;
  R(2)=0xau;
  { ST32(R(14)+12,R(2)); goto L8c0afd1c; }
L8c0afbb8:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0afbc2u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(3)=LD32(R(12)+4);
  R(13)=LD32(R(14));
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0afbd0u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(2)=LD32(R(12)+4);
  R(8)=LD32(R(14));
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c0afbdeu; R(4)=R(11); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(12)=R(0);
  ST32(R(15)+28,R(3));
L8c0afbe4:;
  R(6)=R(15);
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0x24u;
  { uint32_t tg=R(2); c->pr=0x8c0afbf0u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x24u;
  R(2)=R(15);
  ST32(R(15)+32,R(0));
  R(1)=LD32(R(3));
  R(2)+=0x40u;
  R(0)=LD32(R(3)+4);
  c->t=(R(9)&R(9))==0;
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { uint32_t k=!c->t; ST32(R(2)+8,R(1)); if(k) goto L8c0afc40; }
  R(2)=0xau;
  ST32(R(14),R(10));
  { ST32(R(14)+12,R(2)); goto L8c0afd10; }
L8c0afc40:;
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0x58u;
  { c->pr=0x8c0afc4cu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(4)=LD32(R(15)+8);
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0afc56u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(3)=0x8c071592u;
  ST32(R(15)+12,R(0));
  { c->pr=0x8c0afc5eu; R(4)=R(9); f_8c071592(c); }
  R(11)=R(10);
  ST32(R(15)+16,R(0));
  ST32(R(15)+4,R(10));
  R(3)=LD32(R(15)+16);
  R(10)=0x8c05e55cu;
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0afd08;
L8c0afc6c:;
  R(3)=0x8c071596u;
  R(5)=R(11);
  R(6)=R(15);
  { c->pr=0x8c0afc76u; R(4)=R(9); f_8c071596(c); }
  R(12)=R(0);
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==123;
  if(!c->t) goto L8c0afc90;
  c->t=R(12)==R(8);
  if(c->t) goto L8c0afd00;
  R(3)=LD32(R(15)+28);
  c->t=R(12)==R(3);
  if(c->t) goto L8c0afd00;
  R(1)=LD32(R(15));
  R(1)&=R(13);
  c->t=R(1)==R(13);
  if(!c->t) goto L8c0afd00;
L8c0afc90:;
  R(2)=0x8c09d954u;
  R(5)=R(15);
  R(5)+=0x64u;
  { c->pr=0x8c0afc9au; R(4)=R(12); f_8c09d954(c); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x58u;
  R(5)+=0x64u;
  { c->pr=0x8c0afcaau; R(4)+=0x34u; f_8c05e612(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(10); c->pr=0x8c0afcb4u; R(4)+=0x40u; sh4_call(c,tg); }
  R(0)=0x34u;
  fp_mov(c,2,0);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,0,4);
  fp_cmp(c,0,15,14);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,13,2);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  { uint32_t k=c->t; fp_arith(c,3,13,3); if(k) goto L8c0afcdc; }
  fp_cmp(c,1,13,15);
  if(!c->t) goto L8c0afd00;
L8c0afcdc:;
  R(3)=LD32(R(15)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0afcfc;
  R(3)=0x8c09af60u;
  R(5)=R(15);
  R(6)=LD32(R(15)+12);
  R(4)=R(15);
  R(5)+=0x34u;
  { c->pr=0x8c0afcf0u; R(4)+=0x58u; f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0afd00;
  fp_mov(c,15,13);
  { ST32(R(15)+4,R(12)); goto L8c0afd00; }
L8c0afcfc:;
  ST32(R(15)+4,R(12));
  fp_mov(c,15,13);
L8c0afd00:;
  R(3)=LD32(R(15)+16);
  R(11)+=0x1u;
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(!c->t) goto L8c0afc6c;
L8c0afd08:;
  R(1)=LD32(R(15)+4);
  R(3)=0xau;
  ST32(R(14),R(1));
  ST32(R(14)+12,R(3));
L8c0afd10:;
  { R(0)=LD32(R(15)+32); goto L8c0afd1e; }
L8c0afd14:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0afd1cu; R(4)=0x27u; f_8c074080(c); }
L8c0afd1c:;
  R(0)=R(12);
L8c0afd1e:;
  R(15)+=0x70u;
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
void f_8c0afac0(SH4Ctx *c) {
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0x58u;
  { c->pr=0x8c0afaccu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(4)=LD32(R(15)+8);
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0afad6u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(3)=0x8c071592u;
  ST32(R(15)+16,R(0));
  { c->pr=0x8c0afadeu; R(4)=R(9); f_8c071592(c); }
  ST32(R(15)+12,R(0));
  ST32(R(15)+4,R(10));
  R(3)=LD32(R(15)+12);
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0afbae;
L8c0afae8:;
  R(3)=0x8c071596u;
  R(6)=R(15);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0afaf2u; R(4)=R(9); f_8c071596(c); }
  R(11)=R(0);
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==121;
  if(!c->t) goto L8c0afb0c;
  c->t=R(11)==R(8);
  if(c->t) goto L8c0afba2;
  R(3)=LD32(R(15)+28);
  c->t=R(11)==R(3);
  if(c->t) goto L8c0afba2;
  R(1)=LD32(R(15));
  R(1)&=R(13);
  c->t=R(1)==R(13);
  if(!c->t) goto L8c0afba2;
L8c0afb0c:;
  R(2)=0x8c09d954u;
  R(5)=R(15);
  R(5)+=0x64u;
  { c->pr=0x8c0afb16u; R(4)=R(11); f_8c09d954(c); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x58u;
  R(5)+=0x64u;
  { c->pr=0x8c0afb26u; R(4)+=0x4cu; f_8c05e612(c); }
  R(0)=0x4cu;
  fp_cmp(c,0,15,14);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x54u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0afb4a; }
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c0afba2;
L8c0afb4a:;
  R(3)=LD32(R(15)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0afb84;
  R(3)=0x8c09af60u;
  R(5)=R(15);
  R(6)=LD32(R(15)+16);
  R(4)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c0afb5eu; R(4)+=0x58u; f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0afba2;
  R(0)=0x4cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x54u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  { ST32(R(15)+32,R(11)); goto L8c0afba2; }
L8c0afb84:;
  R(0)=0x4cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x54u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  ST32(R(15)+32,R(11));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
L8c0afba2:;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(15)+12);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0afae8;
L8c0afbae:;
  R(3)=LD32(R(15)+32);
  ST32(R(14),R(3));
  R(2)=0xau;
  { ST32(R(14)+12,R(2)); goto L8c0afd1c; }
L8c0afd1c:;
  R(0)=R(12);
  R(15)+=0x70u;
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
void f_8c0afc40(SH4Ctx *c) {
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0x58u;
  { c->pr=0x8c0afc4cu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(4)=LD32(R(15)+8);
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0afc56u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(3)=0x8c071592u;
  ST32(R(15)+12,R(0));
  { c->pr=0x8c0afc5eu; R(4)=R(9); f_8c071592(c); }
  R(11)=R(10);
  ST32(R(15)+16,R(0));
  ST32(R(15)+4,R(10));
  R(3)=LD32(R(15)+16);
  R(10)=0x8c05e55cu;
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0afd08;
L8c0afc6c:;
  R(3)=0x8c071596u;
  R(5)=R(11);
  R(6)=R(15);
  { c->pr=0x8c0afc76u; R(4)=R(9); f_8c071596(c); }
  R(12)=R(0);
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==123;
  if(!c->t) goto L8c0afc90;
  c->t=R(12)==R(8);
  if(c->t) goto L8c0afd00;
  R(3)=LD32(R(15)+28);
  c->t=R(12)==R(3);
  if(c->t) goto L8c0afd00;
  R(1)=LD32(R(15));
  R(1)&=R(13);
  c->t=R(1)==R(13);
  if(!c->t) goto L8c0afd00;
L8c0afc90:;
  R(2)=0x8c09d954u;
  R(5)=R(15);
  R(5)+=0x64u;
  { c->pr=0x8c0afc9au; R(4)=R(12); f_8c09d954(c); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x58u;
  R(5)+=0x64u;
  { c->pr=0x8c0afcaau; R(4)+=0x34u; f_8c05e612(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(10); c->pr=0x8c0afcb4u; R(4)+=0x40u; sh4_call(c,tg); }
  R(0)=0x34u;
  fp_mov(c,2,0);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,0,4);
  fp_cmp(c,0,15,14);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,13,2);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  { uint32_t k=c->t; fp_arith(c,3,13,3); if(k) goto L8c0afcdc; }
  fp_cmp(c,1,13,15);
  if(!c->t) goto L8c0afd00;
L8c0afcdc:;
  R(3)=LD32(R(15)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0afcfc;
  R(3)=0x8c09af60u;
  R(5)=R(15);
  R(6)=LD32(R(15)+12);
  R(4)=R(15);
  R(5)+=0x34u;
  { c->pr=0x8c0afcf0u; R(4)+=0x58u; f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0afd00;
  fp_mov(c,15,13);
  { ST32(R(15)+4,R(12)); goto L8c0afd00; }
L8c0afcfc:;
  ST32(R(15)+4,R(12));
  fp_mov(c,15,13);
L8c0afd00:;
  R(3)=LD32(R(15)+16);
  R(11)+=0x1u;
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(!c->t) goto L8c0afc6c;
L8c0afd08:;
  R(1)=LD32(R(15)+4);
  R(3)=0xau;
  ST32(R(14),R(1));
  ST32(R(14)+12,R(3));
  { R(0)=LD32(R(15)+32); goto L8c0afd1e; }
L8c0afd1e:;
  R(15)+=0x70u;
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
void f_8c0afd38(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(12)=R(5);
  R(12)+=0xfffffff4u;
  R(11)=R(5);
  R(14)=0x0u;
  R(13)=R(6);
  R(9)=R(14);
  ST32(R(15),R(4));
  R(3)=LD32(R(11)+4);
  R(12)=LD32(R(12));
  { uint32_t tg=R(3); c->pr=0x8c0afd60u; R(10)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(13));
  R(11)=R(0);
  R(0)=R(12);
  c->t=(int32_t)R(0)==125;
  ST32(R(15)+12,R(3));
  { uint32_t k=c->t; R(8)=R(10); if(k) goto L8c0afd74; }
  R(0)=R(12);
  c->t=(int32_t)R(0)==126;
  if(!c->t) goto L8c0afd82;
L8c0afd74:;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c0afd7eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(8)=LD32(R(13));
  R(11)=R(0);
L8c0afd82:;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c0afd8cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=LD32(R(13));
  R(11)=R(0);
  R(0)=R(12);
  c->t=(int32_t)R(0)==124;
  ST32(R(15)+4,R(3));
  ST32(R(15)+8,R(14));
  if(c->t) goto L8c0afda0;
  R(0)=R(12);
  c->t=(int32_t)R(0)==126;
  if(!c->t) goto L8c0afdb0;
L8c0afda0:;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c0afdaau; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=LD32(R(13));
  R(11)=R(0);
  ST32(R(15)+8,R(3));
L8c0afdb0:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==125;
  if(c->t) goto L8c0afdbc;
  R(0)=R(12);
  c->t=(int32_t)R(0)==126;
  if(!c->t) goto L8c0afdcc;
L8c0afdbc:;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c0afdc6u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(10)=LD32(R(13));
  R(11)=R(0);
  R(10)=R(10)&0xFF;
L8c0afdcc:;
  R(4)=LD32(R(15)+12);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=R(14); if(k) { f_8c0afe46(c); return; } }
  { f_8c0afdd6(c); return; }
}
void f_8c0afdd6(SH4Ctx *c) {
L8c0afdd6:;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(15)+4);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0afe40;
  { R(5)=R(2); { f_8c0afe46(c); return; } }
L8c0afe40:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0afdd6;
  { f_8c0afe46(c); return; }
}
void f_8c0afe40(SH4Ctx *c) {
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) { f_8c0afdd6(c); return; }
  { f_8c0afe46(c); return; }
}
void f_8c0afe46(SH4Ctx *c) {
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0afe52;
  R(2)=0x8c0716e0u;
  { c->pr=0x8c0afe50u;  f_8c0716e0(c); }
  R(9)=R(0);
L8c0afe52:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==124;
  if(c->t) goto L8c0afe64;
  c->t=(int32_t)R(0)==125;
  if(c->t) goto L8c0afe94;
  c->t=(int32_t)R(0)==126;
  if(c->t) goto L8c0afe94;
  {  { f_8c0aff72(c); return; } }
L8c0afe64:;
  c->t=(R(9)&R(9))==0;
  { uint32_t k=c->t; R(7)=R(14); if(k) goto L8c0afe8e; }
  R(4)=LD32(R(9));
  R(5)=0x7fffffffu;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0afe8e;
L8c0afe72:;
  R(2)=LD32(R(4)+16);
  R(3)=LD32(R(15)+8);
  R(6)=LD32(R(4)+12);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)+12); if(k) goto L8c0afe88; }
  R(3)=LD32(R(4)+24);
  c->t=(int32_t)R(3)>=(int32_t)R(5);
  if(c->t) goto L8c0afe88;
  R(5)=LD32(R(4)+24);
  R(7)=R(6);
L8c0afe88:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0afe72;
L8c0afe8e:;
  ST32(R(13),R(7));
  { R(2)=0xau; { f_8c0aff6e(c); return; } }
L8c0afe94:;
  R(0)=R(10);
  R(2)=~R(8);
  c->t=(int32_t)R(0)==2;
  ST32(R(15),R(2));
  { uint32_t k=!c->t; R(5)=R(14); if(k) goto L8c0afeb6; }
  R(4)=LD32(R(15)+12);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0afeb6;
L8c0afea8:;
  R(2)=LD32(R(4)+16);
  R(3)=LD32(R(15));
  R(2)&=R(3);
  ST32(R(4)+16,R(2));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0afea8;
L8c0afeb6:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0afecc;
  R(4)=LD32(R(15)+12);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0afecc;
L8c0afec4:;
  ST32(R(4)+16,R(14));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0afec4;
L8c0afecc:;
  c->t=(R(9)&R(9))==0;
  if(c->t) { f_8c0aff6a(c); return; }
  R(4)=LD32(R(9));
  c->t=(R(4)&R(4))==0;
  if(c->t) { f_8c0aff6a(c); return; }
  { f_8c0afed6(c); return; }
}
void f_8c0afed6(SH4Ctx *c) {
L8c0afed6:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==126;
  if(!c->t) goto L8c0afee4;
  R(2)=LD32(R(4)+16);
  R(3)=LD32(R(15)+8);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aff64;
L8c0afee4:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(5)+=0x1u; if(k) goto L8c0aff04; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0aff04;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0aff10;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0aff10;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0aff16;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0aff60;
  {  goto L8c0aff64; }
L8c0aff04:;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(3)+16);
  R(2)|=R(8);
  ST32(R(3)+16,R(2));
  {  goto L8c0aff64; }
L8c0aff10:;
  R(1)=LD32(R(4)+12);
  { ST32(R(1)+16,R(8)); goto L8c0aff64; }
L8c0aff16:;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(15));
  R(1)=LD32(R(3)+16);
  R(1)&=R(2);
  ST32(R(3)+16,R(1));
  {  goto L8c0aff64; }
L8c0aff60:;
  R(3)=LD32(R(4)+12);
  ST32(R(3)+16,R(14));
L8c0aff64:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0afed6;
  { f_8c0aff6a(c); return; }
}
void f_8c0aff60(SH4Ctx *c) {
  R(3)=LD32(R(4)+12);
  ST32(R(3)+16,R(14));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) { f_8c0afed6(c); return; }
  { f_8c0aff6a(c); return; }
}
void f_8c0aff6a(SH4Ctx *c) {
  R(2)=0x6u;
  ST32(R(13),R(5));
  { f_8c0aff6e(c); return; }
}
void f_8c0aff6e(SH4Ctx *c) {
  { ST32(R(13)+12,R(2)); { f_8c0aff7a(c); return; } }
}
void f_8c0aff72(SH4Ctx *c) {
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0aff7au; R(4)=0x27u; f_8c074080(c); }
  { f_8c0aff7a(c); return; }
}
void f_8c0aff7a(SH4Ctx *c) {
  R(0)=R(11);
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
void f_8c0aff90(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(5);
  R(14)=R(6);
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(13)=LD32(R(13)+4);
  { uint32_t tg=R(13); c->pr=0x8c0affa6u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15),R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c0affb6u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(5)=R(0);
  R(7)=LD32(R(14));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(6)=0x0u; if(k) goto L8c0affd4; }
L8c0affc4:;
  R(2)=LD32(R(4)+12);
  c->t=R(2)==R(7);
  if(!c->t) goto L8c0affce;
  { R(6)=R(4); goto L8c0affd4; }
L8c0affce:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0affc4;
L8c0affd4:;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0affdc; }
  R(4)=LD32(R(6)+16);
L8c0affdc:;
  R(3)=0x2bu;
  R(0)=R(5);
  ST32(R(14),R(4));
  ST32(R(14)+12,R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0affee(SH4Ctx *c) {
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
  R(15)+=0xffffffd0u;
  R(14)=R(6);
  R(6)=0x8c0c76fcu;
  R(13)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c0b001c; }
  ST32(R(15),R(5));
  { ST32(R(6),R(10)); goto L8c0b001e; }
L8c0b001c:;
  ST32(R(15),R(4));
L8c0b001e:;
  R(6)=R(15);
  R(12)=LD32(R(13)+4);
  R(6)+=0x20u;
  { uint32_t tg=R(12); c->pr=0x8c0b0028u; R(5)=R(13); sh4_call(c,tg); }
  R(13)=LD32(R(15));
  R(12)=R(0);
  R(0)=0x20u;
  R(13)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(13)=LD32(R(13)+24);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(11)=0x6u; if(k) goto L8c0b0040; }
  R(2)=0xffffffffu;
  { ST32(R(14),R(2)); goto L8c0b00a2; }
L8c0b0040:;
  R(3)=0x8c0518c0u;
  { c->pr=0x8c0b0046u; R(4)=R(13); f_8c0518c0(c); }
  R(3)=0x8c0518d6u;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c0b004eu; R(4)=R(13); f_8c0518d6(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(5)=R(0); if(k) goto L8c0b0062; }
  R(3)=0x8c051a0au;
  R(5)=0x0u;
  R(8)=0x1u;
  { c->pr=0x8c0b005eu; R(4)=R(13); f_8c051a0a(c); }
  {  goto L8c0b0072; }
L8c0b0062:;
  R(3)=LD32(R(15)+4);
  R(3)+=0xffffffffu;
  c->t=R(5)==R(3);
  if(!c->t) goto L8c0b00a0;
  R(2)=0x8c051a0au;
  R(8)=0x2u;
  { c->pr=0x8c0b0072u; R(4)=R(13); f_8c051a0a(c); }
L8c0b0072:;
  { R(9)=R(0); goto L8c0b00a6; }
L8c0b00a0:;
  ST32(R(14),R(10));
L8c0b00a2:;
  { ST32(R(14)+12,R(11)); goto L8c0b0138; }
L8c0b00a6:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c0b00b4;
  R(2)=0x8c09d94eu;
  { c->pr=0x8c0b00b2u; R(4)=R(9); f_8c09d94e(c); }
  fp_mov(c,15,0);
L8c0b00b4:;
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0x8u;
  { c->pr=0x8c0b00c0u; R(4)=LD32(R(4)+32); f_8c0163ce(c); }
  R(2)=0x8c09d940u;
  R(5)=R(15);
  R(5)+=0x14u;
  { c->pr=0x8c0b00cau; R(4)=R(9); f_8c09d940(c); }
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,0,5,4);
  if(!c->t) goto L8c0b00ee;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0b00ee;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0b0134;
L8c0b00ee:;
  R(0)=0x10u;
  fp_mov(c,1,5);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,1,1,4);
  fp_arith(c,1,3,0);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,12,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,13,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,14,R(0)+R(15));
  fp_arith(c,1,0,2);
  fp_arith(c,1,13,12);
  fp_mov(c,2,5);
  fp_arith(c,1,14,12);
  fp_arith(c,1,2,4);
  fp_mov(c,3,0);
  fp_mov(c,0,1);
  fp_arith(c,2,13,14);
  fp_fmac(c,13,2);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,3);
  fp_fmac(c,13,2);
  fp_unary(c,2,13);
  fp_cmp(c,1,15,13);
  if(!c->t) goto L8c0b0134;
  { ST32(R(14),R(8)); goto L8c0b0136; }
L8c0b0134:;
  ST32(R(14),R(10));
L8c0b0136:;
  ST32(R(14)+12,R(11));
L8c0b0138:;
  R(0)=R(12);
  R(15)+=0x30u;
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
void f_8c0b00a0(SH4Ctx *c) {
  ST32(R(14),R(10));
  { ST32(R(14)+12,R(11)); goto L8c0b0138; }
L8c0b0138:;
  R(0)=R(12);
  R(15)+=0x30u;
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
void f_8c0b0156(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(6));
  R(6)=0x8c0c76fcu;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0b016e;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0b0170; }
L8c0b016e:;
  ST32(R(15),R(4));
L8c0b0170:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0b017c;
  { R(4)=0x0u; goto L8c0b0180; }
L8c0b017c:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
L8c0b0180:;
  R(2)=0x8c0a1746u;
  { c->pr=0x8c0b0186u;  f_8c0a1746(c); }
  R(3)=LD32(R(15)+4);
  R(4)=R(0);
  R(2)=0x2bu;
  ST32(R(3),R(4));
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0b019c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c0b01acu; R(14)=R(6); sh4_call(c,tg); }
  R(6)=LD32(R(14));
  R(3)=0x20u;
  R(1)=0x1u;
  R(4)=R(6)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  R(3)=0x2bu;
  R(1)=sh4_shad(R(1),R(4));
  R(4)=R(1);
  ST32(R(14),R(1));
  ST32(R(14)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0200(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(14)=R(5);
  ST32(R(15)+4,R(4));
  R(4)=R(14);
  R(4)+=0xfffffff4u;
  R(3)=0x99u;
  ST32(R(15),R(6));
  R(4)=LD32(R(4));
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0b024c;
  R(6)=R(15);
  R(1)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x18u;
  { uint32_t tg=R(1); c->pr=0x8c0b0224u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c083140u;
  ST32(R(15)+8,R(0));
  R(5)+=0xcu;
  R(6)=LD32(R(15)+24);
  { c->pr=0x8c0b0232u; R(4)=LD32(R(15)+4); f_8c083140(c); }
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0b023cu; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(0)=LD32(R(15)+8);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0b024c:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b0254u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b024c(SH4Ctx *c) {
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b0254u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b025e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(6));
  R(14)=R(5);
  R(6)=0x8c0c76fcu;
  R(7)=R(14);
  R(7)+=0xfffffff4u;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(7)=LD32(R(7)); if(k) goto L8c0b02a0; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0b02a2; }
L8c0b02a0:;
  ST32(R(15),R(4));
L8c0b02a2:;
  R(3)=0x9au;
  c->t=R(7)==R(3);
  if(!c->t) goto L8c0b02bc;
  R(2)=0x8c055032u;
  R(8)=LD32(R(15)+4);
  { c->pr=0x8c0b02b0u; R(4)=LD32(R(15)); f_8c055032(c); }
  R(0)=R(0)&0xFFFF;
  R(2)=0x6u;
  ST32(R(8),R(0));
  R(3)=LD32(R(15)+4);
  { ST32(R(3)+12,R(2)); goto L8c0b02c4; }
L8c0b02bc:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b02c4u; R(4)=0x27u; f_8c074080(c); }
L8c0b02c4:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b02a0(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(3)=0x9au;
  c->t=R(7)==R(3);
  if(!c->t) goto L8c0b02bc;
  R(2)=0x8c055032u;
  R(8)=LD32(R(15)+4);
  { c->pr=0x8c0b02b0u; R(4)=LD32(R(15)); f_8c055032(c); }
  R(0)=R(0)&0xFFFF;
  R(2)=0x6u;
  ST32(R(8),R(0));
  R(3)=LD32(R(15)+4);
  { ST32(R(3)+12,R(2)); goto L8c0b02c4; }
L8c0b02bc:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b02c4u; R(4)=0x27u; f_8c074080(c); }
L8c0b02c4:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b02d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(13)=R(5);
  R(14)=R(6);
  R(6)=R(14);
  R(5)=R(13);
  ST32(R(15),R(4));
  R(12)=R(14);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c0b02f4u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  R(1)=0x9cu;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0b0340;
  R(1)=0x9du;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0b03bc;
  {  goto L8c0b0450; }
L8c0b0340:;
  R(2)=LD32(R(12));
  R(3)=R(15);
  R(3)+=0x14u;
  R(1)=LD32(R(12)+4);
  ST32(R(3),R(2));
  R(6)=R(14);
  R(5)=R(13);
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(12)+8);
  ST32(R(3)+8,R(2));
  R(0)=LD32(R(13)+4);
  { uint32_t tg=R(0); c->pr=0x8c0b035au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x10u;
  R(3)=R(15);
  R(2)=LD32(R(14));
  R(3)+=0x8u;
  R(1)=LD32(R(14)+4);
  ST32(R(3),R(2));
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(14)+8);
  ST32(R(3)+8,R(2));
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
  fp_st(c,2,R(12));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  R(0)=0x4u;
  fp_st(c,2,R(0)+R(12));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(12));
  { R(0)=R(5); goto L8c0b045a; }
L8c0b03bc:;
  R(0)=0x8c0b0480u;
  fp_ld(c,7,R(12));
  fp_ld(c,5,R(0));
  R(0)=0x8c0b0484u;
  fp_ld(c,4,R(0));
  fp_mov(c,6,7);
  fp_arith(c,0,6,4);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,6,2);
  if(!c->t) goto L8c0b03d4;
  { fp_mov(c,3,6); goto L8c0b03da; }
L8c0b03d4:;
  fp_mov(c,3,7);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0b03da:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0b041a;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(12));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0b03f0;
  fp_ld(c,3,R(0)+R(12));
  { fp_arith(c,0,3,4); goto L8c0b03f8; }
L8c0b03f0:;
  fp_ld(c,3,R(0)+R(12));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0b03f8:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0b041a;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(12));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0b040e;
  fp_ld(c,3,R(0)+R(12));
  { fp_arith(c,0,3,4); goto L8c0b0416; }
L8c0b040e:;
  fp_ld(c,3,R(0)+R(12));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0b0416:;
  fp_cmp(c,1,5,3);
  if(c->t) goto L8c0b0458;
L8c0b041a:;
  R(0)=0x4u;
  fp_ld(c,4,R(12));
  fp_ld(c,5,R(0)+R(12));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(12));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(12));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,3,R(0)+R(12));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(12)); goto L8c0b0458; }
L8c0b0450:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b0458u; R(4)=0x27u; f_8c074080(c); }
L8c0b0458:;
  R(0)=R(13);
L8c0b045a:;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0340(SH4Ctx *c) {
  R(2)=LD32(R(12));
  R(3)=R(15);
  R(3)+=0x14u;
  R(1)=LD32(R(12)+4);
  ST32(R(3),R(2));
  R(6)=R(14);
  R(5)=R(13);
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(12)+8);
  ST32(R(3)+8,R(2));
  R(0)=LD32(R(13)+4);
  { uint32_t tg=R(0); c->pr=0x8c0b035au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x10u;
  R(3)=R(15);
  R(2)=LD32(R(14));
  R(3)+=0x8u;
  R(1)=LD32(R(14)+4);
  ST32(R(3),R(2));
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(14)+8);
  ST32(R(3)+8,R(2));
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
  fp_st(c,2,R(12));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  R(0)=0x4u;
  fp_st(c,2,R(0)+R(12));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(12));
  { R(0)=R(5); goto L8c0b045a; }
L8c0b045a:;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b04a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(14)=R(5);
  R(3)=R(14);
  R(3)+=0xfffffff4u;
  ST32(R(15),R(6));
  R(2)=LD32(R(3));
  R(6)=R(15);
  R(6)+=0x14u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0b04beu; R(5)=R(14); sh4_call(c,tg); }
  R(3)=0x9eu;
  R(14)=R(0);
  R(2)=LD32(R(15)+4);
  R(13)=LD32(R(15)+20);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0b04fc;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0b04dc;
  R(1)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c0b04d8u; R(4)=LD32(R(13)+32); f_8c0163ce(c); }
  {  goto L8c0b04ea; }
L8c0b04dc:;
  R(0)=0x8u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
L8c0b04ea:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c0b04f4u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  { ST32(R(2)+12,R(3)); goto L8c0b0504; }
L8c0b04fc:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b0504u; R(4)=0x27u; f_8c074080(c); }
L8c0b0504:;
  R(0)=R(14);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(5);
  R(4)=R(14);
  R(4)+=0xfffffff4u;
  ST32(R(15),R(6));
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=(int32_t)R(0)==117;
  if(!c->t) goto L8c0b0568;
  R(3)=0x8c04bc36u;
  { c->pr=0x8c0b055eu; R(8)=LD32(R(15)); f_8c04bc36(c); }
  R(2)=0x6u;
  ST32(R(8),R(0));
  R(3)=LD32(R(15));
  { ST32(R(3)+12,R(2)); goto L8c0b0570; }
L8c0b0568:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b0570u; R(4)=0x27u; f_8c074080(c); }
L8c0b0570:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b057c(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(3)=0x8c0c76fcu;
  ST32(R(15)+4,R(2));
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(7)=0x0u; if(k) goto L8c0b059a; }
  ST32(R(15),R(1));
  R(2)=0x0u;
  R(1)=0x8c0c76fcu;
  { ST32(R(1),R(2)); goto L8c0b059c; }
L8c0b059a:;
  ST32(R(15),R(4));
L8c0b059c:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0b05e0;
  { R(4)=0x0u; goto L8c0b05e4; }
L8c0b05e0:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
L8c0b05e4:;
  R(1)=0x9fu;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0b05f8;
  R(4)=LD32(R(4)+4);
  R(0)=0x1cu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(7)=R(0);
L8c0b05f8:;
  R(3)=0x3u;
  R(0)=R(5);
  ST8(R(6),R(7));
  ST32(R(6)+12,R(3));
  { R(15)+=0x8u; return; }
}
void f_8c0b05e0(SH4Ctx *c) {
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(1)=0x9fu;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0b05f8;
  R(4)=LD32(R(4)+4);
  R(0)=0x1cu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(7)=R(0);
L8c0b05f8:;
  R(3)=0x3u;
  R(0)=R(5);
  ST8(R(6),R(7));
  ST32(R(6)+12,R(3));
  { R(15)+=0x8u; return; }
}
void f_8c0b0604(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(12)=R(5);
  R(14)=R(6);
  R(6)=R(14);
  R(5)=R(12);
  ST32(R(15),R(4));
  R(13)=R(14);
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c0b0628u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(12)=R(0);
  R(5)=R(12);
  R(6)=R(13);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+12);
  ST32(R(15)+4,R(1));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c0b063cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  R(1)=0xa0u;
  R(5)=(int32_t)(int16_t)LD16(R(14));
  fp_st(c,4,R(13));
  fp_st(c,4,R(0)+R(13));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(13));
  R(0)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0b066a;
  R(1)=0xa1u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0b06a0;
  R(1)=0xa2u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0b06a4;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0b06a8;
  {  goto L8c0b06ac; }
L8c0b066a:;
  { R(6)=0x2u; goto L8c0b06ae; }
L8c0b06a0:;
  { R(6)=0x1u; goto L8c0b06ae; }
L8c0b06a4:;
  { R(6)=0x3u; goto L8c0b06ae; }
L8c0b06a8:;
  { R(6)=0x0u; goto L8c0b06ae; }
L8c0b06ac:;
  R(6)=0xffu;
L8c0b06ae:;
  R(3)=0x8c0ae680u;
  R(2)=0x15u;
  R(7)=0x0u;
  ST32(R(14)+12,R(2));
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b06bcu; R(4)=LD32(R(15)+8); f_8c0ae680(c); }
  R(0)=LD32(R(15)+4);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b06a0(SH4Ctx *c) {
  { R(6)=0x1u; goto L8c0b06ae; }
L8c0b06ae:;
  R(3)=0x8c0ae680u;
  R(2)=0x15u;
  R(7)=0x0u;
  ST32(R(14)+12,R(2));
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b06bcu; R(4)=LD32(R(15)+8); f_8c0ae680(c); }
  R(0)=LD32(R(15)+4);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b06ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(0)=0x8c0b0708u;
  ST32(R(15),R(5));
  R(12)=0x8c0163ceu;
  R(5)=R(15);
  ST32(R(15)+4,R(6));
  R(5)+=0x14u;
  fp_ld(c,15,R(0));
  R(10)=R(4);
  R(11)=0x0u;
  { c->pr=0x8c0b06f0u; R(4)=LD32(R(10)+36); f_8c0163ce(c); }
  R(4)=LD32(R(15));
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5));
  { R(13)=R(5); goto L8c0b0772; }
L8c0b0720:;
  R(4)=R(13);
  R(14)=LD32(R(4));
  c->t=R(14)==R(10);
  if(c->t) goto L8c0b0770;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+4);
  R(3)=LD32(R(15)+4);
  R(1)=LD32(R(2)+32);
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0b0770;
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(12); c->pr=0x8c0b073cu; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,1,4,3);
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,1,5,0);
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  fp_arith(c,1,6,2);
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_mov(c,4,3);
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c0b0770;
  R(11)=R(14);
  fp_mov(c,15,4);
L8c0b0770:;
  R(13)=LD32(R(13)+4);
L8c0b0772:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0b0720;
  R(0)=R(11);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0720(SH4Ctx *c) {
L8c0b0720:;
  R(4)=R(13);
  R(14)=LD32(R(4));
  c->t=R(14)==R(10);
  if(c->t) goto L8c0b0770;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+4);
  R(3)=LD32(R(15)+4);
  R(1)=LD32(R(2)+32);
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0b0770;
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(12); c->pr=0x8c0b073cu; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,1,4,3);
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,1,5,0);
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  fp_arith(c,1,6,2);
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_mov(c,4,3);
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c0b0770;
  R(11)=R(14);
  fp_mov(c,15,4);
L8c0b0770:;
  R(13)=LD32(R(13)+4);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0b0720;
  R(0)=R(11);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b078a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  ST32(R(15)+4,R(6));
  R(14)=R(5);
  R(6)=0x8c0c76fcu;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0b07a4;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0b07a6; }
L8c0b07a4:;
  ST32(R(15),R(4));
L8c0b07a6:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x10u;
  { uint32_t tg=R(3); c->pr=0x8c0b07b0u; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=LD32(R(15)+28);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0b07c2;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c0b07c4; }
L8c0b07c2:;
  R(3)=LD32(R(15)+16);
L8c0b07c4:;
  ST32(R(15)+12,R(3));
  R(4)=LD32(R(15));
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0b07d0u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(6)=LD32(R(15)+12);
  R(5)=R(0);
  { c->pr=0x8c0b07d8u; R(4)=LD32(R(15)); f_8c0b06ca(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+4); if(k) goto L8c0b07e6; }
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0b07ea;
L8c0b07e6:;
  { R(3)=0x0u; goto L8c0b07ec; }
L8c0b07ea:;
  R(3)=LD32(R(4)+4);
L8c0b07ec:;
  ST32(R(2),R(3));
  R(3)=0xbu;
  R(2)=LD32(R(15)+4);
  ST32(R(2)+12,R(3));
  R(0)=LD32(R(15)+8);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b07fe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=R(5);
  R(13)=R(6);
  ST32(R(15)+4,R(4));
  R(14)=R(6);
  ST32(R(15),R(5));
  R(12)=LD32(R(12)+4);
  { uint32_t tg=R(12); c->pr=0x8c0b0818u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(2)=LD32(R(13));
  R(3)=R(15);
  R(3)+=0x8u;
  R(12)=R(0);
  R(1)=LD32(R(13)+4);
  R(6)=R(13);
  ST32(R(3),R(2));
  R(5)=R(12);
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(13)+8);
  ST32(R(3)+8,R(2));
  R(0)=LD32(R(12)+4);
  { uint32_t tg=R(0); c->pr=0x8c0b0834u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=0x8c05e55cu;
  R(4)=R(15);
  ST32(R(15),R(0));
  R(5)=R(13);
  { c->pr=0x8c0b0840u; R(4)+=0x8u; f_8c05e55c(c); }
  R(2)=0x8u;
  fp_mov(c,4,0);
  fp_st(c,4,R(14));
  ST32(R(14)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0880(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0717e0u;
  { c->pr=0x8c0b088eu; R(14)=R(4); f_8c0717e0(c); }
  R(3)=0x8c09daf2u;
  R(5)=R(14);
  ST32(R(15),R(0));
  { c->pr=0x8c0b0898u; R(4)=0x0u; f_8c09daf2(c); }
  R(5)=LD32(R(14)+4);
  R(4)=0x0u;
  R(3)=R(4);
  R(2)=0x8c054c74u;
  R(5)=LD32(R(5));
  R(13)=R(0);
  R(6)=R(3);
  R(7)=R(3);
  ST32(R(5)+8,R(4));
  R(5)=R(13);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b08b2u; R(4)=R(14); f_8c054c74(c); }
  R(15)+=0x4u;
  R(3)=0x8c09da3cu;
  R(5)=R(14);
  R(6)=R(0)&0xFF;
  { c->pr=0x8c0b08beu; R(4)=0x0u; f_8c09da3c(c); }
  R(2)=0x8c09dab4u;
  R(5)=R(14);
  R(6)=R(13);
  { c->pr=0x8c0b08c8u; R(4)=0x1u; f_8c09dab4(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b08d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c09daf2u;
  R(5)=R(4);
  R(14)=R(4);
  { c->pr=0x8c0b08e4u; R(4)=0x1u; f_8c09daf2(c); }
  R(3)=0x8c09da7au;
  R(5)=R(14);
  ST32(R(15),R(0));
  { c->pr=0x8c0b08eeu; R(4)=0x0u; f_8c09da7a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b0908;
  R(3)=0x8c055200u;
  R(5)=LD32(R(15));
  { c->pr=0x8c0b08fau; R(4)=R(14); f_8c055200(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b0908;
  R(3)=0x8c055420u;
  { c->pr=0x8c0b0904u; R(4)=R(14); f_8c055420(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b0912;
L8c0b0908:;
  R(0)=0x4u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0b0912:;
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0912(SH4Ctx *c) {
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b091c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c055420u;
  { c->pr=0x8c0b0924u;  f_8c055420(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b092e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x4u; return; }
L8c0b092e:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0b0936(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c055446u;
  { c->pr=0x8c0b093eu;  f_8c055446(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b0948;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x4u; return; }
L8c0b0948:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0b0950(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0717e0u;
  { c->pr=0x8c0b095cu; R(14)=R(4); f_8c0717e0(c); }
  R(3)=0x8c09da7au;
  R(5)=R(14);
  ST32(R(15),R(0));
  { c->pr=0x8c0b0966u; R(4)=0x0u; f_8c09da7a(c); }
  R(2)=0x8c123b74u;
  R(5)=R(14);
  R(3)=0x8c09da3cu;
  R(6)=LD32(R(2));
  R(6)+=R(0);
  { c->pr=0x8c0b0974u; R(4)=0x0u; f_8c09da3c(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b097e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c09da7au;
  R(5)=R(4);
  ST32(R(15),R(4));
  { c->pr=0x8c0b098cu; R(4)=0x0u; f_8c09da7a(c); }
  R(3)=0x8c123b74u;
  R(2)=LD32(R(3));
  c->t=R(2)>=R(0);
  if(c->t) goto L8c0b09e0;
  { R(4)=0x1u; goto L8c0b09e2; }
L8c0b09e0:;
  R(4)=0x4u;
L8c0b09e2:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c0b0a00(SH4Ctx *c) {
  R(0)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(4);
  R(1)=0x8c0cc1f4u;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0b0a10(SH4Ctx *c) {
  R(0)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(4);
  R(1)=0x8c0cc1f8u;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0b0a20(SH4Ctx *c) {
  R(0)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(4);
  R(1)=0x8c0cc118u;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0b0a30(SH4Ctx *c) {
  R(0)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(4);
  R(1)=0x8c0cc118u;
  R(0)+=R(3);
  R(2)=0x8c0cc1f0u;
  R(0)<<=2;
  R(0)=LD32(R(1)+R(0));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)=LD32(R(2)+R(0)); return; }
}
void f_8c0b0a4c(SH4Ctx *c) {
  { R(0)=0x12u; return; }
}
void f_8c0b0a50(SH4Ctx *c) {
  R(0)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(4);
  R(1)=0x8c0cc11cu;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0b0a60(SH4Ctx *c) {
  R(0)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(4);
  R(1)=0x8c0cc120u;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0b0aa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff94u;
  R(11)=R(5);
  R(5)=0x8c0c76fcu;
  R(14)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c0b0ac0; }
  ST32(R(15),R(4));
  { ST32(R(5),R(12)); goto L8c0b0ac2; }
L8c0b0ac0:;
  ST32(R(15),R(14));
L8c0b0ac2:;
  R(13)=R(15);
  R(13)+=0x1cu;
  R(6)=R(13);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  ST32(R(15)+8,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0ad2u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(11)=R(0);
  R(6)+=0x10u;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  ST32(R(15)+4,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0ae2u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(11)=R(0);
  R(6)+=0x20u;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  ST32(R(15)+24,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0af2u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(11)=R(0);
  R(6)+=0x30u;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  ST32(R(15)+20,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0b02u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(11)=R(0);
  R(6)+=0x40u;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  ST32(R(15)+16,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0b12u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+12,R(0));
  R(7)=LD32(R(15)+16);
  R(4)=LD32(R(15)+20);
  R(13)=LD32(R(15)+24);
  R(7)=LD32(R(7));
  R(4)=LD32(R(4));
  R(5)=LD32(R(15)+8);
  R(6)=LD32(R(15)+4);
  R(13)=LD32(R(13));
  R(3)=0x8c05cee0u;
  R(6)=LD32(R(6));
  R(5)=LD32(R(5));
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b0b38u; R(4)=R(14); f_8c05cee0(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(15)+=0x10u; if(k) goto L8c0b0b70; }
  R(2)=0x8c0bd850u;
  R(3)=0x64u;
  R(1)=0x8c0bd810u;
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x4cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  R(3)=0xffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c7a04u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  R(2)=0x8c012658u;
  { c->pr=0x8c0b0b64u; R(4)=0x42u; f_8c012658(c); }
  R(15)+=0x18u;
  R(3)=0x8c0125ccu;
  R(6)=0x65u;
  R(5)=0x8c0bd850u;
  { c->pr=0x8c0b0b70u; R(4)=0x0u; f_8c0125cc(c); }
L8c0b0b70:;
  R(0)=LD32(R(15)+12);
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0ba0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(13)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0b0bbc;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c0b0bbe; }
L8c0b0bbc:;
  ST32(R(15),R(13));
L8c0b0bbe:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c0b0bcau; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c05d0cau;
  ST32(R(15)+4,R(0));
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0b0bd4u; R(4)=R(13); f_8c05d0ca(c); }
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0be0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(13)=R(4);
  ST32(R(15)+4,R(6));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0b0c00;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c0b0c02; }
L8c0b0c00:;
  ST32(R(15),R(13));
L8c0b0c02:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c0b0c0eu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c05d6f2u;
  ST32(R(15)+8,R(0));
  R(8)=LD32(R(15)+4);
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c0b0c1au; R(4)=R(13); f_8c05d6f2(c); }
  R(0)=R(0)&0xFF;
  ST32(R(8),R(0));
  R(0)=LD32(R(15)+8);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0c2c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffa4u;
  R(12)=R(5);
  R(5)=0x8c0c76fcu;
  R(14)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0b0c80;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c0b0c82; }
L8c0b0c80:;
  ST32(R(15),R(14));
L8c0b0c82:;
  R(13)=R(15);
  R(13)+=0x1cu;
  R(6)=R(13);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  ST32(R(15)+8,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0c92u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(12)=R(0);
  R(6)+=0x10u;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  ST32(R(15)+4,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0ca2u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(12)=R(0);
  R(6)+=0x20u;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  ST32(R(15)+24,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0cb2u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(12)=R(0);
  R(6)+=0x30u;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  ST32(R(15)+20,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0cc2u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+12,R(0));
  R(0)=LD32(R(15)+8);
  R(3)=0x8c05d1f6u;
  R(0)=LD32(R(0));
  ST16(R(15)+16,R(0));
  R(0)=LD32(R(15)+4);
  R(0)=LD32(R(0));
  ST16(R(15)+4,R(0));
  R(0)=LD32(R(15)+24);
  R(0)=LD32(R(0));
  ST16(R(15)+8,R(0));
  R(4)=LD32(R(15)+20);
  R(4)=LD32(R(4));
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(7)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  R(6)+=0xffffffffu;
  R(5)=R(0);
  R(5)+=0xffffffffu;
  { uint32_t tg=R(3); c->pr=0x8c0b0cf2u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0b0d2c; }
  R(3)=0xd3u;
  R(6)=0x0u;
  R(2)=0x8c0bd850u;
  R(7)=0x4cu;
  R(1)=0x8c0bd810u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c7a04u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  R(3)=0x8c012658u;
  { c->pr=0x8c0b0d20u; R(4)=0x42u; f_8c012658(c); }
  R(15)+=0x18u;
  R(2)=0x8c0125ccu;
  R(5)=0x8c0bd850u;
  R(6)=0xd4u;
  { c->pr=0x8c0b0d2cu; R(4)=0x0u; f_8c0125cc(c); }
L8c0b0d2c:;
  R(0)=LD32(R(15)+12);
  R(15)+=0x5cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0c80(SH4Ctx *c) {
  ST32(R(15),R(14));
  R(13)=R(15);
  R(13)+=0x1cu;
  R(6)=R(13);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  ST32(R(15)+8,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0c92u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(12)=R(0);
  R(6)+=0x10u;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  ST32(R(15)+4,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0ca2u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(12)=R(0);
  R(6)+=0x20u;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  ST32(R(15)+24,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0cb2u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(13);
  R(12)=R(0);
  R(6)+=0x30u;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  ST32(R(15)+20,R(6));
  { uint32_t tg=R(3); c->pr=0x8c0b0cc2u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+12,R(0));
  R(0)=LD32(R(15)+8);
  R(3)=0x8c05d1f6u;
  R(0)=LD32(R(0));
  ST16(R(15)+16,R(0));
  R(0)=LD32(R(15)+4);
  R(0)=LD32(R(0));
  ST16(R(15)+4,R(0));
  R(0)=LD32(R(15)+24);
  R(0)=LD32(R(0));
  ST16(R(15)+8,R(0));
  R(4)=LD32(R(15)+20);
  R(4)=LD32(R(4));
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(7)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  R(6)+=0xffffffffu;
  R(5)=R(0);
  R(5)+=0xffffffffu;
  { uint32_t tg=R(3); c->pr=0x8c0b0cf2u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0b0d2c; }
  R(3)=0xd3u;
  R(6)=0x0u;
  R(2)=0x8c0bd850u;
  R(7)=0x4cu;
  R(1)=0x8c0bd810u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c7a04u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  R(3)=0x8c012658u;
  { c->pr=0x8c0b0d20u; R(4)=0x42u; f_8c012658(c); }
  R(15)+=0x18u;
  R(2)=0x8c0125ccu;
  R(5)=0x8c0bd850u;
  R(6)=0xd4u;
  { c->pr=0x8c0b0d2cu; R(4)=0x0u; f_8c0125cc(c); }
L8c0b0d2c:;
  R(0)=LD32(R(15)+12);
  R(15)+=0x5cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0d60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=0x8c05e612u;
  R(11)=R(6);
  ST32(R(15)+4,R(4));
  R(14)=R(5);
  R(5)=R(11);
  R(4)=R(15);
  ST32(R(15),R(7));
  R(6)=R(14);
  R(13)=LD32(R(15)+56);
  { c->pr=0x8c0b0d88u; R(4)+=0x8u; f_8c05e612(c); }
  R(0)=0x8u;
  R(5)=LD32(R(15));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,0,6);
  R(4)=R(15);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(6)=R(14);
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  { uint32_t tg=R(12); c->pr=0x8c0b0daeu; R(4)+=0x8u; sh4_call(c,tg); }
  R(0)=0x8u;
  R(3)=LD32(R(15)+52);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  c->fpul=R(3);
  fp_mov(c,13,15);
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  R(3)=0x8c09da7au;
  R(5)=LD32(R(15)+4);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_float(c,3);
  fp_arith(c,3,13,3);
  fp_mov(c,14,3);
  { c->pr=0x8c0b0ddcu; R(4)=0x5u; f_8c09da7a(c); }
  R(2)=0x8c123b74u;
  c->fpul=R(13);
  R(4)=LD32(R(2));
  fp_float(c,3);
  R(4)-=R(0);
  c->fpul=R(4);
  c->t=(int32_t)R(4)>=(int32_t)R(13);
  fp_float(c,2);
  fp_mov(c,15,3);
  { uint32_t k=c->t; fp_mov(c,4,2); if(k) goto L8c0b0dfa; }
  fp_mov(c,3,13);
  fp_arith(c,3,3,15);
  fp_mov(c,13,3);
  fp_arith(c,2,13,4);
L8c0b0dfa:;
  R(3)=LD32(R(15)+52);
  R(3)-=R(13);
  c->t=(int32_t)R(4)>(int32_t)R(3);
  { uint32_t k=!c->t; R(6)=R(14); if(k) goto L8c0b0e16; }
  fp_mov(c,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,2,14,13);
  fp_arith(c,3,14,15);
  fp_arith(c,2,3,4);
  fp_mov(c,4,3);
  fp_mov(c,13,14);
  fp_unary(c,0,4);
  fp_arith(c,0,13,4);
L8c0b0e16:;
  R(4)=R(15);
  R(5)=R(11);
  { uint32_t tg=R(12); c->pr=0x8c0b0e1eu; R(4)+=0x8u; sh4_call(c,tg); }
  R(0)=0x8u;
  R(3)=0x8c0474bcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
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
  { uint32_t tg=R(3); c->pr=0x8c0b0e5eu; fp_st(c,4,R(0)+R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0b0e6e; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0b0e6e:;
  fp_arith(c,2,13,3);
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(5)+=0x8u;
  fp_mov(c,2,13);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,13);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  R(6)=LD32(R(15));
  { uint32_t tg=R(3); c->pr=0x8c0b0e9eu; R(4)=R(11); sh4_call(c,tg); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b0eb2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(0)=0x4u;
  R(13)=R(5);
  R(10)=0x8c05e612u;
  R(14)=R(6);
  ST32(R(15),R(4));
  R(4)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x58u;
  R(12)=LD32(R(15)+R(0));
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(11)=R(7);
  R(6)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c0b0ee2u; R(4)+=0x24u; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c075f24u;
  R(4)=R(15);
  R(6)=R(11);
  R(5)+=0x24u;
  { c->pr=0x8c0b0ef0u; R(4)+=0x24u; f_8c075f24(c); }
  R(4)=R(15);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c0b0efau; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=R(15);
  R(2)=0x8c075f24u;
  R(4)=R(15);
  R(6)=R(11);
  R(5)+=0x18u;
  { c->pr=0x8c0b0f08u; R(4)+=0x18u; f_8c075f24(c); }
  R(5)=R(15);
  R(3)=0x8c075fb2u;
  R(4)=R(15);
  R(6)=0x0u;
  R(5)+=0x24u;
  { c->pr=0x8c0b0f16u; R(4)+=0x18u; f_8c075fb2(c); }
  R(0)=0x54u;
  R(5)=LD32(R(15));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x4u;
  fp_ld(c,15,R(0)+R(15));
  c->fpul=R(2);
  R(3)=0x8c09da7au;
  fp_float(c,3);
  fp_arith(c,3,15,3);
  fp_mov(c,13,3);
  { c->pr=0x8c0b0f2eu; R(4)=0x5u; f_8c09da7a(c); }
  R(2)=0x8c123b74u;
  c->fpul=R(12);
  R(4)=LD32(R(2));
  fp_float(c,3);
  R(4)-=R(0);
  c->fpul=R(4);
  c->t=(int32_t)R(4)>=(int32_t)R(12);
  fp_float(c,2);
  fp_mov(c,0,3);
  { uint32_t k=c->t; fp_mov(c,4,2); if(k) goto L8c0b0f4c; }
  fp_mov(c,3,15);
  fp_arith(c,3,3,0);
  fp_mov(c,15,3);
  fp_arith(c,2,15,4);
L8c0b0f4c:;
  R(0)=0x54u;
  R(3)=LD32(R(15)+R(0));
  R(3)-=R(12);
  c->t=(int32_t)R(4)>(int32_t)R(3);
  { uint32_t k=!c->t; R(5)=R(11); if(k) goto L8c0b0f6a; }
  fp_mov(c,3,15);
  fp_arith(c,3,3,0);
  fp_arith(c,2,13,15);
  fp_arith(c,3,13,0);
  fp_arith(c,2,3,4);
  fp_mov(c,4,3);
  fp_mov(c,15,13);
  fp_unary(c,0,4);
  fp_arith(c,0,15,4);
L8c0b0f6a:;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  { c->pr=0x8c0b0f72u; R(4)+=0xcu; f_8c05e6ea(c); }
  R(2)=0x8c0474bcu;
  { c->pr=0x8c0b0f78u;  f_8c0474bc(c); }
  c->fpul=R(0);
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0b0f88; }
  R(3)=0x4f800000u;
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0b0f88:;
  fp_arith(c,2,15,3);
  R(0)=0x8u;
  R(4)=R(15);
  R(6)=R(14);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c0b0f9au; R(4)+=0x24u; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c0a2f0eu;
  R(4)=R(15);
  R(6)=R(13);
  R(5)+=0x24u;
  { c->pr=0x8c0b0fa8u; R(4)+=0x8u; f_8c0a2f0e(c); }
  R(2)=0x8c05e5f4u;
  R(5)=R(13);
  R(6)=R(14);
  { c->pr=0x8c0b0fb2u; R(4)=R(13); f_8c05e5f4(c); }
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1020(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=R(4);
  R(4)=LD32(R(14)+4);
  R(3)=0x10u;
  c->fr[4]=0x00000000u;
  R(0)=0x10u;
  R(9)=R(5);
  R(3)+=R(4);
  R(3)=LD32(R(4)+4);
  R(9)+=0xfffffff4u;
  c->fr[3]=0x3F800000u;
  R(9)=LD32(R(9));
  R(1)=LD32(R(3)+32);
  R(2)=0x8000u;
  R(12)=0x8c09db78u;
  R(13)=0x8c09db2cu;
  R(1)|=R(2);
  R(10)=0x8c09da3cu;
  R(8)=0x8c075ca0u;
  ST32(R(3)+32,R(1));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=R(9);
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(11)=R(5); if(k) goto L8c0b109e; }
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0b109e;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0b109e;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0b107a;
  {  goto L8c0b117a; }
L8c0b107a:;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0b1082;
  {  goto L8c0b1216; }
L8c0b1082:;
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0b108a;
  {  goto L8c0b1216; }
L8c0b108a:;
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0b1092;
  {  goto L8c0b1216; }
L8c0b1092:;
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c0b109a;
  {  goto L8c0b1216; }
L8c0b109a:;
  {  goto L8c0b12de; }
L8c0b109e:;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0b10a8u; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(15);
  R(11)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b10b2u; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0b10bcu; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(15);
  R(11)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b10c6u; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0b10d0u; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(15);
  R(11)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b10dau; R(4)=0x2u; sh4_call(c,tg); }
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0b10e4u; R(4)=R(14); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(14); if(k) goto L8c0b10f6; }
  fp_ld(c,3,R(15));
  fp_ftrc(c,3);
  { R(6)=c->fpul; goto L8c0b10f8; }
L8c0b10f6:;
  R(6)=LD32(R(15));
L8c0b10f8:;
  { uint32_t tg=R(10); c->pr=0x8c0b10fcu; R(4)=0x3u; sh4_call(c,tg); }
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0b1106u; R(4)=R(14); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(14); if(k) goto L8c0b1118; }
  fp_ld(c,3,R(15));
  fp_ftrc(c,3);
  { R(6)=c->fpul; goto L8c0b111a; }
L8c0b1118:;
  R(6)=LD32(R(15));
L8c0b111a:;
  { uint32_t tg=R(10); c->pr=0x8c0b111eu; R(4)=0x4u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(5)=R(14);
  R(6)=LD32(R(2));
  { uint32_t tg=R(10); c->pr=0x8c0b1128u; R(4)=0x5u; sh4_call(c,tg); }
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b112eu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x8c075c60u;
  R(5)=R(0);
  { c->pr=0x8c0b1136u; R(4)=R(14); f_8c075c60(c); }
  R(0)=R(9);
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0b1162;
  R(6)=R(15);
  R(6)+=0x10u;
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b1148u; R(4)=0x1u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(0);
  { uint32_t tg=R(8); c->pr=0x8c0b1150u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} sh4_call(c,tg); }
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b1156u; R(4)=0x1u; sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b115eu; R(4)=0x0u; sh4_call(c,tg); }
  {  goto L8c0b12de; }
L8c0b1162:;
  R(6)=R(15);
  R(6)+=0x10u;
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b116eu; R(4)=0x2u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(0);
  { uint32_t tg=R(8); c->pr=0x8c0b1176u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} sh4_call(c,tg); }
  {  goto L8c0b12de; }
L8c0b117a:;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0b1184u; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(15);
  R(11)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b118eu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0b1198u; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(15);
  R(11)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b11a2u; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0b11acu; R(4)=R(14); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(14); if(k) goto L8c0b11e0; }
  fp_ld(c,3,R(15));
  fp_ftrc(c,3);
  { R(6)=c->fpul; goto L8c0b11e2; }
L8c0b11e0:;
  R(6)=LD32(R(15));
L8c0b11e2:;
  { uint32_t tg=R(10); c->pr=0x8c0b11e6u; R(4)=0x2u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(5)=R(14);
  R(6)=LD32(R(2));
  { uint32_t tg=R(10); c->pr=0x8c0b11f0u; R(4)=0x3u; sh4_call(c,tg); }
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b11f6u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x8c075c60u;
  R(5)=R(0);
  { c->pr=0x8c0b11feu; R(4)=R(14); f_8c075c60(c); }
  R(6)=R(15);
  R(6)+=0x10u;
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b120au; R(4)=0x1u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(0);
  { uint32_t tg=R(8); c->pr=0x8c0b1212u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} sh4_call(c,tg); }
  {  goto L8c0b12de; }
L8c0b1216:;
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0b1220u; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(15);
  R(11)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b122au; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0b1234u; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(15);
  R(11)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b123eu; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0b1248u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x8c09d9c0u;
  R(11)=R(0);
  fp_ld(c,4,R(15));
  R(5)=R(14);
  { c->pr=0x8c0b1254u; R(4)=0x2u; f_8c09d9c0(c); }
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0b125eu; R(4)=R(14); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(14); if(k) goto L8c0b1270; }
  fp_ld(c,3,R(15));
  fp_ftrc(c,3);
  { R(6)=c->fpul; goto L8c0b1272; }
L8c0b1270:;
  R(6)=LD32(R(15));
L8c0b1272:;
  { uint32_t tg=R(10); c->pr=0x8c0b1276u; R(4)=0x3u; sh4_call(c,tg); }
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0b1280u; R(4)=R(14); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(14); if(k) goto L8c0b1292; }
  fp_ld(c,3,R(15));
  fp_ftrc(c,3);
  { R(6)=c->fpul; goto L8c0b1294; }
L8c0b1292:;
  R(6)=LD32(R(15));
L8c0b1294:;
  { uint32_t tg=R(10); c->pr=0x8c0b1298u; R(4)=0x4u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(5)=R(14);
  R(6)=LD32(R(2));
  { uint32_t tg=R(10); c->pr=0x8c0b12a2u; R(4)=0x5u; sh4_call(c,tg); }
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b12a8u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x8c075c60u;
  R(5)=R(0);
  { c->pr=0x8c0b12b0u; R(4)=R(14); f_8c075c60(c); }
  R(6)=R(15);
  R(6)+=0x10u;
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b12bcu; R(4)=0x1u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(0);
  { uint32_t tg=R(8); c->pr=0x8c0b12c4u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} sh4_call(c,tg); }
  R(0)=R(9);
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c0b12d0;
  R(0)=R(9);
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c0b12de;
L8c0b12d0:;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b12d6u; R(4)=0x1u; sh4_call(c,tg); }
  R(5)=R(14);
  R(6)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b12deu; R(4)=0x0u; sh4_call(c,tg); }
L8c0b12de:;
  R(0)=R(11);
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
void f_8c0b11e0(SH4Ctx *c) {
  R(6)=LD32(R(15));
  { uint32_t tg=R(10); c->pr=0x8c0b11e6u; R(4)=0x2u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(5)=R(14);
  R(6)=LD32(R(2));
  { uint32_t tg=R(10); c->pr=0x8c0b11f0u; R(4)=0x3u; sh4_call(c,tg); }
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b11f6u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x8c075c60u;
  R(5)=R(0);
  { c->pr=0x8c0b11feu; R(4)=R(14); f_8c075c60(c); }
  R(6)=R(15);
  R(6)+=0x10u;
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b120au; R(4)=0x1u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(0);
  { uint32_t tg=R(8); c->pr=0x8c0b1212u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} sh4_call(c,tg); }
  {  goto L8c0b12de; }
L8c0b12de:;
  R(0)=R(11);
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
void f_8c0b12f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(12)=0x8c09da7au;
  R(14)=R(4);
  R(13)=0x8c09db78u;
  R(5)=R(4);
  c->fr[14]=0x3F800000u;
  c->fr[15]=0x00000000u;
  { c->pr=0x8c0b1314u; R(4)=0x5u; f_8c09da7a(c); }
  R(5)=R(14);
  R(8)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0b131cu; R(4)=0x3u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(8)+=R(0);
  R(3)=LD32(R(2));
  c->t=R(3)>=R(8);
  if(!c->t) goto L8c0b13a0;
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b132cu; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c075c60u;
  R(5)=R(0);
  { c->pr=0x8c0b1334u; R(4)=R(14); f_8c075c60(c); }
  R(0)=0xcu;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x14u;
  R(6)+=0xcu;
  fp_st(c,14,R(0)+R(15));
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b134cu; R(4)=0x2u; sh4_call(c,tg); }
  R(3)=0x8c075ca0u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b1356u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c075ca0(c); }
  R(3)=LD32(R(14)+4);
  R(2)=0xffff7fffu;
  R(3)=LD32(R(3)+4);
  R(1)=LD32(R(3)+32);
  R(1)&=R(2);
  ST32(R(3)+32,R(1));
  { R(0)=0x4u; goto L8c0b1414; }
L8c0b13a0:;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  { c->pr=0x8c0b13a8u; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b13aeu; R(4)=0x1u; sh4_call(c,tg); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b13b8u; R(4)+=0xcu; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b13beu; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b13c6u; R(4)=0x3u; sh4_call(c,tg); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x8u;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x18u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b13dau; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b13e4u; {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;} f_8c0b0d60(c); }
  R(15)+=0x8u;
  R(2)=0x8c075c60u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0b13f0u; R(4)=R(14); f_8c075c60(c); }
  R(0)=0xcu;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x14u;
  R(6)+=0xcu;
  fp_st(c,14,R(0)+R(15));
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b1408u; R(4)=0x2u; sh4_call(c,tg); }
  R(3)=0x8c075ca0u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b1412u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c075ca0(c); }
  R(0)=0x1u;
L8c0b1414:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b13a0(SH4Ctx *c) {
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  { c->pr=0x8c0b13a8u; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b13aeu; R(4)=0x1u; sh4_call(c,tg); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b13b8u; R(4)+=0xcu; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b13beu; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b13c6u; R(4)=0x3u; sh4_call(c,tg); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x8u;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x18u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b13dau; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b13e4u; {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;} f_8c0b0d60(c); }
  R(15)+=0x8u;
  R(2)=0x8c075c60u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0b13f0u; R(4)=R(14); f_8c075c60(c); }
  R(0)=0xcu;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x14u;
  R(6)+=0xcu;
  fp_st(c,14,R(0)+R(15));
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b1408u; R(4)=0x2u; sh4_call(c,tg); }
  R(3)=0x8c075ca0u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b1412u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c075ca0(c); }
  R(0)=0x1u;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1426(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(12)=0x8c09da7au;
  R(14)=R(4);
  R(13)=0x8c09db78u;
  R(5)=R(4);
  c->fr[14]=0x3F800000u;
  c->fr[15]=0x00000000u;
  { c->pr=0x8c0b1446u; R(4)=0x5u; f_8c09da7a(c); }
  R(5)=R(14);
  R(8)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0b144eu; R(4)=0x3u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(8)+=R(0);
  R(3)=LD32(R(2));
  c->t=R(3)>=R(8);
  if(!c->t) goto L8c0b14be;
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b145eu; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c075c60u;
  R(5)=R(0);
  { c->pr=0x8c0b1466u; R(4)=R(14); f_8c075c60(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b146cu; R(4)=0x0u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b1474u; R(4)=0x2u; sh4_call(c,tg); }
  R(2)=0x8c05e612u;
  R(4)=R(15);
  R(5)=R(0);
  R(4)+=0x10u;
  { c->pr=0x8c0b1480u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c05e612(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b1486u; R(4)=0x1u; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(4)=R(15);
  R(6)=R(0);
  R(5)+=0xcu;
  { c->pr=0x8c0b1494u; R(4)+=0xcu; f_8c05e5f4(c); }
  R(0)=0x18u;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,15,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x20u;
  R(3)=0x8c075ca0u;
  R(5)+=0xcu;
  fp_st(c,14,R(0)+R(15));
  R(6)+=0x18u;
  { c->pr=0x8c0b14aeu; R(4)=R(14); f_8c075ca0(c); }
  R(3)=LD32(R(14)+4);
  R(2)=0xffff7fffu;
  R(3)=LD32(R(3)+4);
  R(1)=LD32(R(3)+32);
  R(1)&=R(2);
  ST32(R(3)+32,R(1));
  { R(0)=0x4u; goto L8c0b1554; }
L8c0b14be:;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  { c->pr=0x8c0b14c6u; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b14ccu; R(4)=0x1u; sh4_call(c,tg); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b14d6u; R(4)+=0x18u; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b14dcu; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b14e4u; R(4)=0x3u; sh4_call(c,tg); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x8u;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x24u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b14f8u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b1502u; {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;} f_8c0b0d60(c); }
  R(15)+=0x8u;
  R(2)=0x8c075c60u;
  R(5)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c0b150eu; R(4)=R(14); f_8c075c60(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b1514u; R(4)=0x0u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b151cu; R(4)=0x2u; sh4_call(c,tg); }
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(5)=R(0);
  R(4)+=0x10u;
  { c->pr=0x8c0b1528u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c05e612(c); }
  R(5)=R(15);
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x18u;
  R(5)+=0xcu;
  { c->pr=0x8c0b1538u; R(4)+=0xcu; f_8c05e5f4(c); }
  R(0)=0x18u;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,15,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x20u;
  R(3)=0x8c075ca0u;
  R(5)+=0xcu;
  fp_st(c,14,R(0)+R(15));
  R(6)+=0x18u;
  { c->pr=0x8c0b1552u; R(4)=R(14); f_8c075ca0(c); }
  R(0)=0x1u;
L8c0b1554:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1566(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=R(4);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09da7au;
  { c->pr=0x8c0b1576u; R(4)=0x3u; f_8c09da7a(c); }
  R(2)=0x8c09da7au;
  R(5)=R(14);
  R(8)=R(0);
  { c->pr=0x8c0b1580u; R(4)=0x2u; f_8c09da7a(c); }
  R(2)=0x8c123b74u;
  R(8)+=R(0);
  R(3)=LD32(R(2));
  c->t=R(3)>=R(8);
  if(!c->t) goto L8c0b159a;
  R(3)=LD32(R(14)+4);
  R(1)=0xffff7fffu;
  R(3)=LD32(R(3)+4);
  R(0)=LD32(R(3)+32);
  R(0)&=R(1);
  ST32(R(3)+32,R(0));
  { R(0)=0x4u; goto L8c0b159c; }
L8c0b159a:;
  R(0)=0x1u;
L8c0b159c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1600(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(12)=0x8c09da7au;
  R(14)=R(4);
  R(13)=0x8c09db78u;
  R(5)=R(4);
  c->fr[14]=0x3F800000u;
  c->fr[15]=0x00000000u;
  { c->pr=0x8c0b1620u; R(4)=0x5u; f_8c09da7a(c); }
  R(5)=R(14);
  R(8)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0b1628u; R(4)=0x3u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(8)+=R(0);
  R(3)=LD32(R(2));
  c->t=R(3)>=R(8);
  if(!c->t) goto L8c0b1664;
  R(0)=0xcu;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x14u;
  R(6)+=0xcu;
  fp_st(c,14,R(0)+R(15));
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b164au; R(4)=0x2u; sh4_call(c,tg); }
  R(3)=0x8c075ca0u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b1654u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c075ca0(c); }
  R(3)=LD32(R(14)+4);
  R(2)=0xffff7fffu;
  R(3)=LD32(R(3)+4);
  R(1)=LD32(R(3)+32);
  R(1)&=R(2);
  ST32(R(3)+32,R(1));
  { R(0)=0x4u; goto L8c0b16d8; }
L8c0b1664:;
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b166au; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(5)=R(0);
  { c->pr=0x8c0b1672u; R(4)=R(15); f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b1678u; R(4)=0x2u; sh4_call(c,tg); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b1682u; R(4)+=0x18u; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0b1688u; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b1690u; R(4)=0x3u; sh4_call(c,tg); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x8u;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x24u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b16a4u; R(4)=0x1u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b16aeu; {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;} f_8c0b0d60(c); }
  R(15)+=0x8u;
  R(0)=0xcu;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,15,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x14u;
  R(3)=0x8c075ca0u;
  R(5)+=0x18u;
  fp_st(c,14,R(0)+R(15));
  R(6)+=0xcu;
  { c->pr=0x8c0b16cau; R(4)=R(14); f_8c075ca0(c); }
  R(2)=0x8c09db2cu;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x18u;
  { c->pr=0x8c0b16d6u; R(4)=0x0u; f_8c09db2c(c); }
  R(0)=0x1u;
L8c0b16d8:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b16ea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(13)=0x8c09da7au;
  R(5)=R(4);
  R(14)=R(4);
  { c->pr=0x8c0b1700u; R(4)=0x5u; f_8c09da7a(c); }
  R(5)=R(14);
  R(8)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b1708u; R(4)=0x3u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(8)+=R(0);
  R(3)=LD32(R(2));
  c->t=R(3)>=R(8);
  if(!c->t) goto L8c0b1722;
  R(3)=LD32(R(14)+4);
  R(1)=0xffff7fffu;
  R(3)=LD32(R(3)+4);
  R(0)=LD32(R(3)+32);
  R(0)&=R(1);
  ST32(R(3)+32,R(0));
  { R(0)=0x4u; goto L8c0b17bc; }
L8c0b1722:;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0b172cu; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(6)=R(15);
  R(2)=0x8c015e64u;
  R(4)=LD32(R(14)+36);
  R(5)=R(15);
  R(7)=R(15);
  R(6)+=0x18u;
  { c->pr=0x8c0b173cu; R(5)+=0x18u; f_8c015e64(c); }
  R(12)=0x8c09db78u;
  R(5)=R(14);
  { c->pr=0x8c0b1744u; R(4)=0x0u; f_8c09db78(c); }
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b174eu; R(4)+=0x18u; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b1754u; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b175cu; R(4)=0x3u; sh4_call(c,tg); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(2)=R(15);
  R(3)=0x8c09d9feu;
  R(2)+=0x14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b176cu; R(4)=0x2u; f_8c09d9fe(c); }
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x10u;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b177au; R(4)=0x1u; sh4_call(c,tg); }
  R(5)=R(15);
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  R(4)=R(14);
  R(6)=R(0);
  R(5)+=0x2cu;
  { c->pr=0x8c0b1788u; fp_ld(c,4,R(15));R(15)+=fp_sz(c); f_8c0b0eb2(c); }
  R(15)+=0xcu;
  R(3)=0x8c075c60u;
  R(5)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c0b1794u; R(4)=R(14); f_8c075c60(c); }
  R(0)=0x18u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,4,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x20u;
  c->fr[3]=0x3F800000u;
  R(6)+=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b17b0u; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c075ca0u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b17bau; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c075ca0(c); }
  R(0)=0x1u;
L8c0b17bc:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b17ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(13)=0x8c09da7au;
  R(5)=R(4);
  R(14)=R(4);
  { c->pr=0x8c0b17e0u; R(4)=0x5u; f_8c09da7a(c); }
  R(5)=R(14);
  R(8)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b17e8u; R(4)=0x3u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(8)+=R(0);
  R(3)=LD32(R(2));
  c->t=R(3)>=R(8);
  if(!c->t) goto L8c0b1860;
  R(3)=LD32(R(14)+4);
  R(1)=0xffff7fffu;
  R(3)=LD32(R(3)+4);
  R(0)=LD32(R(3)+32);
  R(0)&=R(1);
  ST32(R(3)+32,R(0));
  { R(0)=0x4u; goto L8c0b18fa; }
L8c0b1860:;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0b186au; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(2)=0x8c015e64u;
  R(6)=R(15);
  R(4)=LD32(R(14)+36);
  R(7)=R(15);
  R(6)+=0x18u;
  R(7)+=0x18u;
  { c->pr=0x8c0b187au; R(5)=R(15); f_8c015e64(c); }
  R(12)=0x8c09db78u;
  R(5)=R(14);
  { c->pr=0x8c0b1882u; R(4)=0x0u; f_8c09db78(c); }
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b188cu; R(4)+=0x18u; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b1892u; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b189au; R(4)=0x3u; sh4_call(c,tg); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(2)=R(15);
  R(3)=0x8c09d9feu;
  R(2)+=0x14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b18aau; R(4)=0x2u; f_8c09d9fe(c); }
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x10u;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b18b8u; R(4)=0x1u; sh4_call(c,tg); }
  R(5)=R(15);
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  R(4)=R(14);
  R(6)=R(0);
  R(5)+=0x2cu;
  { c->pr=0x8c0b18c6u; fp_ld(c,4,R(15));R(15)+=fp_sz(c); f_8c0b0eb2(c); }
  R(15)+=0xcu;
  R(3)=0x8c075c60u;
  R(5)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c0b18d2u; R(4)=R(14); f_8c075c60(c); }
  R(0)=0x18u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,4,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x20u;
  c->fr[3]=0x3F800000u;
  R(6)+=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b18eeu; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c075ca0u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b18f8u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c075ca0(c); }
  R(0)=0x1u;
L8c0b18fa:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1860(SH4Ctx *c) {
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0b186au; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(2)=0x8c015e64u;
  R(6)=R(15);
  R(4)=LD32(R(14)+36);
  R(7)=R(15);
  R(6)+=0x18u;
  R(7)+=0x18u;
  { c->pr=0x8c0b187au; R(5)=R(15); f_8c015e64(c); }
  R(12)=0x8c09db78u;
  R(5)=R(14);
  { c->pr=0x8c0b1882u; R(4)=0x0u; f_8c09db78(c); }
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b188cu; R(4)+=0x18u; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b1892u; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b189au; R(4)=0x3u; sh4_call(c,tg); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(2)=R(15);
  R(3)=0x8c09d9feu;
  R(2)+=0x14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b18aau; R(4)=0x2u; f_8c09d9fe(c); }
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x10u;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b18b8u; R(4)=0x1u; sh4_call(c,tg); }
  R(5)=R(15);
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  R(4)=R(14);
  R(6)=R(0);
  R(5)+=0x2cu;
  { c->pr=0x8c0b18c6u; fp_ld(c,4,R(15));R(15)+=fp_sz(c); f_8c0b0eb2(c); }
  R(15)+=0xcu;
  R(3)=0x8c075c60u;
  R(5)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c0b18d2u; R(4)=R(14); f_8c075c60(c); }
  R(0)=0x18u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,4,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x20u;
  c->fr[3]=0x3F800000u;
  R(6)+=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(5)=R(14);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0b18eeu; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=0x8c075ca0u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c0b18f8u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c075ca0(c); }
  R(0)=0x1u;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1908(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(13)=0x8c09da7au;
  R(5)=R(4);
  R(14)=R(4);
  { c->pr=0x8c0b191cu; R(4)=0x5u; f_8c09da7a(c); }
  R(5)=R(14);
  R(8)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b1924u; R(4)=0x3u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(8)+=R(0);
  R(3)=LD32(R(2));
  c->t=R(3)>=R(8);
  if(!c->t) goto L8c0b193e;
  R(3)=LD32(R(14)+4);
  R(1)=0xffff7fffu;
  R(3)=LD32(R(3)+4);
  R(0)=LD32(R(3)+32);
  R(0)&=R(1);
  ST32(R(3)+32,R(0));
  { R(0)=0x4u; goto L8c0b19cc; }
L8c0b193e:;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c0b1948u; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(6)=R(15);
  R(2)=0x8c015e64u;
  R(4)=LD32(R(14)+36);
  R(5)=R(15);
  R(7)=R(15);
  R(6)+=0x18u;
  { c->pr=0x8c0b1958u; R(5)+=0x18u; f_8c015e64(c); }
  R(3)=0x8c09db78u;
  R(5)=R(14);
  { c->pr=0x8c0b1960u; R(4)=0x1u; f_8c09db78(c); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b196au; R(4)+=0x18u; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b1970u; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b1978u; R(4)=0x3u; sh4_call(c,tg); }
  R(3)=0x8c09db78u;
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b1982u; R(4)=0x0u; f_8c09db78(c); }
  R(2)=0x8c09d9feu;
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b198cu; R(4)=0x2u; f_8c09d9fe(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x24u;
  R(7)+=0xcu;
  R(6)+=0x30u;
  { c->pr=0x8c0b199eu; R(4)=R(14); f_8c0b0eb2(c); }
  R(15)+=0xcu;
  R(0)=0xcu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c075ca0u;
  R(0)=0x14u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x18u;
  R(6)+=0xcu;
  { c->pr=0x8c0b19beu; R(4)=R(14); f_8c075ca0(c); }
  R(2)=0x8c09db2cu;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x18u;
  { c->pr=0x8c0b19cau; R(4)=0x0u; f_8c09db2c(c); }
  R(0)=0x1u;
L8c0b19cc:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b19d8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(13)=0x8c09da7au;
  R(5)=R(4);
  R(14)=R(4);
  { c->pr=0x8c0b19ecu; R(4)=0x5u; f_8c09da7a(c); }
  R(5)=R(14);
  R(8)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c0b19f4u; R(4)=0x3u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(8)+=R(0);
  R(3)=LD32(R(2));
  c->t=R(3)>=R(8);
  if(!c->t) goto L8c0b1a60;
  R(3)=LD32(R(14)+4);
  R(1)=0xffff7fffu;
  R(3)=LD32(R(3)+4);
  R(0)=LD32(R(3)+32);
  R(0)&=R(1);
  ST32(R(3)+32,R(0));
  { R(0)=0x4u; goto L8c0b1aee; }
L8c0b1a60:;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c0b1a6au; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(2)=0x8c015e64u;
  R(6)=R(15);
  R(4)=LD32(R(14)+36);
  R(7)=R(15);
  R(6)+=0x18u;
  R(7)+=0x18u;
  { c->pr=0x8c0b1a7au; R(5)=R(15); f_8c015e64(c); }
  R(3)=0x8c09db78u;
  R(5)=R(14);
  { c->pr=0x8c0b1a82u; R(4)=0x1u; f_8c09db78(c); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b1a8cu; R(4)+=0x18u; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b1a92u; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b1a9au; R(4)=0x3u; sh4_call(c,tg); }
  R(3)=0x8c09db78u;
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b1aa4u; R(4)=0x0u; f_8c09db78(c); }
  R(2)=0x8c09d9feu;
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b1aaeu; R(4)=0x2u; f_8c09d9fe(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x24u;
  R(7)+=0xcu;
  R(6)+=0x30u;
  { c->pr=0x8c0b1ac0u; R(4)=R(14); f_8c0b0eb2(c); }
  R(15)+=0xcu;
  R(0)=0xcu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c075ca0u;
  R(0)=0x14u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x18u;
  R(6)+=0xcu;
  { c->pr=0x8c0b1ae0u; R(4)=R(14); f_8c075ca0(c); }
  R(2)=0x8c09db2cu;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x18u;
  { c->pr=0x8c0b1aecu; R(4)=0x0u; f_8c09db2c(c); }
  R(0)=0x1u;
L8c0b1aee:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1a60(SH4Ctx *c) {
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c0b1a6au; R(4)=LD32(R(14)+36); f_8c0163ce(c); }
  R(2)=0x8c015e64u;
  R(6)=R(15);
  R(4)=LD32(R(14)+36);
  R(7)=R(15);
  R(6)+=0x18u;
  R(7)+=0x18u;
  { c->pr=0x8c0b1a7au; R(5)=R(15); f_8c015e64(c); }
  R(3)=0x8c09db78u;
  R(5)=R(14);
  { c->pr=0x8c0b1a82u; R(4)=0x1u; f_8c09db78(c); }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0b1a8cu; R(4)+=0x18u; f_8c05e6ea(c); }
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b1a92u; R(4)=0x4u; sh4_call(c,tg); }
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0b1a9au; R(4)=0x3u; sh4_call(c,tg); }
  R(3)=0x8c09db78u;
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b1aa4u; R(4)=0x0u; f_8c09db78(c); }
  R(2)=0x8c09d9feu;
  R(5)=R(14);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b1aaeu; R(4)=0x2u; f_8c09d9fe(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x24u;
  R(7)+=0xcu;
  R(6)+=0x30u;
  { c->pr=0x8c0b1ac0u; R(4)=R(14); f_8c0b0eb2(c); }
  R(15)+=0xcu;
  R(0)=0xcu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c075ca0u;
  R(0)=0x14u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x18u;
  R(6)+=0xcu;
  { c->pr=0x8c0b1ae0u; R(4)=R(14); f_8c075ca0(c); }
  R(2)=0x8c09db2cu;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x18u;
  { c->pr=0x8c0b1aecu; R(4)=0x0u; f_8c09db2c(c); }
  R(0)=0x1u;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1b20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(10)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)=R(6); if(k) goto L8c0b1b4c; }
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c0b1b4e; }
L8c0b1b4c:;
  ST32(R(15),R(10));
L8c0b1b4e:;
  R(11)=LD32(R(15));
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(5)=R(14);
  R(11)=LD32(R(11)+4);
  R(6)+=0x8u;
  R(11)=LD32(R(11)+16);
  { uint32_t tg=R(13); c->pr=0x8c0b1b60u; R(4)=R(10); sh4_call(c,tg); }
  R(6)=LD32(R(15)+8);
  R(13)=R(0);
  R(5)=0x2u;
  R(0)=R(6);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=0x1u; if(k) goto L8c0b1b80; }
  R(0)=0x74u;
  R(2)=(int32_t)(int8_t)LD8(R(11)+R(0));
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c0b1b7c;
  { R(14)=LD32(R(11)+12); goto L8c0b1bc2; }
L8c0b1b7c:;
  { R(14)=LD32(R(11)+4); goto L8c0b1bc2; }
L8c0b1b80:;
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0b1b88;
  { R(14)=LD32(R(11)); goto L8c0b1bc2; }
L8c0b1b88:;
  R(0)=0x75u;
  R(2)=(int32_t)(int8_t)LD8(R(11)+R(0));
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c0b1bc0;
  { R(14)=LD32(R(11)+8); goto L8c0b1bc2; }
L8c0b1bc0:;
  R(14)=LD32(R(11)+4);
L8c0b1bc2:;
  R(0)=LD32(R(15)+4);
  R(6)=0x10u;
  R(7)=0x80u;
  R(1)=0x8bu;
  R(0)-=R(1);
  R(1)=0x15u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0b1bd6;
  {  goto L8c0b1d32; }
L8c0b1bd6:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0b1be8u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0b1be2u+R(0));  switch(tg){ case 0x8c0b1c12u: goto L8c0b1c12; case 0x8c0b1c1au: goto L8c0b1c1a; case 0x8c0b1c38u: goto L8c0b1c38; case 0x8c0b1c42u: goto L8c0b1c42; case 0x8c0b1c4eu: goto L8c0b1c4e; case 0x8c0b1c5au: goto L8c0b1c5a; case 0x8c0b1c66u: goto L8c0b1c66; case 0x8c0b1c72u: goto L8c0b1c72; case 0x8c0b1c7eu: goto L8c0b1c7e; case 0x8c0b1c8au: goto L8c0b1c8a; case 0x8c0b1c96u: goto L8c0b1c96; case 0x8c0b1ca2u: goto L8c0b1ca2; case 0x8c0b1cc0u: goto L8c0b1cc0; case 0x8c0b1cccu: goto L8c0b1ccc; case 0x8c0b1cd8u: goto L8c0b1cd8; case 0x8c0b1ce4u: goto L8c0b1ce4; case 0x8c0b1cf0u: goto L8c0b1cf0; case 0x8c0b1cfcu: goto L8c0b1cfc; case 0x8c0b1d08u: goto L8c0b1d08; case 0x8c0b1d16u: goto L8c0b1d16; case 0x8c0b1d24u: goto L8c0b1d24; default: sh4_bad_jump(c,0x8c0b1bdeu,tg); return; } }
L8c0b1c12:;
  R(0)=0x79u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { R(3)=R(3)&0xFF; goto L8c0b1c6e; }
L8c0b1c1a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c0b1c26u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x74u;
  R(3)=LD32(R(14)+R(0));
  R(4)=LD32(R(15)+8);
  c->t=R(4)==R(3);
  R(0)=c->t;
  ST32(R(12),R(0));
  { R(0)=R(5); goto L8c0b1d3c; }
L8c0b1c38:;
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  { R(3)&=R(4); goto L8c0b1c6e; }
L8c0b1c42:;
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(5);
  {  goto L8c0b1c6e; }
L8c0b1c4e:;
  R(0)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x4u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1c5a:;
  R(0)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x8u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1c66:;
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(6);
L8c0b1c6e:;
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1c72:;
  R(0)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x20u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1c7e:;
  R(0)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1c8a:;
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(7);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1c96:;
  R(0)=0x70u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(4);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1ca2:;
  R(0)=0x70u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(5);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1cc0:;
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x4u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1ccc:;
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x8u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1cd8:;
  R(0)=0x70u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(6);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1ce4:;
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x20u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1cf0:;
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1cfc:;
  R(0)=0x70u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(7);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1d08:;
  R(0)=0x72u;
  R(2)=0x1000u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(2);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1d16:;
  R(0)=0x72u;
  R(2)=0x4000u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(2);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1d24:;
  R(0)=0x72u;
  R(2)=0x2000u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(2);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1d32:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b1d3au; R(4)=0x2bu; f_8c074080(c); }
L8c0b1d3a:;
  R(0)=R(13);
L8c0b1d3c:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1bc0(SH4Ctx *c) {
  R(14)=LD32(R(11)+4);
  R(0)=LD32(R(15)+4);
  R(6)=0x10u;
  R(7)=0x80u;
  R(1)=0x8bu;
  R(0)-=R(1);
  R(1)=0x15u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0b1bd6;
  {  goto L8c0b1d32; }
L8c0b1bd6:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0b1be8u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0b1be2u+R(0));  switch(tg){ case 0x8c0b1c12u: goto L8c0b1c12; case 0x8c0b1c1au: goto L8c0b1c1a; case 0x8c0b1c38u: goto L8c0b1c38; case 0x8c0b1c42u: goto L8c0b1c42; case 0x8c0b1c4eu: goto L8c0b1c4e; case 0x8c0b1c5au: goto L8c0b1c5a; case 0x8c0b1c66u: goto L8c0b1c66; case 0x8c0b1c72u: goto L8c0b1c72; case 0x8c0b1c7eu: goto L8c0b1c7e; case 0x8c0b1c8au: goto L8c0b1c8a; case 0x8c0b1c96u: goto L8c0b1c96; case 0x8c0b1ca2u: goto L8c0b1ca2; case 0x8c0b1cc0u: goto L8c0b1cc0; case 0x8c0b1cccu: goto L8c0b1ccc; case 0x8c0b1cd8u: goto L8c0b1cd8; case 0x8c0b1ce4u: goto L8c0b1ce4; case 0x8c0b1cf0u: goto L8c0b1cf0; case 0x8c0b1cfcu: goto L8c0b1cfc; case 0x8c0b1d08u: goto L8c0b1d08; case 0x8c0b1d16u: goto L8c0b1d16; case 0x8c0b1d24u: goto L8c0b1d24; default: sh4_bad_jump(c,0x8c0b1bdeu,tg); return; } }
L8c0b1c12:;
  R(0)=0x79u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { R(3)=R(3)&0xFF; goto L8c0b1c6e; }
L8c0b1c1a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c0b1c26u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x74u;
  R(3)=LD32(R(14)+R(0));
  R(4)=LD32(R(15)+8);
  c->t=R(4)==R(3);
  R(0)=c->t;
  ST32(R(12),R(0));
  { R(0)=R(5); goto L8c0b1d3c; }
L8c0b1c38:;
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  { R(3)&=R(4); goto L8c0b1c6e; }
L8c0b1c42:;
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(5);
  {  goto L8c0b1c6e; }
L8c0b1c4e:;
  R(0)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x4u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1c5a:;
  R(0)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x8u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1c66:;
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(6);
L8c0b1c6e:;
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1c72:;
  R(0)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x20u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1c7e:;
  R(0)=0x72u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1c8a:;
  R(0)=0x72u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(7);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1c96:;
  R(0)=0x70u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(4);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1ca2:;
  R(0)=0x70u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(5);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1cc0:;
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x4u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1ccc:;
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x8u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1cd8:;
  R(0)=0x70u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(6);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1ce4:;
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x20u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1cf0:;
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1cfc:;
  R(0)=0x70u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(7);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1d08:;
  R(0)=0x72u;
  R(2)=0x1000u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(2);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1d16:;
  R(0)=0x72u;
  R(2)=0x4000u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(2);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1d24:;
  R(0)=0x72u;
  R(2)=0x2000u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(2);
  { ST32(R(12),R(3)); goto L8c0b1d3a; }
L8c0b1d32:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b1d3au; R(4)=0x2bu; f_8c074080(c); }
L8c0b1d3a:;
  R(0)=R(13);
L8c0b1d3c:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1cc0(SH4Ctx *c) {
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)&=0x4u;
  { ST32(R(12),R(0)); goto L8c0b1d3a; }
L8c0b1d3a:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b1d80(SH4Ctx *c) {
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0b1d98;
  R(0)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0b1d94;
  { fp_ld(c,4,R(7)); goto L8c0b1db4; }
L8c0b1d94:;
  { fp_ld(c,4,R(6)); goto L8c0b1db4; }
L8c0b1d98:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0b1da2;
  { fp_ld(c,4,R(5)); goto L8c0b1db4; }
L8c0b1da2:;
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0b1db2;
  R(2)=LD32(R(15));
  { fp_ld(c,4,R(2)); goto L8c0b1db4; }
L8c0b1db2:;
  fp_ld(c,4,R(6));
L8c0b1db4:;
  { fp_mov(c,0,4); return; }
}
void f_8c0b1db8(SH4Ctx *c) {
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0b1dd0;
  R(0)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0b1dcc;
  { R(4)=R(7); goto L8c0b1dea; }
L8c0b1dcc:;
  { R(4)=R(6); goto L8c0b1dea; }
L8c0b1dd0:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0b1dda;
  { R(4)=R(5); goto L8c0b1dea; }
L8c0b1dda:;
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0b1de8;
  { R(4)=LD32(R(15)); goto L8c0b1dea; }
L8c0b1de8:;
  R(4)=R(6);
L8c0b1dea:;
  { R(0)=R(4); return; }
}
void f_8c0b1dee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(8)=R(5);
  R(3)=R(8);
  R(7)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(12)=R(6);
  R(2)=LD32(R(3));
  R(5)=0x0u;
  R(13)=R(5);
  R(11)=R(5);
  R(9)=R(5);
  ST32(R(15)+12,R(2));
  R(6)=LD32(R(7));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(10)=R(5); if(k) goto L8c0b1e24; }
  ST32(R(15),R(6));
  { ST32(R(7),R(5)); goto L8c0b1e26; }
L8c0b1e24:;
  ST32(R(15),R(4));
L8c0b1e26:;
  R(14)=LD32(R(15));
  R(6)=R(12);
  R(3)=LD32(R(8)+4);
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c0b1e34u; R(5)=R(8); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(1)=0x124u;
  R(3)=LD32(R(12));
  ST32(R(15)+8,R(3));
  R(0)=LD32(R(15)+12);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0b1e4c;
  R(1)=0x125u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0b1e80;
  {  goto L8c0b1e90; }
L8c0b1e4c:;
  R(13)=LD32(R(14)+12);
  R(9)=LD32(R(14)+4);
  R(11)=LD32(R(14));
  { R(10)=LD32(R(14)+8); goto L8c0b1e90; }
L8c0b1e80:;
  R(10)=LD32(R(14)+8);
  R(13)=LD32(R(14)+12);
  R(9)=LD32(R(14)+4);
  R(10)+=0xcu;
  R(11)=LD32(R(14));
  R(13)+=0xcu;
  R(9)+=0xcu;
  R(11)+=0xcu;
L8c0b1e90:;
  R(3)=LD32(R(15)+8);
  R(6)=R(9);
  R(5)=R(11);
  R(7)=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b1ea0u; R(4)=R(14); f_8c0b1db8(c); }
  R(15)+=0x8u;
  R(2)=0x8c05e6eau;
  R(5)=R(0);
  { c->pr=0x8c0b1eaau; R(4)=R(12); f_8c05e6ea(c); }
  R(3)=0x15u;
  ST32(R(12)+12,R(3));
  R(0)=LD32(R(15)+4);
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
void f_8c0b1e80(SH4Ctx *c) {
  R(10)=LD32(R(14)+8);
  R(13)=LD32(R(14)+12);
  R(9)=LD32(R(14)+4);
  R(10)+=0xcu;
  R(11)=LD32(R(14));
  R(13)+=0xcu;
  R(9)+=0xcu;
  R(11)+=0xcu;
  R(3)=LD32(R(15)+8);
  R(6)=R(9);
  R(5)=R(11);
  R(7)=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b1ea0u; R(4)=R(14); f_8c0b1db8(c); }
  R(15)+=0x8u;
  R(2)=0x8c05e6eau;
  R(5)=R(0);
  { c->pr=0x8c0b1eaau; R(4)=R(12); f_8c05e6ea(c); }
  R(3)=0x15u;
  ST32(R(12)+12,R(3));
  R(0)=LD32(R(15)+4);
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
void f_8c0b1ec4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(8)=R(5);
  R(3)=R(8);
  R(7)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(9)=R(6);
  R(2)=LD32(R(3));
  R(5)=0x0u;
  R(10)=R(5);
  R(13)=R(5);
  R(11)=R(5);
  ST32(R(15)+8,R(2));
  R(6)=LD32(R(7));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(12)=R(5); if(k) goto L8c0b1f20; }
  ST32(R(15),R(6));
  { ST32(R(7),R(5)); goto L8c0b1f22; }
L8c0b1f20:;
  ST32(R(15),R(4));
L8c0b1f22:;
  R(14)=LD32(R(15));
  R(6)=R(9);
  R(3)=LD32(R(8)+4);
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c0b1f30u; R(5)=R(8); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+8);
  R(4)=LD32(R(9));
  R(1)=0x126u;
  R(0)-=R(1);
  R(1)=0x14u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0b1f44;
  {  goto L8c0b2100; }
L8c0b1f44:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0b1f54u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0b1f50u+R(0));  switch(tg){ case 0x8c0b1f7cu: goto L8c0b1f7c; case 0x8c0b1f8eu: goto L8c0b1f8e; case 0x8c0b1fa0u: goto L8c0b1fa0; case 0x8c0b1fb2u: goto L8c0b1fb2; case 0x8c0b1fc4u: goto L8c0b1fc4; case 0x8c0b1fd6u: goto L8c0b1fd6; case 0x8c0b1fe8u: goto L8c0b1fe8; case 0x8c0b1ffau: goto L8c0b1ffa; case 0x8c0b200cu: goto L8c0b200c; case 0x8c0b201eu: goto L8c0b201e; case 0x8c0b2030u: goto L8c0b2030; case 0x8c0b2060u: goto L8c0b2060; case 0x8c0b2072u: goto L8c0b2072; case 0x8c0b2084u: goto L8c0b2084; case 0x8c0b2096u: goto L8c0b2096; case 0x8c0b20a8u: goto L8c0b20a8; case 0x8c0b20bau: goto L8c0b20ba; case 0x8c0b20ccu: goto L8c0b20cc; case 0x8c0b20deu: goto L8c0b20de; case 0x8c0b20f0u: goto L8c0b20f0; default: sh4_bad_jump(c,0x8c0b1f4cu,tg); return; } }
L8c0b1f7c:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x18u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x18u;
  R(13)+=0x18u;
  { R(12)+=0x18u; goto L8c0b2100; }
L8c0b1f8e:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x1cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x1cu;
  R(13)+=0x1cu;
  { R(12)+=0x1cu; goto L8c0b2100; }
L8c0b1fa0:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x20u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x20u;
  R(13)+=0x20u;
  { R(12)+=0x20u; goto L8c0b2100; }
L8c0b1fb2:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x24u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x24u;
  R(13)+=0x24u;
  { R(12)+=0x24u; goto L8c0b2100; }
L8c0b1fc4:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x28u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x28u;
  R(13)+=0x28u;
  { R(12)+=0x28u; goto L8c0b2100; }
L8c0b1fd6:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x2cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x2cu;
  R(13)+=0x2cu;
  { R(12)+=0x2cu; goto L8c0b2100; }
L8c0b1fe8:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x30u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x30u;
  R(13)+=0x30u;
  { R(12)+=0x30u; goto L8c0b2100; }
L8c0b1ffa:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x34u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x34u;
  R(13)+=0x34u;
  { R(12)+=0x34u; goto L8c0b2100; }
L8c0b200c:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x38u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x38u;
  R(13)+=0x38u;
  { R(12)+=0x38u; goto L8c0b2100; }
L8c0b201e:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x3cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x3cu;
  R(13)+=0x3cu;
  { R(12)+=0x3cu; goto L8c0b2100; }
L8c0b2030:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x40u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x40u;
  R(13)+=0x40u;
  { R(12)+=0x40u; goto L8c0b2100; }
L8c0b2060:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x44u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x44u;
  R(13)+=0x44u;
  { R(12)+=0x44u; goto L8c0b2100; }
L8c0b2072:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x48u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x48u;
  R(13)+=0x48u;
  { R(12)+=0x48u; goto L8c0b2100; }
L8c0b2084:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x4cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x4cu;
  R(13)+=0x4cu;
  { R(12)+=0x4cu; goto L8c0b2100; }
L8c0b2096:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x50u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x50u;
  R(13)+=0x50u;
  { R(12)+=0x50u; goto L8c0b2100; }
L8c0b20a8:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x54u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x54u;
  R(13)+=0x54u;
  { R(12)+=0x54u; goto L8c0b2100; }
L8c0b20ba:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x58u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x58u;
  R(13)+=0x58u;
  { R(12)+=0x58u; goto L8c0b2100; }
L8c0b20cc:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x5cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x5cu;
  R(13)+=0x5cu;
  { R(12)+=0x5cu; goto L8c0b2100; }
L8c0b20de:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x60u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x60u;
  R(13)+=0x60u;
  { R(12)+=0x60u; goto L8c0b2100; }
L8c0b20f0:;
  R(12)=LD32(R(14)+8);
  R(10)=LD32(R(14)+12);
  R(11)=LD32(R(14)+4);
  R(12)+=0x64u;
  R(13)=LD32(R(14));
  R(10)+=0x64u;
  R(11)+=0x64u;
  R(13)+=0x64u;
L8c0b2100:;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(6)=R(11);
  R(5)=R(13);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  { c->pr=0x8c0b210eu; R(4)=R(14); f_8c0b1d80(c); }
  R(2)=0x8u;
  fp_st(c,0,R(9));
  ST32(R(9)+12,R(2));
  R(0)=LD32(R(15)+12);
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
void f_8c0b1f20(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(14)=LD32(R(15));
  R(6)=R(9);
  R(3)=LD32(R(8)+4);
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c0b1f30u; R(5)=R(8); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+8);
  R(4)=LD32(R(9));
  R(1)=0x126u;
  R(0)-=R(1);
  R(1)=0x14u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0b1f44;
  {  goto L8c0b2100; }
L8c0b1f44:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0b1f54u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0b1f50u+R(0));  switch(tg){ case 0x8c0b1f7cu: goto L8c0b1f7c; case 0x8c0b1f8eu: goto L8c0b1f8e; case 0x8c0b1fa0u: goto L8c0b1fa0; case 0x8c0b1fb2u: goto L8c0b1fb2; case 0x8c0b1fc4u: goto L8c0b1fc4; case 0x8c0b1fd6u: goto L8c0b1fd6; case 0x8c0b1fe8u: goto L8c0b1fe8; case 0x8c0b1ffau: goto L8c0b1ffa; case 0x8c0b200cu: goto L8c0b200c; case 0x8c0b201eu: goto L8c0b201e; case 0x8c0b2030u: goto L8c0b2030; case 0x8c0b2060u: goto L8c0b2060; case 0x8c0b2072u: goto L8c0b2072; case 0x8c0b2084u: goto L8c0b2084; case 0x8c0b2096u: goto L8c0b2096; case 0x8c0b20a8u: goto L8c0b20a8; case 0x8c0b20bau: goto L8c0b20ba; case 0x8c0b20ccu: goto L8c0b20cc; case 0x8c0b20deu: goto L8c0b20de; case 0x8c0b20f0u: goto L8c0b20f0; default: sh4_bad_jump(c,0x8c0b1f4cu,tg); return; } }
L8c0b1f7c:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x18u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x18u;
  R(13)+=0x18u;
  { R(12)+=0x18u; goto L8c0b2100; }
L8c0b1f8e:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x1cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x1cu;
  R(13)+=0x1cu;
  { R(12)+=0x1cu; goto L8c0b2100; }
L8c0b1fa0:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x20u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x20u;
  R(13)+=0x20u;
  { R(12)+=0x20u; goto L8c0b2100; }
L8c0b1fb2:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x24u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x24u;
  R(13)+=0x24u;
  { R(12)+=0x24u; goto L8c0b2100; }
L8c0b1fc4:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x28u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x28u;
  R(13)+=0x28u;
  { R(12)+=0x28u; goto L8c0b2100; }
L8c0b1fd6:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x2cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x2cu;
  R(13)+=0x2cu;
  { R(12)+=0x2cu; goto L8c0b2100; }
L8c0b1fe8:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x30u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x30u;
  R(13)+=0x30u;
  { R(12)+=0x30u; goto L8c0b2100; }
L8c0b1ffa:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x34u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x34u;
  R(13)+=0x34u;
  { R(12)+=0x34u; goto L8c0b2100; }
L8c0b200c:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x38u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x38u;
  R(13)+=0x38u;
  { R(12)+=0x38u; goto L8c0b2100; }
L8c0b201e:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x3cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x3cu;
  R(13)+=0x3cu;
  { R(12)+=0x3cu; goto L8c0b2100; }
L8c0b2030:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x40u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x40u;
  R(13)+=0x40u;
  { R(12)+=0x40u; goto L8c0b2100; }
L8c0b2060:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x44u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x44u;
  R(13)+=0x44u;
  { R(12)+=0x44u; goto L8c0b2100; }
L8c0b2072:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x48u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x48u;
  R(13)+=0x48u;
  { R(12)+=0x48u; goto L8c0b2100; }
L8c0b2084:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x4cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x4cu;
  R(13)+=0x4cu;
  { R(12)+=0x4cu; goto L8c0b2100; }
L8c0b2096:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x50u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x50u;
  R(13)+=0x50u;
  { R(12)+=0x50u; goto L8c0b2100; }
L8c0b20a8:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x54u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x54u;
  R(13)+=0x54u;
  { R(12)+=0x54u; goto L8c0b2100; }
L8c0b20ba:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x58u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x58u;
  R(13)+=0x58u;
  { R(12)+=0x58u; goto L8c0b2100; }
L8c0b20cc:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x5cu;
  R(12)=LD32(R(14)+8);
  R(10)+=0x5cu;
  R(13)+=0x5cu;
  { R(12)+=0x5cu; goto L8c0b2100; }
L8c0b20de:;
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x60u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x60u;
  R(13)+=0x60u;
  { R(12)+=0x60u; goto L8c0b2100; }
L8c0b20f0:;
  R(12)=LD32(R(14)+8);
  R(10)=LD32(R(14)+12);
  R(11)=LD32(R(14)+4);
  R(12)+=0x64u;
  R(13)=LD32(R(14));
  R(10)+=0x64u;
  R(11)+=0x64u;
  R(13)+=0x64u;
L8c0b2100:;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(6)=R(11);
  R(5)=R(13);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  { c->pr=0x8c0b210eu; R(4)=R(14); f_8c0b1d80(c); }
  R(2)=0x8u;
  fp_st(c,0,R(9));
  ST32(R(9)+12,R(2));
  R(0)=LD32(R(15)+12);
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
void f_8c0b2060(SH4Ctx *c) {
  R(11)=LD32(R(14)+4);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14));
  R(11)+=0x44u;
  R(12)=LD32(R(14)+8);
  R(10)+=0x44u;
  R(13)+=0x44u;
  { R(12)+=0x44u; goto L8c0b2100; }
L8c0b2100:;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(6)=R(11);
  R(5)=R(13);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  { c->pr=0x8c0b210eu; R(4)=R(14); f_8c0b1d80(c); }
  R(2)=0x8u;
  fp_st(c,0,R(9));
  ST32(R(9)+12,R(2));
  R(0)=LD32(R(15)+12);
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
void f_8c0b212a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(6);
  R(6)=0x8c0c76fcu;
  R(12)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0b2180;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0b2182; }
L8c0b2180:;
  ST32(R(15),R(4));
L8c0b2182:;
  R(14)=LD32(R(15));
  R(6)=R(13);
  R(3)=LD32(R(12)+4);
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c0b2190u; R(5)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0b21b0; }
  R(0)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; R(0)=0x68u; if(k) goto L8c0b21aa; }
  { R(4)=LD32(R(14)+12); goto L8c0b21ac; }
L8c0b21aa:;
  R(4)=LD32(R(14)+4);
L8c0b21ac:;
  { R(4)=LD32(R(4)+R(0)); goto L8c0b21d2; }
L8c0b21b0:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0b21be;
  R(4)=LD32(R(14));
  R(0)=0x68u;
  { R(4)=LD32(R(4)+R(0)); goto L8c0b21d2; }
L8c0b21be:;
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; R(0)=0x68u; if(k) goto L8c0b21ce; }
  { R(4)=LD32(R(14)+8); goto L8c0b21d0; }
L8c0b21ce:;
  R(4)=LD32(R(14)+4);
L8c0b21d0:;
  R(4)=LD32(R(4)+R(0));
L8c0b21d2:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0b21dc;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0b21e0;
L8c0b21dc:;
  { R(3)=0x0u; goto L8c0b21e2; }
L8c0b21e0:;
  R(3)=LD32(R(4)+4);
L8c0b21e2:;
  R(2)=0xbu;
  R(0)=R(5);
  ST32(R(13),R(3));
  ST32(R(13)+12,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b2180(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(14)=LD32(R(15));
  R(6)=R(13);
  R(3)=LD32(R(12)+4);
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c0b2190u; R(5)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0b21b0; }
  R(0)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; R(0)=0x68u; if(k) goto L8c0b21aa; }
  { R(4)=LD32(R(14)+12); goto L8c0b21ac; }
L8c0b21aa:;
  R(4)=LD32(R(14)+4);
L8c0b21ac:;
  { R(4)=LD32(R(4)+R(0)); goto L8c0b21d2; }
L8c0b21b0:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0b21be;
  R(4)=LD32(R(14));
  R(0)=0x68u;
  { R(4)=LD32(R(4)+R(0)); goto L8c0b21d2; }
L8c0b21be:;
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; R(0)=0x68u; if(k) goto L8c0b21ce; }
  { R(4)=LD32(R(14)+8); goto L8c0b21d0; }
L8c0b21ce:;
  R(4)=LD32(R(14)+4);
L8c0b21d0:;
  R(4)=LD32(R(4)+R(0));
L8c0b21d2:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0b21dc;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0b21e0;
L8c0b21dc:;
  { R(3)=0x0u; goto L8c0b21e2; }
L8c0b21e0:;
  R(3)=LD32(R(4)+4);
L8c0b21e2:;
  R(2)=0xbu;
  R(0)=R(5);
  ST32(R(13),R(3));
  ST32(R(13)+12,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b21f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(6);
  R(6)=0x8c0c76fcu;
  R(12)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0b2214;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0b2216; }
L8c0b2214:;
  ST32(R(15),R(4));
L8c0b2216:;
  R(14)=LD32(R(15));
  R(6)=R(13);
  R(3)=LD32(R(12)+4);
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c0b2224u; R(5)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0b2280; }
  R(0)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; R(0)=0x74u; if(k) goto L8c0b223e; }
  { R(4)=LD32(R(14)+12); goto L8c0b2240; }
L8c0b223e:;
  R(4)=LD32(R(14)+4);
L8c0b2240:;
  { R(4)=LD32(R(4)+R(0)); goto L8c0b22a2; }
L8c0b2280:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0b228e;
  R(4)=LD32(R(14));
  R(0)=0x74u;
  { R(4)=LD32(R(4)+R(0)); goto L8c0b22a2; }
L8c0b228e:;
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; R(0)=0x74u; if(k) goto L8c0b229e; }
  { R(4)=LD32(R(14)+8); goto L8c0b22a0; }
L8c0b229e:;
  R(4)=LD32(R(14)+4);
L8c0b22a0:;
  R(4)=LD32(R(4)+R(0));
L8c0b22a2:;
  R(3)=0x6u;
  R(0)=R(5);
  ST32(R(13),R(4));
  ST32(R(13)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b2280(SH4Ctx *c) {
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0b228e;
  R(4)=LD32(R(14));
  R(0)=0x74u;
  { R(4)=LD32(R(4)+R(0)); goto L8c0b22a2; }
L8c0b228e:;
  R(0)=0x75u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; R(0)=0x74u; if(k) goto L8c0b229e; }
  { R(4)=LD32(R(14)+8); goto L8c0b22a0; }
L8c0b229e:;
  R(4)=LD32(R(14)+4);
L8c0b22a0:;
  R(4)=LD32(R(4)+R(0));
L8c0b22a2:;
  R(3)=0x6u;
  R(0)=R(5);
  ST32(R(13),R(4));
  ST32(R(13)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b22b6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(6));
  R(6)=0x8c0c76fcu;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0b22ce;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0b22d0; }
L8c0b22ce:;
  ST32(R(15),R(4));
L8c0b22d0:;
  R(4)=LD32(R(15));
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0b22dau; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(2)=0x8c094ab0u;
  { c->pr=0x8c0b22e0u; R(4)=R(0); f_8c094ab0(c); }
  R(3)=LD32(R(15)+4);
  R(4)=(uint32_t)(int32_t)(int8_t)R(0);
  R(2)=0x6u;
  ST32(R(3),R(4));
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0b2320(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=R(5);
  R(5)+=0xfffffff4u;
  R(5)=LD32(R(5));
  R(1)=0x13cu;
  R(0)=R(5);
  R(13)=0x8c058460u;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(14)=R(6); if(k) goto L8c0b2346; }
  R(1)=0x13du;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0b2376;
  {  goto L8c0b23ce; }
L8c0b2346:;
  R(3)=LD32(R(12)+4);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0b234eu; R(5)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  { uint32_t tg=R(13); c->pr=0x8c0b2354u; R(4)=LD32(R(14)); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b2362;
  { uint32_t tg=R(13); c->pr=0x8c0b235cu; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0b2366;
L8c0b2362:;
  { R(3)=0x0u; goto L8c0b236c; }
L8c0b2366:;
  { uint32_t tg=R(13); c->pr=0x8c0b236au; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(3)=LD32(R(0)+4);
L8c0b236c:;
  R(2)=0xbu;
  ST32(R(14),R(3));
  ST32(R(14)+12,R(2));
  { R(0)=LD32(R(15)); goto L8c0b23d8; }
L8c0b2376:;
  { uint32_t tg=R(13); c->pr=0x8c0b237au; R(4)=0x1u; sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b2388;
  { uint32_t tg=R(13); c->pr=0x8c0b2382u; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0b23c0;
L8c0b2388:;
  { R(3)=0x0u; goto L8c0b23c6; }
L8c0b23c0:;
  { uint32_t tg=R(13); c->pr=0x8c0b23c4u; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=LD32(R(0)+4);
L8c0b23c6:;
  R(2)=0xbu;
  ST32(R(14),R(3));
  { ST32(R(14)+12,R(2)); goto L8c0b23d6; }
L8c0b23ce:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0b23d6u; R(4)=0x27u; f_8c074080(c); }
L8c0b23d6:;
  R(0)=R(12);
L8c0b23d8:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b23c0(SH4Ctx *c) {
  { uint32_t tg=R(13); c->pr=0x8c0b23c4u; R(4)=0x1u; sh4_call(c,tg); }
  R(3)=LD32(R(0)+4);
  R(2)=0xbu;
  ST32(R(14),R(3));
  { ST32(R(14)+12,R(2)); goto L8c0b23d6; }
L8c0b23d6:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b23e4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff28u;
  R(15)+=R(0);
  R(14)=R(6);
  R(6)=0x8c0c76fcu;
  R(13)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0b2402;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0b2404; }
L8c0b2402:;
  ST32(R(15),R(4));
L8c0b2404:;
  R(4)=LD32(R(15));
  R(3)=0x8c046e40u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0b240eu; R(4)=LD32(R(4)+16); f_8c046e40(c); }
  R(3)=0x8c076800u;
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c0b2418u; R(4)=LD32(R(15)); f_8c076800(c); }
  R(2)=LD32(R(15)+24);
  R(0)=0x68u;
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0b2460;
  { R(5)=0x0u; goto L8c0b249c; }
L8c0b2460:;
  R(4)=LD32(R(15)+20);
  R(0)=0x72u;
  R(3)=0x1u;
  R(1)=0xefffu;
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  ST16(R(15)+4,R(0));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(2)|=R(3);
  ST16(R(4)+R(0),R(2));
  R(0)=0x72u;
  R(2)=LD32(R(15)+20);
  R(4)=R(15);
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(3)&=R(1);
  ST16(R(2)+R(0),R(3));
  R(2)=0x8c09e064u;
  { c->pr=0x8c0b2486u; R(4)+=0x8u; f_8c09e064(c); }
  R(3)=0x8c09e160u;
  R(4)=R(15);
  { c->pr=0x8c0b248eu; R(4)+=0x8u; f_8c09e160(c); }
  R(2)=LD32(R(15)+20);
  R(1)=0x72u;
  R(5)=0xa8u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(1)+=R(2);
  R(5)+=R(15);
  ST16(R(1),R(0));
L8c0b249c:;
  R(3)=0x8c05e6eau;
  { c->pr=0x8c0b24a2u; R(4)=R(14); f_8c05e6ea(c); }
  R(1)=0xd8u;
  R(2)=0x15u;
  R(0)=R(13);
  ST32(R(14)+12,R(2));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b2460(SH4Ctx *c) {
  R(4)=LD32(R(15)+20);
  R(0)=0x72u;
  R(3)=0x1u;
  R(1)=0xefffu;
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  ST16(R(15)+4,R(0));
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(2)|=R(3);
  ST16(R(4)+R(0),R(2));
  R(0)=0x72u;
  R(2)=LD32(R(15)+20);
  R(4)=R(15);
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(3)&=R(1);
  ST16(R(2)+R(0),R(3));
  R(2)=0x8c09e064u;
  { c->pr=0x8c0b2486u; R(4)+=0x8u; f_8c09e064(c); }
  R(3)=0x8c09e160u;
  R(4)=R(15);
  { c->pr=0x8c0b248eu; R(4)+=0x8u; f_8c09e160(c); }
  R(2)=LD32(R(15)+20);
  R(1)=0x72u;
  R(5)=0xa8u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(1)+=R(2);
  R(5)+=R(15);
  ST16(R(1),R(0));
  R(3)=0x8c05e6eau;
  { c->pr=0x8c0b24a2u; R(4)=R(14); f_8c05e6ea(c); }
  R(1)=0xd8u;
  R(2)=0x15u;
  R(0)=R(13);
  ST32(R(14)+12,R(2));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b24b4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(6));
  R(14)=R(5);
  R(6)=0x8c0c76fcu;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0b24ce;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0b24d0; }
L8c0b24ce:;
  ST32(R(15),R(4));
L8c0b24d0:;
  R(5)=LD32(R(15));
  R(3)=0x10u;
  R(5)=LD32(R(5)+4);
  R(4)=LD32(R(5)+8);
  R(3)+=R(5);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(3)=LD32(R(3)); if(k) goto L8c0b24fc; }
  R(3)=0x8c04a8c0u;
  { c->pr=0x8c0b24e6u;  f_8c04a8c0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+8,R(0)); if(k) goto L8c0b24fc; }
  R(5)=LD32(R(15)+8);
  R(3)=0x8c05e6eau;
  R(5)+=0x10u;
  { c->pr=0x8c0b24f6u; R(4)=LD32(R(15)+4); f_8c05e6ea(c); }
  R(2)=LD32(R(15)+4);
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
L8c0b24fc:;
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b2540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff20u;
  R(15)+=R(0);
  R(13)=R(6);
  R(6)=0x8c0c76fcu;
  R(14)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c0b2564; }
  ST32(R(15),R(5));
  { ST32(R(6),R(11)); goto L8c0b2566; }
L8c0b2564:;
  ST32(R(15),R(4));
L8c0b2566:;
  R(12)=LD32(R(15));
  R(0)=0x17cu;
  R(12)=LD32(R(12)+4);
  R(10)=0x8c05e6eau;
  R(12)=LD32(R(12)+16);
  R(3)=(int32_t)(int8_t)LD8(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0b257e;
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+36);
  { R(5)+=0x58u; goto L8c0b2650; }
L8c0b257e:;
  R(2)=0x8c046e40u;
  { c->pr=0x8c0b2584u; R(4)=R(12); f_8c046e40(c); }
  R(3)=0x8c076800u;
  R(5)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c0b258eu; R(4)=LD32(R(15)); f_8c076800(c); }
  R(3)=LD32(R(15)+28);
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(3)=0x4000u;
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0b25a0;
  { R(2)=0x1u; goto L8c0b25a2; }
L8c0b25a0:;
  R(2)=0x0u;
L8c0b25a2:;
  R(1)=0x8c2e7628u;
  ST8(R(1),R(2));
  R(2)=0x72u;
  R(0)=LD32(R(15)+28);
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0b25e0;
  { R(3)=0x1u; goto L8c0b25e2; }
L8c0b25e0:;
  R(3)=0x0u;
L8c0b25e2:;
  R(1)=0x8c2e7629u;
  R(2)=0x1u;
  R(0)=0x8c0cba6eu;
  R(4)=R(15);
  ST8(R(1),R(3));
  R(3)=0x8c09e064u;
  ST8(R(0),R(2));
  { c->pr=0x8c0b25f4u; R(4)+=0x10u; f_8c09e064(c); }
  R(2)=0x8c09e160u;
  R(4)=R(15);
  { c->pr=0x8c0b25fcu; R(4)+=0x10u; f_8c09e160(c); }
  R(3)=0x8c09e53eu;
  R(4)=R(15);
  { c->pr=0x8c0b2604u; R(4)+=0x10u; f_8c09e53e(c); }
  R(2)=0x8c09ea62u;
  R(4)=R(15);
  { c->pr=0x8c0b260cu; R(4)+=0x10u; f_8c09ea62(c); }
  R(3)=LD32(R(15)+32);
  R(0)=0x68u;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0b2658;
  R(3)=0x8c0a0b96u;
  R(4)=R(15);
  { c->pr=0x8c0b261eu; R(4)+=0x10u; f_8c0a0b96(c); }
  R(0)=LD32(R(15)+24);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0b2638;
  R(5)=LD32(R(15)+24);
  R(4)=R(15);
  R(5)+=0x1cu;
  { uint32_t tg=R(10); c->pr=0x8c0b2632u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x17cu;
  { ST8(R(12)+R(0),R(11)); goto L8c0b2646; }
L8c0b2638:;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
L8c0b2646:;
  R(3)=LD32(R(15)+24);
  R(5)=R(15);
  R(0)=0x60u;
  R(5)+=0x4u;
  ST32(R(3)+R(0),R(11));
L8c0b2650:;
  { uint32_t tg=R(10); c->pr=0x8c0b2654u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x15u;
  ST32(R(13)+12,R(3));
L8c0b2658:;
  R(1)=0xe0u;
  R(0)=R(14);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b25e0(SH4Ctx *c) {
  R(3)=0x0u;
  R(1)=0x8c2e7629u;
  R(2)=0x1u;
  R(0)=0x8c0cba6eu;
  R(4)=R(15);
  ST8(R(1),R(3));
  R(3)=0x8c09e064u;
  ST8(R(0),R(2));
  { c->pr=0x8c0b25f4u; R(4)+=0x10u; f_8c09e064(c); }
  R(2)=0x8c09e160u;
  R(4)=R(15);
  { c->pr=0x8c0b25fcu; R(4)+=0x10u; f_8c09e160(c); }
  R(3)=0x8c09e53eu;
  R(4)=R(15);
  { c->pr=0x8c0b2604u; R(4)+=0x10u; f_8c09e53e(c); }
  R(2)=0x8c09ea62u;
  R(4)=R(15);
  { c->pr=0x8c0b260cu; R(4)+=0x10u; f_8c09ea62(c); }
  R(3)=LD32(R(15)+32);
  R(0)=0x68u;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0b2658;
  R(3)=0x8c0a0b96u;
  R(4)=R(15);
  { c->pr=0x8c0b261eu; R(4)+=0x10u; f_8c0a0b96(c); }
  R(0)=LD32(R(15)+24);
  R(1)=0x60u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0b2638;
  R(5)=LD32(R(15)+24);
  R(4)=R(15);
  R(5)+=0x1cu;
  { uint32_t tg=R(10); c->pr=0x8c0b2632u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x17cu;
  { ST8(R(12)+R(0),R(11)); goto L8c0b2646; }
L8c0b2638:;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
L8c0b2646:;
  R(3)=LD32(R(15)+24);
  R(5)=R(15);
  R(0)=0x60u;
  R(5)+=0x4u;
  ST32(R(3)+R(0),R(11));
  { uint32_t tg=R(10); c->pr=0x8c0b2654u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x15u;
  ST32(R(13)+12,R(3));
L8c0b2658:;
  R(1)=0xe0u;
  R(0)=R(14);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b26a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb0u;
  R(14)=R(6);
  R(6)=R(4);
  R(12)=R(4);
  R(2)=0x8c014eaau;
  R(4)=R(15);
  R(11)=R(5);
  R(13)=R(7);
  { c->pr=0x8c0b26c2u; R(4)+=0x44u; f_8c014eaa(c); }
  R(0)=0x74u;
  R(10)=0x8c0163e6u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0b2738;
  R(2)=0x8c014eaau;
  R(5)=R(13);
  R(4)=R(14);
  R(4)=R(15);
  R(6)=R(14);
  { c->pr=0x8c0b26dau; R(4)+=0x38u; f_8c014eaa(c); }
  { uint32_t tg=R(10); c->pr=0x8c0b26deu; R(4)=R(11); sh4_call(c,tg); }
  R(0)=0x6cu;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; fp_mov(c,12,0); if(k) goto L8c0b26ee; }
  R(0)=0xcu;
  { fp_ld(c,3,R(0)+R(14)); goto L8c0b26f8; }
L8c0b26ee:;
  { uint32_t tg=R(10); c->pr=0x8c0b26f2u; R(4)=R(13); sh4_call(c,tg); }
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,0);
L8c0b26f8:;
  R(0)=0xcu;
  fp_mov(c,0,12);
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x38u;
  fp_fmac(c,3,2);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,1,5,3);
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,1,6,0);
  R(0)=0x4cu;
  fp_ld(c,7,R(0)+R(15));
  fp_arith(c,1,7,2);
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,2,4);
  fp_arith(c,2,2,4);
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  { R(0)^=0x1u; goto L8c0b278c; }
L8c0b2738:;
  R(2)=R(14);
  R(4)=R(14);
  R(5)=R(13);
  R(3)=0x8c05e5f4u;
  R(2)+=0xcu;
  ST32(R(15)+4,R(2));
  R(5)+=0x58u;
  ST32(R(15),R(4));
  R(4)=R(15);
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0b2750u; R(4)+=0x14u; f_8c05e5f4(c); }
  R(3)=0x8c05e5f4u;
  R(5)=R(13);
  R(6)=LD32(R(15));
  R(4)=R(15);
  R(5)+=0x58u;
  { c->pr=0x8c0b275eu; R(4)+=0x8u; f_8c05e5f4(c); }
  { uint32_t tg=R(10); c->pr=0x8c0b2762u; R(4)=R(11); sh4_call(c,tg); }
  R(0)=0xcu;
  R(5)=R(15);
  fp_ld(c,4,R(0)+R(12));
  R(6)=R(15);
  R(3)=0x8c0a15d4u;
  R(4)=R(15);
  fp_arith(c,2,4,0);
  R(6)+=0x44u;
  R(5)+=0x2cu;
  { c->pr=0x8c0b2778u; R(4)+=0x20u; f_8c0a15d4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c0a167au;
  R(4)=R(15);
  R(5)+=0x8u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c0b278cu; R(4)+=0x14u; f_8c0a167a(c); }
L8c0b278c:;
  R(15)+=0x50u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b27c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c014ea0u;
  { c->pr=0x8c0b27ceu; R(4)+=0x24u; f_8c014ea0(c); }
  R(4)=0x8cu;
  { uint32_t tg=R(13); c->pr=0x8c0b27d4u; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=0xf4u;
  { uint32_t tg=R(13); c->pr=0x8c0b27dau; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=0x15cu;
  { uint32_t tg=R(13); c->pr=0x8c0b27e0u; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=0x1c4u;
  { uint32_t tg=R(13); c->pr=0x8c0b27e6u; R(4)+=R(14); sh4_call(c,tg); }
  R(3)=0x8c0153d8u;
  R(4)=R(14);
  R(5)=LD32(R(14)+20);
  { c->pr=0x8c0b27f0u; R(4)+=0x24u; f_8c0153d8(c); }
  R(2)=0x8c0156cau;
  R(5)=R(14);
  R(4)=0x8cu;
  R(5)+=0x24u;
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c0b27feu; R(4)+=R(14); f_8c0156ca(c); }
  R(3)=0x8c0156cau;
  R(5)=R(14);
  R(4)=0xf4u;
  R(5)+=0x24u;
  R(6)=LD32(R(14)+12);
  { c->pr=0x8c0b280cu; R(4)+=R(14); f_8c0156ca(c); }
  R(2)=0x8c0b3ee0u;
  { c->pr=0x8c0b2812u; R(4)=LD32(R(14)+4); f_8c0b3ee0(c); }
  R(1)=0x6d4u;
  R(1)+=R(14);
  ST8(R(1),R(0));
  R(0)=0x6d4u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0b2840;
  R(2)=LD32(R(14)+24);
  R(3)=0xffffff0fu;
  R(2)&=R(3);
  R(3)=0xffffe7ffu;
  ST32(R(14)+24,R(2));
  R(1)=LD32(R(14)+24);
  R(2)=0xfffffeffu;
  R(1)&=R(2);
  R(2)=0xfe001fffu;
  ST32(R(14)+24,R(1));
  R(0)=LD32(R(14)+24);
  R(1)=0xfffff9ffu;
  R(0)&=R(1);
  R(0)&=R(3);
  R(0)&=R(2);
  ST32(R(14)+24,R(0));
L8c0b2840:;
  R(3)=LD32(R(14)+16);
  R(0)=0x53cu;
  R(2)=LD32(R(3)+24);
  ST32(R(14)+R(0),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b2856;
  R(0)=0x22cu;
  c->fr[3]=0x3F800000u;
  { fp_st(c,3,R(0)+R(14)); goto L8c0b2860; }
L8c0b2856:;
  R(2)=0x8c0163e6u;
  { c->pr=0x8c0b285cu; R(4)=LD32(R(14)+20); f_8c0163e6(c); }
  R(0)=0x22cu;
  fp_st(c,0,R(0)+R(14));
L8c0b2860:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b28c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0b28ccu; R(14)=R(4); f_8c0b27c0(c); }
  R(2)=LD32(R(14)+24);
  R(3)=0x1ffe000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0b2938;
  R(1)=0x232u;
  R(0)=0x0u;
  R(12)=0x8c0b55a0u;
  R(1)+=R(14);
  R(13)=0x1e0000u;
  ST16(R(1),R(0));
  R(0)=0x232u;
  R(1)=LD32(R(14)+4);
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x2eu;
  R(1)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  if(c->t) goto L8c0b2938;
L8c0b28ee:;
  R(3)=0x232u;
  R(0)=LD32(R(14)+4);
  R(3)+=R(14);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  R(0)=LD32(R(0)+16);
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0b2924;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0b2924;
  R(3)=0x232u;
  R(0)=LD32(R(14)+4);
  R(3)+=R(14);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  R(0)=LD32(R(0)+20);
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x23cu;
  ST32(R(14)+R(0),R(2));
  R(3)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0b2924;
  { uint32_t tg=R(12); c->pr=0x8c0b2924u; R(4)=R(14); sh4_call(c,tg); }
L8c0b2924:;
  R(0)=0x232u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(2)=LD32(R(14)+4);
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x2eu;
  R(1)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=(int32_t)R(3)>=(int32_t)R(1);
  if(!c->t) goto L8c0b28ee;
L8c0b2938:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b2980(SH4Ctx *c) {
  R(0)=0x10u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x14u;
  R(14)=0x8c2ea888u;
  R(1)=0x20u;
  R(2)=0x1ffffffu;
  c->t=(R(4)&R(4))==0;
  ST8(R(14),R(3));
  R(1)+=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(14)+1,R(0));
  ST32(R(14)+4,R(4));
  ST32(R(14)+8,R(6));
  ST32(R(14)+12,R(5));
  ST32(R(14)+16,R(7));
  R(3)=LD32(R(15)+4);
  ST32(R(14)+20,R(3));
  ST32(R(14)+24,R(2));
  R(3)=LD32(R(15)+8);
  ST32(R(14)+28,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  { uint32_t k=c->t; ST16(R(1),R(0)); if(k) goto L8c0b29d6; }
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c0b29d6;
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b29d6;
  R(1)=(int32_t)(int16_t)LD16(R(7)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0b29d6;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0b29d6;
  R(1)=(int32_t)(int16_t)LD16(R(7)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0b29d6;
  R(4)=0x8c2ea888u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0b28c0(c); return; } }
L8c0b29d6:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b2a00(SH4Ctx *c) {
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
  R(0)=0xcu;
  R(3)=0x8c05a40eu;
  ST32(R(15)+8,R(4));
  R(13)=R(6);
  ST32(R(15)+4,R(7));
  R(12)=R(5);
  fp_st(c,5,R(0)+R(15));
  fp_mov(c,15,4);
  { c->pr=0x8c0b2a28u; R(4)=LD32(R(15)+4); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c0b2a5c; }
  R(3)=0x8c087e94u;
  { c->pr=0x8c0b2a34u; R(4)=R(14); f_8c087e94(c); }
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0b2a5c;
  R(3)=0x8c05a40eu;
  { c->pr=0x8c0b2a40u; R(4)=LD32(R(15)+52); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c0b2a4a; }
  {  goto L8c0b2d8e; }
L8c0b2a4a:;
  R(3)=0x8c087e94u;
  { c->pr=0x8c0b2a50u; R(4)=R(14); f_8c087e94(c); }
  R(0)=R(0)&0xFFFF;
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0b2a5c;
  {  goto L8c0b2d8e; }
L8c0b2a5c:;
  R(0)=0x3cu;
  R(3)=0x8c0cc3acu;
  R(10)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x0u;
  R(2)=0x8c0cc3b0u;
  R(0)=R(10);
  R(7)=LD32(R(3));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; R(5)=LD32(R(2)); if(k) goto L8c0b2a7a; }
  R(0)=R(10);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0b2a7a;
  {  goto L8c0b2c26; }
L8c0b2a7a:;
  c->t=(int32_t)R(5)>0;
  R(14)=R(6);
  R(4)=R(7);
  { uint32_t k=c->t; R(11)=0x2u; if(k) goto L8c0b2a88; }
  {  goto L8c0b2c26; }
L8c0b2a88:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=R(2)==R(10);
  if(c->t) goto L8c0b2a94;
  {  goto L8c0b2c1a; }
L8c0b2a94:;
  R(0)=0x40u;
  R(3)=LD32(R(4)+36);
  R(2)=LD32(R(15)+R(0));
  c->t=R(3)==R(2);
  if(c->t) goto L8c0b2aa2;
  {  goto L8c0b2c1a; }
L8c0b2aa2:;
  fp_ld(c,2,R(4));
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0b2ab2;
  fp_ld(c,3,R(4));
  { fp_arith(c,1,3,15); goto L8c0b2aba; }
L8c0b2ab2:;
  fp_ld(c,2,R(4));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,15);
L8c0b2aba:;
  R(0)=0x8c0b2b90u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0b2ac6;
  {  goto L8c0b2c1a; }
L8c0b2ac6:;
  R(0)=0x10u;
  fp_ld(c,3,R(12));
  fp_ld(c,1,R(0)+R(4));
  fp_arith(c,1,1,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c0b2adc;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,1,R(12));
  { fp_arith(c,1,3,1); goto L8c0b2ae6; }
L8c0b2adc:;
  fp_ld(c,1,R(0)+R(4));
  fp_ld(c,0,R(12));
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,0);
L8c0b2ae6:;
  R(0)=0x8c0b2b94u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0b2af2;
  {  goto L8c0b2c1a; }
L8c0b2af2:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x14u;
  fp_ld(c,1,R(0)+R(4));
  fp_arith(c,1,1,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c0b2b0e;
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(12));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(4));
  { fp_arith(c,1,3,1); goto L8c0b2b1a; }
L8c0b2b0e:;
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(12));
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,0);
L8c0b2b1a:;
  R(0)=0x8c0b2b94u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0b2b26;
  {  goto L8c0b2c1a; }
L8c0b2b26:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x18u;
  fp_ld(c,1,R(0)+R(4));
  fp_arith(c,1,1,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c0b2b42;
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(12));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(4));
  { fp_arith(c,1,3,1); goto L8c0b2b4e; }
L8c0b2b42:;
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(12));
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,0);
L8c0b2b4e:;
  R(0)=0x8c0b2b94u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0b2c1a;
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  fp_ld(c,1,R(0)+R(4));
  fp_arith(c,1,1,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c0b2ba0;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,1,R(13));
  { fp_arith(c,1,3,1); goto L8c0b2baa; }
L8c0b2ba0:;
  fp_ld(c,1,R(0)+R(4));
  fp_ld(c,0,R(13));
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,0);
L8c0b2baa:;
  R(0)=0x8c0b2cc0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0b2c1a;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(4));
  fp_arith(c,1,1,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c0b2bce;
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  { fp_arith(c,1,3,1); goto L8c0b2bda; }
L8c0b2bce:;
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,0);
L8c0b2bda:;
  R(0)=0x8c0b2cc0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0b2c1a;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,1,R(0)+R(4));
  fp_arith(c,1,1,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c0b2bfe;
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  { fp_arith(c,1,3,1); goto L8c0b2c0a; }
L8c0b2bfe:;
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(13));
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,0);
L8c0b2c0a:;
  R(0)=0x8c0b2cc0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0b2c1a;
  R(2)=LD32(R(4)+40);
  R(2)|=R(11);
  { ST32(R(4)+40,R(2)); goto L8c0b2d8e; }
L8c0b2c1a:;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(5);
  { uint32_t k=c->t; R(4)+=0x68u; if(k) goto L8c0b2c26; }
  {  goto L8c0b2a88; }
L8c0b2c26:;
  R(2)=0x8c2ea8f0u;
  R(0)=0x8c0b2cc8u;
  R(8)=0x8c068674u;
  c->t=(int32_t)R(5)>0;
  fp_mov(c,7,15);
  R(14)=R(7);
  fp_unary(c,0,7);
  R(9)=R(6);
  ST32(R(15),R(2));
  fp_ld(c,4,R(0));
  { uint32_t k=!c->t; R(11)=0x68u; if(k) goto L8c0b2d0c; }
L8c0b2c3e:;
  fp_ld(c,5,R(14));
  fp_mov(c,6,15);
  fp_arith(c,1,6,5);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,6,2);
  if(!c->t) goto L8c0b2c4e;
  { fp_mov(c,3,6); goto L8c0b2c52; }
L8c0b2c4e:;
  fp_mov(c,3,7);
  fp_arith(c,0,3,5);
L8c0b2c52:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0b2c90;
  R(0)=0x4u;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0b2d04;
  c->macl=R(5)*R(11);
  R(10)=R(6);
  R(4)=R(14);
  R(6)=c->macl;
  { R(6)+=R(7); goto L8c0b2c6e; }
L8c0b2c6c:;
  R(10)+=0x1u;
L8c0b2c6e:;
  c->t=R(4)>=R(6);
  { uint32_t k=!c->t; R(4)+=0x68u; if(k) goto L8c0b2c6c; }
  R(2)=LD32(R(15));
  c->t=R(4)==R(2);
  if(!c->t) goto L8c0b2c7c;
  R(10)+=0xffffffffu;
L8c0b2c7c:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0b2d0c;
  c->macl=R(10)*R(11);
  R(4)=R(14);
  R(5)=R(14);
  R(6)=c->macl;
  { uint32_t tg=R(8); c->pr=0x8c0b2c8cu; R(4)+=0x68u; sh4_call(c,tg); }
  {  goto L8c0b2d0c; }
L8c0b2c90:;
  fp_ld(c,3,R(14));
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c0b2d04;
  c->macl=R(5)*R(11);
  R(10)=R(6);
  R(4)=R(14);
  R(6)=c->macl;
  { R(6)+=R(7); goto L8c0b2ce2; }
L8c0b2ce0:;
  R(10)+=0x1u;
L8c0b2ce2:;
  c->t=R(4)>=R(6);
  { uint32_t k=!c->t; R(4)+=0x68u; if(k) goto L8c0b2ce0; }
  R(2)=LD32(R(15));
  c->t=R(4)==R(2);
  if(!c->t) goto L8c0b2cf0;
  R(10)+=0xffffffffu;
L8c0b2cf0:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0b2d0c;
  c->macl=R(10)*R(11);
  R(4)=R(14);
  R(5)=R(14);
  R(6)=c->macl;
  { uint32_t tg=R(8); c->pr=0x8c0b2d00u; R(4)+=0x68u; sh4_call(c,tg); }
  {  goto L8c0b2d0c; }
L8c0b2d04:;
  R(9)+=0x1u;
  c->t=(int32_t)R(9)>=(int32_t)R(5);
  { uint32_t k=!c->t; R(14)+=0x68u; if(k) goto L8c0b2c3e; }
L8c0b2d0c:;
  R(2)=0x8c0cbbe8u;
  R(3)=LD32(R(2));
  c->t=R(9)==R(3);
  if(c->t) goto L8c0b2d8e;
  R(4)=0x8c0cc3b4u;
  R(3)=LD32(R(4));
  c->t=(int32_t)R(3)>=(int32_t)R(9);
  if(c->t) goto L8c0b2d1e;
  ST32(R(4),R(9));
L8c0b2d1e:;
  R(11)=0x8c05e6eau;
  R(4)=R(14);
  fp_st(c,15,R(14));
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0b2d2au; R(4)+=0x30u; f_8c05e6ea(c); }
  R(4)=R(14);
  R(5)=R(12);
  { uint32_t tg=R(11); c->pr=0x8c0b2d32u; R(4)+=0x10u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c0b2d3au; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x48u;
  R(4)=R(14);
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0b2d44u; R(4)+=0x3cu; sh4_call(c,tg); }
  R(0)=0x4cu;
  R(4)=R(14);
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0b2d4eu; R(4)+=0x48u; sh4_call(c,tg); }
  R(3)=LD32(R(15)+4);
  R(0)=0x38u;
  ST32(R(14)+28,R(3));
  R(2)=LD32(R(15)+52);
  ST32(R(14)+32,R(2));
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x2cu;
  ST16(R(14)+R(0),R(3));
  R(0)=0x3cu;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x2eu;
  ST16(R(14)+R(0),R(2));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x40u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x44u;
  ST32(R(14)+36,R(3));
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x8c0cbbe8u;
  ST32(R(14)+40,R(2));
  R(2)=0x8c0cc3b0u;
  R(3)=LD32(R(0));
  R(1)=LD32(R(2));
  c->t=R(1)==R(3);
  if(c->t) goto L8c0b2d8e;
  R(1)=0x8c0cc3b0u;
  R(2)=LD32(R(1));
  R(2)+=0x1u;
  ST32(R(1),R(2));
L8c0b2d8e:;
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
void f_8c0b2de6(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  R(0)=c->t;
  { R(0)^=0x1u; return; }
}
void f_8c0b2dee(SH4Ctx *c) {
  { fp_ld(c,0,R(4)); return; }
}
void f_8c0b2df2(SH4Ctx *c) {
  fp_st(c,4,R(4));
  { fp_mov(c,0,4); return; }
}
void f_8c0b2e20(SH4Ctx *c) {
  { R(0)=R(4); return; }
}
void f_8c0b2e24(SH4Ctx *c) {
  R(3)=0x8c0cc438u;
  R(0)=0x4u;
  R(2)=0x8c0cc43cu;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(4));
  fp_ld(c,3,R(2));
  { fp_st(c,3,R(0)+R(4)); return; }
}
void f_8c0b2e60(SH4Ctx *c) {
  fp_mov(c,6,4);
  fp_arith(c,2,6,4);
  R(5)=0x8c0bd8d0u;
  R(4)=0x5u;
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
L8c0b2e6a:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,6);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,5);
  { uint32_t k=c->t; fp_mov(c,5,3); if(k) goto L8c0b2e6a; }
  fp_mov(c,0,4);
  fp_mov(c,6,5);
  { fp_arith(c,2,0,6); return; }
}
void f_8c0b2e84(SH4Ctx *c) {
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c0b2e9c; }
L8c0b2e8a:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0b2e94;
  { R(0)=0x0u; return; }
L8c0b2e94:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(5);
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0b2e8a; }
L8c0b2e9c:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0b2ea4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(0)=R(4);
  R(12)=0x8u;
  ST16(R(15)+4,R(0));
  R(0)=R(12);
  R(13)=R(6);
  c->t=(int32_t)R(13)>0;
  R(14)=R(15);
  ST32(R(15)+8,R(5));
  ST32(R(15)+12,R(7));
  ST16(R(15)+16,R(0));
  { uint32_t k=!c->t; R(14)+=0x14u; if(k) goto L8c0b2ee4; }
  R(2)=0x8c0b5f24u;
  R(5)=R(15);
  R(6)=R(14);
  { c->pr=0x8c0b2ed2u; R(4)=R(13); f_8c0b5f24(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(14);
  R(3)=0x8c0b5c78u;
  R(7)=LD32(R(15)+8);
  R(6)=R(0);
  { c->pr=0x8c0b2ee0u; R(4)=R(15); f_8c0b5c78(c); }
  {  goto L8c0b2efc; }
L8c0b2ee4:;
  R(3)=0x8c0b5f24u;
  R(5)=R(15);
  R(6)=R(14);
  { c->pr=0x8c0b2eeeu; R(4)=0u-R(13); f_8c0b5f24(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(14);
  R(3)=0x8c0b5e98u;
  R(7)=LD32(R(15)+8);
  R(6)=R(0);
  { c->pr=0x8c0b2efcu; R(4)=R(15); f_8c0b5e98(c); }
L8c0b2efc:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(13)=0x3fu;
  R(2)=0x8c0b5980u;
  R(13)-=R(3);
  R(1)=R(13);
  { c->pr=0x8c0b2f0au; R(0)=(int32_t)(int16_t)LD16(R(15)+16); f_8c0b5980(c); }
  R(6)=0x42u;
  R(1)=0x8c0b6164u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(13);
  R(11)=R(0);
  R(5)=0x9u;
  R(6)-=R(2);
  { c->pr=0x8c0b2f1au; R(4)=R(14); f_8c0b6164(c); }
  R(5)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(12)>=(int32_t)R(5);
  { uint32_t k=!c->t; R(0)=R(12); if(k) goto L8c0b2f36; }
L8c0b2f22:;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(3)=(uint32_t)(int32_t)(int16_t)R(0);
  R(3)-=R(5);
  R(3)+=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(14)+R(0),R(3));
  R(0)+=0xffffffffu;
  R(2)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  if(c->t) goto L8c0b2f22;
L8c0b2f36:;
  R(6)=(uint32_t)(int32_t)(int16_t)R(0);
  R(3)=(uint32_t)(int32_t)(int16_t)R(0);
  R(6)+=R(14);
  c->t=(int32_t)R(3)>=0;
  R(6)+=0x1u;
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c0b2f4e; }
L8c0b2f44:;
  R(0)+=0xffffffffu;
  R(3)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; {uint32_t v=R(5);R(6)-=1;ST8(R(6),v);} if(k) goto L8c0b2f44; }
L8c0b2f4e:;
  R(11)<<=2;
  R(3)=0x8c0b37acu;
  R(6)=R(13);
  c->t=R(11)>>31;R(11)<<=1;
  R(5)=0x9u;
  R(6)-=R(11);
  { c->pr=0x8c0b2f5eu; R(4)=R(14); f_8c0b37ac(c); }
  R(3)=0x8c0b6078u;
  R(2)=0x3fu;
  R(5)=0x40u;
  ST16(R(15),R(2));
  { c->pr=0x8c0b2f6au; R(4)=R(14); f_8c0b6078(c); }
  R(3)=0x8c0685b4u;
  R(5)=R(14);
  R(6)=0x8u;
  { c->pr=0x8c0b2f74u; R(4)=LD32(R(15)+12); f_8c0685b4(c); }
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b2fa4(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=0x4u;
  fp_mov(c,5,4);
  fp_st(c,5,R(0)+R(15));
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0b2fba; }
  R(4)=0x8u;
L8c0b2fba:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,5,3);
  R(7)=0x4u;
  { uint32_t k=!c->t; R(6)=0x1u; if(k) goto L8c0b2fc8; }
  { R(4)|=R(7); goto L8c0b2fe0; }
L8c0b2fc8:;
  R(2)=LD32(R(15)+4);
  R(3)=0x7fffffffu;
  R(1)=0x7f800000u;
  R(2)&=R(3);
  c->t=R(2)==R(1);
  if(!c->t) goto L8c0b2fda;
  R(0)=0x2u;
  { R(4)|=R(0); goto L8c0b2fe0; }
L8c0b2fda:;
  fp_cmp(c,0,5,5);
  if(c->t) goto L8c0b2fe0;
  R(4)|=R(6);
L8c0b2fe0:;
  R(5)=0x8c0bd640u;
  c->t=(R(6)&R(4))==0;
  if(c->t) goto L8c0b2ff0;
  fp_ld(c,0,R(5));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
L8c0b2ff0:;
  R(3)=R(15);
  R(2)=0x80000000u;
  fp_st(c,4,R(15));
  R(1)=LD32(R(3));
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0b3002;
  fp_ld(c,3,R(15));
  fp_unary(c,0,3);
  fp_st(c,3,R(15));
L8c0b3002:;
  R(3)=0x8c0bd64cu;
  fp_ld(c,3,R(15));
  fp_ld(c,5,R(3));
  fp_cmp(c,1,3,5);
  if(!c->t) goto L8c0b3010;
  { fp_ld(c,5,R(5)); goto L8c0b306a; }
L8c0b3010:;
  fp_cmp(c,0,3,5);
  if(!c->t) goto L8c0b3022;
  R(2)=0x8u;
  R(1)=0x8c0bd668u;
  c->t=(R(4)&R(2))==0;
  { uint32_t k=c->t; fp_ld(c,5,R(1)); if(k) goto L8c0b306a; }
  { fp_unary(c,0,5); goto L8c0b306a; }
L8c0b3022:;
  c->t=(R(4)&R(7))==0;
  if(c->t) goto L8c0b302a;
  { fp_mov(c,5,4); goto L8c0b306a; }
L8c0b302a:;
  R(2)=0x8c0bd650u;
  fp_ld(c,3,R(15));
  fp_ld(c,2,R(2));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0b3048;
  fp_mov(c,1,4);
  fp_arith(c,2,1,4);
  fp_mov(c,0,5);
  fp_mov(c,15,4);
  fp_arith(c,1,0,1);
  fp_mov(c,1,5);
  fp_unary(c,2,0);
  fp_arith(c,0,1,0);
  { fp_arith(c,3,15,1); goto L8c0b305a; }
L8c0b3048:;
  fp_mov(c,1,4);
  fp_arith(c,2,1,4);
  fp_mov(c,0,5);
  fp_arith(c,1,0,1);
  fp_mov(c,1,5);
  fp_unary(c,2,0);
  fp_arith(c,1,1,0);
  fp_mov(c,15,1);
  fp_arith(c,3,15,4);
L8c0b305a:;
  R(3)=0x8c0ab6a8u;
  { c->pr=0x8c0b3060u; fp_mov(c,4,15); f_8c0ab6a8(c); }
  R(2)=0x8c0b30f0u;
  fp_mov(c,4,0);
  { c->pr=0x8c0b3068u; R(4)=0x1u; f_8c0b30f0(c); }
  fp_mov(c,5,0);
L8c0b306a:;
  fp_mov(c,0,5);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c0b3098(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(15);
  R(3)+=0x4u;
  R(0)=0x4u;
  fp_st(c,4,R(3));
  R(3)=0x8c0ab6a8u;
  fp_st(c,5,R(15));
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,3,5);
  { c->pr=0x8c0b30b0u; fp_arith(c,3,4,3); f_8c0ab6a8(c); }
  R(2)=R(15);
  R(3)=LD32(R(2));
  R(4)=0x80000000u;
  c->t=(R(3)&R(4))==0;
  { uint32_t k=c->t; fp_mov(c,4,0); if(k) goto L8c0b30d6; }
  R(1)=R(15);
  R(1)+=0x4u;
  R(3)=LD32(R(1));
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c0b30ce;
  R(2)=0x8c0bd690u;
  fp_mov(c,3,4);
  { fp_ld(c,4,R(2)); goto L8c0b30d4; }
L8c0b30ce:;
  R(3)=0x8c0bd660u;
  fp_mov(c,3,4);
  fp_ld(c,4,R(3));
L8c0b30d4:;
  fp_arith(c,0,4,3);
L8c0b30d6:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_mov(c,0,4); return; }
}
void f_8c0b30f0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(6)=R(15);
  R(2)=0x8c0bd648u;
  R(3)=0x7f800000u;
  R(1)=0x8c0bd678u;
  R(5)=0x80000000u;
  fp_st(c,4,R(6));
  R(7)=LD32(R(6));
  fp_ld(c,7,R(2));
  R(14)=LD32(R(6));
  R(7)&=R(3);
  c->t=R(7)==R(3);
  { uint32_t k=!c->t; fp_ld(c,5,R(1)); if(k) goto L8c0b3126; }
  R(0)=0x7fffffu;
  c->t=(R(0)&R(14))==0;
  if(!c->t) goto L8c0b311c;
  c->t=(R(5)&R(14))==0;
  if(!c->t) goto L8c0b315a;
  {  goto L8c0b3152; }
L8c0b311c:;
  R(3)=0x8c0bd640u;
  fp_ld(c,0,R(3));
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0b3126:;
  R(2)=0x8c0bd644u;
  c->t=(int32_t)R(7)>0;
  R(3)=0x8c0bd674u;
  fp_ld(c,4,R(2));
  { uint32_t k=c->t; fp_ld(c,6,R(3)); if(k) goto L8c0b313a; }
  c->t=(R(5)&R(14))==0;
  if(!c->t) goto L8c0b316e;
  {  goto L8c0b3166; }
L8c0b313a:;
  R(3)=0xffffffe9u;
  R(7)=sh4_shad(R(7),R(3));
  R(7)+=R(4);
  c->t=(int32_t)R(7)>0;
  if(!c->t) goto L8c0b314a;
  R(3)=0xffu;
  c->t=(int32_t)R(7)>=(int32_t)R(3);
  if(!c->t) goto L8c0b3176;
L8c0b314a:;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0b3162;
  c->t=(R(5)&R(14))==0;
  if(!c->t) goto L8c0b315a;
L8c0b3152:;
  fp_mov(c,0,7);
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0b315a:;
  fp_mov(c,0,5);
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0b3162:;
  c->t=(R(5)&R(14))==0;
  if(!c->t) goto L8c0b316e;
L8c0b3166:;
  fp_mov(c,0,4);
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0b316e:;
  fp_mov(c,0,6);
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0b3176:;
  R(2)=0x7fffffu;
  R(3)=0x17u;
  R(5)&=R(14);
  R(7)=sh4_shad(R(7),R(3));
  R(2)&=R(14);
  R(5)|=R(7);
  R(5)|=R(2);
  ST32(R(6),R(5));
  fp_ld(c,0,R(6));
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b31b0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=R(15);
  R(3)+=0x8u;
  fp_st(c,4,R(3));
  R(0)=0x4u;
  R(4)=0x0u;
  fp_st(c,4,R(0)+R(15));
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(6)=0x8u; if(k) goto L8c0b31ca; }
  R(4)=R(6);
L8c0b31ca:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  R(5)=0x7f800000u;
  { uint32_t k=!c->t; R(7)=0x1u; if(k) goto L8c0b31da; }
  R(2)=0x4u;
  { R(4)|=R(2); goto L8c0b31f0; }
L8c0b31da:;
  R(1)=LD32(R(15)+4);
  R(3)=0x7fffffffu;
  R(1)&=R(3);
  c->t=R(1)==R(5);
  if(!c->t) goto L8c0b31ea;
  R(1)=0x2u;
  { R(4)|=R(1); goto L8c0b31f0; }
L8c0b31ea:;
  fp_cmp(c,0,4,4);
  if(c->t) goto L8c0b31f0;
  R(4)|=R(7);
L8c0b31f0:;
  R(0)=R(4);
  c->t=(R(7)&R(0))==0;
  if(c->t) goto L8c0b31fc;
  R(3)=0x8c0bd640u;
  {  goto L8c0b3228; }
L8c0b31fc:;
  R(3)=0x4u;
  R(7)=0x8c0bd64cu;
  c->t=(R(3)&R(0))==0;
  if(c->t) goto L8c0b320e;
  fp_ld(c,0,R(7));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0b320e:;
  R(3)=R(15);
  R(3)+=0x8u;
  R(2)=LD32(R(3));
  R(3)=0xffffffe9u;
  R(1)=0xfu;
  R(2)&=R(5);
  R(2)=sh4_shad(R(2),R(3));
  R(2)+=0xffffff81u;
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  if(!c->t) goto L8c0b323e;
  c->t=(R(6)&R(0))==0;
  if(c->t) goto L8c0b3232;
  R(3)=0x8c0bd644u;
L8c0b3228:;
  fp_ld(c,0,R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0b3232:;
  R(0)=0x8c0bd648u;
  fp_ld(c,0,R(0));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0b323e:;
  R(3)=0x8c0bd920u;
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(3));
  R(4)=0x80000000u;
  fp_arith(c,2,1,3);
  R(2)=0x4f800000u;
  fp_st(c,1,R(0)+R(15));
  R(6)=LD32(R(15)+4);
  R(4)&=R(6);
  R(6)&=R(5);
  c->t=(int32_t)R(6)>=(int32_t)R(2);
  if(c->t) goto L8c0b3266;
  fp_ftrc(c,1);
  R(0)=c->fpul;
  c->fpul=R(0);
  R(0)=0x4u;
  fp_float(c,2);
  fp_st(c,2,R(0)+R(15));
L8c0b3266:;
  R(3)=LD32(R(15)+4);
  R(0)=0x4u;
  fp_mov(c,3,1);
  R(3)|=R(4);
  ST32(R(15)+4,R(3));
  R(3)=R(15);
  fp_ld(c,0,R(0)+R(15));
  fp_arith(c,1,3,0);
  fp_ftrc(c,0);
  fp_st(c,3,R(15));
  R(2)=LD32(R(3));
  R(3)=0xffffffe9u;
  R(5)&=R(2);
  R(5)=sh4_shad(R(5),R(3));
  R(2)=0xffffffffu;
  R(5)+=0xffffff81u;
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(4)=c->fpul; if(k) goto L8c0b32ae; }
  R(1)=R(15);
  R(0)=LD32(R(1));
  R(3)=0x80000000u;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c0b32a2;
  fp_ld(c,2,R(7));
  fp_ld(c,3,R(15));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(15));
  { R(4)+=0xffffffffu; goto L8c0b32ae; }
L8c0b32a2:;
  R(1)=0x8c0bd67cu;
  R(4)+=0x1u;
  fp_ld(c,3,R(15));
  fp_ld(c,2,R(1));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(15));
L8c0b32ae:;
  R(3)=0x8c0bd670u;
  R(7)=0x6u;
  fp_ld(c,3,R(15));
  R(5)=R(7);
  fp_ld(c,1,R(3));
  R(6)=0x8c0bd8e8u;
  fp_arith(c,2,1,3);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
L8c0b32be:;
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  R(5)+=0xffffffffu;
  fp_mov(c,0,1);
  c->t=(int32_t)R(5)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0b32be; }
  R(6)=0x8c0bd904u;
  R(5)=R(7);
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
L8c0b32d2:;
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  R(5)+=0xffffffffu;
  fp_mov(c,0,1);
  c->t=(int32_t)R(5)>0;
  fp_fmac(c,3,5);
  { uint32_t k=c->t; fp_mov(c,5,3); if(k) goto L8c0b32d2; }
  R(3)=0x8c0b30f0u;
  fp_mov(c,6,5);
  { c->pr=0x8c0b32e8u; fp_arith(c,3,4,6); f_8c0b30f0(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0b3328(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  R(3)=R(15);
  R(3)+=0x8u;
  fp_st(c,4,R(3));
  R(0)=0x4u;
  R(4)=0x0u;
  fp_st(c,4,R(0)+R(15));
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(5)=0x8u; if(k) goto L8c0b3340; }
  R(4)=R(5);
L8c0b3340:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  R(6)=0x7f800000u;
  { uint32_t k=!c->t; R(7)=0x1u; if(k) goto L8c0b3350; }
  R(2)=0x4u;
  { R(4)|=R(2); goto L8c0b3366; }
L8c0b3350:;
  R(1)=LD32(R(15)+4);
  R(3)=0x7fffffffu;
  R(1)&=R(3);
  c->t=R(1)==R(6);
  if(!c->t) goto L8c0b3360;
  R(1)=0x2u;
  { R(4)|=R(1); goto L8c0b3366; }
L8c0b3360:;
  fp_cmp(c,0,4,4);
  if(c->t) goto L8c0b3366;
  R(4)|=R(7);
L8c0b3366:;
  R(2)=0x8c0bd640u;
  R(0)=R(4);
  c->t=(R(7)&R(0))==0;
  { uint32_t k=!c->t; fp_ld(c,4,R(2)); if(k) goto L8c0b3380; }
  R(3)=0x4u;
  c->t=(R(3)&R(0))==0;
  if(c->t) goto L8c0b337c;
  R(0)=0x8c0bd678u;
  {  goto L8c0b338e; }
L8c0b337c:;
  c->t=(R(5)&R(0))==0;
  if(c->t) goto L8c0b3386;
L8c0b3380:;
  fp_mov(c,0,4);
  { R(15)+=0xcu; return; }
L8c0b3386:;
  R(1)=0x2u;
  c->t=(R(1)&R(0))==0;
  if(c->t) goto L8c0b3394;
  R(0)=0x8c0bd648u;
L8c0b338e:;
  fp_ld(c,0,R(0));
  { R(15)+=0xcu; return; }
L8c0b3394:;
  R(3)=0x8c0bd64cu;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_ld(c,3,R(3));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0b33a8;
  R(1)=0x8c0bd644u;
  fp_ld(c,0,R(1));
  { R(15)+=0xcu; return; }
L8c0b33a8:;
  R(3)=R(15);
  R(2)=0x807fffffu;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_st(c,3,R(15));
  R(1)=LD32(R(3));
  R(1)&=R(2);
  R(2)=0x8c0bd670u;
  ST32(R(3),R(1));
  R(3)=R(15);
  R(0)=LD32(R(3));
  R(1)=0x3f800000u;
  R(0)|=R(1);
  R(1)=0x8c0bd928u;
  ST32(R(3),R(0));
  R(3)=R(15);
  R(3)+=0x8u;
  fp_ld(c,1,R(2));
  R(0)=LD32(R(3));
  R(3)=0xffffffe9u;
  fp_ld(c,0,R(1));
  R(6)&=R(0);
  R(6)=sh4_shad(R(6),R(3));
  R(3)=0x8c0bd650u;
  R(6)+=0xffffff81u;
  c->fpul=R(6);
  fp_ld(c,2,R(3));
  fp_float(c,3);
  fp_arith(c,0,3,2);
  fp_mov(c,7,3);
  fp_arith(c,2,7,1);
  fp_ld(c,3,R(15));
  R(3)=0x8c0bd924u;
  fp_arith(c,0,0,3);
  R(5)=0x8c0bd92cu;
  R(4)=0x7u;
  fp_ld(c,2,R(3));
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_arith(c,0,2,3);
  fp_mov(c,5,0);
  fp_arith(c,3,5,2);
  fp_mov(c,6,5);
  fp_arith(c,2,6,5);
L8c0b33fe:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,6);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0b33fe; }
  fp_mov(c,6,4);
  fp_mov(c,4,5);
  fp_arith(c,2,4,6);
  fp_mov(c,0,7);
  fp_arith(c,0,0,4);
  { R(15)+=0xcu; return; }
}
void f_8c0b3454(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(4)=R(15);
  { c->pr=0x8c0b345eu; R(4)+=0x8u; f_8c0b349e(c); }
  R(3)=c->fpscr;
  R(1)=0x80000u;
  R(0)=0x8c0b3590u;
  R(2)=LD32(R(15)+8);
  R(3)|=R(1);
  sh4_setfpscr(c,R(3));
  c->fpul=R(2);
  R(3)=0xffe7ffffu;
  fp_ld(c,0,R(0));
  R(0)=0x8c0b3594u;
  fp_float(c,2);
  fp_ld(c,1,R(0));
  R(2)=c->fpscr;
  R(2)&=R(3);
  fp_mov(c,5,3);
  fp_mov(c,4,2);
  fp_arith(c,2,4,0);
  sh4_setfpscr(c,R(2));
  { c->pr=0x8c0b3486u; R(4)=R(15); f_8c0b361c(c); }
  R(0)=0x4u;
  R(3)=0x80000u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=c->fpscr;
  fp_ld(c,3,R(15));
  R(0)|=R(3);
  sh4_setfpscr(c,R(0));
  fp_ftrc(c,2);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c0b349e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(1)=R(15);
  R(2)=R(15);
  R(8)=0x800fu;
  R(1)+=0x18u;
  R(3)=0x8c0b5e0cu;
  R(2)+=0x14u;
  R(0)=0x14u;
  fp_st(c,5,R(2));
  fp_st(c,4,R(1));
  R(14)=R(4);
  { c->pr=0x8c0b34c8u; fp_ld(c,5,R(0)+R(15)); f_8c0b5e0c(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0b34f6; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(0)=R(4); if(k) goto L8c0b34dc; }
  R(3)=0x8c129ae4u;
  R(2)=0x4b8u;
  ST32(R(3),R(2));
L8c0b34dc:;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0xffffffffu; if(k) goto L8c0b34e8; }
  R(2)=0x8c129ae4u;
  R(3)=0x44cu;
  ST32(R(2),R(3));
L8c0b34e8:;
  R(3)=R(15);
  R(2)=R(15);
  R(3)+=0x14u;
  R(2)+=0x14u;
  ST32(R(3),R(4));
  { ST32(R(2)+4,R(4)); goto L8c0b3600; }
L8c0b34f6:;
  R(0)=0x8c0b35a8u;
  R(2)=0x80000u;
  fp_ld(c,2,R(0));
  R(0)=0x14u;
  R(3)=c->fpscr;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,3,2);
  R(3)|=R(2);
  fp_ld(c,0,R(0)+R(15));
  sh4_setfpscr(c,R(3));
  fp_cmp(c,0,0,2);
  if(!c->t) goto L8c0b351c;
  R(0)=0x8c0b35a8u;
  R(3)=0x0u;
  ST32(R(14),R(3));
  fp_ld(c,0,R(0));
  { fp_mov(c,1,0); goto L8c0b3608; }
L8c0b351c:;
  R(13)=R(15);
  R(13)+=0x14u;
  R(4)=R(13);
  R(4)+=0x6u;
  ST32(R(15),R(4));
  R(4)=(int32_t)(int16_t)LD16(R(4));
  R(2)=0x7ffu;
  R(4)=R(4)&0xFFFF;
  R(3)=0xfffffc02u;
  R(4)>>=2;
  R(1)=0x3feu;
  R(4)>>=2;
  R(4)&=R(2);
  R(4)+=R(3);
  R(0)=R(4);
  R(0)+=R(1);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(14),R(4)); if(k) goto L8c0b35ee; }
  R(3)=LD32(R(14));
  R(5)=R(13);
  R(10)=R(15);
  R(5)+=0x4u;
  R(3)+=0x1u;
  R(12)=0x8c0b5f08u;
  ST32(R(14),R(3));
  R(10)+=0xcu;
  R(3)=LD32(R(15));
  R(4)=R(10);
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)&=R(8);
  ST16(R(3),R(0));
  R(3)=c->fpscr;
  R(0)=0xffe7ffffu;
  ST32(R(15)+4,R(5));
  R(3)&=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0b3568u; sh4_setfpscr(c,R(3)); sh4_call(c,tg); }
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(4)=R(10);
  R(5)=R(13);
  R(4)+=0x4u;
  R(3)&=R(2);
  { uint32_t tg=R(12); c->pr=0x8c0b3578u; sh4_setfpscr(c,R(3)); sh4_call(c,tg); }
  R(11)=R(10);
  R(11)+=0x1u;
  { R(9)=0x10u; goto L8c0b35c6; }
L8c0b35b0:;
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(5)=0x7u;
  R(3)&=R(2);
  R(2)=0x8c0b5e50u;
  sh4_setfpscr(c,R(3));
  { c->pr=0x8c0b35c0u; R(4)=R(11); f_8c0b5e50(c); }
  R(3)=LD32(R(14));
  R(3)+=0xffffffffu;
  ST32(R(14),R(3));
L8c0b35c6:;
  R(2)=(int32_t)(int8_t)LD8(R(11));
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c0b35b0;
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(5)=R(10);
  ST32(R(15)+8,R(10));
  R(4)=LD32(R(15)+4);
  R(3)&=R(2);
  { uint32_t tg=R(12); c->pr=0x8c0b35deu; sh4_setfpscr(c,R(3)); sh4_call(c,tg); }
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(4)=R(13);
  R(5)=LD32(R(15)+8);
  R(3)&=R(2);
  R(5)+=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c0b35eeu; sh4_setfpscr(c,R(3)); sh4_call(c,tg); }
L8c0b35ee:;
  R(3)=LD32(R(15));
  R(4)=0x3fe0u;
  R(2)=(int32_t)(int16_t)LD16(R(3));
  R(2)&=R(8);
  ST16(R(3),R(2));
  R(3)=LD32(R(15));
  R(2)=(int32_t)(int16_t)LD16(R(3));
  R(2)|=R(4);
  ST16(R(3),R(2));
L8c0b3600:;
  R(0)=0x14u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,0,R(0)+R(15));
L8c0b3608:;
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
void f_8c0b361c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=R(15);
  R(2)+=0x4u;
  R(3)=0x8c0b5e0cu;
  R(13)=0xffffffffu;
  R(14)=R(4);
  fp_st(c,5,R(15));
  fp_st(c,4,R(2));
  { c->pr=0x8c0b3636u; fp_ld(c,5,R(15)); f_8c0b5e0c(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0b365e; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(0)=R(4); if(k) goto L8c0b364a; }
  R(3)=0x8c129ae4u;
  R(2)=0x4b8u;
  ST32(R(3),R(2));
L8c0b364a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0b3654;
  R(2)=0x8c129ae4u;
  R(3)=0x44cu;
  ST32(R(2),R(3));
L8c0b3654:;
  R(1)=R(15);
  R(3)=R(15);
  ST32(R(1),R(13));
  { ST32(R(3)+4,R(13)); goto L8c0b3724; }
L8c0b365e:;
  R(4)=R(15);
  R(0)=(int32_t)(int16_t)LD16(R(4)+6);
  R(2)=0x7ffu;
  R(4)=R(0)&0xFFFF;
  R(3)=0xfffffc01u;
  R(4)>>=2;
  R(4)>>=2;
  R(4)&=R(2);
  R(4)+=R(3);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0b3684;
  R(0)=0x8c0b36d8u;
  fp_ld(c,2,R(0));
  R(0)=R(14);
  R(0)+=0x4u;
  fp_mov(c,3,2);
  fp_st(c,3,R(0));
  { R(0)-=fp_sz(c);fp_st(c,3,R(0)); goto L8c0b36f0; }
L8c0b3684:;
  R(0)=0x4u;
  fp_ld(c,3,R(15));
  fp_ld(c,2,R(0)+R(15));
  R(0)=R(14);
  R(6)=0x34u;
  R(0)+=0x4u;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  fp_st(c,2,R(0));
  { uint32_t k=c->t; R(0)-=fp_sz(c);fp_st(c,3,R(0)); if(k) goto L8c0b36f0; }
  R(5)=R(6);
  R(5)-=R(4);
  R(0)=R(5);
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0b36a4;
  R(0)+=0x1fu;
L8c0b36a4:;
  R(1)=0xfffffffbu;
  R(0)=sh4_shad(R(0),R(1));
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c0b36b2;
  R(0)=0x0u;
  R(1)=R(15);
  ST32(R(1),R(0));
L8c0b36b2:;
  R(0)=R(5);
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c0b36dc; }
  { R(0)&=0x1fu; goto L8c0b36e6; }
L8c0b36dc:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x1fu;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c0b36e6:;
  R(3)=R(15);
  R(2)=LD32(R(3)+4);
  R(4)=sh4_shld(R(4),R(0));
  R(2)&=R(4);
  ST32(R(3)+4,R(2));
L8c0b36f0:;
  R(0)=R(14);
  fp_ld(c,3,R(0));R(0)+=fp_sz(c);
  R(3)=c->fpscr;
  R(2)=0x80000u;
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  R(3)|=R(2);
  fp_ld(c,1,R(15));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  sh4_setfpscr(c,R(3));
  fp_arith(c,1,0,2);
  fp_st(c,1,R(15));
  fp_st(c,0,R(0)+R(15));
  R(0)=0x8c0b3738u;
  fp_ld(c,2,R(0));
  R(0)=R(14);
  fp_ld(c,1,R(0));R(0)+=fp_sz(c);
  fp_mov(c,3,2);
  fp_ld(c,0,R(0));
  fp_cmp(c,1,2,0);
  if(!c->t) goto L8c0b3724;
  R(3)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(3)+7);
  R(0)|=0x80u;
  ST8(R(3)+7,R(0));
L8c0b3724:;
  R(0)=0x4u;
  fp_ld(c,1,R(15));
  fp_ld(c,0,R(0)+R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b373c(SH4Ctx *c) {
  R(7)=0x8u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)-=R(6);
  R(14)=(uint32_t)(int32_t)(int16_t)R(7);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0b3782;
  R(5)+=0xffffffffu;
  R(1)=0xffu;
  R(5)+=R(4);
  c->t=R(5)>=R(4);
  R(1)=sh4_shad(R(1),R(14));
  { uint32_t k=!c->t; R(7)=0x0u; if(k) goto L8c0b3774; }
L8c0b3756:;
  R(2)=(int32_t)(int8_t)LD8(R(5));
  R(3)=(uint32_t)(int32_t)(int16_t)R(6);
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(2)=sh4_shld(R(2),R(3));
  ST8(R(5),R(2));
  R(0)&=R(1);
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(3)|=R(7);
  ST8(R(5),R(3));
  R(5)+=0xffffffffu;
  c->t=R(5)>=R(4);
  R(7)=R(0)&0xFF;
  R(3)=0u-R(14);
  { uint32_t k=c->t; R(7)=sh4_shld(R(7),R(3)); if(k) goto L8c0b3756; }
L8c0b3774:;
  R(7)=R(7)&0xFF;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c0b3780;
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0b3780:;
  R(0)=0x0u;
L8c0b3782:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3786(SH4Ctx *c) {
  sh4_mac_l(c,R(0),R(15));R(0)+=4;R(15)+=4;
  { f_8c0b3788(c); return; }
}
void f_8c0b3788(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(3)=0x8c0bd94cu;
  R(6)=0x8u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(5)=LD32(R(15)+4);
  R(4)=LD32(R(15));
  R(5)<<=2;
  R(2)=0x8c0685b4u;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  { R(15)+=0x8u; { f_8c0685b4(c); return; } }
}
void f_8c0b37ac(SH4Ctx *c) {
  R(7)=0x8u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)-=R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=(uint32_t)(int32_t)(int16_t)R(7);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0b37f8;
  R(12)=0xffu;
  R(3)=0u-R(13);
  c->t=(int32_t)R(5)>0;
  R(7)=0x0u;
  R(12)=sh4_shad(R(12),R(3));
  { uint32_t k=!c->t; R(14)=R(7); if(k) goto L8c0b37ec; }
L8c0b37ca:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(3)=(uint32_t)(int32_t)(int16_t)R(6);
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(3)=0u-R(3);
  R(2)=R(2)&0xFF;
  R(0)&=R(12);
  R(14)+=0x1u;
  R(2)=sh4_shld(R(2),R(3));
  c->t=(int32_t)R(14)>=(int32_t)R(5);
  ST8(R(4),R(2));
  R(1)=(int32_t)(int8_t)LD8(R(4));
  R(1)|=R(7);
  R(7)=R(0)&0xFF;
  ST8(R(4),R(1));
  R(7)=sh4_shld(R(7),R(13));
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0b37ca; }
L8c0b37ec:;
  R(7)=R(7)&0xFF;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c0b37f6;
  { R(0)=0x1u; goto L8c0b37f8; }
L8c0b37f6:;
  R(0)=0x0u;
L8c0b37f8:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3804(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(7);
  R(12)=R(15);
  R(11)=R(6);
  R(3)=0x8c0686b8u;
  R(10)=R(5);
  R(6)=0x8u;
  R(5)=0x0u;
  ST32(R(15),R(4));
  ST8(R(15)+4,R(0));
  R(12)+=0x8u;
  { c->pr=0x8c0b382cu; R(4)=R(12); f_8c0686b8(c); }
  R(11)+=0xfffffff0u;
  { R(13)=0x10u; goto L8c0b3836; }
L8c0b3832:;
  R(11)+=0x1u;
  R(13)+=0xffffffffu;
L8c0b3836:;
  R(0)=R(13);
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c0b3832;
  R(9)=0x8c0b5bccu;
  c->t=(int32_t)R(13)>=0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0b3858; }
L8c0b3846:;
  R(0)=R(14);
  R(5)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(6)=R(14);
  R(5)+=0xffffffd0u;
  { uint32_t tg=R(9); c->pr=0x8c0b3852u; R(4)=R(12); sh4_call(c,tg); }
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>(int32_t)R(13);
  if(!c->t) goto L8c0b3846;
L8c0b3858:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(11);
  R(3)=0x8c0b59d0u;
  R(6)=R(0);
  { c->pr=0x8c0b3864u; R(4)=R(12); f_8c0b59d0(c); }
  R(2)=LD32(R(15));
  fp_mov(c,4,0);
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,2,4,3);
  fp_mov(c,0,4);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3890(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b38a8;
  R(3)=0x200u;
  R(4)-=R(5);
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c0b38a8;
  R(2)=0x8c129ae4u;
  R(1)=0x450u;
  ST32(R(2),R(1));
  { R(0)=0x1u; return; }
L8c0b38a8:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0b38b8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(7)+=0xffffffffu;
  R(1)=R(7);
  R(7)+=R(6);
  R(1)+=R(5);
  R(13)=0x0u;
  ST32(R(15)+4,R(1));
  R(6)=LD32(R(15)+4);
  R(14)=R(13);
  R(12)=0x1u;
  c->t=R(6)>=R(5);
  { uint32_t k=!c->t; R(1)+=0x1u; if(k) goto L8c0b390a; }
L8c0b38d8:;
  R(3)=(int32_t)(int8_t)LD8(R(7));
  R(2)=(int32_t)(int8_t)LD8(R(6));
  R(3)=R(3)&0xFF;
  R(2)=R(2)&0xFF;
  R(2)-=R(3);
  R(2)-=R(14);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c0b38f4; }
  R(14)=0x100u;
  R(14)+=R(2);
  ST32(R(15),R(14));
  { R(14)=0x1u; goto L8c0b38f6; }
L8c0b38f4:;
  R(14)=0x0u;
L8c0b38f6:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0b38fe;
  R(12)=R(13);
L8c0b38fe:;
  R(3)=LD32(R(15));
  R(6)+=0xffffffffu;
  c->t=R(6)>=R(5);
  {uint32_t v=R(3);R(1)-=1;ST8(R(1),v);}
  { uint32_t k=c->t; R(7)+=0xffffffffu; if(k) goto L8c0b38d8; }
L8c0b390a:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0b3918;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0b3918;
  { R(0)=0xffffffffu; goto L8c0b3924; }
L8c0b3918:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0b3922;
  { R(0)=0x0u; goto L8c0b3924; }
L8c0b3922:;
  R(0)=0x1u;
L8c0b3924:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3930(SH4Ctx *c) {
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; R(7)=R(5); if(k) goto L8c0b393a; }
  { R(0)=0x0u; return; }
L8c0b393a:;
  R(5)=0x0u;
  R(2)=R(5);
  c->t=R(2)>=R(6);
  if(c->t) goto L8c0b3950;
L8c0b3942:;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(2)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0b3950;
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c0b3942;
L8c0b3950:;
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
void f_8c0b3964(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(2)=R(15);
  R(12)=R(15);
  R(2)+=0x8u;
  R(13)=R(5);
  R(12)+=0x4u;
  R(5)=0x8000u;
  R(12)+=0x6u;
  R(3)=R(15);
  R(3)+=0x4u;
  fp_st(c,5,R(3));
  fp_st(c,4,R(2));
  R(2)=(int32_t)(int16_t)LD16(R(12));
  R(2)=R(2)&0xFFFF;
  R(2)&=R(5);
  c->t=R(2)==R(5);
  { uint32_t k=!c->t; R(14)=R(6); if(k) goto L8c0b3996; }
  { R(3)=0xffffffffu; goto L8c0b3998; }
L8c0b3996:;
  R(3)=0x1u;
L8c0b3998:;
  ST8(R(4),R(3));
  R(5)=R(12);
  R(1)=(int32_t)(int16_t)LD16(R(12));
  R(5)+=0xfffffffeu;
  R(2)=0x7ff0u;
  R(11)=R(15);
  ST16(R(13),R(1));
  R(1)=0xfffffffcu;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(3)&=R(2);
  R(3)=sh4_shad(R(3),R(1));
  R(1)=c->fpscr;
  ST16(R(13),R(3));
  R(3)=0xffe7ffffu;
  R(1)&=R(3);
  R(3)=0x8c0b5f08u;
  sh4_setfpscr(c,R(1));
  { c->pr=0x8c0b39beu; R(4)=R(11); f_8c0b5f08(c); }
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(5)=R(11);
  R(5)+=0x1u;
  R(3)&=R(2);
  R(2)=0x8c0685b4u;
  sh4_setfpscr(c,R(3));
  R(6)=0x3u;
  { c->pr=0x8c0b39d2u; R(4)=R(14); f_8c0685b4(c); }
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(5)=R(12);
  R(5)+=0xfffffffau;
  R(2)&=R(3);
  R(3)=0x8c0b5f08u;
  sh4_setfpscr(c,R(2));
  { c->pr=0x8c0b39e4u; R(4)=R(11); f_8c0b5f08(c); }
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(4)=R(14);
  R(6)=0x4u;
  R(5)=R(11);
  R(3)&=R(2);
  R(2)=0x8c0685b4u;
  sh4_setfpscr(c,R(3));
  { c->pr=0x8c0b39f8u; R(4)+=0x3u; f_8c0685b4(c); }
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(6)=0x3u;
  R(12)=0x8c0b373cu;
  R(5)=0x7u;
  R(3)&=R(2);
  R(4)=R(14);
  { c->pr=0x8c0b3a0au; sh4_setfpscr(c,R(3)); f_8c0b373c(c); }
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0b3a18;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)|=0x80u;
  { ST8(R(14),R(0)); goto L8c0b3a46; }
L8c0b3a18:;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(11)=0x80u;
  R(2)+=0x1u;
  ST16(R(13),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)&=0x7fu;
  { ST8(R(14),R(0)); goto L8c0b3a3e; }
L8c0b3a28:;
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(6)=0x1u;
  R(5)=0x7u;
  R(4)=R(14);
  R(2)&=R(3);
  { uint32_t tg=R(12); c->pr=0x8c0b3a38u; sh4_setfpscr(c,R(2)); sh4_call(c,tg); }
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(2)+=0xffffffffu;
  ST16(R(13),R(2));
L8c0b3a3e:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(11))==0;
  if(c->t) goto L8c0b3a28;
L8c0b3a46:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3a6c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0b3328u;
  { c->pr=0x8c0b3a76u;  f_8c0b3328(c); }
  R(3)=R(15);
  R(4)=0x7f800000u;
  fp_st(c,0,R(15));
  R(2)=LD32(R(3));
  R(2)&=R(4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0b3a9c;
  R(2)=R(15);
  R(1)=LD32(R(2));
  R(3)=0x7fffffu;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0b3a96;
  R(2)=0x8c129ae4u;
  R(0)=0x44du;
  { ST32(R(2),R(0)); goto L8c0b3a9c; }
L8c0b3a96:;
  R(1)=0x8c129ae4u;
  R(2)=0x44cu;
  ST32(R(1),R(2));
L8c0b3a9c:;
  fp_ld(c,0,R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0b3ac4(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0b3ac8(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+12);
  R(1)=LD32(R(2));
  R(2)=0x22u;
  R(3)=LD32(R(1)+4);
  R(4)=LD32(R(3)+12);
  ST32(R(5),R(4));
  ST32(R(5)+12,R(2));
  { R(0)=0x1u; return; }
}
void f_8c0b3adc(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+12);
  R(1)=LD32(R(2));
  R(2)=0x22u;
  R(3)=LD32(R(1)+8);
  R(4)=LD32(R(3)+12);
  ST32(R(5),R(4));
  ST32(R(5)+12,R(2));
  { R(0)=0x1u; return; }
}
void f_8c0b3af0(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0xe4u;
  R(2)=LD32(R(3));
  R(3)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  fp_st(c,3,R(5));
  ST32(R(5)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0b3b02(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0xe4u;
  R(2)=LD32(R(3));
  fp_ld(c,4,R(5));
  fp_st(c,4,R(0)+R(2));
  { R(0)=0x1u; return; }
}
void f_8c0b3b20(SH4Ctx *c) {
  ST8(R(0)+R(0),R(14));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(3)=LD32(R(4)+4);
  R(0)=0xe8u;
  R(2)=LD32(R(3));
  R(3)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  fp_st(c,3,R(5));
  ST32(R(5)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0b3b40(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0xe8u;
  R(2)=LD32(R(3));
  R(3)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  fp_st(c,3,R(5));
  ST32(R(5)+12,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0b3b52(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0xe8u;
  R(2)=LD32(R(3));
  fp_ld(c,4,R(5));
  fp_st(c,4,R(0)+R(2));
  { R(0)=0x1u; return; }
}
void f_8c0b3b60(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0b3b64(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c05e6eau;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(5)=LD32(R(15)+4);
  R(5)=LD32(R(5)+36);
  R(5)+=0x58u;
  { c->pr=0x8c0b3b78u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0b3b86(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0b3bc0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  c->fr[4]=0x00000000u;
  R(0)=0x8u;
  c->fr[3]=0x3F800000u;
  R(6)=R(15);
  fp_unary(c,0,3);
  R(6)+=0x8u;
  ST32(R(15)+4,R(4));
  R(4)=R(15);
  ST32(R(15),R(5));
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  R(3)=0x8c014eaau;
  fp_st(c,4,R(0)+R(15));
  R(5)=LD32(R(15)+4);
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c0b3beau; R(4)+=0x8u; f_8c014eaa(c); }
  R(4)=LD32(R(15)+4);
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0x14u;
  { c->pr=0x8c0b3bf6u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=R(15);
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x14u;
  R(5)+=0x8u;
  { c->pr=0x8c0b3c06u; R(4)+=0x8u; f_8c05e612(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,0,6);
  R(5)+=0x8u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
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
  R(3)=0x8c05e6eau;
  { c->pr=0x8c0b3c4cu; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0b3c5a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x15u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(4)+4);
  R(13)=LD32(R(13)+8);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; ST32(R(5)+12,R(3)); if(k) goto L8c0b3c8c; }
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0b3c74u; R(4)=R(13); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0b3c8c;
  R(3)=R(4);
  R(3)+=0x3cu;
  R(2)=LD32(R(3));
  R(1)=LD32(R(3)+4);
  ST32(R(14),R(2));
  ST32(R(14)+4,R(1));
  R(2)=LD32(R(3)+8);
  { ST32(R(14)+8,R(2)); goto L8c0b3c98; }
L8c0b3c8c:;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(14));
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
L8c0b3c98:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3ca2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+4);
  R(14)=R(5);
  R(4)=LD32(R(3)+8);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; ST32(R(14)+12,R(2)); if(k) goto L8c0b3cdc; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c0b3cbau;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0b3cdc;
  R(0)=0x4u;
  R(4)+=0x3cu;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,5,R(4));
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,5);
  fp_ld(c,4,R(0)+R(4));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  { fp_unary(c,2,3); goto L8c0b3cde; }
L8c0b3cdc:;
  c->fr[3]=0x00000000u;
L8c0b3cde:;
  R(0)=0x1u;
  fp_st(c,3,R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3ce8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15),R(5));
  R(5)=0x0u;
  R(14)=R(5);
  R(3)=0x8c015e64u;
  R(7)=R(14);
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(5));
  R(6)=LD32(R(15)+4);
  R(4)=LD32(R(4)+36);
  { c->pr=0x8c0b3d04u; R(5)=R(14); f_8c015e64(c); }
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  { c->pr=0x8c0b3d0cu; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  R(0)=0x1u;
  ST32(R(2)+12,R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3d1c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15),R(5));
  R(5)=0x0u;
  R(14)=R(5);
  R(3)=0x8c015e64u;
  R(7)=R(14);
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(5));
  R(6)=LD32(R(15)+4);
  R(4)=LD32(R(4)+36);
  { c->pr=0x8c0b3d38u; R(5)=R(14); f_8c015e64(c); }
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  { c->pr=0x8c0b3d40u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  R(0)=0x1u;
  ST32(R(2)+12,R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3d80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15),R(5));
  R(5)=0x0u;
  R(14)=R(5);
  R(3)=0x8c015e64u;
  R(7)=R(14);
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(5));
  R(6)=LD32(R(15)+4);
  R(4)=LD32(R(4)+36);
  { c->pr=0x8c0b3d9cu; R(5)=R(14); f_8c015e64(c); }
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  { c->pr=0x8c0b3da4u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  R(0)=0x1u;
  ST32(R(2)+12,R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b3db4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  R(3)=0x8c05e6eau;
  R(5)=0x8c0c5170u;
  { c->pr=0x8c0b3dc2u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0b3dd0(SH4Ctx *c) {
  R(2)=LD32(R(5));
  R(3)=0x8c0c5170u;
  R(1)=LD32(R(5)+4);
  ST32(R(3),R(2));
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(5)+8);
  ST32(R(3)+8,R(2));
  { R(0)=0x1u; return; }
}
void f_8c0b3de2(SH4Ctx *c) {
  R(2)=0x8c0c517cu;
  R(1)=0x6u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  ST32(R(5),R(3));
  ST32(R(5)+12,R(1));
  { R(0)=0x1u; return; }
}
void f_8c0b3df0(SH4Ctx *c) {
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(5));
  ST16(R(2),R(3));
  { R(0)=0x1u; return; }
}
void f_8c0b3dfa(SH4Ctx *c) {
  R(2)=0x8c0c517eu;
  R(1)=0x6u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  ST32(R(5),R(3));
  ST32(R(5)+12,R(1));
  { R(0)=0x1u; return; }
}
void f_8c0b3e08(SH4Ctx *c) {
  R(2)=0x8c0c517eu;
  R(3)=LD32(R(5));
  ST16(R(2),R(3));
  { R(0)=0x1u; return; }
}
void f_8c0b3e12(SH4Ctx *c) {
  R(3)=0x8c0c5180u;
  R(2)=0x8u;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(5));
  ST32(R(5)+12,R(2));
  { R(0)=0x1u; return; }
}
void f_8c0b3e20(SH4Ctx *c) {
  R(3)=0x8c0c5180u;
  fp_ld(c,3,R(5));
  fp_st(c,3,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0b3e2a(SH4Ctx *c) {
  R(3)=0x8c0c5184u;
  R(2)=0x8u;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(5));
  ST32(R(5)+12,R(2));
  { R(0)=0x1u; return; }
}
void f_8c0b3e38(SH4Ctx *c) {
  R(3)=0x8c0c5184u;
  fp_ld(c,3,R(5));
  fp_st(c,3,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0b3e80(SH4Ctx *c) {
  R(3)=0x8c0c5188u;
  R(2)=0x8u;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(5));
  ST32(R(5)+12,R(2));
  { R(0)=0x1u; return; }
}
void f_8c0b3e8e(SH4Ctx *c) {
  R(3)=0x8c0c5188u;
  fp_ld(c,3,R(5));
  fp_st(c,3,R(3));
  { R(0)=0x1u; return; }
}
void f_8c0b3e98(SH4Ctx *c) {
  R(2)=0x8c0c518cu;
  R(1)=0x6u;
  R(3)=LD32(R(2));
  ST32(R(5),R(3));
  ST32(R(5)+12,R(1));
  { R(0)=0x1u; return; }
}
void f_8c0b3ea6(SH4Ctx *c) {
  R(2)=0x8c0c518cu;
  R(3)=LD32(R(5));
  ST32(R(2),R(3));
  { R(0)=0x1u; return; }
}
void f_8c0b3ee0(SH4Ctx *c) {
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c0b3f12; }
L8c0b3eea:;
  R(3)=LD32(R(4)+16);
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0b3f02;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0b3f02;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0b3f02;
  {  goto L8c0b3f06; }
L8c0b3f02:;
  { R(0)=0x1u; return; }
L8c0b3f06:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(5)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0b3eea;
L8c0b3f12:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0b3f80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x2b0u;
  R(14)=R(4);
  R(5)=0x264u;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x4u;
  R(4)=0x288u;
  R(5)+=R(14);
  R(3)=0x8c05e6eau;
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c0b3f9eu; R(4)+=R(14); f_8c05e6ea(c); }
  R(0)=0x27cu;
  fp_ld(c,4,R(0)+R(14));
  R(0)+=0x4u;
  fp_ld(c,6,R(0)+R(14));
  R(0)+=0x4u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8c0b4054u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0b3fc8;
  R(0)=0x2b8u;
  R(2)=0x0u;
  { ST8(R(14)+R(0),R(2)); goto L8c0b401e; }
L8c0b3fc8:;
  fp_unary(c,2,4);
  c->fr[6]=0x3F800000u;
  fp_arith(c,0,6,6);
  R(0)=0x2b0u;
  R(6)=R(15);
  fp_ld(c,5,R(0)+R(14));
  R(0)+=0xffffffccu;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_fmac(c,3,5);
  fp_mov(c,15,3);
  fp_arith(c,3,15,6);
  fp_mov(c,3,4);
  fp_mov(c,2,15);
  fp_arith(c,1,2,5);
  fp_mov(c,4,2);
  fp_arith(c,3,4,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x280u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(15));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x284u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(5)=0x264u;
  R(4)=0x264u;
  R(3)=0x8c05e5f4u;
  R(5)+=R(14);
  { c->pr=0x8c0b4014u; R(4)+=R(14); f_8c05e5f4(c); }
  R(0)=0x2b0u;
  R(3)=0x1u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x8u;
  ST8(R(14)+R(0),R(3));
L8c0b401e:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b4060(SH4Ctx *c) {
  R(0)=0x2b0u;
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xfffffffcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(4));
  R(0)+=0xffffffb0u;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x28u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x28u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x1cu;
  fp_st(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,6,R(0)+R(4));
  R(0)+=0x4u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c0b40e0(SH4Ctx *c) {
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
  R(0)=0xffffff7cu;
  R(15)+=R(0);
  R(0)=0x238u;
  R(14)=R(4);
  R(4)=LD32(R(14)+16);
  ST32(R(15)+4,R(4));
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(7)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=LD32(R(6)+8);
  R(5)=R(7);
  R(3)=R(7);
  R(3)<<=2;
  R(4)=LD32(R(4));
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(10)=R(4);
  R(5)+=R(2);
  ST32(R(15)+8,R(5));
  R(12)=(int32_t)(int16_t)LD16(R(5));
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(3)=R(12);
  c->t=R(12)>>31;R(12)<<=1;
  R(12)+=R(3);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(10)+=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(12)<<=2;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(12)+=R(4);
  R(13)=R(7);
  R(0)+=R(3);
  R(3)=R(7);
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(2)=LD32(R(6)+16);
  R(3)=0x8c05e55cu;
  R(13)<<=2;
  R(11)=R(4);
  R(0)<<=2;
  R(11)+=R(0);
  R(5)=R(12);
  R(13)+=R(2);
  { c->pr=0x8c0b4156u; R(4)=R(13); f_8c05e55c(c); }
  R(0)=0x2b8u;
  fp_mov(c,15,0);
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  fp_unary(c,0,15);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(9)=0x1u; if(k) goto L8c0b41aa; }
  R(0)=0x2b0u;
  R(4)=R(14);
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xfffffffcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(4));
  R(0)+=0xffffffb0u;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x28u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x28u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x1cu;
  fp_st(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,6,R(0)+R(4));
  R(0)+=0x28u;
  ST8(R(14)+R(0),R(9));
L8c0b41aa:;
  R(0)=0x2b0u;
  R(6)=R(15);
  fp_ld(c,3,R(13));
  R(4)=R(15);
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x78u;
  R(5)=0x264u;
  R(6)+=0x78u;
  fp_arith(c,2,2,3);
  R(3)=0x8c05e5f4u;
  R(5)+=R(14);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x2b0u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x7cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x2b0u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x80u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0b41e2u; R(4)+=0x6cu; sh4_call(c,tg); }
  c->fr[14]=0x3F800000u;
  fp_arith(c,0,14,14);
  R(0)=0x78u;
  R(3)=0x8c077d74u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,4,15);
  R(6)=R(12);
  fp_arith(c,2,3,14);
  R(7)=R(10);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,14);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,3,14);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x68u;
  { uint32_t tg=R(3); c->pr=0x8c0b4220u; R(4)+=0x74u; sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x8u; if(k) goto L8c0b422c; }
  {  goto L8c0b46c4; }
L8c0b422c:;
  R(0)=0x2b8u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b42a2;
  R(0)=0x2b0u;
  R(4)=R(14);
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xfffffffcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(4));
  R(0)+=0xffffffb0u;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x28u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x28u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x1cu;
  fp_st(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(4));
  R(0)+=0x28u;
  R(3)=0x0u;
  {  goto L8c0b42a0; }
L8c0b42a0:;
  ST8(R(14)+R(0),R(3));
L8c0b42a2:;
  R(0)=0x2b0u;
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x78u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x2b0u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x7cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x2b0u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x80u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,3,14);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,14);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x80u;
  R(6)=R(15);
  R(5)=0x270u;
  R(4)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  R(3)=0x8c05e5f4u;
  R(5)+=R(14);
  fp_arith(c,2,3,14);
  R(6)+=0x78u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x27cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x280u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x58u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x284u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0b431cu; R(4)+=0x6cu; sh4_call(c,tg); }
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(6)=R(12);
  R(5)=R(15);
  R(2)=0x8c077d74u;
  R(8)=0x8c014eaau;
  R(5)+=0x68u;
  R(4)=R(15);
  fp_mov(c,4,15);
  { c->pr=0x8c0b4334u; R(4)+=0x74u; f_8c077d74(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x8u; if(k) goto L8c0b4340; }
  {  goto L8c0b4540; }
L8c0b4340:;
  R(6)=0x264u;
  R(4)=R(15);
  R(2)=0x8c05e612u;
  R(5)=R(12);
  R(6)+=R(14);
  { c->pr=0x8c0b434eu; R(4)+=0x48u; f_8c05e612(c); }
  R(6)=0x270u;
  R(4)=R(15);
  R(3)=0x8c05e612u;
  R(5)=R(12);
  R(6)+=R(14);
  { c->pr=0x8c0b435cu; R(4)+=0x3cu; f_8c05e612(c); }
  R(2)=0x8c05e55cu;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c0b4366u; R(4)+=0x48u; f_8c05e55c(c); }
  R(0)=0x2b0u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,0,4,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  { uint32_t k=c->t; fp_mov(c,15,0); if(k) goto L8c0b437a; }
  {  goto L8c0b46c4; }
L8c0b437a:;
  fp_ld(c,3,R(13));
  R(0)=0x30u;
  fp_mov(c,2,4);
  R(6)=R(15);
  fp_arith(c,2,2,3);
  R(3)=0x8c014f10u;
  R(4)=R(15);
  R(6)+=0x30u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x38u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(5)=LD32(R(14)+20);
  { uint32_t tg=R(3); c->pr=0x8c0b43a8u; R(4)+=0x30u; sh4_call(c,tg); }
  fp_ld(c,3,R(13));
  R(0)=0x24u;
  fp_mov(c,2,15);
  R(6)=R(15);
  fp_arith(c,2,2,3);
  R(5)=0x264u;
  R(3)=0x8c05e5f4u;
  R(4)=R(15);
  R(5)+=R(14);
  R(6)+=0x24u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x28u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x2cu;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0b43d8u; R(4)+=0x24u; sh4_call(c,tg); }
  R(2)=0x8c077982u;
  R(5)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(11);
  R(4)=R(15);
  R(6)=R(10);
  { c->pr=0x8c0b43e8u; R(4)+=0x28u; f_8c077982(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0b43f4; }
  {  goto L8c0b46c4; }
L8c0b43f4:;
  R(5)=LD32(R(14)+20);
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x24u;
  { uint32_t tg=R(8); c->pr=0x8c0b4400u; R(4)+=0x24u; sh4_call(c,tg); }
  R(0)=0x4u;
  R(4)=LD32(R(14)+20);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x18u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x14u;
  R(4)=LD32(R(14)+20);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  {  goto L8c0b4480; }
L8c0b4480:;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x1cu;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  fp_fmac(c,3,2);
  R(6)+=0x54u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x18u;
  R(4)=LD32(R(14)+20);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x20u;
  R(4)=R(15);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(5)=LD32(R(14)+20);
  { uint32_t tg=R(3); c->pr=0x8c0b44bcu; R(4)+=0x54u; sh4_call(c,tg); }
  R(6)=0x264u;
  R(4)=R(15);
  R(5)=LD32(R(14)+20);
  R(6)+=R(14);
  { uint32_t tg=R(8); c->pr=0x8c0b44c8u; R(4)+=0xcu; sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0xcu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=0x20u;
  R(3)=R(15);
  R(3)+=0x58u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x538u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x3u;
  R(3)=LD32(R(14)+28);
  c->fr[4]=0x3F800000u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+R(0));
  R(0)=0x258u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(14)+R(0));
  R(5)=R(15);
  R(0)=0x534u;
  R(4)=R(15);
  R(3)=0x8c0b2a00u;
  R(6)=R(15);
  R(7)=LD32(R(14)+R(0));
  R(6)+=0x34u;
  fp_ld(c,5,R(1));
  R(5)+=0x40u;
  R(4)+=0x4cu;
  { c->pr=0x8c0b4508u; fp_unary(c,0,4); f_8c0b2a00(c); }
  { R(15)+=0x1cu; goto L8c0b46c0; }
L8c0b4540:;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  R(5)+=0x54u;
  { c->pr=0x8c0b454au; R(4)=R(13); f_8c05e55c(c); }
  R(0)=0x2b0u;
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(0)+R(14));
  R(0)+=0xffffffc0u;
  fp_mov(c,5,0);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x48u;
  fp_unary(c,0,2);
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x2b0u;
  fp_ld(c,2,R(0)+R(14));
  R(0)+=0xffffffc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  fp_unary(c,0,2);
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x2b0u;
  fp_ld(c,2,R(0)+R(14));
  R(0)+=0xffffffc8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x50u;
  fp_unary(c,0,2);
  fp_arith(c,0,2,3);
  R(3)=R(15);
  R(3)+=0x3cu;
  fp_st(c,2,R(0)+R(15));
  R(7)=R(10);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(12);
  R(2)=R(15);
  R(2)+=0x4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(3)=0x8c077ca0u;
  R(5)+=0x64u;
  R(4)=R(15);
  fp_mov(c,4,15);
  { c->pr=0x8c0b45aeu; R(4)+=0x58u; f_8c077ca0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x10u; if(k) goto L8c0b45ba; }
  {  goto L8c0b46c4; }
L8c0b45ba:;
  R(5)=LD32(R(14)+20);
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x3cu;
  { uint32_t tg=R(8); c->pr=0x8c0b45c6u; R(4)+=0x30u; sh4_call(c,tg); }
  R(0)=0x4u;
  R(4)=LD32(R(14)+20);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x14u;
  R(4)=LD32(R(14)+20);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x28u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x18u;
  R(4)=LD32(R(14)+20);
  R(6)=R(15);
  c->fr[4]=0x00000000u;
  R(6)+=0x54u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  R(3)=0x8c014f10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x2cu;
  R(4)=R(15);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(5)=LD32(R(14)+20);
  { uint32_t tg=R(3); c->pr=0x8c0b4646u; R(4)+=0x54u; sh4_call(c,tg); }
  R(6)=0x264u;
  R(4)=R(15);
  R(5)=LD32(R(14)+20);
  R(6)+=R(14);
  { uint32_t tg=R(8); c->pr=0x8c0b4652u; R(4)+=0xcu; sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0xcu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=0x20u;
  R(3)=R(15);
  R(3)+=0x58u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x538u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x3u;
  R(3)=LD32(R(14)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+R(0));
  R(0)=0x258u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(14)+R(0));
  R(5)=R(15);
  R(0)=0x534u;
  R(4)=R(15);
  R(3)=0x8c0b2a00u;
  R(6)=R(15);
  R(7)=LD32(R(14)+R(0));
  R(0)=0x1cu;
  fp_ld(c,5,R(1));
  R(6)+=0x40u;
  R(5)+=0x4cu;
  R(4)+=0x34u;
  { c->pr=0x8c0b4692u; fp_ld(c,4,R(0)+R(15)); f_8c0b2a00(c); }
  { R(15)+=0x1cu; goto L8c0b46c4; }
L8c0b46c0:;
  { R(0)=0x1u; goto L8c0b46c6; }
L8c0b46c4:;
  R(0)=0x0u;
L8c0b46c6:;
  R(1)=0x84u;
  R(15)+=R(1);
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
void f_8c0b46e0(SH4Ctx *c) {
  ST8(R(0)+R(0),R(8));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  { f_8c0b4700(c); return; }
}
void f_8c0b4700(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(0)=0x24au;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST16(R(14)+R(0),R(11));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff2u;
  R(2)=LD32(R(14)+R(0));
  R(10)=0x8c014eaau;
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  R(12)=0x8c0b6200u;
  R(13)=0x8c05e612u;
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0b472a;
  {  goto L8c0b4a64; }
L8c0b472a:;
  R(0)=0x254u;
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0b4744; }
  R(0)=0x24au;
  R(3)=0x1u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=sh4_shad(R(3),R(2));
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c0b4744;
  {  goto L8c0b4a4c; }
L8c0b4744:;
  R(0)=0x23cu;
  R(5)=0x8cu;
  R(1)=LD32(R(14)+R(0));
  R(0)+=0xeu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xeu;
  R(1)=LD32(R(1));
  R(5)+=R(14);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(4)=0x264u;
  R(3)<<=2;
  R(3)+=R(1);
  R(1)=0x2a8u;
  ST32(R(14)+R(0),R(3));
  R(3)=LD32(R(14)+R(0));
  R(1)+=R(14);
  R(2)=LD32(R(14)+4);
  R(0)=(int32_t)(int16_t)LD16(R(3)+8);
  R(2)=LD32(R(2));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(2);
  ST32(R(1),R(0));
  R(0)=0x2a8u;
  R(6)=LD32(R(14)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c0b4782u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x2a8u;
  R(5)=0xf4u;
  R(4)=0x270u;
  R(6)=LD32(R(14)+R(0));
  R(5)+=R(14);
  { uint32_t tg=R(10); c->pr=0x8c0b4790u; R(4)+=R(14); sh4_call(c,tg); }
  R(5)=0x270u;
  R(6)=0x264u;
  R(4)=0x27cu;
  R(5)+=R(14);
  R(6)+=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0b479eu; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x258u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xffffffd4u;
  fp_ld(c,3,R(0)+R(14));
  fp_ld(c,2,R(3));
  R(0)=0x2b0u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(14));
  { c->pr=0x8c0b47b2u; R(4)=R(14); f_8c0b3f80(c); }
  R(0)=0x248u;
  ST16(R(14)+R(0),R(11));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff0u;
  R(2)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0b47c6;
  {  goto L8c0b4a4c; }
L8c0b47c6:;
  R(0)=0x258u;
  R(2)=LD32(R(14)+R(0));
  R(0)=0x534u;
  R(3)=LD32(R(2)+4);
  ST32(R(14)+R(0),R(3));
  R(0)=0x238u;
  R(2)=LD32(R(14)+R(0));
  R(0)=0x538u;
  R(3)=LD32(R(2));
  ST32(R(14)+R(0),R(3));
  { c->pr=0x8c0b47deu; R(4)=R(14); f_8c0b40e0(c); }
  R(0)=0x230u;
  ST16(R(14)+R(0),R(11));
  R(0)+=0x8u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=LD32(R(2)+8);
  R(0)=R(1);
  R(0)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(3)=LD32(R(14)+16);
  R(1)+=R(0);
  R(1)+=R(2);
  R(3)=LD32(R(3));
  R(0)=(int32_t)(int16_t)LD16(R(1));
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
  R(0)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(1);
  R(0)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(0);
  R(2)=LD32(R(2)+8);
  R(3)=LD32(R(3));
  R(1)+=R(2);
  R(4)=0x29cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
  R(1)=0x298u;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(1)+=R(14);
  R(0)+=R(3);
  ST32(R(1),R(0));
  R(0)=0x294u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(5)=LD32(R(14)+R(0));
  { uint32_t tg=R(13); c->pr=0x8c0b4844u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=LD32(R(2)+8);
  R(0)=R(1);
  R(0)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(3)=LD32(R(3));
  R(1)+=R(0);
  R(1)+=R(2);
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
  {  goto L8c0b48c0; }
L8c0b48c0:;
  R(0)+=0x10u;
  R(5)=LD32(R(5)+16);
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(5)+=R(3);
  { uint32_t tg=R(12); c->pr=0x8c0b48d4u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=0x230u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=0x1u;
  ST16(R(14)+R(0),R(3));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=LD32(R(3)+8);
  R(0)=R(1);
  R(0)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(2)=LD32(R(14)+16);
  R(1)+=R(0);
  R(1)+=R(3);
  R(2)=LD32(R(2));
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
  R(1)=0x294u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(1)+=R(14);
  R(0)+=R(2);
  ST32(R(1),R(0));
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(1);
  c->t=R(1)>>31;R(1)<<=1;
  R(2)=LD32(R(2)+8);
  R(0)<<=2;
  R(1)+=R(0);
  R(3)=LD32(R(3));
  R(1)+=R(2);
  R(4)=0x29cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+4);
  R(1)=0x298u;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(1)+=R(14);
  R(0)+=R(3);
  ST32(R(1),R(0));
  R(0)=0x294u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(5)=LD32(R(14)+R(0));
  { uint32_t tg=R(13); c->pr=0x8c0b493eu; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=LD32(R(2)+8);
  R(0)=R(1);
  R(0)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(3)=LD32(R(3));
  R(1)+=R(0);
  R(1)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(1));
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
  { uint32_t tg=R(12); c->pr=0x8c0b4980u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=0x230u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=0x1u;
  ST16(R(14)+R(0),R(3));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=LD32(R(3)+8);
  R(0)=R(1);
  R(0)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(2)=LD32(R(14)+16);
  R(1)+=R(0);
  R(1)+=R(3);
  R(2)=LD32(R(2));
  R(0)=(int32_t)(int16_t)LD16(R(1)+4);
  R(1)=0x294u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(1)+=R(14);
  R(0)+=R(2);
  ST32(R(1),R(0));
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(1);
  c->t=R(1)>>31;R(1)<<=1;
  R(2)=LD32(R(2)+8);
  R(0)<<=2;
  R(1)+=R(0);
  R(3)=LD32(R(3));
  R(1)+=R(2);
  R(4)=0x29cu;
  R(0)=(int32_t)(int16_t)LD16(R(1));
  R(1)=0x298u;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(1)+=R(14);
  R(0)+=R(3);
  ST32(R(1),R(0));
  R(0)=0x294u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(5)=LD32(R(14)+R(0));
  { uint32_t tg=R(13); c->pr=0x8c0b49eau; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x238u;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=LD32(R(2)+8);
  R(0)=R(1);
  R(0)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(3)=LD32(R(3));
  R(1)+=R(0);
  R(1)+=R(2);
  R(0)=(int32_t)(int16_t)LD16(R(1)+2);
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
  { uint32_t tg=R(12); c->pr=0x8c0b4a2cu; R(4)=R(14); sh4_call(c,tg); }
  R(0)=0x230u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=0x1u;
  ST16(R(14)+R(0),R(3));
  R(0)+=0x18u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff0u;
  R(2)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c0b4a4c;
  {  goto L8c0b47c6; }
L8c0b4a4c:;
  R(0)=0x24au;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0xfffffff2u;
  R(2)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c0b4a64;
  {  goto L8c0b472a; }
L8c0b4a64:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0b4aa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffa8u;
  R(0)=0x25cu;
  R(14)=R(4);
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+R(0));
  R(3)=LD32(R(3));
  R(0)=(int32_t)(int16_t)LD16(R(2)+8);
  R(1)=0x2acu;
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(4)=0x264u;
  R(0)<<=2;
  R(1)+=R(14);
  R(0)+=R(3);
  ST32(R(1),R(0));
  R(0)=0x25cu;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x54u;
  fp_ld(c,4,R(0)+R(14));
  R(0)+=0xfffffffcu;
  fp_ld(c,3,R(3));
  R(3)=0x8c077e40u;
  fp_arith(c,0,4,3);
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0b4ae2u; R(4)+=R(14); f_8c077e40(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b4aec;
  {  goto L8c0b4e9e; }
L8c0b4aec:;
  R(0)=0x27cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x280u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x284u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2b8u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0b4b5a;
  R(0)=0x2b0u;
  R(4)=R(14);
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xfffffffcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(4));
  R(0)+=0xffffffb0u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x28u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x28u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0xffffffdcu;
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x1cu;
  fp_st(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(4));
  R(0)+=0x28u;
  R(3)=0x0u;
  ST8(R(14)+R(0),R(3));
L8c0b4b5a:;
  R(0)=0x25cu;
  R(13)=0x3u;
  R(3)=0x8c077e40u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x54u;
  fp_ld(c,15,R(0)+R(14));
  R(0)+=0xfffffffcu;
  fp_ld(c,3,R(2));
  R(5)=LD32(R(14)+R(0));
  fp_arith(c,0,15,3);
  R(4)=0x270u;
  R(12)=0x8c014f10u;
  R(11)=0x8c014eaau;
  fp_mov(c,4,15);
  { uint32_t tg=R(3); c->pr=0x8c0b4b7au; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0b4b84;
  {  goto L8c0b4d40; }
L8c0b4b84:;
  R(0)=0x2acu;
  R(4)=R(15);
  R(5)=0x264u;
  R(3)=0x8c05e612u;
  R(6)=LD32(R(14)+R(0));
  R(5)+=R(14);
  { c->pr=0x8c0b4b94u; R(4)+=0x40u; f_8c05e612(c); }
  R(5)=LD32(R(14)+20);
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x40u;
  { uint32_t tg=R(12); c->pr=0x8c0b4ba0u; R(4)+=0x40u; sh4_call(c,tg); }
  R(0)=0x40u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x48u;
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
  R(0)=0x2acu;
  R(6)=LD32(R(14)+R(0));
  R(5)=LD32(R(14)+20);
  R(4)=R(15);
  { uint32_t tg=R(11); c->pr=0x8c0b4be8u; R(4)+=0x28u; sh4_call(c,tg); }
  R(0)=0x25cu;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(3));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x25cu;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(3));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x25cu;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(3));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c0b4c64u;
  fp_ld(c,3,R(0));
  fp_mov(c,4,15);
  fp_arith(c,0,4,3);
  {  goto L8c0b4c80; }
L8c0b4c80:;
  R(0)=0x34u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  fp_arith(c,2,1,2);
  R(6)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  R(6)+=0x40u;
  fp_st(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0b4cb2u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(5)=LD32(R(14)+20);
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x4cu;
  { uint32_t tg=R(12); c->pr=0x8c0b4cbeu; R(4)+=0x4cu; sh4_call(c,tg); }
  R(6)=0x264u;
  R(4)=R(15);
  R(5)=LD32(R(14)+20);
  R(6)+=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0b4ccau; R(4)+=0x10u; sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x10u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=0x20u;
  R(3)=R(15);
  R(3)+=0x50u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x538u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+28);
  c->fr[4]=0x3F800000u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+R(0));
  R(0)=0x258u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+R(0));
  R(5)=R(15);
  R(0)=0x534u;
  R(4)=R(15);
  fp_ld(c,5,R(3));
  R(6)=R(15);
  R(3)=0x8c0b2a00u;
  R(4)+=0x38u;
  R(7)=LD32(R(14)+R(0));
  R(6)+=0x50u;
  R(5)+=0x44u;
  { c->pr=0x8c0b4d08u; fp_unary(c,0,4); f_8c0b2a00(c); }
  { R(15)+=0x1cu; goto L8c0b4e9e; }
L8c0b4d40:;
  R(6)=0x264u;
  R(4)=R(15);
  R(5)=LD32(R(14)+20);
  R(6)+=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0b4d4cu; R(4)+=0x4u; sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x34u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(0)=0x2acu;
  R(2)+=0x44u;
  R(3)=0x8c077f40u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+R(0));
  R(5)=R(15);
  R(7)=R(15);
  R(4)=0x270u;
  R(5)+=0x54u;
  fp_mov(c,4,15);
  R(7)+=0x8u;
  { c->pr=0x8c0b4d6eu; R(4)+=R(14); f_8c077f40(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x8u; if(k) goto L8c0b4d7a; }
  {  goto L8c0b4e9e; }
L8c0b4d7a:;
  R(0)=0x40u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x2b0u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x40u;
  fp_arith(c,3,3,15);
  fp_ld(c,0,R(3));
  fp_arith(c,1,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x2b0u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x4u;
  fp_arith(c,3,3,15);
  fp_ld(c,0,R(0)+R(3));
  R(0)=0x44u;
  fp_arith(c,1,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x2b0u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,15);
  R(0)+=0xfffffffcu;
  fp_mov(c,2,4);
  R(3)=LD32(R(14)+R(0));
  R(0)=0x8u;
  R(6)=R(15);
  R(4)=R(15);
  fp_ld(c,0,R(0)+R(3));
  R(0)=0x48u;
  R(6)+=0x40u;
  fp_arith(c,1,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(5)=LD32(R(14)+20);
  { uint32_t tg=R(11); c->pr=0x8c0b4dd8u; R(4)+=0x28u; sh4_call(c,tg); }
  R(0)=0x38u;
  R(4)=LD32(R(14)+20);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x1cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  R(4)=LD32(R(14)+20);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x20u;
  c->fr[4]=0x00000000u;
  R(6)=R(15);
  fp_fmac(c,3,2);
  R(6)+=0x4cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  R(4)=LD32(R(14)+20);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(5)=LD32(R(14)+20);
  R(4)=R(15);
  { uint32_t tg=R(12); c->pr=0x8c0b4e5eu; R(4)+=0x4cu; sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x20u;
  R(2)=R(15);
  R(2)+=0x50u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x538u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+28);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+R(0));
  R(0)=0x258u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+R(0));
  R(5)=R(15);
  R(0)=0x534u;
  R(4)=R(15);
  R(3)=0x8c0b2a00u;
  R(6)=R(15);
  fp_ld(c,5,R(2));
  R(4)+=0x2cu;
  R(7)=LD32(R(14)+R(0));
  R(0)=0x1cu;
  R(6)+=0x38u;
  R(5)+=0x44u;
  { c->pr=0x8c0b4e9cu; fp_ld(c,4,R(0)+R(15)); f_8c0b2a00(c); }
  R(15)+=0x1cu;
L8c0b4e9e:;
  R(15)+=0x58u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
