// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E7600
uint8_t* FUN_0041bd80(uint8_t*);
extern "C" void YellowAuto_003e7600(uint8_t* arg0, void* arg1) __asm__("_ZN6System30NijiOutLinePostSceneRenderPathC1EPN4gfl23gfx12IGLAllocatorE");
extern "C" void YellowAuto_003e7600(uint8_t* arg0, void* arg1) {
FUN_0041bd80(arg0); *(void**)(arg0 + 36) = arg1;
}
#endif
