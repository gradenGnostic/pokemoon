// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D2C4
extern "C" void YellowAuto_0040d2c4(uint8_t* arg0, int32_t arg1) __asm__("_ZN7poke_3d5model10BaseCamera16SetAnimationLoopEi");
extern "C" void YellowAuto_0040d2c4(uint8_t* arg0, int32_t arg1) {
*(uint8_t*)(arg0 + 0x34) = (uint8_t)(arg1 != 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D104
extern "C" void YellowAuto_0040d104(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model10BaseCamera14SetAspectRatioEf");
extern "C" void YellowAuto_0040d104(uint8_t* arg0, uint32_t arg1) {
*(uint32_t*)(arg0 + 0xB0) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D2D4
extern "C" void YellowAuto_0040d2d4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model10BaseCamera17SetAnimationFrameEf");
extern "C" void YellowAuto_0040d2d4(uint8_t* arg0, uint32_t arg1) {
*(uint32_t*)(arg0 + 0x28) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D490
extern "C" void YellowAuto_0040d490(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model10BaseCamera21SetAnimationStepFrameEf");
extern "C" void YellowAuto_0040d490(uint8_t* arg0, uint32_t arg1) {
*(uint32_t*)(arg0 + 0x24) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D5CC
extern "C" void YellowAuto_0040d5cc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model10BaseCamera7SetNearEf");
extern "C" void YellowAuto_0040d5cc(uint8_t* arg0, uint32_t arg1) {
*(uint32_t*)(arg0 + 0xA4) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D10C
extern "C" void YellowAuto_0040d10c(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN7poke_3d5model10BaseCamera15SetRotationQuatERKN4gfl24math10QuaternionE");
extern "C" void YellowAuto_0040d10c(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)(arg0 + 0x94) = arg1[0]; *(uint32_t*)(arg0 + 0x98) = arg1[1]; *(uint32_t*)(arg0 + 0x9C) = arg1[2]; *(uint32_t*)(arg0 + 0xA0) = arg1[3];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D058
extern "C" void YellowAuto_0040d058(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN7poke_3d5model10BaseCamera11SetPositionEfff");
extern "C" void YellowAuto_0040d058(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
*(uint32_t*)(arg0 + 0x70) = arg1; *(uint32_t*)(arg0 + 0x74) = arg2; *(uint32_t*)(arg0 + 0x78) = arg3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D03C
extern "C" void YellowAuto_0040d03c(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN7poke_3d5model10BaseCamera11SetPositionERKN4gfl24math7Vector3E");
extern "C" void YellowAuto_0040d03c(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)(arg0 + 0x70) = arg1[0]; *(uint32_t*)(arg0 + 0x74) = arg1[1]; *(uint32_t*)(arg0 + 0x78) = arg1[2];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D2DC
extern "C" void YellowAuto_0040d2dc(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN7poke_3d5model10BaseCamera17SetTargetPositionERKN4gfl24math7Vector3E");
extern "C" void YellowAuto_0040d2dc(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)(arg0 + 0x7C) = arg1[0]; *(uint32_t*)(arg0 + 0x80) = arg1[1]; *(uint32_t*)(arg0 + 0x84) = arg1[2];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D508
void SetAnimationResource(uint8_t*, void*);
extern "C" void YellowAuto_0040d508(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN7poke_3d5model10BaseCamera41ChangeAnimationGlobalSmoothByResourceNodeEPN4gfl215renderingengine10scenegraph8resource12ResourceNodeEjNS2_4math6Easing8EaseFuncE");
extern "C" void YellowAuto_0040d508(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
*(uint8_t*)(arg0 + 0x68) = (uint8_t)2; *(uint32_t*)(arg0 + 0x60) = arg2; *(uint32_t*)(arg0 + 0x64) = (uint32_t)0; *(uint8_t*)(arg0 + 0x69) = (uint8_t)arg3; SetAnimationResource(arg0 + 0x20, arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D0C8
void func_0040d5d4(uint8_t*);
void SetAnimationResource(uint8_t*, void*);
extern "C" void YellowAuto_0040d0c8(uint8_t* arg0) __asm__("_ZN7poke_3d5model10BaseCamera12EndAnimationEv");
extern "C" void YellowAuto_0040d0c8(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 0x68) == (uint8_t)0) return; if (*(uint8_t*)(arg0 + 0x68) == (uint8_t)2) func_0040d5d4(arg0); *(uint8_t*)(arg0 + 0x68) = (uint8_t)0; SetAnimationResource(arg0 + 0x20, (void*)0);
}
#endif
