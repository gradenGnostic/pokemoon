// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049814C
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" uint16_t YellowAuto_0049814c(const uint8_t* arg0) __asm__("_ZNK4gfl22ui10TouchPanel4GetXEv");
extern "C" uint16_t YellowAuto_0049814c(const uint8_t* arg0) {
return *(const uint16_t *)(FUN_001054dc(arg0));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049815C
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" uint16_t YellowAuto_0049815c(const uint8_t* arg0) __asm__("_ZNK4gfl22ui10TouchPanel4GetYEv");
extern "C" uint16_t YellowAuto_0049815c(const uint8_t* arg0) {
return *(const uint16_t *)(FUN_001054dc(arg0) + 2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498220
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" uint16_t YellowAuto_00498220(const uint8_t* arg0) __asm__("_ZNK4gfl22ui10TouchPanel8GetPrevXEv");
extern "C" uint16_t YellowAuto_00498220(const uint8_t* arg0) {
return *(const uint16_t *)(FUN_001054dc(arg0) + 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498230
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" uint16_t YellowAuto_00498230(const uint8_t* arg0) __asm__("_ZNK4gfl22ui10TouchPanel8GetPrevYEv");
extern "C" uint16_t YellowAuto_00498230(const uint8_t* arg0) {
return *(const uint16_t *)(FUN_001054dc(arg0) + 6);
}
#endif
