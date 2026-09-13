// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00406FB4
extern "C" bool YellowAuto_00406fb4(const uint8_t* arg0, int16_t arg1) __asm__("_ZN7gflnet23p2p7NetGame11IsTimingEndEi");
extern "C" bool YellowAuto_00406fb4(const uint8_t* arg0, int16_t arg1) {
return (*(const uint16_t*)(arg0 + 0x410) == (uint16_t)arg1) && ((uint16_t)arg1 != 0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407000
extern "C" void YellowAuto_00407000(uint8_t* arg0, int32_t arg1) __asm__("_ZN7gflnet23p2p7NetGame11TimingStartEi");
extern "C" void YellowAuto_00407000(uint8_t* arg0, int32_t arg1) {
*(uint16_t*)(arg0 + 0x410) = 0;
*(uint16_t*)(arg0 + 0x414) = (uint16_t)arg1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407DF8
void __aeabi_memclr4(uint8_t*, uint32_t);
extern "C" uint8_t* YellowAuto_00407df8(uint8_t* arg0) __asm__("_ZN7gflnet23p2p7NetGameC1Ev");
extern "C" uint8_t* YellowAuto_00407df8(uint8_t* arg0) {
*reinterpret_cast<uint32_t*>(arg0) = *reinterpret_cast<uint32_t*>(0x00407E84u); *reinterpret_cast<uint32_t*>(arg0 + 0x404u) = 0u; *reinterpret_cast<uint16_t*>(arg0 + 0x410u) = 0u; *reinterpret_cast<uint16_t*>(arg0 + 0x412u) = 0u; *reinterpret_cast<uint16_t*>(arg0 + 0x414u) = 0u; *reinterpret_cast<uint16_t*>(arg0 + 0x416u) = 0u; *reinterpret_cast<uint16_t*>(arg0 + 0x418u) = 0u; *(arg0 + 0x41Au) = 0u; *(arg0 + 0x41Bu) = 0u; *(arg0 + 0x41Cu) = 0u; *(arg0 + 0x41Du) = 0u; __aeabi_memclr4(arg0 + 4u, 1024u); *reinterpret_cast<uint32_t*>(arg0 + 0x408u) = 0u; *reinterpret_cast<uint32_t*>(arg0 + 0x40Cu) = 0u; *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(0x00407E88u) + 4u) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(0x00407E88u) + 4u) + 1u; return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00406EB8
void FUN_004011b0(uint32_t, uint8_t*);
void FUN_004015e0(uint32_t);
void FUN_00401210(uint32_t, uint32_t);
extern "C" void YellowAuto_00406eb8(uint8_t* arg0) __asm__("_ZN7gflnet23p2p7NetGame10InitializeEv");
extern "C" void YellowAuto_00406eb8(uint8_t* arg0) {
uint8_t* _p = *reinterpret_cast<uint8_t**>(0x00406F1Cu); if (*reinterpret_cast<uint32_t*>(_p) != 0u) { FUN_004011b0(*reinterpret_cast<uint32_t*>(_p), arg0); FUN_004015e0(*reinterpret_cast<uint32_t*>(_p)); if (*reinterpret_cast<int32_t*>(_p + 4u) > 0) { int32_t _v = *reinterpret_cast<int32_t*>(_p + 8u) + 1; if (_v > 255) { _v = 128; } *reinterpret_cast<uint32_t*>(_p + 8u) = (uint32_t)_v; FUN_00401210(*reinterpret_cast<uint32_t*>(_p), (uint32_t)_v); } } *(arg0 + 0x41Bu) = 0u;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407AC0
int32_t FUN_00401c90(uint32_t, int32_t);
int32_t FUN_00407c54(uint8_t*, int32_t, uint8_t*, int32_t);
void FUN_00402674(uint32_t, int32_t, uint32_t, uint8_t*, uint32_t);
extern "C" uint32_t YellowAuto_00407ac0(uint8_t* arg0, int32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN7gflnet23p2p7NetGame8RecvDataEiPci");
extern "C" uint32_t YellowAuto_00407ac0(uint8_t* arg0, int32_t arg1, uint8_t* arg2, uint32_t arg3) {
uint8_t* _p = *reinterpret_cast<uint8_t**>(0x00407B6Cu); if (*reinterpret_cast<uint32_t*>(_p) == 0u) { return 0u; } int32_t _id = FUN_00401c90(*reinterpret_cast<uint32_t*>(_p), arg1); if (_id == -1) { return 0u; } uint8_t _t[8]; int32_t _ok = FUN_00407c54(arg0, _id, _t, 1); if (_ok == 0) { return 0u; } FUN_00402674(*reinterpret_cast<uint32_t*>(_p), _id, *reinterpret_cast<uint16_t*>(_t + 6u), arg2, arg3); return 1u;
}
#endif
