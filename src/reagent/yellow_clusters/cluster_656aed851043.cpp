// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FD28C
extern "C" uint32_t YellowAuto_002fd28c(uint32_t arg0, bool arg1) __asm__("_ZN3app4tool27AppToolTrainerIconRendering20GetUseSystemHeapSizeEjb");
extern "C" uint32_t YellowAuto_002fd28c(uint32_t arg0, bool arg1) {
return arg0 * (arg1 ? 0xC800U : 0xD000U);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FD218
uint32_t FUN_002e8a28(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_002fc3a8();
extern const float DAT_002fd288;
extern "C" uint32_t YellowAuto_002fd218(uint32_t arg0, bool arg1) __asm__("_ZN3app4tool27AppToolTrainerIconRendering20GetUseDeviceHeapSizeEjb");
extern "C" uint32_t YellowAuto_002fd218(uint32_t arg0, bool arg1) {
uint32_t tmp = FUN_002e8a28(64u, 64u, 1u, 4u) + 30720u;
uint32_t base = arg1 == false ? 1966080u : 0u;
if (arg1 == false) tmp = (uint32_t)((float)(tmp + 1130496u) + (float)FUN_002fc3a8() * DAT_002fd288);
return arg0 * tmp + base + 81920u;
}
#endif
