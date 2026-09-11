// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459590
void StartSelectedAct(uint8_t *, uint32_t);
extern "C" void YellowAuto_00459590(uint8_t* arg0, uint8_t* arg1, int32_t arg2) __asm__("_ZN9NetAppLib2UI16NetAppCursorView24CursorController_OnEventEPN3app4tool16CursorControllerENS4_13IEventHandler9EventCodeE");
extern "C" void YellowAuto_00459590(uint8_t* arg0, uint8_t* arg1, int32_t arg2) {
if (arg2 != 1) return; uint32_t elems = *(uint32_t *)(arg0 + 0x11c); uint32_t idx = *(uint32_t *)(arg1 + 0x10); if (elems != 0 && idx < elems) StartSelectedAct(*(uint8_t **)(arg0 + 0x10), *(uint32_t *)(*(uint32_t *)(arg0 + 0x118) + idx * 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459530
void MoveTo(uint8_t *, uint32_t);
extern "C" void YellowAuto_00459530(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView18CursorMoveToButtonEj");
extern "C" void YellowAuto_00459530(uint8_t* arg0, uint32_t arg1) {
uint32_t elems = *(uint32_t *)(arg0 + 0x11c); uint32_t *table = *(uint32_t **)(arg0 + 0x118); for (uint32_t i = 0; i < elems; i++) if (table[i] == arg1) if (i < elems) return MoveTo(*(uint8_t **)(arg0 + 0x10c), i);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004595D4
void MoveTo(uint8_t *, uint32_t);
extern "C" void YellowAuto_004595d4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView29OnLayoutPaneTouchTriggerEventEj");
extern "C" void YellowAuto_004595d4(uint8_t* arg0, uint32_t arg1) {
uint32_t elems = *(uint32_t *)(arg0 + 0x11c); uint32_t *table = *(uint32_t **)(arg0 + 0x118); for (uint32_t i = 0; i < elems; i++) if (table[i] == arg1) if (i < elems) return MoveTo(*(uint8_t **)(arg0 + 0x10c), i);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459518
void MoveTo(uint8_t *, uint32_t);
extern "C" void YellowAuto_00459518(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView17CursorMoveToIndexEj");
extern "C" void YellowAuto_00459518(uint8_t* arg0, uint32_t arg1) {
if (arg1 < *(uint32_t *)(arg0 + 0x11c)) MoveTo(*(uint8_t **)(arg0 + 0x10c), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F3104
void SetVisible(uint8_t *, uint32_t, uint32_t);
extern "C" void YellowAuto_002f3104(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView16SetCursorVisibleEb");
extern "C" void YellowAuto_002f3104(uint8_t* arg0, bool arg1) {
*(uint8_t *)(arg0 + 0x120) = (uint8_t)arg1; uint8_t *ctrl = *(uint8_t **)(arg0 + 0x10c); if (arg1 == 0) *(uint8_t *)(ctrl + 0x5c) = 0; if (arg1 == 0) if (*(uint8_t **)(ctrl + 0x54) != (uint8_t *)0) SetVisible(*(uint8_t **)(ctrl + 0x54), 0, 3); if (arg1 != 0) *(uint8_t *)(ctrl + 0x5c) = 1; if (arg1 != 0) if (*(uint8_t **)(ctrl + 0x54) != (uint8_t *)0) SetVisible(*(uint8_t **)(ctrl + 0x54), 1, 3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459644
void BaseUpdate(uint8_t *);
extern "C" void YellowAuto_00459644(uint8_t* arg0) __asm__("_ZN9NetAppLib2UI16NetAppCursorView6UpdateEv");
extern "C" void YellowAuto_00459644(uint8_t* arg0) {
BaseUpdate(arg0); if (*(uint8_t *)(arg0 + 0x120) != 0) (*(void (**)(uint8_t *))(*(uint32_t *)(*(uint32_t *)(arg0 + 0x10c)) + 0x10))(*(uint8_t **)(arg0 + 0x10c));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AA550
bool BaseIsDrawing(const uint8_t *);
extern "C" bool YellowAuto_004aa550(const uint8_t* arg0) __asm__("_ZNK9NetAppLib2UI16NetAppCursorView9IsDrawingEv");
extern "C" bool YellowAuto_004aa550(const uint8_t* arg0) {
uint8_t *ctrl = *(uint8_t **)(arg0 + 0x10c); uint32_t r = (*(uint32_t (**)(uint8_t *))(*(uint32_t *)ctrl + 0xc))(ctrl); if (r == 0) return false; return BaseIsDrawing(arg0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004ADA00
void StartSelectedAct(uint32_t, uint32_t);
extern "C" void YellowAuto_004ada00(uint8_t* arg0, uint8_t* arg1, int32_t arg2) __asm__("_ZThn164_N9NetAppLib2UI16NetAppCursorView24CursorController_OnEventEPN3app4tool16CursorControllerENS4_13IEventHandler9EventCodeE");
extern "C" void YellowAuto_004ada00(uint8_t* arg0, uint8_t* arg1, int32_t arg2) {
if (arg2 != 1) return; uint8_t* v0 = arg0 - 0xA4; uint32_t v1 = *(uint32_t*)(v0 + 0x11C); uint32_t v2 = *(uint32_t*)(arg1 + 0x10); if (v1 == 0) return; if (v1 <= v2) return; uint32_t v3 = *(uint32_t*)(v0 + 0x10); uint32_t v4 = *(uint32_t*)(v0 + 0x118); uint32_t v5 = *(uint32_t*)(v4 + v2 * 4); StartSelectedAct(v3, v5);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AD82C
void MoveTo_helper(void* arg0, uint32_t arg1);
extern "C" void YellowAuto_004ad82c(uint8_t* arg0, uint32_t arg1) __asm__("_ZThn160_N9NetAppLib2UI16NetAppCursorView29OnLayoutPaneTouchTriggerEventEj");
extern "C" void YellowAuto_004ad82c(uint8_t* arg0, uint32_t arg1) {
uint8_t* base = arg0 - 0xA0;
uint32_t count = *(uint32_t*)(base + 0x11C);
uint32_t i = 0;
if (count == 0) return;
uint32_t* items = *(uint32_t**)(base + 0x118);
void* ctrl = *(void**)(base + 0x10C);
while (true) {
if (items[i] == arg1) {
if (count <= i) return;
MoveTo_helper(ctrl, i);
return;
}
i = i + 1;
if (i >= count) return;
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459454
void func_002f3024(void*, int32_t);
void* func_0048ee3c(void*, uint32_t);
void func_002f30c8(void*, int32_t, void*, void*);
void func_0030181c(void*);
void* func_004b4968(uint32_t, void*);
extern "C" void YellowAuto_00459454(uint8_t* arg0, void* arg1, const uint32_t* arg2, int32_t arg3) __asm__("_ZN9NetAppLib2UI16NetAppCursorView16SetCusorPosPanesEPPN2nw3lyt4PaneEPKji");
extern "C" void YellowAuto_00459454(uint8_t* arg0, void* arg1, const uint32_t* arg2, int32_t arg3) {
void* _c = (void*)(*(const uint32_t*)(arg0 + 0x10C));
func_002f3024(_c, arg3);
int32_t _i = 0;
if (arg3 != 0) {
do {
void* _g = (void*)(*(const uint32_t*)(arg0 + 0x60));
uint32_t _lid = *(const uint32_t*)(arg0 + 0x110);
void* _w = func_0048ee3c(_g, _lid);
void* _cc = (void*)(*(const uint32_t*)(arg0 + 0x10C));
uint32_t _pv = ((const uint32_t*)arg1)[_i];
void* _pane = (void*)_pv;
func_002f30c8(_cc, _i, _w, _pane);
_i += 1;
} while (_i < arg3);
}
void* _b0 = (void*)(*(const uint32_t*)(arg0 + 0xA8));
void* _b1 = (void*)(*(const uint32_t*)((uint8_t*)_b0 + 8));
void* _al = (void*)(*(const uint32_t*)((uint8_t*)_b1 + 8));
void* _old = (void*)(*(const uint32_t*)(arg0 + 0x118));
if (_old != (void*)0) {
func_0030181c(_old);
*(uint32_t*)(arg0 + 0x118) = (uint32_t)0;
}
*(uint32_t*)(arg0 + 0x11C) = (uint32_t)arg3;
void* _nw = func_004b4968((uint32_t)(arg3 << 2), _al);
*(uint32_t*)(arg0 + 0x118) = (uint32_t)_nw;
int32_t _n = (int32_t)*(const uint32_t*)(arg0 + 0x11C);
if (_n != 0) {
int32_t _k = _n;
int32_t _idx = 0;
do {
_k -= 1;
((uint32_t*)_nw)[_idx] = ((const uint32_t*)arg2)[_idx];
_idx += 1;
} while (_k != 0);
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459674
void NetApplicationViewBase(uint8_t*, uint32_t);
void CursorController(uint8_t*, uint32_t, uint32_t);
void LytMultiResID(uint8_t*);
extern "C" uint8_t* YellowAuto_00459674(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorViewC1EPNS_6System19ApplicationWorkBaseE");
extern "C" uint8_t* YellowAuto_00459674(uint8_t* arg0, uint8_t* arg1) {
NetApplicationViewBase(arg0, *(uint32_t*)(arg1 + 8)); *(uint32_t*)arg0 = *(uint32_t*)0x459730; *(uint32_t*)(arg0 + 0xA0) = *(uint32_t*)0x459730 + 0x6C; *(uint32_t*)(arg0 + 0xA4) = *(uint32_t*)0x459730 + 0x90; *(uint32_t*)(arg0 + 0xA8) = (uint32_t)arg1; CursorController(arg0 + 0xAC, *(uint32_t*)(arg1 + 8), *(uint32_t*)(arg1 + 0x2C)); *(uint32_t*)(arg0 + 0x10C) = 0; *(uint32_t*)(arg0 + 0x110) = 0; LytMultiResID(arg0 + 0x114); *(uint32_t*)(arg0 + 0x118) = 0; *(uint32_t*)(arg0 + 0x11C) = 0; *(uint8_t*)(arg0 + 0x120) = 1; *(uint32_t*)(arg0 + 0x124) = *(uint32_t*)(*(uint32_t*)0x459734); *(uint32_t*)(arg0 + 0x128) = *(uint32_t*)(*(uint32_t*)0x459734); *(uint32_t*)(arg0 + 0x12C) = *(uint32_t*)(*(uint32_t*)0x459734); *(uint32_t*)(arg0 + 0x130) = *(uint32_t*)(*(uint32_t*)0x459734); *(uint32_t*)(arg0 + 0x134) = *(uint32_t*)(*(uint32_t*)0x459734); *(uint32_t*)(arg0 + 0x138) = *(uint32_t*)(*(uint32_t*)0x459734); *(uint32_t*)(arg0 + 0x13C) = *(uint32_t*)(*(uint32_t*)0x459734); *(uint32_t*)(arg0 + 0x10C) = (uint32_t)(arg0 + 0xAC); *(uint32_t*)(arg0 + 0x14) = (uint32_t)(arg0 + 0xA0); return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045912C
void operator delete(void*);
void* GetLayoutWorkSetup(void*, int32_t);
void* GetResourceBuffer(void*, int32_t);
void* GetLayoutResourceID(void*, uint32_t);
extern "C" void YellowAuto_0045912c(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN9NetAppLib2UI16NetAppCursorView12CreateCursorEijj");
extern "C" void YellowAuto_0045912c(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3) {
void* g = (void*)(*(uint32_t*)(arg0 + 0x60));
if (*(uint32_t*)(arg0 + 0x118) != 0) {
operator delete((void*)(*(uint32_t*)(arg0 + 0x118)));
*(uint32_t*)(arg0 + 0x118) = 0;
}
uint32_t gp = *(uint32_t*)(void*)0x00459218;
uint32_t gv = *(uint32_t*)(void*)gp;
*(uint32_t*)(arg0 + 0x124) = gv;
*(uint32_t*)(arg0 + 0x128) = gv;
*(uint32_t*)(arg0 + 0x12C) = gv;
*(uint32_t*)(arg0 + 0x130) = gv;
*(uint32_t*)(arg0 + 0x134) = gv;
uint32_t ctrl = *(uint32_t*)(arg0 + 0x10C);
uint32_t w3c = *(uint32_t*)((uint8_t*)g + 0x3C);
void* setup = GetLayoutWorkSetup(g, 1);
uint32_t w4 = *(uint32_t*)((uint8_t*)g + 0x4);
uint32_t a8 = *(uint32_t*)(arg0 + 0xA8);
void* rm = (void*)(*(uint32_t*)(void*)(a8 + 0x28));
void* rbuf = GetResourceBuffer(rm, arg1);
uint32_t vt = *(uint32_t*)(void*)ctrl;
void* fptr = (void*)(*(uint32_t*)(void*)(vt + 8));
((void (*)(void*, void*, uint32_t, void*, uint32_t, int32_t))fptr)((void*)ctrl, rbuf, w4, setup, w3c, 0);
*(uint32_t*)(void*)(ctrl + 0x58) = (uint32_t)(arg0 + 0xA4);
*(uint32_t*)(arg0 + 0x110) = arg3;
void* rid = GetLayoutResourceID(g, arg2);
*(uint32_t*)(arg0 + 0x114) = *(uint32_t*)rid;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00458FC0
int32_t ThunkTarget(uint8_t*, void*, void*, void*);
extern "C" int32_t YellowAuto_00458fc0(uint8_t* arg0, void* arg1, void* arg2, void* arg3) __asm__("_ZThn160_N9NetAppLib2UI16NetAppCursorView11OnKeyActionEPN4gfl22ui6ButtonEPNS3_12VectorDeviceES7_");
extern "C" int32_t YellowAuto_00458fc0(uint8_t* arg0, void* arg1, void* arg2, void* arg3) {
return ThunkTarget(arg0 - 160, arg1, arg2, arg3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00458FC8
int32_t IsTrigger(void*, uint32_t, int32_t);
void StartSelectedAct(int32_t, uint32_t);
extern "C" int32_t YellowAuto_00458fc8(uint8_t* arg0, void* arg1, void* arg2, void* arg3) __asm__("_ZN9NetAppLib2UI16NetAppCursorView11OnKeyActionEPN4gfl22ui6ButtonEPNS3_12VectorDeviceES7_");
extern "C" int32_t YellowAuto_00458fc8(uint8_t* arg0, void* arg1, void* arg2, void* arg3) {
uint32_t vt = *(uint32_t*)arg0; uint32_t fa = *(uint32_t*)(vt + 32); int32_t v0 = ((int32_t (*)(uint8_t*))fa)(arg0); if (v0 != 0) return 0; if (*(arg0 + 288) != 0) { uint8_t* c = *(uint8_t**)(arg0 + 268); uint32_t vt2 = *(uint32_t*)c; uint32_t fa2 = *(uint32_t*)(vt2 + 24); int32_t v1 = ((int32_t (*)(uint8_t*, void*, void*, void*))fa2)(c, arg1, arg2, arg3); if (v1 != 1) return 0; } int32_t s = *(int32_t*)(arg0 + 16); uint32_t sent = *(uint32_t*)(*(uint32_t*)0x459128); uint32_t base = *(uint32_t*)0x459124; for (uint32_t i = 0; i < 7; i++) { uint32_t even = *(uint32_t*)(base + i * 8); uint32_t odd = *(uint32_t*)(arg0 + 292 + i * 4); if (odd == sent) continue; if (IsTrigger(arg1, even, 0) == 0) continue; StartSelectedAct(s, odd); return 0; } return 1;
}
#endif
