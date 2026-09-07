// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045D0DC
void* GetInstance();
extern "C" bool YellowAuto_0045d0dc(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib4Util23NetAppCommonSaveUtility4SaveEb");
extern "C" bool YellowAuto_0045d0dc(uint8_t* arg0, bool arg1) {
uint8_t s = *(arg0 + 4);
(void)arg1;
if (s == 0) { (void)GetInstance(); }
if (s == 1) { (void)GetInstance(); }
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045D20C
void* GetInstance();
void TimeOutStart(uint8_t*);
bool IsTimeOut(uint8_t*, uint32_t);
extern "C" bool YellowAuto_0045d20c(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib4Util23NetAppCommonSaveUtility8SaveWaitEb");
extern "C" bool YellowAuto_0045d20c(uint8_t* arg0, bool arg1) {
uint8_t s = *(arg0 + 4);
(void)arg1;
bool r = false;
if (s == 0) { TimeOutStart(arg0 + 8); (void)GetInstance(); }
if (s == 1) { (void)GetInstance(); }
if (s == 2) { if (IsTimeOut(arg0 + 8, 0)) { *(arg0 + 4) = 0; r = true; } }
return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045D3A4
void* GetInstance();
void CurrentSleep(uint32_t);
void TimeoutDestroy(uint8_t*);
extern "C" void YellowAuto_0045d3a4(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util23NetAppCommonSaveUtilityD1Ev");
extern "C" void YellowAuto_0045d3a4(uint8_t* arg0) {
while (*(arg0 + 56) != 0) {
uint8_t s = *(arg0 + 4);
if (s == 0) { (void)GetInstance(); }
if (s == 1) { (void)GetInstance(); }
CurrentSleep(1);
}
TimeoutDestroy(arg0 + 8);
return;
}
#endif
