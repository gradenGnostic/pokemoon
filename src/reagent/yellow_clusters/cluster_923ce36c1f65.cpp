// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00469B1C
extern "C" void YellowAuto_00469b1c(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPacketManager14UnlockListenerEv");
extern "C" void YellowAuto_00469b1c(uint8_t* arg0) {
if (*(int32_t *)(arg0 + 0x18) != 0)
  *(uint8_t **)(*(int32_t *)(arg0 + 0x18) + 0x34c) = arg0 + 4;
*(uint8_t *)(arg0 + 0x2e) = 0;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046AAC8
extern "C" void YellowAuto_0046aac8(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPacketManager22RemovePersonalListenerEPNS0_25JoinFestaPersonalListenerE");
extern "C" void YellowAuto_0046aac8(uint8_t* arg0, uint8_t* arg1) {
if (*(uint8_t **)(arg0 + 0x24) == arg1)
  *(uint8_t **)(arg0 + 0x24) = 0;
else if (*(uint8_t **)(arg0 + 0x28) == arg1)
  *(uint8_t **)(arg0 + 0x28) = 0;
return;
}
#endif
