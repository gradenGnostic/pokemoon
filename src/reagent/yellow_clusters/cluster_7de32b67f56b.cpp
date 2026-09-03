// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A85B4
extern "C" uint8_t YellowAuto_004a85b4(const uint8_t* arg0) __asm__("_ZNK8Savedata8MyStatus16GetBallThrowTypeEv");
extern "C" uint8_t YellowAuto_004a85b4(const uint8_t* arg0) {
uint8_t value = *((const uint8_t*)arg0 + 0x82); return value < 8 ? value : 0;
}
#endif
