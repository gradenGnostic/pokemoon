// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F957C
void Func_0035be88();
void Func_003bfef8(uint8_t*, void*, const void*);
const uint16_t* Func_0049a7ac(const void*);
int32_t Func_00354048(const uint16_t*);
extern "C" void YellowAuto_002f957c(uint8_t* arg0, void* arg1, const void* arg2, const void* arg3, const void* arg4) __asm__("_ZN3app4tool19InfoWindowSheetType9StartOpenEPNS0_27InfoWindowSheetTypeListenerERKN4gfl24math7Vector3EPKNS4_3str6StrBufESC_");
extern "C" void YellowAuto_002f957c(uint8_t* arg0, void* arg1, const void* arg2, const void* arg3, const void* arg4) {
if (*(arg0 + 0xBC) != 0) { Func_0035be88(); return; } *(uint32_t*)(arg0 + 0xA0) = (uint32_t)arg1; *(uint32_t*)(arg0 + 0xA4) = *(const uint32_t*)arg2; *(uint32_t*)(arg0 + 0xA8) = *(const uint32_t*)((const uint8_t*)arg2 + 4); *(uint32_t*)(arg0 + 0xAC) = *(const uint32_t*)((const uint8_t*)arg2 + 8); *(uint32_t*)(arg0 + 0xB0) = (uint32_t)arg3; *(uint32_t*)(arg0 + 0xB4) = (uint32_t)arg4; Func_003bfef8(arg0, (void*)(*(uint32_t*)(arg0 + 0xC8)), (const void*)(*(uint32_t*)(arg0 + 0xB0))); Func_003bfef8(arg0, (void*)(*(uint32_t*)(arg0 + 0xCC)), (const void*)(*(uint32_t*)(arg0 + 0xB4))); *(int32_t*)(arg0 + 0xD0) = Func_00354048(Func_0049a7ac((const void*)(*(uint32_t*)(arg0 + 0xB4)))); *(arg0 + 0x6D) = 1; *(uint8_t*)((uint8_t*)(*(uint32_t*)(arg0 + 0xB8)) + 8) = 1; *(arg0 + 0xC4) = 1; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F9650
void Func_002eee4c(uint8_t*, void*);
extern "C" void YellowAuto_002f9650(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool19InfoWindowSheetTypeC1EPNS_4util4HeapE");
extern "C" void YellowAuto_002f9650(uint8_t* arg0, void* arg1) {
Func_002eee4c(arg0, arg1); *(uint32_t*)(arg0 + 0xA0) = 0; *(uint32_t*)(arg0 + 0xA4) = 0; *(uint32_t*)(arg0 + 0xA8) = 0; *(uint32_t*)(arg0 + 0xAC) = 0; *(uint32_t*)(arg0 + 0xB0) = 0; *(uint32_t*)(arg0 + 0xB4) = 0; *(uint32_t*)(arg0 + 0xB8) = 0; *(arg0 + 0xBC) = 0; *(uint32_t*)(arg0 + 0xC0) = 0; *(arg0 + 0xC4) = 0; *(arg0 + 0xC5) = 0; *(uint32_t*)(arg0 + 0xC8) = 0; *(uint32_t*)(arg0 + 0xCC) = 0; *(uint32_t*)(arg0 + 0xD0) = 0; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F929C
void Func_002eeb08(uint8_t*, void*, void*, void*);
extern "C" void YellowAuto_002f929c(uint8_t* arg0, void* arg1, void* arg2, void* arg3) __asm__("_ZN3app4tool19InfoWindowSheetType16StartAsyncCreateEPNS_4util4HeapEPNS2_19AppRenderingManagerEPNS0_21InfoWindowDataManagerE");
extern "C" void YellowAuto_002f929c(uint8_t* arg0, void* arg1, void* arg2, void* arg3) {
Func_002eeb08(arg0, arg1, arg2, arg3); return;
}
#endif
