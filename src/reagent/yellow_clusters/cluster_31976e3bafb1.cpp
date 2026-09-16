// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033820C
extern "C" void YellowAuto_0033820c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine8renderer4util17MakeBlurImagePath13ChangeDofTypeENS0_7DofTypeE");
extern "C" void YellowAuto_0033820c(uint8_t* arg0, uint32_t arg1) {
arg0[4] = (uint8_t)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033823C
extern "C" void YellowAuto_0033823c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine8renderer4util17MakeBlurImagePath20SetAvailableLayerNumEj");
extern "C" void YellowAuto_0033823c(uint8_t* arg0, uint32_t arg1) {
*(uint32_t*)(arg0 + 316) = arg1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00337FAC
void* CreateTexture_(void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00337fac(uint8_t* arg0, void* arg1, const uint32_t* arg2) __asm__("_ZN4gfl215renderingengine8renderer4util17MakeBlurImagePath10InitializeEPNS_3gfx12IGLAllocatorERKNS3_15InitDescriptionE");
extern "C" void YellowAuto_00337fac(uint8_t* arg0, void* arg1, const uint32_t* arg2) {
*(uint32_t*)(arg0 + 12) = *(uint32_t*)(arg2 + 0); *(uint32_t*)(arg0 + 16) = *(uint32_t*)(arg2 + 4); *(uint32_t*)(arg0 + 20) = *(uint32_t*)(arg2 + 0); *(uint32_t*)(arg0 + 24) = *(uint32_t*)(arg2 + 4); *(uint32_t*)(arg0 + 20) = 8; while (*(uint32_t*)(arg0 + 20) < *(uint32_t*)(arg0 + 12) && *(uint32_t*)(arg0 + 20) < 1024) *(uint32_t*)(arg0 + 20) <<= 1; if (*(uint32_t*)(arg0 + 20) < *(uint32_t*)(arg0 + 12)) *(uint32_t*)(arg0 + 20) = *(uint32_t*)(arg0 + 12); *(uint32_t*)(arg0 + 24) = 8; while (*(uint32_t*)(arg0 + 24) < *(uint32_t*)(arg0 + 16) && *(uint32_t*)(arg0 + 24) < 1024) *(uint32_t*)(arg0 + 24) <<= 1; if (*(uint32_t*)(arg0 + 24) < *(uint32_t*)(arg0 + 16)) *(uint32_t*)(arg0 + 24) = *(uint32_t*)(arg0 + 16); *(uint32_t*)(arg0 + 356) = (uint32_t)CreateTexture_(arg1, *(uint32_t*)(arg0 + 24), *(uint32_t*)(arg0 + 20), 1, 1, 4, 0); *(uint32_t*)(arg0 + 352) = (uint32_t)CreateTexture_(arg1, *(uint32_t*)(arg0 + 24), *(uint32_t*)(arg0 + 20), 1, 1, 4, 0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003387D0
uint32_t HelperGetVTable(void);
uint32_t HelperGetFill(void);
void* HelperGetCtorA(void);
void* HelperGetCtorB(void);
uint8_t* HelperVecCtor(uint8_t*, void*, uint32_t, uint32_t);
void HelperMemClear(uint8_t*, uint32_t);
extern "C" uint8_t* YellowAuto_003387d0(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer4util17MakeBlurImagePathC1Ev");
extern "C" uint8_t* YellowAuto_003387d0(uint8_t* arg0) {
uint32_t v0 = HelperGetVTable();
uint32_t v1 = HelperGetFill();
void* p0 = HelperGetCtorA();
void* p1 = HelperGetCtorB();
*reinterpret_cast<uint32_t*>(arg0) = v0;
*(arg0 + 0x4) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x8) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0xC) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x10) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x14) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x18) = 0;
HelperVecCtor(arg0 + 0x1C, p0, 0x30, 6);
*reinterpret_cast<uint32_t*>(arg0 + 0x13C) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x160) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x164) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x168) = 0;
HelperVecCtor(arg0 + 0x16C, p1, 0x10, 3);
*reinterpret_cast<uint32_t*>(arg0 + 0x16C) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x170) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x174) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x178) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x17C) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x180) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x184) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x188) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x18C) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x190) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x194) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x198) = v1;
HelperVecCtor(arg0 + 0x19C, p1, 0x10, 4);
*reinterpret_cast<uint32_t*>(arg0 + 0x19C) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1A0) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1A4) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1A8) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1AC) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1B0) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1B4) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1B8) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1BC) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1C0) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1C4) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1C8) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1CC) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1D0) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1D4) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x1D8) = v1;
HelperMemClear(arg0 + 0x1C, 0x120);
*reinterpret_cast<uint32_t*>(arg0 + 0x140) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x144) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x148) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x14C) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x150) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x154) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x158) = v1;
*reinterpret_cast<uint32_t*>(arg0 + 0x15C) = v1;
return arg0;
}
#endif
