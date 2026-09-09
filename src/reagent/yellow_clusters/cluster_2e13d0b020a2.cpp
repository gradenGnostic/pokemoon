// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001041AC
extern "C" void YellowAuto_001041ac(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNSaIcEC2ERKS_");
extern "C" void YellowAuto_001041ac(uint8_t* arg0, const uint8_t* arg1) {
(void)arg0; (void)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001041AE
extern "C" void YellowAuto_001041ae(uint8_t* arg0) __asm__("_ZNSaIcEC2Ev");
extern "C" void YellowAuto_001041ae(uint8_t* arg0) {
(void)arg0;
}
#endif
