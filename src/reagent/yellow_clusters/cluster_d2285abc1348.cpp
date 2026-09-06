// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041E73C
extern "C" bool YellowAuto_0041e73c(int32_t arg0) __asm__("_ZN7trainer15TrainerTypeData11IsBossGroupENS_11TrTypeGroupE");
extern "C" bool YellowAuto_0041e73c(int32_t arg0) {
return arg0 == 3 || arg0 == 4 || arg0 == 5;
}
#endif
