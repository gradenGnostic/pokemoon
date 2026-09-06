// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F6458
void* operator_new(uint32_t, void*);
void* FUN_0030cfa4(void*, uint32_t, uint32_t, void*, uint32_t, uint32_t, uint32_t);
void* FUN_00357648(void);
void* FUN_001048b4(void);
extern "C" bool YellowAuto_002f6458(void* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3app4tool18AppToolBaseGrpFont10InitializeEPNS_4util4HeapENS1_8FontTypeEN4gfl22fs10ToolDefine11ArcLangType3TagE");
extern "C" bool YellowAuto_002f6458(void* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
if (*(void**)(arg0 + 4) != 0) return 0;
*(void**)(arg0 + 20) = (void*)((uint8_t*)0x002F6570 + (uint32_t)arg2 * 12);
*(void**)(arg0 + 8) = arg1;
*(void**)(arg0 + 4) = operator_new(32, *(void**)((uint8_t*)arg1 + 8));
if (*(void**)(arg0 + 4) != 0) *(void**)(arg0 + 4) = FUN_0030cfa4(*(void**)(arg0 + 4), *(uint32_t*)(*(void**)(arg0 + 20)), 0, *(void**)((uint8_t*)*(void**)(arg0 + 8) + 8), 1, 128, arg3);
FUN_00357648();
if (operator_new(4, *(void**)((uint8_t*)*(void**)(arg0 + 8) + 8)) != 0) *(void**)(arg0 + 12) = FUN_001048b4(); else *(void**)(arg0 + 12) = 0;
(*(void (**)(void*))((uint8_t*)(*(void**)(*(void**)(arg0 + 4))) + 8))(*(void**)(arg0 + 4));
return 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F6744
void Update(void*);
bool IsEnd(void*);
bool FUN_0049938c(uint16_t*);
void FUN_00351f5c(uint32_t*, void*, const uint16_t*, uint32_t, void*, uint32_t, uint32_t);
void FUN_00352760(void*, uint16_t*);
extern "C" bool YellowAuto_002f6744(void* arg0) __asm__("_ZN3app4tool18AppToolBaseGrpFont7IsReadyEv");
extern "C" bool YellowAuto_002f6744(void* arg0) {
if (*(void**)(arg0 + 4) != 0) Update(*(void**)(arg0 + 4));
if (*(void**)(arg0 + 4) != 0 && IsEnd(*(void**)(arg0 + 4))) return !FUN_0049938c((uint16_t*)(arg0 + 16)) ? (FUN_00351f5c((uint32_t*)(arg0 + 16), *(void**)(arg0 + 12), (const uint16_t*)0, *(uint32_t*)((uint8_t*)*(void**)(arg0 + 8) + 20), *(void**)((uint8_t*)*(void**)(arg0 + 4) + 16), 1, 0), FUN_00352760(*(void**)(arg0 + 12), (uint16_t*)(arg0 + 16)), 1) : 1;
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F67D8
void FUN_0035240c(void*, uint16_t*);
void* FUN_003529b4(void*);
void operator_delete(void*);
extern "C" void YellowAuto_002f67d8(void* arg0) __asm__("_ZN3app4tool18AppToolBaseGrpFont9TerminateEv");
extern "C" void YellowAuto_002f67d8(void* arg0) {
if (*(void**)(arg0 + 12) != 0) FUN_0035240c(*(void**)(arg0 + 12), (uint16_t*)(arg0 + 16));
*(void**)(arg0 + 8) = 0;
if (*(void**)(arg0 + 12) != 0) operator_delete(FUN_003529b4(*(void**)(arg0 + 12))), *(void**)(arg0 + 12) = 0;
if (*(void**)(arg0 + 4) != 0) (*(void (**)(void*))((uint8_t*)(*(void**)(*(void**)(arg0 + 4))) + 4))(*(void**)(arg0 + 4)), *(void**)(arg0 + 4) = 0;
return;
}
#endif
