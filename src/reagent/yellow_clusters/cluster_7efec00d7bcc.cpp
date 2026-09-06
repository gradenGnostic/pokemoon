// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AA6A8
uint32_t FUN_00357748();
uint32_t FUN_003d18a0();
void FUN_0040c1c4(uint32_t, uint32_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_004aa6a8(const uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData11IsCtrFriendEv");
extern "C" void YellowAuto_004aa6a8(const uint8_t* arg0) {
if (FUN_003d18a0() != 2) FUN_0040c1c4(FUN_00357748(), (uint32_t *)(arg0 + 0x2c), 0, 0); else FUN_0040c1c4(FUN_00357748(), (uint32_t *)(arg0 + 0x2c), 1, 1);
}
#endif
