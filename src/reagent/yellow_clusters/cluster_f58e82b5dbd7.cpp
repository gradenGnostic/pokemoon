// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00171828
uint32_t TryInitializeAndStartImpl(uint8_t*, const void*, void*, const void*, void*, int32_t, int32_t, int32_t);
void* AllocateAutoStack(uint32_t);
void FreeAutoStack(void*, int32_t);
extern "C" uint32_t YellowAuto_00171828(uint8_t* arg0, const void* arg1, void* arg2, const void* arg3, uint32_t arg4, int32_t arg5, int32_t arg6) __asm__("_ZN2nn2os6Thread39TryInitializeAndStartImplUsingAutoStackERKNS1_8TypeInfoEPFvjEPKvjii");
extern "C" uint32_t YellowAuto_00171828(uint8_t* arg0, const void* arg1, void* arg2, const void* arg3, uint32_t arg4, int32_t arg5, int32_t arg6) {
void* s = AllocateAutoStack(arg4); uint32_t r = TryInitializeAndStartImpl(arg0, arg1, arg2, arg3, s, arg5, arg6, 1); if ((r & 2147483648U) == 0) { r = 0; *(arg0 + 5) = 1; } else { FreeAutoStack(s, 1); } return r;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00108D58
int32_t svc_0x24(uint32_t);
void HandleInternalError(int32_t);
extern "C" void YellowAuto_00108d58(uint8_t* arg0) __asm__("_ZN2nn2os6Thread12FinalizeImplEv");
extern "C" void YellowAuto_00108d58(uint8_t* arg0) {
if (*(arg0 + 4) != 0) return; int32_t r = svc_0x24(*(uint32_t*)arg0); if (r < 0) HandleInternalError(r); *(arg0 + 4) = 1;
}
#endif
