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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443D40
extern "C" uint8_t* YellowAuto_00443d40(uint8_t* arg0) __asm__("_ZN8Savedata8MyStatusD1Ev");
extern "C" uint8_t* YellowAuto_00443d40(uint8_t* arg0) {
*reinterpret_cast<uint32_t*>(arg0) = 0; return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443CF4
uint8_t* FUN_003e6a1c(uint8_t*);
void FUN_00443ae0(uint8_t*, void*);
extern "C" uint8_t* YellowAuto_00443cf4(uint8_t* arg0) __asm__("_ZN8Savedata8MyStatusC1Ev");
extern "C" uint8_t* YellowAuto_00443cf4(uint8_t* arg0) {
*reinterpret_cast<uint32_t*>(arg0) = 0; uint8_t* r = FUN_003e6a1c(arg0 + 0x5C); FUN_00443ae0(r - 0x5C, nullptr); return r - 0x5C;
}
#endif
