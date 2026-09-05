// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045D368
void NetAppCommonSaveUtility(uint8_t*);
void NetAppTimeout(uint8_t*);
extern "C" void YellowAuto_0045d368(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util23NetAppCommonSaveUtilityC1Ev");
extern "C" void YellowAuto_0045d368(uint8_t* arg0) {
*(uint32_t *)arg0 = 0x0045D390; *(uint8_t *)(arg0 + 4) = 0; NetAppTimeout(arg0 + 8); *(uint8_t *)(arg0 + 0x38) = 0;
}
#endif
