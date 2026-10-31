#include "recomp_decls.h"
void f_8c04dd12(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c04dd1au;  f_8c05cdf8(c); }
  R(4)=R(0);
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c04dd28;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
L8c04dd28:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c04dd32;
  { R(5)=0x0u; goto L8c04dd34; }
L8c04dd32:;
  R(5)=0xffffffffu;
L8c04dd34:;
  R(0)=R(5);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04dd3c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04dd42u; R(4)=0x0u; f_8c04d8da(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c04dd4e; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
L8c04dd4e:;
  R(3)=0x8c2d0f38u;
  R(0)=LD32(R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04dd80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(4)=R(3);
  R(2)=0x8c0c603cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(2),R(3));
  { c->pr=0x8c04dd96u;  f_8c04d8da(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c04ddf4; }
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c04dda2u;  f_8c05cdf8(c); }
  R(4)=R(0);
  { c->pr=0x8c04dda8u; R(4)+=0x1u; f_8c04dbc8(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c04ddba; }
  R(0)=R(13);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04ddf4;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-4;
  if(!c->t) goto L8c04ddf4;
L8c04ddba:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04dde0;
  R(0)=0xb60u;
  R(12)=0x8c2d03d8u;
  R(3)=LD32(R(12)+R(0));
  R(3)+=0x1u;
  ST32(R(12)+R(0),R(3));
  R(3)=0x8c04ccc0u;
  { c->pr=0x8c04ddd0u; R(4)=LD32(R(12)+R(0)); f_8c04ccc0(c); }
  R(0)=0xb60u;
  { c->pr=0x8c04ddd6u; R(4)=LD32(R(12)+R(0)); f_8c04d960(c); }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04dde0;
  R(2)=0x8c0c603cu;
  R(3)=0x0u;
  ST32(R(2),R(3));
L8c04dde0:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c04ddf4;
  R(3)=0x8c0686b8u;
  R(4)=0x8c0c5f3fu;
  R(6)=0xf8u;
  { c->pr=0x8c04ddeeu; R(5)=0x0u; f_8c0686b8(c); }
  R(3)=0xffu;
  R(2)=0x8c0c5f3eu;
  ST8(R(2),R(3));
L8c04ddf4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04de00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(2)=0x8c2d0f38u;
  R(10)=R(4);
  R(10)+=0xffffffffu;
  R(3)=LD32(R(2));
  c->t=R(10)>=R(3);
  { uint32_t k=!c->t; R(12)=R(4); if(k) goto L8c04de60; }
  { R(0)=0x0u; goto L8c04dfbc; }
L8c04de60:;
  { c->pr=0x8c04de64u; R(4)=0x0u; f_8c04d8da(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c04de6e; }
  {  goto L8c04dfba; }
L8c04de6e:;
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c04de74u;  f_8c05cdf8(c); }
  R(2)=0x8c0ba01au;
  R(14)=R(0);
  R(3)=R(15);
  R(3)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(2));
  R(1)=0x8c05b4e0u;
  ST16(R(3),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  R(4)=0x8c0be044u;
  ST16(R(3)+2,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  ST16(R(3)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+6);
  ST16(R(3)+6,R(0));
  { c->pr=0x8c04de94u; R(5)=0xau; f_8c05b4e0(c); }
  R(3)=0x8c05cad6u;
  { c->pr=0x8c04de9au;  f_8c05cad6(c); }
  R(2)=0x8c05b2c8u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c04dea4u; R(6)=R(14); f_8c05b2c8(c); }
  R(3)=0x8c04ce12u;
  R(11)=R(15);
  R(11)+=0xcu;
  { c->pr=0x8c04deaeu; R(4)=R(12); f_8c04ce12(c); }
  R(5)=R(0);
  { c->pr=0x8c04deb4u; R(4)=R(11); f_8c04cfa4(c); }
  R(4)=R(14);
  R(3)=0x8c0bb6e8u;
  R(4)<<=2;
  R(2)=0x8c066280u;
  R(4)+=R(3);
  R(6)=R(15);
  R(5)=R(11);
  ST32(R(15),R(4));
  R(6)+=0x4u;
  { c->pr=0x8c04decau; R(4)=LD32(R(4)); f_8c066280(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0xfffff83au;
  R(0)=R(0)&0xFFFF;
  R(4)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+6);
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+7);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+9);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+10);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(3)=R(10);
  c->t=R(10)>>31;R(10)<<=1;
  R(10)+=R(3);
  R(13)=0x8c0c5f3eu;
  R(4)|=R(0);
  R(0)=0x8c2d05d8u;
  R(10)<<=2;
  R(6)=R(13);
  c->t=R(10)>>31;R(10)<<=1;
  R(7)=0xf7u;
  ST32(R(10)+R(0),R(4));
  R(5)=R(11);
  R(4)=LD32(R(15));
  R(6)+=0x1u;
  { c->pr=0x8c04df2au; R(4)=LD32(R(4)); f_8c04d40c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04df80;
  R(3)=0xffu;
  ST8(R(13),R(3));
  { R(13)=0xfffffffbu; goto L8c04df9e; }
L8c04df80:;
  R(0)=0xf7u;
  R(2)=0x63u;
  R(4)=0x8c123b08u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=0xc30u;
  ST8(R(4)+R(0),R(3));
  R(0)+=0x1u;
  R(3)=0x8c0c603au;
  ST8(R(4)+R(0),R(2));
  R(4)=0x0u;
  ST8(R(3),R(4));
  ST8(R(13),R(4));
  { c->pr=0x8c04df9cu; R(4)=R(12); f_8c04d960(c); }
  R(13)=R(0);
L8c04df9e:;
  c->t=(int32_t)R(13)>0;
  if(c->t) goto L8c04dfba;
  R(2)=0x8c05b4e0u;
  R(4)=0x8c0bec44u;
  { c->pr=0x8c04dfaau; R(5)=0xau; f_8c05b4e0(c); }
  R(3)=0x8c05cad6u;
  { c->pr=0x8c04dfb0u;  f_8c05cad6(c); }
  R(2)=0x8c05b2c8u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c04dfbau; R(6)=R(14); f_8c05b2c8(c); }
L8c04dfba:;
  R(0)=R(13);
L8c04dfbc:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04de60(SH4Ctx *c) {
  { c->pr=0x8c04de64u; R(4)=0x0u; f_8c04d8da(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c04de6e; }
  {  goto L8c04dfba; }
L8c04de6e:;
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c04de74u;  f_8c05cdf8(c); }
  R(2)=0x8c0ba01au;
  R(14)=R(0);
  R(3)=R(15);
  R(3)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(2));
  R(1)=0x8c05b4e0u;
  ST16(R(3),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  R(4)=0x8c0be044u;
  ST16(R(3)+2,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  ST16(R(3)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+6);
  ST16(R(3)+6,R(0));
  { c->pr=0x8c04de94u; R(5)=0xau; f_8c05b4e0(c); }
  R(3)=0x8c05cad6u;
  { c->pr=0x8c04de9au;  f_8c05cad6(c); }
  R(2)=0x8c05b2c8u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c04dea4u; R(6)=R(14); f_8c05b2c8(c); }
  R(3)=0x8c04ce12u;
  R(11)=R(15);
  R(11)+=0xcu;
  { c->pr=0x8c04deaeu; R(4)=R(12); f_8c04ce12(c); }
  R(5)=R(0);
  { c->pr=0x8c04deb4u; R(4)=R(11); f_8c04cfa4(c); }
  R(4)=R(14);
  R(3)=0x8c0bb6e8u;
  R(4)<<=2;
  R(2)=0x8c066280u;
  R(4)+=R(3);
  R(6)=R(15);
  R(5)=R(11);
  ST32(R(15),R(4));
  R(6)+=0x4u;
  { c->pr=0x8c04decau; R(4)=LD32(R(4)); f_8c066280(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0xfffff83au;
  R(0)=R(0)&0xFFFF;
  R(4)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+6);
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+7);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+9);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(4)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+10);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=R(0)&0xFF;
  R(4)<<=2;
  R(3)=R(10);
  c->t=R(10)>>31;R(10)<<=1;
  R(10)+=R(3);
  R(13)=0x8c0c5f3eu;
  R(4)|=R(0);
  R(0)=0x8c2d05d8u;
  R(10)<<=2;
  R(6)=R(13);
  c->t=R(10)>>31;R(10)<<=1;
  R(7)=0xf7u;
  ST32(R(10)+R(0),R(4));
  R(5)=R(11);
  R(4)=LD32(R(15));
  R(6)+=0x1u;
  { c->pr=0x8c04df2au; R(4)=LD32(R(4)); f_8c04d40c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04df80;
  R(3)=0xffu;
  ST8(R(13),R(3));
  { R(13)=0xfffffffbu; goto L8c04df9e; }
L8c04df80:;
  R(0)=0xf7u;
  R(2)=0x63u;
  R(4)=0x8c123b08u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=0xc30u;
  ST8(R(4)+R(0),R(3));
  R(0)+=0x1u;
  R(3)=0x8c0c603au;
  ST8(R(4)+R(0),R(2));
  R(4)=0x0u;
  ST8(R(3),R(4));
  ST8(R(13),R(4));
  { c->pr=0x8c04df9cu; R(4)=R(12); f_8c04d960(c); }
  R(13)=R(0);
L8c04df9e:;
  c->t=(int32_t)R(13)>0;
  if(c->t) goto L8c04dfba;
  R(2)=0x8c05b4e0u;
  R(4)=0x8c0bec44u;
  { c->pr=0x8c04dfaau; R(5)=0xau; f_8c05b4e0(c); }
  R(3)=0x8c05cad6u;
  { c->pr=0x8c04dfb0u;  f_8c05cad6(c); }
  R(2)=0x8c05b2c8u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c04dfbau; R(6)=R(14); f_8c05b2c8(c); }
L8c04dfba:;
  R(0)=R(13);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04df80(SH4Ctx *c) {
  R(0)=0xf7u;
  R(2)=0x63u;
  R(4)=0x8c123b08u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=0xc30u;
  ST8(R(4)+R(0),R(3));
  R(0)+=0x1u;
  R(3)=0x8c0c603au;
  ST8(R(4)+R(0),R(2));
  R(4)=0x0u;
  ST8(R(3),R(4));
  ST8(R(13),R(4));
  { c->pr=0x8c04df9cu; R(4)=R(12); f_8c04d960(c); }
  R(13)=R(0);
  c->t=(int32_t)R(13)>0;
  if(c->t) goto L8c04dfba;
  R(2)=0x8c05b4e0u;
  R(4)=0x8c0bec44u;
  { c->pr=0x8c04dfaau; R(5)=0xau; f_8c05b4e0(c); }
  R(3)=0x8c05cad6u;
  { c->pr=0x8c04dfb0u;  f_8c05cad6(c); }
  R(2)=0x8c05b2c8u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c04dfbau; R(6)=R(14); f_8c05b2c8(c); }
L8c04dfba:;
  R(0)=R(13);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04dfcc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(1)=0x8c2d0f38u;
  R(3)=R(4);
  R(3)+=0xffffffffu;
  R(2)=LD32(R(1));
  c->t=R(3)>=R(2);
  { uint32_t k=!c->t; R(13)=R(4); if(k) goto L8c04e020; }
  { R(0)=0x0u; goto L8c04e174; }
L8c04e020:;
  { c->pr=0x8c04e024u; R(4)=0x0u; f_8c04d8da(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c04e02e; }
  {  goto L8c04e172; }
L8c04e02e:;
  R(2)=0x8c05cdf8u;
  { c->pr=0x8c04e034u;  f_8c05cdf8(c); }
  R(3)=0x8c05b4e0u;
  R(14)=R(0);
  R(4)=0x8c0be644u;
  { c->pr=0x8c04e03eu; R(5)=0xau; f_8c05b4e0(c); }
  R(2)=0x8c05cad6u;
  { c->pr=0x8c04e044u;  f_8c05cad6(c); }
  R(3)=0x8c05b2c8u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c04e04eu; R(6)=R(14); f_8c05b2c8(c); }
  R(1)=0x8c124738u;
  R(2)=0x8c0c6035u;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  ST8(R(2),R(3));
  R(3)=0x8c04ce12u;
  { c->pr=0x8c04e05cu; R(4)=R(13); f_8c04ce12(c); }
  R(2)=0x8c04cfa4u;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c04e066u; R(4)+=0x14u; f_8c04cfa4(c); }
  R(3)=0x8c04ce12u;
  { c->pr=0x8c04e06cu; R(4)=R(13); f_8c04ce12(c); }
  R(2)=0x8c04cf80u;
  R(5)=R(0);
  { c->pr=0x8c04e074u; R(4)=R(15); f_8c04cf80(c); }
  { c->pr=0x8c04e078u; R(4)=R(14); f_8c04dad2(c); }
  R(0)=0x8c0c5f3cu;
  R(4)=R(14);
  R(2)=0xf7u;
  R(4)<<=2;
  R(3)=0x8c0c5f3fu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=(int32_t)(int16_t)LD16(R(0));
  R(0)=0x8c0bb6e8u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0c5f38u;
  R(7)=0x8c0b9ff4u;
  R(3)=LD32(R(1));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c5f36u;
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
  R(5)=R(15);
  R(6)=R(15);
  R(6)+=0x24u;
  R(5)+=0x38u;
  { c->pr=0x8c04e0b8u; R(4)=LD32(R(4)+R(0)); f_8c04d36c(c); }
  R(4)=R(0)&0xFF;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(15)+=0x24u; if(k) goto L8c04e140; }
  { R(12)=0xfffffffbu; goto L8c04e156; }
L8c04e140:;
  R(3)=0x8c04ccc0u;
  { c->pr=0x8c04e146u; R(4)=R(13); f_8c04ccc0(c); }
  { c->pr=0x8c04e14au; R(4)=R(13); f_8c04d960(c); }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04e150;
  R(12)=0xfffffffbu;
L8c04e150:;
  R(2)=0x8c04cbeeu;
  { c->pr=0x8c04e156u;  f_8c04cbee(c); }
L8c04e156:;
  c->t=(int32_t)R(12)>0;
  if(c->t) goto L8c04e172;
  R(2)=0x8c05b4e0u;
  R(4)=0x8c0bec44u;
  { c->pr=0x8c04e162u; R(5)=0xau; f_8c05b4e0(c); }
  R(3)=0x8c05cad6u;
  { c->pr=0x8c04e168u;  f_8c05cad6(c); }
  R(2)=0x8c05b2c8u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c04e172u; R(6)=R(14); f_8c05b2c8(c); }
L8c04e172:;
  R(0)=R(12);
L8c04e174:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04e140(SH4Ctx *c) {
  R(3)=0x8c04ccc0u;
  { c->pr=0x8c04e146u; R(4)=R(13); f_8c04ccc0(c); }
  { c->pr=0x8c04e14au; R(4)=R(13); f_8c04d960(c); }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04e150;
  R(12)=0xfffffffbu;
L8c04e150:;
  R(2)=0x8c04cbeeu;
  { c->pr=0x8c04e156u;  f_8c04cbee(c); }
  c->t=(int32_t)R(12)>0;
  if(c->t) goto L8c04e172;
  R(2)=0x8c05b4e0u;
  R(4)=0x8c0bec44u;
  { c->pr=0x8c04e162u; R(5)=0xau; f_8c05b4e0(c); }
  R(3)=0x8c05cad6u;
  { c->pr=0x8c04e168u;  f_8c05cad6(c); }
  R(2)=0x8c05b2c8u;
  R(4)=R(14);
  R(5)=R(0);
  { c->pr=0x8c04e172u; R(6)=R(14); f_8c05b2c8(c); }
L8c04e172:;
  R(0)=R(12);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04e180(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(2)=0x8c2d0f38u;
  R(14)=R(4);
  R(3)=LD32(R(2));
  c->t=R(14)>R(3);
  if(!c->t) goto L8c04e196;
  { R(0)=0x0u; goto L8c04e1d8; }
L8c04e196:;
  { c->pr=0x8c04e19au; R(4)=0x0u; f_8c04d8da(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c04e1d6; }
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c04e1a6u;  f_8c05cdf8(c); }
  R(3)=0x8c04ce12u;
  ST32(R(15),R(0));
  { c->pr=0x8c04e1aeu; R(4)=R(14); f_8c04ce12(c); }
  R(2)=0x8c04cfa4u;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c04e1b8u; R(4)+=0x4u; f_8c04cfa4(c); }
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(0)=0x8c0bb6e8u;
  R(5)+=0x4u;
  R(3)=0x8c0654ceu;
  R(4)<<=2;
  { c->pr=0x8c04e1c8u; R(4)=LD32(R(4)+R(0)); f_8c0654ce(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04e1d0;
  { R(13)=0xfffffffbu; goto L8c04e1d6; }
L8c04e1d0:;
  R(2)=0x8c04cda0u;
  { c->pr=0x8c04e1d6u; R(4)=R(14); f_8c04cda0(c); }
L8c04e1d6:;
  R(0)=R(13);
L8c04e1d8:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04e240(SH4Ctx *c) {
  R(3)=0x8c0685b4u;
  R(5)=0x8c0c5f3eu;
  R(6)=0xf8u;
  {  { f_8c0685b4(c); return; } }
}
void f_8c04e280(SH4Ctx *c) {
  R(3)=0x8c08e51cu;
  R(2)=0x8c08ee20u;
  ST32(R(4),R(3));
  { ST32(R(4)+4,R(2)); return; }
}
void f_8c04e28a(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3));
  R(4)=LD32(R(2)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c04e298;
  { R(0)=0x0u; return; }
L8c04e298:;
  R(2)=0x8c0841c4u;
  {  { f_8c0841c4(c); return; } }
}
void f_8c04e2a2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  ST16(R(15),R(5));
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04e2fc;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c04e2beu;  f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c04e2fc; }
  R(3)=0x8c055214u;
  R(5)=(int32_t)(int16_t)LD16(R(15));
  { c->pr=0x8c04e2ccu; R(4)=R(14); f_8c055214(c); }
  R(3)=0x8c055360u;
  R(13)=R(0);
  R(5)=(int32_t)(int16_t)LD16(R(15));
  { c->pr=0x8c04e2d6u; R(4)=R(14); f_8c055360(c); }
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c04e2e6; }
  R(3)=0x8c05e6eau;
  R(4)=R(12);
  R(5)=R(13);
  { c->pr=0x8c04e2e6u; R(4)+=0x54u; f_8c05e6ea(c); }
L8c04e2e6:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c04e2fc;
  R(4)=R(12);
  R(5)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c08ff40u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c08ff40(c); return; } }
L8c04e2fc:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04e340(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c04395cu;
  { c->pr=0x8c04e34cu; R(14)=R(4); f_8c04395c(c); }
  R(2)=0x8c04398au;
  { c->pr=0x8c04e352u; R(4)=R(14); f_8c04398a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04e406;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04e406;
  R(5)=LD32(R(4));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c04e406;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)=LD32(R(5)); if(k) goto L8c04e388; }
  R(0)=0x110u;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(2)+=0x1u;
  ST16(R(4)+R(0),R(2));
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04e388;
  R(0)=0x110u;
  R(5)=(int32_t)(int16_t)LD16(R(4)+R(0));
  { R(5)=R(5)&0xFFFF; goto L8c04e38a; }
L8c04e388:;
  R(5)=0x0u;
L8c04e38a:;
  R(1)=0x8c0c608du;
  R(3)=0x8c0c608cu;
  ST8(R(3),R(5));
  R(2)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04e3e0;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c04e3e0;
  R(0)=0x28u;
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04e3e0;
  R(2)=LD32(R(13)+36);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04e3e0;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=LD32(R(13)+36);
  R(4)=R(14);
  R(0)=0x8c0c7e80u;
  R(2)<<=2;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(3)=LD32(R(2)+R(0));
  { uint32_t tg=R(3); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c04e3e0:;
  R(2)=0x8c032ee0u;
  { c->pr=0x8c04e3e6u; R(4)=R(14); f_8c032ee0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04e406;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04e406;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04e406;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c032e90u;
  R(4)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c032e90(c); return; } }
L8c04e406:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04e440(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=LD32(R(12)+4);
  R(11)=LD32(R(11)+8);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c04e4e2;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c04e45cu; R(4)=R(11); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c04e4e2; }
  { c->pr=0x8c04e466u; R(4)=R(12); f_8c04e28a(c); }
  R(3)=LD32(R(13)+4);
  R(14)=R(0);
  c->t=R(3)==R(14);
  if(c->t) goto L8c04e476;
  R(3)=0x8c08eae0u;
  R(5)=R(14);
  { c->pr=0x8c04e476u; R(4)=R(13); f_8c08eae0(c); }
L8c04e476:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c04e4e2;
  R(3)=0x8c08ebaeu;
  { c->pr=0x8c04e480u; R(4)=R(14); f_8c08ebae(c); }
  R(1)=0x8c1247dcu;
  R(0)<<=2;
  R(2)=LD32(R(1)+R(0));
  R(0)=0x8c123bbcu;
  R(8)=R(2);
  R(3)=LD32(R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c04e49a; }
  R(0)=0x8c04e518u;
  fp_ld(c,2,R(0));
  fp_arith(c,0,3,2);
L8c04e49a:;
  R(0)=0x8c04e51cu;
  fp_mov(c,4,3);
  fp_ld(c,2,R(0));
  R(3)=0x8c04a8c0u;
  fp_arith(c,3,4,2);
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(4)=LD32(R(12)+4);
  { c->pr=0x8c04e4acu; R(4)=LD32(R(4)+8); f_8c04a8c0(c); }
  R(4)=R(13);
  R(7)=R(14);
  R(6)=R(0);
  R(5)=R(12);
  { uint32_t tg=R(8); c->pr=0x8c04e4b8u; fp_ld(c,4,R(15));R(15)+=fp_sz(c); sh4_call(c,tg); }
  R(1)=LD32(R(13)+12);
  R(3)=0x4000u;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c04e4c8;
  R(0)=0x170u;
  R(4)=LD32(R(13)+R(0));
  R(3)=LD32(R(4)+4);
  ST32(R(4),R(3));
L8c04e4c8:;
  R(2)=0x8c08ebaeu;
  { c->pr=0x8c04e4ceu; R(4)=R(14); f_8c08ebae(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(11);
  R(3)=0x8c04a8ccu;
  R(5)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04a8cc(c); return; } }
L8c04e4e2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04e540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  R(2)=0x8c0c608eu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(13)+4);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(4)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=LD32(R(4)+32); if(k) goto L8c04e5f2; }
  R(5)=0x1800u;
  R(3)=R(14);
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(c->t) goto L8c04e5f2;
  R(3)=0x10000u;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c04e590;
  R(0)=0x80000u;
  c->t=(R(0)&R(14))==0;
  if(c->t) goto L8c04e582;
  R(0)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c04e57a;
  { R(1)=0x1u; goto L8c04e57c; }
L8c04e57a:;
  R(1)=0x0u;
L8c04e57c:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c04e590;
L8c04e582:;
  { c->pr=0x8c04e586u; R(4)=R(13); f_8c04e340(c); }
  R(4)=LD32(R(13)+4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04e5f2;
  R(14)=LD32(R(4)+32);
L8c04e590:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04e5f2;
  R(3)=0x8000u;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c04e5f2;
  R(1)=0x400000u;
  c->t=(R(1)&R(14))==0;
  if(c->t) goto L8c04e5e8;
  R(0)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c04e5e0;
  { R(2)=0x1u; goto L8c04e5e2; }
L8c04e5e0:;
  R(2)=0x0u;
L8c04e5e2:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04e5f2;
L8c04e5e8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04e440(c); return; } }
L8c04e5f2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04e640(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c045f20u;
  { c->pr=0x8c04e648u;  f_8c045f20(c); }
  R(2)=0x8c0bdbf8u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c04e656;
  R(1)=0x8c03853eu;
  { c->pr=0x8c04e656u;  f_8c03853e(c); }
L8c04e656:;
  R(2)=0x8c017b80u;
  { c->pr=0x8c04e65cu;  f_8c017b80(c); }
  R(1)=0x8c052bf8u;
  { c->pr=0x8c04e662u;  f_8c052bf8(c); }
  R(2)=0x8c082ea0u;
  { c->pr=0x8c04e668u;  f_8c082ea0(c); }
  R(1)=0x8c05a280u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c05a280(c); return; } }
}
void f_8c04e66e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(1)=0x8c123b08u;
  R(3)=0x8c045f26u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c04e67cu; ST8(R(15),R(2)); f_8c045f26(c); }
  R(3)=0x8c0474b4u;
  { c->pr=0x8c04e682u;  f_8c0474b4(c); }
  R(2)=0x8c064b1cu;
  { c->pr=0x8c04e688u; R(4)=0x0u; f_8c064b1c(c); }
  R(3)=0x8c04528eu;
  { c->pr=0x8c04e68eu;  f_8c04528e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04e6aa;
  R(3)=0x8c045280u;
  { c->pr=0x8c04e69au;  f_8c045280(c); }
  R(2)=0x8c045196u;
  { c->pr=0x8c04e6a0u; R(4)=R(0); f_8c045196(c); }
  R(3)=0x8c045286u;
  { c->pr=0x8c04e6a6u;  f_8c045286(c); }
  {  goto L8c04e6b6; }
L8c04e6aa:;
  R(3)=0x8c045190u;
  { c->pr=0x8c04e6b0u;  f_8c045190(c); }
  R(2)=0x8c045196u;
  { c->pr=0x8c04e6b6u; R(4)=R(0); f_8c045196(c); }
L8c04e6b6:;
  R(3)=0x8c05249au;
  { c->pr=0x8c04e6bcu;  f_8c05249a(c); }
  R(2)=0x8c05ed92u;
  { c->pr=0x8c04e6c2u; R(4)=0x1u; f_8c05ed92(c); }
  R(3)=0x8c044fc0u;
  { c->pr=0x8c04e6c8u; R(4)=0x5u; f_8c044fc0(c); }
  R(2)=0x8c0148e0u;
  { c->pr=0x8c04e6ceu;  f_8c0148e0(c); }
  R(3)=0x8c044fc0u;
  { c->pr=0x8c04e6d4u; R(4)=(int32_t)(int8_t)LD8(R(15)); f_8c044fc0(c); }
  R(15)+=0x4u;
  R(2)=0x8c058132u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c058132(c); return; } }
}
void f_8c04e6dc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c014c20u;
  { c->pr=0x8c04e6e4u;  f_8c014c20(c); }
  R(2)=0x8c045f20u;
  { c->pr=0x8c04e6eau;  f_8c045f20(c); }
  R(3)=0x8c0474b8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0474b8(c); return; } }
}
void f_8c04e780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c123b08u;
  R(0)=0x64u;
  R(13)=0x0u;
  R(3)=0x8c04755au;
  ST32(R(14)+R(0),R(13));
  R(0)=0xc36u;
  ST8(R(14)+R(0),R(13));
  R(0)+=0x2u;
  { c->pr=0x8c04e79eu; ST8(R(14)+R(0),R(13)); f_8c04755a(c); }
  R(2)=0x8c058646u;
  { c->pr=0x8c04e7a4u; R(4)=0x1u; f_8c058646(c); }
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==5;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c04e860; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c04e860;
  R(0)=0x1e8u;
  R(12)=LD32(R(14)+R(0));
  R(0)=0x1du;
  R(5)=LD32(R(12)+4);
  R(5)=LD32(R(5)+4);
  R(4)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c04e800;
  R(3)=0x8c05ed92u;
  { c->pr=0x8c04e7ccu; R(4)=0x20u; f_8c05ed92(c); }
  R(2)=0x8c05291cu;
  { c->pr=0x8c04e7d2u;  f_8c05291c(c); }
  R(3)=0x8c05c1c0u;
  { c->pr=0x8c04e7d8u;  f_8c05c1c0(c); }
  {  goto L8c04e804; }
L8c04e800:;
  { c->pr=0x8c04e804u;  f_8c04e900(c); }
L8c04e804:;
  R(0)=0xc37u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04e850;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c04e82c;
  R(2)=LD32(R(12)+4);
  R(5)=0x32u;
  R(3)=LD32(R(2));
  R(4)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c05ecc0u;
  { c->pr=0x8c04e820u; R(4)+=0x18u; f_8c05ecc0(c); }
  R(5)=0x1f8u;
  R(4)=R(0);
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  { c->pr=0x8c04e82cu; R(5)+=R(14); f_8c0685b4(c); }
L8c04e82c:;
  R(0)=0x1f0u;
  R(4)=LD32(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04e850;
  R(2)=LD32(R(4)+4);
  R(5)=0x32u;
  R(3)=LD32(R(2));
  R(4)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c05ecc0u;
  { c->pr=0x8c04e844u; R(4)+=0x18u; f_8c05ecc0(c); }
  R(5)=0x260u;
  R(4)=R(0);
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  { c->pr=0x8c04e850u; R(5)+=R(14); f_8c0685b4(c); }
L8c04e850:;
  R(3)=0x8c2d03c0u;
  R(0)=0xc37u;
  R(2)=0x8c0c5374u;
  R(1)=0x8c03a960u;
  ST8(R(14)+R(0),R(13));
  ST32(R(3),R(13));
  { c->pr=0x8c04e860u; ST8(R(2),R(13)); f_8c03a960(c); }
L8c04e860:;
  R(3)=0x8c04b6c0u;
  R(0)=0x1e8u;
  { c->pr=0x8c04e868u; R(4)=LD32(R(14)+R(0)); f_8c04b6c0(c); }
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c04e894;
  R(3)=0x8c0c60d0u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04e894;
  R(2)=0x8c04f656u;
  { c->pr=0x8c04e87eu; R(4)=0x0u; f_8c04f656(c); }
  R(2)=0x8c017f2cu;
  R(7)=0x0u;
  ST32(R(15)+4,R(0));
  R(3)=R(0);
  R(3)=0x8c2d1064u;
  R(6)=R(7);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  { c->pr=0x8c04e892u; R(4)=0xffffffffu; f_8c017f2c(c); }
  R(15)+=0x4u;
L8c04e894:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04e8a0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c04b750u;
  { c->pr=0x8c04e8a8u;  f_8c04b750(c); }
  R(2)=0x8c044ca0u;
  { c->pr=0x8c04e8aeu;  f_8c044ca0(c); }
  R(3)=0x8c01a5e0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c01a5e0(c); return; } }
}
void f_8c04e900(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c011956u;
  { c->pr=0x8c04e90cu; R(4)=0x0u; f_8c011956(c); }
  R(3)=0x8c018446u;
  R(2)=0x8c2d105cu;
  { c->pr=0x8c04e914u; R(4)=LD32(R(2)); f_8c018446(c); }
  R(2)=0x8c014ea0u;
  R(4)=0x1f8u;
  R(13)=0x8c123b08u;
  { c->pr=0x8c04e91eu; R(4)+=R(13); f_8c014ea0(c); }
  R(3)=0x8c014ea0u;
  R(4)=0x260u;
  { c->pr=0x8c04e926u; R(4)+=R(13); f_8c014ea0(c); }
  R(3)=0x8c044ca0u;
  R(14)=0x0u;
  R(0)=0xc37u;
  { c->pr=0x8c04e930u; ST8(R(13)+R(0),R(14)); f_8c044ca0(c); }
  R(2)=0x8c04b750u;
  { c->pr=0x8c04e936u;  f_8c04b750(c); }
  R(3)=0x8c05ed92u;
  { c->pr=0x8c04e93cu; R(4)=0x10u; f_8c05ed92(c); }
  R(2)=0x8c052740u;
  { c->pr=0x8c04e942u;  f_8c052740(c); }
  R(3)=0x8c058646u;
  { c->pr=0x8c04e948u; R(4)=0x1u; f_8c058646(c); }
  R(2)=0x8c03a960u;
  { c->pr=0x8c04e94eu;  f_8c03a960(c); }
  R(2)=0x8c0c60d0u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04e960;
  R(1)=0x8c04f64eu;
  R(5)=0x0u;
  R(3)=0x8c1247d8u;
  { c->pr=0x8c04e960u; R(4)=LD32(R(3)); f_8c04f64e(c); }
L8c04e960:;
  R(2)=0x8c05d772u;
  { c->pr=0x8c04e966u;  f_8c05d772(c); }
  R(3)=0x8c064680u;
  R(1)=0x8c0c5374u;
  { c->pr=0x8c04e96eu; ST8(R(1),R(14)); f_8c064680(c); }
  R(2)=0x8c2d03c0u;
  R(3)=0x8c0c5194u;
  R(1)=0x8c05c1c0u;
  ST32(R(2),R(14));
  { c->pr=0x8c04e97au; ST32(R(3),R(14)); f_8c05c1c0(c); }
  R(2)=0x8c058132u;
  { c->pr=0x8c04e980u;  f_8c058132(c); }
  R(1)=0x8c01a5e0u;
  { c->pr=0x8c04e986u;  f_8c01a5e0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c04755au;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04755a(c); return; } }
}
void f_8c04ea20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c0c3f90u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04ea4e;
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04ea4e;
  R(0)=LD32(R(4)+8);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c04ea4e;
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c04ea4e;
  R(0)=LD32(R(4)+16);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c04ea4e;
  R(0)=LD32(R(4)+20);
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c04ea7e;
L8c04ea4e:;
  R(14)=0x1cbu;
  R(12)=0x8c0ba06cu;
  R(3)=0x8c0125ccu;
  R(6)=R(14);
  R(13)=0xffu;
  R(5)=R(12);
  { c->pr=0x8c04ea5eu; R(4)=0x0u; f_8c0125cc(c); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  R(1)=0x8c0c3fa8u;
  R(3)=0xffffffffu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=0x15u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0x8c012658u;
  { c->pr=0x8c04ea7cu; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c04ea7e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04eac0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c59ccu;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(9)=0x1u; if(k) goto L8c04eaec; }
  R(1)=0x8c05ca02u;
  { c->pr=0x8c04eae2u;  f_8c05ca02(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04eaec;
  R(2)=0x8c2d0060u;
  ST32(R(2),R(9));
L8c04eaec:;
  R(1)=0x8c123b63u;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04eaf8;
  {  goto L8c04ee60; }
L8c04eaf8:;
  R(3)=0x8c045f72u;
  R(12)=0x2u;
  R(13)=0x8c0c61a8u;
  R(8)=0x8c04d91au;
  R(11)=0x8c05bcc2u;
  { c->pr=0x8c04eb06u; R(14)=0x0u; f_8c045f72(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04eb4a;
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c04eb12u;  f_8c05cdf8(c); }
  R(2)=0x8c05cad6u;
  { c->pr=0x8c04eb18u; {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} f_8c05cad6(c); }
  R(3)=0x8c05b380u;
  R(4)=R(0);
  { c->pr=0x8c04eb20u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c05b380(c); }
  { uint32_t tg=R(11); c->pr=0x8c04eb24u;  sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c04eb34;
  R(3)=0x8c045f2cu;
  { c->pr=0x8c04eb30u;  f_8c045f2c(c); }
  { ST8(R(13),R(9)); goto L8c04ecc6; }
L8c04eb34:;
  { uint32_t tg=R(8); c->pr=0x8c04eb38u; R(4)=0x0u; sh4_call(c,tg); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c04eb40;
  {  goto L8c04ecc6; }
L8c04eb40:;
  R(2)=0x8c045f2cu;
  { c->pr=0x8c04eb46u;  f_8c045f2c(c); }
  { ST8(R(13),R(12)); goto L8c04ecc6; }
L8c04eb4a:;
  R(2)=0x8c05b380u;
  R(5)=0xffffffffu;
  { c->pr=0x8c04eb52u; R(4)=R(5); f_8c05b380(c); }
  R(4)=(int32_t)(int8_t)LD8(R(13));
  R(10)=0x8c0c6b2cu;
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c04ebc6; }
  { uint32_t tg=R(8); c->pr=0x8c04eb62u; R(4)=0x0u; sh4_call(c,tg); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c04eb6a;
  {  goto L8c04ecc6; }
L8c04eb6a:;
  { uint32_t tg=R(8); c->pr=0x8c04eb6eu; R(4)=0x1u; sh4_call(c,tg); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c04eb76;
  {  goto L8c04ecc6; }
L8c04eb76:;
  R(2)=0x8c05cdf8u;
  { c->pr=0x8c04eb7cu;  f_8c05cdf8(c); }
  R(2)=0x8c05cad6u;
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  { c->pr=0x8c04eb84u; {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} f_8c05cad6(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  c->t=R(3)==R(0);
  if(!c->t) goto L8c04ebaa;
  R(8)=0x8c05b4f0u;
  { uint32_t tg=R(11); c->pr=0x8c04eb90u;  sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04ebaa;
L8c04eb96:;
  { uint32_t tg=R(8); c->pr=0x8c04eb9au;  sh4_call(c,tg); }
  R(2)=0x8c05c4bau;
  { c->pr=0x8c04eba0u;  f_8c05c4ba(c); }
  { uint32_t tg=R(11); c->pr=0x8c04eba4u;  sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04eb96;
L8c04ebaa:;
  R(2)=0x8c04dc6au;
  { c->pr=0x8c04ebb0u;  f_8c04dc6a(c); }
  R(3)=LD32(R(10));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04ebbc;
  R(3)=0x8c045f58u;
  { c->pr=0x8c04ebbcu;  f_8c045f58(c); }
L8c04ebbc:;
  R(2)=0x8c05b2c0u;
  { c->pr=0x8c04ebc2u;  f_8c05b2c0(c); }
  { ST8(R(13),R(14)); goto L8c04ecc6; }
L8c04ebc6:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c04ec60;
  R(3)=0x8c05c95eu;
  { c->pr=0x8c04ebd2u;  f_8c05c95e(c); }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04ebda;
  {  goto L8c04ecc6; }
L8c04ebda:;
  { uint32_t tg=R(8); c->pr=0x8c04ebdeu; R(4)=0x1u; sh4_call(c,tg); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c04ebf8;
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04ebee;
  R(3)=0x8c045f58u;
  { c->pr=0x8c04ebeeu;  f_8c045f58(c); }
L8c04ebee:;
  R(2)=0x8c05b2c0u;
  { c->pr=0x8c04ebf4u;  f_8c05b2c0(c); }
  { ST8(R(13),R(14)); goto L8c04ecc6; }
L8c04ebf8:;
  { ST8(R(13),R(12)); goto L8c04ecc6; }
L8c04ec60:;
  R(3)=LD32(R(10));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04ecc6;
  R(1)=0x8c2d20d8u;
  R(3)=0x1e8480u;
  R(2)=LD32(R(1));
  c->t=R(2)>=R(3);
  if(c->t) goto L8c04ecb2;
  R(2)=0x8c0d115eu;
  { c->pr=0x8c04ec76u;  f_8c0d115e(c); }
  R(2)=0x8c0d1168u;
  R(5)=R(0);
  R(3)=0x8c2d20d4u;
  { c->pr=0x8c04ec80u; R(4)=LD32(R(3)); f_8c0d1168(c); }
  R(3)=0x8c0d116eu;
  { c->pr=0x8c04ec86u; R(4)=R(0); f_8c0d116e(c); }
  R(3)=0x8c05bf56u;
  R(2)=0x8c2d20d8u;
  { c->pr=0x8c04ec8eu; ST32(R(2),R(0)); f_8c05bf56(c); }
  R(2)=0x8c05bf24u;
  { c->pr=0x8c04ec94u; R(4)=R(0); f_8c05bf24(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04ecc6;
  R(2)=0x8c05bf1cu;
  { c->pr=0x8c04ec9eu;  f_8c05bf1c(c); }
  R(3)=0xffffffffu;
  ST32(R(10),R(3));
  R(2)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04ecc6;
  R(1)=0x8c045f58u;
  { c->pr=0x8c04ecaeu;  f_8c045f58(c); }
  {  goto L8c04ecc6; }
L8c04ecb2:;
  ST32(R(10),R(9));
  R(2)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04ecc0;
  R(2)=0x8c045f58u;
  { c->pr=0x8c04ecc0u;  f_8c045f58(c); }
L8c04ecc0:;
  R(3)=0x8c05c002u;
  { c->pr=0x8c04ecc6u;  f_8c05c002(c); }
L8c04ecc6:;
  R(1)=0x8c05bdc0u;
  { c->pr=0x8c04ecccu;  f_8c05bdc0(c); }
  R(3)=0x8c0c682cu;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04ed02;
  R(5)=0x8c0c6828u;
  R(1)=LD32(R(5));
  c->t=R(1)==R(4);
  if(!c->t) goto L8c04ed02;
  R(2)=0x8c0c6838u;
  ST32(R(5),R(14));
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04ed02;
  R(1)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(1));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04ecfa;
  R(3)=0x8c049c90u;
  { c->pr=0x8c04ecf6u;  f_8c049c90(c); }
  R(2)=0x8c2d0064u;
  ST8(R(2),R(14));
L8c04ecfa:;
  { c->pr=0x8c04ecfeu;  f_8c04ee88(c); }
  R(2)=0x8c0c6838u;
  ST32(R(2),R(14));
L8c04ed02:;
  R(3)=0x8c0d115eu;
  { c->pr=0x8c04ed08u;  f_8c0d115e(c); }
  R(3)=0x8c0d1168u;
  R(5)=R(0);
  R(2)=0x8c2d1050u;
  { c->pr=0x8c04ed12u; R(4)=LD32(R(2)); f_8c0d1168(c); }
  R(2)=0x8c0d116eu;
  { c->pr=0x8c04ed18u; R(4)=R(0); f_8c0d116e(c); }
  R(3)=0x11e1a300u;
  R(4)=R(0);
  R(5)=0x8c0c611cu;
  c->t=R(4)>R(3);
  if(!c->t) goto L8c04ed26;
  { ST8(R(5),R(9)); goto L8c04ee4c; }
L8c04ed26:;
  R(2)=0x3d090u;
  ST8(R(5),R(14));
  R(5)=0x8c0c6190u;
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c04ed34;
  {  goto L8c04ee4a; }
L8c04ed34:;
  R(4)=LD32(R(5));
  R(11)=0x8c2e2578u;
  R(13)=0x8c0c6198u;
  c->t=(R(4)&R(4))==0;
  R(6)=0x8c0c6194u;
  if(!c->t) goto L8c04ed44;
  {  goto L8c04ee20; }
L8c04ed44:;
  R(0)=LD32(R(6));
  R(0)<<=2;
  R(1)=LD32(R(4)+R(0));
  R(0)=LD32(R(11));
  R(0)=LD32(R(0)+4);
  c->t=R(1)==R(0);
  if(c->t) goto L8c04ed56;
  {  goto L8c04ee4c; }
L8c04ed56:;
  R(1)=LD32(R(6));
  R(1)+=0x1u;
  ST32(R(6),R(1));
  R(0)=LD32(R(5));
  R(1)=LD32(R(0));
  R(0)=LD32(R(6));
  c->t=R(0)>R(1);
  if(c->t) goto L8c04ed6a;
  {  goto L8c04ee4c; }
L8c04ed6a:;
  ST32(R(5),R(14));
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c04ed7e;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04ed88;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04ed8e;
  {  goto L8c04ed8e; }
L8c04ed7e:;
  R(1)=0x8c04d5b6u;
  { c->pr=0x8c04ed84u;  f_8c04d5b6(c); }
  {  goto L8c04ed8e; }
L8c04ed88:;
  R(1)=0x8c03a89cu;
  { c->pr=0x8c04ed8eu;  f_8c03a89c(c); }
L8c04ed8e:;
  R(3)=0x8c05b4e0u;
  R(4)=0x8c0be644u;
  { c->pr=0x8c04ed96u; R(5)=0xau; f_8c05b4e0(c); }
  {  goto L8c04ee4c; }
L8c04ee20:;
  R(10)=0x8c0c619cu;
  R(4)=R(14);
  R(14)=0x3u;
L8c04ee26:;
  R(7)=R(4);
  R(7)<<=2;
  R(7)+=R(10);
  R(2)=LD32(R(11));
  R(3)=LD32(R(7));
  R(1)=LD32(R(2)+4);
  R(3)=LD32(R(3)+4);
  c->t=R(3)==R(1);
  if(!c->t) goto L8c04ee40;
  R(0)=LD32(R(7));
  ST32(R(5),R(0));
  ST32(R(6),R(12));
  ST32(R(13),R(4));
L8c04ee40:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c04ee26;
  {  goto L8c04ee4c; }
L8c04ee4a:;
  ST32(R(5),R(14));
L8c04ee4c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c05b160u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05b160(c); return; } }
L8c04ee60:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04ee72(SH4Ctx *c) {
  {  return; }
}
void f_8c04ee76(SH4Ctx *c) {
  R(4)=0x8c0c6118u;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04ee84;
  R(3)=0x0u;
  { ST32(R(4),R(3)); { f_8c04ee88(c); return; } }
L8c04ee84:;
  {  return; }
}
void f_8c04ee88(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x1u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(1)=R(2);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  R(3)=0x8c0c7630u;
  c->t=(R(1)&R(1))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c0cf070u;
  R(14)=0x8c0c6118u;
  ST32(R(3),R(13));
  { uint32_t k=c->t; ST32(R(14),R(2)); if(k) goto L8c04eeb6; }
L8c04eea4:;
  { uint32_t tg=R(12); c->pr=0x8c04eea8u;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==3;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c04eeb0; }
  ST32(R(14),R(13));
L8c04eeb0:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04eea4;
L8c04eeb6:;
  R(2)=0x8c0bdbf8u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04eed2;
  R(3)=0x8c044fc0u;
  { c->pr=0x8c04eec4u; R(4)=0x2u; f_8c044fc0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c072f52u;
  R(4)=0x3u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c072f52(c); return; } }
L8c04eed2:;
  R(1)=0x8c0c6114u;
  R(13)=0x8c2d20d0u;
  R(4)=LD32(R(1));
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(14)=LD32(R(13)); if(k) goto L8c04ef60; }
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c04eef0;
  R(3)=0x8c0db69cu;
  { c->pr=0x8c04eeecu; R(4)=R(14); f_8c0db69c(c); }
  R(2)=0xffffffffu;
  ST32(R(13),R(2));
L8c04eef0:;
  R(3)=0x8c05c036u;
  { c->pr=0x8c04eef6u;  f_8c05c036(c); }
  R(2)=0x8c045b80u;
  R(4)=0x8c123dd6u;
  { c->pr=0x8c04eefeu; R(5)=0x0u; f_8c045b80(c); }
  R(2)=0x8c0c6114u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); goto L8c04ef9c; }
L8c04ef60:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c04ef9c;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c04ef74;
  R(3)=0x8c0db69cu;
  { c->pr=0x8c04ef70u; R(4)=R(14); f_8c0db69c(c); }
  R(2)=0xffffffffu;
  ST32(R(13),R(2));
L8c04ef74:;
  R(4)=0x8c0bb6e8u;
  R(13)=0x8c065166u;
  R(12)=R(4);
  R(12)+=0x20u;
  R(14)=R(4);
  c->t=R(14)>=R(12);
  if(c->t) goto L8c04ef8e;
L8c04ef82:;
  { uint32_t tg=R(13); c->pr=0x8c04ef86u; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c04ef8au; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  c->t=R(14)>=R(12);
  if(!c->t) goto L8c04ef82;
L8c04ef8e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c044fc0u;
  R(4)=0x2u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044fc0(c); return; } }
L8c04ef9c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04efe0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  ST32(R(15),R(4));
  R(5)+=0x4u;
  { c->pr=0x8c04eff0u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(0)=0x8c04f124u;
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04f004(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  ST32(R(15),R(4));
  R(5)+=0x4u;
  { c->pr=0x8c04f014u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(0)=0x8c04f124u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04f028(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  ST32(R(15),R(4));
  R(5)+=0x4u;
  { c->pr=0x8c04f038u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(0)=0x8c04f124u;
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04f04c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(4);
  ST32(R(15),R(4));
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+8);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04f06c;
  R(4)=LD32(R(15));
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c04f066u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15)+4,R(0)); if(k) goto L8c04f074; }
L8c04f06c:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c04f074:;
  R(5)=LD32(R(15)+4);
  R(4)=R(15);
  R(3)=0x8c05e6eau;
  R(5)+=0x3cu;
  { c->pr=0x8c04f080u; R(4)+=0x8u; f_8c05e6ea(c); }
  R(0)=0x8c04f124u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04f074(SH4Ctx *c) {
  R(5)=LD32(R(15)+4);
  R(4)=R(15);
  R(3)=0x8c05e6eau;
  R(5)+=0x3cu;
  { c->pr=0x8c04f080u; R(4)+=0x8u; f_8c05e6ea(c); }
  R(0)=0x8c04f124u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04f096(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(4);
  ST32(R(15),R(4));
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+8);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04f0b6;
  R(4)=LD32(R(15));
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c04f0b0u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15)+4,R(0)); if(k) goto L8c04f0be; }
L8c04f0b6:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c04f0be:;
  R(5)=LD32(R(15)+4);
  R(4)=R(15);
  R(3)=0x8c05e6eau;
  R(5)+=0x3cu;
  { c->pr=0x8c04f0cau; R(4)+=0x8u; f_8c05e6ea(c); }
  R(0)=0x8c04f124u;
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04f0e0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(4);
  ST32(R(15),R(4));
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+8);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c04f100;
  R(4)=LD32(R(15));
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c04f0fau; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15)+4,R(0)); if(k) goto L8c04f140; }
L8c04f100:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c04f140:;
  R(5)=LD32(R(15)+4);
  R(4)=R(15);
  R(3)=0x8c05e6eau;
  R(5)+=0x3cu;
  { c->pr=0x8c04f14cu; R(4)+=0x8u; f_8c05e6ea(c); }
  R(0)=0x8c04f1c8u;
  fp_ld(c,3,R(0));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c04f162(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04f166(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=0x0u;
  R(11)=0x1999u;
  R(12)=0xc80000u;
  R(13)=R(5);
  R(8)=R(4);
  c->t=(R(13)&R(13))==0;
  R(0)=0x8c04f1c8u;
  R(9)=R(7);
  R(10)=R(6);
  ST32(R(15)+12,R(14));
  { uint32_t k=c->t; fp_ld(c,15,R(0)); if(k) { f_8c04f22a(c); return; } }
  { f_8c04f192(c); return; }
}
void f_8c04f192(SH4Ctx *c) {
L8c04f192:;
  R(2)=LD32(R(8)+4);
  R(3)=LD32(R(2)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04f1a8;
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(8)+4);
  { c->pr=0x8c04f1a2u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c04f1e0; }
L8c04f1a8:;
  { ST32(R(13),R(14)); { f_8c04f22a(c); return; } }
L8c04f1e0:;
  R(5)=LD32(R(15));
  R(4)=R(15);
  R(3)=0x8c05e6eau;
  R(5)+=0x3cu;
  { c->pr=0x8c04f1ecu; R(4)+=0x10u; f_8c05e6ea(c); }
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_arith(c,2,3,15);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>(int32_t)R(12);
  if(!c->t) goto L8c04f214;
  { R(4)=R(12); goto L8c04f21a; }
L8c04f214:;
  c->t=(int32_t)R(4)>=(int32_t)R(11);
  if(c->t) goto L8c04f21a;
  R(4)=R(11);
L8c04f21a:;
  R(3)=0xfffffff9u;
  R(2)=R(4);
  c->t=(R(13)&R(13))==0;
  R(2)=sh4_shad(R(2),R(3));
  { uint32_t k=c->t; ST32(R(13),R(2)); if(k) { f_8c04f22a(c); return; } }
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f192;
  { f_8c04f22a(c); return; }
}
void f_8c04f1e0(SH4Ctx *c) {
  R(5)=LD32(R(15));
  R(4)=R(15);
  R(3)=0x8c05e6eau;
  R(5)+=0x3cu;
  { c->pr=0x8c04f1ecu; R(4)+=0x10u; f_8c05e6ea(c); }
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_arith(c,2,3,15);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>(int32_t)R(12);
  if(!c->t) goto L8c04f214;
  { R(4)=R(12); goto L8c04f21a; }
L8c04f214:;
  c->t=(int32_t)R(4)>=(int32_t)R(11);
  if(c->t) goto L8c04f21a;
  R(4)=R(11);
L8c04f21a:;
  R(3)=0xfffffff9u;
  R(2)=R(4);
  c->t=(R(13)&R(13))==0;
  R(2)=sh4_shad(R(2),R(3));
  { uint32_t k=c->t; ST32(R(13),R(2)); if(k) { f_8c04f22a(c); return; } }
  c->t=(R(4)&R(4))==0;
  if(c->t) { f_8c04f192(c); return; }
  { f_8c04f22a(c); return; }
}
void f_8c04f22a(SH4Ctx *c) {
  R(5)=0x10000u;
  c->t=(R(9)&R(9))==0;
  R(6)=0x7f0000u;
  { uint32_t k=c->t; ST32(R(15)+8,R(14)); if(k) goto L8c04f240; }
L8c04f234:;
  c->t=(R(9)&R(9))==0;
  R(4)=R(5);
  { uint32_t k=c->t; ST32(R(9),R(5)); if(k) goto L8c04f240; }
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f234;
L8c04f240:;
  c->t=(R(10)&R(10))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(14)); if(k) goto L8c04f252; }
L8c04f246:;
  c->t=(R(10)&R(10))==0;
  R(4)=R(5);
  { uint32_t k=c->t; ST32(R(10),R(5)); if(k) goto L8c04f252; }
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f246;
L8c04f252:;
  R(15)+=0x1cu;
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
void f_8c04f268(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c04f2a0; }
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04f27c;
  {  goto L8c04f340; }
L8c04f27c:;
  {  goto L8c04f340; }
L8c04f2a0:;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04f340;
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c04f2b0u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f340;
  R(0)=0x170u;
  R(7)=0x10u;
  R(3)=LD32(R(4)+8);
  R(14)=0x8c05a406u;
  R(5)=LD32(R(4)+R(0));
  c->t=(R(3)&R(7))==0;
  { uint32_t k=c->t; R(6)=LD32(R(5)+4); if(k) goto L8c04f2da; }
  R(1)=R(6);
  c->t=(R(1)&R(7))==0;
  if(c->t) goto L8c04f2da;
  R(4)=0xd0u;
  R(4)+=R(5);
  R(4)=LD32(R(4)+32);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f340;
  {  goto L8c04f304; }
L8c04f2da:;
  R(0)=LD32(R(4)+8);
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c04f2f4;
  R(2)=0x4u;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c04f2f4;
  R(4)=R(5);
  R(4)+=0x58u;
  R(4)=LD32(R(4)+32);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f340;
  {  goto L8c04f304; }
L8c04f2f4:;
  R(3)=0x1u;
  c->t=(R(6)&R(3))==0;
  if(c->t) goto L8c04f340;
  R(4)=R(5);
  R(4)+=0x30u;
  R(4)=LD32(R(4)+32);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f340;
L8c04f304:;
  { uint32_t tg=R(14); c->pr=0x8c04f308u;  sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c04f340:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04f2a0(SH4Ctx *c) {
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04f340;
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c04f2b0u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f340;
  R(0)=0x170u;
  R(7)=0x10u;
  R(3)=LD32(R(4)+8);
  R(14)=0x8c05a406u;
  R(5)=LD32(R(4)+R(0));
  c->t=(R(3)&R(7))==0;
  { uint32_t k=c->t; R(6)=LD32(R(5)+4); if(k) goto L8c04f2da; }
  R(1)=R(6);
  c->t=(R(1)&R(7))==0;
  if(c->t) goto L8c04f2da;
  R(4)=0xd0u;
  R(4)+=R(5);
  R(4)=LD32(R(4)+32);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f340;
  {  goto L8c04f304; }
L8c04f2da:;
  R(0)=LD32(R(4)+8);
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c04f2f4;
  R(2)=0x4u;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c04f2f4;
  R(4)=R(5);
  R(4)+=0x58u;
  R(4)=LD32(R(4)+32);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f340;
  {  goto L8c04f304; }
L8c04f2f4:;
  R(3)=0x1u;
  c->t=(R(6)&R(3))==0;
  if(c->t) goto L8c04f340;
  R(4)=R(5);
  R(4)+=0x30u;
  R(4)=LD32(R(4)+32);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04f340;
L8c04f304:;
  { uint32_t tg=R(14); c->pr=0x8c04f308u;  sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c04f340:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04f340(SH4Ctx *c) {
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04f348(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(4));
  R(3)=0x8c055c1au;
  ST32(R(15),R(5));
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c04f35eu; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(3)=0x8c04fb24u;
  R(13)=R(0);
  { c->pr=0x8c04f366u; R(4)=LD32(R(15)); f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(3)=LD32(R(2)+12);
  ST32(R(15),R(3));
  R(3)=0x8c123cf0u;
  R(1)=LD32(R(15)+4);
  R(2)=LD32(R(3));
  c->t=R(1)==R(2);
  if(c->t) goto L8c04f3b2;
  R(4)=LD32(R(15));
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c04f380u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(14)=R(0);
  c->t=R(13)==R(14);
  if(c->t) goto L8c04f3b2;
  R(4)=LD32(R(14)+4);
  R(6)=LD32(R(14)+4);
  R(4)=LD32(R(4)+60);
  R(5)=R(4);
  { R(6)=LD32(R(6)+56); goto L8c04f3aa; }
L8c04f392:;
  R(7)=R(4);
  R(6)=LD32(R(7));
  c->t=R(6)==R(13);
  if(!c->t) goto L8c04f3a4;
  R(5)=LD32(R(4)+4);
  c->t=(R(5)&R(5))==0;
  R(0)=c->t;
  { R(0)^=0x1u; goto L8c04f3b4; }
L8c04f3a4:;
  R(6)=R(4);
  R(6)+=0x8u;
  R(5)+=0xffffffffu;
L8c04f3aa:;
  R(3)=0x0u;
  c->t=R(5)>R(3);
  { uint32_t k=c->t; R(4)=R(6); if(k) goto L8c04f392; }
L8c04f3b2:;
  R(0)=0x1u;
L8c04f3b4:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04f3be(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  R(12)=R(4);
  R(14)=R(5);
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c04f3e2; }
  R(2)=0x8c068788u;
  R(6)=R(13);
  R(5)=0x8c0ba0c0u;
  { c->pr=0x8c04f3deu; R(4)=R(14); f_8c068788(c); }
  {  goto L8c04f42a; }
L8c04f3e2:;
  R(3)=LD32(R(12)+4);
  R(6)=R(13);
  R(5)=0x8c0ba0d0u;
  ST32(R(15),R(3));
  R(3)=0x8c068788u;
  { c->pr=0x8c04f3f0u; R(4)=R(14); f_8c068788(c); }
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c04f42a;
  R(3)=0x8c044212u;
  { c->pr=0x8c04f3fcu; R(4)=LD32(R(15)); f_8c044212(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c04f418;
  R(3)=0x8c019e40u;
  { c->pr=0x8c04f408u; R(4)=R(14); f_8c019e40(c); }
  R(5)=0x8c0ba0d8u;
  R(6)=R(13);
  R(2)=0x8c09d1dcu;
  R(6)-=R(0);
  { c->pr=0x8c04f414u; R(4)=R(14); f_8c09d1dc(c); }
  {  goto L8c04f42a; }
L8c04f418:;
  R(2)=0x8c019e40u;
  { c->pr=0x8c04f41eu; R(4)=R(14); f_8c019e40(c); }
  R(5)=0x8c0ba0e8u;
  R(6)=R(13);
  R(3)=0x8c09d1dcu;
  R(6)-=R(0);
  { c->pr=0x8c04f42au; R(4)=R(14); f_8c09d1dc(c); }
L8c04f42a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04f436(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04f43a(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04f480(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04f484(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04f488(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04f48c(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04f490(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04f494(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(7);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c04f4d0;
  R(2)=0x8c0502ceu;
  { c->pr=0x8c04f4aau;  f_8c0502ce(c); }
  R(12)=0x10000u;
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c04f4b8;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c04f4bc;
L8c04f4b8:;
  { ST32(R(14),R(12)); goto L8c04f4d0; }
L8c04f4bc:;
  R(3)=0x8c05687cu;
  R(5)=R(15);
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04f4c6u; R(4)=LD32(R(13)+4); f_8c05687c(c); }
  R(2)=0x8c0163ceu;
  R(4)=LD32(R(0)+36);
  { c->pr=0x8c04f4ceu; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c0163ce(c); }
  ST32(R(14),R(12));
L8c04f4d0:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04f4dc(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c04f4e0(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c04f4e4(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  ST32(R(15),R(5));
  R(3)=0x8c068788u;
  R(5)=0x8c0ba0f0u;
  ST32(R(15)+4,R(6));
  R(4)=LD32(R(15));
  { R(15)+=0x8u; { f_8c068788(c); return; } }
}
void f_8c04f4f4(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  ST32(R(15),R(5));
  R(3)=0x8c068788u;
  R(5)=0x8c0ba0fcu;
  ST32(R(15)+4,R(6));
  R(4)=LD32(R(15));
  { R(15)+=0x8u; { f_8c068788(c); return; } }
}
void f_8c04f540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(3)=0x8c018a40u;
  { c->pr=0x8c04f554u; R(4)=0x3u; f_8c018a40(c); }
  R(14)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x34u;
  { c->pr=0x8c04f55eu; R(4)=R(15); f_8c0686b8(c); }
  R(3)=0x8c04f004u;
  R(2)=0x8c04efe0u;
  R(13)=0x8c2d1068u;
  ST32(R(15),R(2));
  ST32(R(15)+4,R(3));
  R(3)=0x8c04f04cu;
  R(2)=0x8c04f028u;
  ST32(R(15)+8,R(2));
  ST32(R(15)+12,R(3));
  R(3)=0x8c04f0e0u;
  R(2)=0x8c04f096u;
  ST32(R(15)+16,R(2));
  ST32(R(15)+20,R(3));
  R(3)=0x8c04f166u;
  R(2)=0x8c04f162u;
  ST32(R(15)+24,R(2));
  ST32(R(15)+28,R(3));
  R(3)=0x8c04f348u;
  R(2)=0x8c04f268u;
  ST32(R(15)+32,R(2));
  ST32(R(15)+36,R(3));
  R(3)=0x8c018844u;
  { c->pr=0x8c04f58eu;  f_8c018844(c); }
  R(11)=0x8c2d105cu;
  R(5)=R(0);
  R(10)=0x8c018a9eu;
  ST32(R(13),R(0));
  { c->pr=0x8c04f59au; R(4)=R(15); f_8c018a9e(c); }
  R(5)=0x8c04f3beu;
  R(12)=0x8c018c40u;
  ST32(R(11),R(0));
  { c->pr=0x8c04f5a4u; R(4)=R(0); f_8c018c40(c); }
  R(5)=0x0u;
  R(6)=0x34u;
  { uint32_t tg=R(14); c->pr=0x8c04f5acu; R(4)=R(15); sh4_call(c,tg); }
  R(2)=0x8c04f436u;
  R(3)=0x8c04f43au;
  ST32(R(15),R(2));
  R(2)=0x8c04f480u;
  ST32(R(15)+4,R(3));
  ST32(R(15)+8,R(2));
  R(2)=0x8c04f488u;
  R(3)=0x8c04f484u;
  ST32(R(15)+12,R(3));
  ST32(R(15)+16,R(2));
  R(2)=0x8c04f490u;
  R(3)=0x8c04f48cu;
  ST32(R(15)+20,R(3));
  ST32(R(15)+24,R(2));
  R(2)=0x8c04f4dcu;
  R(3)=0x8c04f494u;
  ST32(R(15)+28,R(3));
  ST32(R(15)+32,R(2));
  R(2)=0x8c018844u;
  R(3)=0x8c04f4e0u;
  { c->pr=0x8c04f5d8u; ST32(R(15)+36,R(3)); f_8c018844(c); }
  R(1)=0x8c2d106cu;
  R(5)=R(0);
  ST32(R(1),R(0));
  { uint32_t tg=R(10); c->pr=0x8c04f5e2u; R(4)=R(15); sh4_call(c,tg); }
  R(3)=0x8c2d1064u;
  R(5)=0x8c04f4e4u;
  R(2)=R(3);
  ST32(R(3),R(0));
  { uint32_t tg=R(12); c->pr=0x8c04f5eeu; R(4)=LD32(R(2)); sh4_call(c,tg); }
  R(5)=0x0u;
  R(6)=0x34u;
  { uint32_t tg=R(14); c->pr=0x8c04f5f6u; R(4)=R(15); sh4_call(c,tg); }
  R(2)=0x8c04f43au;
  R(3)=0x8c04f436u;
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  R(2)=0x8c04f484u;
  R(3)=0x8c04f480u;
  ST32(R(15)+8,R(3));
  ST32(R(15)+12,R(2));
  R(2)=0x8c04f48cu;
  R(3)=0x8c04f488u;
  ST32(R(15)+16,R(3));
  ST32(R(15)+20,R(2));
  R(2)=0x8c04f494u;
  R(3)=0x8c04f490u;
  ST32(R(15)+24,R(3));
  ST32(R(15)+28,R(2));
  R(2)=0x8c04f4e0u;
  R(3)=0x8c04f4dcu;
  ST32(R(15)+32,R(3));
  ST32(R(15)+36,R(2));
  R(5)=LD32(R(13));
  { uint32_t tg=R(10); c->pr=0x8c04f624u; R(4)=R(15); sh4_call(c,tg); }
  R(3)=0x8c2d1060u;
  R(5)=0x8c04f4f4u;
  ST32(R(3),R(0));
  { uint32_t tg=R(12); c->pr=0x8c04f62eu; R(4)=R(0); sh4_call(c,tg); }
  R(2)=0x8c018c96u;
  R(5)=0x8c05146cu;
  { c->pr=0x8c04f636u; R(4)=LD32(R(11)); f_8c018c96(c); }
  R(4)=0x8c2d1070u;
  R(6)=0x28u;
  { uint32_t tg=R(14); c->pr=0x8c04f63eu; R(5)=0x0u; sh4_call(c,tg); }
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04f64e(SH4Ctx *c) {
  R(0)=0x8c2d1070u;
  R(5)<<=2;
  { ST32(R(5)+R(0),R(4)); return; }
}
void f_8c04f656(SH4Ctx *c) {
  R(1)=0x8c2d1070u;
  R(0)=R(4);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c04f700(SH4Ctx *c) {
  { R(0)=0x8u; return; }
}
void f_8c04f704(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(10)=0x8c0125ccu;
  R(12)=R(4);
  R(13)=0x8c0ba12cu;
  c->t=(R(12)&R(12))==0;
  R(14)=0xffu;
  R(9)=0x0u;
  R(8)=0x8c012658u;
  { uint32_t k=!c->t; R(11)=0xffffffffu; if(k) goto L8c04f74c; }
  R(5)=R(13);
  R(6)=0x3du;
  { uint32_t tg=R(10); c->pr=0x8c04f730u; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x3du;
  R(3)=0x8c0c3fa8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t tg=R(8); c->pr=0x8c04f74au; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04f74c:;
  R(3)=LD32(R(12)+36);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04f776;
  R(5)=R(13);
  R(6)=0x40u;
  { uint32_t tg=R(10); c->pr=0x8c04f75au; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x40u;
  R(2)=0x8c0c3fa8u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0xdu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { uint32_t tg=R(8); c->pr=0x8c04f774u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04f776:;
  { c->pr=0x8c04f77au;  f_8c04f812(c); }
  c->fr[5]=0x3F800000u;
  ST32(R(12)+36,R(0));
  R(0)=0xcu;
  fp_unary(c,0,5);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x10u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  c->fr[6]=0x3F800000u;
  fp_st(c,4,R(15));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,6,R(0)+R(15));
  R(3)=LD32(R(12)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04f7e0;
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  { fp_st(c,5,R(0)+R(15)); goto L8c04f7e8; }
L8c04f7e0:;
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,6,R(0)+R(15));
L8c04f7e8:;
  R(6)=R(15);
  R(5)=R(15);
  R(0)=0x20u;
  R(3)=0x8c015c9cu;
  R(5)+=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(12)+36);
  R(7)=R(15);
  R(6)+=0xcu;
  { c->pr=0x8c04f7feu; R(4)=LD32(R(4)); f_8c015c9c(c); }
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04f812(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c04f830;
  { c->pr=0x8c04f822u;  f_8c04f700(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0ba12cu;
  { c->pr=0x8c04f82cu; R(6)=0x5au; f_8c064e90(c); }
  {  goto L8c04f83e; }
L8c04f830:;
  { c->pr=0x8c04f834u;  f_8c04f700(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0ba12cu;
  { c->pr=0x8c04f83eu; R(6)=0x5au; f_8c0199c4(c); }
L8c04f83e:;
  R(2)=0x8c0643e0u;
  { c->pr=0x8c04f844u; R(14)=R(0); f_8c0643e0(c); }
  ST32(R(14),R(0));
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04f880(SH4Ctx *c) {
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
  R(14)=0x8c0ba12cu;
  R(10)=0x8c012658u;
  R(9)=0x8c0c3fa8u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c04f8c8; }
  R(5)=R(14);
  R(6)=0x6du;
  { uint32_t tg=R(12); c->pr=0x8c04f8aeu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x6du;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c04f8c6u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04f8c8:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+36);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04f8f2;
  R(5)=R(14);
  R(6)=0x70u;
  { uint32_t tg=R(12); c->pr=0x8c04f8d8u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x70u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c04f8f0u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04f8f2:;
  R(4)=LD32(R(15));
  R(6)=0x72u;
  R(5)=R(14);
  R(4)+=0x24u;
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
void f_8c04f940(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(9)=0x8c0125ccu;
  R(12)=R(4);
  R(13)=0xffu;
  c->t=(R(12)&R(12))==0;
  R(14)=0x8c0ba12cu;
  R(8)=0xffffffffu;
  ST32(R(15),R(5));
  { uint32_t k=!c->t; R(10)=0x0u; if(k) goto L8c04f98a; }
  R(11)=0x83u;
  R(5)=R(14);
  R(6)=R(11);
  { uint32_t tg=R(9); c->pr=0x8c04f96eu; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(2)=0x8c0c3fa8u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c04f988u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c04f98a:;
  R(3)=LD32(R(12)+36);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04f9b6;
  R(11)=0x86u;
  R(5)=R(14);
  R(6)=R(11);
  { uint32_t tg=R(9); c->pr=0x8c04f99au; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c0c3fa8u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c04f9b4u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c04f9b6:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c04fa20;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c04fa20;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04f9da;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04fa20;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c04fa20;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c04fa20;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c04fa20;
  {  goto L8c04fa20; }
L8c04f9da:;
  R(5)=LD32(R(12)+36);
  R(0)=(int32_t)(int8_t)LD8(R(5)+4);
  R(4)=R(0)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04fa20;
  R(4)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0500cc(c); return; } }
L8c04fa20:;
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
void f_8c04fa34(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c0ba12cu;
  R(10)=0x0u;
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(8)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c04fa80; }
  R(6)=0xadu;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c04fa66u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xadu;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c04fa7eu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04fa80:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+36);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04faaa;
  R(6)=0xb0u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c04fa90u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xb0u;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c04faa8u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c04faaa:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c04faba;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c04faba;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c04faba;
  c->t=(int32_t)R(0)==4;
L8c04faba:;
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
void f_8c04face(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(6)=0x8u;
  ST32(R(15)+4,R(5));
  R(4)=LD32(R(15));
  R(3)=0x8c0685b4u;
  R(4)=LD32(R(4)+36);
  R(5)=LD32(R(5)+36);
  { R(15)+=0x8u; { f_8c0685b4(c); return; } }
}
void f_8c04fb20(SH4Ctx *c) {
  { R(0)=(int32_t)(int8_t)LD8(R(4)+4); return; }
}
void f_8c04fb24(SH4Ctx *c) {
  R(3)=0x8c2d10a0u;
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c04fb3c;
L8c04fb2c:;
  R(1)=LD32(R(5)+12);
  c->t=R(1)==R(4);
  if(!c->t) goto L8c04fb36;
  { R(0)=LD32(R(5)+16); return; }
L8c04fb36:;
  R(5)=LD32(R(5));
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c04fb2c;
L8c04fb3c:;
  R(0)=0x0u;
  {  return; }
}
void f_8c04fb42(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  { c->pr=0x8c04fb4au;  f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(5)=R(15);
  R(5)+=0x4u;
  R(3)=LD32(R(2)+12);
  R(4)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c0163ceu;
  { c->pr=0x8c04fb5cu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(0)=0x8c04fc08u;
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04fb70(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  { c->pr=0x8c04fb78u;  f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(5)=R(15);
  R(5)+=0x4u;
  R(3)=LD32(R(2)+12);
  R(4)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c0163ceu;
  { c->pr=0x8c04fb8au; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(0)=0x8c04fc08u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04fb9e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  { c->pr=0x8c04fba6u;  f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(5)=R(15);
  R(5)+=0x4u;
  R(3)=LD32(R(2)+12);
  R(4)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c0163ceu;
  { c->pr=0x8c04fbb8u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(0)=0x8c04fc08u;
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04fbcc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04fbd6u; c->fr[15]=0x00000000u; f_8c04fb24(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04fc50;
  R(14)=LD32(R(4)+4);
  R(14)=LD32(R(14)+12);
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04fbf6;
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c04fbf0u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c04fc20; }
L8c04fbf6:;
  { R(0)=0x0u; goto L8c04fc70; }
L8c04fc20:;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04fc4c;
  R(2)=0x8c123bbcu;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c04fc3a; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c04fc3a:;
  R(0)=0x8c04fcccu;
  fp_ld(c,4,R(0));
  R(0)=0x170u;
  fp_arith(c,3,4,3);
  R(3)=LD32(R(4)+R(0));
  R(0)+=0xffffff88u;
  fp_ld(c,15,R(0)+R(3));
  { fp_arith(c,2,15,4); goto L8c04fc50; }
L8c04fc4c:;
  R(0)=0x3cu;
  fp_ld(c,15,R(0)+R(4));
L8c04fc50:;
  R(0)=0x8c04fcd0u;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c04fc5a;
  fp_mov(c,15,4);
L8c04fc5a:;
  R(0)=0x8c04fcd4u;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c04fc64;
  fp_mov(c,15,4);
L8c04fc64:;
  R(0)=0x8c04fcd8u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
L8c04fc70:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04fc20(SH4Ctx *c) {
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04fc4c;
  R(2)=0x8c123bbcu;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c04fc3a; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c04fc3a:;
  R(0)=0x8c04fcccu;
  fp_ld(c,4,R(0));
  R(0)=0x170u;
  fp_arith(c,3,4,3);
  R(3)=LD32(R(4)+R(0));
  R(0)+=0xffffff88u;
  fp_ld(c,15,R(0)+R(3));
  { fp_arith(c,2,15,4); goto L8c04fc50; }
L8c04fc4c:;
  R(0)=0x3cu;
  fp_ld(c,15,R(0)+R(4));
L8c04fc50:;
  R(0)=0x8c04fcd0u;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c04fc5a;
  fp_mov(c,15,4);
L8c04fc5a:;
  R(0)=0x8c04fcd4u;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c04fc64;
  fp_mov(c,15,4);
L8c04fc64:;
  R(0)=0x8c04fcd8u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04fc78(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04fc82u; c->fr[15]=0x00000000u; f_8c04fb24(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04fd10;
  R(14)=LD32(R(4)+4);
  R(14)=LD32(R(14)+12);
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04fca2;
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c04fc9cu; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c04fce0; }
L8c04fca2:;
  { R(0)=0x0u; goto L8c04fd30; }
L8c04fce0:;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04fd0c;
  R(2)=0x8c123bbcu;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c04fcfa; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c04fcfa:;
  R(0)=0x8c04fd8cu;
  fp_ld(c,4,R(0));
  R(0)=0x170u;
  fp_arith(c,3,4,3);
  R(3)=LD32(R(4)+R(0));
  R(0)+=0xffffff8cu;
  fp_ld(c,15,R(0)+R(3));
  { fp_arith(c,2,15,4); goto L8c04fd10; }
L8c04fd0c:;
  R(0)=0x40u;
  fp_ld(c,15,R(0)+R(4));
L8c04fd10:;
  R(0)=0x8c04fd90u;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c04fd1a;
  fp_mov(c,15,4);
L8c04fd1a:;
  R(0)=0x8c04fd94u;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c04fd24;
  fp_mov(c,15,4);
L8c04fd24:;
  R(0)=0x8c04fd98u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
L8c04fd30:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04fd38(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c04fd42u; c->fr[15]=0x00000000u; f_8c04fb24(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c04fdd0;
  R(14)=LD32(R(4)+4);
  R(14)=LD32(R(14)+12);
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c04fd62;
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c04fd5cu; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c04fda0; }
L8c04fd62:;
  { R(0)=0x0u; goto L8c04fdf0; }
L8c04fda0:;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c04fdcc;
  R(2)=0x8c123bbcu;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c04fdba; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c04fdba:;
  R(0)=0x8c04fe0cu;
  fp_ld(c,4,R(0));
  R(0)=0x170u;
  fp_arith(c,3,4,3);
  R(3)=LD32(R(4)+R(0));
  R(0)+=0xffffff90u;
  fp_ld(c,15,R(0)+R(3));
  { fp_arith(c,2,15,4); goto L8c04fdd0; }
L8c04fdcc:;
  R(0)=0x44u;
  fp_ld(c,15,R(0)+R(4));
L8c04fdd0:;
  R(0)=0x8c04fe10u;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c04fdda;
  fp_mov(c,15,4);
L8c04fdda:;
  R(0)=0x8c04fe14u;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c04fde4;
  fp_mov(c,15,4);
L8c04fde4:;
  R(0)=0x8c04fe18u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
L8c04fdf0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c04fe20(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  { c->pr=0x8c04fe28u;  f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(7)=R(15);
  R(6)=R(15);
  R(6)+=0x34u;
  R(5)=LD32(R(2)+12);
  R(7)+=0x28u;
  R(3)=LD32(R(5)+4);
  R(4)=LD32(R(5)+36);
  R(5)=R(15);
  R(2)=LD32(R(3)+36);
  R(3)=0x8c015e64u;
  R(1)=LD32(R(2));
  ST32(R(15),R(1));
  { c->pr=0x8c04fe46u; R(5)+=0x40u; f_8c015e64(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015e64u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c04fe58u; R(4)=LD32(R(15)); f_8c015e64(c); }
  R(0)=0x20u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c050044u;
  fp_fmac(c,3,2);
  fp_mov(c,2,3);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04fe88(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  { c->pr=0x8c04fe90u;  f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(7)=R(15);
  R(6)=R(15);
  R(6)+=0x34u;
  R(5)=LD32(R(2)+12);
  R(7)+=0x28u;
  R(3)=LD32(R(5)+4);
  R(4)=LD32(R(5)+36);
  R(5)=R(15);
  R(2)=LD32(R(3)+36);
  R(3)=0x8c015e64u;
  R(1)=LD32(R(2));
  ST32(R(15),R(1));
  { c->pr=0x8c04feaeu; R(5)+=0x40u; f_8c015e64(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015e64u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c04fec0u; R(4)=LD32(R(15)); f_8c015e64(c); }
  R(0)=0x20u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c050044u;
  fp_fmac(c,3,2);
  fp_mov(c,2,3);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04fef0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  { c->pr=0x8c04fef8u;  f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(7)=R(15);
  R(6)=R(15);
  R(6)+=0x34u;
  R(5)=LD32(R(2)+12);
  R(7)+=0x28u;
  R(3)=LD32(R(5)+4);
  R(4)=LD32(R(5)+36);
  R(5)=R(15);
  R(2)=LD32(R(3)+36);
  R(3)=0x8c015e64u;
  R(1)=LD32(R(2));
  ST32(R(15),R(1));
  { c->pr=0x8c04ff16u; R(5)+=0x40u; f_8c015e64(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015e64u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c04ff28u; R(4)=LD32(R(15)); f_8c015e64(c); }
  R(0)=0x20u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c050044u;
  fp_fmac(c,3,2);
  fp_mov(c,2,3);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04ff58(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  { c->pr=0x8c04ff60u;  f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(7)=R(15);
  R(6)=R(15);
  R(6)+=0x34u;
  R(5)=LD32(R(2)+12);
  R(7)+=0x28u;
  R(3)=LD32(R(5)+4);
  R(4)=LD32(R(5)+36);
  R(5)=R(15);
  R(2)=LD32(R(3)+36);
  R(3)=0x8c015e64u;
  R(1)=LD32(R(2));
  ST32(R(15),R(1));
  { c->pr=0x8c04ff7eu; R(5)+=0x40u; f_8c015e64(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015e64u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c04ff90u; R(4)=LD32(R(15)); f_8c015e64(c); }
  R(0)=0x14u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c050044u;
  fp_fmac(c,3,2);
  fp_mov(c,2,3);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c04ffc0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  { c->pr=0x8c04ffc8u;  f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(7)=R(15);
  R(6)=R(15);
  R(6)+=0x34u;
  R(5)=LD32(R(2)+12);
  R(7)+=0x28u;
  R(3)=LD32(R(5)+4);
  R(4)=LD32(R(5)+36);
  R(5)=R(15);
  R(2)=LD32(R(3)+36);
  R(3)=0x8c015e64u;
  R(1)=LD32(R(2));
  ST32(R(15),R(1));
  { c->pr=0x8c04ffe6u; R(5)+=0x40u; f_8c015e64(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015e64u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c04fff8u; R(4)=LD32(R(15)); f_8c015e64(c); }
  R(0)=0x14u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c050044u;
  fp_fmac(c,3,2);
  fp_mov(c,2,3);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c050060(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  { c->pr=0x8c050068u;  f_8c04fb24(c); }
  R(2)=LD32(R(0)+4);
  R(7)=R(15);
  R(6)=R(15);
  R(6)+=0x34u;
  R(5)=LD32(R(2)+12);
  R(7)+=0x28u;
  R(3)=LD32(R(5)+4);
  R(4)=LD32(R(5)+36);
  R(5)=R(15);
  R(2)=LD32(R(3)+36);
  R(3)=0x8c015e64u;
  R(1)=LD32(R(2));
  ST32(R(15),R(1));
  { c->pr=0x8c050086u; R(5)+=0x40u; f_8c015e64(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015e64u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c050098u; R(4)=LD32(R(15)); f_8c015e64(c); }
  R(0)=0x14u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c050108u;
  fp_fmac(c,3,2);
  fp_mov(c,2,3);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->fpul; return; }
}
void f_8c0500c8(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0500cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c758cu;
  ST32(R(15),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c050120;
  R(3)=0x8c064e90u;
  R(5)=0x8c0ba12cu;
  R(6)=0x28bu;
  { c->pr=0x8c0500e8u; R(4)=0x14u; f_8c064e90(c); }
  {  goto L8c05012a; }
L8c050120:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0ba12cu;
  R(6)=0x28bu;
  { c->pr=0x8c05012au; R(4)=0x14u; f_8c0199c4(c); }
L8c05012a:;
  R(2)=0x8c01852eu;
  R(13)=0x0u;
  R(14)=R(0);
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  { c->pr=0x8c050138u; ST32(R(14)+8,R(13)); f_8c01852e(c); }
  ST32(R(14)+12,R(0));
  R(3)=LD32(R(15));
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05014a;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(14));
  ST32(R(2)+4,R(3));
L8c05014a:;
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c050156;
  R(3)=LD32(R(14));
  R(2)=LD32(R(14)+4);
  ST32(R(2),R(3));
L8c050156:;
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c050180;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(2)+8);
  R(3)+=0xffffffffu;
  ST32(R(2)+8,R(3));
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(2));
  c->t=R(3)==R(14);
  if(!c->t) goto L8c050172;
  R(3)=LD32(R(14));
  R(1)=LD32(R(14)+8);
  ST32(R(1),R(3));
L8c050172:;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c050180;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14)+8);
  ST32(R(1)+4,R(3));
L8c050180:;
  R(4)=0x8c2d10a0u;
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  ST32(R(14),R(13));
  R(2)=LD32(R(4)+4);
  ST32(R(14)+4,R(2));
  ST32(R(14)+8,R(4));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05019a;
  { ST32(R(4),R(14)); goto L8c05019e; }
L8c05019a:;
  R(2)=LD32(R(4)+4);
  ST32(R(2),R(14));
L8c05019e:;
  R(0)=0x1u;
  ST32(R(4)+4,R(14));
  R(3)=LD32(R(4)+8);
  R(3)+=0x1u;
  ST32(R(4)+8,R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+36);
  ST8(R(3)+4,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0501e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c2d10a0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(11));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0501f8;
  { R(12)=LD32(R(14)); goto L8c0501fa; }
L8c0501f8:;
  R(12)=0x0u;
L8c0501fa:;
  R(10)=0x8c018680u;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c05025e; }
L8c050202:;
  { uint32_t tg=R(10); c->pr=0x8c050206u; R(4)=LD32(R(14)+12); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c050212;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(14));
  ST32(R(3)+4,R(2));
L8c050212:;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05021e;
  R(2)=LD32(R(14));
  R(3)=LD32(R(14)+4);
  ST32(R(3),R(2));
L8c05021e:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c050248;
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c05023a;
  R(3)=LD32(R(14));
  R(1)=LD32(R(14)+8);
  ST32(R(1),R(3));
L8c05023a:;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c050248;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14)+8);
  ST32(R(1)+4,R(3));
L8c050248:;
  ST32(R(14),R(13));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  R(14)=R(12);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c050258;
  { R(12)=LD32(R(14)); goto L8c05025a; }
L8c050258:;
  R(12)=R(13);
L8c05025a:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c050202;
L8c05025e:;
  ST32(R(11),R(13));
  ST32(R(11)+4,R(13));
  ST32(R(11)+8,R(13));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c050272(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x34u;
  { c->pr=0x8c050280u; R(4)=R(15); f_8c0686b8(c); }
  R(2)=0x8c04fb42u;
  R(3)=0x8c04fb70u;
  ST32(R(15),R(2));
  R(2)=0x8c04fb9eu;
  ST32(R(15)+4,R(3));
  R(3)=0x8c04fbccu;
  ST32(R(15)+8,R(2));
  R(2)=0x8c04fc78u;
  ST32(R(15)+12,R(3));
  R(3)=0x8c04fd38u;
  ST32(R(15)+16,R(2));
  R(2)=0x8c04fe20u;
  ST32(R(15)+20,R(3));
  R(3)=0x8c04fe88u;
  ST32(R(15)+24,R(2));
  R(2)=0x8c04fef0u;
  ST32(R(15)+28,R(3));
  R(3)=0x8c04ff58u;
  ST32(R(15)+32,R(2));
  R(2)=0x8c04ffc0u;
  ST32(R(15)+36,R(3));
  R(3)=0x8c050060u;
  ST32(R(15)+40,R(2));
  R(2)=0x8c0500c8u;
  ST32(R(15)+44,R(3));
  R(3)=0x8c018820u;
  ST32(R(15)+48,R(2));
  { c->pr=0x8c0502bau; R(4)=R(15); f_8c018820(c); }
  R(2)=0x0u;
  R(4)=0x8c2d10a0u;
  R(3)=R(2);
  ST32(R(4),R(2));
  ST32(R(4)+4,R(2));
  ST32(R(4)+8,R(3));
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0502ce(SH4Ctx *c) {
  R(3)=0x8c2d10a0u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0502da;
  { R(0)=LD32(R(4)+16); return; }
L8c0502da:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0502e0(SH4Ctx *c) {
  R(2)=0x8c2d10a0u;
  R(1)=LD32(R(4)+4);
  R(3)=LD32(R(2));
  { ST32(R(3)+16,R(1)); return; }
}
void f_8c050360(SH4Ctx *c) {
  { R(0)=0x38u; return; }
}
void f_8c050364(SH4Ctx *c) {
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
  R(14)=0x8c0ba164u;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  { uint32_t k=!c->t; R(8)=0xffffffffu; if(k) goto L8c0503aa; }
  R(5)=R(14);
  R(6)=0x41u;
  { uint32_t tg=R(11); c->pr=0x8c05038eu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x41u;
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
  { uint32_t tg=R(10); c->pr=0x8c0503a8u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0503aa:;
  R(3)=LD32(R(12)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0503d4;
  R(5)=R(14);
  R(6)=0x44u;
  { uint32_t tg=R(11); c->pr=0x8c0503b8u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x44u;
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
  { uint32_t tg=R(10); c->pr=0x8c0503d2u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0503d4:;
  { c->pr=0x8c0503d8u;  f_8c0503ee(c); }
  ST32(R(12)+28,R(0));
  R(4)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05065e(c); return; } }
}
void f_8c0503ee(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c050440;
  { c->pr=0x8c050400u;  f_8c050360(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0ba164u;
  { c->pr=0x8c05040au; R(6)=0x4eu; f_8c064e90(c); }
  {  goto L8c05044e; }
L8c050440:;
  { c->pr=0x8c050444u;  f_8c050360(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0ba164u;
  { c->pr=0x8c05044eu; R(6)=0x4eu; f_8c0199c4(c); }
L8c05044e:;
  c->fr[15]=0x00000000u;
  R(14)=R(0);
  R(0)=0x28u;
  fp_mov(c,4,15);
  fp_mov(c,5,4);
  fp_mov(c,6,4);
  fp_st(c,4,R(0)+R(14));
  { c->pr=0x8c050460u; R(4)=R(14); f_8c050c0a(c); }
  { c->pr=0x8c050464u; R(4)=R(14); f_8c050ba0(c); }
  R(3)=0x8c07ac26u;
  R(4)=R(0);
  { c->pr=0x8c05046cu; R(5)=0x1u; f_8c07ac26(c); }
  R(2)=0x8c094484u;
  { c->pr=0x8c050472u;  f_8c094484(c); }
  ST32(R(14)+48,R(0));
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05047e(SH4Ctx *c) {
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
  R(14)=0x8c0ba164u;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  { uint32_t k=!c->t; R(8)=0xffffffffu; if(k) goto L8c0504c4; }
  R(5)=R(14);
  R(6)=0x66u;
  { uint32_t tg=R(11); c->pr=0x8c0504a8u; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x66u;
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
  { uint32_t tg=R(10); c->pr=0x8c0504c2u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0504c4:;
  R(3)=LD32(R(12)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0504ee;
  R(5)=R(14);
  R(6)=0x69u;
  { uint32_t tg=R(11); c->pr=0x8c0504d2u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x69u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c0504ecu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0504ee:;
  { c->pr=0x8c0504f2u; R(4)=LD32(R(12)+28); f_8c050764(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(12);
  R(3)=0x8c064eb8u;
  R(5)=R(14);
  R(6)=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  R(4)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064eb8(c); return; } }
}
void f_8c050560(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff94u;
  R(11)=0x8c0c3fa8u;
  R(12)=R(4);
  R(13)=0xffu;
  c->t=(R(12)&R(12))==0;
  R(14)=0x8c0ba164u;
  R(8)=0x8c0125ccu;
  ST32(R(15),R(5));
  { uint32_t k=!c->t; R(10)=0x0u; if(k) goto L8c0505aa; }
  R(9)=0x80u;
  R(5)=R(14);
  R(6)=R(9);
  { uint32_t tg=R(8); c->pr=0x8c05058eu; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(11));
  { c->pr=0x8c0505a8u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0505aa:;
  R(3)=LD32(R(12)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0505d6;
  R(9)=0x83u;
  R(5)=R(14);
  R(6)=R(9);
  { uint32_t tg=R(8); c->pr=0x8c0505bau; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(11));
  { c->pr=0x8c0505d4u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0505d6:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c05064a;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c050620;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c050624;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c050624;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c050624;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050624;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c050624;
  {  goto L8c05064a; }
L8c050620:;
  { c->pr=0x8c050624u; R(4)=LD32(R(12)+28); f_8c05065e(c); }
L8c050624:;
  R(4)=LD32(R(12)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05064a;
  R(2)=0x8c0151c8u;
  R(5)=LD32(R(4)+32);
  R(4)=R(15);
  { c->pr=0x8c050636u; R(4)+=0x4u; f_8c0151c8(c); }
  R(3)=0x8c015570u;
  R(4)=R(15);
  { c->pr=0x8c05063eu; R(4)+=0x4u; f_8c015570(c); }
  R(5)=LD32(R(12)+28);
  R(3)=0x8c07af0au;
  R(4)=LD32(R(5)+44);
  R(5)=R(15);
  { c->pr=0x8c05064au; R(5)+=0x4u; f_8c07af0a(c); }
L8c05064a:;
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05065e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=0x32u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c07aa00u;
  { c->pr=0x8c050670u; R(4)=LD32(R(14)+44); f_8c07aa00(c); }
  R(2)=0x8c05ec40u;
  R(4)=R(14);
  R(5)=0x32u;
  { c->pr=0x8c05067au; R(4)+=0x4u; f_8c05ec40(c); }
  R(3)=0x8c05ec40u;
  R(4)=R(14);
  R(5)=0x32u;
  { c->pr=0x8c050684u; R(4)+=0x10u; f_8c05ec40(c); }
  R(12)=0x8c05eaecu;
  R(4)=R(14);
  R(5)=0x32u;
  { c->pr=0x8c05068eu; R(4)+=0x3u; f_8c05eaec(c); }
  R(13)=0x8c05ebecu;
  R(4)=R(14);
  R(5)=0x32u;
  { c->pr=0x8c050698u; R(4)+=0x20u; f_8c05ebec(c); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c0506a0u; R(4)+=0x24u; sh4_call(c,tg); }
  R(5)=0x32u;
  { uint32_t tg=R(12); c->pr=0x8c0506a6u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(12); c->pr=0x8c0506aeu; R(4)+=0x1u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(12); c->pr=0x8c0506b6u; R(4)+=0x2u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c0506beu; R(4)+=0x1cu; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c0506c6u; R(4)+=0x28u; sh4_call(c,tg); }
  R(6)=0x32u;
  R(4)=LD32(R(14)+44);
  R(3)=R(6);
  R(12)=0x8c05ed6cu;
  R(3)+=0x6eu;
  R(5)=0xcu;
  { c->pr=0x8c0506d6u; R(4)+=R(3); f_8c05ed6c(c); }
  R(4)=LD32(R(14)+44);
  R(6)=0x32u;
  R(3)=0xb8u;
  R(5)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c0506e2u; R(4)+=R(3); sh4_call(c,tg); }
  R(6)=0x32u;
  R(4)=LD32(R(14)+44);
  R(3)=R(6);
  R(3)+=0x7au;
  R(5)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c0506f0u; R(4)+=R(3); sh4_call(c,tg); }
  R(4)=LD32(R(14)+44);
  R(6)=0x32u;
  R(3)=0xc4u;
  R(5)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c0506fcu; R(4)+=R(3); sh4_call(c,tg); }
  R(3)=0xe0u;
  R(5)=0x32u;
  R(4)=LD32(R(14)+44);
  { uint32_t tg=R(13); c->pr=0x8c050706u; R(4)+=R(3); sh4_call(c,tg); }
  R(3)=0xe4u;
  R(5)=0x32u;
  R(4)=LD32(R(14)+44);
  { uint32_t tg=R(13); c->pr=0x8c050710u; R(4)+=R(3); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c050760(SH4Ctx *c) {
  {  return; }
}
void f_8c050764(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=0x32u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c07aa7eu;
  { c->pr=0x8c050774u; R(4)=LD32(R(14)+44); f_8c07aa7e(c); }
  R(13)=0x8c05ec74u;
  R(4)=R(14);
  R(5)=0x32u;
  { c->pr=0x8c05077eu; R(4)+=0x4u; f_8c05ec74(c); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c050786u; R(4)+=0x10u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c05078eu; R(4)+=0x3u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c050796u; R(4)+=0x20u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c05079eu; R(4)+=0x24u; sh4_call(c,tg); }
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c0507a4u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c0507acu; R(4)+=0x1u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c0507b4u; R(4)+=0x2u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c0507bcu; R(4)+=0x1cu; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=0x32u;
  { uint32_t tg=R(13); c->pr=0x8c0507c4u; R(4)+=0x28u; sh4_call(c,tg); }
  R(5)=0x32u;
  R(4)=LD32(R(14)+44);
  R(3)=R(5);
  R(3)+=0x6eu;
  { uint32_t tg=R(13); c->pr=0x8c0507d0u; R(4)+=R(3); sh4_call(c,tg); }
  R(3)=0xb8u;
  R(5)=0x32u;
  R(4)=LD32(R(14)+44);
  { uint32_t tg=R(13); c->pr=0x8c0507dau; R(4)+=R(3); sh4_call(c,tg); }
  R(5)=0x32u;
  R(4)=LD32(R(14)+44);
  R(3)=R(5);
  R(3)+=0x7au;
  { uint32_t tg=R(13); c->pr=0x8c0507e6u; R(4)+=R(3); sh4_call(c,tg); }
  R(3)=0xc4u;
  R(5)=0x32u;
  R(4)=LD32(R(14)+44);
  { uint32_t tg=R(13); c->pr=0x8c0507f0u; R(4)+=R(3); sh4_call(c,tg); }
  R(3)=0xe0u;
  R(5)=0x32u;
  R(4)=LD32(R(14)+44);
  { uint32_t tg=R(13); c->pr=0x8c0507fau; R(4)+=R(3); sh4_call(c,tg); }
  R(3)=0xe4u;
  R(5)=0x32u;
  R(4)=LD32(R(14)+44);
  { uint32_t tg=R(13); c->pr=0x8c050804u; R(4)+=R(3); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c050840(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c0ba164u;
  R(10)=0x0u;
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(8)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c05088c; }
  R(6)=0x133u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c050872u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x133u;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c05088au; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05088c:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0508b6;
  R(6)=0x136u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05089cu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x136u;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c0508b4u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0508b6:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0508c6;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0508c6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0508c6;
  c->t=(int32_t)R(0)==4;
L8c0508c6:;
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
void f_8c0508da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(4);
  ST32(R(15)+8,R(5));
  R(4)=LD32(R(14)+28);
  R(6)=0x38u;
  R(3)=LD32(R(4)+44);
  ST32(R(15),R(3));
  R(4)=LD32(R(14)+28);
  R(3)=LD32(R(4)+48);
  ST32(R(15)+4,R(3));
  R(5)=LD32(R(15)+8);
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(5)+28);
  { c->pr=0x8c0508fcu; R(4)=LD32(R(14)+28); f_8c0685b4(c); }
  R(2)=LD32(R(15));
  R(4)=LD32(R(14)+28);
  R(3)=0x8c07ad36u;
  ST32(R(4)+44,R(2));
  R(4)=LD32(R(15)+8);
  R(6)=LD32(R(14)+28);
  R(4)=LD32(R(4)+28);
  R(5)=LD32(R(4)+44);
  { c->pr=0x8c050910u; R(4)=LD32(R(6)+44); f_8c07ad36(c); }
  R(2)=LD32(R(15)+4);
  R(4)=LD32(R(14)+28);
  ST32(R(4)+48,R(2));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c050940(SH4Ctx *c) {
  { R(0)=LD32(R(4)+48); return; }
}
void f_8c050944(SH4Ctx *c) {
  { ST32(R(4)+48,R(5)); return; }
}
void f_8c050948(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+44);
  ST32(R(15),R(3));
  R(3)=0x8c07afb2u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;} { f_8c07afb2(c); return; } }
}
void f_8c050954(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  R(2)=0x8c07ae90u;
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c050962u; R(5)=R(15); f_8c07ae90(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05096c(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  ST8(R(15),R(5));
  R(5)=R(4);
  R(4)=LD32(R(5)+44);
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(3)=0x8c07ae8cu;
  R(5)=R(5)&0xFF;
  { R(15)+=0x4u; { f_8c07ae8c(c); return; } }
}
void f_8c05098c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(5)=R(4);
  R(2)=0x8c07af2eu;
  R(4)=LD32(R(5)+44);
  R(5)=R(15);
  R(6)=R(15);
  { c->pr=0x8c05099eu; R(5)+=0x4u; f_8c07af2e(c); }
  fp_ld(c,0,R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0509a8(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+44);
  ST32(R(15),R(3));
  R(3)=0x8c07af24u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;} { f_8c07af24(c); return; } }
}
void f_8c0509b4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(5)=R(4);
  R(2)=0x8c07af2eu;
  R(6)=R(15);
  R(4)=LD32(R(5)+44);
  R(6)+=0x4u;
  { c->pr=0x8c0509c6u; R(5)=R(15); f_8c07af2e(c); }
  fp_ld(c,0,R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0509d0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+4,R(4));
  R(0)=0xcu;
  R(2)=0x8c07af2eu;
  R(6)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(5)=LD32(R(15)+4);
  R(4)=LD32(R(5)+44);
  R(5)=R(15);
  { c->pr=0x8c0509e8u; R(5)+=0x8u; f_8c07af2e(c); }
  R(5)=LD32(R(15)+4);
  R(0)=0xcu;
  R(3)=0x8c07af24u;
  fp_ld(c,5,R(15));
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c0509f6u; fp_ld(c,4,R(0)+R(15)); f_8c07af24(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050a40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(5)=R(4);
  R(2)=0x8c07afa0u;
  R(6)=R(15);
  R(4)=LD32(R(5)+44);
  R(6)+=0x4u;
  { c->pr=0x8c050a52u; R(5)=R(15); f_8c07afa0(c); }
  fp_ld(c,0,R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050a5c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+4,R(4));
  R(0)=0xcu;
  R(2)=0x8c07afa0u;
  R(6)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(5)=LD32(R(15)+4);
  R(4)=LD32(R(5)+44);
  R(5)=R(15);
  { c->pr=0x8c050a74u; R(5)+=0x8u; f_8c07afa0(c); }
  R(5)=LD32(R(15)+4);
  R(0)=0xcu;
  R(3)=0x8c07af60u;
  fp_ld(c,5,R(15));
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c050a82u; fp_ld(c,4,R(0)+R(15)); f_8c07af60(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050a8a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(5)=R(4);
  R(2)=0x8c07afa0u;
  R(4)=LD32(R(5)+44);
  R(5)=R(15);
  R(6)=R(15);
  { c->pr=0x8c050a9cu; R(5)+=0x4u; f_8c07afa0(c); }
  fp_ld(c,0,R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050aa6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+4,R(4));
  R(6)=R(15);
  R(2)=0x8c07afa0u;
  R(0)=0xcu;
  R(6)+=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(5)=LD32(R(15)+4);
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c050abeu; R(5)=R(15); f_8c07afa0(c); }
  R(5)=LD32(R(15)+4);
  R(0)=0xcu;
  R(3)=0x8c07af60u;
  fp_ld(c,5,R(0)+R(15));
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c050accu; fp_ld(c,4,R(15)); f_8c07af60(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050ae0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(0)=0x8u;
  R(3)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,6,R(0)+R(15));
  R(3)+=0x8u;
  R(0)=0x14u;
  fp_st(c,7,R(0)+R(15));
  ST32(R(15)+4,R(3));
  ST32(R(15),R(4));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c050b02u; R(4)=LD32(R(15)+4); f_8c050ba6(c); }
  R(1)=0x8c07ae96u;
  R(4)=R(0);
  { c->pr=0x8c050b0au; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c07ae96(c); }
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050b12(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(5)=R(4);
  R(2)=0x8c07aee0u;
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c050b20u; R(5)=R(15); f_8c07aee0(c); }
  fp_ld(c,0,R(15));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050b2a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(5)=R(4);
  R(2)=0x8c07aee0u;
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c050b38u; R(5)=R(15); f_8c07aee0(c); }
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050b44(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(5)=R(4);
  R(2)=0x8c07aee0u;
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c050b52u; R(5)=R(15); f_8c07aee0(c); }
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(15));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050b5e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(5)=R(4);
  R(2)=0x8c07aee0u;
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c050b6cu; R(5)=R(15); f_8c07aee0(c); }
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c050ba0(SH4Ctx *c) {
  R(0)=R(4);
  { R(0)+=0x2cu; return; }
}
void f_8c050ba6(SH4Ctx *c) {
  { R(0)=LD32(R(4)+44); return; }
}
void f_8c050baa(SH4Ctx *c) {
  { ST32(R(4)+44,R(5)); return; }
}
void f_8c050bae(SH4Ctx *c) {
  { ST8(R(4),R(5)); return; }
}
void f_8c050bb2(SH4Ctx *c) {
  { R(0)=(int32_t)(int8_t)LD8(R(4)); return; }
}
void f_8c050bb6(SH4Ctx *c) {
  R(0)=R(5);
  { ST8(R(4)+1,R(0)); return; }
}
void f_8c050bbc(SH4Ctx *c) {
  { R(0)=(int32_t)(int8_t)LD8(R(4)+1); return; }
}
void f_8c050bc0(SH4Ctx *c) {
  R(0)=R(5);
  ST8(R(4)+2,R(0));
  R(0)=0x1cu;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c050bca(SH4Ctx *c) {
  { R(0)=(int32_t)(int8_t)LD8(R(4)+2); return; }
}
void f_8c050bce(SH4Ctx *c) {
  R(0)=0x1cu;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c050bd4(SH4Ctx *c) {
  R(0)=0x28u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c050bda(SH4Ctx *c) {
  R(0)=0x28u;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c050be0(SH4Ctx *c) {
  R(0)=R(5);
  ST8(R(4)+3,R(0));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(4)); return; }
}
void f_8c050bee(SH4Ctx *c) {
  { R(0)=(int32_t)(int8_t)LD8(R(4)+3); return; }
}
void f_8c050bf2(SH4Ctx *c) {
  R(0)=0x20u;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c050bf8(SH4Ctx *c) {
  R(0)=0x20u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c050bfe(SH4Ctx *c) {
  R(0)=0x24u;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c050c04(SH4Ctx *c) {
  R(0)=0x24u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c050c0a(SH4Ctx *c) {
  R(0)=0x4u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(4));
  R(0)=0xcu;
  { fp_st(c,6,R(0)+R(4)); return; }
}
void f_8c050c18(SH4Ctx *c) {
  R(0)=R(4);
  { R(0)+=0x4u; return; }
}
void f_8c050c1e(SH4Ctx *c) {
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x14u;
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x18u;
  fp_st(c,3,R(6));
  fp_ld(c,3,R(0)+R(4));
  { fp_st(c,3,R(7)); return; }
}
void f_8c050c32(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015e64u;
  R(7)=R(15);
  R(5)+=0x1cu;
  ST32(R(15),R(4));
  R(6)+=0x10u;
  R(7)+=0x4u;
  { c->pr=0x8c050c4eu; R(4)=LD32(R(4)+32); f_8c015e64(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,14,R(0)+R(15));
  R(0)=0x20u;
  fp_cmp(c,0,14,3);
  { uint32_t k=c->t; fp_ld(c,15,R(0)+R(15)); if(k) goto L8c050c8c; }
  R(2)=0x8c09cf84u;
  fp_mov(c,4,15);
  { c->pr=0x8c050c64u; fp_arith(c,3,4,14); f_8c09cf84(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,14);
  { uint32_t k=!c->t; fp_mov(c,4,0); if(k) goto L8c050c72; }
  R(0)=0x8c050cc8u;
  fp_ld(c,2,R(0));
  fp_arith(c,0,4,2);
L8c050c72:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  R(0)=0x8c050cccu;
  { uint32_t k=!c->t; fp_ld(c,5,R(0)); if(k) goto L8c050c80; }
  { fp_arith(c,0,4,5); goto L8c050c9a; }
L8c050c80:;
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c050c9a;
  R(0)=0x8c050cd0u;
  fp_ld(c,2,R(0));
  { fp_arith(c,0,4,2); goto L8c050c9a; }
L8c050c8c:;
  fp_cmp(c,1,3,15);
  if(c->t) goto L8c050c96;
  R(0)=0x8c050cd4u;
  { fp_ld(c,4,R(0)); goto L8c050c9a; }
L8c050c96:;
  R(0)=0x8c050cd8u;
  fp_ld(c,4,R(0));
L8c050c9a:;
  fp_mov(c,0,4);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c050ce0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffe98u;
  R(15)+=R(0);
  R(14)=R(4);
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c050cfe; }
  { R(3)=0x0u; goto L8c050d00; }
L8c050cfe:;
  R(3)=LD32(R(14)+4);
L8c050d00:;
  R(1)=LD32(R(3)+28);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c050d0a;
  {  goto L8c05102e; }
L8c050d0a:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050d14;
  { R(4)=0x0u; goto L8c050d16; }
L8c050d14:;
  R(4)=LD32(R(14)+4);
L8c050d16:;
  { c->pr=0x8c050d1au; R(4)=LD32(R(4)+28); f_8c050954(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c050d24;
  {  goto L8c05102e; }
L8c050d24:;
  { c->pr=0x8c050d28u; R(4)=R(14); f_8c050c32(c); }
  R(13)=LD32(R(14)+36);
  R(6)=0x68u;
  R(4)=0x100u;
  R(3)=0x8c0685b4u;
  R(5)=R(13);
  fp_mov(c,15,0);
  { c->pr=0x8c050d38u; R(4)+=R(15); f_8c0685b4(c); }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050d80;
  { R(4)=0x0u; goto L8c050d82; }
L8c050d80:;
  R(4)=LD32(R(14)+4);
L8c050d82:;
  R(4)=LD32(R(4)+28);
  R(6)=0xcu;
  R(3)=0x8c0685b4u;
  R(5)=R(4);
  R(4)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c050d92u; R(4)+=0xcu; f_8c0685b4(c); }
  R(2)=0x8c014ea0u;
  R(4)=0x98u;
  { c->pr=0x8c050d9au; R(4)+=R(15); f_8c014ea0(c); }
  R(4)=0x98u;
  R(5)=R(15);
  R(12)=0x8c01638au;
  R(5)+=0xcu;
  { c->pr=0x8c050da6u; R(4)+=R(15); f_8c01638a(c); }
  R(4)=0x98u;
  R(11)=0x8c084700u;
  fp_mov(c,4,15);
  { c->pr=0x8c050db0u; R(4)+=R(15); f_8c084700(c); }
  R(4)=0x98u;
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0xcu;
  { c->pr=0x8c050dbcu; R(4)+=R(15); f_8c0163ce(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c050dc6u; R(4)=R(13); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0xcu;
  R(5)+=0x18u;
  { c->pr=0x8c050dd6u; R(4)+=0x18u; f_8c05e5f4(c); }
  R(0)=LD32(R(14));
  R(5)=0x8c0c626cu;
  R(7)=0x8c0c6274u;
  c->t=(int32_t)R(0)==2;
  R(6)=0x8c0c6270u;
  if(c->t) goto L8c050de6;
  { R(4)=0x0u; goto L8c050de8; }
L8c050de6:;
  R(4)=LD32(R(14)+4);
L8c050de8:;
  { c->pr=0x8c050decu; R(4)=LD32(R(4)+28); f_8c050c1e(c); }
  R(3)=0x8c0c6274u;
  R(4)=0x100u;
  fp_ld(c,4,R(3));
  { uint32_t tg=R(11); c->pr=0x8c050df6u; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=0x8c0c626cu;
  R(3)=0x8c084540u;
  R(4)=0x100u;
  fp_ld(c,4,R(2));
  { c->pr=0x8c050e02u; R(4)+=R(15); f_8c084540(c); }
  R(2)=0x8c0c6270u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(2));
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c050e14;
  R(1)=0x8c084620u;
  R(4)=0x100u;
  { c->pr=0x8c050e14u; R(4)+=R(15); f_8c084620(c); }
L8c050e14:;
  R(4)=0x100u;
  R(5)=R(15);
  R(5)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c050e1eu; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050e80;
  { R(5)=0x0u; goto L8c050e82; }
L8c050e80:;
  R(5)=LD32(R(14)+4);
L8c050e82:;
  R(5)=LD32(R(5)+28);
  R(0)=(int32_t)(int8_t)LD8(R(5)+2);
  R(4)=R(0);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c050f28; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050e9a;
  { R(4)=0x0u; goto L8c050e9c; }
L8c050e9a:;
  R(4)=LD32(R(14)+4);
L8c050e9c:;
  R(4)=LD32(R(4)+28);
  R(0)=0x28u;
  R(13)=0x8c0c6270u;
  fp_ld(c,4,R(0)+R(4));
  R(4)=0x100u;
  fp_st(c,4,R(13));
  { uint32_t tg=R(11); c->pr=0x8c050eacu; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0x100u;
  R(5)=R(15);
  R(5)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c050eb6u; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050ec0;
  { R(4)=0x0u; goto L8c050ec2; }
L8c050ec0:;
  R(4)=LD32(R(14)+4);
L8c050ec2:;
  R(4)=LD32(R(4)+28);
  R(0)=0x1cu;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x8c050f08u;
  fp_arith(c,0,3,4);
  fp_st(c,3,R(13));
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c050ed8;
  fp_st(c,15,R(13));
L8c050ed8:;
  R(0)=LD32(R(14));
  R(2)=0x8c0c6270u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; fp_ld(c,4,R(2)); if(k) goto L8c050f20; }
  { R(4)=0x0u; goto L8c050f22; }
L8c050f20:;
  R(4)=LD32(R(14)+4);
L8c050f22:;
  R(4)=LD32(R(4)+28);
  R(0)=0x28u;
  fp_st(c,4,R(0)+R(4));
L8c050f28:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050f32;
  { R(4)=0x0u; goto L8c050f34; }
L8c050f32:;
  R(4)=LD32(R(14)+4);
L8c050f34:;
  R(4)=LD32(R(4)+28);
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(5)=R(0)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c050fe8;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050f48;
  { R(3)=0x0u; goto L8c050f4a; }
L8c050f48:;
  R(3)=LD32(R(14)+4);
L8c050f4a:;
  R(2)=LD32(R(3)+28);
  R(6)=R(15);
  ST32(R(15)+4,R(2));
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(5)+=0xcu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c050f5cu; R(4)=LD32(R(15)+12); f_8c050ba6(c); }
  R(2)=0x8c07af2eu;
  R(4)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  { c->pr=0x8c050f66u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c07af2e(c); }
  R(5)=0x8c0c626cu;
  fp_ld(c,4,R(15));
  fp_st(c,4,R(5));
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050f76;
  { R(4)=0x0u; goto L8c050f78; }
L8c050f76:;
  R(4)=LD32(R(14)+4);
L8c050f78:;
  R(4)=LD32(R(4)+28);
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(4));
  R(4)=0x8c0c6278u;
  fp_mov(c,3,4);
  fp_st(c,4,R(4));
  fp_ld(c,2,R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(5));
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050f94;
  { R(6)=0x0u; goto L8c050f96; }
L8c050f94:;
  R(6)=LD32(R(14)+4);
L8c050f96:;
  R(2)=0x8c0c626cu;
  R(0)=0x24u;
  R(6)=LD32(R(6)+28);
  fp_ld(c,4,R(2));
  fp_ld(c,5,R(0)+R(6));
  fp_cmp(c,1,4,5);
  if(c->t) goto L8c050faa;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c050fba;
L8c050faa:;
  c->fr[0]=0x3F800000u;
  fp_arith(c,0,0,0);
  fp_ld(c,3,R(4));
  fp_unary(c,0,3);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(5));
  fp_fmac(c,2,3);
  fp_st(c,2,R(5));
L8c050fba:;
  R(0)=LD32(R(14));
  fp_ld(c,4,R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050fc6;
  { R(4)=0x0u; goto L8c050fc8; }
L8c050fc6:;
  R(4)=LD32(R(14)+4);
L8c050fc8:;
  R(4)=LD32(R(4)+28);
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(4));
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c050fd8;
  { R(5)=0x0u; goto L8c050fda; }
L8c050fd8:;
  R(5)=LD32(R(14)+4);
L8c050fda:;
  R(3)=0x8c0c626cu;
  R(5)=LD32(R(5)+28);
  R(2)=0x8c07af24u;
  fp_ld(c,5,R(3));
  R(4)=LD32(R(5)+44);
  { c->pr=0x8c050fe8u; fp_mov(c,4,15); f_8c07af24(c); }
L8c050fe8:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c051020;
  { R(5)=0x0u; goto L8c051022; }
L8c051020:;
  R(5)=LD32(R(14)+4);
L8c051022:;
  R(5)=LD32(R(5)+28);
  R(3)=0x8c07af0au;
  R(4)=LD32(R(5)+44);
  R(5)=0x100u;
  { c->pr=0x8c05102eu; R(5)+=R(15); f_8c07af0a(c); }
L8c05102e:;
  R(1)=0x168u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051040(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05104a;
  R(0)=0x34u;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
L8c05104a:;
  R(0)=0x0u;
  {  return; }
}
void f_8c05104a(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c051050(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c051058;
  R(0)=0x34u;
  ST8(R(4)+R(0),R(5));
L8c051058:;
  {  return; }
}
void f_8c05105c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0510c4;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0510a0;
  { R(14)=0x0u; goto L8c0510a2; }
L8c0510a0:;
  R(14)=LD32(R(4)+4);
L8c0510a2:;
  R(14)=LD32(R(14)+28);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0510bc;
  { c->pr=0x8c0510acu; R(4)=R(14); f_8c050bb2(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0510bc;
  { c->pr=0x8c0510b6u; R(4)=R(14); f_8c050ba6(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0510bc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0510c4:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0510e0(SH4Ctx *c) {
  { R(0)=0x8u; return; }
}
void f_8c0510e4(SH4Ctx *c) {
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
  R(14)=0x8c0ba19cu;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  { uint32_t k=!c->t; R(8)=0xffffffffu; if(k) goto L8c05112a; }
  R(5)=R(14);
  R(6)=0x3bu;
  { uint32_t tg=R(11); c->pr=0x8c05110eu; R(4)=0x0u; sh4_call(c,tg); }
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
  { uint32_t tg=R(10); c->pr=0x8c051128u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05112a:;
  R(3)=LD32(R(12)+40);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c051154;
  R(5)=R(14);
  R(6)=0x3eu;
  { uint32_t tg=R(11); c->pr=0x8c051138u; R(4)=0x0u; sh4_call(c,tg); }
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
  { uint32_t tg=R(10); c->pr=0x8c051152u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c051154:;
  { c->pr=0x8c051158u;  f_8c05116e(c); }
  ST32(R(12)+40,R(0));
  R(4)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c051490(c); return; } }
}
void f_8c05116e(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0511c0;
  { c->pr=0x8c05117cu;  f_8c0510e0(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0ba19cu;
  { c->pr=0x8c051186u; R(6)=0x48u; f_8c064e90(c); }
  {  goto L8c0511ce; }
L8c0511c0:;
  { c->pr=0x8c0511c4u;  f_8c0510e0(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0ba19cu;
  { c->pr=0x8c0511ceu; R(6)=0x48u; f_8c0199c4(c); }
L8c0511ce:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0511d4(SH4Ctx *c) {
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
  R(14)=0x8c0ba19cu;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  { uint32_t k=!c->t; R(8)=0xffffffffu; if(k) goto L8c05121a; }
  R(5)=R(14);
  R(6)=0x5bu;
  { uint32_t tg=R(11); c->pr=0x8c0511feu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x5bu;
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
  { uint32_t tg=R(10); c->pr=0x8c051218u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05121a:;
  R(3)=LD32(R(12)+40);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c051244;
  R(5)=R(14);
  R(6)=0x5eu;
  { uint32_t tg=R(11); c->pr=0x8c051228u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x5eu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c051242u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c051244:;
  { c->pr=0x8c051248u; R(4)=LD32(R(12)+40); f_8c0514ac(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(12);
  R(3)=0x8c064eb8u;
  R(5)=R(14);
  R(6)=0x61u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  R(4)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064eb8(c); return; } }
}
void f_8c0512a0(SH4Ctx *c) {
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
  R(14)=0x8c0ba19cu;
  R(9)=0x8c012658u;
  R(8)=0x8c0c3fa8u;
  ST32(R(15),R(5));
  { uint32_t k=!c->t; R(10)=0x0u; if(k) goto L8c0512ea; }
  R(5)=R(14);
  R(6)=0x72u;
  { uint32_t tg=R(11); c->pr=0x8c0512ceu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x72u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c0512e8u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0512ea:;
  R(3)=LD32(R(12)+40);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c051314;
  R(5)=R(14);
  R(6)=0x75u;
  { uint32_t tg=R(11); c->pr=0x8c0512f8u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x75u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c051312u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c051314:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c051338;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c051338;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c051338;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c051338;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c051334;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c051338;
  {  goto L8c051338; }
L8c051334:;
  { c->pr=0x8c051338u; R(4)=LD32(R(12)+40); f_8c051490(c); }
L8c051338:;
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
void f_8c051380(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c0ba19cu;
  R(10)=0x0u;
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(8)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c0513cc; }
  R(6)=0x9fu;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0513b2u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x9fu;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c0513cau; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0513cc:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+40);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0513f6;
  R(6)=0xa2u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0513dcu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xa2u;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c0513f4u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0513f6:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c051406;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c051406;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c051406;
  c->t=(int32_t)R(0)==4;
L8c051406:;
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
void f_8c05141a(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(6)=0x8u;
  ST32(R(15)+4,R(5));
  R(4)=LD32(R(15));
  R(3)=0x8c0685b4u;
  R(4)=LD32(R(4)+40);
  R(5)=LD32(R(5)+40);
  { R(15)+=0x8u; { f_8c0685b4(c); return; } }
}
void f_8c05142e(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c051460(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c051464(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c051468(SH4Ctx *c) {
  { ST32(R(4)+4,R(5)); return; }
}
void f_8c05146c(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05147e;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c05147e;
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+40);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c051482;
L8c05147e:;
  { R(0)=0x0u; return; }
L8c051482:;
  R(3)=LD32(R(4));
  R(0)=0x1u;
  ST32(R(5),R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+4,R(2));
  {  return; }
}
void f_8c051482(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(0)=0x1u;
  ST32(R(5),R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+4,R(2));
  {  return; }
}
void f_8c051490(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05eb34u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c05149au; R(5)=0x32u; f_8c05eb34(c); }
  R(4)=LD32(R(15));
  R(5)=0x32u;
  R(4)+=0x4u;
  R(15)+=0x4u;
  R(3)=0x8c05eb34u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c05eb34(c); return; } }
}
void f_8c0514ac(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05ec74u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0514b6u; R(5)=0x32u; f_8c05ec74(c); }
  R(4)=LD32(R(15));
  R(5)=0x32u;
  R(4)+=0x4u;
  R(15)+=0x4u;
  R(3)=0x8c05ec74u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c05ec74(c); return; } }
}
void f_8c051500(SH4Ctx *c) {
  { R(0)=0xcu; return; }
}
void f_8c051504(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0ba1d4u;
  R(3)=R(4);
  R(11)=0x8c0125ccu;
  c->t=(R(3)&R(3))==0;
  R(14)=0xffu;
  R(8)=0xffffffffu;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  ST32(R(15),R(4));
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c05154e; }
  R(5)=R(13);
  R(6)=0x3bu;
  { uint32_t tg=R(11); c->pr=0x8c051534u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x3bu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c05154cu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05154e:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c051578;
  R(5)=R(13);
  R(6)=0x3eu;
  { uint32_t tg=R(11); c->pr=0x8c05155eu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x3eu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xdu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c051576u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c051578:;
  R(2)=LD32(R(15));
  R(1)=0x18u;
  R(1)+=R(2);
  { c->pr=0x8c051582u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c05159a(c); }
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
void f_8c05159a(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0515e0;
  { c->pr=0x8c0515a8u;  f_8c051500(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0ba1d4u;
  { c->pr=0x8c0515b2u; R(6)=0x47u; f_8c064e90(c); }
  {  goto L8c0515ee; }
L8c0515e0:;
  { c->pr=0x8c0515e4u;  f_8c051500(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0ba1d4u;
  { c->pr=0x8c0515eeu; R(6)=0x47u; f_8c0199c4(c); }
L8c0515ee:;
  R(5)=0x0u;
  R(4)=R(0);
  R(0)=R(5);
  R(2)=0xffffffffu;
  ST32(R(4),R(5));
  ST32(R(4)+4,R(2));
  ST8(R(4)+8,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c051602(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0xffu;
  R(3)=R(4);
  R(11)=0x8c0125ccu;
  c->t=(R(3)&R(3))==0;
  R(14)=0x8c0ba1d4u;
  R(10)=0x0u;
  R(8)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  ST32(R(15),R(4));
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c05164c; }
  R(5)=R(14);
  R(6)=0x5fu;
  { uint32_t tg=R(11); c->pr=0x8c051632u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x5fu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c05164au; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05164c:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+24);
  R(2)=R(3);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(15)+4,R(3)); if(k) goto L8c05167a; }
  R(5)=R(14);
  R(6)=0x63u;
  { uint32_t tg=R(11); c->pr=0x8c051660u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x63u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c051678u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05167a:;
  { c->pr=0x8c05167eu; R(4)=LD32(R(15)+4); f_8c051860(c); }
  R(4)=LD32(R(15));
  R(6)=0x6au;
  R(5)=R(14);
  R(4)+=0x18u;
  R(15)+=0x8u;
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
void f_8c0516c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(10)=0x8c0125ccu;
  R(9)=0xffffffffu;
  R(13)=0xffu;
  R(14)=0x8c0ba1d4u;
  R(8)=0x8c012658u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c05170c; }
  R(5)=R(14);
  R(6)=0x7du;
  { uint32_t tg=R(10); c->pr=0x8c0516f0u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x7du;
  R(2)=0x8c0c3fa8u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { uint32_t tg=R(8); c->pr=0x8c05170au; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05170c:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c051746;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+24);
  R(2)=R(3);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(15),R(3)); if(k) goto L8c051742; }
  R(12)=0x87u;
  R(5)=R(14);
  R(6)=R(12);
  { uint32_t tg=R(10); c->pr=0x8c051728u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c0c3fa8u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t tg=R(8); c->pr=0x8c051740u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c051742:;
  { c->pr=0x8c051746u; R(4)=LD32(R(15)); f_8c051860(c); }
L8c051746:;
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
void f_8c051780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(R(3)&R(3))==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0125ccu;
  R(13)=0x8c0ba1d4u;
  R(14)=0xffu;
  R(8)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c0517c8; }
  R(6)=0x9du;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c0517aeu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x9du;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c0517c6u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0517c8:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+24);
  R(2)=R(3);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(15),R(3)); if(k) goto L8c0517f6; }
  R(6)=0xa1u;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c0517dcu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xa1u;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c0517f4u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0517f6:;
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c051860(c); return; } }
}
void f_8c05180c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  R(14)=R(4);
  { c->pr=0x8c05181au; R(4)=LD32(R(14)+24); f_8c051860(c); }
  R(5)=LD32(R(15));
  R(6)=0xcu;
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(5)+24);
  { c->pr=0x8c051826u; R(4)=LD32(R(14)+24); f_8c0685b4(c); }
  { c->pr=0x8c05182au; R(4)=LD32(R(14)+24); f_8c051860(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051860(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c051882;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051876;
  R(3)=0x8c070878u;
  { c->pr=0x8c051876u; R(4)=LD32(R(14)); f_8c070878(c); }
L8c051876:;
  R(4)=0x0u;
  R(0)=R(4);
  R(2)=0xffffffffu;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(2));
  ST8(R(14)+8,R(0));
L8c051882:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051888(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  R(0)=R(6);
  ST32(R(15),R(5));
  { uint32_t k=c->t; ST8(R(15)+4,R(0)); if(k) goto L8c0518b8; }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0518b8;
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0518ac;
  R(3)=0x8c070878u;
  { c->pr=0x8c0518acu; R(4)=LD32(R(14)); f_8c070878(c); }
L8c0518ac:;
  R(2)=LD32(R(15));
  R(3)=0x0u;
  ST32(R(14),R(2));
  ST32(R(14)+4,R(3));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  ST8(R(14)+8,R(0));
L8c0518b8:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0518c0(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0518d0;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0518d0;
  R(0)=LD32(R(4));
  { R(0)=LD32(R(0)+8); return; }
L8c0518d0:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c0518d0(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c0518d6(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0518e4;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0518e4;
  { R(0)=LD32(R(4)+4); return; }
L8c0518e4:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c0518e4(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c0518ea(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0518fc;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0518fc;
  R(0)=LD32(R(4));
  R(0)=LD32(R(0)+8);
  { R(0)+=0xffffffffu; return; }
L8c0518fc:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c0518fc(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c051902(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c051910;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051910;
  { R(0)=0x0u; return; }
L8c051910:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c051940(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c051978;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051978;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(6)=LD32(R(4));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)+8); if(k) goto L8c051964; }
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(!c->t) goto L8c05195e;
L8c051958:;
  R(5)-=R(6);
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(c->t) goto L8c051958;
L8c05195e:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c051964;
  R(5)+=R(6);
L8c051964:;
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(!c->t) goto L8c05196c;
  R(5)=R(6);
  R(5)+=0xffffffffu;
L8c05196c:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c051972;
  R(5)=0x0u;
L8c051972:;
  ST32(R(4)+4,R(5));
  { R(0)=R(5); return; }
L8c051978:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c051978(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c05197e(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  c->t=(R(4)&R(4))==0;
  if(c->t) { f_8c0519b2(c); return; }
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) { f_8c0519b2(c); return; }
  R(7)=LD32(R(4));
  ST32(R(15),R(7));
  R(4)=LD32(R(15));
  R(7)=LD32(R(7)+8);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(6)=0x0u; if(k) { f_8c0519b2(c); return; } }
  { f_8c05199a(c); return; }
}
void f_8c05199a(SH4Ctx *c) {
L8c05199a:;
  R(2)=LD32(R(4)+12);
  c->t=R(5)==R(2);
  if(!c->t) goto L8c0519aa;
  R(7)-=R(6);
  R(0)=R(7);
  R(0)+=0xffffffffu;
  { R(15)+=0x4u; return; }
L8c0519aa:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c05199a; }
  { f_8c0519b2(c); return; }
}
void f_8c0519aa(SH4Ctx *c) {
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) { f_8c05199a(c); return; } }
  { f_8c0519b2(c); return; }
}
void f_8c0519b2(SH4Ctx *c) {
  R(0)=0xffffffffu;
  { R(15)+=0x4u; return; }
}
void f_8c0519b8(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c051a04;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051a04;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(6)=LD32(R(4));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)+8); if(k) goto L8c0519ee; }
  R(3)=LD32(R(4)+4);
  R(3)+=R(5);
  R(2)=R(3);
  c->t=(int32_t)R(2)>=(int32_t)R(6);
  ST32(R(4)+4,R(3));
  if(!c->t) goto L8c0519de;
  R(1)=LD32(R(4)+4);
  R(1)-=R(6);
  ST32(R(4)+4,R(1));
L8c0519de:;
  R(3)=LD32(R(4)+4);
  c->t=(int32_t)R(3)>=0;
  if(c->t) goto L8c051a00;
  R(1)=LD32(R(4)+4);
  R(1)+=R(6);
  ST32(R(4)+4,R(1));
  {  goto L8c051a00; }
L8c0519ee:;
  R(7)=LD32(R(4)+4);
  R(7)+=R(5);
  c->t=(int32_t)R(7)>=0;
  if(!c->t) goto L8c051a04;
  c->t=(int32_t)R(7)>=(int32_t)R(6);
  if(c->t) goto L8c051a04;
  R(2)=LD32(R(4)+4);
  R(2)+=R(5);
  ST32(R(4)+4,R(2));
L8c051a00:;
  { R(0)=LD32(R(4)+4); return; }
L8c051a04:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c051a04(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c051a0a(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c051a54;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051a54;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(6)=LD32(R(4));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)+8); if(k) goto L8c051a30; }
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(!c->t) goto L8c051a28;
L8c051a22:;
  R(5)-=R(6);
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(c->t) goto L8c051a22;
L8c051a28:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c051a38;
  { R(5)+=R(6); goto L8c051a38; }
L8c051a30:;
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c051a54;
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(c->t) goto L8c051a54;
L8c051a38:;
  R(6)-=R(5);
  R(5)=LD32(R(4));
  R(7)=R(6);
  R(7)+=0xffffffffu;
  c->t=(int32_t)R(7)>0;
  R(6)=0x0u;
  { uint32_t k=!c->t; R(5)=LD32(R(5)); if(k) goto L8c051a50; }
L8c051a48:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  { uint32_t k=!c->t; R(5)=LD32(R(5)); if(k) goto L8c051a48; }
L8c051a50:;
  { R(0)=LD32(R(5)+12); return; }
L8c051a54:;
  R(0)=0x0u;
  {  return; }
}
void f_8c051a5a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(4);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c051aba; }
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051aba;
  R(0)=(int32_t)(int8_t)LD8(R(13)+8);
  R(4)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=LD32(R(4)+8); if(k) goto L8c051a8a; }
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(!c->t) goto L8c051a84;
L8c051a7e:;
  R(14)-=R(4);
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(c->t) goto L8c051a7e;
L8c051a84:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c051a8a;
  R(14)+=R(4);
L8c051a8a:;
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c051aba;
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(c->t) goto L8c051aba;
  R(5)=R(14);
  { c->pr=0x8c051a98u; R(4)=R(13); f_8c051a0a(c); }
  R(5)=R(14);
  R(5)+=0x1u;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c051aa2u; R(4)=R(13); f_8c051a0a(c); }
  R(6)=R(0);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c051aba;
  R(3)=0x8c070bd6u;
  R(7)=R(15);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c051ab2u; R(4)=LD32(R(13)); f_8c070bd6(c); }
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c051aba;
  { R(0)=LD32(R(15)); goto L8c051abc; }
L8c051aba:;
  R(0)=0x0u;
L8c051abc:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051ac6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=R(4);
  c->t=(R(13)&R(13))==0;
  ST32(R(15),R(6));
  R(14)=R(5);
  { uint32_t k=c->t; ST32(R(15)+4,R(7)); if(k) goto L8c051b60; }
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051b60;
  R(0)=(int32_t)(int8_t)LD8(R(13)+8);
  R(4)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=LD32(R(4)+8); if(k) goto L8c051afa; }
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(!c->t) goto L8c051af4;
L8c051aee:;
  R(14)-=R(4);
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(c->t) goto L8c051aee;
L8c051af4:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c051afa;
  R(14)+=R(4);
L8c051afa:;
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c051b60;
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(c->t) goto L8c051b60;
  R(5)=R(14);
  { c->pr=0x8c051b08u; R(4)=R(13); f_8c051a0a(c); }
  R(5)=R(14);
  R(5)+=0x1u;
  ST32(R(15)+8,R(0));
  { c->pr=0x8c051b12u; R(4)=R(13); f_8c051a0a(c); }
  R(6)=R(0);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c051b60;
  R(3)=LD32(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c070b80u;
  R(5)=LD32(R(15)+12);
  R(7)=LD32(R(15)+4);
  { c->pr=0x8c051b26u; R(4)=LD32(R(13)); f_8c070b80(c); }
  { R(15)+=0x4u; goto L8c051b62; }
L8c051b60:;
  R(0)=0xffffffffu;
L8c051b62:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051b60(SH4Ctx *c) {
  R(0)=0xffffffffu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051b6c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(4);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c051bcc; }
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051bcc;
  R(0)=(int32_t)(int8_t)LD8(R(13)+8);
  R(4)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=LD32(R(4)+8); if(k) goto L8c051b9c; }
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(!c->t) goto L8c051b96;
L8c051b90:;
  R(14)-=R(4);
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(c->t) goto L8c051b90;
L8c051b96:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c051b9c;
  R(14)+=R(4);
L8c051b9c:;
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c051bcc;
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(c->t) goto L8c051bcc;
  R(5)=R(14);
  { c->pr=0x8c051baau; R(4)=R(13); f_8c051a0a(c); }
  R(5)=R(14);
  R(5)+=0x1u;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c051bb4u; R(4)=R(13); f_8c051a0a(c); }
  R(6)=R(0);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c051bcc;
  R(3)=0x8c070c80u;
  R(7)=R(15);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c051bc4u; R(4)=LD32(R(13)); f_8c070c80(c); }
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c051bcc;
  { R(0)=LD32(R(15)); goto L8c051bce; }
L8c051bcc:;
  R(0)=0x0u;
L8c051bce:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051bd8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(4);
  c->t=(R(13)&R(13))==0;
  R(14)=R(5);
  { uint32_t k=c->t; ST32(R(15),R(6)); if(k) goto L8c051c3a; }
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051c3a;
  R(0)=(int32_t)(int8_t)LD8(R(13)+8);
  R(4)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=LD32(R(4)+8); if(k) goto L8c051c0a; }
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(!c->t) goto L8c051c04;
L8c051bfe:;
  R(14)-=R(4);
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(c->t) goto L8c051bfe;
L8c051c04:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c051c0a;
  R(14)+=R(4);
L8c051c0a:;
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c051c3a;
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(c->t) goto L8c051c3a;
  R(5)=R(14);
  { c->pr=0x8c051c18u; R(4)=R(13); f_8c051a0a(c); }
  R(5)=R(14);
  R(5)+=0x1u;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c051c22u; R(4)=R(13); f_8c051a0a(c); }
  R(6)=R(0);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c051c3a;
  R(4)=LD32(R(13));
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c070c2au;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c070c2a(c); return; } }
L8c051c3a:;
  R(0)=0xffffffffu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051c80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+8);
  R(13)=R(4);
  R(11)=0x8c064a66u;
  R(14)=R(3);
  ST32(R(15),R(3));
  { c->pr=0x8c051c9au; R(4)=R(3); f_8c064a66(c); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c051cb0; }
L8c051ca0:;
  { c->pr=0x8c051ca4u; R(4)=R(14); f_8c051c80(c); }
  R(14)=R(12);
  { uint32_t tg=R(11); c->pr=0x8c051caau; R(4)=R(12); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(12)=R(0); if(k) goto L8c051ca0; }
L8c051cb0:;
  R(2)=0x8c064848u;
  { c->pr=0x8c051cb6u; R(4)=R(13); f_8c064848(c); }
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c051cf2; }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c051cc8;
  { R(4)=0x0u; goto L8c051cca; }
L8c051cc8:;
  R(4)=LD32(R(13)+4);
L8c051cca:;
  R(2)=0x8c044212u;
  { c->pr=0x8c051cd0u;  f_8c044212(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c051cf2;
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c051ce2; }
  { R(4)=0x0u; goto L8c051ce4; }
L8c051ce2:;
  R(4)=LD32(R(13)+4);
L8c051ce4:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c051f00(c); return; } }
L8c051cf2:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051d00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0c3f78u;
  R(14)=0x28u;
  R(11)=0x4u;
  ST32(R(15),R(4));
  R(12)=0xau;
L8c051d16:;
  R(0)=LD32(R(15));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c051d24;
  R(2)=LD32(R(13)+12);
  { uint32_t tg=R(2); c->pr=0x8c051d24u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c051d24:;
  R(0)=LD32(R(15));
  R(14)+=0xfffffffcu;
  R(12)+=0xffffffffu;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)+=0xffffffe8u; if(k) goto L8c051d38; }
  R(2)=LD32(R(13)+12);
  { uint32_t tg=R(2); c->pr=0x8c051d38u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c051d38:;
  R(0)=LD32(R(15));
  R(14)+=0xfffffffcu;
  R(12)+=0xffffffffu;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)+=0xffffffe8u; if(k) goto L8c051d4c; }
  R(2)=LD32(R(13)+12);
  { uint32_t tg=R(2); c->pr=0x8c051d4cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c051d4c:;
  R(0)=LD32(R(15));
  R(14)+=0xfffffffcu;
  R(12)+=0xffffffffu;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)+=0xffffffe8u; if(k) goto L8c051d60; }
  R(2)=LD32(R(13)+12);
  { uint32_t tg=R(2); c->pr=0x8c051d60u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c051d60:;
  R(12)+=0xffffffffu;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  R(13)+=0xffffffe8u;
  { uint32_t k=c->t; R(14)+=0xfffffffcu; if(k) goto L8c051d16; }
  c->t=(int32_t)R(12)>=0;
  if(!c->t) goto L8c051d86;
L8c051d6e:;
  R(0)=LD32(R(15));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c051d7c;
  R(2)=LD32(R(13)+12);
  { uint32_t tg=R(2); c->pr=0x8c051d7cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c051d7c:;
  R(12)+=0xffffffffu;
  c->t=(int32_t)R(12)>=0;
  R(13)+=0xffffffe8u;
  { uint32_t k=c->t; R(14)+=0xfffffffcu; if(k) goto L8c051d6e; }
L8c051d86:;
  R(2)=0x8c064eb8u;
  R(6)=0x61u;
  R(5)=0x8c0ba208u;
  { c->pr=0x8c051d90u; R(4)=R(15); f_8c064eb8(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051dc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(5);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0xffffffffu;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12));
  R(13)=0xffu;
  R(14)=0x8c0ba208u;
  c->t=(R(3)&R(3))==0;
  R(8)=0x8c0125ccu;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c051dea; }
  R(3)=LD32(R(12)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c051e10;
L8c051dea:;
  R(5)=R(14);
  R(6)=0x79u;
  { uint32_t tg=R(8); c->pr=0x8c051df2u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x79u;
  R(2)=0x8c0c3fa8u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xcu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c051e0eu; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c051e10:;
  R(5)=LD32(R(12)+4);
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c051e40; }
  R(3)=0x7cu;
  R(2)=0x8c0c3fa8u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x47u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c051e36u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
  R(5)=R(14);
  R(6)=0x7cu;
  { uint32_t tg=R(8); c->pr=0x8c051e40u; R(4)=0x0u; sh4_call(c,tg); }
L8c051e40:;
  R(14)=0x0u;
  R(13)=0x8c0c3e88u;
  R(9)=0x7u;
  R(14)+=R(12);
L8c051e48:;
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c051e56;
  R(3)=LD32(R(13)+16);
  R(5)=R(10);
  { uint32_t tg=R(3); c->pr=0x8c051e56u; R(4)=R(12); sh4_call(c,tg); }
L8c051e56:;
  R(14)+=0x4u;
  R(2)=LD32(R(14));
  R(11)+=0x1u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)+=0x18u; if(k) goto L8c051e6a; }
  R(3)=LD32(R(13)+16);
  R(5)=R(10);
  { uint32_t tg=R(3); c->pr=0x8c051e6au; R(4)=R(12); sh4_call(c,tg); }
L8c051e6a:;
  R(14)+=0x4u;
  R(2)=LD32(R(14));
  R(11)+=0x1u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)+=0x18u; if(k) goto L8c051e7e; }
  R(3)=LD32(R(13)+16);
  R(5)=R(10);
  { uint32_t tg=R(3); c->pr=0x8c051e7eu; R(4)=R(12); sh4_call(c,tg); }
L8c051e7e:;
  R(14)+=0x4u;
  R(2)=LD32(R(14));
  R(11)+=0x1u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)+=0x18u; if(k) goto L8c051e92; }
  R(3)=LD32(R(13)+16);
  R(5)=R(10);
  { uint32_t tg=R(3); c->pr=0x8c051e92u; R(4)=R(12); sh4_call(c,tg); }
L8c051e92:;
  R(11)+=0x1u;
  c->t=R(11)>=R(9);
  R(13)+=0x18u;
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c051e48; }
  R(9)=0xbu;
  c->t=R(11)>=R(9);
  if(c->t) goto L8c051eba;
L8c051ea2:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051eb0;
  R(3)=LD32(R(13)+16);
  R(5)=R(10);
  { uint32_t tg=R(3); c->pr=0x8c051eb0u; R(4)=R(12); sh4_call(c,tg); }
L8c051eb0:;
  R(11)+=0x1u;
  c->t=R(11)>=R(9);
  R(13)+=0x18u;
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c051ea2; }
L8c051eba:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c051ecc;
  R(4)=LD32(R(12)+4);
  R(0)=0x25u;
  R(3)=0x8u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  ST8(R(4)+R(0),R(2));
L8c051ecc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c051f00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(11)=R(5); if(k) goto L8c051fd2; }
  R(3)=LD32(R(12)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c051fd2;
  R(5)=LD32(R(12)+4);
  R(4)=LD32(R(5));
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(10)=0x0u; if(k) goto L8c051f58; }
  R(14)=0x9du;
  R(3)=0xffffffffu;
  R(13)=0x8c0ba208u;
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x47u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c3fa8u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(8)=0x8c012658u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c051f4cu; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
  R(3)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=R(14);
  { c->pr=0x8c051f58u; R(4)=0x0u; f_8c0125cc(c); }
L8c051f58:;
  R(14)=0x0u;
  R(13)=0x8c0c3e88u;
  R(9)=0x7u;
  R(14)+=R(12);
L8c051f60:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051f6e;
  R(3)=LD32(R(13)+20);
  R(5)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c051f6eu; R(4)=R(12); sh4_call(c,tg); }
L8c051f6e:;
  R(14)+=0x4u;
  R(2)=LD32(R(14));
  R(10)+=0x1u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)+=0x18u; if(k) goto L8c051f82; }
  R(3)=LD32(R(13)+20);
  R(5)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c051f82u; R(4)=R(12); sh4_call(c,tg); }
L8c051f82:;
  R(14)+=0x4u;
  R(2)=LD32(R(14));
  R(10)+=0x1u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)+=0x18u; if(k) goto L8c051f96; }
  R(3)=LD32(R(13)+20);
  R(5)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c051f96u; R(4)=R(12); sh4_call(c,tg); }
L8c051f96:;
  R(14)+=0x4u;
  R(2)=LD32(R(14));
  R(10)+=0x1u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)+=0x18u; if(k) goto L8c051faa; }
  R(3)=LD32(R(13)+20);
  R(5)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c051faau; R(4)=R(12); sh4_call(c,tg); }
L8c051faa:;
  R(10)+=0x1u;
  c->t=R(10)>=R(9);
  R(13)+=0x18u;
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c051f60; }
  R(9)=0xbu;
  c->t=R(10)>=R(9);
  if(c->t) goto L8c051fd2;
L8c051fba:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c051fc8;
  R(3)=LD32(R(13)+20);
  R(5)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c051fc8u; R(4)=R(12); sh4_call(c,tg); }
L8c051fc8:;
  R(10)+=0x1u;
  c->t=R(10)>=R(9);
  R(13)+=0x18u;
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c051fba; }
L8c051fd2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052020(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=R(4);
  R(4)=LD32(R(14)+4);
  R(2)=0x8c2d03b8u;
  R(4)=LD32(R(4)+12);
  R(3)=LD32(R(2));
  R(4)=LD32(R(4)+28);
  c->t=R(4)==R(3);
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c052040; }
  {  goto L8c05214c; }
L8c052040:;
  R(3)=LD32(R(14)+4);
  R(0)=0x8c2d03b0u;
  R(1)=LD32(R(3)+12);
  R(12)=LD32(R(0));
  R(0)=0x24u;
  R(3)=LD32(R(1)+4);
  R(3)=LD32(R(3)+4);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0520ba;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+12);
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052064;
  R(1)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(1));
L8c052064:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052070;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c052070:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05209a;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c05208c;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c05208c:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c05209a;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c05209a:;
  ST32(R(4)+20,R(13));
  ST32(R(4)+24,R(13));
  ST32(R(4)+28,R(13));
  ST32(R(4)+24,R(13));
  R(2)=LD32(R(12)+8);
  ST32(R(4)+20,R(2));
  ST32(R(4)+28,R(12));
  R(3)=LD32(R(12)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0520b2;
  { ST32(R(12)+12,R(4)); goto L8c0520b6; }
L8c0520b2:;
  R(2)=LD32(R(12)+8);
  ST32(R(2)+24,R(4));
L8c0520b6:;
  { ST32(R(12)+8,R(4)); goto L8c052146; }
L8c0520ba:;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+12);
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0520ca;
  R(1)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(1));
L8c0520ca:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0520d6;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c0520d6:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052100;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0520f2;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c0520f2:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c052100;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c052100:;
  ST32(R(4)+20,R(13));
  ST32(R(4)+24,R(13));
  ST32(R(4)+28,R(13));
  ST32(R(4)+20,R(13));
  R(2)=LD32(R(12)+12);
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(12));
  R(3)=LD32(R(12)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c052140;
  { ST32(R(12)+8,R(4)); goto L8c052144; }
L8c052140:;
  R(2)=LD32(R(12)+12);
  ST32(R(2)+20,R(4));
L8c052144:;
  ST32(R(12)+12,R(4));
L8c052146:;
  R(3)=LD32(R(12)+16);
  R(3)+=0x1u;
  ST32(R(12)+16,R(3));
L8c05214c:;
  R(2)=LD32(R(14)+4);
  R(5)=R(15);
  R(5)+=0xcu;
  ST32(R(15),R(2));
  R(3)=LD32(R(2)+12);
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(3)+28);
  R(3)=0x8c0163ceu;
  R(1)=LD32(R(2)+36);
  ST32(R(15)+4,R(1));
  R(4)=LD32(R(15)+8);
  { c->pr=0x8c052166u; R(4)=LD32(R(4)+32); f_8c0163ce(c); }
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c014eaau;
  R(4)=R(15);
  R(6)+=0xcu;
  { c->pr=0x8c052174u; R(4)+=0xcu; f_8c014eaa(c); }
  R(4)=LD32(R(14)+4);
  R(5)=R(15);
  R(3)=0x8c055a5cu;
  R(5)+=0xcu;
  { c->pr=0x8c052180u; R(4)=LD32(R(4)+12); f_8c055a5c(c); }
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0x2u;
  R(5)=0x8c123b08u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  ST8(R(4)+R(0),R(2));
  R(3)=0x4u;
  R(4)=LD32(R(14)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  ST8(R(4)+R(0),R(2));
  R(0)=0x6cu;
  R(4)=LD32(R(14));
  R(6)=LD32(R(5)+R(0));
  R(0)+=0x60u;
  ST32(R(4)+R(0),R(6));
  R(0)=0x6cu;
  R(4)=LD32(R(5)+R(0));
  R(0)+=0x68u;
  R(5)=LD32(R(14));
  ST32(R(5)+R(0),R(4));
  R(0)+=0xffffffd8u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0521bc;
  R(0)=0xc0u;
  R(2)=LD32(R(14));
  ST32(R(2)+R(0),R(13));
L8c0521bc:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052140(SH4Ctx *c) {
  R(2)=LD32(R(12)+12);
  ST32(R(2)+20,R(4));
  ST32(R(12)+12,R(4));
  R(3)=LD32(R(12)+16);
  R(3)+=0x1u;
  ST32(R(12)+16,R(3));
  R(2)=LD32(R(14)+4);
  R(5)=R(15);
  R(5)+=0xcu;
  ST32(R(15),R(2));
  R(3)=LD32(R(2)+12);
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(3)+28);
  R(3)=0x8c0163ceu;
  R(1)=LD32(R(2)+36);
  ST32(R(15)+4,R(1));
  R(4)=LD32(R(15)+8);
  { c->pr=0x8c052166u; R(4)=LD32(R(4)+32); f_8c0163ce(c); }
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c014eaau;
  R(4)=R(15);
  R(6)+=0xcu;
  { c->pr=0x8c052174u; R(4)+=0xcu; f_8c014eaa(c); }
  R(4)=LD32(R(14)+4);
  R(5)=R(15);
  R(3)=0x8c055a5cu;
  R(5)+=0xcu;
  { c->pr=0x8c052180u; R(4)=LD32(R(4)+12); f_8c055a5c(c); }
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0x2u;
  R(5)=0x8c123b08u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  ST8(R(4)+R(0),R(2));
  R(3)=0x4u;
  R(4)=LD32(R(14)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  ST8(R(4)+R(0),R(2));
  R(0)=0x6cu;
  R(4)=LD32(R(14));
  R(6)=LD32(R(5)+R(0));
  R(0)+=0x60u;
  ST32(R(4)+R(0),R(6));
  R(0)=0x6cu;
  R(4)=LD32(R(5)+R(0));
  R(0)+=0x68u;
  R(5)=LD32(R(14));
  ST32(R(5)+R(0),R(4));
  R(0)+=0xffffffd8u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0521bc;
  R(0)=0xc0u;
  R(2)=LD32(R(14));
  ST32(R(2)+R(0),R(13));
L8c0521bc:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0521c8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=R(4);
  R(14)=R(4);
  R(3)=0x8c054a00u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c0521d8u; R(4)=LD32(R(4)+12); f_8c054a00(c); }
  R(2)=0x8c2d105cu;
  R(3)=0x8c018400u;
  R(4)=LD32(R(14)+4);
  R(5)=LD32(R(2));
  { c->pr=0x8c0521e4u; R(4)=LD32(R(4)+12); f_8c018400(c); }
  R(5)=LD32(R(14)+4);
  R(0)=0x25u;
  R(4)=0x1u;
  R(5)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(5)=R(5)&0xFF;
  R(3)=R(5);
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c052220;
  { R(2)=R(4); goto L8c052222; }
L8c052220:;
  R(2)=0x0u;
L8c052222:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c05225a;
  R(0)=0x2u;
  c->t=(R(0)&R(5))==0;
  if(c->t) goto L8c052232;
  { R(0)=R(4); goto L8c052234; }
L8c052232:;
  R(0)=0x0u;
L8c052234:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05225a;
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
  R(3)+=0x1u;
  R(4)=LD32(R(14)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
  R(3)+=0xfffffffdu;
  R(4)=LD32(R(14)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
L8c05225a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052260(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=R(4);
  R(14)=R(4);
  R(3)=0x8c054a00u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c052270u; R(4)=LD32(R(4)+12); f_8c054a00(c); }
  R(3)=LD32(R(14)+4);
  R(0)=0x25u;
  R(4)=0x1u;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c0522c0;
  { R(2)=R(4); goto L8c0522c2; }
L8c0522c0:;
  R(2)=0x0u;
L8c0522c2:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c05231a;
  R(4)=LD32(R(14)+4);
  R(3)=0x1u;
  R(1)=0x11u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  ST8(R(4)+R(0),R(2));
  R(0)=LD32(R(14)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0522ec;
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  { ST8(R(4)+R(0),R(2)); goto L8c0522f8; }
L8c0522ec:;
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0x2u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  ST8(R(4)+R(0),R(2));
L8c0522f8:;
  R(0)=LD32(R(14)+4);
  R(1)=0x11u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05230e;
  R(5)=0x4u;
  { c->pr=0x8c05230au; R(4)=R(14); f_8c051dc0(c); }
  {  goto L8c05231a; }
L8c05230e:;
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0xfbu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
L8c05231a:;
  R(4)=LD32(R(14)+4);
  R(1)=0x8c2d105cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c018400u;
  R(5)=LD32(R(1));
  R(4)=LD32(R(4)+12);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c018400(c); return; } }
}
void f_8c052360(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14)+4);
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0523b2; }
  R(3)=LD32(R(14)+4);
  R(2)=0x10000u;
  R(1)=LD32(R(3)+8);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(!c->t) goto L8c05239e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=LD32(R(14)+4);
  R(3)=0x8c044a00u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  R(4)=LD32(R(4)+8);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044a00(c); return; } }
L8c05239e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c052260(c); return; } }
L8c0523b2:;
  R(13)=0x11cu;
  R(11)=0x0u;
  R(12)=0x8c0ba208u;
  R(8)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(13);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)+=0xffffffe3u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(6)=R(11);
  R(9)=0x8c0c3fa8u;
  R(7)=0x38u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c012658u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c0523d8u; R(4)=0x30u; f_8c012658(c); }
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
void f_8c052420(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  ST32(R(15),R(4));
  R(14)=LD32(R(14)+4);
  R(4)=LD32(R(14)+4);
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c05245e; }
  R(4)=LD32(R(14)+4);
  R(5)=LD32(R(15));
  R(4)=LD32(R(4)+8);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c044b60u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044b60(c); return; } }
L8c05245e:;
  R(12)=0x129u;
  R(10)=0x0u;
  R(13)=0x8c0ba208u;
  R(8)=0xffffffffu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)+=0xffffffd6u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=R(10);
  R(9)=0x8c0c3fa8u;
  R(7)=0x38u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c012658u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c052484u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
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
void f_8c05249a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c2d0f94u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(10));
  R(12)=0x8c2d0f98u;
  R(9)=0x8c0333ccu;
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c0524de; }
L8c0524be:;
  R(0)=LD32(R(12));
  R(3)=LD32(R(14)+R(0));
  R(2)=LD32(R(3)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0524d2;
  R(0)=LD32(R(12));
  R(4)=LD32(R(13)+R(0));
  R(4)=LD32(R(4)+12);
  { uint32_t tg=R(9); c->pr=0x8c0524d2u; R(4)=LD32(R(4)); sh4_call(c,tg); }
L8c0524d2:;
  R(3)=LD32(R(10));
  R(11)+=0x1u;
  R(13)+=0x4u;
  c->t=R(11)>=R(3);
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c0524be; }
L8c0524de:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052520(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0644deu;
  { c->pr=0x8c052528u;  f_8c0644de(c); }
  R(1)=0x8c2d03b0u;
  R(5)=LD32(R(1));
  { c->pr=0x8c052530u; R(4)=0x1u; f_8c052960(c); }
  R(2)=0x8c0441e8u;
  R(4)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0441e8(c); return; } }
}
void f_8c052538(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2d03b0u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c052542u; R(5)=LD32(R(3)); f_8c052960(c); }
  R(3)=0x8c2d03b8u;
  R(4)=LD32(R(15));
  R(5)=LD32(R(3));
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c052960(c); return; } }
}
void f_8c05254e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0644deu;
  { c->pr=0x8c052556u;  f_8c0644de(c); }
  R(2)=0x8c2d03b0u;
  R(5)=LD32(R(2));
  { c->pr=0x8c05255eu; R(4)=0x3u; f_8c052960(c); }
  R(2)=0x8c2d03b8u;
  R(5)=LD32(R(2));
  { c->pr=0x8c052566u; R(4)=0x3u; f_8c052960(c); }
  R(2)=0x8c0441e8u;
  R(4)=0x3u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0441e8(c); return; } }
}
void f_8c05256e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  R(11)=R(4);
  R(4)=LD32(R(5)+4);
  R(12)=LD32(R(4)+8);
  R(4)=R(5);
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5));
  R(4)=R(5);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052592;
  { R(2)=LD32(R(4)+4); goto L8c052594; }
L8c052592:;
  R(2)=0x0u;
L8c052594:;
  { ST32(R(15),R(2)); goto L8c052644; }
L8c052598:;
  R(14)=LD32(R(4));
  R(0)=0x25u;
  R(4)=0x1u;
  R(14)=LD32(R(14)+4);
  R(5)=LD32(R(14)+4);
  R(6)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(6)=R(6)&0xFF;
  R(6)&=R(4);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0525b0;
  { R(3)=R(4); goto L8c0525b2; }
L8c0525b0:;
  R(3)=0x0u;
L8c0525b2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0525c8;
  R(0)=0x11u;
  R(2)=(int32_t)(int8_t)LD8(R(5)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c052610;
  R(0)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c052610;
L8c0525c8:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c052600;
  { R(2)=R(4); goto L8c052602; }
L8c052600:;
  R(2)=0x0u;
L8c052602:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c052634;
  R(0)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(5)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c052634;
L8c052610:;
  R(13)=0x8c044212u;
  { c->pr=0x8c052616u; R(4)=R(14); f_8c044212(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c052634;
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c052634;
  R(13)=0x8c0c633cu;
  R(5)=0x4u;
  ST32(R(13),R(11));
  { c->pr=0x8c052630u; R(4)=R(14); f_8c051dc0(c); }
  R(4)=0x0u;
  ST32(R(13),R(4));
L8c052634:;
  R(4)=LD32(R(15));
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)+=0xffffffffu; if(k) goto L8c052644; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+4);
  ST32(R(15),R(2));
L8c052644:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05264c;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c052598;
L8c05264c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05265a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(4)=R(5);
  R(10)=R(5);
  R(5)=LD32(R(4)+4);
  R(13)=R(6);
  R(9)=LD32(R(5)+52);
  { R(5)=LD32(R(5)+48); goto L8c0526b8; }
L8c052676:;
  R(6)=R(5);
  R(5)=R(11);
  R(14)=LD32(R(5));
  c->t=R(14)==R(13);
  if(!c->t) goto L8c052684;
  { R(6)=R(4); goto L8c0526a6; }
L8c052684:;
  R(5)=R(13);
  R(7)=LD32(R(5)+4);
  R(1)=LD32(R(5)+4);
  R(7)=LD32(R(7)+52);
  { R(1)=LD32(R(1)+48); goto L8c0526a0; }
L8c052690:;
  R(0)=R(5);
  R(1)=LD32(R(0));
  c->t=R(1)==R(14);
  { uint32_t k=!c->t; R(7)+=0xffffffffu; if(k) goto L8c05269c; }
  R(6)=R(4);
L8c05269c:;
  R(1)=R(5);
  R(1)+=0x4u;
L8c0526a0:;
  c->t=(int32_t)R(7)>0;
  { uint32_t k=c->t; R(5)=R(1); if(k) goto L8c052690; }
L8c0526a6:;
  R(6)=R(6)&0xFF;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0526b0;
  { c->pr=0x8c0526b0u; R(4)=R(14); f_8c05256e(c); }
L8c0526b0:;
  R(5)=R(11);
  R(5)+=0x4u;
  R(9)+=0xffffffffu;
  R(4)=R(11);
L8c0526b8:;
  R(11)=R(5);
  c->t=(int32_t)R(9)>0;
  R(5)=0x0u;
  { uint32_t k=c->t; R(4)=0x1u; if(k) goto L8c052676; }
  R(7)=R(5);
  R(5)=R(13);
  R(2)=LD32(R(5)+4);
  R(6)=LD32(R(5)+4);
  R(3)=LD32(R(2)+48);
  R(6)=LD32(R(6)+52);
  R(5)=R(3);
  ST32(R(15),R(3));
  {  goto L8c0526e8; }
L8c0526d6:;
  R(13)=R(5);
  R(14)=LD32(R(13));
  c->t=R(14)==R(10);
  { uint32_t k=!c->t; R(6)+=0xffffffffu; if(k) goto L8c0526e2; }
  R(7)=R(4);
L8c0526e2:;
  R(14)=R(5);
  R(14)+=0x4u;
  R(5)=R(14);
L8c0526e8:;
  c->t=(int32_t)R(6)>0;
  if(c->t) goto L8c0526d6;
  R(7)=R(7)&0xFF;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c052704;
  R(4)=R(10);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05256e(c); return; } }
L8c052704:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052740(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0644deu;
  { c->pr=0x8c052748u;  f_8c0644de(c); }
  R(2)=0x8c2d03b0u;
  R(5)=LD32(R(2));
  { c->pr=0x8c052750u; R(4)=0x2u; f_8c052960(c); }
  R(2)=0x8c2d03b8u;
  R(5)=LD32(R(2));
  { c->pr=0x8c052758u; R(4)=0x2u; f_8c052960(c); }
  R(2)=0x8c0441e8u;
  { c->pr=0x8c05275eu; R(4)=0x2u; f_8c0441e8(c); }
  R(3)=0x8c058488u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c058488(c); return; } }
}
void f_8c052764(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c01a5d4u;
  { c->pr=0x8c05276eu;  f_8c01a5d4(c); }
  R(2)=0x8c014ea0u;
  R(4)=0x1f8u;
  R(14)=0x8c123b08u;
  { c->pr=0x8c052778u; R(4)+=R(14); f_8c014ea0(c); }
  R(3)=0x8c014ea0u;
  R(4)=0x260u;
  { c->pr=0x8c052780u; R(4)+=R(14); f_8c014ea0(c); }
  R(0)=0xc37u;
  R(2)=0x0u;
  R(3)=0x8c2d105cu;
  ST8(R(14)+R(0),R(2));
  R(2)=0x8c018446u;
  { c->pr=0x8c05278eu; R(4)=LD32(R(3)); f_8c018446(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c044fc0u;
  R(4)=0x8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044fc0(c); return; } }
}
void f_8c0527e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x1e8u;
  R(3)=0x8c01a5d4u;
  R(14)=0x8c123b08u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0527fcu; R(11)=LD32(R(14)+R(0)); f_8c01a5d4(c); }
  R(0)=0xc37u;
  R(2)=0x0u;
  R(13)=0x8c05ecc0u;
  R(12)=0x8c0685b4u;
  ST8(R(14)+R(0),R(2));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(10)=0x1u; if(k) goto L8c052848; }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c052868;
  R(2)=LD32(R(11)+4);
  R(5)=0x32u;
  R(3)=LD32(R(2));
  R(4)=R(3);
  ST32(R(15)+8,R(3));
  { uint32_t tg=R(13); c->pr=0x8c052820u; R(4)+=0x18u; sh4_call(c,tg); }
  R(4)=0x1f8u;
  R(6)=0x68u;
  R(5)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c05282au; R(4)+=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(11)+4);
  R(5)=0x32u;
  R(3)=LD32(R(2));
  R(4)=R(3);
  ST32(R(15)+8,R(3));
  { uint32_t tg=R(13); c->pr=0x8c052838u; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=LD32(R(15));
  R(6)=0x68u;
  R(4)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c052842u; R(5)=LD32(R(5)+36); sh4_call(c,tg); }
  R(0)=0xc37u;
  { ST8(R(14)+R(0),R(10)); goto L8c052868; }
L8c052848:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c052868;
  R(3)=LD32(R(11)+4);
  R(5)=0x32u;
  R(2)=LD32(R(3));
  R(4)=R(2);
  ST32(R(15),R(2));
  { uint32_t tg=R(13); c->pr=0x8c05285au; R(4)+=0x18u; sh4_call(c,tg); }
  R(4)=0x1f8u;
  R(6)=0x68u;
  R(5)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c052864u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0xc37u;
  ST8(R(14)+R(0),R(10));
L8c052868:;
  R(0)=0x1f0u;
  R(3)=LD32(R(15)+4);
  R(4)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0528e0;
  R(0)=0x1f0u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0528e0;
  R(3)=LD32(R(4)+4);
  R(5)=0x32u;
  R(2)=LD32(R(3));
  R(4)=R(2);
  ST32(R(15),R(2));
  { uint32_t tg=R(13); c->pr=0x8c052888u; R(4)+=0x18u; sh4_call(c,tg); }
  R(4)=0x260u;
  R(6)=0x68u;
  R(5)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c052892u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x1f0u;
  R(5)=0x32u;
  R(2)=LD32(R(14)+R(0));
  R(3)=LD32(R(2)+4);
  R(1)=LD32(R(3));
  R(4)=R(1);
  ST32(R(15),R(1));
  { uint32_t tg=R(13); c->pr=0x8c0528a4u; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(6)=0x68u;
  R(4)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0528aeu; R(5)=LD32(R(5)+36); sh4_call(c,tg); }
  R(0)=0xc37u;
  { ST8(R(14)+R(0),R(10)); goto L8c052900; }
L8c0528e0:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052900;
  R(3)=LD32(R(4)+4);
  R(5)=0x32u;
  R(2)=LD32(R(3));
  R(4)=R(2);
  ST32(R(15)+4,R(2));
  { uint32_t tg=R(13); c->pr=0x8c0528f2u; R(4)+=0x18u; sh4_call(c,tg); }
  R(4)=0x260u;
  R(6)=0x68u;
  R(5)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0528fcu; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0xc37u;
  ST8(R(14)+R(0),R(10));
L8c052900:;
  R(2)=0x8c018446u;
  R(3)=0x8c2d105cu;
  { c->pr=0x8c052908u; R(4)=LD32(R(3)); f_8c018446(c); }
  R(4)=0x8u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c044fc0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044fc0(c); return; } }
}
void f_8c0528e0(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052900;
  R(3)=LD32(R(4)+4);
  R(5)=0x32u;
  R(2)=LD32(R(3));
  R(4)=R(2);
  ST32(R(15)+4,R(2));
  { uint32_t tg=R(13); c->pr=0x8c0528f2u; R(4)+=0x18u; sh4_call(c,tg); }
  R(4)=0x260u;
  R(6)=0x68u;
  R(5)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0528fcu; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0xc37u;
  ST8(R(14)+R(0),R(10));
L8c052900:;
  R(2)=0x8c018446u;
  R(3)=0x8c2d105cu;
  { c->pr=0x8c052908u; R(4)=LD32(R(3)); f_8c018446(c); }
  R(4)=0x8u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c044fc0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044fc0(c); return; } }
}
void f_8c05291c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0644deu;
  { c->pr=0x8c052924u;  f_8c0644de(c); }
  R(2)=0x8c2d03b0u;
  R(5)=LD32(R(2));
  { c->pr=0x8c05292cu; R(4)=0x4u; f_8c052960(c); }
  R(2)=0x8c2d03b8u;
  R(5)=LD32(R(2));
  { c->pr=0x8c052934u; R(4)=0x4u; f_8c052960(c); }
  R(2)=0x8c0441e8u;
  R(4)=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0441e8(c); return; } }
}
void f_8c052960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c064b2au;
  R(13)=R(5);
  R(12)=R(4);
  { c->pr=0x8c05297cu; R(4)=R(5); f_8c064b2a(c); }
  R(2)=0x8c141124u;
  R(6)=0x68u;
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(2));
  { c->pr=0x8c052988u; R(4)=LD32(R(13)+36); f_8c0685b4(c); }
  R(2)=0x8c064ac4u;
  { c->pr=0x8c05298eu; R(4)=R(13); f_8c064ac4(c); }
  R(14)=LD32(R(13)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0529a0;
L8c052994:;
  R(5)=R(14);
  { c->pr=0x8c05299au; R(4)=R(12); f_8c052960(c); }
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c052994;
L8c0529a0:;
  R(2)=0x8c06452cu;
  { c->pr=0x8c0529a6u;  f_8c06452c(c); }
  R(3)=LD32(R(13));
  R(14)=LD32(R(13)+4);
  R(10)=0xffu;
  R(11)=0x8c0ba208u;
  c->t=(R(14)&R(14))==0;
  R(8)=0x8c0c3fa8u;
  ST32(R(15),R(3));
  if(!c->t) goto L8c0529e8;
  R(2)=LD32(R(15));
  R(3)=0x101u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0529e8;
  R(9)=0x289u;
  R(5)=R(11);
  R(3)=0x8c0125ccu;
  R(6)=R(9);
  { c->pr=0x8c0529cau; R(4)=0x0u; f_8c0125cc(c); }
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(7)=0xau;
  R(1)=0x8c012658u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { c->pr=0x8c0529e6u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0529e8:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0529f2;
  {  goto L8c052b90; }
L8c0529f2:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0529fc;
  {  goto L8c052b24; }
L8c0529fc:;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c052a60;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c052a60;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c052ad4;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c052ad4;
  {  goto L8c052b38; }
L8c052a60:;
  R(5)=LD32(R(14)+4);
  R(0)=0x11u;
  R(4)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052aa0;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c052aa0;
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c052aa0;
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c052aa0;
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c052aa0;
  R(0)=R(4);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c052ac0;
  R(0)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c052a98;
  { R(3)=0x1u; goto L8c052a9a; }
L8c052a98:;
  R(3)=0x0u;
L8c052a9a:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c052ac0;
L8c052aa0:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c052ab6;
  R(0)=LD32(R(14)+4);
  R(1)=0x11u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c052ab6;
  { R(5)=0x2u; goto L8c052ab8; }
L8c052ab6:;
  R(5)=R(12);
L8c052ab8:;
  { c->pr=0x8c052abcu; R(4)=R(14); f_8c051dc0(c); }
  {  goto L8c052ac6; }
L8c052ac0:;
  R(5)=R(12);
  { c->pr=0x8c052ac6u; R(4)=R(14); f_8c051f00(c); }
L8c052ac6:;
  R(4)=LD32(R(13)+4);
  R(5)=R(13);
  R(4)=LD32(R(4));
  R(4)=LD32(R(4)+20);
  R(4)=LD32(R(4)+36);
  { ST32(R(5)+52,R(4)); goto L8c052b62; }
L8c052ad4:;
  R(5)=LD32(R(14)+4);
  R(0)=0x11u;
  R(4)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052b24;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c052b24;
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c052b24;
  R(0)=R(4);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c052b08;
  R(0)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c052b00;
  { R(3)=0x1u; goto L8c052b02; }
L8c052b00:;
  R(3)=0x0u;
L8c052b02:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052b24;
L8c052b08:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c052b2e;
  R(0)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c052b1c;
  { R(2)=0x1u; goto L8c052b1e; }
L8c052b1c:;
  R(2)=0x0u;
L8c052b1e:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c052b2e;
L8c052b24:;
  R(5)=R(12);
  { c->pr=0x8c052b2au; R(4)=R(14); f_8c051dc0(c); }
  {  goto L8c052b62; }
L8c052b2e:;
  R(5)=R(12);
  { c->pr=0x8c052b34u; R(4)=R(14); f_8c051f00(c); }
  {  goto L8c052b62; }
L8c052b38:;
  R(9)=0x2d1u;
  R(5)=R(11);
  R(2)=0x8c0125ccu;
  R(6)=R(9);
  { c->pr=0x8c052b44u; R(4)=0x0u; f_8c0125cc(c); }
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(3);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(7)=0xbu;
  R(1)=0x8c012658u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { c->pr=0x8c052b60u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c052b62:;
  R(2)=0x8c064b2au;
  { c->pr=0x8c052b68u; R(4)=R(13); f_8c064b2a(c); }
  R(3)=0x8c06452cu;
  { c->pr=0x8c052b6eu;  f_8c06452c(c); }
  R(2)=LD32(R(13)+4);
  R(3)=LD32(R(2)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052b90;
  R(4)=R(14);
  R(5)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c04a5d2u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04a5d2(c); return; } }
L8c052b90:;
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
void f_8c052be0(SH4Ctx *c) {
  R(5)=0x8c1247a8u;
  R(4)=0x0u;
  ST32(R(5),R(4));
  ST32(R(5)+4,R(4));
  ST32(R(5)+8,R(4));
  ST32(R(5)+12,R(4));
  ST32(R(5)+16,R(4));
  ST32(R(5)+20,R(4));
  ST32(R(5)+24,R(4));
  ST32(R(5)+28,R(4));
  { ST32(R(5)+32,R(4)); return; }
}
void f_8c052bf8(SH4Ctx *c) {
  {  return; }
}
void f_8c052bfc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(5));
  R(4)=0x0u;
  R(6)=LD32(R(5)+4);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(7)=R(0); if(k) goto L8c052c1a; }
  R(2)=LD32(R(6)+4);
  R(3)=LD32(R(2)+8);
  c->t=R(3)==R(13);
  if(!c->t) goto L8c052c1a;
  R(4)=R(6);
L8c052c1a:;
  R(14)=LD32(R(5)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c052c32;
L8c052c20:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c052c2c;
  R(5)=R(14);
  { c->pr=0x8c052c2au; R(4)=R(13); f_8c052bfc(c); }
  R(4)=R(0);
L8c052c2c:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c052c20;
L8c052c32:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052c3c(SH4Ctx *c) {
  R(6)=0x0u;
  R(3)=0x8c1247a8u;
  R(2)=R(6);
  c->t=R(2)>=R(4);
  { uint32_t k=c->t; R(5)=LD32(R(3)); if(k) goto L8c052c50; }
L8c052c48:;
  R(6)+=0x1u;
  c->t=R(6)>=R(4);
  { uint32_t k=!c->t; R(5)=LD32(R(5)); if(k) goto L8c052c48; }
L8c052c50:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c052c58;
  { R(0)=LD32(R(5)+12); return; }
L8c052c58:;
  R(0)=0x0u;
  {  return; }
}
void f_8c052c58(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c052c7a(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c052c80(SH4Ctx *c) {
  R(6)=0x0u;
  R(3)=0x8c1247c0u;
  R(2)=R(6);
  c->t=R(2)>=R(4);
  { uint32_t k=c->t; R(5)=LD32(R(3)); if(k) goto L8c052c94; }
L8c052c8c:;
  R(6)+=0x1u;
  c->t=R(6)>=R(4);
  { uint32_t k=!c->t; R(5)=LD32(R(5)); if(k) goto L8c052c8c; }
L8c052c94:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c052c9c;
  { R(0)=LD32(R(5)+12); return; }
L8c052c9c:;
  R(0)=0x0u;
  {  return; }
}
void f_8c052ce0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c1247a8u;
  R(5)=LD32(R(13));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=0x0u; if(k) goto L8c052cf2; }
  { R(7)=LD32(R(5)); goto L8c052cf4; }
L8c052cf2:;
  R(7)=0x0u;
L8c052cf4:;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(14)=R(4)&0xFF; if(k) goto L8c052d5c; }
L8c052cfa:;
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(14);
  if(!c->t) goto L8c052d4c;
  R(2)=LD32(R(5));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c052d10;
  R(2)=LD32(R(5)+4);
  R(3)=LD32(R(5));
  ST32(R(3)+4,R(2));
L8c052d10:;
  R(3)=LD32(R(5)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052d1c;
  R(2)=LD32(R(5));
  R(3)=LD32(R(5)+4);
  ST32(R(3),R(2));
L8c052d1c:;
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052d46;
  R(3)=LD32(R(5)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(5)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(5);
  if(!c->t) goto L8c052d38;
  R(3)=LD32(R(5));
  R(1)=LD32(R(5)+8);
  ST32(R(1),R(3));
L8c052d38:;
  R(2)=LD32(R(5)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c052d46;
  R(3)=LD32(R(5)+4);
  R(1)=LD32(R(5)+8);
  ST32(R(1)+4,R(3));
L8c052d46:;
  ST32(R(5),R(6));
  ST32(R(5)+4,R(6));
  ST32(R(5)+8,R(6));
L8c052d4c:;
  R(5)=R(7);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c052d56;
  { R(7)=LD32(R(5)); goto L8c052d58; }
L8c052d56:;
  R(7)=0x0u;
L8c052d58:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c052cfa;
L8c052d5c:;
  R(4)=LD32(R(13)+12);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052d66;
  { R(5)=LD32(R(4)); goto L8c052d68; }
L8c052d66:;
  R(5)=0x0u;
L8c052d68:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052dce;
L8c052d6c:;
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(14);
  if(!c->t) goto L8c052dbe;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c052d82;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c052d82:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052d8e;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c052d8e:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052db8;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c052daa;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c052daa:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c052db8;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c052db8:;
  ST32(R(4),R(6));
  ST32(R(4)+4,R(6));
  ST32(R(4)+8,R(6));
L8c052dbe:;
  R(4)=R(5);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052dc8;
  { R(5)=LD32(R(4)); goto L8c052dca; }
L8c052dc8:;
  R(5)=0x0u;
L8c052dca:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c052d6c;
L8c052dce:;
  R(4)=LD32(R(13)+24);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052e00;
  { R(5)=LD32(R(4)); goto L8c052e02; }
L8c052e00:;
  R(5)=0x0u;
L8c052e02:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052e68;
L8c052e06:;
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(14);
  if(!c->t) goto L8c052e58;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c052e1c;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c052e1c:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052e28;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c052e28:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052e52;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c052e44;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c052e44:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c052e52;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c052e52:;
  ST32(R(4),R(6));
  ST32(R(4)+4,R(6));
  ST32(R(4)+8,R(6));
L8c052e58:;
  R(4)=R(5);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052e62;
  { R(5)=LD32(R(4)); goto L8c052e64; }
L8c052e62:;
  R(5)=0x0u;
L8c052e64:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c052e06;
L8c052e68:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052e00(SH4Ctx *c) {
  R(5)=0x0u;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052e68;
L8c052e06:;
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(14);
  if(!c->t) goto L8c052e58;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c052e1c;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4));
  ST32(R(3)+4,R(2));
L8c052e1c:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052e28;
  R(2)=LD32(R(4));
  R(3)=LD32(R(4)+4);
  ST32(R(3),R(2));
L8c052e28:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c052e52;
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+8);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c052e44;
  R(3)=LD32(R(4));
  R(1)=LD32(R(4)+8);
  ST32(R(1),R(3));
L8c052e44:;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c052e52;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+8);
  ST32(R(1)+4,R(3));
L8c052e52:;
  ST32(R(4),R(6));
  ST32(R(4)+4,R(6));
  ST32(R(4)+8,R(6));
L8c052e58:;
  R(4)=R(5);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c052e62;
  { R(5)=LD32(R(4)); goto L8c052e64; }
L8c052e62:;
  R(5)=0x0u;
L8c052e64:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c052e06;
L8c052e68:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052e80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(3)=0x8c0810a0u;
  ST32(R(15),R(5));
  R(13)=R(6);
  R(0)=(int32_t)(int16_t)LD16(R(14)+24);
  R(5)=R(13)&0xFFFF;
  { c->pr=0x8c052e98u; R(4)=R(0); f_8c0810a0(c); }
  R(5)=R(0);
  R(0)=0x34u;
  R(2)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(0)=0x24u;
  R(1)=0x8c2cfdf8u;
  R(2)=R(2)&0xFFFF;
  R(3)=LD32(R(1));
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  ST32(R(14)+20,R(2));
  R(3)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c052ef0; }
L8c052eb8:;
  R(6)=R(4);
  R(3)=LD32(R(14)+20);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(6)+2);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c052ee4;
  R(0)=(int32_t)(int16_t)LD16(R(6)+4);
  R(3)=R(13)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c052ee4;
  R(0)=R(4);
  R(3)=LD32(R(14)+20);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  { R(0)=(int32_t)(int8_t)LD8(R(0)+1); goto L8c052ef2; }
L8c052ee4:;
  R(0)=0x24u;
  R(2)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(4)+=0x1u;
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c052eb8;
L8c052ef0:;
  R(0)=0x0u;
L8c052ef2:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052efc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(3)=0x8c0810a0u;
  ST32(R(15),R(5));
  R(13)=R(6);
  R(0)=(int32_t)(int16_t)LD16(R(14)+24);
  R(5)=R(13)&0xFFFF;
  { c->pr=0x8c052f14u; R(4)=R(0); f_8c0810a0(c); }
  R(5)=R(0);
  R(0)=0x34u;
  R(2)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(0)=0x24u;
  R(1)=0x8c2cfdf8u;
  R(2)=R(2)&0xFFFF;
  R(3)=LD32(R(1));
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  ST32(R(14)+20,R(2));
  R(3)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c052f6a; }
L8c052f34:;
  R(6)=R(4);
  R(3)=LD32(R(14)+20);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(6)+2);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c052f5e;
  R(0)=(int32_t)(int16_t)LD16(R(6)+4);
  R(3)=R(13)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c052f5e;
  R(0)=R(4);
  R(3)=LD32(R(14)+20);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)=(int32_t)(int8_t)LD8(R(3)+R(0)); goto L8c052f6c; }
L8c052f5e:;
  R(0)=0x24u;
  R(2)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(4)+=0x1u;
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c052f34;
L8c052f6a:;
  R(0)=0x0u;
L8c052f6c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c052f76(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(3)=0x8c0810a0u;
  ST32(R(15),R(5));
  R(13)=R(6);
  R(0)=(int32_t)(int16_t)LD16(R(14)+24);
  R(5)=R(13)&0xFFFF;
  { c->pr=0x8c052f8eu; R(4)=R(0); f_8c0810a0(c); }
  R(5)=R(0);
  R(0)=0x34u;
  R(2)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(0)=0x24u;
  R(1)=0x8c2cfdf8u;
  R(2)=R(2)&0xFFFF;
  R(3)=LD32(R(1));
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  ST32(R(14)+20,R(2));
  R(3)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c052fe4; }
L8c052fae:;
  R(6)=R(4);
  R(3)=LD32(R(14)+20);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(6)+2);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c052fd8;
  R(0)=(int32_t)(int16_t)LD16(R(6)+4);
  R(3)=R(13)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c052fd8;
  R(0)=R(4);
  R(3)=LD32(R(14)+20);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)+=R(3); goto L8c052fe6; }
L8c052fd8:;
  R(0)=0x24u;
  R(2)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(4)+=0x1u;
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c052fae;
L8c052fe4:;
  R(0)=0x0u;
L8c052fe6:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c053020(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=LD32(R(11)+4);
  R(0)=0x84u;
  R(12)=LD32(R(12));
  R(13)=LD32(R(12)+4);
  R(13)=LD32(R(13));
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(9)=(int32_t)(int16_t)LD16(R(12)+R(0)); if(k) goto L8c05309e; }
  R(2)=LD32(R(13)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05309e;
  R(0)=0xacu;
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05309e;
  R(0)=(int32_t)(int8_t)LD8(R(13)+3);
  R(14)=0x0u;
  R(8)=0x8c05d0cau;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(10)=0x64u; if(k) goto L8c05309e; }
L8c05305e:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(14);
  R(6)=R(9);
  { c->pr=0x8c053066u; R(4)=R(13); f_8c052e80(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(10);
  if(c->t) goto L8c053092;
  R(2)=LD32(R(11)+4);
  R(0)=0xc8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  R(2)=LD32(R(1)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c053092;
  R(0)=0xacu;
  R(5)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(12)+R(0));
  R(3)<<=2;
  R(5)+=R(3);
  R(5)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(5)+3);
  R(5)=R(0)&0xFF;
  { uint32_t tg=R(8); c->pr=0x8c053092u; R(4)=R(11); sh4_call(c,tg); }
L8c053092:;
  R(0)=(int32_t)(int8_t)LD8(R(13)+3);
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c05305e;
L8c05309e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0530b0(SH4Ctx *c) {
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
  R(15)+=0xffffffb4u;
  R(12)=R(6);
  R(11)=LD32(R(12)+4);
  R(10)=R(4);
  R(4)=R(6);
  R(0)=0x38u;
  R(11)=LD32(R(11));
  fp_ld(c,15,R(0)+R(4));
  R(9)=R(5);
  R(4)=LD32(R(11)+16);
  R(6)=R(10);
  R(2)=0xacu;
  R(7)=R(9);
  R(3)=LD32(R(4));
  R(2)+=R(11);
  ST32(R(15)+16,R(3));
  R(5)=R(2);
  R(3)=0x8c082160u;
  ST32(R(15)+32,R(2));
  { c->pr=0x8c0530eeu; R(4)=R(12); f_8c082160(c); }
  R(0)=(int32_t)(int8_t)LD8(R(10)+3);
  R(14)=LD32(R(15)+32);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(3)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(14)=LD32(R(14));
  R(0)+=R(3);
  R(0)+=R(14);
  { ST32(R(15)+36,R(0)); goto L8c0538b2; }
L8c053140:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(3)=0xffu;
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c05314e;
  {  goto L8c0538b0; }
L8c05314e:;
  R(0)=0xa0u;
  R(8)=LD32(R(11)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(4)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(13)=R(4)&0xFFFF;
  R(3)=R(13);
  R(13)<<=2;
  R(13)+=R(3);
  R(13)<<=2;
  c->t=(R(0)&R(0))==0;
  R(13)+=R(8);
  { uint32_t k=c->t; R(8)=LD32(R(13)); if(k) goto L8c05316e; }
  {  goto L8c053788; }
L8c05316e:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c053178;
  {  goto L8c053788; }
L8c053178:;
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(4)=0xffffu;
  ST16(R(15)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=LD32(R(15)+16);
  R(0)<<=2;
  R(0)<<=2;
  R(0)+=R(3);
  ST32(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(0)+12);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(4);
  if(!c->t) goto L8c053196;
  {  goto L8c053780; }
L8c053196:;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0531a2;
  {  goto L8c053528; }
L8c0531a2:;
  R(3)=LD32(R(13)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c053252;
  R(3)=0x1u;
  ST32(R(8),R(3));
  R(2)=0x0u;
  R(3)=0x8c05428cu;
  { c->pr=0x8c0531b4u; ST32(R(8)+4,R(2)); f_8c05428c(c); }
  R(4)=R(0);
  ST32(R(15),R(0));
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0531c4;
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c0531c4:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0531d0;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c0531d0:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0531fa;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0531ec;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c0531ec:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0531fa;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c0531fa:;
  R(2)=0x0u;
  R(3)=R(2);
  ST32(R(4)+20,R(2));
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(3));
  ST32(R(4)+20,R(3));
  R(2)=LD32(R(8)+12);
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(8));
  R(3)=LD32(R(8)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c053240;
  { ST32(R(8)+8,R(4)); goto L8c053244; }
L8c053240:;
  R(2)=LD32(R(8)+12);
  ST32(R(2)+20,R(4));
L8c053244:;
  ST32(R(8)+12,R(4));
  R(3)=LD32(R(8)+16);
  R(3)+=0x1u;
  ST32(R(8)+16,R(3));
  R(2)=LD32(R(15));
  { ST32(R(13)+4,R(2)); goto L8c053256; }
L8c053252:;
  R(1)=LD32(R(13)+4);
  ST32(R(15),R(1));
L8c053256:;
  R(3)=LD32(R(10)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0532c0;
  R(3)=LD32(R(15)+4);
  R(0)=(int32_t)(int16_t)LD16(R(3)+12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c053268;
  {  goto L8c053408; }
L8c053268:;
  R(0)=0xc8u;
  R(3)=0x8c082df0u;
  R(4)=LD32(R(11)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  { c->pr=0x8c053274u; R(5)=R(0)&0xFF; f_8c082df0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05327e;
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
L8c05327e:;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(3)=LD32(R(15)); if(k) goto L8c053288; }
  { R(2)=0x8u; goto L8c05328a; }
L8c053288:;
  R(2)=0x1u;
L8c05328a:;
  ST32(R(3),R(2));
  R(3)=LD32(R(15));
  ST32(R(3)+4,R(4));
  {  goto L8c053408; }
L8c0532c0:;
  R(2)=LD32(R(15)+4);
  R(0)=(int32_t)(int16_t)LD16(R(2)+12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0532cc;
  {  goto L8c053408; }
L8c0532cc:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(6)=R(9);
  R(5)=R(0)&0xFF;
  { c->pr=0x8c0532d6u; R(4)=R(10); f_8c052f76(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15)+12,R(0)); if(k) goto L8c053310; }
  R(2)=LD32(R(12)+4);
  R(0)=0xc8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  R(2)=LD32(R(1)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0532f4;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(3)=0x8c05d0cau;
  R(5)=R(0)&0xFF;
  { c->pr=0x8c0532f4u; R(4)=R(12); f_8c05d0ca(c); }
L8c0532f4:;
  R(1)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  R(3)=LD32(R(1)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c053302;
  { R(3)=0x8u; goto L8c053304; }
L8c053302:;
  R(3)=0x1u;
L8c053304:;
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  R(1)=LD32(R(3)+4);
  { ST32(R(2)+4,R(1)); goto L8c053408; }
L8c053310:;
  R(0)=(int32_t)(int8_t)LD8(R(0)+1);
  R(3)=0x64u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c0533a6;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(3)=0x8c05d1f6u;
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+16);
  R(6)=LD32(R(15)+16);
  R(0)=(int32_t)(int8_t)LD8(R(7)+1);
  R(6)=(int32_t)(int8_t)LD8(R(6));
  R(7)=R(0)&0xFF;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(6)=R(6)&0xFF;
  R(5)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c053336u; R(4)=R(12); sh4_call(c,tg); }
  R(15)+=0x4u;
  ST16(R(15)+8,R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c05338a;
  R(3)=0x8c05d864u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  { c->pr=0x8c053348u; R(4)=R(0); f_8c05d864(c); }
  R(3)=0x8c05d852u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  { c->pr=0x8c053350u; R(4)=R(0); f_8c05d852(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)); if(k) goto L8c053380; }
  { R(3)=0x8u; goto L8c053382; }
L8c053380:;
  R(3)=0x1u;
L8c053382:;
  ST32(R(2),R(3));
  R(2)=LD32(R(15));
  { ST32(R(2)+4,R(4)); goto L8c053408; }
L8c05338a:;
  R(1)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  R(3)=LD32(R(1)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c053398;
  { R(3)=0x8u; goto L8c05339a; }
L8c053398:;
  R(3)=0x1u;
L8c05339a:;
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  R(1)=LD32(R(3)+4);
  { ST32(R(2)+4,R(1)); goto L8c053408; }
L8c0533a6:;
  R(2)=LD32(R(12)+4);
  R(0)=0xc8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  R(2)=LD32(R(1)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0533be;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(3)=0x8c05d0cau;
  R(5)=R(0)&0xFF;
  { c->pr=0x8c0533beu; R(4)=R(12); f_8c05d0ca(c); }
L8c0533be:;
  R(4)=LD32(R(15)+12);
  R(3)=LD32(R(15)+16);
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(4)=R(4)&0xFF;
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(3)=LD32(R(15)); if(k) goto L8c053400; }
  { R(2)=0x8u; goto L8c053402; }
L8c053400:;
  R(2)=0x1u;
L8c053402:;
  ST32(R(3),R(2));
  R(3)=LD32(R(15));
  ST32(R(3)+4,R(4));
L8c053408:;
  R(4)=LD32(R(15));
  R(5)=0x0u;
  R(3)=0x8c014ea0u;
  ST32(R(4)+52,R(5));
  R(4)=LD32(R(15));
  { c->pr=0x8c053416u; R(4)=LD32(R(4)+32); f_8c014ea0(c); }
  R(3)=LD32(R(15)+4);
  R(2)=R(15);
  R(2)+=0x1cu;
  c->fr[14]=0x00000000u;
  R(1)=LD32(R(3));
  R(0)=0x4u;
  R(3)=R(15);
  R(3)+=0x18u;
  fp_ld(c,3,R(1));
  fp_st(c,3,R(2));
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(2));
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(2)=LD32(R(15)+4);
  R(3)+=0x14u;
  R(1)=LD32(R(2));
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(6)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  R(0)=0x30u;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x28u;
  R(4)=LD32(R(15));
  R(6)+=0x34u;
  R(5)+=0x40u;
  { c->pr=0x8c053484u; R(4)=LD32(R(4)+32); f_8c015ebc(c); }
  R(0)=0x18u;
  c->fr[0]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_arith(c,2,2,1);
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c0534a6;
  R(5)=LD32(R(15));
  R(4)=0xfff7ffffu;
  R(5)=LD32(R(5)+44);
  R(5)&=R(4);
  R(4)=LD32(R(15));
  ST32(R(4)+44,R(5));
L8c0534a6:;
  R(4)=LD32(R(15));
  R(2)=0x10000u;
  R(5)=LD32(R(4)+48);
  R(5)&=R(2);
  c->t=R(5)==R(2);
  if(!c->t) goto L8c0534b6;
  {  goto L8c053788; }
L8c0534b6:;
  R(0)=LD32(R(12)+44);
  R(0)&=0x8u;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c053520;
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  R(3)=0xffu;
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0534dc;
  R(6)=LD32(R(15));
  R(0)=0x38u;
  R(4)=R(6);
  fp_st(c,15,R(0)+R(4));
  R(0)=LD32(R(6)+44);
  R(5)=R(6);
  R(0)|=0x8u;
  R(4)=R(0);
  { ST32(R(5)+44,R(0)); goto L8c053788; }
L8c0534dc:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  R(6)=LD32(R(15));
  R(1)=R(0)&0xFF;
  c->fpul=R(1);
  R(0)=0x38u;
  R(4)=R(6);
  R(1)=0xfffffff7u;
  R(5)=R(6);
  fp_float(c,4);
  fp_st(c,4,R(0)+R(4));
  R(4)=LD32(R(6)+44);
  R(4)&=R(1);
  { ST32(R(5)+44,R(4)); goto L8c053788; }
L8c053520:;
  R(4)=LD32(R(15));
  R(0)=0x38u;
  { fp_st(c,15,R(0)+R(4)); goto L8c053788; }
L8c053528:;
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05359c;
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05353e;
  R(4)=LD32(R(13)+4);
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c05353e:;
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05354e;
  R(4)=LD32(R(13)+4);
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c05354e:;
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c053584;
  R(2)=LD32(R(13)+4);
  R(3)=LD32(R(2)+28);
  R(1)=LD32(R(3)+16);
  R(1)+=0xffffffffu;
  ST32(R(3)+16,R(1));
  R(4)=LD32(R(13)+4);
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c053572;
  R(4)=LD32(R(13)+4);
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(4)+28);
  ST32(R(2)+8,R(3));
L8c053572:;
  R(4)=LD32(R(13)+4);
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c053584;
  R(4)=LD32(R(13)+4);
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+28);
  ST32(R(3)+12,R(2));
L8c053584:;
  R(3)=LD32(R(13)+4);
  R(2)=0x0u;
  ST32(R(3)+20,R(2));
  R(3)=LD32(R(13)+4);
  ST32(R(3)+24,R(2));
  R(3)=LD32(R(13)+4);
  ST32(R(3)+28,R(2));
  R(3)=0x8c0543c0u;
  { c->pr=0x8c053598u; R(4)=LD32(R(13)+4); f_8c0543c0(c); }
  R(2)=0x0u;
  ST32(R(13)+4,R(2));
L8c05359c:;
  R(3)=LD32(R(10)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c053608;
  R(3)=LD32(R(15)+4);
  R(0)=(int32_t)(int16_t)LD16(R(3)+12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0535ae;
  {  goto L8c053756; }
L8c0535ae:;
  R(0)=0xc8u;
  R(3)=0x8c082df0u;
  R(4)=LD32(R(11)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  { c->pr=0x8c0535bau; R(5)=R(0)&0xFF; f_8c082df0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0535c4;
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
L8c0535c4:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c053600;
  { R(3)=0x8u; goto L8c053602; }
L8c053600:;
  R(3)=0x1u;
L8c053602:;
  ST32(R(8),R(3));
  { ST32(R(8)+4,R(4)); goto L8c053756; }
L8c053608:;
  R(2)=LD32(R(15)+4);
  R(0)=(int32_t)(int16_t)LD16(R(2)+12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c053614;
  {  goto L8c053756; }
L8c053614:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(6)=R(9);
  R(5)=R(0)&0xFF;
  { c->pr=0x8c05361eu; R(4)=R(10); f_8c052f76(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c053680; }
  R(2)=LD32(R(12)+4);
  R(0)=0xc8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  R(2)=LD32(R(1)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05363c;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(3)=0x8c05d0cau;
  R(5)=R(0)&0xFF;
  { c->pr=0x8c05363cu; R(4)=R(12); f_8c05d0ca(c); }
L8c05363c:;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c053648;
  { R(2)=0x8u; goto L8c05364a; }
L8c053648:;
  R(2)=0x1u;
L8c05364a:;
  ST32(R(8),R(2));
  R(1)=LD32(R(15)+4);
  R(3)=LD32(R(1)+4);
  { ST32(R(8)+4,R(3)); goto L8c053756; }
L8c053680:;
  R(0)=(int32_t)(int8_t)LD8(R(0)+1);
  R(3)=0x64u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c053720;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(3)=0x8c05d1f6u;
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+4);
  R(6)=LD32(R(15)+4);
  R(0)=(int32_t)(int8_t)LD8(R(7)+1);
  R(6)=(int32_t)(int8_t)LD8(R(6));
  R(7)=R(0)&0xFF;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(6)=R(6)&0xFF;
  R(5)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c0536a6u; R(4)=R(12); sh4_call(c,tg); }
  R(15)+=0x4u;
  ST16(R(15),R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0536cc;
  R(3)=0x8c05d864u;
  { c->pr=0x8c0536b6u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c05d864(c); }
  R(3)=0x8c05d852u;
  { c->pr=0x8c0536bcu; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c05d852(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0536c6;
  { R(2)=0x8u; goto L8c0536c8; }
L8c0536c6:;
  R(2)=0x1u;
L8c0536c8:;
  { ST32(R(8),R(2)); goto L8c053754; }
L8c0536cc:;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0536d8;
  { R(2)=0x8u; goto L8c0536da; }
L8c0536d8:;
  R(2)=0x1u;
L8c0536da:;
  ST32(R(8),R(2));
  R(1)=LD32(R(15)+4);
  R(3)=LD32(R(1)+4);
  { ST32(R(8)+4,R(3)); goto L8c053756; }
L8c053720:;
  R(1)=LD32(R(12)+4);
  R(0)=0xc8u;
  R(3)=LD32(R(1));
  R(2)=LD32(R(3)+R(0));
  R(1)=LD32(R(2)+8);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c053738;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(3)=0x8c05d0cau;
  R(5)=R(0)&0xFF;
  { c->pr=0x8c053738u; R(4)=R(12); f_8c05d0ca(c); }
L8c053738:;
  R(4)=LD32(R(15));
  R(3)=LD32(R(15)+16);
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(4)=R(4)&0xFF;
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c053750;
  { R(3)=0x8u; goto L8c053752; }
L8c053750:;
  R(3)=0x1u;
L8c053752:;
  ST32(R(8),R(3));
L8c053754:;
  ST32(R(8)+4,R(4));
L8c053756:;
  R(4)=0x0u;
  { ST32(R(8)+52,R(4)); goto L8c053788; }
L8c053780:;
  R(3)=0x0u;
  R(2)=0x1u;
  ST32(R(8),R(2));
  ST32(R(8)+4,R(3));
L8c053788:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0537a4; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0537a4;
  R(0)=R(4);
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0537a4;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05381e;
L8c0537a4:;
  R(3)=LD32(R(13)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c053816;
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0537ba;
  R(4)=LD32(R(13)+4);
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c0537ba:;
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0537ca;
  R(4)=LD32(R(13)+4);
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c0537ca:;
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c053800;
  R(2)=LD32(R(13)+4);
  R(3)=LD32(R(2)+28);
  R(1)=LD32(R(3)+16);
  R(1)+=0xffffffffu;
  ST32(R(3)+16,R(1));
  R(4)=LD32(R(13)+4);
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0537ee;
  R(4)=LD32(R(13)+4);
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(4)+28);
  ST32(R(2)+8,R(3));
L8c0537ee:;
  R(4)=LD32(R(13)+4);
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c053800;
  R(4)=LD32(R(13)+4);
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+28);
  ST32(R(3)+12,R(2));
L8c053800:;
  R(3)=LD32(R(13)+4);
  R(2)=0x0u;
  ST32(R(3)+20,R(2));
  R(3)=LD32(R(13)+4);
  ST32(R(3)+24,R(2));
  R(3)=LD32(R(13)+4);
  ST32(R(3)+28,R(2));
  { c->pr=0x8c053812u; R(4)=LD32(R(13)+4); f_8c0543c0(c); }
  R(2)=0x0u;
  ST32(R(13)+4,R(2));
L8c053816:;
  R(2)=0x0u;
  R(3)=0x1u;
  ST32(R(8),R(3));
  ST32(R(8)+4,R(2));
L8c05381e:;
  R(2)=0x10000u;
  R(4)=LD32(R(8)+48);
  R(4)&=R(2);
  c->t=R(4)==R(2);
  if(c->t) goto L8c05389a;
  R(0)=LD32(R(12)+44);
  R(0)&=0x8u;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c053896;
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  R(3)=0xffu;
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c053880;
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(8));
  R(0)=LD32(R(8)+44);
  R(0)|=0x8u;
  R(4)=R(0);
  { ST32(R(8)+44,R(0)); goto L8c05389a; }
L8c053880:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  R(1)=R(0)&0xFF;
  c->fpul=R(1);
  R(1)=0xfffffff7u;
  R(0)=0x38u;
  fp_float(c,4);
  fp_st(c,4,R(0)+R(8));
  R(4)=LD32(R(8)+44);
  R(4)&=R(1);
  { ST32(R(8)+44,R(4)); goto L8c05389a; }
L8c053896:;
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(8));
L8c05389a:;
  R(8)=LD32(R(13)+4);
  R(0)=0x11u;
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(5)=(int32_t)(int8_t)LD8(R(13)+R(0)); if(k) goto L8c0538a8; }
  { R(4)=R(8); goto L8c0538aa; }
L8c0538a8:;
  R(4)=LD32(R(13));
L8c0538aa:;
  R(3)=0x8c0828e4u;
  { c->pr=0x8c0538b0u;  f_8c0828e4(c); }
L8c0538b0:;
  R(14)+=0x6u;
L8c0538b2:;
  R(2)=LD32(R(15)+36);
  c->t=R(14)==R(2);
  if(c->t) goto L8c0538bc;
  {  goto L8c053140; }
L8c0538bc:;
  R(0)=0xa0u;
  R(7)=R(9);
  R(3)=0x8c0823c0u;
  R(6)=R(10);
  R(4)=LD32(R(11)+R(0));
  R(0)+=0x6cu;
  R(2)=(int32_t)(int8_t)LD8(R(11)+R(0));
  R(2)=R(2)&0xFF;
  ST32(R(15)+16,R(2));
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+20);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+40);
  { uint32_t tg=R(3); c->pr=0x8c0538dau; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x10cu;
  R(2)=0x0u;
  R(3)=0x8c054be6u;
  ST8(R(11)+R(0),R(2));
  { c->pr=0x8c0538e6u; R(4)=R(12); f_8c054be6(c); }
  R(15)+=0x54u;
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
void f_8c053920(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  ST32(R(15),R(4));
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14));
  R(12)=LD32(R(14)+4);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c053942;
  {  goto L8c053b3c; }
L8c053942:;
  R(13)=LD32(R(12));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c05394c;
  {  goto L8c053b40; }
L8c05394c:;
  R(0)=0xf0u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05395a;
  {  goto L8c053b3c; }
L8c05395a:;
  R(0)=0x10du;
  R(11)=0x0u;
  R(4)=R(11);
  R(10)=0x8c123b08u;
  ST8(R(14)+R(0),R(4));
  R(0)+=0xffffffefu;
  R(4)=LD32(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c053988;
  R(0)=0xccu;
  R(4)=LD32(R(14)+R(0));
  R(0)+=0xffffffecu;
  R(3)=LD32(R(10)+R(0));
  R(0)=0x6cu;
  R(2)=LD32(R(10)+R(0));
  R(0)+=0x60u;
  R(2)-=R(3);
  R(4)+=R(2);
  ST32(R(14)+R(0),R(4));
  R(0)=0x6cu;
  R(4)=LD32(R(10)+R(0));
  R(0)+=0x68u;
  ST32(R(14)+R(0),R(4));
L8c053988:;
  R(2)=0x8c2dc87cu;
  R(0)=0xfcu;
  R(3)=LD32(R(2));
  ST32(R(15)+4,R(3));
  ST32(R(14)+R(0),R(3));
  R(0)+=0xfffffff2u;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=0xffffu;
  R(2)=R(4)&0xFFFF;
  c->t=R(2)==R(3);
  if(c->t) goto L8c0539a4;
  R(0)=0xeeu;
  R(4)+=0x1u;
  ST16(R(14)+R(0),R(4));
L8c0539a4:;
  R(0)=0xdbu;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0539b2;
  {  goto L8c053b40; }
L8c0539b2:;
  R(0)=0x84u;
  R(3)=0x8c08262eu;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c0539bcu; R(4)=R(13); f_8c08262e(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0539ca;
  R(0)=0xd8u;
  R(3)=0x8c04e2a2u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c0539cau; R(4)=LD32(R(15)); f_8c04e2a2(c); }
L8c0539ca:;
  R(2)=0x8c0c63c0u;
  R(0)=0xdbu;
  ST8(R(14)+R(0),R(11));
  R(0)=0x6cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(10)+R(0)); if(k) goto L8c053a40; }
  R(0)=0x84u;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(4)&0xFFFF;
  { R(4)+=0x1u; goto L8c053a5a; }
L8c053a40:;
  R(0)=0xf0u;
  R(3)=R(5);
  R(2)=0x8c0679f4u;
  R(7)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0xffffffdcu;
  R(6)=LD32(R(14)+R(0));
  R(1)=R(7)&0xFF;
  R(0)=0x3e8u;
  R(3)-=R(6);
  c->macl=R(1)*R(3);
  { c->pr=0x8c053a58u; R(1)=c->macl; f_8c0679f4(c); }
  R(4)=R(0);
L8c053a5a:;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(3)=R(3)&0xFFFF;
  c->t=R(4)>R(3);
  if(!c->t) goto L8c053a88;
  R(3)=0x3e8u;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(0)=0xf0u;
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(3);
  R(6)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0xffffffdcu;
  R(2)=0x8c067940u;
  R(4)=LD32(R(14)+R(0));
  R(1)=c->macl;
  { c->pr=0x8c053a78u; R(0)=R(6)&0xFF; f_8c067940(c); }
  R(5)-=R(0);
  R(0)=0xd0u;
  R(1)=R(5);
  R(1)-=R(4);
  ST32(R(14)+R(0),R(1));
  R(4)=R(1);
  { R(9)=(int32_t)(int16_t)LD16(R(13)); goto L8c053a90; }
L8c053a88:;
  R(0)=0xd0u;
  R(9)=R(4);
  R(5)=R(11);
  ST32(R(14)+R(0),R(11));
L8c053a90:;
  R(0)=0x84u;
  R(4)=R(9)&0xFFFF;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=R(3)==R(4);
  { uint32_t k=!c->t; R(10)=0x1u; if(k) goto L8c053aaa; }
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(2)=R(2)&0xFFFF;
  c->t=R(4)==R(2);
  if(c->t) goto L8c053aaa;
  R(0)=0xdbu;
  ST8(R(14)+R(0),R(10));
L8c053aaa:;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c053b00;
  R(0)=0xdau;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c053b00;
  R(3)=0x8c084198u;
  { c->pr=0x8c053ac0u; R(4)=R(12); f_8c084198(c); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c053b00;
  R(0)=0xdbu;
  R(4)=R(11);
  ST8(R(14)+R(0),R(10));
  R(0)+=0xffffffa9u;
  ST16(R(14)+R(0),R(4));
  R(0)+=0x4cu;
  { ST32(R(14)+R(0),R(4)); goto L8c053b06; }
L8c053b00:;
  R(0)=0x84u;
  R(4)=R(9);
  ST16(R(14)+R(0),R(4));
L8c053b06:;
  R(0)=0x84u;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c053b16;
  R(0)=0x9fu;
  R(4)=R(10);
  ST8(R(14)+R(0),R(4));
L8c053b16:;
  R(0)=0x86u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  ST8(R(15),R(3));
  R(1)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c053b3c;
  R(0)=0x84u;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c053b3c;
  R(3)=0x8c084198u;
  { c->pr=0x8c053b32u; R(4)=R(12); f_8c084198(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c053b3c;
  R(0)=0x9eu;
  R(4)=R(10);
  ST8(R(14)+R(0),R(4));
L8c053b3c:;
  { R(0)=0x1u; goto L8c053b42; }
L8c053b40:;
  R(0)=0x0u;
L8c053b42:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c053b54(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(12)=R(4);
  R(0)=0x14u;
  ST8(R(15)+R(0),R(5));
  R(0)=0x10u;
  ST8(R(15)+R(0),R(6));
  R(14)=LD32(R(12)+4);
  R(14)=LD32(R(14));
  R(11)=LD32(R(14)+4);
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c053ba0;
  { R(0)=0x0u; goto L8c053f5e; }
L8c053ba0:;
  R(13)=LD32(R(11));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c053baa;
  {  goto L8c053f58; }
L8c053baa:;
  R(0)=0x84u;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=R(2)==R(3);
  if(c->t) goto L8c053bc2;
  R(0)=0xf1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c053bc2;
  {  goto L8c053f24; }
L8c053bc2:;
  R(0)=0xf1u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c053bd4;
  R(2)=0x8c083d40u;
  { c->pr=0x8c053bd0u; R(4)=R(12); f_8c083d40(c); }
  {  goto L8c053be0; }
L8c053bd4:;
  R(0)=0x98u;
  R(6)=0x1u;
  R(3)=0x8c083800u;
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c053be0u; R(4)=R(12); f_8c083800(c); }
L8c053be0:;
  R(0)=0x86u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c053c9a;
  R(0)=0xf1u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c053c9a;
  R(2)=0x8c0c63c0u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c053c40;
  R(0)=0x84u;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(4)&0xFFFF;
  { R(4)+=0x1u; goto L8c053c56; }
L8c053c40:;
  R(0)=0xf0u;
  R(3)=0x8c0679f4u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0xffffffe0u;
  R(6)=LD32(R(14)+R(0));
  R(1)=R(5)&0xFF;
  R(0)=0x3e8u;
  c->macl=R(1)*R(6);
  { c->pr=0x8c053c54u; R(1)=c->macl; f_8c0679f4(c); }
  R(4)=R(0);
L8c053c56:;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(2)=R(2)&0xFFFF;
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c053c6c;
L8c053c5e:;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(2)=R(2)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  R(4)-=R(2);
  c->t=R(4)>=R(3);
  if(c->t) goto L8c053c5e;
L8c053c6c:;
  R(1)=0x3e8u;
  R(0)=0xf0u;
  c->macl=R(4)*R(1);
  R(3)=0x8c0679f4u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(1)=c->macl;
  { c->pr=0x8c053c7cu; R(0)=R(5)&0xFF; f_8c0679f4(c); }
  R(2)=0x8c123b74u;
  R(5)=LD32(R(2));
  R(5)-=R(0);
  R(0)=0xccu;
  ST32(R(14)+R(0),R(5));
  R(0)+=0xffffffb8u;
  ST16(R(14)+R(0),R(4));
  R(0)+=0x54u;
  R(4)=0xffffffffu;
  ST16(R(14)+R(0),R(4));
  R(0)+=0xffffffaeu;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)+=0xffffffffu;
  { ST8(R(14)+R(0),R(3)); goto L8c053f24; }
L8c053c9a:;
  R(0)=0xf1u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c053cae;
  R(2)=0x8c084198u;
  { c->pr=0x8c053ca8u; R(4)=LD32(R(14)+4); f_8c084198(c); }
  R(4)=R(0);
  R(0)=0x98u;
  ST32(R(14)+R(0),R(4));
L8c053cae:;
  R(0)=0x98u;
  R(3)=LD32(R(14)+4);
  R(10)=LD32(R(14)+R(0));
  c->t=R(3)==R(10);
  if(c->t) goto L8c053cca;
  R(0)=0xf1u;
  R(1)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c053cca;
  R(2)=0x8c083800u;
  R(6)=0x0u;
  R(5)=R(6);
  { c->pr=0x8c053ccau; R(4)=R(12); f_8c083800(c); }
L8c053cca:;
  c->t=R(11)==R(10);
  if(!c->t) goto L8c053d00;
  R(0)=0xf1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c053d00;
  { R(0)=0x0u; goto L8c053d02; }
L8c053d00:;
  R(0)=0x1u;
L8c053d02:;
  ST8(R(15)+12,R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(8)=0x0u; if(k) goto L8c053d10; }
  {  goto L8c053e5a; }
L8c053d10:;
  R(13)=LD32(R(12)+32);
  R(4)=R(15);
  R(6)=LD32(R(10));
  R(3)=0x8c05e612u;
  R(5)=R(13);
  R(6)+=0x8u;
  R(5)+=0x58u;
  { c->pr=0x8c053d22u; R(4)+=0x18u; f_8c05e612(c); }
  R(6)=LD32(R(11));
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(4)=R(15);
  R(6)+=0x8u;
  R(5)+=0x18u;
  { c->pr=0x8c053d32u; R(4)+=0x18u; f_8c05e5f4(c); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c053d3cu; R(4)=R(13); f_8c01638a(c); }
  R(5)=LD32(R(12)+28);
  R(6)=R(13);
  R(3)=0x8c0156cau;
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c053d48u; R(4)=LD32(R(12)+36); f_8c0156ca(c); }
  R(0)=0xc0u;
  R(3)=0x8c058aeeu;
  ST32(R(14)+R(0),R(8));
  ST32(R(14)+4,R(10));
  { c->pr=0x8c053d54u; R(4)=R(12); f_8c058aee(c); }
  R(4)=LD32(R(14)+4);
  R(2)=0x8c0841b8u;
  R(11)=R(4);
  { c->pr=0x8c053d5eu; R(13)=LD32(R(11)); f_8c0841b8(c); }
  ST8(R(15),R(0));
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c053e44;
  R(3)=0x8c0836a0u;
  R(5)=0x0u;
  { c->pr=0x8c053d70u; R(4)=R(12); f_8c0836a0(c); }
  R(3)=0x8c082068u;
  R(5)=0x0u;
  R(6)=LD32(R(14)+16);
  { c->pr=0x8c053d7au; R(4)=R(13); f_8c082068(c); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c053e4e;
  R(0)=0x9cu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  ST16(R(15)+4,R(0));
  R(0)=0x1au;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(9)=R(8); if(k) goto L8c053e4e; }
  R(0)=(int32_t)(int16_t)LD16(R(10)+2);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=R(3)>R(0);
  if(c->t) goto L8c053e4e;
L8c053d9c:;
  R(3)=0x8c08202cu;
  R(5)=R(10);
  { c->pr=0x8c053da4u; R(4)=R(14); f_8c08202c(c); }
  R(3)=0x8c08402au;
  ST32(R(15)+8,R(0));
  { c->pr=0x8c053dacu; R(4)=R(0); f_8c08402a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c053e28;
  R(3)=0x8c084032u;
  { c->pr=0x8c053db8u; R(4)=LD32(R(15)+8); f_8c084032(c); }
  R(4)=R(0);
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(5)=R(9); if(k) goto L8c053e20; }
  { R(4)=R(4)&0xFF; goto L8c053e22; }
L8c053e20:;
  R(4)=0x1u;
L8c053e22:;
  R(0)=0x88u;
  R(0)=LD32(R(14)+R(0));
  ST8(R(5)+R(0),R(4));
L8c053e28:;
  R(0)=0x1au;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(9)+=0x1u;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  { uint32_t k=c->t; R(10)+=0x6u; if(k) goto L8c053e4e; }
  R(0)=(int32_t)(int16_t)LD16(R(10)+2);
  R(3)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=R(3)>R(0);
  if(!c->t) goto L8c053d9c;
  {  goto L8c053e4e; }
L8c053e44:;
  R(0)=0x9cu;
  R(2)=0x8c0836a0u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c053e4eu; R(4)=R(12); f_8c0836a0(c); }
L8c053e4e:;
  R(3)=0x8c043806u;
  R(5)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c053e56u; R(4)=R(14); f_8c043806(c); }
  {  goto L8c053e60; }
L8c053e5a:;
  R(0)=0xf0u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  ST8(R(15),R(4));
L8c053e60:;
  R(2)=0x8c0c63c0u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c053ea0;
  R(0)=0x84u;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(4)&0xFFFF;
  { R(4)+=0x1u; goto L8c053eb4; }
L8c053ea0:;
  R(0)=0xd0u;
  R(1)=(int32_t)(int8_t)LD8(R(15));
  R(5)=LD32(R(14)+R(0));
  R(1)=R(1)&0xFF;
  R(3)=0x8c0679f4u;
  c->macl=R(1)*R(5);
  R(0)=0x3e8u;
  { c->pr=0x8c053eb2u; R(1)=c->macl; f_8c0679f4(c); }
  R(4)=R(0);
L8c053eb4:;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(2)=R(2)&0xFFFF;
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c053eca;
L8c053ebc:;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(2)=R(2)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  R(4)-=R(2);
  c->t=R(4)>=R(3);
  if(c->t) goto L8c053ebc;
L8c053eca:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c053ed6;
  R(0)=0xdau;
  R(3)=0x1u;
  ST8(R(14)+R(0),R(3));
L8c053ed6:;
  R(0)=0x9cu;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=R(5)&0xFFFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c053ef0;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(8);
  R(0)=0x84u;
  ST16(R(15),R(3));
  R(1)=(int32_t)(int16_t)LD16(R(15));
  ST16(R(14)+R(0),R(1));
  { R(0)+=0x18u; goto L8c053f0a; }
L8c053ef0:;
  R(0)=0xd4u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0xfffffffcu;
  R(5)=LD32(R(14)+R(0));
  R(0)+=0xfffffffcu;
  R(2)=R(6);
  R(2)-=R(5);
  ST32(R(14)+R(0),R(2));
  R(0)+=0xffffffb8u;
  ST16(R(14)+R(0),R(4));
  R(0)+=0x54u;
  R(4)=0xffffffffu;
  R(5)=R(2);
L8c053f0a:;
  ST16(R(14)+R(0),R(4));
  R(0)=0x1cu;
  R(4)=(int32_t)(int8_t)LD8(R(11)+R(0));
  R(0)+=0x6au;
  ST8(R(14)+R(0),R(4));
  R(0)+=0x18u;
  R(4)=R(8);
  ST8(R(14)+R(0),R(4));
  R(0)+=0x53u;
  ST8(R(14)+R(0),R(4));
  R(0)+=0xffffffa7u;
  ST32(R(14)+R(0),R(11));
  R(4)=R(11);
L8c053f24:;
  R(0)=0x14u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c053f40;
  R(0)=0x84u;
  R(5)=R(13);
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c053f36u; R(4)=R(12); f_8c0544a0(c); }
  R(0)=0x84u;
  R(6)=R(12);
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c053f40u; R(4)=R(13); f_8c0530b0(c); }
L8c053f40:;
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c053f4e;
  R(3)=0x8c083b20u;
  { c->pr=0x8c053f4eu; R(4)=R(12); f_8c083b20(c); }
L8c053f4e:;
  R(0)=0xd8u;
  R(2)=0x8c04e2a2u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c053f58u; R(4)=R(12); f_8c04e2a2(c); }
L8c053f58:;
  { c->pr=0x8c053f5cu; R(4)=R(12); f_8c053fa0(c); }
  R(0)=0x1u;
L8c053f5e:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c053fa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=LD32(R(4)+4);
  R(14)=LD32(R(14));
  R(12)=LD32(R(14)+4);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c053fc0;
  {  goto L8c05411e; }
L8c053fc0:;
  R(13)=LD32(R(12));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c053fca;
  {  goto L8c05411e; }
L8c053fca:;
  R(0)=0x84u;
  R(2)=0x8c0c63c0u;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)+=0x54u;
  R(9)=0x8c123b08u;
  ST16(R(14)+R(0),R(4));
  R(0)=0x6cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(9)+R(0)); if(k) goto L8c053fea; }
  R(0)=0x84u;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(4)&0xFFFF;
  { R(4)+=0x1u; goto L8c054004; }
L8c053fea:;
  R(0)=0xf0u;
  R(3)=R(5);
  R(2)=0x8c0679f4u;
  R(7)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0xffffffdcu;
  R(6)=LD32(R(14)+R(0));
  R(1)=R(7)&0xFF;
  R(0)=0x3e8u;
  R(3)-=R(6);
  c->macl=R(1)*R(3);
  { c->pr=0x8c054002u; R(1)=c->macl; f_8c0679f4(c); }
  R(4)=R(0);
L8c054004:;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(3)=R(3)&0xFFFF;
  c->t=R(4)>R(3);
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c054080; }
  R(0)=0x9fu;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05403c;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(3)=0x3e8u;
  R(0)=0xccu;
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(3);
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x24u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)=0x8c067940u;
  R(5)-=R(6);
  R(1)=c->macl;
  { c->pr=0x8c054030u; R(0)=R(4)&0xFF; f_8c067940(c); }
  R(4)=R(5);
  R(4)-=R(0);
  R(0)=0xd0u;
  ST32(R(14)+R(0),R(4));
  { R(10)=(int32_t)(int16_t)LD16(R(13)); goto L8c054088; }
L8c05403c:;
  R(0)=0xd0u;
  R(10)=R(11);
  R(4)=R(11);
  ST32(R(14)+R(0),R(11));
  R(0)=0x6cu;
  R(4)=LD32(R(9)+R(0));
  R(0)+=0x60u;
  { ST32(R(14)+R(0),R(4)); goto L8c054088; }
L8c054080:;
  R(0)=0xd0u;
  R(10)=R(4);
  R(5)=R(11);
  ST32(R(14)+R(0),R(11));
L8c054088:;
  R(0)=0x84u;
  R(3)=R(10)&0xFFFF;
  ST32(R(15),R(3));
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=R(2)==R(3);
  { uint32_t k=!c->t; R(8)=0x1u; if(k) goto L8c0540ae; }
  R(0)=0xdau;
  R(1)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0540ae;
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(3)=LD32(R(15));
  R(2)=R(2)&0xFFFF;
  c->t=R(3)==R(2);
  if(c->t) goto L8c0540ae;
  R(0)=0xdbu;
  ST8(R(14)+R(0),R(8));
L8c0540ae:;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0540d8;
  R(0)=0xdau;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0540d8;
  R(3)=0x8c084198u;
  { c->pr=0x8c0540c4u; R(4)=R(12); f_8c084198(c); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c0540d8;
  R(0)=0xdbu;
  R(4)=R(11);
  ST8(R(14)+R(0),R(8));
  R(0)+=0xffffffa9u;
  ST16(R(14)+R(0),R(4));
  R(0)+=0x4cu;
  { ST32(R(14)+R(0),R(4)); goto L8c0540de; }
L8c0540d8:;
  R(0)=0x84u;
  R(4)=R(10);
  ST16(R(14)+R(0),R(4));
L8c0540de:;
  R(4)=(int32_t)(int16_t)LD16(R(13));
  R(3)=LD32(R(15));
  R(4)=R(4)&0xFFFF;
  R(0)=0x9fu;
  c->t=R(3)==R(4);
  R(4)=c->t;
  ST8(R(14)+R(0),R(4));
  R(0)+=0xffffffe7u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  ST8(R(15),R(3));
  R(1)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c054112;
  R(0)=0x84u;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c054112;
  R(3)=0x8c084198u;
  { c->pr=0x8c054108u; R(4)=R(12); f_8c084198(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c054112;
  R(0)=0x9eu;
  R(4)=R(8);
  ST8(R(14)+R(0),R(4));
L8c054112:;
  R(0)=0xdau;
  ST8(R(14)+R(0),R(11));
  R(0)=0x6cu;
  R(4)=LD32(R(9)+R(0));
  R(0)+=0x68u;
  ST32(R(14)+R(0),R(4));
L8c05411e:;
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
void f_8c054160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c2d14f0u;
  R(13)=0x8c014ea0u;
  R(11)=0xd068u;
L8c054172:;
  R(4)=LD32(R(12));
  { uint32_t tg=R(13); c->pr=0x8c054178u; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(12));
  R(14)+=0x68u;
  { uint32_t tg=R(13); c->pr=0x8c054180u; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(12));
  R(14)+=0x68u;
  { uint32_t tg=R(13); c->pr=0x8c054188u; R(4)+=R(14); sh4_call(c,tg); }
  R(14)+=0x68u;
  c->t=R(14)>=R(11);
  if(!c->t) goto L8c054172;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05419a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=0xd068u;
  R(3)=0x8c0199c4u;
  R(6)=0x48du;
  R(5)=0x8c0ba25cu;
  { c->pr=0x8c0541a8u;  f_8c0199c4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c2d14f0u;
  { ST32(R(2),R(0)); return; }
}
void f_8c0541b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2d14f0u;
  R(2)=0x8c2d10e4u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=0x400u;
  R(4)=0x8c2d10e8u;
  R(1)=0x8c076d08u;
  R(13)=LD32(R(3));
  R(14)=LD32(R(2));
  R(12)=0x9048u;
  { c->pr=0x8c0541ccu; R(12)+=R(14); f_8c076d08(c); }
  c->t=R(14)==R(12);
  if(c->t) goto L8c0541da;
L8c0541d0:;
  ST32(R(14)+32,R(13));
  R(14)+=0x48u;
  c->t=R(14)==R(12);
  { uint32_t k=!c->t; R(13)+=0x68u; if(k) goto L8c0541d0; }
L8c0541da:;
  R(2)=0x8c2d14ecu;
  R(4)=0x0u;
  R(3)=0x8c2d14e8u;
  ST32(R(3),R(4));
  ST32(R(2),R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c054240(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c064920u;
  R(4)=0x201u;
  { c->pr=0x8c05424au;  f_8c064920(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c2d10e4u;
  { ST32(R(2),R(0)); return; }
}
void f_8c054252(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c054258u;  f_8c054160(c); }
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0541b0(c); return; } }
}
void f_8c05425c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=0xd068u;
  R(3)=0x8c0199c4u;
  R(6)=0x48du;
  R(5)=0x8c0ba25cu;
  { c->pr=0x8c05426au;  f_8c0199c4(c); }
  R(3)=0x8c064920u;
  R(4)=0x201u;
  R(2)=0x8c2d14f0u;
  { c->pr=0x8c054274u; ST32(R(2),R(0)); f_8c064920(c); }
  R(2)=0x8c2d10e4u;
  { c->pr=0x8c05427au; ST32(R(2),R(0)); f_8c054160(c); }
  { c->pr=0x8c05427eu;  f_8c0541b0(c); }
  R(3)=0x8c2d10dcu;
  R(4)=0x0u;
  R(2)=0x8c2d10e0u;
  ST32(R(3),R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { ST32(R(2),R(4)); return; }
}
void f_8c05428c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(7)=0x8c2d14ecu;
  R(6)=0x200u;
  R(3)=LD32(R(7));
  R(3)+=0x1u;
  R(2)=R(3);
  c->t=R(2)>=R(6);
  ST32(R(7),R(3));
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c054300; }
  R(1)=0x8c2d10e4u;
  R(6)=0x9000u;
  R(4)=LD32(R(1));
  R(6)+=R(4);
  { R(4)=R(6); goto L8c05434a; }
L8c054300:;
  R(4)=0x8c2d14e8u;
  R(14)=0x8c2d10e8u;
  R(0)=LD32(R(4));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05432a;
L8c054310:;
  R(1)=LD32(R(4));
  R(1)+=0x1u;
  R(3)=R(1);
  c->t=R(3)==R(6);
  { uint32_t k=!c->t; ST32(R(4),R(1)); if(k) goto L8c05431e; }
  ST32(R(4),R(5));
L8c05431e:;
  R(0)=LD32(R(4));
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c054310;
L8c05432a:;
  R(0)=LD32(R(4));
  R(3)=0x1u;
  R(2)=0x8c2d10e4u;
  c->t=R(0)>>31;R(0)<<=1;
  ST16(R(14)+R(0),R(3));
  R(6)=LD32(R(4));
  R(4)=LD32(R(2));
  R(3)=R(6);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(4);
  R(4)=R(6);
  ST32(R(15),R(6));
L8c05434a:;
  R(6)=R(4);
  R(3)=0xffffffffu;
  ST32(R(15),R(3));
  ST32(R(6)+44,R(3));
  R(3)=R(4);
  R(6)=R(5);
  ST32(R(15),R(4));
  ST32(R(3)+48,R(6));
  R(6)=0x8c2d10dcu;
  R(3)=LD32(R(7));
  R(2)=LD32(R(6));
  c->t=R(2)>=R(3);
  if(c->t) goto L8c05436a;
  R(0)=LD32(R(6));
  R(0)+=0x1u;
  ST32(R(6),R(0));
L8c05436a:;
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c054376;
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c054376:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c054382;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c054382:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0543ac;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c05439e;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c05439e:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0543ac;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c0543ac:;
  R(2)=0x1u;
  R(0)=R(4);
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(5));
  ST32(R(4),R(2));
  ST32(R(4)+4,R(5));
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0543c0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c2d10e4u;
  R(5)=0x9000u;
  R(3)=LD32(R(2));
  R(5)+=R(3);
  ST32(R(15),R(3));
  c->t=R(4)==R(5);
  if(c->t) goto L8c0543ea;
  R(2)=LD32(R(15));
  R(3)=0x8c067940u;
  R(4)-=R(2);
  R(1)=R(4);
  { c->pr=0x8c0543deu; R(0)=0x48u; f_8c067940(c); }
  R(2)=R(0);
  ST32(R(15)+4,R(0));
  R(0)=0x8c2d10e8u;
  R(3)=0x0u;
  c->t=R(2)>>31;R(2)<<=1;
  ST16(R(2)+R(0),R(3));
L8c0543ea:;
  R(4)=0x8c2d14ecu;
  R(2)=LD32(R(4));
  R(2)+=0xffffffffu;
  ST32(R(4),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c054420(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=0x38u;
  R(5)=R(4);
  fp_ld(c,0,R(0)+R(5));
  R(6)=0x8u;
  R(0)=LD32(R(4)+44);
  R(3)=LD32(R(4)+4);
  R(0)&=R(6);
  R(2)=LD32(R(3));
  c->t=(int32_t)R(0)==8;
  R(0)=0xa8u;
  R(5)=c->t;
  R(7)=R(2);
  ST32(R(15),R(2));
  R(7)=LD32(R(7)+R(0));
  { R(4)=R(7); goto L8c054460; }
L8c054442:;
  R(1)=LD32(R(4));
  R(7)=0x10000u;
  R(0)=LD32(R(1)+48);
  R(0)&=R(7);
  c->t=R(0)==R(7);
  if(c->t) goto L8c05445e;
  R(3)=R(5)&0xFF;
  c->t=(R(3)&R(3))==0;
  R(0)=0x38u;
  { uint32_t k=c->t; fp_st(c,0,R(0)+R(1)); if(k) goto L8c05445e; }
  R(7)=LD32(R(1)+44);
  R(7)|=R(6);
  ST32(R(1)+44,R(7));
L8c05445e:;
  R(4)=LD32(R(4)+8);
L8c054460:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c054442;
  { R(15)+=0x4u; return; }
}
void f_8c0544a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=0xa0u;
  R(14)=0xacu;
  ST32(R(15)+4,R(4));
  R(3)=0x8c082160u;
  ST32(R(15)+8,R(5));
  ST16(R(15),R(6));
  R(9)=LD32(R(15)+4);
  R(7)=(int32_t)(int16_t)LD16(R(15));
  R(9)=LD32(R(9)+4);
  R(6)=LD32(R(15)+8);
  R(9)=LD32(R(9));
  R(8)=LD32(R(9)+R(0));
  R(0)+=0xffffffecu;
  R(4)=LD32(R(9)+R(0));
  R(14)+=R(9);
  R(5)=R(14);
  R(13)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c0544d8u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(0)=0xa8u;
  R(2)=LD32(R(14));
  ST32(R(15),R(2));
  R(3)=LD32(R(9)+R(0));
  R(7)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(6)=0x1u; if(k) goto L8c054518; }
  R(0)=0xa4u;
  R(4)=0x0u;
  R(2)=R(4);
  R(3)=LD32(R(9)+R(0));
  c->t=R(2)>=R(3);
  if(c->t) goto L8c054518;
L8c0544f4:;
  R(5)=R(4);
  R(5)<<=2;
  R(3)=R(4);
  R(5)+=R(3);
  R(5)<<=2;
  R(0)=0x11u;
  R(5)+=R(8);
  R(2)=0x0u;
  R(3)=R(2);
  R(4)+=0x1u;
  ST32(R(5)+12,R(2));
  ST8(R(5)+R(0),R(6));
  R(0)=0x10u;
  ST8(R(5)+R(0),R(3));
  R(0)=0xa4u;
  R(3)=LD32(R(9)+R(0));
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c0544f4;
L8c054518:;
  c->t=R(13)==R(7);
  if(c->t) goto L8c0545aa;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+12,R(6)); if(k) goto L8c054546; }
  R(0)=0x90u;
  R(5)=(int32_t)(int16_t)LD16(R(9)+R(0));
  R(5)=R(5)&0xFFFF;
  { R(4)=R(5); goto L8c054540; }
L8c05452c:;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(1)=0x0u;
  R(13)+=0x4u;
  R(3)=R(3)&0xFFFF;
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(8);
  ST32(R(3)+12,R(1));
L8c054540:;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(4)+=0xffffffffu; if(k) goto L8c05452c; }
L8c054546:;
  R(0)=0x8cu;
  R(5)=R(7);
  R(4)=LD32(R(14)+12);
  ST32(R(9)+R(0),R(7));
  R(0)+=0x4u;
  R(5)=R(4);
  { ST16(R(9)+R(0),R(5)); goto L8c0545a0; }
L8c054580:;
  R(2)=(int32_t)(int16_t)LD16(R(7));
  R(0)=(int32_t)(int16_t)LD16(R(7)+2);
  R(7)+=0x4u;
  R(2)=R(2)&0xFFFF;
  R(3)=R(2);
  R(2)<<=2;
  R(0)=R(0)&0xFFFF;
  R(2)+=R(3);
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(2)<<=2;
  R(0)+=R(8);
  R(2)+=R(8);
  ST32(R(2)+12,R(0));
L8c0545a0:;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(4)+=0xffffffffu; if(k) goto L8c054580; }
  {  goto L8c0545ae; }
L8c0545aa:;
  R(3)=0x0u;
  ST32(R(15)+12,R(3));
L8c0545ae:;
  R(10)=LD32(R(15)+8);
  R(2)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(10)+3);
  R(11)=0xffu;
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(10)=R(0);
  R(3)<<=2;
  c->t=R(10)>>31;R(10)<<=1;
  R(10)+=R(3);
  R(10)+=R(2);
  c->t=R(2)==R(10);
  if(c->t) goto L8c0545d0;
  R(0)=(int32_t)(int8_t)LD8(R(2)+3);
  R(4)=R(0)&0xFF;
  c->t=R(4)==R(11);
  if(!c->t) goto L8c0545d4;
L8c0545d0:;
  { R(13)=0x0u; goto L8c0545e0; }
L8c0545d4:;
  R(13)=R(4);
  R(13)<<=2;
  R(3)=R(4);
  R(13)+=R(3);
  R(13)<<=2;
  R(13)+=R(8);
L8c0545e0:;
  R(0)=0xa8u;
  R(4)=LD32(R(9)+R(0));
  R(14)=R(4);
  { R(12)=0x0u; goto L8c0549bc; }
L8c054620:;
  c->t=R(13)==R(14);
  if(c->t) goto L8c054628;
  {  goto L8c05474c; }
L8c054628:;
  R(2)=LD32(R(15)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054720;
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0546b2;
  R(3)=LD32(R(14)+12);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c054646;
  R(2)=LD32(R(14)+12);
  { c->pr=0x8c054642u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c05428c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  ST32(R(1),R(0));
L8c054646:;
  R(4)=LD32(R(14));
  R(5)=LD32(R(14)+12);
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(5)); if(k) goto L8c054658; }
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c054658:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c054664;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c054664:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05468e;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c054680;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c054680:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c05468e;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c05468e:;
  R(2)=0x0u;
  R(3)=R(2);
  ST32(R(4)+20,R(2));
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(3));
  ST32(R(4)+20,R(3));
  R(2)=LD32(R(5)+12);
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(5));
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0546aa;
  { ST32(R(5)+8,R(4)); goto L8c054718; }
L8c0546aa:;
  R(2)=LD32(R(5)+12);
  ST32(R(2)+20,R(4));
  {  goto L8c054718; }
L8c0546b2:;
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(15)+4); if(k) goto L8c0546c2; }
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c0546c2:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0546ce;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c0546ce:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0546f8;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0546ea;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c0546ea:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0546f8;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c0546f8:;
  R(2)=0x0u;
  R(3)=R(2);
  ST32(R(4)+20,R(2));
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(3));
  ST32(R(4)+20,R(3));
  R(2)=LD32(R(5)+12);
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(5));
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c054714;
  { ST32(R(5)+8,R(4)); goto L8c054718; }
L8c054714:;
  R(2)=LD32(R(5)+12);
  ST32(R(2)+20,R(4));
L8c054718:;
  ST32(R(5)+12,R(4));
  R(3)=LD32(R(5)+16);
  R(3)+=0x1u;
  ST32(R(5)+16,R(3));
L8c054720:;
  R(2)=LD32(R(15));
  R(12)=R(14);
  R(14)=LD32(R(14)+8);
  R(2)+=0x6u;
  c->t=R(2)==R(10);
  { uint32_t k=!c->t; ST32(R(15),R(2)); if(k) goto L8c054732; }
  {  goto L8c054888; }
L8c054732:;
  R(0)=(int32_t)(int8_t)LD8(R(2)+3);
  R(4)=R(0)&0xFF;
  c->t=R(4)==R(11);
  if(!c->t) goto L8c05473e;
  {  goto L8c054888; }
L8c05473e:;
  R(13)=R(4);
  R(13)<<=2;
  R(3)=R(4);
  R(13)+=R(3);
  R(13)<<=2;
  { R(13)+=R(8); goto L8c0549bc; }
L8c05474c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c054760;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c054758;
  {  goto L8c0548cc; }
L8c054758:;
  c->t=R(14)>R(13);
  if(c->t) goto L8c054760;
  {  goto L8c0548c0; }
L8c054760:;
  R(3)=LD32(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05476c;
  { c->pr=0x8c05476au;  f_8c05428c(c); }
  ST32(R(13),R(0));
L8c05476c:;
  R(2)=LD32(R(13)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0547f0;
  R(3)=LD32(R(13)+12);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c054784;
  R(2)=LD32(R(13)+12);
  { c->pr=0x8c054780u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c05428c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  ST32(R(1),R(0));
L8c054784:;
  R(4)=LD32(R(13));
  R(5)=LD32(R(13)+12);
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(5)); if(k) goto L8c054796; }
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c054796:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0547a2;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c0547a2:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0547cc;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0547be;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c0547be:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0547cc;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c0547cc:;
  R(2)=0x0u;
  R(3)=R(2);
  ST32(R(4)+20,R(2));
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(3));
  ST32(R(4)+20,R(3));
  R(2)=LD32(R(5)+12);
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(5));
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0547e8;
  { ST32(R(5)+8,R(4)); goto L8c054856; }
L8c0547e8:;
  R(2)=LD32(R(5)+12);
  ST32(R(2)+20,R(4));
  {  goto L8c054856; }
L8c0547f0:;
  R(4)=LD32(R(13));
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=LD32(R(15)+4); if(k) goto L8c054800; }
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c054800:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05480c;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c05480c:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c054836;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c054828;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c054828:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c054836;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c054836:;
  R(2)=0x0u;
  R(3)=R(2);
  ST32(R(4)+20,R(2));
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(3));
  ST32(R(4)+20,R(3));
  R(2)=LD32(R(5)+12);
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(5));
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c054852;
  { ST32(R(5)+8,R(4)); goto L8c054856; }
L8c054852:;
  R(2)=LD32(R(5)+12);
  ST32(R(2)+20,R(4));
L8c054856:;
  c->t=(R(12)&R(12))==0;
  ST32(R(5)+12,R(4));
  R(3)=LD32(R(5)+16);
  R(3)+=0x1u;
  { uint32_t k=c->t; ST32(R(5)+16,R(3)); if(k) goto L8c05486a; }
  R(1)=LD32(R(12)+8);
  ST32(R(13)+8,R(1));
  { ST32(R(12)+8,R(13)); goto L8c054874; }
L8c05486a:;
  R(0)=0xa8u;
  R(4)=LD32(R(9)+R(0));
  ST32(R(13)+8,R(4));
  R(4)=R(13);
  ST32(R(9)+R(0),R(13));
L8c054874:;
  R(3)=LD32(R(15));
  R(12)=R(13);
  R(3)+=0x6u;
  c->t=R(3)==R(10);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c054888; }
  R(0)=(int32_t)(int8_t)LD8(R(3)+3);
  R(4)=R(0)&0xFF;
  c->t=R(4)==R(11);
  if(!c->t) goto L8c05488c;
L8c054888:;
  { R(13)=0x0u; goto L8c0549bc; }
L8c05488c:;
  R(13)=R(4);
  R(13)<<=2;
  R(3)=R(4);
  R(13)+=R(3);
  R(13)<<=2;
  { R(13)+=R(8); goto L8c0549bc; }
L8c0548c0:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0548cc;
  c->t=R(14)>=R(13);
  if(!c->t) goto L8c0548cc;
  {  goto L8c0549bc; }
L8c0548cc:;
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05493e;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0548e2;
  R(4)=LD32(R(14)+4);
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c0548e2:;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0548f2;
  R(4)=LD32(R(14)+4);
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c0548f2:;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054928;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(2)+28);
  R(1)=LD32(R(3)+16);
  R(1)+=0xffffffffu;
  ST32(R(3)+16,R(1));
  R(4)=LD32(R(14)+4);
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c054916;
  R(4)=LD32(R(14)+4);
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(4)+28);
  ST32(R(2)+8,R(3));
L8c054916:;
  R(4)=LD32(R(14)+4);
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c054928;
  R(4)=LD32(R(14)+4);
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+28);
  ST32(R(3)+12,R(2));
L8c054928:;
  R(3)=LD32(R(14)+4);
  R(2)=0x0u;
  ST32(R(3)+20,R(2));
  R(3)=LD32(R(14)+4);
  ST32(R(3)+24,R(2));
  R(3)=LD32(R(14)+4);
  ST32(R(3)+28,R(2));
  { c->pr=0x8c05493au; R(4)=LD32(R(14)+4); f_8c0543c0(c); }
  R(2)=0x0u;
  ST32(R(14)+4,R(2));
L8c05493e:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05494e;
  R(4)=LD32(R(14));
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c05494e:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05495e;
  R(4)=LD32(R(14));
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c05495e:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054994;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+28);
  R(1)=LD32(R(3)+16);
  R(1)+=0xffffffffu;
  ST32(R(3)+16,R(1));
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c054982;
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(4)+28);
  ST32(R(2)+8,R(3));
L8c054982:;
  R(4)=LD32(R(14));
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c054994;
  R(4)=LD32(R(14));
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+28);
  ST32(R(3)+12,R(2));
L8c054994:;
  R(3)=LD32(R(14));
  R(2)=0x0u;
  ST32(R(3)+20,R(2));
  R(3)=LD32(R(14));
  ST32(R(3)+24,R(2));
  R(3)=LD32(R(14));
  ST32(R(3)+28,R(2));
  { c->pr=0x8c0549a6u; R(4)=LD32(R(14)); f_8c0543c0(c); }
  c->t=(R(12)&R(12))==0;
  R(2)=0x0u;
  { uint32_t k=c->t; ST32(R(14),R(2)); if(k) goto L8c0549b4; }
  R(1)=LD32(R(14)+8);
  { ST32(R(12)+8,R(1)); goto L8c0549ba; }
L8c0549b4:;
  R(0)=0xa8u;
  R(4)=LD32(R(14)+8);
  ST32(R(9)+R(0),R(4));
L8c0549ba:;
  R(14)=LD32(R(14)+8);
L8c0549bc:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0549c4;
  {  goto L8c054620; }
L8c0549c4:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0549cc;
  {  goto L8c054620; }
L8c0549cc:;
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
void f_8c054a00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(5)&R(5))==0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(10)=R(13); if(k) goto L8c054a1e; }
  {  goto L8c054bd4; }
L8c054a1e:;
  R(12)=LD32(R(5));
  R(2)=LD32(R(12)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054a2a;
  R(10)=LD32(R(12)+4);
  R(10)=LD32(R(10));
L8c054a2a:;
  R(0)=0xa8u;
  R(4)=LD32(R(12)+R(0));
  R(0)+=0xfffffff8u;
  R(8)=LD32(R(12)+R(0));
  R(0)+=0x8u;
  R(2)=LD32(R(12)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(14)=R(4); if(k) goto L8c054a40; }
  {  goto L8c054b8c; }
L8c054a40:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(9)=0x14u; if(k) goto L8c054a4a; }
  {  goto L8c054b8c; }
L8c054a4a:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c054a78;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c054a78;
  R(2)=LD32(R(10)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054a78;
  R(3)=LD32(R(11)+4);
  R(0)=0xc8u;
  R(2)=LD32(R(3));
  R(1)=LD32(R(2)+R(0));
  R(3)=LD32(R(1)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c054a78;
  R(3)=0x8c067940u;
  R(1)=R(14);
  R(1)-=R(8);
  { c->pr=0x8c054a70u; R(0)=R(9); f_8c067940(c); }
  R(2)=0x8c05d0cau;
  R(5)=R(0);
  { c->pr=0x8c054a78u; R(4)=R(11); f_8c05d0ca(c); }
L8c054a78:;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c054ae6;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054a8e;
  R(4)=LD32(R(14)+4);
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c054a8e:;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054a9e;
  R(4)=LD32(R(14)+4);
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c054a9e:;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054ad4;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(2)+28);
  R(1)=LD32(R(3)+16);
  R(1)+=0xffffffffu;
  ST32(R(3)+16,R(1));
  R(4)=LD32(R(14)+4);
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c054ac2;
  R(4)=LD32(R(14)+4);
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(4)+28);
  ST32(R(2)+8,R(3));
L8c054ac2:;
  R(4)=LD32(R(14)+4);
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c054ad4;
  R(4)=LD32(R(14)+4);
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+28);
  ST32(R(3)+12,R(2));
L8c054ad4:;
  R(3)=LD32(R(14)+4);
  ST32(R(3)+20,R(13));
  R(2)=LD32(R(14)+4);
  ST32(R(2)+24,R(13));
  R(3)=LD32(R(14)+4);
  ST32(R(3)+28,R(13));
  { c->pr=0x8c054ae4u; R(4)=LD32(R(14)+4); f_8c0543c0(c); }
  ST32(R(14)+4,R(13));
L8c054ae6:;
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c054b82;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054afc;
  R(4)=LD32(R(14));
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c054afc:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c054b0c;
  R(4)=LD32(R(14));
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c054b0c:;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  {  goto L8c054b40; }
L8c054b40:;
  if(c->t) goto L8c054b70;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+28);
  R(1)=LD32(R(3)+16);
  R(1)+=0xffffffffu;
  ST32(R(3)+16,R(1));
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c054b5e;
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(4)+28);
  ST32(R(2)+8,R(3));
L8c054b5e:;
  R(4)=LD32(R(14));
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c054b70;
  R(4)=LD32(R(14));
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+28);
  ST32(R(3)+12,R(2));
L8c054b70:;
  R(3)=LD32(R(14));
  ST32(R(3)+20,R(13));
  R(2)=LD32(R(14));
  ST32(R(2)+24,R(13));
  R(3)=LD32(R(14));
  ST32(R(3)+28,R(13));
  { c->pr=0x8c054b80u; R(4)=LD32(R(14)); f_8c0543c0(c); }
  ST32(R(14),R(13));
L8c054b82:;
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c054b8c;
  {  goto L8c054a4a; }
L8c054b8c:;
  R(0)=0xdbu;
  c->t=(R(11)&R(11))==0;
  { uint32_t k=c->t; ST8(R(12)+R(0),R(13)); if(k) goto L8c054b9e; }
  R(2)=0x8c083800u;
  R(5)=0x0u;
  R(6)=0x1u;
  { c->pr=0x8c054b9eu; R(4)=R(11); f_8c083800(c); }
L8c054b9e:;
  R(0)=0xa8u;
  R(4)=R(13);
  ST32(R(12)+R(0),R(13));
  R(0)+=0x18u;
  ST32(R(12)+R(0),R(4));
  R(0)+=0xfffffff0u;
  R(3)=LD32(R(12)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c054bc0;
  R(4)=0xb0u;
  R(3)=0x8c064eb8u;
  R(6)=0x70eu;
  R(5)=0x8c0ba25cu;
  { c->pr=0x8c054bbcu; R(4)+=R(12); f_8c064eb8(c); }
  R(0)=0xb0u;
  ST32(R(12)+R(0),R(13));
L8c054bc0:;
  R(0)=0x8cu;
  R(4)=R(13);
  ST32(R(12)+R(0),R(13));
  R(0)+=0x4u;
  ST16(R(12)+R(0),R(4));
  R(0)+=0x61u;
  R(4)=0x1u;
  ST8(R(12)+R(0),R(4));
  R(0)+=0xffffffeau;
  ST8(R(12)+R(0),R(13));
L8c054bd4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c054be6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c05689eu;
  { c->pr=0x8c054bf2u; ST32(R(15),R(4)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c054c08;
  R(14)=LD32(R(15));
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c054c08;
L8c054bfe:;
  { c->pr=0x8c054c02u; R(4)=R(14); f_8c054c40(c); }
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c054bfe;
L8c054c08:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c054c40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x9u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(13));
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c054c6c;
  R(5)=LD32(R(13)+28);
  R(2)=0x8c0156cau;
  R(5)=LD32(R(5)+36);
  R(6)=LD32(R(13)+32);
  { c->pr=0x8c054c5cu; R(4)=LD32(R(13)+36); f_8c0156ca(c); }
  R(14)=LD32(R(13)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c054c6c;
L8c054c62:;
  { c->pr=0x8c054c66u; R(4)=R(14); f_8c054c40(c); }
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c054c62;
L8c054c6c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c054c74(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(9)=R(4);
  R(11)=R(5);
  R(0)=R(7);
  ST8(R(15)+4,R(0));
  R(14)=LD32(R(9)+4);
  R(14)=LD32(R(14));
  R(4)=LD32(R(14)+8);
  c->t=R(11)==R(4);
  if(!c->t) goto L8c054ca2;
  R(6)=R(6)&0xFF;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c054ca2;
  {  goto L8c054e32; }
L8c054ca2:;
  R(0)=0x28u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(10)=0x0u; if(k) goto L8c054d0e; }
  R(3)=0x8c08422au;
  R(5)=R(11);
  R(0)=0x98u;
  { c->pr=0x8c054cb6u; R(4)=LD32(R(14)+R(0)); f_8c08422a(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c054d04;
  R(3)=0x8c084284u;
  R(5)=R(11);
  R(0)=0x98u;
  { c->pr=0x8c054cc6u; R(4)=LD32(R(14)+R(0)); f_8c084284(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c054cd8;
  R(0)=0x98u;
  R(1)=0x1eu;
  R(0)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c054d00;
L8c054cd8:;
  { R(0)=0x0u; goto L8c054e34; }
L8c054d00:;
  { R(13)=R(11); goto L8c054d12; }
L8c054d04:;
  R(2)=0x8c084218u;
  { c->pr=0x8c054d0au; R(4)=R(12); f_8c084218(c); }
  { R(13)=R(0); goto L8c054d12; }
L8c054d0e:;
  R(12)=R(10);
  R(13)=R(11);
L8c054d12:;
  R(2)=0x8c053020u;
  { c->pr=0x8c054d18u; R(4)=R(9); f_8c053020(c); }
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c054de0;
  R(2)=0x8c084220u;
  { c->pr=0x8c054d22u; R(4)=R(12); f_8c084220(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c054de0;
  R(4)=LD32(R(13));
  R(0)=0x84u;
  R(4)=(int32_t)(int16_t)LD16(R(4));
  R(12)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(4)&0xFFFF;
  R(0)=LD32(R(14)+4);
  R(12)=R(12)&0xFFFF;
  R(3)=0x8c0679f4u;
  c->macl=R(12)*R(4);
  R(0)=LD32(R(0));
  R(0)=(int32_t)(int16_t)LD16(R(0));
  R(12)=c->macl;
  R(0)=R(0)&0xFFFF;
  { c->pr=0x8c054d46u; R(1)=R(12); f_8c0679f4(c); }
  R(12)=R(0);
  c->t=R(12)>=R(4);
  if(!c->t) goto L8c054d54;
  R(12)=LD32(R(13));
  R(12)=(int32_t)(int16_t)LD16(R(12));
  R(12)=R(12)&0xFFFF;
  R(12)+=0xffffffffu;
L8c054d54:;
  R(2)=0x8c123b74u;
  R(0)=0xccu;
  R(5)=LD32(R(2));
  R(4)=LD32(R(14)+R(0));
  R(3)=R(5);
  R(1)=LD32(R(13));
  R(3)-=R(4);
  R(0)=LD32(R(14)+4);
  R(4)=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  R(0)=LD32(R(0));
  R(3)=R(3)&0xFFFF;
  c->macl=R(4)*R(3);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  R(3)=0x8c0679f4u;
  R(0)=R(0)&0xFFFF;
  R(4)=c->macl;
  { c->pr=0x8c054d7au; R(1)=R(4); f_8c0679f4(c); }
  R(4)=R(0);
  R(0)=0xccu;
  R(1)=R(5);
  R(1)-=R(4);
  ST32(R(14)+R(0),R(1));
  R(4)=R(1);
  R(1)=0x3e8u;
  R(0)+=0xffffffd0u;
  R(4)=R(12);
  ST16(R(14)+R(0),R(4));
  c->macl=R(12)*R(1);
  R(0)+=0x3cu;
  ST16(R(14)+R(0),R(4));
  R(0)+=0xfffffff4u;
  R(3)=LD32(R(14)+R(0));
  R(1)=c->macl;
  ST32(R(15),R(3));
  R(3)=0x8c0841b8u;
  R(8)=R(1);
  { c->pr=0x8c054da4u; R(4)=R(13); f_8c0841b8(c); }
  R(3)=0x8c0679f4u;
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  { c->pr=0x8c054dacu; R(1)=R(8); f_8c0679f4(c); }
  R(4)=LD32(R(15));
  R(4)+=R(0);
  R(0)=0xd4u;
  {  goto L8c054df0; }
L8c054de0:;
  R(0)=0xd0u;
  R(4)=R(10);
  R(3)=0x8c123b74u;
  ST32(R(14)+R(0),R(10));
  R(0)+=0xffffffb4u;
  ST16(R(14)+R(0),R(4));
  R(0)+=0x50u;
  R(4)=LD32(R(3));
L8c054df0:;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x7u;
  ST8(R(14)+R(0),R(10));
  R(5)=0x0u;
  R(0)=0xeeu;
  R(4)=0xffffu;
  ST16(R(14)+R(0),R(4));
  R(0)+=0xffffffa6u;
  R(4)=LD32(R(14)+4);
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x59u;
  R(4)=R(13);
  ST32(R(14)+8,R(11));
  R(4)=R(11);
  R(4)=0x1u;
  ST8(R(14)+R(0),R(4));
  R(0)+=0xffffffabu;
  R(2)=LD32(R(13));
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(4)=R(4)&0xFFFF;
  R(0)=0x9fu;
  R(3)=R(3)&0xFFFF;
  c->t=R(4)==R(3);
  R(3)=0x8c053b54u;
  R(4)=c->t;
  ST8(R(14)+R(0),R(4));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(6)=R(0);
  { c->pr=0x8c054e32u; R(4)=R(9); f_8c053b54(c); }
L8c054e32:;
  R(0)=0x1u;
L8c054e34:;
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
void f_8c054e48(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  ST32(R(15)+4,R(4));
  R(14)=LD32(R(14)+4);
  R(12)=0x0u;
  R(13)=R(5);
  R(14)=LD32(R(14));
  ST32(R(15),R(12));
  R(4)=LD32(R(14)+8);
  c->t=R(13)==R(4);
  if(c->t) goto L8c054f26;
  R(3)=0x8c08422au;
  R(5)=R(13);
  R(0)=0x98u;
  { c->pr=0x8c054e70u; R(4)=LD32(R(14)+R(0)); f_8c08422a(c); }
  R(2)=LD32(R(15));
  R(4)=R(0);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c054ec0;
  R(3)=0x8c084284u;
  R(5)=R(13);
  R(0)=0x98u;
  { c->pr=0x8c054e82u; R(4)=LD32(R(14)+R(0)); f_8c084284(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c054e94;
  R(0)=0x98u;
  R(1)=0x1eu;
  R(0)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c054e98;
L8c054e94:;
  { R(0)=0x0u; goto L8c054f28; }
L8c054e98:;
  { R(5)=R(13); goto L8c054ec8; }
L8c054ec0:;
  R(2)=0x8c084218u;
  { c->pr=0x8c054ec6u;  f_8c084218(c); }
  R(5)=R(0);
L8c054ec8:;
  R(0)=0xeeu;
  R(4)=0xffffu;
  ST16(R(14)+R(0),R(4));
  R(0)+=0xffffffdeu;
  ST32(R(14)+R(0),R(12));
  R(0)+=0xffffffc8u;
  R(4)=R(12);
  R(4)=LD32(R(14)+4);
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(5));
  R(0)+=0x59u;
  R(4)=R(5);
  R(4)=R(13);
  R(4)=0x1u;
  ST32(R(14)+8,R(13));
  ST8(R(14)+R(0),R(4));
  R(0)+=0xffffffa7u;
  R(3)=LD32(R(14)+R(0));
  R(2)=LD32(R(3));
  R(3)=0x8c05e936u;
  R(5)=R(2);
  ST32(R(15),R(2));
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(5)=R(5)&0xFFFF;
  R(5)+=0xffffffffu;
  { c->pr=0x8c054f00u; R(4)=0x0u; f_8c05e936(c); }
  R(13)=R(0)&0xFF;
  R(0)=0x9cu;
  R(4)=R(13);
  R(4)+=0xffffffffu;
  ST16(R(14)+R(0),R(13));
  R(0)+=0x3cu;
  R(3)=0x8c123b74u;
  R(6)=0x0u;
  ST16(R(14)+R(0),R(4));
  R(0)+=0xfffffff8u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0x4u;
  R(2)=0x8c053b54u;
  R(4)=R(12);
  R(4)=LD32(R(3));
  R(5)=R(6);
  ST32(R(14)+R(0),R(4));
  { c->pr=0x8c054f26u; R(4)=LD32(R(15)+4); f_8c053b54(c); }
L8c054f26:;
  R(0)=0x1u;
L8c054f28:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c054ec0(SH4Ctx *c) {
  R(2)=0x8c084218u;
  { c->pr=0x8c054ec6u;  f_8c084218(c); }
  R(5)=R(0);
  R(0)=0xeeu;
  R(4)=0xffffu;
  ST16(R(14)+R(0),R(4));
  R(0)+=0xffffffdeu;
  ST32(R(14)+R(0),R(12));
  R(0)+=0xffffffc8u;
  R(4)=R(12);
  R(4)=LD32(R(14)+4);
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(5));
  R(0)+=0x59u;
  R(4)=R(5);
  R(4)=R(13);
  R(4)=0x1u;
  ST32(R(14)+8,R(13));
  ST8(R(14)+R(0),R(4));
  R(0)+=0xffffffa7u;
  R(3)=LD32(R(14)+R(0));
  R(2)=LD32(R(3));
  R(3)=0x8c05e936u;
  R(5)=R(2);
  ST32(R(15),R(2));
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(5)=R(5)&0xFFFF;
  R(5)+=0xffffffffu;
  { c->pr=0x8c054f00u; R(4)=0x0u; f_8c05e936(c); }
  R(13)=R(0)&0xFF;
  R(0)=0x9cu;
  R(4)=R(13);
  R(4)+=0xffffffffu;
  ST16(R(14)+R(0),R(13));
  R(0)+=0x3cu;
  R(3)=0x8c123b74u;
  R(6)=0x0u;
  ST16(R(14)+R(0),R(4));
  R(0)+=0xfffffff8u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0x4u;
  R(2)=0x8c053b54u;
  R(4)=R(12);
  R(4)=LD32(R(3));
  R(5)=R(6);
  ST32(R(14)+R(0),R(4));
  { c->pr=0x8c054f26u; R(4)=LD32(R(15)+4); f_8c053b54(c); }
  R(0)=0x1u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c054f34(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xf0u;
  R(2)=0xffff8000u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(14)=LD32(R(14)+4);
  c->t=R(4)==R(2);
  R(14)=LD32(R(14));
  R(5)=LD32(R(14)+4);
  R(12)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(5)=LD32(R(5));
  R(11)=R(12);
  R(5)=(int32_t)(int16_t)LD16(R(5));
  { uint32_t k=!c->t; R(9)=R(5)&0xFFFF; if(k) goto L8c054f72; }
  R(1)=0x8c05e936u;
  R(5)=R(9);
  R(5)+=0xffffffffu;
  { c->pr=0x8c054f6eu; R(4)=0x0u; f_8c05e936(c); }
  { R(13)=R(0); goto L8c054fa8; }
L8c054f72:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c054fa0;
  { R(13)=R(10); goto L8c054fa8; }
L8c054fa0:;
  c->t=(int32_t)R(4)>=(int32_t)R(9);
  if(!c->t) goto L8c054fa8;
  R(13)=R(5);
  R(13)+=0xffffffffu;
L8c054fa8:;
  R(0)=0x9cu;
  R(4)=R(13);
  R(3)=R(12)&0xFF;
  ST16(R(14)+R(0),R(4));
  R(0)+=0x3cu;
  R(4)+=0xffffffffu;
  ST16(R(14)+R(0),R(4));
  R(0)+=0x19u;
  R(4)=0x1u;
  ST8(R(14)+R(0),R(4));
  R(0)+=0xffffffa7u;
  R(4)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x7u;
  R(4)=R(10);
  ST8(R(14)+R(0),R(4));
  R(0)+=0xffffffffu;
  { uint32_t k=!c->t; ST8(R(14)+R(0),R(4)); if(k) goto L8c054fe0; }
  R(2)=0x8c0841b8u;
  { c->pr=0x8c054fd6u; R(4)=LD32(R(14)+4); f_8c0841b8(c); }
  R(3)=0x8c043806u;
  R(5)=R(0);
  R(11)=R(0);
  { c->pr=0x8c054fe0u; R(4)=R(14); f_8c043806(c); }
L8c054fe0:;
  R(1)=0x3e8u;
  R(5)=R(11)&0xFF;
  R(3)=0x8c067940u;
  c->macl=(uint32_t)((int32_t)(int16_t)R(13)*(int32_t)(int16_t)R(1));
  R(6)=0x8c123b08u;
  R(1)=c->macl;
  { c->pr=0x8c054ff0u; R(0)=R(5); f_8c067940(c); }
  R(4)=0x6cu;
  R(1)=0x3e8u;
  R(4)+=R(6);
  R(3)=0x8c067940u;
  R(4)=LD32(R(4));
  R(4)-=R(0);
  R(0)=0xccu;
  ST32(R(14)+R(0),R(4));
  { c->pr=0x8c055004u; R(0)=R(5); f_8c067940(c); }
  R(4)=0x6cu;
  R(3)=0x8c053b54u;
  R(4)+=R(6);
  R(4)=LD32(R(4));
  R(6)=0x0u;
  R(5)=R(6);
  R(4)-=R(0);
  R(0)=0xd4u;
  ST32(R(14)+R(0),R(4));
  { c->pr=0x8c05501au; R(4)=LD32(R(15)); f_8c053b54(c); }
  R(4)=R(14);
  R(5)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c043806u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c043806(c); return; } }
}
void f_8c055032(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3));
  R(0)=LD32(R(4)+4);
  R(0)=LD32(R(0));
  { R(0)=(int32_t)(int16_t)LD16(R(0)); return; }
}
void f_8c05503e(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0x84u;
  R(4)=LD32(R(3));
  { R(0)=(int32_t)(int16_t)LD16(R(4)+R(0)); return; }
}
void f_8c055080(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(12)+4);
  R(14)=LD32(R(14));
  R(3)=LD32(R(14)+20);
  R(2)=LD32(R(3)+16);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(13)=R(5); if(k) goto L8c05509c; }
  { R(0)=0x0u; goto L8c0550e2; }
L8c05509c:;
  R(0)=0x9eu;
  R(4)=0x0u;
  R(5)=R(4);
  R(3)=0x8c058aeeu;
  ST8(R(14)+R(0),R(5));
  R(0)+=0x53u;
  R(5)=0x1u;
  ST8(R(14)+R(0),R(5));
  R(0)+=0xffffff93u;
  R(5)=R(4);
  ST16(R(14)+R(0),R(5));
  R(0)+=0x54u;
  R(4)=R(13);
  ST16(R(14)+R(0),R(5));
  R(0)+=0xffffffc0u;
  ST32(R(14)+R(0),R(13));
  ST32(R(14)+4,R(4));
  { uint32_t tg=R(3); c->pr=0x8c0550c2u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=0x8c0841b8u;
  R(4)=R(13);
  { c->pr=0x8c0550cau; ST32(R(14)+8,R(13)); f_8c0841b8(c); }
  R(3)=0x8c043806u;
  R(5)=R(0);
  { c->pr=0x8c0550d2u; R(4)=R(14); f_8c043806(c); }
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0550e0;
  R(3)=0x8c0836a0u;
  R(5)=0x0u;
  { c->pr=0x8c0550e0u; R(4)=R(12); f_8c0836a0(c); }
L8c0550e0:;
  R(0)=0x1u;
L8c0550e2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0550ec(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=LD32(R(4)+4);
  { c->pr=0x8c0550f8u; R(14)=LD32(R(14)); f_8c055080(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c055160;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3));
  R(3)=0x8c05e936u;
  R(5)=R(2);
  ST32(R(15),R(2));
  R(5)=(int32_t)(int16_t)LD16(R(5));
  R(5)=R(5)&0xFFFF;
  R(5)+=0xffffffffu;
  { c->pr=0x8c055112u; R(4)=0x0u; f_8c05e936(c); }
  R(4)=R(0)&0xFF;
  R(0)=0x9cu;
  ST16(R(14)+R(0),R(4));
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c055160:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055160(SH4Ctx *c) {
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05516a(SH4Ctx *c) {
  R(1)=LD32(R(4)+4);
  R(4)=0x0u;
  R(0)=0x9eu;
  R(1)=LD32(R(1));
  ST8(R(1)+R(0),R(4));
  R(0)+=0x1u;
  ST8(R(1)+R(0),R(4));
  R(0)+=0x52u;
  R(4)=0x1u;
  ST8(R(1)+R(0),R(4));
  R(0)+=0xffffffa7u;
  ST32(R(1)+R(0),R(5));
  R(4)=R(5);
  { ST32(R(1)+8,R(4)); return; }
}
void f_8c055188(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(4)+4);
  R(14)=LD32(R(14));
  R(4)=LD32(R(14)+8);
  c->t=R(13)==R(4);
  if(c->t) goto L8c0551ca;
  R(3)=0x8c08422au;
  R(5)=R(13);
  R(0)=0x98u;
  { c->pr=0x8c0551a4u; R(4)=LD32(R(14)+R(0)); f_8c08422a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0551ca;
  R(3)=0x8c084284u;
  R(5)=R(13);
  R(0)=0x98u;
  { c->pr=0x8c0551b4u; R(4)=LD32(R(14)+R(0)); f_8c084284(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0551c6;
  R(0)=0x98u;
  R(1)=0x1eu;
  R(0)=LD32(R(14)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0551ca;
L8c0551c6:;
  { R(0)=0x0u; goto L8c0551cc; }
L8c0551ca:;
  R(0)=0x1u;
L8c0551cc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055200(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3));
  R(4)=R(2);
  ST32(R(15),R(2));
  R(4)=LD32(R(4)+8);
  c->t=R(5)==R(4);
  R(0)=c->t;
  { R(15)+=0x4u; return; }
}
void f_8c055214(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST16(R(15),R(5));
  R(14)=LD32(R(4)+4);
  R(14)=LD32(R(14));
  R(4)=LD32(R(14)+4);
  R(12)=LD32(R(4));
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c055236;
  {  goto L8c055324; }
L8c055236:;
  R(0)=0x84u;
  R(11)=0x1u;
  R(10)=0x8c08262eu;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c055242u; R(4)=R(12); f_8c08262e(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c055280;
  R(2)=0x8c05e6eau;
  R(4)=0x8c2d14f4u;
  { c->pr=0x8c055250u;  f_8c05e6ea(c); }
  {  goto L8c05528e; }
L8c055280:;
  R(3)=0x8c2d14f8u;
  R(1)=0x8c2d14fcu;
  R(2)=0x8c2d14f4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(2));
  fp_st(c,4,R(3));
  fp_st(c,4,R(1));
L8c05528e:;
  R(0)=0x84u;
  R(13)=(int32_t)(int16_t)LD16(R(15));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(13)+=0x1u;
  R(9)=0x8c05e5f4u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(c->t) goto L8c0552be;
L8c05529e:;
  R(5)=R(13);
  { uint32_t tg=R(10); c->pr=0x8c0552a4u; R(4)=R(12); sh4_call(c,tg); }
  R(6)=R(0);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0552b0;
  R(5)=0x8c2d14f4u;
  { uint32_t tg=R(9); c->pr=0x8c0552b0u; R(4)=R(5); sh4_call(c,tg); }
L8c0552b0:;
  R(0)=0x84u;
  R(13)+=0x1u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(11)+=0x1u; if(k) goto L8c05529e; }
L8c0552be:;
  c->fpul=R(11);
  c->fr[4]=0x3F800000u;
  R(3)=0x8c2d14f4u;
  fp_float(c,3);
  R(1)=0x8c2d14f8u;
  R(2)=R(3);
  R(0)=0xf0u;
  fp_arith(c,3,4,3);
  fp_ld(c,3,R(3));
  R(3)+=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(2));
  R(2)+=0x8u;
  fp_ld(c,3,R(1));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  R(3)+=0x4u;
  fp_ld(c,3,R(2));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(3));
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=0x8c2d14f4u;
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  R(2)=R(3);
  fp_ld(c,2,R(3));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_st(c,3,R(2));
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  R(3)+=0x4u;
  fp_ld(c,2,R(3));
  R(2)=R(3);
  R(3)+=0x4u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_st(c,3,R(2));
  R(2)=R(3);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  fp_ld(c,2,R(3));
  R(4)=R(4)&0xFF;
  R(0)=0x8c2d14f4u;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  { fp_st(c,3,R(2)); goto L8c055326; }
L8c055324:;
  R(0)=0x0u;
L8c055326:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055360(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(13)=LD32(R(4)+4);
  R(13)=LD32(R(13));
  R(4)=LD32(R(13)+4);
  R(11)=LD32(R(4));
  c->t=(R(11)&R(11))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c0553de; }
  R(2)=0x8c2d1500u;
  R(14)=(uint32_t)(int32_t)(int16_t)R(5);
  c->fr[5]=0x3F800000u;
  R(14)+=0x1u;
  fp_st(c,5,R(2));
  R(2)+=0xcu;
  c->fr[4]=0x00000000u;
  R(3)=0x8c2d1504u;
  R(1)=0x8c2d1508u;
  R(0)=0x84u;
  fp_st(c,4,R(3));
  R(3)+=0xcu;
  fp_st(c,4,R(1));
  R(1)+=0xcu;
  fp_st(c,4,R(2));
  R(2)+=0xcu;
  fp_st(c,5,R(3));
  R(3)+=0xcu;
  fp_st(c,4,R(1));
  R(1)+=0xcu;
  fp_st(c,4,R(2));
  R(8)=0x8c08268cu;
  R(9)=0x8c05e8c4u;
  fp_st(c,4,R(3));
  fp_st(c,5,R(1));
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  { uint32_t k=c->t; R(10)=0x1u; if(k) goto L8c0553de; }
L8c0553bc:;
  R(5)=R(14);
  R(6)=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0553c4u; R(4)=R(11); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0553d2;
  R(5)=0x8c2d1500u;
  R(6)=R(15);
  { uint32_t tg=R(9); c->pr=0x8c0553d0u; R(4)=R(5); sh4_call(c,tg); }
  R(12)=R(10);
L8c0553d2:;
  R(0)=0x84u;
  R(14)+=0x1u;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(!c->t) goto L8c0553bc;
L8c0553de:;
  R(12)=R(12)&0xFF;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0553ea;
  R(0)=0x8c2d1500u;
  {  goto L8c0553ec; }
L8c0553ea:;
  R(0)=0x0u;
L8c0553ec:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055420(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(4)+4);
  R(0)=0x9eu;
  R(14)=LD32(R(14));
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c055440;
  R(0)=0x98u;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(14)+R(0));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c055440;
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c055440:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055446(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0x9fu;
  R(4)=LD32(R(3));
  R(5)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c055458;
  { R(0)=0x1u; return; }
L8c055458:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0554a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(4);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c055508;
  R(2)=0x8c0585d0u;
  { c->pr=0x8c0554b6u; R(4)=R(13); f_8c0585d0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05551c;
  R(2)=0x8c044212u;
  { c->pr=0x8c0554c0u; R(4)=LD32(R(13)+4); f_8c044212(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05551c;
  R(14)=LD32(R(13)+4);
  R(0)=0xa0u;
  R(14)=LD32(R(14));
  R(4)=LD32(R(14)+R(0));
  R(0)=0xa4u;
  ST32(R(15),R(4));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c0554f8; }
  R(3)=0x8c0827c0u;
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0554e0u; R(4)=R(15); f_8c0827c0(c); }
  R(0)=0xa0u;
  R(5)=0x78u;
  R(4)=LD32(R(15));
  R(3)=0x8c043a80u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x8u;
  R(4)=R(13);
  ST32(R(14)+R(0),R(13));
  { c->pr=0x8c0554f4u; R(4)=R(14); f_8c043a80(c); }
  {  goto L8c05551c; }
L8c0554f8:;
  R(0)=0xa0u;
  R(4)=R(13);
  ST32(R(14)+R(0),R(13));
  R(0)+=0x8u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  { ST32(R(14)+R(0),R(4)); goto L8c05551c; }
L8c055508:;
  R(14)=LD32(R(13)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05551c;
L8c05550e:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c055516;
  { c->pr=0x8c055516u; R(4)=R(14); f_8c0554a0(c); }
L8c055516:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c05550e;
L8c05551c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055560(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(4);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0555b4;
  R(2)=0x8c0585d0u;
  { c->pr=0x8c055576u; R(4)=R(13); f_8c0585d0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0555c8;
  R(2)=0x8c044212u;
  { c->pr=0x8c055580u; R(4)=LD32(R(13)+4); f_8c044212(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0555c8;
  R(14)=LD32(R(13)+4);
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0555c8;
  R(0)=0xa0u;
  R(4)=LD32(R(14)+R(0));
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c0555c8; }
  R(3)=0x8c082854u;
  { c->pr=0x8c05559eu; R(4)=R(15); f_8c082854(c); }
  R(0)=0xa0u;
  R(4)=0x0u;
  R(3)=0x8c043ad8u;
  R(5)=R(4);
  ST32(R(14)+R(0),R(4));
  R(0)+=0x8u;
  ST32(R(14)+R(0),R(5));
  { c->pr=0x8c0555b0u; R(4)=R(14); f_8c043ad8(c); }
  {  goto L8c0555c8; }
L8c0555b4:;
  R(14)=LD32(R(13)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0555c8;
L8c0555ba:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0555c2;
  { c->pr=0x8c0555c2u; R(4)=R(14); f_8c055560(c); }
L8c0555c2:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0555ba;
L8c0555c8:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055600(SH4Ctx *c) {
  { R(0)=0x14u; return; }
}
void f_8c055604(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0ba294u;
  R(3)=R(4);
  R(11)=0x8c0125ccu;
  c->t=(R(3)&R(3))==0;
  R(14)=0xffu;
  R(8)=0xffffffffu;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  ST32(R(15),R(4));
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c05564e; }
  R(5)=R(13);
  R(6)=0x45u;
  { uint32_t tg=R(11); c->pr=0x8c055634u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x45u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c05564cu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05564e:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c055678;
  R(5)=R(13);
  R(6)=0x48u;
  { uint32_t tg=R(11); c->pr=0x8c05565eu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x48u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0xdu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c055676u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c055678:;
  R(2)=LD32(R(15));
  R(1)=0x20u;
  R(1)+=R(2);
  { c->pr=0x8c055682u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c05569a(c); }
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
void f_8c05569a(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0556e0;
  { c->pr=0x8c0556aau;  f_8c055600(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0ba294u;
  { c->pr=0x8c0556b4u; R(6)=0x51u; f_8c064e90(c); }
  {  goto L8c0556ee; }
L8c0556e0:;
  { c->pr=0x8c0556e4u;  f_8c055600(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0ba294u;
  { c->pr=0x8c0556eeu; R(6)=0x51u; f_8c0199c4(c); }
L8c0556ee:;
  R(2)=0x8c0943bcu;
  { c->pr=0x8c0556f4u; R(14)=R(0); f_8c0943bc(c); }
  ST32(R(14)+4,R(0));
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0556fe(SH4Ctx *c) {
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
  R(14)=0x8c0ba294u;
  R(10)=0x8c012658u;
  R(9)=0x8c0c3fa8u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c055746; }
  R(5)=R(14);
  R(6)=0x64u;
  { uint32_t tg=R(12); c->pr=0x8c05572cu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x64u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c055744u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c055746:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c055770;
  R(5)=R(14);
  R(6)=0x67u;
  { uint32_t tg=R(12); c->pr=0x8c055756u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x67u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c05576eu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c055770:;
  R(4)=LD32(R(15));
  R(6)=0x69u;
  R(5)=R(14);
  R(4)+=0x20u;
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
void f_8c0557c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(10)=0x8c012658u;
  R(14)=R(4);
  R(12)=0xffu;
  c->t=(R(14)&R(14))==0;
  R(13)=0x8c0ba294u;
  R(9)=0x8c0c3fa8u;
  R(8)=0x8c0125ccu;
  ST32(R(15),R(5));
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c05580a; }
  R(5)=R(13);
  R(6)=0x7eu;
  { uint32_t tg=R(8); c->pr=0x8c0557eeu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x7eu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c055808u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05580a:;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c055834;
  R(6)=0x81u;
  R(5)=R(13);
  { uint32_t tg=R(8); c->pr=0x8c055818u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x81u;
  R(2)=0xffffffffu;
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c055832u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c055834:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c05583e;
  {  goto L8c05591e; }
L8c05583e:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c055858;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c05585c;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05585c;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c05585c;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0558c0;
  {  goto L8c05591e; }
L8c055858:;
  R(3)=LD32(R(14)+32);
  ST32(R(3),R(11));
L8c05585c:;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(2)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05591e;
  R(4)=LD32(R(14));
  R(4)+=0x18u;
  R(13)=R(4);
  R(4)=LD32(R(14)+4);
  R(13)+=0x58u;
  R(5)=R(13);
  { c->pr=0x8c055874u; R(4)=LD32(R(4)+12); f_8c055a5c(c); }
  R(4)=LD32(R(14)+32);
  R(5)=R(13);
  R(4)+=0x8u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c05e6eau;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e6ea(c); return; } }
L8c0558c0:;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05591e;
  R(13)=LD32(R(14)+4);
  R(13)=LD32(R(13)+12);
  R(2)=LD32(R(13)+36);
  R(5)=R(13);
  R(2)+=0x58u;
  ST32(R(15),R(2));
  R(4)=LD32(R(14)+32);
  { c->pr=0x8c0558dau; R(4)=LD32(R(4)); f_8c055ae2(c); }
  R(3)=0x8c094480u;
  R(5)=R(13);
  R(4)=LD32(R(14)+32);
  { c->pr=0x8c0558e4u; R(4)=LD32(R(4)+4); f_8c094480(c); }
  R(3)=0x8c05e6eau;
  R(4)=LD32(R(14)+32);
  R(5)=LD32(R(15));
  { c->pr=0x8c0558eeu; R(4)+=0x8u; f_8c05e6ea(c); }
  R(14)=LD32(R(13)+4);
  R(14)=LD32(R(14)+28);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05591e;
  R(2)=0x8c050ba6u;
  { c->pr=0x8c0558fcu; R(4)=R(14); f_8c050ba6(c); }
  R(3)=0x8c050940u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c055904u; R(4)=R(14); f_8c050940(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  R(4)=R(0);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0944fau;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0944fa(c); return; } }
L8c05591e:;
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
void f_8c055960(SH4Ctx *c) {
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
  R(14)=0x8c0ba294u;
  R(9)=0x8c012658u;
  R(8)=0x8c0c3fa8u;
  ST32(R(15),R(5));
  { uint32_t k=!c->t; R(10)=0x0u; if(k) goto L8c0559aa; }
  R(6)=0xc1u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05598eu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0xc1u;
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
  { uint32_t tg=R(9); c->pr=0x8c0559a8u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0559aa:;
  R(3)=LD32(R(12)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0559d4;
  R(6)=0xc4u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0559b8u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0xc4u;
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
  { uint32_t tg=R(9); c->pr=0x8c0559d2u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0559d4:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0559ee;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0559ee;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0559ee;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0559ee;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0559ee;
  {  goto L8c055a40; }
L8c0559ee:;
  R(3)=LD32(R(12)+4);
  R(2)=LD32(R(3)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c055a40;
  R(4)=LD32(R(12)+4);
  R(4)=LD32(R(4)+12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c055bea(c); return; } }
L8c055a40:;
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
void f_8c055a54(SH4Ctx *c) {
  {  return; }
}
void f_8c055a58(SH4Ctx *c) {
  {  return; }
}
void f_8c055a5c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c633cu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(3));
  R(14)=LD32(R(13)+4);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)=LD32(R(14)+32); if(k) goto L8c055a76; }
  { ST32(R(14),R(4)); goto L8c055ab0; }
L8c055a76:;
  R(1)=0x8c09458cu;
  R(2)=0x8c2d03b4u;
  { c->pr=0x8c055a7eu; R(4)=LD32(R(2)); f_8c09458c(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c055a88;
  { R(3)=R(12); goto L8c055a98; }
L8c055a88:;
  R(2)=0x8c2d03b4u;
  R(3)=0x8c064a82u;
  R(5)=LD32(R(2));
  R(5)=LD32(R(5)+16);
  R(5)+=0xffffffffu;
  { c->pr=0x8c055a96u; R(4)=LD32(R(2)); f_8c064a82(c); }
  R(3)=R(0);
L8c055a98:;
  R(2)=0x8c123cf8u;
  ST32(R(14),R(3));
  R(1)=LD32(R(2));
  c->t=R(13)==R(1);
  if(!c->t) goto L8c055ab0;
  R(1)=0x8c04b38cu;
  { c->pr=0x8c055aa8u; R(4)=LD32(R(14)); f_8c04b38c(c); }
  R(2)=0x8c011382u;
  R(3)=0x8c123c50u;
  { c->pr=0x8c055ab0u; R(4)=(int32_t)(int16_t)LD16(R(3)); f_8c011382(c); }
L8c055ab0:;
  R(3)=0x8c094480u;
  R(5)=R(13);
  { c->pr=0x8c055ab8u; R(4)=LD32(R(14)+4); f_8c094480(c); }
  R(12)=LD32(R(13)+4);
  R(12)=LD32(R(12)+28);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c055ad6;
  R(2)=0x8c050ba6u;
  { c->pr=0x8c055ac6u; R(4)=R(12); f_8c050ba6(c); }
  R(3)=0x8c050940u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c055aceu; R(4)=R(12); f_8c050940(c); }
  R(2)=0x8c0944fau;
  R(4)=R(0);
  { c->pr=0x8c055ad6u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c0944fa(c); }
L8c055ad6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(5)=R(13);
  R(4)=LD32(R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;}
  { f_8c055ae2(c); return; }
}
void f_8c055ae2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(14)+4);
  R(3)=0x8c094752u;
  R(13)=LD32(R(13)+32);
  { c->pr=0x8c055af8u; R(4)=LD32(R(13)+4); f_8c094752(c); }
  R(2)=LD32(R(14)+4);
  R(0)=0x24u;
  R(3)=LD32(R(2)+4);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c055b10;
  R(2)=0x8c094816u;
  R(5)=LD32(R(13)+4);
  { c->pr=0x8c055b0cu; R(4)=R(12); f_8c094816(c); }
  {  goto L8c055b18; }
L8c055b10:;
  R(2)=0x8c09479eu;
  R(5)=LD32(R(13)+4);
  { c->pr=0x8c055b18u; R(4)=R(12); f_8c09479e(c); }
L8c055b18:;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c055b2e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(12);
  R(5)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} goto L8c055b80; }
L8c055b2e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c055b80:;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(5);
  R(3)=0x8c050bb2u;
  ST32(R(15),R(4));
  R(14)=LD32(R(13)+4);
  R(14)=LD32(R(14)+28);
  { c->pr=0x8c055b96u; R(4)=R(14); f_8c050bb2(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c055bbe;
  R(3)=0x8c050bbcu;
  { c->pr=0x8c055ba2u; R(4)=R(14); f_8c050bbc(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c055bb2;
  R(2)=LD32(R(13)+48);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(13)+48,R(2)); goto L8c055be0; }
L8c055bb2:;
  R(1)=LD32(R(13)+48);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(13)+48,R(1));
  {  goto L8c055be0; }
L8c055bbe:;
  R(3)=0x8c050940u;
  { c->pr=0x8c055bc4u; R(4)=R(14); f_8c050940(c); }
  R(2)=0x8c09488eu;
  { c->pr=0x8c055bcau; R(4)=R(0); f_8c09488e(c); }
  R(3)=0x8c050940u;
  { c->pr=0x8c055bd0u; R(4)=R(14); f_8c050940(c); }
  R(4)=LD32(R(15));
  R(5)=R(0);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0948dau;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0948da(c); return; } }
L8c055be0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055bea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+4);
  R(3)=0x8c094752u;
  R(4)=LD32(R(4)+32);
  { c->pr=0x8c055bfau; R(4)=LD32(R(4)+4); f_8c094752(c); }
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(2)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c055c14;
  R(3)=0x8c050940u;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c055c0au; R(4)=LD32(R(4)+28); f_8c050940(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c09488eu;
  R(4)=R(0);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09488e(c); return; } }
L8c055c14:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055c1a(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c055c1e(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c055c22(SH4Ctx *c) {
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c055c30;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c055c34;
L8c055c30:;
  { R(0)=0x0u; return; }
L8c055c34:;
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+32);
  R(5)=LD32(R(4));
  R(0)=R(5);
  {  return; }
}
void f_8c055c78(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c2d152cu;
  R(3)=LD32(R(2));
  c->t=R(4)==R(3);
  if(!c->t) goto L8c055cb4;
  R(3)=0x8c094582u;
  { c->pr=0x8c055c90u; R(4)=R(15); f_8c094582(c); }
  R(4)=R(0);
  R(2)=0x1u;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)>(int32_t)R(2);
  if(!c->t) goto L8c055cb4;
  R(12)=(uint32_t)(int32_t)(int16_t)R(4);
  R(12)+=0xffffffffu;
  c->t=(int32_t)R(12)>0;
  R(13)=0x0u;
  { uint32_t k=!c->t; R(14)=LD32(R(15)); if(k) goto L8c055cb4; }
L8c055ca6:;
  R(5)=LD32(R(14)+4);
  { c->pr=0x8c055cacu; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} f_8c055cc0(c); }
  R(13)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(13);
  c->t=(int32_t)R(3)>=(int32_t)R(12);
  if(!c->t) goto L8c055ca6;
L8c055cb4:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055cc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(4)=R(5);
  R(6)=LD32(R(4)+4);
  R(0)=0x44u;
  R(5)=LD32(R(4)+4);
  R(6)=LD32(R(6)+R(0));
  R(0)=0x40u;
  R(13)=R(6);
  { R(5)=LD32(R(5)+R(0)); goto L8c055d14; }
L8c055ce2:;
  R(3)=LD32(R(15));
  R(4)=LD32(R(14));
  c->t=R(4)==R(3);
  if(c->t) goto L8c055cee;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c055d0c;
L8c055cee:;
  R(4)=R(14);
  R(12)=R(15);
  R(5)=LD32(R(4)+4);
  R(12)+=0x4u;
  R(10)=0x8c2d1064u;
  R(7)=0x0u;
  R(2)=R(5);
  ST32(R(12),R(5));
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  R(6)=R(7);
  R(5)=LD32(R(10));
  R(11)=0x8c017f2cu;
  { c->pr=0x8c055d0au; R(4)=0xffffffffu; f_8c017f2c(c); }
  R(15)+=0x4u;
L8c055d0c:;
  R(5)=R(14);
  R(5)+=0x8u;
  R(13)+=0xffffffffu;
  R(4)=R(14);
L8c055d14:;
  R(2)=0x0u;
  c->t=R(13)>R(2);
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c055ce2; }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c055d2c(SH4Ctx *c) {
  R(3)=0x8c2d152cu;
  { ST32(R(3),R(4)); return; }
}
void f_8c055d60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb0u;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015e64u;
  R(7)=R(15);
  R(5)+=0x8u;
  R(14)=R(4);
  R(6)+=0x14u;
  R(7)+=0x20u;
  { c->pr=0x8c055d82u; R(4)=LD32(R(14)+36); f_8c015e64(c); }
  R(0)=0x8c055f04u;
  R(5)=R(15);
  fp_ld(c,4,R(0));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  R(3)=0x8c0163ceu;
  R(5)+=0x44u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(13)=LD32(R(14)+4);
  R(13)=LD32(R(13)+32);
  { uint32_t tg=R(3); c->pr=0x8c055db2u; R(4)=LD32(R(14)+36); sh4_call(c,tg); }
  R(2)=LD32(R(13));
  R(5)=R(15);
  R(10)=0x8c05e6eau;
  R(4)=R(15);
  R(5)+=0x44u;
  ST32(R(15),R(2));
  R(3)=LD32(R(13));
  ST32(R(15)+4,R(3));
  { c->pr=0x8c055dc6u; R(4)+=0x38u; f_8c05e6ea(c); }
  R(5)=R(13);
  R(4)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c055dd0u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x20u;
  R(5)+=0x38u;
  { c->pr=0x8c055de0u; R(4)+=0x38u; f_8c05e5f4(c); }
  R(5)=R(15);
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x20u;
  R(5)+=0x2cu;
  { c->pr=0x8c055df0u; R(4)+=0x2cu; f_8c05e5f4(c); }
  R(5)=R(15);
  R(3)=0x8c0946a0u;
  R(4)=R(15);
  R(6)=R(15);
  R(5)+=0x38u;
  { c->pr=0x8c055dfeu; R(4)+=0x2cu; f_8c0946a0(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(13));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c055e0a;
  {  goto L8c055fe6; }
L8c055e0a:;
  R(1)=0x8c2d152cu;
  R(3)=LD32(R(1));
  c->t=R(14)==R(3);
  if(!c->t) goto L8c055e18;
  R(5)=LD32(R(15));
  { c->pr=0x8c055e18u; R(4)=LD32(R(13)); f_8c055cc0(c); }
L8c055e18:;
  R(2)=LD32(R(15));
  R(3)=0x8c044212u;
  ST32(R(13),R(2));
  { c->pr=0x8c055e22u; R(4)=LD32(R(14)+4); f_8c044212(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c055e2c;
  {  goto L8c055fb6; }
L8c055e2c:;
  R(3)=0x8c082768u;
  { c->pr=0x8c055e32u; R(4)=R(14); f_8c082768(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c055e3c;
  {  goto L8c055fb6; }
L8c055e3c:;
  R(3)=0x8c2d03c0u;
  R(2)=LD32(R(13));
  R(12)=LD32(R(3));
  c->t=R(2)==R(12);
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(1)=R(5)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c055e54;
  {  goto L8c055fb6; }
L8c055e54:;
  R(4)=LD32(R(12)+4);
  R(7)=LD32(R(12)+4);
  R(4)=LD32(R(4)+52);
  R(6)=R(4);
  { R(7)=LD32(R(7)+48); goto L8c055e74; }
L8c055e60:;
  R(7)=R(4);
  R(2)=LD32(R(13));
  R(11)=LD32(R(7));
  c->t=R(11)==R(2);
  if(!c->t) goto L8c055e6e;
  { R(5)=R(12); goto L8c055e7c; }
L8c055e6e:;
  R(7)=R(4);
  R(7)+=0x4u;
  R(6)+=0xffffffffu;
L8c055e74:;
  c->t=(int32_t)R(6)>0;
  R(4)=R(7);
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c055e60; }
L8c055e7c:;
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c055e86;
  {  goto L8c055fb6; }
L8c055e86:;
  R(2)=0x8c064848u;
  { c->pr=0x8c055e8cu; R(4)=R(14); f_8c064848(c); }
  R(2)=LD32(R(14)+4);
  R(0)=0x24u;
  R(3)=0x8c2d03b8u;
  R(1)=LD32(R(2)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(11)=LD32(R(3)); if(k) goto L8c055f40; }
  R(4)=R(14);
  R(1)=LD32(R(4)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c055eaa;
  R(1)=LD32(R(4)+24);
  R(2)=LD32(R(4)+20);
  ST32(R(2)+24,R(1));
L8c055eaa:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c055eb6;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c055eb6:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c055ee0;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c055ed2;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c055ed2:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c055ee0;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c055ee0:;
  ST32(R(4)+20,R(12));
  ST32(R(4)+24,R(12));
  ST32(R(4)+28,R(12));
  ST32(R(4)+24,R(12));
  R(2)=LD32(R(11)+8);
  ST32(R(4)+20,R(2));
  ST32(R(4)+28,R(11));
  R(3)=LD32(R(11)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c055ef8;
  { ST32(R(11)+12,R(4)); goto L8c055efc; }
L8c055ef8:;
  R(2)=LD32(R(11)+8);
  ST32(R(2)+24,R(4));
L8c055efc:;
  { ST32(R(11)+8,R(4)); goto L8c055fa2; }
L8c055f40:;
  R(4)=R(14);
  R(1)=LD32(R(4)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c055f4e;
  R(1)=LD32(R(4)+24);
  R(2)=LD32(R(4)+20);
  ST32(R(2)+24,R(1));
L8c055f4e:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c055f5a;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c055f5a:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c055f84;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c055f76;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c055f76:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c055f84;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c055f84:;
  ST32(R(4)+20,R(12));
  ST32(R(4)+24,R(12));
  ST32(R(4)+28,R(12));
  ST32(R(4)+20,R(12));
  R(2)=LD32(R(11)+12);
  ST32(R(4)+24,R(2));
  ST32(R(4)+28,R(11));
  R(3)=LD32(R(11)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c055f9c;
  { ST32(R(11)+8,R(4)); goto L8c055fa0; }
L8c055f9c:;
  R(2)=LD32(R(11)+12);
  ST32(R(2)+20,R(4));
L8c055fa0:;
  ST32(R(11)+12,R(4));
L8c055fa2:;
  R(3)=LD32(R(11)+16);
  R(0)=0x25u;
  R(3)+=0x1u;
  ST32(R(11)+16,R(3));
  R(4)=LD32(R(14)+4);
  R(3)=0xfbu;
  R(4)=LD32(R(4)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
L8c055fb6:;
  R(5)=R(14);
  { c->pr=0x8c055fbcu; R(4)=LD32(R(13)); f_8c055ae2(c); }
  R(0)=0x1e8u;
  R(12)=0x8c123b08u;
  R(2)=LD32(R(12)+R(0));
  c->t=R(14)==R(2);
  if(!c->t) goto L8c055fd0;
  R(3)=0x8c05265au;
  R(5)=LD32(R(13));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c055fd0u; R(4)=R(14); f_8c05265a(c); }
L8c055fd0:;
  R(0)=0x1f0u;
  R(2)=LD32(R(12)+R(0));
  c->t=R(14)==R(2);
  if(!c->t) goto L8c055fe6;
  R(2)=0x8c04b38cu;
  { c->pr=0x8c055fdeu; R(4)=LD32(R(13)); f_8c04b38c(c); }
  R(3)=0x8c011382u;
  R(0)=0x148u;
  { c->pr=0x8c055fe6u; R(4)=(int32_t)(int16_t)LD16(R(12)+R(0)); f_8c011382(c); }
L8c055fe6:;
  R(5)=R(15);
  R(4)=R(13);
  R(5)+=0x44u;
  { uint32_t tg=R(10); c->pr=0x8c055ff0u; R(4)+=0x8u; sh4_call(c,tg); }
  R(15)+=0x50u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c056040(SH4Ctx *c) {
  { R(0)=0x30u; return; }
}
void f_8c056044(SH4Ctx *c) {
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
  R(14)=0x8c0ba2ccu;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  { uint32_t k=!c->t; R(8)=0xffffffffu; if(k) goto L8c05608a; }
  R(5)=R(14);
  R(6)=0x47u;
  { uint32_t tg=R(11); c->pr=0x8c05606eu; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x47u;
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
  { uint32_t tg=R(10); c->pr=0x8c056088u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05608a:;
  R(3)=LD32(R(12)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0560b4;
  R(5)=R(14);
  R(6)=0x4au;
  { uint32_t tg=R(11); c->pr=0x8c056098u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x4au;
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
  { uint32_t tg=R(10); c->pr=0x8c0560b2u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0560b4:;
  { c->pr=0x8c0560b8u;  f_8c0560ce(c); }
  ST32(R(12)+4,R(0));
  R(4)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c056720(c); return; } }
}
void f_8c0560ce(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c056120;
  { c->pr=0x8c0560deu;  f_8c056040(c); }
  R(2)=0x8c064e90u;
  R(4)=R(0);
  R(5)=0x8c0ba2ccu;
  { c->pr=0x8c0560e8u; R(6)=0x54u; f_8c064e90(c); }
  {  goto L8c05612e; }
L8c056120:;
  { c->pr=0x8c056124u;  f_8c056040(c); }
  R(2)=0x8c0199c4u;
  R(4)=R(0);
  R(5)=0x8c0ba2ccu;
  { c->pr=0x8c05612eu; R(6)=0x54u; f_8c0199c4(c); }
L8c05612e:;
  R(4)=0x200000u;
  R(14)=R(0);
  R(0)=0x26u;
  R(3)=0xfeu;
  ST32(R(14)+32,R(4));
  R(4)=0x46u;
  R(5)=R(4);
  ST8(R(14)+R(0),R(5));
  R(0)=0x27u;
  R(5)=0x50u;
  ST8(R(14)+R(0),R(5));
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(5)=0x0u;
  R(2)&=R(3);
  ST8(R(14)+R(0),R(2));
  R(3)=0x2u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)|=R(3);
  ST8(R(14)+R(0),R(2));
  R(0)=0x1du;
  ST8(R(14)+R(0),R(5));
  R(0)=0x1eu;
  ST8(R(14)+R(0),R(5));
  R(0)=0x2fu;
  ST8(R(14)+R(0),R(4));
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05616a(SH4Ctx *c) {
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
  R(14)=0x8c0ba2ccu;
  R(9)=0x8c0c3fa8u;
  R(10)=0x8c012658u;
  { uint32_t k=!c->t; R(8)=0xffffffffu; if(k) goto L8c0561b0; }
  R(5)=R(14);
  R(6)=0x6eu;
  { uint32_t tg=R(11); c->pr=0x8c056194u; R(4)=0x0u; sh4_call(c,tg); }
  R(2)=0x6eu;
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
  { uint32_t tg=R(10); c->pr=0x8c0561aeu; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0561b0:;
  R(3)=LD32(R(12)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0561da;
  R(5)=R(14);
  R(6)=0x71u;
  { uint32_t tg=R(11); c->pr=0x8c0561beu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x71u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { uint32_t tg=R(10); c->pr=0x8c0561d8u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0561da:;
  { c->pr=0x8c0561deu; R(4)=LD32(R(12)+4); f_8c0567c0(c); }
  R(2)=0x8c123cf0u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+4);
  c->t=R(12)==R(1);
  if(!c->t) goto L8c0561ec;
  { c->pr=0x8c0561ecu; R(4)=LD32(R(12)+4); f_8c0567e0(c); }
L8c0561ec:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(12);
  R(3)=0x8c064eb8u;
  R(5)=R(14);
  R(6)=0x76u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  R(4)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064eb8(c); return; } }
}
void f_8c056260(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(11)=0xffu;
  R(14)=R(4);
  R(12)=0x8c0ba2ccu;
  c->t=(R(14)&R(14))==0;
  R(8)=0x8c0125ccu;
  R(13)=R(5);
  { uint32_t k=!c->t; R(10)=0x0u; if(k) goto L8c0562aa; }
  R(9)=0x8bu;
  R(5)=R(12);
  R(6)=R(9);
  { uint32_t tg=R(8); c->pr=0x8c05628cu; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=0xeu;
  R(3)=0x8c0c3fa8u;
  R(6)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c0562a8u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0562aa:;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0562d8;
  R(9)=0x8eu;
  R(5)=R(12);
  R(6)=R(9);
  { uint32_t tg=R(8); c->pr=0x8c0562bau; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=0xfu;
  R(2)=0x8c0c3fa8u;
  R(6)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { c->pr=0x8c0562d6u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0562d8:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0562e2;
  {  goto L8c0565fc; }
L8c0562e2:;
  R(4)=LD32(R(14)+4);
  R(5)=R(10);
  R(2)=0x8c044212u;
  ST32(R(4)+20,R(10));
  { c->pr=0x8c0562eeu; R(4)=R(14); f_8c044212(c); }
  R(0)=R(13);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05630a;
  R(0)=R(13);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c05630a;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c056310;
  R(2)=0x8c03b11eu;
  { c->pr=0x8c056306u; R(4)=R(14); f_8c03b11e(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c056310;
L8c05630a:;
  R(4)=LD32(R(14)+4);
  R(2)=LD32(R(4)+40);
  ST32(R(4)+32,R(2));
L8c056310:;
  R(12)=0x8c055a5cu;
  R(0)=R(13);
  R(10)=0x8c044260u;
  c->t=(int32_t)R(0)==2;
  R(11)=0x8c0163ceu;
  if(c->t) goto L8c0563a0;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0563e2;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c056328;
  {  goto L8c05641a; }
L8c056328:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c056330;
  {  goto L8c05649c; }
L8c056330:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c056338;
  {  goto L8c05653c; }
L8c056338:;
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c056340;
  {  goto L8c05655a; }
L8c056340:;
  {  goto L8c0565ac; }
L8c0563a0:;
  { uint32_t tg=R(10); c->pr=0x8c0563a4u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0563ae;
  {  goto L8c0565ac; }
L8c0563ae:;
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0xfeu;
  R(5)=R(15);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(5)+=0x4u;
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
  R(3)=0x2u;
  R(4)=LD32(R(14)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  ST8(R(4)+R(0),R(2));
  R(0)=0x80u;
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+R(0));
  ST32(R(15),R(3));
  { uint32_t tg=R(11); c->pr=0x8c0563d4u; R(4)=R(3); sh4_call(c,tg); }
  R(4)=LD32(R(14)+4);
  R(5)=R(15);
  R(5)+=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c0563deu; R(4)=LD32(R(4)+12); sh4_call(c,tg); }
  {  goto L8c0565ac; }
L8c0563e2:;
  { uint32_t tg=R(10); c->pr=0x8c0563e6u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0563f0;
  {  goto L8c0565ac; }
L8c0563f0:;
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0x2u;
  R(5)=R(15);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(5)+=0x4u;
  R(2)|=R(3);
  ST8(R(4)+R(0),R(2));
  R(0)=0x80u;
  R(4)=LD32(R(14));
  R(3)=LD32(R(4)+R(0));
  ST32(R(15),R(3));
  { uint32_t tg=R(11); c->pr=0x8c05640cu; R(4)=R(3); sh4_call(c,tg); }
  R(4)=LD32(R(14)+4);
  R(5)=R(15);
  R(5)+=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c056416u; R(4)=LD32(R(4)+12); sh4_call(c,tg); }
  {  goto L8c0565ac; }
L8c05641a:;
  { uint32_t tg=R(10); c->pr=0x8c05641eu; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c056428;
  {  goto L8c0565ac; }
L8c056428:;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c056460;
  { R(3)=0x1u; goto L8c056462; }
L8c056460:;
  R(3)=0x0u;
L8c056462:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c056484;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c056478;
  { R(2)=0x1u; goto L8c05647a; }
L8c056478:;
  R(2)=0x0u;
L8c05647a:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c056484;
  {  goto L8c0565ac; }
L8c056484:;
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
  R(3)=0x2u;
  R(4)=LD32(R(14)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  { ST8(R(4)+R(0),R(2)); goto L8c0565ac; }
L8c05649c:;
  { uint32_t tg=R(10); c->pr=0x8c0564a0u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0564aa;
  {  goto L8c0565ac; }
L8c0564aa:;
  R(0)=LD32(R(14)+4);
  R(1)=0x11u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c05651e;
  R(10)=LD32(R(14)+4);
  R(0)=0x25u;
  R(4)=0x1u;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c056500;
  { R(2)=R(4); goto L8c056502; }
L8c056500:;
  R(2)=0x0u;
L8c056502:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  R(4)=c->t;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c056516;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=0x2u;
  { R(2)|=R(3); goto L8c05651c; }
L8c056516:;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=0xfdu;
  R(2)&=R(3);
L8c05651c:;
  ST8(R(10)+R(0),R(2));
L8c05651e:;
  R(0)=0x80u;
  R(5)=R(15);
  R(4)=LD32(R(14));
  R(5)+=0x4u;
  R(3)=LD32(R(4)+R(0));
  ST32(R(15),R(3));
  { uint32_t tg=R(11); c->pr=0x8c05652eu; R(4)=R(3); sh4_call(c,tg); }
  R(4)=LD32(R(14)+4);
  R(5)=R(15);
  R(5)+=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c056538u; R(4)=LD32(R(4)+12); sh4_call(c,tg); }
  {  goto L8c0565ac; }
L8c05653c:;
  { c->pr=0x8c056540u; R(4)=LD32(R(14)+4); f_8c056742(c); }
  R(4)=LD32(R(14)+4);
  R(0)=0x25u;
  R(3)=0x2u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)|=R(3);
  R(3)=0x80000000u;
  ST8(R(4)+R(0),R(2));
  R(1)=LD32(R(14)+4);
  R(2)=LD32(R(1)+32);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c05655a;
  { c->pr=0x8c05655au; R(4)=LD32(R(14)+4); f_8c056764(c); }
L8c05655a:;
  R(5)=LD32(R(14)+4);
  R(0)=0x25u;
  R(4)=0x8u;
  R(0)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(4)&R(0))==0;
  if(c->t) goto L8c0565a0;
  { R(4)=0x1u; goto L8c0565a2; }
L8c0565a0:;
  R(4)=0x0u;
L8c0565a2:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0565ac;
  { c->pr=0x8c0565acu; R(4)=LD32(R(14)+4); f_8c056720(c); }
L8c0565ac:;
  R(4)=LD32(R(14)+4);
  R(3)=0x80000000u;
  R(2)=LD32(R(4)+32);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0565c4;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0565dc;
  R(0)=0x2cu;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=0x1du;
  { ST8(R(4)+R(0),R(1)); goto L8c0565dc; }
L8c0565c4:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0565d4;
  R(0)=R(13);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0565d4;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0565dc;
L8c0565d4:;
  R(0)=0x2cu;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=0x1du;
  ST8(R(4)+R(0),R(3));
L8c0565dc:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0565e8;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0565fc;
L8c0565e8:;
  R(3)=0x2eu;
  R(0)=0x25u;
  R(3)+=R(4);
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=(int32_t)(int8_t)LD8(R(3));
  R(1)=0x25u;
  R(0)&=0xf8u;
  R(1)+=R(4);
  R(0)|=R(3);
  ST8(R(1),R(0));
L8c0565fc:;
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
void f_8c0564e0(SH4Ctx *c) {
  R(0)=LD32(R(15)+R(0));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(2)=0x0u;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  R(4)=c->t;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c056516;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=0x2u;
  { R(2)|=R(3); goto L8c05651c; }
L8c056516:;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=0xfdu;
  R(2)&=R(3);
L8c05651c:;
  ST8(R(10)+R(0),R(2));
  R(0)=0x80u;
  R(5)=R(15);
  R(4)=LD32(R(14));
  R(5)+=0x4u;
  R(3)=LD32(R(4)+R(0));
  ST32(R(15),R(3));
  { uint32_t tg=R(11); c->pr=0x8c05652eu; R(4)=R(3); sh4_call(c,tg); }
  R(4)=LD32(R(14)+4);
  R(5)=R(15);
  R(5)+=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c056538u; R(4)=LD32(R(4)+12); sh4_call(c,tg); }
  {  goto L8c0565ac; }
L8c0565ac:;
  R(4)=LD32(R(14)+4);
  R(3)=0x80000000u;
  R(2)=LD32(R(4)+32);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0565c4;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0565dc;
  R(0)=0x2cu;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=0x1du;
  { ST8(R(4)+R(0),R(1)); goto L8c0565dc; }
L8c0565c4:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0565d4;
  R(0)=R(13);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0565d4;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0565dc;
L8c0565d4:;
  R(0)=0x2cu;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=0x1du;
  ST8(R(4)+R(0),R(3));
L8c0565dc:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0565e8;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0565fc;
L8c0565e8:;
  R(3)=0x2eu;
  R(0)=0x25u;
  R(3)+=R(4);
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=(int32_t)(int8_t)LD8(R(3));
  R(1)=0x25u;
  R(0)&=0xf8u;
  R(1)+=R(4);
  R(0)|=R(3);
  ST8(R(1),R(0));
L8c0565fc:;
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
void f_8c056640(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c0ba2ccu;
  R(10)=0x0u;
  R(11)=0x8c0125ccu;
  R(13)=0xffu;
  R(8)=0x8c0c3fa8u;
  R(9)=0x8c012658u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=0xffffffffu; if(k) goto L8c05668c; }
  R(6)=0x10cu;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c056672u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x10cu;
  R(6)=0x0u;
  R(7)=0xeu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c05668au; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c05668c:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0566b6;
  R(6)=0x10fu;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05669cu; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x10fu;
  R(6)=0x0u;
  R(7)=0xfu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(8));
  { uint32_t tg=R(9); c->pr=0x8c0566b4u; R(4)=0x30u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0566b6:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0566d0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0566d0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0566d0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0566d0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0566d0;
  {  goto L8c0566de; }
L8c0566d0:;
  R(4)=LD32(R(15));
  R(0)=0x25u;
  R(3)=0xfdu;
  R(4)=LD32(R(4)+4);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
  ST8(R(4)+R(0),R(2));
L8c0566de:;
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
void f_8c056720(SH4Ctx *c) {
  R(0)=0x1du;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=0x2cu;
  ST8(R(4)+R(0),R(1));
  R(0)=0x1eu;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=0x2du;
  R(1)=0x2eu;
  ST8(R(4)+R(0),R(3));
  R(0)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)+=R(4);
  R(0)&=0x7u;
  ST8(R(1),R(0));
  R(3)=LD32(R(4)+32);
  { ST32(R(4)+40,R(3)); return; }
}
void f_8c056742(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(1)=0x11u;
  R(0)=R(4);
  ST32(R(15),R(4));
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c056760;
  R(4)=LD32(R(15));
  R(5)=0x1u;
  R(3)=0x8c05eac0u;
  R(6)=0x200u;
  R(4)+=0x25u;
  { R(15)+=0x4u; { f_8c05eac0(c); return; } }
L8c056760:;
  { R(15)+=0x4u; return; }
}
void f_8c056764(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=0x80u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c05eaecu;
  R(5)=R(13);
  { c->pr=0x8c056778u; R(4)+=0x1du; f_8c05eaec(c); }
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c056780u; R(4)+=0x1eu; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c056788u; R(4)+=0x1fu; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0567c0(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(1)=0x11u;
  R(0)=R(4);
  ST32(R(15),R(4));
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0567dc;
  R(4)=LD32(R(15));
  R(3)=0x8c05ec74u;
  R(5)=0x200u;
  R(4)+=0x25u;
  { R(15)+=0x4u; { f_8c05ec74(c); return; } }
L8c0567dc:;
  { R(15)+=0x4u; return; }
}
void f_8c0567e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=0x80u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c05ec74u;
  R(5)=R(13);
  { c->pr=0x8c0567f4u; R(4)+=0x1du; f_8c05ec74(c); }
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c0567fcu; R(4)+=0x1eu; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c056804u; R(4)+=0x1fu; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05680e(SH4Ctx *c) {
  R(5)=LD32(R(4)+4);
  R(0)=0x2cu;
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=0x1du;
  { ST8(R(5)+R(0),R(3)); return; }
}
void f_8c05681a(SH4Ctx *c) {
  R(5)=LD32(R(4)+4);
  R(0)=0x2du;
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=0x1eu;
  { ST8(R(5)+R(0),R(3)); return; }
}
void f_8c056860(SH4Ctx *c) {
  R(5)=LD32(R(4)+4);
  R(3)=LD32(R(5)+40);
  { ST32(R(5)+32,R(3)); return; }
}
void f_8c056868(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(6)=0x30u;
  ST32(R(15)+4,R(5));
  R(4)=LD32(R(15));
  R(3)=0x8c0685b4u;
  R(4)=LD32(R(4)+4);
  R(5)=LD32(R(5)+4);
  { R(15)+=0x8u; { f_8c0685b4(c); return; } }
}
void f_8c05687c(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c056884;
  { R(0)=LD32(R(4)+12); return; }
L8c056884:;
  R(0)=0x0u;
  {  return; }
}
void f_8c05688a(SH4Ctx *c) {
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; ST32(R(4)+12,R(5)); if(k) goto L8c05689a; }
  R(4)=LD32(R(5)+4);
  R(0)=0x80u;
  R(4)=LD32(R(4));
  R(6)=LD32(R(5)+36);
  ST32(R(4)+R(0),R(6));
L8c05689a:;
  {  return; }
}
void f_8c05689e(SH4Ctx *c) {
  R(0)=LD32(R(4)+4);
  R(0)=LD32(R(0)+4);
  { R(0)=LD32(R(0)+32); return; }
}
void f_8c0568e0(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+4);
  { ST32(R(4)+32,R(5)); return; }
}
void f_8c0568e8(SH4Ctx *c) {
  R(0)=LD32(R(4)+4);
  R(1)=0x24u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  { R(0)=c->t; return; }
}
void f_8c0568f8(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c056908;
  R(0)=0x26u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)=R(0)&0xFF; return; }
L8c056908:;
  R(0)=0x46u;
  {  return; }
}
void f_8c05690e(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05691e;
  R(0)=0x27u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(0)=R(0)&0xFF; return; }
L8c05691e:;
  R(0)=0x50u;
  {  return; }
}
void f_8c056934(SH4Ctx *c) {
  R(0)=0x46u;
  {  return; }
}
void f_8c05693a(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c056946;
  { R(0)=0x1u; return; }
L8c056946:;
  R(0)=0x0u;
  {  return; }
}
void f_8c056960(SH4Ctx *c) {
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,5);
  R(4)=0x8c0c6488u;
  c->fr[3]=0x00000000u;
  { uint32_t k=c->t; fp_st(c,3,R(4)); if(k) goto L8c056970; }
  R(0)=0x4u;
  fp_st(c,5,R(0)+R(4));
L8c056970:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,6);
  if(c->t) goto L8c05697a;
  R(0)=0x8u;
  fp_st(c,6,R(0)+R(4));
L8c05697a:;
  R(3)=0x8c0582c0u;
  {  { f_8c0582c0(c); return; } }
}
void f_8c056980(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x8u;
  c->fr[15]=0x00000000u;
  R(14)=R(4);
  R(4)=0x8c0c6488u;
  R(2)=0x8c0c6484u;
  R(3)=0x0u;
  ST32(R(15),R(5));
  R(5)=0x0u;
  ST32(R(2),R(3));
  R(3)=0x6cu;
  fp_st(c,4,R(14));
  fp_st(c,15,R(0)+R(14));
  R(0)=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,3,R(4));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x2cu;
  ST8(R(14)+R(0),R(3));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(3)=0x8c082f80u;
  R(4)=LD32(R(4));
  { c->pr=0x8c0569d2u; R(4)=LD32(R(4)+20); f_8c082f80(c); }
  ST32(R(14)+40,R(0));
  R(0)=0x10u;
  fp_st(c,15,R(0)+R(14));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0569e2(SH4Ctx *c) {
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
  R(15)+=0xfffffff0u;
  R(8)=0x0u;
  R(14)=R(4);
  ST32(R(15)+8,R(5));
  ST32(R(15),R(6));
  ST32(R(15)+12,R(7));
  R(12)=LD32(R(15)+56);
  ST8(R(12),R(8));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(11)=0x1u; if(k) goto L8c056a12; }
  {  goto L8c056cf8; }
L8c056a12:;
  R(0)=LD32(R(15));
  R(0)+=0x1u;
  ST32(R(15),R(0));
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  ST8(R(15)+4,R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c056a28;
  {  goto L8c056cf8; }
L8c056a28:;
  R(0)=0x8c056b10u;
  R(13)=0x8c09cfe0u;
  fp_ld(c,15,R(0));
  R(9)=0x2fu;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->fr[14]=0x00000000u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==47;
  { uint32_t k=c->t; R(10)=0x3au; if(k) goto L8c056a40; }
  {  goto L8c056be2; }
L8c056a40:;
  R(0)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==76;
  if(c->t) goto L8c056ab8;
  c->t=(int32_t)R(0)==108;
  if(c->t) goto L8c056ab8;
  c->t=(int32_t)R(0)==90;
  if(c->t) goto L8c056ad0;
  c->t=(int32_t)R(0)==122;
  if(c->t) goto L8c056ad0;
  c->t=(int32_t)R(0)==87;
  if(c->t) goto L8c056b20;
  c->t=(int32_t)R(0)==119;
  if(c->t) goto L8c056b20;
  c->t=(int32_t)R(0)==72;
  if(c->t) goto L8c056b3a;
  c->t=(int32_t)R(0)==104;
  if(c->t) goto L8c056b3a;
  c->t=(int32_t)R(0)==67;
  if(!c->t) goto L8c056a6c;
  {  goto L8c056b56; }
L8c056a6c:;
  c->t=(int32_t)R(0)==99;
  if(!c->t) goto L8c056a74;
  {  goto L8c056b56; }
L8c056a74:;
  c->t=(int32_t)R(0)==111;
  if(!c->t) goto L8c056a7c;
  {  goto L8c056b70; }
L8c056a7c:;
  c->t=(int32_t)R(0)==79;
  if(!c->t) goto L8c056a84;
  {  goto L8c056b70; }
L8c056a84:;
  c->t=(int32_t)R(0)==74;
  if(!c->t) goto L8c056a8c;
  {  goto L8c056b80; }
L8c056a8c:;
  c->t=(int32_t)R(0)==106;
  if(!c->t) goto L8c056a94;
  {  goto L8c056b80; }
L8c056a94:;
  c->t=(int32_t)R(0)==82;
  if(!c->t) goto L8c056a9c;
  {  goto L8c056b8e; }
L8c056a9c:;
  c->t=(int32_t)R(0)==114;
  if(!c->t) goto L8c056aa4;
  {  goto L8c056b8e; }
L8c056aa4:;
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c056aac;
  {  goto L8c056ba4; }
L8c056aac:;
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c056ab4;
  {  goto L8c056baa; }
L8c056ab4:;
  {  goto L8c056bb4; }
L8c056ab8:;
  R(0)=0xcu;
  ST8(R(12),R(11));
  fp_st(c,14,R(0)+R(14));
  R(0)=0x4u;
  R(1)=0x18u;
  fp_st(c,14,R(0)+R(14));
  R(1)+=R(14);
  R(0)=0x8u;
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(14));
  { fp_arith(c,1,2,3); goto L8c056b52; }
L8c056ad0:;
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
  { uint32_t tg=R(13); c->pr=0x8c056adau; R(4)=R(2); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,3,3,15);
  { R(0)=0x1cu; goto L8c056ba0; }
L8c056b20:;
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
  { uint32_t tg=R(13); c->pr=0x8c056b2au; R(4)=R(2); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_arith(c,2,2,3);
  { R(0)=0x14u; goto L8c056b52; }
L8c056b3a:;
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
  { uint32_t tg=R(13); c->pr=0x8c056b44u; R(4)=R(2); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x18u;
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_arith(c,2,2,3);
L8c056b52:;
  { fp_st(c,2,R(0)+R(14)); goto L8c056bb4; }
L8c056b56:;
  R(4)=LD32(R(15));
  R(4)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c056b5eu; ST32(R(15),R(4)); sh4_call(c,tg); }
  R(4)=LD32(R(15)+8);
  R(5)=R(0);
  R(3)=0x8c082f80u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  { c->pr=0x8c056b6cu; R(4)=LD32(R(4)+20); f_8c082f80(c); }
  { ST32(R(14)+40,R(0)); goto L8c056bb4; }
L8c056b70:;
  R(3)=LD32(R(15));
  R(3)+=0x1u;
  ST32(R(15),R(3));
  { uint32_t tg=R(13); c->pr=0x8c056b7au; R(4)=R(3); sh4_call(c,tg); }
  R(2)=0x8c0c6484u;
  { ST32(R(2),R(0)); goto L8c056bb4; }
L8c056b80:;
  R(1)=LD32(R(15));
  R(0)=0x2cu;
  R(1)+=0x1u;
  ST32(R(15),R(1));
  R(3)=(int32_t)(int8_t)LD8(R(1));
  { ST8(R(14)+R(0),R(3)); goto L8c056bb4; }
L8c056b8e:;
  R(4)=LD32(R(15));
  R(4)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c056b96u; ST32(R(15),R(4)); sh4_call(c,tg); }
  R(4)=R(0);
  c->fpul=R(4);
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,3,3,15);
L8c056ba0:;
  { fp_st(c,3,R(0)+R(14)); goto L8c056bb4; }
L8c056ba4:;
  R(0)=R(9);
  { ST8(R(15)+4,R(0)); goto L8c056bae; }
L8c056baa:;
  R(0)=R(10);
  ST8(R(15)+4,R(0));
L8c056bae:;
  R(3)=LD32(R(15));
  R(3)+=0x1u;
  ST32(R(15),R(3));
L8c056bb4:;
  R(0)=LD32(R(15));
  R(0)+=0x1u;
  ST32(R(15),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c056bb4;
  R(0)=LD32(R(15));
  R(0)+=0x1u;
  ST32(R(15),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  ST8(R(15)+4,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c056bd6;
  R(3)=LD32(R(15));
  R(3)+=0x1u;
  ST32(R(15),R(3));
L8c056bd6:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c056be2;
  {  goto L8c056a40; }
L8c056be2:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c056c06;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c056c06;
L8c056bf4:;
  R(0)=LD32(R(15));
  R(0)+=0x1u;
  ST32(R(15),R(0));
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  ST8(R(15)+4,R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c056bf4;
L8c056c06:;
  R(1)=0xcu;
  R(1)+=R(14);
  R(0)=0x4u;
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c056c1e;
  {  goto L8c056d02; }
L8c056c1e:;
  R(0)=0x14u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c056c60;
  { fp_ld(c,3,R(0)+R(14)); goto L8c056cf2; }
L8c056c60:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(14));
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c056c7a;
  R(3)=0x8c0c6494u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c056c78;
  R(2)=0x8c2d1c88u;
  { fp_ld(c,4,R(2)); goto L8c056c7a; }
L8c056c78:;
  c->fr[4]=0x3F800000u;
L8c056c7a:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(3)=0x20u;
  R(4)=R(0);
  R(4)=R(4)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c056c8a;
  { R(4)=R(8); goto L8c056ce2; }
L8c056c8a:;
  R(2)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c056c96;
  R(0)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(0);
  if(!c->t) goto L8c056cac;
L8c056c96:;
  R(3)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c056ca6;
  R(1)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c056ca6;
  { R(4)+=0xffffffe0u; goto L8c056ce2; }
L8c056ca6:;
  R(2)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c056ce0;
L8c056cac:;
  { R(4)+=0xffffffc0u; goto L8c056ce2; }
L8c056ce0:;
  R(4)+=0xffffffe0u;
L8c056ce2:;
  R(0)=R(4);
  ST8(R(15)+8,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(1)=0x8c2d1888u;
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(1));
  fp_arith(c,2,3,4);
L8c056cf2:;
  R(0)=0xcu;
  { fp_st(c,3,R(0)+R(14)); goto L8c056d02; }
L8c056cf8:;
  ST8(R(12),R(11));
  R(2)=LD32(R(15)+12);
  ST8(R(2),R(8));
  { R(0)=0x0u; goto L8c056d0a; }
L8c056d02:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(3)=LD32(R(15)+12);
  ST8(R(3),R(0));
  R(0)=LD32(R(15));
L8c056d0a:;
  R(15)+=0x10u;
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
void f_8c056d22(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(14)=R(4);
  R(3)=R(15);
  R(3)+=0x10u;
  ST32(R(15)+8,R(5));
  ST32(R(15)+12,R(7));
  R(11)=0x0u;
  R(2)=LD32(R(14));
  R(12)=R(6);
  R(1)=LD32(R(14)+4);
  fp_ld(c,14,R(14));
  ST32(R(3),R(2));
  ST32(R(3)+4,R(1));
  R(1)=LD32(R(14)+12);
  R(2)=LD32(R(14)+8);
  ST32(R(3)+8,R(2));
  ST32(R(3)+12,R(1));
  R(1)=LD32(R(14)+20);
  R(2)=LD32(R(14)+16);
  ST32(R(3)+16,R(2));
  ST32(R(3)+20,R(1));
  R(1)=LD32(R(14)+28);
  R(2)=LD32(R(14)+24);
  ST32(R(3)+24,R(2));
  ST32(R(3)+28,R(1));
  R(1)=LD32(R(14)+36);
  R(2)=LD32(R(14)+32);
  ST32(R(3)+32,R(2));
  ST32(R(3)+36,R(1));
  R(2)=LD32(R(14)+40);
  R(1)=LD32(R(14)+44);
  ST32(R(3)+40,R(2));
  ST32(R(3)+44,R(1));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,14);
  { uint32_t k=!c->t; c->fr[15]=0x00000000u; if(k) goto L8c056d7e; }
  R(0)=0x8c056e04u;
  fp_ld(c,14,R(0));
L8c056d7e:;
  R(13)=0x1u;
L8c056d80:;
  R(3)=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+12);
  R(7)=R(15);
  R(6)=R(12);
  R(7)+=0x8u;
  { c->pr=0x8c056d90u; R(4)=R(14); f_8c0569e2(c); }
  R(15)+=0x4u;
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(12)=R(0);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c056dae;
  R(0)=0x14u;
  fp_mov(c,4,15);
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,0,4,3);
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c056dac;
  fp_mov(c,15,4);
  { R(11)+=0x1u; goto L8c056dae; }
L8c056dac:;
  ST8(R(15),R(13));
L8c056dae:;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c056d80;
  R(3)=R(15);
  R(3)+=0x10u;
  R(1)=LD32(R(3)+4);
  R(2)=LD32(R(3));
  ST32(R(14),R(2));
  ST32(R(14)+4,R(1));
  R(1)=LD32(R(3)+12);
  R(2)=LD32(R(3)+8);
  ST32(R(14)+8,R(2));
  ST32(R(14)+12,R(1));
  R(1)=LD32(R(3)+20);
  R(2)=LD32(R(3)+16);
  ST32(R(14)+16,R(2));
  ST32(R(14)+20,R(1));
  R(1)=LD32(R(3)+28);
  R(2)=LD32(R(3)+24);
  ST32(R(14)+24,R(2));
  ST32(R(14)+28,R(1));
  R(1)=LD32(R(3)+36);
  R(2)=LD32(R(3)+32);
  ST32(R(14)+32,R(2));
  ST32(R(14)+36,R(1));
  R(1)=LD32(R(3)+44);
  R(2)=LD32(R(3)+40);
  ST32(R(14)+40,R(2));
  ST32(R(14)+44,R(1));
  R(0)=LD32(R(15)+12);
  fp_st(c,15,R(0));
  R(0)=R(11);
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c056e20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffa8u;
  R(11)=R(5);
  R(14)=R(4);
  R(0)=0x28u;
  ST32(R(15)+4,R(7));
  fp_st(c,4,R(0)+R(15));
  R(12)=0x0u;
  R(0)=0x88u;
  R(9)=LD32(R(15)+R(0));
  R(0)=R(12);
  ST16(R(15)+12,R(0));
  R(4)=LD32(R(11)+4);
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+16);
  R(4)=R(3);
  ST32(R(15)+8,R(3));
  R(3)=0x8c0835bau;
  { c->pr=0x8c056e5cu; R(13)=R(6); f_8c0835ba(c); }
  R(1)=R(15);
  R(1)+=0x2cu;
  ST16(R(1),R(0));
  R(0)=0x84u;
  ST32(R(15)+28,R(13));
  R(2)=LD32(R(15)+R(0));
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c056e72;
  R(0)=0x84u;
  { R(3)=LD32(R(15)+R(0)); goto L8c056e7a; }
L8c056e72:;
  R(3)=0x8c019e40u;
  { c->pr=0x8c056e78u; R(4)=R(13); f_8c019e40(c); }
  R(3)=R(0);
L8c056e7a:;
  R(0)=0x28u;
  R(5)=R(11);
  R(3)+=R(13);
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(15)+4);
  fp_ld(c,4,R(0)+R(15));
  R(13)+=R(2);
  { c->pr=0x8c056e8cu; R(4)=R(14); f_8c056980(c); }
  {  { f_8c0571c6(c); return; } }
}
void f_8c056e90(SH4Ctx *c) {
  R(5)=R(11);
  R(6)=R(13);
  R(7)=R(15);
  { c->pr=0x8c056e9au; R(4)=R(14); f_8c056d22(c); }
  R(1)=R(15);
  R(1)+=0x30u;
  ST16(R(1),R(0));
  R(0)=0x2cu;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(int32_t)R(0)==114;
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c056ee0; }
  c->t=(int32_t)R(0)==99;
  if(c->t) goto L8c056ee8;
  {  goto L8c056ef8; }
L8c056ee0:;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(15));
  { fp_arith(c,1,2,3); goto L8c056ef4; }
L8c056ee8:;
  fp_ld(c,3,R(15));
  fp_ld(c,2,R(14));
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  fp_arith(c,1,2,3);
  fp_arith(c,3,2,4);
L8c056ef4:;
  { fp_st(c,2,R(15)); goto L8c056efa; }
L8c056ef8:;
  fp_st(c,15,R(15));
L8c056efa:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  c->t=(R(9)&R(9))==0;
  R(10)=R(0);
  R(10)<<=2;
  R(10)<<=2;
  { uint32_t k=!c->t; R(10)+=R(9); if(k) goto L8c056f0c; }
  {  { f_8c057110(c); return; } }
L8c056f0c:;
  R(0)=0x8cu;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c056f18;
  {  { f_8c057110(c); return; } }
L8c056f18:;
  R(3)=LD32(R(15)+28);
  R(2)=R(13);
  R(2)-=R(3);
  { ST16(R(10),R(2)); { f_8c057110(c); return; } }
}
void f_8c056ee0(SH4Ctx *c) {
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(15));
  { fp_arith(c,1,2,3); goto L8c056ef4; }
L8c056ef4:;
  { fp_st(c,2,R(15)); goto L8c056efa; }
L8c056efa:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  c->t=(R(9)&R(9))==0;
  R(10)=R(0);
  R(10)<<=2;
  R(10)<<=2;
  { uint32_t k=!c->t; R(10)+=R(9); if(k) goto L8c056f0c; }
  {  { f_8c057110(c); return; } }
L8c056f0c:;
  R(0)=0x8cu;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c056f18;
  {  { f_8c057110(c); return; } }
L8c056f18:;
  R(3)=LD32(R(15)+28);
  R(2)=R(13);
  R(2)-=R(3);
  { ST16(R(10),R(2)); { f_8c057110(c); return; } }
}
void f_8c056f22(SH4Ctx *c) {
  R(1)=R(15);
  R(1)+=0x24u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=R(11);
  R(7)=R(15);
  R(6)=R(13);
  R(7)+=0x1cu;
  { c->pr=0x8c056f34u; R(4)=R(14); f_8c0569e2(c); }
  R(15)+=0x4u;
  c->t=(R(9)&R(9))==0;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c056f40; }
  {  goto L8c05710e; }
L8c056f40:;
  R(0)=0x18u;
  R(4)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(5)=0x20u;
  R(4)=R(4)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(c->t) goto L8c056f80;
  R(4)=0xffffffffu;
  { R(8)=R(4); goto L8c056fb6; }
L8c056f80:;
  R(5)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056f8c;
  R(2)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(!c->t) goto L8c056fa2;
L8c056f8c:;
  R(5)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056f9c;
  R(2)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(c->t) goto L8c056f9c;
  { R(4)+=0xffffffe0u; goto L8c056fa8; }
L8c056f9c:;
  R(5)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056fa6;
L8c056fa2:;
  { R(4)+=0xffffffc0u; goto L8c056fa8; }
L8c056fa6:;
  R(4)+=0xffffffe0u;
L8c056fa8:;
  R(0)=R(4);
  R(4)=0x8c0c6484u;
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(8)=LD32(R(4));
  R(0)=R(0)&0xFF;
  R(8)+=R(0);
L8c056fb6:;
  R(3)=0x8c0835bau;
  { c->pr=0x8c056fbcu; R(4)=LD32(R(14)+40); f_8c0835ba(c); }
  R(4)=(uint32_t)(int32_t)(int16_t)R(8);
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c056fc8; }
  {  goto L8c05710e; }
L8c056fc8:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056fd2;
  {  goto L8c05710e; }
L8c056fd2:;
  R(5)=LD32(R(14)+40);
  R(7)=R(8);
  R(3)=0x8c08358au;
  R(6)=R(12);
  { c->pr=0x8c056fdeu; R(4)=LD32(R(15)+8); f_8c08358a(c); }
  R(4)=LD32(R(11)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(8)=LD32(R(4)+R(0));
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c057020; }
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(8);
  { R(2)=LD32(R(4)); goto L8c057022; }
L8c057020:;
  R(2)=0x0u;
L8c057022:;
  R(1)=R(2);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(2)); if(k) goto L8c05710e; }
  R(0)=0x4u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  R(8)=LD32(R(15)+4);
  fp_arith(c,0,2,3);
  fp_ld(c,14,R(0)+R(14));
  R(3)=0x8c05e9c0u;
  R(8)=LD32(R(8)+32);
  fp_mov(c,4,14);
  fp_mov(c,12,2);
  fp_mov(c,5,14);
  { c->pr=0x8c057046u; fp_unary(c,0,4); f_8c05e9c0(c); }
  fp_arith(c,0,12,0);
  R(0)=0x4cu;
  R(3)=0x8c05e9c0u;
  fp_st(c,12,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,14,R(0)+R(14));
  fp_mov(c,4,14);
  fp_mov(c,5,14);
  { c->pr=0x8c05705eu; fp_unary(c,0,4); f_8c05e9c0(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  R(3)=0x8c01638au;
  R(5)+=0x4cu;
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c057072u; R(4)=R(8); f_8c01638a(c); }
  R(0)=0x8c0570a8u;
  c->fr[6]=0x3F800000u;
  fp_ld(c,7,R(0));
  R(0)=0x1cu;
  fp_ld(c,5,R(0)+R(14));
  fp_unary(c,0,6);
  fp_mov(c,4,5);
  fp_arith(c,0,4,6);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0570c0;
  { fp_mov(c,3,4); goto L8c0570ca; }
L8c0570c0:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c0570ca:;
  fp_cmp(c,1,3,7);
  if(!c->t) goto L8c05710e;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x44u;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x3cu;
  R(5)+=0x4cu;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x34u;
  R(6)+=0x40u;
  { uint32_t tg=R(3); c->pr=0x8c05710eu; R(4)=R(8); sh4_call(c,tg); }
L8c05710e:;
  R(12)+=0x1u;
  { f_8c057110(c); return; }
}
void f_8c056f60(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(8)+R(0));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(5)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056f8c;
  R(2)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(!c->t) goto L8c056fa2;
L8c056f8c:;
  R(5)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056f9c;
  R(2)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(c->t) goto L8c056f9c;
  { R(4)+=0xffffffe0u; goto L8c056fa8; }
L8c056f9c:;
  R(5)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056fa6;
L8c056fa2:;
  { R(4)+=0xffffffc0u; goto L8c056fa8; }
L8c056fa6:;
  R(4)+=0xffffffe0u;
L8c056fa8:;
  R(0)=R(4);
  R(4)=0x8c0c6484u;
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(8)=LD32(R(4));
  R(0)=R(0)&0xFF;
  R(8)+=R(0);
  R(3)=0x8c0835bau;
  { c->pr=0x8c056fbcu; R(4)=LD32(R(14)+40); f_8c0835ba(c); }
  R(4)=(uint32_t)(int32_t)(int16_t)R(8);
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c056fc8; }
  {  goto L8c05710e; }
L8c056fc8:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056fd2;
  {  goto L8c05710e; }
L8c056fd2:;
  R(5)=LD32(R(14)+40);
  R(7)=R(8);
  R(3)=0x8c08358au;
  R(6)=R(12);
  { c->pr=0x8c056fdeu; R(4)=LD32(R(15)+8); f_8c08358a(c); }
  R(4)=LD32(R(11)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(8)=LD32(R(4)+R(0));
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c057020; }
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(8);
  { R(2)=LD32(R(4)); goto L8c057022; }
L8c057020:;
  R(2)=0x0u;
L8c057022:;
  R(1)=R(2);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(2)); if(k) goto L8c05710e; }
  R(0)=0x4u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  R(8)=LD32(R(15)+4);
  fp_arith(c,0,2,3);
  fp_ld(c,14,R(0)+R(14));
  R(3)=0x8c05e9c0u;
  R(8)=LD32(R(8)+32);
  fp_mov(c,4,14);
  fp_mov(c,12,2);
  fp_mov(c,5,14);
  { c->pr=0x8c057046u; fp_unary(c,0,4); f_8c05e9c0(c); }
  fp_arith(c,0,12,0);
  R(0)=0x4cu;
  R(3)=0x8c05e9c0u;
  fp_st(c,12,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,14,R(0)+R(14));
  fp_mov(c,4,14);
  fp_mov(c,5,14);
  { c->pr=0x8c05705eu; fp_unary(c,0,4); f_8c05e9c0(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  R(3)=0x8c01638au;
  R(5)+=0x4cu;
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c057072u; R(4)=R(8); f_8c01638a(c); }
  R(0)=0x8c0570a8u;
  c->fr[6]=0x3F800000u;
  fp_ld(c,7,R(0));
  R(0)=0x1cu;
  fp_ld(c,5,R(0)+R(14));
  fp_unary(c,0,6);
  fp_mov(c,4,5);
  fp_arith(c,0,4,6);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0570c0;
  { fp_mov(c,3,4); goto L8c0570ca; }
L8c0570c0:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c0570ca:;
  fp_cmp(c,1,3,7);
  if(!c->t) goto L8c05710e;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x44u;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x3cu;
  R(5)+=0x4cu;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x34u;
  R(6)+=0x40u;
  { uint32_t tg=R(3); c->pr=0x8c05710eu; R(4)=R(8); sh4_call(c,tg); }
L8c05710e:;
  R(12)+=0x1u;
  { f_8c057110(c); return; }
}
void f_8c056f80(SH4Ctx *c) {
  R(5)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056f8c;
  R(2)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(!c->t) goto L8c056fa2;
L8c056f8c:;
  R(5)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056f9c;
  R(2)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(c->t) goto L8c056f9c;
  { R(4)+=0xffffffe0u; goto L8c056fa8; }
L8c056f9c:;
  R(5)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056fa6;
L8c056fa2:;
  { R(4)+=0xffffffc0u; goto L8c056fa8; }
L8c056fa6:;
  R(4)+=0xffffffe0u;
L8c056fa8:;
  R(0)=R(4);
  R(4)=0x8c0c6484u;
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(8)=LD32(R(4));
  R(0)=R(0)&0xFF;
  R(8)+=R(0);
  R(3)=0x8c0835bau;
  { c->pr=0x8c056fbcu; R(4)=LD32(R(14)+40); f_8c0835ba(c); }
  R(4)=(uint32_t)(int32_t)(int16_t)R(8);
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c056fc8; }
  {  goto L8c05710e; }
L8c056fc8:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c056fd2;
  {  goto L8c05710e; }
L8c056fd2:;
  R(5)=LD32(R(14)+40);
  R(7)=R(8);
  R(3)=0x8c08358au;
  R(6)=R(12);
  { c->pr=0x8c056fdeu; R(4)=LD32(R(15)+8); f_8c08358a(c); }
  R(4)=LD32(R(11)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(8)=LD32(R(4)+R(0));
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c057020; }
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(8);
  { R(2)=LD32(R(4)); goto L8c057022; }
L8c057020:;
  R(2)=0x0u;
L8c057022:;
  R(1)=R(2);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(2)); if(k) goto L8c05710e; }
  R(0)=0x4u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  R(8)=LD32(R(15)+4);
  fp_arith(c,0,2,3);
  fp_ld(c,14,R(0)+R(14));
  R(3)=0x8c05e9c0u;
  R(8)=LD32(R(8)+32);
  fp_mov(c,4,14);
  fp_mov(c,12,2);
  fp_mov(c,5,14);
  { c->pr=0x8c057046u; fp_unary(c,0,4); f_8c05e9c0(c); }
  fp_arith(c,0,12,0);
  R(0)=0x4cu;
  R(3)=0x8c05e9c0u;
  fp_st(c,12,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,14,R(0)+R(14));
  fp_mov(c,4,14);
  fp_mov(c,5,14);
  { c->pr=0x8c05705eu; fp_unary(c,0,4); f_8c05e9c0(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  R(3)=0x8c01638au;
  R(5)+=0x4cu;
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c057072u; R(4)=R(8); f_8c01638a(c); }
  R(0)=0x8c0570a8u;
  c->fr[6]=0x3F800000u;
  fp_ld(c,7,R(0));
  R(0)=0x1cu;
  fp_ld(c,5,R(0)+R(14));
  fp_unary(c,0,6);
  fp_mov(c,4,5);
  fp_arith(c,0,4,6);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0570c0;
  { fp_mov(c,3,4); goto L8c0570ca; }
L8c0570c0:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c0570ca:;
  fp_cmp(c,1,3,7);
  if(!c->t) goto L8c05710e;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x44u;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x3cu;
  R(5)+=0x4cu;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x34u;
  R(6)+=0x40u;
  { uint32_t tg=R(3); c->pr=0x8c05710eu; R(4)=R(8); sh4_call(c,tg); }
L8c05710e:;
  R(12)+=0x1u;
  { f_8c057110(c); return; }
}
