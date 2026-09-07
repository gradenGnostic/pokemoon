// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042D9F8
uint8_t GetFormNo(const uint8_t* arg0);
uint16_t GetMonsNo(const uint8_t* arg0);
bool StartAsyncRead(uint8_t* arg0, uint16_t arg1, uint8_t arg2, uint8_t* arg3);
bool WaitAsyncReadFinish(uint8_t* arg0);
void SetupRemaindWaza(uint8_t* arg0, const uint8_t* arg1);
extern "C" bool YellowAuto_0042d9f8(uint8_t* arg0, const uint8_t* arg1, uint8_t* arg2) __asm__("_ZN8PokeTool12RemaindSkill15LoadRemaindWazaEPKN3pml8pokepara9CoreParamEPN4gfl24heap11CtrHeapBaseE");
extern "C" bool YellowAuto_0042d9f8(uint8_t* arg0, const uint8_t* arg1, uint8_t* arg2) {
if (*(uint32_t*)(arg0 + 0x20C) == 0) {
uint8_t f = GetFormNo(arg1);
uint16_t m = GetMonsNo(arg1);
uint8_t* o = *(uint8_t**)(arg0 + 0x208);
if (StartAsyncRead(o, m, f, arg2)) {
*(uint32_t*)(arg0 + 0x20C) = 1;
uint8_t* o2 = *(uint8_t**)(arg0 + 0x208);
if (!WaitAsyncReadFinish(o2)) return false;
*(uint32_t*)(arg0 + 0x20C) = 0;
}
} else if (*(uint32_t*)(arg0 + 0x20C) != 1) {
SetupRemaindWaza(arg0, arg1);
return true;
} else {
uint8_t* o3 = *(uint8_t**)(arg0 + 0x208);
if (!WaitAsyncReadFinish(o3)) return false;
*(uint32_t*)(arg0 + 0x20C) = 0;
}
SetupRemaindWaza(arg0, arg1);
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042DD2C
void* OperatorNew(uint32_t arg0, uint8_t* arg1);
uint8_t* WazaOboeDataCtor(uint8_t* arg0, uint8_t* arg1);
extern "C" uint8_t* YellowAuto_0042dd2c(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN8PokeTool12RemaindSkillC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_0042dd2c(uint8_t* arg0, uint8_t* arg1) {
*(uint32_t*)(arg0 + 0x20C) = 0;
uint8_t* o = (uint8_t*)OperatorNew(12, arg1);
uint8_t* p = 0;
if (o != 0) p = WazaOboeDataCtor(o, arg1);
*(uint8_t**)(arg0 + 0x208) = p;
return arg0;
}
#endif
