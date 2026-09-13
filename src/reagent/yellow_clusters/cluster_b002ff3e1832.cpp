// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443254
uint8_t * FUN_00442f5c(int32_t arg0, uint32_t arg1, int32_t arg2);
extern "C" uint32_t YellowAuto_00443254(int32_t arg0, uint32_t arg1, int32_t arg2) __asm__("_ZN8Savedata7Fashion3AddEji");
extern "C" uint32_t YellowAuto_00443254(int32_t arg0, uint32_t arg1, int32_t arg2) {
if (arg1 < 8 && (arg0 = (int32_t)FUN_00442f5c(arg0, arg1, arg2)) != 0) *(uint8_t *)arg0 |= 3, arg0 = 1; else arg0 = 0; return (uint32_t)arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044329C
uint8_t * FUN_00442f5c(int32_t arg0, uint32_t arg1, int32_t arg2);
void GFLassert(void);
extern "C" void YellowAuto_0044329c(int32_t arg0, uint32_t arg1, int32_t arg2) __asm__("_ZN8Savedata7Fashion3DelEji");
extern "C" void YellowAuto_0044329c(int32_t arg0, uint32_t arg1, int32_t arg2) {
if (arg1 >= 8) GFLassert(); if (arg1 >= 8) return; arg0 = (int32_t)FUN_00442f5c(arg0, arg1, arg2); if (arg0 != 0) *(uint8_t *)arg0 &= 0xfc; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044334C
extern const uint32_t *DAT_004433ac;
extern "C" uint32_t YellowAuto_0044334c(int32_t arg0) __asm__("_ZN8Savedata7Fashion49ConvDressUpParamItemCategoryFromtSavedataCategoryENS0_8CategoryE");
extern "C" uint32_t YellowAuto_0044334c(int32_t arg0) {
uint32_t i; for (i = 0; (int32_t)DAT_004433ac[i * 2] != -1; i++) if ((int32_t)DAT_004433ac[i * 2] == arg0) return DAT_004433ac[i * 2 + 1] & 0xffu; return 0xeu;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004432E4
extern const uint32_t *DAT_00443348;
extern "C" uint32_t YellowAuto_004432e4(int32_t arg0) __asm__("_ZN8Savedata7Fashion48ConvSavedataCategoryFromDressUpParamItemCategoryEN7poke_3d5model12DressUpParam12ItemCategoryE");
extern "C" uint32_t YellowAuto_004432e4(int32_t arg0) {
uint32_t i; for (i = 0; (int32_t)DAT_00443348[i * 2 + 1] != -1; i++) if ((int32_t)DAT_00443348[i * 2 + 1] == arg0) return DAT_00443348[i * 2] & 0xffu; return 6u;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004433E8
uint8_t* FUN_00442f5c(uint8_t*, uint32_t, int32_t);
extern "C" bool YellowAuto_004433e8(uint8_t* arg0, uint32_t arg1, int32_t arg2) __asm__("_ZN8Savedata7Fashion7IsOwnedEji");
extern "C" bool YellowAuto_004433e8(uint8_t* arg0, uint32_t arg1, int32_t arg2) {
uint8_t* p = FUN_00442f5c(arg0, arg1, arg2);
return p ? ((*p & 1) != 0) : false;
}
#endif
