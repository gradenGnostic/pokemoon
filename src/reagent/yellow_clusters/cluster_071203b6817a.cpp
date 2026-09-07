// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6CFC
extern "C" uint32_t YellowAuto_004a6cfc(const uint8_t* arg0) __asm__("_ZNK8Savedata14BattleInstSave19GetReleaseRankRoyalEv");
extern "C" uint32_t YellowAuto_004a6cfc(const uint8_t* arg0) {
return *(const uint32_t*)(arg0 + 0x24u) & 255u;
}
#endif
