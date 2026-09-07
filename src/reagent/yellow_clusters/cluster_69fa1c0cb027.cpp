// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003539A4
uint32_t GflHeapAllocMemoryBlockAlign(void*, uint32_t, uint32_t);
int32_t FUN_0024e920(uint8_t*, uint32_t);
extern "C" bool YellowAuto_003539a4(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl23ngc13NGWordChecker10InitializeEPNS_4heap11CtrHeapBaseE");
extern "C" bool YellowAuto_003539a4(uint8_t* arg0, void* arg1) {
if (arg0[0x38] == 0) {
uint32_t w = *(uint32_t*)(arg0 + 0x3C);
if (w == 0) {
w = GflHeapAllocMemoryBlockAlign(arg1, 65536, 4);
*(uint32_t*)(arg0 + 0x3C) = w;
if (w == 0) return false;
}
int32_t r = FUN_0024e920(arg0 + 4, w);
if (r == 0) {
arg0[0x38] = 1;
arg0[0x34] = arg0[0x40];
}
return r >= 0;
}
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00353A20
int32_t FUN_0035f25c(void*);
void SleepImpl(uint32_t, uint32_t);
extern "C" void YellowAuto_00353a20(uint8_t* arg0) __asm__("_ZN4gfl23ngc13NGWordChecker11DeleteAsyncEv");
extern "C" void YellowAuto_00353a20(uint8_t* arg0) {
uint32_t t = *(uint32_t*)(arg0 + 0x84);
while (t != 0) {
int32_t b = FUN_0035f25c((void*)t);
if (b == 0) break;
SleepImpl(*(uint32_t*)0x353A80, 0);
t = *(uint32_t*)(arg0 + 0x84);
}
t = *(uint32_t*)(arg0 + 0x84);
if (t == 0) return;
((void(*)(void*))(*(uint32_t*)(*(uint32_t*)t + 4)))((void*)t);
*(uint32_t*)(arg0 + 0x84) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00353C94
int32_t FUN_0035f25c(void*);
void FUN_00353ee4(void*);
void SleepImpl(uint32_t, uint32_t);
int32_t FUN_0024f8b4(uint8_t*);
void GflHeapFreeMemoryBlock(uint32_t);
extern "C" bool YellowAuto_00353c94(uint8_t* arg0) __asm__("_ZN4gfl23ngc13NGWordChecker8FinalizeEv");
extern "C" bool YellowAuto_00353c94(uint8_t* arg0) {
uint32_t th = *(uint32_t*)(arg0 + 0x84);
if (th != 0) {
int32_t b = FUN_0035f25c((void*)th);
if (b != 0) FUN_00353ee4((void*)th);
}
while (true) {
th = *(uint32_t*)(arg0 + 0x84);
if (th == 0) break;
int32_t c = FUN_0035f25c((void*)th);
if (c != 0) SleepImpl(*(uint32_t*)0x353D4C, 0);
else {
if (th != 0) {
((void(*)(void*))(*(uint32_t*)(*(uint32_t*)th + 4)))((void*)th);
*(uint32_t*)(arg0 + 0x84) = 0;
}
break;
}
}
int32_t r = 0;
if (arg0[0x38] != 0) {
r = FUN_0024f8b4(arg0 + 4);
if (r == 0) arg0[0x38] = 0;
uint32_t w = *(uint32_t*)(arg0 + 0x3C);
if (w != 0) {
GflHeapFreeMemoryBlock(w);
*(uint32_t*)(arg0 + 0x3C) = 0;
}
}
return r >= 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00353BA8
int32_t FUN_0035f25c(void*);
void FUN_00353ee4(void*);
void SleepImpl(uint32_t, uint32_t);
void* FUN_004b4a00(uint32_t, void*, uint32_t);
void* FUN_00353f00(void*, void*, uint32_t, void*);
void FUN_00353eec(void*, uint32_t, const void*, uint8_t*);
void FUN_0035f22c(void*, uint8_t);
extern "C" bool YellowAuto_00353ba8(uint8_t* arg0, void* arg1, uint32_t arg2, const void* arg3, void* arg4, uint8_t arg5) __asm__("_ZN4gfl23ngc13NGWordChecker32CheckFreewordWithRegulationASyncEPNS_4heap11CtrHeapBaseEN2nn3ngc3CTR26ProfanityFilterPatternListEPwPNS0_19NGWordCheckListenerEh");
extern "C" bool YellowAuto_00353ba8(uint8_t* arg0, void* arg1, uint32_t arg2, const void* arg3, void* arg4, uint8_t arg5) {
uint32_t th = *(uint32_t*)(arg0 + 0x84);
if (th != 0) {
int32_t b = FUN_0035f25c((void*)th);
if (b != 0) FUN_00353ee4((void*)th);
}
while (true) {
th = *(uint32_t*)(arg0 + 0x84);
if (th == 0) break;
int32_t c = FUN_0035f25c((void*)th);
if (c != 0) SleepImpl(*(uint32_t*)0x353C90, 0);
else {
if (th != 0) {
((void(*)(void*))(*(uint32_t*)(*(uint32_t*)th + 4)))((void*)th);
*(uint32_t*)(arg0 + 0x84) = 0;
}
break;
}
}
void* m = FUN_004b4a00(12, arg1, 1);
void* n = (void*)0;
if (m != (void*)0) n = FUN_00353f00(m, arg1, 8192, arg4);
*(uint32_t*)(arg0 + 0x84) = (uint32_t)n;
if (n != (void*)0) {
FUN_00353eec(n, arg2, arg3, arg0);
FUN_0035f22c(n, arg5);
}
return n != (void*)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00353D50
uint8_t* FUN_0024fc9c(uint8_t*);
extern "C" void YellowAuto_00353d50(uint8_t* arg0) __asm__("_ZN4gfl23ngc13NGWordCheckerC1Ev");
extern "C" void YellowAuto_00353d50(uint8_t* arg0) {
*(uint32_t*)(*(uint32_t*)0x353DA8) = (uint32_t)arg0;
*(uint32_t*)arg0 = *(uint32_t*)0x353DAC;
uint8_t* b = FUN_0024fc9c(arg0 + 4) - 4;
b[0x40] = 0;
b[0x38] = 0;
*(uint32_t*)(b + 0x3C) = 0;
*(uint32_t*)(b + 0x84) = 0;
}
#endif
