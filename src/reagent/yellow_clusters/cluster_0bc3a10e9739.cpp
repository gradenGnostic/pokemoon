// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D82EC
extern "C" uint32_t YellowAuto_002d82ec() __asm__("_ZN3App6Resort17ResortDataManager17GetStaticInstanceEv");
extern "C" uint32_t YellowAuto_002d82ec() {
return **(uint32_t * const *)0x002D82F8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D8350
extern "C" void YellowAuto_002d8350() __asm__("_ZN3App6Resort17ResortDataManager19UnsetStaticInstanceEv");
extern "C" void YellowAuto_002d8350() {
**(uint32_t **)0x002D8384 = 0;
}
#endif
