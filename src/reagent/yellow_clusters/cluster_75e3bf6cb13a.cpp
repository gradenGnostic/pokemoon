// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B6B0
extern "C" uint8_t* YellowAuto_0045b6b0(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib4Util14NetAppDateTimeaSERKS1_");
extern "C" uint8_t* YellowAuto_0045b6b0(uint8_t* arg0, const uint8_t* arg1) {
*(uint16_t *)(arg0 + 4) = *(const uint16_t *)(arg1 + 4);
*(arg0 + 6) = *(const uint8_t *)(arg1 + 6);
*(arg0 + 7) = *(const uint8_t *)(arg1 + 7);
*(arg0 + 8) = *(const uint8_t *)(arg1 + 8);
*(arg0 + 9) = *(const uint8_t *)(arg1 + 9);
return arg0;
}
#endif
