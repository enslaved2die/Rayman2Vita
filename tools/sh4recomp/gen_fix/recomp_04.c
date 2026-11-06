#include "recomp_decls.h"
void r2_set_fps_limit(int fps);
int  r2_get_fps_limit(void);
void r2_set_render_scale(int scale_pct);
int  r2_get_render_scale(void);
void f_8c02e280(SH4Ctx *c) {
  R(0)=0x8c02e320u;
  fp_ld(c,5,R(0));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,14,3);
  if(c->t) goto L8c02e298;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c02e298;
  R(0)=0x8c02e324u;
  fp_ld(c,4,R(0));
  fp_arith(c,2,15,4);
  fp_arith(c,2,14,4);
L8c02e298:;
  R(4)=0x8c0c5110u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e2a4;
  { ST8(R(4),R(14)); goto L8c02e2e8; }
L8c02e2a4:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  fp_mov(c,6,5);
  { uint32_t k=c->t; fp_arith(c,2,6,5); if(k) goto L8c02e2ba; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02e2be;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c02e2c2;
  {  goto L8c02e2c8; }
L8c02e2ba:;
  { fp_mov(c,4,5); goto L8c02e2ce; }
L8c02e2be:;
  { fp_mov(c,4,6); goto L8c02e2ce; }
L8c02e2c2:;
  fp_mov(c,4,6);
  { fp_arith(c,2,4,5); goto L8c02e2ce; }
L8c02e2c8:;
  fp_mov(c,3,6);
  fp_mov(c,4,6);
  fp_arith(c,2,4,3);
L8c02e2ce:;
  R(3)=0x8c0c5124u;
  R(2)=0x8c0c5128u;
  fp_ld(c,3,R(3));
  fp_mov(c,0,4);
  fp_arith(c,1,3,14);
  fp_mov(c,2,14);
  fp_fmac(c,2,3);
  fp_ld(c,3,R(2));
  fp_arith(c,1,3,15);
  fp_mov(c,14,2);
  fp_mov(c,2,15);
  fp_fmac(c,2,3);
  fp_mov(c,15,2);
L8c02e2e8:;
  fp_ftrc(c,14);
  R(3)=c->fpul;
  fp_ftrc(c,15);
  ST32(R(15),R(3));
  { R(2)=c->fpul; goto L8c02e342; }
L8c02e342:;
  ST32(R(15)+4,R(2));
  R(2)=0x8c0c5128u;
  R(3)=0x8c0c5124u;
  fp_st(c,14,R(3));
  fp_st(c,15,R(2));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(13)=R(13)&0xFF; if(k) goto L8c02e35c; }
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  R(8)=R(14);
  fp_st(c,3,R(0)+R(15));
L8c02e35c:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02e364;
  {  goto L8c02e496; }
L8c02e364:;
  R(10)=0x8c0c511fu;
  R(4)=LD32(R(15)+4);
  R(3)=(int32_t)(int8_t)LD8(R(10));
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(9)=0x8c0c511eu;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(!c->t) goto L8c02e378;
  R(3)=LD32(R(15)+4);
  { ST8(R(10),R(3)); goto L8c02e382; }
L8c02e378:;
  R(1)=(int32_t)(int8_t)LD8(R(9));
  c->t=(int32_t)R(4)>=(int32_t)R(1);
  if(c->t) goto L8c02e382;
  R(2)=LD32(R(15)+4);
  ST8(R(9),R(2));
L8c02e382:;
  R(5)=0x8c0c511du;
  R(4)=LD32(R(15));
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(7)=0x8c0c511cu;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(!c->t) goto L8c02e396;
  R(3)=LD32(R(15));
  { ST8(R(5),R(3)); goto L8c02e3a0; }
L8c02e396:;
  R(1)=(int32_t)(int8_t)LD8(R(7));
  c->t=(int32_t)R(4)>=(int32_t)R(1);
  if(c->t) goto L8c02e3a0;
  R(2)=LD32(R(15));
  ST8(R(7),R(2));
L8c02e3a0:;
  R(3)=0x8c0c5120u;
  R(4)=0x64u;
  R(2)=LD32(R(15));
  R(13)=(int32_t)(int8_t)LD8(R(3));
  R(1)=0x8c0c5121u;
  R(2)-=R(13);
  ST32(R(15),R(2));
  R(6)=(int32_t)(int8_t)LD8(R(1));
  R(3)=LD32(R(15)+4);
  R(3)-=R(6);
  ST32(R(15)+4,R(3));
  R(11)=LD32(R(15));
  R(2)=LD32(R(15));
  c->macl=R(11)*R(4);
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(11)=c->macl; if(k) goto L8c02e3d0; }
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(2)=0x8c067940u;
  R(0)-=R(13);
  { c->pr=0x8c02e3ccu; R(1)=R(11); f_8c067940(c); }
  { ST32(R(15),R(0)); goto L8c02e3e2; }
L8c02e3d0:;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c02e3e2;
  R(2)=0x8c067940u;
  R(1)=0u-R(11);
  R(0)=(int32_t)(int8_t)LD8(R(7));
  { c->pr=0x8c02e3e0u; R(0)-=R(13); f_8c067940(c); }
  ST32(R(15),R(0));
L8c02e3e2:;
  R(5)=LD32(R(15)+4);
  R(3)=LD32(R(15)+4);
  c->macl=R(5)*R(4);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(5)=c->macl; if(k) goto L8c02e440; }
  R(0)=(int32_t)(int8_t)LD8(R(10));
  R(3)=0x8c067940u;
  R(0)-=R(6);
  { c->pr=0x8c02e3f8u; R(1)=R(5); f_8c067940(c); }
  { ST32(R(15)+4,R(0)); goto L8c02e452; }
L8c02e440:;
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c02e452;
  R(3)=0x8c067940u;
  R(1)=0u-R(5);
  R(0)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c02e450u; R(0)-=R(6); f_8c067940(c); }
  ST32(R(15)+4,R(0));
L8c02e452:;
  R(3)=LD32(R(15));
  R(1)=LD32(R(15)+4);
  R(2)=R(3);
  c->macl=R(2)*R(3);
  R(0)=R(1);
  R(3)=c->macl;
  c->macl=R(0)*R(1);
  R(0)=0x8c02e4c8u;
  fp_ld(c,2,R(0));
  R(1)=c->macl;
  R(3)+=R(1);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02e496;
  c->macl=R(2)*R(4);
  fp_unary(c,2,4);
  R(2)=c->macl;
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(15),R(3));
  R(2)=LD32(R(15)+4);
  c->macl=R(2)*R(4);
  R(4)=c->macl;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(15)+4,R(3));
L8c02e496:;
  R(2)=LD32(R(15));
  R(0)=0xc4u;
  R(2)=0u-R(2);
  c->fpul=R(2);
  fp_float(c,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=LD32(R(15)+40);
  R(11)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(11)=0u-R(11); if(k) goto L8c02e4e0; }
  c->fpul=R(11);
  R(0)=0xc8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  { fp_float(c,3); goto L8c02e4ec; }
L8c02e4e0:;
  R(2)=LD32(R(15)+4);
  R(0)=0xc8u;
  c->fpul=R(2);
  fp_float(c,3);
  fp_st(c,3,R(0)+R(15));
  c->fr[3]=0x00000000u;
L8c02e4ec:;
  R(0)=0xccu;
  R(3)=0x8c0c5180u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,12);
  fp_st(c,3,R(0)+R(15));
  { uint32_t k=c->t; fp_ld(c,6,R(3)); if(k) goto L8c02e52a; }
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(8)=R(14);
  R(0)=0xccu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
L8c02e52a:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c02e5e0;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  fp_mov(c,5,13);
  { uint32_t k=c->t; fp_arith(c,2,5,13); if(k) goto L8c02e546; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02e54a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c02e54e;
  {  goto L8c02e580; }
L8c02e546:;
  { fp_mov(c,4,13); goto L8c02e586; }
L8c02e54a:;
  { fp_mov(c,4,5); goto L8c02e586; }
L8c02e54e:;
  fp_mov(c,4,5);
  { fp_arith(c,2,4,13); goto L8c02e586; }
L8c02e580:;
  fp_mov(c,2,5);
  fp_mov(c,4,5);
  fp_arith(c,2,4,2);
L8c02e586:;
  R(0)=0x20u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,1,6,5);
  fp_mov(c,3,5);
  fp_fmac(c,3,6);
  fp_st(c,3,R(0)+R(15));
  fp_arith(c,1,3,5);
  fp_cmp(c,1,3,12);
  if(!c->t) goto L8c02e5e8;
  R(0)=0xccu;
  R(8)=R(14);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02e5e8; }
L8c02e5e0:;
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,2,R(0)+R(15));
L8c02e5e8:;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c02e5f4;
  {  goto L8c02f212; }
L8c02e5f4:;
  R(0)=0xc4u;
  R(13)=0x8c05e55cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=LD32(R(15)+40);
  R(12)=0x8c015ea8u;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02e606;
  {  goto L8c02e824; }
L8c02e606:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,0,15,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xc8u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(c->t) goto L8c02e680;
L8c02e61e:;
  R(0)=0xc8u;
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,6);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02e680:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+8);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e692u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x2cu;
  R(7)+=0x30u;
  R(6)+=0x3cu;
  { uint32_t tg=R(12); c->pr=0x8c02e6a4u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(5)=LD32(R(15)+44);
  { uint32_t tg=R(13); c->pr=0x8c02e6aau; R(4)=LD32(R(15)+20); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  R(0)=0x8c02e6f0u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  R(14)=0x8c09cff8u;
  fp_ld(c,12,R(0));
  R(0)=0x8c02e6f4u;
  { uint32_t k=!c->t; fp_ld(c,14,R(0)); if(k) goto L8c02e6c0; }
  { c->fr[3]=0x3F800000u; goto L8c02e702; }
L8c02e6c0:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e700;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e702; }
L8c02e700:;
  c->fr[3]=0x00000000u;
L8c02e702:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e710; }
  { fp_mov(c,4,15); goto L8c02e714; }
L8c02e710:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e714:;
  { uint32_t tg=R(14); c->pr=0x8c02e718u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e724;
  { c->fr[2]=0x3F800000u; goto L8c02e73c; }
L8c02e724:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e730; }
  { fp_mov(c,4,15); goto L8c02e734; }
L8c02e730:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e734:;
  { uint32_t tg=R(14); c->pr=0x8c02e738u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e73c:;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_arith(c,2,13,2);
  R(5)=LD32(R(15)+48);
  { uint32_t tg=R(13); c->pr=0x8c02e746u; R(4)=LD32(R(15)+12); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02e752;
  { c->fr[3]=0x3F800000u; goto L8c02e75e; }
L8c02e752:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e75c;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e75e; }
L8c02e75c:;
  c->fr[3]=0x00000000u;
L8c02e75e:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e76c; }
  { fp_mov(c,4,15); goto L8c02e770; }
L8c02e76c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e770:;
  { uint32_t tg=R(14); c->pr=0x8c02e774u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e780;
  { c->fr[2]=0x3F800000u; goto L8c02e798; }
L8c02e780:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e78c; }
  { fp_mov(c,4,15); goto L8c02e790; }
L8c02e78c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e790:;
  { uint32_t tg=R(14); c->pr=0x8c02e794u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e798:;
  R(0)=0xc4u;
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,2);
  fp_mov(c,2,13);
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  R(0)=0xacu;
  fp_ld(c,3,R(3));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,2,13);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,13,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb4u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=LD32(R(15)+12);
  R(0)=0xa0u;
  fp_ld(c,3,R(3));
  R(6)=0xa0u;
  fp_arith(c,2,2,3);
  R(5)=0xacu;
  R(4)=0xc4u;
  R(6)+=R(15);
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  R(3)=LD32(R(15)+12);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa8u;
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c02e81cu; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02f140; }
L8c02e824:;
  R(2)=0x8c0b96b0u;
  R(3)=0x94u;
  R(1)=LD32(R(2));
  R(3)+=R(15);
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  R(5)=0xacu;
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(5)+=R(15);
  ST32(R(3)+8,R(1));
  R(4)=LD32(R(15)+36);
  R(3)=0x8c0163ceu;
  { c->pr=0x8c02e842u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xa0u;
  R(4)=LD32(R(15)+8);
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c02e84eu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xacu;
  R(6)=0xa0u;
  R(4)=0xa0u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c02e85eu; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  { R(4)=0x1u; goto L8c02e8fc; }
L8c02e8c0:;
  R(0)=0xa4u;
  R(4)=R(14);
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02e8fc:;
  R(4)=R(4)&0xFF;
  R(0)=0xa8u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; fp_ld(c,4,R(0)+R(15)); if(k) goto L8c02e950; }
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c02e950;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02e940;
  { fp_mov(c,3,4); goto L8c02e944; }
L8c02e940:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02e944:;
  R(0)=0x8c02eae0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c02e950;
  {  goto L8c02ebc0; }
L8c02e950:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e962u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(2)=LD32(R(15)+12);
  R(3)=0xa0u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  R(3)+=R(15);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(2)+8);
  c->fr[3]=0x00000000u;
  ST32(R(3)+8,R(1));
  fp_st(c,3,R(0)+R(15));
L8c02e9ac:;
  R(0)=0xa0u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,1,3);
  R(0)=0xb4u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02eb38; }
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ea94u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  {  goto L8c02eb00; }
L8c02eb00:;
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02eb92; }
L8c02eb38:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02eb92:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(15)); goto L8c02ee64; }
L8c02ebc0:;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02ebf2u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+12);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  {  goto L8c02f280; }
L8c02ec28:;
  R(0)=0xa0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02ed0a; }
  {  goto L8c02ee00; }
L8c02ed0a:;
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ed16u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  {  goto L8c02ed80; }
L8c02ed80:;
  fp_fmac(c,3,2);
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02ee5a; }
L8c02ee00:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02ee5a:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
L8c02ee64:;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02f140:;
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f212:;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  ST32(R(15),R(14));
  ST32(R(15)+4,R(14));
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,2,R(0)+R(15));
  { ST32(R(15)+52,R(14)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02e440(SH4Ctx *c) {
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c02e452;
  R(3)=0x8c067940u;
  R(1)=0u-R(5);
  R(0)=(int32_t)(int8_t)LD8(R(9));
  { c->pr=0x8c02e450u; R(0)-=R(6); f_8c067940(c); }
  ST32(R(15)+4,R(0));
L8c02e452:;
  R(3)=LD32(R(15));
  R(1)=LD32(R(15)+4);
  R(2)=R(3);
  c->macl=R(2)*R(3);
  R(0)=R(1);
  R(3)=c->macl;
  c->macl=R(0)*R(1);
  R(0)=0x8c02e4c8u;
  fp_ld(c,2,R(0));
  R(1)=c->macl;
  R(3)+=R(1);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02e496;
  c->macl=R(2)*R(4);
  fp_unary(c,2,4);
  R(2)=c->macl;
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(15),R(3));
  R(2)=LD32(R(15)+4);
  c->macl=R(2)*R(4);
  R(4)=c->macl;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,3,3,4);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(15)+4,R(3));
L8c02e496:;
  R(2)=LD32(R(15));
  R(0)=0xc4u;
  R(2)=0u-R(2);
  c->fpul=R(2);
  fp_float(c,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=LD32(R(15)+40);
  R(11)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(11)=0u-R(11); if(k) goto L8c02e4e0; }
  c->fpul=R(11);
  R(0)=0xc8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  { fp_float(c,3); goto L8c02e4ec; }
L8c02e4e0:;
  R(2)=LD32(R(15)+4);
  R(0)=0xc8u;
  c->fpul=R(2);
  fp_float(c,3);
  fp_st(c,3,R(0)+R(15));
  c->fr[3]=0x00000000u;
L8c02e4ec:;
  R(0)=0xccu;
  R(3)=0x8c0c5180u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,12);
  fp_st(c,3,R(0)+R(15));
  { uint32_t k=c->t; fp_ld(c,6,R(3)); if(k) goto L8c02e52a; }
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(8)=R(14);
  R(0)=0xccu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
L8c02e52a:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c02e5e0;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  fp_mov(c,5,13);
  { uint32_t k=c->t; fp_arith(c,2,5,13); if(k) goto L8c02e546; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02e54a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c02e54e;
  {  goto L8c02e580; }
L8c02e546:;
  { fp_mov(c,4,13); goto L8c02e586; }
L8c02e54a:;
  { fp_mov(c,4,5); goto L8c02e586; }
L8c02e54e:;
  fp_mov(c,4,5);
  { fp_arith(c,2,4,13); goto L8c02e586; }
L8c02e580:;
  fp_mov(c,2,5);
  fp_mov(c,4,5);
  fp_arith(c,2,4,2);
L8c02e586:;
  R(0)=0x20u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,1,6,5);
  fp_mov(c,3,5);
  fp_fmac(c,3,6);
  fp_st(c,3,R(0)+R(15));
  fp_arith(c,1,3,5);
  fp_cmp(c,1,3,12);
  if(!c->t) goto L8c02e5e8;
  R(0)=0xccu;
  R(8)=R(14);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02e5e8; }
L8c02e5e0:;
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,2,R(0)+R(15));
L8c02e5e8:;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c02e5f4;
  {  goto L8c02f212; }
L8c02e5f4:;
  R(0)=0xc4u;
  R(13)=0x8c05e55cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=LD32(R(15)+40);
  R(12)=0x8c015ea8u;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02e606;
  {  goto L8c02e824; }
L8c02e606:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,0,15,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xc8u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(c->t) goto L8c02e680;
L8c02e61e:;
  R(0)=0xc8u;
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,6);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02e680:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+8);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e692u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x2cu;
  R(7)+=0x30u;
  R(6)+=0x3cu;
  { uint32_t tg=R(12); c->pr=0x8c02e6a4u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(5)=LD32(R(15)+44);
  { uint32_t tg=R(13); c->pr=0x8c02e6aau; R(4)=LD32(R(15)+20); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  R(0)=0x8c02e6f0u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  R(14)=0x8c09cff8u;
  fp_ld(c,12,R(0));
  R(0)=0x8c02e6f4u;
  { uint32_t k=!c->t; fp_ld(c,14,R(0)); if(k) goto L8c02e6c0; }
  { c->fr[3]=0x3F800000u; goto L8c02e702; }
L8c02e6c0:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e700;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e702; }
L8c02e700:;
  c->fr[3]=0x00000000u;
L8c02e702:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e710; }
  { fp_mov(c,4,15); goto L8c02e714; }
L8c02e710:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e714:;
  { uint32_t tg=R(14); c->pr=0x8c02e718u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e724;
  { c->fr[2]=0x3F800000u; goto L8c02e73c; }
L8c02e724:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e730; }
  { fp_mov(c,4,15); goto L8c02e734; }
L8c02e730:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e734:;
  { uint32_t tg=R(14); c->pr=0x8c02e738u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e73c:;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_arith(c,2,13,2);
  R(5)=LD32(R(15)+48);
  { uint32_t tg=R(13); c->pr=0x8c02e746u; R(4)=LD32(R(15)+12); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02e752;
  { c->fr[3]=0x3F800000u; goto L8c02e75e; }
L8c02e752:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e75c;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e75e; }
L8c02e75c:;
  c->fr[3]=0x00000000u;
L8c02e75e:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e76c; }
  { fp_mov(c,4,15); goto L8c02e770; }
L8c02e76c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e770:;
  { uint32_t tg=R(14); c->pr=0x8c02e774u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e780;
  { c->fr[2]=0x3F800000u; goto L8c02e798; }
L8c02e780:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e78c; }
  { fp_mov(c,4,15); goto L8c02e790; }
L8c02e78c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e790:;
  { uint32_t tg=R(14); c->pr=0x8c02e794u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e798:;
  R(0)=0xc4u;
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,2);
  fp_mov(c,2,13);
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  R(0)=0xacu;
  fp_ld(c,3,R(3));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,2,13);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,13,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb4u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=LD32(R(15)+12);
  R(0)=0xa0u;
  fp_ld(c,3,R(3));
  R(6)=0xa0u;
  fp_arith(c,2,2,3);
  R(5)=0xacu;
  R(4)=0xc4u;
  R(6)+=R(15);
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  R(3)=LD32(R(15)+12);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa8u;
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c02e81cu; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02f140; }
L8c02e824:;
  R(2)=0x8c0b96b0u;
  R(3)=0x94u;
  R(1)=LD32(R(2));
  R(3)+=R(15);
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  R(5)=0xacu;
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(5)+=R(15);
  ST32(R(3)+8,R(1));
  R(4)=LD32(R(15)+36);
  R(3)=0x8c0163ceu;
  { c->pr=0x8c02e842u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xa0u;
  R(4)=LD32(R(15)+8);
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c02e84eu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xacu;
  R(6)=0xa0u;
  R(4)=0xa0u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c02e85eu; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  { R(4)=0x1u; goto L8c02e8fc; }
L8c02e8c0:;
  R(0)=0xa4u;
  R(4)=R(14);
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02e8fc:;
  R(4)=R(4)&0xFF;
  R(0)=0xa8u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; fp_ld(c,4,R(0)+R(15)); if(k) goto L8c02e950; }
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c02e950;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02e940;
  { fp_mov(c,3,4); goto L8c02e944; }
L8c02e940:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02e944:;
  R(0)=0x8c02eae0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c02e950;
  {  goto L8c02ebc0; }
L8c02e950:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e962u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(2)=LD32(R(15)+12);
  R(3)=0xa0u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  R(3)+=R(15);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(2)+8);
  c->fr[3]=0x00000000u;
  ST32(R(3)+8,R(1));
  fp_st(c,3,R(0)+R(15));
L8c02e9ac:;
  R(0)=0xa0u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,1,3);
  R(0)=0xb4u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02eb38; }
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ea94u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  {  goto L8c02eb00; }
L8c02eb00:;
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02eb92; }
L8c02eb38:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02eb92:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(15)); goto L8c02ee64; }
L8c02ebc0:;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02ebf2u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+12);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  {  goto L8c02f280; }
L8c02ec28:;
  R(0)=0xa0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02ed0a; }
  {  goto L8c02ee00; }
L8c02ed0a:;
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ed16u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  {  goto L8c02ed80; }
L8c02ed80:;
  fp_fmac(c,3,2);
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02ee5a; }
L8c02ee00:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02ee5a:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
L8c02ee64:;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02f140:;
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f212:;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  ST32(R(15),R(14));
  ST32(R(15)+4,R(14));
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,2,R(0)+R(15));
  { ST32(R(15)+52,R(14)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02e4e0(SH4Ctx *c) {
  R(2)=LD32(R(15)+4);
  R(0)=0xc8u;
  c->fpul=R(2);
  fp_float(c,3);
  fp_st(c,3,R(0)+R(15));
  c->fr[3]=0x00000000u;
  R(0)=0xccu;
  R(3)=0x8c0c5180u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,12);
  fp_st(c,3,R(0)+R(15));
  { uint32_t k=c->t; fp_ld(c,6,R(3)); if(k) goto L8c02e52a; }
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(8)=R(14);
  R(0)=0xccu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
L8c02e52a:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c02e5e0;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  fp_mov(c,5,13);
  { uint32_t k=c->t; fp_arith(c,2,5,13); if(k) goto L8c02e546; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02e54a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c02e54e;
  {  goto L8c02e580; }
L8c02e546:;
  { fp_mov(c,4,13); goto L8c02e586; }
L8c02e54a:;
  { fp_mov(c,4,5); goto L8c02e586; }
L8c02e54e:;
  fp_mov(c,4,5);
  { fp_arith(c,2,4,13); goto L8c02e586; }
L8c02e580:;
  fp_mov(c,2,5);
  fp_mov(c,4,5);
  fp_arith(c,2,4,2);
L8c02e586:;
  R(0)=0x20u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,1,6,5);
  fp_mov(c,3,5);
  fp_fmac(c,3,6);
  fp_st(c,3,R(0)+R(15));
  fp_arith(c,1,3,5);
  fp_cmp(c,1,3,12);
  if(!c->t) goto L8c02e5e8;
  R(0)=0xccu;
  R(8)=R(14);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02e5e8; }
L8c02e5e0:;
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,2,R(0)+R(15));
L8c02e5e8:;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c02e5f4;
  {  goto L8c02f212; }
L8c02e5f4:;
  R(0)=0xc4u;
  R(13)=0x8c05e55cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=LD32(R(15)+40);
  R(12)=0x8c015ea8u;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02e606;
  {  goto L8c02e824; }
L8c02e606:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,0,15,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xc8u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(c->t) goto L8c02e680;
L8c02e61e:;
  R(0)=0xc8u;
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,6);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02e680:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+8);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e692u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x2cu;
  R(7)+=0x30u;
  R(6)+=0x3cu;
  { uint32_t tg=R(12); c->pr=0x8c02e6a4u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(5)=LD32(R(15)+44);
  { uint32_t tg=R(13); c->pr=0x8c02e6aau; R(4)=LD32(R(15)+20); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  R(0)=0x8c02e6f0u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  R(14)=0x8c09cff8u;
  fp_ld(c,12,R(0));
  R(0)=0x8c02e6f4u;
  { uint32_t k=!c->t; fp_ld(c,14,R(0)); if(k) goto L8c02e6c0; }
  { c->fr[3]=0x3F800000u; goto L8c02e702; }
L8c02e6c0:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e700;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e702; }
L8c02e700:;
  c->fr[3]=0x00000000u;
L8c02e702:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e710; }
  { fp_mov(c,4,15); goto L8c02e714; }
L8c02e710:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e714:;
  { uint32_t tg=R(14); c->pr=0x8c02e718u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e724;
  { c->fr[2]=0x3F800000u; goto L8c02e73c; }
L8c02e724:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e730; }
  { fp_mov(c,4,15); goto L8c02e734; }
L8c02e730:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e734:;
  { uint32_t tg=R(14); c->pr=0x8c02e738u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e73c:;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_arith(c,2,13,2);
  R(5)=LD32(R(15)+48);
  { uint32_t tg=R(13); c->pr=0x8c02e746u; R(4)=LD32(R(15)+12); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02e752;
  { c->fr[3]=0x3F800000u; goto L8c02e75e; }
L8c02e752:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e75c;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e75e; }
L8c02e75c:;
  c->fr[3]=0x00000000u;
L8c02e75e:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e76c; }
  { fp_mov(c,4,15); goto L8c02e770; }
L8c02e76c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e770:;
  { uint32_t tg=R(14); c->pr=0x8c02e774u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e780;
  { c->fr[2]=0x3F800000u; goto L8c02e798; }
L8c02e780:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e78c; }
  { fp_mov(c,4,15); goto L8c02e790; }
L8c02e78c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e790:;
  { uint32_t tg=R(14); c->pr=0x8c02e794u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e798:;
  R(0)=0xc4u;
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,2);
  fp_mov(c,2,13);
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  R(0)=0xacu;
  fp_ld(c,3,R(3));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,2,13);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,13,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb4u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=LD32(R(15)+12);
  R(0)=0xa0u;
  fp_ld(c,3,R(3));
  R(6)=0xa0u;
  fp_arith(c,2,2,3);
  R(5)=0xacu;
  R(4)=0xc4u;
  R(6)+=R(15);
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  R(3)=LD32(R(15)+12);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa8u;
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c02e81cu; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02f140; }
L8c02e824:;
  R(2)=0x8c0b96b0u;
  R(3)=0x94u;
  R(1)=LD32(R(2));
  R(3)+=R(15);
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  R(5)=0xacu;
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(5)+=R(15);
  ST32(R(3)+8,R(1));
  R(4)=LD32(R(15)+36);
  R(3)=0x8c0163ceu;
  { c->pr=0x8c02e842u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xa0u;
  R(4)=LD32(R(15)+8);
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c02e84eu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xacu;
  R(6)=0xa0u;
  R(4)=0xa0u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c02e85eu; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  { R(4)=0x1u; goto L8c02e8fc; }
L8c02e8c0:;
  R(0)=0xa4u;
  R(4)=R(14);
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02e8fc:;
  R(4)=R(4)&0xFF;
  R(0)=0xa8u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; fp_ld(c,4,R(0)+R(15)); if(k) goto L8c02e950; }
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c02e950;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02e940;
  { fp_mov(c,3,4); goto L8c02e944; }
L8c02e940:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02e944:;
  R(0)=0x8c02eae0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c02e950;
  {  goto L8c02ebc0; }
L8c02e950:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e962u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(2)=LD32(R(15)+12);
  R(3)=0xa0u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  R(3)+=R(15);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(2)+8);
  c->fr[3]=0x00000000u;
  ST32(R(3)+8,R(1));
  fp_st(c,3,R(0)+R(15));
L8c02e9ac:;
  R(0)=0xa0u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,1,3);
  R(0)=0xb4u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02eb38; }
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ea94u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  {  goto L8c02eb00; }
L8c02eb00:;
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02eb92; }
L8c02eb38:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02eb92:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(15)); goto L8c02ee64; }
L8c02ebc0:;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02ebf2u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+12);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  {  goto L8c02f280; }
L8c02ec28:;
  R(0)=0xa0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02ed0a; }
  {  goto L8c02ee00; }
L8c02ed0a:;
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ed16u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  {  goto L8c02ed80; }
L8c02ed80:;
  fp_fmac(c,3,2);
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02ee5a; }
L8c02ee00:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02ee5a:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
L8c02ee64:;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02f140:;
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f212:;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  ST32(R(15),R(14));
  ST32(R(15)+4,R(14));
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,2,R(0)+R(15));
  { ST32(R(15)+52,R(14)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02e580(SH4Ctx *c) {
  fp_mov(c,2,5);
  fp_mov(c,4,5);
  fp_arith(c,2,4,2);
  R(0)=0x20u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,1,6,5);
  fp_mov(c,3,5);
  fp_fmac(c,3,6);
  fp_st(c,3,R(0)+R(15));
  fp_arith(c,1,3,5);
  fp_cmp(c,1,3,12);
  if(!c->t) goto L8c02e5e8;
  R(0)=0xccu;
  R(8)=R(14);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02e5e8; }
L8c02e5e8:;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c02e5f4;
  {  goto L8c02f212; }
L8c02e5f4:;
  R(0)=0xc4u;
  R(13)=0x8c05e55cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=LD32(R(15)+40);
  R(12)=0x8c015ea8u;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02e606;
  {  goto L8c02e824; }
L8c02e606:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,0,15,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xc8u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(c->t) goto L8c02e680;
L8c02e61e:;
  R(0)=0xc8u;
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,6);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02e680:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+8);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e692u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x2cu;
  R(7)+=0x30u;
  R(6)+=0x3cu;
  { uint32_t tg=R(12); c->pr=0x8c02e6a4u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(5)=LD32(R(15)+44);
  { uint32_t tg=R(13); c->pr=0x8c02e6aau; R(4)=LD32(R(15)+20); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  R(0)=0x8c02e6f0u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  R(14)=0x8c09cff8u;
  fp_ld(c,12,R(0));
  R(0)=0x8c02e6f4u;
  { uint32_t k=!c->t; fp_ld(c,14,R(0)); if(k) goto L8c02e6c0; }
  { c->fr[3]=0x3F800000u; goto L8c02e702; }
L8c02e6c0:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e700;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e702; }
L8c02e700:;
  c->fr[3]=0x00000000u;
L8c02e702:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e710; }
  { fp_mov(c,4,15); goto L8c02e714; }
L8c02e710:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e714:;
  { uint32_t tg=R(14); c->pr=0x8c02e718u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e724;
  { c->fr[2]=0x3F800000u; goto L8c02e73c; }
L8c02e724:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e730; }
  { fp_mov(c,4,15); goto L8c02e734; }
L8c02e730:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e734:;
  { uint32_t tg=R(14); c->pr=0x8c02e738u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e73c:;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_arith(c,2,13,2);
  R(5)=LD32(R(15)+48);
  { uint32_t tg=R(13); c->pr=0x8c02e746u; R(4)=LD32(R(15)+12); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02e752;
  { c->fr[3]=0x3F800000u; goto L8c02e75e; }
L8c02e752:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e75c;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e75e; }
L8c02e75c:;
  c->fr[3]=0x00000000u;
L8c02e75e:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e76c; }
  { fp_mov(c,4,15); goto L8c02e770; }
L8c02e76c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e770:;
  { uint32_t tg=R(14); c->pr=0x8c02e774u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e780;
  { c->fr[2]=0x3F800000u; goto L8c02e798; }
L8c02e780:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e78c; }
  { fp_mov(c,4,15); goto L8c02e790; }
L8c02e78c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e790:;
  { uint32_t tg=R(14); c->pr=0x8c02e794u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e798:;
  R(0)=0xc4u;
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,2);
  fp_mov(c,2,13);
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  R(0)=0xacu;
  fp_ld(c,3,R(3));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,2,13);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,13,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb4u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=LD32(R(15)+12);
  R(0)=0xa0u;
  fp_ld(c,3,R(3));
  R(6)=0xa0u;
  fp_arith(c,2,2,3);
  R(5)=0xacu;
  R(4)=0xc4u;
  R(6)+=R(15);
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  R(3)=LD32(R(15)+12);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa8u;
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c02e81cu; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02f140; }
L8c02e824:;
  R(2)=0x8c0b96b0u;
  R(3)=0x94u;
  R(1)=LD32(R(2));
  R(3)+=R(15);
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  R(5)=0xacu;
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(5)+=R(15);
  ST32(R(3)+8,R(1));
  R(4)=LD32(R(15)+36);
  R(3)=0x8c0163ceu;
  { c->pr=0x8c02e842u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xa0u;
  R(4)=LD32(R(15)+8);
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c02e84eu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xacu;
  R(6)=0xa0u;
  R(4)=0xa0u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c02e85eu; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  { R(4)=0x1u; goto L8c02e8fc; }
L8c02e8c0:;
  R(0)=0xa4u;
  R(4)=R(14);
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02e8fc:;
  R(4)=R(4)&0xFF;
  R(0)=0xa8u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; fp_ld(c,4,R(0)+R(15)); if(k) goto L8c02e950; }
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c02e950;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02e940;
  { fp_mov(c,3,4); goto L8c02e944; }
L8c02e940:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02e944:;
  R(0)=0x8c02eae0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c02e950;
  {  goto L8c02ebc0; }
L8c02e950:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e962u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(2)=LD32(R(15)+12);
  R(3)=0xa0u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  R(3)+=R(15);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(2)+8);
  c->fr[3]=0x00000000u;
  ST32(R(3)+8,R(1));
  fp_st(c,3,R(0)+R(15));
L8c02e9ac:;
  R(0)=0xa0u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,1,3);
  R(0)=0xb4u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02eb38; }
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ea94u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  {  goto L8c02eb00; }
L8c02eb00:;
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02eb92; }
L8c02eb38:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02eb92:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(15)); goto L8c02ee64; }
L8c02ebc0:;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02ebf2u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+12);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  {  goto L8c02f280; }
L8c02ec28:;
  R(0)=0xa0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02ed0a; }
  {  goto L8c02ee00; }
L8c02ed0a:;
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ed16u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  {  goto L8c02ed80; }
L8c02ed80:;
  fp_fmac(c,3,2);
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02ee5a; }
L8c02ee00:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02ee5a:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
L8c02ee64:;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02f140:;
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f212:;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  ST32(R(15),R(14));
  ST32(R(15)+4,R(14));
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,2,R(0)+R(15));
  { ST32(R(15)+52,R(14)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02e5e0(SH4Ctx *c) {
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c02e5f4;
  {  goto L8c02f212; }
L8c02e5f4:;
  R(0)=0xc4u;
  R(13)=0x8c05e55cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=LD32(R(15)+40);
  R(12)=0x8c015ea8u;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02e606;
  {  goto L8c02e824; }
L8c02e606:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,0,15,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xc8u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(!c->t) goto L8c02e61e;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,2);
  if(c->t) goto L8c02e680;
L8c02e61e:;
  R(0)=0xc8u;
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,6);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,6);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02e680:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+8);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e692u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x2cu;
  R(7)+=0x30u;
  R(6)+=0x3cu;
  { uint32_t tg=R(12); c->pr=0x8c02e6a4u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(5)=LD32(R(15)+44);
  { uint32_t tg=R(13); c->pr=0x8c02e6aau; R(4)=LD32(R(15)+20); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  R(0)=0x8c02e6f0u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  R(14)=0x8c09cff8u;
  fp_ld(c,12,R(0));
  R(0)=0x8c02e6f4u;
  { uint32_t k=!c->t; fp_ld(c,14,R(0)); if(k) goto L8c02e6c0; }
  { c->fr[3]=0x3F800000u; goto L8c02e702; }
L8c02e6c0:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e700;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e702; }
L8c02e700:;
  c->fr[3]=0x00000000u;
L8c02e702:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e710; }
  { fp_mov(c,4,15); goto L8c02e714; }
L8c02e710:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e714:;
  { uint32_t tg=R(14); c->pr=0x8c02e718u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e724;
  { c->fr[2]=0x3F800000u; goto L8c02e73c; }
L8c02e724:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e730; }
  { fp_mov(c,4,15); goto L8c02e734; }
L8c02e730:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e734:;
  { uint32_t tg=R(14); c->pr=0x8c02e738u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e73c:;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_arith(c,2,13,2);
  R(5)=LD32(R(15)+48);
  { uint32_t tg=R(13); c->pr=0x8c02e746u; R(4)=LD32(R(15)+12); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02e752;
  { c->fr[3]=0x3F800000u; goto L8c02e75e; }
L8c02e752:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e75c;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e75e; }
L8c02e75c:;
  c->fr[3]=0x00000000u;
L8c02e75e:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e76c; }
  { fp_mov(c,4,15); goto L8c02e770; }
L8c02e76c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e770:;
  { uint32_t tg=R(14); c->pr=0x8c02e774u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e780;
  { c->fr[2]=0x3F800000u; goto L8c02e798; }
L8c02e780:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e78c; }
  { fp_mov(c,4,15); goto L8c02e790; }
L8c02e78c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e790:;
  { uint32_t tg=R(14); c->pr=0x8c02e794u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e798:;
  R(0)=0xc4u;
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,2);
  fp_mov(c,2,13);
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  R(0)=0xacu;
  fp_ld(c,3,R(3));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,2,13);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,13,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb4u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=LD32(R(15)+12);
  R(0)=0xa0u;
  fp_ld(c,3,R(3));
  R(6)=0xa0u;
  fp_arith(c,2,2,3);
  R(5)=0xacu;
  R(4)=0xc4u;
  R(6)+=R(15);
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  R(3)=LD32(R(15)+12);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa8u;
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c02e81cu; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02f140; }
L8c02e824:;
  R(2)=0x8c0b96b0u;
  R(3)=0x94u;
  R(1)=LD32(R(2));
  R(3)+=R(15);
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  R(5)=0xacu;
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  R(5)+=R(15);
  ST32(R(3)+8,R(1));
  R(4)=LD32(R(15)+36);
  R(3)=0x8c0163ceu;
  { c->pr=0x8c02e842u; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xa0u;
  R(4)=LD32(R(15)+8);
  R(3)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c02e84eu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(5)=0xacu;
  R(6)=0xa0u;
  R(4)=0xa0u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c02e85eu; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xa0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e8c0;
  { R(4)=0x1u; goto L8c02e8fc; }
L8c02e8c0:;
  R(0)=0xa4u;
  R(4)=R(14);
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02e8fc:;
  R(4)=R(4)&0xFF;
  R(0)=0xa8u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; fp_ld(c,4,R(0)+R(15)); if(k) goto L8c02e950; }
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c02e950;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02e940;
  { fp_mov(c,3,4); goto L8c02e944; }
L8c02e940:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02e944:;
  R(0)=0x8c02eae0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c02e950;
  {  goto L8c02ebc0; }
L8c02e950:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e962u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(2)=LD32(R(15)+12);
  R(3)=0xa0u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  R(3)+=R(15);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(2)+8);
  c->fr[3]=0x00000000u;
  ST32(R(3)+8,R(1));
  fp_st(c,3,R(0)+R(15));
L8c02e9ac:;
  R(0)=0xa0u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,1,3);
  R(0)=0xb4u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02eb38; }
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ea94u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  {  goto L8c02eb00; }
L8c02eb00:;
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02eb92; }
L8c02eb38:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02eb92:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(15)); goto L8c02ee64; }
L8c02ebc0:;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02ebf2u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+12);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  {  goto L8c02f280; }
L8c02ec28:;
  R(0)=0xa0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02ed0a; }
  {  goto L8c02ee00; }
L8c02ed0a:;
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ed16u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  {  goto L8c02ed80; }
L8c02ed80:;
  fp_fmac(c,3,2);
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02ee5a; }
L8c02ee00:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02ee5a:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
L8c02ee64:;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02f140:;
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f212:;
  R(0)=0xccu;
  c->fr[2]=0x00000000u;
  ST32(R(15),R(14));
  ST32(R(15)+4,R(14));
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,2,R(0)+R(15));
  { ST32(R(15)+52,R(14)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02e700(SH4Ctx *c) {
  c->fr[3]=0x00000000u;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e710; }
  { fp_mov(c,4,15); goto L8c02e714; }
L8c02e710:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e714:;
  { uint32_t tg=R(14); c->pr=0x8c02e718u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e724;
  { c->fr[2]=0x3F800000u; goto L8c02e73c; }
L8c02e724:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e730; }
  { fp_mov(c,4,15); goto L8c02e734; }
L8c02e730:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e734:;
  { uint32_t tg=R(14); c->pr=0x8c02e738u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e73c:;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_arith(c,2,13,2);
  R(5)=LD32(R(15)+48);
  { uint32_t tg=R(13); c->pr=0x8c02e746u; R(4)=LD32(R(15)+12); sh4_call(c,tg); }
  c->fr[2]=0x00000000u;
  fp_mov(c,15,0);
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02e752;
  { c->fr[3]=0x3F800000u; goto L8c02e75e; }
L8c02e752:;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c02e75c;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02e75e; }
L8c02e75c:;
  c->fr[3]=0x00000000u;
L8c02e75e:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,15,1);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e76c; }
  { fp_mov(c,4,15); goto L8c02e770; }
L8c02e76c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e770:;
  { uint32_t tg=R(14); c->pr=0x8c02e774u;  sh4_call(c,tg); }
  fp_arith(c,2,0,12);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c02e780;
  { c->fr[2]=0x3F800000u; goto L8c02e798; }
L8c02e780:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_mov(c,5,14); if(k) goto L8c02e78c; }
  { fp_mov(c,4,15); goto L8c02e790; }
L8c02e78c:;
  fp_mov(c,4,15);
  fp_unary(c,0,4);
L8c02e790:;
  { uint32_t tg=R(14); c->pr=0x8c02e794u;  sh4_call(c,tg); }
  fp_mov(c,2,0);
  fp_arith(c,2,2,12);
L8c02e798:;
  R(0)=0xc4u;
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,2);
  fp_mov(c,2,13);
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  R(0)=0xacu;
  fp_ld(c,3,R(3));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,2,13);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+20);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb0u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc4u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,13,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xb4u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=LD32(R(15)+12);
  R(0)=0xa0u;
  fp_ld(c,3,R(3));
  R(6)=0xa0u;
  fp_arith(c,2,2,3);
  R(5)=0xacu;
  R(4)=0xc4u;
  R(6)+=R(15);
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  R(3)=LD32(R(15)+12);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xa8u;
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c02e81cu; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  { fp_st(c,3,R(0)+R(15)); goto L8c02f140; }
L8c02f140:;
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02e8c0(SH4Ctx *c) {
  R(0)=0xa4u;
  R(4)=R(14);
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=R(4)&0xFF;
  R(0)=0xa8u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; fp_ld(c,4,R(0)+R(15)); if(k) goto L8c02e950; }
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c02e950;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02e940;
  { fp_mov(c,3,4); goto L8c02e944; }
L8c02e940:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02e944:;
  R(0)=0x8c02eae0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c02e950;
  {  goto L8c02ebc0; }
L8c02e950:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e962u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(2)=LD32(R(15)+12);
  R(3)=0xa0u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  R(3)+=R(15);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(2)+8);
  c->fr[3]=0x00000000u;
  ST32(R(3)+8,R(1));
  fp_st(c,3,R(0)+R(15));
L8c02e9ac:;
  R(0)=0xa0u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,1,3);
  R(0)=0xb4u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02eb38; }
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ea94u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  {  goto L8c02eb00; }
L8c02eb00:;
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02eb92; }
L8c02eb38:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02eb92:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(15)); goto L8c02ee64; }
L8c02ebc0:;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02ebf2u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+12);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  {  goto L8c02f280; }
L8c02ec28:;
  R(0)=0xa0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02ed0a; }
  {  goto L8c02ee00; }
L8c02ed0a:;
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ed16u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  {  goto L8c02ed80; }
L8c02ed80:;
  fp_fmac(c,3,2);
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02ee5a; }
L8c02ee00:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02ee5a:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
L8c02ee64:;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02e940(SH4Ctx *c) {
  fp_mov(c,3,4);
  fp_unary(c,0,3);
  R(0)=0x8c02eae0u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c02e950;
  {  goto L8c02ebc0; }
L8c02e950:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02e962u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02e9ac;
  R(2)=LD32(R(15)+12);
  R(3)=0xa0u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  R(3)+=R(15);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(2)+8);
  c->fr[3]=0x00000000u;
  ST32(R(3)+8,R(1));
  fp_st(c,3,R(0)+R(15));
L8c02e9ac:;
  R(0)=0xa0u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,1,3);
  R(0)=0xb4u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02eb38; }
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ea94u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  {  goto L8c02eb00; }
L8c02eb00:;
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02eb92; }
L8c02eb38:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02eb92:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(15)); goto L8c02ee64; }
L8c02ebc0:;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02ebf2u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+12);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  {  goto L8c02f280; }
L8c02ec28:;
  R(0)=0xa0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02ed0a; }
  {  goto L8c02ee00; }
L8c02ed0a:;
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ed16u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  {  goto L8c02ed80; }
L8c02ed80:;
  fp_fmac(c,3,2);
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02ee5a; }
L8c02ee00:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02ee5a:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
L8c02ee64:;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02eb00(SH4Ctx *c) {
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02eb92; }
L8c02eb92:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(15)); goto L8c02ee64; }
L8c02ee64:;
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02ebc0(SH4Ctx *c) {
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=LD32(R(15)+36);
  R(5)+=0x14u;
  R(7)+=0xcu;
  R(6)+=0x18u;
  { uint32_t tg=R(12); c->pr=0x8c02ebf2u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+12);
  R(2)=0xa0u;
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  c->fr[3]=0x00000000u;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0xa8u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  R(0)=0xa8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ec28;
  {  goto L8c02f280; }
L8c02ec28:;
  R(0)=0xa0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xa8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xa0u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xa0u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x9cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xacu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x9cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb0u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xb4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xacu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  R(3)=0xc4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8cu;
  R(3)+=R(15);
  R(2)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x9cu;
  R(2)+=R(15);
  c->t=R(3)==R(2);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x90u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c02ed0a; }
  {  goto L8c02ee00; }
L8c02ed0a:;
  R(5)=0xc4u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c02ed16u; R(4)+=0x64u; f_8c05e6ea(c); }
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  {  goto L8c02ed80; }
L8c02ed80:;
  fp_fmac(c,3,2);
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02ee5a; }
L8c02ee00:;
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c02ee5a:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02ed80(SH4Ctx *c) {
  fp_fmac(c,3,2);
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c02ee5a; }
L8c02ee5a:;
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02ee00(SH4Ctx *c) {
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xc8u;
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xc8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ee84;
  {  goto L8c02f280; }
L8c02ee84:;
  R(0)=0xc8u;
  R(7)=R(15);
  fp_mov(c,0,15);
  R(6)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0xcu;
  R(0)=0xccu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(6)+=0x18u;
  R(5)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02eed0u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(0)=0xb8u;
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xbcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+24);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xc0u;
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  R(0)=0xc0u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02ef12;
  {  goto L8c02f280; }
L8c02ef12:;
  R(0)=0xb8u;
  R(5)=0xc4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xb8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(4)=0xb8u;
  R(5)+=R(15);
  { uint32_t tg=R(13); c->pr=0x8c02ef5au; R(4)+=R(15); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02efa0;
  { fp_mov(c,4,3); goto L8c02efaa; }
L8c02efa0:;
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02efa0(SH4Ctx *c) {
  c->fr[5]=0x3F800000u;
  fp_unary(c,0,5);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c02efaa;
  fp_mov(c,4,5);
L8c02efaa:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c02efb0u;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,4,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02efd8;
  R(0)=0x1cu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(15));
L8c02efd8:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  c->t=(R(8)&R(8))==0;
  R(0)=0xc4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02f008; }
  {  goto L8c02f132; }
L8c02f008:;
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02f016;
  {  goto L8c02f132; }
L8c02f016:;
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c02f070u;
  fp_ld(c,3,R(0));
  R(0)=0x40u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,5,3);
  fp_mov(c,0,15);
  fp_arith(c,2,1,2);
  fp_mov(c,4,15);
  fp_arith(c,2,1,5);
  fp_mov(c,15,1);
  fp_arith(c,2,15,0);
  c->fr[0]=0x00000000u;
  fp_cmp(c,1,15,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f044; }
  { fp_mov(c,1,15); goto L8c02f048; }
L8c02f044:;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
L8c02f048:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c02f080;
  { fp_mov(c,3,4); goto L8c02f084; }
L8c02f080:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c02f084:;
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02f080(SH4Ctx *c) {
  fp_mov(c,3,4);
  fp_unary(c,0,3);
  fp_cmp(c,1,1,3);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c02f08c; }
  fp_mov(c,15,4);
L8c02f08c:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02f094;
  { fp_mov(c,3,15); goto L8c02f098; }
L8c02f094:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02f098:;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02f132;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(c->t) goto L8c02f132;
  R(0)=R(8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f132;
  R(14)=LD32(R(15)+8);
  R(13)=LD32(R(15)+8);
  R(14)=LD32(R(14)+36);
  R(13)=LD32(R(13)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=LD32(R(13)+8); if(k) goto L8c02f132; }
  R(2)=0x8c068530u;
  { c->pr=0x8c02f0c4u; fp_mov(c,4,15); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02f0ccu; fp_mov(c,4,15); f_8c0686fc(c); }
  R(0)=0x4cu;
  fp_mov(c,4,0);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  c->fr[3]=0x00000000u;
  R(6)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,4);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=0x8c05e8c4u;
  R(4)=R(15);
  c->fr[3]=0x3F800000u;
  R(6)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x4cu;
  { c->pr=0x8c02f108u; R(4)+=0x4cu; f_8c05e8c4(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015c9cu;
  R(5)+=0x4cu;
  R(7)+=0x64u;
  R(6)+=0x58u;
  { c->pr=0x8c02f11au; R(4)=R(14); f_8c015c9c(c); }
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02f120u; R(4)=LD32(R(15)+8); f_8c064b7e(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02f132;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02f12au; R(4)=R(13); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02f132u; R(5)=R(14); f_8c08fe60(c); }
L8c02f132:;
  R(0)=0x8c02f1dcu;
  fp_ld(c,3,R(0));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f14a;
  {  goto L8c02f280; }
L8c02f14a:;
  R(0)=LD32(R(15)+40);
  R(6)=0x2u;
  R(5)=0x3u;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x4u; if(k) goto L8c02f178; }
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c02f16e;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c02f168;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f168:;
  R(1)=0x1u;
  { ST32(R(15)+52,R(1)); goto L8c02f280; }
L8c02f16e:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(c->t) goto L8c02f1a0;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f178:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02f186;
  { fp_mov(c,4,2); goto L8c02f18a; }
L8c02f186:;
  fp_mov(c,4,2);
  fp_unary(c,0,4);
L8c02f18a:;
  R(0)=0x8c02f1e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c02f198;
  R(2)=0x1u;
  { ST32(R(15)+52,R(2)); goto L8c02f280; }
L8c02f198:;
  R(0)=0x8c02f1e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c02f200;
L8c02f1a0:;
  { ST32(R(15)+52,R(5)); goto L8c02f280; }
L8c02f200:;
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02f200(SH4Ctx *c) {
  R(0)=0x1cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  if(!c->t) goto L8c02f20e;
  { ST32(R(15)+52,R(4)); goto L8c02f280; }
L8c02f20e:;
  { ST32(R(15)+52,R(6)); goto L8c02f280; }
L8c02f280:;
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02f260(SH4Ctx *c) {
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  ST32(R(15),R(14));
  ST32(R(15)+4,R(14));
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  ST32(R(15)+52,R(14));
  R(2)=0x8c0c517cu;
  R(3)=LD32(R(15));
  R(0)=0xc4u;
  ST16(R(2),R(3));
  R(3)=0x8c0c517eu;
  R(0)+=R(15);
  R(1)=LD32(R(15)+4);
  ST16(R(3),R(1));
  R(2)=LD32(R(0));
  R(1)=0x8c0c5170u;
  R(3)=LD32(R(0)+4);
  ST32(R(1),R(2));
  ST32(R(1)+4,R(3));
  R(2)=LD32(R(0)+8);
  R(0)=0x10u;
  R(3)=0x8c0c5184u;
  ST32(R(1)+8,R(2));
  R(1)+=0x18u;
  R(2)=0x8c0c5180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c0c518cu;
  fp_st(c,3,R(1));
  R(2)=LD32(R(15)+52);
  ST32(R(0),R(2));
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(1)=0xe0u;
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
void f_8c02f2de(SH4Ctx *c) {
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
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(1)=0x15cu;
  R(4)=LD32(R(4));
  R(12)=0x8c0c5120u;
  R(0)=R(4);
  R(11)=0x8c0c5121u;
  R(8)=0x8c0c511du;
  c->t=R(0)==R(1);
  R(9)=0x8c0c511fu;
  R(10)=0x8c0c511eu;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c02f380; }
  R(1)=0x15du;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02f388;
  R(1)=0x15eu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02f31c;
  {  goto L8c02f41c; }
L8c02f31c:;
  R(1)=0x15bu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02f326;
  {  goto L8c02f500; }
L8c02f326:;
  {  goto L8c02f528; }
L8c02f380:;
  R(2)=0x8c0c5110u;
  R(3)=0x1u;
  { ST8(R(2),R(3)); goto L8c02f528; }
L8c02f388:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02f3a2;
  R(2)=0x8c06ff00u;
  R(6)=R(15);
  R(14)+=0xcu;
  R(5)=R(14);
  R(6)+=0x4u;
  { c->pr=0x8c02f39eu; R(4)=R(13); f_8c06ff00(c); }
  { R(14)=R(0); goto L8c02f3a4; }
L8c02f3a2:;
  ST32(R(15)+4,R(13));
L8c02f3a4:;
  R(5)=(int32_t)(int8_t)LD8(R(11));
  R(7)=R(15);
  R(6)=LD32(R(15)+4);
  R(7)+=0x8u;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  R(5)<<=8;
  R(6)=LD32(R(6)+4);
  R(5)+=R(3);
  R(4)=LD32(R(14));
  R(3)=0x6u;
  R(6)=LD32(R(6)+12);
  R(5)=R(5)&0xFFFF;
  R(6)=LD32(R(6));
  R(14)+=0xcu;
  ST32(R(15)+8,R(5));
  ST32(R(15)+20,R(3));
  R(3)=0x8c0729f6u;
  { c->pr=0x8c02f3cau; R(5)=0x0u; f_8c0729f6(c); }
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02f3e2;
  R(2)=0x8c06ff00u;
  R(14)+=0xcu;
  R(5)=R(14);
  R(6)=R(15);
  { c->pr=0x8c02f3deu; R(4)=R(13); f_8c06ff00(c); }
  { R(14)=R(0); goto L8c02f3e4; }
L8c02f3e2:;
  ST32(R(15),R(13));
L8c02f3e4:;
  R(5)=(int32_t)(int8_t)LD8(R(8));
  R(7)=R(15);
  R(3)=(int32_t)(int8_t)LD8(R(10));
  R(7)+=0x8u;
  R(2)=(int32_t)(int8_t)LD8(R(9));
  R(5)<<=8;
  R(3)<<=16;
  R(6)=LD32(R(15));
  R(2)<<=16;
  R(4)=LD32(R(14));
  R(2)<<=8;
  R(6)=LD32(R(6)+4);
  R(5)+=R(3);
  R(5)+=R(2);
  R(2)=0x8c0c511cu;
  R(6)=LD32(R(6)+12);
  R(14)+=0xcu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(6)=LD32(R(6));
  R(5)+=R(3);
  R(3)=0x6u;
  ST32(R(15)+8,R(5));
  ST32(R(15)+20,R(3));
  R(3)=0x8c0729f6u;
  { c->pr=0x8c02f418u; R(5)=0x0u; f_8c0729f6(c); }
  {  goto L8c02f528; }
L8c02f41c:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02f428u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(4)=R(0);
  ST8(R(12),R(4));
  R(4)=R(4)&0xFFFF;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c02f43a;
  { R(4)>>=8; goto L8c02f440; }
L8c02f43a:;
  R(4)=~R(4);
  R(4)>>=8;
  R(4)=~R(4);
L8c02f440:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  ST8(R(11),R(4));
  R(2)=LD32(R(14)+4);
  { uint32_t tg=R(2); c->pr=0x8c02f44eu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c0c511cu;
  R(14)=R(0);
  R(4)=LD32(R(15)+8);
  ST8(R(3),R(4));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(5)=0xffffffceu; if(k) goto L8c02f462; }
  R(0)=0x8c0c511cu;
  ST8(R(0),R(5));
L8c02f462:;
  R(3)=R(4);
  R(3)>>=8;
  ST8(R(8),R(3));
  R(3)=(int32_t)(int8_t)LD8(R(8));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(6)=0x32u; if(k) goto L8c02f472; }
  ST8(R(8),R(6));
L8c02f472:;
  R(3)=R(4);
  R(3)>>=16;
  ST8(R(10),R(3));
  R(1)=(int32_t)(int8_t)LD8(R(10));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=!c->t; R(4)>>=16; if(k) goto L8c02f482; }
  ST8(R(10),R(5));
L8c02f482:;
  R(4)>>=8;
  ST8(R(9),R(4));
  R(3)=(int32_t)(int8_t)LD8(R(9));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02f48e;
  ST8(R(9),R(6));
L8c02f48e:;
  R(3)=0x8c0c511cu;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  R(4)=(int32_t)(int8_t)LD8(R(3));
  R(1)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(2)>(int32_t)R(1);
  if(c->t) goto L8c02f49e;
  R(4)+=0x1u;
  ST8(R(12),R(4));
L8c02f49e:;
  R(4)=(int32_t)(int8_t)LD8(R(8));
  R(3)=(int32_t)(int8_t)LD8(R(12));
  R(2)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c02f4ac;
  R(4)+=0xffffffffu;
  ST8(R(12),R(4));
L8c02f4ac:;
  R(4)=(int32_t)(int8_t)LD8(R(10));
  R(2)=(int32_t)(int8_t)LD8(R(11));
  R(3)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c02f4ba;
  R(4)+=0x1u;
  ST8(R(11),R(4));
L8c02f4ba:;
  R(4)=(int32_t)(int8_t)LD8(R(9));
  R(3)=(int32_t)(int8_t)LD8(R(11));
  R(2)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c02f528;
  R(4)+=0xffffffffu;
  { ST8(R(11),R(4)); goto L8c02f528; }
L8c02f500:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02f50cu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c0c5114u;
  R(14)=R(0);
  R(2)=LD32(R(15)+8);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  ST32(R(3),R(2));
  R(1)=LD32(R(14)+4);
  { uint32_t tg=R(1); c->pr=0x8c02f520u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0x8c0c5118u;
  R(14)=R(0);
  R(3)=LD32(R(15)+8);
  ST32(R(2),R(3));
L8c02f528:;
  R(0)=R(14);
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
void f_8c02f380(SH4Ctx *c) {
  R(2)=0x8c0c5110u;
  R(3)=0x1u;
  { ST8(R(2),R(3)); goto L8c02f528; }
L8c02f528:;
  R(0)=R(14);
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
void f_8c02f500(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02f50cu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c0c5114u;
  R(14)=R(0);
  R(2)=LD32(R(15)+8);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  ST32(R(3),R(2));
  R(1)=LD32(R(14)+4);
  { uint32_t tg=R(1); c->pr=0x8c02f520u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0x8c0c5118u;
  R(14)=R(0);
  R(3)=LD32(R(15)+8);
  ST32(R(2),R(3));
  R(0)=R(14);
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
void f_8c02f53e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(13)=LD32(R(13)+4);
  R(14)=R(4);
  { uint32_t tg=R(13); c->pr=0x8c02f556u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c0c50fcu;
  R(13)=R(0);
  R(3)=LD32(R(15)+4);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x4u;
  ST32(R(2),R(3));
  R(1)=LD32(R(13)+4);
  { uint32_t tg=R(1); c->pr=0x8c02f56au; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c0c5100u;
  R(13)=R(0);
  R(3)=LD32(R(15)+4);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x4u;
  ST32(R(2),R(3));
  R(1)=LD32(R(13)+4);
  { uint32_t tg=R(1); c->pr=0x8c02f57eu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c0c5104u;
  R(13)=R(0);
  R(3)=LD32(R(15)+4);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x4u;
  ST32(R(2),R(3));
  R(1)=LD32(R(13)+4);
  { uint32_t tg=R(1); c->pr=0x8c02f592u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c0c5108u;
  R(13)=R(0);
  R(3)=LD32(R(15)+4);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x4u;
  ST32(R(2),R(3));
  R(1)=LD32(R(13)+4);
  { uint32_t tg=R(1); c->pr=0x8c02f5a6u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c0c510cu;
  R(5)=R(0);
  R(3)=LD32(R(15)+4);
  R(0)=R(5);
  ST32(R(2),R(3));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02f5ba(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0c5114u;
  ST32(R(15),R(5));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02f5d2;
  R(2)=0x8c05bcb8u;
  { c->pr=0x8c02f5ceu; R(4)=LD32(R(3)); f_8c05bcb8(c); }
  { R(3)=R(0); goto L8c02f5d4; }
L8c02f5d2:;
  R(3)=0x0u;
L8c02f5d4:;
  R(1)=0x8c0c5118u;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02f5e8;
  R(3)=0x8c05bcb8u;
  { c->pr=0x8c02f5e4u; R(4)=LD32(R(1)); f_8c05bcb8(c); }
  { R(6)=R(0); goto L8c02f5ea; }
L8c02f5e8:;
  R(6)=0x0u;
L8c02f5ea:;
  R(5)=0x8c0c5121u;
  R(4)=0x8c0c5120u;
  R(3)=LD32(R(15)+4);
  ST8(R(4),R(3));
  ST8(R(5),R(6));
  R(6)=0x8c0c511du;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(2)=(int32_t)(int8_t)LD8(R(6));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c02f604;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(2)+=0x1u;
  ST8(R(6),R(2));
L8c02f604:;
  R(7)=0x8c0c511cu;
  R(6)=(int32_t)(int8_t)LD8(R(4));
  R(2)=(int32_t)(int8_t)LD8(R(7));
  c->t=(int32_t)R(6)>(int32_t)R(2);
  if(c->t) goto L8c02f612;
  R(6)+=0xffffffffu;
  ST8(R(7),R(6));
L8c02f612:;
  R(4)=0x8c0c511fu;
  R(2)=(int32_t)(int8_t)LD8(R(5));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c02f622;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(3)+=0x1u;
  ST8(R(4),R(3));
L8c02f622:;
  R(6)=0x8c0c511eu;
  R(4)=(int32_t)(int8_t)LD8(R(5));
  R(3)=(int32_t)(int8_t)LD8(R(6));
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c02f630;
  R(4)+=0xffffffffu;
  ST8(R(6),R(4));
L8c02f630:;
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02f63a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c5114u;
  ST32(R(15),R(5));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02f6a0;
  R(3)=0x8c05bcb8u;
  { c->pr=0x8c02f650u; R(4)=LD32(R(2)); f_8c05bcb8(c); }
  { R(14)=R(0); goto L8c02f6a2; }
L8c02f6a0:;
  R(14)=0x0u;
L8c02f6a2:;
  R(2)=0x8c0c5118u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02f6b4;
  R(3)=0x8c05bcb8u;
  { c->pr=0x8c02f6b0u; R(4)=LD32(R(2)); f_8c05bcb8(c); }
  { R(4)=R(0); goto L8c02f6b6; }
L8c02f6b4:;
  R(4)=0x0u;
L8c02f6b6:;
  R(6)=0x8c0c511fu;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)=(int32_t)(int8_t)LD8(R(6));
  c->t=(int32_t)R(5)>(int32_t)R(3);
  if(!c->t) goto L8c02f6c4;
  { ST8(R(6),R(4)); goto L8c02f6ce; }
L8c02f6c4:;
  R(6)=0x8c0c511eu;
  R(2)=(int32_t)(int8_t)LD8(R(6));
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(c->t) goto L8c02f6ce;
  ST8(R(6),R(4));
L8c02f6ce:;
  R(5)=0x8c0c511du;
  R(4)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=(int32_t)(int8_t)LD8(R(5));
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(!c->t) goto L8c02f6dc;
  { ST8(R(5),R(14)); goto L8c02f6e6; }
L8c02f6dc:;
  R(5)=0x8c0c511cu;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c02f6e6;
  ST8(R(5),R(14));
L8c02f6e6:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02f6a0(SH4Ctx *c) {
  R(14)=0x0u;
  R(2)=0x8c0c5118u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02f6b4;
  R(3)=0x8c05bcb8u;
  { c->pr=0x8c02f6b0u; R(4)=LD32(R(2)); f_8c05bcb8(c); }
  { R(4)=R(0); goto L8c02f6b6; }
L8c02f6b4:;
  R(4)=0x0u;
L8c02f6b6:;
  R(6)=0x8c0c511fu;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)=(int32_t)(int8_t)LD8(R(6));
  c->t=(int32_t)R(5)>(int32_t)R(3);
  if(!c->t) goto L8c02f6c4;
  { ST8(R(6),R(4)); goto L8c02f6ce; }
L8c02f6c4:;
  R(6)=0x8c0c511eu;
  R(2)=(int32_t)(int8_t)LD8(R(6));
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(c->t) goto L8c02f6ce;
  ST8(R(6),R(4));
L8c02f6ce:;
  R(5)=0x8c0c511du;
  R(4)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=(int32_t)(int8_t)LD8(R(5));
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(!c->t) goto L8c02f6dc;
  { ST8(R(5),R(14)); goto L8c02f6e6; }
L8c02f6dc:;
  R(5)=0x8c0c511cu;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c02f6e6;
  ST8(R(5),R(14));
L8c02f6e6:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02f6f0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=R(5);
  R(14)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(13)=R(4); if(k) goto L8c02f722; }
  R(2)=0x8c06ff00u;
  R(14)+=0xcu;
  R(5)=R(14);
  R(6)=R(15);
  { c->pr=0x8c02f71eu; R(4)=R(13); f_8c06ff00(c); }
  { R(14)=R(0); goto L8c02f724; }
L8c02f722:;
  ST32(R(15),R(13));
L8c02f724:;
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(11)=LD32(R(14));
  R(14)+=0xcu;
  R(12)=LD32(R(12)+4);
  R(5)=R(14);
  R(10)=LD32(R(14)+4);
  R(6)+=0x10u;
  R(12)=LD32(R(12)+12);
  R(12)=LD32(R(12));
  { uint32_t tg=R(10); c->pr=0x8c02f73cu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=LD32(R(15)+16);
  R(10)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=0x10u;
  R(14)+=0xffffffffu;
  { uint32_t tg=R(3); c->pr=0x8c02f74eu; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(3)=LD32(R(15)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02f780;
  { R(0)=0x1u; goto L8c02f782; }
L8c02f780:;
  R(0)=0x0u;
L8c02f782:;
  ST8(R(15)+12,R(0));
  R(1)=0x15fu;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02f7dc;
  R(13)=R(14);
  R(13)>>=2;
  R(2)=0x1fu;
  R(7)=R(15);
  R(13)>>=2;
  R(3)=0x8c07275cu;
  R(14)&=R(2);
  R(6)=R(12);
  c->t=R(13)&1;R(13)>>=1;
  ST32(R(15)+4,R(14));
  R(5)=R(13);
  R(7)+=0x10u;
  { c->pr=0x8c02f7a8u; R(4)=R(11); f_8c07275c(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f7e4;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(5)=0x1u;
  R(3)=LD32(R(15)+4);
  R(4)=LD32(R(15)+16);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(5)=sh4_shad(R(5),R(3)); if(k) goto L8c02f7c0; }
  { R(4)|=R(5); goto L8c02f7c4; }
L8c02f7c0:;
  R(5)=~R(5);
  R(4)&=R(5);
L8c02f7c4:;
  R(3)=0x6u;
  R(7)=R(15);
  R(5)=R(13);
  ST32(R(15)+16,R(4));
  ST32(R(15)+28,R(3));
  R(7)+=0x10u;
  R(3)=0x8c0729f6u;
  R(6)=R(12);
  { c->pr=0x8c02f7d8u; R(4)=R(11); f_8c0729f6(c); }
  {  goto L8c02f7e4; }
L8c02f7dc:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02f7e4u; R(4)=0x28u; f_8c074080(c); }
L8c02f7e4:;
  R(0)=LD32(R(15)+8);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02f780(SH4Ctx *c) {
  R(0)=0x0u;
  ST8(R(15)+12,R(0));
  R(1)=0x15fu;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02f7dc;
  R(13)=R(14);
  R(13)>>=2;
  R(2)=0x1fu;
  R(7)=R(15);
  R(13)>>=2;
  R(3)=0x8c07275cu;
  R(14)&=R(2);
  R(6)=R(12);
  c->t=R(13)&1;R(13)>>=1;
  ST32(R(15)+4,R(14));
  R(5)=R(13);
  R(7)+=0x10u;
  { c->pr=0x8c02f7a8u; R(4)=R(11); f_8c07275c(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02f7e4;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(5)=0x1u;
  R(3)=LD32(R(15)+4);
  R(4)=LD32(R(15)+16);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(5)=sh4_shad(R(5),R(3)); if(k) goto L8c02f7c0; }
  { R(4)|=R(5); goto L8c02f7c4; }
L8c02f7c0:;
  R(5)=~R(5);
  R(4)&=R(5);
L8c02f7c4:;
  R(3)=0x6u;
  R(7)=R(15);
  R(5)=R(13);
  ST32(R(15)+16,R(4));
  ST32(R(15)+28,R(3));
  R(7)+=0x10u;
  R(3)=0x8c0729f6u;
  R(6)=R(12);
  { c->pr=0x8c02f7d8u; R(4)=R(11); f_8c0729f6(c); }
  {  goto L8c02f7e4; }
L8c02f7dc:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02f7e4u; R(4)=0x28u; f_8c074080(c); }
L8c02f7e4:;
  R(0)=LD32(R(15)+8);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02f820(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(14)=LD32(R(14)+4);
  R(13)=R(4);
  { uint32_t tg=R(14); c->pr=0x8c02f83cu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x4u;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c02f84eu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x4u;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c02f860u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x4u;
  R(3)=0x8c056960u;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,5,15);
  { c->pr=0x8c02f86eu; fp_mov(c,4,14); f_8c056960(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02f87e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02f88eu; R(6)+=0x4u; sh4_call(c,tg); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02f896(SH4Ctx *c) {
  /* SCREEN CALIBRATION activation: repurposed to toggle FPS limit (60 <-> 30) */
  int cur_fps = r2_get_fps_limit();
  int new_fps = (cur_fps == 60) ? 30 : 60;
  r2_set_fps_limit(new_fps);
  return;
}
void f_8c02f8ae(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02f8beu; R(6)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c07a9a0u;
  ST32(R(15),R(0));
  { c->pr=0x8c02f8c6u; R(4)=LD32(R(15)+4); f_8c07a9a0(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02f8d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(5);
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c02f8deu; R(6)=R(15); sh4_call(c,tg); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02f920(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffbfecu;
  R(15)+=R(0);
  R(3)=R(5);
  R(6)=0x4004u;
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02f934u; R(6)+=R(15); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x4004u;
  R(3)=0x8c01917au;
  R(14)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(14)=R(14)&0xFF;
  { c->pr=0x8c02f942u; R(4)=R(14); f_8c01917a(c); }
  R(3)=0x8c0c512cu;
  R(2)=0x1u;
  R(4)=R(15);
  ST32(R(3),R(2));
  R(2)=0x8c0cc9e4u;
  { c->pr=0x8c02f950u; R(4)+=0x4u; f_8c0cc9e4(c); }
  R(3)=0x8c0cca00u;
  c->t=(R(14)&R(14))==0;
  R(4)=c->t;
  { c->pr=0x8c02f95au;  f_8c0cca00(c); }
  R(2)=0x8c0cc9f6u;
  { c->pr=0x8c02f960u;  f_8c0cc9f6(c); }
  R(2)=0x8c0c512cu;
  R(3)=0x0u;
  R(1)=0x4014u;
  ST32(R(2),R(3));
  R(0)=LD32(R(15));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02f972(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02f982u; R(6)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c01995cu;
  ST32(R(15),R(0));
  R(0)=0x4u;
  { c->pr=0x8c02f98cu; fp_ld(c,4,R(0)+R(15)); f_8c01995c(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02f996(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(12)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02fa00;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c02fa02; }
L8c02fa00:;
  ST32(R(15),R(12));
L8c02fa02:;
  R(13)=LD32(R(15));
  R(13)=LD32(R(13)+4);
  R(13)=LD32(R(13)+40);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02fa3c;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c02fa18u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(14)=R(0);
  R(3)=0x8c051460u;
  R(5)<<=16;
  { c->pr=0x8c02fa24u; R(4)=R(13); f_8c051460(c); }
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c02fa30u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(14)=R(0);
  R(3)=0x8c051468u;
  R(5)<<=16;
  { c->pr=0x8c02fa3cu; R(4)=R(13); f_8c051468(c); }
L8c02fa3c:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02fa00(SH4Ctx *c) {
  ST32(R(15),R(12));
  R(13)=LD32(R(15));
  R(13)=LD32(R(13)+4);
  R(13)=LD32(R(13)+40);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c02fa3c;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c02fa18u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(14)=R(0);
  R(3)=0x8c051460u;
  R(5)<<=16;
  { c->pr=0x8c02fa24u; R(4)=R(13); f_8c051460(c); }
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c02fa30u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(14)=R(0);
  R(3)=0x8c051468u;
  R(5)<<=16;
  { c->pr=0x8c02fa3cu; R(4)=R(13); f_8c051468(c); }
L8c02fa3c:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02fa4a(SH4Ctx *c) {
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
  { uint32_t tg=R(3); c->pr=0x8c02fa64u; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(1)=0x16fu;
  R(0)=LD32(R(15));
  c->t=R(0)==R(1);
  if(c->t) goto L8c02fa78;
  R(1)=0x170u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02fac8;
  {  goto L8c02fac0; }
L8c02fa78:;
  R(2)=0x8c017ac4u;
  R(3)=0x8c2d1064u;
  { c->pr=0x8c02fa80u; R(4)=LD32(R(3)); f_8c017ac4(c); }
  R(3)=0x8c04f64eu;
  R(4)=R(0);
  { c->pr=0x8c02fa88u; R(5)=0x0u; f_8c04f64e(c); }
  {  goto L8c02fac8; }
L8c02fac0:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02fac8u; R(4)=0x28u; f_8c074080(c); }
L8c02fac8:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02fac0(SH4Ctx *c) {
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02fac8u; R(4)=0x28u; f_8c074080(c); }
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02fad2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c2d0398u;
  ST32(R(15),R(5));
  R(4)=(int32_t)(int8_t)LD8(R(3));
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02fb1e;
  R(14)=0x8c2d0399u;
  R(4)=R(4)&0xFF;
  R(1)=(int32_t)(int8_t)LD8(R(14));
  R(1)=R(1)&0xFF;
  c->t=(int32_t)R(1)>=(int32_t)R(4);
  if(!c->t) goto L8c02faf6;
  R(1)=0x8c049e60u;
  { c->pr=0x8c02faf6u;  f_8c049e60(c); }
L8c02faf6:;
  R(2)=0x8c0c59ccu;
  R(3)=0x4u;
  R(0)=0x8c0c6114u;
  R(1)=0x1u;
  ST16(R(2),R(3));
  R(5)=0x0u;
  ST32(R(0),R(1));
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(1)=0x8c2d0078u;
  R(4)=R(4)&0xFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(3)=0x8c045b80u;
  R(4)<<=2;
  { c->pr=0x8c02fb18u; R(4)+=R(1); f_8c045b80(c); }
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(2)+=0x1u;
  ST8(R(14),R(2));
L8c02fb1e:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02fb28(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02fb38u; R(6)+=0x4u; sh4_call(c,tg); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fb40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02fb50u; R(6)+=0x4u; sh4_call(c,tg); }
  R(2)=0x8c0c6834u;
  R(5)=R(0);
  R(3)=LD32(R(15)+4);
  ST32(R(2),R(3));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c02fb60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c010d60u;
  { c->pr=0x8c02fb6au; ST32(R(15),R(5)); f_8c010d60(c); }
  R(2)=0x8c04ee88u;
  { c->pr=0x8c02fb70u;  f_8c04ee88(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fb7a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x2u;
  ST32(R(15)+8,R(5));
  R(0)=0x1u;
  ST8(R(15)+4,R(0));
  ST8(R(15),R(3));
  R(3)=0x8c05beeau;
  { c->pr=0x8c02fb8eu; R(4)=0x1u; f_8c05beea(c); }
  R(2)=0x8c2d20d0u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c02fbaa;
  R(1)=0x8c05bfc0u;
  R(4)=R(15);
  R(6)=0x1u;
  R(5)=R(15);
  { c->pr=0x8c02fba2u; R(4)+=0x4u; f_8c05bfc0(c); }
  R(2)=0x8c140958u;
  R(3)=0x1u;
  { ST8(R(2),R(3)); goto L8c02fbb0; }
L8c02fbaa:;
  R(1)=0x8c0c6b2cu;
  R(0)=0xffffffffu;
  ST32(R(1),R(0));
L8c02fbb0:;
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fbba(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x2u;
  ST32(R(15)+8,R(5));
  R(4)=R(3);
  R(0)=0x1u;
  ST8(R(15)+4,R(0));
  ST8(R(15),R(3));
  R(3)=0x8c05beeau;
  { c->pr=0x8c02fbd0u;  f_8c05beea(c); }
  R(2)=0x8c2d20d0u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c02fc40;
  R(1)=0x8c05bfc0u;
  R(4)=R(15);
  R(6)=0x1u;
  R(5)=R(15);
  { c->pr=0x8c02fbe4u; R(4)+=0x4u; f_8c05bfc0(c); }
  R(2)=0x8c140958u;
  R(3)=0x1u;
  { ST8(R(2),R(3)); goto L8c02fc46; }
L8c02fc40:;
  R(1)=0x8c0c6b2cu;
  R(0)=0xffffffffu;
  ST32(R(1),R(0));
L8c02fc46:;
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fc50(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c05bf1cu;
  { c->pr=0x8c02fc5au; ST32(R(15),R(5)); f_8c05bf1c(c); }
  R(3)=0x8c140958u;
  R(2)=0x0u;
  ST8(R(3),R(2));
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fc6a(SH4Ctx *c) {
  R(4)=0x8c0c5404u;
  R(3)=0xffffffceu;
  R(2)=LD32(R(4));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c02fc80;
  R(0)=LD32(R(4));
  R(2)=0x1u;
  R(1)=0x8c0c540cu;
  R(0)+=0xffffffffu;
  ST32(R(4),R(0));
  ST32(R(1),R(2));
L8c02fc80:;
  { R(0)=R(5); return; }
}
void f_8c02fc84(SH4Ctx *c) {
  R(4)=0x8c0c5404u;
  R(3)=0x32u;
  R(2)=LD32(R(4));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c02fc9a;
  R(0)=LD32(R(4));
  R(2)=0x1u;
  R(1)=0x8c0c540cu;
  R(0)+=0x1u;
  ST32(R(4),R(0));
  ST32(R(1),R(2));
L8c02fc9a:;
  { R(0)=R(5); return; }
}
void f_8c02fc9e(SH4Ctx *c) {
  R(4)=0x8c0c5408u;
  R(3)=0xffffffefu;
  R(2)=LD32(R(4));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c02fcb4;
  R(0)=LD32(R(4));
  R(2)=0x1u;
  R(1)=0x8c0c540cu;
  R(0)+=0xffffffffu;
  ST32(R(4),R(0));
  ST32(R(1),R(2));
L8c02fcb4:;
  { R(0)=R(5); return; }
}
void f_8c02fcb8(SH4Ctx *c) {
  R(4)=0x8c0c5408u;
  R(3)=0x32u;
  R(2)=LD32(R(4));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c02fcce;
  R(0)=LD32(R(4));
  R(2)=0x1u;
  R(1)=0x8c0c540cu;
  R(0)+=0x1u;
  ST32(R(4),R(0));
  ST32(R(1),R(2));
L8c02fcce:;
  { R(0)=R(5); return; }
}
void f_8c02fd00(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02fd14u; R(5)=R(3); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02fd26;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02fd28; }
L8c02fd26:;
  R(5)=LD32(R(15)+8);
L8c02fd28:;
  R(3)=0x8c083010u;
  { c->pr=0x8c02fd2eu; R(4)=LD32(R(15)+4); f_8c083010(c); }
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fd38(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02fd4cu; R(5)=R(3); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02fd5e;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02fd60; }
L8c02fd5e:;
  R(5)=LD32(R(15)+8);
L8c02fd60:;
  R(3)=0x8c08302eu;
  { c->pr=0x8c02fd66u; R(4)=LD32(R(15)+4); f_8c08302e(c); }
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fd70(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02fd84u; R(5)=R(3); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02fd96;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02fd98; }
L8c02fd96:;
  R(5)=LD32(R(15)+8);
L8c02fd98:;
  R(3)=0x8c08306cu;
  { c->pr=0x8c02fd9eu; R(4)=LD32(R(15)+4); f_8c08306c(c); }
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fda8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02fdbcu; R(5)=R(3); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02fdce;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02fdd0; }
L8c02fdce:;
  R(5)=LD32(R(15)+8);
L8c02fdd0:;
  R(3)=0x8c083098u;
  { c->pr=0x8c02fdd6u; R(4)=LD32(R(15)+4); f_8c083098(c); }
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fde0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02fdf4u; R(5)=R(3); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02fe40;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02fe42; }
L8c02fe40:;
  R(5)=LD32(R(15)+8);
L8c02fe42:;
  R(3)=0x8c0830b6u;
  { c->pr=0x8c02fe48u; R(4)=LD32(R(15)+4); f_8c0830b6(c); }
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fe52(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02fe66u; R(5)=R(3); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02fe78;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02fe7a; }
L8c02fe78:;
  R(5)=LD32(R(15)+8);
L8c02fe7a:;
  R(3)=0x8c0830f4u;
  { c->pr=0x8c02fe80u; R(4)=LD32(R(15)+4); f_8c0830f4(c); }
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02fe8a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(7)=0x8c0c76fcu;
  R(6)=R(5);
  R(14)=R(5);
  R(6)+=0xfffffff4u;
  R(5)=LD32(R(7));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)); if(k) goto L8c02fee0; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(7),R(3)); goto L8c02fee2; }
L8c02fee0:;
  ST32(R(15),R(4));
L8c02fee2:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==90;
  if(c->t) goto L8c02fefc;
  R(1)=0xeeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ff28;
  c->t=(int32_t)R(0)==89;
  if(c->t) goto L8c02ff60;
  R(1)=0xedu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ff92;
  {  goto L8c02ffb6; }
L8c02fefc:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ff06u; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02ff18;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02ff1a; }
L8c02ff18:;
  R(5)=LD32(R(15)+8);
L8c02ff1a:;
  R(4)=LD32(R(15));
  R(3)=0x8c047ee4u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c02ff24u; R(4)=LD32(R(4)+20); f_8c047ee4(c); }
  {  goto L8c02ff88; }
L8c02ff28:;
  R(5)=LD32(R(15));
  R(4)=0xcdcdcdcdu;
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5)+12);
  { ST32(R(5)+4,R(4)); goto L8c02ffb6; }
L8c02ff60:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02ff6au; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02ff7c;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02ff7e; }
L8c02ff7c:;
  R(5)=LD32(R(15)+8);
L8c02ff7e:;
  R(4)=LD32(R(15));
  R(3)=0x8c043860u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c02ff88u; R(4)=LD32(R(4)); f_8c043860(c); }
L8c02ff88:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c02ff92:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02ff9cu; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  ST8(R(15)+4,R(0));
  R(4)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  ST8(R(4)+8,R(0));
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c02ffb6:;
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02fee0(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(0)=R(6);
  c->t=(int32_t)R(0)==90;
  if(c->t) goto L8c02fefc;
  R(1)=0xeeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ff28;
  c->t=(int32_t)R(0)==89;
  if(c->t) goto L8c02ff60;
  R(1)=0xedu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ff92;
  {  goto L8c02ffb6; }
L8c02fefc:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ff06u; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02ff18;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02ff1a; }
L8c02ff18:;
  R(5)=LD32(R(15)+8);
L8c02ff1a:;
  R(4)=LD32(R(15));
  R(3)=0x8c047ee4u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c02ff24u; R(4)=LD32(R(4)+20); f_8c047ee4(c); }
  {  goto L8c02ff88; }
L8c02ff28:;
  R(5)=LD32(R(15));
  R(4)=0xcdcdcdcdu;
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5)+12);
  { ST32(R(5)+4,R(4)); goto L8c02ffb6; }
L8c02ff60:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02ff6au; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02ff7c;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02ff7e; }
L8c02ff7c:;
  R(5)=LD32(R(15)+8);
L8c02ff7e:;
  R(4)=LD32(R(15));
  R(3)=0x8c043860u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c02ff88u; R(4)=LD32(R(4)); f_8c043860(c); }
L8c02ff88:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c02ff92:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02ff9cu; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  ST8(R(15)+4,R(0));
  R(4)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  ST8(R(4)+8,R(0));
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c02ffb6:;
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02ff60(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02ff6au; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02ff7c;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c02ff7e; }
L8c02ff7c:;
  R(5)=LD32(R(15)+8);
L8c02ff7e:;
  R(4)=LD32(R(15));
  R(3)=0x8c043860u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c02ff88u; R(4)=LD32(R(4)); f_8c043860(c); }
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02ff92(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02ff9cu; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  ST8(R(15)+4,R(0));
  R(4)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  ST8(R(4)+8,R(0));
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02ffb6(SH4Ctx *c) {
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02ffc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(4);
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(14)=R(5);
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=(int32_t)R(0)==82;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c02ffee; }
  c->t=(int32_t)R(0)==81;
  if(c->t) goto L8c02fff4;
  c->t=(int32_t)R(0)==80;
  if(c->t) goto L8c030060;
  c->t=(int32_t)R(0)==79;
  if(c->t) goto L8c03008a;
  {  goto L8c030090; }
L8c02ffee:;
  R(3)=0x8c0c762cu;
  { ST32(R(3),R(12)); goto L8c030090; }
L8c02fff4:;
  R(4)=LD32(R(13)+4);
  R(0)=0x10u;
  ST32(R(15)+4,R(4));
  R(4)=LD32(R(4)+12);
  ST32(R(15),R(4));
  R(4)=LD32(R(4));
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c03000a;
  { R(13)=LD32(R(4)+4); goto L8c03000c; }
L8c03000a:;
  R(13)=LD32(R(4)+8);
L8c03000c:;
  R(2)=0x8c071c3cu;
  R(11)=LD32(R(13)+8);
  { c->pr=0x8c030014u; R(4)=R(13); f_8c071c3c(c); }
  R(3)=LD32(R(11)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c03001e;
  { ST32(R(13)+4,R(12)); goto L8c030024; }
L8c03001e:;
  R(2)=LD32(R(11)+4);
  R(3)=LD32(R(2));
  ST32(R(13)+4,R(3));
L8c030024:;
  R(2)=0x8c0c5194u;
  R(3)=0x8c072f52u;
  ST32(R(2),R(12));
  { c->pr=0x8c03002eu; R(4)=0xbu; f_8c072f52(c); }
  {  goto L8c030090; }
L8c030060:;
  R(4)=LD32(R(13)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c030090;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c03006eu;  f_8c04a8b8(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c030090;
  R(2)=0x8c04e28au;
  { c->pr=0x8c03007au; R(4)=R(13); f_8c04e28a(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c030090;
  R(2)=0x8c08eae0u;
  { c->pr=0x8c030086u; R(4)=R(12); f_8c08eae0(c); }
  {  goto L8c030090; }
L8c03008a:;
  R(2)=0x8c052764u;
  { c->pr=0x8c030090u;  f_8c052764(c); }
L8c030090:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c030060(SH4Ctx *c) {
  R(4)=LD32(R(13)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c030090;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c03006eu;  f_8c04a8b8(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c030090;
  R(2)=0x8c04e28au;
  { c->pr=0x8c03007au; R(4)=R(13); f_8c04e28a(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c030090;
  R(2)=0x8c08eae0u;
  { c->pr=0x8c030086u; R(4)=R(12); f_8c08eae0(c); }
  {  goto L8c030090; }
L8c030090:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0300a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=R(4);
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(1)=0x8cu;
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c030100; }
  R(1)=0x8bu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c03016e;
  {  goto L8c03019e; }
L8c030100:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c030118;
  R(2)=0x8c06ff00u;
  R(14)+=0xcu;
  R(5)=R(14);
  R(6)=R(15);
  { c->pr=0x8c030114u; R(4)=R(13); f_8c06ff00(c); }
  { R(14)=R(0); goto L8c03011a; }
L8c030118:;
  ST32(R(15),R(13));
L8c03011a:;
  R(10)=LD32(R(15));
  R(7)=R(15);
  R(3)=0x8c07275cu;
  R(5)=0x0u;
  R(10)=LD32(R(10)+4);
  R(7)+=0x8u;
  R(12)=LD32(R(14));
  R(14)+=0xcu;
  R(10)=LD32(R(10)+12);
  R(10)=LD32(R(10));
  R(6)=R(10);
  { c->pr=0x8c030134u; R(4)=R(12); f_8c07275c(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c03019e;
  R(3)=0x8c052360u;
  R(11)=LD32(R(15)+8);
  { c->pr=0x8c030142u; R(4)=R(11); f_8c052360(c); }
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c03014c;
  { R(2)=0x0u; goto L8c03014e; }
L8c03014c:;
  R(2)=LD32(R(13)+4);
L8c03014e:;
  c->t=R(11)==R(2);
  if(!c->t) goto L8c030158;
  R(2)=0x8c072f52u;
  { c->pr=0x8c030158u; R(4)=0x3u; f_8c072f52(c); }
L8c030158:;
  R(3)=0x0u;
  R(7)=R(15);
  R(5)=R(3);
  ST32(R(15)+8,R(3));
  R(3)=0x8c0729f6u;
  R(7)+=0x8u;
  R(6)=R(10);
  { c->pr=0x8c03016au; R(4)=R(12); f_8c0729f6(c); }
  {  goto L8c03019e; }
L8c03016e:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c03017au; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c052360u;
  ST32(R(15)+4,R(0));
  R(14)=LD32(R(15)+8);
  { c->pr=0x8c030184u; R(4)=R(14); f_8c052360(c); }
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c03018e;
  { R(2)=0x0u; goto L8c030190; }
L8c03018e:;
  R(2)=LD32(R(13)+4);
L8c030190:;
  c->t=R(14)==R(2);
  if(!c->t) goto L8c03019a;
  R(2)=0x8c072f52u;
  { c->pr=0x8c03019au; R(4)=0x3u; f_8c072f52(c); }
L8c03019a:;
  { R(0)=LD32(R(15)+4); goto L8c0301a0; }
L8c03019e:;
  R(0)=R(14);
L8c0301a0:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c030100(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c030118;
  R(2)=0x8c06ff00u;
  R(14)+=0xcu;
  R(5)=R(14);
  R(6)=R(15);
  { c->pr=0x8c030114u; R(4)=R(13); f_8c06ff00(c); }
  { R(14)=R(0); goto L8c03011a; }
L8c030118:;
  ST32(R(15),R(13));
L8c03011a:;
  R(10)=LD32(R(15));
  R(7)=R(15);
  R(3)=0x8c07275cu;
  R(5)=0x0u;
  R(10)=LD32(R(10)+4);
  R(7)+=0x8u;
  R(12)=LD32(R(14));
  R(14)+=0xcu;
  R(10)=LD32(R(10)+12);
  R(10)=LD32(R(10));
  R(6)=R(10);
  { c->pr=0x8c030134u; R(4)=R(12); f_8c07275c(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c03019e;
  R(3)=0x8c052360u;
  R(11)=LD32(R(15)+8);
  { c->pr=0x8c030142u; R(4)=R(11); f_8c052360(c); }
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c03014c;
  { R(2)=0x0u; goto L8c03014e; }
L8c03014c:;
  R(2)=LD32(R(13)+4);
L8c03014e:;
  c->t=R(11)==R(2);
  if(!c->t) goto L8c030158;
  R(2)=0x8c072f52u;
  { c->pr=0x8c030158u; R(4)=0x3u; f_8c072f52(c); }
L8c030158:;
  R(3)=0x0u;
  R(7)=R(15);
  R(5)=R(3);
  ST32(R(15)+8,R(3));
  R(3)=0x8c0729f6u;
  R(7)+=0x8u;
  R(6)=R(10);
  { c->pr=0x8c03016au; R(4)=R(12); f_8c0729f6(c); }
  {  goto L8c03019e; }
L8c03019e:;
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0301e0(SH4Ctx *c) {
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
  R(14)=R(5);
  R(13)=LD32(R(14)+4);
  R(12)=LD32(R(12));
  R(11)=R(4);
  { uint32_t tg=R(13); c->pr=0x8c030202u; R(6)=R(15); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=R(12);
  R(14)=LD32(R(15));
  c->t=(int32_t)R(0)==91;
  R(10)=0x8c123b08u;
  if(c->t) goto L8c030252;
  R(1)=0x132u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0302a0;
  R(1)=0x130u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c03021e;
  {  goto L8c030300; }
L8c03021e:;
  c->t=(int32_t)R(0)==83;
  if(!c->t) goto L8c030226;
  {  goto L8c03037e; }
L8c030226:;
  c->t=(int32_t)R(0)==84;
  if(!c->t) goto L8c03022e;
  {  goto L8c0303c0; }
L8c03022e:;
  c->t=(int32_t)R(0)==85;
  if(!c->t) goto L8c030236;
  {  goto L8c0303ca; }
L8c030236:;
  c->t=(int32_t)R(0)==87;
  if(!c->t) goto L8c03023e;
  {  goto L8c0303d4; }
L8c03023e:;
  c->t=(int32_t)R(0)==86;
  if(!c->t) goto L8c030246;
  {  goto L8c0303d4; }
L8c030246:;
  c->t=(int32_t)R(0)==88;
  if(!c->t) goto L8c03024e;
  {  goto L8c0303fe; }
L8c03024e:;
  {  goto L8c03040a; }
L8c030252:;
  R(3)=LD32(R(14)+4);
  R(0)=0x64u;
  R(4)=LD32(R(10)+R(0));
  R(2)=LD32(R(3)+20);
  c->t=R(2)==R(4);
  if(c->t) goto L8c030262;
  {  goto L8c03040a; }
L8c030262:;
  R(5)=LD32(R(14)+4);
  R(4)+=0xffffffffu;
  R(3)=0x8c064dfeu;
  ST32(R(5)+20,R(4));
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c030270u; R(4)=LD32(R(4)+12); f_8c064dfe(c); }
  {  goto L8c03040a; }
L8c0302a0:;
  R(14)=LD32(R(15));
  R(3)=R(14)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0302b2;
  R(2)=0x8c047868u;
  { c->pr=0x8c0302aeu;  f_8c047868(c); }
  {  goto L8c0302c0; }
L8c0302b2:;
  R(0)=0xc36u;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0302c0;
  R(3)=0x8c0478c4u;
  { c->pr=0x8c0302c0u;  f_8c0478c4(c); }
L8c0302c0:;
  R(2)=LD32(R(11)+4);
  R(3)=LD32(R(2)+4);
  R(2)=0x100000u;
  R(1)=LD32(R(3)+32);
  c->t=(R(1)&R(2))==0;
  if(!c->t) goto L8c0302d0;
  {  goto L8c03040a; }
L8c0302d0:;
  R(0)=0xc36u;
  { ST8(R(10)+R(0),R(14)); goto L8c03040a; }
L8c030300:;
  R(9)=LD32(R(11)+4);
  R(0)=0x24u;
  R(10)=LD32(R(15));
  R(9)=LD32(R(9)+4);
  R(2)=R(10)&0xFF;
  R(4)=(int32_t)(int8_t)LD8(R(9)+R(0));
  R(3)=R(4)&0xFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c030316;
  {  goto L8c03040a; }
L8c030316:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03036c;
  R(14)=LD32(R(11)+8);
  R(8)=0x8c0909e6u;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c03036c;
L8c030324:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c030366;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c030360;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c030338u;  f_8c04a8b8(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c030360;
  R(2)=LD32(R(12)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c030352;
  R(3)=0x8c08ebaeu;
  { c->pr=0x8c03034au; R(4)=LD32(R(12)+4); f_8c08ebae(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c030352;
  { R(3)=0x1u; goto L8c030354; }
L8c030352:;
  R(3)=0x0u;
L8c030354:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c030360;
  R(5)=R(14);
  { uint32_t tg=R(8); c->pr=0x8c030360u; R(4)=R(12); sh4_call(c,tg); }
L8c030360:;
  R(2)=0x8c04b6c0u;
  { c->pr=0x8c030366u; R(4)=R(14); f_8c04b6c0(c); }
L8c030366:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c030324;
L8c03036c:;
  R(3)=0x8c064be0u;
  R(0)=0x24u;
  ST8(R(9)+R(0),R(10));
  R(6)=R(10);
  R(5)=LD32(R(11)+28);
  { c->pr=0x8c03037au; R(4)=R(11); f_8c064be0(c); }
  {  goto L8c03040a; }
L8c03037e:;
  R(3)=LD32(R(14)+4);
  R(0)=0x1ecu;
  R(2)=LD32(R(3)+12);
  { ST32(R(10)+R(0),R(2)); goto L8c03040a; }
L8c0303c0:;
  R(2)=0x8c052020u;
  { c->pr=0x8c0303c6u; R(4)=R(14); f_8c052020(c); }
  {  goto L8c03040a; }
L8c0303ca:;
  R(2)=0x8c0521c8u;
  { c->pr=0x8c0303d0u; R(4)=R(14); f_8c0521c8(c); }
  {  goto L8c03040a; }
L8c0303d4:;
  R(2)=0x8c071ce0u;
  { c->pr=0x8c0303dau; R(4)=R(15); f_8c071ce0(c); }
  R(2)=0x8c0c7630u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0303ee; }
  R(4)=0x8c0b96e0u;
  R(0)=R(12);
  c->t=(int32_t)R(0)==86;
  { R(5)=c->t; goto L8c0303f4; }
L8c0303ee:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==86;
  R(5)=c->t;
L8c0303f4:;
  R(3)=0x8c045b80u;
  { c->pr=0x8c0303fau;  f_8c045b80(c); }
  {  goto L8c03040a; }
L8c0303fe:;
  R(0)=0x8c2dd1b1u;
  R(1)=0x1u;
  R(2)=0x8c2dd1b0u;
  R(3)=LD32(R(15));
  ST8(R(2),R(3));
  ST8(R(0),R(1));
L8c03040a:;
  R(0)=R(13);
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
void f_8c0302a0(SH4Ctx *c) {
  R(14)=LD32(R(15));
  R(3)=R(14)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0302b2;
  R(2)=0x8c047868u;
  { c->pr=0x8c0302aeu;  f_8c047868(c); }
  {  goto L8c0302c0; }
L8c0302b2:;
  R(0)=0xc36u;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0302c0;
  R(3)=0x8c0478c4u;
  { c->pr=0x8c0302c0u;  f_8c0478c4(c); }
L8c0302c0:;
  R(2)=LD32(R(11)+4);
  R(3)=LD32(R(2)+4);
  R(2)=0x100000u;
  R(1)=LD32(R(3)+32);
  c->t=(R(1)&R(2))==0;
  if(!c->t) goto L8c0302d0;
  {  goto L8c03040a; }
L8c0302d0:;
  R(0)=0xc36u;
  { ST8(R(10)+R(0),R(14)); goto L8c03040a; }
L8c03040a:;
  R(0)=R(13);
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
void f_8c030300(SH4Ctx *c) {
  R(9)=LD32(R(11)+4);
  R(0)=0x24u;
  R(10)=LD32(R(15));
  R(9)=LD32(R(9)+4);
  R(2)=R(10)&0xFF;
  R(4)=(int32_t)(int8_t)LD8(R(9)+R(0));
  R(3)=R(4)&0xFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c030316;
  {  goto L8c03040a; }
L8c030316:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03036c;
  R(14)=LD32(R(11)+8);
  R(8)=0x8c0909e6u;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c03036c;
L8c030324:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c030366;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c030360;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c030338u;  f_8c04a8b8(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c030360;
  R(2)=LD32(R(12)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c030352;
  R(3)=0x8c08ebaeu;
  { c->pr=0x8c03034au; R(4)=LD32(R(12)+4); f_8c08ebae(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c030352;
  { R(3)=0x1u; goto L8c030354; }
L8c030352:;
  R(3)=0x0u;
L8c030354:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c030360;
  R(5)=R(14);
  { uint32_t tg=R(8); c->pr=0x8c030360u; R(4)=R(12); sh4_call(c,tg); }
L8c030360:;
  R(2)=0x8c04b6c0u;
  { c->pr=0x8c030366u; R(4)=R(14); f_8c04b6c0(c); }
L8c030366:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c030324;
L8c03036c:;
  R(3)=0x8c064be0u;
  R(0)=0x24u;
  ST8(R(9)+R(0),R(10));
  R(6)=R(10);
  R(5)=LD32(R(11)+28);
  { c->pr=0x8c03037au; R(4)=R(11); f_8c064be0(c); }
  {  goto L8c03040a; }
L8c03040a:;
  R(0)=R(13);
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
void f_8c0303c0(SH4Ctx *c) {
  R(2)=0x8c052020u;
  { c->pr=0x8c0303c6u; R(4)=R(14); f_8c052020(c); }
  {  goto L8c03040a; }
L8c03040a:;
  R(0)=R(13);
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
void f_8c030420(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x18u;
  R(5)=R(14);
  ST32(R(15),R(4));
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c03043eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(0);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c03044cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==92;
  if(!c->t) goto L8c03047e;
  R(5)=LD32(R(15)+8);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; ST32(R(15),R(5)); if(k) goto L8c030464; }
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+4);
  { R(5)=LD32(R(5)+12); goto L8c030466; }
L8c030464:;
  R(5)=0x0u;
L8c030466:;
  R(4)=LD32(R(15)+24);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(4)); if(k) goto L8c030476; }
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  { R(4)=LD32(R(4)+12); goto L8c030478; }
L8c030476:;
  R(4)=0x0u;
L8c030478:;
  R(2)=0x8c0527e0u;
  { c->pr=0x8c03047eu;  f_8c0527e0(c); }
L8c03047e:;
  R(0)=R(14);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c030488(SH4Ctx *c) {
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
  R(15)+=0xfffffffcu;
  R(7)=0x8c0c76fcu;
  R(6)=R(5);
  R(10)=R(5);
  R(6)+=0xfffffff4u;
  R(5)=LD32(R(7));
  R(6)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c030500; }
  ST32(R(15),R(5));
  { ST32(R(7),R(11)); goto L8c030502; }
L8c030500:;
  ST32(R(15),R(4));
L8c030502:;
  R(1)=0x9fu;
  R(0)=R(6);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c03059e;
  R(3)=0x8c123cf8u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03059e;
  R(13)=LD32(R(4)+4);
  R(2)=0x8c046deau;
  R(13)=LD32(R(13)+16);
  { c->pr=0x8c03051cu; R(4)=LD32(R(13)+4); f_8c046dea(c); }
  R(3)=LD32(R(15));
  c->t=R(0)==R(3);
  if(!c->t) goto L8c03059e;
  R(9)=LD32(R(15));
  R(0)=0x8c030614u;
  R(12)=R(11);
  R(14)=R(11);
  R(9)=LD32(R(9)+36);
  R(8)=0x20u;
  R(11)=0x8c05e6eau;
  fp_ld(c,14,R(0));
  R(9)+=0x58u;
  c->fr[15]=0x00000000u;
L8c030536:;
  R(3)=0x138u;
  R(0)=0x4u;
  R(2)=R(13);
  R(4)=0xd8u;
  R(3)+=R(13);
  R(5)=R(9);
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
  { uint32_t tg=R(11); c->pr=0x8c030564u; R(4)+=R(14); sh4_call(c,tg); }
  R(3)=0x138u;
  R(12)+=0x4u;
  R(14)+=0xcu;
  R(2)=R(13);
  R(3)+=R(13);
  R(4)=0xd8u;
  R(3)+=R(12);
  R(5)=R(9);
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
  { uint32_t tg=R(11); c->pr=0x8c030596u; R(4)+=R(14); sh4_call(c,tg); }
  R(12)+=0x4u;
  c->t=R(12)>=R(8);
  { uint32_t k=!c->t; R(14)+=0xcu; if(k) goto L8c030536; }
L8c03059e:;
  R(0)=R(10);
  R(15)+=0x4u;
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
void f_8c030500(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(1)=0x9fu;
  R(0)=R(6);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c03059e;
  R(3)=0x8c123cf8u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03059e;
  R(13)=LD32(R(4)+4);
  R(2)=0x8c046deau;
  R(13)=LD32(R(13)+16);
  { c->pr=0x8c03051cu; R(4)=LD32(R(13)+4); f_8c046dea(c); }
  R(3)=LD32(R(15));
  c->t=R(0)==R(3);
  if(!c->t) goto L8c03059e;
  R(9)=LD32(R(15));
  R(0)=0x8c030614u;
  R(12)=R(11);
  R(14)=R(11);
  R(9)=LD32(R(9)+36);
  R(8)=0x20u;
  R(11)=0x8c05e6eau;
  fp_ld(c,14,R(0));
  R(9)+=0x58u;
  c->fr[15]=0x00000000u;
L8c030536:;
  R(3)=0x138u;
  R(0)=0x4u;
  R(2)=R(13);
  R(4)=0xd8u;
  R(3)+=R(13);
  R(5)=R(9);
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
  { uint32_t tg=R(11); c->pr=0x8c030564u; R(4)+=R(14); sh4_call(c,tg); }
  R(3)=0x138u;
  R(12)+=0x4u;
  R(14)+=0xcu;
  R(2)=R(13);
  R(3)+=R(13);
  R(4)=0xd8u;
  R(3)+=R(12);
  R(5)=R(9);
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
  { uint32_t tg=R(11); c->pr=0x8c030596u; R(4)+=R(14); sh4_call(c,tg); }
  R(12)+=0x4u;
  c->t=R(12)>=R(8);
  { uint32_t k=!c->t; R(14)+=0xcu; if(k) goto L8c030536; }
L8c03059e:;
  R(0)=R(10);
  R(15)+=0x4u;
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
void f_8c0305b8(SH4Ctx *c) {
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
  { uint32_t tg=R(3); c->pr=0x8c0305d2u; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(1)=0x210u;
  R(0)=LD32(R(15));
  R(4)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c030620;
  R(1)=0x211u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c03063e;
  {  goto L8c030644; }
L8c030620:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==60;
  if(!c->t) goto L8c030630;
  R(2)=0x8c010ae0u;
  { c->pr=0x8c03062cu;  f_8c010ae0(c); }
  {  goto L8c030636; }
L8c030630:;
  R(2)=0x8c010ab8u;
  { c->pr=0x8c030636u;  f_8c010ab8(c); }
L8c030636:;
  R(2)=0x8c0c540cu;
  R(3)=0x1u;
  { ST32(R(2),R(3)); goto L8c030644; }
L8c03063e:;
  /* Cycle render scale: 100% -> 75% -> 67% -> 100% */
  {
    int cur_scale = r2_get_render_scale();
    int new_scale = (cur_scale == 100) ? 75 : (cur_scale == 75) ? 67 : 100;
    r2_set_render_scale(new_scale);
  }
  R(3)=0x8c04c31eu;
  { c->pr=0x8c030644u;  f_8c04c31e(c); }
L8c030644:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c030620(SH4Ctx *c) {
  R(0)=R(4);
  c->t=(int32_t)R(0)==60;
  if(!c->t) goto L8c030630;
  R(2)=0x8c010ae0u;
  { c->pr=0x8c03062cu;  f_8c010ae0(c); }
  {  goto L8c030636; }
L8c030630:;
  R(2)=0x8c010ab8u;
  { c->pr=0x8c030636u;  f_8c010ab8(c); }
L8c030636:;
  R(2)=0x8c0c540cu;
  R(3)=0x1u;
  { ST32(R(2),R(3)); goto L8c030644; }
L8c030644:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03064e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c05bf86u;
  { c->pr=0x8c03065au; ST8(R(15),R(4)); f_8c05bf86(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c030694; }
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c030670;
  R(3)=0x8c0db69cu;
  { c->pr=0x8c03066cu; R(4)=R(14); f_8c0db69c(c); }
  {  goto L8c030694; }
L8c030670:;
  R(4)=0x1u;
  R(3)=0x8c0c5192u;
  R(0)=R(4);
  ST8(R(15)+4,R(0));
  R(0)=R(4);
  ST8(R(15)+5,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(5)=R(15);
  R(2)=0x8c0c5191u;
  R(5)+=0x4u;
  ST8(R(15)+6,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(2));
  R(1)=0x8c0db66eu;
  ST8(R(15)+7,R(0));
  R(0)=0x0u;
  ST8(R(15)+8,R(0));
  { c->pr=0x8c030694u; R(4)=R(14); f_8c0db66e(c); }
L8c030694:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03069c(SH4Ctx *c) {
  R(2)=0x8c0c5190u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0306aa;
  R(0)=0x8c0b96e8u;
  {  return; }
L8c0306aa:;
  R(0)=0x8c0b96fcu;
  {  return; }
}
void f_8c030720(SH4Ctx *c) {
  R(3)=0x8c0c5191u;
  R(4)=0x8c140964u;
  R(1)=(int32_t)(int8_t)LD8(R(3));
  R(0)=0x8c0b9718u;
  R(2)=0x8c06874cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c030730u; {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} f_8c06874c(c); }
  R(15)+=0x8u;
  R(0)=0x8c140964u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c030820(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(14)=LD32(R(14)+4);
  R(12)=R(4);
  { uint32_t tg=R(14); c->pr=0x8c03083cu; R(4)=R(12); sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  R(5)=0x4fu;
  R(14)=R(0);
  c->t=R(4)>R(5);
  { uint32_t k=!c->t; R(1)=0x32u; if(k) goto L8c03084a; }
  R(4)=R(5);
L8c03084a:;
  c->macl=R(4)*R(1);
  R(3)=0x8c0679f4u;
  R(1)=c->macl;
  { c->pr=0x8c030854u; R(0)=R(5); f_8c0679f4(c); }
  R(4)=0xfu;
  R(13)=R(0);
  c->t=R(13)>=R(4);
  { uint32_t k=c->t; R(11)=LD32(R(14)+4); if(k) goto L8c030860; }
  R(13)=R(4);
L8c030860:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c03086au; R(4)=R(12); sh4_call(c,tg); }
  R(14)=LD32(R(15)+4);
  R(4)=0x7u;
  R(11)=R(0);
  c->t=R(14)>R(4);
  if(!c->t) goto L8c030876;
  R(14)=R(4);
L8c030876:;
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c030882u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=0x8c0c6b38u;
  R(3)=0x1u;
  R(6)=LD32(R(15)+4);
  R(5)=R(0);
  R(4)=0x8c0c6b34u;
  ST32(R(2),R(3));
  R(0)=R(6);
  R(3)=0x8c0c6b30u;
  c->t=(int32_t)R(0)==1;
  ST32(R(4),R(14));
  { uint32_t k=!c->t; ST32(R(3),R(13)); if(k) goto L8c03089e; }
  R(0)=0x0u;
  ST32(R(4),R(0));
L8c03089e:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0308ae(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  R(5)=R(14);
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  R(12)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c0308d0u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15));
  R(13)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0308f2;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0308fe;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c030918;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c030922;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c03092c;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c030960;
  {  goto L8c03096c; }
L8c0308f2:;
  R(5)=R(14);
  R(6)=R(13);
  { c->pr=0x8c0308fau; R(4)=R(12); f_8c02fd00(c); }
  {  goto L8c03096e; }
L8c0308fe:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c03090au; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c083008u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c030914u; R(4)=R(13); f_8c083008(c); }
  { R(0)=LD32(R(15)); goto L8c03096e; }
L8c030918:;
  R(2)=0x8c05680eu;
  { c->pr=0x8c03091eu; R(4)=R(13); f_8c05680e(c); }
  {  goto L8c03096c; }
L8c030922:;
  R(2)=0x8c083018u;
  { c->pr=0x8c030928u; R(4)=R(13); f_8c083018(c); }
  {  goto L8c03096c; }
L8c03092c:;
  R(5)=R(14);
  R(6)=R(13);
  { c->pr=0x8c030934u; R(4)=R(12); f_8c02fd38(c); }
  {  goto L8c03096e; }
L8c030960:;
  R(5)=R(14);
  R(6)=R(13);
  { c->pr=0x8c030968u; R(4)=R(12); f_8c02fd70(c); }
  {  goto L8c03096e; }
L8c03096c:;
  R(0)=R(14);
L8c03096e:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c030960(SH4Ctx *c) {
  R(5)=R(14);
  R(6)=R(13);
  { c->pr=0x8c030968u; R(4)=R(12); f_8c02fd70(c); }
  {  goto L8c03096e; }
L8c03096e:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03097a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  R(5)=R(14);
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  R(12)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c03099cu; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15));
  R(13)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0309ba;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0309c6;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0309d0;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c0309da;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c0309e6;
  {  goto L8c0309f2; }
L8c0309ba:;
  R(5)=R(14);
  R(6)=R(13);
  { c->pr=0x8c0309c2u; R(4)=R(12); f_8c02fda8(c); }
  {  goto L8c0309f4; }
L8c0309c6:;
  R(3)=0x8c05681au;
  { c->pr=0x8c0309ccu; R(4)=R(13); f_8c05681a(c); }
  {  goto L8c0309f2; }
L8c0309d0:;
  R(3)=0x8c0830a0u;
  { c->pr=0x8c0309d6u; R(4)=R(13); f_8c0830a0(c); }
  {  goto L8c0309f2; }
L8c0309da:;
  R(5)=R(14);
  R(6)=R(13);
  { c->pr=0x8c0309e2u; R(4)=R(12); f_8c02fde0(c); }
  {  goto L8c0309f4; }
L8c0309e6:;
  R(5)=R(14);
  R(6)=R(13);
  { c->pr=0x8c0309eeu; R(4)=R(12); f_8c02fe52(c); }
  {  goto L8c0309f4; }
L8c0309f2:;
  R(0)=R(14);
L8c0309f4:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c030a20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=R(5);
  R(14)+=0xfffffff4u;
  R(12)=R(5);
  R(3)=LD32(R(12)+4);
  R(14)=LD32(R(14));
  R(6)=R(15);
  R(13)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c030a40u; R(6)+=0x8u; sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=R(14);
  R(11)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==24;
  if(!c->t) goto L8c030a7e;
  R(6)=R(15);
  R(14)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0x8u;
  { uint32_t tg=R(14); c->pr=0x8c030a56u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  ST16(R(15)+4,R(0));
  R(12)=LD32(R(14)+4);
  { uint32_t tg=R(12); c->pr=0x8c030a68u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=0x8c073c8eu;
  R(5)=R(13);
  R(7)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(6)=R(0);
  { c->pr=0x8c030a7au; R(4)=R(11); f_8c073c8e(c); }
  {  goto L8c030b1c; }
L8c030a7e:;
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c030a8au; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=R(14);
  R(10)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==18;
  if(!c->t) goto L8c030aa4;
  R(2)=0x8c073bbeu;
  R(5)=R(13);
  R(7)=R(10);
  R(6)=0x0u;
  { c->pr=0x8c030aa0u; R(4)=R(11); f_8c073bbe(c); }
  {  goto L8c030b1c; }
L8c030aa4:;
  c->t=(int32_t)R(0)==19;
  if(!c->t) goto L8c030ab8;
  R(3)=0x8c073bbeu;
  R(5)=R(13);
  R(7)=R(10);
  R(6)=0x1u;
  { c->pr=0x8c030ab4u; R(4)=R(11); f_8c073bbe(c); }
  {  goto L8c030b1c; }
L8c030ab8:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==20;
  if(c->t) goto L8c030ac4;
  R(0)=R(14);
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c030ace;
L8c030ac4:;
  R(3)=0x8c087f46u;
  { c->pr=0x8c030acau; R(4)=R(15); f_8c087f46(c); }
  {  goto L8c030ae0; }
L8c030ace:;
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c030adau; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  ST16(R(15),R(0));
L8c030ae0:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==20;
  if(c->t) goto L8c030aec;
  R(0)=R(14);
  c->t=(int32_t)R(0)==22;
  if(!c->t) goto L8c030b00;
L8c030aec:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(5)=R(13);
  R(7)=R(10);
  R(6)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c073c22u;
  { c->pr=0x8c030afcu; R(4)=R(11); f_8c073c22(c); }
  { R(15)+=0x4u; goto L8c030b1c; }
L8c030b00:;
  c->t=(int32_t)R(0)==21;
  if(c->t) goto L8c030b0a;
  R(0)=R(14);
  c->t=(int32_t)R(0)==23;
  if(!c->t) goto L8c030b1c;
L8c030b0a:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(5)=R(13);
  R(7)=R(10);
  R(6)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c073c22u;
  { c->pr=0x8c030b1au; R(4)=R(11); f_8c073c22(c); }
  R(15)+=0x4u;
L8c030b1c:;
  R(0)=R(12);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c030b60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x18u;
  R(5)=R(14);
  ST32(R(15),R(2));
  R(13)=LD32(R(14)+4);
  R(12)=R(4);
  { uint32_t tg=R(13); c->pr=0x8c030b8au; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(10)=0x8c073d76u;
  R(11)=0x8c0735a0u;
  R(8)=0x0u;
  R(0)=LD32(R(15));
  R(14)=LD32(R(15)+24);
  R(9)=0x8c0737deu;
  R(0)+=0xffffffe7u;
  R(1)=0xdu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c030ba4;
  {  goto L8c030e6a; }
L8c030ba4:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c030bbcu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c030bb0u+R(0));  switch(tg){ case 0x8c030bd6u: goto L8c030bd6; case 0x8c030bf2u: goto L8c030bf2; case 0x8c030c20u: goto L8c030c20; case 0x8c030c38u: goto L8c030c38; case 0x8c030c56u: goto L8c030c56; case 0x8c030c5cu: goto L8c030c5c; case 0x8c030c6au: goto L8c030c6a; case 0x8c030c96u: goto L8c030c96; case 0x8c030cb0u: goto L8c030cb0; case 0x8c030ccau: goto L8c030cca; case 0x8c030d5au: goto L8c030d5a; case 0x8c030dbau: goto L8c030dba; case 0x8c030e20u: goto L8c030e20; default: sh4_bad_jump(c,0x8c030bacu,tg); return; } }
L8c030bd6:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(3); c->pr=0x8c030be2u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+24);
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5)+12);
  { uint32_t tg=R(11); c->pr=0x8c030beeu; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c030e66; }
L8c030bf2:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c030bfeu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(0);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c030c0cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c0735ccu;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+24);
  R(6)=LD32(R(15)+8);
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5)+12);
  { c->pr=0x8c030c1cu; R(4)=R(14); f_8c0735cc(c); }
  {  goto L8c030e66; }
L8c030c20:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c030c2cu; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+24);
  { uint32_t tg=R(9); c->pr=0x8c030c34u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c030e66; }
L8c030c38:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c030c44u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c073768u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+24);
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5)+12);
  { c->pr=0x8c030c52u; R(4)=R(14); f_8c073768(c); }
  {  goto L8c030e66; }
L8c030c56:;
  R(6)=R(13);
  { R(5)=0x0u; goto L8c030c60; }
L8c030c5c:;
  R(5)=0x1u;
  R(6)=R(13);
L8c030c60:;
  R(2)=0x8c073de0u;
  { c->pr=0x8c030c66u; R(4)=R(14); f_8c073de0(c); }
  {  goto L8c030e6c; }
L8c030c6a:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c030c76u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(0);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c030c84u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c073e6cu;
  R(7)=R(0);
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+24);
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c030c92u; R(4)=R(14); f_8c073e6c(c); }
  {  goto L8c030e6c; }
L8c030c96:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(3); c->pr=0x8c030ca2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c073880u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+24);
  { c->pr=0x8c030cacu; R(4)=R(14); f_8c073880(c); }
  {  goto L8c030e66; }
L8c030cb0:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c030cbcu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c0738f2u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+24);
  { c->pr=0x8c030cc6u; R(4)=R(14); f_8c0738f2(c); }
  {  goto L8c030e66; }
L8c030cca:;
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x8u;
  ST8(R(14),R(8));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c030cd8u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c2d03b0u;
  ST32(R(15),R(0));
  R(5)=LD32(R(3));
  R(10)=LD32(R(15)+8);
  { R(4)=LD32(R(5)+8); goto L8c030d50; }
L8c030d20:;
  { R(13)=R(12); goto L8c030d48; }
L8c030d24:;
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c030d42;
  R(2)=LD32(R(13)+4);
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+20);
  c->t=R(1)==R(10);
  if(!c->t) goto L8c030d42;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=R(2)>=R(0);
  if(c->t) goto L8c030d4c;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c030d42u; R(4)=R(14); sh4_call(c,tg); }
L8c030d42:;
  R(4)=R(13);
  R(5)=LD32(R(4)+20);
  R(13)=R(5);
L8c030d48:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c030d24;
L8c030d4c:;
  R(5)=R(12);
  R(4)=LD32(R(5)+8);
L8c030d50:;
  R(12)=R(4);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c030d20;
  {  goto L8c030e66; }
L8c030d5a:;
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x8u;
  ST8(R(14),R(8));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c030d68u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c2d03b0u;
  ST32(R(15),R(0));
  R(4)=LD32(R(3));
  R(10)=LD32(R(15)+8);
  R(5)=LD32(R(4)+8);
  { R(12)=R(5); goto L8c030db2; }
L8c030d76:;
  { R(13)=R(12); goto L8c030da8; }
L8c030d7a:;
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c030da2;
  R(2)=LD32(R(13)+4);
  R(3)=LD32(R(2)+12);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(3)); if(k) goto L8c030da2; }
  R(1)=LD32(R(15)+4);
  R(3)=LD32(R(1));
  R(2)=LD32(R(3));
  c->t=R(2)==R(10);
  if(!c->t) goto L8c030da2;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(1)=(int32_t)(int8_t)LD8(R(14));
  c->t=R(1)>=R(0);
  if(c->t) goto L8c030dac;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c030da2u; R(4)=R(14); sh4_call(c,tg); }
L8c030da2:;
  R(4)=R(13);
  R(5)=LD32(R(4)+20);
  R(13)=R(5);
L8c030da8:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c030d7a;
L8c030dac:;
  R(5)=R(12);
  R(4)=LD32(R(5)+8);
  R(12)=R(4);
L8c030db2:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c030d76;
  {  goto L8c030e66; }
L8c030dba:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  R(11)=R(8);
  { uint32_t tg=R(2); c->pr=0x8c030dc8u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=0x0u;
  ST32(R(15),R(0));
  R(13)=LD32(R(15)+8);
  { uint32_t tg=R(10); c->pr=0x8c030dd2u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c030e66;
L8c030dd8:;
  R(2)=LD32(R(4)+4);
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+20);
  c->t=R(1)==R(13);
  if(!c->t) goto L8c030dec;
  R(5)=R(11);
  { uint32_t tg=R(9); c->pr=0x8c030de8u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c030dee; }
L8c030dec:;
  R(11)+=0x1u;
L8c030dee:;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c030df4u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c030dd8;
  {  goto L8c030e66; }
L8c030e20:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  R(11)=R(8);
  { uint32_t tg=R(2); c->pr=0x8c030e2eu; R(4)=R(12); sh4_call(c,tg); }
  R(5)=0x0u;
  ST32(R(15),R(0));
  R(13)=LD32(R(15)+8);
  { uint32_t tg=R(10); c->pr=0x8c030e38u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c030e66;
L8c030e3e:;
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5)+12);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c030e58;
  R(2)=LD32(R(5));
  R(3)=LD32(R(2));
  c->t=R(3)==R(13);
  if(!c->t) goto L8c030e58;
  R(5)=R(11);
  { uint32_t tg=R(9); c->pr=0x8c030e54u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c030e5a; }
L8c030e58:;
  R(11)+=0x1u;
L8c030e5a:;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c030e60u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c030e3e;
L8c030e66:;
  { R(0)=LD32(R(15)); goto L8c030e6c; }
L8c030e6a:;
  R(0)=R(13);
L8c030e6c:;
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
void f_8c030d20(SH4Ctx *c) {
L8c030d20:;
  { R(13)=R(12); goto L8c030d48; }
L8c030d24:;
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c030d42;
  R(2)=LD32(R(13)+4);
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+20);
  c->t=R(1)==R(10);
  if(!c->t) goto L8c030d42;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=R(2)>=R(0);
  if(c->t) goto L8c030d4c;
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c030d42u; R(4)=R(14); sh4_call(c,tg); }
L8c030d42:;
  R(4)=R(13);
  R(5)=LD32(R(4)+20);
  R(13)=R(5);
L8c030d48:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c030d24;
L8c030d4c:;
  R(5)=R(12);
  R(4)=LD32(R(5)+8);
  R(12)=R(4);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c030d20;
  {  goto L8c030e66; }
L8c030e66:;
  { R(0)=LD32(R(15)); goto L8c030e6c; }
L8c030e6c:;
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
void f_8c030e20(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  R(11)=R(8);
  { uint32_t tg=R(2); c->pr=0x8c030e2eu; R(4)=R(12); sh4_call(c,tg); }
  R(5)=0x0u;
  ST32(R(15),R(0));
  R(13)=LD32(R(15)+8);
  { uint32_t tg=R(10); c->pr=0x8c030e38u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c030e66;
L8c030e3e:;
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5)+12);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c030e58;
  R(2)=LD32(R(5));
  R(3)=LD32(R(2));
  c->t=R(3)==R(13);
  if(!c->t) goto L8c030e58;
  R(5)=R(11);
  { uint32_t tg=R(9); c->pr=0x8c030e54u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c030e5a; }
L8c030e58:;
  R(11)+=0x1u;
L8c030e5a:;
  R(5)=R(11);
  { uint32_t tg=R(10); c->pr=0x8c030e60u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c030e3e;
L8c030e66:;
  { R(0)=LD32(R(15)); goto L8c030e6c; }
L8c030e6c:;
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
void f_8c030e80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(11)=R(5);
  R(11)+=0xfffffff4u;
  R(14)=R(5);
  R(3)=LD32(R(14)+4);
  R(11)=LD32(R(11));
  R(10)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c030e9eu; R(6)=R(15); sh4_call(c,tg); }
  R(14)=R(0);
  R(3)=LD32(R(14)+4);
  R(12)=LD32(R(15));
  R(5)=R(14);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c030eacu; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=R(11);
  R(13)=LD32(R(15));
  c->t=(int32_t)R(0)==41;
  if(!c->t) goto L8c030ec2;
  R(2)=0x8c073b40u;
  R(5)=R(13);
  { c->pr=0x8c030ebeu; R(4)=R(12); f_8c073b40(c); }
  {  goto L8c030f02; }
L8c030ec2:;
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(15);
  { uint32_t tg=R(2); c->pr=0x8c030eccu; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=R(11);
  R(6)=LD32(R(15));
  c->t=(int32_t)R(0)==38;
  if(c->t) goto L8c030ee2;
  c->t=(int32_t)R(0)==39;
  if(c->t) goto L8c030eee;
  c->t=(int32_t)R(0)==40;
  if(c->t) goto L8c030efa;
  {  goto L8c030f02; }
L8c030ee2:;
  R(3)=0x8c0739a0u;
  R(5)=R(13);
  { c->pr=0x8c030eeau; R(4)=R(12); f_8c0739a0(c); }
  {  goto L8c030f02; }
L8c030eee:;
  R(3)=0x8c073a4au;
  R(5)=R(13);
  { c->pr=0x8c030ef6u; R(4)=R(12); f_8c073a4a(c); }
  {  goto L8c030f02; }
L8c030efa:;
  R(3)=0x8c073abcu;
  R(5)=R(13);
  { c->pr=0x8c030f02u; R(4)=R(12); f_8c073abc(c); }
L8c030f02:;
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c030f40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x8u;
  R(5)=R(14);
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  R(13)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c030f60u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==93;
  if(c->t) goto L8c030f70;
  c->t=(int32_t)R(0)==94;
  if(c->t) goto L8c030f96;
  {  goto L8c030f9e; }
L8c030f70:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  ST8(R(15),R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c030f80u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(3)=0x8c083500u;
  R(6)=R(0);
  R(5)=R(5)&0xFF;
  R(6)=R(6)&0xFF;
  { c->pr=0x8c030f92u; R(4)=R(13); f_8c083500(c); }
  { R(0)=LD32(R(15)+4); goto L8c030fa0; }
L8c030f96:;
  R(5)=LD32(R(13)+4);
  R(4)=LD32(R(15)+8);
  R(5)=LD32(R(5));
  ST32(R(5)+16,R(4));
L8c030f9e:;
  R(0)=R(14);
L8c030fa0:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c030faa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x3cu;
  R(5)=R(14);
  ST32(R(15),R(2));
  R(12)=LD32(R(14)+4);
  R(13)=R(4);
  { uint32_t tg=R(12); c->pr=0x8c030fd6u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==96;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c030fe8; }
  c->t=(int32_t)R(0)==95;
  if(c->t) goto L8c0310a0;
  {  goto L8c031142; }
L8c030fe8:;
  R(3)=0x8c071ce0u;
  R(4)=R(15);
  { c->pr=0x8c030ff0u; R(4)+=0x3cu; f_8c071ce0(c); }
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x3cu;
  ST32(R(15)+4,R(0));
  R(14)=LD32(R(12)+4);
  { uint32_t tg=R(14); c->pr=0x8c030ffeu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x48u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(12)=LD32(R(14)+4); if(k) goto L8c031010; }
  R(0)=0x3cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c031018; }
L8c031010:;
  R(3)=LD32(R(15)+60);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c031018:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x3cu;
  { uint32_t tg=R(12); c->pr=0x8c031022u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0x48u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(12)+4); if(k) goto L8c031038; }
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(14)=c->fpul; goto L8c03103a; }
L8c031038:;
  R(14)=LD32(R(15)+60);
L8c03103a:;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x3cu;
  { uint32_t tg=R(2); c->pr=0x8c031044u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x48u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c031058;
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c03105a; }
L8c031058:;
  R(4)=LD32(R(15)+60);
L8c03105a:;
  c->t=(int32_t)R(14)>=0;
  { uint32_t k=c->t; R(3)=0xffffffffu; if(k) goto L8c031062; }
  R(14)=R(11);
L8c031062:;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(13);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(7)=R(14);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+16);
  R(4)=R(15);
  R(2)=0x8c056e20u;
  fp_mov(c,4,15);
  { c->pr=0x8c031078u; R(4)+=0x18u; f_8c056e20(c); }
  R(15)+=0xcu;
  { R(0)=LD32(R(15)); goto L8c031144; }
L8c0310a0:;
  R(4)=LD32(R(13)+4);
  R(14)=R(11);
  R(2)=0x8c0835bau;
  R(4)=LD32(R(4));
  R(8)=LD32(R(15)+60);
  R(9)=LD32(R(4)+16);
  { c->pr=0x8c0310b0u; R(4)=R(9); f_8c0835ba(c); }
  R(3)=0x8c0835bau;
  ST16(R(15),R(0));
  { c->pr=0x8c0310b8u; R(4)=R(8); f_8c0835ba(c); }
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x3cu;
  ST16(R(15)+4,R(0));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c0310c6u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(4)=R(15);
  ST32(R(15)+8,R(0));
  { c->pr=0x8c0310d0u; R(4)+=0x3cu; f_8c071ce0(c); }
  R(12)=R(0);
  R(2)=(int32_t)(int8_t)LD8(R(12));
  R(10)=0x8c08358au;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c031124;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c031124;
L8c0310e0:;
  R(4)=(int32_t)(int8_t)LD8(R(12));
  R(13)=0x2u;
  R(1)=0x8c0bb9c8u;
  R(0)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(13)&R(0))==0;
  if(c->t) goto L8c0310f6;
  R(13)=R(4);
  { R(13)+=0xffffffe0u; goto L8c0310f8; }
L8c0310f6:;
  R(13)=R(4);
L8c0310f8:;
  R(13)+=0xffffffe0u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c031106;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(int32_t)R(4)>=(int32_t)R(0);
  if(!c->t) goto L8c031108;
L8c031106:;
  R(13)=R(11);
L8c031108:;
  R(5)=R(8);
  R(6)=R(14);
  R(7)=R(13);
  { uint32_t tg=R(10); c->pr=0x8c031112u; R(4)=R(9); sh4_call(c,tg); }
  R(12)+=0x1u;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c031124; }
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0310e0;
L8c031124:;
  R(13)=(int32_t)(int16_t)LD16(R(15));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(13);
  if(c->t) goto L8c03113e;
L8c03112c:;
  R(5)=R(8);
  R(6)=R(14);
  R(7)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c031136u; R(4)=R(9); sh4_call(c,tg); }
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(13);
  if(!c->t) goto L8c03112c;
L8c03113e:;
  { R(0)=LD32(R(15)+8); goto L8c031144; }
L8c031142:;
  R(0)=R(12);
L8c031144:;
  R(15)+=0x4cu;
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
void f_8c0310a0(SH4Ctx *c) {
  R(4)=LD32(R(13)+4);
  R(14)=R(11);
  R(2)=0x8c0835bau;
  R(4)=LD32(R(4));
  R(8)=LD32(R(15)+60);
  R(9)=LD32(R(4)+16);
  { c->pr=0x8c0310b0u; R(4)=R(9); f_8c0835ba(c); }
  R(3)=0x8c0835bau;
  ST16(R(15),R(0));
  { c->pr=0x8c0310b8u; R(4)=R(8); f_8c0835ba(c); }
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x3cu;
  ST16(R(15)+4,R(0));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c0310c6u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(4)=R(15);
  ST32(R(15)+8,R(0));
  { c->pr=0x8c0310d0u; R(4)+=0x3cu; f_8c071ce0(c); }
  R(12)=R(0);
  R(2)=(int32_t)(int8_t)LD8(R(12));
  R(10)=0x8c08358au;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c031124;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c031124;
L8c0310e0:;
  R(4)=(int32_t)(int8_t)LD8(R(12));
  R(13)=0x2u;
  R(1)=0x8c0bb9c8u;
  R(0)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(13)&R(0))==0;
  if(c->t) goto L8c0310f6;
  R(13)=R(4);
  { R(13)+=0xffffffe0u; goto L8c0310f8; }
L8c0310f6:;
  R(13)=R(4);
L8c0310f8:;
  R(13)+=0xffffffe0u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(13);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c031106;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(int32_t)R(4)>=(int32_t)R(0);
  if(!c->t) goto L8c031108;
L8c031106:;
  R(13)=R(11);
L8c031108:;
  R(5)=R(8);
  R(6)=R(14);
  R(7)=R(13);
  { uint32_t tg=R(10); c->pr=0x8c031112u; R(4)=R(9); sh4_call(c,tg); }
  R(12)+=0x1u;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c031124; }
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0310e0;
L8c031124:;
  R(13)=(int32_t)(int16_t)LD16(R(15));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(13);
  if(c->t) goto L8c03113e;
L8c03112c:;
  R(5)=R(8);
  R(6)=R(14);
  R(7)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c031136u; R(4)=R(9); sh4_call(c,tg); }
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(13);
  if(!c->t) goto L8c03112c;
L8c03113e:;
  { R(0)=LD32(R(15)+8); goto L8c031144; }
L8c031144:;
  R(15)+=0x4cu;
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
void f_8c031180(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(10)=R(5);
  R(10)+=0xfffffff4u;
  R(3)=0xd8u;
  R(11)=R(4);
  R(10)=LD32(R(10));
  c->t=R(10)==R(3);
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c0311aa; }
  R(1)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(15);
  { uint32_t tg=R(1); c->pr=0x8c0311a8u; R(4)=R(11); sh4_call(c,tg); }
  R(14)=R(0);
L8c0311aa:;
  R(0)=R(10);
  R(13)=LD32(R(15));
  R(12)=0x8c0828a0u;
  c->t=(int32_t)R(0)==98;
  if(c->t) goto L8c0311c6;
  c->t=(int32_t)R(0)==97;
  if(c->t) goto L8c0311de;
  c->t=(int32_t)R(0)==99;
  if(c->t) goto L8c031220;
  R(1)=0xd8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c03122c;
  {  goto L8c031234; }
L8c0311c6:;
  R(13)+=0xffffffffu;
  c->t=(int32_t)R(13)>=0;
  if(!c->t) goto L8c031234;
L8c0311cc:;
  R(5)=R(13);
  R(6)=0x1u;
  { uint32_t tg=R(12); c->pr=0x8c0311d4u; R(4)=LD32(R(11)+4); sh4_call(c,tg); }
  R(13)+=0xffffffffu;
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c0311cc;
  {  goto L8c031234; }
L8c0311de:;
  R(5)=R(13);
  R(6)=0x1u;
  { uint32_t tg=R(12); c->pr=0x8c0311e6u; R(4)=LD32(R(11)+4); sh4_call(c,tg); }
  {  goto L8c031234; }
L8c031220:;
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(12); c->pr=0x8c031228u; R(4)=LD32(R(11)+4); sh4_call(c,tg); }
  {  goto L8c031234; }
L8c03122c:;
  R(5)=0xffffu;
  R(6)=0x0u;
  { uint32_t tg=R(12); c->pr=0x8c031234u; R(4)=LD32(R(11)+4); sh4_call(c,tg); }
L8c031234:;
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031220(SH4Ctx *c) {
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(12); c->pr=0x8c031228u; R(4)=LD32(R(11)+4); sh4_call(c,tg); }
  {  goto L8c031234; }
L8c031234:;
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031246(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  ST32(R(15),R(4));
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=(int32_t)R(0)==101;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c031264; }
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c031274;
  {  goto L8c031290; }
L8c031264:;
  R(3)=0x8c044fc0u;
  { c->pr=0x8c03126au; R(4)=0x2u; f_8c044fc0(c); }
  R(2)=0x8c072f52u;
  { c->pr=0x8c031270u; R(4)=0x3u; f_8c072f52(c); }
  {  goto L8c031290; }
L8c031274:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c031280u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(0);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c03128eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(14)=R(0);
L8c031290:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03129a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0312ba;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0312bc; }
L8c0312ba:;
  ST32(R(15),R(4));
L8c0312bc:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c0312c6u; R(5)=R(14); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+4);
  R(5)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c0312d8;
  c->t=(int32_t)R(0)==103;
  if(c->t) goto L8c0312dc;
  {  goto L8c0312e4; }
L8c0312d8:;
  { R(6)=0x1u; goto L8c0312de; }
L8c0312dc:;
  R(6)=0x0u;
L8c0312de:;
  R(3)=0x8c082920u;
  { c->pr=0x8c0312e4u; R(4)=LD32(R(15)); f_8c082920(c); }
L8c0312e4:;
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031320(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(14)=R(5);
  R(5)+=0xfffffff4u;
  R(5)=LD32(R(5));
  R(12)=R(4);
  R(13)=0x8c141104u;
  R(11)=0x8c1410e0u;
  R(0)=R(5);
  R(3)=0x8c141100u;
  c->t=(int32_t)R(0)==42;
  R(8)=0x8c0c5374u;
  R(9)=0x8c1410dcu;
  R(10)=0x8c1410e8u;
  { uint32_t k=c->t; R(4)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c031372; }
  c->t=(int32_t)R(0)==43;
  if(c->t) goto L8c0313a6;
  c->t=(int32_t)R(0)==44;
  if(c->t) goto L8c0313d0;
  c->t=(int32_t)R(0)==45;
  if(!c->t) goto L8c03135e;
  {  goto L8c03148e; }
L8c03135e:;
  c->t=(int32_t)R(0)==46;
  if(!c->t) goto L8c031366;
  {  goto L8c0314dc; }
L8c031366:;
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c03136e;
  {  goto L8c031526; }
L8c03136e:;
  {  goto L8c031570; }
L8c031372:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x14u;
  { uint32_t tg=R(2); c->pr=0x8c03137eu; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(15)+32);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c031390;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c031392; }
L8c031390:;
  R(4)=LD32(R(15)+20);
L8c031392:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03139e;
  R(3)=0x1u;
  { ST8(R(8),R(3)); goto L8c0314d8; }
L8c03139e:;
  R(1)=0x0u;
  ST8(R(8),R(1));
  {  goto L8c0314d8; }
L8c0313a6:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x14u;
  { uint32_t tg=R(2); c->pr=0x8c0313b2u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c0723e0u;
  R(4)=R(15);
  ST32(R(15),R(0));
  R(5)+=0x4u;
  { c->pr=0x8c0313c0u; R(4)+=0x14u; f_8c0723e0(c); }
  R(4)=0x8c1410f0u;
  R(6)=0x10u;
  R(2)=0x8c0685b4u;
  R(5)=R(15);
  { c->pr=0x8c0313ccu; R(5)+=0x4u; f_8c0685b4(c); }
  { R(0)=LD32(R(15)); goto L8c031572; }
L8c0313d0:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x14u;
  { uint32_t tg=R(2); c->pr=0x8c0313dcu; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+32);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0313ea;
  R(0)=0x14u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0313f2; }
L8c0313ea:;
  R(3)=LD32(R(15)+20);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0313f2:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x14u;
  fp_st(c,4,R(9));
  R(2)=LD32(R(14)+4);
  { uint32_t tg=R(2); c->pr=0x8c031400u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+32);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c03140e;
  R(0)=0x14u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c031416; }
L8c03140e:;
  R(3)=LD32(R(15)+20);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c031416:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x14u;
  fp_st(c,4,R(11));
  R(2)=LD32(R(14)+4);
  { uint32_t tg=R(2); c->pr=0x8c031424u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(15)+32);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c031480;
  R(0)=0x14u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c031488; }
L8c031480:;
  R(3)=LD32(R(15)+20);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c031488:;
  R(2)=0x8c1410e4u;
  { fp_st(c,4,R(2)); goto L8c0314d8; }
L8c03148e:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x14u;
  { uint32_t tg=R(2); c->pr=0x8c03149au; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+32);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0314a8;
  R(0)=0x14u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0314b0; }
L8c0314a8:;
  R(3)=LD32(R(15)+20);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0314b0:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x14u;
  fp_st(c,4,R(10));
  R(2)=LD32(R(14)+4);
  { uint32_t tg=R(2); c->pr=0x8c0314beu; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(15)+32);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0314cc;
  R(0)=0x14u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0314d4; }
L8c0314cc:;
  R(3)=LD32(R(15)+20);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0314d4:;
  R(2)=0x8c1410ecu;
  fp_st(c,4,R(2));
L8c0314d8:;
  { R(0)=R(5); goto L8c031572; }
L8c0314dc:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c031570;
  R(4)=0x8c1410f0u;
  R(6)=0x10u;
  R(1)=0x8c0685b4u;
  R(5)=R(13);
  { c->pr=0x8c0314eeu; R(5)+=0x14u; f_8c0685b4(c); }
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  R(3)=0x8c1410e4u;
  R(1)=0x0u;
  fp_st(c,3,R(9));
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8u;
  R(2)=0x8c1410ecu;
  fp_st(c,2,R(11));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_st(c,3,R(10));
  fp_ld(c,3,R(11));
  fp_ld(c,0,R(9));
  fp_ld(c,2,R(10));
  fp_arith(c,1,3,0);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x8c141100u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(2));
  ST8(R(0),R(1));
  R(1)=0x8c140a64u;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  { ST8(R(8),R(3)); goto L8c031570; }
L8c031526:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c031570;
  R(1)=0x8c0685b4u;
  R(6)=0x10u;
  R(5)=0x8c1410f0u;
  R(4)=R(13);
  { c->pr=0x8c031538u; R(4)+=0x14u; f_8c0685b4(c); }
  fp_ld(c,3,R(9));
  R(0)=0x4u;
  R(3)=0x8c1410e4u;
  R(1)=0x1u;
  fp_st(c,3,R(13));
  fp_ld(c,2,R(11));
  R(2)=0x8c1410ecu;
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,3,R(10));
  fp_st(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(10));
  fp_ld(c,1,R(11));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(9));
  fp_arith(c,1,1,3);
  fp_arith(c,3,2,1);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8c141100u;
  ST8(R(0),R(1));
  R(1)=0x8c140a64u;
  R(3)=(int32_t)(int8_t)LD8(R(8));
  ST8(R(1),R(3));
L8c031570:;
  R(0)=R(14);
L8c031572:;
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
void f_8c031480(SH4Ctx *c) {
  R(3)=LD32(R(15)+20);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
  R(2)=0x8c1410e4u;
  { fp_st(c,4,R(2)); goto L8c0314d8; }
L8c0314d8:;
  { R(0)=R(5); goto L8c031572; }
L8c031572:;
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
void f_8c031586(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(6)=0x8c0c76fcu;
  R(12)=R(4);
  R(14)=R(5);
  R(5)+=0xfffffff4u;
  R(4)=LD32(R(6));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=LD32(R(5)); if(k) goto L8c0315ac; }
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(6),R(3)); goto L8c0315ae; }
L8c0315ac:;
  ST32(R(15),R(12));
L8c0315ae:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0315e0;
  { R(13)=0x0u; goto L8c0315e4; }
L8c0315e0:;
  R(13)=LD32(R(15));
  R(13)=LD32(R(13)+4);
L8c0315e4:;
  R(13)=LD32(R(13)+28);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c031620;
  R(3)=0x8c072fccu;
  { c->pr=0x8c0315f0u; R(4)=R(14); f_8c072fcc(c); }
  {  goto L8c031888; }
L8c031620:;
  R(11)=0x8c050948u;
  R(0)=R(5);
  R(0)+=0xffffff98u;
  R(1)=0xbu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c031630;
  {  goto L8c031886; }
L8c031630:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c031640u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c03163cu+R(0));  switch(tg){ case 0x8c031656u: goto L8c031656; case 0x8c03165au: goto L8c03165a; case 0x8c031666u: goto L8c031666; case 0x8c0316b6u: goto L8c0316b6; case 0x8c0316eau: goto L8c0316ea; case 0x8c031780u: goto L8c031780; case 0x8c0317ceu: goto L8c0317ce; case 0x8c031840u: goto L8c031840; case 0x8c03184au: goto L8c03184a; case 0x8c031854u: goto L8c031854; case 0x8c031880u: goto L8c031880; default: sh4_bad_jump(c,0x8c031638u,tg); return; } }
L8c031656:;
  { R(5)=0x1u; goto L8c03165c; }
L8c03165a:;
  R(5)=0x0u;
L8c03165c:;
  R(3)=0x8c05096cu;
  { c->pr=0x8c031662u; R(4)=R(13); f_8c05096c(c); }
  {  goto L8c031886; }
L8c031666:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c031672u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c031682; }
  R(0)=0x1cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c03168a; }
L8c031682:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c03168a:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c031694u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c0316a4; }
  R(0)=0x1cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c0316ac; }
L8c0316a4:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c0316ac:;
  R(2)=0x8c0509a8u;
  { c->pr=0x8c0316b2u; R(4)=R(13); f_8c0509a8(c); }
  {  goto L8c03183c; }
L8c0316b6:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0316c2u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c0723e0u;
  R(4)=R(15);
  ST32(R(15)+4,R(0));
  R(5)+=0xcu;
  { c->pr=0x8c0316d0u; R(4)+=0x1cu; f_8c0723e0(c); }
  R(0)=0x18u;
  R(3)=0x8c050ae0u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0316e6u; R(4)=R(13); f_8c050ae0(c); }
  {  goto L8c03183c; }
L8c0316ea:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0316f6u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c031706; }
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c03170e; }
L8c031706:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c03170e:;
  R(2)=0x8c050a5cu;
  { c->pr=0x8c031714u;  f_8c050a5c(c); }
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c031720u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c031730; }
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c031738; }
L8c031730:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c031738:;
  R(2)=0x8c050aa6u;
  { c->pr=0x8c03173eu;  f_8c050aa6(c); }
  {  goto L8c03183c; }
L8c031780:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03178cu; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+28);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c03179a;
  { R(0)=0x1u; goto L8c03179c; }
L8c03179a:;
  R(0)=0x0u;
L8c03179c:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0317aau; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0317b8;
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0317c0; }
L8c0317b8:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0317c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c050bc0u;
  R(5)=R(0);
  { c->pr=0x8c0317cau; R(4)=R(13); f_8c050bc0(c); }
  {  goto L8c03183c; }
L8c0317ce:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0317dau; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+28);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0317e8;
  { R(0)=0x1u; goto L8c0317ea; }
L8c0317e8:;
  R(0)=0x0u;
L8c0317ea:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0317f8u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c031808; }
  R(0)=0x1cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c031810; }
L8c031808:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c031810:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03181au; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c03182a; }
  R(0)=0x1cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c031832; }
L8c03182a:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c031832:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c050be0u;
  R(5)=R(0);
  { c->pr=0x8c03183cu; R(4)=R(13); f_8c050be0(c); }
L8c03183c:;
  { R(0)=LD32(R(15)+4); goto L8c031888; }
L8c031840:;
  R(5)=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c031846u; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c031886; }
L8c03184a:;
  R(5)=0x2u;
  { uint32_t tg=R(11); c->pr=0x8c031850u; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c031886; }
L8c031854:;
  R(5)=0x3u;
  { uint32_t tg=R(11); c->pr=0x8c03185au; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c031886; }
L8c031880:;
  R(5)=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c031886u; R(4)=R(13); sh4_call(c,tg); }
L8c031886:;
  R(0)=R(14);
L8c031888:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0315e0(SH4Ctx *c) {
  R(13)=LD32(R(15));
  R(13)=LD32(R(13)+4);
  R(13)=LD32(R(13)+28);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c031620;
  R(3)=0x8c072fccu;
  { c->pr=0x8c0315f0u; R(4)=R(14); f_8c072fcc(c); }
  {  goto L8c031888; }
L8c031620:;
  R(11)=0x8c050948u;
  R(0)=R(5);
  R(0)+=0xffffff98u;
  R(1)=0xbu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c031630;
  {  goto L8c031886; }
L8c031630:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c031640u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c03163cu+R(0));  switch(tg){ case 0x8c031656u: goto L8c031656; case 0x8c03165au: goto L8c03165a; case 0x8c031666u: goto L8c031666; case 0x8c0316b6u: goto L8c0316b6; case 0x8c0316eau: goto L8c0316ea; case 0x8c031780u: goto L8c031780; case 0x8c0317ceu: goto L8c0317ce; case 0x8c031840u: goto L8c031840; case 0x8c03184au: goto L8c03184a; case 0x8c031854u: goto L8c031854; case 0x8c031880u: goto L8c031880; default: sh4_bad_jump(c,0x8c031638u,tg); return; } }
L8c031656:;
  { R(5)=0x1u; goto L8c03165c; }
L8c03165a:;
  R(5)=0x0u;
L8c03165c:;
  R(3)=0x8c05096cu;
  { c->pr=0x8c031662u; R(4)=R(13); f_8c05096c(c); }
  {  goto L8c031886; }
L8c031666:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c031672u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c031682; }
  R(0)=0x1cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c03168a; }
L8c031682:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c03168a:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c031694u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c0316a4; }
  R(0)=0x1cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c0316ac; }
L8c0316a4:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c0316ac:;
  R(2)=0x8c0509a8u;
  { c->pr=0x8c0316b2u; R(4)=R(13); f_8c0509a8(c); }
  {  goto L8c03183c; }
L8c0316b6:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0316c2u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c0723e0u;
  R(4)=R(15);
  ST32(R(15)+4,R(0));
  R(5)+=0xcu;
  { c->pr=0x8c0316d0u; R(4)+=0x1cu; f_8c0723e0(c); }
  R(0)=0x18u;
  R(3)=0x8c050ae0u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0316e6u; R(4)=R(13); f_8c050ae0(c); }
  {  goto L8c03183c; }
L8c0316ea:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0316f6u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c031706; }
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c03170e; }
L8c031706:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c03170e:;
  R(2)=0x8c050a5cu;
  { c->pr=0x8c031714u;  f_8c050a5c(c); }
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c031720u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c031730; }
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c031738; }
L8c031730:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c031738:;
  R(2)=0x8c050aa6u;
  { c->pr=0x8c03173eu;  f_8c050aa6(c); }
  {  goto L8c03183c; }
L8c031780:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03178cu; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+28);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c03179a;
  { R(0)=0x1u; goto L8c03179c; }
L8c03179a:;
  R(0)=0x0u;
L8c03179c:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0317aau; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0317b8;
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0317c0; }
L8c0317b8:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0317c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c050bc0u;
  R(5)=R(0);
  { c->pr=0x8c0317cau; R(4)=R(13); f_8c050bc0(c); }
  {  goto L8c03183c; }
L8c0317ce:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0317dau; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+28);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0317e8;
  { R(0)=0x1u; goto L8c0317ea; }
L8c0317e8:;
  R(0)=0x0u;
L8c0317ea:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0317f8u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c031808; }
  R(0)=0x1cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c031810; }
L8c031808:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c031810:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03181au; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c03182a; }
  R(0)=0x1cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c031832; }
L8c03182a:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c031832:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c050be0u;
  R(5)=R(0);
  { c->pr=0x8c03183cu; R(4)=R(13); f_8c050be0(c); }
L8c03183c:;
  { R(0)=LD32(R(15)+4); goto L8c031888; }
L8c031840:;
  R(5)=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c031846u; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c031886; }
L8c03184a:;
  R(5)=0x2u;
  { uint32_t tg=R(11); c->pr=0x8c031850u; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c031886; }
L8c031854:;
  R(5)=0x3u;
  { uint32_t tg=R(11); c->pr=0x8c03185au; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c031886; }
L8c031880:;
  R(5)=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c031886u; R(4)=R(13); sh4_call(c,tg); }
L8c031886:;
  R(0)=R(14);
L8c031888:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031620(SH4Ctx *c) {
  R(11)=0x8c050948u;
  R(0)=R(5);
  R(0)+=0xffffff98u;
  R(1)=0xbu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c031630;
  {  goto L8c031886; }
L8c031630:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c031640u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c03163cu+R(0));  switch(tg){ case 0x8c031656u: goto L8c031656; case 0x8c03165au: goto L8c03165a; case 0x8c031666u: goto L8c031666; case 0x8c0316b6u: goto L8c0316b6; case 0x8c0316eau: goto L8c0316ea; case 0x8c031780u: goto L8c031780; case 0x8c0317ceu: goto L8c0317ce; case 0x8c031840u: goto L8c031840; case 0x8c03184au: goto L8c03184a; case 0x8c031854u: goto L8c031854; case 0x8c031880u: goto L8c031880; default: sh4_bad_jump(c,0x8c031638u,tg); return; } }
L8c031656:;
  { R(5)=0x1u; goto L8c03165c; }
L8c03165a:;
  R(5)=0x0u;
L8c03165c:;
  R(3)=0x8c05096cu;
  { c->pr=0x8c031662u; R(4)=R(13); f_8c05096c(c); }
  {  goto L8c031886; }
L8c031666:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c031672u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c031682; }
  R(0)=0x1cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c03168a; }
L8c031682:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c03168a:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c031694u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c0316a4; }
  R(0)=0x1cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c0316ac; }
L8c0316a4:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c0316ac:;
  R(2)=0x8c0509a8u;
  { c->pr=0x8c0316b2u; R(4)=R(13); f_8c0509a8(c); }
  {  goto L8c03183c; }
L8c0316b6:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0316c2u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c0723e0u;
  R(4)=R(15);
  ST32(R(15)+4,R(0));
  R(5)+=0xcu;
  { c->pr=0x8c0316d0u; R(4)+=0x1cu; f_8c0723e0(c); }
  R(0)=0x18u;
  R(3)=0x8c050ae0u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0316e6u; R(4)=R(13); f_8c050ae0(c); }
  {  goto L8c03183c; }
L8c0316ea:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0316f6u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c031706; }
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c03170e; }
L8c031706:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c03170e:;
  R(2)=0x8c050a5cu;
  { c->pr=0x8c031714u;  f_8c050a5c(c); }
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c031720u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c031730; }
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c031738; }
L8c031730:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c031738:;
  R(2)=0x8c050aa6u;
  { c->pr=0x8c03173eu;  f_8c050aa6(c); }
  {  goto L8c03183c; }
L8c031780:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03178cu; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+28);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c03179a;
  { R(0)=0x1u; goto L8c03179c; }
L8c03179a:;
  R(0)=0x0u;
L8c03179c:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0317aau; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0317b8;
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0317c0; }
L8c0317b8:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0317c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c050bc0u;
  R(5)=R(0);
  { c->pr=0x8c0317cau; R(4)=R(13); f_8c050bc0(c); }
  {  goto L8c03183c; }
L8c0317ce:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0317dau; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+28);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0317e8;
  { R(0)=0x1u; goto L8c0317ea; }
L8c0317e8:;
  R(0)=0x0u;
L8c0317ea:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0317f8u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c031808; }
  R(0)=0x1cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c031810; }
L8c031808:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c031810:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03181au; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c03182a; }
  R(0)=0x1cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c031832; }
L8c03182a:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c031832:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c050be0u;
  R(5)=R(0);
  { c->pr=0x8c03183cu; R(4)=R(13); f_8c050be0(c); }
L8c03183c:;
  { R(0)=LD32(R(15)+4); goto L8c031888; }
L8c031840:;
  R(5)=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c031846u; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c031886; }
L8c03184a:;
  R(5)=0x2u;
  { uint32_t tg=R(11); c->pr=0x8c031850u; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c031886; }
L8c031854:;
  R(5)=0x3u;
  { uint32_t tg=R(11); c->pr=0x8c03185au; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c031886; }
L8c031880:;
  R(5)=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c031886u; R(4)=R(13); sh4_call(c,tg); }
L8c031886:;
  R(0)=R(14);
L8c031888:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031780(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03178cu; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+28);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c03179a;
  { R(0)=0x1u; goto L8c03179c; }
L8c03179a:;
  R(0)=0x0u;
L8c03179c:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0317aau; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0317b8;
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0317c0; }
L8c0317b8:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0317c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c050bc0u;
  R(5)=R(0);
  { c->pr=0x8c0317cau; R(4)=R(13); f_8c050bc0(c); }
  {  goto L8c03183c; }
L8c03183c:;
  { R(0)=LD32(R(15)+4); goto L8c031888; }
L8c031888:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031880(SH4Ctx *c) {
  R(5)=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c031886u; R(4)=R(13); sh4_call(c,tg); }
  R(0)=R(14);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031898(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0318bc;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0318be; }
L8c0318bc:;
  ST32(R(15),R(4));
L8c0318be:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c0318c8u; R(5)=R(14); sh4_call(c,tg); }
  R(14)=R(0);
  R(2)=LD32(R(15)+12);
  R(13)=R(15);
  R(3)=0x8c2d105cu;
  R(12)=0x8c017f2cu;
  R(13)+=0x8u;
  ST32(R(13),R(2));
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==115;
  { uint32_t k=c->t; R(5)=LD32(R(3)); if(k) goto L8c0318ee; }
  c->t=(int32_t)R(0)==117;
  if(c->t) goto L8c0318fa;
  c->t=(int32_t)R(0)==118;
  if(c->t) goto L8c03190a;
  c->t=(int32_t)R(0)==119;
  if(c->t) goto L8c031916;
  {  goto L8c03192a; }
L8c0318ee:;
  R(2)=LD32(R(13));
  R(7)=0x0u;
  R(6)=R(7);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { R(4)=LD32(R(15)+4); goto L8c031924; }
L8c0318fa:;
  R(1)=0x8c2d1064u;
  R(7)=0x0u;
  R(2)=LD32(R(13));
  R(6)=R(7);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(1));
  { R(4)=0xffffffffu; goto L8c031924; }
L8c03190a:;
  R(2)=LD32(R(13));
  R(7)=0x0u;
  R(6)=R(7);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { R(4)=0xffffffffu; goto L8c031924; }
L8c031916:;
  R(1)=0x8c2d1060u;
  R(7)=0x0u;
  R(2)=LD32(R(13));
  R(4)=0xffffffffu;
  R(6)=R(7);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(1));
L8c031924:;
  { uint32_t tg=R(12); c->pr=0x8c031928u;  sh4_call(c,tg); }
  R(15)+=0x4u;
L8c03192a:;
  R(0)=R(14);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031938(SH4Ctx *c) {
  { R(0)=R(5); return; }
}
void f_8c03193c(SH4Ctx *c) {
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
  { uint32_t tg=R(3); c->pr=0x8c031956u; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15));
  R(4)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0319a0;
  c->t=(int32_t)R(0)==65;
  if(c->t) goto L8c0319aa;
  {  goto L8c0319b0; }
L8c0319a0:;
  R(3)=0x8c05c234u;
  { c->pr=0x8c0319a6u;  f_8c05c234(c); }
  {  goto L8c0319b0; }
L8c0319aa:;
  R(3)=0x8c05c228u;
  { c->pr=0x8c0319b0u;  f_8c05c228(c); }
L8c0319b0:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0319a0(SH4Ctx *c) {
  R(3)=0x8c05c234u;
  { c->pr=0x8c0319a6u;  f_8c05c234(c); }
  {  goto L8c0319b0; }
L8c0319b0:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0319ba(SH4Ctx *c) {
  { R(0)=R(5); return; }
}
void f_8c0319be(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST8(R(15),R(6));
  R(3)=LD32(R(4)+8);
  c->t=R(3)==R(5);
  if(c->t) goto L8c0319ec;
  R(3)=0x8c0740cau;
  { c->pr=0x8c0319d0u;  f_8c0740ca(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0319ec;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0319ec;
  R(2)=0x8c0c5194u;
  R(3)=0x0u;
  R(4)=0x8u;
  ST32(R(2),R(3));
  R(15)+=0x4u;
  R(3)=0x8c072f52u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c072f52(c); return; } }
L8c0319ec:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0319f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(11)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(11)=LD32(R(11)+4);
  R(13)=R(4);
  { uint32_t tg=R(11); c->pr=0x8c031a10u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=LD32(R(15)+4);
  R(11)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(12)=LD32(R(12)+4);
  R(5)=R(11);
  R(6)+=0x4u;
  R(12)=LD32(R(12)+12);
  R(14)=LD32(R(12)+4);
  R(14)=LD32(R(14)+12);
  R(14)=LD32(R(14));
  { uint32_t tg=R(3); c->pr=0x8c031a2au; R(4)=R(13); sh4_call(c,tg); }
  c->t=R(12)==R(13);
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c031a3c; }
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c031a3c;
  { R(6)=0x0u; goto L8c031a3e; }
L8c031a3c:;
  R(6)=0x1u;
L8c031a3e:;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c031a44u; R(4)=LD32(R(14)+4); f_8c0319be(c); }
  R(4)=0x0u;
  ST32(R(14)+28,R(4));
  ST32(R(14)+20,R(4));
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031a5a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(11)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(11)=LD32(R(11)+4);
  R(13)=R(4);
  { uint32_t tg=R(11); c->pr=0x8c031a76u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=LD32(R(15)+4);
  R(11)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(12)=LD32(R(12)+4);
  R(5)=R(11);
  R(6)+=0x4u;
  R(12)=LD32(R(12)+12);
  R(14)=LD32(R(12)+4);
  R(14)=LD32(R(14)+12);
  R(14)=LD32(R(14));
  { uint32_t tg=R(3); c->pr=0x8c031a90u; R(4)=R(13); sh4_call(c,tg); }
  c->t=R(12)==R(13);
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c031aa2; }
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c031aa2;
  { R(6)=0x0u; goto L8c031aa4; }
L8c031aa2:;
  R(6)=0x1u;
L8c031aa4:;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c031aaau; R(4)=LD32(R(14)+8); f_8c0319be(c); }
  R(4)=0x0u;
  ST32(R(14)+32,R(4));
  ST32(R(14)+24,R(4));
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031ae0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(14)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  R(14)=LD32(R(14)+12);
  R(14)=LD32(R(14));
  { uint32_t tg=R(2); c->pr=0x8c031af8u; R(6)+=0x4u; sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x10u;
  R(6)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(5)=LD32(R(15)+4);
  c->t=(R(6)&R(6))==0;
  R(6)=c->t;
  { c->pr=0x8c031b08u; R(4)=LD32(R(14)+4); f_8c0319be(c); }
  R(4)=0x0u;
  ST32(R(14)+28,R(4));
  ST32(R(14)+20,R(4));
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031b18(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(14)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  R(14)=LD32(R(14)+12);
  R(14)=LD32(R(14));
  { uint32_t tg=R(2); c->pr=0x8c031b30u; R(6)+=0x4u; sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x10u;
  R(5)=LD32(R(15)+4);
  R(6)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { c->pr=0x8c031b3cu; R(4)=LD32(R(14)+8); f_8c0319be(c); }
  R(4)=0x0u;
  ST32(R(14)+32,R(4));
  ST32(R(14)+24,R(4));
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031b4c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(13)=R(4);
  R(11)=R(5);
  R(6)=R(15);
  R(12)=R(15);
  R(6)+=0xcu;
  ST32(R(15),R(5));
  R(14)=LD32(R(13)+4);
  R(12)+=0xcu;
  R(11)=LD32(R(11)+4);
  R(14)=LD32(R(14)+12);
  R(14)=LD32(R(14));
  { uint32_t tg=R(11); c->pr=0x8c031b72u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(12));
  R(11)=R(0);
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0xcu;
  ST32(R(15),R(3));
  R(2)=LD32(R(11)+4);
  { uint32_t tg=R(2); c->pr=0x8c031b84u; R(4)=R(13); sh4_call(c,tg); }
  R(6)=0x0u;
  ST32(R(15)+4,R(0));
  R(3)=LD32(R(12));
  ST32(R(15)+8,R(3));
  R(5)=LD32(R(15));
  { c->pr=0x8c031b92u; R(4)=LD32(R(14)+4); f_8c0319be(c); }
  R(5)=LD32(R(15)+8);
  R(6)=0x0u;
  { c->pr=0x8c031b9au; R(4)=LD32(R(14)+8); f_8c0319be(c); }
  R(4)=0x0u;
  ST32(R(14)+28,R(4));
  ST32(R(14)+20,R(4));
  ST32(R(14)+32,R(4));
  ST32(R(14)+24,R(4));
  R(0)=LD32(R(15)+4);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
