// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00356834
extern "C" bool YellowAuto_00356834(const uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl23str9StrComp_JEPKcS2_");
extern "C" bool YellowAuto_00356834(const uint8_t* arg0, const uint8_t* arg1) {
check: if (*arg0 != *arg1) return 0;
if (*arg0 == 0) return 1;
arg0 = arg0 + 1;
arg1 = arg1 + 1;
goto check;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00356550
uint32_t n;
uint32_t k;
extern "C" bool YellowAuto_00356550(const uint16_t* arg0, const uint16_t* arg1) __asm__("_ZN4gfl23str7StrCompEPKwS2_");
extern "C" bool YellowAuto_00356550(const uint16_t* arg0, const uint16_t* arg1) {
outer: if (*arg0 != *arg1) return 0;
if (*arg0 != 16) goto nul_check;
n = (uint32_t)arg0[1] + 2u;
k = 1u;
if (k >= n + 1u) goto nul_check;
inner: arg0 = arg0 + 1;
arg1 = arg1 + 1;
if (*arg0 != *arg1) return 0;
k = k + 1u;
if (k < n + 1u) goto inner;
nul_check: if (*arg0 == 0) return 1;
arg0 = arg0 + 1;
arg1 = arg1 + 1;
goto outer;
}
#endif
