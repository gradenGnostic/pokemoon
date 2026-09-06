// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EBEE4
extern "C" void YellowAuto_003ebee4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN6System6Skybox6Skybox16ChangeSkyRequestENS1_7SkyTypeEj");
extern "C" void YellowAuto_003ebee4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t uVar1 = 0;
if (arg0[0x28] != 0)
  uVar1 = (uint32_t)arg0[0x38];
if ((arg0[0x28] != 0 && uVar1 != arg1) && (arg0[0x39] == 2))
  *(uint32_t *)(arg0 + 0x3c) = arg2, arg0[0x3a] = 1, arg0[0x38] = (uint8_t)arg1, arg0[0x39] = (uint8_t)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EBF1C
int32_t FUN_003eae54(void*);
extern "C" uint32_t YellowAuto_003ebf1c(uint8_t* arg0) __asm__("_ZN6System6Skybox6Skybox20UpdateCreateResourceEv");
extern "C" uint32_t YellowAuto_003ebf1c(uint8_t* arg0) {
if (arg0[0x20] == 0)
  if (FUN_003eae54(*(void **)(arg0 + 0xc)) != 0)
    arg0[0x20] = 1;
return arg0[0x20] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EC178
void FUN_003ed270(void*, uint32_t);
void FUN_003ec9c0(void*, uint32_t);
extern "C" void YellowAuto_003ec178(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6System6Skybox6Skybox9ChangeSkyENS1_7SkyTypeE");
extern "C" void YellowAuto_003ec178(uint8_t* arg0, uint32_t arg1) {
if (arg0[0x28] == 0)
  return;
if (arg1 == 0)
  FUN_003ed270(*(void **)(arg0 + 0x10), 1), FUN_003ec9c0(*(void **)(arg0 + 0x18), 0);
else if (arg1 == 1)
  FUN_003ed270(*(void **)(arg0 + 0x10), 0), FUN_003ec9c0(*(void **)(arg0 + 0x18), 1);
arg0[0x38] = (uint8_t)arg1;
arg0[0x39] = 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EC1F8
void FUN_003ed270(void*, uint32_t);
void GFLassert();
extern "C" void YellowAuto_003ec1f8(uint8_t* arg0, bool arg1) __asm__("_ZN6System6Skybox6Skybox9SetEnableEb");
extern "C" void YellowAuto_003ec1f8(uint8_t* arg0, bool arg1) {
if (arg0[0x28] == (uint8_t)arg1)
  return;
arg0[0x28] = (uint8_t)arg1;
FUN_003ed270(*(void **)(arg0 + 0x14), (uint32_t)arg1);
FUN_003ed270(*(void **)(arg0 + 0x1c), (uint32_t)arg1);
if (arg0[0x38] != 0)
  if (arg0[0x38] != 1)
    GFLassert();
  else
    FUN_003ed270(*(void **)(arg0 + 0x18), (uint32_t)arg1);
else
  FUN_003ed270(*(void **)(arg0 + 0x10), (uint32_t)arg1);
}
#endif
