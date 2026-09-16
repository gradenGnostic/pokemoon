// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460D84
void helper0(void *);
extern "C" void YellowAuto_00460d84(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase7PreDrawEv");
extern "C" void YellowAuto_00460d84(uint8_t* arg0) {
for (uint32_t i = 0; i < *(uint32_t *)(arg0 + 0x44); ++i)
  helper0((void *)(*(uint8_t **)(arg0 + 0x18) + i * 0x138));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046077C
extern "C" void YellowAuto_0046077c(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase6ResumeEv");
extern "C" void YellowAuto_0046077c(uint8_t* arg0) {
uint8_t *obj = *(uint8_t **)(arg0 + 0x38);
*(uint8_t *)(arg0 + 0x48) = 0;
if (obj != 0)
  ((void (**)(uint8_t *))(*(void **)obj))[8](obj);
if (obj != 0)
  *(uint8_t *)(*(uint32_t *)(arg0 + 0x3c) + 0x24) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460DC4
extern "C" void YellowAuto_00460dc4(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase7SuspendEv");
extern "C" void YellowAuto_00460dc4(uint8_t* arg0) {
uint8_t *obj = *(uint8_t **)(arg0 + 0x38);
*(uint8_t *)(arg0 + 0x48) = 1;
if (obj != 0)
  ((void (**)(uint8_t *))(*(void **)obj))[7](obj);
if (obj != 0)
  *(uint8_t *)(*(uint32_t *)(arg0 + 0x3c) + 0x24) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460200
void helper0(void *, uint32_t);
void helper1(void *, uint32_t);
void helper2(void *, uint32_t);
extern "C" void YellowAuto_00460200(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase4DrawEN4gfl23gfx12CtrDisplayNoE");
extern "C" void YellowAuto_00460200(uint8_t* arg0, uint32_t arg1) {
helper0(*(void **)(arg0 + 0x1c), arg1);
((void (**)(uint8_t *, uint32_t))(*(void **)arg0))[20](arg0, arg1);
if (*(void **)(arg0 + 0x28) != 0)
  helper1(*(void **)(arg0 + 0x28), arg1);
for (uint32_t i = 0; i < *(uint32_t *)(arg0 + 0x44); ++i)
  helper2((void *)(*(uint8_t **)(arg0 + 0x18) + i * 0x138), arg1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460E08
extern "C" void YellowAuto_00460e08(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBaseC1Ev");
extern "C" void YellowAuto_00460e08(uint8_t* arg0) {
*(uint32_t *)(arg0 + 0) = *(uint32_t *)0x00460E78; *(uint32_t *)(arg0 + 4) = 0; *(uint32_t *)(arg0 + 64) = 4294967295u; *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 16) = 0; *(uint32_t *)(arg0 + 20) = 0; *(uint32_t *)(arg0 + 24) = 0; *(uint32_t *)(arg0 + 28) = 0; *(uint32_t *)(arg0 + 32) = 0; *(uint32_t *)(arg0 + 36) = 0; *(uint32_t *)(arg0 + 40) = 0; *(uint32_t *)(arg0 + 44) = 0; *(uint32_t *)(arg0 + 48) = 0; *(uint8_t *)(arg0 + 52) = 0; *(uint8_t *)(arg0 + 53) = 0; *(uint32_t *)(arg0 + 56) = 0; *(uint32_t *)(arg0 + 60) = 0; *(uint32_t *)(arg0 + 68) = 0; *(uint8_t *)(arg0 + 72) = 0; *(uint8_t *)(arg0 + 73) = 0; *(uint8_t *)(arg0 + 74) = 0; *(uint8_t *)(arg0 + 75) = 0; *(uint8_t *)(arg0 + 76) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004607B0
void sub_0030DDD8(uint32_t);
void sub_0045F7D0(uint32_t);
void sub_0030B844(void *);
void sub_0045DDB0(void *);
int32_t sub_004A31A8(void *);
int32_t sub_003EDD58(void *);
void sub_003EE084(void *, void *);
extern "C" int32_t YellowAuto_004607b0(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase6UpdateEv");
extern "C" int32_t YellowAuto_004607b0(uint8_t* arg0) {
if (*(uint32_t *)(arg0 + 44) != 0) sub_0030DDD8(*(uint32_t *)(arg0 + 44)); sub_0045F7D0(*(uint32_t *)(arg0 + 12)); uint32_t _n = *(uint32_t *)(arg0 + 68); for (uint32_t _i = 0; _i < _n; _i++) sub_0030B844((void *)((uint8_t *)(*(uint32_t *)(arg0 + 24)) + _i * 312)); if (*(uint32_t *)(arg0 + 40) != 0) sub_0045DDB0((void *)(*(uint32_t *)(arg0 + 40))); ((void (*)(uint8_t *))(*(uint32_t *)(*(uint32_t *)arg0 + 96)))(arg0); ((void (*)(uint8_t *))(*(uint32_t *)(*(uint32_t *)arg0 + 76)))(arg0); if (*(uint8_t *)(arg0 + 72) == 1 && sub_004A31A8((void *)(*(uint32_t *)(arg0 + 28))) != 0) return 0; int32_t _m = sub_003EDD58((void *)(*(uint32_t *)(arg0 + 28))); void *_s = (void *)(*(uint32_t *)(arg0 + 60)); if (_m == 1) { if ((int32_t)(*(uint32_t *)((uint8_t *)_s + 32)) != -1) { uint32_t _id = *(uint32_t *)((uint8_t *)_s + 24); void *_o = (void *)(*(uint32_t *)(arg0 + 4)); int32_t _r = ((int32_t (*)(void *, uint32_t))(*(uint32_t *)(*(uint32_t *)_o + 0)))(_o, _id); if (_r == -1 && *(uint8_t *)(arg0 + 73) == 0 && *(uint32_t *)(arg0 + 56) != 0) *(uint8_t *)((uint8_t *)(void *)(*(uint32_t *)(arg0 + 56)) + 29) = 1; } return 0; } if (_m != 0) return 0; if ((int32_t)(*(uint32_t *)((uint8_t *)_s + 32)) != -1) { uint32_t _id2 = *(uint32_t *)((uint8_t *)_s + 24); void *_o1 = (void *)(*(uint32_t *)(arg0 + 4)); int32_t _r2 = ((int32_t (*)(void *, uint32_t))(*(uint32_t *)(*(uint32_t *)_o1 + 0)))(_o1, _id2); if (_r2 == -1) *(uint32_t *)((uint8_t *)_s + 28) = _id2; else { void *_o2 = (void *)(*(uint32_t *)(arg0 + 8)); void *_p = ((void *(*)(void *, int32_t))(*(uint32_t *)(*(uint32_t *)_o2 + 0)))(_o2, _r2); *(uint32_t *)(arg0 + 56) = (uint32_t)_p; sub_003EE084((void *)(*(uint32_t *)(arg0 + 28)), _p); *(uint32_t *)((uint8_t *)_p + 20) = *(uint32_t *)(arg0 + 28); } *(uint32_t *)((uint8_t *)_s + 24) = (uint32_t)_r2; *(uint32_t *)((uint8_t *)_s + 32) = 4294967295u; } if ((int32_t)(*(uint32_t *)((uint8_t *)_s + 24)) == -1) return 1; return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460ABC
void func_30ddd8(void*);
void func_30b844(void*);
bool func_48e91c(void*);
void func_45ddb0(void*, int32_t);
int32_t func_45ddd4(void*);
int32_t func_2f6744(void*);
void func_45ed6c(void*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
void func_45f7d0(void*);
int32_t func_45eedc(void*);
void func_2cebfc(void*, int32_t, int32_t, uint32_t);
void func_3ee084(void*, void*);
extern "C" int32_t YellowAuto_00460abc(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase7LoadingEv");
extern "C" int32_t YellowAuto_00460abc(uint8_t* arg0, int32_t arg1) {
if (*(uint32_t*)(arg0 + 0x2c) != 0) { func_30ddd8((void*)(*(uint32_t*)(arg0 + 0x2c))); } uint8_t s = arg0[0x34]; if (s == 0) { uint32_t cnt = *(uint32_t*)(arg0 + 0x44); uint32_t i = 0; if (cnt != 0) { do { uint32_t base = *(uint32_t*)(arg0 + 0x18); func_30b844((void*)(base + i * 0x138)); cnt = *(uint32_t*)(arg0 + 0x44); i = i + 1; } while (i < cnt); } bool ok = true; uint32_t j = 0; if (cnt != 0) { do { uint32_t base2 = *(uint32_t*)(arg0 + 0x18); bool c = func_48e91c((void*)(base2 + j * 0x138)); if (!c) { ok = false; } j = j + 1; } while (j < *(uint32_t*)(arg0 + 0x44)); if (!ok) { return 1; } } if (*(uint32_t*)(arg0 + 0x28) != 0) { arg0[0x34] = 1; return 1; } arg0[0x34] = 2; return 1; } if (s == 1) { func_45ddb0((void*)(*(uint32_t*)(arg0 + 0x28)), arg1); int32_t r = func_45ddd4((void*)(*(uint32_t*)(arg0 + 0x28))); if (r == 0) { return 1; } arg0[0x34] = 2; return 1; } if (s == 2) { if (*(uint32_t*)(arg0 + 0x30) != 0) { int32_t q = func_2f6744((void*)(*(uint32_t*)(arg0 + 0x30))); if (q == 0) { return 1; } } arg0[0x34] = 3; return 1; } if (s == 3) { if (*(uint32_t*)(arg0 + 0x24) != 0) { func_45ed6c((void*)(*(uint32_t*)(arg0 + 0x0c)), 1000, 0x45, 0, 1, 1, 0xff); func_45ed6c((void*)(*(uint32_t*)(arg0 + 0x0c)), 1001, 0x4c, 0, 1, 1, 0xff); } ((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x2c)))(arg0); arg0[0x34] = 4; return 1; } if (s == 4) { func_45f7d0((void*)(*(uint32_t*)(arg0 + 0x0c))); int32_t e = func_45eedc((void*)(*(uint32_t*)(arg0 + 0x0c))); if (e == 0) { return 1; } ((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x30)))(arg0); if (*(uint32_t*)(arg0 + 0x24) != 0) { func_2cebfc((void*)(*(uint32_t*)(arg0 + 0x24)), 1000, 1001, *(uint32_t*)(arg0 + 0x20)); } ((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x34)))(arg0); ((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x58)))(arg0); arg0[0x34] = 5; return 1; } if (s == 5) { ((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x4c)))(arg0); int32_t a = ((int32_t(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x38)))(arg0); if (a == 0) { return 1; } int32_t b = ((int32_t(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x5c)))(arg0); if (b == 0) { return 1; } ((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x3c)))(arg0); ((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x44)))(arg0); uint32_t obj = *(uint32_t*)(arg0 + 0x08); uint32_t aval = *(uint32_t*)(arg0 + 0x40); void* created = ((void*(*)(void*, uint32_t))(*(uint32_t*)(*(uint32_t*)obj)))((void*)obj, aval); *(uint32_t*)(arg0 + 0x38) = (uint32_t)created; func_3ee084((void*)(*(uint32_t*)(arg0 + 0x1c)), created); *(uint32_t*)((uint32_t)created + 0x14) = *(uint32_t*)(arg0 + 0x1c); if (arg0[0x49] == 0) { *(uint8_t*)((uint32_t)created + 0x1c) = 1; } uint32_t m = *(uint32_t*)(arg0 + 0x3c); *(uint32_t*)(m + 0x18) = *(uint32_t*)(arg0 + 0x40); return 0; } return 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460950
void OperatorDelete(void*);
void* IconDtor(void*);
void AeabiVecDelete(void*, void*);
extern "C" void YellowAuto_00460950(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase7DestroyEv");
extern "C" void YellowAuto_00460950(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x30) != 0) { ((void(*)(void*))(*(uint32_t*)*(uint32_t*)(arg0 + 0x30)))(*(void**)(arg0 + 0x30)); if (*(void**)(arg0 + 0x30) != 0) { OperatorDelete(IconDtor(*(void**)(arg0 + 0x30))); *(uint32_t*)(arg0 + 0x30) = 0; } } if (*(uint32_t*)(arg0 + 0x2C) != 0) { ((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x2C) + 0x4)))(*(void**)(arg0 + 0x2C)); *(uint32_t*)(arg0 + 0x2C) = 0; } *(uint32_t*)(*(uint32_t*)(arg0 + 0x3C) + 0x34) = 0; if (*(uint32_t*)(arg0 + 0x28) != 0) { ((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x28) + 0x4)))(*(void**)(arg0 + 0x28)); *(uint32_t*)(arg0 + 0x28) = 0; } if (*(uint32_t*)(arg0 + 0x24) != 0) { ((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x24) + 0x18)))(*(void**)(arg0 + 0x24)); *(uint32_t*)(arg0 + 0x24) = 0; } if (*(uint32_t*)(arg0 + 0x20) != 0) { ((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x20) + 0x4)))(*(void**)(arg0 + 0x20)); *(uint32_t*)(arg0 + 0x20) = 0; } *(uint32_t*)(*(uint32_t*)(arg0 + 0x3C) + 0x30) = 0; if (*(uint32_t*)(arg0 + 0x1C) != 0) { ((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x1C) + 0x4)))(*(void**)(arg0 + 0x1C)); *(uint32_t*)(arg0 + 0x1C) = 0; } *(uint32_t*)(arg0 + 0x14) = 0; if (*(uint32_t*)(arg0 + 0x18) != 0) { AeabiVecDelete(*(void**)(arg0 + 0x18), *(void**)(0x460AB8)); *(uint32_t*)(arg0 + 0x18) = 0; } if (*(uint32_t*)(arg0 + 0x10) != 0) { ((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x10) + 0x4)))(*(void**)(arg0 + 0x10)); *(uint32_t*)(arg0 + 0x10) = 0; } *(uint32_t*)(*(uint32_t*)(arg0 + 0x3C) + 0x2C) = 0; if (*(uint32_t*)(arg0 + 0x0C) != 0) { ((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x0C) + 0x4)))(*(void**)(arg0 + 0x0C)); *(uint32_t*)(arg0 + 0x0C) = 0; } *(uint32_t*)(*(uint32_t*)(arg0 + 0x3C) + 0x28) = 0; if (*(uint32_t*)(arg0 + 0x08) != 0) { OperatorDelete(*(void**)(arg0 + 0x08)); *(uint32_t*)(arg0 + 0x08) = 0; } if (*(uint32_t*)(arg0 + 0x04) != 0) { OperatorDelete(*(void**)(arg0 + 0x04)); *(uint32_t*)(arg0 + 0x04) = 0; }
}
#endif
