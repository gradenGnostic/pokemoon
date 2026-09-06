// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00161824
uint8_t* SceneRenderPath(uint8_t*);
void FUN_0057e218(uint8_t*, int32_t, void*);
extern "C" uint8_t* YellowAuto_00161824(uint8_t* arg0, void* arg1) __asm__("_ZN26FullPowerEffectRenderPath0C1EPN4gfl23gfx12IGLAllocatorE");
extern "C" uint8_t* YellowAuto_00161824(uint8_t* arg0, void* arg1) {
SceneRenderPath(arg0); *reinterpret_cast<void**>(arg0 + 0x88) = arg1; FUN_0057e218(arg0 + 0x38, 2, arg1); *reinterpret_cast<uint32_t*>(arg0 + 0x8c) = 0; return arg0;
}
#endif
