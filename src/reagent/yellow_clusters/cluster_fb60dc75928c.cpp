// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E8A64
uint32_t FUN_002e8fa4(uint32_t);
extern "C" uint32_t YellowAuto_002e8a64(uint8_t* arg0) __asm__("_ZN3app4tool10IconObject7EndFuncEv");
extern "C" uint32_t YellowAuto_002e8a64(uint8_t* arg0) {
if (*(uint32_t *)(arg0 + 0x30) != 0)
  return 1;
if (FUN_002e8fa4(*(uint32_t *)(arg0 + 0x1c)) != 0)
  *(uint32_t *)(arg0 + 0x30) = *(uint32_t *)(arg0 + 0x30) + 1;
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E8840
void FUN_002f9adc(void*, void*, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_002e8840(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN3app4tool10IconObject10ReplaceTexEPN2nw3lyt7PictureEj");
extern "C" uint32_t YellowAuto_002e8840(uint8_t* arg0, void* arg1, uint32_t arg2) {
*(void **)(arg0 + 0x14) = arg1;
if (*(uint32_t *)(arg0 + 0x34) == arg2)
  return (FUN_002f9adc((void *)(*(uint32_t *)(arg0 + 0x1c) + 8), *(void **)(arg0 + 0x14), 0, 0), *(uint8_t *)((uint8_t *)*(void **)(arg0 + 0x14) + 0x44) = *(uint8_t *)((uint8_t *)*(void **)(arg0 + 0x14) + 0x44) | 1, 1);
*(uint32_t *)(arg0 + 0x18) = arg2;
*(uint32_t *)(arg0 + 0x28) = 1;
*(uint32_t *)(arg0 + 0x34) = 0xffffffff;
*(uint8_t *)((uint8_t *)arg1 + 0x44) = *(uint8_t *)((uint8_t *)arg1 + 0x44) & 0xfe;
return 0;
}
#endif
