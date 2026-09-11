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
