// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0017C98C
extern "C" void YellowAuto_0017c98c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN2nn3nex11CallContext7SetFlagEj");
extern "C" void YellowAuto_0017c98c(uint8_t* arg0, uint32_t arg1) {
*(uint32_t *)(arg0 + 0xc) = arg1 | *(uint32_t *)(arg0 + 0xc);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0017C614
extern uint32_t DAT_0017c634;
extern uint32_t DAT_0017c638;
void FUN_0017c4a4(uint8_t* arg0, uint32_t arg1, uint32_t* arg2, bool arg3);
extern "C" void YellowAuto_0017c614(uint8_t* arg0, uint32_t arg1, bool arg2, bool arg3) __asm__("_ZN2nn3nex11CallContext26RegisterCompletionCallbackEPNS0_12CallbackRootEbb");
extern "C" void YellowAuto_0017c614(uint8_t* arg0, uint32_t arg1, bool arg2, bool arg3) {
FUN_0017c4a4(arg0, arg2 ? DAT_0017c634 : DAT_0017c638, &arg1, arg3);
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0017C8A0
void* FUN_00232050();
void FUN_001e1334(void*, uint32_t, void*);
uint32_t FUN_0017c048(uint8_t*, int32_t);
uint8_t* FUN_001e12d4(void*, uint32_t);
void FUN_002feaa8(void*, int32_t);
uint32_t FUN_0017c8a0(uint8_t*, int32_t);
extern "C" uint32_t YellowAuto_0017c8a0(uint8_t* arg0, int32_t arg1) __asm__("_ZN2nn3nex11CallContext6CancelENS1_5StateE");
extern "C" uint32_t YellowAuto_0017c8a0(uint8_t* arg0, int32_t arg1) {
void* _t0 = FUN_00232050();
uint8_t* _b0 = _t0 == (void*)0 ? (uint8_t*)0 : *(uint8_t**)((uint8_t*)_t0 + 12);
uint8_t* _m = _b0 + 80;
(*(void (**)(void*))(*(uint32_t*)_m + 8))((void*)_m);
uint32_t _v[3];
_v[0] = 0;
_v[1] = 0;
_v[2] = 0;
void* _t1 = FUN_00232050();
void* _g0 = *(void**)((uint8_t*)_t1 + 16);
uint32_t _id = *(uint32_t*)(arg0 + 68);
FUN_001e1334(_g0, _id, reinterpret_cast<void*>(_v));
uint32_t _r = FUN_0017c048(arg0, arg1);
uint32_t* _p = reinterpret_cast<uint32_t*>(_v[0]);
uint32_t* _e = reinterpret_cast<uint32_t*>(_v[1]);
while (_p != _e) {
void* _g1 = *(void**)((uint8_t*)FUN_00232050() + 16);
uint32_t _cid = *_p;
uint8_t* _c = FUN_001e12d4(_g1, _cid);
if (_c != (uint8_t*)0) {
FUN_0017c8a0(_c, 4);
}
_p = _p + 1;
}
if (reinterpret_cast<uint32_t*>(_v[0]) != (uint32_t*)0) {
uint8_t* _h = reinterpret_cast<uint8_t*>(_v[0]) - 8;
uint32_t _f = *(uint32_t*)_h;
if (_f == 0) {
FUN_002feaa8((void*)_h, 0);
} else {
(reinterpret_cast<void (*)(void*)>(_f))((void*)_h);
}
}
(*(void (**)(void*))(*(uint32_t*)_m + 12))((void*)_m);
return _r;
}
#endif
