// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F3C80
const uint8_t* GetHourZoneTable();
extern "C" int32_t YellowAuto_003f3c80(uint32_t arg0) __asm__("_ZN7GameSys8TimeZone26ConvertTimeZoneToStartHourENS0_4ZoneE");
extern "C" int32_t YellowAuto_003f3c80(uint32_t arg0) {
if (arg0 >= 5) return 0;
const uint8_t* t = GetHourZoneTable();
for (uint32_t i = 0; i < 24; i += 2) {
if (t[i] == (uint8_t)arg0) return (int32_t)i;
if (t[i + 1] == (uint8_t)arg0) return (int32_t)(i + 1);
}
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F3C4C
const uint8_t* GetHourZoneTable();
extern "C" uint32_t YellowAuto_003f3c4c(uint32_t arg0) __asm__("_ZN7GameSys8TimeZone21ConvertHourToTimeZoneEi");
extern "C" uint32_t YellowAuto_003f3c4c(uint32_t arg0) {
if (arg0 >= 24) return 0;
const uint8_t* t = GetHourZoneTable();
return (uint32_t)t[arg0];
}
#endif
