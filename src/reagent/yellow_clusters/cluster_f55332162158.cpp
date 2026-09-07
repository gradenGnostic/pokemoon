// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003803F8
extern "C" void YellowAuto_003803f8(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) __asm__("_ZN5Field11FieldScript17FieldScriptSystem16SetReserveScriptEijjjj");
extern "C" void YellowAuto_003803f8(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) {
*(int32_t*)(arg0 + 104) = arg1; *(uint32_t*)(arg0 + 136) = arg2; *(uint32_t*)(arg0 + 140) = arg3; *(uint32_t*)(arg0 + 144) = arg4; *(uint32_t*)(arg0 + 148) = arg5;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00381440
extern "C" void YellowAuto_00381440(uint8_t* arg0) __asm__("_ZN5Field11FieldScript17FieldScriptSystem7SuspendEv");
extern "C" void YellowAuto_00381440(uint8_t* arg0) {
*(int32_t*)(*(uint8_t**)(arg0 + 80) + 88) = 12;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00381014
extern "C" void YellowAuto_00381014(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN5Field11FieldScript17FieldScriptSystem30SetTerrainBlockControlPositionERKN4gfl24math7Vector3E");
extern "C" void YellowAuto_00381014(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)(arg0 + 160) = 1; *(uint32_t*)(arg0 + 164) = arg1[0]; *(uint32_t*)(arg0 + 168) = arg1[1]; *(uint32_t*)(arg0 + 172) = arg1[2];
}
#endif
