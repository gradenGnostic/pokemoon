// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004998E0
extern "C" void* YellowAuto_004998e0(const uint8_t* arg0, const uint16_t* arg1) __asm__("_ZNK4gfl23lyt6LytSys11GetResourceEPKNS0_13LytMultiResIDE");
extern "C" void* YellowAuto_004998e0(const uint8_t* arg0, const uint16_t* arg1) {
const uint8_t* v0 = *(const uint8_t* const*)arg0; const uint8_t* v1 = *(const uint8_t* const*)(v0 + 0x10); uint32_t v2 = *(const uint32_t*)(v1 + 4); uint16_t v3 = *arg1; if (v2 <= (uint32_t)v3) return (void*)0; const uint8_t* v4 = *(const uint8_t* const*)v1; return (void*)(v4 + (uint32_t)v3 * 0x34);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00352930
void* operator_new(uint32_t, void*);
void FUN_0034f644(uint8_t*, const uint8_t*, uint8_t*, uint8_t*, uint8_t*);
extern "C" uint8_t* YellowAuto_00352930(uint8_t* arg0, const uint8_t* arg1, uint8_t* arg2, uint8_t* arg3, uint8_t* arg4) __asm__("_ZN4gfl23lyt6LytSysC1EPKNS0_11LytSysSetUpEPNS_4heap11NwAllocatorES7_PNS0_19DrawingLytWkManagerE");
extern "C" uint8_t* YellowAuto_00352930(uint8_t* arg0, const uint8_t* arg1, uint8_t* arg2, uint8_t* arg3, uint8_t* arg4) {
uint8_t* tmp = (uint8_t*)operator_new(24, *(void**)(arg2 + 4));
if (tmp != (uint8_t*)0) {
tmp[0] = 0;
tmp[1] = 0;
*(uint32_t*)(*(uint8_t**)0x3529B0 + 4) = *(const uint32_t*)arg1;
FUN_0034f644(tmp, arg1, arg2, arg3, arg4);
}
*(uint8_t**)arg0 = tmp;
return arg0;
}
#endif
