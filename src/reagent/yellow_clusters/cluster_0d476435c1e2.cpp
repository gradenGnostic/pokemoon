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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;


// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407180
int32_t FUN_00401c90(int32_t, int32_t);
void FUN_00108a0c(uint8_t*, uint8_t*);
void FUN_00402674(int32_t, int32_t, uint32_t, uint8_t*, int32_t);
extern "C" uint32_t YellowAuto_00407180(uint8_t* arg0, uint32_t* arg1, uint8_t* arg2, int32_t arg3, uint8_t* arg4, uint16_t* arg5) __asm__("_ZN7gflnet23p2p7NetGame15RecvDataCommandEPiPciPhPt");
extern "C" uint32_t YellowAuto_00407180(uint8_t* arg0, uint32_t* arg1, uint8_t* arg2, int32_t arg3, uint8_t* arg4, uint16_t* arg5) {
uint32_t gaddr = *(uint32_t*)0x4072D0; uint32_t* pg = (uint32_t*)gaddr; if (*pg == (uint32_t)0) return (uint32_t)0; for (uint32_t i = (uint32_t)0; i < (uint32_t)4; i = i + (uint32_t)1) { int32_t peer = FUN_00401c90((int32_t)*pg, (int32_t)i); if (peer == (int32_t)-1) continue; uint8_t* base = arg0 + (uint32_t)peer * (uint32_t)256; uint8_t* q = (uint8_t*)0; for (uint32_t j = (uint32_t)0; j < (uint32_t)32; j = j + (uint32_t)2) { if (*(base + j * (uint32_t)8 + (uint32_t)4) == (uint8_t)1) { q = base + j * (uint32_t)8 + (uint32_t)4; break; } if (*(base + j * (uint32_t)8 + (uint32_t)12) == (uint8_t)1) { q = base + j * (uint32_t)8 + (uint32_t)12; break; } } if (q == (uint8_t*)0) continue; uint8_t tmp[8]; FUN_00108a0c(tmp, q); for (uint32_t k = (uint32_t)0; k < (uint32_t)32; k = k + (uint32_t)1) { if (*(base + k * (uint32_t)8 + (uint32_t)4) == (uint8_t)1) { *(base + k * (uint32_t)8 + (uint32_t)4) = (uint8_t)0; break; } } FUN_00402674((int32_t)*pg, peer, (uint32_t)*(uint16_t*)(tmp + (uint32_t)6), arg2, arg3); *arg4 = *(tmp + (uint32_t)3); *arg1 = i; if (arg5 != (uint16_t*)0) *arg5 = *(uint16_t*)(tmp + (uint32_t)4); return (uint32_t)1; } return (uint32_t)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407464
int32_t FUN_00401c90(int32_t, int32_t);
void FUN_00108a0c(uint8_t*, uint8_t*);
void FUN_00402674(int32_t, int32_t, uint32_t, uint8_t*, int32_t);
extern "C" uint32_t YellowAuto_00407464(uint8_t* arg0, uint32_t* arg1, uint8_t* arg2, int32_t arg3, uint8_t arg4, uint16_t* arg5) __asm__("_ZN7gflnet23p2p7NetGame27RecvDataCommandLocalCommandEPiPcihPt");
extern "C" uint32_t YellowAuto_00407464(uint8_t* arg0, uint32_t* arg1, uint8_t* arg2, int32_t arg3, uint8_t arg4, uint16_t* arg5) {
uint32_t gaddr = *(uint32_t*)0x407608; uint32_t* pg = (uint32_t*)gaddr; if (*pg == (uint32_t)0) return (uint32_t)0; for (uint32_t i = (uint32_t)0; i < (uint32_t)4; i = i + (uint32_t)1) { int32_t peer = FUN_00401c90((int32_t)*pg, (int32_t)i); if (peer == (int32_t)-1) continue; uint8_t* base = arg0 + (uint32_t)peer * (uint32_t)256; uint8_t* qf = (uint8_t*)0; for (uint32_t j = (uint32_t)0; j < (uint32_t)32; j = j + (uint32_t)2) { if (*(base + j * (uint32_t)8 + (uint32_t)4) == (uint8_t)1) { qf = base + j * (uint32_t)8 + (uint32_t)4; break; } if (*(base + j * (uint32_t)8 + (uint32_t)12) == (uint8_t)1) { qf = base + j * (uint32_t)8 + (uint32_t)12; break; } } if (qf == (uint8_t*)0) continue; if ((uint32_t)*(qf + (uint32_t)3) != (uint32_t)arg4) continue; uint8_t* q = (uint8_t*)0; for (uint32_t j2 = (uint32_t)0; j2 < (uint32_t)32; j2 = j2 + (uint32_t)2) { if (*(base + j2 * (uint32_t)8 + (uint32_t)4) == (uint8_t)1) { q = base + j2 * (uint32_t)8 + (uint32_t)4; break; } if (*(base + j2 * (uint32_t)8 + (uint32_t)12) == (uint8_t)1) { q = base + j2 * (uint32_t)8 + (uint32_t)12; break; } } if (q == (uint8_t*)0) continue; uint8_t tmp[8]; FUN_00108a0c(tmp, q); for (uint32_t k = (uint32_t)0; k < (uint32_t)32; k = k + (uint32_t)1) { if (*(base + k * (uint32_t)8 + (uint32_t)4) == (uint8_t)1) { *(base + k * (uint32_t)8 + (uint32_t)4) = (uint8_t)0; break; } } FUN_00402674((int32_t)*pg, peer, (uint32_t)*(uint16_t*)(tmp + (uint32_t)6), arg2, arg3); *arg1 = i; if (arg5 != (uint16_t*)0) *arg5 = *(uint16_t*)(tmp + (uint32_t)4); return (uint32_t)1; } return (uint32_t)0;
}
#endif
