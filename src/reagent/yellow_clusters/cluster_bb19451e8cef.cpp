// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E0BC
extern "C" uint32_t YellowAuto_0031e0bc(int32_t arg0) __asm__("_ZN3pml8wazadata10GetWeatherE6WazaNo");
extern "C" uint32_t YellowAuto_0031e0bc(int32_t arg0) {
if (arg0 == 0xC9) return 4; if (arg0 == 0xF0) return 2; if (arg0 == 0xF1) return 1; if (arg0 == 0x102) return 3; return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E458
uint32_t GetParam(uint32_t, uint32_t);
extern "C" uint8_t YellowAuto_0031e458(uint32_t arg0) __asm__("_ZN3pml8wazadata18GetRankEffectCountE6WazaNo");
extern "C" uint8_t YellowAuto_0031e458(uint32_t arg0) {
uint32_t count = 0;
if (GetParam(arg0, 16) != 0)
count = count + 1;
if (GetParam(arg0, 17) != 0)
count = count + 1;
if (GetParam(arg0, 18) != 0)
count = count + 1;
return (uint8_t)(count & 255);
}
#endif
