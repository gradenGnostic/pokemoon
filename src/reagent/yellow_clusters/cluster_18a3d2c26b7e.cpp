// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0017A54C
void FUN_002feaa8(void*, uint32_t);
extern "C" void YellowAuto_0017a54c(void* arg0) __asm__("_ZN2nn3nex10RootObjectdlEPv");
extern "C" void YellowAuto_0017a54c(void* arg0) {
if (arg0 == 0) return; if (*(uint32_t *)((uint8_t *)arg0 - 8u) != 0u) ((void (*)())*(uint32_t *)((uint8_t *)arg0 - 8u))(); else FUN_002feaa8((void *)((uint8_t *)arg0 - 8u), 0u);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0017A570
void* YellowAuto_00190d9c(uint32_t);
extern "C" void* YellowAuto_0017a570(uint32_t arg0) __asm__("_ZN2nn3nex10RootObjectnwEj");
extern "C" void* YellowAuto_0017a570(uint32_t arg0) {
return YellowAuto_00190d9c(arg0);
}
#endif
