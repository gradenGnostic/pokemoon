// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6B98
extern "C" void YellowAuto_002e6b98(uint8_t* arg0, void* arg1) __asm__("_ZN3app2ui11UIResponder16SetInputListenerEPNS0_15UIInputListenerE");
extern "C" void YellowAuto_002e6b98(uint8_t* arg0, void* arg1) {
*(void**)(arg0 + 0x14) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6A70
void FUN_002ec084(void*, uint32_t, bool);
void FUN_002ec13c(void*, uint32_t, bool);
extern "C" void YellowAuto_002e6a70(uint8_t* arg0, uint32_t arg1, bool arg2, bool arg3) __asm__("_ZN3app2ui11UIResponder15SetButtonEnableEjbb");
extern "C" void YellowAuto_002e6a70(uint8_t* arg0, uint32_t arg1, bool arg2, bool arg3) {
void* v0 = *(void**)(arg0 + 0x10);
if (v0 == (void*)0) return;
if (arg2) FUN_002ec084(v0, arg1, arg3);
else FUN_002ec13c(v0, arg1, arg3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6B00
extern "C" void YellowAuto_002e6b00(uint8_t* arg0, bool arg1) __asm__("_ZN3app2ui11UIResponder15SetInputEnabledEb");
extern "C" void YellowAuto_002e6b00(uint8_t* arg0, bool arg1) {
*(uint8_t*)(arg0 + 0x2D) = arg1;
uint32_t* v0 = *(uint32_t**)(arg0);
uint32_t v1 = v0[7];
((void (*)(uint8_t*, bool))v1)(arg0, arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004981D8
uint8_t* FUN_001054dc(uint8_t*);
extern "C" bool YellowAuto_004981d8(const uint8_t* arg0) __asm__("_ZNK3app2ui11UIResponder16IsHoldTouchPanelEv");
extern "C" bool YellowAuto_004981d8(const uint8_t* arg0) {
uint8_t* v0 = *(uint8_t**)(arg0 + 0x28);
uint8_t* v1 = FUN_001054dc(v0);
return *(uint8_t*)(v1 + 8) != 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6C68
void* operator_new(uint32_t, void*);
void* ButtonManager(void*, void*, void*, uint32_t, uint32_t);
void AddButton(void*, void*, int32_t, const void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void*);
extern "C" void YellowAuto_002e6c68(uint8_t* arg0, uint8_t* arg1, void* arg2, const uint8_t* arg3, uint32_t arg4) __asm__("_ZN3app2ui11UIResponder19CreateButtonManagerEPNS_4util4HeapEPN4gfl23lyt5LytWkEPKNS0_12ButtonInfoExEj");
extern "C" void YellowAuto_002e6c68(uint8_t* arg0, uint8_t* arg1, void* arg2, const uint8_t* arg3, uint32_t arg4) {
void* alloc = *(void**)(arg1 + 4);
void* mem = operator_new(48, alloc);
void* mgr = (void*)0;
if (mem != (void*)0) {
uint32_t cfg = **(uint32_t**)0x2E6D20;
mgr = ButtonManager(mem, alloc, (void*)0, arg4, cfg);
}
*(void**)(arg0 + 16) = mgr;
uint32_t i = 0;
if (arg4 != 0) {
do {
const uint8_t* e = arg3 + i * 36;
AddButton(*(void**)(arg0 + 16), alloc, *(const int32_t*)e, arg2, *(const uint32_t*)(e + 4), *(const uint32_t*)(e + 8), *(const uint32_t*)(e + 12), *(const uint32_t*)(e + 16), *(const uint32_t*)(e + 20), *(const uint32_t*)(e + 24), *(const uint32_t*)(e + 28), *(const uint32_t*)(e + 32), (void*)arg0);
i = i + 1;
} while (i < arg4);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6BA4
void* operator_new(uint32_t, void*);
void* ButtonManager(void*, void*, void*, uint32_t, uint32_t);
void AddButton(void*, void*, int32_t, const void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void*);
extern "C" void YellowAuto_002e6ba4(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app2ui11UIResponder19CreateButtonManagerEPNS_4util4HeapEPKNS0_15ButtonInfoLytWkEj");
extern "C" void YellowAuto_002e6ba4(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2, uint32_t arg3) {
void* alloc = *(void**)(arg1 + 4);
void* mem = operator_new(48, alloc);
void* mgr = (void*)0;
if (mem != (void*)0) {
uint32_t cfg = **(uint32_t**)0x2E6C64;
mgr = ButtonManager(mem, alloc, (void*)0, arg3, cfg);
}
*(void**)(arg0 + 16) = mgr;
uint32_t i = 0;
if (arg3 != 0) {
do {
const uint8_t* e = arg2 + i * 40;
AddButton(*(void**)(arg0 + 16), alloc, *(const int32_t*)e, *(const void**)(e + 12), *(const uint32_t*)(e + 4), *(const uint32_t*)(e + 8), *(const uint32_t*)(e + 16), *(const uint32_t*)(e + 20), *(const uint32_t*)(e + 24), *(const uint32_t*)(e + 28), *(const uint32_t*)(e + 32), *(const uint32_t*)(e + 36), (void*)arg0);
i = i + 1;
} while (i < arg3);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6F24
extern "C" void YellowAuto_002e6f24(uint8_t* arg0) __asm__("_ZN3app2ui11UIResponder28CallbackFuncOnButtonSelectedEj");
extern "C" void YellowAuto_002e6f24(uint8_t* arg0) {
uint8_t en = *(arg0 + 45);
if (en != 0) {
void* mgr = *(void**)(arg0 + 20);
if (mgr != (void*)0) {
void* vt = *(void**)mgr;
int32_t (*fn)(void*) = *(int32_t (**)(void*))((uint8_t*)vt + 8);
int32_t r = fn(mgr);
if (r == 0) {
*(arg0 + 44) = 1;
}
}
}
}
#endif
