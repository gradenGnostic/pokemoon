// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CDEEC
extern "C" void YellowAuto_002cdeec(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3App4Tool11SlideScroll12SetTouchAreaEffff");
extern "C" void YellowAuto_002cdeec(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
uint32_t u1 = arg1;
uint32_t exp1 = (u1 >> 23) & 0xFFU;
uint32_t mant1 = u1 & 0x7FFFFFU;
bool neg1 = (u1 >> 31) != 0U;
int32_t c1 = 0;
if (exp1 == 0xFFU) { c1 = (int32_t)0x80000000U; } else if (exp1 == 0U) { c1 = 0; } else { int32_t e1 = (int32_t)exp1 - 127; uint32_t m1 = mant1 | 0x800000U; if (e1 < 0) { c1 = 0; } else if (e1 >= 31) { c1 = (int32_t)0x80000000U; } else { uint32_t mag1 = 0U; if (e1 < 23) { mag1 = m1 >> (23 - e1); } else { mag1 = m1 << (e1 - 23); } if (!neg1) { if (mag1 > 0x7FFFFFFFU) { c1 = (int32_t)0x80000000U; } else { c1 = (int32_t)mag1; } } else { if (mag1 >= 0x80000000U) { c1 = (int32_t)0x80000000U; } else { c1 = -(int32_t)mag1; } } } }
uint32_t u2 = arg2;
uint32_t exp2 = (u2 >> 23) & 0xFFU;
uint32_t mant2 = u2 & 0x7FFFFFU;
bool neg2 = (u2 >> 31) != 0U;
int32_t c2 = 0;
if (exp2 == 0xFFU) { c2 = (int32_t)0x80000000U; } else if (exp2 == 0U) { c2 = 0; } else { int32_t e2 = (int32_t)exp2 - 127; uint32_t m2 = mant2 | 0x800000U; if (e2 < 0) { c2 = 0; } else if (e2 >= 31) { c2 = (int32_t)0x80000000U; } else { uint32_t mag2 = 0U; if (e2 < 23) { mag2 = m2 >> (23 - e2); } else { mag2 = m2 << (e2 - 23); } if (!neg2) { if (mag2 > 0x7FFFFFFFU) { c2 = (int32_t)0x80000000U; } else { c2 = (int32_t)mag2; } } else { if (mag2 >= 0x80000000U) { c2 = (int32_t)0x80000000U; } else { c2 = -(int32_t)mag2; } } } }
uint32_t u3 = arg3;
uint32_t exp3 = (u3 >> 23) & 0xFFU;
uint32_t mant3 = u3 & 0x7FFFFFU;
bool neg3 = (u3 >> 31) != 0U;
int32_t c3 = 0;
if (exp3 == 0xFFU) { c3 = (int32_t)0x80000000U; } else if (exp3 == 0U) { c3 = 0; } else { int32_t e3 = (int32_t)exp3 - 127; uint32_t m3 = mant3 | 0x800000U; if (e3 < 0) { c3 = 0; } else if (e3 >= 31) { c3 = (int32_t)0x80000000U; } else { uint32_t mag3 = 0U; if (e3 < 23) { mag3 = m3 >> (23 - e3); } else { mag3 = m3 << (e3 - 23); } if (!neg3) { if (mag3 > 0x7FFFFFFFU) { c3 = (int32_t)0x80000000U; } else { c3 = (int32_t)mag3; } } else { if (mag3 >= 0x80000000U) { c3 = (int32_t)0x80000000U; } else { c3 = -(int32_t)mag3; } } } }
uint32_t u4 = arg4;
uint32_t exp4 = (u4 >> 23) & 0xFFU;
uint32_t mant4 = u4 & 0x7FFFFFU;
bool neg4 = (u4 >> 31) != 0U;
int32_t c4 = 0;
if (exp4 == 0xFFU) { c4 = (int32_t)0x80000000U; } else if (exp4 == 0U) { c4 = 0; } else { int32_t e4 = (int32_t)exp4 - 127; uint32_t m4 = mant4 | 0x800000U; if (e4 < 0) { c4 = 0; } else if (e4 >= 31) { c4 = (int32_t)0x80000000U; } else { uint32_t mag4 = 0U; if (e4 < 23) { mag4 = m4 >> (23 - e4); } else { mag4 = m4 << (e4 - 23); } if (!neg4) { if (mag4 > 0x7FFFFFFFU) { c4 = (int32_t)0x80000000U; } else { c4 = (int32_t)mag4; } } else { if (mag4 >= 0x80000000U) { c4 = (int32_t)0x80000000U; } else { c4 = -(int32_t)mag4; } } } }
*(uint16_t*)(arg0 + 0x14) = (uint16_t)(0x78 - c1);
*(uint16_t*)(arg0 + 0x16) = (uint16_t)(0x78 - c2);
*(uint16_t*)(arg0 + 0x18) = (uint16_t)(c3 + 0xA0);
*(uint16_t*)(arg0 + 0x1A) = (uint16_t)(c4 + 0xA0);
return;
}
#endif
