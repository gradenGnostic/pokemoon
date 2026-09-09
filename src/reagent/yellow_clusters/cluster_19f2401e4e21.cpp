// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004070B0
int32_t FUN_004011f8(uint32_t arg0, uint32_t arg1);
extern "C" int32_t YellowAuto_004070b0() __asm__("_ZN7gflnet23p2p7NetGame12IsInitializeEv");
extern "C" int32_t YellowAuto_004070b0() {
if (*(int32_t*)(*(uint8_t**)0x004070E0u + 4) <= 0) return 1;
if (FUN_004011f8(*(uint32_t*)(*(uint8_t**)0x004070E0u + 0), *(uint32_t*)(*(uint8_t**)0x004070E0u + 8)) != 0) return 1;
return 0;
}
#endif
