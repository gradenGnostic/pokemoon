// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FB390
void helper_3e8640(uint8_t*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
extern "C" void YellowAuto_002fb390(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) __asm__("_ZN3app4tool22PokeSimpleModelInFrame11InitInFrameEN6System6Camera13CModelInFrame7EScreenENS3_19CModelViewerInFrame14ETurnDirectionENS6_13EDrawPositionE");
extern "C" void YellowAuto_002fb390(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) {
helper_3e8640(arg0 + 0x4C, arg1, 0, 0, 0xF0, 0xF0, arg2);
arg0[0x4E] = arg3;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FB3CC
uint32_t callee_003e8f44(uint8_t*, int32_t, int32_t, int32_t, int32_t);
extern "C" uint32_t YellowAuto_002fb3cc(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __asm__("_ZN3app4tool22PokeSimpleModelInFrame15SetInFrameFrameEiiii");
extern "C" uint32_t YellowAuto_002fb3cc(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
return callee_003e8f44(arg0 + 0x4C, arg1, arg2, arg3, arg4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FB474
void callee_002f16f0(uint8_t*, const void*);
void callee_003e8fa8(uint8_t*);
void callee_003e7f18(uint8_t*);
void callee_003084e8(int32_t, uint8_t, uint8_t*, uint32_t);
extern "C" uint8_t* YellowAuto_002fb474(uint8_t* arg0, const void* arg1) __asm__("_ZN3app4tool22PokeSimpleModelInFrameC1ERKNS0_15PokeSimpleModel15_tag_init_paramE");
extern "C" uint8_t* YellowAuto_002fb474(uint8_t* arg0, const void* arg1) {
callee_002f16f0(arg0, arg1);
callee_003e8fa8(arg0 + 0x4C);
callee_003e7f18(arg0 + 0xE4);
callee_003084e8(*(int32_t*)(arg0 + 0x2C), *(uint8_t*)(arg0 + 0x24), arg0 + 0xE4, *(uint32_t*)(arg0 + 0x28));
return arg0;
}
#endif
