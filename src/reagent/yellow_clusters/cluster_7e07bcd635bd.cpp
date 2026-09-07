// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D624
extern "C" bool YellowAuto_0049d624(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor13IsTownmapModeEv");
extern "C" bool YellowAuto_0049d624(const uint8_t* arg0) {
return ((*(uint32_t*)(*(uint32_t*)(arg0 + 4) + 0x38) & 0x10000U) >> 16U) != 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D6D0
extern "C" bool YellowAuto_0049d6d0(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor14IsReverbEnableEv");
extern "C" bool YellowAuto_0049d6d0(const uint8_t* arg0) {
return ((*(uint32_t*)(*(uint32_t*)(arg0 + 4) + 0x38) & 0x100U) >> 8U) != 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D70C
extern "C" bool YellowAuto_0049d70c(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor14IsSkyboxEnableEv");
extern "C" bool YellowAuto_0049d70c(const uint8_t* arg0) {
return ((*(uint32_t*)(*(uint32_t*)(arg0 + 4) + 0x38) & 0x20U) >> 5U) != 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D92C
extern "C" bool YellowAuto_0049d92c(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor16IsSubscreenSleepEv");
extern "C" bool YellowAuto_0049d92c(const uint8_t* arg0) {
return ((*(uint32_t*)(*(uint32_t*)(arg0 + 4) + 0x38) & 0x8000U) >> 15U) != 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DA7C
extern "C" bool YellowAuto_0049da7c(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor19IsPokeRideFlyEnableEv");
extern "C" bool YellowAuto_0049da7c(const uint8_t* arg0) {
return ((*(uint32_t*)(*(uint32_t*)(arg0 + 4) + 0x38) & 0x2U) >> 1U) != 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DB8C
extern "C" bool YellowAuto_0049db8c(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor25IsMoveModelDrawNumControlEv");
extern "C" bool YellowAuto_0049db8c(const uint8_t* arg0) {
return ((*(uint32_t*)(*(uint32_t*)(arg0 + 4) + 0x38) & 0x20000U) >> 17U) != 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DBC8
extern "C" bool YellowAuto_0049dbc8(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor25IsSubscreenOutsideMapModeEv");
extern "C" bool YellowAuto_0049dbc8(const uint8_t* arg0) {
return ((*(uint32_t*)(*(uint32_t*)(arg0 + 4) + 0x38) & 0x4000U) >> 14U) != 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DC6C
extern "C" bool YellowAuto_0049dc6c(const uint8_t* arg0) __asm__("_ZNK5Field16ZoneDataAccessor27IsDispLowPriorityForTrafficEv");
extern "C" bool YellowAuto_0049dc6c(const uint8_t* arg0) {
return ((*(uint32_t*)(*(uint32_t*)(arg0 + 4) + 0x38) & 0x40000U) >> 18U) != 0U;
}
#endif
