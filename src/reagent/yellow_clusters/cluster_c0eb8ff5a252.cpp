// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6F8C
extern "C" uint8_t* YellowAuto_004a6f8c(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata15MysteryGiftSave15GetItemGiftDataEj");
extern "C" uint8_t* YellowAuto_004a6f8c(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 0x30U) return 0; if (arg0 + arg1 * 0x108 == (uint8_t *)0xfffffefc) return 0; if ((arg0 + arg1 * 0x108)[0x155] != 1) return 0; return arg0 + arg1 * 0x108 + 0x16c;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6FCC
extern "C" uint8_t* YellowAuto_004a6fcc(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata15MysteryGiftSave15GetPokeGiftDataEj");
extern "C" uint8_t* YellowAuto_004a6fcc(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 0x30U) return 0; if (arg0 + arg1 * 0x108 == (uint8_t *)0xfffffefc) return 0; if ((arg0 + arg1 * 0x108)[0x155] != 0) return 0; return arg0 + arg1 * 0x108 + 0x16c;
}
#endif
