// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2FD4
extern "C" const uint8_t* YellowAuto_004a2fd4(const uint8_t* arg0) __asm__("_ZNK6System3CTR16CountryNameCache20GetUnkownCountryNameEv");
extern "C" const uint8_t* YellowAuto_004a2fd4(const uint8_t* arg0) {
return arg0 + 0x8004;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2FBC
extern "C" const uint8_t* YellowAuto_004a2fbc(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK6System3CTR16CountryNameCache14GetCountryNameEN2nn3cfg3CTR14CfgCountryCodeE");
extern "C" const uint8_t* YellowAuto_004a2fbc(const uint8_t* arg0, uint32_t arg1) {
if (arg1 < 0x100) return arg0 + arg1 * 0x80 + 4; return arg0 + 0x8004;
}
#endif
