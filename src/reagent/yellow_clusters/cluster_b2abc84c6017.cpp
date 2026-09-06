// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00358CCC
extern const uint32_t *DAT_00358d0c;
extern const uint32_t DAT_00358d10;
extern "C" void YellowAuto_00358ccc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN4gfl24math16SpringSimulation7RequestEffff");
extern "C" void YellowAuto_00358ccc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
*(uint32_t *)(arg0 + 0x0) = 1U;
*(uint32_t *)(arg0 + 0x14) = DAT_00358d0c[0];
*(uint32_t *)(arg0 + 0x0c) = DAT_00358d0c[2];
*(uint32_t *)(arg0 + 0x08) = DAT_00358d0c[1];
*(uint32_t *)(arg0 + 0x18) = DAT_00358d10;
*(uint32_t *)(arg0 + 0x10) = arg2;
*(uint32_t *)(arg0 + 0x04) = arg1;
*(uint32_t *)(arg0 + 0x1c) = arg3;
*(uint32_t *)(arg0 + 0x20) = arg4;
}
#endif
