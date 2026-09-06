// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A510C
extern "C" uint8_t YellowAuto_004a510c(const uint8_t* arg0, uint32_t arg1, int32_t arg2) __asm__("_ZNK7poke_3d5model31DressUpModelResourceManagerCore20GetDressUpColorIndexENS0_12DressUpParam12ItemCategoryEi");
extern "C" uint8_t YellowAuto_004a510c(const uint8_t* arg0, uint32_t arg1, int32_t arg2) {
if (arg1 < 2 || arg1 == 10) arg2 <<= 1;
const uint32_t *arg3 = ((const uint32_t *const *)(arg0 + 8))[arg1];
const uint8_t *arg4 = (const uint8_t *)(arg2 < *arg3 ? arg3 + arg2 * 2 + 1 : (const uint32_t *)0);
uint32_t arg5 = (uint32_t)*(const int8_t *)(arg4 + 5);
if (*(const int8_t *)(arg4 + 4) > 5) arg5 = *(const uint8_t *)(*(const uint8_t *const *)(arg0 + 0x18) + arg5 * 8 + 9);
return (uint8_t)arg5;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A51D8
extern "C" uint16_t YellowAuto_004a51d8(const uint8_t* arg0, uint32_t arg1, int32_t arg2) __asm__("_ZNK7poke_3d5model31DressUpModelResourceManagerCore20GetDressUpPartsIndexENS0_12DressUpParam12ItemCategoryEi");
extern "C" uint16_t YellowAuto_004a51d8(const uint8_t* arg0, uint32_t arg1, int32_t arg2) {
if (arg1 < 2 || arg1 == 10) arg2 <<= 1;
const uint32_t *arg3 = ((const uint32_t *const *)(arg0 + 8))[arg1];
return *(const uint16_t *)((const uint8_t *)((arg2 < *arg3 ? arg3 + arg2 * 2 + 1 : (const uint32_t *)0)) + 2);
}
#endif
