// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D34C
extern "C" const uint8_t* YellowAuto_0049d34c(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK5Field14ZoneDataLoader11GetZoneDataEt");
extern "C" const uint8_t* YellowAuto_0049d34c(const uint8_t* arg0, uint16_t arg1) {
return *(const uint8_t**)(arg0 + 0x14) != 0 ? *(const uint8_t**)(arg0 + 0x14) + (uint32_t)arg1 * 0x54U : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D4D4
bool CheckIDFlagRenge(uint16_t);
bool CheckEventFlag(const void*, uint16_t);
extern "C" bool YellowAuto_0049d4d4(const uint8_t* arg0, uint16_t arg1, const void* arg2) __asm__("_ZNK5Field14ZoneDataLoader18CheckEncountNGZoneEtPKNS_9EventWorkE");
extern "C" bool YellowAuto_0049d4d4(const uint8_t* arg0, uint16_t arg1, const void* arg2) {
if ((uint32_t)arg1 >= (*(const uint32_t*)(arg0 + 0x20) >> 1)) return 0; for (uint32_t i = 0; i < 15U; ++i) if (*(const uint16_t*)(0x0049D584 + i * 6U) == arg1) if ((int16_t)*(const uint16_t*)(0x0049D584 + i * 6U + 2U) < 0) return 0; else if (*(const uint16_t*)(0x0049D584 + i * 6U + 2U) == 0 || !CheckIDFlagRenge(*(const uint16_t*)(0x0049D584 + i * 6U + 2U))) return 0; else if (!CheckEventFlag(arg2, *(const uint16_t*)(0x0049D584 + i * 6U + 2U))) return 0; else if (*(const uint8_t*)(0x0049D584 + i * 6U + 5U) != 0) return 0; else return 1; return 0;
}
#endif
