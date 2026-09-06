// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036CE1C
extern const uint16_t* DAT_0036ce84;
extern "C" bool YellowAuto_0036ce1c(uint16_t arg0) __asm__("_ZN4item14ITEM_CheckNutsEt");
extern "C" bool YellowAuto_0036ce1c(uint16_t arg0) {
const uint16_t* p = DAT_0036ce84; if (p[0] == arg0) return true; for (uint32_t i = 1; i < 0x43; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D020
extern const uint16_t* DAT_0036d068;
extern "C" bool YellowAuto_0036d020(uint16_t arg0) __asm__("_ZN4item15ITEM_CheckBeadsEt");
extern "C" bool YellowAuto_0036d020(uint16_t arg0) {
const uint16_t* p = DAT_0036d068; if (p[0] == arg0) return true; for (uint32_t i = 1; i < 0x1d; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D06C
extern const uint16_t* DAT_0036d0a8;
extern "C" bool YellowAuto_0036d06c(uint16_t arg0) __asm__("_ZN4item15ITEM_CheckJewelEt");
extern "C" bool YellowAuto_0036d06c(uint16_t arg0) {
const uint16_t* p = DAT_0036d0a8; for (uint32_t i = 0; i < 0x12; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D0AC
extern const uint16_t* DAT_0036d0f4;
extern "C" bool YellowAuto_0036d0ac(uint16_t arg0) __asm__("_ZN4item15ITEM_CheckPieceEt");
extern "C" bool YellowAuto_0036d0ac(uint16_t arg0) {
const uint16_t* p = DAT_0036d0f4; if (p[0] == arg0) return true; for (uint32_t i = 1; i < 0x1d; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D190
extern const uint16_t* DAT_0036d1d8;
extern "C" bool YellowAuto_0036d190(uint16_t arg0) __asm__("_ZN4item19ITEM_CheckMegaStoneEt");
extern "C" bool YellowAuto_0036d190(uint16_t arg0) {
const uint16_t* p = DAT_0036d1d8; if (p[0] == arg0) return true; for (uint32_t i = 1; i < 0x2f; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D638
uint32_t ITEM_UTIL_GetHealingItemType(const void*);
uint32_t GetParam(const void*, uint32_t);
extern "C" bool YellowAuto_0036d638(const void* arg0) __asm__("_ZN4item27ITEM_UTIL_IsNeedSelectSkillEPKNS_9ITEM_DATAE");
extern "C" bool YellowAuto_0036d638(const void* arg0) {
const uint32_t v = ITEM_UTIL_GetHealingItemType(arg0); if ((v != 0x19 && v != 0x1a) && (v != 0x1b || GetParam(arg0, 0x29) == 0)) return false; return true;
}
#endif
