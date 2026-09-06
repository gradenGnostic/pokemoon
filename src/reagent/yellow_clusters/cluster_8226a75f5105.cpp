// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045EF20
extern "C" uint32_t YellowAuto_0045ef20(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib6System15ResourceManager15GetResourceSizeEi");
extern "C" uint32_t YellowAuto_0045ef20(uint8_t* arg0, int32_t arg1) {
uint32_t arg2 = *(uint32_t *)(*(uint32_t *)(arg0 + 0x1c) + 4); for (; arg2 != *(uint32_t *)(arg0 + 0x1c); arg2 = *(uint32_t *)(arg2 + 4)) if (*(uint32_t *)(*(uint32_t *)(arg2 + 8) + 0x0) == (uint32_t)arg1) return *(uint32_t *)(*(uint32_t *)(arg2 + 8) + 0x14); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045EF60
extern "C" uint8_t* YellowAuto_0045ef60(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib6System15ResourceManager17GetResourceBufferEi");
extern "C" uint8_t* YellowAuto_0045ef60(uint8_t* arg0, int32_t arg1) {
uint32_t arg2 = *(uint32_t *)(*(uint32_t *)(arg0 + 0x1c) + 4); for (; arg2 != *(uint32_t *)(arg0 + 0x1c); arg2 = *(uint32_t *)(arg2 + 4)) if (*(uint32_t *)(*(uint32_t *)(arg2 + 8) + 0x0) == (uint32_t)arg1) return *(uint8_t **)(*(uint32_t *)(arg2 + 8) + 0x0c); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045EFA0
extern "C" uint8_t* YellowAuto_0045efa0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN9NetAppLib6System15ResourceManager17GetResourceBufferEjj");
extern "C" uint8_t* YellowAuto_0045efa0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t arg3 = *(uint32_t *)(*(uint32_t *)(arg0 + 0x1c) + 4); for (; arg3 != *(uint32_t *)(arg0 + 0x1c); arg3 = *(uint32_t *)(arg3 + 4)) if (*(uint32_t *)(*(uint32_t *)(arg3 + 8) + 0x4) == arg1 && *(uint32_t *)(*(uint32_t *)(arg3 + 8) + 0x8) == arg2) return *(uint8_t **)(*(uint32_t *)(arg3 + 8) + 0x0c); return 0;
}
#endif
