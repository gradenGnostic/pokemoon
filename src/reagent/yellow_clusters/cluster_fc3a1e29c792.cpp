// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015ED7C
void GFLassert();
extern "C" void YellowAuto_0015ed7c(uint8_t* arg0, void* arg1) __asm__("_ZN14PokeRegulation13SetRegulationEP10Regulation");
extern "C" void YellowAuto_0015ed7c(uint8_t* arg0, void* arg1) {
if (*(uint32_t*)(arg0 + 8) != 0) GFLassert(); else *(uint32_t*)(arg0 + 8) = (uint32_t)arg1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015F21C
extern const uint16_t TABLE_0015F21C[36];
extern "C" bool YellowAuto_0015f21c(uint16_t arg0) __asm__("_ZN14PokeRegulation14CheckSubLegendEt");
extern "C" bool YellowAuto_0015f21c(uint16_t arg0) {
for (uint32_t i = 0; i < 36; i += 2) { uint16_t v0 = TABLE_0015F21C[i]; if (v0 == arg0) { return true; } uint16_t v1 = TABLE_0015F21C[i + 1]; if (v1 == arg0) { return true; } } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015ED24
extern const uint16_t TABLE_0015ED24[38];
extern "C" bool YellowAuto_0015ed24(uint16_t arg0, uint8_t arg1) __asm__("_ZN14PokeRegulation11CheckLegendEth");
extern "C" bool YellowAuto_0015ed24(uint16_t arg0, uint8_t arg1) {
if (arg0 == 0x29E) { return arg1 == 5; } for (uint32_t i = 0; i < 38; i += 2) { uint16_t v0 = TABLE_0015ED24[i]; if (v0 == arg0) { return true; } uint16_t v1 = TABLE_0015ED24[i + 1]; if (v1 == arg0) { return true; } } return false;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015F878
void HMemClear(uint8_t*, uint32_t);
bool HFail(uint8_t*);
void* HGetAlloc(uint8_t*);
void* HAlloc(uint32_t, void*);
void HInitTemp(uint8_t*, void*);
void HClearTemp(uint8_t*);
bool HBad(uint8_t*, uint8_t*);
bool HSub(uint8_t*, uint8_t*, uint8_t*, uint8_t*);
void HChkInit(uint8_t*, uint8_t*);
void HChkStart(uint8_t*, uint32_t, uint8_t*, uint32_t);
int32_t HChkBusy(uint8_t*);
void HSleep(uint32_t);
void HMark(uint8_t*);
void HChkDone(uint8_t*);
void HCleanup(uint8_t*);
extern "C" bool YellowAuto_0015f878(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) __asm__("_ZN14PokeRegulation24CheckPokePartyForBtlTeamEPN3pml9PokePartyERNS_16ViolationDetailsE");
extern "C" bool YellowAuto_0015f878(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) {
HMemClear(arg2, 156);
if (*(uint32_t*)(arg0 + 8) == 0)
return HFail(arg2);
void* a = HGetAlloc(arg0);
uint8_t* t = (uint8_t*)HAlloc(28, a);
if (t != (uint8_t*)0)
HInitTemp(t, HGetAlloc(arg0));
HClearTemp(t);
if (*(arg1 + 24) != 0)
return HBad(arg1, arg2);
bool b = HSub(arg0, arg1, t, arg2);
uint8_t c[64];
HChkInit(c, (uint8_t*)(*(uint32_t*)(arg0 + 4)));
HChkStart(c, *(uint32_t*)(arg0 + 8), t, 0);
while (HChkBusy(c) != 0)
HSleep(1);
if (*(c + 16) != 0)
HMark(arg2);
HChkDone(c);
if (t != (uint8_t*)0)
HCleanup(t);
return (bool)(b && (*(c + 16) == 0));
}
#endif
