// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00236ED4
void FUN_001794d4(uint32_t*, const uint16_t*);
extern "C" uint8_t* YellowAuto_00236ed4(uint8_t* arg0, const uint16_t* arg1) __asm__("_ZN2nn3nex6StringC1EPKw");
extern "C" uint8_t* YellowAuto_00236ed4(uint8_t* arg0, const uint16_t* arg1) {
*(uint32_t *)arg0 = *(uint32_t *)0x00236ef4;
FUN_001794d4((uint32_t *)(arg0 + 4), arg1);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00236F00
void FUN_001794d4(uint32_t*, const uint16_t*);
extern "C" uint8_t* YellowAuto_00236f00(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex6StringC1ERKS1_");
extern "C" uint8_t* YellowAuto_00236f00(uint8_t* arg0, const uint8_t* arg1) {
*(uint32_t *)arg0 = *(uint32_t *)0x00236f24;
FUN_001794d4((uint32_t *)(arg0 + 4), *(const uint16_t **)(arg1 + 4));
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00236F28
void FUN_001794d4(uint32_t*, const uint16_t*);
extern "C" uint8_t* YellowAuto_00236f28(uint8_t* arg0) __asm__("_ZN2nn3nex6StringC1Ev");
extern "C" uint8_t* YellowAuto_00236f28(uint8_t* arg0) {
*(uint32_t *)arg0 = *(uint32_t *)0x00236f4c;
FUN_001794d4((uint32_t *)(arg0 + 4), *(const uint16_t **)0x00236f50);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00236F84
void FUN_002feaa8(uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_00236f84(uint8_t* arg0) __asm__("_ZN2nn3nex6StringD1Ev");
extern "C" uint8_t* YellowAuto_00236f84(uint8_t* arg0) {
*(uint32_t *)arg0 = *(uint32_t *)0x00236fc8;
if (*(uint32_t *)(arg0 + 4) != 0)
  if (*(uint32_t *)(arg0 + 4) != 4)
    if (*(uint32_t *)(*(uint32_t *)(arg0 + 4) - 12) == 0)
      FUN_002feaa8((uint32_t)(*(uint32_t *)(arg0 + 4) - 12), 0);
    else
      (*(void (**)(void))(*(uint32_t *)(*(uint32_t *)(arg0 + 4) - 12)))();
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002370AC
void FUN_001794d4(uint32_t*, const uint16_t*);
void FUN_002feaa8(uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_002370ac(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex6StringaSERKS1_");
extern "C" uint8_t* YellowAuto_002370ac(uint8_t* arg0, const uint8_t* arg1) {
if (*(uint32_t *)(arg0 + 4) != *(uint32_t *)(arg1 + 4))
  if (*(uint32_t *)(arg0 + 4) != 0)
    if (*(uint32_t *)(arg0 + 4) != 4)
      if (*(uint32_t *)(*(uint32_t *)(arg0 + 4) - 12) == 0)
        FUN_002feaa8((uint32_t)(*(uint32_t *)(arg0 + 4) - 12), 0);
      else
        (*(void (**)(void))(*(uint32_t *)(*(uint32_t *)(arg0 + 4) - 12)))();
if (*(uint32_t *)(arg0 + 4) != *(uint32_t *)(arg1 + 4))
  FUN_001794d4((uint32_t *)(arg0 + 4), *(const uint16_t **)(arg1 + 4));
return arg0;
}
#endif
