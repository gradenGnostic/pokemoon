// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F983C
uint32_t ReplaceTextureStatic(void*, void*, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_002f983c(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3app4tool19LytTexReplaceSystem14ReplaceTextureEjPN2nw3lyt7PictureEjj");
extern "C" uint32_t YellowAuto_002f983c(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) {
if (arg1 < *(uint32_t *)(arg0 + 8) && *(uint8_t *)((uint8_t *)*(void **)(arg0 + 4) + arg1 * 4 + 4) != 0) return ReplaceTextureStatic((void *)((uint8_t *)*(void **)(arg0 + 4) + arg1 * 4 + 8), arg2, arg3, arg4); return 0;
}
#endif
