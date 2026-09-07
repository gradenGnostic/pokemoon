// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B39C
void GFLassert();
extern "C" void YellowAuto_0043b39c(uint8_t* arg0, const uint32_t* arg1, uint32_t arg2) __asm__("_ZN8Savedata14BattleSpotData17SetEntryCommunityERKNS0_15ENTRY_COMMUNITYENS0_20ENTRY_COMMUNITY_TYPEE");
extern "C" void YellowAuto_0043b39c(uint8_t* arg0, const uint32_t* arg1, uint32_t arg2) {
if (arg2 > 4u) { GFLassert(); return; } *(uint32_t*)(arg0 + 4u + arg2 * 8u) = *(const uint32_t*)arg1; *(uint32_t*)(arg0 + 8u + arg2 * 8u) = *((const uint32_t*)arg1 + 1u);
}
#endif
