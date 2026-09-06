// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F7E88
void* FUN_0017a570(uint32_t);
void* FUN_001e82f0(void*, int32_t);
void FUN_002329f4(uint8_t*, uint32_t);
extern "C" void* YellowAuto_003f7e88(int32_t arg0, uint32_t arg1) __asm__("_ZN7gflnet23nex10NexManager25CreateProtocolCallContextEbj");
extern "C" void* YellowAuto_003f7e88(int32_t arg0, uint32_t arg1) {
uint32_t v1[2]; void* v0 = FUN_0017a570(0x78u); if (v0 == 0) return 0; v0 = FUN_001e82f0(v0, 0); if (v0 != 0 && arg0 != 0) FUN_002329f4((uint8_t*)v1, arg1), *(uint32_t*)((uint8_t*)v0 + 0x58) = v1[0], *(uint32_t*)((uint8_t*)v0 + 0x5c) = v1[1]; return v0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F7C58
void FUN_003fbf04(void*, int32_t);
extern "C" bool YellowAuto_003f7c58(uint8_t* arg0, int32_t arg1) __asm__("_ZN7gflnet23nex10NexManager21UnbindDataStoreClientEv");
extern "C" bool YellowAuto_003f7c58(uint8_t* arg0, int32_t arg1) {
if (*(void**)(arg0 + 0x1a0) == 0) return false; FUN_003fbf04(*(void**)(arg0 + 0x1a0), arg1); if (*(void**)(arg0 + 0x1a0) != 0) (*(void (**)(void))(*(uint32_t*)(*(void**)(arg0 + 0x1a0)) + 4))(); *(void**)(arg0 + 0x1a0) = 0; return true;
}
#endif
