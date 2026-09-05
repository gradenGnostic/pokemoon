// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00411868
void FUN_00411894(void*, void*, void*, void*, uint8_t*, uint32_t);
extern "C" void YellowAuto_00411868(void* arg0, void* arg1, void* arg2, void* arg3, uint8_t* arg4, uint32_t arg5) __asm__("_ZN7poke_3d5model17CharaModelFactory18CreateDressUpModelEPN4gfl23gfx12IGLAllocatorEPNS2_4heap11CtrHeapBaseEPNS0_12DressUpModelEPNS0_27DressUpModelResourceManagerEj");
extern "C" void YellowAuto_00411868(void* arg0, void* arg1, void* arg2, void* arg3, uint8_t* arg4, uint32_t arg5) {
FUN_00411894(arg0, arg1, arg2, arg3, arg4 + (*(uint32_t*)(arg4 + 0x80) << 6), arg5);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A4E6C
void IsArcFileLoadDataFinished(void*, uint32_t);
extern "C" void YellowAuto_004a4e6c(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model17CharaModelFactory24IsDynamicAnimationLoadedEj");
extern "C" void YellowAuto_004a4e6c(const uint8_t* arg0, uint32_t arg1) {
IsArcFileLoadDataFinished(*(void**)(arg0 + 4), ((arg1 >> 16) * 4u) - 4u + *(uint32_t*)(((arg1 & 0xffffu) < *(uint32_t*)(*(void**)(arg0 + 0x14)) ? (*(uint8_t**)(arg0 + 0xc) + (arg1 & 0xffffu) * 0x2cu) : (uint8_t*)0) + 0xc));
}
#endif
