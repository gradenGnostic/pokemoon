// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0018DD10
extern "C" void YellowAuto_0018dd10(uint8_t* arg0) __asm__("_ZN2nn3nex12StringStreamC1Ev");
extern "C" void YellowAuto_0018dd10(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x0018dd4c;
*(uint8_t **)(arg0 + 4) = arg0 + 0x10;
*(uint32_t *)(arg0 + 8) = 0x100;
*(uint16_t *)(arg0 + 0x10) = 0;
*(uint8_t *)(arg0 + 0x210) = 0;
*(uint8_t *)(arg0 + 0x211) = 1;
*(uint8_t *)(arg0 + 0x212) = 1;
*(uint8_t **)(arg0 + 12) = arg0 + 0x10;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0018DD80
void FUN_002feaa8(uint8_t*, int32_t);
extern "C" uint8_t* YellowAuto_0018dd80(uint8_t* arg0) __asm__("_ZN2nn3nex12StringStreamD1Ev");
extern "C" uint8_t* YellowAuto_0018dd80(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x0018ddc8;
if (*(uint8_t **)(arg0 + 4) != arg0 + 0x10)
  if (*(uint32_t *)(*(uint8_t **)(arg0 + 4) - 12) == 0)
    FUN_002feaa8(*(uint8_t **)(arg0 + 4) - 12, 0);
  else
    ((void (*)(uint8_t *))*(uint32_t *)(*(uint8_t **)(arg0 + 4) - 12))(*(uint8_t **)(arg0 + 4) - 12);
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0018DB8C
void func_0018dc1c(uint8_t*, uint32_t);
void func_00100d4e(uint16_t*, const uint16_t*);
int32_t func_001002d8(uint16_t*, uint32_t, const uint16_t*, uint32_t);
extern const uint16_t* DAT_0018dc0c;
extern const uint16_t* DAT_0018dc10;
extern const uint16_t* DAT_0018dc14;
extern const uint16_t* DAT_0018dc18;
extern "C" uint8_t* YellowAuto_0018db8c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN2nn3nex12StringStream12StreamNumberEj");
extern "C" uint8_t* YellowAuto_0018db8c(uint8_t* arg0, uint32_t arg1) {
const uint16_t* fmt; func_0018dc1c(arg0, 32); if (*(arg0 + 0x210) == 0) { fmt = DAT_0018dc0c; } else { if (*(arg0 + 0x211) != 0) { func_00100d4e((uint16_t*)(*(uint32_t*)(arg0 + 0xC)), DAT_0018dc10); *(uint32_t*)(arg0 + 0xC) = *(uint32_t*)(arg0 + 0xC) + 4; } if (*(arg0 + 0x213) != 0) { fmt = DAT_0018dc14; } else { fmt = DAT_0018dc18; } } int32_t n = func_001002d8((uint16_t*)(*(uint32_t*)(arg0 + 0xC)), 32, fmt, arg1); *(uint32_t*)(arg0 + 0xC) = *(uint32_t*)(arg0 + 0xC) + (uint32_t)(n * 2); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0018DE4C
uint32_t func_00100ea4(const uint16_t*);
void func_0018dc1c(uint8_t*, uint32_t);
void func_00100d0c(uint16_t*, const uint16_t*);
extern const uint16_t* DAT_0018de98;
extern "C" uint8_t* YellowAuto_0018de4c(uint8_t* arg0, const uint16_t* arg1) __asm__("_ZN2nn3nex12StringStreamlsEPKw");
extern "C" uint8_t* YellowAuto_0018de4c(uint8_t* arg0, const uint16_t* arg1) {
while (arg1 == 0) { arg1 = DAT_0018de98; } uint32_t n = func_00100ea4(arg1); func_0018dc1c(arg0, n + 1); func_00100d0c((uint16_t*)(*(uint32_t*)(arg0 + 0xC)), arg1); *(uint32_t*)(arg0 + 0xC) = *(uint32_t*)(arg0 + 0xC) + n * 2; return arg0;
}
#endif
