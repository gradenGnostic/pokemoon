// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E74E8
extern const uint32_t DAT_003e7504;
uint32_t* FUN_0041cc6c(uint8_t*, int32_t, int32_t);
extern "C" void YellowAuto_003e74e8(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN6System26NijiEdgeMapSceneRenderPathC1EPN4gfl23gfx12IGLAllocatorEi");
extern "C" void YellowAuto_003e74e8(uint8_t* arg0, int32_t arg1, int32_t arg2) {
uint32_t *result = FUN_0041cc6c(arg0, arg1, arg2);
*result = DAT_003e7504;
result[0x29] = (uint32_t)arg1;
}
#endif
