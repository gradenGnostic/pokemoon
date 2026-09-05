// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D098C
int32_t FUN_0027ecec(const uint8_t*, const uint8_t*, uint32_t, const uint8_t*, uint32_t);
extern "C" int32_t YellowAuto_003d098c(const uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) __asm__("_ZN6NetLib10Validation17PokemonValidation18CheckRsaValidationEjPKhj");
extern "C" int32_t YellowAuto_003d098c(const uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) {
return (((int32_t)FUN_0027ecec(arg0 + 0x15e4, arg0 + 0x10e, (((*(const uint16_t*)(arg0 + 0x10c) == 0x100) || (*(const uint16_t*)(arg0 + 0x10c) == 0x700)) ? 0x190u : 0xE8u) * arg1, arg2, arg3)) >> 31) + 1;
}
#endif
