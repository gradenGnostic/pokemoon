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
