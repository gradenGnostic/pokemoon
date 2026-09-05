// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003998F4
extern const uint32_t DAT_00399930;
extern const uint32_t DAT_00399934;
extern const uint32_t DAT_00399938;
extern "C" void YellowAuto_003998f4(uint8_t* arg0) __asm__("_ZN5Field8LocationC1Ev");
extern "C" void YellowAuto_003998f4(uint8_t* arg0) {
*(uint16_t *)(arg0 + 0x0) = (uint16_t)DAT_00399930;
*(uint16_t *)(arg0 + 0x2) = (uint16_t)DAT_00399930;
*(uint32_t *)(arg0 + 0x4) = DAT_00399934;
*(uint32_t *)(arg0 + 0x8) = DAT_00399934;
*(uint32_t *)(arg0 + 0xc) = DAT_00399934;
*(uint32_t *)(arg0 + 0x10) = DAT_00399934;
*(uint32_t *)(arg0 + 0x14) = DAT_00399934;
*(uint32_t *)(arg0 + 0x18) = DAT_00399934;
*(uint32_t *)(arg0 + 0x1c) = DAT_00399938;
*(uint32_t *)(arg0 + 0x20) = (uint32_t)-1;
}
#endif
