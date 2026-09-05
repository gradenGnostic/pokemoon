// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031F160
void sub_0031ad14(void*);
extern "C" void YellowAuto_0031f160(uint8_t* arg0) __asm__("_ZN3pml9PokeParty5ClearEv");
extern "C" void YellowAuto_0031f160(uint8_t* arg0) {
for (uint32_t arg1 = 0; arg1 < 6; ++arg1)
  sub_0031ad14(*(void **)(arg0 + arg1 * 4));
*(uint8_t *)(arg0 + 0x18) = 0;
*(uint8_t *)(arg0 + 0x19) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493BCC
void sub_00493c04(const uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_00493bcc(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3pml9PokeParty16GetMemberCountExENS0_9CountTypeE");
extern "C" void YellowAuto_00493bcc(const uint8_t* arg0, uint32_t arg1) {
sub_00493c04(arg0, arg1, 0);
}
#endif
