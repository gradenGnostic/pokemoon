// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D568
extern "C" bool YellowAuto_0048d568(const uint8_t* arg0, uint32_t arg1, uint32_t* arg2, uint32_t* arg3) __asm__("_ZNK3app4sort12StringBinary32GetInitialIndexToSortHeaderIndexEjRjS2_");
extern "C" bool YellowAuto_0048d568(const uint8_t* arg0, uint32_t arg1, uint32_t* arg2, uint32_t* arg3) {
*arg2 = (uint32_t)*(const uint16_t*)(*(const uint8_t* const *)(arg0 + 0x14) + arg1 * 4u);
*arg3 = (uint32_t)*(const uint16_t*)(*(const uint8_t* const *)(arg0 + 0x14) + arg1 * 4u + 2u);
return *arg2 != *(const uint32_t*)0x48d5b0 && *arg3 != *(const uint32_t*)0x48d5b0;
}
#endif
