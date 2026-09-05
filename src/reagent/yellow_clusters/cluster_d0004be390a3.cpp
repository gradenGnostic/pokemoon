// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A54C0
extern "C" void YellowAuto_004a54c0(uint32_t* arg0, const uint32_t* arg1) __asm__("_ZNK7poke_3d5model9BaseModel11GetRotationEv");
extern "C" void YellowAuto_004a54c0(uint32_t* arg0, const uint32_t* arg1) {
arg0[0] = arg1[4];
arg0[1] = arg1[5];
arg0[2] = arg1[6];
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00418390
void FUN_00417360(void*, void*, void*, void*, int32_t);
extern "C" void YellowAuto_00418390(void* arg0, void* arg1, void* arg2, void* arg3) __asm__("_ZN7poke_3d5model9BaseModel6CreateEPN4gfl23gfx12IGLAllocatorEPNS2_4heap11CtrHeapBaseEPNS2_15renderingengine10scenegraph8instance17ModelInstanceNodeEPNSA_8resource12ResourceNodeE");
extern "C" void YellowAuto_00418390(void* arg0, void* arg1, void* arg2, void* arg3) {
FUN_00417360(arg0, arg1, arg2, arg3, 0);
return;
}
#endif
