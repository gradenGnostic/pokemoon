// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00106398
void FUN_001083cc(uint8_t *);
extern "C" void YellowAuto_00106398(uint8_t* arg0) __asm__("_ZN2nn2os15CriticalSection10InitializeEv");
extern "C" void YellowAuto_00106398(uint8_t* arg0) {
FUN_001083cc(arg0);
*(uint32_t *)(arg0 + 4) = 0;
*(uint32_t *)(arg0 + 8) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00107730
bool hasExclusiveAccess(uint8_t *);
void FUN_00108a20(void);
extern "C" void YellowAuto_00107730(uint8_t* arg0) __asm__("_ZN2nn2os15CriticalSection5LeaveEv");
extern "C" void YellowAuto_00107730(uint8_t* arg0) {
int32_t count;
int32_t owner;
count = *(int32_t *)(arg0 + 8) - 1;
*(int32_t *)(arg0 + 8) = count;
if (count != 0) return;
*(uint32_t *)(arg0 + 4) = 0;
do
  owner = *(int32_t *)arg0;
while (!hasExclusiveAccess(arg0));
*(int32_t *)arg0 = -owner;
if (owner != -1 && 0 < -owner) FUN_00108a20();
return;
}
#endif
