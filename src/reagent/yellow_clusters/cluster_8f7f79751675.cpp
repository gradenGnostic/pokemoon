// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF1B0
bool IsLoadFinished(void*, uint32_t);
extern "C" bool YellowAuto_002ef1b0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool14ItemIconToolEx14IsLoadItemIconEj");
extern "C" bool YellowAuto_002ef1b0(uint8_t* arg0, uint32_t arg1) {
uint8_t* loadBase = *reinterpret_cast<uint8_t**>(arg0 + 0x28); uint8_t s = *(loadBase + arg1); if (s == 0) { return false; } if (s == 2) { return true; } void* item = *reinterpret_cast<void**>(arg0); if (!IsLoadFinished(item, arg1)) { return false; } uint8_t* loadBase2 = *reinterpret_cast<uint8_t**>(arg0 + 0x28); *(loadBase2 + arg1) = 2; return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EEF14
bool IsLoadFinished(void*, uint32_t);
void ReplaceReadTexture(void*, uint32_t, void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_002eef14(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN3app4tool14ItemIconToolEx11ReplaceIconEjPN2nw3lyt7PictureE");
extern "C" bool YellowAuto_002eef14(uint8_t* arg0, uint32_t arg1, void* arg2) {
if (arg1 >= *reinterpret_cast<uint32_t*>(arg0 + 0x14)) { return false; } if (arg2 == 0) { return false; } uint8_t* loadBase = *reinterpret_cast<uint8_t**>(arg0 + 0x28); uint8_t s = *(loadBase + arg1); if (s == 0) { return false; } if (s != 2) { void* item = *reinterpret_cast<void**>(arg0); if (!IsLoadFinished(item, arg1)) { return false; } uint8_t* loadBase2 = *reinterpret_cast<uint8_t**>(arg0 + 0x28); *(loadBase2 + arg1) = 2; } void* item2 = *reinterpret_cast<void**>(arg0); ReplaceReadTexture(item2, arg1, arg2, 0, 0); return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF130
bool CancelLoadTextureRequest(void*, uint32_t);
void LoadRequest(void*, uint32_t, uint16_t);
void GFLassert(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002ef130(uint8_t* arg0, uint32_t arg1, uint16_t arg2) __asm__("_ZN3app4tool14ItemIconToolEx12LoadItemIconEjt");
extern "C" void YellowAuto_002ef130(uint8_t* arg0, uint32_t arg1, uint16_t arg2) {
if (arg1 >= *reinterpret_cast<uint32_t*>(arg0 + 0x14)) { GFLassert(0, 0, 0); return; } uint8_t* loadBase = *reinterpret_cast<uint8_t**>(arg0 + 0x28); if (*(loadBase + arg1) == 1) { void* item = *reinterpret_cast<void**>(arg0); if (!CancelLoadTextureRequest(item, arg1)) { GFLassert(0, 0, 0); return; } uint8_t* loadBase2 = *reinterpret_cast<uint8_t**>(arg0 + 0x28); *(loadBase2 + arg1) = 0; } void* item2 = *reinterpret_cast<void**>(arg0); LoadRequest(item2, arg1, arg2); uint8_t* loadBase3 = *reinterpret_cast<uint8_t**>(arg0 + 0x28); *(loadBase3 + arg1) = 1; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EEF98
bool IsFileOpen(void*);
void ReplacePaneTexture(void*, uint32_t, uint16_t, void*, uint32_t, uint32_t);
void GFLassert(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002eef98(uint8_t* arg0, uint32_t arg1, uint16_t arg2, void* arg3) __asm__("_ZN3app4tool14ItemIconToolEx11SetItemIconEjtPN2nw3lyt7PictureE");
extern "C" void YellowAuto_002eef98(uint8_t* arg0, uint32_t arg1, uint16_t arg2, void* arg3) {
if (*reinterpret_cast<uint32_t*>(arg0 + 0x14) <= arg1) { GFLassert(0, 0, 0); return; } if (arg2 == 0) { GFLassert(0, 0, 0); return; } if (arg3 == 0) { GFLassert(0, 0, 0); return; } uint8_t sync = *(arg0 + 0x1C); if (sync == 0) { void* item = *reinterpret_cast<void**>(arg0); if (!IsFileOpen(item)) { uint8_t* paramBase = *reinterpret_cast<uint8_t**>(arg0 + 0x2C); uint8_t* e = paramBase + arg1 * 12; *reinterpret_cast<uint32_t*>(e) = arg1; *reinterpret_cast<uint16_t*>(e + 4) = arg2; *reinterpret_cast<void**>(e + 8) = arg3; return; } } void* item2 = *reinterpret_cast<void**>(arg0); ReplacePaneTexture(item2, arg1, arg2, arg3, 0, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EEEB4
extern "C" bool YellowAuto_002eeeb4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool14ItemIconToolEx10IsReplacedEj");
extern "C" bool YellowAuto_002eeeb4(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= *reinterpret_cast<uint32_t*>(arg0 + 0x14)) { return true; } uint8_t* paramBase = *reinterpret_cast<uint8_t**>(arg0 + 0x2C); uint8_t* e = paramBase + arg1 * 12; uint32_t id = *reinterpret_cast<uint32_t*>(e); if (id == 0xFFFFFFFF) { return true; } uint16_t no = *reinterpret_cast<uint16_t*>(e + 4); if (no == 0) { return true; } void* pic = *reinterpret_cast<void**>(e + 8); if (pic == 0) { return true; } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF04C
void* GetPicturePane(void*, uint32_t);
void* GetPicturePaneWithParts(void*, void*, uint32_t, void*);
bool IsFileOpen(void*);
void ReplacePaneTexture(void*, uint32_t, uint16_t, void*, uint32_t, uint32_t);
void GFLassert(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002ef04c(uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint32_t arg3, void* arg4) __asm__("_ZN3app4tool14ItemIconToolEx11SetItemIconEjtjPN2nw3lyt5PartsE");
extern "C" void YellowAuto_002ef04c(uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint32_t arg3, void* arg4) {
void* lytwk = *reinterpret_cast<void**>(arg0 + 0x0C); void* pic = 0; if (arg4 == 0) { pic = GetPicturePane(lytwk, arg3); } else { void* resid = reinterpret_cast<void*>(arg0 + 0x10); pic = GetPicturePaneWithParts(lytwk, arg4, arg3, resid); } if (*reinterpret_cast<uint32_t*>(arg0 + 0x14) <= arg1) { GFLassert(0, 0, 0); return; } if (arg2 == 0) { GFLassert(0, 0, 0); return; } if (pic == 0) { GFLassert(0, 0, 0); return; } uint8_t sync = *(arg0 + 0x1C); if (sync == 0) { void* item = *reinterpret_cast<void**>(arg0); if (!IsFileOpen(item)) { uint8_t* paramBase = *reinterpret_cast<uint8_t**>(arg0 + 0x2C); uint8_t* e = paramBase + arg1 * 12; *reinterpret_cast<uint32_t*>(e) = arg1; *reinterpret_cast<uint16_t*>(e + 4) = arg2; *reinterpret_cast<void**>(e + 8) = pic; return; } } void* item2 = *reinterpret_cast<void**>(arg0); ReplacePaneTexture(item2, arg1, arg2, pic, 0, 0); return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF214
bool IsFileOpen(void* arg0);
void ReplacePaneTexture(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
extern "C" void YellowAuto_002ef214(uint8_t* arg0) __asm__("_ZN3app4tool14ItemIconToolEx6UpdateEv");
extern "C" void YellowAuto_002ef214(uint8_t* arg0) {
uint32_t s = *reinterpret_cast<uint32_t*>(arg0 + 0x24);
if (s == 0) {
if (*reinterpret_cast<uint8_t*>(arg0 + 0x1C) == 0 && !IsFileOpen(*reinterpret_cast<void**>(arg0 + 0x0))) return;
*reinterpret_cast<uint32_t*>(arg0 + 0x24) = 1;
return;
}
if (s != 1) return;
uint32_t c = *reinterpret_cast<uint32_t*>(arg0 + 0x14);
if (c != 0) {
uint8_t* b = *reinterpret_cast<uint8_t**>(arg0 + 0x2C);
for (uint32_t i = 0; i < c; ++i) {
uint8_t* e = b + i * 12;
uint32_t f = *reinterpret_cast<uint32_t*>(e + 0x0);
if (f != 0xFFFFFFFFU) {
uint32_t g = *reinterpret_cast<uint32_t*>(e + 0x4);
uint32_t h = *reinterpret_cast<uint32_t*>(e + 0x8);
if (g != 0 && h != 0) {
if (f < c) {
if (*reinterpret_cast<uint8_t*>(arg0 + 0x1C) == 0 && !IsFileOpen(*reinterpret_cast<void**>(arg0 + 0x0))) {
uint8_t* d = b + f * 12;
*reinterpret_cast<uint32_t*>(d + 0x0) = f;
*reinterpret_cast<uint16_t*>(d + 0x4) = (uint16_t)g;
*reinterpret_cast<uint32_t*>(d + 0x8) = h;
} else {
ReplacePaneTexture(*reinterpret_cast<void**>(arg0 + 0x0), f, g, h, 0, 0);
}
}
*reinterpret_cast<uint32_t*>(e + 0x0) = 0xFFFFFFFFU;
*reinterpret_cast<uint16_t*>(e + 0x4) = 0;
*reinterpret_cast<uint32_t*>(e + 0x8) = 0;
}
}
}
}
*reinterpret_cast<uint32_t*>(arg0 + 0x24) = 2;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF4F8
void sub_34fec0(uint8_t*);
uint32_t sub_48ee3c(uint8_t*, int32_t);
uint8_t* sub_310cec(uint8_t*, uint32_t);
uint8_t* sub_4b4968(uint32_t, uint8_t*);
uint8_t* sub_100050(uint8_t*, uint32_t, uint32_t, uint32_t);
uint8_t* sub_105500(uint32_t, uint8_t*);
uint8_t* sub_2ff8f4(uint8_t*, uint8_t*, uint8_t*, uint32_t);
void sub_2ff790(uint8_t*, uint32_t);
void sub_2ff314(uint8_t*, uint8_t*);
void sub_2ff88c(uint8_t*, uint8_t*);
extern "C" uint8_t* YellowAuto_002ef4f8(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2, int32_t arg3, uint32_t arg4, uint32_t arg5, int32_t arg6) __asm__("_ZN3app4tool14ItemIconToolExC1ENS1_17ItemIconToolParamE");
extern "C" uint8_t* YellowAuto_002ef4f8(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2, int32_t arg3, uint32_t arg4, uint32_t arg5, int32_t arg6) {
*(uint32_t*)(arg0 + 0) = 0; *(uint32_t*)(arg0 + 4) = 0; *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 12) = 0; sub_34fec0(arg0 + 16); *(uint32_t*)(arg0 + 20) = 0; *(uint32_t*)(arg0 + 24) = 0; *(uint8_t*)(arg0 + 28) = 0; *(uint32_t*)(arg0 + 32) = 0; *(uint32_t*)(arg0 + 36) = 0; *(uint32_t*)(arg0 + 40) = 0; *(uint32_t*)(arg0 + 44) = 0; *(uint32_t*)(arg0 + 4) = (uint32_t)arg2; uint8_t* _g = (uint8_t*)(*(uint32_t*)(arg1 + 96)); *(uint32_t*)(arg0 + 8) = (uint32_t)_g; *(uint32_t*)(arg0 + 20) = arg5; *(int32_t*)(arg0 + 24) = arg3; *(uint8_t*)(arg0 + 28) = (uint8_t)arg6; *(uint32_t*)(arg0 + 12) = sub_48ee3c(_g, arg3); uint8_t* _r = sub_310cec(_g, arg4); *(uint32_t*)(arg0 + 16) = *(uint32_t*)_r; if (*(uint8_t*)(arg0 + 28) != 0) *(uint32_t*)(arg0 + 36) = 2; uint8_t* _a = (uint8_t*)(*(uint32_t*)(arg2 + 8)); uint32_t _c = *(uint32_t*)(arg0 + 20); uint8_t* _p1 = sub_4b4968(_c * 12, _a); uint8_t* _v1 = 0; if (_p1 != 0) _v1 = sub_100050(_p1, *(uint32_t*)0x002EF734, 12, _c); *(uint32_t*)(arg0 + 44) = (uint32_t)_v1; uint8_t* _p2 = sub_4b4968(_c, _a); *(uint32_t*)(arg0 + 40) = (uint32_t)_p2; if (_c != 0) for (uint32_t _i = 0; _i < _c; ++_i) *(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 40)) + _i) = 0; uint8_t* _n = sub_105500(20, _a); uint8_t* _it = 0; if (_n != 0) _it = sub_2ff8f4(_n, _a, _a, _c); *(uint32_t*)(arg0 + 0) = (uint32_t)_it; if (((arg6 << 16) >> 24) != 0) for (uint32_t _j = 0; _j < _c; ++_j) sub_2ff790(_it, _j); if (*(uint8_t*)(arg0 + 28) == 0) sub_2ff88c(_it, _a); else sub_2ff314(_it, _a); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF350
uint32_t sub_306850(uint8_t*);
uint32_t sub_2ff788(uint8_t*, uint32_t);
void sub_2ff74c(uint8_t*);
void sub_2ff8b0(uint8_t*, uint8_t*);
uint32_t sub_306874(uint8_t*);
uint32_t sub_2f97ec(uint8_t*);
void sub_357cd8(uint8_t*);
extern "C" uint32_t YellowAuto_002ef350(uint8_t* arg0) __asm__("_ZN3app4tool14ItemIconToolEx7EndFuncEv");
extern "C" uint32_t YellowAuto_002ef350(uint8_t* arg0) {
uint32_t _s = *(uint32_t*)(arg0 + 32); if (_s > 6) return 0; if (_s == 0) { if (*(uint8_t*)(arg0 + 28) == 0 && sub_306850((uint8_t*)(*(uint32_t*)(arg0 + 0))) == 0) return 0; _s = *(uint32_t*)(arg0 + 32) + 1; *(uint32_t*)(arg0 + 32) = _s; } if (_s == 1) { uint32_t _c = *(uint32_t*)(arg0 + 20); bool _done = true; for (uint32_t _i = 0; _i < _c; ++_i) { if (*(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 40)) + _i) == 1) { if (sub_2ff788((uint8_t*)(*(uint32_t*)(arg0 + 0)), _i) != 0) *(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 40)) + _i) = 2; _done = false; } } if (!_done) return 0; _s = *(uint32_t*)(arg0 + 32) + 1; *(uint32_t*)(arg0 + 32) = _s; } if (_s == 2) { if (*(uint8_t*)(arg0 + 28) != 0) { sub_2ff74c((uint8_t*)(*(uint32_t*)(arg0 + 0))); *(uint32_t*)(arg0 + 32) = 4; return 0; } uint8_t* _h = (uint8_t*)(*(uint32_t*)(arg0 + 4)); uint8_t* _al = (uint8_t*)(*(uint32_t*)(_h + 8)); sub_2ff8b0((uint8_t*)(*(uint32_t*)(arg0 + 0)), _al); _s = *(uint32_t*)(arg0 + 32) + 1; *(uint32_t*)(arg0 + 32) = _s; } if (_s == 3) { if (sub_306874((uint8_t*)(*(uint32_t*)(arg0 + 0))) == 0) return 0; _s = *(uint32_t*)(arg0 + 32) + 1; *(uint32_t*)(arg0 + 32) = _s; } if (_s == 4) { if (sub_2f97ec((uint8_t*)(*(uint32_t*)(arg0 + 0))) == 0) return 0; _s = *(uint32_t*)(arg0 + 32) + 1; *(uint32_t*)(arg0 + 32) = _s; } if (_s == 5) { if (*(uint32_t*)(arg0 + 0) != 0) { uint8_t* _it = (uint8_t*)(*(uint32_t*)(arg0 + 0)); uint32_t _vt = *(uint32_t*)_it; uint32_t _fn = *(uint32_t*)(_vt + 4); ((void(*)(uint8_t*))_fn)(_it); *(uint32_t*)(arg0 + 0) = 0; } if (*(uint32_t*)(arg0 + 40) != 0) { sub_357cd8((uint8_t*)(*(uint32_t*)(arg0 + 40))); *(uint32_t*)(arg0 + 40) = 0; } if (*(uint32_t*)(arg0 + 44) != 0) { sub_357cd8((uint8_t*)(*(uint32_t*)(arg0 + 44))); *(uint32_t*)(arg0 + 44) = 0; } _s = *(uint32_t*)(arg0 + 32) + 1; *(uint32_t*)(arg0 + 32) = _s; } if (_s == 6 || *(uint32_t*)(arg0 + 32) == 6) return 1; return 0;
}
#endif
