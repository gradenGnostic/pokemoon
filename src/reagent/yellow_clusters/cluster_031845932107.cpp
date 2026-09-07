// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6B28
void GFLassert();
void* operator_new(uint32_t, void*);
void* func_00304d3c(void*, const uint8_t*, int8_t, int32_t);
extern "C" void YellowAuto_002e6b28(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3app4tool12PaneListView14CreatePaneListEPKNS0_8PaneList11SETUP_PARAME");
extern "C" void YellowAuto_002e6b28(uint8_t* arg0, const uint8_t* arg1) {
if (*(uint32_t*)(arg0 + 0x88) != 0) { GFLassert(); return; } void* _heap = (void*)(*(uint32_t*)(*(uint32_t*)(arg0 + 0x84) + 4)); void* _mem = operator_new(0xDC, _heap); void* _res = (void*)0; if (_mem != (void*)0) { _res = func_00304d3c(_mem, arg1, (int8_t)(*(uint8_t*)(arg0 + 0x94)), 1); } *(uint32_t*)(arg0 + 0x88) = (uint32_t)_res; *(uint32_t*)(arg0 + 0x14) = (uint32_t)(arg0 + 0x80);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EBD08
void GFLassert();
void* operator_new(uint32_t, void*);
void* func_003120f4(void*, const uint8_t*);
void func_00311ecc(void*, int32_t);
void func_00311f6c(void*, uint32_t);
void func_00305674(void*, bool);
extern "C" void YellowAuto_002ebd08(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3app4tool12PaneListView15CreateScrollBarEPKNS_4util9ScrollBar11SETUP_PARAME");
extern "C" void YellowAuto_002ebd08(uint8_t* arg0, const uint8_t* arg1) {
if (*(uint32_t*)(arg0 + 0x8C) != 0) { GFLassert(); return; } void* _heap = (void*)(*(uint32_t*)(*(uint32_t*)(arg0 + 0x84) + 4)); void* _mem = operator_new(0x24, _heap); void* _res = (void*)0; if (_mem != (void*)0) { _res = func_003120f4(_mem, arg1); } *(uint32_t*)(arg0 + 0x8C) = (uint32_t)_res; func_00311ecc(_res, 0); uint32_t _max = *(const uint32_t*)(arg1 + 0x8); if (*(uint32_t*)(arg0 + 0x8C) == 0) { return; } func_00311f6c((void*)(*(uint32_t*)(arg0 + 0x8C)), _max); if (_max == 0) { func_00305674((void*)(*(uint32_t*)(arg0 + 0x8C)), false); } else { func_00305674((void*)(*(uint32_t*)(arg0 + 0x8C)), true); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EBC08
void* func_00304e98(void*);
void operator_delete(void*);
void* operator_new(uint32_t, void*);
void* func_00304d3c(void*, const uint8_t*, int8_t, int32_t);
void func_00311f6c(void*, uint32_t);
void func_00305674(void*, bool);
extern "C" void YellowAuto_002ebc08(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3app4tool12PaneListView13ResetPaneListEPKNS0_8PaneList11SETUP_PARAME");
extern "C" void YellowAuto_002ebc08(uint8_t* arg0, const uint8_t* arg1) {
if (*(uint32_t*)(arg0 + 0x88) != 0) { void* _old = func_00304e98((void*)(*(uint32_t*)(arg0 + 0x88))); operator_delete(_old); *(uint32_t*)(arg0 + 0x88) = 0; } void* _heap = (void*)(*(uint32_t*)(*(uint32_t*)(arg0 + 0x84) + 4)); void* _mem = operator_new(0xDC, _heap); void* _res = (void*)0; if (_mem != (void*)0) { _res = func_00304d3c(_mem, arg1, (int8_t)(*(uint8_t*)(arg0 + 0x94)), 1); } *(uint32_t*)(arg0 + 0x88) = (uint32_t)_res; *(uint32_t*)(arg0 + 0x14) = (uint32_t)(arg0 + 0x80); uint32_t _a = *(const uint32_t*)(arg1 + 0x10); uint32_t _b = *(const uint32_t*)(arg1 + 0x14); void* _sb = (void*)(*(uint32_t*)(arg0 + 0x8C)); if (_a > _b) { uint32_t _d = _a - _b; if (_sb == (void*)0) { return; } func_00311f6c(_sb, _d); if (_d != 0) { func_00305674(_sb, true); return; } } else { if (_sb == (void*)0) { return; } func_00311f6c(_sb, 0); } func_00305674(_sb, false);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D758
int32_t func_0048e718(const void*);
extern "C" int32_t YellowAuto_0048d758(const uint8_t* arg0) __asm__("_ZNK3app4tool12PaneListView15GetUpdateResultEv");
extern "C" int32_t YellowAuto_0048d758(const uint8_t* arg0) {
const void* _p = (const void*)(*(const uint32_t*)(arg0 + 0x88)); if (_p != (const void*)0) { return func_0048e718(_p); } return 0;
}
#endif
