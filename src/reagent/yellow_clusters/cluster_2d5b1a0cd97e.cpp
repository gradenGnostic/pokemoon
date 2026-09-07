// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B418
void FUN_0035eb28(uint8_t*);
void FUN_0035e910(uint8_t*);
void FUN_0035e8f4(const uint8_t*, uint8_t*);
extern "C" void YellowAuto_0045b418(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util13NetAppTimeout7SuspendEv");
extern "C" void YellowAuto_0045b418(uint8_t* arg0) {
uint8_t _t[8];
FUN_0035eb28(_t);
FUN_0035e910(_t);
FUN_0035e8f4(_t, arg0 + 32);
*(arg0 + 25) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B468
void FUN_0035eb28(uint8_t*);
void FUN_0035e910(uint8_t*);
uint32_t FUN_0049bd40(const uint8_t*);
extern "C" bool YellowAuto_0045b468(uint8_t* arg0, uint32_t* arg1) __asm__("_ZN9NetAppLib4Util13NetAppTimeout9IsTimeOutEPj");
extern "C" bool YellowAuto_0045b468(uint8_t* arg0, uint32_t* arg1) {
uint8_t _d[8];
if (*(arg0 + 24) == 0 && *(arg0 + 25) == 0) {
*(uint32_t*)(arg0 + 16) = *(uint32_t*)(arg0 + 16) + 1;
if (*(uint32_t*)(arg0 + 16) >= 10) {
FUN_0035eb28(_d);
FUN_0035e910(_d);
uint32_t _n = FUN_0049bd40(_d);
uint32_t _s = FUN_0049bd40(arg0 + 8);
uint32_t _e = _n - _s;
*(uint32_t*)(arg0 + 16) = 0;
*(uint32_t*)(arg0 + 20) = _e;
bool _t = _e >= *(uint32_t*)(arg0 + 4);
*(arg0 + 24) = _t;
if (_t) *(uint32_t*)(arg0 + 20) = *(uint32_t*)(arg0 + 4);
}
}
if (arg1 != nullptr) *arg1 = *(uint32_t*)(arg0 + 20);
if (*(arg0 + 24) == 0 && *(arg0 + 25) == 0 && *(uint32_t*)(arg0 + 4) != 0) {
int32_t _f = *(int32_t*)(arg0 + 40);
*(int32_t*)(arg0 + 40) = _f - 1;
if (_f == 0) *(arg0 + 24) = 1;
}
return *(arg0 + 24) != 0;
}
#endif
