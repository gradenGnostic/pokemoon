// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439F58
uint32_t GetPublicRand(uint32_t);
extern "C" void YellowAuto_00439f58(uint8_t* arg0, uint32_t* arg1, uint32_t arg2) __asm__("_ZN8Savedata11FishingSpot7LotRareEPjj");
extern "C" void YellowAuto_00439f58(uint8_t* arg0, uint32_t* arg1, uint32_t arg2) {
for (uint32_t i = 0; i < arg2; ++i) {
bool isRare = GetPublicRand(100) < arg1[i];
uint32_t bit = isRare ? (1U << i) : 0U;
*(uint32_t*)(arg0 + 4) |= bit;
}
*(uint32_t*)(arg0 + 8) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6C4C
extern "C" bool YellowAuto_004a6c4c(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata11FishingSpot9ExistRareEj");
extern "C" bool YellowAuto_004a6c4c(const uint8_t* arg0, uint32_t arg1) {
uint32_t bit = 1U << arg1;
return (*(const uint32_t*)(arg0 + 4) & bit) == bit;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439F08
void __aeabi_memclr4(void*, uint32_t);
extern "C" void YellowAuto_00439f08(uint8_t* arg0) __asm__("_ZN8Savedata11FishingSpot16ResetFishingSpotEv");
extern "C" void YellowAuto_00439f08(uint8_t* arg0) {
__aeabi_memclr4((void*)(arg0 + 4), 256);
*(uint32_t*)(arg0 + 4) = 0;
*(uint32_t*)(arg0 + 8) = 0;
}
#endif
