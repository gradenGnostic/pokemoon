// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A16B0
extern "C" void YellowAuto_003a16b0(uint8_t* arg0) __asm__("_ZN5Field9MoveModel20FieldMoveModelPlayer19CheckSafetyPositionEv");
extern "C" void YellowAuto_003a16b0(uint8_t* arg0) {
arg0[0x77d] = 0;
arg0[0x77e] = 0;
}
#endif
