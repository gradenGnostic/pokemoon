// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F3BF4
void FUN_003f3cd0(int32_t, void*, void*, void*, void*);
extern const uint8_t DAT_003f3c48[];
extern "C" uint8_t YellowAuto_003f3bf4(int32_t arg0) __asm__("_ZN7GameSys8TimeZone14GetNowTimeZoneENS0_8TimeTypeE");
extern "C" uint8_t YellowAuto_003f3bf4(int32_t arg0) {
uint32_t local_14;
uint32_t iStack_10;
uint32_t iStack_c;
uint32_t iStack_8;
FUN_003f3cd0(arg0, &local_14, &iStack_10, &iStack_c, &iStack_8);
if (local_14 < 0x18) return DAT_003f3c48[local_14];
return 0;
}
#endif
