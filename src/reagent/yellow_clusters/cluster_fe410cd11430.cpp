// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00399F38
extern "C" void YellowAuto_00399f38(uint8_t* arg0, void* arg1, void* arg2, void* arg3) __asm__("_ZN5Field9EventList20EventListDataManagerC1EPN7GameSys11GameManagerEPN4gfl24heap11CtrHeapBaseEPNS5_2fs16AsyncFileManagerE");
extern "C" void YellowAuto_00399f38(uint8_t* arg0, void* arg1, void* arg2, void* arg3) {
*(void**)(arg0 + 0) = arg2; *(void**)(arg0 + 8) = arg1; *(void**)(arg0 + 4) = arg3; *(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; *(uint32_t*)(arg0 + 24) = 0; *(uint32_t*)(arg0 + 28) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049EF80
extern "C" const uint8_t* YellowAuto_0049ef80(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK5Field9EventList20EventListDataManager11GetMainListEj");
extern "C" const uint8_t* YellowAuto_0049ef80(const uint8_t* arg0, uint32_t arg1) {
if (arg1 < *(const uint32_t*)(arg0 + 20)) return *(const uint8_t**)(arg0 + 24) + arg1 * 20; return *(const uint8_t**)(arg0 + 24);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049EFC0
const uint16_t* GetEventWorkAdrs(void*, int32_t);
extern "C" int32_t YellowAuto_0049efc0(const uint8_t* arg0) __asm__("_ZNK5Field9EventList20EventListDataManager21GetTargetIndexForMainEv");
extern "C" int32_t YellowAuto_0049efc0(const uint8_t* arg0) {
uint32_t c = *(const uint32_t*)(arg0 + 0x14);
if (c == 0) return -1;
int32_t k = *(const int32_t*)0x0049F058;
for (uint32_t i = 0; i < c; ++i) {
const uint8_t* e = *(const uint8_t* const*)(arg0 + 0x18) + i * 0x14;
const uint16_t* p = GetEventWorkAdrs(*(void* const*)(e + 0x10), k);
uint8_t b = *(e + 0x1);
uint32_t* t = *(uint32_t* const*)(e + 0x4);
uint32_t lim = *(const uint32_t*)((const uint8_t*)t + (uint32_t)b * 4u - 4u);
if ((uint32_t)*p <= lim) {
const uint8_t* e2 = *(const uint8_t* const*)(arg0 + 0x18) + i * 0x14;
const uint16_t* q = GetEventWorkAdrs(*(void* const*)(e2 + 0x10), k);
if (*q != 0) return (int32_t)i;
break;
}
}
return -1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00399C80
uint32_t IsArcFileOpenFinished(void* arg0, uint32_t arg1);
uint32_t IsArcFileLoadDataFinished(void* arg0, uint8_t* arg1);
uint32_t FUN_00399d94(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2);
void GflHeapFreeMemoryBlock(uint32_t arg0, uint32_t arg1);
void AddArcFileCloseReq(void* arg0, uint8_t* arg1);
uint32_t IsArcFileCloseFinished(void* arg0, uint32_t arg1);
extern "C" uint32_t YellowAuto_00399c80(uint8_t* arg0) __asm__("_ZN5Field9EventList20EventListDataManager14InitializeWaitEv");
extern "C" uint32_t YellowAuto_00399c80(uint8_t* arg0) {
uint32_t state = *(uint32_t*)(arg0 + 0x1C);
if (state == 0) {
void* mgr = *(void**)(arg0 + 0x4);
if (IsArcFileOpenFinished(mgr, 0x9B) == 0) return 0;
if (IsArcFileLoadDataFinished(mgr, arg0 + 0xC) == 0) return 0;
uint8_t* buf = *(uint8_t**)(arg0 + 0xC);
uint32_t parsed = FUN_00399d94(arg0, buf, arg0 + 0x14);
*(uint32_t*)(arg0 + 0x18) = parsed;
uint32_t cur = *(uint32_t*)(arg0 + 0xC);
if (cur != 0) {
GflHeapFreeMemoryBlock(cur, parsed);
*(uint32_t*)(arg0 + 0xC) = 0;
}
void* inner = *(void**)arg0;
void* vt = *(void**)inner;
void* fnPtr = *(void**)((uint8_t*)vt + 0x34);
uint32_t heap = ((uint32_t(*)(void*))fnPtr)(inner);
uint8_t req[28];
*(uint32_t*)(req + 0) = 0;
*(uint32_t*)(req + 4) = 0x9B;
*(req + 8) = 0x10;
*(uint32_t*)(req + 12) = heap;
*(req + 16) = 1;
*(uint32_t*)(req + 20) = 0;
*(uint32_t*)(req + 24) = 0;
AddArcFileCloseReq(mgr, req);
*(uint32_t*)(arg0 + 0x1C) = state + 1;
} else if (state != 1) {
if (state == 2) return 1;
return 0;
}
void* mgr2 = *(void**)(arg0 + 0x4);
if (IsArcFileCloseFinished(mgr2, 0x9B) == 0) return 0;
*(uint32_t*)(arg0 + 0x1C) = *(uint32_t*)(arg0 + 0x1C) + 1;
return 1;
}
#endif
