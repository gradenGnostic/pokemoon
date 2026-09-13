// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFB9C
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_003bfb9c(uint32_t arg0) __asm__("_ZN5print15GetMessageArcIdEN6System9MSGLANGIDE");
extern "C" uint32_t YellowAuto_003bfb9c(uint32_t arg0) {
if (arg0 == 10) arg0 = *(const uint8_t*)*(const uint32_t*)0x003BFBD4; if (arg0 > 9) GFLassertStop(0, 0, 0); return ((const uint32_t*)*(const uint32_t*)0x003BFBD8)[arg0];
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFC9C
uint32_t func_00354100(const uint16_t*);
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" bool YellowAuto_003bfc9c(const uint16_t* arg0) __asm__("_ZN5print17IsWordSetTagGroupEPKw");
extern "C" bool YellowAuto_003bfc9c(const uint16_t* arg0) {
if (arg0[0] != 16) GFLassertStop(0, 0, 0);
if (arg0[0] != 16) return false;
uint32_t v = func_00354100(arg0) >> 8;
return v == 1 || v == 2;
}
#endif
