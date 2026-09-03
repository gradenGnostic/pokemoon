// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00381040
extern "C" void YellowAuto_00381040(uint8_t* arg0) __asm__("_ZN5Field11FieldScript17FieldScriptSystem32ClearTerrainBlockControlPositionEv");
extern "C" void YellowAuto_00381040(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0xa0) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00380778
extern "C" void YellowAuto_00380778(uint8_t* arg0) __asm__("_ZN5Field11FieldScript17FieldScriptSystem18FinalizeZoneScriptEv");
extern "C" void YellowAuto_00380778(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0x5c) = 0;
*(uint32_t*)(arg0 + 0x60) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00380620
extern "C" void YellowAuto_00380620(uint8_t* arg0) __asm__("_ZN5Field11FieldScript17FieldScriptSystem17ClearBgPartsParamEv");
extern "C" void YellowAuto_00380620(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0xb0) = 0;
*(uint32_t*)(arg0 + 0xb4) = 0;
*(uint32_t*)(arg0 + 0xb8) = 0;
*(uint32_t*)(arg0 + 0xbc) = 0;
*(uint32_t*)(arg0 + 0xc0) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049CF90
extern "C" void YellowAuto_0049cf90(const uint8_t* arg0, uint8_t* arg1) __asm__("_ZNK5Field11FieldScript17FieldScriptSystem30GetTerrainBlockControlPositionEPN4gfl24math7Vector3E");
extern "C" void YellowAuto_0049cf90(const uint8_t* arg0, uint8_t* arg1) {
*(uint32_t*)(arg1) = *(uint32_t*)(arg0 + 0xa4);
*(uint32_t*)(arg1 + 4) = *(uint32_t*)(arg0 + 0xa8);
*(uint32_t*)(arg1 + 8) = *(uint32_t*)(arg0 + 0xac);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00380A4C
extern "C" void YellowAuto_00380a4c(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) __asm__("_ZN5Field11FieldScript17FieldScriptSystem21SetWeakReservedScriptEijjjj");
extern "C" void YellowAuto_00380a4c(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) {
*(uint32_t*)(arg0 + 0x6c) = arg1;
*(uint32_t*)(arg0 + 0x78) = arg2;
*(uint32_t*)(arg0 + 0x7c) = arg3;
*(uint32_t*)(arg0 + 0x80) = arg4;
*(uint32_t*)(arg0 + 0x84) = arg5;
}
#endif
