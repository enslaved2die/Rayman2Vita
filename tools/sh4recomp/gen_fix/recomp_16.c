#include "recomp_decls.h"
void f_8c091338(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(8)=0x1u;
  ST32(R(15),R(4));
  R(10)=0x0u;
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  { R(11)=R(10); goto L8c0914da; }
L8c091358:;
  R(9)=0x68u;
  R(3)=LD32(R(15)+4);
  c->macl=R(11)*R(9);
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
  if(!c->t) goto L8c091378;
  {  goto L8c0914d8; }
L8c091378:;
  R(5)=R(13);
  R(5)+=0x4u;
  { c->pr=0x8c091380u; R(4)=LD32(R(15)+8); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09138a;
  {  goto L8c0914d8; }
L8c09138a:;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c091396;
  {  goto L8c0914d8; }
L8c091396:;
  R(0)=LD32(R(13)+40);
  R(4)=0x4u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==4;
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0913aa;
  {  goto L8c0914d8; }
L8c0913aa:;
  { R(12)=R(10); goto L8c0914c2; }
L8c0913ae:;
  c->t=R(12)==R(11);
  if(!c->t) goto L8c0913b6;
  {  goto L8c0914c0; }
L8c0913b6:;
  c->macl=R(12)*R(9);
  R(3)=LD32(R(15)+4);
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
  if(!c->t) goto L8c0913d4;
  {  goto L8c0914c0; }
L8c0913d4:;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; ST32(R(15)+12,R(0)); if(k) goto L8c091420; }
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c091420;
  { R(3)=0x0u; goto L8c091422; }
L8c091420:;
  R(3)=0x1u;
L8c091422:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0914c0;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c091430u; R(4)=LD32(R(15)+8); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0914c0;
  R(5)=R(13);
  R(3)=0x8c05e612u;
  R(6)=R(14);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x10u;
  { c->pr=0x8c091446u; R(4)+=0x10u; f_8c05e612(c); }
  R(0)=0x8c091564u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0));
  R(0)=0x8c091568u;
  fp_ld(c,4,R(0));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,7,6);
  fp_arith(c,0,7,4);
  fp_cmp(c,1,7,3);
  if(!c->t) goto L8c091460;
  { fp_mov(c,3,7); goto L8c09146a; }
L8c091460:;
  fp_mov(c,2,6);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c09146a:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0914b6;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c091482;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,4); goto L8c09148c; }
L8c091482:;
  R(0)=0x14u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c09148c:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0914b6;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0914a4;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,4); goto L8c0914ae; }
L8c0914a4:;
  R(0)=0x18u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0914ae:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0914b6;
  { R(3)=0x1u; goto L8c0914b8; }
L8c0914b6:;
  R(3)=0x0u;
L8c0914b8:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0914c0;
  R(8)=R(10);
L8c0914c0:;
  R(12)+=0x1u;
L8c0914c2:;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  if(c->t) goto L8c0914cc;
  {  goto L8c0913ae; }
L8c0914cc:;
  R(1)=R(8)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0914d8;
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(13)+R(0),R(4));
L8c0914d8:;
  R(11)+=0x1u;
L8c0914da:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(c->t) goto L8c0914e4;
  {  goto L8c091358; }
L8c0914e4:;
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
void f_8c0914f8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(10)=R(7);
  c->t=(R(10)&R(10))==0;
  ST32(R(15),R(4));
  R(8)=R(5);
  { uint32_t k=!c->t; R(9)=R(6); if(k) goto L8c09151a; }
  {  goto L8c091614; }
L8c09151a:;
  R(13)=0x0u;
  { R(11)=R(13); goto L8c091596; }
L8c091520:;
  c->macl=R(11)*R(12);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(8);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c091594;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c091540u; R(4)=R(9); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c091594;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c091580;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c091580;
  { R(2)=0x0u; goto L8c091582; }
L8c091580:;
  R(2)=0x1u;
L8c091582:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c091594;
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(0)+R(10));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c091594;
  R(13)=R(14);
L8c091594:;
  R(11)+=0x1u;
L8c091596:;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(11)>=(int32_t)R(2);
  { uint32_t k=c->t; R(12)=0x68u; if(k) goto L8c0915a2; }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c091520;
L8c0915a2:;
  c->t=(R(13)&R(13))==0;
  R(11)=R(10);
  { uint32_t k=c->t; R(11)+=0x4u; if(k) goto L8c0915ae; }
  { R(5)=R(13); goto L8c0915b0; }
L8c0915ae:;
  R(5)=R(10);
L8c0915b0:;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c0915bau; R(4)+=0x10u; f_8c05e6ea(c); }
  { R(13)=0x0u; goto L8c09160e; }
L8c0915be:;
  c->macl=R(13)*R(12);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(8);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09160c;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0915deu; R(4)=R(9); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09160c;
  R(5)=R(14);
  R(6)=R(15);
  R(10)=0x8c05e612u;
  R(4)=R(15);
  R(5)+=0x10u;
  R(6)+=0x10u;
  { c->pr=0x8c0915f4u; R(4)+=0x4u; f_8c05e612(c); }
  R(10)=0x8c05e55cu;
  R(4)=R(15);
  R(5)=R(11);
  { c->pr=0x8c0915feu; R(4)+=0x4u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c09160c;
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(14)+R(0),R(4));
L8c09160c:;
  R(13)+=0x1u;
L8c09160e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c0915be;
L8c091614:;
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
void f_8c091628(SH4Ctx *c) {
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
  R(15)+=0xffffffecu;
  R(0)=0x40u;
  ST32(R(15),R(5));
  R(10)=0x0u;
  R(8)=R(4);
  R(2)=0x1u;
  R(12)=R(7);
  R(13)=R(10);
  ST32(R(15)+4,R(6));
  R(3)=LD32(R(15)+R(0));
  ST8(R(3),R(2));
  { R(11)=R(13); goto L8c0917aa; }
L8c091658:;
  R(4)=0x68u;
  R(3)=LD32(R(15)+4);
  c->macl=R(11)*R(4);
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
  if(!c->t) goto L8c091678;
  {  goto L8c0917a8; }
L8c091678:;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c091680u; R(4)=R(8); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09168a;
  {  goto L8c0917a8; }
L8c09168a:;
  c->t=(R(13)&R(13))==0;
  R(0)=0x8c0916ecu;
  { uint32_t k=!c->t; fp_ld(c,15,R(0)); if(k) goto L8c091700; }
  R(2)=LD32(R(8)+12);
  R(4)=0x10u;
  c->t=(R(2)&R(4))==0;
  { uint32_t k=c->t; R(13)=R(14); if(k) goto L8c0916ae; }
  fp_ld(c,2,R(13));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0916ae;
  {  goto L8c0917b4; }
L8c0916ae:;
  fp_ld(c,4,R(13));
  c->fr[3]=0x00000000u;
  fp_mov(c,5,4);
  fp_arith(c,0,5,15);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0916be;
  { fp_mov(c,14,5); goto L8c0917a8; }
L8c0916be:;
  R(0)=0x8c0916f0u;
  fp_mov(c,2,4);
  fp_ld(c,1,R(0));
  fp_unary(c,0,2);
  fp_mov(c,14,2);
  { fp_arith(c,0,14,1); goto L8c0917a8; }
L8c091700:;
  R(5)=R(13);
  R(6)=R(14);
  R(9)=0x8c05e612u;
  R(4)=R(15);
  R(5)+=0x10u;
  R(6)+=0x10u;
  { c->pr=0x8c091710u; R(4)+=0x8u; f_8c05e612(c); }
  R(0)=0x8c091864u;
  fp_ld(c,4,R(0));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0917a8;
  R(5)=R(14);
  R(9)=0x8c05e55cu;
  R(5)+=0x4u;
  { c->pr=0x8c091726u; R(4)=R(12); f_8c05e55c(c); }
  R(0)=0x8c09186cu;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0917a8;
  R(0)=0x4u;
  fp_ld(c,5,R(12));
  fp_ld(c,6,R(0)+R(12));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(12));
  R(0)=0x10u;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(c->t) goto L8c091756;
  fp_unary(c,0,5);
L8c091756:;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  c->fr[2]=0x00000000u;
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,5,3);
  fp_cmp(c,0,5,2);
  { uint32_t k=!c->t; R(5)=R(14); if(k) goto L8c091770; }
  c->fr[4]=0x3F800000u;
  { fp_mov(c,13,4); goto L8c091774; }
L8c091770:;
  fp_mov(c,13,4);
  fp_arith(c,3,13,5);
L8c091774:;
  R(4)=R(13);
  R(5)+=0x4u;
  { uint32_t tg=R(9); c->pr=0x8c09177cu; R(4)+=0x4u; sh4_call(c,tg); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,13);
  if(!c->t) goto L8c0917a8;
  fp_ld(c,5,R(14));
  c->fr[3]=0x00000000u;
  fp_mov(c,4,5);
  fp_arith(c,0,4,15);
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c09179a;
  R(0)=0x8c091870u;
  fp_mov(c,2,5);
  fp_ld(c,1,R(0));
  fp_unary(c,0,2);
  fp_mov(c,4,2);
  fp_arith(c,0,4,1);
L8c09179a:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c0917a8;
  R(0)=0x40u;
  fp_mov(c,14,4);
  R(3)=LD32(R(15)+R(0));
  R(13)=R(14);
  ST8(R(3),R(10));
L8c0917a8:;
  R(11)+=0x1u;
L8c0917aa:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(c->t) goto L8c0917b4;
  {  goto L8c091658; }
L8c0917b4:;
  R(0)=R(13);
  R(15)+=0x14u;
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
void f_8c0917d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(12)=0x0u;
  R(11)=R(7);
  R(0)=R(12);
  R(10)=R(12);
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  ST8(R(15)+12,R(0));
  R(0)=0x10u;
  ST8(R(15)+R(0),R(12));
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(11)+R(0));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c09180a; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c09180a;
  { R(3)=0x0u; goto L8c09180c; }
L8c09180a:;
  R(3)=0x1u;
L8c09180c:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c091816;
  { R(0)=0x0u; goto L8c091934; }
L8c091816:;
  { R(9)=R(12); goto L8c091928; }
L8c09181a:;
  R(4)=0x68u;
  R(3)=LD32(R(15)+8);
  c->macl=R(9)*R(4);
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
  if(!c->t) goto L8c09183a;
  {  goto L8c091926; }
L8c09183a:;
  c->t=R(14)==R(11);
  { uint32_t k=!c->t; R(13)=0x1u; if(k) goto L8c091880; }
  R(0)=0x10u;
  { ST8(R(15)+R(0),R(13)); goto L8c091926; }
L8c091880:;
  R(5)=R(14);
  R(8)=0x8c05e612u;
  R(5)+=0x4u;
  { c->pr=0x8c09188au; R(4)=LD32(R(15)); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0918d2;
  R(5)=R(11);
  R(6)=R(14);
  R(4)=R(15);
  R(5)+=0x10u;
  R(6)+=0x10u;
  { uint32_t tg=R(8); c->pr=0x8c09189eu; R(4)+=0x14u; sh4_call(c,tg); }
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091926;
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091926;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091926;
  R(0)=0x40u;
  R(8)=0x8c05e55cu;
  R(5)=LD32(R(15)+R(0));
  R(4)=R(14);
  { c->pr=0x8c0918c6u; R(4)+=0x4u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c091926;
  { R(10)=R(13); goto L8c091926; }
L8c0918d2:;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0918dau; R(4)=LD32(R(15)); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c091926;
  R(5)=R(11);
  R(6)=R(14);
  R(4)=R(15);
  R(5)+=0x10u;
  R(6)+=0x10u;
  { uint32_t tg=R(8); c->pr=0x8c0918eeu; R(4)+=0x14u; sh4_call(c,tg); }
  R(0)=0x8c091968u;
  fp_ld(c,5,R(0));
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c091926;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091912;
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091912;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c091926;
L8c091912:;
  R(2)=R(10)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c091926;
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c091926;
  R(0)=R(13);
  R(10)=R(12);
  ST8(R(15)+12,R(0));
L8c091926:;
  R(9)+=0x1u;
L8c091928:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  if(c->t) goto L8c091932;
  {  goto L8c09181a; }
L8c091932:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
L8c091934:;
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
void f_8c091980(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(6)=R(4);
  R(14)=R(4);
  R(4)=0xe0u;
  R(6)+=0x78u;
  R(3)=0x8c05e612u;
  R(6)+=0x58u;
  R(4)+=R(14);
  fp_mov(c,15,4);
  R(5)=R(4);
  R(5)+=0x58u;
  { c->pr=0x8c0919a0u; R(4)=R(15); f_8c05e612(c); }
  fp_ld(c,3,R(15));
  R(0)=0x4u;
  R(3)=0x8c05e6eau;
  R(4)=R(14);
  fp_arith(c,3,3,15);
  R(5)=R(15);
  fp_st(c,3,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,3,3,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,3,3,15);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0919c4u; R(4)+=0x3cu; sh4_call(c,tg); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0919ce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(R(4)+12);
  R(14)=R(4);
  R(13)=0xe0u;
  R(12)=0x8c0685b4u;
  c->t=(R(0)&0x4)==0;
  R(13)+=R(4);
  { uint32_t k=c->t; R(14)+=0x78u; if(k) goto L8c091a00; }
  R(2)=0x2b0u;
  R(6)=0x68u;
  R(3)=0x318u;
  R(2)+=R(4);
  R(4)+=R(3);
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c0919f8u; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c091a00u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c091a00:;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c091a08u; R(4)=R(14); sh4_call(c,tg); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c091a14(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(3)=0x8c015570u;
  R(14)=R(4);
  ST32(R(15),R(5));
  { c->pr=0x8c091a24u; R(4)=R(5); f_8c015570(c); }
  R(0)=0x48u;
  c->fr[4]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x14u;
  R(3)=0x8c015ebcu;
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  R(5)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x4u;
  R(6)+=0x10u;
  { uint32_t tg=R(3); c->pr=0x8c091a68u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c091aa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  R(13)+=0x58u;
  R(14)+=0x58u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(13));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ad8;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ad8;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ad8;
  { c->pr=0x8c091aceu;  f_8c091baa(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c091ad8;
  { R(0)=0x1u; goto L8c091ada; }
L8c091ad8:;
  R(0)=0x0u;
L8c091ada:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c091ae2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(6)=R(15);
  R(3)=0x8c015ea8u;
  R(7)=R(15);
  ST32(R(15)+24,R(5));
  R(5)=R(15);
  R(7)+=0x14u;
  R(6)+=0x10u;
  { c->pr=0x8c091af8u; R(5)+=0x4u; f_8c015ea8(c); }
  R(6)=R(15);
  R(3)=0x8c015ea8u;
  R(7)=R(15);
  R(5)=R(15);
  R(7)+=0xcu;
  R(6)+=0x8u;
  { c->pr=0x8c091b08u; R(4)=LD32(R(15)+24); f_8c015ea8(c); }
  R(3)=LD32(R(15));
  R(0)=LD32(R(15)+4);
  fp_ld(c,3,R(3));
  fp_ld(c,2,R(0));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ba0;
  R(3)=LD32(R(15));
  R(2)=0x4u;
  R(0)=LD32(R(15)+4);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ba0;
  R(3)=LD32(R(15));
  R(2)=0x8u;
  R(0)=LD32(R(15)+4);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x8u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ba0;
  R(3)=LD32(R(15)+8);
  R(0)=LD32(R(15)+16);
  fp_ld(c,3,R(3));
  fp_ld(c,2,R(0));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ba0;
  R(3)=LD32(R(15)+8);
  R(2)=0x4u;
  R(0)=LD32(R(15)+16);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ba0;
  R(3)=LD32(R(15)+8);
  R(2)=0x8u;
  R(0)=LD32(R(15)+16);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x8u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ba0;
  R(3)=LD32(R(15)+12);
  R(0)=LD32(R(15)+20);
  fp_ld(c,3,R(3));
  fp_ld(c,2,R(0));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ba0;
  R(3)=LD32(R(15)+12);
  R(2)=0x4u;
  R(0)=LD32(R(15)+20);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ba0;
  R(3)=LD32(R(15)+12);
  R(2)=0x8u;
  R(0)=LD32(R(15)+20);
  R(2)+=R(3);
  fp_ld(c,3,R(2));
  R(2)=0x8u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091ba0;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c091ba0:;
  R(0)=0x0u;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c091baa(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  R(6)=R(15);
  R(3)=0x8c0162d4u;
  R(7)=R(15);
  ST32(R(15),R(5));
  R(5)=R(15);
  R(7)+=0x28u;
  R(6)+=0x34u;
  { c->pr=0x8c091bc0u; R(5)+=0x40u; f_8c0162d4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c0162d4u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c091bd2u; R(4)=LD32(R(15)); f_8c0162d4(c); }
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091c80;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091c80;
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091c80;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091c80;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091c80;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091c80;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091c80;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091c80;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c091c80;
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c091c80:;
  R(0)=0x0u;
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c091c8a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x4u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  R(5)=0xe0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)+=R(4);
  R(4)+=0x78u;
  R(12)=R(5);
  R(14)=R(4);
  R(14)+=0x58u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,3,R(14));
  R(12)+=0x58u;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  R(4)=c->fpul;
  fp_ftrc(c,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  R(5)=c->fpul;
  fp_ftrc(c,3);
  R(6)=c->fpul;
  c->fpul=R(4);
  fp_float(c,3);
  c->fpul=R(5);
  fp_float(c,2);
  c->fpul=R(6);
  fp_st(c,3,R(13));
  fp_float(c,3);
  fp_st(c,2,R(0)+R(13));
  R(3)=0x8c05e612u;
  R(0)=0x8u;
  R(5)=R(12);
  fp_st(c,3,R(0)+R(13));
  R(6)=R(13);
  { c->pr=0x8c091cd8u; R(4)=R(12); f_8c05e612(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(6)=R(13);
  R(2)=0x8c05e612u;
  R(4)=R(14);
  R(5)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e612(c); return; } }
}
void f_8c091cea(SH4Ctx *c) {
  R(3)=0xe0u;
  R(6)=R(5);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=R(3);
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(14)+=0x58u;
  R(4)=R(14);
  R(5)=R(14);
  R(15)+=0x4u;
  R(2)=0x8c05e5f4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e5f4(c); return; } }
}
void f_8c091d40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(0)=0x48u;
  c->fr[4]=0x00000000u;
  ST32(R(15),R(5));
  R(7)=R(15);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x1cu;
  R(5)=R(15);
  R(6)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x14u;
  R(5)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  R(6)+=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x4u;
  R(3)=0x8c015ebcu;
  { c->pr=0x8c091d8au; R(4)=LD32(R(15)); f_8c015ebc(c); }
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c091d92(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=0xe0u;
  R(3)=0x8c05e612u;
  R(14)+=R(4);
  ST32(R(15),R(5));
  R(4)+=0x78u;
  R(6)=R(14);
  R(13)=R(4);
  R(4)=R(15);
  R(13)+=0x58u;
  R(6)+=0x58u;
  { c->pr=0x8c091db2u; R(4)+=0x4u; f_8c05e612(c); }
  R(3)=0x8c01638au;
  R(5)=LD32(R(15));
  { c->pr=0x8c091dbau; R(4)=R(14); f_8c01638a(c); }
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x4u;
  { c->pr=0x8c091dc6u; R(4)=R(13); f_8c05e5f4(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c091dd0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  ST32(R(15),R(4));
  R(3)=0xe0u;
  ST32(R(15)+4,R(5));
  R(4)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  R(4)+=R(3);
  R(2)=0x8c05e5f4u;
  R(5)=R(4);
  R(4)=R(15);
  R(5)+=0x58u;
  { c->pr=0x8c091decu; R(4)+=0x8u; f_8c05e5f4(c); }
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c091df4u; R(4)=LD32(R(15)); f_8c091d92(c); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c091e20(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  R(3)+=0x58u;
  R(5)=R(3);
  ST32(R(15),R(3));
  { R(15)+=0x4u; { f_8c091d92(c); return; } }
}
void f_8c091e2e(SH4Ctx *c) {
  R(0)=0x48u;
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(5));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,2,2,3);
  { fp_st(c,2,R(0)+R(5)); return; }
}
void f_8c091e52(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(13)=R(4);
  R(4)=0xe0u;
  R(5)=R(13);
  R(5)+=0x78u;
  R(4)+=R(13);
  R(14)=R(5);
  R(12)=R(4);
  R(12)+=0x58u;
  R(3)=0x8c05e612u;
  R(14)+=0x58u;
  R(4)=R(15);
  R(5)=R(12);
  fp_st(c,4,R(15));
  R(6)=R(14);
  { c->pr=0x8c091e7cu; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x8c091ec8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,5,R(0));
  R(0)=0x8c091eccu;
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,6,1);
  fp_arith(c,0,6,4);
  fp_cmp(c,1,6,2);
  if(!c->t) goto L8c091e96;
  { fp_mov(c,3,6); goto L8c091e9c; }
L8c091e96:;
  fp_mov(c,3,1);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c091e9c:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c091f14;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c091ee0;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,4); goto L8c091eea; }
L8c091ee0:;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c091eea:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c091f14;
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c091f02;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,4); goto L8c091f0c; }
L8c091f02:;
  R(0)=0xcu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c091f0c:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c091f14;
  { R(3)=0x1u; goto L8c091f16; }
L8c091f14:;
  R(3)=0x0u;
L8c091f16:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c091f54;
  R(0)=0x8u;
  fp_mov(c,0,1);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_fmac(c,3,1);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,2,4,3); goto L8c091f5e; }
L8c091f54:;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
L8c091f5e:;
  R(5)=R(13);
  R(3)=0x8c05e55cu;
  R(0)=0xcu;
  R(4)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(5)+=0x3cu;
  { c->pr=0x8c091f6eu; R(4)+=0x4u; f_8c05e55c(c); }
  fp_ld(c,4,R(15));
  R(0)=0x4u;
  fp_mov(c,5,0);
  R(6)=R(15);
  fp_arith(c,2,4,5);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=0x8c05e5f4u;
  R(5)=R(14);
  R(6)+=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c091fa2u; R(4)=R(12); sh4_call(c,tg); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c091fae(SH4Ctx *c) {
  fp_arith(c,3,4,5);
  fp_ftrc(c,4);
  R(4)=c->fpul;
  c->fpul=R(4);
  fp_float(c,3);
  fp_mov(c,0,3);
  { fp_arith(c,2,0,5); return; }
}
void f_8c091fbe(SH4Ctx *c) {
  fp_ld(c,6,R(4));
  R(0)=0x4u;
  fp_mov(c,5,4);
  fp_arith(c,3,6,5);
  fp_ftrc(c,6);
  R(5)=c->fpul;
  c->fpul=R(5);
  fp_float(c,3);
  fp_mov(c,6,3);
  fp_mov(c,7,3);
  fp_arith(c,2,7,5);
  fp_st(c,7,R(4));
  fp_ld(c,6,R(0)+R(4));
  fp_arith(c,3,6,5);
  fp_ftrc(c,6);
  R(5)=c->fpul;
  c->fpul=R(5);
  fp_float(c,3);
  fp_mov(c,7,3);
  fp_arith(c,2,7,5);
  fp_mov(c,6,3);
  fp_st(c,7,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(4));
  fp_arith(c,3,5,4);
  fp_ftrc(c,5);
  R(5)=c->fpul;
  c->fpul=R(5);
  fp_float(c,3);
  fp_mov(c,6,3);
  fp_arith(c,2,6,4);
  fp_mov(c,5,3);
  { fp_st(c,6,R(0)+R(4)); return; }
}
void f_8c092002(SH4Ctx *c) {
  c->fr[5]=0x3F800000u;
  fp_cmp(c,1,5,4);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c092010;
  { fp_mov(c,15,4); goto L8c092062; }
L8c092010:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c092060;
  fp_mov(c,15,5);
  fp_arith(c,1,15,4);
  fp_mov(c,2,15);
  fp_arith(c,2,15,2);
  fp_mov(c,2,15);
  fp_arith(c,2,15,2);
  fp_mov(c,2,15);
  fp_mov(c,15,5);
  { fp_arith(c,1,15,2); goto L8c092062; }
L8c092060:;
  fp_mov(c,15,3);
L8c092062:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0920aa;
  R(3)=0x8c123bc4u;
  R(0)=0x8c092160u;
  fp_ld(c,3,R(0));
  fp_ld(c,2,R(3));
  c->fr[1]=0x00000000u;
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c092082;
  R(3)=0x8c123bc4u;
  fp_mov(c,2,3);
  fp_ld(c,3,R(3));
  { fp_arith(c,0,3,2); goto L8c092090; }
L8c092082:;
  R(2)=0x8c123bc4u;
  R(0)=0x8c092168u;
  fp_ld(c,0,R(0));
  fp_ld(c,2,R(2));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,0);
L8c092090:;
  R(0)=0x8c09216cu;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0920aa;
  R(3)=0x8c123bc4u;
  R(0)=0x8c092170u;
  fp_ld(c,3,R(0));
  fp_ld(c,5,R(3));
  R(2)=0x8c09cff8u;
  fp_arith(c,2,5,3);
  { c->pr=0x8c0920a8u; fp_mov(c,4,15); f_8c09cff8(c); }
  fp_mov(c,15,0);
L8c0920aa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_mov(c,0,15);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c0920b2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05e55cu;
  { c->pr=0x8c0920c0u; R(14)=R(5); f_8c05e55c(c); }
  R(0)=0x4u;
  fp_ld(c,5,R(13));
  fp_ld(c,10,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,9,R(0)+R(13));
  R(0)=0x4u;
  fp_mov(c,3,10);
  fp_arith(c,2,3,10);
  fp_mov(c,4,0);
  fp_ld(c,7,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,2,7);
  fp_arith(c,2,2,7);
  fp_mov(c,0,9);
  fp_ld(c,6,R(14));
  fp_ld(c,8,R(0)+R(14));
  fp_fmac(c,3,9);
  fp_mov(c,0,6);
  fp_fmac(c,2,6);
  fp_mov(c,0,8);
  fp_mov(c,6,4);
  fp_unary(c,2,3);
  fp_fmac(c,2,8);
  fp_unary(c,2,2);
  fp_mov(c,5,3);
  fp_arith(c,2,5,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,6,5);
  fp_cmp(c,1,6,2);
  if(!c->t) goto L8c092104;
  { fp_mov(c,3,6); goto L8c092108; }
L8c092104:;
  fp_mov(c,3,5);
  fp_arith(c,1,3,4);
L8c092108:;
  R(0)=0x8c09217cu;
  fp_ld(c,2,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_cmp(c,1,2,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(0)=c->t;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c092118(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,5,R(4));
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,7,R(0)+R(4));
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_unary(c,2,3);
  fp_mov(c,5,3);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c092142;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
L8c092142:;
  {  return; }
}
void f_8c092146(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { R(13)=0x0u; { f_8c092246(c); return; } }
}
void f_8c092180(SH4Ctx *c) {
  R(4)=0x68u;
  R(3)=LD32(R(15)+4);
  c->macl=R(13)*R(4);
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
  if(c->t) goto L8c092244;
  R(0)=LD32(R(14)+32);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0921b8;
  R(2)=LD32(R(14)+32);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0921b8;
  { R(3)=0x1u; goto L8c0921ba; }
L8c0921b8:;
  R(3)=0x0u;
L8c0921ba:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c092220;
  R(0)=LD32(R(14)+28);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0921de;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0921de;
  { R(1)=0x1u; goto L8c0921e0; }
L8c0921de:;
  R(1)=0x0u;
L8c0921e0:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c092220;
  { R(3)=0x1u; goto L8c092222; }
L8c092220:;
  R(3)=0x0u;
L8c092222:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c092244;
  R(5)=R(14);
  R(12)=0x8c05e55cu;
  R(4)=R(14);
  R(5)+=0x3cu;
  { c->pr=0x8c092234u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c092284u;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c092244;
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(14)+R(0),R(4));
L8c092244:;
  R(13)+=0x1u;
  { f_8c092246(c); return; }
}
void f_8c092200(SH4Ctx *c) {
  c->t=R(0)>>31;R(0)<<=1;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(3)=0x0u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c092244;
  R(5)=R(14);
  R(12)=0x8c05e55cu;
  R(4)=R(14);
  R(5)+=0x3cu;
  { c->pr=0x8c092234u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c092284u;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c092244;
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(14)+R(0),R(4));
L8c092244:;
  R(13)+=0x1u;
  { f_8c092246(c); return; }
}
void f_8c092220(SH4Ctx *c) {
  R(3)=0x0u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c092244;
  R(5)=R(14);
  R(12)=0x8c05e55cu;
  R(4)=R(14);
  R(5)+=0x3cu;
  { c->pr=0x8c092234u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c092284u;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c092244;
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(14)+R(0),R(4));
L8c092244:;
  R(13)+=0x1u;
  { f_8c092246(c); return; }
}
void f_8c092246(SH4Ctx *c) {
  R(3)=LD32(R(15));
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) { f_8c092180(c); return; }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c092258(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(0)=0x44u;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  R(12)=R(6);
  ST32(R(15)+4,R(7));
  R(8)=LD32(R(15)+R(0));
  { R(11)=0x0u; goto L8c0923bc; }
L8c0922a0:;
  R(4)=0x68u;
  R(3)=LD32(R(15)+8);
  c->macl=R(11)*R(4);
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
  if(!c->t) goto L8c0922c0;
  {  goto L8c0923ba; }
L8c0922c0:;
  R(3)=0x8c090d60u;
  R(5)=R(14);
  R(9)=0x8c05e55cu;
  R(5)+=0x4u;
  R(10)=0x8c05e612u;
  R(13)=0x63u;
  { c->pr=0x8c0922d0u; R(4)=R(12); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c092380;
  R(5)=LD32(R(15)+4);
  R(4)=R(14);
  { uint32_t tg=R(9); c->pr=0x8c0922deu; R(4)+=0x4u; sh4_call(c,tg); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c092344;
  R(6)=0xd0u;
  R(5)=R(14);
  R(4)=R(15);
  R(5)+=0x10u;
  R(6)+=R(12);
  { uint32_t tg=R(10); c->pr=0x8c0922f4u; R(4)+=0x18u; sh4_call(c,tg); }
  R(0)=0x1e0u;
  R(6)=R(15);
  R(5)=R(15);
  R(5)+=0x18u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xcu;
  R(4)=R(15);
  R(6)+=0xcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1e4u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1e8u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(10); c->pr=0x8c09232cu; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x18u;
  { uint32_t tg=R(9); c->pr=0x8c092336u; R(4)+=0x4u; sh4_call(c,tg); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0923ba;
  R(0)=0x2eu;
  { ST16(R(14)+R(0),R(13)); goto L8c0923ba; }
L8c092344:;
  R(0)=0x2eu;
  { ST16(R(14)+R(0),R(13)); goto L8c0923ba; }
L8c092380:;
  R(2)=0x8c090dacu;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c09238au; R(4)=R(12); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0923ba;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0923ba;
  R(5)=R(14);
  R(6)=R(8);
  R(4)=R(15);
  R(5)+=0x10u;
  R(6)+=0x10u;
  { uint32_t tg=R(10); c->pr=0x8c0923a2u; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(8);
  R(5)+=0x18u;
  { uint32_t tg=R(9); c->pr=0x8c0923acu; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x8c0924e4u;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0923ba;
  R(0)=0x2eu;
  ST16(R(14)+R(0),R(13));
L8c0923ba:;
  R(11)+=0x1u;
L8c0923bc:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(c->t) goto L8c0923c6;
  {  goto L8c0922a0; }
L8c0923c6:;
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
void f_8c0923da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  c->fr[3]=0x00000000u;
  R(0)=0x10u;
  ST32(R(15)+8,R(4));
  R(10)=R(6);
  ST32(R(15)+12,R(5));
  ST32(R(15)+4,R(7));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  { R(12)=0x0u; { f_8c0924b6(c); return; } }
}
void f_8c092404(SH4Ctx *c) {
  R(4)=0x68u;
  R(3)=LD32(R(15)+12);
  c->macl=R(12)*R(4);
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
  if(c->t) { f_8c0924b4(c); return; }
  R(4)=LD32(R(14)+32);
  R(11)=0x8c05e55cu;
  ST32(R(15),R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=0x63u; if(k) goto L8c09243e; }
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x20u;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c09243e;
  { R(2)=0x1u; goto L8c092440; }
L8c09243e:;
  R(2)=0x0u;
L8c092440:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09247c;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c09245c;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c09245c;
  { R(3)=0x1u; goto L8c09245e; }
L8c09245c:;
  R(3)=0x0u;
L8c09245e:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09247c;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x10u;
  { uint32_t tg=R(11); c->pr=0x8c09246eu; R(4)+=0x4u; sh4_call(c,tg); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) { f_8c0924b4(c); return; }
  R(0)=0x2eu;
  { ST16(R(14)+R(0),R(13)); { f_8c0924b4(c); return; } }
L8c09247c:;
  R(2)=0x8c090decu;
  R(5)=R(14);
  { c->pr=0x8c092484u; R(4)=R(10); f_8c090dec(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c092490;
  R(0)=0x2eu;
  { ST16(R(14)+R(0),R(13)); { f_8c0924b4(c); return; } }
L8c092490:;
  R(2)=0x8c090d60u;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c09249au; R(4)=R(10); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) { f_8c0924b4(c); return; }
  R(5)=LD32(R(15)+4);
  R(4)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0924a8u; R(4)+=0x4u; sh4_call(c,tg); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  { f_8c0924ae(c); return; }
}
void f_8c0924ae(SH4Ctx *c) {
  if(!c->t) { f_8c0924b4(c); return; }
  R(0)=0x2eu;
  ST16(R(14)+R(0),R(13));
  { f_8c0924b4(c); return; }
}
void f_8c0924b4(SH4Ctx *c) {
  R(12)+=0x1u;
  { f_8c0924b6(c); return; }
}
void f_8c0924b6(SH4Ctx *c) {
  R(3)=LD32(R(15)+8);
  c->t=(int32_t)R(12)>=(int32_t)R(3);
  if(!c->t) { f_8c092404(c); return; }
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c092500(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  ST32(R(15)+24,R(4));
  ST32(R(15)+16,R(5));
  ST32(R(15)+20,R(6));
  ST32(R(15)+28,R(7));
  { R(12)=0x0u; { f_8c0925fc(c); return; } }
}
void f_8c092518(SH4Ctx *c) {
  R(4)=0x68u;
  R(3)=LD32(R(15)+16);
  c->macl=R(12)*R(4);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  { f_8c092530(c); return; }
}
void f_8c092530(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0925fa;
  R(3)=0xe0u;
  R(7)=R(15);
  R(4)=LD32(R(15)+20);
  R(6)=R(15);
  R(13)=0x8c015ea8u;
  R(5)=R(15);
  R(4)+=R(3);
  R(7)+=0xcu;
  { c->pr=0x8c092548u; R(5)+=0x8u; f_8c015ea8(c); }
  R(5)=LD32(R(15));
  R(4)=R(14);
  R(11)=0x8c05e55cu;
  { c->pr=0x8c092552u; R(4)+=0x4u; f_8c05e55c(c); }
  R(4)=LD32(R(14)+32);
  fp_mov(c,4,0);
  ST32(R(15)+4,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=0x63u; if(k) goto L8c092570; }
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c092570;
  { R(2)=0x1u; goto L8c092572; }
L8c092570:;
  R(2)=0x0u;
L8c092572:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0925d6;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0925c0;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0925c0;
  { R(3)=0x1u; goto L8c0925c2; }
L8c0925c0:;
  R(3)=0x0u;
L8c0925c2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0925d6;
  R(0)=0x8c092640u;
  fp_ld(c,5,R(0));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0925fa;
  R(0)=0x2eu;
  { ST16(R(14)+R(0),R(13)); goto L8c0925fa; }
L8c0925d6:;
  R(0)=0x8c092644u;
  fp_ld(c,5,R(0));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0925e4;
  R(0)=0x2eu;
  { ST16(R(14)+R(0),R(13)); goto L8c0925fa; }
L8c0925e4:;
  R(5)=LD32(R(15)+28);
  R(4)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0925ecu; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x8c092648u;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0925fa;
  R(0)=0x2eu;
  ST16(R(14)+R(0),R(13));
L8c0925fa:;
  R(12)+=0x1u;
  { f_8c0925fc(c); return; }
}
void f_8c0925fc(SH4Ctx *c) {
  R(3)=LD32(R(15)+24);
  c->t=(int32_t)R(12)>=(int32_t)R(3);
  if(!c->t) { f_8c092518(c); return; }
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c092610(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  ST32(R(15)+8,R(6));
  { R(11)=0x0u; { f_8c092830(c); return; } }
}
void f_8c092640(SH4Ctx *c) {
  fp_arith(c,3,13,15);
  { c->pr=0x8c092646u; c->t=(int32_t)R(3)>=(int32_t)R(3); f_8c0924ae(c); }
  { c->pr=0x8c09264au; ST32(R(2)+56,R(6)); f_8c092530(c); }
  c->t=(int32_t)R(10)>=(int32_t)R(8);
  
  
  
  
  
  
  
  
  
  
  { f_8c092660(c); return; }
}
void f_8c092660(SH4Ctx *c) {
  R(4)=0x68u;
  R(3)=LD32(R(15));
  c->macl=R(11)*R(4);
  R(0)=0x2eu;
  R(10)=c->macl;
  R(10)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(10)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c092680;
  {  goto L8c09282e; }
L8c092680:;
  R(0)=LD32(R(10)+32);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c09269c;
  R(2)=LD32(R(10)+32);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c09269c;
  { R(3)=0x1u; goto L8c09269e; }
L8c09269c:;
  R(3)=0x0u;
L8c09269e:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c092700;
  R(0)=LD32(R(10)+28);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0926c2;
  R(2)=LD32(R(10)+28);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0926c2;
  { R(1)=0x1u; goto L8c0926c4; }
L8c0926c2:;
  R(1)=0x0u;
L8c0926c4:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c092700;
  { R(3)=0x1u; goto L8c092702; }
L8c092700:;
  R(3)=0x0u;
L8c092702:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09270c;
  {  goto L8c09282e; }
L8c09270c:;
  R(0)=0x8c092860u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0));
  R(0)=0x8c092864u;
  fp_ld(c,4,R(0));
  R(0)=0x3cu;
  fp_ld(c,6,R(0)+R(10));
  fp_mov(c,7,6);
  fp_arith(c,0,7,4);
  fp_cmp(c,1,7,3);
  if(!c->t) goto L8c092726;
  { fp_mov(c,3,7); goto L8c092730; }
L8c092726:;
  fp_mov(c,2,6);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c092730:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c092774;
  R(0)=0x40u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(10));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c092746;
  fp_ld(c,3,R(0)+R(10));
  { fp_arith(c,0,3,4); goto L8c09274e; }
L8c092746:;
  fp_ld(c,3,R(0)+R(10));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c09274e:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c092774;
  R(0)=0x44u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(10));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c092764;
  fp_ld(c,3,R(0)+R(10));
  { fp_arith(c,0,3,4); goto L8c09276c; }
L8c092764:;
  fp_ld(c,3,R(0)+R(10));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c09276c:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c092774;
  { R(3)=0x1u; goto L8c092776; }
L8c092774:;
  R(3)=0x0u;
L8c092776:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0927b8;
  R(0)=0x3cu;
  fp_ld(c,4,R(0)+R(10));
  R(0)=0x40u;
  fp_ld(c,6,R(0)+R(10));
  R(0)=0x44u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(10));
  R(0)=0x3cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(10));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(10));
  { fp_arith(c,2,4,3); goto L8c0927c2; }
L8c0927b8:;
  R(0)=0xcu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
L8c0927c2:;
  R(13)=0x8c05e55cu;
  R(5)=R(15);
  R(0)=0x14u;
  R(4)=R(10);
  R(5)+=0xcu;
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0927d2u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c09286cu;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0));
  fp_cmp(c,1,4,5);
  { uint32_t k=c->t; R(14)=0x63u; if(k) goto L8c0927f2; }
  R(2)=LD32(R(15)+8);
  R(4)=0x400000u;
  R(3)=LD32(R(2)+12);
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c09282e;
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(10));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0927f8;
L8c0927f2:;
  R(0)=0x2eu;
  { ST16(R(10)+R(0),R(14)); goto L8c09282e; }
L8c0927f8:;
  R(5)=R(10);
  R(6)=R(10);
  R(12)=0x8c05e612u;
  R(4)=R(15);
  R(5)+=0x10u;
  R(6)+=0x48u;
  { c->pr=0x8c092808u; R(4)+=0xcu; f_8c05e612(c); }
  R(5)=R(15);
  R(6)=R(10);
  R(12)=0x8c05e5f4u;
  R(4)=R(15);
  R(5)+=0xcu;
  R(6)+=0x3cu;
  { c->pr=0x8c092818u; R(4)+=0xcu; f_8c05e5f4(c); }
  R(5)=R(15);
  R(4)=R(10);
  R(5)+=0xcu;
  { uint32_t tg=R(13); c->pr=0x8c092822u; R(4)+=0x4u; sh4_call(c,tg); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c09282e;
  R(0)=0x2eu;
  ST16(R(10)+R(0),R(14));
L8c09282e:;
  R(11)+=0x1u;
  { f_8c092830(c); return; }
}
void f_8c0926e0(SH4Ctx *c) {
  c->t=R(0)>>31;R(0)<<=1;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(3)=0x0u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09270c;
  {  goto L8c09282e; }
L8c09270c:;
  R(0)=0x8c092860u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0));
  R(0)=0x8c092864u;
  fp_ld(c,4,R(0));
  R(0)=0x3cu;
  fp_ld(c,6,R(0)+R(10));
  fp_mov(c,7,6);
  fp_arith(c,0,7,4);
  fp_cmp(c,1,7,3);
  if(!c->t) goto L8c092726;
  { fp_mov(c,3,7); goto L8c092730; }
L8c092726:;
  fp_mov(c,2,6);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c092730:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c092774;
  R(0)=0x40u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(10));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c092746;
  fp_ld(c,3,R(0)+R(10));
  { fp_arith(c,0,3,4); goto L8c09274e; }
L8c092746:;
  fp_ld(c,3,R(0)+R(10));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c09274e:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c092774;
  R(0)=0x44u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(10));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c092764;
  fp_ld(c,3,R(0)+R(10));
  { fp_arith(c,0,3,4); goto L8c09276c; }
L8c092764:;
  fp_ld(c,3,R(0)+R(10));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c09276c:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c092774;
  { R(3)=0x1u; goto L8c092776; }
L8c092774:;
  R(3)=0x0u;
L8c092776:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0927b8;
  R(0)=0x3cu;
  fp_ld(c,4,R(0)+R(10));
  R(0)=0x40u;
  fp_ld(c,6,R(0)+R(10));
  R(0)=0x44u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(10));
  R(0)=0x3cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(10));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(10));
  { fp_arith(c,2,4,3); goto L8c0927c2; }
L8c0927b8:;
  R(0)=0xcu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
L8c0927c2:;
  R(13)=0x8c05e55cu;
  R(5)=R(15);
  R(0)=0x14u;
  R(4)=R(10);
  R(5)+=0xcu;
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0927d2u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c09286cu;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0));
  fp_cmp(c,1,4,5);
  { uint32_t k=c->t; R(14)=0x63u; if(k) goto L8c0927f2; }
  R(2)=LD32(R(15)+8);
  R(4)=0x400000u;
  R(3)=LD32(R(2)+12);
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c09282e;
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(10));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0927f8;
L8c0927f2:;
  R(0)=0x2eu;
  { ST16(R(10)+R(0),R(14)); goto L8c09282e; }
L8c0927f8:;
  R(5)=R(10);
  R(6)=R(10);
  R(12)=0x8c05e612u;
  R(4)=R(15);
  R(5)+=0x10u;
  R(6)+=0x48u;
  { c->pr=0x8c092808u; R(4)+=0xcu; f_8c05e612(c); }
  R(5)=R(15);
  R(6)=R(10);
  R(12)=0x8c05e5f4u;
  R(4)=R(15);
  R(5)+=0xcu;
  R(6)+=0x3cu;
  { c->pr=0x8c092818u; R(4)+=0xcu; f_8c05e5f4(c); }
  R(5)=R(15);
  R(4)=R(10);
  R(5)+=0xcu;
  { uint32_t tg=R(13); c->pr=0x8c092822u; R(4)+=0x4u; sh4_call(c,tg); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c09282e;
  R(0)=0x2eu;
  ST16(R(10)+R(0),R(14));
L8c09282e:;
  R(11)+=0x1u;
  { f_8c092830(c); return; }
}
void f_8c092830(SH4Ctx *c) {
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(c->t) goto L8c09283a;
  {  { f_8c092660(c); return; } }
L8c09283a:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c092880(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+12,R(5));
  ST32(R(15)+4,R(6));
  { R(13)=0x0u; goto L8c0928e8; }
L8c092892:;
  R(4)=0x68u;
  R(3)=LD32(R(15)+12);
  c->macl=R(13)*R(4);
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
  if(c->t) goto L8c0928e6;
  R(3)=0x8c090dacu;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0928b8u; R(4)=LD32(R(15)+4); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0928e6;
  R(4)=LD32(R(14)+28);
  ST32(R(15),R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0928d8;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x10u;
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c0928d8;
  { R(2)=0x1u; goto L8c0928da; }
L8c0928d8:;
  R(2)=0x0u;
L8c0928da:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0928e6;
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(14)+R(0),R(4));
L8c0928e6:;
  R(13)+=0x1u;
L8c0928e8:;
  R(3)=LD32(R(15)+8);
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c092892;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0928f8(SH4Ctx *c) {
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
  R(0)=0x8c092924u;
  ST32(R(15),R(4));
  fp_ld(c,15,R(0));
  R(12)=0x0u;
  R(8)=R(5);
  R(11)=R(6);
  { R(13)=R(12); goto L8c092976; }
L8c092940:;
  c->macl=R(13)*R(10);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(8);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(10)=c->t;
  R(10)+=0xffffffffu;
  R(10)=0u-R(10);
  R(10)=R(10)&0xFF;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c092974;
  R(3)=0x8c090dacu;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c092962u; R(4)=R(11); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c092974;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c092974;
  fp_ld(c,15,R(0)+R(14));
  R(12)=R(14);
L8c092974:;
  R(13)+=0x1u;
L8c092976:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(10)=0x68u; if(k) goto L8c092940; }
  R(0)=0x2a8u;
  R(0)=LD32(R(11)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(9)=0x0u; if(k) goto L8c0929a2; }
  R(0)=0x2a8u;
  R(2)=LD32(R(11)+R(0));
  R(0)=0x60u;
  R(3)=LD32(R(2)+36);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x210u;
  fp_ld(c,15,R(0)+R(11));
  { fp_arith(c,0,15,3); goto L8c0929a6; }
L8c0929a2:;
  R(0)=0x210u;
  fp_ld(c,15,R(0)+R(11));
L8c0929a6:;
  {  goto L8c092a70; }
L8c0929e0:;
  c->macl=R(9)*R(10);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(8);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c092a6e;
  R(3)=0x8c090dacu;
  R(5)=R(14);
  R(13)=0x63u;
  R(5)+=0x4u;
  { c->pr=0x8c092a04u; R(4)=R(11); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c092a6a;
  fp_ld(c,2,R(14));
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c092a6a;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c092a26;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c092a26;
  { R(2)=0x0u; goto L8c092a28; }
L8c092a26:;
  R(2)=0x1u;
L8c092a28:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c092a6a;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c092a5c;
  R(5)=R(14);
  R(2)=0x8c05e612u;
  R(6)=R(12);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x10u;
  { c->pr=0x8c092a42u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x8c092b28u;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  fp_ld(c,14,R(0));
  R(4)=R(12);
  R(5)+=0x4u;
  { c->pr=0x8c092a52u; R(4)+=0x4u; f_8c05e55c(c); }
  fp_cmp(c,1,14,0);
  if(!c->t) goto L8c092a6e;
  R(0)=0x2eu;
  { ST16(R(14)+R(0),R(13)); goto L8c092a6e; }
L8c092a5c:;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,15);
  if(c->t) goto L8c092a6e;
  R(0)=0x2eu;
  { ST16(R(14)+R(0),R(13)); goto L8c092a6e; }
L8c092a6a:;
  R(0)=0x2eu;
  ST16(R(14)+R(0),R(13));
L8c092a6e:;
  R(9)+=0x1u;
L8c092a70:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  if(!c->t) goto L8c0929e0;
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
void f_8c092a8e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=R(6);
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { R(13)=0x0u; goto L8c092af2; }
L8c092aa4:;
  R(4)=0x68u;
  R(3)=LD32(R(15)+4);
  c->macl=R(13)*R(4);
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
  if(c->t) goto L8c092af0;
  c->t=R(14)==R(12);
  if(c->t) goto L8c092af0;
  R(5)=R(14);
  R(6)=R(12);
  R(11)=0x8c05e612u;
  R(4)=R(15);
  R(5)+=0x10u;
  R(6)+=0x10u;
  { c->pr=0x8c092ad4u; R(4)+=0x8u; f_8c05e612(c); }
  R(5)=R(15);
  R(11)=0x8c05e55cu;
  R(4)=R(12);
  R(5)+=0x8u;
  { c->pr=0x8c092ae0u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c092b30u;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c092af0;
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(14)+R(0),R(4));
L8c092af0:;
  R(13)+=0x1u;
L8c092af2:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c092aa4;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c092b06(SH4Ctx *c) {
  { R(7)=0x0u; goto L8c092bea; }
L8c092b40:;
  R(6)=0x68u;
  c->macl=R(7)*R(6);
  R(0)=0x2eu;
  R(1)=c->macl;
  R(1)+=R(5);
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(0)==99;
  R(6)=c->t;
  R(6)+=0xffffffffu;
  R(6)=0u-R(6);
  R(6)=R(6)&0xFF;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c092be8;
  R(0)=0x8c092c20u;
  c->fr[1]=0x00000000u;
  fp_ld(c,3,R(0));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(1));
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c092b72;
  fp_mov(c,2,3);
  fp_ld(c,3,R(0)+R(1));
  { fp_arith(c,0,3,2); goto L8c092b7a; }
L8c092b72:;
  fp_ld(c,2,R(0)+R(1));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c092b7a:;
  R(0)=0x8c092c24u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c092bda;
  R(0)=0x8c092c20u;
  fp_ld(c,3,R(0));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(1));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c092b9c;
  R(0)=0x8c092c20u;
  fp_ld(c,2,R(0));
  R(0)=0x34u;
  { fp_ld(c,3,R(0)+R(1)); goto L8c092ba2; }
L8c092b9c:;
  fp_ld(c,3,R(0)+R(1));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
L8c092ba2:;
  fp_arith(c,0,3,2);
  R(0)=0x8c092c24u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c092bda;
  R(0)=0x8c092c20u;
  fp_ld(c,3,R(0));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(1));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c092bc6;
  R(0)=0x8c092c20u;
  fp_ld(c,2,R(0));
  R(0)=0x38u;
  { fp_ld(c,3,R(0)+R(1)); goto L8c092bcc; }
L8c092bc6:;
  fp_ld(c,3,R(0)+R(1));
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
L8c092bcc:;
  fp_arith(c,0,3,2);
  R(0)=0x8c092c24u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c092bda;
  { R(2)=0x1u; goto L8c092bdc; }
L8c092bda:;
  R(2)=0x0u;
L8c092bdc:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c092be8;
  R(0)=0x2eu;
  R(6)=0x63u;
  ST16(R(1)+R(0),R(6));
L8c092be8:;
  R(7)+=0x1u;
L8c092bea:;
  c->t=(int32_t)R(7)>=(int32_t)R(4);
  if(!c->t) goto L8c092b40;
  {  return; }
}
void f_8c092bf2(SH4Ctx *c) {
  R(5)=R(4);
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c092c06;
L8c092bfa:;
  R(5)=LD32(R(5)+28);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c092c06;
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c092bfa;
L8c092c06:;
  R(0)=R(5);
  {  return; }
}
void f_8c092c40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(13)=0xe0u;
  R(4)=R(5);
  R(4)+=0x78u;
  R(12)=R(4);
  R(13)+=R(5);
  R(5)=R(13);
  R(3)=0x8c05e612u;
  ST32(R(15),R(6));
  R(12)+=0x58u;
  R(6)=R(12);
  R(5)+=0x58u;
  { c->pr=0x8c092c66u; R(4)=R(14); f_8c05e612(c); }
  R(2)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(14));
  R(5)=R(12);
  c->fpul=R(2);
  R(4)=R(13);
  fp_float(c,3);
  fp_arith(c,3,2,3);
  fp_mov(c,4,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(14));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c01638au;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c01638a(c); return; } }
}
void f_8c092c96(SH4Ctx *c) {
  R(3)=0xe0u;
  R(6)=R(5);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)+=R(3);
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(14)+=0x58u;
  R(4)=R(14);
  R(5)=R(14);
  R(15)+=0x4u;
  R(2)=0x8c05e5f4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e5f4(c); return; } }
}
void f_8c092cb0(SH4Ctx *c) {
  R(0)=0x184u;
  R(6)=R(6)&0xFF;
  c->t=(R(6)&R(6))==0;
  fp_ld(c,3,R(0)+R(5));
  R(0)+=0x20u;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(5));
  R(0)+=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x1acu;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  { uint32_t k=c->t; fp_st(c,4,R(0)+R(4)); if(k) goto L8c092d02; }
  R(0)=0x194u;
  fp_ld(c,3,R(4));
  fp_ld(c,2,R(0)+R(5));
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x194u;
  fp_ld(c,2,R(0)+R(5));
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x194u;
  fp_ld(c,2,R(0)+R(5));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
L8c092d02:;
  {  return; }
}
void f_8c092d40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x180u;
  R(14)=R(4);
  c->fr[3]=0x3F800000u;
  R(5)=R(4);
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  R(6)=c->t;
  R(6)+=0xffffffffu;
  R(6)=0u-R(6);
  { c->pr=0x8c092d5cu; R(4)=R(15); f_8c092cb0(c); }
  R(2)=0x8c05e5f4u;
  R(6)=R(14);
  R(5)=R(15);
  R(6)+=0x6cu;
  { c->pr=0x8c092d68u; R(4)=R(15); f_8c05e5f4(c); }
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(4)=0x1d4u;
  { c->pr=0x8c092d72u; R(4)+=R(14); f_8c05e6ea(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c092d7a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05689eu;
  { c->pr=0x8c092d82u;  f_8c05689e(c); }
  R(2)=0x80000000u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)&=R(2);
  c->t=R(0)==R(2);
  { R(0)=c->t; return; }
}
void f_8c092d8e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05689eu;
  { c->pr=0x8c092d96u;  f_8c05689e(c); }
  R(2)=0x80000000u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)&=R(2);
  c->t=R(0)==R(2);
  { R(0)=c->t; return; }
}
void f_8c092de0(SH4Ctx *c) {
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c092e5c;
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c092e5c;
  R(0)=0x44u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c092e5c;
  R(2)=LD32(R(4)+8);
  R(6)=0x4u;
  c->t=(R(2)&R(6))==0;
  if(!c->t) goto L8c092e5c;
  R(0)=LD32(R(4)+8);
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c092e5c;
  R(2)=LD32(R(4)+8);
  R(3)=0xe0000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c092e5c;
  R(3)=LD32(R(4)+8);
  R(5)=0x20000000u;
  c->t=(R(3)&R(5))==0;
  if(!c->t) goto L8c092e5c;
  R(2)=LD32(R(4)+8);
  R(3)=0x700000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c092e5c;
  R(0)=LD32(R(4)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c092e46;
  R(2)=LD32(R(4)+8);
  R(3)=0x400u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c092e5c;
  R(3)=LD32(R(4)+8);
  c->t=(R(5)&R(3))==0;
  if(!c->t) goto L8c092e5c;
  R(2)=LD32(R(4)+8);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c092e5c;
  R(2)=LD32(R(4)+8);
  R(3)=0x3800000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c092e5c;
L8c092e46:;
  R(3)=LD32(R(4)+12);
  c->t=(R(6)&R(3))==0;
  if(c->t) goto L8c092e60;
  R(0)=0x2a8u;
  R(0)=LD32(R(4)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c092e60;
L8c092e5c:;
  { R(0)=0x0u; return; }
L8c092e60:;
  R(0)=0x1u;
  {  return; }
}
void f_8c092ea0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x400u;
  R(12)=0xe0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(4)+12);
  R(12)+=R(4);
  R(11)=0x8c01638au;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(13)+=0x78u; if(k) goto L8c092eca; }
  R(14)=R(4);
  R(14)+=0x60u;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c092ec6u; R(4)=R(13); sh4_call(c,tg); }
  { R(5)=R(14); goto L8c092ece; }
L8c092eca:;
  R(5)=R(13);
  R(5)+=0x58u;
L8c092ece:;
  { uint32_t tg=R(11); c->pr=0x8c092ed2u; R(4)=R(12); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c092ede(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(2)=LD32(R(14)+12);
  R(4)=R(14);
  R(3)=0x400u;
  R(4)+=0x60u;
  R(1)=0x8c05e6eau;
  R(5)+=0x58u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e6ea(c); return; } }
}
void f_8c092f20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  c->fpul=R(5);
  R(14)=R(4);
  c->fr[15]=0x3F800000u;
  R(6)=R(14);
  R(4)=0xe0u;
  R(6)+=0x78u;
  fp_float(c,3);
  R(13)=R(6);
  R(4)+=R(14);
  R(3)=0x8c05e612u;
  R(12)=R(4);
  R(12)+=0x58u;
  R(13)+=0x58u;
  R(5)=R(12);
  R(6)=R(13);
  fp_arith(c,3,15,3);
  { c->pr=0x8c092f50u; R(4)=R(15); f_8c05e612(c); }
  fp_ld(c,3,R(15));
  R(0)=0x4u;
  fp_mov(c,2,15);
  R(5)=R(13);
  fp_arith(c,2,2,3);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  fp_st(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c092f7au; R(4)=R(12); sh4_call(c,tg); }
  R(4)=R(14);
  R(4)+=0x3cu;
  fp_ld(c,3,R(4));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(4));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(4));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c092fa6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(4);
  R(4)=0xe0u;
  ST32(R(15),R(5));
  R(5)=R(14);
  R(5)+=0x78u;
  R(3)=0x8c05e612u;
  R(4)+=R(14);
  R(13)=R(5);
  R(12)=R(4);
  R(12)+=0x58u;
  R(13)+=0x58u;
  R(4)=R(15);
  R(6)=R(13);
  R(5)=R(12);
  { c->pr=0x8c092fd2u; R(4)+=0x4u; f_8c05e612(c); }
  R(2)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  c->fpul=R(2);
  R(6)=R(15);
  R(3)=0x8c05e612u;
  R(5)=R(12);
  R(6)+=0x4u;
  fp_float(c,3);
  fp_mov(c,15,3);
  fp_arith(c,2,3,2);
  fp_mov(c,2,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c093008u; R(4)=R(13); sh4_call(c,tg); }
  R(4)=R(14);
  R(4)+=0x3cu;
  fp_ld(c,3,R(4));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(4));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(4));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c093060(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(5)=0xe0u;
  R(3)=0x8c05e612u;
  R(5)+=R(4);
  R(4)+=0x78u;
  R(14)=R(5);
  R(13)=R(4);
  R(14)+=0x58u;
  R(13)+=0x58u;
  R(5)=R(14);
  R(6)=R(13);
  { c->pr=0x8c093080u; R(4)=R(15); f_8c05e612(c); }
  R(2)=0x8c05e6eau;
  R(5)=R(14);
  { c->pr=0x8c093088u; R(4)=R(13); f_8c05e6ea(c); }
  R(3)=0x8c05e5f4u;
  R(5)=R(14);
  R(6)=R(15);
  { c->pr=0x8c093092u; R(4)=R(14); f_8c05e5f4(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0930c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x2cu;
  R(12)=R(4);
  R(13)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(11)=0x8c0c758cu;
  ST16(R(15),R(3));
  R(3)=LD32(R(11));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0930ee;
  R(3)=0x8c064e90u;
  R(6)=0x2fu;
  R(5)=0x8c0bcf40u;
  { c->pr=0x8c0930eau; R(4)=0x44u; f_8c064e90(c); }
  {  goto L8c0930f8; }
L8c0930ee:;
  R(2)=0x8c0199c4u;
  R(6)=0x2fu;
  R(5)=0x8c0bcf40u;
  { c->pr=0x8c0930f8u; R(4)=0x44u; f_8c0199c4(c); }
L8c0930f8:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(14)=R(0);
  R(0)=0x2eu;
  ST16(R(14)+R(0),R(2));
  R(0)=0x2cu;
  ST16(R(14)+R(0),R(13));
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c093120;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(2)=0x8c064e90u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcf40u;
  R(4)+=R(3);
  R(6)=0x35u;
  { c->pr=0x8c09311cu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c093132; }
L8c093120:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(2)=0x8c0199c4u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcf40u;
  R(4)+=R(3);
  R(6)=0x35u;
  { c->pr=0x8c093132u; R(4)<<=2; f_8c0199c4(c); }
L8c093132:;
  ST32(R(14),R(0));
  R(1)=LD32(R(11));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(3)=R(0); if(k) goto L8c093152; }
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(2)=0x8c064e90u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcf40u;
  R(4)+=R(3);
  R(6)=0x37u;
  { c->pr=0x8c09314eu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c093164; }
L8c093152:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  R(2)=0x8c0199c4u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=0x8c0bcf40u;
  R(4)+=R(3);
  R(6)=0x37u;
  { c->pr=0x8c093164u; R(4)<<=2; f_8c0199c4(c); }
L8c093164:;
  ST32(R(14)+4,R(0));
  R(2)=R(0);
  R(0)=0x32u;
  R(4)=0x0u;
  c->t=(R(14)&R(14))==0;
  ST32(R(14)+24,R(4));
  ST16(R(14)+R(0),R(4));
  ST32(R(14)+36,R(4));
  { uint32_t k=c->t; ST32(R(14)+40,R(4)); if(k) goto L8c093180; }
  R(2)=LD32(R(12)+16);
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(12)+20);
  ST32(R(14)+20,R(3));
L8c093180:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0931c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(4);
  R(14)=0x8c0bcf40u;
  R(13)=0x8c064eb8u;
  R(6)=0x81u;
  R(5)=R(14);
  ST32(R(15)+4,R(4));
  R(2)=LD32(R(3));
  ST32(R(15),R(2));
  { c->pr=0x8c0931dcu; R(4)=R(2); f_8c064eb8(c); }
  R(4)=LD32(R(15));
  R(5)=R(14);
  R(6)=0x82u;
  { uint32_t tg=R(13); c->pr=0x8c0931e6u; R(4)+=0x4u; sh4_call(c,tg); }
  R(6)=0x86u;
  R(5)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c0931eeu; R(4)=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(15)+4);
  R(2)=0x0u;
  ST32(R(3),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0931fe(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(4)=LD32(R(4));
  { c->pr=0x8c09320au; R(4)+=0x4u; f_8c0931c0(c); }
  R(3)=0x8c064eb8u;
  R(5)=0x8c0bcf40u;
  R(6)=0x96u;
  { c->pr=0x8c093214u; R(4)=LD32(R(15)); f_8c064eb8(c); }
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bcf40u;
  R(6)=0x97u;
  { c->pr=0x8c09321eu; R(4)=R(15); f_8c064eb8(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0932d8(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c0932dc(SH4Ctx *c) {
  { R(0)=LD32(R(4)+8); return; }
}
void f_8c093320(SH4Ctx *c) {
  { R(0)=LD32(R(4)+12); return; }
}
void f_8c093324(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c093328(SH4Ctx *c) {
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09333e;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c093342;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c093346;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09334a;
  {  goto L8c09334e; }
L8c09333e:;
  { R(0)=LD32(R(5)+4); return; }
L8c093342:;
  { R(0)=LD32(R(5)); return; }
L8c093346:;
  { R(0)=LD32(R(5)+12); return; }
L8c09334a:;
  { R(0)=LD32(R(5)+8); return; }
L8c09334e:;
  R(0)=0x0u;
  {  return; }
}
void f_8c093358(SH4Ctx *c) {
  { ST32(R(4)+8,R(5)); return; }
}
void f_8c09335c(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c093360(SH4Ctx *c) {
  { ST32(R(4)+12,R(5)); return; }
}
void f_8c093364(SH4Ctx *c) {
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09337a;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09337e;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c093382;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c093386;
  {  goto L8c093388; }
L8c09337a:;
  { ST32(R(5)+4,R(6)); goto L8c093388; }
L8c09337e:;
  { ST32(R(5),R(6)); goto L8c093388; }
L8c093382:;
  { ST32(R(5)+12,R(6)); goto L8c093388; }
L8c093386:;
  ST32(R(5)+8,R(6));
L8c093388:;
  {  return; }
}
void f_8c093416(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c09341a(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c093460(SH4Ctx *c) {
  { R(0)=LD32(R(4)+8); return; }
}
void f_8c093464(SH4Ctx *c) {
  { ST32(R(4)+8,R(5)); return; }
}
void f_8c093468(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=0x8c0a2306u;
  ST32(R(15)+8,R(4));
  R(4)=R(15);
  { c->pr=0x8c093478u; R(4)+=0x4u; f_8c0a2306(c); }
  R(5)=LD32(R(15)+8);
  R(3)=0x8c05e6eau;
  R(4)=LD32(R(5));
  c->fr[3]=0x00000000u;
  R(14)=LD32(R(4)+4);
  R(4)=R(15);
  fp_st(c,3,R(15));
  R(5)=LD32(R(14));
  { c->pr=0x8c09348cu; R(4)+=0xcu; f_8c05e6ea(c); }
  R(2)=0x8c0a2160u;
  R(5)=R(15);
  R(6)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c093498u; R(4)=R(14); f_8c0a2160(c); }
  R(3)=0x8c0a23e6u;
  R(5)=R(15);
  fp_ld(c,4,R(15));
  R(5)+=0xcu;
  { c->pr=0x8c0934a4u; R(4)=LD32(R(15)+4); f_8c0a23e6(c); }
  R(4)=LD32(R(15)+8);
  R(5)=LD32(R(15)+4);
  ST32(R(4)+8,R(5));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0934e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2d4070u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(13)=0x8c0bcf78u;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c093500;
  R(3)=0x8c0199c4u;
  R(5)=R(13);
  R(6)=0x10u;
  { c->pr=0x8c0934fcu; R(4)=0x14u; f_8c0199c4(c); }
  { R(14)=R(0); goto L8c093522; }
L8c093500:;
  R(1)=0x8c0c758cu;
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c093516;
  R(3)=0x8c064e90u;
  R(6)=0x10u;
  R(5)=0x8c0bcf78u;
  { c->pr=0x8c093512u; R(4)=0x14u; f_8c064e90(c); }
  {  goto L8c093520; }
L8c093516:;
  R(3)=0x8c0199c4u;
  R(6)=0x10u;
  R(5)=0x8c0bcf78u;
  { c->pr=0x8c093520u; R(4)=0x14u; f_8c0199c4(c); }
L8c093520:;
  R(14)=R(0);
L8c093522:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c093554;
  R(2)=0x8c0125ccu;
  R(5)=R(13);
  R(12)=0xffu;
  R(6)=0x12u;
  { c->pr=0x8c093532u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x12u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  R(3)=0x8c0c6c40u;
  R(1)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(2);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  R(3)=0x8c012658u;
  { c->pr=0x8c093552u; R(4)=0x8u; f_8c012658(c); }
  R(15)+=0x18u;
L8c093554:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x14u;
  { c->pr=0x8c09355eu; R(4)=R(14); f_8c0686b8(c); }
  R(3)=0x8c2d4070u;
  R(0)=0x12u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(14)+R(0),R(2));
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0935c0(SH4Ctx *c) {
  R(6)=LD32(R(4));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(7)=0x0u; if(k) goto L8c0935f4; }
L8c0935c8:;
  R(0)=0x12u;
  R(2)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(5)&0xFF;
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0935ec;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c0935de;
  R(2)=LD32(R(6));
  { ST32(R(7),R(2)); goto L8c0935e2; }
L8c0935de:;
  R(1)=LD32(R(6));
  ST32(R(4),R(1));
L8c0935e2:;
  R(3)=LD32(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0935ee;
  { ST32(R(4)+4,R(7)); goto L8c0935ee; }
L8c0935ec:;
  R(7)=R(6);
L8c0935ee:;
  R(6)=LD32(R(6));
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0935c8;
L8c0935f4:;
  {  return; }
}
void f_8c0935fc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x40u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x0u;
  R(3)=0x3ffu;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(12)&=R(3);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0xffu;
  R(8)=R(12)&0xFFFF;
  R(13)=0x8c0bcf78u;
  c->t=(R(2)&R(8))==0;
  R(9)=0x8c0c6c40u;
  { uint32_t k=c->t; R(11)=0xffffffffu; if(k) goto L8c09362a; }
  R(0)=0x80u;
  c->t=(R(0)&R(8))==0;
  if(!c->t) goto L8c093636;
L8c09362a:;
  R(3)=0x100u;
  c->t=(R(3)&R(8))==0;
  if(c->t) goto L8c09365c;
  R(1)=0x200u;
  c->t=(R(1)&R(8))==0;
  if(c->t) goto L8c09365c;
L8c093636:;
  R(2)=0x8c0125ccu;
  R(5)=R(13);
  R(6)=0x4bu;
  { c->pr=0x8c093640u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x4bu;
  R(2)=0x8c012658u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x5u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c09365au; R(4)=0x8u; f_8c012658(c); }
  R(15)+=0x18u;
L8c09365c:;
  R(3)=0x40u;
  c->t=(R(3)&R(8))==0;
  if(!c->t) goto L8c093668;
  R(1)=0x80u;
  c->t=(R(1)&R(8))==0;
  if(c->t) goto L8c09366c;
L8c093668:;
  R(2)=0x4u;
  R(12)|=R(2);
L8c09366c:;
  R(3)=0x100u;
  R(4)=R(12)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c09367a;
  R(1)=0x200u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c09367e;
L8c09367a:;
  R(2)=0x8u;
  R(12)|=R(2);
L8c09367e:;
  R(3)=0x80u;
  R(8)=R(12)&0xFFFF;
  c->t=(R(3)&R(8))==0;
  if(!c->t) goto L8c09368c;
  R(1)=0x200u;
  c->t=(R(1)&R(8))==0;
  if(c->t) goto L8c0936ae;
L8c09368c:;
  R(2)=0x32u;
  c->t=(R(2)&R(8))==0;
  if(c->t) goto L8c0936ae;
  R(1)=0x59u;
  R(3)=0x8c012658u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(7)=0x9u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c0936acu; R(4)=0x8u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0936ae:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c093700(SH4Ctx *c) {
  R(7)=LD32(R(4));
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c093724;
L8c093706:;
  R(2)=LD32(R(7)+4);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c09371e;
  R(0)=(int32_t)(int16_t)LD16(R(7)+16);
  R(2)=R(6)&0xFFFF;
  R(3)=0x3ffu;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c09371e;
  { R(0)=R(7); return; }
L8c09371e:;
  R(7)=LD32(R(7));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c093706;
L8c093724:;
  R(0)=0x0u;
  {  return; }
}
void f_8c09372a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(6);
  R(11)=R(4);
  R(4)=0x0u;
  ST32(R(15),R(5));
  ST16(R(15)+4,R(0));
  R(12)=R(4);
  R(14)=LD32(R(11));
  R(13)=R(4);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  { c->pr=0x8c09374cu; R(4)=R(0); f_8c0935fc(c); }
  c->t=(R(14)&R(14))==0;
  R(6)=R(0);
  { uint32_t k=c->t; R(4)=0x1u; if(k) { f_8c0937a8(c); return; } }
  { f_8c093754(c); return; }
}
void f_8c093754(SH4Ctx *c) {
L8c093754:;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(15));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0937a0;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(2)=R(6)&0xFFFF;
  R(3)=0x3ffu;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0937a0;
  { R(12)=R(4); { f_8c0937a8(c); return; } }
L8c0937a0:;
  R(13)=R(14);
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c093754;
  { f_8c0937a8(c); return; }
}
void f_8c093780(SH4Ctx *c) {
  sh4_mac_l(c,R(3),R(15));R(3)+=4;R(15)+=4;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(13)=R(14);
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) { f_8c093754(c); return; }
  { f_8c0937a8(c); return; }
}
void f_8c0937a8(SH4Ctx *c) {
  R(3)=R(12)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0937c4;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0937b8;
  R(3)=LD32(R(14));
  { ST32(R(13),R(3)); goto L8c0937bc; }
L8c0937b8:;
  R(1)=LD32(R(14));
  ST32(R(11),R(1));
L8c0937bc:;
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0937c4;
  ST32(R(11)+4,R(13));
L8c0937c4:;
  R(0)=R(12);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0937d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=0x1u;
  ST16(R(15),R(7));
  ST8(R(15)+4,R(0));
  R(0)=0x28u;
  R(10)=R(4);
  R(13)=R(5);
  R(12)=R(6);
  { c->pr=0x8c0937f8u; R(4)=(int32_t)(int16_t)LD16(R(15)+R(0)); f_8c0935fc(c); }
  R(8)=(int32_t)(int16_t)LD16(R(15));
  R(11)=R(0);
  R(6)=R(11);
  R(5)=R(13);
  R(9)=0x0u;
  R(8)=R(8)&0xFFFF;
  { c->pr=0x8c093808u; R(4)=R(10); f_8c093700(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c09386e; }
  { c->pr=0x8c093812u;  f_8c0934e0(c); }
  R(2)=0x8000u;
  c->t=R(8)==R(2);
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c093860; }
  ST32(R(14),R(9));
  R(1)=LD32(R(10)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c093828;
  R(3)=LD32(R(10)+4);
  { ST32(R(3),R(14)); goto L8c09382a; }
L8c093828:;
  ST32(R(10),R(14));
L8c09382a:;
  { ST32(R(10)+4,R(14)); goto L8c09386e; }
L8c093860:;
  R(1)=LD32(R(10));
  ST32(R(14),R(1));
  ST32(R(10),R(14));
  R(3)=LD32(R(10)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09386e;
  ST32(R(10)+4,R(14));
L8c09386e:;
  R(1)=0x8000u;
  R(0)=R(8);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; ST32(R(14)+4,R(13)); if(k) goto L8c0938a0; }
  R(1)=0x1000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0938b4;
  R(1)=0x2000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0938e0;
  R(1)=0x3000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0938ec;
  R(1)=0x4000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0938f2;
  R(1)=0x7000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093900;
  R(1)=0x5000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093940;
  {  goto L8c093a4a; }
L8c0938a0:;
  R(0)=0x8000u;
  R(0)|=R(11);
  ST16(R(14)+16,R(0));
  { c->pr=0x8c0938aau; R(4)=R(12); f_8c093bc0(c); }
  ST8(R(14)+8,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(0)&=R(12);
  { ST8(R(14)+9,R(0)); goto L8c093a4e; }
L8c0938b4:;
  R(0)=0x1000u;
  R(0)|=R(11);
  ST16(R(14)+16,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13));
  { ST8(R(14)+8,R(0)); goto L8c093a4e; }
L8c0938e0:;
  R(0)=0x2000u;
  R(0)|=R(11);
  ST16(R(14)+16,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(13));
  { ST16(R(14)+8,R(0)); goto L8c093a4e; }
L8c0938ec:;
  R(0)=0x3000u;
  {  goto L8c093902; }
L8c0938f2:;
  R(0)=0x4000u;
  R(0)|=R(11);
  ST16(R(14)+16,R(0));
  R(0)=0x8u;
  fp_ld(c,3,R(13));
  { fp_st(c,3,R(0)+R(14)); goto L8c093a4e; }
L8c093900:;
  R(0)=0x7000u;
L8c093902:;
  R(0)|=R(11);
  ST16(R(14)+16,R(0));
  R(3)=LD32(R(13));
  { ST32(R(14)+8,R(3)); goto L8c093a4e; }
L8c093940:;
  R(0)=0x5000u;
  R(10)=0xffu;
  R(0)|=R(11);
  R(11)=0x8c0bcf78u;
  R(8)=0x8c012658u;
  ST16(R(14)+16,R(0));
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0939bc;
  R(2)=0x8c2d4070u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c093968;
  R(3)=0x8c0199c4u;
  R(5)=R(11);
  R(6)=0xfau;
  { c->pr=0x8c093964u; R(4)=R(12); f_8c0199c4(c); }
  { ST32(R(14)+8,R(0)); goto L8c09398c; }
L8c093968:;
  R(3)=0x8c0c758cu;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c09397e;
  R(1)=0x8c064e90u;
  R(5)=0x8c0bcf78u;
  R(6)=0xfau;
  { c->pr=0x8c09397au; R(4)=R(12); f_8c064e90(c); }
  {  goto L8c093988; }
L8c09397e:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcf78u;
  R(6)=0xfau;
  { c->pr=0x8c093988u; R(4)=R(12); f_8c0199c4(c); }
L8c093988:;
  ST32(R(14)+8,R(0));
  R(3)=R(0);
L8c09398c:;
  R(1)=LD32(R(14)+8);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0939ba;
  R(3)=0x8c0125ccu;
  R(5)=R(11);
  R(6)=0xfdu;
  { c->pr=0x8c09399cu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0xfdu;
  R(3)=0xffffffffu;
  R(1)=0x8c0c6c40u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x4u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { uint32_t tg=R(8); c->pr=0x8c0939b8u; R(4)=0x8u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0939ba:;
  ST32(R(14)+12,R(12));
L8c0939bc:;
  R(3)=LD32(R(14)+12);
  c->t=R(3)==R(12);
  if(!c->t) goto L8c093a20;
  R(3)=0x8c0685b4u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0939ccu; R(4)=LD32(R(14)+8); f_8c0685b4(c); }
  {  goto L8c093a4e; }
L8c093a20:;
  R(14)=0x104u;
  R(5)=R(11);
  R(3)=0x8c0125ccu;
  R(6)=R(14);
  { c->pr=0x8c093a2cu; R(4)=0x0u; f_8c0125cc(c); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c0c6c40u;
  R(7)=0x6u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t tg=R(8); c->pr=0x8c093a46u; R(4)=0x8u; sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c093a4e; }
L8c093a4a:;
  R(0)=R(9);
  ST8(R(15)+4,R(0));
L8c093a4e:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
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
void f_8c093920(SH4Ctx *c) {
  ST8(R(0),R(0));
  c->t=R(0)==R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=0x0u;
  
  
  
  
  
  
  
  
  
  
  
  
  R(0)=0x5000u;
  R(10)=0xffu;
  R(0)|=R(11);
  R(11)=0x8c0bcf78u;
  R(8)=0x8c012658u;
  ST16(R(14)+16,R(0));
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0939bc;
  R(2)=0x8c2d4070u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c093968;
  R(3)=0x8c0199c4u;
  R(5)=R(11);
  R(6)=0xfau;
  { c->pr=0x8c093964u; R(4)=R(12); f_8c0199c4(c); }
  { ST32(R(14)+8,R(0)); goto L8c09398c; }
L8c093968:;
  R(3)=0x8c0c758cu;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c09397e;
  R(1)=0x8c064e90u;
  R(5)=0x8c0bcf78u;
  R(6)=0xfau;
  { c->pr=0x8c09397au; R(4)=R(12); f_8c064e90(c); }
  {  goto L8c093988; }
L8c09397e:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcf78u;
  R(6)=0xfau;
  { c->pr=0x8c093988u; R(4)=R(12); f_8c0199c4(c); }
L8c093988:;
  ST32(R(14)+8,R(0));
  R(3)=R(0);
L8c09398c:;
  R(1)=LD32(R(14)+8);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0939ba;
  R(3)=0x8c0125ccu;
  R(5)=R(11);
  R(6)=0xfdu;
  { c->pr=0x8c09399cu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0xfdu;
  R(3)=0xffffffffu;
  R(1)=0x8c0c6c40u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x4u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { uint32_t tg=R(8); c->pr=0x8c0939b8u; R(4)=0x8u; sh4_call(c,tg); }
  R(15)+=0x18u;
L8c0939ba:;
  ST32(R(14)+12,R(12));
L8c0939bc:;
  R(3)=LD32(R(14)+12);
  c->t=R(3)==R(12);
  if(!c->t) goto L8c093a20;
  R(3)=0x8c0685b4u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0939ccu; R(4)=LD32(R(14)+8); f_8c0685b4(c); }
  {  goto L8c093a4e; }
L8c093a20:;
  R(14)=0x104u;
  R(5)=R(11);
  R(3)=0x8c0125ccu;
  R(6)=R(14);
  { c->pr=0x8c093a2cu; R(4)=0x0u; f_8c0125cc(c); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c0c6c40u;
  R(7)=0x6u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t tg=R(8); c->pr=0x8c093a46u; R(4)=0x8u; sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c093a4e; }
L8c093a4e:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
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
void f_8c093a64(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=0xfc00u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8000u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(13)=0x1u; if(k) goto L8c093ae0; }
  R(1)=0x1000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093afa;
  R(1)=0x2000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093b04;
  R(1)=0x3000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093b0c;
  R(1)=0x4000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093b16;
  R(1)=0x7000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093b22;
  R(1)=0x5000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093b2a;
  {  goto L8c093b38; }
L8c093ae0:;
  R(2)=LD32(R(14)+4);
  R(0)=(int32_t)(int8_t)LD8(R(14)+9);
  R(1)=(int32_t)(int8_t)LD8(R(2));
  R(0)=~R(0);
  R(1)&=R(0);
  ST8(R(2),R(1));
  R(2)=LD32(R(14)+4);
  R(0)=(int32_t)(int8_t)LD8(R(14)+9);
  R(1)=(int32_t)(int8_t)LD8(R(2));
  R(1)|=R(0);
  ST8(R(2),R(1));
  {  goto L8c093b3a; }
L8c093afa:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  R(2)=LD32(R(14)+4);
  ST8(R(2),R(0));
  {  goto L8c093b3a; }
L8c093b04:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+8);
  R(1)=LD32(R(14)+4);
  { ST16(R(1),R(0)); goto L8c093b3a; }
L8c093b0c:;
  R(2)=LD32(R(14)+8);
  R(1)=LD32(R(14)+4);
  ST32(R(1),R(2));
  {  goto L8c093b3a; }
L8c093b16:;
  R(1)=0x8u;
  R(0)=LD32(R(14)+4);
  R(1)+=R(14);
  fp_ld(c,3,R(1));
  { fp_st(c,3,R(0)); goto L8c093b3a; }
L8c093b22:;
  R(2)=LD32(R(14)+8);
  R(0)=LD32(R(14)+4);
  { ST32(R(0),R(2)); goto L8c093b3a; }
L8c093b2a:;
  R(2)=0x8c0685b4u;
  R(5)=LD32(R(14)+8);
  R(6)=LD32(R(14)+12);
  { c->pr=0x8c093b34u; R(4)=LD32(R(14)+4); f_8c0685b4(c); }
  {  goto L8c093b3a; }
L8c093b38:;
  R(13)=0x0u;
L8c093b3a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c093b44(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST16(R(15),R(5));
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c093b6a;
L8c093b52:;
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(4)=R(4)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(4);
  c->t=R(0)==R(4);
  if(!c->t) goto L8c093b64;
  { c->pr=0x8c093b64u; R(4)=R(14); f_8c093a64(c); }
L8c093b64:;
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c093b52;
L8c093b6a:;
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c093b74(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c093b7eu; R(14)=0x0u; f_8c093700(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c093b8a; }
  R(14)=0x1u;
  { c->pr=0x8c093b8au; R(4)=R(0); f_8c093a64(c); }
L8c093b8a:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c093bc0(SH4Ctx *c) {
  R(6)=0x1u;
  R(7)=0x8u;
  R(5)=0x0u;
L8c093bc6:;
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(6))==0;
  if(c->t) goto L8c093bd0;
  { R(0)=R(5); return; }
L8c093bd0:;
  R(5)+=0x1u;
  R(2)=R(5)&0xFF;
  R(4)=R(4)&0xFF;
  c->t=R(4)&1;R(4)>>=1;
  c->t=(int32_t)R(2)>=(int32_t)R(7);
  if(!c->t) goto L8c093bc6;
  R(0)=0xau;
  {  return; }
}
void f_8c093c1c(SH4Ctx *c) {
  R(3)=0xfff8u;
  R(4)=R(4)&0xFFFF;
  R(1)=0xf00u;
  R(4)&=R(3);
  R(0)=R(4);
  R(0)>>=2;
  R(1)&=R(4);
  R(0)&=0x3fu;
  { R(0)|=R(1); return; }
}
void f_8c093c30(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(5));
  ST16(R(15),R(6));
  R(14)=LD32(R(4));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c093c5a;
L8c093c40:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=R(3)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c093c54;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c093c54u; R(4)=R(14); f_8c093ca0(c); }
L8c093c54:;
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c093c40;
L8c093c5a:;
  R(0)=0x1u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c093ca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x1u;
  R(14)=R(4);
  ST8(R(15)+8,R(0));
  R(8)=R(5);
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=0xfc00u;
  R(0)=R(0)&0xFFFF;
  R(1)=0x8000u;
  R(0)&=R(3);
  R(10)=0x8c0125ccu;
  R(9)=0x8c012658u;
  c->t=R(0)==R(1);
  R(13)=0x8c0bcfa8u;
  R(12)=0xffu;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c093d0a; }
  R(1)=0x1000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093d0a;
  R(1)=0x2000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c093dc0;
  R(1)=0x3000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c093ce8;
  {  goto L8c093e40; }
L8c093ce8:;
  R(1)=0x4000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c093cf2;
  {  goto L8c093ec0; }
L8c093cf2:;
  R(1)=0x7000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c093cfc;
  {  goto L8c093f42; }
L8c093cfc:;
  R(1)=0x5000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c093d06;
  {  goto L8c093fd2; }
L8c093d06:;
  {  goto L8c094068; }
L8c093d0a:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(2)=0x40u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c093d1a;
  R(0)=0x100u;
  c->t=(R(0)&R(4))==0;
  if(c->t) goto L8c093d80;
L8c093d1a:;
  R(6)=0x1u;
  R(7)=R(8);
  { R(5)=R(6); goto L8c093f58; }
L8c093d80:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=0x80u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c093d90;
  R(1)=0x200u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c093d98;
L8c093d90:;
  R(6)=0x1u;
  R(7)=R(8);
  { R(5)=R(6); goto L8c094036; }
L8c093d98:;
  R(14)=0xe8u;
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c093da2u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c0c6c40u;
  R(7)=0x7u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t tg=R(9); c->pr=0x8c093dbcu; R(4)=0x8u; sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c09406c; }
L8c093dc0:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(2)=0x40u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c093dd0;
  R(0)=0x100u;
  c->t=(R(0)&R(4))==0;
  if(c->t) goto L8c093e00;
L8c093dd0:;
  R(6)=0x2u;
  R(7)=R(8);
  { R(5)=0x1u; goto L8c093f58; }
L8c093e00:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=0x80u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c093e10;
  R(1)=0x200u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c093e18;
L8c093e10:;
  R(6)=0x2u;
  R(7)=R(8);
  { R(5)=0x1u; goto L8c094036; }
L8c093e18:;
  R(14)=0xf1u;
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c093e22u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c0c6c40u;
  R(7)=0x7u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t tg=R(9); c->pr=0x8c093e3cu; R(4)=0x8u; sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c09406c; }
L8c093e40:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(2)=0x40u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c093e50;
  R(0)=0x100u;
  c->t=(R(0)&R(4))==0;
  if(c->t) goto L8c093e80;
L8c093e50:;
  R(6)=0x4u;
  R(7)=R(8);
  { R(5)=0x1u; goto L8c093f58; }
L8c093e80:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=0x80u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c093e90;
  R(1)=0x200u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c093e98;
L8c093e90:;
  R(6)=0x4u;
  R(7)=R(8);
  { R(5)=0x1u; goto L8c094036; }
L8c093e98:;
  R(14)=0xfau;
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c093ea2u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c0c6c40u;
  R(7)=0x7u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t tg=R(9); c->pr=0x8c093ebcu; R(4)=0x8u; sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c09406c; }
L8c093ec0:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(2)=0x40u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c093ed0;
  R(0)=0x100u;
  c->t=(R(0)&R(4))==0;
  if(c->t) goto L8c093f00;
L8c093ed0:;
  R(6)=0x4u;
  R(7)=R(8);
  { R(5)=0x1u; goto L8c093f58; }
L8c093f00:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=0x80u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c093f10;
  R(1)=0x200u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c093f1a;
L8c093f10:;
  R(5)=0x1u;
  R(7)=R(8);
  R(6)=0x4u;
  {  goto L8c094036; }
L8c093f1a:;
  R(14)=0x103u;
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c093f24u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c0c6c40u;
  R(7)=0x7u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t tg=R(9); c->pr=0x8c093f3eu; R(4)=0x8u; sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c09406c; }
L8c093f42:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(2)=0x40u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c093f52;
  R(0)=0x100u;
  c->t=(R(0)&R(4))==0;
  if(c->t) goto L8c093f80;
L8c093f52:;
  R(5)=0x1u;
  R(7)=R(8);
  R(6)=0x4u;
L8c093f58:;
  R(4)=R(14);
  { R(4)+=0x8u; goto L8c093fa2; }
L8c093f80:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=0x80u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c093f90;
  R(1)=0x200u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c093faa;
L8c093f90:;
  R(2)=LD32(R(14)+4);
  R(4)=R(15);
  R(4)+=0x4u;
  R(7)=R(8);
  R(3)=LD32(R(2));
  R(4)+=0x1u;
  R(5)=0x1u;
  ST32(R(15)+4,R(3));
  R(6)=0x3u;
L8c093fa2:;
  { c->pr=0x8c093fa6u;  f_8c094082(c); }
  {  goto L8c09406c; }
L8c093faa:;
  R(14)=0x124u;
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c093fb4u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(2)=0x8c0c6c40u;
  R(7)=0x7u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  { uint32_t tg=R(9); c->pr=0x8c093fceu; R(4)=0x8u; sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c09406c; }
L8c093fd2:;
  R(1)=LD32(R(14)+12);
  R(6)=0x1u;
  R(5)=R(6);
  R(7)=R(8);
  ST8(R(15),R(1));
  { c->pr=0x8c093fe0u; R(4)=R(15); f_8c094082(c); }
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=0x40u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c093ff0;
  R(1)=0x100u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c094020;
L8c093ff0:;
  R(5)=LD32(R(14)+12);
  R(6)=0x1u;
  R(7)=R(8);
  { R(4)=LD32(R(14)+8); goto L8c094038; }
L8c094020:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=0x80u;
  R(4)=R(0)&0xFFFF;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c094030;
  R(1)=0x200u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c094040;
L8c094030:;
  R(5)=LD32(R(14)+12);
  R(6)=0x1u;
  R(7)=R(8);
L8c094036:;
  R(4)=LD32(R(14)+4);
L8c094038:;
  { c->pr=0x8c09403cu;  f_8c094082(c); }
  {  goto L8c09406c; }
L8c094040:;
  R(14)=0x13du;
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c09404au; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c0c6c40u;
  R(7)=0x7u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t tg=R(9); c->pr=0x8c094064u; R(4)=0x8u; sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c09406c; }
L8c094068:;
  R(0)=R(11);
  ST8(R(15)+8,R(0));
L8c09406c:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
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
void f_8c094082(SH4Ctx *c) {
  c->macl=R(5)*R(6);
  R(1)=R(4);
  R(0)=c->macl;
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c09409e; }
L8c09408e:;
  R(2)=LD32(R(7));
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(0);
  R(2)+=0x1u;
  ST32(R(7),R(2));
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(3)=(uint32_t)v;}
  {uint32_t v=R(3);R(2)-=1;ST8(R(2),v);}
  if(!c->t) goto L8c09408e;
L8c09409e:;
  {  return; }
}
void f_8c0940e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(5));
  ST16(R(15),R(6));
  R(14)=LD32(R(4));
  R(3)=LD32(R(15)+8);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(3)); if(k) goto L8c09410e; }
L8c0940f4:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=R(3)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c094108;
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c094108u; R(4)=R(14); f_8c09412c(c); }
L8c094108:;
  R(14)=LD32(R(14));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0940f4;
L8c09410e:;
  R(0)=LD32(R(15)+8);
  R(3)=LD32(R(15)+4);
  R(0)-=R(3);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c094122;
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c094122:;
  R(0)=0x1u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09412c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=0x1u;
  R(14)=R(4);
  ST8(R(15)+4,R(0));
  R(11)=R(5);
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=0xfc00u;
  R(1)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c09417e; }
  R(1)=0x1000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c09417e;
  R(1)=0x2000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c094186;
  R(1)=0x3000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0941c0;
  R(1)=0x4000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0941c8;
  R(1)=0x7000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0941d4;
  R(1)=0x5000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0941e2;
  {  goto L8c094300; }
L8c09417e:;
  R(6)=0x1u;
  R(7)=R(11);
  { R(5)=R(6); goto L8c0941ce; }
L8c094186:;
  R(6)=0x2u;
  R(7)=R(11);
  { R(5)=0x1u; goto L8c0941ce; }
L8c0941c0:;
  R(6)=0x4u;
  R(7)=R(11);
  { R(5)=0x1u; goto L8c0941ce; }
L8c0941c8:;
  R(5)=0x1u;
  R(7)=R(11);
  R(6)=0x4u;
L8c0941ce:;
  R(4)=R(14);
  { R(4)+=0x8u; goto L8c0942a2; }
L8c0941d4:;
  R(5)=0x1u;
  R(4)=R(14);
  R(6)=0x3u;
  ST32(R(14)+8,R(10));
  R(7)=R(11);
  { R(4)+=0x9u; goto L8c0942a2; }
L8c0941e2:;
  R(6)=0x1u;
  R(7)=R(11);
  R(5)=R(6);
  { c->pr=0x8c0941ecu; R(4)=R(15); f_8c09431a(c); }
  R(3)=LD32(R(14)+8);
  R(13)=0x8c0bcfa8u;
  R(12)=0xffu;
  c->t=(R(3)&R(3))==0;
  R(9)=(int32_t)(int8_t)LD8(R(15));
  R(8)=0x8c0125ccu;
  { uint32_t k=!c->t; R(9)=R(9)&0xFF; if(k) goto L8c094294; }
  R(2)=0x8c2d4070u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c094240;
  R(3)=0x8c0199c4u;
  R(5)=R(13);
  R(6)=0x18fu;
  { c->pr=0x8c09420eu; R(4)=R(9); f_8c0199c4(c); }
  { ST32(R(14)+8,R(0)); goto L8c094264; }
L8c094240:;
  R(3)=0x8c0c758cu;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c094256;
  R(1)=0x8c064e90u;
  R(5)=0x8c0bcfa8u;
  R(6)=0x18fu;
  { c->pr=0x8c094252u; R(4)=R(9); f_8c064e90(c); }
  {  goto L8c094260; }
L8c094256:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bcfa8u;
  R(6)=0x18fu;
  { c->pr=0x8c094260u; R(4)=R(9); f_8c0199c4(c); }
L8c094260:;
  ST32(R(14)+8,R(0));
  R(3)=R(0);
L8c094264:;
  R(1)=LD32(R(14)+8);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c094292;
  R(6)=0x193u;
  R(5)=R(13);
  { uint32_t tg=R(8); c->pr=0x8c094272u; R(4)=0x0u; sh4_call(c,tg); }
  R(3)=0x193u;
  R(2)=0xffffffffu;
  R(1)=0x8c0c6c40u;
  R(7)=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c094290u; R(4)=0x8u; f_8c012658(c); }
  R(15)+=0x18u;
L8c094292:;
  ST32(R(14)+12,R(9));
L8c094294:;
  R(2)=LD32(R(14)+12);
  c->t=R(2)==R(9);
  if(!c->t) goto L8c0942aa;
  R(5)=LD32(R(14)+12);
  R(7)=R(11);
  R(4)=LD32(R(14)+8);
  R(6)=0x1u;
L8c0942a2:;
  { c->pr=0x8c0942a6u;  f_8c09431a(c); }
  {  goto L8c094304; }
L8c0942aa:;
  R(14)=0x19au;
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(8); c->pr=0x8c0942b4u; R(4)=0x0u; sh4_call(c,tg); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x6u;
  R(3)=0x8c0c6c40u;
  R(6)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c0942d0u; R(4)=0x8u; f_8c012658(c); }
  { R(15)+=0x18u; goto L8c094304; }
L8c094300:;
  R(0)=R(10);
  ST8(R(15)+4,R(0));
L8c094304:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
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
void f_8c09431a(SH4Ctx *c) {
  c->macl=R(5)*R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  R(0)=c->macl;
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c09433c; }
L8c094328:;
  R(3)=LD32(R(7));
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(0);
  R(3)+=0x1u;
  ST32(R(7),R(3));
  R(3)+=0xffffffffu;
  R(1)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(13),R(1));
  { uint32_t k=!c->t; R(13)+=0x1u; if(k) goto L8c094328; }
L8c09433c:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c094340(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0xf0u;
  R(7)=R(15);
  R(6)=0x1u;
  ST32(R(15)+4,R(4));
  R(5)=R(6);
  ST8(R(15),R(2));
  R(7)+=0x4u;
  { c->pr=0x8c094356u; R(4)=R(15); f_8c094082(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c094380(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)=R(4);
  R(6)+=0x48u;
  R(14)=R(5);
  R(3)=0x8c05e5f4u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(6));
  R(6)+=0xcu;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c09439au; R(4)=R(14); f_8c05e5f4(c); }
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_arith(c,3,3,4);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,3,2,4);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,3,3,4);
  fp_st(c,3,R(0)+R(14));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0943bc(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0943d6;
  R(3)=0x8c064e90u;
  R(6)=0x35u;
  R(5)=0x8c0bcfb8u;
  { c->pr=0x8c0943d2u; R(4)=0x10u; f_8c064e90(c); }
  {  goto L8c0943e0; }
L8c0943d6:;
  R(1)=0x8c0199c4u;
  R(6)=0x35u;
  R(5)=0x8c0bcfb8u;
  { c->pr=0x8c0943e0u; R(4)=0x10u; f_8c0199c4(c); }
L8c0943e0:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c094416;
  R(3)=0x8c0125ccu;
  R(6)=0x35u;
  R(5)=0x8c0bcfb8u;
  { c->pr=0x8c0943f0u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0bcfb8u;
  R(2)=0x35u;
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
  { c->pr=0x8c094414u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c094416:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x10u;
  { c->pr=0x8c094420u; R(4)=R(14); f_8c0686b8(c); }
  R(2)=0x0u;
  R(0)=R(14);
  R(3)=R(2);
  ST32(R(14)+4,R(2));
  ST32(R(14)+8,R(2));
  ST32(R(14)+12,R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094480(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c094484(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09449e;
  R(3)=0x8c064e90u;
  R(6)=0x49u;
  R(5)=0x8c0bcfb8u;
  { c->pr=0x8c09449au; R(4)=0x10u; f_8c064e90(c); }
  {  goto L8c0944a8; }
L8c09449e:;
  R(1)=0x8c0199c4u;
  R(6)=0x49u;
  R(5)=0x8c0bcfb8u;
  { c->pr=0x8c0944a8u; R(4)=0x10u; f_8c0199c4(c); }
L8c0944a8:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0944de;
  R(3)=0x8c0125ccu;
  R(6)=0x49u;
  R(5)=0x8c0bcfb8u;
  { c->pr=0x8c0944b8u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0bcfb8u;
  R(2)=0x49u;
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
  { c->pr=0x8c0944dcu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0944de:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x10u;
  { c->pr=0x8c0944e8u; R(4)=R(14); f_8c0686b8(c); }
  R(2)=0x0u;
  R(0)=R(14);
  R(3)=R(2);
  ST32(R(14)+4,R(2));
  ST32(R(14)+8,R(2));
  ST32(R(14)+12,R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0944fa(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c094540(SH4Ctx *c) {
  R(7)=R(5);
  R(7)+=0x48u;
  R(6)=R(7);
  fp_ld(c,3,R(6));
  fp_ld(c,4,R(4));
  R(5)=R(7);
  fp_cmp(c,1,3,4);
  { uint32_t k=c->t; R(5)+=0xcu; if(k) goto L8c094578; }
  fp_ld(c,3,R(5));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c094578;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(6));
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c094578;
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c094578;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(6));
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c094578;
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c09457c;
L8c094578:;
  { R(0)=0x0u; return; }
L8c09457c:;
  R(0)=0x1u;
  {  return; }
}
void f_8c094582(SH4Ctx *c) {
  R(3)=0x8c2e2660u;
  R(2)=0x8c2e2688u;
  ST32(R(4),R(3));
  { R(0)=(int32_t)(int16_t)LD16(R(2)); return; }
}
void f_8c09458c(SH4Ctx *c) {
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
  R(0)=0x8c094688u;
  ST32(R(15),R(5));
  fp_ld(c,4,R(0));
  R(5)=0x0u;
  R(13)=LD32(R(4)+8);
  R(12)=R(5);
  fp_mov(c,14,4);
  R(9)=R(5);
  c->t=(R(13)&R(13))==0;
  R(10)=R(5);
  fp_mov(c,15,4);
  R(8)=R(5);
  { uint32_t k=c->t; R(11)=R(5); if(k) goto L8c09464c; }
L8c0945be:;
  R(14)=LD32(R(13)+4);
  R(8)=R(13);
  R(5)=R(14);
  { c->pr=0x8c0945c8u; R(4)=LD32(R(15)); f_8c094540(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c094646;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0945d4u; R(4)=R(14); f_8c094380(c); }
  R(3)=0x8c05e612u;
  R(5)=R(15);
  R(6)=LD32(R(15));
  R(4)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0945e2u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x64u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  c->t=(R(3)&R(3))==0;
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c094628; }
  R(0)=0x67u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=(uint32_t)(int32_t)(int8_t)R(9);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  if(!c->t) goto L8c094618;
  fp_mov(c,15,4);
  R(12)=R(13);
  { R(9)=(int32_t)(int8_t)LD8(R(14)+R(0)); goto L8c094646; }
L8c094618:;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c094646;
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c094646;
  R(12)=R(13);
  { fp_mov(c,15,4); goto L8c094646; }
L8c094628:;
  R(0)=0x67u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=(uint32_t)(int32_t)(int8_t)R(10);
  c->t=(int32_t)R(2)>(int32_t)R(4);
  if(!c->t) goto L8c09463a;
  fp_mov(c,14,4);
  R(11)=R(13);
  { R(10)=(int32_t)(int8_t)LD8(R(14)+R(0)); goto L8c094646; }
L8c09463a:;
  c->t=R(2)==R(4);
  if(!c->t) goto L8c094646;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c094646;
  fp_mov(c,14,4);
  R(11)=R(13);
L8c094646:;
  R(13)=LD32(R(13)+20);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0945be;
L8c09464c:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c094658;
  R(12)=R(11);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c094658;
  R(12)=R(8);
L8c094658:;
  R(0)=R(12);
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
void f_8c0946a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(6);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(12));
  R(9)=LD32(R(13)+4);
  R(5)=R(9);
  { c->pr=0x8c0946beu; R(4)=R(11); f_8c094540(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c094706;
  R(0)=0x64u;
  R(3)=(int32_t)(int8_t)LD8(R(9)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c094706;
  R(4)=LD32(R(13)+4);
  R(8)=LD32(R(4)+44);
  { R(4)=LD32(R(4)+40); goto L8c0946fc; }
L8c0946d2:;
  R(4)=R(13);
  R(14)=LD32(R(4));
  R(0)=0x67u;
  R(10)=LD32(R(14)+4);
  R(3)=(int32_t)(int8_t)LD8(R(9)+R(0));
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c094740;
  R(0)=0x64u;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0946f4;
  R(5)=R(10);
  { c->pr=0x8c0946f0u; R(4)=R(11); f_8c094540(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c094726;
L8c0946f4:;
  R(4)=R(13);
  R(4)+=0x4u;
  R(8)+=0xffffffffu;
  R(5)=R(13);
L8c0946fc:;
  c->t=(int32_t)R(8)>0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0946d2; }
  {  goto L8c094740; }
L8c094706:;
  R(4)=LD32(R(13)+4);
  R(8)=LD32(R(4)+44);
  { R(4)=LD32(R(4)+40); goto L8c094732; }
L8c09470e:;
  R(4)=R(10);
  R(14)=LD32(R(4));
  R(0)=0x64u;
  R(9)=LD32(R(14)+4);
  R(2)=(int32_t)(int8_t)LD8(R(9)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09472a;
  R(5)=R(9);
  { c->pr=0x8c094722u; R(4)=R(11); f_8c094540(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09472a;
L8c094726:;
  { ST32(R(12),R(14)); goto L8c094740; }
L8c09472a:;
  R(4)=R(10);
  R(4)+=0x4u;
  R(8)+=0xffffffffu;
  R(5)=R(10);
L8c094732:;
  c->t=(int32_t)R(8)>0;
  { uint32_t k=c->t; R(10)=R(4); if(k) goto L8c09470e; }
  R(5)=R(11);
  { c->pr=0x8c09473eu; R(4)=LD32(R(13)+28); f_8c09458c(c); }
  ST32(R(12),R(0));
L8c094740:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094752(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09475e;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(4)+4);
  ST32(R(3)+8,R(2));
L8c09475e:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09476a;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4)+8);
  ST32(R(3)+4,R(2));
L8c09476a:;
  R(3)=LD32(R(4)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094794;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c094786;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+12);
  ST32(R(1),R(3));
L8c094786:;
  R(2)=LD32(R(4)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c094794;
  R(3)=LD32(R(4)+8);
  R(1)=LD32(R(4)+12);
  ST32(R(1)+4,R(3));
L8c094794:;
  R(5)=0x0u;
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  { ST32(R(4)+12,R(5)); return; }
}
void f_8c09479e(SH4Ctx *c) {
  R(3)=LD32(R(5)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0947aa;
  R(2)=LD32(R(5)+8);
  R(3)=LD32(R(5)+4);
  ST32(R(3)+8,R(2));
L8c0947aa:;
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0947b6;
  R(2)=LD32(R(5)+4);
  R(3)=LD32(R(5)+8);
  ST32(R(3)+4,R(2));
L8c0947b6:;
  R(3)=LD32(R(5)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0947e0;
  R(3)=LD32(R(5)+12);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(5)+12);
  R(2)=LD32(R(3));
  c->t=R(2)==R(5);
  if(!c->t) goto L8c0947d2;
  R(3)=LD32(R(5)+4);
  R(1)=LD32(R(5)+12);
  ST32(R(1),R(3));
L8c0947d2:;
  R(2)=LD32(R(5)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c0947e0;
  R(3)=LD32(R(5)+8);
  R(1)=LD32(R(5)+12);
  ST32(R(1)+4,R(3));
L8c0947e0:;
  R(6)=0x0u;
  ST32(R(5)+4,R(6));
  ST32(R(5)+8,R(6));
  ST32(R(5)+12,R(6));
  ST32(R(5)+4,R(6));
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2)+4);
  ST32(R(5)+8,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+12,R(2));
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c094802;
  R(2)=LD32(R(4)+4);
  { ST32(R(2),R(5)); goto L8c094808; }
L8c094802:;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2)+4);
  ST32(R(3)+4,R(5));
L8c094808:;
  R(2)=LD32(R(4)+4);
  ST32(R(2)+4,R(5));
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+8);
  R(2)+=0x1u;
  { ST32(R(3)+8,R(2)); return; }
}
void f_8c094816(SH4Ctx *c) {
  R(3)=LD32(R(5)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094822;
  R(2)=LD32(R(5)+8);
  R(3)=LD32(R(5)+4);
  ST32(R(3)+8,R(2));
L8c094822:;
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09482e;
  R(2)=LD32(R(5)+4);
  R(3)=LD32(R(5)+8);
  ST32(R(3)+4,R(2));
L8c09482e:;
  R(3)=LD32(R(5)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094858;
  R(3)=LD32(R(5)+12);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(5)+12);
  R(2)=LD32(R(3));
  c->t=R(2)==R(5);
  if(!c->t) goto L8c09484a;
  R(3)=LD32(R(5)+4);
  R(1)=LD32(R(5)+12);
  ST32(R(1),R(3));
L8c09484a:;
  R(2)=LD32(R(5)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c094858;
  R(3)=LD32(R(5)+8);
  R(1)=LD32(R(5)+12);
  ST32(R(1)+4,R(3));
L8c094858:;
  R(6)=0x0u;
  ST32(R(5)+4,R(6));
  ST32(R(5)+8,R(6));
  ST32(R(5)+12,R(6));
  ST32(R(5)+8,R(6));
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2));
  ST32(R(5)+4,R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+12,R(2));
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09487a;
  R(2)=LD32(R(4)+4);
  { ST32(R(2)+4,R(5)); goto L8c094880; }
L8c09487a:;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2));
  ST32(R(3)+8,R(5));
L8c094880:;
  R(2)=LD32(R(4)+4);
  ST32(R(2),R(5));
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+8);
  R(2)+=0x1u;
  { ST32(R(3)+8,R(2)); return; }
}
void f_8c09488e(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09489a;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(4)+4);
  ST32(R(3)+8,R(2));
L8c09489a:;
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0948a6;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(4)+8);
  ST32(R(3)+4,R(2));
L8c0948a6:;
  R(3)=LD32(R(4)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0948d0;
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+12);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0948c2;
  R(3)=LD32(R(4)+4);
  R(1)=LD32(R(4)+12);
  ST32(R(1),R(3));
L8c0948c2:;
  R(2)=LD32(R(4)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0948d0;
  R(3)=LD32(R(4)+8);
  R(1)=LD32(R(4)+12);
  ST32(R(1)+4,R(3));
L8c0948d0:;
  R(5)=0x0u;
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  { ST32(R(4)+12,R(5)); return; }
}
void f_8c0948da(SH4Ctx *c) {
  R(3)=LD32(R(5)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0948e6;
  R(2)=LD32(R(5)+8);
  R(3)=LD32(R(5)+4);
  ST32(R(3)+8,R(2));
L8c0948e6:;
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0948f2;
  R(2)=LD32(R(5)+4);
  R(3)=LD32(R(5)+8);
  ST32(R(3)+4,R(2));
L8c0948f2:;
  R(3)=LD32(R(5)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09491c;
  R(3)=LD32(R(5)+12);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(5)+12);
  R(2)=LD32(R(3));
  c->t=R(2)==R(5);
  if(!c->t) goto L8c09490e;
  R(3)=LD32(R(5)+4);
  R(1)=LD32(R(5)+12);
  ST32(R(1),R(3));
L8c09490e:;
  R(2)=LD32(R(5)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c09491c;
  R(3)=LD32(R(5)+8);
  R(1)=LD32(R(5)+12);
  ST32(R(1)+4,R(3));
L8c09491c:;
  R(6)=0x0u;
  ST32(R(5)+4,R(6));
  ST32(R(5)+8,R(6));
  ST32(R(5)+12,R(6));
  ST32(R(5)+4,R(6));
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2)+24);
  ST32(R(5)+8,R(3));
  R(3)=LD32(R(4)+4);
  R(3)+=0x14u;
  ST32(R(5)+12,R(3));
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c094940;
  R(3)=LD32(R(4)+4);
  { ST32(R(3)+20,R(5)); goto L8c094946; }
L8c094940:;
  R(3)=LD32(R(4)+4);
  R(2)=LD32(R(3)+24);
  ST32(R(2)+4,R(5));
L8c094946:;
  R(3)=LD32(R(4)+4);
  ST32(R(3)+24,R(5));
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2)+28);
  R(3)+=0x1u;
  { ST32(R(2)+28,R(3)); return; }
}
void f_8c094954(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(0)=R(4);
  ST16(R(15)+8,R(0));
  c->fr[4]=0x00000000u;
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2eu;
  R(12)=R(5);
  R(3)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(8)=0x0u;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(9)=R(8); if(k) goto L8c094a30; }
L8c094986:;
  R(3)=LD32(R(12)+16);
  R(0)=(uint32_t)(int32_t)(int16_t)R(9);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c094a24;
  R(0)=LD32(R(12)+20);
  R(13)=(uint32_t)(int32_t)(int16_t)R(9);
  R(13)<<=2;
  R(13)=LD32(R(13)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(13)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(14)=R(8); if(k) goto L8c094a24; }
L8c0949a2:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=LD32(R(13)+8);
  R(3)=R(4);
  R(3)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)+=R(2);
  ST32(R(15)+4,R(4));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=(int32_t)(int16_t)LD16(R(4));
  R(5)=R(0);
  c->t=R(3)==R(5);
  if(c->t) goto L8c0949c8;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  c->t=R(0)==R(5);
  if(c->t) goto L8c0949c8;
  R(0)=(int32_t)(int16_t)LD16(R(4)+4);
  c->t=R(0)==R(5);
  if(!c->t) goto L8c094a1a;
L8c0949c8:;
  R(10)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=LD32(R(13)+8);
  R(3)=R(10);
  R(3)<<=2;
  c->t=R(10)>>31;R(10)<<=1;
  R(11)=LD32(R(12));
  R(10)+=R(3);
  R(4)=R(15);
  R(10)+=R(2);
  R(7)=R(11);
  R(2)=0x8c085b20u;
  R(6)=R(11);
  ST32(R(15),R(10));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(5)=(int32_t)(int16_t)LD16(R(10));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(7)+=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(10)+2);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(0)<<=2;
  R(5)+=R(11);
  R(6)+=R(0);
  { uint32_t tg=R(2); c->pr=0x8c094a0au; R(4)+=0xcu; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0xcu;
  R(5)+=0x18u;
  { c->pr=0x8c094a1au; R(4)+=0x18u; f_8c05e5f4(c); }
L8c094a1a:;
  R(0)=(int32_t)(int16_t)LD16(R(13)+4);
  R(14)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c0949a2;
L8c094a24:;
  R(0)=0x2eu;
  R(2)=(int32_t)(int16_t)LD16(R(12)+R(0));
  R(9)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(9);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c094986;
L8c094a30:;
  R(3)=R(15);
  R(1)=R(15);
  R(3)+=0x18u;
  R(1)+=0x44u;
  R(2)=LD32(R(3));
  R(1)=LD32(R(1));
  R(0)=LD32(R(3)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(0));
  R(2)=LD32(R(3)+8);
  ST32(R(1)+8,R(2));
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
void f_8c094a5a(SH4Ctx *c) {
  R(5)=0x0u;
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  { ST32(R(4)+12,R(5)); return; }
}
void f_8c094a64(SH4Ctx *c) {
  R(5)=0x0u;
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  { ST32(R(4)+12,R(5)); return; }
}
void f_8c094a6e(SH4Ctx *c) {
  R(0)=LD32(R(4)+4);
  R(1)=0x64u;
  { R(0)=(int32_t)(int8_t)LD8(R(1)+R(0)); return; }
}
void f_8c094aa0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c064a66u;
  { c->pr=0x8c094aa8u;  f_8c064a66(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  c->t=(R(0)&R(0))==0;
  { R(0)=c->t; return; }
}
void f_8c094ab0(SH4Ctx *c) {
  R(0)=LD32(R(4)+4);
  R(1)=0x65u;
  { R(0)=(int32_t)(int8_t)LD8(R(1)+R(0)); return; }
}
void f_8c094ab8(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0x65u;
  { ST8(R(3)+R(0),R(5)); return; }
}
void f_8c094ac0(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  R(0)=0x60u;
  { fp_ld(c,0,R(0)+R(3)); return; }
}
void f_8c094ac8(SH4Ctx *c) {
  R(0)=R(4);
  { R(0)+=0x48u; return; }
}
void f_8c094ace(SH4Ctx *c) {
  R(0)=R(4);
  { R(0)+=0x54u; return; }
}
void f_8c094b00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(10)=R(15);
  R(10)+=0x2cu;
  R(3)=LD32(R(10));
  R(13)=R(15);
  R(13)+=0x4u;
  R(14)=R(3);
  ST32(R(13),R(3));
  R(4)=0xfffffffeu;
  R(14)+=0x14u;
  ST32(R(15),R(4));
  R(11)=LD32(R(10));
  R(12)=0xffffffffu;
  R(3)=R(11);
  R(2)=LD32(R(3)+36);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=!c->t; R(9)=R(4); if(k) goto L8c094b4c; }
  R(4)=LD32(R(11)+36);
  R(2)=LD32(R(14)+20);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(2);
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c094b4c;
  R(3)=LD32(R(11)+36);
  ST32(R(15),R(3));
L8c094b4c:;
  R(2)=LD32(R(11)+32);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c094b6a;
  R(4)=LD32(R(11)+32);
  R(2)=LD32(R(14)+20);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(2);
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c094b78;
  { R(9)=LD32(R(11)+32); goto L8c094b78; }
L8c094b6a:;
  R(0)=LD32(R(11)+32);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c094b78;
  R(3)=LD32(R(11)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c094b78;
  R(9)=0xffffffffu;
L8c094b78:;
  R(3)=0x8c061fa0u;
  R(4)=0x10000u;
  { c->pr=0x8c094b80u;  f_8c061fa0(c); }
  R(2)=LD32(R(14)+4);
  R(7)=R(0);
  R(8)=0x0u;
  c->t=(int32_t)R(7)>=(int32_t)R(2);
  { uint32_t k=c->t; R(11)=R(8); if(k) goto L8c094b92; }
  R(0)=R(9);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c094bde;
L8c094b92:;
  R(2)=LD32(R(14)+24);
  R(5)=R(8);
  R(3)=LD32(R(14)+4);
  R(4)=LD32(R(14)+20);
  c->t=(int32_t)R(2)>0;
  R(7)-=R(3);
  { uint32_t k=!c->t; R(6)=0x1u; if(k) goto L8c094bc6; }
L8c094ba2:;
  R(1)=LD32(R(4)+4);
  c->t=(int32_t)R(7)>(int32_t)R(1);
  if(c->t) goto L8c094bb8;
  R(2)=LD32(R(15));
  c->t=R(2)==R(5);
  if(c->t) goto L8c094bb8;
  R(2)=LD32(R(4));
  R(12)=R(5);
  ST32(R(13),R(2));
  { R(11)=R(6); goto L8c094bc6; }
L8c094bb8:;
  R(3)=LD32(R(14)+24);
  R(5)+=0x1u;
  R(2)=LD32(R(4)+4);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  R(7)-=R(2);
  { uint32_t k=!c->t; R(4)+=0xcu; if(k) goto L8c094ba2; }
L8c094bc6:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c094be6;
  c->t=(R(9)&R(9))==0;
  { uint32_t k=c->t; R(11)=R(6); if(k) goto L8c094bda; }
  R(4)=LD32(R(14)+20);
  R(12)=R(8);
  R(3)=LD32(R(4));
  { ST32(R(13),R(3)); goto L8c094bde; }
L8c094bda:;
  ST32(R(13),R(8));
  R(12)=0xffffffffu;
L8c094bde:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c094be6;
  ST32(R(13),R(8));
  R(12)=0xffffffffu;
L8c094be6:;
  R(0)=R(12);
  R(2)=LD32(R(10));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(2)+32,R(12)); if(k) goto L8c094bf4; }
  R(2)=LD32(R(10));
  ST32(R(2)+36,R(12));
L8c094bf4:;
  R(3)=LD32(R(13));
  R(1)=LD32(R(15)+40);
  ST32(R(1),R(3));
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
void f_8c094c0e(SH4Ctx *c) {
  R(1)=LD32(R(15)+4);
  R(0)=LD32(R(1)+32);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c094c1e; }
  R(2)=LD32(R(1)+44);
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c094c28;
L8c094c1e:;
  R(0)=0x8c0c6ee0u;
  R(1)=LD32(R(15));
  R(3)=LD32(R(0));
  { ST32(R(1),R(3)); return; }
L8c094c28:;
  R(4)=LD32(R(1)+32);
  R(2)=LD32(R(1)+40);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(1)=LD32(R(15));
  R(4)<<=2;
  R(4)+=R(2);
  R(3)=LD32(R(4));
  ST32(R(1),R(3));
  {  return; }
}
void f_8c094c60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffa4u;
  R(3)=0x8c063d46u;
  ST32(R(15)+12,R(4));
  ST32(R(15)+8,R(5));
  R(5)=0xcu;
  ST32(R(15)+4,R(6));
  ST32(R(15),R(7));
  { c->pr=0x8c094c7au; R(4)=0x6u; f_8c063d46(c); }
  R(14)=R(0);
  R(0)=0x6cu;
  R(2)=0x1u;
  R(12)=R(15);
  ST32(R(14)+4,R(2));
  R(12)+=0x58u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x6cu;
  ST32(R(14)+8,R(3));
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c094c94u; {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);} f_8c094b00(c); }
  R(2)=LD32(R(12));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c094ce6; }
  R(5)=LD32(R(15)+12);
  R(13)=R(15);
  R(3)=0x8c0685b4u;
  R(13)+=0x10u;
  R(6)=0x48u;
  { c->pr=0x8c094caau; R(4)=R(13); f_8c0685b4(c); }
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(3)=LD32(R(14)+8);
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(3)+12);
  R(3)=0xfffffff9u;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(0);
  R(2)=R(14);
  R(2)+=0x4u;
  R(0)=c->macl;
  R(0)=sh4_shad(R(0),R(3));
  ST8(R(13)+4,R(0));
  R(0)=LD32(R(13)+32);
  R(0)|=0x4u;
  ST32(R(13)+32,R(0));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  R(5)=LD32(R(15)+16);
  R(3)=0x8c060704u;
  R(7)=LD32(R(15)+8);
  { c->pr=0x8c094cdau; R(4)=R(13); f_8c060704(c); }
  R(15)+=0x8u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(14),R(0)); if(k) goto L8c094ce6; }
  { R(0)=R(14); goto L8c094cf0; }
L8c094ce6:;
  R(3)=0x8c064160u;
  R(5)=R(14);
  { c->pr=0x8c094ceeu; R(4)=0x6u; f_8c064160(c); }
  R(0)=0xffffffffu;
L8c094cf0:;
  R(15)+=0x5cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094cfc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb8u;
  R(3)=0x8c0685b4u;
  R(6)=0x48u;
  R(13)=R(4);
  R(14)=R(15);
  { c->pr=0x8c094d10u; R(4)=R(14); f_8c0685b4(c); }
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(3)=LD32(R(13)+8);
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(3)+12);
  R(3)=0xfffffff9u;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(0);
  R(0)=c->macl;
  R(0)=sh4_shad(R(0),R(3));
  ST8(R(14)+4,R(0));
  R(0)=LD32(R(14)+32);
  R(0)|=0x4u;
  ST32(R(14)+32,R(0));
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c094d40;
  R(3)=0x8c060860u;
  R(5)=R(14);
  { c->pr=0x8c094d38u; R(4)=LD32(R(13)); f_8c060860(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c094d40;
  { R(4)=0x1u; goto L8c094d4a; }
L8c094d40:;
  R(2)=0x8c064160u;
  R(5)=R(13);
  { c->pr=0x8c094d48u; R(4)=0x6u; f_8c064160(c); }
  R(4)=0x0u;
L8c094d4a:;
  R(0)=R(4);
  R(15)+=0x48u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094d56(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094d74;
  R(3)=0x8c0608e0u;
  { c->pr=0x8c094d68u; R(4)=LD32(R(14)); f_8c0608e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c094d74;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c094d74:;
  R(2)=0x8c064160u;
  R(5)=R(14);
  { c->pr=0x8c094d7cu; R(4)=0x6u; f_8c064160(c); }
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094d74(SH4Ctx *c) {
  R(2)=0x8c064160u;
  R(5)=R(14);
  { c->pr=0x8c094d7cu; R(4)=0x6u; f_8c064160(c); }
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094d84(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094d96;
  R(3)=0x8c060912u;
  { c->pr=0x8c094d96u; R(4)=LD32(R(14)); f_8c060912(c); }
L8c094d96:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c064160u;
  R(5)=R(14);
  R(4)=0x6u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064160(c); return; } }
}
void f_8c094da2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094de0;
  R(3)=0x8c06093cu;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c06093c(c); return; } }
L8c094de0:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094de4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094df6;
  R(3)=0x8c060958u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c060958(c); return; } }
L8c094df6:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094dfa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094e0c;
  R(3)=0x8c060974u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c060974(c); return; } }
L8c094e0c:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094e10(SH4Ctx *c) {
  {  return; }
}
void f_8c094e14(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094e26;
  R(3)=0x8c060f98u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c060f98(c); return; } }
L8c094e26:;
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094e2c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c094e3e;
  R(3)=0x8c061000u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c061000(c); return; } }
L8c094e3e:;
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094e44(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(0)=0x14u;
  ST32(R(5),R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+4,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(5)+8,R(3));
  R(3)=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(5)+12,R(0));
  ST32(R(5)+16,R(3));
  R(2)=LD32(R(4)+24);
  ST32(R(5)+20,R(2));
  R(3)=LD32(R(4)+28);
  ST32(R(5)+24,R(3));
  R(2)=LD32(R(4)+32);
  R(4)=0xfffffffeu;
  ST32(R(5)+28,R(2));
  ST32(R(5)+32,R(4));
  { ST32(R(5)+36,R(4)); return; }
}
void f_8c094ea0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(11)+16);
  R(10)=0x8c061bb8u;
  R(4)+=R(6);
  ST32(R(13)+40,R(4));
  R(3)=LD32(R(11)+24);
  R(2)=R(3);
  c->t=(int32_t)R(2)>0;
  ST32(R(13)+44,R(3));
  R(14)=LD32(R(13)+40);
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c094ed6; }
L8c094ec6:;
  { uint32_t tg=R(10); c->pr=0x8c094ecau; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(12)+=0x1u;
  ST32(R(14),R(0));
  R(2)=LD32(R(13)+44);
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(14)+=0xcu; if(k) goto L8c094ec6; }
L8c094ed6:;
  R(5)=R(13);
  R(6)=0x0u;
  { c->pr=0x8c094edeu; R(4)=R(11); f_8c094e44(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094eee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=R(5);
  c->t=(R(3)&R(3))==0;
  R(14)=R(15);
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  { uint32_t k=c->t; R(14)+=0x8u; if(k) goto L8c094f0e; }
  R(3)=LD32(R(15)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c094f0au; {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);} f_8c094b00(c); }
  {  goto L8c094f16; }
L8c094f0e:;
  R(1)=LD32(R(15)+24);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c094f16u; {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);} f_8c094c0e(c); }
L8c094f16:;
  R(3)=LD32(R(14));
  R(2)=0x8c061122u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+32);
  R(5)=LD32(R(15)+12);
  R(4)=LD32(R(15)+16);
  { c->pr=0x8c094f26u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c061122(c); }
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c094f2e(SH4Ctx *c) {
  R(0)=R(5);
  ST8(R(4)+12,R(0));
  { R(0)=0x1u; return; }
}
void f_8c094f60(SH4Ctx *c) {
  { R(0)=0x48u; return; }
}
void f_8c094f64(SH4Ctx *c) {
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(6)=0x48u;
  R(4)=LD32(R(15));
  R(3)=0x8c0685b4u;
  R(4)+=0x30u;
  { R(15)+=0x4u; { f_8c0685b4(c); return; } }
}
void f_8c094f84(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(0)=0x14u;
  ST32(R(5),R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+4,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(5)+8,R(3));
  R(3)=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(5)+12,R(0));
  ST32(R(5)+16,R(3));
  R(2)=LD32(R(4)+24);
  ST32(R(5)+20,R(2));
  R(3)=LD32(R(4)+40);
  ST32(R(5)+36,R(3));
  R(2)=LD32(R(4)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c094fb6;
  R(2)=LD32(R(4)+28);
  ST32(R(5)+24,R(2));
  R(3)=LD32(R(4)+32);
  ST32(R(5)+28,R(3));
  R(2)=LD32(R(4)+36);
  { ST32(R(5)+32,R(2)); goto L8c094fbe; }
L8c094fb6:;
  R(4)=0x0u;
  ST32(R(5)+24,R(4));
  ST32(R(5)+28,R(4));
  ST32(R(5)+32,R(4));
L8c094fbe:;
  {  return; }
}
void f_8c094fc2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(11)+16);
  R(10)=0x8c061bb8u;
  R(4)+=R(6);
  ST32(R(13)+40,R(4));
  R(3)=LD32(R(11)+40);
  R(2)=R(3);
  c->t=(int32_t)R(2)>0;
  ST32(R(13)+44,R(3));
  R(14)=LD32(R(13)+40);
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c094ff8; }
L8c094fe8:;
  { uint32_t tg=R(10); c->pr=0x8c094fecu; R(4)=LD32(R(14)+12); sh4_call(c,tg); }
  R(12)+=0x1u;
  ST32(R(14)+12,R(0));
  R(2)=LD32(R(13)+44);
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(14)+=0x10u; if(k) goto L8c094fe8; }
L8c094ff8:;
  R(5)=R(13);
  R(6)=0x0u;
  { c->pr=0x8c095000u; R(4)=R(11); f_8c094f84(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095040(SH4Ctx *c) {
  R(6)=0x550u;
  R(7)=0x1u;
  R(4)=0x8c2e269cu;
  R(1)=0xffffffffu;
  R(2)=0x88u;
  R(6)+=R(4);
  R(5)=R(4);
  c->t=R(5)>=R(6);
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c095076; }
L8c095054:;
  R(0)=0x78u;
  ST32(R(5),R(4));
  ST32(R(5)+8,R(4));
  ST32(R(5)+28,R(1));
  ST32(R(5)+32,R(4));
  ST32(R(5)+36,R(4));
  ST32(R(5)+40,R(4));
  ST32(R(5)+44,R(4));
  ST32(R(5)+R(0),R(4));
  R(0)=0x7cu;
  ST32(R(5)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(5)+R(0),R(4));
  ST32(R(5)+12,R(7));
  R(5)+=R(2);
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c095054;
L8c095076:;
  R(3)=0x8c2e2bf0u;
  R(1)=0x8c2e2bf4u;
  R(2)=0x8c2e2becu;
  ST32(R(2),R(7));
  ST8(R(3),R(4));
  ST32(R(1),R(4));
  { R(0)=0x3u; return; }
}
void f_8c095086(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c09508a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=0xffffffffu;
  R(14)=0x550u;
  R(4)=0x8c2e269cu;
  R(7)=0x88u;
  R(14)+=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(6)=R(4);
  c->t=R(6)>=R(14);
  R(5)=R(4);
  R(12)=0x1u;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0950cc; }
L8c0950a4:;
  R(0)=0x78u;
  R(2)=LD32(R(6));
  R(6)+=R(7);
  ST32(R(5),R(4));
  ST32(R(5)+8,R(4));
  c->t=(R(2)&R(2))==0;
  c->t=R(6)>=R(14);
  ST32(R(5)+28,R(1));
  ST32(R(5)+32,R(4));
  ST32(R(5)+36,R(4));
  ST32(R(5)+40,R(4));
  ST32(R(5)+44,R(4));
  ST32(R(5)+R(0),R(4));
  R(0)=0x7cu;
  ST32(R(5)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(5)+R(0),R(4));
  ST32(R(5)+12,R(12));
  { uint32_t k=!c->t; R(5)+=R(7); if(k) goto L8c0950a4; }
L8c0950cc:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095100(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c095104(SH4Ctx *c) {
  {  return; }
}
void f_8c095108(SH4Ctx *c) {
  {  return; }
}
void f_8c09510c(SH4Ctx *c) {
  {  return; }
}
void f_8c095110(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+16,R(6));
  ST32(R(15)+12,R(7));
  R(8)=LD32(R(15)+56);
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c095134; }
  ST32(R(8),R(12));
L8c095134:;
  R(11)=0x8c2e269cu;
  R(4)=0xau;
  R(13)=R(12);
L8c09513a:;
  R(2)=R(13);
  R(2)<<=2;
  R(2)<<=2;
  R(3)=R(13);
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(11);
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c095156;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(4);
  if(!c->t) goto L8c09513a;
L8c095156:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0951a0;
  R(2)=0x8c0633e4u;
  R(6)=0x3u;
  R(5)=0x8c0bcfc4u;
  { c->pr=0x8c095166u; R(4)=0x16u; f_8c0633e4(c); }
  {  goto L8c0952a8; }
L8c0951a0:;
  R(10)=R(15);
  R(10)+=0x34u;
  R(14)=LD32(R(10));
  R(3)=LD32(R(14)+36);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0951b0;
  {  goto L8c0952a8; }
L8c0951b0:;
  R(3)=LD32(R(14)+24);
  R(4)=LD32(R(14)+36);
  c->t=R(3)>=R(4);
  if(!c->t) goto L8c0951bc;
  {  goto L8c0952a0; }
L8c0951bc:;
  R(1)=LD32(R(14)+28);
  c->t=R(1)>=R(4);
  if(!c->t) goto L8c0951c6;
  {  goto L8c0952a0; }
L8c0951c6:;
  R(2)=R(13);
  R(2)<<=2;
  R(2)<<=2;
  R(3)=R(13);
  R(2)+=R(3);
  R(9)=LD32(R(14)+40);
  R(2)<<=2;
  R(6)=0x8c0952beu;
  c->t=R(2)>>31;R(2)<<=1;
  R(7)=R(13);
  R(2)+=R(11);
  ST32(R(15),R(2));
  ST32(R(2)+24,R(9));
  R(2)=LD32(R(15));
  R(2)+=0x4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(9)+12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+12);
  R(3)=0x8c060704u;
  { c->pr=0x8c0951f2u; R(4)=LD32(R(15)+16); f_8c060704(c); }
  R(15)+=0x8u;
  R(14)=R(13);
  R(14)<<=2;
  R(14)<<=2;
  R(3)=R(13);
  R(14)+=R(3);
  ST32(R(15),R(0));
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(14)+=R(11); if(k) goto L8c09527a; }
  R(3)=LD32(R(10));
  R(0)=0x78u;
  ST32(R(14)+20,R(3));
  ST32(R(14)+24,R(9));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+32);
  ST32(R(14)+36,R(3));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+24);
  ST32(R(14)+40,R(3));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+28);
  ST32(R(14)+44,R(3));
  ST32(R(14)+12,R(12));
  ST32(R(14)+16,R(8));
  R(2)=LD32(R(15)+4);
  ST32(R(14)+R(0),R(2));
  R(10)=LD32(R(15)+8);
  { c->pr=0x8c095232u; R(4)=R(10); f_8c094f60(c); }
  R(2)=0x8c0685b4u;
  R(4)=R(14);
  R(6)=R(0);
  R(5)=R(10);
  { c->pr=0x8c09523eu; R(4)+=0x30u; f_8c0685b4(c); }
  R(3)=LD32(R(15)+16);
  R(0)=0x7cu;
  R(4)=0x1u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x80u;
  R(2)=LD32(R(15)+12);
  ST32(R(14)+R(0),R(2));
  R(0)=0x84u;
  ST32(R(14),R(4));
  ST32(R(14)+8,R(12));
  ST32(R(14)+28,R(12));
  R(3)=LD32(R(15));
  ST32(R(14)+32,R(3));
  ST32(R(14)+R(0),R(12));
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(0)=R(13); if(k) goto L8c095276; }
  R(3)=R(13);
  R(3)<<=2;
  R(3)<<=2;
  R(2)=R(13);
  R(3)+=R(2);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(11);
  R(1)=LD32(R(3)+16);
  ST32(R(1),R(4));
L8c095276:;
  {  goto L8c0952aa; }
L8c09527a:;
  { ST32(R(14),R(12)); goto L8c0952a8; }
L8c0952a0:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bcfc4u;
  { c->pr=0x8c0952a8u; R(4)=0x1bu; f_8c0633e0(c); }
L8c0952a8:;
  R(0)=0xffffffffu;
L8c0952aa:;
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
void f_8c0952be(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(4);
  ST32(R(15),R(4));
  R(4)<<=2;
  R(0)=0x84u;
  R(4)<<=2;
  R(4)+=R(3);
  R(3)=0x8c2e269cu;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  ST32(R(15)+4,R(4));
  R(4)+=R(3);
  R(8)=0xffffffffu;
  R(10)=0x1u;
  R(12)=R(8);
  R(13)=0x0u;
  ST32(R(4)+R(0),R(10));
  R(2)=LD32(R(4));
  R(11)=R(13);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(9)=R(11); if(k) { f_8c0953da(c); return; } }
  R(14)=LD32(R(15)+4);
  R(14)+=R(3);
  { f_8c0952fe(c); return; }
}
void f_8c0952fe(SH4Ctx *c) {
L8c0952fe:;
  ST32(R(14)+32,R(8));
  R(3)=LD32(R(14)+20);
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09530e;
  R(4)=LD32(R(14)+20);
  { R(4)=LD32(R(4)+28); goto L8c095314; }
L8c09530e:;
  R(4)=LD32(R(14)+20);
  R(4)=LD32(R(4)+36);
  R(4)+=0xffffffffu;
L8c095314:;
  R(3)=LD32(R(14)+28);
  R(3)=R(3)&0xFFFF;
  c->t=R(4)>R(3);
  if(!c->t) goto L8c095360;
  R(3)=LD32(R(14)+28);
  R(11)=LD32(R(14)+24);
  R(3)+=0x1u;
  R(11)+=0x10u;
  { ST32(R(14)+28,R(3)); goto L8c0953a2; }
L8c095360:;
  R(1)=LD32(R(14)+20);
  R(3)=LD32(R(1)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095386;
  R(3)=LD32(R(14)+36);
  c->t=(R(3)&R(3))==0;
  R(3)+=0xffffffffu;
  { uint32_t k=c->t; ST32(R(14)+36,R(3)); if(k) goto L8c095386; }
  R(5)=LD32(R(14)+20);
  R(4)=LD32(R(5)+24);
  R(3)=LD32(R(5)+40);
  R(11)=R(4);
  R(11)<<=2;
  R(11)<<=2;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(11)+=R(3);
  { ST32(R(14)+28,R(4)); goto L8c0953a2; }
L8c095386:;
  R(0)=0x7cu;
  ST32(R(14),R(13));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(9)=R(10); if(k) goto L8c0953a2; }
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c09539au; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(0)=0x7cu;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
L8c0953a2:;
  c->t=(R(9)&R(9))==0;
  if(!c->t) { f_8c0953e4(c); return; }
  R(3)=R(14);
  R(3)+=0x4u;
  R(7)=LD32(R(15));
  R(0)=0x78u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(14);
  R(2)=LD32(R(11)+12);
  R(3)=0x8c060704u;
  R(6)=0x8c0952beu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0953c0u; R(4)+=0x30u; f_8c060704(c); }
  R(15)+=0x8u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c0953d0; }
  ST32(R(14),R(10));
  ST32(R(14)+24,R(11));
  ST32(R(14)+32,R(12));
  ST32(R(14)+12,R(13));
L8c0953d0:;
  c->t=(R(9)&R(9))==0;
  if(!c->t) { f_8c0953e4(c); return; }
  R(0)=R(12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0952fe;
  { f_8c0953da(c); return; }
}
void f_8c095360(SH4Ctx *c) {
  R(1)=LD32(R(14)+20);
  R(3)=LD32(R(1)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095386;
  R(3)=LD32(R(14)+36);
  c->t=(R(3)&R(3))==0;
  R(3)+=0xffffffffu;
  { uint32_t k=c->t; ST32(R(14)+36,R(3)); if(k) goto L8c095386; }
  R(5)=LD32(R(14)+20);
  R(4)=LD32(R(5)+24);
  R(3)=LD32(R(5)+40);
  R(11)=R(4);
  R(11)<<=2;
  R(11)<<=2;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(11)+=R(3);
  { ST32(R(14)+28,R(4)); goto L8c0953a2; }
L8c095386:;
  R(0)=0x7cu;
  ST32(R(14),R(13));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(9)=R(10); if(k) goto L8c0953a2; }
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c09539au; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(0)=0x7cu;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
L8c0953a2:;
  c->t=(R(9)&R(9))==0;
  if(!c->t) { f_8c0953e4(c); return; }
  R(3)=R(14);
  R(3)+=0x4u;
  R(7)=LD32(R(15));
  R(0)=0x78u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(14);
  R(2)=LD32(R(11)+12);
  R(3)=0x8c060704u;
  R(6)=0x8c0952beu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0953c0u; R(4)+=0x30u; f_8c060704(c); }
  R(15)+=0x8u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c0953d0; }
  ST32(R(14),R(10));
  ST32(R(14)+24,R(11));
  ST32(R(14)+32,R(12));
  ST32(R(14)+12,R(13));
L8c0953d0:;
  c->t=(R(9)&R(9))==0;
  if(!c->t) { f_8c0953e4(c); return; }
  R(0)=R(12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) { f_8c0952fe(c); return; }
  { f_8c0953da(c); return; }
}
void f_8c0953da(SH4Ctx *c) {
  c->t=(R(9)&R(9))==0;
  if(!c->t) { f_8c0953e4(c); return; }
  R(0)=R(12);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) { f_8c0953ee(c); return; }
  { f_8c0953e4(c); return; }
}
void f_8c0953e4(SH4Ctx *c) {
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2e269cu;
  R(2)+=R(3);
  R(1)=LD32(R(2)+16);
  ST32(R(1),R(13));
  { f_8c0953ee(c); return; }
}
void f_8c0953ee(SH4Ctx *c) {
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2e269cu;
  R(0)=0x84u;
  R(2)+=R(3);
  ST32(R(2)+R(0),R(13));
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
void f_8c095440(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(14)<<=2;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  R(14)<<=2;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)+=R(3);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(14)<<=2;
  R(11)=0x8c2e269cu;
  c->t=R(14)>>31;R(14)<<=1;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)+=R(11);
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)=R(4); if(k) goto L8c0954c8; }
  R(13)=0x0u;
  ST32(R(14),R(13));
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095484;
  R(4)=R(12);
  R(4)<<=2;
  R(4)<<=2;
  R(3)=R(12);
  R(4)+=R(3);
  R(2)=0x8c060912u;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(11);
  { c->pr=0x8c095484u; R(4)=LD32(R(4)+32); f_8c060912(c); }
L8c095484:;
  R(14)=R(12);
  R(14)<<=2;
  R(14)<<=2;
  R(3)=R(12);
  R(14)+=R(3);
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(0)=0x7cu;
  R(14)+=R(11);
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0954ac;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0954a4u; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(0)=0x7cu;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
L8c0954ac:;
  R(4)=R(12);
  R(4)<<=2;
  R(4)<<=2;
  R(3)=R(12);
  R(4)+=R(3);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(11);
  R(5)=0xffffffffu;
  ST32(R(4),R(13));
  R(2)=LD32(R(4)+16);
  ST32(R(2),R(13));
  ST32(R(4)+28,R(5));
  ST32(R(4)+32,R(5));
L8c0954c8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0954d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(14)<<=2;
  R(3)=R(4);
  R(14)<<=2;
  R(2)=0x8c2e269cu;
  R(14)+=R(3);
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(2);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095506;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c095506;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095506;
  R(3)=0x8c06093cu;
  { c->pr=0x8c095502u; R(4)=LD32(R(14)+32); f_8c06093c(c); }
  R(2)=0x1u;
  ST32(R(14)+8,R(2));
L8c095506:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09550c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(14)<<=2;
  R(3)=R(4);
  R(14)<<=2;
  R(2)=0x8c2e269cu;
  R(14)+=R(3);
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(2);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09553e;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09553e;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09553e;
  R(3)=0x8c060958u;
  { c->pr=0x8c09553au; R(4)=LD32(R(14)+32); f_8c060958(c); }
  R(2)=0x0u;
  ST32(R(14)+8,R(2));
L8c09553e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095544(SH4Ctx *c) {
  R(1)=R(4);
  R(1)<<=2;
  R(1)<<=2;
  R(3)=R(4);
  R(1)+=R(3);
  R(2)=0x8c2e269cu;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(2);
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095566;
  R(0)=0x7cu;
  R(4)=0x0u;
  ST32(R(1)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(1)+R(0),R(4));
L8c095566:;
  {  return; }
}
void f_8c09556a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(14)<<=2;
  R(3)=R(4);
  R(14)<<=2;
  R(2)=0x8c2e269cu;
  R(14)+=R(3);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(2);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09559e;
  R(13)=R(5);
  { c->pr=0x8c09558eu; R(4)=R(5); f_8c094f60(c); }
  R(2)=0x8c0685b4u;
  R(4)=R(14);
  R(6)=R(0);
  R(5)=R(13);
  { c->pr=0x8c09559au; R(4)+=0x30u; f_8c0685b4(c); }
  { R(0)=LD32(R(14)); goto L8c0955a0; }
L8c09559e:;
  R(0)=0x0u;
L8c0955a0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0955a8(SH4Ctx *c) {
  R(0)=R(4);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(4);
  R(0)+=R(3);
  R(1)=0x8c2e269cu;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0955e0(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c0955e4(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c0955e8(SH4Ctx *c) {
  R(0)=R(5);
  ST8(R(4)+12,R(0));
  { R(0)=0x1u; return; }
}
void f_8c095600(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  R(14)=0x8c0c91d0u;
  R(3)<<=2;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=R(3)>>31;R(3)<<=1;
  R(6)=0x8c0c91d4u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(14),R(4));
  R(4)=0x8c0c91d8u;
  ST32(R(6),R(3));
  R(3)=R(5);
  ST32(R(4),R(5));
  R(2)=LD32(R(14));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c095626;
  R(0)=0x7fffffffu;
  ST32(R(4),R(0));
L8c095626:;
  R(13)=LD32(R(6));
  R(12)=LD32(R(4));
  c->t=(int32_t)R(12)>=(int32_t)R(13);
  if(!c->t) goto L8c095636;
  R(3)=0x8c0c91dcu;
  R(2)=0x0u;
  { ST8(R(3),R(2)); goto L8c095650; }
L8c095636:;
  R(3)=LD32(R(14));
  R(5)=R(13);
  R(2)=0x8c06142au;
  R(4)=R(13);
  R(5)-=R(3);
  { c->pr=0x8c095644u; R(4)-=R(12); f_8c06142a(c); }
  R(3)=0x8c0612c0u;
  R(5)=R(0);
  { c->pr=0x8c09564cu; R(4)=0x7fu; f_8c0612c0(c); }
  R(2)=0x8c0c91dcu;
  ST8(R(2),R(0));
L8c095650:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09565a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  R(3)=LD32(R(14));
  R(5)=0x7ffffffeu;
  c->t=R(3)==R(5);
  { uint32_t k=c->t; R(4)=R(15); if(k) goto L8c095672; }
  R(1)=LD32(R(14));
  { ST32(R(4),R(1)); goto L8c095678; }
L8c095672:;
  R(3)=0x8c0c91d0u;
  R(2)=LD32(R(3));
  ST32(R(4),R(2));
L8c095678:;
  R(1)=LD32(R(14)+4);
  c->t=R(1)==R(5);
  if(c->t) goto L8c095684;
  R(2)=LD32(R(14)+4);
  { ST32(R(4)+4,R(2)); goto L8c09568a; }
L8c095684:;
  R(3)=0x8c0c91d8u;
  R(1)=LD32(R(3));
  ST32(R(4)+4,R(1));
L8c09568a:;
  R(5)=LD32(R(14)+4);
  { c->pr=0x8c095690u; R(4)=LD32(R(14)); f_8c095600(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095698(SH4Ctx *c) {
  R(2)=0x8c0c91d0u;
  R(0)=0x8c0c91d8u;
  R(3)=LD32(R(2));
  ST32(R(4),R(3));
  R(1)=LD32(R(0));
  { ST32(R(4)+4,R(1)); return; }
}
void f_8c0956a6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=0x8c0c91d0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=LD32(R(3));
  c->t=(int32_t)R(14)>=(int32_t)R(12);
  if(c->t) goto L8c0956bc;
  { R(0)=0x7fu; goto L8c095714; }
L8c0956bc:;
  R(2)=0x8c0c91d8u;
  R(3)=LD32(R(2));
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(!c->t) goto L8c0956ca;
  R(3)=0x8c0c91dcu;
  { R(0)=(int32_t)(int8_t)LD8(R(3)); goto L8c095714; }
L8c0956ca:;
  R(1)=0x8c0c91d4u;
  R(13)=LD32(R(1));
  c->t=(int32_t)R(14)>(int32_t)R(13);
  if(!c->t) goto L8c095700;
  { R(0)=0x0u; goto L8c095714; }
L8c095700:;
  R(3)=0x8c06142au;
  R(5)=R(13);
  R(4)=R(13);
  R(5)-=R(12);
  { c->pr=0x8c09570cu; R(4)-=R(14); f_8c06142a(c); }
  R(2)=0x8c0612c0u;
  R(5)=R(0);
  { c->pr=0x8c095714u; R(4)=0x7fu; f_8c0612c0(c); }
L8c095714:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09571e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(5);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0957ae; }
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(14));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c09573a;
  R(0)=0x7fffffffu;
  ST32(R(14)+4,R(0));
L8c09573a:;
  R(3)=LD32(R(14));
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(c->t) goto L8c095744;
  { R(0)=0x7fu; goto L8c0957ba; }
L8c095744:;
  R(3)=LD32(R(14)+4);
  c->t=(int32_t)R(13)>(int32_t)R(3);
  if(!c->t) goto L8c09577c;
  R(1)=LD32(R(14));
  R(3)=LD32(R(14)+4);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  c->t=(int32_t)R(3)>(int32_t)R(1);
  if(c->t) goto L8c095786;
  R(5)=LD32(R(14));
  R(2)=0x8c06142au;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(5)<<=2;
  R(4)=LD32(R(15));
  c->t=R(5)>>31;R(5)<<=1;
  R(5)-=R(3);
  R(3)=LD32(R(14)+4);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c095770u; R(4)-=R(3); f_8c06142a(c); }
  R(3)=0x8c0612c0u;
  R(5)=R(0);
  { c->pr=0x8c095778u; R(4)=0x7fu; f_8c0612c0(c); }
  {  goto L8c0957ba; }
L8c09577c:;
  R(3)=LD32(R(14));
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  c->t=(int32_t)R(13)>(int32_t)R(3);
  if(!c->t) goto L8c09578a;
L8c095786:;
  { R(0)=0x0u; goto L8c0957ba; }
L8c09578a:;
  R(5)=LD32(R(14));
  R(3)=R(5);
  ST32(R(15),R(5));
  R(5)<<=2;
  R(4)=LD32(R(15));
  c->t=R(5)>>31;R(5)<<=1;
  R(5)-=R(3);
  R(3)=0x8c06142au;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c0957a2u; R(4)-=R(13); f_8c06142a(c); }
  R(2)=0x8c0612c0u;
  R(5)=R(0);
  { c->pr=0x8c0957aau; R(4)=0x7fu; f_8c0612c0(c); }
  {  goto L8c0957ba; }
L8c0957ae:;
  R(4)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0956a6(c); return; } }
L8c0957ba:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095800(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(2)=0x8c0c91ccu;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(7));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09587e;
  R(1)=LD32(R(4));
  R(3)=LD32(R(6));
  R(1)-=R(3);
  R(3)=0xfffffff8u;
  R(1)=sh4_shad(R(1),R(3));
  ST32(R(15)+8,R(1));
  R(1)=LD32(R(4)+4);
  R(3)=LD32(R(6)+4);
  R(1)-=R(3);
  R(3)=0xfffffff8u;
  R(1)=sh4_shad(R(1),R(3));
  ST32(R(15)+12,R(1));
  R(1)=LD32(R(4)+8);
  R(4)=R(15);
  R(3)=LD32(R(6)+8);
  R(1)-=R(3);
  R(3)=0xfffffff8u;
  R(1)=sh4_shad(R(1),R(3));
  R(3)=0x8c0968dau;
  ST32(R(15)+16,R(1));
  { c->pr=0x8c09583eu; R(4)+=0x8u; f_8c0968da(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09587e;
  R(3)=0x400000u;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c09587e;
  R(3)=0x8c0c91ccu;
  R(5)=R(15);
  R(2)=0x8c09690eu;
  R(5)+=0x8u;
  R(14)=LD32(R(3));
  c->macl=R(14)*R(4);
  R(14)=c->macl;
  { c->pr=0x8c09585cu; R(4)=LD32(R(15)+4); f_8c09690e(c); }
  R(5)=R(14);
  R(5)-=R(0);
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09690eu;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c09586cu; R(4)=LD32(R(15)+4); f_8c09690e(c); }
  R(2)=0x8c06142au;
  R(4)=R(14);
  R(4)-=R(0);
  { c->pr=0x8c095876u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c06142a(c); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c09587e:;
  R(0)=0x10000u;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095888(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c0958b0; }
  R(3)=0x8c06142au;
  R(4)=0x12c0000u;
  { c->pr=0x8c09589cu; R(5)=LD32(R(15)); f_8c06142a(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0958a4;
  { R(0)>>=16; goto L8c0958aa; }
L8c0958a4:;
  R(0)=~R(0);
  R(0)>>=16;
  R(0)=~R(0);
L8c0958aa:;
  R(3)=0x8c0c91ccu;
  { ST32(R(3),R(0)); goto L8c0958b6; }
L8c0958b0:;
  R(2)=0x8c0c91ccu;
  R(1)=0x0u;
  ST32(R(2),R(1));
L8c0958b6:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c095900(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15),R(7));
  R(2)=LD32(R(4));
  R(3)=LD32(R(5));
  R(2)-=R(3);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(5)+4);
  R(1)=LD32(R(4)+4);
  R(1)-=R(3);
  ST32(R(15)+8,R(1));
  R(3)=LD32(R(5)+8);
  R(2)=LD32(R(4)+8);
  R(4)=R(15);
  R(2)-=R(3);
  R(3)=0x8c0968dau;
  ST32(R(15)+12,R(2));
  { c->pr=0x8c095928u; R(4)+=0x4u; f_8c0968da(c); }
  R(3)=0x8c096944u;
  R(14)=R(0);
  R(5)=LD32(R(15));
  R(4)=R(15);
  { c->pr=0x8c095934u; R(4)+=0x4u; f_8c096944(c); }
  R(1)=R(14);
  R(3)=0x8c067940u;
  R(6)=0x100u;
  R(4)=R(0);
  c->t=R(1)>>31;R(1)<<=1;
  { c->pr=0x8c095942u; R(0)=R(6); f_8c067940(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c095952;
  R(0)=0x40u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c095952:;
  R(3)=0u-R(14);
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c095962;
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c095962:;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c0959a0;
  R(0)=0x7fu;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0959a0:;
  R(2)=0x8c067940u;
  R(1)=R(4);
  { c->pr=0x8c0959a8u; R(0)=R(6); f_8c067940(c); }
  R(3)=R(0);
  R(0)<<=2;
  R(0)<<=2;
  R(2)=0x8c067940u;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)-=R(3);
  R(1)=R(0);
  { c->pr=0x8c0959bcu; R(0)=R(5); f_8c067940(c); }
  R(4)=R(0);
  R(4)+=0x40u;
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(5)=0x7fu; if(k) goto L8c0959c8; }
  R(4)=0x0u;
L8c0959c8:;
  c->t=(int32_t)R(4)>(int32_t)R(5);
  if(!c->t) goto L8c0959ce;
  R(4)=R(5);
L8c0959ce:;
  R(0)=R(4);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0959d8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15),R(6));
  R(2)=LD32(R(4));
  R(3)=LD32(R(5));
  R(2)-=R(3);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(5)+4);
  R(1)=LD32(R(4)+4);
  R(1)-=R(3);
  ST32(R(15)+8,R(1));
  R(3)=LD32(R(5)+8);
  R(2)=LD32(R(4)+8);
  R(4)=R(15);
  R(2)-=R(3);
  R(3)=0x8c0968dau;
  ST32(R(15)+12,R(2));
  { c->pr=0x8c095a00u; R(4)+=0x4u; f_8c0968da(c); }
  R(3)=0x8c096944u;
  R(14)=R(0);
  R(5)=LD32(R(15));
  R(4)=R(15);
  { c->pr=0x8c095a0cu; R(4)+=0x4u; f_8c096944(c); }
  R(1)=R(14);
  R(3)=0x8c067940u;
  R(6)=0x100u;
  R(4)=R(0);
  c->t=R(1)>>31;R(1)<<=1;
  { c->pr=0x8c095a1au; R(0)=R(6); f_8c067940(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c095a2a;
  R(0)=0x3fu;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c095a2a:;
  R(3)=0u-R(14);
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c095a60;
  R(0)=0x7fu;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c095a60:;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c095a6e;
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c095a6e:;
  R(2)=0x8c067940u;
  R(1)=R(4);
  { c->pr=0x8c095a76u; R(0)=R(6); f_8c067940(c); }
  R(3)=R(0);
  R(0)<<=2;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)-=R(3);
  R(3)=0x8c067940u;
  R(1)=0u-R(0);
  { c->pr=0x8c095a8au; R(0)=R(5); f_8c067940(c); }
  R(4)=R(0);
  R(4)+=0x3fu;
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(5)=0x7fu; if(k) goto L8c095a96; }
  R(4)=0x0u;
L8c095a96:;
  c->t=(int32_t)R(4)>(int32_t)R(5);
  if(!c->t) goto L8c095a9c;
  R(4)=R(5);
L8c095a9c:;
  R(0)=R(4);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095ae0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(15);
  R(13)=0x0u;
  R(12)=0x1u;
  ST32(R(15)+4,R(5));
  R(14)+=0x8u;
  R(10)=R(4);
  ST32(R(15),R(13));
  R(8)=R(12);
  R(3)=LD32(R(15)+48);
  R(2)=R(3);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(14),R(3)); if(k) goto L8c095bc6; }
  R(2)=LD32(R(14));
  { c->pr=0x8c095b12u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c095fe2(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c095bc6; }
L8c095b18:;
  R(3)=LD32(R(14));
  R(0)=(int32_t)(int8_t)LD8(R(3)+12);
  R(3)=LD32(R(15));
  R(0)=R(0)&0xFF;
  c->macl=R(8)*R(0);
  R(3)+=0x1u;
  ST32(R(15),R(3));
  R(0)=LD32(R(10)+32);
  c->t=(R(0)&0x20)==0;
  { uint32_t k=c->t; R(8)=c->macl; if(k) goto L8c095b4c; }
  R(9)=LD32(R(10)+36);
  R(3)=LD32(R(14));
  R(9)+=0xfffffffeu;
  R(2)=0x8c019260u;
  R(9)<<=2;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  c->t=R(9)>>31;R(9)<<=1;
  R(9)+=R(10);
  R(9)+=0x40u;
  R(5)=LD32(R(9)+4);
  { c->pr=0x8c095b46u; R(4)=LD32(R(9)); f_8c019260(c); }
  R(15)+=0x4u;
  { R(11)=R(0); goto L8c095b50; }
L8c095b4c:;
  R(11)=LD32(R(14));
  R(11)=LD32(R(11)+36);
L8c095b50:;
  R(4)=LD32(R(14));
  R(7)=R(13);
  R(4)+=0x14u;
  R(3)=LD32(R(4)+4);
  R(5)=LD32(R(4));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=R(13); if(k) goto L8c095b78; }
L8c095b60:;
  R(1)=LD32(R(5)+4);
  c->t=R(1)==R(11);
  if(!c->t) goto L8c095b6e;
  R(2)=LD32(R(5));
  ST32(R(14),R(2));
  { R(7)=R(12); goto L8c095b78; }
L8c095b6e:;
  R(2)=LD32(R(4)+4);
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(5)+=0x8u; if(k) goto L8c095b60; }
L8c095b78:;
  c->t=(R(7)&R(7))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(14)); if(k) goto L8c095bb4; }
  R(0)=LD32(R(11)+36);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c095bb2;
  R(2)=LD32(R(4)+4);
  R(7)=R(13);
  R(5)=LD32(R(4));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(6)=R(13); if(k) goto L8c095baa; }
L8c095b90:;
  R(3)=LD32(R(5)+4);
  R(1)=LD32(R(11)+36);
  c->t=R(3)==R(1);
  if(!c->t) goto L8c095ba0;
  R(0)=LD32(R(5));
  ST32(R(14),R(0));
  { R(7)=R(12); goto L8c095baa; }
L8c095ba0:;
  R(2)=LD32(R(4)+4);
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(5)+=0x8u; if(k) goto L8c095b90; }
L8c095baa:;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c095bb4;
  { ST32(R(14),R(13)); goto L8c095bb4; }
L8c095bb2:;
  ST32(R(14),R(13));
L8c095bb4:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c095bc6;
  R(3)=LD32(R(14));
  { c->pr=0x8c095bc0u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c095fe2(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c095b18; }
L8c095bc6:;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(2)>(int32_t)R(12);
  if(!c->t) goto L8c095bda;
  R(3)=0x8c0679f4u;
  R(1)=R(8);
  R(2)=LD32(R(15)+4);
  { c->pr=0x8c095bd6u; R(0)=LD32(R(15)); f_8c0679f4(c); }
  { ST8(R(2),R(0)); goto L8c095bde; }
L8c095bda:;
  R(2)=LD32(R(15)+4);
  ST8(R(2),R(8));
L8c095bde:;
  R(3)=LD32(R(14));
  R(1)=LD32(R(15)+44);
  ST32(R(1),R(3));
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
void f_8c095c20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffa0u;
  R(3)=0x8c063d46u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  R(5)=0x20u;
  ST32(R(15)+12,R(6));
  ST32(R(15)+16,R(7));
  { c->pr=0x8c095c3au; R(4)=0x5u; f_8c063d46(c); }
  R(14)=R(0);
  R(0)=0x70u;
  R(12)=R(15);
  R(2)=0x1u;
  R(12)+=0x5cu;
  ST32(R(14)+24,R(2));
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(4)=LD32(R(15)+12);
  R(5)+=0x4u;
  { c->pr=0x8c095c54u; {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);} f_8c095ae0(c); }
  R(15)+=0x8u;
  R(0)=0x70u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x1cu;
  ST32(R(14)+8,R(3));
  R(2)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(14)+R(0),R(2));
  R(3)=LD32(R(12));
  ST32(R(14)+4,R(3));
  R(2)=LD32(R(15)+4);
  ST32(R(14)+12,R(2));
  R(3)=LD32(R(15)+12);
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(15)+16);
  ST32(R(14)+20,R(2));
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095cc0;
  R(5)=LD32(R(15)+8);
  R(13)=R(15);
  R(3)=0x8c0685b4u;
  R(13)+=0x14u;
  R(6)=0x48u;
  { c->pr=0x8c095c86u; R(4)=R(13); f_8c0685b4(c); }
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(2)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(2)+=0x18u;
  R(3)=R(3)&0xFF;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(3)=0xfffffff9u;
  R(7)=0x0u;
  R(6)=R(7);
  R(0)=c->macl;
  R(0)=sh4_shad(R(0),R(3));
  ST8(R(13)+4,R(0));
  R(0)=LD32(R(13)+32);
  R(0)|=0x4u;
  ST32(R(13)+32,R(0));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+12);
  R(3)=0x8c060704u;
  { c->pr=0x8c095cb4u; R(4)=R(13); f_8c060704(c); }
  R(15)+=0x8u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(14),R(0)); if(k) goto L8c095cc0; }
  { R(0)=R(14); goto L8c095cca; }
L8c095cc0:;
  R(3)=0x8c064160u;
  R(5)=R(14);
  { c->pr=0x8c095cc8u; R(4)=0x5u; f_8c064160(c); }
  R(0)=0xffffffffu;
L8c095cca:;
  R(15)+=0x60u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095cd6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffacu;
  R(3)=0x7fu;
  R(14)=R(4);
  ST32(R(15)+4,R(5));
  R(11)=0x0u;
  ST8(R(15),R(3));
  R(12)=R(15);
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3)+40);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)+=0x50u; if(k) goto L8c095d0a; }
  R(2)=LD32(R(14)+8);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c095d06u; {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);} f_8c095ae0(c); }
  { R(15)+=0x8u; goto L8c095d0e; }
L8c095d0a:;
  R(2)=LD32(R(14)+4);
  ST32(R(12),R(2));
L8c095d0e:;
  R(5)=LD32(R(15)+4);
  R(13)=R(15);
  R(3)=0x8c0685b4u;
  R(13)+=0x8u;
  R(6)=0x48u;
  { c->pr=0x8c095d1cu; R(4)=R(13); f_8c0685b4(c); }
  R(3)=LD32(R(12));
  R(2)=LD32(R(14)+4);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c095d56;
  R(3)=0x1cu;
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(3)+=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(0)&0xFF;
  R(3)=R(3)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(3)=0xfffffff9u;
  R(0)=c->macl;
  R(0)=sh4_shad(R(0),R(3));
  ST8(R(13)+4,R(0));
  R(0)=LD32(R(13)+32);
  R(0)|=0x4u;
  ST32(R(13)+32,R(0));
  R(2)=LD32(R(14)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c095da0;
  R(3)=0x8c060860u;
  R(5)=R(13);
  { c->pr=0x8c095d4eu; R(4)=LD32(R(14)); f_8c060860(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c095da0;
  { R(11)=0x1u; goto L8c095da0; }
L8c095d56:;
  R(2)=0x8c060912u;
  { c->pr=0x8c095d5cu; R(4)=LD32(R(14)); f_8c060912(c); }
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(2)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(2)+=0x18u;
  R(3)=R(3)&0xFF;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(3)=0xfffffff9u;
  R(7)=0x0u;
  R(6)=R(7);
  R(0)=c->macl;
  R(0)=sh4_shad(R(0),R(3));
  ST8(R(13)+4,R(0));
  R(0)=LD32(R(13)+32);
  R(0)|=0x4u;
  ST32(R(13)+32,R(0));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12));
  R(2)=0x8c060704u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14)+12);
  { c->pr=0x8c095d8au; R(4)=R(13); f_8c060704(c); }
  R(15)+=0x8u;
  ST32(R(14),R(0));
  R(0)=0x1cu;
  R(3)=LD32(R(12));
  ST32(R(14)+4,R(3));
  R(2)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(14)+R(0),R(2));
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c095da0;
  R(11)=0x1u;
L8c095da0:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c095da8;
  { R(0)=0x1u; goto L8c095dbe; }
L8c095da8:;
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095db4;
  R(3)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c095db4u; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
L8c095db4:;
  R(2)=0x8c064160u;
  R(5)=R(14);
  { c->pr=0x8c095dbcu; R(4)=0x5u; f_8c064160(c); }
  R(0)=0x0u;
L8c095dbe:;
  R(15)+=0x54u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095e00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095e1e;
  R(3)=0x8c0608e0u;
  { c->pr=0x8c095e12u; R(4)=LD32(R(14)); f_8c0608e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c095e1e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c095e1e:;
  R(2)=LD32(R(14)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c095e2a;
  R(3)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c095e2au; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
L8c095e2a:;
  R(2)=0x8c064160u;
  R(5)=R(14);
  { c->pr=0x8c095e32u; R(4)=0x5u; f_8c064160(c); }
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095e1e(SH4Ctx *c) {
  R(2)=LD32(R(14)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c095e2a;
  R(3)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c095e2au; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
L8c095e2a:;
  R(2)=0x8c064160u;
  R(5)=R(14);
  { c->pr=0x8c095e32u; R(4)=0x5u; f_8c064160(c); }
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095e3a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095e4c;
  R(3)=0x8c060912u;
  { c->pr=0x8c095e4cu; R(4)=LD32(R(14)); f_8c060912(c); }
L8c095e4c:;
  R(2)=LD32(R(14)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c095e58;
  R(3)=LD32(R(14)+16);
  { uint32_t tg=R(3); c->pr=0x8c095e58u; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
L8c095e58:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c064160u;
  R(5)=R(14);
  R(4)=0x5u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064160(c); return; } }
}
void f_8c095e64(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095e76;
  R(3)=0x8c06093cu;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c06093c(c); return; } }
L8c095e76:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095e7a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095e8c;
  R(3)=0x8c060958u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c060958(c); return; } }
L8c095e8c:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095e90(SH4Ctx *c) {
  R(3)=0x0u;
  { ST32(R(4)+16,R(3)); return; }
}
void f_8c095e96(SH4Ctx *c) {
  {  return; }
}
void f_8c095e9a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095eac;
  R(3)=0x8c060f98u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c060f98(c); return; } }
L8c095eac:;
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095ee0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c095ef2;
  R(3)=0x8c061000u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c061000(c); return; } }
L8c095ef2:;
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095ef8(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(0)=0x14u;
  ST32(R(5),R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+4,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(5)+8,R(3));
  R(3)=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(5)+12,R(0));
  ST32(R(5)+16,R(3));
  R(2)=LD32(R(4)+32);
  ST32(R(5)+28,R(2));
  R(3)=LD32(R(4)+36);
  ST32(R(5)+32,R(3));
  R(2)=LD32(R(4)+40);
  ST32(R(5)+36,R(2));
  R(3)=LD32(R(4)+44);
  { ST32(R(5)+40,R(3)); return; }
}
void f_8c095f20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(11)+16);
  R(10)=0x8c061bb8u;
  R(4)+=R(6);
  ST32(R(13)+20,R(4));
  R(3)=LD32(R(11)+32);
  R(2)=R(3);
  c->t=(int32_t)R(2)>0;
  ST32(R(13)+24,R(3));
  R(14)=LD32(R(13)+20);
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c095f56; }
L8c095f46:;
  { uint32_t tg=R(10); c->pr=0x8c095f4au; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(12)+=0x1u;
  ST32(R(14),R(0));
  R(2)=LD32(R(13)+24);
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(14)+=0x8u; if(k) goto L8c095f46; }
L8c095f56:;
  R(5)=R(13);
  R(6)=0x0u;
  { c->pr=0x8c095f5eu; R(4)=R(11); f_8c095ef8(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095f6e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff94u;
  R(3)=0x8c0685b4u;
  R(14)=R(4);
  ST32(R(15),R(5));
  R(4)=R(15);
  ST32(R(15)+4,R(6));
  R(6)=0x64u;
  R(5)=R(14);
  { c->pr=0x8c095f86u; R(4)+=0x8u; f_8c0685b4(c); }
  R(2)=0x8u;
  R(4)=R(15);
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(14)+32);
  ST32(R(15)+40,R(3));
  R(2)=LD32(R(14)+36);
  ST32(R(15)+44,R(2));
  R(3)=LD32(R(14)+40);
  ST32(R(15)+48,R(3));
  R(3)=0x0u;
  R(2)=LD32(R(14)+44);
  ST32(R(15)+52,R(2));
  ST32(R(15)+56,R(3));
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c095fa8u; R(4)+=0x8u; f_8c095f20(c); }
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c095fb0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(15)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x4u;
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(3)+=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c095fccu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c095ae0(c); }
  R(15)+=0x8u;
  R(3)=LD32(R(15)+20);
  R(2)=0x8c061122u;
  R(5)=LD32(R(15)+12);
  R(4)=LD32(R(15)+4);
  { c->pr=0x8c095fdau; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c061122(c); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c095fe2(SH4Ctx *c) {
  R(4)=LD32(R(15));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c095ff2;
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c095ff2;
  { R(0)=0x1u; return; }
L8c095ff2:;
  R(0)=0x0u;
  {  return; }
}
void f_8c095ff8(SH4Ctx *c) {
  R(0)=R(5);
  ST8(R(4)+12,R(0));
  { R(0)=0x1u; return; }
}
void f_8c096020(SH4Ctx *c) {
  R(5)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+12);
  R(14)=R(5);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=0x1u; if(k) goto L8c096054; }
  R(0)=0x44u;
  ST32(R(4)+12,R(5));
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0960d6;
  R(3)=LD32(R(4)+R(0));
  ST32(R(4)+20,R(3));
  R(2)=LD32(R(4)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c096054;
  ST32(R(4)+16,R(5));
  ST32(R(4)+56,R(5));
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(3)+44);
  ST32(R(4)+52,R(2));
  R(3)=R(2);
  R(2)=LD32(R(3));
  { ST32(R(4)+60,R(2)); goto L8c096182; }
L8c096054:;
  R(3)=LD32(R(4)+40);
  R(6)=LD32(R(4)+20);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(6)+=0x14u; if(k) goto L8c09608a; }
  R(2)=LD32(R(4)+32);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09608a;
  R(2)=LD32(R(4)+32);
  R(2)+=0xffffffffu;
  ST32(R(4)+32,R(2));
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09607c;
  R(3)=LD32(R(4)+24);
  ST32(R(4)+52,R(3));
  R(2)=LD32(R(4)+28);
  { ST32(R(4)+56,R(2)); goto L8c096082; }
L8c09607c:;
  R(0)=LD32(R(6)+24);
  ST32(R(4)+52,R(0));
  ST32(R(4)+56,R(5));
L8c096082:;
  R(3)=LD32(R(4)+52);
  R(2)=LD32(R(3));
  { ST32(R(4)+60,R(2)); goto L8c096166; }
L8c09608a:;
  R(0)=LD32(R(4)+32);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c096092;
  ST32(R(4)+24,R(5));
L8c096092:;
  R(3)=LD32(R(4)+56);
  R(3)+=0x1u;
  ST32(R(4)+56,R(3));
  R(2)=LD32(R(4)+20);
  R(1)=LD32(R(4)+56);
  R(3)=LD32(R(2)+28);
  c->t=R(1)>=R(3);
  if(!c->t) goto L8c09615a;
  R(0)=LD32(R(4)+20);
  R(3)=LD32(R(0)+40);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0960bc;
  R(3)=LD32(R(4)+36);
  R(3)+=0x1u;
  ST32(R(4)+36,R(3));
  R(2)=LD32(R(4)+20);
  R(1)=LD32(R(4)+36);
  R(3)=LD32(R(2)+40);
  c->t=R(1)>=R(3);
  if(!c->t) goto L8c0960bc;
  R(14)=R(7);
L8c0960bc:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0960e8;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(2)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0960d6;
  ST32(R(4)+16,R(7));
  ST32(R(4)+12,R(7));
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(3)+32);
  R(1)=LD32(R(2));
  { ST32(R(4)+60,R(1)); goto L8c0960de; }
L8c0960d6:;
  R(0)=0x0u;
  ST32(R(4)+4,R(7));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0960de:;
  R(3)=0x8c0c6ee0u;
  R(0)=0x44u;
  R(2)=LD32(R(3));
  { ST32(R(4)+R(0),R(2)); goto L8c096166; }
L8c0960e8:;
  R(3)=LD32(R(6));
  R(2)=R(3);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  ST32(R(4)+56,R(3));
  R(1)=LD32(R(6)+24);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(3)=R(2);
  ST32(R(4)+52,R(2));
  R(2)=LD32(R(3));
  ST32(R(4)+60,R(2));
  R(5)=LD32(R(4)+52);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(7)=LD32(R(6)); if(k) goto L8c096166; }
L8c09610a:;
  R(2)=LD32(R(5)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c096140;
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(7));
  R(3)=LD32(R(4)+24);
  R(2)=LD32(R(3)+12);
  { ST32(R(4)+32,R(2)); goto L8c096166; }
L8c096140:;
  R(7)+=0xffffffffu;
  c->t=(int32_t)R(7)>=0;
  { uint32_t k=!c->t; R(5)+=0xffffffe8u; if(k) goto L8c096166; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c096152;
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c096166;
L8c096152:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c09610a;
  {  goto L8c096166; }
L8c09615a:;
  R(2)=LD32(R(4)+52);
  R(2)+=0x18u;
  R(3)=R(2);
  ST32(R(4)+52,R(2));
  R(2)=LD32(R(3));
  ST32(R(4)+60,R(2));
L8c096166:;
  R(1)=LD32(R(4)+52);
  R(3)=LD32(R(1)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096182;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c096182;
  R(3)=LD32(R(4)+52);
  ST32(R(4)+24,R(3));
  R(2)=LD32(R(4)+56);
  ST32(R(4)+28,R(2));
  R(3)=LD32(R(4)+24);
  R(2)=LD32(R(3)+12);
  ST32(R(4)+32,R(2));
L8c096182:;
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096188(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=0x1u; if(k) goto L8c096194; }
  { R(6)=R(7); goto L8c096198; }
L8c096194:;
  R(6)=LD32(R(4)+40);
  R(6)=LD32(R(6)+16);
L8c096198:;
  R(1)=R(15);
  R(0)=0x44u;
  R(5)=0x0u;
  ST32(R(4)+16,R(5));
  ST32(R(4)+12,R(7));
  ST32(R(4)+4,R(5));
  R(3)=LD32(R(1));
  ST32(R(4)+R(0),R(3));
  R(3)=LD32(R(1));
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(0)=0xffffffffu; if(k) goto L8c0961c0; }
  R(2)=0x8c0c6ee0u;
  ST32(R(4)+52,R(5));
  ST32(R(4)+56,R(0));
  R(3)=LD32(R(2));
  ST32(R(4)+60,R(3));
  { R(0)=R(5); return; }
L8c0961c0:;
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(0));
  ST32(R(4)+32,R(0));
  R(0)=R(6);
  c->t=(int32_t)R(0)==2;
  ST32(R(4)+36,R(5));
  ST32(R(4)+56,R(5));
  R(3)=LD32(R(1));
  R(2)=LD32(R(3)+44);
  { uint32_t k=!c->t; ST32(R(4)+52,R(2)); if(k) goto L8c0961de; }
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(2)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0961e6;
L8c0961de:;
  R(3)=LD32(R(4)+52);
  R(2)=LD32(R(3));
  { ST32(R(4)+60,R(2)); goto L8c0961f0; }
L8c0961e6:;
  ST32(R(4)+16,R(7));
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(3)+32);
  R(1)=LD32(R(2));
  ST32(R(4)+60,R(1));
L8c0961f0:;
  R(3)=LD32(R(4)+52);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(0)=R(6); if(k) goto L8c096208; }
  R(2)=LD32(R(4)+52);
  ST32(R(4)+24,R(2));
  R(3)=LD32(R(4)+56);
  ST32(R(4)+28,R(3));
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(2)+12);
  ST32(R(4)+32,R(3));
L8c096208:;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c096218;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09621c;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09621c;
  {  goto L8c09621c; }
L8c096218:;
  { R(0)=0x1u; return; }
L8c09621c:;
  R(0)=0x0u;
  {  return; }
}
void f_8c096260(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=0x0u;
  R(6)=R(15);
  R(6)+=0x4u;
  R(2)=LD32(R(6));
  ST32(R(4)+20,R(2));
  ST32(R(4)+12,R(5));
  ST32(R(4)+8,R(5));
  ST32(R(4)+16,R(5));
  ST32(R(4)+4,R(5));
  R(3)=LD32(R(6));
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c096286;
  R(3)=0x8c0c9260u;
  ST32(R(4)+40,R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { ST32(R(3),R(5)); return; }
L8c096286:;
  R(7)=0xffffffffu;
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(7));
  ST32(R(4)+32,R(7));
  ST32(R(4)+36,R(5));
  ST32(R(4)+44,R(5));
  R(2)=LD32(R(6));
  R(3)=LD32(R(2)+44);
  ST32(R(4)+40,R(3));
  ST32(R(4)+56,R(5));
  R(2)=LD32(R(4)+40);
  R(3)=R(2);
  ST32(R(4)+52,R(2));
  R(2)=LD32(R(3));
  ST32(R(4)+60,R(2));
  R(1)=LD32(R(4)+40);
  R(3)=LD32(R(1)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0962ba;
  R(3)=LD32(R(4)+40);
  ST32(R(4)+24,R(3));
  R(2)=LD32(R(4)+44);
  ST32(R(4)+28,R(2));
  R(3)=LD32(R(4)+24);
  R(2)=LD32(R(3)+12);
  ST32(R(4)+32,R(2));
L8c0962ba:;
  { c->pr=0x8c0962beu;  f_8c096020(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0962c4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c9260u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(14)=R(4); if(k) goto L8c096330; }
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096330;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c096330;
  R(3)=LD32(R(14)+56);
  ST32(R(14)+44,R(3));
  R(2)=LD32(R(14)+52);
  ST32(R(14)+40,R(2));
  { c->pr=0x8c0962ecu; R(4)=R(14); f_8c096020(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c096310;
  R(0)=0x54u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0962fc;
  R(3)=0x0u;
  ST32(R(14)+R(0),R(3));
L8c0962fc:;
  R(0)=0x4cu;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c096330;
  R(2)=LD32(R(14)+R(0));
  R(0)=0x50u;
  { uint32_t tg=R(2); c->pr=0x8c09630cu; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  {  goto L8c096330; }
L8c096310:;
  R(2)=LD32(R(14)+60);
  R(0)=0x58u;
  R(5)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(2)=0x8c061122u;
  R(4)=LD32(R(14)+R(0));
  R(3)+=0x4u;
  { c->pr=0x8c096324u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c061122(c); }
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c060e1cu;
  { c->pr=0x8c09632eu; R(4)=LD32(R(14)+48); f_8c060e1c(c); }
  R(15)+=0xcu;
L8c096330:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096338(SH4Ctx *c) {
  R(7)=0x8c2e2c10u;
  R(3)=LD32(R(7));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c096344;
  { R(0)=0x0u; return; }
L8c096344:;
  R(3)=LD32(R(7)+20);
  R(0)=0x1u;
  ST32(R(4),R(3));
  R(2)=LD32(R(7)+44);
  ST32(R(5),R(2));
  R(3)=LD32(R(7)+32);
  ST32(R(6),R(3));
  {  return; }
}
void f_8c096344(SH4Ctx *c) {
  R(3)=LD32(R(7)+20);
  R(0)=0x1u;
  ST32(R(4),R(3));
  R(2)=LD32(R(7)+44);
  ST32(R(5),R(2));
  R(3)=LD32(R(7)+32);
  ST32(R(6),R(3));
  {  return; }
}
void f_8c096368(SH4Ctx *c) {
  R(0)=0x40u;
  R(3)=LD32(R(6)+R(0));
  R(0)=0x1u;
  ST32(R(4),R(3));
  R(2)=LD32(R(6)+12);
  ST32(R(5),R(2));
  {  return; }
}
void f_8c0963a0(SH4Ctx *c) {
  R(4)=0x8c2e2c10u;
  R(0)=0x58u;
  R(5)=0x0u;
  ST32(R(4)+R(0),R(5));
  R(0)=0x5cu;
  ST32(R(4)+R(0),R(5));
  { ST32(R(4),R(5)); return; }
}
void f_8c0963b0(SH4Ctx *c) {
  {  return; }
}
void f_8c0963b4(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(0)=0x14u;
  ST32(R(5),R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+4,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(5)+8,R(3));
  R(3)=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(5)+12,R(0));
  ST32(R(5)+16,R(3));
  R(2)=LD32(R(4)+24);
  ST32(R(5)+20,R(2));
  R(3)=LD32(R(4)+36);
  ST32(R(5)+28,R(3));
  R(2)=LD32(R(4)+32);
  ST32(R(5)+40,R(2));
  R(3)=LD32(R(4)+44);
  { ST32(R(5)+36,R(3)); return; }
}
void f_8c0963dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=R(4);
  R(9)=LD32(R(12)+16);
  R(14)=R(5);
  R(10)=0x8c061bb8u;
  R(9)+=R(6);
  ST32(R(14)+44,R(9));
  R(3)=LD32(R(12)+36);
  R(2)=R(3);
  c->t=(int32_t)R(2)>0;
  ST32(R(14)+48,R(3));
  R(13)=LD32(R(14)+44);
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c096418; }
L8c096408:;
  { uint32_t tg=R(10); c->pr=0x8c09640cu; R(4)=LD32(R(13)); sh4_call(c,tg); }
  R(11)+=0x1u;
  ST32(R(13),R(0));
  R(2)=LD32(R(14)+48);
  c->t=(int32_t)R(11)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(13)+=0x18u; if(k) goto L8c096408; }
L8c096418:;
  R(0)=LD32(R(12)+40);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c096434;
  R(3)=LD32(R(12)+40);
  R(9)+=R(3);
  R(2)=R(9);
  R(8)=R(2);
  R(4)=R(2);
  ST32(R(14)+32,R(9));
  ST32(R(15),R(2));
  { uint32_t tg=R(10); c->pr=0x8c096430u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { ST32(R(8),R(0)); goto L8c096438; }
L8c096434:;
  R(2)=0x0u;
  ST32(R(14)+32,R(2));
L8c096438:;
  R(5)=R(14);
  R(6)=0x0u;
  { c->pr=0x8c096440u; R(4)=R(12); f_8c0963b4(c); }
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
void f_8c096456(SH4Ctx *c) {
  R(3)=LD32(R(4)+48);
  R(5)=LD32(R(4)+44);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c096476; }
L8c096460:;
  R(1)=LD32(R(5));
  R(3)=LD32(R(1)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09646c;
  { R(0)=0x0u; return; }
L8c09646c:;
  R(3)=LD32(R(4)+48);
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(5)+=0x18u; if(k) goto L8c096460; }
L8c096476:;
  R(0)=0x1u;
  {  return; }
}
void f_8c09647c(SH4Ctx *c) {
  {  return; }
}
void f_8c0964a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(15)+4);
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+28);
  c->t=R(2)>=R(3);
  if(c->t) goto L8c0964ea;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(14)+48);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0964ea;
  R(3)=LD32(R(14)+48);
  R(7)=0x0u;
  R(5)=LD32(R(14)+44);
  R(4)=R(7);
  c->t=(int32_t)R(3)>0;
  R(6)=R(7);
  { uint32_t k=!c->t; R(7)=0x1u; if(k) goto L8c0964e6; }
L8c0964c4:;
  R(1)=LD32(R(5)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0964cc;
  R(4)+=0x1u;
L8c0964cc:;
  c->t=(int32_t)R(4)>(int32_t)R(7);
  if(c->t) goto L8c0964ea;
  R(2)=LD32(R(5)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0964d8;
  R(4)+=0xffffffffu;
L8c0964d8:;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0964ea;
  R(2)=LD32(R(14)+48);
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(5)+=0x18u; if(k) goto L8c0964c4; }
L8c0964e6:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0964f0;
L8c0964ea:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0964f0:;
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0964f0(SH4Ctx *c) {
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0964f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(5);
  c->t=(R(3)&R(3))==0;
  R(14)=R(4);
  { uint32_t k=!c->t; ST32(R(15),R(5)); if(k) goto L8c096528; }
  R(0)=0x58u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09655a;
  R(3)=0x8c064160u;
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c096516u; R(4)=0x0u; f_8c064160(c); }
  R(0)=0x58u;
  R(4)=0x0u;
  ST32(R(14)+R(0),R(4));
  R(0)=0x5cu;
  ST32(R(14)+R(0),R(4));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c096528:;
  R(0)=0x58u;
  R(3)=0x48u;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c096548;
  R(3)=0x8c063d46u;
  R(5)=0x48u;
  { c->pr=0x8c09653cu; R(4)=0x0u; f_8c063d46(c); }
  R(1)=0x58u;
  R(1)+=R(14);
  ST32(R(1),R(0));
  R(0)=0x5cu;
  R(3)=LD32(R(15)+4);
  ST32(R(14)+R(0),R(3));
L8c096548:;
  R(0)=0x58u;
  R(5)=LD32(R(15));
  R(4)=LD32(R(14)+R(0));
  R(6)=0x48u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0685b4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
L8c09655a:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0965a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffa8u;
  R(0)=0x80u;
  ST32(R(15),R(5));
  R(14)=0x8c2e2c10u;
  ST32(R(15)+4,R(7));
  R(5)=LD32(R(15));
  R(9)=LD32(R(15)+R(0));
  { c->pr=0x8c0965c2u; R(4)=R(14); f_8c0964f6(c); }
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0965dc;
  R(0)=0x78u;
  R(3)=LD32(R(14)+20);
  R(2)=LD32(R(15)+R(0));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0965dc;
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0965dc;
  {  goto L8c096708; }
L8c0965dc:;
  R(1)=LD32(R(14)+12);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0965ee;
  R(0)=0x44u;
  R(1)=LD32(R(14)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0965ee;
  {  goto L8c096708; }
L8c0965ee:;
  R(3)=0x8c0c9260u;
  R(13)=R(15);
  R(2)=0x8c0685b4u;
  R(11)=0x1u;
  ST32(R(3),R(11));
  R(13)+=0x8u;
  R(5)=LD32(R(15));
  R(6)=0x48u;
  { c->pr=0x8c096602u; R(4)=R(13); f_8c0685b4(c); }
  R(8)=R(15);
  R(2)=LD32(R(14));
  R(8)+=0x78u;
  R(10)=0x8c061122u;
  R(3)=LD32(R(8));
  c->t=(R(2)&R(2))==0;
  R(12)=R(15);
  { uint32_t k=c->t; R(12)+=0x50u; if(k) goto L8c096680; }
  R(3)=LD32(R(8));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c09661cu; R(4)=R(14); f_8c096188(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c09663e; }
  R(0)=0x58u;
  R(2)=LD32(R(14)+60);
  R(5)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c096630u; {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(2)=LD32(R(12));
  R(3)=0x8c060e50u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c09663au; R(4)=LD32(R(14)+48); f_8c060e50(c); }
  {  goto L8c096656; }
L8c09663e:;
  R(0)=0x58u;
  R(3)=LD32(R(14)+60);
  R(5)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c09664cu; {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(2)=LD32(R(12));
  R(3)=0x8c060e1cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c096656u; R(4)=LD32(R(14)+48); f_8c060e1c(c); }
L8c096656:;
  { R(15)+=0xcu; goto L8c0966e8; }
L8c096680:;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c096686u; R(4)=R(14); f_8c096260(c); }
  R(0)=0x54u;
  R(4)=R(13);
  ST32(R(14)+R(0),R(9));
  R(0)=0x4cu;
  R(3)=LD32(R(15)+8);
  R(5)=0x1u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x80u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x50u;
  ST32(R(14)+R(0),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(3)=LD32(R(8));
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(3)+12);
  R(3)=0xfffffff9u;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(0);
  R(0)=c->macl;
  R(0)=sh4_shad(R(0),R(3));
  ST8(R(13)+4,R(0));
  R(0)=LD32(R(13)+32);
  R(0)|=0x4u;
  ST32(R(13)+32,R(0));
  R(2)=LD32(R(14)+40);
  R(3)=LD32(R(2));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x5cu;
  { uint32_t tg=R(10); c->pr=0x8c0966c4u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(3)=LD32(R(14)+60);
  R(4)=R(13);
  R(5)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(10); c->pr=0x8c0966d0u; {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(3)=LD32(R(12));
  R(0)=0x6cu;
  R(4)=0x8c0962c4u;
  R(6)=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+R(0));
  R(3)=0x8c060d44u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0966e4u; R(5)=R(14); f_8c060d44(c); }
  R(15)+=0x1cu;
  ST32(R(14)+48,R(0));
L8c0966e8:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c0966fe; }
  R(0)=LD32(R(14)+48);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0966fc;
  ST32(R(14),R(11));
  { ST32(R(9),R(11)); goto L8c0966fe; }
L8c0966fc:;
  ST32(R(9),R(4));
L8c0966fe:;
  R(3)=0x8c0c9260u;
  ST32(R(3),R(4));
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09670c;
L8c096708:;
  { R(0)=R(14); goto L8c09670e; }
L8c09670c:;
  R(0)=0xffffffffu;
L8c09670e:;
  R(15)+=0x58u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096760(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  ST32(R(15),R(5));
  { c->pr=0x8c09676eu; R(14)=R(4); f_8c0964f6(c); }
  R(5)=LD32(R(15));
  R(13)=R(15);
  R(3)=0x8c0685b4u;
  R(13)+=0x4u;
  R(6)=0x48u;
  { c->pr=0x8c09677cu; R(4)=R(13); f_8c0685b4(c); }
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(5)=R(13);
  R(3)=LD32(R(14)+20);
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(3)+12);
  R(3)=0xfffffff9u;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(0);
  R(2)=0x8c060daau;
  R(0)=c->macl;
  R(0)=sh4_shad(R(0),R(3));
  ST8(R(13)+4,R(0));
  { c->pr=0x8c096798u; R(4)=LD32(R(14)+48); f_8c060daa(c); }
  R(0)=LD32(R(14));
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0967a4(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c0967a8(SH4Ctx *c) {
  R(3)=0x8c2e2c10u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c0967ae(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(2)=0x8c0c9260u;
  R(3)=0x1u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(2),R(3));
  R(1)=LD32(R(14));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0967c6;
  R(3)=0x8c060eb4u;
  { c->pr=0x8c0967c6u; R(4)=LD32(R(14)+48); f_8c060eb4(c); }
L8c0967c6:;
  R(0)=0x4cu;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0967d6;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x50u;
  { uint32_t tg=R(3); c->pr=0x8c0967d6u; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
L8c0967d6:;
  R(3)=0x8c0c9260u;
  R(0)=0x44u;
  R(4)=0x0u;
  ST32(R(14),R(4));
  ST32(R(14)+12,R(4));
  ST32(R(14)+R(0),R(4));
  ST32(R(3),R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0967ea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0967fc;
  R(3)=0x8c060f42u;
  R(4)=LD32(R(14)+48);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c060f42(c); return; } }
L8c0967fc:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096800(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096812;
  R(3)=0x8c060f20u;
  R(4)=LD32(R(14)+48);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c060f20(c); return; } }
L8c096812:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096816(SH4Ctx *c) {
  {  return; }
}
void f_8c09681a(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c09681e(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c096860(SH4Ctx *c) {
  R(0)=R(5);
  ST8(R(4)+12,R(0));
  { R(0)=0x1u; return; }
}
void f_8c0968a4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c09cf24u;
  { c->pr=0x8c0968b0u; ST32(R(15),R(5)); f_8c09cf24(c); }
  R(3)=0x8c09cf24u;
  R(14)=R(0);
  { c->pr=0x8c0968b8u; R(4)=LD32(R(15)); f_8c09cf24(c); }
  R(4)=R(0);
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(c->t) goto L8c0968cc;
  c->t=R(14)&1;R(14)=(uint32_t)((int32_t)R(14)>>1);
  R(0)=R(14);
  R(0)+=R(4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0968cc:;
  c->t=R(4)&1;R(4)=(uint32_t)((int32_t)R(4)>>1);
  R(0)=R(4);
  R(0)+=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0968da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=0x8c09cf24u;
  R(14)=R(4);
  { c->pr=0x8c0968eau; R(4)=LD32(R(14)); f_8c09cf24(c); }
  ST32(R(15)+4,R(0));
  { uint32_t tg=R(13); c->pr=0x8c0968f0u; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  ST32(R(15),R(0));
  { uint32_t tg=R(13); c->pr=0x8c0968f6u; R(4)=LD32(R(14)+8); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c096900u; R(4)=LD32(R(15)+8); f_8c0968a4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  R(4)=R(0);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0968a4(c); return; } }
}
void f_8c09690e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14));
  R(12)=0x8c0612c0u;
  { c->pr=0x8c096924u; R(4)=LD32(R(13)); f_8c0612c0(c); }
  R(5)=LD32(R(14)+4);
  R(8)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c09692cu; R(4)=LD32(R(13)+4); sh4_call(c,tg); }
  R(5)=LD32(R(14)+8);
  R(0)+=R(8);
  R(8)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c096936u; R(4)=LD32(R(13)+8); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)+=R(8);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096944(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14));
  R(12)=0x8c061394u;
  { c->pr=0x8c09695au; R(4)=LD32(R(13)); f_8c061394(c); }
  R(5)=LD32(R(14)+4);
  R(8)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c096962u; R(4)=LD32(R(13)+4); sh4_call(c,tg); }
  R(5)=LD32(R(14)+8);
  R(0)+=R(8);
  R(8)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c09696cu; R(4)=LD32(R(13)+8); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)+=R(8);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09697a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(6);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0612c0u;
  R(5)=LD32(R(13)+8);
  { c->pr=0x8c096994u; R(4)=LD32(R(12)+4); f_8c0612c0(c); }
  R(5)=LD32(R(13)+4);
  R(8)=R(0);
  { uint32_t tg=R(14); c->pr=0x8c09699cu; R(4)=LD32(R(12)+8); sh4_call(c,tg); }
  R(8)-=R(0);
  ST32(R(11),R(8));
  R(5)=LD32(R(13));
  { uint32_t tg=R(14); c->pr=0x8c0969a6u; R(4)=LD32(R(12)+8); sh4_call(c,tg); }
  R(5)=LD32(R(13)+8);
  R(8)=R(0);
  { uint32_t tg=R(14); c->pr=0x8c0969aeu; R(4)=LD32(R(12)); sh4_call(c,tg); }
  R(8)-=R(0);
  ST32(R(11)+4,R(8));
  R(5)=LD32(R(13)+4);
  { uint32_t tg=R(14); c->pr=0x8c0969b8u; R(4)=LD32(R(12)); sh4_call(c,tg); }
  R(5)=LD32(R(13));
  R(8)=R(0);
  { uint32_t tg=R(14); c->pr=0x8c0969c0u; R(4)=LD32(R(12)+4); sh4_call(c,tg); }
  R(8)-=R(0);
  ST32(R(11)+8,R(8));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096a00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(14)=R(4);
  R(0)=LD32(R(14)+32);
  R(12)=R(5);
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; R(8)=0x7fu; if(k) goto L8c096a3a; }
  R(0)=LD32(R(14)+32);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c096a28;
  { R(0)=(int32_t)(int8_t)LD8(R(14)+4); goto L8c096a2a; }
L8c096a28:;
  R(0)=R(8);
L8c096a2a:;
  ST8(R(12)+4,R(0));
  R(3)=LD32(R(14));
  ST32(R(12),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  ST8(R(12)+5,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+6);
  { ST8(R(12)+6,R(0)); goto L8c096c7c; }
L8c096a3a:;
  R(3)=0x8c2e2c80u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c096a46;
  {  goto L8c096c6e; }
L8c096a46:;
  R(2)=0x8c2e2c84u;
  R(0)=0x40u;
  R(10)=0x0u;
  ST8(R(15)+12,R(0));
  R(5)=0x10000u;
  R(0)=R(10);
  ST8(R(15)+4,R(0));
  R(11)=R(10);
  ST32(R(15)+16,R(10));
  ST32(R(15)+8,R(10));
  ST32(R(15),R(10));
  R(13)=LD32(R(2));
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(9)=R(11); if(k) goto L8c096a68; }
  {  goto L8c096b84; }
L8c096a68:;
  R(3)=LD32(R(13)+48);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096a72;
  {  goto L8c096b74; }
L8c096a72:;
  R(3)=LD32(R(14)+36);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(4)=R(10); if(k) goto L8c096a94; }
L8c096a7a:;
  R(1)=R(4);
  R(3)=R(14);
  R(1)<<=2;
  R(3)+=0x28u;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(2)=LD32(R(1));
  c->t=R(2)==R(13);
  if(c->t) goto L8c096a94;
  R(3)=LD32(R(14)+36);
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c096a7a;
L8c096a94:;
  R(1)=LD32(R(14)+36);
  c->t=(int32_t)R(4)>=(int32_t)R(1);
  if(c->t) goto L8c096b74;
  R(2)=R(14);
  R(4)<<=2;
  R(2)+=0x28u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096b74;
  R(1)=LD32(R(14)+8);
  R(4)=R(15);
  R(3)=LD32(R(13));
  R(1)-=R(3);
  ST32(R(15)+20,R(1));
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(13)+4);
  R(2)-=R(3);
  ST32(R(15)+24,R(2));
  R(1)=LD32(R(14)+16);
  R(3)=LD32(R(13)+8);
  R(1)-=R(3);
  R(3)=0x8c0968dau;
  ST32(R(15)+28,R(1));
  { c->pr=0x8c096acau; R(4)+=0x14u; f_8c0968da(c); }
  R(4)=R(0);
  R(0)=LD32(R(14)+32);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c096ae6;
  R(5)=LD32(R(14)+36);
  R(3)=0x8c09571eu;
  R(5)+=0xfffffffeu;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(14);
  { c->pr=0x8c096ae2u; R(5)+=0x38u; f_8c09571e(c); }
  {  goto L8c096aec; }
L8c096ae6:;
  R(3)=0x8c0956a6u;
  { c->pr=0x8c096aecu;  f_8c0956a6(c); }
L8c096aec:;
  R(6)=R(13);
  R(2)=0x8c095900u;
  R(7)=R(13);
  R(4)=R(14);
  R(11)=R(0);
  R(5)=R(13);
  R(7)+=0x24u;
  R(6)+=0x18u;
  { c->pr=0x8c096b00u; R(4)+=0x8u; f_8c095900(c); }
  R(6)=R(13);
  R(3)=0x8c0959d8u;
  R(4)=R(14);
  R(5)=R(13);
  ST8(R(15)+12,R(0));
  R(6)+=0x18u;
  { c->pr=0x8c096b10u; R(4)+=0x8u; f_8c0959d8(c); }
  R(5)=R(14);
  R(7)=R(13);
  R(3)=0x8c095800u;
  R(5)+=0x14u;
  R(4)=R(14);
  ST8(R(15)+4,R(0));
  R(7)+=0xcu;
  R(6)=R(13);
  { c->pr=0x8c096b24u; R(4)+=0x8u; f_8c095800(c); }
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(2)=R(11)&0xFF;
  R(4)=R(8);
  R(0)=R(0)&0xFF;
  R(1)=LD32(R(15)+16);
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(3)=0xfffffff9u;
  R(0)=R(0)&0xFF;
  R(2)=c->macl;
  R(4)-=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(2)=sh4_shad(R(2),R(3));
  c->macl=R(2)*R(4);
  R(0)=R(0)&0xFF;
  R(2)=c->macl;
  R(2)=sh4_shad(R(2),R(3));
  R(3)=R(8);
  R(9)+=R(2);
  R(2)=R(11)&0xFF;
  R(3)-=R(0);
  c->macl=R(3)*R(2);
  R(2)=0xfffffff9u;
  R(3)=c->macl;
  R(3)=sh4_shad(R(3),R(2));
  c->macl=R(3)*R(4);
  R(3)=c->macl;
  R(3)=sh4_shad(R(3),R(2));
  R(1)+=R(3);
  R(3)=R(11)&0xFF;
  ST32(R(15)+16,R(1));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(3)*(uint32_t)(uint16_t)R(0);
  R(0)=LD32(R(15)+8);
  R(3)=c->macl;
  R(3)=sh4_shad(R(3),R(2));
  R(0)+=R(3);
  ST32(R(15)+8,R(0));
L8c096b74:;
  R(3)=LD32(R(15));
  R(3)+=0x1u;
  ST32(R(15),R(3));
  R(13)=LD32(R(13)+56);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c096b84;
  {  goto L8c096a68; }
L8c096b84:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c096be0;
  R(0)=R(11);
  ST8(R(12)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  ST8(R(12)+5,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  ST8(R(12)+6,R(0));
  { ST32(R(12),R(5)); goto L8c096c4a; }
L8c096be0:;
  R(3)=0x8c067940u;
  R(1)=LD32(R(15)+16);
  R(5)=LD32(R(15));
  { c->pr=0x8c096beau; R(0)=R(5); f_8c067940(c); }
  R(3)=0x8c067940u;
  R(1)=R(9);
  ST32(R(15)+16,R(0));
  { c->pr=0x8c096bf4u; R(0)=R(5); f_8c067940(c); }
  R(2)=0x8c067940u;
  R(9)=R(0);
  R(1)=LD32(R(15)+8);
  { c->pr=0x8c096bfeu; R(0)=R(5); f_8c067940(c); }
  ST32(R(15)+8,R(0));
  c->t=(R(9)&R(9))==0;
  R(4)=LD32(R(15)+16);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(4)+=R(9);
  R(0)+=R(4);
  { uint32_t k=!c->t; ST8(R(12)+4,R(0)); if(k) goto L8c096c12; }
  { R(0)=0x0u; goto L8c096c26; }
L8c096c12:;
  R(1)=R(9);
  R(1)<<=2;
  R(1)<<=2;
  R(2)=0x8c067940u;
  R(1)<<=2;
  R(3)=R(9);
  c->t=R(1)>>31;R(1)<<=1;
  R(1)-=R(3);
  { c->pr=0x8c096c26u; R(0)=R(4); f_8c067940(c); }
L8c096c26:;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; ST8(R(12)+5,R(0)); if(k) goto L8c096c30; }
  { R(0)=0x7fu; goto L8c096c44; }
L8c096c30:;
  R(1)=LD32(R(15)+8);
  R(2)=0x8c067940u;
  R(3)=R(1);
  R(1)<<=2;
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)-=R(3);
  { c->pr=0x8c096c44u; R(0)=R(4); f_8c067940(c); }
L8c096c44:;
  R(2)=0x10000u;
  ST8(R(12)+6,R(0));
  ST32(R(12),R(2));
L8c096c4a:;
  R(3)=0x8c0612c0u;
  R(5)=LD32(R(14));
  { c->pr=0x8c096c52u; R(4)=LD32(R(12)); f_8c0612c0(c); }
  ST32(R(12),R(0));
  R(0)=LD32(R(14)+32);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c096c7c;
  R(0)=(int32_t)(int8_t)LD8(R(12)+4);
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(3)*(uint32_t)(uint16_t)R(0);
  R(3)=0xfffffff9u;
  R(0)=c->macl;
  R(0)=sh4_shad(R(0),R(3));
  { ST8(R(12)+4,R(0)); goto L8c096c7c; }
L8c096c6e:;
  R(1)=0x8c0685b4u;
  R(6)=0x8u;
  R(5)=0x8c0c9448u;
  { c->pr=0x8c096c78u; R(4)=R(12); f_8c0685b4(c); }
  R(3)=LD32(R(14));
  ST32(R(12),R(3));
L8c096c7c:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+7);
  ST8(R(12)+7,R(0));
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
void f_8c096c94(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(2)=0x8c2e2c80u;
  R(12)=0x0u;
  R(14)=R(4);
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(11)=R(12); if(k) goto L8c096cb8; }
  {  { f_8c096da6(c); return; } }
L8c096cb8:;
  R(3)=0x8c2e2c84u;
  R(9)=0x8c0968dau;
  R(13)=LD32(R(3));
  R(8)=0x8c0956a6u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(10)=0x10u; if(k) { f_8c096cca(c); return; } }
  {  { f_8c096da6(c); return; } }
}
void f_8c096cca(SH4Ctx *c) {
L8c096cca:;
  R(3)=LD32(R(13)+48);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(5)=R(12); if(k) goto L8c096d48; }
  R(3)=LD32(R(14)+36);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c096cf4; }
L8c096cda:;
  R(1)=R(4);
  R(3)=R(14);
  R(1)<<=2;
  R(3)+=0x28u;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(2)=LD32(R(1));
  c->t=R(2)==R(13);
  if(c->t) goto L8c096cf4;
  R(3)=LD32(R(14)+36);
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c096cda;
L8c096cf4:;
  R(1)=LD32(R(14)+36);
  c->t=(int32_t)R(4)>=(int32_t)R(1);
  if(c->t) goto L8c096d48;
  R(2)=R(14);
  R(4)<<=2;
  R(2)+=0x28u;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096d48;
  R(1)=LD32(R(14)+8);
  R(3)=LD32(R(13));
  R(1)-=R(3);
  ST32(R(15),R(1));
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(13)+4);
  R(2)-=R(3);
  ST32(R(15)+4,R(2));
  R(1)=LD32(R(14)+16);
  R(3)=LD32(R(13)+8);
  R(1)-=R(3);
  ST32(R(15)+8,R(1));
  { uint32_t tg=R(9); c->pr=0x8c096d26u; R(4)=R(15); sh4_call(c,tg); }
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(10))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c096d42; }
  R(5)=LD32(R(14)+36);
  R(3)=0x8c09571eu;
  R(5)+=0xfffffffeu;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(14);
  { c->pr=0x8c096d3eu; R(5)+=0x38u; f_8c09571e(c); }
  {  goto L8c096d46; }
L8c096d42:;
  { uint32_t tg=R(8); c->pr=0x8c096d46u;  sh4_call(c,tg); }
L8c096d46:;
  R(5)=R(0);
L8c096d48:;
  R(6)=R(5)&0xFF;
  R(4)=R(11)&0xFF;
  c->t=(int32_t)R(4)>(int32_t)R(6);
  { uint32_t k=!c->t; R(13)=LD32(R(13)+56); if(k) goto L8c096da0; }
  { R(11)=R(4); goto L8c096da2; }
L8c096da0:;
  R(11)=R(6);
L8c096da2:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c096cca;
  { f_8c096da6(c); return; }
}
void f_8c096da0(SH4Ctx *c) {
  R(11)=R(6);
  c->t=(R(13)&R(13))==0;
  if(!c->t) { f_8c096cca(c); return; }
  { f_8c096da6(c); return; }
}
void f_8c096da6(SH4Ctx *c) {
  R(0)=R(11)&0xFF;
  R(0)<<=16;
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
void f_8c096dbe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  R(14)=0x8c2e2c90u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(6);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14));
  R(13)=R(15);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)+=0x18u; if(k) goto L8c096e00; }
L8c096ddc:;
  R(2)=LD32(R(4)+4);
  c->t=R(2)==R(11);
  if(!c->t) goto L8c096dfa;
  R(1)=LD32(R(4)+8);
  c->t=R(1)==R(12);
  if(!c->t) goto L8c096dfa;
  R(2)=LD32(R(4)+12);
  c->t=R(2)==R(10);
  if(c->t) goto L8c096df4;
  R(0)=LD32(R(4)+8);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c096dfa;
L8c096df4:;
  R(3)=LD32(R(13));
  { ST32(R(4),R(3)); goto L8c096e82; }
L8c096dfa:;
  R(4)=LD32(R(4)+16);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c096ddc;
L8c096e00:;
  R(3)=0x8c063d46u;
  R(5)=0x1cu;
  { c->pr=0x8c096e08u; R(4)=0x4u; f_8c063d46(c); }
  R(4)=R(0);
  R(5)=0x0u;
  ST32(R(4)+16,R(5));
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(5));
  R(2)=LD32(R(4)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c096e1e;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+16);
  ST32(R(3)+20,R(2));
L8c096e1e:;
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096e2a;
  R(2)=LD32(R(4)+16);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+16,R(2));
L8c096e2a:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096e54;
  R(3)=LD32(R(4)+24);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+24);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c096e46;
  R(3)=LD32(R(4)+16);
  R(1)=LD32(R(4)+24);
  ST32(R(1),R(3));
L8c096e46:;
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c096e54;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+24);
  ST32(R(1)+4,R(3));
L8c096e54:;
  ST32(R(4)+16,R(5));
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(5));
  ST32(R(4)+16,R(5));
  R(2)=LD32(R(14)+4);
  ST32(R(4)+20,R(2));
  ST32(R(4)+24,R(14));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c096e6c;
  { ST32(R(14),R(4)); goto L8c096e70; }
L8c096e6c:;
  R(2)=LD32(R(14)+4);
  ST32(R(2)+16,R(4));
L8c096e70:;
  ST32(R(14)+4,R(4));
  R(3)=LD32(R(14)+8);
  R(3)+=0x1u;
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13));
  ST32(R(4),R(2));
  ST32(R(4)+4,R(11));
  ST32(R(4)+8,R(12));
  ST32(R(4)+12,R(10));
L8c096e82:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096e92(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096ea2;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+16);
  ST32(R(3)+20,R(2));
L8c096ea2:;
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096eae;
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(14)+20);
  ST32(R(3)+16,R(2));
L8c096eae:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096ed8;
  R(3)=LD32(R(14)+24);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+24);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c096eca;
  R(3)=LD32(R(14)+16);
  R(1)=LD32(R(14)+24);
  ST32(R(1),R(3));
L8c096eca:;
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c096ed8;
  R(3)=LD32(R(14)+20);
  R(1)=LD32(R(14)+24);
  ST32(R(1)+4,R(3));
L8c096ed8:;
  R(4)=0x0u;
  R(2)=0x8c064160u;
  ST32(R(14)+16,R(4));
  R(5)=R(14);
  ST32(R(14)+20,R(4));
  ST32(R(14)+24,R(4));
  R(4)=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064160(c); return; } }
}
void f_8c096eea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=R(15);
  R(14)+=0xcu;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+40);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c096f40;
  R(3)=0x8c06262cu;
  R(2)=LD32(R(14));
  { c->pr=0x8c096f04u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c06262c(c); }
  {  goto L8c096f46; }
L8c096f40:;
  R(2)=0x8c0ab120u;
  { c->pr=0x8c096f46u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c0ab120(c); }
L8c096f46:;
  R(15)+=0x4u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c096f60; }
  R(2)=LD32(R(14));
  R(5)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14));
  R(6)=LD32(R(6)+40);
  { c->pr=0x8c096f5cu; R(4)=R(13); f_8c096dbe(c); }
  { R(15)+=0x4u; goto L8c096f62; }
L8c096f60:;
  R(0)=0xffffffffu;
L8c096f62:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096f6a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096f7c;
  R(3)=0x8c062696u;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c062696(c); return; } }
L8c096f7c:;
  R(3)=0x8c0ab14cu;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ab14c(c); return; } }
}
void f_8c096f84(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096f9c;
  R(3)=0x8c062870u;
  { c->pr=0x8c096f98u; R(4)=LD32(R(14)+4); f_8c062870(c); }
  {  goto L8c096fa2; }
L8c096f9c:;
  R(3)=0x8c0ab150u;
  { c->pr=0x8c096fa2u; R(4)=LD32(R(14)+4); f_8c0ab150(c); }
L8c096fa2:;
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c096fac;
  { c->pr=0x8c096facu; R(4)=R(14); f_8c096e92(c); }
L8c096fac:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096fb6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c096fce;
  R(3)=0x8c06289cu;
  { c->pr=0x8c096fcau; R(4)=LD32(R(14)+4); f_8c06289c(c); }
  {  goto L8c096fd4; }
L8c096fce:;
  R(3)=0x8c0ab174u;
  { c->pr=0x8c096fd4u; R(4)=LD32(R(14)+4); f_8c0ab174(c); }
L8c096fd4:;
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c096fde;
  { c->pr=0x8c096fdeu; R(4)=R(14); f_8c096e92(c); }
L8c096fde:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c096fe8(SH4Ctx *c) {
  R(3)=0xf0000000u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(2)=0x80000000u;
  R(3)&=R(14);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=R(3)==R(2);
  if(!c->t) goto L8c09706e;
  R(1)=LD32(R(14)+12);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c097060;
  R(3)=0x8c0628a8u;
  { c->pr=0x8c097004u; R(4)=LD32(R(14)+4); f_8c0628a8(c); }
  {  goto L8c097066; }
L8c097060:;
  R(3)=0x8c0ab17au;
  { c->pr=0x8c097066u; R(4)=LD32(R(14)+4); f_8c0ab17a(c); }
L8c097066:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c096e92(c); return; } }
L8c09706e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c097060(SH4Ctx *c) {
  R(3)=0x8c0ab17au;
  { c->pr=0x8c097066u; R(4)=LD32(R(14)+4); f_8c0ab17a(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c096e92(c); return; } }
}
void f_8c097074(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097086;
  R(3)=0x8c062960u;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c062960(c); return; } }
L8c097086:;
  R(3)=0x8c0ab180u;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ab180(c); return; } }
}
void f_8c09708e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0970a0;
  R(3)=0x8c0629b0u;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0629b0(c); return; } }
L8c0970a0:;
  R(3)=0x8c0ab186u;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ab186(c); return; } }
}
void f_8c0970ae(SH4Ctx *c) {
  R(3)=LD32(R(4)+44);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0970ba;
  R(3)=0x8c062ca0u;
  {  { f_8c062ca0(c); return; } }
L8c0970ba:;
  R(3)=0x8c0ab204u;
  {  { f_8c0ab204(c); return; } }
}
void f_8c0970c0(SH4Ctx *c) {
  R(3)=LD32(R(4)+40);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0970cc;
  R(3)=0x8c062da0u;
  {  { f_8c062da0(c); return; } }
L8c0970cc:;
  R(3)=0x8c0ab210u;
  {  { f_8c0ab210(c); return; } }
}
void f_8c0970d8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0ab2ecu;
  R(3)=LD32(R(15)+4);
  { c->pr=0x8c0970e2u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c0ab2ec(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c097140(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097152;
  R(3)=0x8c062c5cu;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c062c5c(c); return; } }
L8c097152:;
  R(3)=0x8c0ab234u;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ab234(c); return; } }
}
void f_8c09715a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09716c;
  R(3)=0x8c062c60u;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c062c60(c); return; } }
L8c09716c:;
  R(3)=0x8c0ab23au;
  R(4)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ab23a(c); return; } }
}
void f_8c097174(SH4Ctx *c) {
  R(3)=0x8c0ab2d6u;
  {  { f_8c0ab2d6(c); return; } }
}
void f_8c09717a(SH4Ctx *c) {
  R(3)=0x8c0ab2b8u;
  {  { f_8c0ab2b8(c); return; } }
}
void f_8c097180(SH4Ctx *c) {
  R(3)=0x8c0ab2beu;
  {  { f_8c0ab2be(c); return; } }
}
void f_8c097186(SH4Ctx *c) {
  R(3)=0x8c0ab34au;
  {  { f_8c0ab34a(c); return; } }
}
void f_8c09718c(SH4Ctx *c) {
  R(3)=0x8c09999eu;
  {  { f_8c09999e(c); return; } }
}
void f_8c097192(SH4Ctx *c) {
  R(3)=0x8c0ab2a6u;
  {  { f_8c0ab2a6(c); return; } }
}
void f_8c097198(SH4Ctx *c) {
  R(3)=0x8c0ab2acu;
  {  { f_8c0ab2ac(c); return; } }
}
void f_8c0971e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c2e2c84u;
  R(14)=R(4);
  R(4)=0x0u;
  R(3)=0x8c2e2c80u;
  R(2)=0x8c0ab18cu;
  ST32(R(3),R(4));
  ST32(R(5),R(4));
  ST32(R(5)+4,R(4));
  ST32(R(5)+8,R(4));
  R(5)=0x8c2e2c90u;
  ST32(R(5),R(4));
  ST32(R(5)+4,R(4));
  ST32(R(5)+8,R(4));
  { c->pr=0x8c097204u; R(4)=R(14); f_8c0ab18c(c); }
  c->t=(int32_t)R(0)==3;
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c097216; }
  R(2)=0x8c062aa0u;
  { c->pr=0x8c097210u; R(4)=R(14); f_8c062aa0(c); }
  R(3)=0x8c06334cu;
  { c->pr=0x8c097216u; R(4)=R(14); f_8c06334c(c); }
L8c097216:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c097220(SH4Ctx *c) {
  R(3)=0x8c0ab192u;
  {  { f_8c0ab192(c); return; } }
}
void f_8c097226(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c062ba0u;
  { c->pr=0x8c09722eu;  f_8c062ba0(c); }
  R(2)=0x8c0ab198u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0ab198(c); return; } }
}
void f_8c097238(SH4Ctx *c) {
  R(3)=0x8c0ab2b2u;
  {  { f_8c0ab2b2(c); return; } }
}
void f_8c09723e(SH4Ctx *c) {
  R(3)=0x8c0ab19eu;
  {  { f_8c0ab19e(c); return; } }
}
void f_8c097244(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=0x44u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063d46u;
  { c->pr=0x8c097256u; R(4)=0x7u; f_8c063d46(c); }
  R(14)=R(0);
  R(0)=0x40u;
  R(4)=0x0u;
  ST32(R(14)+56,R(4));
  ST32(R(14)+60,R(4));
  ST32(R(14)+R(0),R(4));
  R(3)=LD32(R(14)+56);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09726e;
  R(2)=LD32(R(14)+60);
  R(3)=LD32(R(14)+56);
  ST32(R(3)+60,R(2));
L8c09726e:;
  R(3)=LD32(R(14)+60);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09727a;
  R(2)=LD32(R(14)+56);
  R(3)=LD32(R(14)+60);
  ST32(R(3)+56,R(2));
L8c09727a:;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0972a4;
  R(3)=LD32(R(14)+R(0));
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+R(0));
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c097296;
  R(3)=LD32(R(14)+56);
  R(1)=LD32(R(14)+R(0));
  ST32(R(1),R(3));
L8c097296:;
  R(2)=LD32(R(14)+R(0));
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0972a4;
  R(3)=LD32(R(14)+60);
  R(1)=LD32(R(14)+R(0));
  ST32(R(1)+4,R(3));
L8c0972a4:;
  ST32(R(14)+56,R(4));
  ST32(R(14)+60,R(4));
  ST32(R(14)+R(0),R(4));
  ST32(R(14)+56,R(4));
  R(4)=0x8c2e2c84u;
  R(3)=LD32(R(4)+4);
  ST32(R(14)+60,R(3));
  ST32(R(14)+R(0),R(4));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0972be;
  { ST32(R(4),R(14)); goto L8c0972c2; }
L8c0972be:;
  R(2)=LD32(R(4)+4);
  ST32(R(2)+56,R(14));
L8c0972c2:;
  c->t=(R(13)&R(13))==0;
  ST32(R(4)+4,R(14));
  R(3)=LD32(R(4)+8);
  R(3)+=0x1u;
  { uint32_t k=!c->t; ST32(R(4)+8,R(3)); if(k) goto L8c097320; }
  R(1)=0x1u;
  { ST32(R(14)+48,R(1)); goto L8c09734e; }
L8c097320:;
  R(12)=0x8c0685b4u;
  R(5)=R(13);
  R(6)=0xcu;
  { c->pr=0x8c09732au; R(4)=R(14); f_8c0685b4(c); }
  R(5)=R(13);
  R(4)=R(14);
  R(5)+=0xcu;
  R(6)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c097336u; R(4)+=0xcu; sh4_call(c,tg); }
  R(5)=R(13);
  R(4)=R(14);
  R(5)+=0x18u;
  R(6)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c097342u; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=R(13);
  R(4)=R(14);
  R(5)+=0x24u;
  R(6)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c09734eu; R(4)+=0x24u; sh4_call(c,tg); }
L8c09734e:;
  R(4)=0x8c2e2c80u;
  R(5)=R(14);
  R(3)=0x8c0ab1a2u;
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  ST32(R(4),R(2));
  { c->pr=0x8c09735eu; R(4)=R(13); f_8c0ab1a2(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09736a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2e2c84u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c0973c0; }
L8c097380:;
  c->t=R(14)==R(11);
  if(c->t) goto L8c09738a;
  R(14)=LD32(R(14)+56);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c097380;
L8c09738a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0973c0;
  R(12)=0x8c0685b4u;
  R(3)=0x0u;
  R(5)=R(13);
  R(6)=0xcu;
  ST32(R(14)+48,R(3));
  { c->pr=0x8c09739cu; R(4)=R(14); f_8c0685b4(c); }
  R(5)=R(13);
  R(4)=R(14);
  R(5)+=0xcu;
  R(6)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c0973a8u; R(4)+=0xcu; sh4_call(c,tg); }
  R(5)=R(13);
  R(4)=R(14);
  R(5)+=0x18u;
  R(6)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c0973b4u; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=R(13);
  R(4)=R(14);
  R(5)+=0x24u;
  R(6)=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c0973c0u; R(4)+=0x24u; sh4_call(c,tg); }
L8c0973c0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(11);
  R(5)=R(13);
  R(2)=0x8c0ab1a6u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ab1a6(c); return; } }
}
void f_8c0973d2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=R(4);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} if(k) goto L8c097436; }
  R(2)=LD32(R(5)+56);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0973e8;
  R(2)=LD32(R(5)+60);
  R(3)=LD32(R(5)+56);
  ST32(R(3)+60,R(2));
L8c0973e8:;
  R(3)=LD32(R(5)+60);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(0)=0x40u; if(k) goto L8c0973f6; }
  R(2)=LD32(R(5)+56);
  R(3)=LD32(R(5)+60);
  ST32(R(3)+56,R(2));
L8c0973f6:;
  R(3)=LD32(R(5)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097420;
  R(3)=LD32(R(5)+R(0));
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(5)+R(0));
  R(2)=LD32(R(3));
  c->t=R(2)==R(5);
  if(!c->t) goto L8c097412;
  R(3)=LD32(R(5)+56);
  R(1)=LD32(R(5)+R(0));
  ST32(R(1),R(3));
L8c097412:;
  R(2)=LD32(R(5)+R(0));
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c097420;
  R(3)=LD32(R(5)+60);
  R(1)=LD32(R(5)+R(0));
  ST32(R(1)+4,R(3));
L8c097420:;
  R(3)=0x8c064160u;
  R(4)=0x0u;
  ST32(R(5)+56,R(4));
  ST32(R(5)+60,R(4));
  ST32(R(5)+R(0),R(4));
  { c->pr=0x8c09742eu; R(4)=0x7u; f_8c064160(c); }
  R(4)=0x8c2e2c80u;
  R(2)=LD32(R(4));
  R(2)+=0xffffffffu;
  ST32(R(4),R(2));
L8c097436:;
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  R(3)=0x8c0ab200u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0ab200(c); return; } }
}
void f_8c097444(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(1)=0x54u;
  R(0)=LD32(R(15)+4);
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c097458;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c097458;
  {  goto L8c09746c; }
L8c097458:;
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0631f6u;
  R(2)=LD32(R(15)+8);
  { c->pr=0x8c097464u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c0631f6(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c09746c:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bcfc8u;
  { c->pr=0x8c097474u; R(4)=0x1bu; f_8c0633e0(c); }
  R(0)=0xffffffffu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0974c0(SH4Ctx *c) {
  R(3)=0x8c06321eu;
  {  { f_8c06321e(c); return; } }
}
void f_8c0974c6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063222u;
  { c->pr=0x8c0974d2u;  f_8c063222(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0974da(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c06322cu;
  { c->pr=0x8c0974e6u;  f_8c06322c(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0974ee(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0632feu;
  { c->pr=0x8c0974fau;  f_8c0632fe(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c097502(SH4Ctx *c) {
  R(3)=0x8c063340u;
  {  { f_8c063340(c); return; } }
}
void f_8c097508(SH4Ctx *c) {
  R(3)=0x8c063344u;
  {  { f_8c063344(c); return; } }
}
void f_8c09750e(SH4Ctx *c) {
  R(3)=0x8c063348u;
  {  { f_8c063348(c); return; } }
}
void f_8c097514(SH4Ctx *c) {
  R(3)=0x8c0ab21cu;
  {  { f_8c0ab21c(c); return; } }
}
void f_8c09751a(SH4Ctx *c) {
  R(3)=0x8c0ab222u;
  {  { f_8c0ab222(c); return; } }
}
void f_8c097520(SH4Ctx *c) {
  R(3)=0x8c0ab228u;
  {  { f_8c0ab228(c); return; } }
}
void f_8c097526(SH4Ctx *c) {
  R(3)=0x8c0ab22eu;
  {  { f_8c0ab22e(c); return; } }
}
void f_8c09752c(SH4Ctx *c) {
  R(3)=0x8c0ab240u;
  {  { f_8c0ab240(c); return; } }
}
void f_8c097532(SH4Ctx *c) {
  R(3)=0x8c0ab246u;
  {  { f_8c0ab246(c); return; } }
}
void f_8c097580(SH4Ctx *c) {
  R(3)=0x8c0ab2a0u;
  {  { f_8c0ab2a0(c); return; } }
}
void f_8c097586(SH4Ctx *c) {
  R(3)=0x8c0ab2c4u;
  {  { f_8c0ab2c4(c); return; } }
}
void f_8c097590(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097594(SH4Ctx *c) {
  {  return; }
}
void f_8c097598(SH4Ctx *c) {
  {  return; }
}
void f_8c09759c(SH4Ctx *c) {
  R(3)=0x8c0ab2d2u;
  {  { f_8c0ab2d2(c); return; } }
}
void f_8c0975a6(SH4Ctx *c) {
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0975b8;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0975b8;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bcfccu;
  { R(4)=0x1bu; { f_8c0633e0(c); return; } }
L8c0975b8:;
  {  return; }
}
void f_8c0975bc(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c0975c0(SH4Ctx *c) {
  R(3)=0x8c0ab2e0u;
  {  { f_8c0ab2e0(c); return; } }
}
void f_8c0975c6(SH4Ctx *c) {
  R(3)=0x8c0ab2e6u;
  {  { f_8c0ab2e6(c); return; } }
}
void f_8c097600(SH4Ctx *c) {
  R(0)=0x54u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c097624;
  R(3)=LD32(R(4)+40);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09761a;
  R(3)=0x8c062dbeu;
  { c->pr=0x8c097616u;  f_8c062dbe(c); }
  {  goto L8c097620; }
L8c09761a:;
  R(3)=0x8c0ab344u;
  { c->pr=0x8c097620u;  f_8c0ab344(c); }
L8c097620:;
  { R(6)=R(0); goto L8c09762e; }
L8c097624:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bcfc8u;
  { c->pr=0x8c09762cu; R(4)=0x1bu; f_8c0633e0(c); }
  R(6)=0x0u;
L8c09762e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(6); return; }
}
void f_8c0976a6(SH4Ctx *c) {
  R(3)=0x8c063978u;
  { c->pr=0x8c0976acu; R(4)=R(14); f_8c063978(c); }
  R(3)=0x8c0639c6u;
  ST32(R(15),R(0));
  { c->pr=0x8c0976b4u; R(4)=R(14); f_8c0639c6(c); }
  R(0)=LD32(R(15));
  R(1)=0x104u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0976c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffdd8u;
  R(15)+=R(0);
  R(3)=0x8c06152eu;
  { c->pr=0x8c0976dau;  f_8c06152e(c); }
  R(14)=R(0);
  { c->pr=0x8c0976e0u; R(4)=LD32(R(14)); f_8c09794e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(11)=R(0); if(k) goto L8c0976ea; }
  {  goto L8c0978c4; }
L8c0976ea:;
  R(8)=0x8c064160u;
  c->t=(int32_t)R(11)>=0;
  R(12)=0x0u;
  { uint32_t k=!c->t; R(13)=R(12); if(k) goto L8c097766; }
L8c0976f4:;
  R(5)=R(13);
  { c->pr=0x8c0976fau; R(4)=LD32(R(14)); f_8c0979c0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c097760;
  R(5)=LD32(R(14)+32);
  { uint32_t tg=R(8); c->pr=0x8c097704u; R(4)=0x2u; sh4_call(c,tg); }
  ST32(R(14)+32,R(12));
  { R(0)=R(12); goto L8c0978c6; }
L8c097760:;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>(int32_t)R(11);
  if(!c->t) goto L8c0976f4;
L8c097766:;
  { c->pr=0x8c09776au;  f_8c097c80(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0977c4;
  R(2)=0x8c2e2ca4u;
  R(11)=0x8c0bcff8u;
  R(13)=0x8c0633e0u;
  R(14)=LD32(R(2));
  R(9)=0x128u;
  { R(9)+=R(15); goto L8c0978bc; }
L8c09777c:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c097786;
  {  goto L8c0978ba; }
L8c097786:;
  R(10)=0x114u;
  R(4)=LD32(R(14)+8);
  R(2)=0x8c0bcffcu;
  R(10)+=R(15);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c09779au; R(4)+=0x1cu; f_8c06874c(c); }
  R(15)+=0x8u;
  R(2)=0x8c068788u;
  R(5)=R(15);
  R(6)=0x14u;
  R(5)+=0x14u;
  { c->pr=0x8c0977a8u; R(4)=R(10); f_8c068788(c); }
  R(3)=0x8c063820u;
  R(5)=R(9);
  R(4)=0x114u;
  { c->pr=0x8c0977b2u; R(4)+=R(15); f_8c063820(c); }
  R(2)=0x8c0639a0u;
  { c->pr=0x8c0977b8u; R(4)=R(9); f_8c0639a0(c); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c097820;
  R(5)=R(9);
  { uint32_t tg=R(13); c->pr=0x8c0977c4u; R(4)=0xau; sh4_call(c,tg); }
L8c0977c4:;
  { R(0)=0x0u; goto L8c0978c6; }
L8c097820:;
  R(0)=0x838u;
  R(3)=0x7ffu;
  R(2)=LD32(R(10)+R(0));
  R(1)=R(2);
  ST32(R(15)+16,R(2));
  R(2)=0xfffff800u;
  R(1)+=R(3);
  R(3)=0x8c063d46u;
  R(1)&=R(2);
  R(5)=R(1);
  R(5)+=0x20u;
  ST32(R(15)+4,R(1));
  { c->pr=0x8c09783cu; R(4)=0x1u; f_8c063d46(c); }
  R(3)=R(0);
  R(2)=0xffffffe0u;
  R(3)+=0x1fu;
  R(6)=R(15);
  R(1)=0x8c03bea8u;
  R(3)&=R(2);
  R(5)=R(3);
  ST32(R(15)+12,R(0));
  ST32(R(15)+8,R(3));
  R(6)+=0x4u;
  { c->pr=0x8c097854u; R(4)=R(10); f_8c03bea8(c); }
  R(3)=0x8c0639c6u;
  { c->pr=0x8c09785au; R(4)=R(10); f_8c0639c6(c); }
  R(2)=0x8c0e2910u;
  { c->pr=0x8c097860u; R(4)=R(15); f_8c0e2910(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09786c;
  R(5)=R(11);
  { uint32_t tg=R(13); c->pr=0x8c09786cu; R(4)=0x1du; sh4_call(c,tg); }
L8c09786c:;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=0xffffffffu;
  R(5)=LD32(R(15)+12);
  R(3)=0x8c0e2af4u;
  R(6)=LD32(R(15)+20);
  { c->pr=0x8c09787au; R(4)=LD32(R(15)+4); f_8c0e2af4(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c097888; }
  R(5)=R(11);
  { uint32_t tg=R(13); c->pr=0x8c097888u; R(4)=0x1du; sh4_call(c,tg); }
L8c097888:;
  R(3)=0x8c0efc44u;
  R(5)=0x42534f53u;
  R(6)=LD32(R(14)+20);
  { c->pr=0x8c097892u; R(4)=LD32(R(15)); f_8c0efc44(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09789e;
  R(5)=R(11);
  { uint32_t tg=R(13); c->pr=0x8c09789eu; R(4)=0x1du; sh4_call(c,tg); }
L8c09789e:;
  R(3)=0x8c0e2990u;
  { c->pr=0x8c0978a4u; R(4)=LD32(R(15)); f_8c0e2990(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0978b0;
  R(5)=R(11);
  { uint32_t tg=R(13); c->pr=0x8c0978b0u; R(4)=0x1du; sh4_call(c,tg); }
L8c0978b0:;
  R(3)=0x1u;
  ST32(R(14),R(3));
  R(5)=LD32(R(15)+12);
  { uint32_t tg=R(8); c->pr=0x8c0978bau; R(4)=R(3); sh4_call(c,tg); }
L8c0978ba:;
  R(14)=LD32(R(14)+48);
L8c0978bc:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0978c4;
  {  goto L8c09777c; }
L8c0978c4:;
  R(0)=0x1u;
L8c0978c6:;
  R(1)=0x228u;
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
void f_8c097920(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffef8u;
  R(15)+=R(0);
  R(3)=0x8c0bcffcu;
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c097938u; R(4)+=0x10u; f_8c06874c(c); }
  R(3)=0x8c068788u;
  R(5)=R(15);
  R(6)=LD32(R(15)+8);
  R(5)+=0x10u;
  { c->pr=0x8c097944u; R(4)=LD32(R(15)+12); f_8c068788(c); }
  R(1)=0x110u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09794e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c06152eu;
  { c->pr=0x8c097956u;  f_8c06152e(c); }
  R(6)=R(0);
  R(4)=LD32(R(6)+32);
  R(4)=LD32(R(4)+12);
  { R(5)=0x0u; goto L8c09797c; }
L8c097960:;
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c097978;
  R(0)=LD32(R(4)+8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c097978;
  R(0)=LD32(R(4)+44);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c097978;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c097978:;
  R(4)+=0x64u;
  R(5)+=0x1u;
L8c09797c:;
  R(2)=LD32(R(6)+32);
  R(3)=LD32(R(2)+16);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c097960;
  R(0)=0xffffffffu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0979c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffde0u;
  R(15)+=R(0);
  R(3)=0x10cu;
  ST32(R(15),R(4));
  R(3)+=R(15);
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(3));
  R(4)=LD32(R(15));
  R(3)=0x8c0bcffcu;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c0979e6u; R(4)+=0x14u; f_8c06874c(c); }
  R(15)+=0x8u;
  R(3)=0x8c068788u;
  R(5)=R(15);
  R(6)=0x14u;
  R(5)+=0xcu;
  { c->pr=0x8c0979f4u; R(4)=LD32(R(15)+8); f_8c068788(c); }
  R(13)=0x120u;
  R(4)=0x10cu;
  R(2)=0x8c063820u;
  R(13)+=R(15);
  R(5)=R(13);
  { c->pr=0x8c097a02u; R(4)+=R(15); f_8c063820(c); }
  R(3)=0x8c0639a0u;
  { c->pr=0x8c097a08u; R(4)=R(13); f_8c0639a0(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c097a1a;
  R(3)=0x8c0633e0u;
  R(5)=R(13);
  { c->pr=0x8c097a16u; R(4)=0xau; f_8c0633e0(c); }
  {  goto L8c097a34; }
L8c097a1a:;
  R(2)=0x8c063978u;
  { c->pr=0x8c097a20u; R(4)=R(14); f_8c063978(c); }
  R(3)=0x8c0639c6u;
  R(13)=R(0);
  { c->pr=0x8c097a28u; R(4)=R(14); f_8c0639c6(c); }
  R(14)=0x8c2e2cb0u;
  R(3)=0x200000u;
  R(2)=LD32(R(14));
  R(2)+=R(13);
  c->t=R(2)>=R(3);
  if(!c->t) goto L8c097a80;
L8c097a34:;
  { R(0)=0x0u; goto L8c097b34; }
L8c097a80:;
  R(12)=0x8c0c932cu;
  R(5)=0x3cu;
  R(2)=0x8c063d46u;
  R(3)=LD32(R(12));
  R(3)+=0x1u;
  ST32(R(12),R(3));
  { c->pr=0x8c097a90u; R(4)=0x2u; f_8c063d46(c); }
  R(4)=R(0);
  R(5)=0x0u;
  ST32(R(4)+48,R(5));
  ST32(R(4)+52,R(5));
  ST32(R(4)+56,R(5));
  R(3)=LD32(R(4)+48);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097aa6;
  R(2)=LD32(R(4)+52);
  R(3)=LD32(R(4)+48);
  ST32(R(3)+52,R(2));
L8c097aa6:;
  R(3)=LD32(R(4)+52);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097ab2;
  R(2)=LD32(R(4)+48);
  R(3)=LD32(R(4)+52);
  ST32(R(3)+48,R(2));
L8c097ab2:;
  R(3)=LD32(R(4)+56);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097adc;
  R(3)=LD32(R(4)+56);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+56);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c097ace;
  R(3)=LD32(R(4)+48);
  R(1)=LD32(R(4)+56);
  ST32(R(1),R(3));
L8c097ace:;
  R(2)=LD32(R(4)+56);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c097adc;
  R(3)=LD32(R(4)+52);
  R(1)=LD32(R(4)+56);
  ST32(R(1)+4,R(3));
L8c097adc:;
  R(6)=0x8c2e2ca4u;
  ST32(R(4)+48,R(5));
  ST32(R(4)+52,R(5));
  ST32(R(4)+56,R(5));
  ST32(R(4)+48,R(5));
  R(2)=LD32(R(6)+4);
  ST32(R(4)+52,R(2));
  ST32(R(4)+56,R(6));
  R(3)=LD32(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c097af6;
  { ST32(R(6),R(4)); goto L8c097afa; }
L8c097af6:;
  R(2)=LD32(R(6)+4);
  ST32(R(2)+48,R(4));
L8c097afa:;
  ST32(R(6)+4,R(4));
  R(3)=LD32(R(6)+8);
  R(3)+=0x1u;
  ST32(R(6)+8,R(3));
  R(6)=0xffffffffu;
  R(2)=LD32(R(15));
  ST32(R(4)+8,R(2));
  R(3)=LD32(R(15)+4);
  ST32(R(4)+12,R(3));
  R(3)=0x42534f53u;
  ST32(R(4),R(5));
  R(5)=0x1u;
  ST32(R(4)+4,R(5));
  R(0)=R(5);
  ST32(R(4)+16,R(3));
  R(2)=LD32(R(12));
  ST32(R(4)+20,R(2));
  R(3)=LD32(R(14));
  ST32(R(4)+24,R(3));
  R(3)=0x0u;
  R(2)=LD32(R(14));
  R(2)+=R(13);
  ST32(R(14),R(2));
  R(2)=R(3);
  ST32(R(4)+28,R(13));
  ST32(R(4)+40,R(3));
  ST32(R(4)+44,R(3));
  ST32(R(4)+32,R(6));
  ST32(R(4)+36,R(6));
L8c097b34:;
  R(1)=0x220u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c097b80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c0c9330u;
  R(5)=0x3cu;
  R(2)=0x8c063d46u;
  ST32(R(15),R(4));
  R(3)=LD32(R(14));
  R(3)+=0x1u;
  ST32(R(14),R(3));
  { c->pr=0x8c097b98u; R(4)=0x2u; f_8c063d46(c); }
  R(4)=R(0);
  R(5)=0x0u;
  ST32(R(4)+48,R(5));
  ST32(R(4)+52,R(5));
  ST32(R(4)+56,R(5));
  R(3)=LD32(R(4)+48);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097bae;
  R(2)=LD32(R(4)+52);
  R(3)=LD32(R(4)+48);
  ST32(R(3)+52,R(2));
L8c097bae:;
  R(3)=LD32(R(4)+52);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097bba;
  R(2)=LD32(R(4)+48);
  R(3)=LD32(R(4)+52);
  ST32(R(3)+48,R(2));
L8c097bba:;
  R(3)=LD32(R(4)+56);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097be4;
  R(3)=LD32(R(4)+56);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+56);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c097bd6;
  R(3)=LD32(R(4)+48);
  R(1)=LD32(R(4)+56);
  ST32(R(1),R(3));
L8c097bd6:;
  R(2)=LD32(R(4)+56);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c097be4;
  R(3)=LD32(R(4)+52);
  R(1)=LD32(R(4)+56);
  ST32(R(1)+4,R(3));
L8c097be4:;
  ST32(R(4)+48,R(5));
  ST32(R(4)+52,R(5));
  ST32(R(4)+56,R(5));
  ST32(R(4)+48,R(5));
  R(5)=0x8c2e2ca4u;
  R(2)=LD32(R(5)+4);
  ST32(R(4)+52,R(2));
  ST32(R(4)+56,R(5));
  R(3)=LD32(R(5));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c097bfe;
  { ST32(R(5),R(4)); goto L8c097c02; }
L8c097bfe:;
  R(2)=LD32(R(5)+4);
  ST32(R(2)+48,R(4));
L8c097c02:;
  R(6)=0x8c2e2cb0u;
  R(7)=0x1u;
  R(2)=0x52535053u;
  ST32(R(5)+4,R(4));
  R(3)=LD32(R(5)+8);
  R(3)+=0x1u;
  ST32(R(5)+8,R(3));
  R(5)=0xffffffffu;
  ST32(R(4)+8,R(5));
  ST32(R(4)+12,R(5));
  ST32(R(4),R(7));
  ST32(R(4)+4,R(7));
  ST32(R(4)+16,R(2));
  R(3)=LD32(R(14));
  ST32(R(4)+20,R(3));
  R(2)=LD32(R(6));
  ST32(R(4)+24,R(2));
  R(1)=LD32(R(6));
  R(3)=LD32(R(15));
  R(1)+=R(3);
  R(3)=0x2000u;
  R(2)=R(1);
  R(2)+=R(3);
  ST32(R(6),R(2));
  R(2)=0x0u;
  R(1)=LD32(R(15));
  ST32(R(4)+28,R(1));
  R(1)=R(2);
  ST32(R(4)+40,R(2));
  ST32(R(4)+44,R(2));
  ST32(R(4)+32,R(5));
  ST32(R(4)+36,R(5));
  R(0)=R(7);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c097c80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c2e2cacu;
  R(2)=0x8c063d46u;
  R(14)=LD32(R(3));
  R(11)=R(14);
  R(11)+=0x1u;
  R(11)<<=2;
  R(11)<<=2;
  c->t=R(11)>>31;R(11)<<=1;
  R(5)=R(11);
  { c->pr=0x8c097ca4u; R(4)=0x2u; f_8c063d46(c); }
  R(3)=0x544c4d53u;
  R(13)=R(0);
  R(2)=0x101u;
  R(4)=R(13);
  ST32(R(13),R(3));
  R(6)=0x14u;
  R(5)=0xffffu;
  R(12)=R(0);
  R(3)=0x8c0686b8u;
  ST32(R(13)+4,R(2));
  ST32(R(13)+8,R(14));
  { c->pr=0x8c097cbeu; R(4)+=0xcu; f_8c0686b8(c); }
  R(2)=0x8c2e2ca4u;
  R(10)=0x8c0685b4u;
  R(14)=LD32(R(2));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c097cda;
L8c097cc8:;
  R(5)=R(14);
  R(5)+=0x10u;
  R(13)+=0x20u;
  R(6)=0x20u;
  { uint32_t tg=R(10); c->pr=0x8c097cd4u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=LD32(R(14)+48);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c097cc8;
L8c097cda:;
  R(3)=0x8c0e2910u;
  { c->pr=0x8c097ce0u; R(4)=R(15); f_8c0e2910(c); }
  R(14)=0x8c0633e0u;
  R(4)=R(0);
  R(13)=0x8c0bcff8u;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c097cf0;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c097cf0u; R(4)=0x1du; sh4_call(c,tg); }
L8c097cf0:;
  R(2)=0x8c0e2af4u;
  R(3)=0x0u;
  R(5)=R(12);
  R(6)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0xffffffffu;
  { c->pr=0x8c097d00u; R(4)=LD32(R(15)+4); f_8c0e2af4(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c097d0e; }
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c097d0eu; R(4)=0x1du; sh4_call(c,tg); }
L8c097d0e:;
  R(3)=0x8c0efcb0u;
  { c->pr=0x8c097d14u; R(4)=LD32(R(15)); f_8c0efcb0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c097d20;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c097d20u; R(4)=0x1du; sh4_call(c,tg); }
L8c097d20:;
  R(3)=0x8c0e2990u;
  { c->pr=0x8c097d26u; R(4)=LD32(R(15)); f_8c0e2990(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c097d32;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c097d32u; R(4)=0x1du; sh4_call(c,tg); }
L8c097d32:;
  R(3)=0x8c064160u;
  R(5)=R(12);
  { c->pr=0x8c097d3au; R(4)=0x2u; f_8c064160(c); }
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c097da4(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c097da8(SH4Ctx *c) {
  { R(0)=0x2u; return; }
}
void f_8c097dac(SH4Ctx *c) {
  {  return; }
}
void f_8c097db0(SH4Ctx *c) {
  {  return; }
}
void f_8c097db4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c9378u;
  ST32(R(15),R(5));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c097df0;
  R(4)=LD32(R(15));
  R(3)=0x8c0ab46cu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+4);
  { c->pr=0x8c097dd0u; R(4)=R(0); f_8c0ab46c(c); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(3)=0x8c0ab456u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+5);
  { c->pr=0x8c097ddcu; R(4)=R(0); f_8c0ab456(c); }
  R(2)=0x8c0eff7cu;
  R(5)=R(0);
  R(13)=R(0);
  R(5)+=0xffffff80u;
  { c->pr=0x8c097de8u; R(4)=R(0); f_8c0eff7c(c); }
  R(3)=0x8c0f0044u;
  R(5)=R(14);
  { c->pr=0x8c097df0u; R(4)=R(14); f_8c0f0044(c); }
L8c097df0:;
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c097dfc(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097e00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  R(13)=LD32(R(15)+24);
  ST32(R(15)+4,R(13));
  R(0)=(int32_t)(int16_t)LD16(R(13)+20);
  R(13)=R(0);
  R(0)=LD32(R(15)+4);
  R(0)=LD32(R(0)+32);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c097e20;
  { R(14)=0xffffffffu; goto L8c097e24; }
L8c097e20:;
  R(14)=LD32(R(15)+4);
  R(14)=LD32(R(14)+32);
L8c097e24:;
  R(4)=LD32(R(15));
  R(3)=0x8c0ab456u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+5);
  { c->pr=0x8c097e2eu; R(4)=R(0); f_8c0ab456(c); }
  R(2)=0x8c0eff7cu;
  R(5)=R(0);
  R(12)=R(0);
  R(5)+=0xffffff80u;
  { c->pr=0x8c097e3au; R(4)=R(0); f_8c0eff7c(c); }
  R(4)=LD32(R(15));
  R(3)=0x8c0ab46cu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+4);
  { c->pr=0x8c097e44u; R(4)=R(0); f_8c0ab46c(c); }
  R(2)=0x8c0f0044u;
  R(5)=R(0);
  R(12)=R(0);
  { c->pr=0x8c097e4eu; R(4)=R(0); f_8c0f0044(c); }
  R(3)=0x8c0cf0a0u;
  R(5)=R(13);
  R(6)=R(14);
  { c->pr=0x8c097e58u; R(4)=R(13); f_8c0cf0a0(c); }
  R(3)=0x8c0c9378u;
  R(2)=0x0u;
  R(0)=0x1u;
  ST32(R(3),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c097e6c(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c097e70(SH4Ctx *c) {
  R(3)=0x8c0cf0d0u;
  {  { f_8c0cf0d0(c); return; } }
}
void f_8c097ea0(SH4Ctx *c) {
  {  return; }
}
void f_8c097ea4(SH4Ctx *c) {
  R(3)=0x8c0c9378u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c097ebc;
  R(2)=0x8c0f0044u;
  R(5)=0x0u;
  { c->pr=0x8c097eb6u; R(4)=R(5); f_8c0f0044(c); }
  R(2)=0x8c0c9378u;
  R(3)=0x1u;
  ST32(R(2),R(3));
L8c097ebc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c097ec2(SH4Ctx *c) {
  R(4)=0x8c0c9378u;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c097ece;
  R(2)=0x0u;
  ST32(R(4),R(2));
L8c097ece:;
  {  return; }
}
void f_8c097ed6(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097eda(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c097ede(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097ee2(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(0)=0x14u;
  R(6)=0x1u;
  ST32(R(5),R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+4,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(5)+8,R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(5)+12,R(0));
  ST32(R(5)+16,R(6));
  R(3)=LD32(R(4)+28);
  ST32(R(5)+24,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(4)+24);
  ST16(R(5)+20,R(0));
  R(3)=LD32(R(4)+32);
  ST32(R(5)+28,R(3));
  R(2)=LD32(R(4)+48);
  ST32(R(5)+44,R(2));
  R(3)=LD32(R(4)+52);
  ST32(R(5)+48,R(3));
  R(2)=LD32(R(4)+40);
  ST32(R(5)+36,R(2));
  R(3)=LD32(R(4)+44);
  ST32(R(5)+40,R(3));
  R(2)=LD32(R(4)+36);
  ST32(R(5)+32,R(2));
  { R(0)=R(6); return; }
}
void f_8c097f1c(SH4Ctx *c) {
  {  return; }
}
void f_8c097f20(SH4Ctx *c) {
  {  return; }
}
void f_8c097f24(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c097f28(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c097f2c(SH4Ctx *c) {
  {  return; }
}
void f_8c097f60(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097f64(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c097f6c;
  { R(0)=0x0u; return; }
L8c097f6c:;
  R(0)=R(5);
  ST8(R(4)+12,R(0));
  R(0)=0x1u;
  {  return; }
}
void f_8c097f80(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097f84(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097f88(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097f8c(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097f90(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097f94(SH4Ctx *c) {
  { R(0)=0x2u; return; }
}
void f_8c097f98(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c097f9c(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c097fa0(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c097fa4(SH4Ctx *c) {
  {  return; }
}
void f_8c097fa8(SH4Ctx *c) {
  {  return; }
}
void f_8c097fac(SH4Ctx *c) {
  {  return; }
}
void f_8c097fb0(SH4Ctx *c) {
  {  return; }
}
void f_8c097fb4(SH4Ctx *c) {
  {  return; }
}
void f_8c097fb8(SH4Ctx *c) {
  {  return; }
}
void f_8c097fbc(SH4Ctx *c) {
  {  return; }
}
void f_8c097fc0(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c097fc4(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c097fc8(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097fcc(SH4Ctx *c) {
  {  return; }
}
void f_8c097fd0(SH4Ctx *c) {
  {  return; }
}
void f_8c097fd4(SH4Ctx *c) {
  {  return; }
}
void f_8c097fd8(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c097fdc(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097fe0(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c097fe4(SH4Ctx *c) {
  {  return; }
}
void f_8c098000(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(13)=LD32(R(14)+4);
  R(3)=0x4000u;
  ST32(R(15),R(13));
  R(13)=0u-R(13);
  R(6)=LD32(R(14)+16);
  R(13)+=R(3);
  R(2)=LD32(R(15));
  R(5)=R(13);
  R(1)=0x8c2d4990u;
  R(3)=0x8c080b96u;
  R(6)+=R(2);
  { c->pr=0x8c098024u; R(4)=LD32(R(1)); f_8c080b96(c); }
  R(2)=0x8c2d4974u;
  R(3)=LD32(R(2));
  R(3)-=R(13);
  ST32(R(2),R(3));
  R(3)=0x4u;
  R(2)=0x4000u;
  ST32(R(14)+4,R(2));
  ST32(R(14),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09803e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c2d4968u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(13)+12);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c098078; }
  R(0)=0x44u;
  R(2)=LD32(R(13)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09806a;
  R(3)=0x3u;
  ST32(R(14)+4,R(12));
  R(2)=0xffffffffu;
  ST32(R(14),R(3));
  ST32(R(14)+12,R(12));
  { ST32(R(14)+8,R(2)); goto L8c0980e8; }
L8c09806a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0980f4(c); return; } }
L8c098078:;
  R(11)=0x4000u;
  c->t=R(4)>R(11);
  if(!c->t) goto L8c0980c0;
  R(2)=0x4u;
  ST32(R(14)+4,R(11));
  { ST32(R(14),R(2)); goto L8c0980d0; }
L8c0980c0:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  ST32(R(14)+4,R(4));
  R(6)=R(11);
  { c->pr=0x8c0980ccu; R(4)=LD32(R(14)+16); f_8c0686b8(c); }
  R(3)=0x1u;
  ST32(R(14),R(3));
L8c0980d0:;
  R(2)=LD32(R(13)+12);
  R(3)=LD32(R(14)+4);
  R(2)-=R(3);
  R(3)=0x8c080b96u;
  ST32(R(13)+12,R(2));
  R(5)=LD32(R(14)+4);
  R(6)=LD32(R(14)+16);
  { c->pr=0x8c0980e2u; R(4)=LD32(R(13)+40); f_8c080b96(c); }
  R(2)=0xffffffffu;
  ST32(R(14)+8,R(2));
  ST32(R(14)+12,R(12));
L8c0980e8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0980f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c0c93fcu;
  R(3)=0x1u;
  R(14)=0x8c2d4968u;
  ST32(R(15),R(4));
  ST32(R(2),R(3));
  R(3)=0x8c080b60u;
  { c->pr=0x8c09810au; R(4)=LD32(R(14)+40); f_8c080b60(c); }
  R(0)=0x44u;
  R(3)=0x8c080920u;
  R(2)=LD32(R(14)+R(0));
  R(4)=R(2);
  ST32(R(15)+4,R(2));
  { c->pr=0x8c098118u; R(4)=LD32(R(4)+48); f_8c080920(c); }
  R(2)=R(0);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(14)+40,R(0)); if(k) goto L8c09812e; }
  R(3)=LD32(R(15));
  R(2)=0x5u;
  ST32(R(3),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c09812e:;
  R(3)=0x8c2e2cccu;
  R(5)=0x64u;
  R(2)=0x8c080b96u;
  R(6)=LD32(R(3));
  { c->pr=0x8c09813au; R(4)=LD32(R(14)+40); f_8c080b96(c); }
  R(4)=R(14);
  R(4)+=0x58u;
  R(3)=LD32(R(15));
  R(2)=0x2u;
  ST32(R(3),R(2));
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c09814e;
  R(2)=0x1u;
  ST32(R(4)+4,R(2));
L8c09814e:;
  R(1)=0x8c0c93fcu;
  R(3)=0x0u;
  ST32(R(1),R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09815c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0807c0u;
  { c->pr=0x8c09816eu; R(14)=R(4); f_8c0807c0(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098176;
  {  goto L8c0982e2; }
L8c098176:;
  R(0)=LD32(R(14));
  R(12)=0x5u;
  R(13)=0x8c2d4968u;
  R(11)=0x8c080a20u;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=!c->t; R(4)=LD32(R(13)+40); if(k) goto L8c098188; }
  {  goto L8c0982e2; }
L8c098188:;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0981ac;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09823e;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c098198;
  {  goto L8c0982ca; }
L8c098198:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0981a0;
  {  goto L8c0982e2; }
L8c0981a0:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0981a8;
  {  goto L8c0982e2; }
L8c0981a8:;
  {  goto L8c0982e2; }
L8c0981ac:;
  { uint32_t tg=R(11); c->pr=0x8c0981b0u;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c098220; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0981c0;
  {  goto L8c0982e2; }
L8c0981c0:;
  { ST32(R(14),R(12)); goto L8c0982e2; }
L8c098220:;
  R(2)=LD32(R(14)+4);
  R(3)=0x4000u;
  c->t=R(2)==R(3);
  if(c->t) goto L8c098230;
  R(1)=0x8c2d49acu;
  R(0)=LD32(R(1));
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c098236;
L8c098230:;
  R(0)=0x3u;
  { ST32(R(14),R(0)); goto L8c0982e2; }
L8c098236:;
  { c->pr=0x8c09823au; R(4)=R(14); f_8c0980f4(c); }
  {  goto L8c0982e2; }
L8c09823e:;
  { uint32_t tg=R(11); c->pr=0x8c098242u;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c098280; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0982e2;
  { ST32(R(14),R(12)); goto L8c0982e2; }
L8c098280:;
  R(0)=0x44u;
  R(4)=R(13);
  R(3)=LD32(R(13)+R(0));
  ST32(R(15)+4,R(3));
  R(2)=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2e2cccu;
  R(2)=0x8c0630a0u;
  R(5)=LD32(R(3));
  { c->pr=0x8c098296u; R(4)+=0xcu; f_8c0630a0(c); }
  R(15)+=0x4u;
  R(3)=LD32(R(14)+4);
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+16);
  R(3)=0x8c081040u;
  R(2)=0u-R(2);
  R(2)+=0x64u;
  R(5)=R(2);
  ST32(R(15),R(2));
  { c->pr=0x8c0982acu; R(4)=LD32(R(13)+40); f_8c081040(c); }
  R(0)=0x44u;
  R(2)=0x0u;
  ST32(R(13)+R(0),R(2));
  R(0)=0x6cu;
  R(3)=LD32(R(13)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0982c2;
  R(3)=LD32(R(13)+R(0));
  R(0)=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c0982c2u; R(4)=LD32(R(13)+R(0)); sh4_call(c,tg); }
L8c0982c2:;
  { c->pr=0x8c0982c6u; R(4)=R(14); f_8c098000(c); }
  {  goto L8c0982e2; }
L8c0982ca:;
  { uint32_t tg=R(11); c->pr=0x8c0982ceu;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0982de; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0982e2;
  { ST32(R(14),R(12)); goto L8c0982e2; }
L8c0982de:;
  R(2)=0x3u;
  ST32(R(14),R(2));
L8c0982e2:;
  R(0)=LD32(R(14));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0982f2(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(5)+14);
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c098302;
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c098340;
  {  goto L8c0983d8; }
L8c098302:;
  R(3)=0x2u;
  { ST32(R(4)+16,R(3)); goto L8c098344; }
L8c098340:;
  R(1)=0x1u;
  ST32(R(4)+16,R(1));
L8c098344:;
  R(1)=0x2b11u;
  R(0)=LD32(R(5)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c098374;
  R(1)=0x3e80u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c09837a;
  R(1)=0x49d4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c098380;
  R(1)=0x5622u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0983c0;
  R(1)=0x5dc0u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0983c6;
  R(1)=0x7d00u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0983cc;
  R(1)=0xac44u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0983d2;
  {  goto L8c0983d8; }
L8c098374:;
  R(3)=0x7000u;
  { ST32(R(4)+20,R(3)); goto L8c0983dc; }
L8c09837a:;
  R(1)=0x71cdu;
  {  goto L8c0983ce; }
L8c098380:;
  R(2)=0x72dbu;
  {  goto L8c0983d4; }
L8c0983c0:;
  R(1)=0x7800u;
  {  goto L8c0983ce; }
L8c0983c6:;
  R(2)=0x785au;
  {  goto L8c0983d4; }
L8c0983cc:;
  R(1)=0x79cdu;
L8c0983ce:;
  { ST32(R(4)+20,R(1)); goto L8c0983dc; }
L8c0983d2:;
  R(2)=0x0u;
L8c0983d4:;
  { ST32(R(4)+20,R(2)); goto L8c0983dc; }
L8c0983d8:;
  { R(0)=0x0u; return; }
L8c0983dc:;
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(0)=R(0)&0xFFFF;
  ST32(R(4)+12,R(0));
  {  return; }
}
void f_8c098400(SH4Ctx *c) {
  R(8)+=0x0u;
  R(8)+=0x5au;
  R(9)+=0xffffffcdu;
  
  
  
  
  
  
  
  
  
  
  
  
  
  { f_8c098420(c); return; }
}
void f_8c098420(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(11)=R(5);
  c->t=(R(11)&R(11))==0;
  { uint32_t k=c->t; R(12)=R(4); if(k) goto L8c0984ca; }
  R(13)=0x8c0685b4u;
  R(10)=0x4u;
  R(14)=R(11);
L8c09843c:;
  R(4)=R(15);
  R(5)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c098446u; R(4)+=0x4u; sh4_call(c,tg); }
  R(1)=0x46464952u;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c098464;
  R(1)=0x45564157u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c098468;
  R(1)=0x20746d66u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c09846c;
  R(1)=0x61746164u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0984b0;
  {  goto L8c0984ca; }
L8c098464:;
  { R(14)+=0x8u; goto L8c09843c; }
L8c098468:;
  { R(14)+=0x4u; goto L8c09843c; }
L8c09846c:;
  R(14)+=0x4u;
  R(5)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c098476u; R(4)=R(15); sh4_call(c,tg); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c098480;
  { R(0)&=0x3u; goto L8c09848a; }
L8c098480:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0x3u;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c09848a:;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09849c;
  R(3)=0x8c067940u;
  R(1)=LD32(R(15));
  { c->pr=0x8c098496u; R(0)=R(10); f_8c067940(c); }
  R(0)+=0x1u;
  R(0)<<=2;
  ST32(R(15),R(0));
L8c09849c:;
  R(3)=LD32(R(15));
  R(14)+=0x4u;
  R(5)=R(14);
  R(14)+=R(3);
  { c->pr=0x8c0984a8u; R(4)=R(12); f_8c0982f2(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09843c;
  {  goto L8c0984ca; }
L8c0984b0:;
  R(14)+=0x4u;
  R(5)=R(14);
  R(6)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c0984bau; R(4)=R(15); sh4_call(c,tg); }
  R(14)+=0x4u;
  R(2)=LD32(R(15));
  R(4)=R(14);
  R(4)-=R(11);
  ST32(R(12),R(2));
  ST32(R(12)+4,R(4));
  { R(0)=0x1u; goto L8c0984cc; }
L8c0984ca:;
  R(0)=0x0u;
L8c0984cc:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09850a(SH4Ctx *c) {
  R(3)=0x8c0c9458u;
  R(5)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c945cu;
  R(1)=0x8c0c9460u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(3));
  R(7)=LD32(R(2));
  R(3)=R(6);
  R(14)=LD32(R(1));
  R(3)+=R(7);
  c->t=R(3)==R(14);
  { uint32_t k=c->t; R(4)=0x1u; if(k) goto L8c098530; }
  R(5)=R(4);
L8c098530:;
  R(12)=0x8u;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  { uint32_t k=!c->t; R(2)=0x38u; if(k) goto L8c09853a; }
  R(5)=R(4);
L8c09853a:;
  c->t=(int32_t)R(7)>(int32_t)R(2);
  { uint32_t k=!c->t; R(2)=0x3cu; if(k) goto L8c098542; }
  R(5)=R(4);
L8c098542:;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c098548;
  R(5)=R(4);
L8c098548:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c09854e;
  R(5)=R(4);
L8c09854e:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c098554;
  R(5)=R(4);
L8c098554:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c09855a;
  R(5)=R(4);
L8c09855a:;
  R(0)=R(5);
  R(7)=0x8c0c9478u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c09856a; }
  R(2)=LD32(R(7));
  R(2)+=0x1u;
  ST32(R(7),R(2));
L8c09856a:;
  R(14)=0x8c2e6cd8u;
  R(13)=0x8c2e2cd8u;
L8c09856e:;
  R(9)=R(6);
  R(9)<<=8;
  R(9)+=R(13);
  R(0)=0xf8u;
  R(10)=LD32(R(9)+4);
  c->t=(R(10)&R(10))==0;
  { uint32_t k=c->t; R(11)=LD32(R(9)+R(0)); if(k) goto L8c098584; }
  R(0)=R(10);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0985c0;
L8c098584:;
  R(10)=R(11);
  R(10)<<=2;
  R(10)<<=2;
  R(10)+=R(14);
  R(3)=LD32(R(10)+4);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c0985ce;
  R(0)=LD32(R(10));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0985ce;
  { R(5)=R(4); goto L8c0985ce; }
L8c0985c0:;
  R(11)<<=2;
  R(11)<<=2;
  R(11)+=R(14);
  R(3)=LD32(R(11)+4);
  c->t=R(3)==R(6);
  if(c->t) goto L8c0985ce;
  R(5)=R(4);
L8c0985ce:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c0985dc; }
  R(2)=LD32(R(7));
  R(2)+=0x1u;
  ST32(R(7),R(2));
L8c0985dc:;
  R(1)=R(6);
  R(0)=0xf8u;
  R(1)<<=8;
  R(1)+=R(13);
  R(9)=LD32(R(1)+R(0));
  R(10)=LD32(R(1)+4);
  R(11)=R(9);
  R(11)<<=2;
  c->t=(R(10)&R(10))==0;
  R(11)<<=2;
  { uint32_t k=c->t; R(11)+=R(14); if(k) goto L8c0985fa; }
  R(0)=R(10);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c09860a;
L8c0985fa:;
  R(3)=LD32(R(11)+4);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c098612;
  R(0)=LD32(R(11));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098612;
  { R(5)=R(4); goto L8c098612; }
L8c09860a:;
  R(3)=LD32(R(11)+4);
  c->t=R(3)==R(6);
  if(c->t) goto L8c098612;
  R(5)=R(4);
L8c098612:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c098620; }
  R(2)=LD32(R(7));
  R(2)+=0x1u;
  ST32(R(7),R(2));
L8c098620:;
  R(1)=R(6);
  R(0)=0xf8u;
  R(1)<<=8;
  R(1)+=R(13);
  R(9)=LD32(R(1)+R(0));
  R(10)=LD32(R(1)+4);
  R(11)=R(9);
  R(11)<<=2;
  c->t=(R(10)&R(10))==0;
  R(11)<<=2;
  { uint32_t k=c->t; R(11)+=R(14); if(k) goto L8c09863e; }
  R(0)=R(10);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c098680;
L8c09863e:;
  R(3)=LD32(R(11)+4);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c098688;
  R(0)=LD32(R(11));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098688;
  { R(5)=R(4); goto L8c098688; }
L8c098680:;
  R(3)=LD32(R(11)+4);
  c->t=R(3)==R(6);
  if(c->t) goto L8c098688;
  R(5)=R(4);
L8c098688:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c098696; }
  R(2)=LD32(R(7));
  R(2)+=0x1u;
  ST32(R(7),R(2));
L8c098696:;
  R(9)=R(6);
  R(0)=0xf8u;
  R(9)<<=8;
  R(9)+=R(13);
  R(10)=LD32(R(9)+R(0));
  R(1)=LD32(R(9)+4);
  R(11)=R(10);
  R(11)<<=2;
  c->t=(R(1)&R(1))==0;
  R(11)<<=2;
  { uint32_t k=c->t; R(11)+=R(14); if(k) goto L8c0986b4; }
  R(0)=R(1);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0986c4;
L8c0986b4:;
  R(3)=LD32(R(11)+4);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c0986cc;
  R(0)=LD32(R(11));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0986cc;
  { R(5)=R(4); goto L8c0986cc; }
L8c0986c4:;
  R(3)=LD32(R(11)+4);
  c->t=R(3)==R(6);
  if(c->t) goto L8c0986cc;
  R(5)=R(4);
L8c0986cc:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c0986da; }
  R(2)=LD32(R(7));
  R(2)+=0x1u;
  ST32(R(7),R(2));
L8c0986da:;
  c->t=(int32_t)R(6)>=(int32_t)R(12);
  if(c->t) goto L8c0986e2;
  {  goto L8c09856e; }
L8c0986e2:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0986ee;
  R(3)=LD32(R(7));
  R(3)+=0x1u;
  ST32(R(7),R(3));
L8c0986ee:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0986fc(SH4Ctx *c) {
  R(6)=R(4);
  R(6)<<=2;
  R(3)=0x8c2e6cd8u;
  R(6)<<=2;
  R(5)=0x0u;
  R(6)+=R(3);
  ST32(R(6),R(5));
  { ST32(R(6)+12,R(5)); return; }
}
void f_8c098740(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=0xau;
  R(14)=0x3c0u;
  R(7)=0x8c2e6cd8u;
  R(14)+=R(7);
  R(5)=R(7);
  R(6)=R(7);
  R(4)=R(7);
  { R(7)=0x0u; goto L8c09876e; }
L8c098754:;
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c098768;
  R(2)=LD32(R(4)+12);
  R(2)+=0x1u;
  R(3)=R(2);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  ST32(R(4)+12,R(2));
  if(!c->t) goto L8c098768;
  ST32(R(6),R(7));
L8c098768:;
  R(5)+=0x10u;
  R(4)+=0x10u;
  R(6)+=0x10u;
L8c09876e:;
  c->t=R(5)>=R(14);
  if(!c->t) goto L8c098754;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c098776(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffefcu;
  R(15)+=R(0);
  R(3)=0x8c0635d0u;
  { c->pr=0x8c09878eu;  f_8c0635d0(c); }
  R(2)=0x8c09c4d4u;
  R(1)=R(0);
  R(0)=R(15);
  { c->pr=0x8c098798u; R(0)+=0x4u; f_8c09c4d4(c); }
  R(3)=0x8c0c9450u;
  R(4)=R(15);
  R(2)=0x8c09d1a0u;
  R(5)=LD32(R(3));
  { c->pr=0x8c0987a4u; R(4)+=0x4u; f_8c09d1a0(c); }
  R(3)=0x8c0639a0u;
  R(4)=R(15);
  { c->pr=0x8c0987acu; R(4)+=0x4u; f_8c0639a0(c); }
  R(11)=0x8c0633e0u;
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0987e0;
  R(5)=R(15);
  R(5)+=0x4u;
  { R(4)=0xau; goto L8c09892a; }
L8c0987e0:;
  R(3)=0x8c063978u;
  { c->pr=0x8c0987e6u; R(4)=R(12); f_8c063978(c); }
  R(2)=0x8c063d46u;
  R(5)=R(0);
  R(9)=R(0);
  { c->pr=0x8c0987f0u; R(4)=0x1u; f_8c063d46(c); }
  R(3)=0x8c0639a8u;
  R(5)=R(9);
  R(10)=R(0);
  R(6)=R(0);
  { c->pr=0x8c0987fcu; R(4)=R(12); f_8c0639a8(c); }
  R(2)=0x8c0f0a48u;
  R(6)=0x0u;
  R(13)=0x8c2e7098u;
  R(5)=R(6);
  { c->pr=0x8c098808u; R(4)=R(6); f_8c0f0a48(c); }
  R(3)=R(0);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(13),R(0)); if(k) goto L8c098816; }
  R(5)=0x8c0bd028u;
  { R(4)=0x4u; goto L8c09892a; }
L8c098816:;
  R(3)=0x8c0e2910u;
  { c->pr=0x8c09881cu; R(4)=R(15); f_8c0e2910(c); }
  R(3)=0x8c0e2af4u;
  R(14)=0x0u;
  R(5)=R(10);
  R(6)=R(9);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0xffffffffu;
  { c->pr=0x8c09882cu; R(4)=LD32(R(15)+4); f_8c0e2af4(c); }
  R(15)+=0x4u;
  R(3)=0x8c0f0948u;
  { c->pr=0x8c098834u; R(4)=LD32(R(15)); f_8c0f0948(c); }
  R(2)=R(0);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(13),R(0)); if(k) goto L8c0988a0; }
  R(5)=0x8c0bd03cu;
  { R(4)=0x4u; goto L8c09892a; }
L8c0988a0:;
  R(3)=0x8c0e2990u;
  { c->pr=0x8c0988a6u; R(4)=LD32(R(15)); f_8c0e2990(c); }
  R(2)=0x8c064160u;
  R(5)=R(10);
  { c->pr=0x8c0988aeu; R(4)=0x1u; f_8c064160(c); }
  R(3)=0x8c0639c6u;
  { c->pr=0x8c0988b4u; R(4)=R(12); f_8c0639c6(c); }
  R(2)=0x8c099b52u;
  { c->pr=0x8c0988bau;  f_8c099b52(c); }
  R(5)=0x3c0u;
  R(6)=0x8c2e6cd8u;
  R(5)+=R(6);
  R(4)=R(6);
  c->t=R(4)>=R(5);
  if(c->t) goto L8c0988d6;
L8c0988c6:;
  ST32(R(4),R(14));
  R(4)+=0x10u;
  ST32(R(4),R(14));
  R(4)+=0x10u;
  ST32(R(4),R(14));
  R(4)+=0x10u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0988c6;
L8c0988d6:;
  R(6)=0x8c2e2cd8u;
  R(4)=R(14);
  R(5)=0x100u;
  R(7)=0x8c2e34d8u;
  R(12)=0x3800u;
L8c0988e0:;
  R(0)=0xf4u;
  R(2)=R(4);
  R(3)=R(4);
  R(2)+=R(6);
  R(3)+=R(7);
  R(4)+=R(5);
  ST32(R(3)+4,R(14));
  ST32(R(2)+R(0),R(14));
  R(2)=R(4);
  R(3)=R(4);
  R(4)+=R(5);
  R(3)+=R(7);
  c->t=R(4)>=R(12);
  ST32(R(3)+4,R(14));
  R(2)+=R(6);
  { uint32_t k=!c->t; ST32(R(2)+R(0),R(14)); if(k) goto L8c0988e0; }
  R(2)=0x8c0efb60u;
  { c->pr=0x8c098908u; R(4)=0xfu; f_8c0efb60(c); }
  R(3)=0x8c0c948cu;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c098916;
  R(4)=0x4f525453u;
  {  goto L8c098918; }
L8c098916:;
  R(4)=0x4f4e4f4du;
L8c098918:;
  R(3)=0x8c0efbbcu;
  { c->pr=0x8c09891eu;  f_8c0efbbc(c); }
  R(2)=R(0);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(13),R(0)); if(k) goto L8c098980; }
  R(5)=0x8c0bd03cu;
  R(4)=0x1du;
L8c09892a:;
  { uint32_t tg=R(11); c->pr=0x8c09892eu;  sh4_call(c,tg); }
  { R(0)=0x2u; goto L8c098988; }
L8c098980:;
  R(2)=0x8c0c9480u;
  R(3)=0x1u;
  R(0)=0x3u;
  ST32(R(2),R(3));
L8c098988:;
  R(1)=0x104u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09899c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c099bc0u;
  { c->pr=0x8c0989a4u;  f_8c099bc0(c); }
  R(2)=0x8c0cd060u;
  { c->pr=0x8c0989aau;  f_8c0cd060(c); }
  R(3)=0x8c0cd1dcu;
  { c->pr=0x8c0989b0u;  f_8c0cd1dc(c); }
  R(2)=0x8c0cd0d8u;
  { c->pr=0x8c0989b6u;  f_8c0cd0d8(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0c9480u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c0989c0(SH4Ctx *c) {
  R(6)=0x8c2e6cd8u;
  R(5)=0x3cu;
  R(4)=0x0u;
L8c0989c6:;
  R(3)=R(4);
  R(3)<<=2;
  R(3)<<=2;
  R(3)+=R(6);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0989d8;
  { R(0)=R(4); return; }
L8c0989d8:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0989c6;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c098a20(SH4Ctx *c) {
  R(6)=0x8c2e34d8u;
  R(5)=0x38u;
  R(4)=0x0u;
L8c098a26:;
  R(3)=R(4);
  R(3)<<=8;
  R(3)+=R(6);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c098a36;
  { R(0)=R(4); return; }
L8c098a36:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c098a26;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c098a42(SH4Ctx *c) {
  R(5)=0x0u;
  R(7)=0x8c2e2cd8u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(4)=R(5);
L8c098a4e:;
  R(3)=R(4);
  R(3)<<=8;
  R(3)+=R(7);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c098a5e;
  { R(0)=R(4); goto L8c098ac2; }
L8c098a5e:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c098a4e;
  R(2)=0x8c0bd020u;
  R(14)=0xffffffffu;
  R(13)=LD32(R(2));
  R(13)+=0x1u;
  { R(4)=R(5); goto L8c098aba; }
L8c098aa0:;
  R(5)=R(4);
  R(5)<<=8;
  R(5)+=R(7);
  R(0)=LD32(R(5)+4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c098ab8;
  R(0)=0xf4u;
  R(3)=LD32(R(5)+R(0));
  c->t=(int32_t)R(3)>=(int32_t)R(13);
  if(c->t) goto L8c098ab8;
  R(13)=LD32(R(5)+R(0));
  R(14)=R(4);
L8c098ab8:;
  R(4)+=0x1u;
L8c098aba:;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c098aa0;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
L8c098ac2:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c098ac8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=0x8c2e2cd8u;
  R(6)=R(12);
L8c098ad8:;
  R(3)=R(6);
  R(3)<<=8;
  R(3)+=R(5);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c098ae8;
  { R(0)=R(6); goto L8c098b88; }
L8c098ae8:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  if(!c->t) goto L8c098ad8;
  R(2)=0x8c0bd020u;
  R(14)=0xffffffffu;
  R(13)=LD32(R(2));
  R(13)+=0x1u;
  { R(6)=R(12); goto L8c098b46; }
L8c098b20:;
  R(0)=R(6);
  R(0)<<=8;
  R(0)+=R(5);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c098b44;
  R(3)=R(6);
  R(0)=0xf4u;
  R(3)<<=8;
  R(3)+=R(5);
  R(2)=LD32(R(3)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(13);
  if(c->t) goto L8c098b44;
  R(13)=R(6);
  R(13)<<=8;
  R(13)+=R(5);
  R(14)=R(6);
  R(13)=LD32(R(13)+R(0));
L8c098b44:;
  R(6)+=0x1u;
L8c098b46:;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  if(!c->t) goto L8c098b20;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c098b86;
  R(14)=0xffffffffu;
  R(6)=R(4);
  { R(4)=R(12); goto L8c098b72; }
L8c098b58:;
  R(13)=R(4);
  R(13)<<=8;
  R(0)=0xe4u;
  R(2)=R(13);
  R(2)+=R(5);
  R(3)=LD32(R(2)+R(0));
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  if(c->t) goto L8c098b70;
  R(6)=R(13);
  R(6)+=R(5);
  R(6)=LD32(R(6)+R(0));
  R(14)=R(4);
L8c098b70:;
  R(4)+=0x1u;
L8c098b72:;
  c->t=(int32_t)R(4)>=(int32_t)R(7);
  if(!c->t) goto L8c098b58;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c098b86;
  R(3)=0x8c099d66u;
  R(4)=R(14);
  R(4)<<=8;
  { c->pr=0x8c098b86u; R(4)+=R(5); f_8c099d66(c); }
L8c098b86:;
  R(0)=R(14);
L8c098b88:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c098b20(SH4Ctx *c) {
L8c098b20:;
  R(0)=R(6);
  R(0)<<=8;
  R(0)+=R(5);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c098b44;
  R(3)=R(6);
  R(0)=0xf4u;
  R(3)<<=8;
  R(3)+=R(5);
  R(2)=LD32(R(3)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(13);
  if(c->t) goto L8c098b44;
  R(13)=R(6);
  R(13)<<=8;
  R(13)+=R(5);
  R(14)=R(6);
  R(13)=LD32(R(13)+R(0));
L8c098b44:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  if(!c->t) goto L8c098b20;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c098b86;
  R(14)=0xffffffffu;
  R(6)=R(4);
  { R(4)=R(12); goto L8c098b72; }
L8c098b58:;
  R(13)=R(4);
  R(13)<<=8;
  R(0)=0xe4u;
  R(2)=R(13);
  R(2)+=R(5);
  R(3)=LD32(R(2)+R(0));
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  if(c->t) goto L8c098b70;
  R(6)=R(13);
  R(6)+=R(5);
  R(6)=LD32(R(6)+R(0));
  R(14)=R(4);
L8c098b70:;
  R(4)+=0x1u;
L8c098b72:;
  c->t=(int32_t)R(4)>=(int32_t)R(7);
  if(!c->t) goto L8c098b58;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c098b86;
  R(3)=0x8c099d66u;
  R(4)=R(14);
  R(4)<<=8;
  { c->pr=0x8c098b86u; R(4)+=R(5); f_8c099d66(c); }
L8c098b86:;
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c098bc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c2e2cd8u;
  R(14)=R(4);
  R(0)=0xe0u;
  R(14)<<=8;
  R(14)+=R(3);
  R(1)=0x10000u;
  R(4)=LD32(R(14)+R(0));
  R(0)=0x30u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(15)+12,R(0));
  R(0)=0x31u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(15)+4,R(0));
  R(2)=LD32(R(14)+16);
  c->t=R(2)==R(1);
  if(!c->t) goto L8c098bec;
  { R(13)=0x0u; goto L8c098bf4; }
L8c098bec:;
  R(2)=0x8c0ab394u;
  { c->pr=0x8c098bf2u; R(4)=LD32(R(14)+16); f_8c0ab394(c); }
  R(13)=R(0);
L8c098bf4:;
  R(3)=0x8c0ab440u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  { c->pr=0x8c098bfcu; R(4)=R(0); f_8c0ab440(c); }
  ST8(R(15)+8,R(0));
  R(3)=0x8c0ab380u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+9);
  { c->pr=0x8c098c06u; R(4)=R(0); f_8c0ab380(c); }
  R(3)=0x8c0f07d0u;
  R(5)=R(13);
  ST8(R(15),R(0));
  R(6)=0x0u;
  { c->pr=0x8c098c12u; R(4)=LD32(R(14)); f_8c0f07d0(c); }
  R(3)=0x8c0f0750u;
  R(6)=0x0u;
  R(5)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c098c1cu; R(4)=LD32(R(14)); f_8c0f0750(c); }
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(4)=LD32(R(14)); if(k) goto L8c098c2c; }
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(6)=0x0u;
  { R(5)=R(0); goto L8c098c30; }
L8c098c2c:;
  R(5)=0xffffff80u;
  R(6)=0x0u;
L8c098c30:;
  R(3)=0x8c0f0878u;
  { c->pr=0x8c098c36u;  f_8c0f0878(c); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(7)=0x0u;
  R(3)=0x8c0f06bcu;
  R(6)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(5)=R(0);
  { c->pr=0x8c098c46u; R(4)=LD32(R(14)); f_8c0f06bc(c); }
  R(2)=0x8c2e7098u;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(2),R(0)); if(k) goto L8c098cc0; }
  R(4)=0x8c0c9478u;
  R(3)=0x8c0f08e4u;
  R(1)=LD32(R(4));
  R(1)+=0x1u;
  ST32(R(4),R(1));
  { c->pr=0x8c098c5cu; R(4)=LD32(R(14)); f_8c0f08e4(c); }
  R(0)=0xf4u;
  R(4)=0x4u;
  ST32(R(14)+4,R(4));
  ST32(R(14)+R(0),R(4));
  { R(0)=0x0u; goto L8c098ccc; }
L8c098cc0:;
  R(0)=0xf4u;
  R(2)=0x0u;
  R(3)=0x2u;
  ST32(R(14)+4,R(3));
  ST32(R(14)+R(0),R(2));
  R(0)=0x1u;
L8c098ccc:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c098cd6(SH4Ctx *c) {
  R(7)=R(5);
  R(5)=LD32(R(4));
  R(6)=0x8c2e2cd8u;
  R(5)<<=8;
  R(4)=LD32(R(7));
  R(5)+=R(6);
  R(0)=LD32(R(5)+4);
  R(4)<<=8;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)+=R(6); if(k) goto L8c098d00; }
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c098d0a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c098d40;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c098d40;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c098d40;
  {  goto L8c098d4c; }
L8c098d00:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c098d74;
  { R(0)=0x0u; return; }
L8c098d0a:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c098d8a;
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c098d74;
  R(0)=0xf4u;
  { R(3)=LD32(R(4)+R(0)); goto L8c098d5a; }
L8c098d40:;
  R(6)=LD32(R(4)+4);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c098d8a;
  R(0)=R(6);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c098d8a;
L8c098d4c:;
  R(0)=0xe4u;
  R(2)=LD32(R(5)+R(0));
  R(3)=LD32(R(4)+R(0));
  c->t=R(2)==R(3);
  if(c->t) goto L8c098d60;
  R(3)=LD32(R(4)+R(0));
  R(0)=0xe4u;
L8c098d5a:;
  R(0)=LD32(R(5)+R(0));
  { R(0)-=R(3); return; }
L8c098d60:;
  R(0)=0xe0u;
  R(0)=LD32(R(5)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098d78;
  R(0)=0xe0u;
  R(2)=LD32(R(4)+R(0));
  R(3)=LD32(R(2)+44);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c098d78;
L8c098d74:;
  { R(0)=0xffffffffu; return; }
L8c098d78:;
  R(0)=0xe0u;
  R(3)=LD32(R(5)+R(0));
  R(2)=LD32(R(3)+44);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c098d8e;
  R(0)=LD32(R(4)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098d8e;
L8c098d8a:;
  { R(0)=0x1u; return; }
L8c098d8e:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(2)=R(3);
  R(0)=R(0)&0xFF;
  R(2)-=R(0);
  R(0)=R(2);
  {  return; }
}
void f_8c098d0a(SH4Ctx *c) {
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c098d8a;
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c098d74;
  R(0)=0xf4u;
  { R(3)=LD32(R(4)+R(0)); goto L8c098d5a; }
L8c098d5a:;
  R(0)=LD32(R(5)+R(0));
  { R(0)-=R(3); return; }
L8c098d74:;
  { R(0)=0xffffffffu; return; }
L8c098d8a:;
  { R(0)=0x1u; return; }
}
void f_8c098d40(SH4Ctx *c) {
  R(6)=LD32(R(4)+4);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c098d8a;
  R(0)=R(6);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c098d8a;
  R(0)=0xe4u;
  R(2)=LD32(R(5)+R(0));
  R(3)=LD32(R(4)+R(0));
  c->t=R(2)==R(3);
  if(c->t) goto L8c098d60;
  R(3)=LD32(R(4)+R(0));
  R(0)=0xe4u;
  R(0)=LD32(R(5)+R(0));
  { R(0)-=R(3); return; }
L8c098d60:;
  R(0)=0xe0u;
  R(0)=LD32(R(5)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098d78;
  R(0)=0xe0u;
  R(2)=LD32(R(4)+R(0));
  R(3)=LD32(R(2)+44);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c098d78;
  { R(0)=0xffffffffu; return; }
L8c098d78:;
  R(0)=0xe0u;
  R(3)=LD32(R(5)+R(0));
  R(2)=LD32(R(3)+44);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c098d8e;
  R(0)=LD32(R(4)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098d8e;
L8c098d8a:;
  { R(0)=0x1u; return; }
L8c098d8e:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(2)=R(3);
  R(0)=R(0)&0xFF;
  R(2)-=R(0);
  R(0)=R(2);
  {  return; }
}
void f_8c098d60(SH4Ctx *c) {
  R(0)=0xe0u;
  R(0)=LD32(R(5)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098d78;
  R(0)=0xe0u;
  R(2)=LD32(R(4)+R(0));
  R(3)=LD32(R(2)+44);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c098d78;
  { R(0)=0xffffffffu; return; }
L8c098d78:;
  R(0)=0xe0u;
  R(3)=LD32(R(5)+R(0));
  R(2)=LD32(R(3)+44);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c098d8e;
  R(0)=LD32(R(4)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098d8e;
  { R(0)=0x1u; return; }
L8c098d8e:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(2)=R(3);
  R(0)=R(0)&0xFF;
  R(2)-=R(0);
  R(0)=R(2);
  {  return; }
}
void f_8c098d78(SH4Ctx *c) {
  R(0)=0xe0u;
  R(3)=LD32(R(5)+R(0));
  R(2)=LD32(R(3)+44);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c098d8e;
  R(0)=LD32(R(4)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098d8e;
  { R(0)=0x1u; return; }
L8c098d8e:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(2)=R(3);
  R(0)=R(0)&0xFF;
  R(2)-=R(0);
  R(0)=R(2);
  {  return; }
}
void f_8c098d8e(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(2)=R(3);
  R(0)=R(0)&0xFF;
  R(2)-=R(0);
  R(0)=R(2);
  {  return; }
}
void f_8c098dc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(14)=R(15);
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(14)+=0x8u;
  R(4)=0x0u;
  R(5)=0x8u;
L8c098dd2:;
  R(0)=R(4);
  R(0)<<=2;
  ST32(R(14)+R(0),R(4));
  R(4)+=0x1u;
  R(0)=R(4);
  R(0)<<=2;
  ST32(R(14)+R(0),R(4));
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c098dd2;
  R(2)=0x8c09d048u;
  R(5)=0x8u;
  R(7)=0x8c098cd6u;
  R(6)=0x4u;
  { c->pr=0x8c098df2u; R(4)=R(14); f_8c09d048(c); }
  R(4)=LD32(R(14));
  R(6)=0x8c2e2cd8u;
  R(5)=R(4);
  R(5)<<=8;
  R(5)+=R(6);
  R(7)=LD32(R(5)+4);
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c098e06;
  {  goto L8c098ed6; }
L8c098e06:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c098e10;
  {  goto L8c098ed6; }
L8c098e10:;
  R(0)=0xe4u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(5)+R(0));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c098ee0;
  R(0)=0xe4u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(5)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c098ed6;
  R(0)=0xe0u;
  R(0)=LD32(R(5)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098eac;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15)+48);
  R(0)=(int32_t)(int8_t)LD8(R(2)+4);
  R(1)=0x8c0c947cu;
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(3)+12);
  R(3)=LD32(R(1));
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(0);
  R(2)=c->macl;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c098e9a;
  R(5)=R(14);
  R(5)+=0x4u;
  R(3)=LD32(R(5));
  R(0)=0xe0u;
  R(3)<<=8;
  R(3)+=R(6);
  R(2)=LD32(R(3)+R(0));
  R(1)=LD32(R(2)+44);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c098e80;
  { R(4)=LD32(R(5)); goto L8c098e94; }
L8c098e80:;
  R(5)=R(14);
  R(5)+=0x8u;
  R(2)=LD32(R(5));
  R(2)<<=8;
  R(2)+=R(6);
  R(3)=LD32(R(2)+R(0));
  R(1)=LD32(R(3)+44);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c098e94;
  R(4)=LD32(R(5));
L8c098e94:;
  R(5)=R(4);
  R(5)<<=8;
  R(5)+=R(6);
L8c098e9a:;
  R(0)=0xe0u;
  R(0)=LD32(R(5)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c098eac;
  R(2)=LD32(R(15)+48);
  R(3)=LD32(R(2)+44);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c098ed6;
L8c098eac:;
  R(0)=0xe0u;
  R(3)=LD32(R(5)+R(0));
  R(2)=LD32(R(3)+44);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c098ebe;
  R(0)=LD32(R(15)+48);
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c098ee0;
L8c098ebe:;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15)+48);
  R(0)=(int32_t)(int8_t)LD8(R(2)+4);
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(3)+12);
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(0);
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(0)=R(0)&0xFF;
  R(2)=c->macl;
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c098ee0;
L8c098ed6:;
  R(0)=R(4);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c098ee0:;
  R(0)=0xffffffffu;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c098f20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  ST32(R(15),R(5));
  R(11)=R(4);
  ST32(R(15)+4,R(6));
  { c->pr=0x8c098f3cu; ST32(R(15)+8,R(7)); f_8c09850a(c); }
  R(9)=R(15);
  R(9)+=0x4cu;
  R(14)=LD32(R(9));
  R(2)=0x3f0000u;
  R(3)=LD32(R(14));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c098f50;
  R(0)=LD32(R(15));
  R(0)+=0x1u;
  ST32(R(15),R(0));
L8c098f50:;
  R(0)=(int32_t)(int8_t)LD8(R(11)+4);
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(14)+12);
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(3)*(uint32_t)(uint16_t)R(0);
  R(3)=0x8c0c947cu;
  R(2)=LD32(R(3));
  R(4)=c->macl;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(c->t) goto L8c098f6e;
  R(0)=LD32(R(14)+44);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c098f6e;
  {  goto L8c099168; }
L8c098f6e:;
  { c->pr=0x8c098f72u;  f_8c0989c0(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(12)=R(0); if(k) goto L8c098f7c; }
  {  goto L8c099168; }
L8c098f7c:;
  R(3)=LD32(R(9));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c098f86u; R(4)=R(11); f_8c098dc0(c); }
  R(15)+=0x4u;
  { c->pr=0x8c098f8cu; R(13)=R(0); f_8c09850a(c); }
  R(0)=R(13);
  R(10)=0x8c0c9460u;
  R(8)=0x8c0c9458u;
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c099040;
  R(3)=0x8c0c9474u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c098fa2;
  {  goto L8c099168; }
L8c098fa2:;
  R(2)=LD32(R(9));
  R(3)=LD32(R(2)+44);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c098fae;
  {  goto L8c099168; }
L8c098fae:;
  { c->pr=0x8c098fb2u;  f_8c09850a(c); }
  { c->pr=0x8c098fb6u;  f_8c098a20(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c098fc0; }
  {  goto L8c099168; }
L8c098fc0:;
  R(3)=0x8c2e34d8u;
  R(14)=R(13);
  R(4)=0x8c0c945cu;
  R(14)<<=8;
  R(2)=0x3u;
  R(0)=0xf8u;
  R(14)+=R(3);
  ST32(R(14)+4,R(2));
  R(1)=LD32(R(4));
  R(1)+=0x1u;
  ST32(R(4),R(1));
  R(4)=R(12);
  R(2)=LD32(R(10));
  R(4)<<=2;
  R(4)<<=2;
  R(2)+=0x1u;
  ST32(R(10),R(2));
  R(1)=0x2u;
  R(2)=0x8c2e6cd8u;
  R(4)+=R(2);
  ST32(R(4),R(1));
  ST32(R(4)+4,R(13));
  ST32(R(4)+8,R(14));
  { c->pr=0x8c098ff2u; ST32(R(14)+R(0),R(12)); f_8c09850a(c); }
  {  goto L8c09909a; }
L8c099040:;
  R(3)=0x8c2e2cd8u;
  R(14)=R(13);
  R(14)<<=8;
  { c->pr=0x8c09904au; R(14)+=R(3); f_8c09850a(c); }
  R(4)=LD32(R(14)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c099068;
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c099068;
  R(2)=0x8c0c9474u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c099062;
  {  goto L8c099168; }
L8c099062:;
  R(3)=0x8c099d66u;
  { c->pr=0x8c099068u; R(4)=R(14); f_8c099d66(c); }
L8c099068:;
  R(2)=LD32(R(8));
  R(3)=0x8u;
  R(2)+=0x1u;
  R(1)=R(2);
  c->t=(int32_t)R(1)>(int32_t)R(3);
  ST32(R(8),R(2));
  if(!c->t) goto L8c09907e;
  R(4)=0x8c0c9478u;
  R(1)=LD32(R(4));
  R(1)+=0x1u;
  ST32(R(4),R(1));
L8c09907e:;
  R(4)=R(12);
  R(3)=0x8c2e6cd8u;
  R(4)<<=2;
  R(0)=0xf8u;
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=0x1u;
  ST32(R(4),R(2));
  ST32(R(4)+4,R(13));
  R(1)=LD32(R(10));
  R(1)+=0x1u;
  ST32(R(10),R(1));
  ST32(R(4)+8,R(14));
  ST32(R(14)+R(0),R(12));
L8c09909a:;
  R(2)=0x8c0c9464u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0990e0;
  R(0)=(int32_t)(int8_t)LD8(R(11)+4);
  { R(4)=R(0)&0xFF; goto L8c0990f6; }
L8c0990e0:;
  R(0)=(int32_t)(int8_t)LD8(R(11)+4);
  R(1)=LD32(R(9));
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(1)+12);
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(3)*(uint32_t)(uint16_t)R(0);
  R(3)=0x8c067940u;
  R(1)=c->macl;
  { c->pr=0x8c0990f4u; R(0)=0x7fu; f_8c067940(c); }
  R(4)=R(0);
L8c0990f6:;
  R(0)=R(4);
  ST8(R(14)+8,R(0));
  R(3)=LD32(R(11));
  ST32(R(14)+16,R(3));
  R(0)=(int32_t)(int8_t)LD8(R(11)+5);
  R(11)=0x0u;
  ST8(R(14)+9,R(0));
  R(0)=0xe0u;
  R(3)=LD32(R(9));
  ST32(R(14)+R(0),R(3));
  R(0)=0xe4u;
  R(2)=LD32(R(15));
  ST32(R(14)+R(0),R(2));
  R(0)=0xecu;
  R(3)=LD32(R(15)+4);
  ST32(R(14)+R(0),R(3));
  R(0)=0xf0u;
  R(2)=LD32(R(15)+8);
  ST32(R(14)+R(0),R(2));
  R(0)+=0xffffffecu;
  R(2)=0x8c0c70c8u;
  ST32(R(14)+R(0),R(11));
  R(0)+=0x1cu;
  ST32(R(14)+12,R(11));
  ST32(R(14)+R(0),R(12));
  R(0)+=0x4u;
  R(3)=LD32(R(2));
  ST32(R(14)+R(0),R(3));
  R(0)=LD32(R(14)+4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c09914c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c099170;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c099170;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c099170;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c09916c;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c099170;
  {  goto L8c099170; }
L8c09914c:;
  { c->pr=0x8c099150u; R(4)=R(13); f_8c098bc0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c099170;
  R(12)<<=2;
  R(0)=0x8c2e6cd8u;
  R(12)<<=2;
  ST32(R(12)+R(0),R(11));
  R(3)=LD32(R(8));
  R(3)+=0xffffffffu;
  ST32(R(8),R(3));
  R(2)=LD32(R(10));
  R(2)+=0xffffffffu;
  ST32(R(10),R(2));
L8c099168:;
  { R(0)=0xffffffffu; goto L8c099176; }
L8c09916c:;
  R(2)=0x5u;
  ST32(R(14)+4,R(2));
L8c099170:;
  { c->pr=0x8c099174u;  f_8c09850a(c); }
  R(0)=R(12);
L8c099176:;
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
void f_8c0991c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c0991d2u; ST32(R(15),R(4)); f_8c09850a(c); }
  R(13)=LD32(R(15));
  R(12)=0x8c2e6cd8u;
  R(13)<<=2;
  R(13)<<=2;
  R(3)=R(13);
  R(3)+=R(12);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c099296;
  R(4)=R(13);
  R(4)+=R(12);
  R(0)=LD32(R(4));
  R(11)=0x8c0c9460u;
  R(14)=LD32(R(4)+8);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c099296; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c099204;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c099260;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c09927a;
  {  goto L8c09927a; }
L8c099204:;
  R(2)=0x8c0f08e4u;
  { c->pr=0x8c09920au; R(4)=LD32(R(14)); f_8c0f08e4(c); }
  R(1)=0x8c0bd020u;
  R(3)=0x4u;
  R(0)=0xf4u;
  R(4)=0x8c0c9458u;
  ST32(R(14)+4,R(3));
  R(2)=LD32(R(1));
  ST32(R(14)+R(0),R(2));
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  ST32(R(4),R(3));
  R(2)=LD32(R(11));
  R(2)+=0xffffffffu;
  ST32(R(11),R(2));
  {  goto L8c099270; }
L8c099260:;
  R(4)=0x8c0c945cu;
  ST32(R(14)+4,R(10));
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  ST32(R(4),R(3));
  R(2)=LD32(R(11));
  R(2)+=0xffffffffu;
  ST32(R(11),R(2));
L8c099270:;
  R(13)+=R(12);
  R(5)=0x1u;
  ST32(R(13),R(10));
  { c->pr=0x8c09927au; R(4)=R(14); f_8c099a7c(c); }
L8c09927a:;
  { c->pr=0x8c09927eu;  f_8c09850a(c); }
  R(3)=0x8c0c946cu;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099296;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c099e9a(c); return; } }
L8c099296:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0992a6(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  R(3)=0x8c2e6cd8u;
  R(5)<<=2;
  R(5)<<=2;
  R(5)+=R(3);
  ST32(R(15),R(5));
  R(6)=LD32(R(5));
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0992c8;
  R(0)=R(6);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0992c8;
  R(0)=0xecu;
  R(2)=0x0u;
  R(3)=LD32(R(5)+8);
  ST32(R(3)+R(0),R(2));
L8c0992c8:;
  { R(15)+=0x4u; return; }
}
void f_8c099300(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  { c->pr=0x8c099310u; R(13)=R(5); f_8c09850a(c); }
  R(4)=LD32(R(15));
  R(3)=0x8c2e6cd8u;
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c099324;
  { R(0)=0x0u; goto L8c09944a; }
L8c099324:;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==3;
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c099332; }
  ST32(R(4),R(5));
  { R(0)=R(5); goto L8c09944a; }
L8c099332:;
  R(14)=LD32(R(4)+8);
  R(4)=LD32(R(14)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c099340;
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c099348;
L8c099340:;
  R(4)=0x8c0c9478u;
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  ST32(R(4),R(2));
L8c099348:;
  R(1)=LD32(R(14)+16);
  R(3)=LD32(R(13));
  c->t=R(1)==R(3);
  if(c->t) goto L8c099380;
  R(0)=0xdcu;
  R(7)=0x8c0c9454u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c099378;
  R(3)=LD32(R(7));
  R(6)=R(5);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(4)=R(5); if(k) goto L8c099378; }
L8c099364:;
  R(1)=R(14);
  R(3)=LD32(R(14)+16);
  R(1)+=0x14u;
  R(6)+=0x1u;
  R(1)+=R(4);
  ST32(R(1),R(3));
  R(2)=LD32(R(7));
  c->t=(int32_t)R(6)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(4)+=0x4u; if(k) goto L8c099364; }
L8c099378:;
  R(1)=LD32(R(13));
  ST32(R(14)+16,R(1));
  R(3)=LD32(R(7));
  ST32(R(14)+R(0),R(3));
L8c099380:;
  R(1)=0x8c0c9464u;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0993c0;
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  { R(12)=R(0)&0xFF; goto L8c0993dc; }
L8c0993c0:;
  R(12)=0xe0u;
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(12)+=R(14);
  R(2)=0x8c067940u;
  R(12)=LD32(R(12));
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(12)+12);
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)((int32_t)(int16_t)R(3)*(int32_t)(int16_t)R(0));
  R(0)=0x7fu;
  R(12)=c->macl;
  { c->pr=0x8c0993dau; R(1)=(uint32_t)(int32_t)(int16_t)R(12); f_8c067940(c); }
  R(12)=R(0);
L8c0993dc:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(3);
  R(0)=c->t;
  R(0)^=0x1u;
  ST32(R(15)+4,R(0));
  R(0)=R(12);
  ST8(R(14)+8,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+5);
  ST8(R(14)+9,R(0));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c099448;
  R(0)=LD32(R(15));
  R(1)=0x8c2e6cd8u;
  R(0)<<=2;
  R(0)<<=2;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c099448;
  R(2)=0x8c0ab440u;
  { c->pr=0x8c09940cu; R(4)=R(12); f_8c0ab440(c); }
  R(3)=0x8c0f0878u;
  R(6)=0x0u;
  R(5)=R(0);
  { c->pr=0x8c099416u; R(4)=LD32(R(14)); f_8c0f0878(c); }
  R(2)=0x8c2e7098u;
  R(3)=0x8c0ab380u;
  ST32(R(2),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+5);
  { c->pr=0x8c099422u; R(4)=R(0); f_8c0ab380(c); }
  R(2)=0x8c0f0750u;
  R(6)=0x0u;
  R(5)=R(0);
  { c->pr=0x8c09942cu; R(4)=LD32(R(14)); f_8c0f0750(c); }
  R(3)=0x8c2e7098u;
  { c->pr=0x8c099432u; ST32(R(3),R(0)); f_8c09850a(c); }
  R(1)=LD32(R(15)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c099444;
  R(1)=0x8c0c9468u;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c099444;
  { c->pr=0x8c099444u;  f_8c099e9a(c); }
L8c099444:;
  { c->pr=0x8c099448u;  f_8c09850a(c); }
L8c099448:;
  R(0)=0x1u;
L8c09944a:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c099456(SH4Ctx *c) {
  R(3)=R(4);
  R(3)<<=2;
  R(6)=0x8c2e6cd8u;
  R(3)<<=2;
  R(3)+=R(6);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09946e;
  R(5)=0x8c0c9478u;
  R(3)=LD32(R(5));
  R(3)+=0x1u;
  ST32(R(5),R(3));
L8c09946e:;
  R(5)=R(4);
  R(5)<<=2;
  R(5)<<=2;
  R(5)+=R(6);
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0994e0;
  R(4)=0x0u;
  ST32(R(5),R(4));
  { R(0)=R(4); return; }
L8c0994e0:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0994e6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(13)=0x0u;
  { c->pr=0x8c0994feu; ST32(R(15),R(13)); f_8c09850a(c); }
  R(10)=0x8c0c9460u;
  R(12)=0x1u;
  R(11)=0x8c0c9458u;
  R(9)=R(13);
  R(8)=0x4u;
L8c099508:;
  R(3)=0x8c2e2cd8u;
  R(14)=R(9);
  R(14)<<=8;
  R(14)+=R(3);
  R(0)=LD32(R(14)+4);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=!c->t; R(4)=LD32(R(14)); if(k) goto L8c09951c; }
  {  goto L8c09965a; }
L8c09951c:;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c099534;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c099580;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0995da;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c099530;
  {  goto L8c09964e; }
L8c099530:;
  {  goto L8c09965a; }
L8c099534:;
  R(0)=0xf4u;
  R(3)=LD32(R(14)+R(0));
  c->t=(int32_t)R(3)>=0;
  if(!c->t) goto L8c099540;
  {  goto L8c09965a; }
L8c099540:;
  { c->pr=0x8c099544u; R(4)=R(9); f_8c098bc0(c); }
  {  goto L8c09965a; }
L8c099580:;
  R(1)=0x8c0f04fcu;
  R(5)=R(15);
  { c->pr=0x8c099588u; R(5)+=0x4u; f_8c0f04fc(c); }
  R(3)=0x8c2e7098u;
  ST32(R(3),R(0));
  R(2)=LD32(R(15)+28);
  c->t=(R(2)&R(12))==0;
  if(c->t) goto L8c09959c;
  R(0)=0xf4u;
  R(2)=0x3u;
  ST32(R(14)+4,R(2));
  { ST32(R(14)+R(0),R(13)); goto L8c09965a; }
L8c09959c:;
  R(2)=0x8c0bd024u;
  R(0)=0xf4u;
  R(1)=LD32(R(2));
  R(2)=LD32(R(14)+R(0));
  c->t=(int32_t)R(2)>(int32_t)R(1);
  if(!c->t) goto L8c09965a;
  ST32(R(14)+4,R(13));
  ST32(R(14)+R(0),R(13));
  R(0)+=0x4u;
  R(2)=LD32(R(14)+R(0));
  R(0)=0x8c2e6cd8u;
  R(2)<<=2;
  R(2)<<=2;
  ST32(R(2)+R(0),R(13));
  ST32(R(15),R(12));
  R(2)=LD32(R(11));
  R(2)+=0xffffffffu;
  ST32(R(11),R(2));
  R(1)=LD32(R(10));
  R(2)=0x8c09850au;
  R(1)+=0xffffffffu;
  { c->pr=0x8c0995cau; ST32(R(10),R(1)); f_8c09850a(c); }
  R(5)=0x3u;
  { c->pr=0x8c0995d0u; R(4)=R(14); f_8c099a7c(c); }
  R(2)=0x8c09850au;
  { c->pr=0x8c0995d6u;  f_8c09850a(c); }
  {  goto L8c09965a; }
L8c0995da:;
  R(2)=0x8c0f04fcu;
  R(5)=R(15);
  { c->pr=0x8c0995e2u; R(5)+=0x4u; f_8c0f04fc(c); }
  R(3)=0x8c2e7098u;
  ST32(R(3),R(0));
  R(2)=LD32(R(15)+28);
  c->t=(R(2)&R(12))==0;
  if(!c->t) goto L8c09965a;
  R(0)=0xe0u;
  R(0)=LD32(R(14)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099620;
  { c->pr=0x8c0995fau; R(4)=R(9); f_8c098bc0(c); }
  {  goto L8c09965a; }
L8c099620:;
  R(0)=0xf4u;
  ST32(R(14)+4,R(8));
  ST32(R(14)+R(0),R(8));
  R(0)+=0x4u;
  { c->pr=0x8c09962cu; R(4)=LD32(R(14)+R(0)); f_8c0986fc(c); }
  ST32(R(15),R(12));
  R(3)=LD32(R(11));
  R(3)+=0xffffffffu;
  ST32(R(11),R(3));
  R(2)=LD32(R(10));
  R(3)=0x8c09850au;
  R(2)+=0xffffffffu;
  { c->pr=0x8c09963eu; ST32(R(10),R(2)); f_8c09850a(c); }
  R(5)=0x0u;
  { c->pr=0x8c099644u; R(4)=R(14); f_8c099a7c(c); }
  R(3)=0x8c09850au;
  { c->pr=0x8c09964au;  f_8c09850a(c); }
  {  goto L8c09965a; }
L8c09964e:;
  R(0)=0xf4u;
  R(1)=LD32(R(14)+R(0));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c09965a;
  ST32(R(14)+4,R(13));
  ST32(R(14)+R(0),R(13));
L8c09965a:;
  R(2)=0x8u;
  R(9)+=0x1u;
  c->t=(int32_t)R(9)>=(int32_t)R(2);
  if(c->t) goto L8c099666;
  {  goto L8c099508; }
L8c099666:;
  R(1)=0x8c09850au;
  { c->pr=0x8c09966cu;  f_8c09850a(c); }
  { c->pr=0x8c099670u;  f_8c098740(c); }
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c099682;
  R(1)=0x8c0c9470u;
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c099682;
  { c->pr=0x8c099682u;  f_8c099e9a(c); }
L8c099682:;
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
void f_8c0996c0(SH4Ctx *c) {
  R(0)=0xdcu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09973c;
  R(2)=0x8c0c9454u;
  R(3)=LD32(R(14)+R(0));
  R(3)+=0xffffffffu;
  ST32(R(14)+R(0),R(3));
  R(6)=LD32(R(2));
  R(6)+=0xffffffffu;
  R(5)=R(6);
  R(4)=R(6);
  R(4)<<=2;
  R(6)=0x4u;
  c->t=R(4)>=R(6);
  R(5)+=0xffffffffu;
  { uint32_t k=!c->t; R(5)<<=2; if(k) goto L8c0996fc; }
L8c0996ea:;
  R(7)=R(14);
  R(7)+=0x14u;
  R(0)=R(7);
  R(3)=LD32(R(5)+R(0));
  ST32(R(4)+R(0),R(3));
  R(4)+=0xfffffffcu;
  c->t=R(4)>=R(6);
  { uint32_t k=c->t; R(5)+=0xfffffffcu; if(k) goto L8c0996ea; }
L8c0996fc:;
  R(2)=0x8c0c9454u;
  R(5)=0x0u;
  R(3)=LD32(R(14)+16);
  R(4)=R(5);
  ST32(R(14)+20,R(3));
  R(7)=LD32(R(2));
  c->t=(int32_t)R(7)>0;
  { uint32_t k=!c->t; R(6)=R(5); if(k) goto L8c099720; }
L8c09970e:;
  R(2)=R(14);
  R(2)+=0x14u;
  R(2)+=R(5);
  R(3)=LD32(R(2));
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  R(4)+=R(3);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c09970e; }
L8c099720:;
  R(3)=0x8c067940u;
  R(0)=R(7);
  { c->pr=0x8c099728u; R(1)=R(4); f_8c067940(c); }
  R(2)=0x8c0ab394u;
  { c->pr=0x8c09972eu; R(4)=R(0); f_8c0ab394(c); }
  R(3)=0x8c0f07d0u;
  R(6)=0x0u;
  R(5)=R(0);
  { c->pr=0x8c099738u; R(4)=LD32(R(14)); f_8c0f07d0(c); }
  R(2)=0x8c2e7098u;
  ST32(R(2),R(0));
L8c09973c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c099742(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2e2cd8u;
  R(13)=0x800u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x100u;
  R(13)+=R(4);
  c->t=R(14)>=R(13);
  if(c->t) goto L8c0997c2;
L8c099758:;
  R(4)=R(14);
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0997bc;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0997a0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0997a4;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0997ac;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0997b4;
  {  goto L8c0997bc; }
L8c0997a0:;
  {  goto L8c0997b4; }
L8c0997a4:;
  R(0)=0xf4u;
  R(3)=LD32(R(4)+R(0));
  { R(3)+=0x1u; goto L8c0997ba; }
L8c0997ac:;
  { c->pr=0x8c0997b0u;  f_8c0996c0(c); }
  {  goto L8c0997bc; }
L8c0997b4:;
  R(0)=0xf4u;
  R(3)=LD32(R(4)+R(0));
  R(3)+=0xffffffffu;
L8c0997ba:;
  ST32(R(4)+R(0),R(3));
L8c0997bc:;
  R(14)+=R(12);
  c->t=R(14)>=R(13);
  if(!c->t) goto L8c099758;
L8c0997c2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0997e0(SH4Ctx *c) {
  ST8(R(0)+R(0),R(15));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  { f_8c099800(c); return; }
}
void f_8c099800(SH4Ctx *c) {
  R(5)=R(4);
  R(5)<<=2;
  R(3)=0x8c2e6cd8u;
  R(5)<<=2;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)+=R(3);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(5)+8);
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c099830;
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c099830;
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c09982c;
  R(3)=0x8c0f0878u;
  R(5)=0xffffff80u;
  R(6)=0x0u;
  { c->pr=0x8c09982cu; R(4)=LD32(R(14)); f_8c0f0878(c); }
L8c09982c:;
  R(2)=0x1u;
  ST32(R(14)+12,R(2));
L8c099830:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c099836(SH4Ctx *c) {
  R(5)=R(4);
  R(5)<<=2;
  R(5)<<=2;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x8c2e6cd8u;
  R(14)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)+=R(6);
  R(14)=LD32(R(14)+8);
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c099898;
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c099898;
  R(0)=R(5);
  R(3)=0x0u;
  ST32(R(14)+12,R(3));
  R(0)=LD32(R(6)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099898;
  R(2)=0x8c0ab394u;
  { c->pr=0x8c099866u; R(4)=LD32(R(14)+16); f_8c0ab394(c); }
  R(3)=0x8c0f07d0u;
  R(6)=0x0u;
  R(5)=R(0);
  { c->pr=0x8c099870u; R(4)=LD32(R(14)); f_8c0f07d0(c); }
  R(3)=0x8c0ab440u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  { c->pr=0x8c099878u; R(4)=R(0); f_8c0ab440(c); }
  R(2)=0x8c0f0878u;
  R(6)=0x0u;
  R(5)=R(0);
  { c->pr=0x8c099882u; R(4)=LD32(R(14)); f_8c0f0878(c); }
  R(3)=0x8c0ab380u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+9);
  { c->pr=0x8c09988au; R(4)=R(0); f_8c0ab380(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0f0750u;
  R(5)=R(0);
  R(4)=LD32(R(14));
  R(6)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0f0750(c); return; } }
L8c099898:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09989e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(3)=0x8c2e6cd8u;
  R(14)<<=2;
  R(14)<<=2;
  R(14)+=R(3);
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0998be;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0998be:;
  R(3)=0x8c0f0478u;
  R(5)=R(15);
  R(4)=LD32(R(14)+8);
  { c->pr=0x8c0998c8u; R(4)=LD32(R(4)); f_8c0f0478(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0998d2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(3)=0x8c2e6cd8u;
  R(14)<<=2;
  R(14)<<=2;
  R(14)+=R(3);
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0998f2;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0998f2:;
  R(3)=0x8c0f05f4u;
  R(5)=R(15);
  R(4)=LD32(R(14)+8);
  { c->pr=0x8c0998fcu; R(4)=LD32(R(4)); f_8c0f05f4(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c099906(SH4Ctx *c) {
  R(5)=0x8c0c948cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(5));
  c->t=R(3)==R(4);
  if(c->t) goto L8c099998;
  R(2)=0x8c0c9480u;
  ST32(R(5),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c099998;
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099980;
  R(4)=0x4f525453u;
  {  goto L8c099982; }
L8c099980:;
  R(4)=0x4f4e4f4du;
L8c099982:;
  R(2)=0x8c0efbbcu;
  { c->pr=0x8c099988u;  f_8c0efbbc(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c099998;
  R(2)=0x8c0633e0u;
  R(4)=0x1du;
  R(5)=0x8c0bd050u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0633e0(c); return; } }
L8c099998:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09999e(SH4Ctx *c) {
  R(3)=0x8c0c948cu;
  { R(0)=LD32(R(3)); return; }
}
void f_8c0999a4(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0999a8(SH4Ctx *c) {
  {  return; }
}
void f_8c0999ac(SH4Ctx *c) {
  {  return; }
}
void f_8c0999b0(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0999b4(SH4Ctx *c) {
  {  return; }
}
void f_8c0999b8(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0999bc(SH4Ctx *c) {
  { R(0)=0x2u; return; }
}
void f_8c0999c0(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0999c4(SH4Ctx *c) {
  {  return; }
}
void f_8c0999c8(SH4Ctx *c) {
  {  return; }
}
void f_8c0999cc(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c099a00(SH4Ctx *c) {
  {  return; }
}
void f_8c099a08(SH4Ctx *c) {
  {  return; }
}
void f_8c099a0c(SH4Ctx *c) {
  {  return; }
}
void f_8c099a10(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a14(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a18(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c099a1c(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c099a20(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c099a24(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a28(SH4Ctx *c) {
  {  return; }
}
void f_8c099a2c(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a30(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c099a34(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a38(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a3c(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a40(SH4Ctx *c) {
  {  return; }
}
void f_8c099a44(SH4Ctx *c) {
  {  return; }
}
void f_8c099a48(SH4Ctx *c) {
  {  return; }
}
void f_8c099a4c(SH4Ctx *c) {
  {  return; }
}
void f_8c099a50(SH4Ctx *c) {
  {  return; }
}
void f_8c099a54(SH4Ctx *c) {
  {  return; }
}
void f_8c099a58(SH4Ctx *c) {
  {  return; }
}
void f_8c099a5c(SH4Ctx *c) {
  {  return; }
}
void f_8c099a60(SH4Ctx *c) {
  {  return; }
}
void f_8c099a64(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a68(SH4Ctx *c) {
  { R(0)=0x8u; return; }
}
void f_8c099a6c(SH4Ctx *c) {
  {  return; }
}
void f_8c099a70(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a74(SH4Ctx *c) {
  {  return; }
}
void f_8c099a78(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c099a7c(SH4Ctx *c) {
  R(0)=0xecu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c099a98;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c099a92u; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(0)=0xecu;
  R(3)=0x0u;
  ST32(R(14)+R(0),R(3));
L8c099a98:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c099a9e(SH4Ctx *c) {
  R(0)=0x8c2e6ce0u;
  R(4)<<=2;
  R(4)<<=2;
  R(1)=LD32(R(15));
  R(3)=LD32(R(4)+R(0));
  R(0)=0xe0u;
  R(2)=LD32(R(3)+R(0));
  { ST32(R(1),R(2)); return; }
}
void f_8c099ab0(SH4Ctx *c) {
  R(0)=0x48u;
  R(7)=R(6);
  R(2)=LD32(R(7)+12);
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=R(2)==R(3);
  if(c->t) goto L8c099ac6;
L8c099abc:;
  R(7)=LD32(R(7)+48);
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=LD32(R(7)+12);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c099abc;
L8c099ac6:;
  R(1)=LD32(R(7)+20);
  R(0)=0x30u;
  R(6)=0x1u;
  ST8(R(5)+R(0),R(1));
  R(0)=0x14u;
  R(3)=LD32(R(4));
  ST32(R(5),R(3));
  R(2)=LD32(R(4)+4);
  ST32(R(5)+4,R(2));
  R(3)=LD32(R(4)+8);
  ST32(R(5)+8,R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  ST8(R(5)+12,R(0));
  R(0)=0x4cu;
  ST32(R(5)+16,R(6));
  R(3)=LD32(R(4)+24);
  ST32(R(5)+20,R(3));
  R(2)=LD32(R(4)+28);
  ST32(R(5)+24,R(2));
  R(3)=LD32(R(4)+32);
  ST32(R(5)+28,R(3));
  R(2)=LD32(R(4)+36);
  ST32(R(5)+32,R(2));
  R(3)=LD32(R(4)+40);
  ST32(R(5)+36,R(3));
  R(2)=LD32(R(4)+44);
  ST32(R(5)+40,R(2));
  R(3)=LD32(R(4)+48);
  ST32(R(5)+44,R(3));
  R(2)=LD32(R(4)+60);
  ST32(R(5)+R(0),R(2));
  R(0)=0x49u;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=0x31u;
  ST8(R(5)+R(0),R(3));
  { R(0)=R(6); return; }
}
void f_8c099b40(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c099b48;
  { R(0)=0x0u; return; }
L8c099b48:;
  R(0)=R(5);
  ST8(R(4)+12,R(0));
  R(0)=0x1u;
  {  return; }
}
void f_8c099b52(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0x8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c0f066cu;
  R(12)=0x100u;
  R(14)=0x8c2e2cd8u;
L8c099b6c:;
  R(0)=0xf4u;
  ST32(R(14)+4,R(13));
  ST32(R(14)+R(0),R(13));
  { uint32_t tg=R(10); c->pr=0x8c099b76u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=0xf4u;
  R(14)+=R(12);
  ST32(R(14)+4,R(13));
  ST32(R(14)+R(0),R(13));
  { uint32_t tg=R(10); c->pr=0x8c099b82u; R(4)=R(14); sh4_call(c,tg); }
  R(11)+=0x2u;
  R(3)=(uint32_t)(int32_t)(int8_t)R(11);
  c->t=(int32_t)R(3)>=(int32_t)R(9);
  { uint32_t k=!c->t; R(14)+=R(12); if(k) goto L8c099b6c; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c099bc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0x8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c0f0428u;
  R(12)=0x100u;
  R(14)=0x8c2e2cd8u;
L8c099bda:;
  R(0)=0xf4u;
  ST32(R(14)+4,R(13));
  ST32(R(14)+R(0),R(13));
  { uint32_t tg=R(10); c->pr=0x8c099be4u; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(0)=0xf4u;
  ST32(R(14),R(13));
  R(14)+=R(12);
  ST32(R(14)+4,R(13));
  ST32(R(14)+R(0),R(13));
  { uint32_t tg=R(10); c->pr=0x8c099bf2u; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(11)+=0x2u;
  ST32(R(14),R(13));
  R(3)=(uint32_t)(int32_t)(int8_t)R(11);
  c->t=(int32_t)R(3)>=(int32_t)R(9);
  { uint32_t k=!c->t; R(14)+=R(12); if(k) goto L8c099bda; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c099c0e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0efb60u;
  { c->pr=0x8c099c16u; R(4)=0x0u; f_8c0efb60(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0c9490u;
  R(2)=0x1u;
  { ST32(R(3),R(2)); return; }
}
void f_8c099c20(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0efb60u;
  { c->pr=0x8c099c28u; R(4)=0xfu; f_8c0efb60(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0c9490u;
  R(2)=0x0u;
  { ST32(R(3),R(2)); return; }
}
void f_8c099c32(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(6)=R(5);
  R(5)=0x8c2e6cd8u;
  R(3)<<=2;
  R(2)=LD32(R(6));
  R(3)<<=2;
  R(3)+=R(5);
  R(4)=LD32(R(3)+8);
  R(2)<<=2;
  R(2)<<=2;
  R(0)=LD32(R(4)+12);
  R(2)+=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(5)=LD32(R(2)+8); if(k) goto L8c099c80; }
  R(0)=LD32(R(5)+12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099caa;
  { R(0)=0x0u; return; }
L8c099c80:;
  R(0)=LD32(R(5)+12);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c099cc0;
  R(0)=0xe4u;
  R(2)=LD32(R(4)+R(0));
  R(3)=LD32(R(5)+R(0));
  c->t=R(2)==R(3);
  if(c->t) goto L8c099c96;
  R(3)=LD32(R(4)+R(0));
  { R(0)=LD32(R(5)+R(0)); goto L8c099d06; }
L8c099c96:;
  R(0)=0xe0u;
  R(0)=LD32(R(4)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099cae;
  R(0)=0xe0u;
  R(2)=LD32(R(5)+R(0));
  R(3)=LD32(R(2)+44);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c099cae;
L8c099caa:;
  { R(0)=0x1u; return; }
L8c099cae:;
  R(0)=0xe0u;
  R(3)=LD32(R(4)+R(0));
  R(2)=LD32(R(3)+44);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c099cc4;
  R(0)=LD32(R(5)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099cc4;
L8c099cc0:;
  { R(0)=0xffffffffu; return; }
L8c099cc4:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  c->t=R(3)==R(0);
  if(c->t) goto L8c099d00;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(0)=R(0)&0xFF;
  R(2)-=R(0);
  { R(0)=R(2); return; }
L8c099d00:;
  R(0)=0xfcu;
  R(3)=LD32(R(5)+R(0));
  R(0)=LD32(R(4)+R(0));
L8c099d06:;
  R(0)-=R(3);
  {  return; }
}
void f_8c099c80(SH4Ctx *c) {
  R(0)=LD32(R(5)+12);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c099cc0;
  R(0)=0xe4u;
  R(2)=LD32(R(4)+R(0));
  R(3)=LD32(R(5)+R(0));
  c->t=R(2)==R(3);
  if(c->t) goto L8c099c96;
  R(3)=LD32(R(4)+R(0));
  { R(0)=LD32(R(5)+R(0)); goto L8c099d06; }
L8c099c96:;
  R(0)=0xe0u;
  R(0)=LD32(R(4)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099cae;
  R(0)=0xe0u;
  R(2)=LD32(R(5)+R(0));
  R(3)=LD32(R(2)+44);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c099cae;
  { R(0)=0x1u; return; }
L8c099cae:;
  R(0)=0xe0u;
  R(3)=LD32(R(4)+R(0));
  R(2)=LD32(R(3)+44);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c099cc4;
  R(0)=LD32(R(5)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099cc4;
L8c099cc0:;
  { R(0)=0xffffffffu; return; }
L8c099cc4:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  c->t=R(3)==R(0);
  if(c->t) goto L8c099d00;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(0)=R(0)&0xFF;
  R(2)-=R(0);
  { R(0)=R(2); return; }
L8c099d00:;
  R(0)=0xfcu;
  R(3)=LD32(R(5)+R(0));
  R(0)=LD32(R(4)+R(0));
L8c099d06:;
  R(0)-=R(3);
  {  return; }
}
void f_8c099cae(SH4Ctx *c) {
  R(0)=0xe0u;
  R(3)=LD32(R(4)+R(0));
  R(2)=LD32(R(3)+44);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c099cc4;
  R(0)=LD32(R(5)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099cc4;
  { R(0)=0xffffffffu; return; }
L8c099cc4:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  c->t=R(3)==R(0);
  if(c->t) goto L8c099d00;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(0)=R(0)&0xFF;
  R(2)-=R(0);
  { R(0)=R(2); return; }
L8c099d00:;
  R(0)=0xfcu;
  R(3)=LD32(R(5)+R(0));
  R(0)=LD32(R(4)+R(0));
  R(0)-=R(3);
  {  return; }
}
void f_8c099cc4(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  c->t=R(3)==R(0);
  if(c->t) goto L8c099d00;
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(2)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(0)=R(0)&0xFF;
  R(2)-=R(0);
  { R(0)=R(2); return; }
L8c099d00:;
  R(0)=0xfcu;
  R(3)=LD32(R(5)+R(0));
  R(0)=LD32(R(4)+R(0));
  R(0)-=R(3);
  {  return; }
}
void f_8c099d00(SH4Ctx *c) {
  R(0)=0xfcu;
  R(3)=LD32(R(5)+R(0));
  R(0)=LD32(R(4)+R(0));
  R(0)-=R(3);
  {  return; }
}
void f_8c099d0c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(13)+8);
  R(5)=R(13);
  R(6)=0xccu;
  R(4)=R(14);
  ST8(R(14)+8,R(0));
  R(5)+=0x14u;
  R(0)=(int32_t)(int8_t)LD8(R(13)+9);
  ST8(R(14)+9,R(0));
  R(3)=LD32(R(13)+12);
  ST32(R(14)+12,R(3));
  R(2)=LD32(R(13)+16);
  R(3)=0x8c0685b4u;
  ST32(R(14)+16,R(2));
  { c->pr=0x8c099d34u; R(4)+=0x14u; f_8c0685b4(c); }
  R(0)=0xe0u;
  R(2)=LD32(R(13)+R(0));
  ST32(R(14)+R(0),R(2));
  R(0)+=0x4u;
  R(3)=LD32(R(13)+R(0));
  ST32(R(14)+R(0),R(3));
  R(0)+=0x8u;
  R(2)=LD32(R(13)+R(0));
  ST32(R(14)+R(0),R(2));
  R(0)+=0x4u;
  R(3)=LD32(R(13)+R(0));
  ST32(R(14)+R(0),R(3));
  R(0)+=0x4u;
  R(2)=LD32(R(13)+R(0));
  ST32(R(14)+R(0),R(2));
  R(0)+=0x4u;
  R(3)=LD32(R(13)+R(0));
  ST32(R(14)+R(0),R(3));
  R(0)+=0x4u;
  R(2)=LD32(R(13)+R(0));
  ST32(R(14)+R(0),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c099d66(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+4);
  R(0)=0xf8u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)=LD32(R(14)+R(0)); if(k) goto L8c099d80; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
L8c099d80:;
  R(0)=LD32(R(14)+4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c099dc0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c099dc0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c099de2;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c099dca;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c099dca;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c099dde;
  {  goto L8c099de2; }
L8c099dc0:;
  R(4)=0x8c0c9478u;
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  { ST32(R(4),R(3)); goto L8c099e8e; }
L8c099dca:;
  R(3)=0x8c0f08e4u;
  { c->pr=0x8c099dd0u; R(4)=LD32(R(14)); f_8c0f08e4(c); }
  R(1)=0x8c0bd020u;
  R(2)=0x4u;
  R(0)=0xf4u;
  ST32(R(14)+4,R(2));
  R(3)=LD32(R(1));
  { ST32(R(14)+R(0),R(3)); goto L8c099de2; }
L8c099dde:;
  R(3)=0x4u;
  ST32(R(14)+4,R(3));
L8c099de2:;
  R(0)=0xe0u;
  R(4)=0x8c0c9458u;
  R(11)=0x8c0c9460u;
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  ST32(R(4),R(3));
  R(0)=LD32(R(14)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099e6e;
  R(2)=0x8c098a20u;
  { c->pr=0x8c099dfcu;  f_8c098a20(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(12)=R(0); if(k) goto L8c099e40; }
  R(2)=LD32(R(11));
  R(3)=0x8c0986fcu;
  R(2)+=0xffffffffu;
  ST32(R(11),R(2));
  { c->pr=0x8c099e0eu; R(4)=R(13); f_8c0986fc(c); }
  {  goto L8c099e7a; }
L8c099e40:;
  R(4)=0x8c0c945cu;
  R(11)=R(12);
  R(3)=0x8c2e34d8u;
  R(11)<<=8;
  R(2)=LD32(R(4));
  R(5)=R(14);
  R(11)+=R(3);
  R(2)+=0x1u;
  ST32(R(4),R(2));
  { c->pr=0x8c099e56u; R(4)=R(11); f_8c099d0c(c); }
  R(3)=0x3u;
  R(4)=R(13);
  ST32(R(11)+4,R(3));
  R(4)<<=2;
  R(3)=0x8c2e6cd8u;
  R(4)<<=2;
  R(2)=0x2u;
  R(4)+=R(3);
  ST32(R(4),R(2));
  ST32(R(4)+8,R(11));
  { ST32(R(4)+4,R(12)); goto L8c099e80; }
L8c099e6e:;
  R(2)=LD32(R(11));
  R(3)=0x8c0986fcu;
  R(2)+=0xffffffffu;
  ST32(R(11),R(2));
  { c->pr=0x8c099e7au; R(4)=R(13); f_8c0986fc(c); }
L8c099e7a:;
  R(5)=0x1u;
  { c->pr=0x8c099e80u; R(4)=R(14); f_8c099a7c(c); }
L8c099e80:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c09850au;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09850a(c); return; } }
L8c099e8e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c099e9a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff04u;
  R(15)+=R(0);
  R(2)=0x8c0c9474u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c099eba;
  {  goto L8c09a00e; }
L8c099eba:;
  R(3)=0x8c09850au;
  { c->pr=0x8c099ec0u;  f_8c09850a(c); }
  R(14)=0x8c2e6cd8u;
  R(11)=0x0u;
  R(12)=R(15);
  R(6)=0x3cu;
  R(13)=R(11);
  R(4)=R(11);
  { R(12)+=0xcu; goto L8c099f1e; }
L8c099f00:;
  R(5)=R(4);
  R(5)<<=2;
  R(5)<<=2;
  R(5)+=R(14);
  R(3)=LD32(R(5));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c099f1c;
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c099f1c;
  R(0)=R(13);
  R(0)<<=2;
  ST32(R(12)+R(0),R(4));
  R(13)+=0x1u;
L8c099f1c:;
  R(4)+=0x1u;
L8c099f1e:;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c099f00;
  R(2)=0x8c09d048u;
  R(5)=R(13);
  R(7)=0x8c099c32u;
  R(6)=0x4u;
  { c->pr=0x8c099f2eu; R(4)=R(12); f_8c09d048(c); }
  R(8)=0x8u;
  R(9)=0x20u;
  R(10)=R(8);
  { R(9)+=R(12); goto L8c099f52; }
L8c099f38:;
  {uint32_t v=LD32(R(9));R(9)+=4;R(4)=v;}
  R(0)=R(4);
  R(0)<<=2;
  R(0)<<=2;
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c099f50;
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(14);
  { c->pr=0x8c099f50u; R(4)=LD32(R(4)+8); f_8c099d66(c); }
L8c099f50:;
  R(10)+=0x1u;
L8c099f52:;
  c->t=(int32_t)R(10)>=(int32_t)R(13);
  if(!c->t) goto L8c099f38;
  c->t=(int32_t)R(13)>(int32_t)R(8);
  if(!c->t) goto L8c099f5e;
  { R(3)=R(8); goto L8c099f60; }
L8c099f5e:;
  R(3)=R(13);
L8c099f60:;
  R(8)=0x8c0c9458u;
  ST32(R(15)+4,R(3));
  ST32(R(15),R(11));
  { ST32(R(15)+8,R(12)); goto L8c09a000; }
L8c099f6a:;
  R(4)=LD32(R(15)+8);
  R(4)+=0x4u;
  ST32(R(15)+8,R(4));
  R(4)+=0xfffffffcu;
  R(4)=LD32(R(4));
  R(12)=R(4);
  R(12)<<=2;
  R(12)<<=2;
  R(0)=R(12);
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c099ffa;
  R(3)=0x8c098a42u;
  R(9)=R(12);
  R(9)+=R(14);
  { c->pr=0x8c099f8cu; R(9)=LD32(R(9)+8); f_8c098a42(c); }
  R(13)=R(0);
  R(3)=0x8c2e2cd8u;
  R(13)<<=8;
  R(5)=R(9);
  R(13)+=R(3);
  R(10)=R(0);
  { c->pr=0x8c099f9cu; R(4)=R(13); f_8c099d0c(c); }
  R(3)=0x8c0c945cu;
  ST32(R(9)+4,R(11));
  R(2)=LD32(R(3));
  R(2)+=0xffffffffu;
  ST32(R(3),R(2));
  R(3)=LD32(R(13)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c099fe0;
  R(3)=0x8c098bc0u;
  { c->pr=0x8c099fb2u; R(4)=R(10); f_8c098bc0(c); }
  {  goto L8c099fe4; }
L8c099fe0:;
  R(3)=0x5u;
  ST32(R(13)+4,R(3));
L8c099fe4:;
  R(2)=LD32(R(8));
  R(4)=R(12);
  R(3)=0x1u;
  R(2)+=0x1u;
  ST32(R(8),R(2));
  R(4)+=R(14);
  R(2)=0x8c09850au;
  ST32(R(4),R(3));
  ST32(R(4)+8,R(13));
  { c->pr=0x8c099ffau; ST32(R(4)+4,R(10)); f_8c09850a(c); }
L8c099ffa:;
  R(3)=LD32(R(15));
  R(3)+=0x1u;
  ST32(R(15),R(3));
L8c09a000:;
  R(1)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(!c->t) goto L8c099f6a;
  R(3)=0x8c09850au;
  { c->pr=0x8c09a00eu;  f_8c09850a(c); }
L8c09a00e:;
  R(1)=0xfcu;
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
void f_8c09a060(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=R(4);
  R(3)=LD32(R(13)+44);
  R(2)=0x8c0645a2u;
  R(10)=R(5);
  R(10)&=R(3);
  R(8)=R(6);
  { c->pr=0x8c09a082u; R(4)=LD32(R(13)+32); f_8c0645a2(c); }
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c09a09a;
  R(2)=0x800000u;
  c->t=(R(2)&R(10))==0;
  if(c->t) goto L8c09a09a;
  R(0)=LD32(R(13)+48);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09a09a;
  R(2)=0x8c0ab4c6u;
  R(5)=R(10);
  { c->pr=0x8c09a09au; R(4)=R(13); f_8c0ab4c6(c); }
L8c09a09a:;
  R(2)=0x8c0c806eu;
  R(3)=0x0u;
  ST8(R(2),R(3));
  { R(14)=LD32(R(13)+8); goto L8c09a13e; }
L8c09a0a4:;
  R(4)=R(14);
  R(13)=LD32(R(4)+52);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c09a120;
  R(11)=LD32(R(14)+36);
  R(4)=R(13);
  R(4)+=0xcu;
  R(12)=R(13);
  R(0)=LD32(R(11));
  R(13)=R(4);
  c->t=(int32_t)R(0)==1;
  R(2)=c->t;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09a0e0;
  R(5)=R(11);
  R(9)=0x8c05e5f4u;
  R(4)=R(15);
  R(5)+=0x58u;
  R(6)=R(12);
  { c->pr=0x8c09a0d0u; R(4)+=0xcu; f_8c05e5f4(c); }
  R(5)=R(11);
  R(5)+=0x58u;
  R(6)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c09a0dau; R(4)=R(15); sh4_call(c,tg); }
  R(12)=R(15);
  R(13)=R(15);
  R(12)+=0xcu;
L8c09a0e0:;
  R(0)=LD32(c->gbr+88);
  R(5)=R(12);
  R(11)=0x8c084d00u;
  R(7)=R(8);
  R(6)=R(13);
  { c->pr=0x8c09a0eeu; R(4)=R(0); f_8c084d00(c); }
  { R(6)=R(0); goto L8c09a124; }
L8c09a120:;
  R(4)=0x40u;
  R(6)=R(4);
L8c09a124:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c09a136;
  R(2)=LD32(R(14)+48);
  R(3)=0x200u;
  R(2)&=R(3);
  R(2)>>=8;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09a13c;
L8c09a136:;
  R(5)=R(10);
  { c->pr=0x8c09a13cu; R(4)=R(14); f_8c09a060(c); }
L8c09a13c:;
  R(14)=LD32(R(14)+20);
L8c09a13e:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c09a0a4;
  R(3)=0x8c064640u;
  { c->pr=0x8c09a148u;  f_8c064640(c); }
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
void f_8c09a15c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  R(5)=R(4);
  R(4)=0x20u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(5)+48);
  R(4)&=R(0);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c09a1e0;
  R(3)=0x8c0645a2u;
  { c->pr=0x8c09a17cu; R(4)=LD32(R(13)+32); f_8c0645a2(c); }
  R(2)=LD32(R(13)+44);
  R(3)=0x800000u;
  R(12)&=R(2);
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c09a194;
  R(0)=LD32(R(13)+48);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09a194;
  R(2)=0x8c0ab4c6u;
  R(5)=R(12);
  { c->pr=0x8c09a194u; R(4)=R(13); f_8c0ab4c6(c); }
L8c09a194:;
  R(14)=LD32(R(13)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c09a1ac;
L8c09a19a:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09a1a6;
  R(5)=R(12);
  { c->pr=0x8c09a1a6u; R(4)=R(14); f_8c09a15c(c); }
L8c09a1a6:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c09a19a;
L8c09a1ac:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c064640u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064640(c); return; } }
L8c09a1e0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09a1ea(SH4Ctx *c) {
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
  R(15)+=0xffffffdcu;
  R(0)=LD32(R(4)+48);
  R(8)=R(5);
  R(5)=0x20u;
  R(14)=R(4);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(10)=R(6); if(k) goto L8c09a21a; }
  {  goto L8c09a5fa; }
L8c09a21a:;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c09a22c;
  { R(0)=0x1u; goto L8c09a22e; }
L8c09a22c:;
  R(0)=0x0u;
L8c09a22e:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c09a238;
  {  goto L8c09a5fa; }
L8c09a238:;
  R(12)=0x8c0c806eu;
  R(13)=0x1u;
  R(2)=0x8c027e4au;
  ST8(R(12),R(13));
  { c->pr=0x8c09a244u; R(4)=R(14); f_8c027e4a(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(14); if(k) goto L8c09a250; }
  R(0)=(int32_t)(int8_t)LD8(R(12));
  R(0)|=0x2u;
  ST8(R(12),R(0));
L8c09a250:;
  R(2)=0x8c028280u;
  { c->pr=0x8c09a256u;  f_8c028280(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(14); if(k) goto L8c09a262; }
  R(0)=(int32_t)(int8_t)LD8(R(12));
  R(0)|=0x4u;
  ST8(R(12),R(0));
L8c09a262:;
  R(2)=0x8c05689eu;
  { c->pr=0x8c09a268u;  f_8c05689e(c); }
  R(9)=R(0);
  R(0)=LD32(R(14)+48);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c09a2c0;
  R(2)=LD32(R(14)+4);
  R(0)=0x25u;
  R(4)=0x800u;
  R(14)=LD32(R(2)+4);
  R(3)=0xdfu;
  R(4)|=R(9);
  ST32(R(14)+32,R(4));
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)&=R(3);
  { ST8(R(14)+R(0),R(2)); goto L8c09a5fa; }
L8c09a2c0:;
  R(0)=0x14u;
  R(11)=0x0u;
  ST8(R(15)+R(0),R(11));
  R(12)=LD32(R(14)+28);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c09a2e8;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c09a2e8;
  R(3)=LD32(R(12)+4);
  R(0)=0x24u;
  R(2)=LD32(R(3)+4);
  R(1)=(int32_t)(int8_t)LD8(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c09a2e8;
  R(3)=0x8c0645a2u;
  R(0)=0x14u;
  ST8(R(15)+R(0),R(13));
  { c->pr=0x8c09a2e8u; R(4)=LD32(R(12)+32); f_8c0645a2(c); }
L8c09a2e8:;
  R(2)=0x8c0645a2u;
  { c->pr=0x8c09a2eeu; R(4)=LD32(R(14)+32); f_8c0645a2(c); }
  R(4)=R(14);
  R(12)=LD32(R(4)+52);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c09a2fc;
  R(0)=0xcu;
  ST32(R(15),R(12));
  fp_ld(c,15,R(0)+R(12));
L8c09a2fc:;
  R(3)=0x200000u;
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c09a384;
  R(1)=0x8c0847e0u;
  { c->pr=0x8c09a308u;  f_8c0847e0(c); }
  R(3)=0x8c0847ecu;
  { c->pr=0x8c09a30eu; fp_mov(c,14,0); f_8c0847ec(c); }
  R(3)=0x8c05690eu;
  R(0)=0x10u;
  fp_st(c,0,R(0)+R(15));
  { c->pr=0x8c09a318u; R(4)=R(14); f_8c05690e(c); }
  R(0)=R(0)&0xFF;
  R(2)=0x8c0568f8u;
  c->fpul=R(0);
  fp_float(c,13);
  { c->pr=0x8c09a324u; R(4)=R(14); f_8c0568f8(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,14,3);
  R(0)=R(0)&0xFF;
  c->fpul=R(0);
  { uint32_t k=!c->t; fp_float(c,12); if(k) goto L8c09a342; }
  R(2)=0x8c0847e6u;
  { c->pr=0x8c09a336u; fp_mov(c,4,13); f_8c0847e6(c); }
  R(3)=0x8c0847f2u;
  fp_mov(c,4,13);
  { c->pr=0x8c09a33eu; fp_arith(c,1,4,12); f_8c0847f2(c); }
  {  goto L8c09a364; }
L8c09a342:;
  fp_cmp(c,1,14,12);
  if(!c->t) goto L8c09a364;
  fp_cmp(c,1,13,14);
  if(!c->t) goto L8c09a34e;
  { fp_mov(c,4,14); goto L8c09a350; }
L8c09a34e:;
  fp_mov(c,4,13);
L8c09a350:;
  R(2)=0x8c0847e6u;
  { c->pr=0x8c09a356u;  f_8c0847e6(c); }
  R(3)=0x8c0847e0u;
  { c->pr=0x8c09a35cu;  f_8c0847e0(c); }
  R(2)=0x8c0847f2u;
  fp_mov(c,4,0);
  { c->pr=0x8c09a364u; fp_arith(c,1,4,12); f_8c0847f2(c); }
L8c09a364:;
  R(4)=R(14);
  R(3)=LD32(R(4)+48);
  R(5)=R(14);
  R(1)=0xffffffcfu;
  ST32(R(15)+4,R(3));
  R(10)&=R(1);
  R(4)=LD32(R(15)+4);
  R(3)=0x10000u;
  R(4)|=R(3);
  ST32(R(5)+48,R(4));
  R(2)=LD32(R(14)+44);
  ST32(R(15)+12,R(2));
  R(2)=0xfffffff7u;
  R(4)=LD32(R(15)+12);
  R(4)&=R(2);
  ST32(R(5)+44,R(4));
L8c09a384:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==127;
  if(c->t) goto L8c09a400;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c09a400;
  R(3)=0x8c2e70a4u;
  R(7)=R(10);
  R(0)=LD32(c->gbr+88);
  R(5)=LD32(R(15));
  R(2)=0x8c08480eu;
  R(6)=LD32(R(3));
  fp_mov(c,4,15);
  { c->pr=0x8c09a3a0u; R(4)=R(0); f_8c08480e(c); }
  { R(6)=R(0); goto L8c09a402; }
L8c09a400:;
  R(6)=0x7fu;
L8c09a402:;
  R(2)=0xfe65f7fbu;
  R(3)=LD32(R(14)+44);
  R(1)=0x800000u;
  R(8)|=R(2);
  R(8)&=R(3);
  c->t=(R(1)&R(8))==0;
  if(c->t) goto L8c09a444;
  R(0)=LD32(R(14)+48);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09a444;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c09a444;
  R(3)=0xfffff7ffu;
  R(2)=R(13)&0xFF;
  R(4)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  R(9)&=R(3);
  R(5)=R(13);
  { uint32_t k=c->t; R(4)=LD32(R(4)+4); if(k) goto L8c09a438; }
  R(0)=0x25u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)=0x20u;
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  {  goto L8c09a48a; }
L8c09a438:;
  R(0)=0x25u;
  R(2)=0xdfu;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)&=R(2);
  { ST8(R(4)+R(0),R(1)); goto L8c09a48a; }
L8c09a444:;
  R(0)=0x800u;
  R(3)=R(11)&0xFF;
  R(4)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  R(9)|=R(0);
  R(5)=R(11);
  { uint32_t k=c->t; R(4)=LD32(R(4)+4); if(k) goto L8c09a480; }
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x20u;
  { R(2)|=R(3); goto L8c09a488; }
L8c09a480:;
  R(0)=0x25u;
  R(3)=0xdfu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)&=R(3);
L8c09a488:;
  ST8(R(4)+R(0),R(2));
L8c09a48a:;
  R(6)=LD32(R(14)+4);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  R(4)=R(9);
  R(6)=LD32(R(6)+4);
  { uint32_t k=!c->t; ST32(R(6)+32,R(9)); if(k) goto L8c09a49c; }
  {  goto L8c09a5c8; }
L8c09a49c:;
  R(2)=LD32(R(14)+16);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c09a4a6;
  {  goto L8c09a5c8; }
L8c09a4a6:;
  R(2)=0x8c0ab4c0u;
  { c->pr=0x8c09a4acu; R(4)=0x1u; f_8c0ab4c0(c); }
  R(5)=R(14);
  R(4)=LD32(R(5)+48);
  R(3)=0x20000u;
  R(4)&=R(3);
  R(4)>>=16;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09a4c2;
  R(2)=0x8c07ac08u;
  { c->pr=0x8c09a4c2u; R(4)=0x0u; f_8c07ac08(c); }
L8c09a4c2:;
  R(3)=0x8c05105cu;
  { c->pr=0x8c09a4c8u; R(4)=R(14); f_8c05105c(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+8,R(0)); if(k) goto L8c09a4d4; }
  R(2)=0x8c07ab9au;
  { c->pr=0x8c09a4d4u; R(4)=R(0); f_8c07ab9a(c); }
L8c09a4d4:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c09a580;
  R(3)=0x8c0c5198u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09a580;
  R(2)=0x8c0163e6u;
  R(12)=LD32(R(14)+36);
  { c->pr=0x8c09a4e8u; R(4)=R(12); f_8c0163e6(c); }
  fp_arith(c,2,15,0);
  R(3)=0x8c014eaau;
  R(6)=LD32(R(15));
  R(4)=R(15);
  R(5)=R(12);
  { c->pr=0x8c09a4f6u; R(4)+=0x18u; f_8c014eaa(c); }
  R(3)=0x8c2dd964u;
  R(4)=0x8c2dd4b4u;
  R(2)=LD32(R(3));
  R(12)=0x8c2dd968u;
  R(10)=R(4);
  R(2)<<=2;
  R(2)+=R(4);
  c->t=R(10)==R(2);
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c09a58e; }
L8c09a50a:;
  R(3)=0x8c07adb0u;
  R(5)=R(15);
  fp_mov(c,4,15);
  R(5)+=0x18u;
  { c->pr=0x8c09a516u; R(4)=LD32(R(10)); f_8c07adb0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09a520;
  { ST8(R(12),R(13)); goto L8c09a522; }
L8c09a520:;
  ST8(R(12),R(11));
L8c09a522:;
  R(2)=LD32(R(15));
  R(10)+=0x4u;
  c->t=R(10)==R(2);
  { uint32_t k=!c->t; R(12)+=0x1u; if(k) goto L8c09a50a; }
  {  goto L8c09a58e; }
L8c09a580:;
  R(1)=0x8c0c5198u;
  R(2)=0x8c07ada0u;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(3)&R(3))==0;
  R(4)=c->t;
  { c->pr=0x8c09a58eu;  f_8c07ada0(c); }
L8c09a58e:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c09a5a6;
L8c09a594:;
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09a5a0;
  R(5)=R(8);
  { c->pr=0x8c09a5a0u; R(4)=R(13); f_8c09a15c(c); }
L8c09a5a0:;
  R(13)=LD32(R(13)+20);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c09a594;
L8c09a5a6:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09a5b2;
  R(3)=0x8c07abb8u;
  { c->pr=0x8c09a5b2u; R(4)=0x1u; f_8c07abb8(c); }
L8c09a5b2:;
  R(5)=R(14);
  R(4)=LD32(R(5)+48);
  R(3)=0x20000u;
  R(4)&=R(3);
  R(4)>>=16;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09a5c8;
  R(2)=0x8c07ac08u;
  { c->pr=0x8c09a5c8u; R(4)=0x1u; f_8c07ac08(c); }
L8c09a5c8:;
  R(3)=0x200000u;
  c->t=(R(9)&R(3))==0;
  if(c->t) goto L8c09a5e6;
  R(1)=0x8c0847e6u;
  { c->pr=0x8c09a5d4u; fp_mov(c,4,14); f_8c0847e6(c); }
  R(3)=0x8c0847f2u;
  R(0)=0x10u;
  { c->pr=0x8c09a5dcu; fp_ld(c,4,R(0)+R(15)); f_8c0847f2(c); }
  R(2)=LD32(R(15)+4);
  R(4)=R(14);
  ST32(R(4)+48,R(2));
  R(5)=LD32(R(15)+12);
  ST32(R(4)+44,R(5));
L8c09a5e6:;
  R(3)=0x8c064640u;
  { c->pr=0x8c09a5ecu;  f_8c064640(c); }
  R(0)=0x14u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09a5fa;
  R(3)=0x8c064640u;
  { c->pr=0x8c09a5fau;  f_8c064640(c); }
L8c09a5fa:;
  R(15)+=0x24u;
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
void f_8c09a616(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0645a2u;
  R(10)=R(6);
  R(14)=R(4);
  R(13)=R(5);
  { c->pr=0x8c09a630u; R(4)=LD32(R(14)+32); f_8c0645a2(c); }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09a63a;
  {  goto L8c09a79c; }
L8c09a63a:;
  R(3)=LD32(R(14)+16);
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c09a644;
  {  goto L8c09a7ce; }
L8c09a644:;
  R(4)=R(14);
  R(11)=LD32(R(4)+52);
  R(12)=LD32(R(14)+4);
  c->t=(R(11)&R(11))==0;
  { uint32_t k=c->t; R(12)=LD32(R(12)+4); if(k) goto L8c09a656; }
  R(0)=0xcu;
  ST32(R(15),R(11));
  fp_ld(c,4,R(0)+R(11));
L8c09a656:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==127;
  if(c->t) goto L8c09a6c0;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c09a6c0;
  R(3)=0x8c2e70a4u;
  R(7)=R(10);
  R(0)=LD32(c->gbr+88);
  R(2)=0x8c08480eu;
  R(5)=LD32(R(15));
  R(6)=LD32(R(3));
  { c->pr=0x8c09a670u; R(4)=R(0); f_8c08480e(c); }
  { R(11)=R(0); goto L8c09a6c2; }
L8c09a6c0:;
  R(11)=0x7fu;
L8c09a6c2:;
  R(2)=0xfe65f7fbu;
  R(3)=LD32(R(14)+44);
  R(1)=0x8c05689eu;
  R(13)|=R(2);
  R(13)&=R(3);
  { c->pr=0x8c09a6d0u; R(4)=R(14); f_8c05689e(c); }
  R(3)=0x800000u;
  c->t=(R(3)&R(13))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c09a70a; }
  R(0)=LD32(R(14)+48);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09a70a;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c09a70a;
  R(6)=0x1u;
  R(3)=0xfffff7ffu;
  R(5)=R(6);
  R(6)=R(6)&0xFF;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(4)&=R(3); if(k) goto L8c09a6fe; }
  R(0)=0x25u;
  R(1)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(2)=0x20u;
  R(1)|=R(2);
  ST8(R(12)+R(0),R(1));
  {  goto L8c09a76a; }
L8c09a6fe:;
  R(0)=0x25u;
  R(2)=0xdfu;
  R(1)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(1)&=R(2);
  { ST8(R(12)+R(0),R(1)); goto L8c09a76a; }
L8c09a70a:;
  R(6)=0x0u;
  R(0)=0x800u;
  R(5)=R(6);
  R(6)=R(6)&0xFF;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(4)|=R(0); if(k) goto L8c09a760; }
  R(0)=0x25u;
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(3)=0x20u;
  { R(2)|=R(3); goto L8c09a768; }
L8c09a760:;
  R(0)=0x25u;
  R(3)=0xdfu;
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(2)&=R(3);
L8c09a768:;
  ST8(R(12)+R(0),R(2));
L8c09a76a:;
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; ST32(R(12)+32,R(4)); if(k) goto L8c09a7ce; }
  R(2)=0x8c0ab4c0u;
  { c->pr=0x8c09a778u; R(4)=0x1u; f_8c0ab4c0(c); }
  R(12)=LD32(R(14)+8);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c09a792;
L8c09a77e:;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09a78c;
  R(5)=R(13);
  R(6)=R(11);
  { c->pr=0x8c09a78cu; R(4)=R(12); f_8c09a616(c); }
L8c09a78c:;
  R(12)=LD32(R(12)+20);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c09a77e;
L8c09a792:;
  R(3)=0x8c0ab4c0u;
  { c->pr=0x8c09a798u; R(4)=0x0u; f_8c0ab4c0(c); }
  {  goto L8c09a7ce; }
L8c09a79c:;
  R(3)=LD32(R(14)+44);
  R(2)=0x800000u;
  R(13)&=R(3);
  c->t=(R(2)&R(13))==0;
  if(c->t) goto L8c09a7b4;
  R(0)=LD32(R(14)+48);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c09a7b4;
  R(2)=0x8c0ab4c6u;
  R(5)=R(13);
  { c->pr=0x8c09a7b4u; R(4)=R(14); f_8c0ab4c6(c); }
L8c09a7b4:;
  R(12)=LD32(R(14)+8);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c09a7ce;
L8c09a7ba:;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09a7c8;
  R(5)=R(13);
  R(6)=R(10);
  { c->pr=0x8c09a7c8u; R(4)=R(12); f_8c09a616(c); }
L8c09a7c8:;
  R(12)=LD32(R(12)+20);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c09a7ba;
L8c09a7ce:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c064640u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064640(c); return; } }
}
void f_8c09a800(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(10)=0x8c0c5374u;
  R(3)=0x0u;
  R(2)=0x8c038238u;
  ST32(R(15),R(4));
  R(9)=(int32_t)(int8_t)LD8(R(10));
  { c->pr=0x8c09a81eu; ST8(R(10),R(3)); f_8c038238(c); }
  R(1)=0x8c03aa80u;
  { c->pr=0x8c09a824u;  f_8c03aa80(c); }
  R(3)=0x8c03aa92u;
  { c->pr=0x8c09a82au; ST8(R(15)+4,R(0)); f_8c03aa92(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09a836;
  R(3)=0x8c03aa7au;
  { c->pr=0x8c09a836u; R(4)=0x0u; f_8c03aa7a(c); }
L8c09a836:;
  R(3)=0x8c064566u;
  R(0)=LD32(c->gbr+88);
  { c->pr=0x8c09a83eu; R(4)=R(0); f_8c064566(c); }
  R(12)=0x8c0c94d4u;
  R(14)=0x8c2e70a8u;
  R(2)=(int32_t)(int16_t)LD16(R(12));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c09a862; }
L8c09a84a:;
  {uint32_t v=LD32(R(14));R(14)+=4;R(11)=v;}
  R(6)=0x0u;
  R(3)=LD32(R(15));
  R(5)=LD32(R(11)+44);
  R(5)&=R(3);
  { c->pr=0x8c09a858u; R(4)=R(11); f_8c09a616(c); }
  R(2)=(int32_t)(int16_t)LD16(R(12));
  R(13)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(13);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c09a84a;
L8c09a862:;
  R(3)=0x8c03aa7au;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  { c->pr=0x8c09a86au; R(4)=R(0); f_8c03aa7a(c); }
  ST8(R(10),R(9));
  R(9)=(uint32_t)(int32_t)(int8_t)R(9);
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c09a878;
  R(3)=0x8c038230u;
  { c->pr=0x8c09a878u;  f_8c038230(c); }
L8c09a878:;
  R(0)=0x1u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09a8e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(2)=R(15);
  R(14)=R(4);
  R(4)=R(7);
  R(2)+=0x14u;
  c->t=R(4)==R(2);
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(13)=R(7);
  { uint32_t k=!c->t; R(5)=R(7); if(k) goto L8c09a966; }
  R(3)=0x8c05e6eau;
  R(4)=R(13);
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c09a908u; R(4)+=0x8u; f_8c05e6ea(c); }
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_fmac(c,3,2);
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c09a9c2; }
L8c09a966:;
  R(6)=R(13);
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(6));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  R(4)=R(13);
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  R(0)=0x8u;
  R(7)=R(13);
  R(5)=R(13);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(7));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(7));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_fmac(c,3,2);
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(7));
L8c09a9c2:;
  R(0)=0x24u;
  R(5)=R(14);
  fp_ld(c,2,R(0)+R(14));
  R(6)=R(15);
  R(3)=0x8c05e5f4u;
  R(0)=0x1cu;
  fp_fmac(c,3,2);
  R(4)=R(15);
  R(5)+=0x58u;
  R(6)+=0x14u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c09a9dcu; R(4)+=0x14u; f_8c05e5f4(c); }
  R(2)=0x8c0163e6u;
  { c->pr=0x8c09a9e2u; R(4)=R(14); f_8c0163e6(c); }
  R(0)=0xcu;
  R(5)=LD32(R(15)+4);
  fp_ld(c,4,R(0)+R(13));
  R(6)=R(15);
  R(3)=0x8c078100u;
  R(6)+=0x14u;
  fp_arith(c,2,4,0);
  { c->pr=0x8c09a9f4u; R(4)=LD32(R(15)); f_8c078100(c); }
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09a9fe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=R(6);
  R(14)=LD32(R(13)+48);
  R(3)=0x1u;
  R(10)=R(4);
  c->t=(R(3)&R(14))==0;
  R(11)=R(5);
  R(12)=R(7);
  { uint32_t k=c->t; R(9)=LD32(R(15)+52); if(k) goto L8c09aa26; }
  {  goto L8c09ad46; }
L8c09aa26:;
  R(3)=LD32(R(13));
  R(2)=0x8c2e71dcu;
  R(0)=R(3);
  c->t=(int32_t)R(0)==2;
  ST32(R(2),R(3));
  if(c->t) goto L8c09aa3e;
  R(3)=0x8c0c9518u;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(14))==0;
  if(c->t) goto L8c09aa3e;
  {  goto L8c09ad46; }
L8c09aa3e:;
  R(8)=0x8c2e71bcu;
  R(3)=0x0u;
  R(1)=R(3);
  R(0)=0x8c2e71b8u;
  R(2)=0x8c2e71b4u;
  ST32(R(2),R(3));
  ST32(R(0),R(3));
  ST32(R(8),R(1));
  R(1)=0x8c064b2au;
  { c->pr=0x8c09aa54u; R(4)=R(13); f_8c064b2a(c); }
  R(2)=0x8c2e71d8u;
  R(3)=0x10u;
  R(3)&=R(14);
  ST8(R(2),R(3));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c09aaac;
  R(4)=R(13);
  R(5)=LD32(R(4)+52);
  R(2)=0x8c2e71b8u;
  R(3)=R(5);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(2),R(5)); if(k) goto L8c09aab4; }
  R(4)=LD32(R(2));
  R(6)=R(15);
  R(2)=0x8c2e71b8u;
  R(6)+=0x8u;
  ST32(R(15),R(4));
  R(3)=LD32(R(2));
  R(4)=0x8c2e71c0u;
  R(3)+=0xcu;
  ST32(R(15)+4,R(3));
  R(3)=R(15);
  R(2)=LD32(R(13)+36);
  R(3)+=0x8u;
  R(2)+=0x58u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=0x8c05e5f4u;
  { c->pr=0x8c09aa9cu; R(5)=LD32(R(15)); f_8c05e5f4(c); }
  R(4)=0x8c2e71ccu;
  R(6)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=0x8u;
  { c->pr=0x8c09aaa8u; R(5)=LD32(R(15)+4); f_8c05e5f4(c); }
  {  goto L8c09aab4; }
L8c09aaac:;
  R(4)=R(13);
  R(2)=0x8c2e71b4u;
  R(5)=LD32(R(4)+52);
  ST32(R(2),R(5));
L8c09aab4:;
  R(3)=0x8c2e71b4u;
  R(7)=LD32(R(3));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c09ab20;
  R(2)=0x8c2e71b8u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c09ab20;
  R(2)=0x8c2e71d9u;
  R(1)=0x1u;
  { ST8(R(2),R(1)); goto L8c09ab4a; }
L8c09ab20:;
  R(3)=0x8c2e71d8u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09ab34;
  R(5)=R(10);
  R(6)=R(11);
  { c->pr=0x8c09ab30u; R(4)=LD32(R(13)+36); f_8c09a8e0(c); }
  {  goto L8c09ab46; }
L8c09ab34:;
  R(6)=0x8c2e71c0u;
  R(1)=0x0u;
  R(2)=0x8c07773au;
  R(5)=R(11);
  R(7)=0x8c2e71ccu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c09ab44u; R(4)=R(10); f_8c07773a(c); }
  R(15)+=0x4u;
L8c09ab46:;
  R(3)=0x8c2e71d9u;
  ST8(R(3),R(0));
L8c09ab4a:;
  R(1)=0x8c2e71d9u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09ab56;
  {  goto L8c09ad10; }
L8c09ab56:;
  R(2)=0x8c2e71dcu;
  R(3)=0x8u;
  R(4)=LD32(R(2));
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c09ab86;
  R(3)=0x8c09341au;
  { c->pr=0x8c09ab66u; R(4)=LD32(R(13)+4); f_8c09341a(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c09ab76; }
  R(3)=0x8c093320u;
  { c->pr=0x8c09ab72u; R(4)=R(0); f_8c093320(c); }
  { R(3)=R(0); goto L8c09ab78; }
L8c09ab76:;
  R(3)=0x0u;
L8c09ab78:;
  ST32(R(8),R(3));
  R(3)=0x8c093416u;
  { c->pr=0x8c09ab80u; R(4)=LD32(R(13)+4); f_8c093416(c); }
  R(2)=LD32(R(0)+4);
  { ST32(R(15),R(2)); goto L8c09abd2; }
L8c09ab86:;
  R(1)=0x20u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c09abbe;
  R(1)=0x8c0a2880u;
  { c->pr=0x8c09ab92u; R(4)=LD32(R(13)+4); f_8c0a2880(c); }
  R(3)=0x8c09341au;
  { c->pr=0x8c09ab98u; R(4)=R(0); f_8c09341a(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c09aba8; }
  R(3)=0x8c093320u;
  { c->pr=0x8c09aba4u; R(4)=R(0); f_8c093320(c); }
  { R(3)=R(0); goto L8c09abaa; }
L8c09aba8:;
  R(3)=0x0u;
L8c09abaa:;
  ST32(R(8),R(3));
  R(3)=0x8c0a2880u;
  { c->pr=0x8c09abb2u; R(4)=LD32(R(13)+4); f_8c0a2880(c); }
  R(2)=0x8c093416u;
  { c->pr=0x8c09abb8u; R(4)=R(0); f_8c093416(c); }
  R(3)=LD32(R(0)+4);
  { ST32(R(15),R(3)); goto L8c09abd2; }
L8c09abbe:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c09abd2;
  R(1)=0x8c059f8au;
  R(5)=R(13);
  { c->pr=0x8c09abccu; R(4)=0x3u; f_8c059f8a(c); }
  R(3)=0x0u;
  ST32(R(8),R(0));
  ST32(R(15),R(3));
L8c09abd2:;
  R(2)=LD32(R(8));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09abdc;
  {  goto L8c09ad10; }
L8c09abdc:;
  R(2)=0x4u;
  c->t=(R(14)&R(2))==0;
  if(c->t) goto L8c09ac40;
  R(6)=LD32(R(13)+36);
  R(4)=0x8c2e71e0u;
  R(3)=0x8c05e612u;
  R(6)+=0x58u;
  { c->pr=0x8c09abeeu; R(5)=R(10); f_8c05e612(c); }
  R(2)=0x8c05e6eau;
  R(4)=0x8c2e71ecu;
  { c->pr=0x8c09abf6u; R(5)=R(11); f_8c05e6ea(c); }
  {  goto L8c09ac5c; }
L8c09ac40:;
  R(1)=0x8c0153d8u;
  R(4)=0x8c2e71f8u;
  { c->pr=0x8c09ac48u; R(5)=LD32(R(13)+36); f_8c0153d8(c); }
  R(3)=0x8c014eaau;
  R(4)=0x8c2e71e0u;
  R(5)=0x8c2e71f8u;
  { c->pr=0x8c09ac52u; R(6)=R(10); f_8c014eaa(c); }
  R(2)=0x8c014f10u;
  R(4)=0x8c2e71ecu;
  R(5)=0x8c2e71f8u;
  { c->pr=0x8c09ac5cu; R(6)=R(11); f_8c014f10(c); }
L8c09ac5c:;
  R(4)=0x8c2e71e0u;
  R(3)=0x8c0aafa0u;
  R(7)=0x8c2e7260u;
  R(5)=0x8c2e71ecu;
  { c->pr=0x8c09ac68u; R(6)=LD32(R(8)); f_8c0aafa0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09ad10;
  R(3)=(int32_t)(int16_t)LD16(R(9));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09ace0;
  R(2)=0x8c2e7260u;
  R(1)=R(12);
  R(3)=0x8c09c3dcu;
  R(1)+=0x8u;
  { c->pr=0x8c09ac7eu; R(0)=0x50u; f_8c09c3dc(c); }
  R(3)=0x1u;
  R(5)=0x8c2e7268u;
  R(6)=R(10);
  ST32(R(12),R(13));
  R(1)=LD32(R(8));
  ST32(R(12)+4,R(1));
  ST16(R(9),R(3));
  R(3)=0x8c05e612u;
  { c->pr=0x8c09ac92u; R(4)=R(11); f_8c05e612(c); }
  R(3)=0x8c2e71b0u;
  R(2)=LD32(R(15));
  { ST32(R(3),R(2)); goto L8c09ad10; }
L8c09ace0:;
  R(0)=0x1cu;
  R(3)=0x8c2e7268u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c09ad10;
  R(2)=0x8c2e7260u;
  R(1)=R(12);
  R(3)=0x8c09c3dcu;
  R(1)+=0x8u;
  { c->pr=0x8c09acfau; R(0)=0x50u; f_8c09c3dc(c); }
  R(5)=0x8c2e7268u;
  R(6)=R(10);
  R(3)=0x8c05e612u;
  ST32(R(12),R(13));
  R(1)=LD32(R(8));
  ST32(R(12)+4,R(1));
  { c->pr=0x8c09ad0au; R(4)=R(11); f_8c05e612(c); }
  R(3)=0x8c2e71b0u;
  R(2)=LD32(R(15));
  ST32(R(3),R(2));
L8c09ad10:;
  R(3)=0x8c2e71d9u;
  R(1)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c09ad26;
  R(1)=LD32(R(13)+48);
  R(2)=0x200u;
  R(1)&=R(2);
  R(1)>>=8;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c09ad40;
L8c09ad26:;
  R(14)=LD32(R(13)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c09ad40;
L8c09ad2c:;
  R(6)=R(14);
  R(5)=R(11);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(7)=R(12);
  { c->pr=0x8c09ad38u; R(4)=R(10); f_8c09a9fe(c); }
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c09ad2c; }
L8c09ad40:;
  R(2)=0x8c06452cu;
  { c->pr=0x8c09ad46u;  f_8c06452c(c); }
L8c09ad46:;
  R(0)=(int32_t)(int16_t)LD16(R(9));
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
void f_8c09ad5c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(2)=0x8c06450au;
  R(3)=0x0u;
  ST32(R(15)+12,R(4));
  ST32(R(15)+16,R(5));
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  { c->pr=0x8c09ad70u; ST16(R(15),R(3)); f_8c06450a(c); }
  R(1)=R(15);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+20);
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(15)+8);
  { c->pr=0x8c09ad7eu; R(4)=LD32(R(15)+16); f_8c09a9fe(c); }
  R(3)=0x8c06452cu;
  { c->pr=0x8c09ad84u; ST16(R(15)+8,R(0)); f_8c06452c(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c09ade0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffed8u;
  R(15)+=R(0);
  R(0)=0x13cu;
  ST32(R(15),R(7));
  R(7)=R(15);
  R(10)=LD32(R(15)+R(0));
  R(0)=0x140u;
  R(13)=LD32(R(15)+R(0));
  { c->pr=0x8c09adfeu; R(7)+=0x20u; f_8c09ad5c(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)>0;
  if(c->t) goto L8c09ae08;
  {  goto L8c09af18; }
L8c09ae08:;
  R(0)=R(15);
  R(0)+=0x20u;
  R(4)=LD32(R(0));
  R(3)=0x2au;
  R(12)=LD32(R(0)+4);
  R(14)=R(0);
  R(4)=LD32(R(4));
  c->t=(R(4)&R(3))==0;
  { uint32_t k=c->t; R(14)+=0x10u; if(k) goto L8c09ae22; }
  R(1)=LD32(R(0));
  { ST32(R(13),R(1)); goto L8c09ae26; }
L8c09ae22:;
  R(0)=0x0u;
  ST32(R(13),R(0));
L8c09ae26:;
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  { c->pr=0x8c09ae2eu; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c09aec0;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(3)=LD32(R(12)+16);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c09aec0;
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(4)=R(15);
  R(3)=LD32(R(12)+20);
  R(0)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(6)=R(2);
  ST32(R(15)+4,R(2));
  R(0)=(int32_t)(int16_t)LD16(R(14)+18);
  R(6)=LD32(R(6));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(5)=LD32(R(13));
  R(0)<<=2;
  R(6)+=R(0);
  R(5)=LD32(R(5)+36);
  R(0)=(int32_t)(int16_t)LD16(R(6)+8);
  R(6)=LD32(R(12));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=0x8c014eaau;
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c09ae72u; R(4)+=0x8u; f_8c014eaa(c); }
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c05e612u;
  R(6)+=0x8u;
  { c->pr=0x8c09ae7eu; R(4)=R(10); f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,6,R(10));
  fp_ld(c,4,R(0)+R(10));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(10));
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  { fp_mov(c,3,6); goto L8c09aefc; }
L8c09aec0:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+18);
  R(7)=R(15);
  R(3)=0x8c087350u;
  R(7)+=0x14u;
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(14)+16);
  R(5)=R(0);
  { c->pr=0x8c09aed2u; R(4)=R(12); f_8c087350(c); }
  R(5)=LD32(R(13));
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x14u;
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c09aee0u; R(4)=R(10); f_8c014f10(c); }
  R(0)=0x4u;
  fp_ld(c,4,R(10));
  fp_ld(c,5,R(0)+R(10));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(10));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(10));
L8c09aefc:;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0x4u;
  fp_st(c,2,R(10));
  fp_ld(c,3,R(0)+R(10));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(10));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(10));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(10));
  { R(0)=0x1u; goto L8c09af1a; }
L8c09af18:;
  R(0)=0x0u;
L8c09af1a:;
  R(1)=0x128u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c09af60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c2e72b0u;
  R(8)=0x0u;
  R(11)=R(5);
  R(14)=R(6);
  ST32(R(3),R(8));
  R(5)=R(14);
  R(3)=0x8c2e72d4u;
  R(12)=R(4);
  R(6)=0x10u;
  R(13)=0x8c2e72d8u;
  R(4)=0x8c2e72b4u;
  R(9)=0x8c2e72d0u;
  ST32(R(4),R(8));
  ST32(R(13),R(8));
  R(1)=LD32(R(14)+36);
  R(1)+=0x58u;
  ST32(R(9),R(1));
  R(0)=LD32(R(5)+48);
  R(6)&=R(0);
  ST8(R(3),R(6));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09afce;
  R(6)=R(14);
  R(5)=LD32(R(6)+52);
  R(3)=R(5);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(4),R(5)); if(k) goto L8c09afd4; }
  R(5)=LD32(R(4));
  R(3)=0x8c05e5f4u;
  ST32(R(15),R(5));
  R(2)=LD32(R(4));
  R(4)=0x8c2e72b8u;
  R(2)+=0xcu;
  ST32(R(15)+4,R(2));
  R(6)=LD32(R(9));
  { c->pr=0x8c09afc0u; R(5)=LD32(R(15)); f_8c05e5f4(c); }
  R(3)=0x8c05e5f4u;
  R(4)=0x8c2e72c4u;
  R(6)=LD32(R(9));
  { c->pr=0x8c09afcau; R(5)=LD32(R(15)+4); f_8c05e5f4(c); }
  {  goto L8c09afd4; }
L8c09afce:;
  R(3)=0x8c2e72b0u;
  R(4)=LD32(R(5)+52);
  ST32(R(3),R(4));
L8c09afd4:;
  R(2)=0x8c2e72b0u;
  R(10)=0x8c2e72d5u;
  R(7)=LD32(R(2));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c09afec;
  R(3)=0x8c2e72b4u;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c09afec;
  R(1)=0x1u;
  { ST8(R(10),R(1)); goto L8c09b012; }
L8c09afec:;
  R(3)=0x8c2e72d4u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c09b000;
  R(5)=R(12);
  R(6)=R(11);
  { c->pr=0x8c09affcu; R(4)=LD32(R(14)+36); f_8c09a8e0(c); }
  {  goto L8c09b010; }
L8c09b000:;
  R(6)=0x8c2e72b8u;
  R(5)=R(11);
  R(2)=0x8c07773au;
  R(7)=0x8c2e72c4u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c09b00eu; R(4)=R(12); f_8c07773a(c); }
  R(15)+=0x4u;
L8c09b010:;
  ST8(R(10),R(0));
L8c09b012:;
  R(3)=(int32_t)(int8_t)LD8(R(10));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09b01c;
  {  goto L8c09b12c; }
L8c09b01c:;
  R(3)=LD32(R(14));
  R(2)=0x8u;
  R(5)=0x8c2e72dcu;
  R(4)=R(3);
  c->t=(R(2)&R(4))==0;
  ST32(R(5),R(3));
  if(c->t) goto L8c09b036;
  R(2)=0x8c093416u;
  { c->pr=0x8c09b030u; R(4)=LD32(R(14)+4); f_8c093416(c); }
  R(3)=LD32(R(0)+4);
  { ST32(R(13),R(3)); goto L8c09b05e; }
L8c09b036:;
  R(1)=0x20u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c09b04e;
  R(2)=0x8c0a2880u;
  { c->pr=0x8c09b042u; R(4)=LD32(R(14)+4); f_8c0a2880(c); }
  R(3)=0x8c093416u;
  { c->pr=0x8c09b048u; R(4)=R(0); f_8c093416(c); }
  R(2)=LD32(R(0)+4);
  { ST32(R(13),R(2)); goto L8c09b05e; }
L8c09b04e:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c09b05e;
  R(3)=0x8c059f8au;
  R(5)=R(14);
  { c->pr=0x8c09b05cu; R(4)=0x3u; f_8c059f8a(c); }
  ST32(R(13),R(0));
L8c09b05e:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09b12c;
  R(5)=R(14);
  R(0)=LD32(R(5)+48);
  R(4)=0x4u;
  R(4)&=R(0);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c09b100;
  R(3)=0x8c05e612u;
  R(4)=0x8c2e72e0u;
  R(6)=LD32(R(9));
  { c->pr=0x8c09b07cu; R(5)=R(12); f_8c05e612(c); }
  R(2)=0x8c05e6eau;
  R(4)=0x8c2e72ecu;
  { c->pr=0x8c09b084u; R(5)=R(11); f_8c05e6ea(c); }
  {  goto L8c09b11c; }
L8c09b100:;
  R(2)=0x8c0153d8u;
  R(4)=0x8c2e72f8u;
  { c->pr=0x8c09b108u; R(5)=LD32(R(14)+36); f_8c0153d8(c); }
  R(3)=0x8c014eaau;
  R(4)=0x8c2e72e0u;
  R(5)=0x8c2e72f8u;
  { c->pr=0x8c09b112u; R(6)=R(12); f_8c014eaa(c); }
  R(2)=0x8c014f10u;
  R(4)=0x8c2e72ecu;
  R(5)=0x8c2e72f8u;
  { c->pr=0x8c09b11cu; R(6)=R(11); f_8c014f10(c); }
L8c09b11c:;
  R(3)=0x8c078e60u;
  R(4)=0x8c2e72e0u;
  R(5)=0x8c2e72ecu;
  { c->pr=0x8c09b126u; R(6)=LD32(R(13)); f_8c078e60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c09b15a;
L8c09b12c:;
  R(3)=(int32_t)(int8_t)LD8(R(10));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c09b140;
  R(2)=LD32(R(14)+48);
  R(3)=0x200u;
  R(2)&=R(3);
  R(2)>>=8;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c09b164;
L8c09b140:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c09b164;
L8c09b146:;
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c09b15e;
  R(5)=R(11);
  R(6)=R(13);
  { c->pr=0x8c09b154u; R(4)=R(12); f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c09b15e;
L8c09b15a:;
  { R(0)=0x1u; goto L8c09b166; }
L8c09b15e:;
  R(13)=LD32(R(13)+20);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c09b146;
L8c09b164:;
  R(0)=0x0u;
L8c09b166:;
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
