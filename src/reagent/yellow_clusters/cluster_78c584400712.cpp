// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0016195C
void* GetBinData(void* p0, int32_t p1);
void SetInnerResources(void* p0, void* p1, void* p2, void* p3, int32_t p4, void* p5, int32_t p6);
extern "C" void YellowAuto_0016195c(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN26FullPowerEffectRenderPath111SetResourceEPN4gfl23gfx12IGLAllocatorEPv");
extern "C" void YellowAuto_0016195c(uint8_t* arg0, void* arg1, void* arg2) {
void* acc = arg2;
void* d0 = GetBinData(&acc, 4);
void* d1 = GetBinData(&acc, 5);
void* d2 = GetBinData(&acc, 6);
void* d3 = GetBinData(&acc, 7);
*reinterpret_cast<void**>(arg0 + 248) = arg1;
SetInnerResources(arg0 + 100, arg1, d0, &d1, 2, &d3, 1);
*reinterpret_cast<void**>(arg0 + 256) = arg1;
}
#endif
