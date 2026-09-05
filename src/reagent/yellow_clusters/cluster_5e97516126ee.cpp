// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E2E0
void FUN_0045e30c(uint8_t *, uint16_t, const void *, const void *, uint32_t);
extern "C" void YellowAuto_0045e2e0(uint8_t* arg0, uint16_t arg1, const void* arg2, uint32_t arg3) __asm__("_ZN9NetAppLib4Util30NetAppPokemonValidationUtility6VerifyEN6NetLib10Validation17PokemonValidation8GameModeEPKN3pml8pokepara9CoreParamEj");
extern "C" void YellowAuto_0045e2e0(uint8_t* arg0, uint16_t arg1, const void* arg2, uint32_t arg3) {
FUN_0045e30c(arg0, arg1, (const void *)0, arg2, arg3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E4E8
void __aeabi_memclr(void *, uint32_t);
extern "C" uint8_t* YellowAuto_0045e4e8(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib4Util30NetAppPokemonValidationUtilityC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_0045e4e8(uint8_t* arg0, void* arg1) {
*(uint32_t *)arg0 = 0x0045e534u; *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 16) = 0; *(uint32_t *)(arg0 + 20) = 0; *(uint8_t *)(arg0 + 24) = 0; *(void **)(arg0 + 4) = arg1; __aeabi_memclr(arg0 + 25, 0x100u); *(uint32_t *)(arg0 + 284) = 0; *(uint8_t *)(arg0 + 288) = 0; *(uint32_t *)(arg0 + 292) = 0; return arg0;
}
#endif
