// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF3F4
uint8_t* S_00357668();
bool S_003D6874(uint8_t*);
void S_003CF008(uint8_t*);
void S_003CEC2C(uint8_t*);
void S_003D4DFC(uint8_t*);
extern "C" void YellowAuto_003cf3f4(uint8_t* arg0) __asm__("_ZN6NetApp3NBR6NBRNet6UpdateEv");
extern "C" void YellowAuto_003cf3f4(uint8_t* arg0) {
uint8_t* a = S_00357668();
if (!S_003D6874(a)) return;
S_003CF008(arg0);
S_003CEC2C(arg0);
S_003D4DFC(*(uint8_t**)(arg0 + 0x20));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF3B4
void S_0035BE88(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_003cf3b4(uint8_t* arg0, uint8_t arg1) __asm__("_ZN6NetApp3NBR6NBRNet26AddRecvPacketEnableCommandEh");
extern "C" void YellowAuto_003cf3b4(uint8_t* arg0, uint8_t arg1) {
for (uint32_t a = 0; a < 14; a++) {
if (*(uint8_t*)(arg0 + 0x10 + a) == 0) {
*(uint8_t*)(arg0 + 0x10 + a) = arg1;
return;
}
}
S_0035BE88(0, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CEF3C
uint32_t S_004072D4(uint8_t*, uint8_t*, uint32_t, uint32_t);
extern "C" bool YellowAuto_003cef3c(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN6NetApp3NBR6NBRNet15SendBattleStartEjb");
extern "C" bool YellowAuto_003cef3c(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint8_t b[8];
*(uint32_t*)(b + 0) = 0;
*(uint32_t*)(b + 4) = 0;
*(uint32_t*)(b + 0) = arg1;
*(uint8_t*)(b + 4) = (uint8_t)arg2;
uint8_t* a = *(uint8_t**)(arg0 + 8);
return S_004072D4(a, b, 8, 0x31) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF1A0
extern "C" void YellowAuto_003cf1a0(uint8_t* arg0) __asm__("_ZN6NetApp3NBR6NBRNet19ClearRecvPoolBufferEv");
extern "C" void YellowAuto_003cf1a0(uint8_t* arg0) {
uint8_t* a = arg0 + 0x10030;
uint8_t* b = *(uint8_t**)(a + 0);
uint8_t* c = *(uint8_t**)(b + 4);
while (c != b) {
uint8_t* d = *(uint8_t**)(c + 4);
uint8_t* e = *(uint8_t**)(c + 0);
*(uint8_t**)(e + 4) = d;
*(uint8_t**)(d + 0) = e;
*(uint8_t*)(c + 0x18) = 0;
*(uint8_t**)(c + 0) = (uint8_t*)0;
*(uint8_t**)(c + 4) = (uint8_t*)0;
*(int32_t*)(a + 0x10) = *(int32_t*)(a + 0x10) - 1;
a = arg0 + 0x10030;
b = *(uint8_t**)(a + 0);
if (d == b) break;
c = d;
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6BC0
uint8_t* GetInstance();
extern "C" bool YellowAuto_003d6bc0(uint8_t* arg0, int32_t arg1) __asm__("_ZN6NetApp3NBR6NBRNet19IsValidationCheckOkEi");
extern "C" bool YellowAuto_003d6bc0(uint8_t* arg0, int32_t arg1) {
(void)arg0;
uint8_t* _s = GetInstance();
uint8_t* _o = *reinterpret_cast<uint8_t**>(_s + 128);
if (_o == 0) return false;
return *reinterpret_cast<int8_t*>(_o + arg1 + 48) != 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6680
uint8_t* GetInstance();
bool Func_003D33DC(uint8_t*, const uint8_t*, const void*);
extern "C" bool YellowAuto_003d6680(uint8_t* arg0, const uint8_t* arg1, const void* arg2) __asm__("_ZN6NetApp3NBR6NBRNet13SendPokePartyEPKN3pml9PokePartyEPKv");
extern "C" bool YellowAuto_003d6680(uint8_t* arg0, const uint8_t* arg1, const void* arg2) {
(void)arg0; uint8_t* _s = GetInstance(); uint8_t* _o = (uint8_t*)(*(uint32_t*)(_s + 128)); if (_o == 0) return true; return Func_003D33DC(_o, arg1, arg2);
}
#endif
