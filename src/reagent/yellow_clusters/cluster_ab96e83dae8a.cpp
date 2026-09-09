// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F31C4
void* fn_00105500(uint32_t, void*);
void* fn_002e9da0(void*, void*, void*);
void fn_002e99f4(void*, const void*, void*, bool, uint32_t, uint32_t);
void fn_002e96b0(void*);
extern "C" void YellowAuto_002f31c4(uint8_t* arg0, void* arg1, const void* arg2, void* arg3, bool arg4) __asm__("_ZN3app4tool16CursorController5SetupEPvPN4gfl23lyt6LytSysEPKNS4_10LytWkSetUpEPNS_4util14AppLytAccessorEb");
extern "C" void YellowAuto_002f31c4(uint8_t* arg0, void* arg1, const void* arg2, void* arg3, bool arg4) {
uint32_t _t = *(uint32_t*)(arg0 + 0x4);
void* _al = (void*)*(uint32_t*)(_t + 0x8);
void* _p = fn_00105500(0x24, _al);
void* _c = (void*)0;
if (_p != (void*)0) {
uint32_t _b[3];
_b[0] = (uint32_t)arg1;
_b[1] = (uint32_t)arg2;
_b[2] = (uint32_t)arg3;
_c = fn_002e9da0(_p, (void*)*(uint32_t*)(arg0 + 0x4), (void*)_b);
}
*(uint32_t*)(arg0 + 0x54) = (uint32_t)_c;
fn_002e99f4(_c, arg2, arg3, arg4, 0, 0);
fn_002e96b0(_c);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F323C
void fn_002e9870(void*, void*, uint32_t);
extern "C" void YellowAuto_002f323c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool16CursorController6MoveToEj");
extern "C" void YellowAuto_002f323c(uint8_t* arg0, uint32_t arg1) {
if (*(uint32_t*)(arg0 + 0xC) == (uint32_t)0) return;
uint32_t _d = *(uint32_t*)(arg0 + 0xC);
uint32_t _r = (uint32_t)arg1 % _d;
*(uint32_t*)(arg0 + 0x10) = _r;
uint32_t _cur = *(uint32_t*)(arg0 + 0x54);
if (_cur == (uint32_t)0) return;
if (*(uint32_t*)(_cur + 0x10) == (uint32_t)0) return;
uint32_t _idx = *(uint32_t*)(arg0 + 0x10);
uint8_t* _base = arg0 + _idx * (uint32_t)8;
uint32_t _pane = *(uint32_t*)(_base + 0x14);
uint32_t _val = (uint32_t)0;
if (_pane != (uint32_t)0) _val = *(uint32_t*)(_base + 0x18);
if (_pane == (uint32_t)0) return;
if (_val == (uint32_t)0) return;
fn_002e9870((void*)_cur, (void*)_pane, _val);
uint32_t _cb = *(uint32_t*)(arg0 + 0x58);
if (_cb == (uint32_t)0) return;
uint32_t _vt = *(uint32_t*)_cb;
uint32_t _fn = *(uint32_t*)(_vt + 0x8);
((void(*)(uint32_t, uint8_t*, uint32_t))_fn)(_cb, arg0, (uint32_t)0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F349C
extern "C" uint8_t* YellowAuto_002f349c(uint8_t* arg0) __asm__("_ZN3app4tool16CursorControllerD1Ev");
extern "C" uint8_t* YellowAuto_002f349c(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x2F34D4;
uint32_t _o = *(uint32_t*)(arg0 + 0x54);
if (_o != (uint32_t)0) {
uint32_t _v = *(uint32_t*)_o;
uint32_t _f = *(uint32_t*)(_v + 0x4);
((void(*)(uint32_t))_f)(_o);
*(uint32_t*)(arg0 + 0x54) = (uint32_t)0;
}
return arg0;
}
#endif
