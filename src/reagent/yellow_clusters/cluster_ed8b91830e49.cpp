// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438568
extern "C" uint8_t YellowAuto_00438568(const uint8_t* arg0, int32_t arg1) __asm__("_ZN8Savedata10ResortSave15GetPokeBeansNumENS0_13PokeBeansEnumE");
extern "C" uint8_t YellowAuto_00438568(const uint8_t* arg0, int32_t arg1) {
return *(uint8_t *)(arg0 + arg1 + 0x5650);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043892C
extern "C" uint8_t YellowAuto_0043892c(const uint8_t* arg0, int32_t arg1) __asm__("_ZN8Savedata10ResortSave16GetGimStartValueEh");
extern "C" uint8_t YellowAuto_0043892c(const uint8_t* arg0, int32_t arg1) {
return *(uint8_t *)(arg0 + arg1 + 0x570d);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438AA8
extern "C" bool YellowAuto_00438aa8(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata10ResortSave17GetResortProgressENS0_19ResortTutorialStateE");
extern "C" bool YellowAuto_00438aa8(const uint8_t* arg0, uint32_t arg1) {
return (*(uint32_t *)(arg0 + 0x5644) & arg1) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004381D4
extern "C" bool YellowAuto_004381d4(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave14CheckUpdateFlgEv");
extern "C" bool YellowAuto_004381d4(uint8_t* arg0) {
uint16_t v = *(uint16_t *)(arg0 + 0x55d6); *(uint16_t *)(arg0 + 0x55d6) = 0; return v != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438C24
extern "C" bool YellowAuto_00438c24(const uint8_t* arg0, int32_t arg1) __asm__("_ZN8Savedata10ResortSave18IsNewHotSpaPokemonEi");
extern "C" bool YellowAuto_00438c24(const uint8_t* arg0, int32_t arg1) {
return *(uint8_t *)(arg0 + arg1 * 0xec + 0x4628) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004389E8
extern "C" void YellowAuto_004389e8(uint8_t* arg0, uint8_t arg1, uint8_t arg2) __asm__("_ZN8Savedata10ResortSave16SetGimStartValueEhh");
extern "C" void YellowAuto_004389e8(uint8_t* arg0, uint8_t arg1, uint8_t arg2) {
*(uint8_t *)(arg0 + arg1 + 0x570d) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438B34
extern "C" void YellowAuto_00438b34(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata10ResortSave17SetResortProgressENS0_19ResortTutorialStateE");
extern "C" void YellowAuto_00438b34(uint8_t* arg0, uint32_t arg1) {
*(uint32_t *)(arg0 + 0x5644) |= arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438348
extern "C" void YellowAuto_00438348(uint8_t* arg0, int32_t arg1, uint8_t arg2) __asm__("_ZN8Savedata10ResortSave14SetGroundBeansEih");
extern "C" void YellowAuto_00438348(uint8_t* arg0, int32_t arg1, uint8_t arg2) {
*(uint8_t *)(arg0 + arg1 + 0x5689) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438388
extern "C" void YellowAuto_00438388(uint8_t* arg0, int32_t arg1, uint8_t arg2) __asm__("_ZN8Savedata10ResortSave14SetResortLevelENS0_14PokeResortKindEh");
extern "C" void YellowAuto_00438388(uint8_t* arg0, int32_t arg1, uint8_t arg2) {
*(uint8_t *)(arg0 + arg1 + 0x565f) = arg2;
}
#endif
