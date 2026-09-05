// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003017AC
extern "C" void YellowAuto_003017ac(uint8_t* arg0, const void* arg1) __asm__("_ZNSsC2ERKSaIcE");
extern "C" void YellowAuto_003017ac(uint8_t* arg0, const void* arg1) {
*(uint32_t *)arg0 = *(const uint32_t *)0x003017b8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302F50
uint8_t* sub_001041e4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6);
extern "C" uint8_t* YellowAuto_00302f50(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4) __asm__("_ZNSs7replaceEjjPKcj");
extern "C" uint8_t* YellowAuto_00302f50(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4) {
sub_001041e4(arg0, arg1, arg2, arg3, 0, arg4, arg4); return arg0;
}
#endif
