// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E7734
extern uint32_t DAT_003e7794;
void __aeabi_memclr4(void *, uint32_t);
void FUN_00100d28(uint16_t *, const uint16_t *, uint32_t);
extern "C" void YellowAuto_003e7734(uint8_t* arg0, const uint16_t* arg1, uint32_t arg2) __asm__("_ZN6System3CTR15RegionNameCacheC1EPKwPh");
extern "C" void YellowAuto_003e7734(uint8_t* arg0, const uint16_t* arg1, uint32_t arg2) {
*(uint32_t *)arg0 = DAT_003e7794;
*(uint32_t *)(arg0 + 4) = arg2;
__aeabi_memclr4(arg0 + 8, 0x80);
*(uint32_t *)(arg0 + 0x88) = 0;
*(uint32_t *)(arg0 + 0x8c) = 0;
*(uint32_t *)(arg0 + 0x90) = 0;
if (arg1 == 0)
  __aeabi_memclr4(arg0 + 8, 0x80);
else
  FUN_00100d28((uint16_t *)(arg0 + 8), arg1, 0x40);
}
#endif
