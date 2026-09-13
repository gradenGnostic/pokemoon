// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E9F3C
uint8_t* func_003E9F78_context();
void GFLassertStop();
uint32_t func_00108208(uint32_t, uint32_t, uint32_t, uint32_t);
void func_0053b02c(uint8_t*);
uint32_t func_0011704c_mod(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_003e9f3c(uint32_t arg0, uint32_t arg1) __asm__("_ZN6System6GflUse13GetPublicRandEj");
extern "C" uint32_t YellowAuto_003e9f3c(uint32_t arg0, uint32_t arg1) {
uint8_t* ctx = func_003E9F78_context(); if (ctx == (uint8_t*)0) { GFLassertStop(); ctx = func_003E9F78_context(); } uint32_t idx = *(uint32_t*)(ctx + (uint32_t)0x9C0); if ((idx & (uint32_t)1) != (uint32_t)0) { idx = func_00108208(idx, arg1, arg0, (uint32_t)0); } if ((int32_t)idx >= (int32_t)0x270) { func_0053b02c(ctx); *(uint32_t*)(ctx + (uint32_t)0x9C0) = (uint32_t)0; idx = (uint32_t)0; } int32_t half = (int32_t)idx / (int32_t)2; uint8_t* p = ctx + (uint32_t)((int32_t)half * (int32_t)8); uint32_t lo = *(uint32_t*)p; uint32_t hi = *(uint32_t*)(p + (uint32_t)4); *(uint32_t*)(ctx + (uint32_t)0x9C0) = idx + (uint32_t)2; return func_0011704c_mod(lo, hi, arg0, (uint32_t)0);
}
#endif
