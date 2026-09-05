// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036DD24
extern "C" void YellowAuto_0036dd24(uint8_t* arg0, bool arg1) __asm__("_ZN4item9ITEM_DATAC1Eb");
extern "C" void YellowAuto_0036dd24(uint8_t* arg0, bool arg1) {
*(uint32_t *)(arg0 + 0x24) = 0;
if (arg1 != 0)
  *(uint32_t *)(arg0 + 0x0) = 0;
  *(uint32_t *)(arg0 + 0x4) = 0;
  *(uint32_t *)(arg0 + 0x8) = 0;
  *(uint32_t *)(arg0 + 0xc) = 0;
  *(uint32_t *)(arg0 + 0x10) = 0;
  *(uint32_t *)(arg0 + 0x14) = 0;
  *(uint32_t *)(arg0 + 0x18) = 0;
  *(uint32_t *)(arg0 + 0x1c) = 0;
  *(uint32_t *)(arg0 + 0x20) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036DD5C
void FUN_0036db7c(int32_t, int32_t, void*);
extern "C" uint8_t* YellowAuto_0036dd5c(uint8_t* arg0, int32_t arg1, void* arg2) __asm__("_ZN4item9ITEM_DATAC1EiPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_0036dd5c(uint8_t* arg0, int32_t arg1, void* arg2) {
FUN_0036db7c((int32_t)arg0, arg1, arg2);
return arg0;
}
#endif
