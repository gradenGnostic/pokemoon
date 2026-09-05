// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5420
extern "C" bool YellowAuto_004a5420(const uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZNK7poke_3d5model31DressUpModelResourceManagerCore26IsDressUpPartsColorEnabledENS0_12DressUpParam12ItemCategoryEjj");
extern "C" bool YellowAuto_004a5420(const uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3) {
const uint32_t* table = *(const uint32_t**)(arg0 + 0xC);
const uint8_t* entry = (const uint8_t*)table[arg1] + arg2 * 8;
if (arg3 < 32) return ((*(const uint32_t*)(entry + 8) & (1u << arg3)) != 0);
return ((*(const uint32_t*)(entry + 12) & (1u << (arg3 - 32))) != 0);
}
#endif
