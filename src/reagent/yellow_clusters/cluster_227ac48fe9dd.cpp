// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D25CC
uint8_t* p;
extern "C" void YellowAuto_003d25cc() __asm__("_ZN6NetLib17NijiNetworkSystem18ResetLiveRecSenderEv");
extern "C" void YellowAuto_003d25cc() {
p = *reinterpret_cast<uint8_t**>(*reinterpret_cast<uint32_t*>(0x3D2600u) + 0x18u); if (p != nullptr) { if (*reinterpret_cast<int32_t*>(p) == 4) { *reinterpret_cast<int32_t*>(p) = 5; reinterpret_cast<int32_t*>(p)[1] = 3; } reinterpret_cast<int32_t*>(p)[1] = 1; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D1C7C
uint8_t* p;
extern "C" void YellowAuto_003d1c7c() __asm__("_ZN6NetLib17NijiNetworkSystem17StopLiveRecSenderEv");
extern "C" void YellowAuto_003d1c7c() {
p = *reinterpret_cast<uint8_t**>(*reinterpret_cast<uint32_t*>(0x3D1CC4u) + 0x18u); if (p != nullptr) { reinterpret_cast<int32_t*>(p)[4] = 0; reinterpret_cast<int32_t*>(p)[3] = 255; if (*reinterpret_cast<int32_t*>(p) == 4) { *reinterpret_cast<int32_t*>(p) = 5; reinterpret_cast<int32_t*>(p)[1] = 3; } reinterpret_cast<int32_t*>(p)[1] = 4; reinterpret_cast<int32_t*>(p)[12] = 0; }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D28E0
void FUN_003D19C8(uint32_t, int32_t);
extern "C" void YellowAuto_003d28e0(uint32_t arg0, int32_t arg1) __asm__("_ZN6NetLib17NijiNetworkSystem25InitializeLocalP2PNetworkEv");
extern "C" void YellowAuto_003d28e0(uint32_t arg0, int32_t arg1) {
(void)arg0;
if (*reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(0x003D291C)) != 0) arg1 = 0;
FUN_003D19C8(0, arg1);
*reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(0x003D291C)) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D277C
void FUN_003D19C8(uint32_t, int32_t);
void* FUN_00357738();
void* GetHeapByHeapId(uint32_t);
extern "C" void YellowAuto_003d277c(uint32_t arg0, int32_t arg1) __asm__("_ZN6NetLib17NijiNetworkSystem21InitializeWifiNetworkEv");
extern "C" void YellowAuto_003d277c(uint32_t arg0, int32_t arg1) {
(void)arg0;
if (*reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(0x003D27F0)) != 0) arg1 = 0;
FUN_003D19C8(0, arg1);
if (FUN_00357738() != 0) *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(FUN_00357738()) + 0x20C) = reinterpret_cast<uint32_t>(GetHeapByHeapId(5));
*reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(0x003D27F0)) = 2;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D20E8
uint8_t* func_00357788();
uint8_t* func_00472ed0(uint8_t*, uint32_t);
bool func_004ab458(uint8_t*);
extern "C" int32_t YellowAuto_003d20e8() __asm__("_ZN6NetLib17NijiNetworkSystem18GetOnlinePlayerNumEv");
extern "C" int32_t YellowAuto_003d20e8() {
int32_t cnt = 0;
uint8_t* tmp = func_00357788();
if (tmp == (uint8_t*)0) return cnt;
uint8_t* mgr = func_00357788();
uint32_t i = 0;
do {
uint8_t* lst = func_00472ed0(mgr, i & 255u);
if (lst != (uint8_t*)0) {
uint32_t v10 = *(uint32_t*)(lst + 16);
if (v10 != 0u) {
uint8_t* sentinel = (uint8_t*)(*(uint32_t*)(lst + 0));
uint8_t* cur = (uint8_t*)(*(uint32_t*)(sentinel + 4));
if (cur != sentinel) {
do {
uint8_t* data = (uint8_t*)(*(uint32_t*)(cur + 8));
if (data != (uint8_t*)0) {
if (func_004ab458(data)) cnt = cnt + 1;
}
cur = (uint8_t*)(*(uint32_t*)(cur + 4));
} while (cur != sentinel);
}
}
}
i = i + 1;
} while (i < 2u);
return cnt;
}
#endif
