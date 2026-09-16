// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E0594
extern "C" void YellowAuto_003e0594(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib8Delivery15DeliveryManager14ClearAttributeEi");
extern "C" void YellowAuto_003e0594(uint8_t* arg0, uint32_t arg1) {
if (*(uint8_t*)(arg0 + 0x4) != 0 && *(uint8_t*)(arg0 + 0x10) == 1 && arg1 < 3) if (arg1 == 0) *(uint32_t*)(arg0 + 0x78) = 0; else if (arg1 == 1) *(uint32_t*)(arg0 + 0x7c) = 0; else if (arg1 == 2) *(uint32_t*)(arg0 + 0x80) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E050C
void FUN_0040c954(void*, const uint32_t*, const uint32_t*);
extern "C" uint32_t YellowAuto_003e050c(uint8_t* arg0, const uint32_t* arg1, const uint32_t* arg2, uint8_t arg3) __asm__("_ZN6NetLib8Delivery15DeliveryManager10InitializeEPKN7gflnet213InitParameterEPKNS2_18InitParameterFixedENS1_13DELIVERY_TYPEE");
extern "C" uint32_t YellowAuto_003e050c(uint8_t* arg0, const uint32_t* arg1, const uint32_t* arg2, uint8_t arg3) {
if (*(uint8_t*)(arg0 + 0x4) == 0) *(uint8_t*)(arg0 + 0x4) = 1, *(uint8_t*)(arg0 + 0x10) = arg3, *(uint32_t*)(arg0 + 0x14) = arg1[2], *(uint32_t*)(arg0 + 0x58) = arg1[0], *(uint32_t*)(arg0 + 0x5c) = arg1[1], *(uint32_t*)(arg0 + 0x60) = arg1[2], *(uint32_t*)(arg0 + 0x64) = arg1[3], *(uint32_t*)(arg0 + 0x68) = arg1[4], *(uint32_t*)(arg0 + 0x6c) = arg1[5], *(uint32_t*)(arg0 + 0x70) = arg2[0], *(uint32_t*)(arg0 + 0x74) = arg2[1], FUN_0040c954(arg0 + 0x28, arg1, arg2), *(uint32_t*)(arg0 + 0x78) = 0, *(uint32_t*)(arg0 + 0x7c) = 0, *(uint32_t*)(arg0 + 0x80) = 0; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E05DC
uint32_t FUN_004a2da8(int32_t);
void Kill(void*);
extern "C" void YellowAuto_003e05dc(uint8_t* arg0) __asm__("_ZN6NetLib8Delivery15DeliveryManager15PrepareFinalizeEv");
extern "C" void YellowAuto_003e05dc(uint8_t* arg0) {
if (FUN_004a2da8((int32_t)arg0) != 0 && *(uint8_t*)(arg0 + 0x10) == 0 && *(uint32_t*)(arg0 + 0xc) != 0) Kill(*(void**)(*(uint32_t*)(arg0 + 0xc) + 0xe0)); if (FUN_004a2da8((int32_t)arg0) != 0 && *(uint8_t*)(arg0 + 0x10) == 0 && *(uint32_t*)(arg0 + 0x8) != 0) Kill(*(void**)(*(uint32_t*)(arg0 + 0x8) + 0xc8)); if (FUN_004a2da8((int32_t)arg0) != 0 && (*(uint8_t*)(arg0 + 0x10) == 1 || *(uint8_t*)(arg0 + 0x10) == 2) && *(uint32_t*)(arg0 + 0x20) != 0) (*(void (**)(void*))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x20)) + 0x10))(*(void**)(arg0 + 0x20));
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E07A4
extern "C" void YellowAuto_003e07a4(uint8_t* arg0) __asm__("_ZN6NetLib8Delivery15DeliveryManager6UpdateEv");
extern "C" void YellowAuto_003e07a4(uint8_t* arg0) {
if (*(void**)(arg0 + 0x20) != (void*)0) (*(void (**)(void*, void*))(*(uint32_t*)(*(void**)(arg0 + 0x20)) + 8))(*(void**)(arg0 + 0x20), *(void**)(arg0 + 0x1c));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E07C8
void FUN_003e0670(uint8_t*);
void FUN_004b4a4c(void*);
extern "C" uint32_t YellowAuto_003e07c8(uint8_t* arg0) __asm__("_ZN6NetLib8Delivery15DeliveryManager8FinalizeEv");
extern "C" uint32_t YellowAuto_003e07c8(uint8_t* arg0) {
if (*(arg0 + 0x4) == (uint8_t)0) return 0;
*(arg0 + 0x4) = (uint8_t)0;
if (*(void**)(arg0 + 0x20) != (void*)0) {
FUN_003e0670(arg0);
if (*(void**)(arg0 + 0x20) != (void*)0) {
(*(void (**)(void*))(*(uint32_t*)(*(void**)(arg0 + 0x20)) + 4))(*(void**)(arg0 + 0x20));
*(void**)(arg0 + 0x20) = (void*)0;
}
}
*(void**)(arg0 + 0x18) = (void*)0;
*(void**)(arg0 + 0x1c) = (void*)0;
*(void**)(arg0 + 0x14) = (void*)0;
*(void**)(arg0 + 0x84) = (void*)0;
*(void**)(arg0 + 0x88) = (void*)0;
FUN_004b4a4c((void*)(arg0 + 0x8c));
FUN_004b4a4c((void*)(arg0 + 0x96));
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E0ACC
void* FUN_004b4a00(uint32_t, uint8_t*, uint32_t);
void* FUN_003e2290(void*, uint8_t*, uint8_t*);
uint32_t FUN_003e2108(void*, uint16_t, const void*, uint32_t, int8_t);
void* FUN_003e29b8(void*, uint8_t*, uint32_t, void*);
void* FUN_003e15f0(void*, uint8_t*, uint8_t*, uint8_t*, uint8_t*);
uint32_t FUN_003e0dd4(void*, int32_t, uint16_t, const void*, uint32_t);
void FUN_003e2680(void*);
void FUN_003e07c8(uint8_t*);
void FUN_virtual4(void*);
extern "C" bool YellowAuto_003e0acc(uint8_t* arg0, int32_t arg1, uint16_t arg2, const void* arg3, uint32_t arg4) __asm__("_ZN6NetLib8Delivery15DeliveryManager9StartSendEitPKvj");
extern "C" bool YellowAuto_003e0acc(uint8_t* arg0, int32_t arg1, uint16_t arg2, const void* arg3, uint32_t arg4) {
if (*(arg0 + 4) == 0) return false;
if (*reinterpret_cast<uint32_t*>(arg0 + 32) != 0) return true;
if (*(arg0 + 16) == 0) {
void* t0 = FUN_004b4a00(32, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), 1);
void* t1 = 0;
if (t0 != 0) t1 = FUN_003e2290(t0, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), arg0 + 40);
uint32_t t2 = FUN_003e2108(t1, arg2, arg3, arg4, static_cast<int8_t>(*(arg0 + 160)));
void* t3 = FUN_004b4a00(208, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), 1);
void* t4 = 0;
if (t3 != 0) t4 = FUN_003e29b8(t3, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), 8192, t1);
*reinterpret_cast<uint32_t*>(arg0 + 8) = reinterpret_cast<uint32_t>(t4);
*reinterpret_cast<uint32_t*>(arg0 + 32) = reinterpret_cast<uint32_t>(t1);
} else if (*(arg0 + 16) == 2) {
void* t0 = FUN_004b4a00(88, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), 1);
void* t1 = 0;
if (t0 != 0) t1 = FUN_003e15f0(t0, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), arg0 + 40, arg0 + 88, arg0 + 112);
uint32_t t2 = FUN_003e0dd4(t1, arg1, arg2, arg3, arg4);
if (t2 == 0 && t1 != 0) { FUN_virtual4(t1); t1 = 0; }
*reinterpret_cast<uint32_t*>(arg0 + 32) = reinterpret_cast<uint32_t>(t1);
} else { FUN_003e07c8(arg0); return false; }
if (*reinterpret_cast<uint32_t*>(arg0 + 32) == 0) { FUN_003e07c8(arg0); return false; }
if (*reinterpret_cast<uint32_t*>(arg0 + 8) != 0) FUN_003e2680(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 8)));
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E0848
void* FUN_004b4a00(uint32_t, uint8_t*, uint32_t);
void* FUN_003e2290(void*, uint8_t*, uint8_t*);
uint32_t FUN_003e2108(void*, uint16_t, const void*, uint32_t, int8_t);
void* FUN_003e2500(void*, uint8_t*, uint32_t, void*);
void FUN_0045b2a8(uint32_t, uint8_t*);
int32_t FUN_00100294(uint8_t*, uint32_t, const void*, uint32_t);
extern const uint8_t DATA_003e0ac8;
void FUN_0045b124(uint32_t, uint8_t*);
void* FUN_003e1f3c(void*, uint8_t*, uint8_t*, uint8_t*, void*, bool);
uint32_t FUN_003e1778(void*, uint32_t, int32_t);
void* FUN_003e15f0(void*, uint8_t*, uint8_t*, uint8_t*, uint8_t*);
uint32_t FUN_003e0dd4(void*, int32_t, uint16_t, const void*, uint32_t);
void FUN_0035f244(void*);
void FUN_003e07c8(uint8_t*);
void FUN_virtual4(void*);
extern "C" bool YellowAuto_003e0848(uint8_t* arg0, int32_t arg1, bool arg2) __asm__("_ZN6NetLib8Delivery15DeliveryManager9StartRecvEib");
extern "C" bool YellowAuto_003e0848(uint8_t* arg0, int32_t arg1, bool arg2) {
if (*(arg0 + 4) == 0) return false;
if (*reinterpret_cast<uint32_t*>(arg0 + 32) != 0) return true;
if (*(arg0 + 16) == 0) {
void* t0 = FUN_004b4a00(32, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), 1);
void* t1 = 0;
if (t0 != 0) t1 = FUN_003e2290(t0, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), arg0 + 40);
uint32_t t2 = FUN_003e2108(t1, 0, 0, 0, static_cast<int8_t>(*(arg0 + 161)));
if (t2 == 0) { if (t1 != 0) FUN_virtual4(t1); t1 = 0; } else { void* t3 = FUN_004b4a00(228, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), 1); void* t4 = 0; if (t3 != 0) t4 = FUN_003e2500(t3, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), 8192, t1); *reinterpret_cast<uint32_t*>(arg0 + 12) = reinterpret_cast<uint32_t>(t4); }
*reinterpret_cast<uint32_t*>(arg0 + 32) = reinterpret_cast<uint32_t>(t1);
if (*reinterpret_cast<uint32_t*>(arg0 + 32) == 0) { FUN_003e07c8(arg0); return false; }
if (*reinterpret_cast<uint32_t*>(arg0 + 12) != 0) FUN_0035f244(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 12)));
return true;
}
if (*(arg0 + 16) == 1) {
*reinterpret_cast<uint32_t*>(arg0 + 120) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 124) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 128) = 0;
uint32_t t5 = 0;
if (*reinterpret_cast<uint32_t*>(arg0 + 136) == 0) FUN_0045b2a8(0, arg0 + 150); else { FUN_00100294(arg0 + 150, 10, &DATA_003e0ac8, *reinterpret_cast<uint32_t*>(arg0 + 136)); t5 = 1; }
FUN_0045b124(t5, arg0 + 140);
if (*(arg0 + 4) != 0 && *(arg0 + 16) == 1) { *reinterpret_cast<uint32_t*>(arg0 + 120) = reinterpret_cast<uint32_t>(arg0 + 140); *reinterpret_cast<uint32_t*>(arg0 + 124) = reinterpret_cast<uint32_t>(arg0 + 150); *reinterpret_cast<uint32_t*>(arg0 + 128) = 0; }
if (*(arg0 + 4) != 0 && *(arg0 + 16) == 1) *reinterpret_cast<uint32_t*>(arg0 + 132) = reinterpret_cast<uint32_t>(arg0);
void* t0 = FUN_004b4a00(108, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), 1);
void* t1 = 0;
if (t0 != 0) t1 = FUN_003e1f3c(t0, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), arg0 + 40, arg0 + 120, reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 132)), arg2);
uint32_t t2 = FUN_003e1778(t1, *reinterpret_cast<uint32_t*>(arg0 + 28), arg1);
if (t2 == 0) { if (t1 != 0) FUN_virtual4(t1); t1 = 0; }
*reinterpret_cast<uint32_t*>(arg0 + 32) = reinterpret_cast<uint32_t>(t1);
if (*reinterpret_cast<uint32_t*>(arg0 + 32) == 0) { FUN_003e07c8(arg0); return false; }
if (*reinterpret_cast<uint32_t*>(arg0 + 12) != 0) FUN_0035f244(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 12)));
return true;
}
if (*(arg0 + 16) == 2) {
void* t0 = FUN_004b4a00(88, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), 1);
void* t1 = 0;
if (t0 != 0) t1 = FUN_003e15f0(t0, reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 20)), arg0 + 40, arg0 + 88, arg0 + 112);
uint32_t t2 = FUN_003e0dd4(t1, arg1, 0, 0, 0);
if (t2 == 0) { if (t1 != 0) FUN_virtual4(t1); t1 = 0; }
*reinterpret_cast<uint32_t*>(arg0 + 32) = reinterpret_cast<uint32_t>(t1);
if (*reinterpret_cast<uint32_t*>(arg0 + 32) == 0) { FUN_003e07c8(arg0); return false; }
if (*reinterpret_cast<uint32_t*>(arg0 + 12) != 0) FUN_0035f244(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 12)));
return true;
}
FUN_003e07c8(arg0);
return false;
}
#endif
