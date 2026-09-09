// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D08F0
bool FUN_003D100C(const uint16_t* arg0, uint32_t arg1);
void FUN_00100D28(uint16_t* arg0, const uint16_t* arg1, uint32_t arg2);
void FUN_003D08F0(uint16_t* arg0, uint32_t arg1, uint32_t arg2);
extern "C" void YellowAuto_003d08f0(uint16_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN6NetLib10Validation17PokemonValidation17ReplacePlayerNameEPwhh");
extern "C" void YellowAuto_003d08f0(uint16_t* arg0, uint32_t arg1, uint32_t arg2) {
if (FUN_003D100C(arg0, 0x0Du)) FUN_00100D28(arg0, (const uint16_t*)*(const void* const*)(0x003D0988 + ((arg2 == 0x1fu) ? 0x1B4u : 0x188u) + ((arg1 > 10u) ? 2u : arg1) * 4u), 0x0Cu);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D1134
void __aeabi_memclr(void* arg0, uint32_t arg1);
void __aeabi_memclr4(void* arg0, uint32_t arg1);
void* FUN_003576A8(void);
void FUN_003E6084(void* arg0, uint8_t* arg1);
uint8_t* FUN_003D1134(uint8_t* arg0);
extern "C" uint8_t* YellowAuto_003d1134(uint8_t* arg0) __asm__("_ZN6NetLib10Validation17PokemonValidationC1Ev");
extern "C" uint8_t* YellowAuto_003d1134(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0x0) = *(const uint32_t*)0x003D1224; *(uint32_t*)(arg0 + 0x4) = *(const uint32_t*)0x003D1224 + 0x20u; arg0[0x8] = 0; arg0[0x9] = 0; __aeabi_memclr((void*)(arg0 + 0xAu), *(const uint32_t*)0x003D1228); *(uint16_t*)(arg0 + 0xAu + *(const uint32_t*)0x003D122Cu) = 0; __aeabi_memclr4((void*)(arg0 + 0x10Eu), 0x12C0u); *(uint32_t*)(arg0 + 0x13D0u) = 0; *(uint32_t*)(arg0 + 0x13D4u) = 0; *(uint32_t*)(arg0 + 0x13D8u) = 0; *(uint32_t*)(arg0 + 0x13DCu) = 0; *(uint32_t*)(arg0 + 0x13E0u) = 0; *(uint32_t*)(arg0 + 0x15E4u) = *(const uint32_t*)0x003D1230; *(uint32_t*)(arg0 + 0x15ECu) = 0; arg0[0x15F4u] = 0; *(uint32_t*)(arg0 + *(const uint32_t*)0x003D1234) = 0; *(uint32_t*)(arg0 + *(const uint32_t*)0x003D1234 + 4u) = 0; *(uint32_t*)(arg0 + 0x1600u) = 0; *(uint32_t*)(arg0 + 0x1604u) = *(const uint32_t*)0x003D1238; *(uint32_t*)(arg0 + 0x1608u) = 0; *(uint32_t*)(arg0 + *(const uint32_t*)0x003D123Cu) = 0; arg0[*(const uint32_t*)0x003D123Cu + 0x204u] = 0; *(uint32_t*)(arg0 + *(const uint32_t*)0x003D123Cu + 0x208u) = 0; *(uint32_t*)(arg0 + *(const uint32_t*)0x003D123Cu + 0x20Cu) = 0; __aeabi_memclr4((void*)(arg0 + 0x160Cu), 0x1300u); __aeabi_memclr4((void*)(arg0 + 0x2910u), 0x200u); FUN_003E6084(FUN_003576A8(), (uint8_t*)(arg0 + 0x4)); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D0F78
void FUN_003D9998(uint32_t arg0, uint8_t* arg1);
void FUN_003D99DC(uint32_t arg0);
void FUN_0027F0C0(uint8_t* arg0);
void GflHeapFreeMemoryBlock(uint32_t arg0);
void FUN_003D0F78(uint8_t* arg0);
extern "C" void YellowAuto_003d0f78(uint8_t* arg0) __asm__("_ZN6NetLib10Validation17PokemonValidation8FinalizeEv");
extern "C" void YellowAuto_003d0f78(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 0x8) != 0 && *(uint32_t*)(arg0 + 0x15FCu) != 0) FUN_003D9998(*(uint32_t*)(arg0 + 0x15FCu), arg0), FUN_003D99DC(*(uint32_t*)(arg0 + 0x15FCu)); if (*(uint8_t*)(arg0 + 0x8) != 0) FUN_0027F0C0((uint8_t*)(arg0 + 0x15E4u)), *(uint8_t*)(arg0 + 0x8) = 0; if (*(uint32_t*)(arg0 + 0x15FCu) != 0) GflHeapFreeMemoryBlock(*(uint32_t*)(arg0 + 0x15FCu)), *(uint32_t*)(arg0 + 0x15FCu) = 0; if (*(uint32_t*)(arg0 + 0x13D0u) != 0) GflHeapFreeMemoryBlock(*(uint32_t*)(arg0 + 0x13D0u)), *(uint32_t*)(arg0 + 0x13D0u) = 0; if (*(uint32_t*)(arg0 + 0x13D4u) != 0) GflHeapFreeMemoryBlock(*(uint32_t*)(arg0 + 0x13D4u)), *(uint32_t*)(arg0 + 0x13D4u) = 0; *(uint32_t*)(arg0 + 0x13E0u) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D03D8
void* __aeabi_memcpy(void* arg0, const void* arg1, uint32_t arg2);
bool FUN_003D03D8(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3);
extern "C" bool YellowAuto_003d03d8(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3) __asm__("_ZN6NetLib10Validation17PokemonValidation10SetPokemonEjPN6NetApp3GTS12GtsIndexDataEPNS3_24GtsSerializePokemonParamE");
extern "C" bool YellowAuto_003d03d8(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3) {
if (11u < arg1) return 0; if ((*(uint16_t*)(arg0 + 0x10Cu) == 0x100u) || (*(uint16_t*)(arg0 + 0x10Cu) == 0x700u)) __aeabi_memcpy((void*)(arg0 + arg1 * 400u + 0x10Eu), arg2, 0xA8u), __aeabi_memcpy((void*)(arg0 + arg1 * 400u + 0x1B6u), arg3, 0xE8u); else __aeabi_memcpy((void*)(arg0 + arg1 * 0xE8u + 0x10Eu), arg3, 0xE8u); return 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D0C84
extern "C" void YellowAuto_003d0c84(uint8_t* arg0, void* arg1) __asm__("_ZN6NetLib10Validation17PokemonValidation28SetPokemonValidationListenerEPNS0_25PokemonValidationListenerE");
extern "C" void YellowAuto_003d0c84(uint8_t* arg0, void* arg1) {
*(void**)(arg0 + 0x13E0) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D05DC
int32_t FUN_003d100c(uint16_t*, uint32_t);
uint16_t FUN_003147d4(uint16_t*, uint32_t);
extern "C" uint16_t YellowAuto_003d05dc(uint16_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN6NetLib10Validation17PokemonValidation15ReplaceMonsNameEPwh6MonsNo");
extern "C" uint16_t YellowAuto_003d05dc(uint16_t* arg0, uint32_t arg1, uint32_t arg2) {
if (FUN_003d100c(arg0, 13) == 0) return 0; return FUN_003147d4(arg0, arg2);
}
#endif
