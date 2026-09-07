// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B2F4
extern "C" const uint8_t* YellowAuto_0045b2f4() __asm__("_ZN9NetAppLib4Util11BossUtility25GetRateRegulationFileNameEv");
extern "C" const uint8_t* YellowAuto_0045b2f4() {
return (const uint8_t*)(*(uint32_t*)(*(uint32_t*)0x45B300 + 12));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B304
extern "C" const uint8_t* YellowAuto_0045b304() __asm__("_ZN9NetAppLib4Util11BossUtility27GetGlobalAttractionFileNameEv");
extern "C" const uint8_t* YellowAuto_0045b304() {
return (const uint8_t*)(*(uint32_t*)(*(uint32_t*)0x45B310 + 4));
}
#endif
