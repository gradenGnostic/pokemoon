// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00395FC4
uint8_t* BinLinkerAccessor(uint8_t* arg0);
uint32_t CreateHeap(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
extern "C" uint8_t* YellowAuto_00395fc4(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN5Field5WorldC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_00395fc4(uint8_t* arg0, uint8_t* arg1) {
*(uint16_t*)arg0 = 0xffff;
*(uint32_t*)(arg0 + 4) = 0;
*(uint32_t*)(arg0 + 8) = 0;
*(uint32_t*)(arg0 + 12) = 0;
BinLinkerAccessor(arg0 + 0x10);
*(uint32_t*)(arg0 + 0x14) = 0;
*(uint32_t*)(arg0 + 0x18) = 0;
*(uint32_t*)(arg0 + 0x1c) = 0;
*(uint32_t*)(arg0 + 0x20) = 0;
*(uint32_t*)(arg0 + 0x24) = 0;
*(uint32_t*)(arg0 + 0x28) = 0;
*(uint32_t*)(arg0 + 0x2c) = 0;
*(uint32_t*)(arg0 + 0x30) = 0;
*(uint32_t*)(arg0 + 0x34) = 0;
*(uint32_t*)(arg0 + 0x38) = 0;
*(uint32_t*)(arg0 + 4) = CreateHeap(arg1, (int32_t)-2, 0x7000, 0, 0);
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00395A98
uint32_t IsArcFileOpenFinished(uint8_t*, uint32_t);
uint32_t IsArcFileLoadDataFinished(uint8_t*, uint8_t*);
uint8_t* GetData(uint8_t*, uint32_t);
void sub_00395B50(uint8_t*);
extern "C" bool YellowAuto_00395a98(uint8_t* arg0) __asm__("_ZN5Field5World14InitializeWaitEv");
extern "C" bool YellowAuto_00395a98(uint8_t* arg0) {
uint8_t* _m0 = *reinterpret_cast<uint8_t**>(arg0 + 8);
if (IsArcFileOpenFinished(_m0, 91) == 0) return false;
uint8_t* _m1 = *reinterpret_cast<uint8_t**>(arg0 + 8);
if (IsArcFileLoadDataFinished(_m1, arg0 + 12) == 0) return false;
*reinterpret_cast<uint32_t*>(arg0 + 16) = *reinterpret_cast<uint32_t*>(arg0 + 12);
*reinterpret_cast<uint8_t**>(arg0 + 20) = GetData(arg0 + 16, 0);
*reinterpret_cast<uint8_t**>(arg0 + 44) = GetData(arg0 + 16, 1);
uint8_t* _b = *reinterpret_cast<uint8_t**>(arg0 + 20);
*reinterpret_cast<uint8_t**>(arg0 + 24) = _b + *reinterpret_cast<uint32_t*>(_b + 0);
*reinterpret_cast<uint8_t**>(arg0 + 32) = _b + *reinterpret_cast<uint32_t*>(_b + 8);
*reinterpret_cast<uint32_t*>(arg0 + 28) = (*reinterpret_cast<uint32_t*>(_b + 12) - *reinterpret_cast<uint32_t*>(_b + 8)) >> 2;
*reinterpret_cast<uint8_t**>(arg0 + 36) = _b + *reinterpret_cast<uint32_t*>(_b + 4);
*reinterpret_cast<uint32_t*>(arg0 + 40) = (*reinterpret_cast<uint32_t*>(_b + 8) - *reinterpret_cast<uint32_t*>(_b + 4)) >> 2;
sub_00395B50(arg0);
return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E37C
extern "C" uint32_t YellowAuto_0049e37c(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK5Field5World18GetZoneIndexInAreaEt");
extern "C" uint32_t YellowAuto_0049e37c(const uint8_t* arg0, uint16_t arg1) {
uint32_t count = *(const uint32_t*)(arg0 + 0x1C); const uint8_t* base = (const uint8_t*)(*(const uint32_t*)(arg0 + 0x20)); uint32_t last = 4294967295U; uint32_t inner = 0; for (uint32_t i = 0; i < count; ++i) { const uint8_t* e = base + i * 4; uint16_t area = *(const uint16_t*)(e + 2); if (area != last) { last = area; inner = 0; } uint16_t id = *(const uint16_t*)(e + 0); if (id == arg1) return inner; inner = inner + 1; } return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E1D8
extern "C" const uint8_t* YellowAuto_0049e1d8(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK5Field5World13GetIDZoneInfoEt");
extern "C" const uint8_t* YellowAuto_0049e1d8(const uint8_t* arg0, uint16_t arg1) {
uint32_t count = *(const uint32_t*)(arg0 + 0x1C); const uint8_t* base = (const uint8_t*)(*(const uint32_t*)(arg0 + 0x20)); for (uint32_t i = 0; i < count; ++i) { const uint8_t* e = base + i * 4; if (*(const uint16_t*)e == arg1) return e; } return base;
}
#endif
