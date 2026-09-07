// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040DCC4
extern "C" void YellowAuto_0040dcc4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model10CharaModel14ResetNeckAngleEj");
extern "C" void YellowAuto_0040dcc4(uint8_t* arg0, uint32_t arg1) {
*(float *)(arg0 + 0xf8) = (*(uint32_t *)(arg0 + 0x108) != 0) ? ((((*(float *)(arg0 + 0x100) - *(float *)(arg0 + 0xf8)) * (float)*(uint32_t *)(arg0 + 0x10c)) / (float)*(uint32_t *)(arg0 + 0x108)) + *(float *)(arg0 + 0xf8)) : *(float *)0x0040dd50; *(float *)(arg0 + 0xfc) = (*(uint32_t *)(arg0 + 0x108) != 0) ? ((((*(float *)(arg0 + 0x104) - *(float *)(arg0 + 0xfc)) * (float)*(uint32_t *)(arg0 + 0x10c)) / (float)*(uint32_t *)(arg0 + 0x108)) + *(float *)(arg0 + 0xfc)) : *(float *)0x0040dd50; *(uint32_t *)(arg0 + 0x108) = arg1; *(uint32_t *)(arg0 + 0x10c) = 0; *(float *)(arg0 + 0x100) = *(float *)0x0040dd50; *(float *)(arg0 + 0x104) = *(float *)0x0040dd50;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040E0D4
uint8_t *BaseModel(uint8_t *, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_0040e0d4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN7poke_3d5model10CharaModelC1Ev");
extern "C" void YellowAuto_0040e0d4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
BaseModel(arg0, arg1, arg2, arg3); *(uint32_t *)arg0 = *(uint32_t *)0x0040e144; *(uint32_t *)(arg0 + 0xd8) = 0; *(uint32_t *)(arg0 + 0xf4) = 0xffffffff; *(uint8_t *)(arg0 + 0xdc) = 0; *(uint8_t *)(arg0 + 0xdd) = 0; *(uint8_t *)(arg0 + 0xde) = 0; *(uint8_t *)(arg0 + 0xdf) = 0; *(uint8_t *)(arg0 + 0xe0) = 0; *(uint8_t *)(arg0 + 0xe1) = 0; *(uint32_t *)(arg0 + 0xe4) = 0; *(uint32_t *)(arg0 + 0xe8) = 0; *(uint8_t *)(arg0 + 0xec) = 0; *(uint8_t *)(arg0 + 0xed) = 0; *(uint32_t *)(arg0 + 0xf0) = 0; *(float *)(arg0 + 0xf8) = *(float *)0x0040e148; *(float *)(arg0 + 0xfc) = *(float *)0x0040e148; *(float *)(arg0 + 0x100) = *(float *)0x0040e148; *(float *)(arg0 + 0x104) = *(float *)0x0040e148; *(uint32_t *)(arg0 + 0x108) = 0; *(uint32_t *)(arg0 + 0x10c) = 0; *(uint32_t *)(arg0 + 0x110) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040DAD8
extern "C" void YellowAuto_0040dad8(uint8_t* arg0) __asm__("_ZN7poke_3d5model10CharaModel11UpdateMouthEv");
extern "C" void YellowAuto_0040dad8(uint8_t* arg0) {
uint8_t cur = arg0[0xEC];
uint8_t old = arg0[0xED];
if (cur == old) return;
arg0[0xED] = cur;
if (cur == 0) {
((void (*)(uint8_t*, void*, uint32_t))*(void**)((uint8_t*)*(void**)arg0 + 0x6C))(arg0, (void*)0, 10);
return;
}
if (old == 0) {
((void (*)(uint8_t*, void*, uint32_t))*(void**)((uint8_t*)*(void**)arg0 + 0x6C))(arg0, *(void**)(arg0 + 0xE8), 10);
((void (*)(uint8_t*, uint32_t, uint32_t))*(void**)((uint8_t*)*(void**)arg0 + 0x70))(arg0, 0, 10);
}
((void (*)(uint8_t*, int32_t, uint32_t))*(void**)((uint8_t*)*(void**)arg0 + 0x74))(arg0, (int32_t)(cur - 1) * 10, 10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040E01C
void func_0040DD74(uint8_t*);
extern "C" void YellowAuto_0040e01c(uint8_t* arg0) __asm__("_ZN7poke_3d5model10CharaModel9UpdateEyeEv");
extern "C" void YellowAuto_0040e01c(uint8_t* arg0) {
if (arg0[0xDE] == 1 || arg0[0xDE] == 2) func_0040DD74(arg0);
uint8_t cur = arg0[0xDC];
uint8_t old = arg0[0xDD];
if (cur == old) return;
arg0[0xDD] = cur;
if (cur == 0) {
((void (*)(uint8_t*, void*, uint32_t))*(void**)((uint8_t*)*(void**)arg0 + 0x6C))(arg0, (void*)0, 9);
return;
}
if (old == 0) {
((void (*)(uint8_t*, void*, uint32_t))*(void**)((uint8_t*)*(void**)arg0 + 0x6C))(arg0, *(void**)(arg0 + 0xD8), 9);
((void (*)(uint8_t*, uint32_t, uint32_t))*(void**)((uint8_t*)*(void**)arg0 + 0x70))(arg0, 0, 9);
}
((void (*)(uint8_t*, int32_t, uint32_t))*(void**)((uint8_t*)*(void**)arg0 + 0x74))(arg0, (int32_t)(cur - 1) * 10, 9);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040DCBC
extern "C" void YellowAuto_0040dcbc(uint8_t* arg0, uint8_t arg1) __asm__("_ZN7poke_3d5model10CharaModel13SetMouthIndexENS1_10MouthIndexE");
extern "C" void YellowAuto_0040dcbc(uint8_t* arg0, uint8_t arg1) {
arg0[0xEC] = arg1;
}
#endif
