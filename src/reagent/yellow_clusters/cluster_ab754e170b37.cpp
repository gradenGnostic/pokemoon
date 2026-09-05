// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302E5C
void __aeabi_memcpy(void* arg0, const void* arg1, uint32_t arg2);
extern "C" uint8_t* YellowAuto_00302e5c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZNSt11char_traitsIcE4copyEPcPKcj");
extern "C" uint8_t* YellowAuto_00302e5c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) {
__aeabi_memcpy(arg0, arg1, arg2);
return arg0;
}
#endif
