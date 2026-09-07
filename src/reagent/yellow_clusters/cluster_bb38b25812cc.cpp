// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00456418
void ConvFromMyStatusIconData(void*, const void*);
extern "C" bool YellowAuto_00456418(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) __asm__("_ZN9NetAppLib17BattleVideoPlayer10VIDEO_DATA21OutputIconObjectParamEPN3app4tool27AppToolTrainerIconRendering16ICON_OBJECT_DATAERNS0_11PLAYER_DATAE");
extern "C" bool YellowAuto_00456418(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) {
if (arg1 == (uint8_t*)0) return false;
uint32_t v = *(const uint32_t*)arg2;
if (v < 2u) ConvFromMyStatusIconData((void*)arg1, (const void*)(arg2 + 8u));
else *(uint32_t*)(arg1 + 16u) = v;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00456460
extern "C" bool YellowAuto_00456460(uint8_t* arg0, uint8_t* arg1, uint32_t arg2) __asm__("_ZN9NetAppLib17BattleVideoPlayer10VIDEO_DATA22OutputLeftPosPokeParamEPN8PokeTool11SimpleParamEj");
extern "C" bool YellowAuto_00456460(uint8_t* arg0, uint8_t* arg1, uint32_t arg2) {
if (arg1 == (uint8_t*)0) return false;
if (arg2 > 5u) return false;
uint16_t m = *(const uint16_t*)(arg0 + arg2 * 2u + 612u);
*(uint16_t*)arg1 = m;
if (m == 0u) return false;
*(arg1 + 2u) = *(arg0 + arg2 + 636u);
*(arg1 + 3u) = *(arg0 + arg2 + 648u);
*(arg1 + 4u) = *(arg0 + arg2 + 660u);
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004564D4
extern "C" bool YellowAuto_004564d4(uint8_t* arg0, uint8_t* arg1, uint32_t arg2) __asm__("_ZN9NetAppLib17BattleVideoPlayer10VIDEO_DATA23OutputRightPosPokeParamEPN8PokeTool11SimpleParamEj");
extern "C" bool YellowAuto_004564d4(uint8_t* arg0, uint8_t* arg1, uint32_t arg2) {
if (arg1 == (uint8_t*)0) return false;
if (arg2 > 5u) return false;
uint32_t n = arg2 + 6u;
uint16_t m = *(const uint16_t*)(arg0 + n * 2u + 612u);
*(uint16_t*)arg1 = m;
if (m == 0u) return false;
*(arg1 + 2u) = *(arg0 + n + 636u);
*(arg1 + 3u) = *(arg0 + n + 648u);
*(arg1 + 4u) = *(arg0 + n + 660u);
return true;
}
#endif
