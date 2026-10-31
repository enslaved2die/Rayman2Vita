#include "recomp_decls.h"
void f_8c02ac60(SH4Ctx *c) {
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,13,3);
  fp_arith(c,2,13,14);
  R(6)=0xd0u;
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ac78u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x5cu;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(3)+8);
  R(3)=0x1u;
  ST32(R(2)+8,R(1));
  ST8(R(15)+R(0),R(3));
  {  goto L8c02ad82; }
L8c02ad82:;
  R(0)=0x1u;
  { ST8(R(15)+12,R(0)); goto L8c02aec0; }
L8c02aec0:;
  R(13)=R(14)&0xFF;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02aed0;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02aece;
  {  goto L8c02b7a4; }
L8c02aece:;
  ST32(R(15),R(12));
L8c02aed0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(11)=LD32(R(15));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+36); if(k) goto L8c02aee6; }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  R(4)=R(15);
  { c->pr=0x8c02aee6u; R(4)+=0x68u; f_8c0685b4(c); }
L8c02aee6:;
  R(0)=LD32(R(15)+4);
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02af9a;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02af04u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02aefeu+R(0));  switch(tg){ case 0x8c02af9au: goto L8c02af9a; case 0x8c02af9eu: goto L8c02af9e; case 0x8c02afacu: goto L8c02afac; case 0x8c02b014u: goto L8c02b014; case 0x8c02b022u: goto L8c02b022; case 0x8c02b024u: goto L8c02b024; case 0x8c02b0e0u: goto L8c02b0e0; case 0x8c02b0eeu: goto L8c02b0ee; case 0x8c02b2a0u: goto L8c02b2a0; case 0x8c02b2aeu: goto L8c02b2ae; case 0x8c02b660u: goto L8c02b660; case 0x8c02b6c0u: goto L8c02b6c0; case 0x8c02b6d6u: goto L8c02b6d6; default: sh4_bad_jump(c,0x8c02aefau,tg); return; } }
L8c02af9a:;
  {  goto L8c02b794; }
L8c02af9e:;
  R(2)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02afacu; R(4)+=0x50u; f_8c014f10(c); }
L8c02afac:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_mov(c,4,13);
  R(3)=0x8c0159a2u;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02aff6u; R(4)=R(11); f_8c0159a2(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b002;
  {  goto L8c02b714; }
L8c02b002:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b010u; R(4)+=0x5cu; f_8c014f10(c); }
  {  goto L8c02b25c; }
L8c02b014:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c02b01eu; R(4)=R(11); f_8c0685b4(c); }
  {  goto L8c02b714; }
L8c02b022:;
  R(8)=0x1u;
L8c02b024:;
  R(4)=LD32(R(15));
  R(5)=0x4u;
  R(0)=LD32(R(4)+48);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02b036;
  {  goto L8c02b7a4; }
L8c02b036:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+48);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c02b04e;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
L8c02b04e:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b05c;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b05c;
  {  goto L8c02b714; }
L8c02b05c:;
  R(0)=0x5cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=0x8c015ebcu;
  R(5)+=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(7)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c02b09eu; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c02b714; }
L8c02b0e0:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
L8c02b0ee:;
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b25c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b2a0:;
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
L8c02b2ae:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
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
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02ad20(SH4Ctx *c) {
  R(2)=0xd0u;
  R(3)=R(15);
  R(3)+=0x5cu;
  R(2)+=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=0x1u;
  ST8(R(15)+R(0),R(3));
  {  goto L8c02ad82; }
L8c02ad82:;
  R(0)=0x1u;
  { ST8(R(15)+12,R(0)); goto L8c02aec0; }
L8c02aec0:;
  R(13)=R(14)&0xFF;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02aed0;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02aece;
  {  goto L8c02b7a4; }
L8c02aece:;
  ST32(R(15),R(12));
L8c02aed0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(11)=LD32(R(15));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+36); if(k) goto L8c02aee6; }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  R(4)=R(15);
  { c->pr=0x8c02aee6u; R(4)+=0x68u; f_8c0685b4(c); }
L8c02aee6:;
  R(0)=LD32(R(15)+4);
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02af9a;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02af04u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02aefeu+R(0));  switch(tg){ case 0x8c02af9au: goto L8c02af9a; case 0x8c02af9eu: goto L8c02af9e; case 0x8c02afacu: goto L8c02afac; case 0x8c02b014u: goto L8c02b014; case 0x8c02b022u: goto L8c02b022; case 0x8c02b024u: goto L8c02b024; case 0x8c02b0e0u: goto L8c02b0e0; case 0x8c02b0eeu: goto L8c02b0ee; case 0x8c02b2a0u: goto L8c02b2a0; case 0x8c02b2aeu: goto L8c02b2ae; case 0x8c02b660u: goto L8c02b660; case 0x8c02b6c0u: goto L8c02b6c0; case 0x8c02b6d6u: goto L8c02b6d6; default: sh4_bad_jump(c,0x8c02aefau,tg); return; } }
L8c02af9a:;
  {  goto L8c02b794; }
L8c02af9e:;
  R(2)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02afacu; R(4)+=0x50u; f_8c014f10(c); }
L8c02afac:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_mov(c,4,13);
  R(3)=0x8c0159a2u;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02aff6u; R(4)=R(11); f_8c0159a2(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b002;
  {  goto L8c02b714; }
L8c02b002:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b010u; R(4)+=0x5cu; f_8c014f10(c); }
  {  goto L8c02b25c; }
L8c02b014:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c02b01eu; R(4)=R(11); f_8c0685b4(c); }
  {  goto L8c02b714; }
L8c02b022:;
  R(8)=0x1u;
L8c02b024:;
  R(4)=LD32(R(15));
  R(5)=0x4u;
  R(0)=LD32(R(4)+48);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02b036;
  {  goto L8c02b7a4; }
L8c02b036:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+48);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c02b04e;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
L8c02b04e:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b05c;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b05c;
  {  goto L8c02b714; }
L8c02b05c:;
  R(0)=0x5cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=0x8c015ebcu;
  R(5)+=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(7)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c02b09eu; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c02b714; }
L8c02b0e0:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
L8c02b0ee:;
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b25c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b2a0:;
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
L8c02b2ae:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
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
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02ade0(SH4Ctx *c) {
  R(1)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(6)=0xd0u;
  R(1)+=R(15);
  R(5)=R(10);
  R(3)=LD32(R(1));
  R(6)+=R(15);
  R(0)=LD32(R(1)+4);
  ST32(R(2),R(3));
  ST32(R(2)+4,R(0));
  R(3)=LD32(R(1)+8);
  ST32(R(2)+8,R(3));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02ae00u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02ae14;
  { uint32_t tg=R(11); c->pr=0x8c02ae10u; R(4)=R(10); sh4_call(c,tg); }
  {  goto L8c02b7a6; }
L8c02ae14:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02ae34; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02ae36; }
L8c02ae34:;
  R(5)=0x0u;
L8c02ae36:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ae44u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(3)=0xdcu;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(15)+12,R(0));
  R(2)=LD32(R(15)+4);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c02aec0;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ae60u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x44u;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(3)+8);
  R(3)=0x1u;
  ST32(R(2)+8,R(1));
  { ST8(R(15)+R(0),R(3)); goto L8c02aec0; }
L8c02aec0:;
  R(13)=R(14)&0xFF;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02aed0;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02aece;
  {  goto L8c02b7a4; }
L8c02aece:;
  ST32(R(15),R(12));
L8c02aed0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(11)=LD32(R(15));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+36); if(k) goto L8c02aee6; }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  R(4)=R(15);
  { c->pr=0x8c02aee6u; R(4)+=0x68u; f_8c0685b4(c); }
L8c02aee6:;
  R(0)=LD32(R(15)+4);
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02af9a;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02af04u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02aefeu+R(0));  switch(tg){ case 0x8c02af9au: goto L8c02af9a; case 0x8c02af9eu: goto L8c02af9e; case 0x8c02afacu: goto L8c02afac; case 0x8c02b014u: goto L8c02b014; case 0x8c02b022u: goto L8c02b022; case 0x8c02b024u: goto L8c02b024; case 0x8c02b0e0u: goto L8c02b0e0; case 0x8c02b0eeu: goto L8c02b0ee; case 0x8c02b2a0u: goto L8c02b2a0; case 0x8c02b2aeu: goto L8c02b2ae; case 0x8c02b660u: goto L8c02b660; case 0x8c02b6c0u: goto L8c02b6c0; case 0x8c02b6d6u: goto L8c02b6d6; default: sh4_bad_jump(c,0x8c02aefau,tg); return; } }
L8c02af9a:;
  {  goto L8c02b794; }
L8c02af9e:;
  R(2)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02afacu; R(4)+=0x50u; f_8c014f10(c); }
L8c02afac:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_mov(c,4,13);
  R(3)=0x8c0159a2u;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02aff6u; R(4)=R(11); f_8c0159a2(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b002;
  {  goto L8c02b714; }
L8c02b002:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b010u; R(4)+=0x5cu; f_8c014f10(c); }
  {  goto L8c02b25c; }
L8c02b014:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c02b01eu; R(4)=R(11); f_8c0685b4(c); }
  {  goto L8c02b714; }
L8c02b022:;
  R(8)=0x1u;
L8c02b024:;
  R(4)=LD32(R(15));
  R(5)=0x4u;
  R(0)=LD32(R(4)+48);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02b036;
  {  goto L8c02b7a4; }
L8c02b036:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+48);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c02b04e;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
L8c02b04e:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b05c;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b05c;
  {  goto L8c02b714; }
L8c02b05c:;
  R(0)=0x5cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=0x8c015ebcu;
  R(5)+=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(7)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c02b09eu; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c02b714; }
L8c02b0e0:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
L8c02b0ee:;
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b25c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b2a0:;
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
L8c02b2ae:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
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
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
L8c02b7a6:;
  R(1)=0xe0u;
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
void f_8c02aea0(SH4Ctx *c) {
  {  goto L8c02b7a4; }
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02aec0(SH4Ctx *c) {
  R(13)=R(14)&0xFF;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02aed0;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02aece;
  {  goto L8c02b7a4; }
L8c02aece:;
  ST32(R(15),R(12));
L8c02aed0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(11)=LD32(R(15));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+36); if(k) goto L8c02aee6; }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  R(4)=R(15);
  { c->pr=0x8c02aee6u; R(4)+=0x68u; f_8c0685b4(c); }
L8c02aee6:;
  R(0)=LD32(R(15)+4);
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02af9a;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02af04u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02aefeu+R(0));  switch(tg){ case 0x8c02af9au: goto L8c02af9a; case 0x8c02af9eu: goto L8c02af9e; case 0x8c02afacu: goto L8c02afac; case 0x8c02b014u: goto L8c02b014; case 0x8c02b022u: goto L8c02b022; case 0x8c02b024u: goto L8c02b024; case 0x8c02b0e0u: goto L8c02b0e0; case 0x8c02b0eeu: goto L8c02b0ee; case 0x8c02b2a0u: goto L8c02b2a0; case 0x8c02b2aeu: goto L8c02b2ae; case 0x8c02b660u: goto L8c02b660; case 0x8c02b6c0u: goto L8c02b6c0; case 0x8c02b6d6u: goto L8c02b6d6; default: sh4_bad_jump(c,0x8c02aefau,tg); return; } }
L8c02af9a:;
  {  goto L8c02b794; }
L8c02af9e:;
  R(2)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02afacu; R(4)+=0x50u; f_8c014f10(c); }
L8c02afac:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_mov(c,4,13);
  R(3)=0x8c0159a2u;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02aff6u; R(4)=R(11); f_8c0159a2(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b002;
  {  goto L8c02b714; }
L8c02b002:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b010u; R(4)+=0x5cu; f_8c014f10(c); }
  {  goto L8c02b25c; }
L8c02b014:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c02b01eu; R(4)=R(11); f_8c0685b4(c); }
  {  goto L8c02b714; }
L8c02b022:;
  R(8)=0x1u;
L8c02b024:;
  R(4)=LD32(R(15));
  R(5)=0x4u;
  R(0)=LD32(R(4)+48);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02b036;
  {  goto L8c02b7a4; }
L8c02b036:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+48);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c02b04e;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
L8c02b04e:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b05c;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b05c;
  {  goto L8c02b714; }
L8c02b05c:;
  R(0)=0x5cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=0x8c015ebcu;
  R(5)+=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(7)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c02b09eu; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c02b714; }
L8c02b0e0:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
L8c02b0ee:;
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b25c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b2a0:;
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
L8c02b2ae:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
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
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02b0e0(SH4Ctx *c) {
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02b1c0(SH4Ctx *c) {
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02b2a0(SH4Ctx *c) {
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
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
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02b3a0(SH4Ctx *c) {
  fp_mov(c,3,15);
  fp_unary(c,0,3);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02b660(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02b6c0(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
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
void f_8c02b820(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(12)=R(4);
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(1)=0x159u;
  R(4)=LD32(R(4));
  R(13)=0x8c123b08u;
  R(0)=R(4);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c02b852; }
  R(1)=0x158u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b866;
  R(1)=0x157u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b8ea;
  {  goto L8c02b91e; }
L8c02b852:;
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c02b85cu; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0xc32u;
  R(2)=(int32_t)(int8_t)LD8(R(15));
  { ST8(R(13)+R(0),R(2)); goto L8c02b91e; }
L8c02b866:;
  R(0)=0xc33u;
  R(10)=0x6u;
  R(4)=LD32(R(14));
  R(14)+=0xcu;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c02b8a0; }
  R(0)=0xc30u;
  ST8(R(13)+R(0),R(11));
  ST32(R(15),R(11));
  { ST32(R(15)+12,R(10)); goto L8c02b8a8; }
L8c02b8a0:;
  R(0)=0xc30u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=R(2)&0xFF;
  ST32(R(15),R(2));
L8c02b8a8:;
  R(3)=0x8c0729f6u;
  R(7)=R(15);
  ST32(R(15)+12,R(10));
  R(6)=LD32(R(12)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c02b8b8u; R(5)=0x0u; f_8c0729f6(c); }
  R(0)=0xc33u;
  R(4)=LD32(R(14));
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)+=0xcu; if(k) goto L8c02b8ce; }
  R(0)=0xc31u;
  ST8(R(13)+R(0),R(11));
  ST32(R(15),R(11));
  { ST32(R(15)+12,R(10)); goto L8c02b8d6; }
L8c02b8ce:;
  R(0)=0xc31u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=R(2)&0xFF;
  ST32(R(15),R(2));
L8c02b8d6:;
  R(3)=0x8c0729f6u;
  R(7)=R(15);
  ST32(R(15)+12,R(10));
  R(6)=LD32(R(12)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c02b8e6u; R(5)=0x0u; f_8c0729f6(c); }
  {  goto L8c02b91e; }
L8c02b8ea:;
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c02b8f4u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0xc33u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b904;
  R(0)=0xc30u;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(13)+R(0),R(3));
L8c02b904:;
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02b90eu; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0xc33u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02b91e;
  R(0)=0xc31u;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(13)+R(0),R(3));
L8c02b91e:;
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02b8a0(SH4Ctx *c) {
  R(0)=0xc30u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=R(2)&0xFF;
  ST32(R(15),R(2));
  R(3)=0x8c0729f6u;
  R(7)=R(15);
  ST32(R(15)+12,R(10));
  R(6)=LD32(R(12)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c02b8b8u; R(5)=0x0u; f_8c0729f6(c); }
  R(0)=0xc33u;
  R(4)=LD32(R(14));
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)+=0xcu; if(k) goto L8c02b8ce; }
  R(0)=0xc31u;
  ST8(R(13)+R(0),R(11));
  ST32(R(15),R(11));
  { ST32(R(15)+12,R(10)); goto L8c02b8d6; }
L8c02b8ce:;
  R(0)=0xc31u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(2)=R(2)&0xFF;
  ST32(R(15),R(2));
L8c02b8d6:;
  R(3)=0x8c0729f6u;
  R(7)=R(15);
  ST32(R(15)+12,R(10));
  R(6)=LD32(R(12)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c02b8e6u; R(5)=0x0u; f_8c0729f6(c); }
  {  goto L8c02b91e; }
L8c02b91e:;
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02b960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x8u;
  R(5)=R(14);
  ST32(R(15)+4,R(4));
  R(2)=LD32(R(3));
  ST32(R(15),R(2));
  R(13)=LD32(R(14)+4);
  { uint32_t tg=R(13); c->pr=0x8c02b980u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(13)=R(0);
  R(1)=0x9cu;
  R(0)=LD32(R(15));
  R(14)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b9a8;
  R(1)=0x9bu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b9c4;
  R(1)=0x97u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ba00;
  R(1)=0x98u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ba0a;
  R(1)=0x99u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ba14;
  {  goto L8c02ba1a; }
L8c02b9a8:;
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x8u;
  ST32(R(15),R(14));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c02b9b6u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=0x8c05cbe0u;
  R(13)=R(0);
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c02b9c0u; R(4)=LD32(R(15)); f_8c05cbe0(c); }
  { c->t=(int32_t)R(0)==1; goto L8c02ba1a; }
L8c02b9c4:;
  R(2)=0x8c05cc40u;
  R(4)=R(14);
  { c->pr=0x8c02b9ccu; R(5)=0x1u; f_8c05cc40(c); }
  R(0)=R(0)&0xFF;
  { c->t=(int32_t)R(0)==1; goto L8c02ba1a; }
L8c02ba00:;
  R(3)=0x8c04c318u;
  { c->pr=0x8c02ba06u; R(4)=R(14); f_8c04c318(c); }
  {  goto L8c02ba1a; }
L8c02ba0a:;
  R(3)=0x8c04c336u;
  { c->pr=0x8c02ba10u; R(4)=R(14); f_8c04c336(c); }
  {  goto L8c02ba1a; }
L8c02ba14:;
  R(3)=0x8c04c34eu;
  { c->pr=0x8c02ba1au; R(4)=R(14); f_8c04c34e(c); }
L8c02ba1a:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02ba00(SH4Ctx *c) {
  R(3)=0x8c04c318u;
  { c->pr=0x8c02ba06u; R(4)=R(14); f_8c04c318(c); }
  {  goto L8c02ba1a; }
L8c02ba1a:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02ba60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(14)=0x0u;
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x10u;
  R(12)=R(4);
  ST32(R(15),R(2));
  R(3)=LD32(R(13)+4);
  R(9)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c02ba8cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15));
  R(1)=0x13au;
  R(11)=LD32(R(15)+16);
  R(10)=0x8c0454feu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02bac2;
  R(1)=0x139u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02bb60;
  R(1)=0x13cu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02baaa;
  {  goto L8c02bbae; }
L8c02baaa:;
  R(1)=0x13bu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02bab4;
  {  goto L8c02bbb0; }
L8c02bab4:;
  R(1)=0x13du;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02babe;
  {  goto L8c02bbf0; }
L8c02babe:;
  {  goto L8c02bbfe; }
L8c02bac2:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x10u;
  { uint32_t tg=R(3); c->pr=0x8c02baceu; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+16);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x10u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c02bae0u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+16);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x10u;
  ST32(R(15),R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c02baf2u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+16);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x10u;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c02bb04u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+16);
  R(13)=R(0);
  R(3)=0x8c067940u;
  R(12)=0xau;
  ST32(R(15)+8,R(2));
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+16);
  { c->pr=0x8c02bb18u; R(0)=R(12); f_8c067940(c); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c067940u;
  R(1)=LD32(R(15)+24);
  { c->pr=0x8c02bb22u; R(0)=R(12); f_8c067940(c); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c067940u;
  R(1)=LD32(R(15)+16);
  { c->pr=0x8c02bb2cu; R(0)=R(12); f_8c067940(c); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c067940u;
  R(1)=LD32(R(15)+24);
  { c->pr=0x8c02bb36u; R(0)=R(12); f_8c067940(c); }
  R(7)=0x0u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(6)=R(7);
  { R(5)=0x2u; goto L8c02bbe8; }
L8c02bb60:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x10u;
  { uint32_t tg=R(2); c->pr=0x8c02bb6cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(9)=LD32(R(15)+16);
  R(6)+=0x10u;
  { uint32_t tg=R(3); c->pr=0x8c02bb7cu; R(4)=R(12); sh4_call(c,tg); }
  c->t=(int32_t)R(9)>=0;
  R(13)=R(0);
  { uint32_t k=c->t; R(12)=LD32(R(15)+16); if(k) goto L8c02bb86; }
  R(9)=R(14);
L8c02bb86:;
  R(4)=0x64u;
  c->t=(int32_t)R(9)>(int32_t)R(4);
  if(!c->t) goto L8c02bb8e;
  R(9)=R(4);
L8c02bb8e:;
  c->t=(int32_t)R(12)>=0;
  if(c->t) goto L8c02bb94;
  R(12)=R(14);
L8c02bb94:;
  c->t=(int32_t)R(12)>(int32_t)R(4);
  { uint32_t k=!c->t; {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);} if(k) goto L8c02bb9c; }
  R(12)=R(4);
L8c02bb9c:;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=R(12);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { R(5)=0x1u; goto L8c02bbe8; }
L8c02bbae:;
  R(9)=0x1u;
L8c02bbb0:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x10u;
  { uint32_t tg=R(2); c->pr=0x8c02bbbcu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=LD32(R(15)+16);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x10u;
  ST32(R(15),R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c02bbceu; R(4)=R(12); sh4_call(c,tg); }
  R(4)=LD32(R(15)+16);
  R(7)=0x0u;
  R(5)=R(9);
  R(13)=R(0);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(5)+=0x3u;
  R(3)=LD32(R(15)+4);
  R(6)=R(7);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
L8c02bbe8:;
  { uint32_t tg=R(10); c->pr=0x8c02bbecu; R(4)=R(11); sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c02bbfe; }
L8c02bbf0:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x10u;
  { uint32_t tg=R(2); c->pr=0x8c02bbfcu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
L8c02bbfe:;
  R(0)=R(13);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02bb60(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x10u;
  { uint32_t tg=R(2); c->pr=0x8c02bb6cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(9)=LD32(R(15)+16);
  R(6)+=0x10u;
  { uint32_t tg=R(3); c->pr=0x8c02bb7cu; R(4)=R(12); sh4_call(c,tg); }
  c->t=(int32_t)R(9)>=0;
  R(13)=R(0);
  { uint32_t k=c->t; R(12)=LD32(R(15)+16); if(k) goto L8c02bb86; }
  R(9)=R(14);
L8c02bb86:;
  R(4)=0x64u;
  c->t=(int32_t)R(9)>(int32_t)R(4);
  if(!c->t) goto L8c02bb8e;
  R(9)=R(4);
L8c02bb8e:;
  c->t=(int32_t)R(12)>=0;
  if(c->t) goto L8c02bb94;
  R(12)=R(14);
L8c02bb94:;
  c->t=(int32_t)R(12)>(int32_t)R(4);
  { uint32_t k=!c->t; {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);} if(k) goto L8c02bb9c; }
  R(12)=R(4);
L8c02bb9c:;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=R(12);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { R(5)=0x1u; goto L8c02bbe8; }
L8c02bbe8:;
  { uint32_t tg=R(10); c->pr=0x8c02bbecu; R(4)=R(11); sh4_call(c,tg); }
  { R(15)+=0x18u; goto L8c02bbfe; }
L8c02bbfe:;
  R(0)=R(13);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02bc12(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x8u;
  R(5)=R(14);
  ST32(R(15),R(4));
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(13)=LD32(R(14)+4);
  { uint32_t tg=R(13); c->pr=0x8c02bc34u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(14)=LD32(R(15)+8);
  R(13)=R(0);
  R(6)=R(15);
  R(12)=LD32(R(13)+4);
  R(14)=LD32(R(14)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  R(14)=LD32(R(14)+12);
  { uint32_t tg=R(12); c->pr=0x8c02bc48u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(12)=R(0);
  R(1)=0xc8u;
  R(0)=LD32(R(15)+4);
  R(13)=R(15);
  c->t=R(0)==R(1);
  { uint32_t k=!c->t; R(13)+=0x8u; if(k) goto L8c02bc84; }
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02bc72;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02bc64u;  f_8c04a8b8(c); }
  R(3)=0x8c0900acu;
  R(6)=R(13);
  R(4)=R(0);
  { c->pr=0x8c02bc6eu; R(5)=R(14); f_8c0900ac(c); }
  {  goto L8c02bc8c; }
L8c02bc72:;
  R(3)=0x8c01638au;
  R(4)=LD32(R(14)+36);
  { c->pr=0x8c02bc7au; R(5)=R(13); f_8c01638a(c); }
  R(2)=0x8c064b7eu;
  { c->pr=0x8c02bc80u; R(4)=R(14); f_8c064b7e(c); }
  {  goto L8c02bc8c; }
L8c02bc84:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02bc8cu; R(4)=0x28u; f_8c074080(c); }
L8c02bc8c:;
  R(0)=R(12);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02bcc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffbcu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x34u;
  R(5)=R(14);
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(14)+4);
  R(12)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c02bce6u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=LD32(R(15)+52);
  R(14)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(13)=LD32(R(13)+4);
  R(5)=R(14);
  R(6)+=0x34u;
  R(13)=LD32(R(13)+12);
  { uint32_t tg=R(3); c->pr=0x8c02bcfau; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+52);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x34u;
  ST32(R(15)+8,R(2));
  R(11)=LD32(R(14)+4);
  { uint32_t tg=R(11); c->pr=0x8c02bd0cu; R(4)=R(12); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(15)+12);
  R(1)=0x133u;
  R(12)=R(15);
  R(3)=0xffffu;
  R(12)+=0x34u;
  R(5)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  R(10)=0x8c058ce8u;
  { uint32_t k=c->t; R(5)+=R(3); if(k) goto L8c02bd32; }
  R(1)=0x134u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02bd38;
  R(1)=0x135u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02bd3e;
  {  goto L8c02bd80; }
L8c02bd32:;
  R(6)=R(13);
  { R(4)=0x1u; goto L8c02bd42; }
L8c02bd38:;
  R(6)=R(13);
  { R(4)=0x0u; goto L8c02bd42; }
L8c02bd3e:;
  R(4)=0x2u;
  R(6)=R(13);
L8c02bd42:;
  { uint32_t tg=R(10); c->pr=0x8c02bd46u;  sh4_call(c,tg); }
  { R(14)=R(0); goto L8c02bd8c; }
L8c02bd80:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02bd88u; R(4)=0x28u; f_8c074080(c); }
  {  goto L8c02be22; }
L8c02bd8c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02be22;
  R(0)=LD32(R(14)+16);
  R(13)=0x8c0869a8u;
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c02bda2;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c02bda8;
  {  goto L8c02be22; }
L8c02bda2:;
  R(6)=0x0u;
  { R(5)=R(12); goto L8c02be18; }
L8c02bda8:;
  R(3)=R(15);
  R(3)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(2)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x4u;
  { c->pr=0x8c02bdbcu; R(4)=R(14); f_8c085aae(c); }
  R(15)+=0x4u;
  R(3)=0x8c0869f0u;
  R(5)=R(15);
  R(6)=(int32_t)(int16_t)LD16(R(15));
  R(5)+=0x28u;
  { c->pr=0x8c02bdcau; R(4)=R(14); f_8c0869f0(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x1cu;
  R(6)=R(0);
  { c->pr=0x8c02bdd8u; R(4)=R(14); f_8c0869f0(c); }
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x28u;
  R(5)=R(12);
  { c->pr=0x8c02bde6u; R(4)+=0x10u; f_8c05e612(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x28u;
  { c->pr=0x8c02bdf6u; R(4)+=0x28u; f_8c05e5f4(c); }
  R(5)=R(15);
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x1cu;
  { c->pr=0x8c02be06u; R(4)+=0x1cu; f_8c05e5f4(c); }
  R(5)=R(15);
  R(6)=(int32_t)(int16_t)LD16(R(15));
  R(5)+=0x28u;
  { uint32_t tg=R(13); c->pr=0x8c02be10u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(15);
  R(5)+=0x1cu;
  R(6)=R(0);
L8c02be18:;
  { uint32_t tg=R(13); c->pr=0x8c02be1cu; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x8c0872a0u;
  { c->pr=0x8c02be22u; R(4)=R(14); f_8c0872a0(c); }
L8c02be22:;
  R(0)=R(11);
  R(15)+=0x44u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02bd80(SH4Ctx *c) {
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02bd88u; R(4)=0x28u; f_8c074080(c); }
  {  goto L8c02be22; }
L8c02be22:;
  R(0)=R(11);
  R(15)+=0x44u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02be34(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
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
  if(c->t) goto L8c02be80;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02be82; }
L8c02be80:;
  ST32(R(15),R(4));
L8c02be82:;
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c02be8cu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(13)=R(0);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02be9c;
  {  goto L8c02c192; }
L8c02be9c:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02bea2u;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(0)=LD32(R(15)+4);
  R(1)=0xf4u;
  R(0)-=R(1);
  R(1)=0x13u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c02beb4;
  {  goto L8c02c192; }
L8c02beb4:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02bec8u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02bec0u+R(0));  switch(tg){ case 0x8c02beeeu: goto L8c02beee; case 0x8c02bf08u: goto L8c02bf08; case 0x8c02bf60u: goto L8c02bf60; case 0x8c02bf7cu: goto L8c02bf7c; case 0x8c02bf92u: goto L8c02bf92; case 0x8c02bfa8u: goto L8c02bfa8; case 0x8c02bfc0u: goto L8c02bfc0; case 0x8c02bfe0u: goto L8c02bfe0; case 0x8c02bff8u: goto L8c02bff8; case 0x8c02c010u: goto L8c02c010; case 0x8c02c04cu: goto L8c02c04c; case 0x8c02c064u: goto L8c02c064; case 0x8c02c0a0u: goto L8c02c0a0; case 0x8c02c0b8u: goto L8c02c0b8; case 0x8c02c0d0u: goto L8c02c0d0; case 0x8c02c10au: goto L8c02c10a; case 0x8c02c122u: goto L8c02c122; case 0x8c02c160u: goto L8c02c160; case 0x8c02c17au: goto L8c02c17a; default: sh4_bad_jump(c,0x8c02bebcu,tg); return; } }
L8c02beee:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02befe;
  R(0)=LD32(R(14)+8);
  R(0)|=0x1u;
  ST32(R(14)+8,R(0));
  { R(3)=R(0); goto L8c02bf78; }
L8c02befe:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffffeu;
  R(3)&=R(2);
  { ST32(R(14)+8,R(3)); goto L8c02c192; }
L8c02bf08:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02bf18;
  R(0)=LD32(R(14)+8);
  R(0)|=0x2u;
  ST32(R(14)+8,R(0));
  { R(1)=R(0); goto L8c02bf20; }
L8c02bf18:;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffffffdu;
  R(1)&=R(3);
  ST32(R(14)+8,R(1));
L8c02bf20:;
  ST32(R(14)+8,R(1));
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02bf2c;
  {  goto L8c02c192; }
L8c02bf2c:;
  R(5)=0x138u;
  R(4)=0x1c8u;
  R(3)=0x8c05e6eau;
  R(5)+=R(14);
  { c->pr=0x8c02bf38u; R(4)+=R(14); f_8c05e6ea(c); }
  {  goto L8c02c192; }
L8c02bf60:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02bf70;
  R(0)=LD32(R(14)+8);
  R(0)|=0x4u;
  ST32(R(14)+8,R(0));
  { R(3)=R(0); goto L8c02bf78; }
L8c02bf70:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffffbu;
  R(3)&=R(2);
  ST32(R(14)+8,R(3));
L8c02bf78:;
  { ST32(R(14)+8,R(3)); goto L8c02c192; }
L8c02bf7c:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02bf88;
  R(0)=LD32(R(14)+8);
  { R(0)|=0x8u; goto L8c02c06e; }
L8c02bf88:;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffffff7u;
  R(1)&=R(3);
  { ST32(R(14)+8,R(1)); goto L8c02c192; }
L8c02bf92:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02bf9e;
  R(0)=LD32(R(14)+8);
  { R(0)|=0x10u; goto L8c02bfca; }
L8c02bf9e:;
  R(2)=LD32(R(14)+8);
  R(3)=0xffffffefu;
  R(2)&=R(3);
  { ST32(R(14)+8,R(2)); goto L8c02c192; }
L8c02bfa8:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02bfb6;
  R(0)=LD32(R(14)+8);
  R(0)|=0x40u;
  {  goto L8c02c06e; }
L8c02bfb6:;
  R(1)=LD32(R(14)+8);
  R(3)=0xffffffbfu;
  R(1)&=R(3);
  { ST32(R(14)+8,R(1)); goto L8c02c192; }
L8c02bfc0:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02bfd0;
  R(0)=LD32(R(14)+8);
  R(0)|=0x20u;
L8c02bfca:;
  ST32(R(14)+8,R(0));
  { R(2)=R(0); goto L8c02c138; }
L8c02bfd0:;
  R(2)=LD32(R(14)+8);
  R(3)=0xffffffdfu;
  R(2)&=R(3);
  { ST32(R(14)+8,R(2)); goto L8c02c192; }
L8c02bfe0:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02bfee;
  R(1)=LD32(R(14)+12);
  R(3)=0x100u;
  { R(1)|=R(3); goto L8c02bff4; }
L8c02bfee:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffffeffu;
  R(1)&=R(3);
L8c02bff4:;
  { ST32(R(14)+12,R(1)); goto L8c02c192; }
L8c02bff8:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c006;
  R(2)=LD32(R(14)+12);
  R(3)=0x200u;
  { R(2)|=R(3); goto L8c02c00c; }
L8c02c006:;
  R(2)=LD32(R(14)+12);
  R(3)=0xfffffdffu;
  R(2)&=R(3);
L8c02c00c:;
  { ST32(R(14)+12,R(2)); goto L8c02c190; }
L8c02c010:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c040;
  R(1)=LD32(R(14)+12);
  R(3)=0x100000u;
  { R(1)|=R(3); goto L8c02c046; }
L8c02c040:;
  R(1)=LD32(R(14)+12);
  R(3)=0xffefffffu;
  R(1)&=R(3);
L8c02c046:;
  ST32(R(14)+12,R(1));
  { ST32(R(14)+12,R(1)); goto L8c02c192; }
L8c02c04c:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c05a;
  R(2)=LD32(R(14)+12);
  R(3)=0x200000u;
  { R(2)|=R(3); goto L8c02c060; }
L8c02c05a:;
  R(2)=LD32(R(14)+12);
  R(3)=0xffdfffffu;
  R(2)&=R(3);
L8c02c060:;
  { ST32(R(14)+12,R(2)); goto L8c02c190; }
L8c02c064:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c074;
  R(0)=LD32(R(14)+8);
  R(0)|=0x80u;
L8c02c06e:;
  ST32(R(14)+8,R(0));
  { R(1)=R(0); goto L8c02c176; }
L8c02c074:;
  R(1)=LD32(R(14)+8);
  R(3)=0xffffff7fu;
  R(1)&=R(3);
  { ST32(R(14)+8,R(1)); goto L8c02c192; }
L8c02c0a0:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c0ae;
  R(2)=LD32(R(14)+8);
  R(3)=0x100u;
  { R(2)|=R(3); goto L8c02c0b4; }
L8c02c0ae:;
  R(2)=LD32(R(14)+8);
  R(3)=0xfffffeffu;
  R(2)&=R(3);
L8c02c0b4:;
  { ST32(R(14)+8,R(2)); goto L8c02c192; }
L8c02c0b8:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c0c6;
  R(1)=LD32(R(14)+8);
  R(3)=0x200u;
  { R(1)|=R(3); goto L8c02c0cc; }
L8c02c0c6:;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffffdffu;
  R(1)&=R(3);
L8c02c0cc:;
  { ST32(R(14)+8,R(1)); goto L8c02c192; }
L8c02c0d0:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c100;
  R(2)=LD32(R(14)+8);
  R(3)=0x400u;
  { R(2)|=R(3); goto L8c02c106; }
L8c02c100:;
  R(2)=LD32(R(14)+8);
  R(3)=0xfffffbffu;
  R(2)&=R(3);
L8c02c106:;
  { ST32(R(14)+8,R(2)); goto L8c02c192; }
L8c02c10a:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c118;
  R(1)=LD32(R(14)+8);
  R(3)=0x800u;
  { R(1)|=R(3); goto L8c02c11e; }
L8c02c118:;
  R(1)=LD32(R(14)+8);
  R(3)=0xfffff7ffu;
  R(1)&=R(3);
L8c02c11e:;
  { ST32(R(14)+8,R(1)); goto L8c02c192; }
L8c02c122:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c130;
  R(2)=LD32(R(14)+8);
  R(3)=0x1000u;
  { R(2)|=R(3); goto L8c02c136; }
L8c02c130:;
  R(2)=LD32(R(14)+8);
  R(3)=0xffffefffu;
  R(2)&=R(3);
L8c02c136:;
  ST32(R(14)+8,R(2));
L8c02c138:;
  { ST32(R(14)+8,R(2)); goto L8c02c192; }
L8c02c160:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c16e;
  R(1)=LD32(R(14)+8);
  R(3)=0x2000u;
  { R(1)|=R(3); goto L8c02c174; }
L8c02c16e:;
  R(1)=LD32(R(14)+8);
  R(3)=0xffffdfffu;
  R(1)&=R(3);
L8c02c174:;
  ST32(R(14)+8,R(1));
L8c02c176:;
  { ST32(R(14)+8,R(1)); goto L8c02c192; }
L8c02c17a:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c188;
  R(2)=LD32(R(14)+12);
  R(3)=0x4000000u;
  { R(2)|=R(3); goto L8c02c18e; }
L8c02c188:;
  R(2)=LD32(R(14)+12);
  R(3)=0xfbffffffu;
  R(2)&=R(3);
L8c02c18e:;
  ST32(R(14)+12,R(2));
L8c02c190:;
  ST32(R(14)+12,R(2));
L8c02c192:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02bf60(SH4Ctx *c) {
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02bf70;
  R(0)=LD32(R(14)+8);
  R(0)|=0x4u;
  ST32(R(14)+8,R(0));
  { R(3)=R(0); goto L8c02bf78; }
L8c02bf70:;
  R(3)=LD32(R(14)+8);
  R(2)=0xfffffffbu;
  R(3)&=R(2);
  ST32(R(14)+8,R(3));
L8c02bf78:;
  { ST32(R(14)+8,R(3)); goto L8c02c192; }
L8c02c192:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02bfe0(SH4Ctx *c) {
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02bfee;
  R(1)=LD32(R(14)+12);
  R(3)=0x100u;
  { R(1)|=R(3); goto L8c02bff4; }
L8c02bfee:;
  R(1)=LD32(R(14)+12);
  R(3)=0xfffffeffu;
  R(1)&=R(3);
L8c02bff4:;
  { ST32(R(14)+12,R(1)); goto L8c02c192; }
L8c02c192:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c040(SH4Ctx *c) {
  R(1)=LD32(R(14)+12);
  R(3)=0xffefffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
  { ST32(R(14)+12,R(1)); goto L8c02c192; }
L8c02c192:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c0a0(SH4Ctx *c) {
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c0ae;
  R(2)=LD32(R(14)+8);
  R(3)=0x100u;
  { R(2)|=R(3); goto L8c02c0b4; }
L8c02c0ae:;
  R(2)=LD32(R(14)+8);
  R(3)=0xfffffeffu;
  R(2)&=R(3);
L8c02c0b4:;
  { ST32(R(14)+8,R(2)); goto L8c02c192; }
L8c02c192:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c100(SH4Ctx *c) {
  R(2)=LD32(R(14)+8);
  R(3)=0xfffffbffu;
  R(2)&=R(3);
  { ST32(R(14)+8,R(2)); goto L8c02c192; }
L8c02c192:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c160(SH4Ctx *c) {
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02c16e;
  R(1)=LD32(R(14)+8);
  R(3)=0x2000u;
  { R(1)|=R(3); goto L8c02c174; }
L8c02c16e:;
  R(1)=LD32(R(14)+8);
  R(3)=0xffffdfffu;
  R(1)&=R(3);
L8c02c174:;
  ST32(R(14)+8,R(1));
  { ST32(R(14)+8,R(1)); goto L8c02c192; }
L8c02c192:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c1c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
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
  R(13)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c02c1eau; R(4)=R(13); sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  R(14)=R(0);
  R(12)=LD32(R(4)+28);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c02c258;
  R(3)=LD32(R(15));
  R(2)=0x136u;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c02c258;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c02c208u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x4u;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c02c21au; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x4u;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  fp_ld(c,12,R(0)+R(15));
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c02c22cu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x4u;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  fp_ld(c,13,R(0)+R(15));
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c02c23eu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x4u;
  fp_ld(c,15,R(0)+R(15));
  R(3)=0x8c050ae0u;
  fp_mov(c,4,15);
  fp_arith(c,2,4,14);
  fp_mov(c,6,15);
  fp_arith(c,2,6,13);
  fp_mov(c,5,15);
  fp_arith(c,2,5,12);
  c->fr[7]=0x00000000u;
  { c->pr=0x8c02c258u; R(4)=R(12); f_8c050ae0(c); }
L8c02c258:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c26e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
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
  if(c->t) goto L8c02c2c0;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02c2c2; }
L8c02c2c0:;
  ST32(R(15),R(4));
L8c02c2c2:;
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c02c2ccu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(13)=R(0);
  R(0)=0x8u;
  R(4)=LD32(R(4)+4);
  fp_ld(c,15,R(0)+R(15));
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02c2e0;
  {  goto L8c02c4a4; }
L8c02c2e0:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02c2e6u;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(0)=LD32(R(15)+4);
  R(1)=0x107u;
  R(0)-=R(1);
  R(1)=0x26u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c02c2f8;
  {  goto L8c02c4a4; }
L8c02c2f8:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02c30cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02c304u+R(0));  switch(tg){ case 0x8c02c358u: goto L8c02c358; case 0x8c02c35cu: goto L8c02c35c; case 0x8c02c360u: goto L8c02c360; case 0x8c02c364u: goto L8c02c364; case 0x8c02c376u: goto L8c02c376; case 0x8c02c37cu: goto L8c02c37c; case 0x8c02c3c0u: goto L8c02c3c0; case 0x8c02c3c6u: goto L8c02c3c6; case 0x8c02c3ccu: goto L8c02c3cc; case 0x8c02c3d2u: goto L8c02c3d2; case 0x8c02c3d8u: goto L8c02c3d8; case 0x8c02c3deu: goto L8c02c3de; case 0x8c02c420u: goto L8c02c420; case 0x8c02c426u: goto L8c02c426; case 0x8c02c42cu: goto L8c02c42c; case 0x8c02c432u: goto L8c02c432; case 0x8c02c462u: goto L8c02c462; case 0x8c02c4a0u: goto L8c02c4a0; case 0x8c02c4a4u: goto L8c02c4a4; default: sh4_bad_jump(c,0x8c02c300u,tg); return; } }
L8c02c358:;
  { R(0)=0x10u; goto L8c02c42e; }
L8c02c35c:;
  { R(0)=0x1cu; goto L8c02c42e; }
L8c02c360:;
  { R(0)=0x20u; goto L8c02c42e; }
L8c02c364:;
  R(0)=0x8c02c3a4u;
  R(3)=0x8c09d2dcu;
  fp_ld(c,3,R(0));
  fp_mov(c,4,15);
  { c->pr=0x8c02c370u; fp_arith(c,2,4,3); f_8c09d2dc(c); }
  R(0)=0x14u;
  { fp_st(c,0,R(0)+R(14)); goto L8c02c4a4; }
L8c02c376:;
  R(0)=0x174u;
  {  goto L8c02c42e; }
L8c02c37c:;
  R(0)=0x178u;
  {  goto L8c02c42e; }
L8c02c3c0:;
  R(0)=0x17cu;
  {  goto L8c02c42e; }
L8c02c3c6:;
  R(0)=0x200u;
  {  goto L8c02c42e; }
L8c02c3cc:;
  R(0)=0x204u;
  {  goto L8c02c42e; }
L8c02c3d2:;
  R(0)=0x208u;
  {  goto L8c02c42e; }
L8c02c3d8:;
  R(0)=0x180u;
  {  goto L8c02c42e; }
L8c02c3de:;
  R(0)=0x184u;
  {  goto L8c02c42e; }
L8c02c420:;
  R(0)=0x188u;
  {  goto L8c02c42e; }
L8c02c426:;
  R(0)=0x18cu;
  {  goto L8c02c42e; }
L8c02c42c:;
  R(0)=0x190u;
L8c02c42e:;
  { fp_st(c,15,R(0)+R(14)); goto L8c02c4a4; }
L8c02c432:;
  R(2)=LD32(R(14)+12);
  R(3)=0x400000u;
  c->fr[3]=0x3F800000u;
  R(2)|=R(3);
  fp_mov(c,4,15);
  ST32(R(14)+12,R(2));
  R(0)=LD32(R(14)+8);
  R(2)=0x100u;
  R(0)|=0x2u;
  R(1)=R(0);
  R(1)|=R(2);
  R(0)=R(1);
  R(0)|=0x80u;
  ST32(R(14)+8,R(0));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x20u;
  R(1)=0x8c090500u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c02c45eu; R(4)=R(14); f_8c090500(c); }
  {  goto L8c02c4a4; }
L8c02c462:;
  R(2)=0x8c0c8f04u;
  { fp_st(c,15,R(2)); goto L8c02c4a4; }
L8c02c4a0:;
  R(1)=0x8c0c8f08u;
  fp_st(c,15,R(1));
L8c02c4a4:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c2c0(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c02c2ccu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(13)=R(0);
  R(0)=0x8u;
  R(4)=LD32(R(4)+4);
  fp_ld(c,15,R(0)+R(15));
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02c2e0;
  {  goto L8c02c4a4; }
L8c02c2e0:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02c2e6u;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(0)=LD32(R(15)+4);
  R(1)=0x107u;
  R(0)-=R(1);
  R(1)=0x26u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c02c2f8;
  {  goto L8c02c4a4; }
L8c02c2f8:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02c30cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02c304u+R(0));  switch(tg){ case 0x8c02c358u: goto L8c02c358; case 0x8c02c35cu: goto L8c02c35c; case 0x8c02c360u: goto L8c02c360; case 0x8c02c364u: goto L8c02c364; case 0x8c02c376u: goto L8c02c376; case 0x8c02c37cu: goto L8c02c37c; case 0x8c02c3c0u: goto L8c02c3c0; case 0x8c02c3c6u: goto L8c02c3c6; case 0x8c02c3ccu: goto L8c02c3cc; case 0x8c02c3d2u: goto L8c02c3d2; case 0x8c02c3d8u: goto L8c02c3d8; case 0x8c02c3deu: goto L8c02c3de; case 0x8c02c420u: goto L8c02c420; case 0x8c02c426u: goto L8c02c426; case 0x8c02c42cu: goto L8c02c42c; case 0x8c02c432u: goto L8c02c432; case 0x8c02c462u: goto L8c02c462; case 0x8c02c4a0u: goto L8c02c4a0; case 0x8c02c4a4u: goto L8c02c4a4; default: sh4_bad_jump(c,0x8c02c300u,tg); return; } }
L8c02c358:;
  { R(0)=0x10u; goto L8c02c42e; }
L8c02c35c:;
  { R(0)=0x1cu; goto L8c02c42e; }
L8c02c360:;
  { R(0)=0x20u; goto L8c02c42e; }
L8c02c364:;
  R(0)=0x8c02c3a4u;
  R(3)=0x8c09d2dcu;
  fp_ld(c,3,R(0));
  fp_mov(c,4,15);
  { c->pr=0x8c02c370u; fp_arith(c,2,4,3); f_8c09d2dc(c); }
  R(0)=0x14u;
  { fp_st(c,0,R(0)+R(14)); goto L8c02c4a4; }
L8c02c376:;
  R(0)=0x174u;
  {  goto L8c02c42e; }
L8c02c37c:;
  R(0)=0x178u;
  {  goto L8c02c42e; }
L8c02c3c0:;
  R(0)=0x17cu;
  {  goto L8c02c42e; }
L8c02c3c6:;
  R(0)=0x200u;
  {  goto L8c02c42e; }
L8c02c3cc:;
  R(0)=0x204u;
  {  goto L8c02c42e; }
L8c02c3d2:;
  R(0)=0x208u;
  {  goto L8c02c42e; }
L8c02c3d8:;
  R(0)=0x180u;
  {  goto L8c02c42e; }
L8c02c3de:;
  R(0)=0x184u;
  {  goto L8c02c42e; }
L8c02c420:;
  R(0)=0x188u;
  {  goto L8c02c42e; }
L8c02c426:;
  R(0)=0x18cu;
  {  goto L8c02c42e; }
L8c02c42c:;
  R(0)=0x190u;
L8c02c42e:;
  { fp_st(c,15,R(0)+R(14)); goto L8c02c4a4; }
L8c02c432:;
  R(2)=LD32(R(14)+12);
  R(3)=0x400000u;
  c->fr[3]=0x3F800000u;
  R(2)|=R(3);
  fp_mov(c,4,15);
  ST32(R(14)+12,R(2));
  R(0)=LD32(R(14)+8);
  R(2)=0x100u;
  R(0)|=0x2u;
  R(1)=R(0);
  R(1)|=R(2);
  R(0)=R(1);
  R(0)|=0x80u;
  ST32(R(14)+8,R(0));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x20u;
  R(1)=0x8c090500u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c02c45eu; R(4)=R(14); f_8c090500(c); }
  {  goto L8c02c4a4; }
L8c02c462:;
  R(2)=0x8c0c8f04u;
  { fp_st(c,15,R(2)); goto L8c02c4a4; }
L8c02c4a0:;
  R(1)=0x8c0c8f08u;
  fp_st(c,15,R(1));
L8c02c4a4:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c3c0(SH4Ctx *c) {
  R(0)=0x17cu;
  {  goto L8c02c42e; }
L8c02c42e:;
  { fp_st(c,15,R(0)+R(14)); goto L8c02c4a4; }
L8c02c4a4:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c420(SH4Ctx *c) {
  R(0)=0x188u;
  {  goto L8c02c42e; }
L8c02c42e:;
  { fp_st(c,15,R(0)+R(14)); goto L8c02c4a4; }
L8c02c4a4:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c4a0(SH4Ctx *c) {
  R(1)=0x8c0c8f08u;
  fp_st(c,15,R(1));
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c4b2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(13)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(14)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02c4dc;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c02c4de; }
L8c02c4dc:;
  ST32(R(15),R(14));
L8c02c4de:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02c4eau; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02c4fcu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02c50eu; R(4)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(0)=0x8u;
  R(4)=LD32(R(4)+4);
  fp_ld(c,13,R(0)+R(15));
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02c53a;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02c524u;  f_8c04a8b8(c); }
  R(4)=R(0);
  R(1)=0x10eu;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c53a;
  R(0)=0x174u;
  fp_st(c,15,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,13,R(0)+R(4));
L8c02c53a:;
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c580(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(3)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02c5a6;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02c5a8; }
L8c02c5a6:;
  ST32(R(15),R(4));
L8c02c5a8:;
  R(6)=R(15);
  R(12)=LD32(R(14)+4);
  R(6)+=0x14u;
  { uint32_t tg=R(12); c->pr=0x8c02c5b2u; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(12)=R(0);
  R(13)=R(15);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)+=0x14u; if(k) goto L8c02c682; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02c5c8u;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(1)=0x112u;
  R(0)=LD32(R(15)+4);
  R(11)=0x8c05e6eau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02c620;
  R(1)=0x114u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02c664;
  R(1)=0x116u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02c66a;
  {  goto L8c02c682; }
L8c02c620:;
  R(3)=0x198u;
  R(2)=R(15);
  c->fr[3]=0x00000000u;
  R(2)+=0x8u;
  R(3)+=R(14);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_ld(c,4,R(13));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02c640;
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
L8c02c640:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(13));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02c64e;
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
L8c02c64e:;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(13));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02c65c;
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
L8c02c65c:;
  R(4)=0x198u;
  R(5)=R(15);
  { R(5)+=0x8u; goto L8c02c67e; }
L8c02c664:;
  R(4)=0x1a4u;
  { R(5)=R(13); goto L8c02c67e; }
L8c02c66a:;
  R(5)=0x1a4u;
  R(4)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(13);
  R(5)+=R(14);
  { c->pr=0x8c02c678u; R(4)+=0x8u; f_8c05e5f4(c); }
  R(4)=0x1a4u;
  R(5)=R(15);
  R(5)+=0x8u;
L8c02c67e:;
  { uint32_t tg=R(11); c->pr=0x8c02c682u; R(4)+=R(14); sh4_call(c,tg); }
L8c02c682:;
  R(0)=R(12);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c620(SH4Ctx *c) {
  R(3)=0x198u;
  R(2)=R(15);
  c->fr[3]=0x00000000u;
  R(2)+=0x8u;
  R(3)+=R(14);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_ld(c,4,R(13));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02c640;
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
L8c02c640:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(13));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02c64e;
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
L8c02c64e:;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(13));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02c65c;
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
L8c02c65c:;
  R(4)=0x198u;
  R(5)=R(15);
  { R(5)+=0x8u; goto L8c02c67e; }
L8c02c67e:;
  { uint32_t tg=R(11); c->pr=0x8c02c682u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=R(12);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c6c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
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
  if(c->t) goto L8c02c6e6;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02c6e8; }
L8c02c6e6:;
  ST32(R(15),R(4));
L8c02c6e8:;
  R(6)=R(15);
  R(11)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(11); c->pr=0x8c02c6f2u; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(11)=R(0);
  R(13)=R(15);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(13)+=0x8u; if(k) goto L8c02c706; }
  {  goto L8c02c8e2; }
L8c02c706:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02c70cu;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(0)=LD32(R(15)+4);
  R(1)=0xbcu;
  R(12)=0x8c05e6eau;
  R(4)=0x400000u;
  c->t=R(0)==R(1);
  R(7)=0x20000u;
  R(6)=0x40000u;
  R(5)=0x80000u;
  if(c->t) goto L8c02c7a0;
  R(1)=0xb0u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02c7bc;
  R(1)=0xc9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02c7d8;
  R(1)=0xc2u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02c7fc;
  R(1)=0xb6u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c73c;
  {  goto L8c02c880; }
L8c02c73c:;
  R(1)=0xcfu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c746;
  {  goto L8c02c89c; }
L8c02c746:;
  R(1)=0x118u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c750;
  {  goto L8c02c8c0; }
L8c02c750:;
  {  goto L8c02c8e2; }
L8c02c7a0:;
  R(2)=LD32(R(14)+8);
  R(3)=0xffff7fffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x100000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x200000u;
  R(0)|=R(1);
  R(3)=R(0);
  { R(3)|=R(4); goto L8c02c818; }
L8c02c7bc:;
  R(2)=LD32(R(14)+8);
  R(4)=R(14);
  R(3)=0xffffbfffu;
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(7);
  R(2)=R(1);
  R(2)|=R(6);
  R(1)=R(2);
  R(1)|=R(5);
  R(5)=R(13);
  ST32(R(14)+8,R(1));
  { R(4)+=0x24u; goto L8c02c8de; }
L8c02c7d8:;
  R(2)=LD32(R(14)+8);
  R(5)=R(13);
  R(3)=0xfffeffffu;
  R(4)=0x1b0u;
  R(2)&=R(3);
  R(3)=0x2000000u;
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x800000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x1000000u;
  R(0)|=R(1);
  R(0)|=R(3);
  ST32(R(14)+8,R(0));
  { R(4)+=R(14); goto L8c02c8de; }
L8c02c7fc:;
  R(2)=LD32(R(14)+8);
  R(3)=0x8000u;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x100000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x200000u;
  R(0)|=R(1);
  R(3)=R(0);
  R(3)|=R(4);
  ST32(R(14)+8,R(3));
L8c02c818:;
  R(4)=R(14);
  R(5)=R(13);
  ST32(R(14)+8,R(3));
  { R(4)+=0x30u; goto L8c02c8de; }
L8c02c880:;
  R(2)=LD32(R(14)+8);
  R(4)=R(14);
  R(3)=0x4000u;
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(7);
  R(2)=R(1);
  R(2)|=R(6);
  R(1)=R(2);
  R(1)|=R(5);
  R(5)=R(13);
  ST32(R(14)+8,R(1));
  { R(4)+=0x24u; goto L8c02c8de; }
L8c02c89c:;
  R(2)=LD32(R(14)+8);
  R(5)=R(13);
  R(3)=0x10000u;
  R(4)=0x1b0u;
  R(2)|=R(3);
  R(3)=0x2000000u;
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x800000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x1000000u;
  R(0)|=R(1);
  R(0)|=R(3);
  ST32(R(14)+8,R(0));
  { R(4)+=R(14); goto L8c02c8de; }
L8c02c8c0:;
  R(2)=LD32(R(14)+8);
  R(5)=R(13);
  R(3)=0x4000000u;
  R(4)=0x1bcu;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(4)+=R(14);
  R(1)=LD32(R(14)+8);
  R(2)=0x8000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x10000000u;
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
L8c02c8de:;
  { uint32_t tg=R(12); c->pr=0x8c02c8e2u;  sh4_call(c,tg); }
L8c02c8e2:;
  R(0)=R(11);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c7a0(SH4Ctx *c) {
  R(2)=LD32(R(14)+8);
  R(3)=0xffff7fffu;
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x100000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x200000u;
  R(0)|=R(1);
  R(3)=R(0);
  { R(3)|=R(4); goto L8c02c818; }
L8c02c818:;
  R(4)=R(14);
  R(5)=R(13);
  ST32(R(14)+8,R(3));
  { R(4)+=0x30u; goto L8c02c8de; }
L8c02c8de:;
  { uint32_t tg=R(12); c->pr=0x8c02c8e2u;  sh4_call(c,tg); }
  R(0)=R(11);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c880(SH4Ctx *c) {
  R(2)=LD32(R(14)+8);
  R(4)=R(14);
  R(3)=0x4000u;
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(7);
  R(2)=R(1);
  R(2)|=R(6);
  R(1)=R(2);
  R(1)|=R(5);
  R(5)=R(13);
  ST32(R(14)+8,R(1));
  { R(4)+=0x24u; goto L8c02c8de; }
L8c02c8de:;
  { uint32_t tg=R(12); c->pr=0x8c02c8e2u;  sh4_call(c,tg); }
  R(0)=R(11);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02c940(SH4Ctx *c) {
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
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(13)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(12)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02c9a0;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c02c9a2; }
L8c02c9a0:;
  ST32(R(15),R(12));
L8c02c9a2:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02c9b0;
  {  goto L8c02d508; }
L8c02c9b0:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02c9b6u;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(0)=LD32(R(15)+4);
  R(1)=0xb1u;
  R(10)=0x800000u;
  R(11)=0x20000u;
  c->t=R(0)==R(1);
  R(9)=0x100000u;
  R(5)=0xfbffffffu;
  R(6)=0xf7ffffffu;
  R(8)=0x200000u;
  R(4)=0xefffffffu;
  if(!c->t) goto L8c02c9d2;
  {  goto L8c02cc20; }
L8c02c9d2:;
  R(1)=0xb2u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c9dc;
  {  goto L8c02cc3e; }
L8c02c9dc:;
  R(1)=0xb3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c9e6;
  {  goto L8c02cc64; }
L8c02c9e6:;
  R(1)=0xb4u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c9f0;
  {  goto L8c02cc8a; }
L8c02c9f0:;
  R(1)=0xb5u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c9fa;
  {  goto L8c02cd00; }
L8c02c9fa:;
  R(1)=0xbdu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca04;
  {  goto L8c02cd58; }
L8c02ca04:;
  R(1)=0xbeu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca0e;
  {  goto L8c02cd7a; }
L8c02ca0e:;
  R(1)=0xbfu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca18;
  {  goto L8c02cdc0; }
L8c02ca18:;
  R(1)=0xc0u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca22;
  {  goto L8c02cde6; }
L8c02ca22:;
  R(1)=0xc1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca2c;
  {  goto L8c02ce22; }
L8c02ca2c:;
  R(1)=0xb7u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca36;
  {  goto L8c02cea0; }
L8c02ca36:;
  R(1)=0xb8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca40;
  {  goto L8c02cec4; }
L8c02ca40:;
  R(1)=0xb9u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca4a;
  {  goto L8c02ceea; }
L8c02ca4a:;
  R(1)=0xbau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca54;
  {  goto L8c02cf10; }
L8c02ca54:;
  R(1)=0xbbu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca5e;
  {  goto L8c02cf80; }
L8c02ca5e:;
  R(1)=0xc3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca68;
  {  goto L8c02cfd8; }
L8c02ca68:;
  R(1)=0xc4u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca72;
  {  goto L8c02cffa; }
L8c02ca72:;
  R(1)=0xc5u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca7c;
  {  goto L8c02d040; }
L8c02ca7c:;
  R(1)=0xc6u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca86;
  {  goto L8c02d066; }
L8c02ca86:;
  {  goto L8c02cb00; }
L8c02cb00:;
  R(1)=0xc7u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb0a;
  {  goto L8c02d0a2; }
L8c02cb0a:;
  R(1)=0xcau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb14;
  {  goto L8c02d120; }
L8c02cb14:;
  R(1)=0xcbu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb1e;
  {  goto L8c02d142; }
L8c02cb1e:;
  R(1)=0xccu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb28;
  {  goto L8c02d16a; }
L8c02cb28:;
  R(1)=0xcdu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb32;
  {  goto L8c02d1c0; }
L8c02cb32:;
  R(1)=0xceu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb3c;
  {  goto L8c02d1fe; }
L8c02cb3c:;
  R(1)=0xd0u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb46;
  {  goto L8c02d256; }
L8c02cb46:;
  R(1)=0xd1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb50;
  {  goto L8c02d2a0; }
L8c02cb50:;
  R(1)=0xd2u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb5a;
  {  goto L8c02d2c6; }
L8c02cb5a:;
  R(1)=0xd3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb64;
  {  goto L8c02d2ec; }
L8c02cb64:;
  R(1)=0xd4u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb6e;
  {  goto L8c02d32a; }
L8c02cb6e:;
  R(1)=0x119u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb78;
  {  goto L8c02d3c0; }
L8c02cb78:;
  R(1)=0x11au;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb82;
  {  goto L8c02d3e0; }
L8c02cb82:;
  R(1)=0x11cu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb8c;
  {  goto L8c02d400; }
L8c02cb8c:;
  R(1)=0x11bu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb96;
  {  goto L8c02d480; }
L8c02cb96:;
  R(1)=0x11du;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cba0;
  {  goto L8c02d4a0; }
L8c02cba0:;
  R(1)=0x11eu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbaa;
  {  goto L8c02d4a8; }
L8c02cbaa:;
  R(1)=0x11fu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbb4;
  {  goto L8c02d4b0; }
L8c02cbb4:;
  R(1)=0x120u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbbe;
  {  goto L8c02d4b6; }
L8c02cbbe:;
  R(1)=0x12au;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbc8;
  {  goto L8c02d500; }
L8c02cbc8:;
  {  goto L8c02d508; }
L8c02cc20:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cc2cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  { R(1)|=R(11); goto L8c02cebe; }
L8c02cc3e:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cc4au; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x40000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02cc64:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cc70u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x80000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02cc8a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cc96u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cca8u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(2)=0x40000u;
  R(1)|=R(11);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02cd00:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd0cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd1eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd30u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(11);
  R(0)=R(1);
  R(2)=0x40000u;
  R(1)=0x80000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02cd58:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02cd64u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffff7fffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  ST32(R(14)+8,R(1));
  { R(0)=0x30u; goto L8c02d49c; }
L8c02cd7a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd86u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffff7fffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(8);
  ST32(R(14)+8,R(1));
  { R(0)=0x34u; goto L8c02d49c; }
L8c02cdc0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cdccu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffff7fffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x400000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02cde6:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cdf2u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ce04u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(13)=R(0);
  R(3)=0xffff7fffu;
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  R(2)=R(1);
  R(2)|=R(8);
  ST32(R(14)+8,R(2));
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x34u; goto L8c02d49c; }
L8c02ce22:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ce2eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ce40u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ce52u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffff7fffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  R(2)=R(1);
  R(2)|=R(8);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x400000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02cea0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ceacu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(11);
  ST32(R(14)+8,R(1));
L8c02cebe:;
  ST32(R(14)+8,R(1));
  { R(0)=0x24u; goto L8c02d49c; }
L8c02cec4:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ced0u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x40000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02ceea:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cef6u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x80000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02cf10:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf1cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf2eu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(2)=0x40000u;
  R(1)|=R(11);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02cf80:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf8cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf9eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cfb0u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(11);
  R(0)=R(1);
  R(2)=0x40000u;
  R(1)=0x80000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02cfd8:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02cfe4u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  ST32(R(14)+8,R(1));
  { R(0)=0x30u; goto L8c02d49c; }
L8c02cffa:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d006u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(8);
  ST32(R(14)+8,R(1));
  { R(0)=0x34u; goto L8c02d49c; }
L8c02d040:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d04cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x400000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02d066:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d072u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d084u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(13)=R(0);
  R(3)=0x8000u;
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  R(2)=R(1);
  R(2)|=R(8);
  ST32(R(14)+8,R(2));
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x34u; goto L8c02d49c; }
L8c02d0a2:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d0aeu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d0c0u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d0d2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  R(2)=R(1);
  R(2)|=R(8);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x400000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02d120:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d12cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b0u;
  R(1)=R(2);
  R(1)|=R(10);
  { ST32(R(14)+8,R(1)); goto L8c02d49c; }
L8c02d142:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d14eu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b4u;
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x1000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  {  goto L8c02d49c; }
L8c02d16a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d176u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b8u;
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x2000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  {  goto L8c02d49c; }
L8c02d1c0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d1ccu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d1deu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(2)=0x1000000u;
  R(1)|=R(10);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d1fe:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d20au; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d21cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d22eu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(10);
  R(0)=R(1);
  R(2)=0x1000000u;
  R(1)=0x2000000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d256:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d262u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(10);
  ST32(R(14)+8,R(1));
  { R(0)=0x24u; goto L8c02d49c; }
L8c02d2a0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2acu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x1000000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02d2c6:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2d2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x2000000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02d2ec:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2f8u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d30au; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(2)=0x1000000u;
  R(1)|=R(10);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02d32a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d336u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d348u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d35au; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(10);
  R(0)=R(1);
  R(2)=0x1000000u;
  R(1)=0x2000000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02d3c0:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d3ccu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x4000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1bcu;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  {  goto L8c02d49c; }
L8c02d3e0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d3ecu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x8000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1c0u;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  {  goto L8c02d49c; }
L8c02d400:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d40cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d41eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d430u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x8000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x10000000u;
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x1bcu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d480:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d48cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x10000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1c4u;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d4a0:;
  R(3)=LD32(R(14)+8);
  R(3)&=R(5);
  { ST32(R(14)+8,R(3)); goto L8c02d508; }
L8c02d4a8:;
  R(1)=LD32(R(14)+8);
  R(1)&=R(6);
  { ST32(R(14)+8,R(1)); goto L8c02d508; }
L8c02d4b0:;
  R(2)=LD32(R(14)+8);
  { R(2)&=R(4); goto L8c02d4c4; }
L8c02d4b6:;
  R(1)=LD32(R(14)+8);
  R(1)&=R(5);
  R(3)=R(1);
  R(3)&=R(6);
  R(2)=R(3);
  R(2)&=R(4);
  ST32(R(14)+8,R(2));
L8c02d4c4:;
  { ST32(R(14)+8,R(2)); goto L8c02d508; }
L8c02d500:;
  R(1)=LD32(R(14)+12);
  R(3)=0xffbfffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02c9a0(SH4Ctx *c) {
  ST32(R(15),R(12));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02c9b0;
  {  goto L8c02d508; }
L8c02c9b0:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02c9b6u;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(0)=LD32(R(15)+4);
  R(1)=0xb1u;
  R(10)=0x800000u;
  R(11)=0x20000u;
  c->t=R(0)==R(1);
  R(9)=0x100000u;
  R(5)=0xfbffffffu;
  R(6)=0xf7ffffffu;
  R(8)=0x200000u;
  R(4)=0xefffffffu;
  if(!c->t) goto L8c02c9d2;
  {  goto L8c02cc20; }
L8c02c9d2:;
  R(1)=0xb2u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c9dc;
  {  goto L8c02cc3e; }
L8c02c9dc:;
  R(1)=0xb3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c9e6;
  {  goto L8c02cc64; }
L8c02c9e6:;
  R(1)=0xb4u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c9f0;
  {  goto L8c02cc8a; }
L8c02c9f0:;
  R(1)=0xb5u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02c9fa;
  {  goto L8c02cd00; }
L8c02c9fa:;
  R(1)=0xbdu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca04;
  {  goto L8c02cd58; }
L8c02ca04:;
  R(1)=0xbeu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca0e;
  {  goto L8c02cd7a; }
L8c02ca0e:;
  R(1)=0xbfu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca18;
  {  goto L8c02cdc0; }
L8c02ca18:;
  R(1)=0xc0u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca22;
  {  goto L8c02cde6; }
L8c02ca22:;
  R(1)=0xc1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca2c;
  {  goto L8c02ce22; }
L8c02ca2c:;
  R(1)=0xb7u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca36;
  {  goto L8c02cea0; }
L8c02ca36:;
  R(1)=0xb8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca40;
  {  goto L8c02cec4; }
L8c02ca40:;
  R(1)=0xb9u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca4a;
  {  goto L8c02ceea; }
L8c02ca4a:;
  R(1)=0xbau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca54;
  {  goto L8c02cf10; }
L8c02ca54:;
  R(1)=0xbbu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca5e;
  {  goto L8c02cf80; }
L8c02ca5e:;
  R(1)=0xc3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca68;
  {  goto L8c02cfd8; }
L8c02ca68:;
  R(1)=0xc4u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca72;
  {  goto L8c02cffa; }
L8c02ca72:;
  R(1)=0xc5u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca7c;
  {  goto L8c02d040; }
L8c02ca7c:;
  R(1)=0xc6u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02ca86;
  {  goto L8c02d066; }
L8c02ca86:;
  {  goto L8c02cb00; }
L8c02cb00:;
  R(1)=0xc7u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb0a;
  {  goto L8c02d0a2; }
L8c02cb0a:;
  R(1)=0xcau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb14;
  {  goto L8c02d120; }
L8c02cb14:;
  R(1)=0xcbu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb1e;
  {  goto L8c02d142; }
L8c02cb1e:;
  R(1)=0xccu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb28;
  {  goto L8c02d16a; }
L8c02cb28:;
  R(1)=0xcdu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb32;
  {  goto L8c02d1c0; }
L8c02cb32:;
  R(1)=0xceu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb3c;
  {  goto L8c02d1fe; }
L8c02cb3c:;
  R(1)=0xd0u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb46;
  {  goto L8c02d256; }
L8c02cb46:;
  R(1)=0xd1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb50;
  {  goto L8c02d2a0; }
L8c02cb50:;
  R(1)=0xd2u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb5a;
  {  goto L8c02d2c6; }
L8c02cb5a:;
  R(1)=0xd3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb64;
  {  goto L8c02d2ec; }
L8c02cb64:;
  R(1)=0xd4u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb6e;
  {  goto L8c02d32a; }
L8c02cb6e:;
  R(1)=0x119u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb78;
  {  goto L8c02d3c0; }
L8c02cb78:;
  R(1)=0x11au;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb82;
  {  goto L8c02d3e0; }
L8c02cb82:;
  R(1)=0x11cu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb8c;
  {  goto L8c02d400; }
L8c02cb8c:;
  R(1)=0x11bu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb96;
  {  goto L8c02d480; }
L8c02cb96:;
  R(1)=0x11du;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cba0;
  {  goto L8c02d4a0; }
L8c02cba0:;
  R(1)=0x11eu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbaa;
  {  goto L8c02d4a8; }
L8c02cbaa:;
  R(1)=0x11fu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbb4;
  {  goto L8c02d4b0; }
L8c02cbb4:;
  R(1)=0x120u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbbe;
  {  goto L8c02d4b6; }
L8c02cbbe:;
  R(1)=0x12au;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbc8;
  {  goto L8c02d500; }
L8c02cbc8:;
  {  goto L8c02d508; }
L8c02cc20:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cc2cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  { R(1)|=R(11); goto L8c02cebe; }
L8c02cc3e:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cc4au; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x40000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02cc64:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cc70u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x80000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02cc8a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cc96u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cca8u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(2)=0x40000u;
  R(1)|=R(11);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02cd00:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd0cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd1eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd30u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(11);
  R(0)=R(1);
  R(2)=0x40000u;
  R(1)=0x80000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02cd58:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02cd64u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffff7fffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  ST32(R(14)+8,R(1));
  { R(0)=0x30u; goto L8c02d49c; }
L8c02cd7a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd86u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffff7fffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(8);
  ST32(R(14)+8,R(1));
  { R(0)=0x34u; goto L8c02d49c; }
L8c02cdc0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cdccu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffff7fffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x400000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02cde6:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cdf2u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ce04u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(13)=R(0);
  R(3)=0xffff7fffu;
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  R(2)=R(1);
  R(2)|=R(8);
  ST32(R(14)+8,R(2));
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x34u; goto L8c02d49c; }
L8c02ce22:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ce2eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ce40u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ce52u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffff7fffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  R(2)=R(1);
  R(2)|=R(8);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x400000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02cea0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ceacu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(11);
  ST32(R(14)+8,R(1));
L8c02cebe:;
  ST32(R(14)+8,R(1));
  { R(0)=0x24u; goto L8c02d49c; }
L8c02cec4:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ced0u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x40000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02ceea:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cef6u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x80000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02cf10:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf1cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf2eu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(2)=0x40000u;
  R(1)|=R(11);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02cf80:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf8cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf9eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cfb0u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(11);
  R(0)=R(1);
  R(2)=0x40000u;
  R(1)=0x80000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02cfd8:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02cfe4u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  ST32(R(14)+8,R(1));
  { R(0)=0x30u; goto L8c02d49c; }
L8c02cffa:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d006u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(8);
  ST32(R(14)+8,R(1));
  { R(0)=0x34u; goto L8c02d49c; }
L8c02d040:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d04cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x400000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02d066:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d072u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d084u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(13)=R(0);
  R(3)=0x8000u;
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  R(2)=R(1);
  R(2)|=R(8);
  ST32(R(14)+8,R(2));
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x34u; goto L8c02d49c; }
L8c02d0a2:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d0aeu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d0c0u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d0d2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  R(2)=R(1);
  R(2)|=R(8);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x400000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02d120:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d12cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b0u;
  R(1)=R(2);
  R(1)|=R(10);
  { ST32(R(14)+8,R(1)); goto L8c02d49c; }
L8c02d142:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d14eu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b4u;
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x1000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  {  goto L8c02d49c; }
L8c02d16a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d176u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b8u;
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x2000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  {  goto L8c02d49c; }
L8c02d1c0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d1ccu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d1deu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(2)=0x1000000u;
  R(1)|=R(10);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d1fe:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d20au; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d21cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d22eu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(10);
  R(0)=R(1);
  R(2)=0x1000000u;
  R(1)=0x2000000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d256:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d262u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(10);
  ST32(R(14)+8,R(1));
  { R(0)=0x24u; goto L8c02d49c; }
L8c02d2a0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2acu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x1000000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02d2c6:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2d2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x2000000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02d2ec:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2f8u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d30au; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(2)=0x1000000u;
  R(1)|=R(10);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02d32a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d336u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d348u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d35au; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(10);
  R(0)=R(1);
  R(2)=0x1000000u;
  R(1)=0x2000000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02d3c0:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d3ccu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x4000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1bcu;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  {  goto L8c02d49c; }
L8c02d3e0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d3ecu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x8000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1c0u;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  {  goto L8c02d49c; }
L8c02d400:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d40cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d41eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d430u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x8000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x10000000u;
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x1bcu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d480:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d48cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x10000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1c4u;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d4a0:;
  R(3)=LD32(R(14)+8);
  R(3)&=R(5);
  { ST32(R(14)+8,R(3)); goto L8c02d508; }
L8c02d4a8:;
  R(1)=LD32(R(14)+8);
  R(1)&=R(6);
  { ST32(R(14)+8,R(1)); goto L8c02d508; }
L8c02d4b0:;
  R(2)=LD32(R(14)+8);
  { R(2)&=R(4); goto L8c02d4c4; }
L8c02d4b6:;
  R(1)=LD32(R(14)+8);
  R(1)&=R(5);
  R(3)=R(1);
  R(3)&=R(6);
  R(2)=R(3);
  R(2)&=R(4);
  ST32(R(14)+8,R(2));
L8c02d4c4:;
  { ST32(R(14)+8,R(2)); goto L8c02d508; }
L8c02d500:;
  R(1)=LD32(R(14)+12);
  R(3)=0xffbfffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02cb00(SH4Ctx *c) {
  R(1)=0xc7u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb0a;
  {  goto L8c02d0a2; }
L8c02cb0a:;
  R(1)=0xcau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb14;
  {  goto L8c02d120; }
L8c02cb14:;
  R(1)=0xcbu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb1e;
  {  goto L8c02d142; }
L8c02cb1e:;
  R(1)=0xccu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb28;
  {  goto L8c02d16a; }
L8c02cb28:;
  R(1)=0xcdu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb32;
  {  goto L8c02d1c0; }
L8c02cb32:;
  R(1)=0xceu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb3c;
  {  goto L8c02d1fe; }
L8c02cb3c:;
  R(1)=0xd0u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb46;
  {  goto L8c02d256; }
L8c02cb46:;
  R(1)=0xd1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb50;
  {  goto L8c02d2a0; }
L8c02cb50:;
  R(1)=0xd2u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb5a;
  {  goto L8c02d2c6; }
L8c02cb5a:;
  R(1)=0xd3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb64;
  {  goto L8c02d2ec; }
L8c02cb64:;
  R(1)=0xd4u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb6e;
  {  goto L8c02d32a; }
L8c02cb6e:;
  R(1)=0x119u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb78;
  {  goto L8c02d3c0; }
L8c02cb78:;
  R(1)=0x11au;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb82;
  {  goto L8c02d3e0; }
L8c02cb82:;
  R(1)=0x11cu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb8c;
  {  goto L8c02d400; }
L8c02cb8c:;
  R(1)=0x11bu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cb96;
  {  goto L8c02d480; }
L8c02cb96:;
  R(1)=0x11du;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cba0;
  {  goto L8c02d4a0; }
L8c02cba0:;
  R(1)=0x11eu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbaa;
  {  goto L8c02d4a8; }
L8c02cbaa:;
  R(1)=0x11fu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbb4;
  {  goto L8c02d4b0; }
L8c02cbb4:;
  R(1)=0x120u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbbe;
  {  goto L8c02d4b6; }
L8c02cbbe:;
  R(1)=0x12au;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02cbc8;
  {  goto L8c02d500; }
L8c02cbc8:;
  {  goto L8c02d508; }
L8c02d0a2:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d0aeu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d0c0u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d0d2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x30u;
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(9);
  R(2)=R(1);
  R(2)|=R(8);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x400000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  fp_st(c,15,R(0)+R(14));
  R(0)=0x34u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02d120:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d12cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b0u;
  R(1)=R(2);
  R(1)|=R(10);
  { ST32(R(14)+8,R(1)); goto L8c02d49c; }
L8c02d142:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d14eu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b4u;
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x1000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  {  goto L8c02d49c; }
L8c02d16a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d176u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b8u;
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x2000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  {  goto L8c02d49c; }
L8c02d1c0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d1ccu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d1deu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(2)=0x1000000u;
  R(1)|=R(10);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d1fe:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d20au; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d21cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d22eu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(10);
  R(0)=R(1);
  R(2)=0x1000000u;
  R(1)=0x2000000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d256:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d262u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(10);
  ST32(R(14)+8,R(1));
  { R(0)=0x24u; goto L8c02d49c; }
L8c02d2a0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2acu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x1000000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02d2c6:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2d2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x2000000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02d2ec:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2f8u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d30au; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(2)=0x1000000u;
  R(1)|=R(10);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02d32a:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d336u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d348u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d35au; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(10);
  R(0)=R(1);
  R(2)=0x1000000u;
  R(1)=0x2000000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02d3c0:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d3ccu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x4000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1bcu;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  {  goto L8c02d49c; }
L8c02d3e0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d3ecu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x8000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1c0u;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  {  goto L8c02d49c; }
L8c02d400:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d40cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d41eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d430u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+8);
  R(2)=0x8000000u;
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  R(0)=LD32(R(14)+8);
  R(1)=0x10000000u;
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x1bcu;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d480:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d48cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x10000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1c4u;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d4a0:;
  R(3)=LD32(R(14)+8);
  R(3)&=R(5);
  { ST32(R(14)+8,R(3)); goto L8c02d508; }
L8c02d4a8:;
  R(1)=LD32(R(14)+8);
  R(1)&=R(6);
  { ST32(R(14)+8,R(1)); goto L8c02d508; }
L8c02d4b0:;
  R(2)=LD32(R(14)+8);
  { R(2)&=R(4); goto L8c02d4c4; }
L8c02d4b6:;
  R(1)=LD32(R(14)+8);
  R(1)&=R(5);
  R(3)=R(1);
  R(3)&=R(6);
  R(2)=R(3);
  R(2)&=R(4);
  ST32(R(14)+8,R(2));
L8c02d4c4:;
  { ST32(R(14)+8,R(2)); goto L8c02d508; }
L8c02d500:;
  R(1)=LD32(R(14)+12);
  R(3)=0xffbfffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02cc20(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cc2cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  { R(1)|=R(11); goto L8c02cebe; }
L8c02cebe:;
  ST32(R(14)+8,R(1));
  { R(0)=0x24u; goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02cd00(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd0cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd1eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cd30u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffffbfffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(11);
  R(0)=R(1);
  R(2)=0x40000u;
  R(1)=0x80000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02cdc0(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cdccu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xffff7fffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x400000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02cea0(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02ceacu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(11);
  ST32(R(14)+8,R(1));
  ST32(R(14)+8,R(1));
  { R(0)=0x24u; goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02cf80(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf8cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cf9eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02cfb0u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x4000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  R(1)=R(2);
  R(1)|=R(11);
  R(0)=R(1);
  R(2)=0x40000u;
  R(1)=0x80000u;
  R(0)|=R(2);
  R(0)|=R(1);
  ST32(R(14)+8,R(0));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x28u;
  fp_st(c,14,R(0)+R(14));
  { R(0)=0x2cu; goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02d040(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d04cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x400000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x38u; goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02d120(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d12cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(0)=0x1b0u;
  R(1)=R(2);
  R(1)|=R(10);
  { ST32(R(14)+8,R(1)); goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02d1c0(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d1ccu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d1deu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0xfffeffffu;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)&=R(3);
  R(1)=R(2);
  R(2)=0x1000000u;
  R(1)|=R(10);
  R(0)=R(1);
  R(0)|=R(2);
  ST32(R(14)+8,R(0));
  R(0)=0x1b0u;
  fp_st(c,15,R(0)+R(14));
  { R(0)+=0x4u; goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02d2a0(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d2acu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x10000u;
  R(13)=R(0);
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  R(2)=0x1000000u;
  R(1)=LD32(R(14)+8);
  R(1)|=R(2);
  ST32(R(14)+8,R(1));
  { R(0)=0x28u; goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02d3c0(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d3ccu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x4000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1bcu;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  {  goto L8c02d49c; }
L8c02d49c:;
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02d480(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02d48cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(3)=0x10000000u;
  R(2)=LD32(R(14)+8);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1c4u;
  R(2)|=R(3);
  ST32(R(14)+8,R(2));
  { fp_st(c,4,R(0)+R(14)); goto L8c02d508; }
L8c02d508:;
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02d500(SH4Ctx *c) {
  R(1)=LD32(R(14)+12);
  R(3)=0xffbfffffu;
  R(1)&=R(3);
  ST32(R(14)+12,R(1));
  R(0)=R(13);
  R(15)+=0x18u;
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
void f_8c02d522(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(12)=LD32(R(12)+4);
  R(14)=R(4);
  { uint32_t tg=R(12); c->pr=0x8c02d53cu; R(4)=R(14); sh4_call(c,tg); }
  R(12)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(13)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c02d54cu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(12)=R(0);
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c02d55eu; R(4)=R(14); sh4_call(c,tg); }
  R(7)=LD32(R(15)+4);
  R(6)=0x1u;
  R(3)=LD32(R(15));
  R(5)=R(0);
  R(4)=LD32(R(13)+48);
  c->t=(R(7)&R(7))==0;
  { uint32_t k=c->t; R(6)=sh4_shad(R(6),R(3)); if(k) goto L8c02d572; }
  { R(4)|=R(6); goto L8c02d576; }
L8c02d572:;
  R(6)=~R(6);
  R(4)&=R(6);
L8c02d576:;
  R(0)=R(5);
  ST32(R(13)+48,R(4));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02d586(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(13)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02d5a2;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c02d5a4; }
L8c02d5a2:;
  ST32(R(15),R(13));
L8c02d5a4:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d5b0u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+8);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c02d5c2u; R(4)=R(13); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(6)=0x1u;
  R(7)=LD32(R(15)+8);
  R(5)=R(0);
  R(3)=LD32(R(15)+4);
  R(4)=LD32(R(4)+48);
  c->t=(R(7)&R(7))==0;
  { uint32_t k=c->t; R(6)=sh4_shad(R(6),R(3)); if(k) goto L8c02d5d8; }
  { R(4)|=R(6); goto L8c02d5dc; }
L8c02d5d8:;
  R(6)=~R(6);
  R(4)&=R(6);
L8c02d5dc:;
  R(6)=R(4);
  R(4)=LD32(R(15));
  R(0)=R(5);
  ST32(R(4)+48,R(6));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02d5ee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=R(5);
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  ST32(R(15)+4,R(4));
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02d640;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c02d644; }
L8c02d640:;
  R(1)=LD32(R(15)+4);
  ST32(R(15),R(1));
L8c02d644:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02d690;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02d654u;  f_8c04a8b8(c); }
  R(13)=R(0);
  R(1)=0x121u;
  R(0)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d668;
  R(1)=0x122u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d688;
  {  goto L8c02d690; }
L8c02d668:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c02d674u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(6)=LD32(R(15)+12);
  R(14)=R(0);
  R(5)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(3)=0x8c0909d0u;
  R(6)=LD32(R(6)+12);
  { c->pr=0x8c02d684u; R(4)=R(13); f_8c0909d0(c); }
  {  goto L8c02d690; }
L8c02d688:;
  R(3)=0x8c0909e6u;
  R(5)=LD32(R(15));
  { c->pr=0x8c02d690u; R(4)=R(13); f_8c0909e6(c); }
L8c02d690:;
  R(0)=R(14);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02d640(SH4Ctx *c) {
  R(1)=LD32(R(15)+4);
  ST32(R(15),R(1));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02d690;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02d654u;  f_8c04a8b8(c); }
  R(13)=R(0);
  R(1)=0x121u;
  R(0)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d668;
  R(1)=0x122u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d688;
  {  goto L8c02d690; }
L8c02d668:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c02d674u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(6)=LD32(R(15)+12);
  R(14)=R(0);
  R(5)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(3)=0x8c0909d0u;
  R(6)=LD32(R(6)+12);
  { c->pr=0x8c02d684u; R(4)=R(13); f_8c0909d0(c); }
  {  goto L8c02d690; }
L8c02d688:;
  R(3)=0x8c0909e6u;
  R(5)=LD32(R(15));
  { c->pr=0x8c02d690u; R(4)=R(13); f_8c0909e6(c); }
L8c02d690:;
  R(0)=R(14);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02d69c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(13)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(12)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c02d700; }
  ST32(R(15),R(4));
  { ST32(R(5),R(11)); goto L8c02d702; }
L8c02d700:;
  ST32(R(15),R(12));
L8c02d702:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02d716;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02d712u;  f_8c04a8b8(c); }
  { R(14)=R(0); goto L8c02d718; }
L8c02d716:;
  R(14)=R(11);
L8c02d718:;
  R(1)=0x12du;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d734;
  R(1)=0x12eu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d7c0;
  R(1)=0x12fu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02d730;
  {  goto L8c02d7f6; }
L8c02d730:;
  {  goto L8c02d838; }
L8c02d734:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d740u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=LD32(R(15)+8);
  R(13)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02d780;
  R(3)=0x8c0568e8u;
  { c->pr=0x8c02d74eu; R(4)=LD32(R(15)); f_8c0568e8(c); }
  R(5)=LD32(R(15));
  R(6)=R(0);
  R(3)=0x8c064be0u;
  R(5)=LD32(R(5)+28);
  { c->pr=0x8c02d75au; R(4)=LD32(R(15)); f_8c064be0(c); }
  {  goto L8c02d838; }
L8c02d780:;
  R(12)=LD32(R(4)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)=LD32(R(12)+12); if(k) goto L8c02d7b2; }
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02d79c;
  R(3)=0x8c08ebaeu;
  { c->pr=0x8c02d794u; R(4)=LD32(R(14)+4); f_8c08ebae(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02d79c;
  { R(3)=0x1u; goto L8c02d79e; }
L8c02d79c:;
  R(3)=0x0u;
L8c02d79e:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02d7b2;
  R(3)=0x8c0909d0u;
  R(6)=R(12);
  R(5)=LD32(R(15));
  { c->pr=0x8c02d7aeu; R(4)=R(14); f_8c0909d0(c); }
  {  goto L8c02d838; }
L8c02d7b2:;
  R(3)=0x8c064be0u;
  R(5)=R(12);
  R(6)=0x0u;
  { c->pr=0x8c02d7bcu; R(4)=LD32(R(15)); f_8c064be0(c); }
  {  goto L8c02d838; }
L8c02d7c0:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02d7ec;
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02d7d8;
  R(3)=0x8c08ebaeu;
  { c->pr=0x8c02d7d0u; R(4)=LD32(R(14)+4); f_8c08ebae(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02d7d8;
  { R(3)=0x1u; goto L8c02d7da; }
L8c02d7d8:;
  R(3)=0x0u;
L8c02d7da:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02d7ec;
  R(3)=0x8c0909e6u;
  R(5)=LD32(R(15));
  { c->pr=0x8c02d7e8u; R(4)=R(14); f_8c0909e6(c); }
  {  goto L8c02d838; }
L8c02d7ec:;
  R(3)=0x8c04b6c0u;
  { c->pr=0x8c02d7f2u; R(4)=LD32(R(15)); f_8c04b6c0(c); }
  {  goto L8c02d838; }
L8c02d7f6:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d802u; R(4)=R(12); sh4_call(c,tg); }
  R(12)=LD32(R(15)+8);
  R(13)=R(0);
  ST8(R(12),R(11));
  R(0)=(int32_t)(int8_t)LD8(R(12)+1);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c02d838;
  R(14)=LD32(R(15));
  R(11)=0x8c0735a0u;
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02d838;
L8c02d81a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02d832;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02d832;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c02d82au; R(4)=R(12); sh4_call(c,tg); }
  R(0)=(int32_t)(int8_t)LD8(R(12)+1);
  R(2)=(int32_t)(int8_t)LD8(R(12));
  c->t=R(2)==R(0);
  if(c->t) goto L8c02d838;
L8c02d832:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c02d81a;
L8c02d838:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02d700(SH4Ctx *c) {
  ST32(R(15),R(12));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02d716;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02d712u;  f_8c04a8b8(c); }
  { R(14)=R(0); goto L8c02d718; }
L8c02d716:;
  R(14)=R(11);
L8c02d718:;
  R(1)=0x12du;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d734;
  R(1)=0x12eu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d7c0;
  R(1)=0x12fu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02d730;
  {  goto L8c02d7f6; }
L8c02d730:;
  {  goto L8c02d838; }
L8c02d734:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d740u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=LD32(R(15)+8);
  R(13)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02d780;
  R(3)=0x8c0568e8u;
  { c->pr=0x8c02d74eu; R(4)=LD32(R(15)); f_8c0568e8(c); }
  R(5)=LD32(R(15));
  R(6)=R(0);
  R(3)=0x8c064be0u;
  R(5)=LD32(R(5)+28);
  { c->pr=0x8c02d75au; R(4)=LD32(R(15)); f_8c064be0(c); }
  {  goto L8c02d838; }
L8c02d780:;
  R(12)=LD32(R(4)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)=LD32(R(12)+12); if(k) goto L8c02d7b2; }
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02d79c;
  R(3)=0x8c08ebaeu;
  { c->pr=0x8c02d794u; R(4)=LD32(R(14)+4); f_8c08ebae(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02d79c;
  { R(3)=0x1u; goto L8c02d79e; }
L8c02d79c:;
  R(3)=0x0u;
L8c02d79e:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02d7b2;
  R(3)=0x8c0909d0u;
  R(6)=R(12);
  R(5)=LD32(R(15));
  { c->pr=0x8c02d7aeu; R(4)=R(14); f_8c0909d0(c); }
  {  goto L8c02d838; }
L8c02d7b2:;
  R(3)=0x8c064be0u;
  R(5)=R(12);
  R(6)=0x0u;
  { c->pr=0x8c02d7bcu; R(4)=LD32(R(15)); f_8c064be0(c); }
  {  goto L8c02d838; }
L8c02d7c0:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02d7ec;
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02d7d8;
  R(3)=0x8c08ebaeu;
  { c->pr=0x8c02d7d0u; R(4)=LD32(R(14)+4); f_8c08ebae(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02d7d8;
  { R(3)=0x1u; goto L8c02d7da; }
L8c02d7d8:;
  R(3)=0x0u;
L8c02d7da:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02d7ec;
  R(3)=0x8c0909e6u;
  R(5)=LD32(R(15));
  { c->pr=0x8c02d7e8u; R(4)=R(14); f_8c0909e6(c); }
  {  goto L8c02d838; }
L8c02d7ec:;
  R(3)=0x8c04b6c0u;
  { c->pr=0x8c02d7f2u; R(4)=LD32(R(15)); f_8c04b6c0(c); }
  {  goto L8c02d838; }
L8c02d7f6:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02d802u; R(4)=R(12); sh4_call(c,tg); }
  R(12)=LD32(R(15)+8);
  R(13)=R(0);
  ST8(R(12),R(11));
  R(0)=(int32_t)(int8_t)LD8(R(12)+1);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c02d838;
  R(14)=LD32(R(15));
  R(11)=0x8c0735a0u;
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02d838;
L8c02d81a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02d832;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02d832;
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c02d82au; R(4)=R(12); sh4_call(c,tg); }
  R(0)=(int32_t)(int8_t)LD8(R(12)+1);
  R(2)=(int32_t)(int8_t)LD8(R(12));
  c->t=R(2)==R(0);
  if(c->t) goto L8c02d838;
L8c02d832:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c02d81a;
L8c02d838:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02d780(SH4Ctx *c) {
  R(12)=LD32(R(4)+4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)=LD32(R(12)+12); if(k) goto L8c02d7b2; }
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02d79c;
  R(3)=0x8c08ebaeu;
  { c->pr=0x8c02d794u; R(4)=LD32(R(14)+4); f_8c08ebae(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02d79c;
  { R(3)=0x1u; goto L8c02d79e; }
L8c02d79c:;
  R(3)=0x0u;
L8c02d79e:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02d7b2;
  R(3)=0x8c0909d0u;
  R(6)=R(12);
  R(5)=LD32(R(15));
  { c->pr=0x8c02d7aeu; R(4)=R(14); f_8c0909d0(c); }
  {  goto L8c02d838; }
L8c02d7b2:;
  R(3)=0x8c064be0u;
  R(5)=R(12);
  R(6)=0x0u;
  { c->pr=0x8c02d7bcu; R(4)=LD32(R(15)); f_8c064be0(c); }
  {  goto L8c02d838; }
L8c02d838:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02d880(SH4Ctx *c) {
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
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x14u;
  R(5)=R(14);
  ST32(R(15),R(4));
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c02d8aau; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(10)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(15)+20);
  R(6)+=0x14u;
  { uint32_t tg=R(10); c->pr=0x8c02d8bau; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(10)=R(0);
  R(1)=0x117u;
  R(0)=LD32(R(15)+4);
  R(9)=R(15);
  c->t=R(0)==R(1);
  { uint32_t k=!c->t; R(9)+=0x14u; if(k) goto L8c02d90e; }
  R(11)=(int32_t)(int8_t)LD8(R(12));
  R(14)=0x0u;
  R(3)=R(14);
  R(8)=0x8c073d76u;
  R(11)=R(11)&0xFF;
  c->t=R(3)>=R(11);
  if(c->t) goto L8c02d90e;
L8c02d8d6:;
  R(5)=R(14);
  { uint32_t tg=R(8); c->pr=0x8c02d8dcu; R(4)=R(12); sh4_call(c,tg); }
  R(4)=R(0);
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02d90e;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02d8ecu;  f_8c04a8b8(c); }
  R(5)=0x1a4u;
  R(13)=R(0);
  R(3)=0x8c05e5f4u;
  R(4)=R(15);
  R(6)=R(9);
  R(5)+=R(13);
  { c->pr=0x8c02d8fcu; R(4)+=0x8u; f_8c05e5f4(c); }
  R(4)=0x1a4u;
  R(5)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=0x8u;
  { c->pr=0x8c02d908u; R(4)+=R(13); f_8c05e6ea(c); }
  R(14)+=0x1u;
  c->t=R(14)>=R(11);
  if(!c->t) goto L8c02d8d6;
L8c02d90e:;
  R(0)=R(10);
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
void f_8c02d924(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)=0x8c0c76fcu;
  R(7)=R(5);
  ST32(R(15)+4,R(5));
  R(7)+=0xfffffff4u;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(7)=LD32(R(7)); if(k) goto L8c02d960; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02d962; }
L8c02d960:;
  ST32(R(15),R(4));
L8c02d962:;
  R(1)=0xebu;
  R(0)=R(7);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d974;
  R(1)=0xecu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02d98a;
  {  goto L8c02d99a; }
L8c02d974:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c02d99a;
  R(3)=0x8c0833c0u;
  R(5)=0x0u;
  { c->pr=0x8c02d986u; R(4)=LD32(R(15)); f_8c0833c0(c); }
  {  goto L8c02d99a; }
L8c02d98a:;
  R(3)=0x8c0721b8u;
  { c->pr=0x8c02d990u; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c02d99a; }
  R(3)=0x0u;
  ST32(R(4)+4,R(3));
L8c02d99a:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02d9a4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(13)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(12)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02da00;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c02da02; }
L8c02da00:;
  ST32(R(15),R(12));
L8c02da02:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02da18;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02da12u;  f_8c04a8b8(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c02da1c;
L8c02da18:;
  { R(0)=R(13); goto L8c02daae; }
L8c02da1c:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02da28u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02da3au; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02da4cu; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(1)=0x123u;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02da64;
  R(1)=0x124u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02daa0;
  {  goto L8c02daac; }
L8c02da64:;
  R(0)=0x48u;
  R(3)=0x1000u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x4cu;
  fp_st(c,14,R(0)+R(14));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(14));
  R(2)=LD32(R(14)+12);
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c02daac; }
L8c02daa0:;
  R(0)=0x188u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(14));
L8c02daac:;
  R(0)=R(5);
L8c02daae:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02da00(SH4Ctx *c) {
  ST32(R(15),R(12));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02da18;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02da12u;  f_8c04a8b8(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c02da1c;
L8c02da18:;
  { R(0)=R(13); goto L8c02daae; }
L8c02da1c:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c02da28u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02da3au; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02da4cu; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(1)=0x123u;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02da64;
  R(1)=0x124u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02daa0;
  {  goto L8c02daac; }
L8c02da64:;
  R(0)=0x48u;
  R(3)=0x1000u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x4cu;
  fp_st(c,14,R(0)+R(14));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(14));
  R(2)=LD32(R(14)+12);
  R(2)|=R(3);
  { ST32(R(14)+12,R(2)); goto L8c02daac; }
L8c02daa0:;
  R(0)=0x188u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(14));
L8c02daac:;
  R(0)=R(5);
L8c02daae:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02daa0(SH4Ctx *c) {
  R(0)=0x188u;
  fp_st(c,15,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,14,R(0)+R(14));
  R(0)+=0x4u;
  fp_st(c,4,R(0)+R(14));
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02dabe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(6)=0x8c0c76fcu;
  R(14)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02dad6;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02dad8; }
L8c02dad6:;
  ST32(R(15),R(4));
L8c02dad8:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c02dae2u; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x4u;
  R(3)=0x8c0c8f00u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=R(5);
  fp_st(c,0,R(3));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02daf6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(7)=0x8c0c76fcu;
  R(6)=R(5);
  R(14)=R(5);
  R(6)+=0xfffffff4u;
  R(5)=LD32(R(7));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)); if(k) goto L8c02db40; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(7),R(3)); goto L8c02db42; }
L8c02db40:;
  ST32(R(15),R(4));
L8c02db42:;
  R(1)=0x13eu;
  R(0)=R(6);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02db5a;
  R(1)=0x13fu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02db84;
  R(1)=0x140u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02dbe0;
  {  goto L8c02dbfe; }
L8c02db5a:;
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x4u;
  R(12)=LD32(R(12)+4);
  R(12)=LD32(R(12)+4);
  R(13)=LD32(R(12)+32);
  { uint32_t tg=R(3); c->pr=0x8c02db6cu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  R(14)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02db7a;
  R(2)=0x100u;
  { R(13)|=R(2); goto L8c02db7e; }
L8c02db7a:;
  R(1)=0xfffffeffu;
  R(13)&=R(1);
L8c02db7e:;
  R(4)=R(13);
  { ST32(R(12)+32,R(13)); goto L8c02dbfe; }
L8c02db84:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c02db8eu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(3)=0x120u;
  R(0)=0x4u;
  R(5)=LD32(R(4)+4);
  fp_ld(c,4,R(0)+R(15));
  R(5)=LD32(R(5));
  R(5)+=R(3);
  { fp_st(c,4,R(5)); goto L8c02dbfe; }
L8c02dbe0:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c02dbeau; R(5)=R(14); sh4_call(c,tg); }
  R(6)=LD32(R(15));
  R(14)=R(0);
  R(3)=0x114u;
  R(5)=R(15);
  R(4)=LD32(R(6)+4);
  R(4)=LD32(R(4));
  R(4)+=R(3);
  R(3)=0x8c05e6eau;
  { c->pr=0x8c02dbfeu; R(5)+=0x4u; f_8c05e6ea(c); }
L8c02dbfe:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02db40(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(1)=0x13eu;
  R(0)=R(6);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02db5a;
  R(1)=0x13fu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02db84;
  R(1)=0x140u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02dbe0;
  {  goto L8c02dbfe; }
L8c02db5a:;
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x4u;
  R(12)=LD32(R(12)+4);
  R(12)=LD32(R(12)+4);
  R(13)=LD32(R(12)+32);
  { uint32_t tg=R(3); c->pr=0x8c02db6cu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  R(14)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02db7a;
  R(2)=0x100u;
  { R(13)|=R(2); goto L8c02db7e; }
L8c02db7a:;
  R(1)=0xfffffeffu;
  R(13)&=R(1);
L8c02db7e:;
  R(4)=R(13);
  { ST32(R(12)+32,R(13)); goto L8c02dbfe; }
L8c02db84:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c02db8eu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(3)=0x120u;
  R(0)=0x4u;
  R(5)=LD32(R(4)+4);
  fp_ld(c,4,R(0)+R(15));
  R(5)=LD32(R(5));
  R(5)+=R(3);
  { fp_st(c,4,R(5)); goto L8c02dbfe; }
L8c02dbe0:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c02dbeau; R(5)=R(14); sh4_call(c,tg); }
  R(6)=LD32(R(15));
  R(14)=R(0);
  R(3)=0x114u;
  R(5)=R(15);
  R(4)=LD32(R(6)+4);
  R(4)=LD32(R(4));
  R(4)+=R(3);
  R(3)=0x8c05e6eau;
  { c->pr=0x8c02dbfeu; R(5)+=0x4u; f_8c05e6ea(c); }
L8c02dbfe:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02dbe0(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c02dbeau; R(5)=R(14); sh4_call(c,tg); }
  R(6)=LD32(R(15));
  R(14)=R(0);
  R(3)=0x114u;
  R(5)=R(15);
  R(4)=LD32(R(6)+4);
  R(4)=LD32(R(4));
  R(4)+=R(3);
  R(3)=0x8c05e6eau;
  { c->pr=0x8c02dbfeu; R(5)+=0x4u; f_8c05e6ea(c); }
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02dc0c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(13)=R(5);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02dc60;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02dc62; }
L8c02dc60:;
  ST32(R(15),R(4));
L8c02dc62:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(11)=LD32(R(13)+4);
  R(6)+=0x8u;
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+20);
  { uint32_t tg=R(11); c->pr=0x8c02dc72u; R(5)=R(13); sh4_call(c,tg); }
  R(13)=LD32(R(15)+8);
  R(11)=R(0);
  R(12)=0x8c048200u;
  R(0)=LD32(R(15)+4);
  R(13)+=0xffffffffu;
  R(1)=0x141u;
  R(0)-=R(1);
  R(1)=0xcu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02dd40;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02dc98u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02dc92u+R(0));  switch(tg){ case 0x8c02dcb0u: goto L8c02dcb0; case 0x8c02dcb4u: goto L8c02dcb4; case 0x8c02dcbeu: goto L8c02dcbe; case 0x8c02dcc8u: goto L8c02dcc8; case 0x8c02dcd2u: goto L8c02dcd2; case 0x8c02dcdcu: goto L8c02dcdc; case 0x8c02dce6u: goto L8c02dce6; case 0x8c02dcf0u: goto L8c02dcf0; case 0x8c02dcfau: goto L8c02dcfa; case 0x8c02dd04u: goto L8c02dd04; case 0x8c02dd0eu: goto L8c02dd0e; case 0x8c02dd18u: goto L8c02dd18; default: sh4_bad_jump(c,0x8c02dc8eu,tg); return; } }
L8c02dcb0:;
  { R(7)=0x1u; goto L8c02dcde; }
L8c02dcb4:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x1u;
  { R(4)=R(7); goto L8c02dd20; }
L8c02dcbe:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x1u;
  { R(4)=0x3u; goto L8c02dd20; }
L8c02dcc8:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x1u;
  { R(4)=0x2u; goto L8c02dd20; }
L8c02dcd2:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x2u;
  { R(4)=R(7); goto L8c02dd20; }
L8c02dcdc:;
  R(7)=0x2u;
L8c02dcde:;
  R(5)=R(14);
  R(6)=R(13);
  { R(4)=0x0u; goto L8c02dd20; }
L8c02dce6:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x2u;
  { R(4)=0x1u; goto L8c02dd20; }
L8c02dcf0:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x2u;
  { R(4)=0x3u; goto L8c02dd20; }
L8c02dcfa:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x0u;
  { R(4)=R(7); goto L8c02dd20; }
L8c02dd04:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x0u;
  { R(4)=0x3u; goto L8c02dd20; }
L8c02dd0e:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x0u;
  { R(4)=0x1u; goto L8c02dd20; }
L8c02dd18:;
  R(5)=R(14);
  R(4)=0x2u;
  R(7)=0x0u;
  R(6)=R(13);
L8c02dd20:;
  { uint32_t tg=R(12); c->pr=0x8c02dd24u;  sh4_call(c,tg); }
  {  goto L8c02dd48; }
L8c02dd40:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02dd48u; R(4)=0x28u; f_8c074080(c); }
L8c02dd48:;
  R(0)=R(11);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02dc60(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(11)=LD32(R(13)+4);
  R(6)+=0x8u;
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+20);
  { uint32_t tg=R(11); c->pr=0x8c02dc72u; R(5)=R(13); sh4_call(c,tg); }
  R(13)=LD32(R(15)+8);
  R(11)=R(0);
  R(12)=0x8c048200u;
  R(0)=LD32(R(15)+4);
  R(13)+=0xffffffffu;
  R(1)=0x141u;
  R(0)-=R(1);
  R(1)=0xcu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02dd40;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02dc98u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02dc92u+R(0));  switch(tg){ case 0x8c02dcb0u: goto L8c02dcb0; case 0x8c02dcb4u: goto L8c02dcb4; case 0x8c02dcbeu: goto L8c02dcbe; case 0x8c02dcc8u: goto L8c02dcc8; case 0x8c02dcd2u: goto L8c02dcd2; case 0x8c02dcdcu: goto L8c02dcdc; case 0x8c02dce6u: goto L8c02dce6; case 0x8c02dcf0u: goto L8c02dcf0; case 0x8c02dcfau: goto L8c02dcfa; case 0x8c02dd04u: goto L8c02dd04; case 0x8c02dd0eu: goto L8c02dd0e; case 0x8c02dd18u: goto L8c02dd18; default: sh4_bad_jump(c,0x8c02dc8eu,tg); return; } }
L8c02dcb0:;
  { R(7)=0x1u; goto L8c02dcde; }
L8c02dcb4:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x1u;
  { R(4)=R(7); goto L8c02dd20; }
L8c02dcbe:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x1u;
  { R(4)=0x3u; goto L8c02dd20; }
L8c02dcc8:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x1u;
  { R(4)=0x2u; goto L8c02dd20; }
L8c02dcd2:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x2u;
  { R(4)=R(7); goto L8c02dd20; }
L8c02dcdc:;
  R(7)=0x2u;
L8c02dcde:;
  R(5)=R(14);
  R(6)=R(13);
  { R(4)=0x0u; goto L8c02dd20; }
L8c02dce6:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x2u;
  { R(4)=0x1u; goto L8c02dd20; }
L8c02dcf0:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x2u;
  { R(4)=0x3u; goto L8c02dd20; }
L8c02dcfa:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x0u;
  { R(4)=R(7); goto L8c02dd20; }
L8c02dd04:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x0u;
  { R(4)=0x3u; goto L8c02dd20; }
L8c02dd0e:;
  R(5)=R(14);
  R(6)=R(13);
  R(7)=0x0u;
  { R(4)=0x1u; goto L8c02dd20; }
L8c02dd18:;
  R(5)=R(14);
  R(4)=0x2u;
  R(7)=0x0u;
  R(6)=R(13);
L8c02dd20:;
  { uint32_t tg=R(12); c->pr=0x8c02dd24u;  sh4_call(c,tg); }
  {  goto L8c02dd48; }
L8c02dd40:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02dd48u; R(4)=0x28u; f_8c074080(c); }
L8c02dd48:;
  R(0)=R(11);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02dd40(SH4Ctx *c) {
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02dd48u; R(4)=0x28u; f_8c074080(c); }
  R(0)=R(11);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02dd58(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(13)=R(5);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02dd7a;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02dd7c; }
L8c02dd7a:;
  ST32(R(15),R(4));
L8c02dd7c:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(6)+=0x8u;
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+20);
  { uint32_t tg=R(3); c->pr=0x8c02dd8cu; R(5)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(1)=0x14eu;
  R(0)=LD32(R(15)+4);
  R(5)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02dde0;
  R(1)=0x150u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ddea;
  R(1)=0x151u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ddf4;
  R(1)=0x152u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02ddfe;
  R(1)=0x14fu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02de08;
  R(1)=0x153u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02de12;
  {  goto L8c02de1c; }
L8c02dde0:;
  R(3)=0x8c047f28u;
  { c->pr=0x8c02dde6u; R(4)=R(14); f_8c047f28(c); }
  {  goto L8c02de24; }
L8c02ddea:;
  R(3)=0x8c047f9cu;
  { c->pr=0x8c02ddf0u; R(4)=R(14); f_8c047f9c(c); }
  {  goto L8c02de24; }
L8c02ddf4:;
  R(3)=0x8c047fb8u;
  { c->pr=0x8c02ddfau; R(4)=R(14); f_8c047fb8(c); }
  {  goto L8c02de24; }
L8c02ddfe:;
  R(3)=0x8c04800cu;
  { c->pr=0x8c02de04u; R(4)=R(14); f_8c04800c(c); }
  {  goto L8c02de24; }
L8c02de08:;
  R(3)=0x8c047f80u;
  { c->pr=0x8c02de0eu; R(4)=R(14); f_8c047f80(c); }
  {  goto L8c02de24; }
L8c02de12:;
  R(3)=0x8c048028u;
  { c->pr=0x8c02de18u; R(4)=R(14); f_8c048028(c); }
  {  goto L8c02de24; }
L8c02de1c:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02de24u; R(4)=0x28u; f_8c074080(c); }
L8c02de24:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02dde0(SH4Ctx *c) {
  R(3)=0x8c047f28u;
  { c->pr=0x8c02dde6u; R(4)=R(14); f_8c047f28(c); }
  {  goto L8c02de24; }
L8c02de24:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02de30(SH4Ctx *c) {
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
  if(c->t) goto L8c02de80;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02de82; }
L8c02de80:;
  ST32(R(15),R(4));
L8c02de82:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02de8cu; R(5)=R(14); sh4_call(c,tg); }
  R(14)=R(0);
  R(1)=0x155u;
  R(0)=LD32(R(15)+4);
  R(5)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c02dea8;
  R(1)=0x154u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02deb6;
  R(1)=0x156u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02decc;
  {  goto L8c02dec4; }
L8c02dea8:;
  R(4)=LD32(R(15));
  R(3)=0x8c043940u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c02deb2u; R(4)=LD32(R(4)); f_8c043940(c); }
  {  goto L8c02decc; }
L8c02deb6:;
  R(4)=LD32(R(15));
  R(3)=0x8c0480a0u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c02dec0u; R(4)=LD32(R(4)+20); f_8c0480a0(c); }
  {  goto L8c02decc; }
L8c02dec4:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c02deccu; R(4)=0x28u; f_8c074080(c); }
L8c02decc:;
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02df00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(6)=0x8c0c76fcu;
  R(14)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02df18;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02df1a; }
L8c02df18:;
  ST32(R(15),R(4));
L8c02df1a:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c02df24u; R(5)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(5)=R(0);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02df36;
  R(4)=LD32(R(15));
  R(2)=0xfffffffeu;
  R(6)=LD32(R(4)+48);
  { R(6)&=R(2); goto L8c02df3e; }
L8c02df36:;
  R(4)=LD32(R(15));
  R(2)=0x1u;
  R(6)=LD32(R(4)+48);
  R(6)|=R(2);
L8c02df3e:;
  R(4)=LD32(R(15));
  R(0)=R(5);
  ST32(R(4)+48,R(6));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02df4c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(6)=0x8c0c76fcu;
  R(14)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02df64;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02df66; }
L8c02df64:;
  ST32(R(15),R(4));
L8c02df66:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c02df70u; R(5)=R(14); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  ST8(R(15)+4,R(0));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02dfa2;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c02df86u;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02dfa2;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02df9a;
  R(2)=LD32(R(4)+8);
  R(3)=0x40000000u;
  { R(2)|=R(3); goto L8c02dfa0; }
L8c02df9a:;
  R(2)=LD32(R(4)+8);
  R(3)=0xbfffffffu;
  R(2)&=R(3);
L8c02dfa0:;
  ST32(R(4)+8,R(2));
L8c02dfa2:;
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02dfe0(SH4Ctx *c) {
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
  R(0)=0xffffff20u;
  R(15)+=R(0);
  R(12)=R(5);
  R(5)=0x8c0c76fcu;
  ST32(R(15)+8,R(4));
  R(14)=0x0u;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(13)=R(14);
  R(4)=LD32(R(5));
  c->fr[14]=0x00000000u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c02e01c; }
  ST32(R(15)+36,R(4));
  { ST32(R(5),R(14)); goto L8c02e020; }
L8c02e01c:;
  R(2)=LD32(R(15)+8);
  ST32(R(15)+36,R(2));
L8c02e020:;
  R(6)=0xd0u;
  R(5)=R(12);
  R(11)=LD32(R(15)+8);
  R(3)=LD32(R(12)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c02e02eu; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(12)+4); if(k) goto L8c02e040; }
  R(0)=0xd0u;
  { fp_ld(c,12,R(0)+R(15)); goto L8c02e04a; }
L8c02e040:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,12,3);
L8c02e04a:;
  R(6)=0xd0u;
  R(5)=R(12);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02e054u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02e0a0;
  R(0)=0xd0u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02e0a8; }
L8c02e0a0:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
L8c02e0a8:;
  R(0)=0x8c02e124u;
  R(6)=0xd0u;
  fp_ld(c,2,R(0));
  R(0)=0x48u;
  R(5)=R(12);
  R(6)+=R(15);
  fp_arith(c,2,3,2);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c02e0beu; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02e0ce;
  R(0)=0xd0u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02e0d6; }
L8c02e0ce:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
L8c02e0d6:;
  R(6)=0xd0u;
  R(0)=0x38u;
  R(5)=R(12);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(12)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c02e0e6u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(12)+4); if(k) goto L8c02e0f8; }
  R(0)=0xd0u;
  { fp_ld(c,13,R(0)+R(15)); goto L8c02e102; }
L8c02e0f8:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,13,3);
L8c02e102:;
  R(6)=0xd0u;
  R(5)=R(12);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02e10cu; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02e140;
  R(0)=0xd0u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c02e144; }
L8c02e140:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
L8c02e144:;
  R(6)=0xd0u;
  R(5)=R(12);
  ST32(R(15)+40,R(3));
  R(2)=LD32(R(12)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02e152u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xd0u;
  R(6)=0xd0u;
  R(5)=R(12);
  R(3)=LD32(R(12)+4);
  R(8)=LD32(R(15)+R(0));
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c02e164u; R(4)=R(11); sh4_call(c,tg); }
  R(1)=R(15);
  R(1)+=0x44u;
  ST32(R(1),R(0));
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  ST32(R(15)+52,R(3));
  R(2)=LD32(R(15)+40);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02e17c;
  R(2)=0x8c02f260u;
  {  goto L8c02f260; }
L8c02e17c:;
  R(0)=0xb4u;
  R(4)=0x8c123b08u;
  R(2)=0x8c0c50fcu;
  R(5)=LD32(R(4)+R(0));
  R(0)=0x40u;
  c->fpul=R(5);
  fp_float(c,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c02e250u;
  fp_ld(c,2,R(0));
  R(0)=0xbcu;
  R(3)=LD32(R(2));
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8c02e254u;
  c->t=(R(3)&R(3))==0;
  fp_arith(c,2,1,2);
  fp_arith(c,3,3,1);
  fp_ld(c,1,R(0));
  fp_arith(c,0,3,1);
  fp_ftrc(c,3);
  { uint32_t k=c->t; R(12)=c->fpul; if(k) goto L8c02e1ba; }
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1aeu; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e1ba;
  R(0)=0x8c02e260u;
  fp_ld(c,15,R(0));
  R(13)=0x1u;
L8c02e1ba:;
  R(2)=0x8c0c5100u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e1d6;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1c8u; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e1d6;
  R(0)=0x8c02e268u;
  fp_ld(c,3,R(0));
  R(13)=0x1u;
  fp_arith(c,0,15,3);
L8c02e1d6:;
  R(2)=0x8c0c5108u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e1f0;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1e4u; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e1f0;
  R(0)=0x8c02e268u;
  fp_ld(c,14,R(0));
  R(13)=0x1u;
L8c02e1f0:;
  R(2)=0x8c0c5104u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e20c;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1feu; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e20c;
  R(0)=0x8c02e260u;
  fp_ld(c,3,R(0));
  R(13)=0x1u;
  fp_arith(c,0,14,3);
L8c02e20c:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02e216;
  {  goto L8c02e2f4; }
L8c02e216:;
  R(3)=0x8c0c510cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02e280;
  R(2)=0x8c05bc94u;
  { c->pr=0x8c02e224u; R(4)=LD32(R(3)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e280;
  R(0)=0x8c02e278u;
  fp_ld(c,5,R(0));
  R(0)=0x8c02e254u;
  fp_ld(c,3,R(0));
  fp_arith(c,2,14,3);
  { fp_arith(c,2,15,3); goto L8c02e284; }
L8c02e280:;
  R(0)=0x8c02e320u;
  fp_ld(c,5,R(0));
L8c02e284:;
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
L8c02e2f4:;
  R(3)=0x8c0c5114u;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c02e306;
  R(2)=0x8c05bcb8u;
  { c->pr=0x8c02e302u; R(4)=LD32(R(3)); f_8c05bcb8(c); }
  { R(3)=R(0); goto L8c02e308; }
L8c02e306:;
  R(3)=0x0u;
L8c02e308:;
  R(2)=0x8c0c5118u;
  ST32(R(15),R(3));
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c02e340;
  R(3)=0x8c05bcb8u;
  { c->pr=0x8c02e318u; R(4)=LD32(R(2)); f_8c05bcb8(c); }
  { R(2)=R(0); goto L8c02e342; }
L8c02e340:;
  R(2)=0x0u;
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
L8c02f260:;
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
void f_8c02e0a0(SH4Ctx *c) {
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  R(0)=0x8c02e124u;
  R(6)=0xd0u;
  fp_ld(c,2,R(0));
  R(0)=0x48u;
  R(5)=R(12);
  R(6)+=R(15);
  fp_arith(c,2,3,2);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c02e0beu; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02e0ce;
  R(0)=0xd0u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02e0d6; }
L8c02e0ce:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
L8c02e0d6:;
  R(6)=0xd0u;
  R(0)=0x38u;
  R(5)=R(12);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(12)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c02e0e6u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(12)+4); if(k) goto L8c02e0f8; }
  R(0)=0xd0u;
  { fp_ld(c,13,R(0)+R(15)); goto L8c02e102; }
L8c02e0f8:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,13,3);
L8c02e102:;
  R(6)=0xd0u;
  R(5)=R(12);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02e10cu; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02e140;
  R(0)=0xd0u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c02e144; }
L8c02e140:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
L8c02e144:;
  R(6)=0xd0u;
  R(5)=R(12);
  ST32(R(15)+40,R(3));
  R(2)=LD32(R(12)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02e152u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xd0u;
  R(6)=0xd0u;
  R(5)=R(12);
  R(3)=LD32(R(12)+4);
  R(8)=LD32(R(15)+R(0));
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c02e164u; R(4)=R(11); sh4_call(c,tg); }
  R(1)=R(15);
  R(1)+=0x44u;
  ST32(R(1),R(0));
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  ST32(R(15)+52,R(3));
  R(2)=LD32(R(15)+40);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02e17c;
  R(2)=0x8c02f260u;
  {  goto L8c02f260; }
L8c02e17c:;
  R(0)=0xb4u;
  R(4)=0x8c123b08u;
  R(2)=0x8c0c50fcu;
  R(5)=LD32(R(4)+R(0));
  R(0)=0x40u;
  c->fpul=R(5);
  fp_float(c,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c02e250u;
  fp_ld(c,2,R(0));
  R(0)=0xbcu;
  R(3)=LD32(R(2));
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8c02e254u;
  c->t=(R(3)&R(3))==0;
  fp_arith(c,2,1,2);
  fp_arith(c,3,3,1);
  fp_ld(c,1,R(0));
  fp_arith(c,0,3,1);
  fp_ftrc(c,3);
  { uint32_t k=c->t; R(12)=c->fpul; if(k) goto L8c02e1ba; }
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1aeu; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e1ba;
  R(0)=0x8c02e260u;
  fp_ld(c,15,R(0));
  R(13)=0x1u;
L8c02e1ba:;
  R(2)=0x8c0c5100u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e1d6;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1c8u; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e1d6;
  R(0)=0x8c02e268u;
  fp_ld(c,3,R(0));
  R(13)=0x1u;
  fp_arith(c,0,15,3);
L8c02e1d6:;
  R(2)=0x8c0c5108u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e1f0;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1e4u; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e1f0;
  R(0)=0x8c02e268u;
  fp_ld(c,14,R(0));
  R(13)=0x1u;
L8c02e1f0:;
  R(2)=0x8c0c5104u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e20c;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1feu; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e20c;
  R(0)=0x8c02e260u;
  fp_ld(c,3,R(0));
  R(13)=0x1u;
  fp_arith(c,0,14,3);
L8c02e20c:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02e216;
  {  goto L8c02e2f4; }
L8c02e216:;
  R(3)=0x8c0c510cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02e280;
  R(2)=0x8c05bc94u;
  { c->pr=0x8c02e224u; R(4)=LD32(R(3)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e280;
  R(0)=0x8c02e278u;
  fp_ld(c,5,R(0));
  R(0)=0x8c02e254u;
  fp_ld(c,3,R(0));
  fp_arith(c,2,14,3);
  { fp_arith(c,2,15,3); goto L8c02e284; }
L8c02e280:;
  R(0)=0x8c02e320u;
  fp_ld(c,5,R(0));
L8c02e284:;
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
L8c02e2f4:;
  R(3)=0x8c0c5114u;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c02e306;
  R(2)=0x8c05bcb8u;
  { c->pr=0x8c02e302u; R(4)=LD32(R(3)); f_8c05bcb8(c); }
  { R(3)=R(0); goto L8c02e308; }
L8c02e306:;
  R(3)=0x0u;
L8c02e308:;
  R(2)=0x8c0c5118u;
  ST32(R(15),R(3));
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c02e340;
  R(3)=0x8c05bcb8u;
  { c->pr=0x8c02e318u; R(4)=LD32(R(2)); f_8c05bcb8(c); }
  { R(2)=R(0); goto L8c02e342; }
L8c02e340:;
  R(2)=0x0u;
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
L8c02f260:;
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
void f_8c02e140(SH4Ctx *c) {
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  R(6)=0xd0u;
  R(5)=R(12);
  ST32(R(15)+40,R(3));
  R(2)=LD32(R(12)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02e152u; R(4)=R(11); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0xd0u;
  R(6)=0xd0u;
  R(5)=R(12);
  R(3)=LD32(R(12)+4);
  R(8)=LD32(R(15)+R(0));
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c02e164u; R(4)=R(11); sh4_call(c,tg); }
  R(1)=R(15);
  R(1)+=0x44u;
  ST32(R(1),R(0));
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  ST32(R(15)+52,R(3));
  R(2)=LD32(R(15)+40);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02e17c;
  R(2)=0x8c02f260u;
  {  goto L8c02f260; }
L8c02e17c:;
  R(0)=0xb4u;
  R(4)=0x8c123b08u;
  R(2)=0x8c0c50fcu;
  R(5)=LD32(R(4)+R(0));
  R(0)=0x40u;
  c->fpul=R(5);
  fp_float(c,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c02e250u;
  fp_ld(c,2,R(0));
  R(0)=0xbcu;
  R(3)=LD32(R(2));
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8c02e254u;
  c->t=(R(3)&R(3))==0;
  fp_arith(c,2,1,2);
  fp_arith(c,3,3,1);
  fp_ld(c,1,R(0));
  fp_arith(c,0,3,1);
  fp_ftrc(c,3);
  { uint32_t k=c->t; R(12)=c->fpul; if(k) goto L8c02e1ba; }
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1aeu; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e1ba;
  R(0)=0x8c02e260u;
  fp_ld(c,15,R(0));
  R(13)=0x1u;
L8c02e1ba:;
  R(2)=0x8c0c5100u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e1d6;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1c8u; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e1d6;
  R(0)=0x8c02e268u;
  fp_ld(c,3,R(0));
  R(13)=0x1u;
  fp_arith(c,0,15,3);
L8c02e1d6:;
  R(2)=0x8c0c5108u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e1f0;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1e4u; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e1f0;
  R(0)=0x8c02e268u;
  fp_ld(c,14,R(0));
  R(13)=0x1u;
L8c02e1f0:;
  R(2)=0x8c0c5104u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02e20c;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c02e1feu; R(4)=LD32(R(2)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e20c;
  R(0)=0x8c02e260u;
  fp_ld(c,3,R(0));
  R(13)=0x1u;
  fp_arith(c,0,14,3);
L8c02e20c:;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02e216;
  {  goto L8c02e2f4; }
L8c02e216:;
  R(3)=0x8c0c510cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02e280;
  R(2)=0x8c05bc94u;
  { c->pr=0x8c02e224u; R(4)=LD32(R(3)); f_8c05bc94(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02e280;
  R(0)=0x8c02e278u;
  fp_ld(c,5,R(0));
  R(0)=0x8c02e254u;
  fp_ld(c,3,R(0));
  fp_arith(c,2,14,3);
  { fp_arith(c,2,15,3); goto L8c02e284; }
L8c02e280:;
  R(0)=0x8c02e320u;
  fp_ld(c,5,R(0));
L8c02e284:;
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
L8c02e2f4:;
  R(3)=0x8c0c5114u;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c02e306;
  R(2)=0x8c05bcb8u;
  { c->pr=0x8c02e302u; R(4)=LD32(R(3)); f_8c05bcb8(c); }
  { R(3)=R(0); goto L8c02e308; }
L8c02e306:;
  R(3)=0x0u;
L8c02e308:;
  R(2)=0x8c0c5118u;
  ST32(R(15),R(3));
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c02e340;
  R(3)=0x8c05bcb8u;
  { c->pr=0x8c02e318u; R(4)=LD32(R(2)); f_8c05bcb8(c); }
  { R(2)=R(0); goto L8c02e342; }
L8c02e340:;
  R(2)=0x0u;
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
L8c02f260:;
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
