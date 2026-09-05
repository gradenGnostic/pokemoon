// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D7B0
extern "C" const uint8_t* YellowAuto_0049d7b0(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor15GetWeatherTableEv");
extern "C" const uint8_t* YellowAuto_0049d7b0(const uint8_t* arg0) {
return (const uint8_t*)(*(const uint8_t**)(arg0 + 4) + 0x24);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DAB8
extern "C" bool YellowAuto_0049dab8(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor19IsPokeRideRunEnableEv");
extern "C" bool YellowAuto_0049dab8(const uint8_t* arg0) {
return (*(const uint32_t*)(*(const uint8_t**)(arg0 + 4) + 0x38) & 1U) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DC04
extern "C" const uint8_t* YellowAuto_0049dc04(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor26GetSubscreenBasisPositionXEv");
extern "C" const uint8_t* YellowAuto_0049dc04(const uint8_t* arg0) {
return (const uint8_t*)(*(const uint8_t**)(arg0 + 4) + 0x44);
}
#endif
