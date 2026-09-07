// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7E00
extern "C" uint32_t* YellowAuto_004a7e00(const uint8_t* arg0, uint32_t arg1, uint32_t* arg2) __asm__("_ZNK8Savedata6MyItem13GetPocketItemEjPj");
extern "C" uint32_t* YellowAuto_004a7e00(const uint8_t* arg0, uint32_t arg1, uint32_t* arg2) {
if (arg1 == 0U) { *arg2 = 430U; return reinterpret_cast<uint32_t*>(*reinterpret_cast<const uint32_t*>(arg0 + 0xDE8)); } if (arg1 == 1U) { *arg2 = 64U; return reinterpret_cast<uint32_t*>(*reinterpret_cast<const uint32_t*>(arg0 + 0xDE4)); } if (arg1 == 2U) { *arg2 = 108U; return reinterpret_cast<uint32_t*>(*reinterpret_cast<const uint32_t*>(arg0 + 0xDEC)); } if (arg1 == 3U) { *arg2 = 72U; return reinterpret_cast<uint32_t*>(*reinterpret_cast<const uint32_t*>(arg0 + 0xDF0)); } if (arg1 == 4U) { *arg2 = 184U; return reinterpret_cast<uint32_t*>(*reinterpret_cast<const uint32_t*>(arg0 + 0xDF4)); } if (arg1 == 5U) { *arg2 = 30U; return reinterpret_cast<uint32_t*>(*reinterpret_cast<const uint32_t*>(arg0 + 0xDF8)); } *arg2 = 0U; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7F2C
uint32_t * func_004a7d6c(const uint8_t *, uint16_t, uint32_t *);
extern "C" bool YellowAuto_004a7f2c(const uint8_t* arg0, uint16_t arg1, uint16_t arg2) __asm__("_ZNK8Savedata6MyItem5CheckEtt");
extern "C" bool YellowAuto_004a7f2c(const uint8_t* arg0, uint16_t arg1, uint16_t arg2) {
uint32_t m = 0U; uint32_t* p = func_004a7d6c(arg0, arg1, &m); if (p != 0) { uint32_t v = *p; if ((v & 0x3FFU) == arg1 && arg2 <= ((v & 0xFFFFFU) >> 10U)) { return true; } } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8128
uint32_t * func_004a7d6c(const uint8_t *, uint16_t, uint32_t *);
extern "C" bool YellowAuto_004a8128(const uint8_t* arg0, uint16_t arg1, uint16_t arg2) __asm__("_ZNK8Savedata6MyItem8SubCheckEtt");
extern "C" bool YellowAuto_004a8128(const uint8_t* arg0, uint16_t arg1, uint16_t arg2) {
uint32_t m = 0U; uint32_t* p = func_004a7d6c(arg0, arg1, &m); if (p != 0) { uint32_t v = *p; if ((v & 0x3FFU) == arg1 && arg2 <= ((v & 0xFFFFFU) >> 10U)) { return true; } } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7F84
uint32_t * func_004a7fd4(const uint8_t *, uint16_t);
extern "C" bool YellowAuto_004a7f84(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata6MyItem5IsNewEj");
extern "C" bool YellowAuto_004a7f84(const uint8_t* arg0, uint32_t arg1) {
uint32_t* p = func_004a7fd4(arg0, static_cast<uint16_t>(arg1)); if (p != 0 && ((*p & 0x40000000U) != 0U)) { return true; } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004421EC
uint32_t * func_004a7fd4(const uint8_t *, uint16_t);
extern "C" bool YellowAuto_004421ec(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata6MyItem19IsRegisterFreeSpaceEj");
extern "C" bool YellowAuto_004421ec(uint8_t* arg0, uint32_t arg1) {
uint32_t* p = func_004a7fd4(arg0, static_cast<uint16_t>(arg1)); if (p != 0 && (((*p & 0x3FFFFFFFU) >> 20U) != 0U)) { return true; } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00441CB4
void func_0035be88();
extern "C" void YellowAuto_00441cb4(uint8_t* arg0, void* arg1, uint32_t* arg2, uint32_t* arg3, bool arg4) __asm__("_ZN8Savedata6MyItem12AddFreeSpaceEPPNS0_7ITEM_STES2_Pjb");
extern "C" void YellowAuto_00441cb4(uint8_t* arg0, void* arg1, uint32_t* arg2, uint32_t* arg3, bool arg4) {
(void)arg0; if (((*arg2 & 0x3FFFFFFFU) >> 20U) != 0U && !arg4) { func_0035be88(); return; } reinterpret_cast<uint32_t**>(arg1)[*arg3] = arg2; *arg3 = *arg3 + 1U; *arg2 = ((*arg3 << 20U) & 0x3FFFFFFFU) | (*arg2 & 0xC00FFFFFU);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7FD4
uint32_t func_0036dcd0(uint16_t, uint32_t);
uint32_t * func_004a7e00(const uint8_t *, uint32_t, uint32_t *);
extern "C" uint32_t* YellowAuto_004a7fd4(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK8Savedata6MyItem7GetItemEt");
extern "C" uint32_t* YellowAuto_004a7fd4(const uint8_t* arg0, uint16_t arg1) {
uint32_t pocket = func_0036dcd0(arg1, 11U); uint32_t m = 0U; uint32_t* b = func_004a7e00(arg0, pocket, &m); if (b != 0 && m != 0U) { for (uint32_t i = 0U; i < m; i = i + 1U) { if ((b[i] & 0x3FFU) == arg1) { return &b[i]; } } } return 0;
}
#endif
