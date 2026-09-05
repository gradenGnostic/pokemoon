// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010366A
bool is(const uint8_t*, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_0010366a(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNKSt5ctypeIcE10do_tolowerEc");
extern "C" uint32_t YellowAuto_0010366a(const uint8_t* arg0, uint32_t arg1) {
if (is(arg0, 8, arg1)) return (uint32_t)*(const uint8_t *)(*(const uint32_t *)(arg0 + 0x30) + (arg1 - *(const uint32_t *)(arg0 + 0x24)));
return arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001036B8
bool is(const uint8_t*, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_001036b8(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNKSt5ctypeIcE10do_toupperEc");
extern "C" uint32_t YellowAuto_001036b8(const uint8_t* arg0, uint32_t arg1) {
if (is(arg0, 16, arg1)) return (uint32_t)*(const uint8_t *)(*(const uint32_t *)(arg0 + 0x2c) + (arg1 - *(const uint32_t *)(arg0 + 0x1c)));
return arg1;
}
#endif
