// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7D48
const uint32_t* FUN_004a7d6c(const uint8_t*, uint16_t, uint32_t*);
extern "C" uint32_t YellowAuto_004a7d48(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK8Savedata6MyItem10GetItemNumEt");
extern "C" uint32_t YellowAuto_004a7d48(const uint8_t* arg0, uint16_t arg1) {
uint32_t tmp; const uint32_t* result = FUN_004a7d6c(arg0, arg1, &tmp); return result == 0 ? 0U : (*result & 0xfffffU) >> 10;
}
#endif
