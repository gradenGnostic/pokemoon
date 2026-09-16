// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00339414
extern uint32_t DAT_0033943c;
extern uint32_t DAT_00339438;
extern "C" void YellowAuto_00339414(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer4util25StretchBltFrameBufferPathC1Ev");
extern "C" void YellowAuto_00339414(uint8_t* arg0) {
*reinterpret_cast<uint32_t*>(arg0) = DAT_0033943c; *reinterpret_cast<uint32_t*>(arg0 + 4) = 0u; *reinterpret_cast<uint32_t*>(arg0 + 8) = 0u; *reinterpret_cast<uint32_t*>(arg0 + 12) = DAT_00339438; *reinterpret_cast<uint32_t*>(arg0 + 16) = DAT_00339438;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00338F60
uint8_t* CreateTextureFromSurface_(const uint8_t* arg0);
uint8_t* CreateTexture_(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6);
extern "C" void YellowAuto_00338f60(uint8_t* arg0, void* arg1, const uint8_t* arg2) __asm__("_ZN4gfl215renderingengine8renderer4util25StretchBltFrameBufferPath24CreateFrameBufferTextureEPNS_3gfx12IGLAllocatorEPKNS4_7SurfaceE");
extern "C" void YellowAuto_00338f60(uint8_t* arg0, void* arg1, const uint8_t* arg2) {
(void)arg1; if (*(uint32_t*)(arg0 + 4) != 0) return; if (*(uint32_t*)(arg0 + 8) != 0) return; *(float*)(arg0 + 12) = (float)*(uint32_t*)(arg2 + 20) / (float)*(uint32_t*)(arg2 + 32); *(float*)(arg0 + 16) = (float)*(uint32_t*)(arg2 + 16) / (float)*(uint32_t*)(arg2 + 36); *(uint8_t**)(arg0 + 4) = CreateTextureFromSurface_(arg2); *(uint8_t**)(arg0 + 8) = CreateTexture_(*(*(void***)0x33918C), *(uint32_t*)(arg2 + 32), *(uint32_t*)(arg2 + 36), 1, 1, 4, 0);
}
#endif
