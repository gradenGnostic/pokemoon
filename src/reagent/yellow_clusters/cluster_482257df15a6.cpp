// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043A120
extern "C" int32_t YellowAuto_0043a120(uint8_t* arg0, int32_t arg1) __asm__("_ZN8Savedata11WeatherSave10GetWeatherEi");
extern "C" int32_t YellowAuto_0043a120(uint8_t* arg0, int32_t arg1) {
if (arg1 > 7) { return -1; } return (int32_t)(int8_t)(*(int32_t *)(arg0 + arg1 * 4 + 4));
}
#endif
