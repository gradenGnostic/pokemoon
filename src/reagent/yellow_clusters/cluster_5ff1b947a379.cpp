// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001036EC
extern "C" void __aeabi_memcpy(void* arg0, const void* arg1, uint32_t arg2);
extern "C" const uint8_t* YellowAuto_001036ec(const void* arg0, const uint8_t* arg1, const uint8_t* arg2, uint8_t arg3, uint8_t* arg4) __asm__("_ZNKSt5ctypeIcE9do_narrowEPKcS2_cPc");
extern "C" const uint8_t* YellowAuto_001036ec(const void* arg0, const uint8_t* arg1, const uint8_t* arg2, uint8_t arg3, uint8_t* arg4) {
__aeabi_memcpy(arg4, arg1, (uint32_t)(arg2 - arg1));
return arg2;
}
#endif
