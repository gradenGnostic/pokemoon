// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034A3A4
extern "C" const void* YellowAuto_0034a3a4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl23gfx3ctr5CTRGL16GetRenderTarget_Ej");
extern "C" const void* YellowAuto_0034a3a4(uint8_t* arg0, uint32_t arg1) {
return *reinterpret_cast<const void* const*>(arg0 + 0x14);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034A0B0
extern "C" void* YellowAuto_0034a0b0(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl23gfx3ctr5CTRGL14GetBackBuffer_EPv");
extern "C" void* YellowAuto_0034a0b0(uint8_t* arg0, void* arg1) {
return *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(arg1) + 0x20);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034AE20
extern "C" void* YellowAuto_0034ae20(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl23gfx3ctr5CTRGL22GetDepthStencilBuffer_EPv");
extern "C" void* YellowAuto_0034ae20(uint8_t* arg0, void* arg1) {
return *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(arg1) + 0x24);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034A3AC
extern "C" uint32_t YellowAuto_0034a3ac(uint8_t* arg0, const void* arg1) __asm__("_ZN4gfl23gfx3ctr5CTRGL16SetDepthStencil_EPKNS0_7SurfaceE");
extern "C" uint32_t YellowAuto_0034a3ac(uint8_t* arg0, const void* arg1) {
*reinterpret_cast<const void**>(arg0 + 0x18) = arg1; return 1U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034A3B8
extern "C" uint32_t YellowAuto_0034a3b8(uint8_t* arg0, uint32_t arg1, const void* arg2) __asm__("_ZN4gfl23gfx3ctr5CTRGL16SetRenderTarget_EjPKNS0_7SurfaceE");
extern "C" uint32_t YellowAuto_0034a3b8(uint8_t* arg0, uint32_t arg1, const void* arg2) {
*reinterpret_cast<const void**>(arg0 + 0x14) = arg2; return 1U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034A620
extern "C" uint32_t YellowAuto_0034a620(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl23gfx3ctr5CTRGL17GetDisplayHeight_EPv");
extern "C" uint32_t YellowAuto_0034a620(uint8_t* arg0, void* arg1) {
return arg1 == nullptr ? 0U : 0xF0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034A384
extern "C" uint32_t YellowAuto_0034a384(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl23gfx3ctr5CTRGL16GetDisplayWidth_EPv");
extern "C" uint32_t YellowAuto_0034a384(uint8_t* arg0, void* arg1) {
return arg1 == nullptr ? 0U : (*(reinterpret_cast<const uint8_t*>(arg1) + 0x1C) == 0x19 ? 0x140U : 400U);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00349C9C
extern "C" void YellowAuto_00349c9c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN4gfl23gfx3ctr5CTRGL12SetViewport_Ejjjj");
extern "C" void YellowAuto_00349c9c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
*reinterpret_cast<uint32_t*>(arg0 + 0x1F4) = arg1; *reinterpret_cast<uint32_t*>(arg0 + 0x1F8) = arg2; *reinterpret_cast<uint32_t*>(arg0 + 0x2C0) |= 8U; *reinterpret_cast<uint32_t*>(arg0 + 0x1FC) = arg4; *reinterpret_cast<uint32_t*>(arg0 + 0x200) = arg3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00349BE4
extern "C" void YellowAuto_00349be4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN4gfl23gfx3ctr5CTRGL11SetScissor_Ejjjj");
extern "C" void YellowAuto_00349be4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
*reinterpret_cast<uint32_t*>(arg0 + 0x2C0) |= 0x200U; *(arg0 + 0x1D4) = 1; *reinterpret_cast<uint32_t*>(arg0 + 0x1D8) = arg1; *reinterpret_cast<uint32_t*>(arg0 + 0x1DC) = arg2; *reinterpret_cast<uint32_t*>(arg0 + 0x1E0) = arg4; *reinterpret_cast<uint32_t*>(arg0 + 0x1E4) = arg3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00349C10
extern "C" void YellowAuto_00349c10(uint8_t* arg0, uint32_t arg1, const void* arg2) __asm__("_ZN4gfl23gfx3ctr5CTRGL11SetTexture_EjPKNS0_7TextureE");
extern "C" void YellowAuto_00349c10(uint8_t* arg0, uint32_t arg1, const void* arg2) {
*reinterpret_cast<uint32_t*>(arg0 + 0x2C0) |= (1U << (arg1 + 12U)) & 0xFFFFU; *reinterpret_cast<const void**>(arg0 + arg1 * 4U + 0x28) = arg2;
}
#endif
