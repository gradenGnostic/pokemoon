// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D18A0
extern "C" uint8_t YellowAuto_003d18a0() __asm__("_ZN6NetLib17NijiNetworkSystem14GetNetworkModeEv");
extern "C" uint8_t YellowAuto_003d18a0() {
return *(uint8_t*)(*(uint32_t*)0x003D18AC + 0x0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D184C
extern "C" void YellowAuto_003d184c(void* arg0) __asm__("_ZN6NetLib17NijiNetworkSystem13SetRegulationEP10Regulation");
extern "C" void YellowAuto_003d184c(void* arg0) {
if (*(uint32_t*)(*(uint32_t*)0x003D1860 + 0x18)) *(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x003D1860 + 0x18) + 0x30) = (uint32_t)arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D2604
extern "C" void YellowAuto_003d2604(uint32_t arg0, void* arg1) __asm__("_ZN6NetLib17NijiNetworkSystem18SetupLiveRecSenderEjP18BATTLE_SETUP_PARAM");
extern "C" void YellowAuto_003d2604(uint32_t arg0, void* arg1) {
if (*(uint32_t*)(*(uint32_t*)0x003D2618 + 0x18)) *(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x003D2618 + 0x18) + 0xC) = arg0; if (*(uint32_t*)(*(uint32_t*)0x003D2618 + 0x18)) *(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x003D2618 + 0x18) + 0x10) = (uint32_t)arg1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D2700
int32_t* GetLiveRecSenderState();
extern "C" void YellowAuto_003d2700() __asm__("_ZN6NetLib17NijiNetworkSystem19ReloadLiveRecSenderEv");
extern "C" void YellowAuto_003d2700() {
int32_t* p = GetLiveRecSenderState(); if (p != (int32_t*)0 && p[0] == 4) { p[0] = 5; p[1] = 3; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D18D4
int32_t* GetTempBeaconIndexPtr();
uint8_t* GetTempBeaconTable();
extern "C" void YellowAuto_003d18d4(uint8_t arg0) __asm__("_ZN6NetLib17NijiNetworkSystem15SetTempBeaconIDEh");
extern "C" void YellowAuto_003d18d4(uint8_t arg0) {
int32_t v = *GetTempBeaconIndexPtr(); if (v != 0) { GetTempBeaconTable()[v] = arg0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D1978
void* FUN_00357738();
void FUN_0040b620(void*);
void FUN_0040b9c8(void*);
void FUN_003D1BC4();
extern "C" void YellowAuto_003d1978() __asm__("_ZN6NetLib17NijiNetworkSystem16TerminateNetworkEv");
extern "C" void YellowAuto_003d1978() {
void* h = FUN_00357738(); if (h != (void*)0) { FUN_0040b620(FUN_00357738()); FUN_0040b9c8(FUN_00357738()); } FUN_003D1BC4();
}
#endif
