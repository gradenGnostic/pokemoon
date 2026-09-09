// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F2C4C
extern "C" void YellowAuto_002f2c4c(uint8_t* arg0) __asm__("_ZN3app4tool16CharaSimpleModel9TerminateEv");
extern "C" void YellowAuto_002f2c4c(uint8_t* arg0) {
if (*(uint8_t *)(arg0 + 4) == 2)
  *(uint8_t *)(arg0 + 0x1c) = 0, *(uint8_t *)(arg0 + 4) = 3;
*(uint8_t *)(arg0 + 0x1d) = 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F23BC
void SetPosition(uint8_t*, const uint32_t*);
extern "C" void YellowAuto_002f23bc(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN3app4tool16CharaSimpleModel6SetPosERKN4gfl24math7Vector3E");
extern "C" void YellowAuto_002f23bc(uint8_t* arg0, const uint32_t* arg1) {
if (arg0[4] == 2) SetPosition(arg0 + 0x74, arg1); *(uint32_t*)(arg0 + 0x28) = arg1[0]; *(uint32_t*)(arg0 + 0x2C) = arg1[1]; *(uint32_t*)(arg0 + 0x30) = arg1[2];
}
#endif
