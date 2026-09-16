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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00106464
int32_t Helper00106338(uint32_t *, int32_t, void *, void *, uint32_t, int32_t);
extern "C" int32_t YellowAuto_00106464(uint8_t* arg0, const uint32_t* arg1, void* arg2, const void* arg3, uint32_t arg4, int32_t arg5, int32_t arg6, bool arg7) __asm__("_ZN2nn2os6Thread25TryInitializeAndStartImplERKNS1_8TypeInfoEPFvjEPKvjiib");
extern "C" int32_t YellowAuto_00106464(uint8_t* arg0, const uint32_t* arg1, void* arg2, const void* arg3, uint32_t arg4, int32_t arg5, int32_t arg6, bool arg7) {
uint32_t uVar4 = (arg4 - arg1[0]) & 0xFFFFFFF8u;
uint32_t stackVal = arg4;
if (arg7 == false) stackVal = 0;
((void (*)(const void *, uint32_t))arg1[1])(arg3, uVar4);
uint8_t *piVar3 = (uint8_t *)((uVar4 - 20u) & 0xFFFFFFF8u);
*(uint32_t *)(piVar3 + 0) = arg1[2];
*(uint32_t *)(piVar3 + 4) = arg1[3];
*(void **)(piVar3 + 8) = arg2;
*(uint32_t *)(piVar3 + 12) = uVar4;
*(uint32_t *)(piVar3 + 16) = stackVal;
uint32_t prio;
if ((uint32_t)arg5 <= 32u) prio = (uint32_t)arg5 + 32u;
else {
uint32_t t = *(uint32_t *)0x00106548 + (uint32_t)arg5;
if (t <= 39u) prio = t + 24u;
else {
prio = *(uint32_t *)0x0010654C + (uint32_t)arg5;
if (prio > 64u) prio = 0xFFFFFFFFu;
}
}
uint32_t outHandle = 0;
int32_t ret = Helper00106338(&outHandle, *(int32_t *)0x00106550, (void *)piVar3, (void *)piVar3, prio, arg6);
if (ret < 0) return ret;
*(uint32_t *)arg0 = outHandle;
arg0[4] = 0;
arg0[5] = 0;
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001082C4
void Svc0x0A(uint32_t, uint32_t);
extern "C" void YellowAuto_001082c4(uint32_t arg0, uint32_t arg1) __asm__("_ZN2nn2os6Thread9SleepImplENS_3fnd8TimeSpanE");
extern "C" void YellowAuto_001082c4(uint32_t arg0, uint32_t arg1) {
Svc0x0A(arg0, arg1);
}
#endif
