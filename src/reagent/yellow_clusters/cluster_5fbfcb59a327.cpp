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
