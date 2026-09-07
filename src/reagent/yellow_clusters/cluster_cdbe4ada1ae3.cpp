// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B6DC
extern "C" void YellowAuto_0043b6dc(uint8_t* arg0, uint16_t arg1) __asm__("_ZN8Savedata14PokeFinderSave16SetCameraVersionEt");
extern "C" void YellowAuto_0043b6dc(uint8_t* arg0, uint16_t arg1) {
if (arg1 > 4) arg1 = 4;
*(uint16_t *)(arg0 + 4) = arg1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B6EC
uint16_t v;
extern "C" void YellowAuto_0043b6ec(uint8_t* arg0, uint16_t arg1, bool arg2) __asm__("_ZN8Savedata14PokeFinderSave16SetTutorialFlagsEtb");
extern "C" void YellowAuto_0043b6ec(uint8_t* arg0, uint16_t arg1, bool arg2) {
if (arg2 == 0) v = *(uint16_t *)(arg0 + 0x18) & (uint16_t)~arg1;
else v = arg1 | *(uint16_t *)(arg0 + 0x18);
*(uint16_t *)(arg0 + 0x18) = v;
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B694
extern "C" void YellowAuto_0043b694(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata14PokeFinderSave13AddTotalValueEj");
extern "C" void YellowAuto_0043b694(uint8_t* arg0, uint32_t arg1) {
uint32_t v0 = *(uint32_t*)(arg0 + 0x10); uint32_t v1 = *(uint32_t*)0x0043B6C0; uint32_t v2 = v0 + arg1; if (v2 <= v1) *(uint32_t*)(arg0 + 0x10) = v2; else *(uint32_t*)(arg0 + 0x10) = v1; uint32_t v3 = *(uint32_t*)(arg0 + 0x14); if (v3 <= arg1) v3 = arg1; *(uint32_t*)(arg0 + 0x14) = v3;
}
#endif
