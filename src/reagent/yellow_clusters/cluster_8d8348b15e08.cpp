// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F7EC0
int32_t IsButtonVisible(uint8_t*, int32_t);
void SetButtonActive(uint8_t*, int32_t, int32_t);
void SetButtonPassive(uint8_t*, int32_t, int32_t);
extern "C" void YellowAuto_002f7ec0(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool18InfoWindowBookType22SetCommandButtonActiveEb");
extern "C" void YellowAuto_002f7ec0(uint8_t* arg0, bool arg1) {
arg0[0xC5] = arg1;
uint8_t* _b = *(uint8_t**)(arg0 + 0x10);
int32_t _v = *(int32_t*)(arg0 + 0x60);
if (_v != 0 && _b != (uint8_t*)0 && IsButtonVisible(_b, 1) != 0) {
if (arg0[0xC5] != 0) { SetButtonActive(_b, 1, 1); return; }
SetButtonPassive(_b, 1, 1);
return;
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F8874
void GFLassert();
extern "C" void YellowAuto_002f8874(uint8_t* arg0, void* arg1, const uint32_t* arg2, int32_t arg3) __asm__("_ZN3app4tool18InfoWindowBookType9StartOpenEPNS0_26InfoWindowBookTypeListenerERKN4gfl24math7Vector3ENS1_8OpenTypeE");
extern "C" void YellowAuto_002f8874(uint8_t* arg0, void* arg1, const uint32_t* arg2, int32_t arg3) {
if (arg0[0xCC] != 0) { GFLassert(); return; }
*(uint8_t**)(arg0 + 0xA8) = (uint8_t*)arg1;
*(uint32_t*)(arg0 + 0xAC) = arg2[0];
*(uint32_t*)(arg0 + 0xB0) = arg2[1];
*(uint32_t*)(arg0 + 0xB4) = arg2[2];
arg0[0xD6] = (uint8_t)arg3;
*(int32_t*)(arg0 + 0xD8) = 0;
if (arg3 == 1) { *(int32_t*)(arg0 + 0xD8) = 8; }
if (arg0[0xC4] != 0 && *(uint32_t*)(arg0 + 0xBC) != 0) { uint32_t _l = *(uint32_t*)(arg0 + 0xBC); uint8_t* _p = *(uint8_t**)(arg0 + 0xB8); uint32_t _i = 0; while (_i < _l) { if (_p[_i * 16] == 0) { break; } _i = _i + 1; } }
*(uint32_t*)(arg0 + 0xC0) = 0;
arg0[0x6D] = 1;
uint8_t* _s = *(uint8_t**)(arg0 + 0xC8);
_s[8] = 1;
uint8_t* _q = *(uint8_t**)(_s + 4);
uint8_t* _t = *(uint8_t**)(_q + 0x10);
_t[0x25] = (_s[8] == 2 ? (uint8_t)1 : (uint8_t)0);
arg0[0xD4] = 1;
arg0[0x1B5] = 0;
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F69AC
void GFLassert();
extern "C" void YellowAuto_002f69ac(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3) __asm__("_ZN3app4tool18InfoWindowBookType12SetQRContentEjPKN2nw3lyt11TextureInfoEPKN4gfl23str6StrBufE");
extern "C" void YellowAuto_002f69ac(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3) {
if (arg1 < *(uint32_t*)(arg0 + 0xBC)) { *(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 0) = 3u; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 4) = (uint32_t)arg2; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 8) = (uint32_t)arg3; return; } GFLassert(); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F7858
void GFLassert();
extern "C" void YellowAuto_002f7858(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3) __asm__("_ZN3app4tool18InfoWindowBookType14SetTextContentEjPKN4gfl23str6StrBufES6_");
extern "C" void YellowAuto_002f7858(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3) {
if (arg1 < *(uint32_t*)(arg0 + 0xBC)) { *(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 0) = 1u; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 4) = (uint32_t)arg2; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 8) = (uint32_t)arg3; return; } GFLassert(); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F7F28
void GFLassert();
extern "C" void YellowAuto_002f7f28(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3, const void* arg4) __asm__("_ZN3app4tool18InfoWindowBookType24SetTextureAndTextContentEjPKN2nw3lyt11TextureInfoEPKN4gfl23str6StrBufESB_");
extern "C" void YellowAuto_002f7f28(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3, const void* arg4) {
if (arg1 < *(uint32_t*)(arg0 + 0xBC)) { *(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 0) = 2u; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 4) = (uint32_t)arg2; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 8) = (uint32_t)arg3; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8) + arg1 * 16u) + 12) = (uint32_t)arg4; return; } GFLassert(); return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F765C
void* GetTempStrBuf(void* arg0, uint32_t arg1);
uint32_t FUN_0048e5f0(uint32_t arg0, uint32_t arg1);
void RegisterNumber(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
void Expand(void* arg0, void* arg1, uint32_t arg2);
void SetTextboxPaneMessage(void* arg0, void* arg1, void* arg2);
extern "C" void YellowAuto_002f765c(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4tool18InfoWindowBookType13ResetContentsEjb");
extern "C" void YellowAuto_002f765c(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t v0 = arg2;
uint32_t cnt = 0;
uint32_t idx = 0;
uint32_t cur = 0;
uint32_t* e = (uint32_t*)0;
uint32_t cur1 = 0;
void* tb0 = (void*)0;
void* g0 = (void*)0;
void* sb0 = (void*)0;
uint32_t mid0 = 0;
void* ws0 = (void*)0;
void* tb1 = (void*)0;
void* g1 = (void*)0;
void* sb1 = (void*)0;
uint32_t mid1 = 0;
void* ws1 = (void*)0;
if (*(uint32_t*)(arg0 + 164) < arg1) v0 = 0;
cnt = *(uint32_t*)(arg0 + 164);
idx = 0;
cur = v0;
if (cnt != 0) do e = (uint32_t*)(*(uint32_t*)(arg0 + 184) + idx * 16), e[0] = cur & 4294967040u, e[1] = 0, e[2] = 0, e[3] = 0, cur = *(uint32_t*)(arg0 + 164), idx = idx + 1; while (idx < cur);
*(uint32_t*)(arg0 + 188) = arg1;
*(uint8_t*)(arg0 + 196) = (uint8_t)arg2;
tb0 = (void*)(*(uint32_t*)(arg0 + 308));
g0 = (void*)(*(uint32_t*)(arg0 + 96));
sb0 = (void*)0;
mid0 = 0;
ws0 = (void*)0;
if (g0 != (void*)0) sb0 = GetTempStrBuf(g0, 0);
if (g0 != (void*)0) mid0 = FUN_0048e5f0(*(uint32_t*)(arg0 + 136), 3);
if (g0 != (void*)0) ws0 = (void*)(*(uint32_t*)(arg0 + 220));
if (g0 != (void*)0) RegisterNumber(ws0, 0, arg1, 2, 1, 1);
if (g0 != (void*)0) Expand(ws0, sb0, mid0);
if (g0 != (void*)0) SetTextboxPaneMessage(arg0, tb0, sb0);
cur1 = *(uint32_t*)(arg0 + 188);
tb1 = (void*)(*(uint32_t*)(arg0 + 356));
g1 = (void*)(*(uint32_t*)(arg0 + 96));
sb1 = (void*)0;
mid1 = 0;
ws1 = (void*)0;
if (g1 != (void*)0) sb1 = GetTempStrBuf(g1, 0);
if (g1 != (void*)0) mid1 = FUN_0048e5f0(*(uint32_t*)(arg0 + 136), 3);
if (g1 != (void*)0) ws1 = (void*)(*(uint32_t*)(arg0 + 220));
if (g1 != (void*)0) RegisterNumber(ws1, 0, cur1, 2, 1, 1);
if (g1 != (void*)0) Expand(ws1, sb1, mid1);
if (g1 != (void*)0) SetTextboxPaneMessage(arg0, tb1, sb1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F6880
void GFLassert(uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern "C" void YellowAuto_002f6880(uint8_t* arg0) __asm__("_ZN3app4tool18InfoWindowBookType10StartCloseEv");
extern "C" void YellowAuto_002f6880(uint8_t* arg0) {
void* p0 = (void*)0;
void* p1 = (void*)0;
void* p2 = (void*)0;
uint8_t v = 0;
uint8_t f = 0;
if (*(uint8_t*)(arg0 + 204) != 3) GFLassert(0, 0, 0);
if (*(uint8_t*)(arg0 + 204) != 3) return;
p0 = (void*)(*(uint32_t*)(arg0 + 200));
*(uint8_t*)((uint8_t*)p0 + 8) = 1;
p1 = (void*)(*(uint32_t*)((uint8_t*)p0 + 4));
p2 = (void*)(*(uint32_t*)((uint8_t*)p1 + 16));
v = *(uint8_t*)((uint8_t*)p0 + 8);
f = 0;
if (v == 2) f = 1;
*(uint8_t*)((uint8_t*)p2 + 37) = f;
*(uint8_t*)(arg0 + 213) = 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F8990
uint8_t* FUN_002eee4c(uint8_t*, void*);
void* __aeabi_vec_ctor_nocookie_nodtor(void*, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_002f8990(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool18InfoWindowBookTypeC1EPNS_4util4HeapE");
extern "C" void YellowAuto_002f8990(uint8_t* arg0, void* arg1) {
FUN_002eee4c(arg0, arg1);
*(uint32_t*)(arg0 + 0x0) = *(const uint32_t*)0x002F8AB0;
*(uint32_t*)(arg0 + 0xA0) = 0;
*(uint32_t*)(arg0 + 0xA4) = 0;
*(uint32_t*)(arg0 + 0xA8) = 0;
*(uint32_t*)(arg0 + 0xAC) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0xB0) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0xB4) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0xB8) = 0;
*(uint32_t*)(arg0 + 0xBC) = 0;
*(uint32_t*)(arg0 + 0xC0) = 0;
*(uint8_t*)(arg0 + 0xC4) = 0;
*(uint8_t*)(arg0 + 0xC5) = 1;
*(uint32_t*)(arg0 + 0xC8) = 0;
*(uint8_t*)(arg0 + 0xCC) = 0;
*(uint32_t*)(arg0 + 0xD0) = 0;
*(uint8_t*)(arg0 + 0xD4) = 0;
*(uint8_t*)(arg0 + 0xD5) = 0;
*(uint8_t*)(arg0 + 0xD6) = 0;
*(uint32_t*)(arg0 + 0xD8) = 0;
*(uint32_t*)(arg0 + 0xDC) = 0;
*(uint32_t*)(arg0 + 0xE0) = 0;
*(uint32_t*)(arg0 + 0xE4) = 0;
*(uint32_t*)(arg0 + 0xE8) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0xEC) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0xF0) = *(const uint32_t*)0x002F8AB4;
__aeabi_vec_ctor_nocookie_nodtor((void*)(arg0 + 0x100), (void*)(*(const uint32_t*)0x002F8AB8), 12, 3);
__aeabi_vec_ctor_nocookie_nodtor((void*)(arg0 + 0x124), (void*)(*(const uint32_t*)0x002F8ABC), 48, 2);
*(uint32_t*)(arg0 + 0xF4) = 0;
*(uint32_t*)(arg0 + 0x100) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0x104) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0x108) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0xF8) = 0;
*(uint32_t*)(arg0 + 0x10C) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0x110) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0x114) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0xFC) = 0;
*(uint32_t*)(arg0 + 0x118) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0x11C) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0x120) = *(const uint32_t*)0x002F8AB4;
*(uint32_t*)(arg0 + 0x1B0) = 0;
*(uint8_t*)(arg0 + 0x1B4) = 0;
*(uint8_t*)(arg0 + 0x1B5) = 0;
*(uint16_t*)(arg0 + 0x184) = 0;
*(uint16_t*)(arg0 + 0x186) = 0;
for (int32_t i = 0; i < 10; ++i) { *(uint16_t*)(arg0 + 0x188 + i * 4) = 0; *(uint16_t*)(arg0 + 0x18A + i * 4) = 0; }
}
#endif
