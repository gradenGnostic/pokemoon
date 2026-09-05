// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A500
extern "C" void YellowAuto_0039a500(uint8_t* arg0, uint16_t arg1, uint16_t arg2) __asm__("_ZN5Field9EventWork17SetMushiyokeCountEtt");
extern "C" void YellowAuto_0039a500(uint8_t* arg0, uint16_t arg1, uint16_t arg2) {
uint8_t *p = arg0 + 0x900;
*(uint16_t *)(p + 0xe0) = arg2;
*(uint16_t *)(p + 0xc6) = arg1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A058
extern "C" void YellowAuto_0039a058(uint8_t* arg0, uint16_t arg1, uint16_t arg2) __asm__("_ZN5Field9EventWork12SetEventWorkEtt");
extern "C" void YellowAuto_0039a058(uint8_t* arg0, uint16_t arg1, uint16_t arg2) {
uint8_t *p = arg0;
if ((int32_t)arg1 - 0x4000 < 1000) p = arg0 + arg1 * 2 - 0x7ffc;
else p = 0;
*(uint16_t *)p = arg2;
return;
}
#endif
