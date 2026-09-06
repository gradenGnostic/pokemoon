// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00161328
void FUN_00340f18(void*);
uint32_t GetData(void*, int32_t);
void FUN_002c6e64(uint8_t*, void*, void*, int32_t*, int32_t, int32_t*, int32_t);
extern "C" void* YellowAuto_00161328(uint8_t* arg0, void* arg1, int32_t arg2) __asm__("_ZN26FullPowerEffectRenderPath011SetResourceEPN4gfl23gfx12IGLAllocatorEPv");
extern "C" void* YellowAuto_00161328(uint8_t* arg0, void* arg1, int32_t arg2) {
uint8_t local_24[32]; FUN_00340f18(local_24); *(int32_t*)(local_24 + 0) = arg2; void* local_20 = (void*)GetData(local_24, 0); int32_t local_1c = (int32_t)GetData(local_24, 1); int32_t local_18 = (int32_t)GetData(local_24, 2); int32_t local_14 = (int32_t)GetData(local_24, 3); *(void**)(arg0 + 0x88) = arg1; FUN_002c6e64(arg0 + 0x64, arg1, local_20, &local_1c, 2, &local_14, 1); *(void**)(arg0 + 0x90) = arg1; return local_24;
}
#endif
