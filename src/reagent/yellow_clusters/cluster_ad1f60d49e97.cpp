// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417064
void Func_003234c0(uint8_t*, int32_t);
extern "C" void YellowAuto_00417064(uint8_t* arg0, int32_t arg1) __asm__("_ZN7poke_3d5model9BaseModel10SetVisibleEi");
extern "C" void YellowAuto_00417064(uint8_t* arg0, int32_t arg1) {
Func_003234c0((uint8_t*)(*(uint32_t*)(arg0 + 4)), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417928
extern "C" void YellowAuto_00417928(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model9BaseModel20SetInterestSpringValEff");
extern "C" void YellowAuto_00417928(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint32_t*)(*(uint32_t*)(arg0 + 0xCC) + 0x28) = arg1; *(uint32_t*)(*(uint32_t*)(arg0 + 0xCC) + 0x2C) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417F60
extern "C" void YellowAuto_00417f60(uint8_t* arg0) __asm__("_ZN7poke_3d5model9BaseModel27ResetInterestTagAdjustAngleEv");
extern "C" void YellowAuto_00417f60(uint8_t* arg0) {
*(uint32_t*)(*(uint32_t*)(arg0 + 0xCC) + 0x1C) = *(uint32_t*)0x00417F74; *(uint32_t*)(*(uint32_t*)(arg0 + 0xCC) + 0x18) = *(uint32_t*)0x00417F74;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417668
extern "C" void YellowAuto_00417668(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN7poke_3d5model9BaseModel15SetRotationQuatERKN4gfl24math10QuaternionE");
extern "C" void YellowAuto_00417668(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0x78) |= (uint32_t)1; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0x38) = arg1[0]; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0x3C) = arg1[1]; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0x40) = arg1[2]; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0x44) = arg1[3]; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004170E4
extern "C" void YellowAuto_004170e4(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN7poke_3d5model9BaseModel11SetPositionERKN4gfl24math7Vector3E");
extern "C" void YellowAuto_004170e4(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0x78) |= (uint32_t)1; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0x20) = arg1[0]; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0x24) = arg1[1]; *(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + 4)) + 0x28) = arg1[2]; return;
}
#endif
