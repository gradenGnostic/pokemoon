// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010383C
extern "C" uint32_t YellowAuto_0010383c(const uint8_t* arg0, const void* arg1, const uint8_t* arg2, const uint8_t* arg3, uint32_t arg4) __asm__("_ZNKSt7codecvtIwcSt11__mbstate_tE9do_lengthERKS0_PKcS5_j");
extern "C" uint32_t YellowAuto_0010383c(const uint8_t* arg0, const void* arg1, const uint8_t* arg2, const uint8_t* arg3, uint32_t arg4) {
return (uint32_t)(arg3 - arg2) < arg4 ? (uint32_t)(arg3 - arg2) : arg4;
}
#endif
