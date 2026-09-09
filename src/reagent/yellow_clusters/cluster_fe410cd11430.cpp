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
