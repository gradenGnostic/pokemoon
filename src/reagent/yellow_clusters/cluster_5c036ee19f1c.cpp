// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6F68
extern "C" uint8_t YellowAuto_004a6f68(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata15MysteryGiftSave15GetGiftDataTypeEj");
extern "C" uint8_t YellowAuto_004a6f68(const uint8_t* arg0, uint32_t arg1) {
uint8_t result = 0;
if (arg1 < 0x30) {
  const uint8_t* ptr = arg0 + (arg1 * 0x108u);
  if (ptr != (const uint8_t*)0xfffffefc) {
    result = *(const uint8_t*)(ptr + 0x155u);
  }
}
return result;
}
#endif
