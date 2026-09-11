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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034BA5C
void FUN_00521fa4(uint8_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_0034ba5c(uint8_t* arg0) __asm__("_ZN4gfl23gfx3ctr5CTRGL34AddReadColorBufferToTextureCommandEPNS0_7TextureE");
extern "C" void YellowAuto_0034ba5c(uint8_t* arg0) {
FUN_00521fa4((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x0034BAAC)) + *(uint32_t*)((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x0034BAAC)) + 0xE0) * 0x4C + 0x50, *(uint32_t*)((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x0034BAAC)) + 0x10C), 0x100, 0, *(uint32_t*)(arg0 + 0x48), 0x100, 0, 0x80000);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034BAE8
void FUN_00521f84(uint8_t*, uint32_t, uint32_t, uint32_t, void*, void*, uint32_t, uint32_t, void*, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_0034bae8(void* arg0, int32_t arg1) __asm__("_ZN4gfl23gfx3ctr5CTRGL35AddTransferLinearColorBufferCommandEPvi");
extern "C" void YellowAuto_0034bae8(void* arg0, int32_t arg1) {
FUN_00521f84((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x0034BB6C)) + *(uint32_t*)((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x0034BB6C)) + 0xE0) * 0x4C + 0x50, *(uint32_t*)((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x0034BB6C)) + 0x10C), 0x100, 0x200, (void*)(*(uint32_t*)0x0034BB70), arg0, 0x100, 0x200, (void*)(*(uint32_t*)(arg1 == 0 ? 0x0034BB74 : 0x0034BB70)), 0x500, 0, 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00349B44
void* FUN_00475da4(uint8_t*, void*, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_00349b44(uint8_t* arg0) __asm__("_ZN4gfl23gfx3ctr5CTRGL11BeginScene_Ev");
extern "C" uint32_t YellowAuto_00349b44(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0x14C) = *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x14)) + 0x20); *(uint32_t*)(arg0 + 0x150) = *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x14)) + 0x24); *(uint32_t*)(arg0 + 0x10C) = *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x14)) + 0x28); *(uint8_t*)(arg0 + 0x110) = *(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x14)) + 0x2C); *(uint8_t*)(arg0 + 0x111) = *(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x14)) + 0x2D); *(uint32_t*)(arg0 + 0x114) = *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x14)) + 0x20); *(uint32_t*)(arg0 + 0x118) = *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x14)) + 0x24); if (*(uint32_t*)(arg0 + 0x18) != 0) *(uint32_t*)(arg0 + 0x130) = *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x18)) + 0x4C); if (*(uint32_t*)(arg0 + 0x18) != 0) *(uint8_t*)(arg0 + 0x134) = *(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x18)) + 0x50); if (*(uint32_t*)(arg0 + 0x18) != 0) *(uint32_t*)(arg0 + 0x138) = *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x14)) + 0x20); if (*(uint32_t*)(arg0 + 0x18) != 0) *(uint32_t*)(arg0 + 0x13C) = *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0x14)) + 0x24); *(uint32_t*)((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x00349BE0)) + 0x2AC) = (uint32_t)FUN_00475da4((uint8_t*)(arg0 + 0x10C), (void*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x00349BE0)) + 0x2AC)), (*(uint32_t*)(arg0 + 0x18) != 0 ? 7 : 1), 1); return 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034A630
uint32_t FUN_00477fcc(uint8_t*, uint32_t*);
uint32_t FUN_004776bc(uint8_t*, uint32_t*);
void FUN_0034A8CC(uint8_t*, uint8_t*, uint32_t*, uint32_t);
extern "C" void YellowAuto_0034a630(uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZN4gfl23gfx3ctr5CTRGL18ClearDepthStencil_Efh");
extern "C" void YellowAuto_0034a630(uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
if ((*(uint32_t*)(arg0 + 0x2C0) & 0x8) != 0) { *(uint32_t*)(arg0 + 0x2C0) &= 0xFFFFFFF7; *(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34A6D8) + 0x2AC) = FUN_00477fcc(arg0 + 0x1F4, (uint32_t*)(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34A6D8) + 0x2AC))); } if ((*(uint32_t*)(arg0 + 0x2C0) & 0x200) != 0) { *(uint32_t*)(arg0 + 0x2C0) &= 0xFFFFFDFF; *(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34A6D8) + 0x2AC) = FUN_004776bc(arg0 + 0x1D4, (uint32_t*)(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34A6D8) + 0x2AC))); } *(uint32_t*)(arg0 + 0x140) = arg1; *(uint8_t*)(arg0 + 0x144) = arg2; FUN_0034A8CC(arg0, arg0 + *(uint32_t*)(arg0 + 0xE0) * 0x4C + 0x48, (uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34A6D8) + 0x2AC), 6);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034B7B8
uint32_t FUN_00477fcc(uint8_t*, uint32_t*);
uint32_t FUN_004776bc(uint8_t*, uint32_t*);
void FUN_0034A8CC(uint8_t*, uint8_t*, uint32_t*, uint32_t);
extern "C" void YellowAuto_0034b7b8(uint8_t* arg0, uint32_t arg1, const uint32_t* arg2, uint32_t arg3, uint8_t arg4) __asm__("_ZN4gfl23gfx3ctr5CTRGL30ClearRenderTargetDepthStencil_EjRKNS0_5ColorEfh");
extern "C" void YellowAuto_0034b7b8(uint8_t* arg0, uint32_t arg1, const uint32_t* arg2, uint32_t arg3, uint8_t arg4) {
if ((*(uint32_t*)(arg0 + 0x2C0) & 0x8) != 0) { *(uint32_t*)(arg0 + 0x2C0) &= 0xFFFFFFF7; *(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34B884) + 0x2AC) = FUN_00477fcc(arg0 + 0x1F4, (uint32_t*)(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34B884) + 0x2AC))); } if ((*(uint32_t*)(arg0 + 0x2C0) & 0x200) != 0) { *(uint32_t*)(arg0 + 0x2C0) &= 0xFFFFFDFF; *(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34B884) + 0x2AC) = FUN_004776bc(arg0 + 0x1D4, (uint32_t*)(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34B884) + 0x2AC))); } *(uint32_t*)(arg0 + 0x11C) = arg2[0]; *(uint32_t*)(arg0 + 0x120) = arg2[1]; *(uint32_t*)(arg0 + 0x124) = arg2[2]; *(uint32_t*)(arg0 + 0x128) = arg2[3]; *(uint32_t*)(arg0 + 0x140) = arg3; *(uint8_t*)(arg0 + 0x144) = arg4; FUN_0034A8CC(arg0, arg0 + *(uint32_t*)(arg0 + 0xE0) * 0x4C + 0x48, (uint32_t*)(*(uint32_t*)(*(uint32_t*)0x34B884) + 0x2AC), 7);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034A9D8
void* AllocConstantBuffer(uint32_t);
void InitConstantBuffer(void*, const void*, uint32_t, uint32_t, const void*);
extern "C" void YellowAuto_0034a9d8(const void* arg0, uint32_t arg1, uint32_t arg2, const void* arg3) __asm__("_ZN4gfl23gfx3ctr5CTRGL21CreateConstantBuffer_EPKNS0_21ConstantBufferElementEjNS0_4PoolEPKv");
extern "C" void YellowAuto_0034a9d8(const void* arg0, uint32_t arg1, uint32_t arg2, const void* arg3) {
void* v0 = AllocConstantBuffer(100);
if (v0 != (void*)0) {
InitConstantBuffer(v0, arg0, arg1, arg2, arg3);
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00349FFC
void* AllocTexture(uint32_t);
void* InitTexture(void*, uint8_t*);
void CheckGraphicsError(void);
extern "C" void* YellowAuto_00349ffc(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint8_t arg5, uint8_t arg6) __asm__("_ZN4gfl23gfx3ctr5CTRGL14CreateTexture_EjjjjNS0_6FormatENS0_4PoolE");
extern "C" void* YellowAuto_00349ffc(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint8_t arg5, uint8_t arg6) {
void* v0 = AllocTexture(84);
void* v1 = (void*)0;
if (v0 != (void*)0) {
uint8_t v2[32];
v2[0] = (uint8_t)0;
*(uint32_t*)(v2 + 4) = arg4;
v2[8] = (uint8_t)arg6;
*(uint32_t*)(v2 + 12) = arg1;
*(uint32_t*)(v2 + 16) = arg2;
*(uint32_t*)(v2 + 20) = (uint32_t)1;
*(uint32_t*)(v2 + 24) = arg3;
v2[28] = (uint8_t)arg5;
v2[29] = (uint8_t)0;
v1 = InitTexture(v0, v2);
}
CheckGraphicsError();
return v1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034B464
void* AllocTexture(uint32_t);
void* InitTexture(void*, uint8_t*);
void SetTextureData(void*, const void*, uint32_t);
void CheckGraphicsError(void);
extern "C" void* YellowAuto_0034b464(const uint8_t* arg0) __asm__("_ZN4gfl23gfx3ctr5CTRGL25CreateTextureFromSurface_EPKNS0_7SurfaceE");
extern "C" void* YellowAuto_0034b464(const uint8_t* arg0) {
uint8_t v1[32];
v1[0] = (uint8_t)0;
*(uint32_t*)(v1 + 4) = (uint32_t)65536;
v1[8] = (uint8_t)2;
*(uint32_t*)(v1 + 12) = *(const uint32_t*)(arg0 + 32);
*(uint32_t*)(v1 + 16) = *(const uint32_t*)(arg0 + 36);
*(uint32_t*)(v1 + 20) = (uint32_t)1;
*(uint32_t*)(v1 + 24) = (uint32_t)1;
v1[28] = (uint8_t)4;
v1[29] = (uint8_t)0;
void* v0 = AllocTexture(84);
void* v2 = (void*)0;
if (v0 != (void*)0) {
v2 = InitTexture(v0, v1);
}
const void* v3;
if (*(const uint8_t*)(arg0 + 28) == (uint8_t)15) {
v3 = *(const void* const*)(arg0 + 76);
} else {
v3 = *(const void* const*)(arg0 + 40);
}
SetTextureData(v2, v3, (uint32_t)1);
CheckGraphicsError();
return v2;
}
#endif
