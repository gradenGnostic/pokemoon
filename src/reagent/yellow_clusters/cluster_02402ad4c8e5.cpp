// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00345270
void SetRepeatParam(uint8_t* arg0, const uint32_t* arg1);
extern "C" void YellowAuto_00345270(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN4gfl22ui6Device14SetRepeatParamERKNS1_11RepeatParamE");
extern "C" void YellowAuto_00345270(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)((*(uint32_t*)(arg0 + 8)) + 4) = arg1[0]; *(uint32_t*)((*(uint32_t*)(arg0 + 8)) + 8) = arg1[1];
}
#endif
