// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497FA0
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" int8_t YellowAuto_00497fa0(const uint8_t* arg0) __asm__("_ZNK4gfl22ui10TouchPanel14IsTouchReleaseEv");
extern "C" int8_t YellowAuto_00497fa0(const uint8_t* arg0) {
const uint8_t* p = FUN_001054dc(arg0); return (int8_t)p[10];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497FB0
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" int8_t YellowAuto_00497fb0(const uint8_t* arg0) __asm__("_ZNK4gfl22ui10TouchPanel14IsTouchTriggerEv");
extern "C" int8_t YellowAuto_00497fb0(const uint8_t* arg0) {
const uint8_t* p = FUN_001054dc(arg0); return (int8_t)p[9];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004981E0
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" int8_t YellowAuto_004981e0(const uint8_t* arg0) __asm__("_ZNK4gfl22ui10TouchPanel7IsTouchEv");
extern "C" int8_t YellowAuto_004981e0(const uint8_t* arg0) {
const uint8_t* p = FUN_001054dc(arg0); return (int8_t)p[8];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497F80
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" bool YellowAuto_00497f80(const uint8_t* arg0) __asm__("_ZNK4gfl22ui10TouchPanel13IsTouchRepeatEv");
extern "C" bool YellowAuto_00497f80(const uint8_t* arg0) {
const uint8_t* p = FUN_001054dc(arg0); return p[11] != 0 || p[9] != 0;
}
#endif
