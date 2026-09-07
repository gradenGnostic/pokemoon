// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414724
extern "C" void YellowAuto_00414724(uint8_t* arg0, void* arg1, const void* arg2) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager22SetupDressUpPartsAsyncEPN4gfl23gfx12IGLAllocatorERKNS0_12DressUpParamE");
extern "C" void YellowAuto_00414724(uint8_t* arg0, void* arg1, const void* arg2) {
*(int32_t*)(arg0 + 0x80) = (int16_t)*(const uint16_t*)arg2; *(uint32_t*)(arg0 + (((uint32_t)(int16_t)*(const uint16_t*)arg2) << 6) + 0x28) = 0; *(uint32_t*)(arg0 + (((uint32_t)(int16_t)*(const uint16_t*)arg2) << 6) + 0x2c) = 0; *(uint32_t*)(arg0 + (((uint32_t)(int16_t)*(const uint16_t*)arg2) << 6) + 0x30) = 0; *(uint32_t*)(arg0 + (((uint32_t)(int16_t)*(const uint16_t*)arg2) << 6) + 0x34) = 0; *(uint32_t*)(arg0 + (((uint32_t)(int16_t)*(const uint16_t*)arg2) << 6) + 0x38) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414B54
void* __aeabi_vec_ctor_nocookie_nodtor(void*, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_00414b54(uint8_t* arg0) __asm__("_ZN7poke_3d5model27DressUpModelResourceManagerC1Ev");
extern "C" void YellowAuto_00414b54(uint8_t* arg0) {
__aeabi_vec_ctor_nocookie_nodtor(arg0, reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(0x414B74)), 0x40, 2);
*reinterpret_cast<uint32_t*>(arg0 + 0x80) = 0;
}
#endif
