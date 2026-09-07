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
