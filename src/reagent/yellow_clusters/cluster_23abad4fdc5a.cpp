// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045CDC4
extern "C" void YellowAuto_0045cdc4(uint8_t* arg0, uint8_t arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility9RequestExEN3app4util19AppRenderingManager15RenderPlaceType3TagEjRKN8PokeTool11SimpleParamEj");
extern "C" void YellowAuto_0045cdc4(uint8_t* arg0, uint8_t arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4) {
if (*(uint8_t**)(arg0 + 16) != 0) { uint8_t* e = *(uint8_t**)(arg0 + 16) + arg2 * 64; *(uint32_t*)(e + 44) = *(const uint32_t*)(arg3 + 0); *(uint32_t*)(e + 48) = *(const uint32_t*)(arg3 + 4); *(uint32_t*)(e + 52) = *(const uint32_t*)(arg3 + 8); *(uint8_t*)(e + 56) = *(uint8_t*)(arg0 + 32); *(uint8_t*)(e + 57) = arg1; *(uint32_t*)(e + 60) = arg4; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C384
extern "C" void YellowAuto_0045c384(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility14ReleaseRequestEj");
extern "C" void YellowAuto_0045c384(uint8_t* arg0, uint32_t arg1) {
if (*(uint8_t**)(arg0 + 16) != 0) { uint8_t* e = *(uint8_t**)(arg0 + 16) + arg1 * 64; uint8_t s = *(uint8_t*)(e + 32); if (s != 0 && s != 3) { *(uint8_t*)(e + 33) = 1; *(uint32_t*)(e + 36) = 2; *(uint16_t*)(e + 44) = 0; } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C870
void SetModelVisible(uint8_t*, bool);
extern "C" void YellowAuto_0045c870(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility21SetVisibility_InFrameEjb");
extern "C" void YellowAuto_0045c870(uint8_t* arg0, uint32_t arg1, bool arg2) {
if (*(uint8_t**)(arg0 + 16) != 0) { uint8_t* e = *(uint8_t**)(arg0 + 16) + arg1 * 64; uint8_t* f = *(uint8_t**)(e + 24); if (f != 0) SetModelVisible(f, arg2); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C3EC
void SetShaderColor(uint8_t*, const uint8_t*, uint32_t);
extern "C" void YellowAuto_0045c3ec(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility14SetShaderColorEjRKN4gfl23gfx5ColorE");
extern "C" void YellowAuto_0045c3ec(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) {
if (*(uint8_t**)(arg0 + 16) != 0) { uint8_t* e = *(uint8_t**)(arg0 + 16) + arg1 * 64; uint8_t* m = *(uint8_t**)(e + 20); if (m != 0 && *(uint8_t*)(e + 32) == 2) SetShaderColor(m, arg2, 1); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C318
extern "C" void YellowAuto_0045c318(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility13ClearHandlersEv");
extern "C" void YellowAuto_0045c318(uint8_t* arg0) {
uint32_t n = *(uint32_t*)(arg0 + 24); for (uint32_t i = 0; i < n; ++i) { uint8_t* e = *(uint8_t**)(arg0 + 16); if (e != 0) *(uint32_t*)(e + i * 64 + 40) = 0; }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C7B8
void SetFrame(uint8_t*, int32_t, int32_t, int32_t, int32_t);
extern "C" void YellowAuto_0045c7b8(uint8_t* arg0, const uint8_t* arg1, bool arg2) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility16SetFramePositionEPKN2nw3lyt4PaneEb");
extern "C" void YellowAuto_0045c7b8(uint8_t* arg0, const uint8_t* arg1, bool arg2) {
if (arg1 == 0) return;
float s = *(const float*)(arg1 + 0x3c) * *(const float*)0x0045c84c;
float t = *(const float*)(arg1 + 0x40) * *(const float*)0x0045c84c;
float b = *(const float*)0x0045c844;
if (!arg2) b = *(const float*)0x0045c848;
float h = *(const float*)(arg1 + 0x64);
float w = *(const float*)(arg1 + 0x54);
uint8_t* v = *(uint8_t**)(arg0 + 0x30);
if (v == 0) return;
int32_t a0 = (int32_t)(w - s + b);
int32_t a1 = (int32_t)(-h - t + *(const float*)0x0045c850);
int32_t a2 = (int32_t)(w + s + b);
int32_t a3 = (int32_t)(t - h + *(const float*)0x0045c850);
SetFrame(v, a0, a1, a2, a3);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C8D0
void* func_00105500(uint32_t, void*);
void* func_0035B2B4(void*, void*);
void* func_0042FFC4(void*);
void func_001048B4();
extern "C" void YellowAuto_0045c8d0(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility5SetupEjPKNS1_12InFrameParamEj");
extern "C" void YellowAuto_0045c8d0(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) {
*(uint32_t*)(arg0 + 0x18) = arg1;
*(void**)(arg0 + 0x2C) = func_00105500(8, *(void**)(*(uint8_t**)(*(uint8_t**)(arg0 + 0x04) + 8) + 8));
if (*(void**)(arg0 + 0x2C) != (void*)0) *(void**)(arg0 + 0x2C) = func_0035B2B4(*(void**)(arg0 + 0x2C), *(void**)(*(uint8_t**)(*(uint8_t**)(arg0 + 0x04) + 8) + 8));
*(void**)(arg0 + 0x08) = func_00105500(116, *(void**)(*(uint8_t**)(*(uint8_t**)(arg0 + 0x04) + 8) + 8));
if (*(void**)(arg0 + 0x08) != (void*)0) *(void**)(arg0 + 0x08) = func_0042FFC4(*(void**)(arg0 + 0x08));
func_001048B4();
}
#endif
