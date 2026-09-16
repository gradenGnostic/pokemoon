// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00396D00
int8_t FUN_003999d8(uint32_t, uint8_t);
extern "C" void YellowAuto_00396d00(uint8_t* arg0, uint32_t arg1, bool arg2, uint8_t arg3) __asm__("_ZN5Field7Encount11EncountWork14CheckProbResetEjbh");
extern "C" void YellowAuto_00396d00(uint8_t* arg0, uint32_t arg1, bool arg2, uint8_t arg3) {
uint32_t _cur = *(uint32_t*)(arg0 + 8);
if (_cur == (uint32_t)0xFFFF) {
*(uint32_t*)(arg0 + 8) = arg1;
*(uint32_t*)arg0 = (uint32_t)0;
*(arg0 + 4) = (uint8_t)0;
*(uint16_t*)(arg0 + 6) = (uint16_t)1;
*(arg0 + 5) = (uint8_t)(*(arg0 + 5) & (uint8_t)0xFC);
*(arg0 + 0x504) = (uint8_t)arg2;
return;
}
int8_t _slot = *(int8_t*)(arg0 + 0x504);
if (_slot != (int8_t)arg2) {
*(uint32_t*)(arg0 + 8) = arg1;
*(uint32_t*)arg0 = (uint32_t)0;
*(arg0 + 4) = (uint8_t)0;
*(uint16_t*)(arg0 + 6) = (uint16_t)1;
*(arg0 + 5) = (uint8_t)(*(arg0 + 5) & (uint8_t)0xFC);
*(arg0 + 0x504) = (uint8_t)arg2;
return;
}
if (_cur == arg1) return;
if (!arg2) {
*(uint32_t*)(arg0 + 8) = arg1;
*(arg0 + 0x504) = (uint8_t)arg2;
return;
}
int8_t _a = FUN_003999d8(arg1, arg3);
int8_t _b = FUN_003999d8(_cur, arg3);
if (_a == _b) {
*(uint32_t*)(arg0 + 8) = arg1;
return;
}
*(uint32_t*)(arg0 + 8) = arg1;
*(uint32_t*)arg0 = (uint32_t)0;
*(arg0 + 4) = (uint8_t)0;
*(uint16_t*)(arg0 + 6) = (uint16_t)1;
*(arg0 + 5) = (uint8_t)(*(arg0 + 5) & (uint8_t)0xFC);
*(arg0 + 0x504) = (uint8_t)arg2;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00396F68
void* GetInstance();
void DisposeModule(void*, void*);
extern "C" void YellowAuto_00396f68(uint8_t* arg0) __asm__("_ZN5Field7Encount11EncountWork22DisposeSequenceDemoDllEv");
extern "C" void YellowAuto_00396f68(uint8_t* arg0) {
void* _m0 = GetInstance();
void* _s0 = *(void**)(arg0 + 0x544);
if (_s0 != (void*)0) {
DisposeModule(_m0, _s0);
*(void**)(arg0 + 0x544) = (void*)0;
}
uint8_t* _obj = *(uint8_t**)(arg0 + 0x548);
if (_obj == (uint8_t*)0) return;
void* _m1 = GetInstance();
void* _s1 = *(void**)(_obj + 0xC);
if (_s1 != (void*)0) {
DisposeModule(_m1, _s1);
*(void**)(_obj + 0xC) = (void*)0;
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00396DE8
extern uint32_t DAT_00396e90;
extern "C" void YellowAuto_00396de8(uint8_t* arg0, bool arg1, bool arg2, const uint8_t* arg3) __asm__("_ZN5Field7Encount11EncountWork15CalcEncountProbEbbPKNS0_15ENCPROB_PATTERNE");
extern "C" void YellowAuto_00396de8(uint8_t* arg0, bool arg1, bool arg2, const uint8_t* arg3) {
if (arg3 == (const uint8_t*)0) return;
uint8_t _f0 = *(arg0 + 5);
if (!(arg1 || ((_f0 & (uint8_t)1) != (uint8_t)0) || arg2)) return;
uint32_t _cnt = *(uint32_t*)arg0;
if (_cnt < DAT_00396e90) {
uint32_t _nc = _cnt + (uint32_t)1;
*(uint32_t*)arg0 = _nc;
uint8_t _f1 = *(arg0 + 5);
bool _allow = (((_f1 & (uint8_t)2) == (uint8_t)0) || ((uint32_t)arg3[3] < _nc));
if (_allow) {
uint8_t _cur = *(arg0 + 4);
uint8_t _acc = (uint8_t)((uint8_t)(_f1 & (uint8_t)1) + _cur);
*(arg0 + 4) = _acc;
if ((uint32_t)_acc >= (uint32_t)arg3[1]) {
*(arg0 + 4) = (uint8_t)0;
uint16_t _old = *(uint16_t*)(arg0 + 6);
uint32_t _sum = (uint32_t)_old + (uint32_t)arg3[0];
uint32_t _cap = (uint32_t)arg3[2];
if (_cap < _sum) *(uint16_t*)(arg0 + 6) = (uint16_t)_cap;
else *(uint16_t*)(arg0 + 6) = (uint16_t)_sum;
}
}
}
*(arg0 + 5) = (uint8_t)(*(arg0 + 5) | (uint8_t)1);
return;
}
#endif
