// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033820C
extern "C" void YellowAuto_0033820c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine8renderer4util17MakeBlurImagePath13ChangeDofTypeENS0_7DofTypeE");
extern "C" void YellowAuto_0033820c(uint8_t* arg0, uint32_t arg1) {
arg0[4] = (uint8_t)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033823C
extern "C" void YellowAuto_0033823c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine8renderer4util17MakeBlurImagePath20SetAvailableLayerNumEj");
extern "C" void YellowAuto_0033823c(uint8_t* arg0, uint32_t arg1) {
*(uint32_t*)(arg0 + 316) = arg1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00337FAC
void* CreateTexture_(void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00337fac(uint8_t* arg0, void* arg1, const uint32_t* arg2) __asm__("_ZN4gfl215renderingengine8renderer4util17MakeBlurImagePath10InitializeEPNS_3gfx12IGLAllocatorERKNS3_15InitDescriptionE");
extern "C" void YellowAuto_00337fac(uint8_t* arg0, void* arg1, const uint32_t* arg2) {
*(uint32_t*)(arg0 + 12) = *(uint32_t*)(arg2 + 0); *(uint32_t*)(arg0 + 16) = *(uint32_t*)(arg2 + 4); *(uint32_t*)(arg0 + 20) = *(uint32_t*)(arg2 + 0); *(uint32_t*)(arg0 + 24) = *(uint32_t*)(arg2 + 4); *(uint32_t*)(arg0 + 20) = 8; while (*(uint32_t*)(arg0 + 20) < *(uint32_t*)(arg0 + 12) && *(uint32_t*)(arg0 + 20) < 1024) *(uint32_t*)(arg0 + 20) <<= 1; if (*(uint32_t*)(arg0 + 20) < *(uint32_t*)(arg0 + 12)) *(uint32_t*)(arg0 + 20) = *(uint32_t*)(arg0 + 12); *(uint32_t*)(arg0 + 24) = 8; while (*(uint32_t*)(arg0 + 24) < *(uint32_t*)(arg0 + 16) && *(uint32_t*)(arg0 + 24) < 1024) *(uint32_t*)(arg0 + 24) <<= 1; if (*(uint32_t*)(arg0 + 24) < *(uint32_t*)(arg0 + 16)) *(uint32_t*)(arg0 + 24) = *(uint32_t*)(arg0 + 16); *(uint32_t*)(arg0 + 356) = (uint32_t)CreateTexture_(arg1, *(uint32_t*)(arg0 + 24), *(uint32_t*)(arg0 + 20), 1, 1, 4, 0); *(uint32_t*)(arg0 + 352) = (uint32_t)CreateTexture_(arg1, *(uint32_t*)(arg0 + 24), *(uint32_t*)(arg0 + 20), 1, 1, 4, 0);
}
#endif
