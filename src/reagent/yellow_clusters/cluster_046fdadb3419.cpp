// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA928
extern "C" bool YellowAuto_002ea928(uint8_t* arg0) __asm__("_ZN3App4Tool15MessageMenuView7IsSetupEv");
extern "C" bool YellowAuto_002ea928(uint8_t* arg0) {
return *(bool *)(*(uint32_t *)(arg0 + 152) + 192);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CED08
void func_002ea6c0(void*, void*, uint32_t, bool, bool, uint32_t);
void func_0035be88();
extern "C" void YellowAuto_002ced08(uint8_t* arg0, void* arg1, uint32_t arg2, bool arg3, bool arg4, uint32_t arg5) __asm__("_ZN3App4Tool15MessageMenuView7AddItemEPN4gfl23str7MsgDataEjbbj");
extern "C" void YellowAuto_002ced08(uint8_t* arg0, void* arg1, uint32_t arg2, bool arg3, bool arg4, uint32_t arg5) {
if (arg1 == (void *)0) { func_0035be88(); return; } func_002ea6c0((void *)(*(uint32_t *)(arg0 + 152)), arg1, arg2, arg3, arg4, arg5);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BEC88
extern "C" void YellowAuto_003bec88(uint8_t* arg0, bool arg1) __asm__("_ZN3App4Tool15MessageMenuView17SetMessageAutoFlgEb");
extern "C" void YellowAuto_003bec88(uint8_t* arg0, bool arg1) {
*(bool *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(arg0 + 148) + 96) + 52) + 217) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CDFD4
void func_002d1cd8(void*);
void func_002ea2c8(void*, bool);
void func_002ea7d4(void*, bool);
void func_002e6b00(void*, bool);
extern "C" void YellowAuto_002cdfd4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool15MessageMenuView10SelectMenuEj");
extern "C" void YellowAuto_002cdfd4(uint8_t* arg0, uint32_t arg1) {
func_002d1cd8((void *)(*(uint32_t *)(arg0 + 148))); if ((void *)(*(uint32_t *)(arg0 + 152)) != (void *)0 && *(uint8_t *)((*(uint32_t *)(arg0 + 152)) + 344) != (uint8_t)0) { func_002ea2c8((void *)(*(uint32_t *)(arg0 + 152)), false); func_002ea7d4((void *)(*(uint32_t *)(arg0 + 152)), true); } *(uint8_t *)(arg0 + 165) = (uint8_t)0; *(uint8_t *)(arg0 + 109) = (uint8_t)0; *(uint8_t *)((*(uint32_t *)(arg0 + 152)) + 109) = (uint8_t)0; func_002e6b00((void *)(*(uint32_t *)(arg0 + 152)), false); *(uint32_t *)(arg0 + 156) = arg1; if ((void *)(*(uint32_t *)(arg0 + 144)) == (void *)0) { return; } if (*(uint8_t *)(arg0 + 164) == (uint8_t)0) { (*(void (**)(void *, uint32_t))(*(uint32_t *)(*(uint32_t *)(arg0 + 144)) + 8))((void *)(*(uint32_t *)(arg0 + 144)), 2); return; } if (arg1 == 0) { (*(void (**)(void *, uint32_t))(*(uint32_t *)(*(uint32_t *)(arg0 + 144)) + 8))((void *)(*(uint32_t *)(arg0 + 144)), 3); return; } (*(void (**)(void *, uint32_t))(*(uint32_t *)(*(uint32_t *)(arg0 + 144)) + 8))((void *)(*(uint32_t *)(arg0 + 144)), 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CE994
void* func_00105500(uint32_t, void*);
void func_002d1fa4(void*, const void*, void*);
extern "C" void* YellowAuto_002ce994(uint8_t* arg0, const void* arg1, void* arg2) __asm__("_ZN3App4Tool15MessageMenuView29CreateCommonMessageWindowViewERKNS0_23CommonMessageWindowView5PARAMEPNS2_13IEventHandlerE");
extern "C" void* YellowAuto_002ce994(uint8_t* arg0, const void* arg1, void* arg2) {
arg0 = (uint8_t *)func_00105500(288, (void *)(*(uint32_t *)((*(uint32_t *)arg1) + 8))); if (arg0 == (uint8_t *)0) { return (void *)0; } func_002d1fa4((void *)arg0, arg1, arg2); return (void *)arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6A98
void Func_002d1cd8(uint8_t*);
void Func_002ea2c8(uint8_t*, bool);
void Func_002ea7d4(uint8_t*, bool);
extern "C" void YellowAuto_002e6a98(uint8_t* arg0) __asm__("_ZN3App4Tool15MessageMenuView11HideMessageEv");
extern "C" void YellowAuto_002e6a98(uint8_t* arg0) {
Func_002d1cd8(*(uint8_t**)(arg0 + 0x94));
uint8_t* p = *(uint8_t**)(arg0 + 0x98);
uint32_t f = 0;
if (p != (uint8_t*)0) {
f = (uint32_t)*(uint8_t*)(p + 0x158);
}
if (p != (uint8_t*)0 && f != 0) {
Func_002ea2c8(p, false);
Func_002ea7d4(*(uint8_t**)(arg0 + 0x98), true);
}
*(uint8_t*)(arg0 + 0xA5) = 0;
*(uint8_t*)(arg0 + 0x6D) = 0;
*(uint8_t*)(*(uint8_t**)(arg0 + 0x98) + 0x6D) = 0;
*(uint8_t*)(*(uint8_t**)(arg0 + 0x98) + 0x2D) = 0;
uint8_t* q = *(uint8_t**)(arg0 + 0x98);
uint32_t vt = *(uint32_t*)q;
uint32_t fn = *(uint32_t*)(vt + 0x1C);
((void (*)(uint8_t*, bool))fn)(q, false);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CE088
void Func_002d1d38(uint8_t*, const void*, uint32_t, bool, bool, bool);
uint8_t* Func_0048cb14(uint8_t*);
void Func_00355020(void*, uint32_t);
extern "C" void YellowAuto_002ce088(uint8_t* arg0, const void* arg1, uint32_t arg2, bool arg3, bool arg4, bool arg5) __asm__("_ZN3App4Tool15MessageMenuView11ShowMessageERKN4gfl23str7MsgDataEjbbb");
extern "C" void YellowAuto_002ce088(uint8_t* arg0, const void* arg1, uint32_t arg2, bool arg3, bool arg4, bool arg5) {
Func_002d1d38(*(uint8_t**)(arg0 + 0x94), arg1, arg2, arg3, arg4, arg5);
uint8_t* a = *(uint8_t**)(arg0 + 0x94);
if (a == (uint8_t*)0) return;
uint8_t* b = Func_0048cb14(a + 0x8C);
if (b == (uint8_t*)0) return;
void* c = *(void**)(b + 0x34);
if (c == (void*)0) return;
uint32_t u = 0;
do {
Func_00355020(c, u);
u = (u + 1) & 0xFF;
} while (u < 2);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CE1A8
void func_002d1d04(void*, const void*, bool, uint32_t, uint32_t);
void* func_0048cb14(void*);
void func_00355020(void*, uint32_t);
extern "C" void YellowAuto_002ce1a8(uint8_t* arg0, const void* arg1, bool arg2, void* arg3) __asm__("_ZN3App4Tool15MessageMenuView23ShowMessageWithListMenuEPKN4gfl23str6StrBufEbPNS1_15IAddItemHandlerE");
extern "C" void YellowAuto_002ce1a8(uint8_t* arg0, const void* arg1, bool arg2, void* arg3) {
if (arg3 != (void*)0) {
void** _v0 = *(void***)arg3;
void* _w0 = *(void**)(arg0 + 0x98);
((void(*)(void*, void*))_v0[2])(arg3, _w0);
}
func_002d1d04(*(void**)(arg0 + 0x94), arg1, arg2, 0, 1);
void* _c = *(void**)(arg0 + 0x94);
if (_c != (void*)0) {
void* _d = func_0048cb14((void*)((uint8_t*)_c + 0x8C));
if (_d != (void*)0) {
void* _e = *(void**)((uint8_t*)_d + 0x34);
if (_e != (void*)0) {
uint32_t _i = 0;
do {
func_00355020(_e, _i);
_i = (_i + 1) & 0xFF;
} while (_i < 2);
}
}
}
*(arg0 + 0xA5) = 0;
*(arg0 + 0x6D) = 1;
*(arg0 + 0xA5) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AC3E4
void func_002d1cd8(void*);
void func_002ea2c8(void*, uint32_t);
void func_002ea7d4(void*, uint32_t);
void func_002e6b00(void*, bool);
extern "C" void YellowAuto_004ac3e4(uint8_t* arg0, uint32_t arg1) __asm__("_ZThn128_N3App4Tool15MessageMenuView10SelectMenuEj");
extern "C" void YellowAuto_004ac3e4(uint8_t* arg0, uint32_t arg1) {
uint8_t* _t = arg0 - 0x80;
void* _w = *(void**)(_t + 0x94);
func_002d1cd8(_w);
void* _m = *(void**)(_t + 0x98);
if (_m != (void*)0 && *((uint8_t*)_m + 0x158) != 0) {
func_002ea2c8(_m, 0);
func_002ea7d4(_m, 1);
}
*(_t + 0xA5) = 0;
*(_t + 0x6D) = 0;
*((uint8_t*)_m + 0x6D) = 0;
func_002e6b00(_m, false);
*(uint32_t*)(_t + 0x9C) = arg1;
void* _h = *(void**)(_t + 0x90);
if (_h == (void*)0) {
return;
}
if (*(_t + 0xA4) == 0) {
void** _v0 = *(void***)_h;
((void(*)(void*, uint32_t))_v0[2])(_h, 2);
} else {
uint32_t _c = (arg1 == 0) ? 3 : 4;
void** _v1 = *(void***)_h;
((void(*)(void*, uint32_t))_v1[2])(_h, _c);
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CE9D4
void func_002e6b00(void* arg0, uint8_t arg1);
void func_002ea2c8(void* arg0, uint8_t arg1);
void func_002eaaec(uint32_t arg0, uint32_t arg1, void* arg2, uint8_t arg3, int32_t arg4);
extern "C" void YellowAuto_002ce9d4(uint8_t* arg0, int32_t arg1) __asm__("_ZN3App4Tool15MessageMenuView31CommonMessageWindowView_OnEventENS0_23CommonMessageWindowView13IEventHandler9EventCodeE");
extern "C" void YellowAuto_002ce9d4(uint8_t* arg0, int32_t arg1) {
if (arg1 == (int32_t)0) {
if (*(uint8_t*)(arg0 + 0xA6) == (uint8_t)0 && *(uint8_t*)(arg0 + 0xA5) != (uint8_t)0) {
func_002e6b00(*(void**)(arg0 + 0x98), (uint8_t)1);
if (*(uint8_t*)(arg0 + 0xA4) == (uint8_t)0) {
func_002eaaec(*(uint32_t*)(*(uint32_t*)0x002CEB0C), *(uint32_t*)(*(uint32_t*)0x002CEB08), *(void**)(arg0 + 0x98), (uint8_t)0, (int32_t)3);
} else {
func_002ea2c8(*(void**)(arg0 + 0x98), (uint8_t)0);
}
*(uint8_t*)(*(uint8_t**)(arg0 + 0x98) + 0x6D) = (uint8_t)1;
*(uint8_t*)(arg0 + 0xA5) = (uint8_t)0;
}
if (*(void**)(arg0 + 0x90) != (void*)0) {
((void(*)(void*, int32_t))*(uint32_t*)(*(uint32_t*)*(void**)(arg0 + 0x90) + (uint32_t)8))(*(void**)(arg0 + 0x90), (int32_t)0);
}
} else if (arg1 == (int32_t)1) {
if (*(uint8_t*)(arg0 + 0xA5) != (uint8_t)0) {
func_002e6b00(*(void**)(arg0 + 0x98), (uint8_t)1);
if (*(uint8_t*)(arg0 + 0xA4) == (uint8_t)0) {
func_002eaaec(*(uint32_t*)(*(uint32_t*)0x002CEB0C), *(uint32_t*)(*(uint32_t*)0x002CEB08), *(void**)(arg0 + 0x98), (uint8_t)0, (int32_t)3);
} else {
func_002ea2c8(*(void**)(arg0 + 0x98), (uint8_t)0);
}
*(uint8_t*)(*(uint8_t**)(arg0 + 0x98) + 0x6D) = (uint8_t)1;
*(uint8_t*)(arg0 + 0xA5) = (uint8_t)0;
}
if (*(void**)(arg0 + 0x90) != (void*)0) {
((void(*)(void*, int32_t))*(uint32_t*)(*(uint32_t*)*(void**)(arg0 + 0x90) + (uint32_t)8))(*(void**)(arg0 + 0x90), (int32_t)1);
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CE4C8
void func_002ea2c8(void* arg0, uint8_t arg1);
void func_002ea7d4(void* arg0, int32_t arg1);
void func_002ea750(void* arg0, const void* arg1, uint8_t arg2, uint8_t arg3, int32_t arg4);
void func_002d1d04(void* arg0, const void* arg1, bool arg2, uint8_t arg3, int32_t arg4);
uint32_t func_0048cb14(void* arg0);
void func_00355020(void* arg0, uint32_t arg1);
extern "C" void YellowAuto_002ce4c8(uint8_t* arg0, const uint8_t* arg1, bool arg2, const uint8_t* arg3, const uint8_t* arg4, const uint8_t* arg5, const uint8_t* arg6, const uint8_t* arg7, const uint8_t* arg8) __asm__("_ZN3App4Tool15MessageMenuView23ShowMessageWithListMenuEPKN4gfl23str6StrBufEbS6_S6_S6_S6_S6_S6_");
extern "C" void YellowAuto_002ce4c8(uint8_t* arg0, const uint8_t* arg1, bool arg2, const uint8_t* arg3, const uint8_t* arg4, const uint8_t* arg5, const uint8_t* arg6, const uint8_t* arg7, const uint8_t* arg8) {
if (*(uint8_t*)(*(uint8_t**)(arg0 + 0x98) + 0x158) != (uint8_t)0 && (arg3 != (const uint8_t*)0 || arg4 != (const uint8_t*)0 || arg5 != (const uint8_t*)0 || arg6 != (const uint8_t*)0 || arg7 != (const uint8_t*)0 || arg8 != (const uint8_t*)0)) {
if (*(void**)(arg0 + 0x98) != (void*)0 && *(uint8_t*)(*(uint8_t**)(arg0 + 0x98) + 0x158) != (uint8_t)0) {
func_002ea2c8(*(void**)(arg0 + 0x98), (uint8_t)0);
func_002ea7d4(*(void**)(arg0 + 0x98), (int32_t)1);
}
*(uint8_t*)(arg0 + 0xA5) = (uint8_t)0;
}
if (arg3 != (const uint8_t*)0) {
uint8_t f0 = (uint8_t)0;
if (*(uint8_t*)(arg0 + 0xA4) != (uint8_t)0 && *(int32_t*)(arg0 + 0xA0) == (int32_t)0) { f0 = (uint8_t)1; }
func_002ea750(*(void**)(arg0 + 0x98), (const void*)arg3, f0, (uint8_t)0, (int32_t)0);
}
if (arg4 != (const uint8_t*)0) {
uint8_t f1 = (uint8_t)0;
if (*(uint8_t*)(arg0 + 0xA4) != (uint8_t)0 && *(int32_t*)(arg0 + 0xA0) == (int32_t)1) { f1 = (uint8_t)1; }
func_002ea750(*(void**)(arg0 + 0x98), (const void*)arg4, f1, (uint8_t)0, (int32_t)0);
}
if (arg5 != (const uint8_t*)0) {
func_002ea750(*(void**)(arg0 + 0x98), (const void*)arg5, (uint8_t)0, (uint8_t)0, (int32_t)0);
}
if (arg6 != (const uint8_t*)0) {
func_002ea750(*(void**)(arg0 + 0x98), (const void*)arg6, (uint8_t)0, (uint8_t)0, (int32_t)0);
}
if (arg7 != (const uint8_t*)0) {
func_002ea750(*(void**)(arg0 + 0x98), (const void*)arg7, (uint8_t)0, (uint8_t)0, (int32_t)0);
}
if (arg8 != (const uint8_t*)0) {
func_002ea750(*(void**)(arg0 + 0x98), (const void*)arg8, (uint8_t)0, (uint8_t)0, (int32_t)0);
}
func_002d1d04(*(void**)(arg0 + 0x94), (const void*)arg1, arg2, (uint8_t)0, (int32_t)1);
if (*(void**)(arg0 + 0x94) != (void*)0) {
uint32_t t = func_0048cb14((void*)((uint8_t*)*(void**)(arg0 + 0x94) + 0x8C));
if (t != (uint32_t)0) {
uint32_t u = *(uint32_t*)(t + 0x34);
if (u != (uint32_t)0) {
func_00355020((void*)u, (uint32_t)0);
func_00355020((void*)u, (uint32_t)1);
}
}
}
*(uint8_t*)(arg0 + 0xA5) = (uint8_t)0;
*(uint8_t*)(arg0 + 0x6D) = (uint8_t)1;
*(uint8_t*)(arg0 + 0xA5) = (uint8_t)1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CE258
uint16_t func_0049a978(const void* arg0);
void* func_00105500(uint32_t arg0, void* arg1);
void* func_00354664(void* arg0, uint32_t arg1, void* arg2);
void func_00355f6c(const void* arg0, uint32_t arg1, void* arg2);
void func_002ce4c8(void* arg0, const void* arg1, bool arg2, const void* arg3, const void* arg4, const void* arg5, const void* arg6, const void* arg7, const void* arg8);
extern "C" void YellowAuto_002ce258(uint8_t* arg0, const uint8_t* arg1, bool arg2, const void* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9) __asm__("_ZN3App4Tool15MessageMenuView23ShowMessageWithListMenuEPKN4gfl23str6StrBufEbRKNS3_7MsgDataEjjjjjj");
extern "C" void YellowAuto_002ce258(uint8_t* arg0, const uint8_t* arg1, bool arg2, const void* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9) {
uint32_t cnt = (uint32_t)func_0049a978(arg3);
void* alloc = *(void**)((uint8_t*)*(void**)(arg0 + 0x88) + 0x08);
void* b0 = (void*)0;
void* b1 = (void*)0;
void* b2 = (void*)0;
void* b3 = (void*)0;
void* b4 = (void*)0;
void* b5 = (void*)0;
if (arg4 < cnt) {
void* m0 = func_00105500((uint32_t)0x10, alloc);
if (m0 != (void*)0) { b0 = func_00354664(m0, (uint32_t)0x100, alloc); }
}
if (arg5 < cnt) {
void* m1 = func_00105500((uint32_t)0x10, alloc);
if (m1 != (void*)0) { b1 = func_00354664(m1, (uint32_t)0x100, alloc); }
}
if (arg6 < cnt) {
void* m2 = func_00105500((uint32_t)0x10, alloc);
if (m2 != (void*)0) { b2 = func_00354664(m2, (uint32_t)0x100, alloc); }
}
if (arg7 < cnt) {
void* m3 = func_00105500((uint32_t)0x10, alloc);
if (m3 != (void*)0) { b3 = func_00354664(m3, (uint32_t)0x100, alloc); }
}
if (arg8 < cnt) {
void* m4 = func_00105500((uint32_t)0x10, alloc);
if (m4 != (void*)0) { b4 = func_00354664(m4, (uint32_t)0x100, alloc); }
}
if (arg9 < cnt) {
void* m5 = func_00105500((uint32_t)0x10, alloc);
if (m5 != (void*)0) { b5 = func_00354664(m5, (uint32_t)0x100, alloc); }
}
if (b0 != (void*)0) { func_00355f6c(arg3, arg4, b0); }
if (b1 != (void*)0) { func_00355f6c(arg3, arg5, b1); }
if (b2 != (void*)0) { func_00355f6c(arg3, arg6, b2); }
if (b3 != (void*)0) { func_00355f6c(arg3, arg7, b3); }
if (b4 != (void*)0) { func_00355f6c(arg3, arg8, b4); }
if (b5 != (void*)0) { func_00355f6c(arg3, arg9, b5); }
func_002ce4c8((void*)arg0, (const void*)arg1, arg2, (const void*)b0, (const void*)b1, (const void*)b2, (const void*)b3, (const void*)b4, (const void*)b5);
if (b0 != (void*)0) { ((void(*)(void*))*(uint32_t*)(*(uint32_t*)b0 + (uint32_t)4))(b0); }
if (b1 != (void*)0) { ((void(*)(void*))*(uint32_t*)(*(uint32_t*)b1 + (uint32_t)4))(b1); }
if (b2 != (void*)0) { ((void(*)(void*))*(uint32_t*)(*(uint32_t*)b2 + (uint32_t)4))(b2); }
if (b3 != (void*)0) { ((void(*)(void*))*(uint32_t*)(*(uint32_t*)b3 + (uint32_t)4))(b3); }
if (b4 != (void*)0) { ((void(*)(void*))*(uint32_t*)(*(uint32_t*)b4 + (uint32_t)4))(b4); }
if (b5 != (void*)0) { ((void(*)(void*))*(uint32_t*)(*(uint32_t*)b5 + (uint32_t)4))(b5); }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E7F38
void FUN_002d1d04(void*, const void*, bool, bool, bool);
void* FUN_0048cb14(void*);
void FUN_00355020(void*, uint32_t);
extern "C" void YellowAuto_002e7f38(uint8_t* arg0, const void* arg1, bool arg2, bool arg3, bool arg4) __asm__("_ZN3App4Tool15MessageMenuView11ShowMessageEPKN4gfl23str6StrBufEbbb");
extern "C" void YellowAuto_002e7f38(uint8_t* arg0, const void* arg1, bool arg2, bool arg3, bool arg4) {
void* _v0 = (void*)(*(uint32_t*)(arg0 + 0x94));
FUN_002d1d04(_v0, arg1, arg2, arg3, arg4);
uint32_t _b = *(uint32_t*)(arg0 + 0x94);
if (_b != 0) {
void* _c = (void*)(_b + 0x8C);
void* _d = FUN_0048cb14(_c);
if (_d != (void*)0) {
uint32_t _e = *(uint32_t*)((uint8_t*)_d + 0x34);
if (_e != 0) {
void* _f = (void*)_e;
FUN_00355020(_f, 0);
FUN_00355020(_f, 1);
}
}
}
*(uint8_t*)(arg0 + 0xA5) = 0;
*(uint8_t*)(arg0 + 0x6D) = (uint8_t)arg4;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CEC44
void sub_002e7314(uint8_t*, uint8_t*);
void* sub_00105500(uint32_t, void*);
uint8_t* sub_002eae0c(uint8_t*, uint8_t*, uint32_t, uint32_t, int32_t, int32_t);
extern "C" void YellowAuto_002cec44(uint8_t* arg0, int32_t arg1, uint32_t arg2) __asm__("_ZN3App4Tool15MessageMenuView5SetupEPvS2_");
extern "C" void YellowAuto_002cec44(uint8_t* arg0, int32_t arg1, uint32_t arg2) {
uint8_t* _b0 = (uint8_t*)(*(uint32_t*)(arg0 + 0x88));
uint32_t _b1 = *(uint32_t*)(arg0 + 0x8C);
uint32_t _sp[2];
_sp[0] = (uint32_t)_b0;
_sp[1] = _b1;
uint8_t* _vt0 = (uint8_t*)(*(uint32_t*)arg0);
uint32_t _fn0 = *(uint32_t*)(_vt0 + 0x58);
uint8_t* _cr = ((uint8_t* (*)(uint8_t*, void*, uint8_t*))_fn0)(arg0, (void*)_sp, arg0 + 0x84);
*(uint32_t*)(arg0 + 0x94) = (uint32_t)_cr;
sub_002e7314(arg0, _cr);
void* _alc = (void*)(*(uint32_t*)(_b0 + 0x8));
void* _nw = sub_00105500(0x15C, _alc);
uint8_t* _mw = (uint8_t*)0;
if (_nw != (void*)0)
_mw = sub_002eae0c((uint8_t*)_nw, _b0, _b1, arg2, 1, arg1);
*(uint32_t*)(arg0 + 0x98) = (uint32_t)_mw;
*(uint32_t*)(_mw + 0x154) = (uint32_t)(arg0 + 0x80);
sub_002e7314(_cr, _mw);
*(arg0 + 0x6D) = 0;
*(_mw + 0x6D) = 0;
uint8_t* _pv = (uint8_t*)(*(uint32_t*)(arg0 + 0x94));
uint8_t* _vt1 = (uint8_t*)(*(uint32_t*)_pv);
uint32_t _fn1 = *(uint32_t*)(_vt1 + 0x54);
((void (*)(uint8_t*, int32_t))_fn1)(_pv, arg1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CE9CC
void helper_002CE9CC_target(uint8_t*, int32_t);
extern "C" void YellowAuto_002ce9cc(uint8_t* arg0, int32_t arg1) __asm__("_ZThn132_N3App4Tool15MessageMenuView31CommonMessageWindowView_OnEventENS0_23CommonMessageWindowView13IEventHandler9EventCodeE");
extern "C" void YellowAuto_002ce9cc(uint8_t* arg0, int32_t arg1) {
helper_002CE9CC_target(arg0 - 132, arg1);
}
#endif
