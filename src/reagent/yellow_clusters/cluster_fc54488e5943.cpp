// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00499578
int32_t FUN_002aae08(void*, const void*);
extern "C" bool YellowAuto_00499578(const uint8_t* arg0, int32_t arg1, int32_t arg2, void* arg3) __asm__("_ZNK4gfl23lyt5LytWk10GetHitPaneEiiPN2nw3lyt4PaneE");
extern "C" bool YellowAuto_00499578(const uint8_t* arg0, int32_t arg1, int32_t arg2, void* arg3) {
float local_10[2]; local_10[0] = (float)(arg1 - 0xa0); local_10[1] = (float)(0x78 - arg2); return FUN_002aae08(arg3, local_10) != 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00352E68
void GFLassert();
extern "C" void YellowAuto_00352e68(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN4gfl23lyt5LytWk12SetAutoAnimeEjb");
extern "C" void YellowAuto_00352e68(uint8_t* arg0, uint32_t arg1, bool arg2) {
if (*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0xE8) <= arg1) { GFLassert(); return; } if (*((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0xE4)) + arg1 * 0x24) != 0) { *((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0xE4)) + arg1 * 0x24 + 1) = arg2; }
}
#endif
