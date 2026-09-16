// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046AA40
void GFLassert(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern "C" void YellowAuto_0046aa40(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPacketManager22RegistPersonalListenerEPNS0_25JoinFestaPersonalListenerE");
extern "C" void YellowAuto_0046aa40(uint8_t* arg0, void* arg1) {
if (*(uint32_t*)(arg0 + 0x24) == (uint32_t)arg1 || *(uint32_t*)(arg0 + 0x28) == (uint32_t)arg1) { GFLassert(0, 0, 0, 0); } else if (*(uint32_t*)(arg0 + 0x24) == 0) { *(uint32_t*)(arg0 + 0x24) = (uint32_t)arg1; } else if (*(uint32_t*)(arg0 + 0x28) == 0) { *(uint32_t*)(arg0 + 0x28) = (uint32_t)arg1; } else { GFLassert(0, 0, 0, 0); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046AD6C
int8_t GetNetworkMode();
extern "C" void YellowAuto_0046ad6c(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPacketManager34RequestAllUpdatingWithSubscriptionEv");
extern "C" void YellowAuto_0046ad6c(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x18) != 0 && GetNetworkMode() == 2) { *(uint32_t*)(arg0 + 0x10) = 0; *(uint8_t*)(*(uint32_t*)(arg0 + 0x18) + 0xc) = 1; *(uint8_t*)(*(uint32_t*)(arg0 + 0x18) + 0xd) = 1; *(uint8_t*)(*(uint32_t*)(arg0 + 0x18) + 0xe) = 1; *(uint8_t*)(*(uint32_t*)(arg0 + 0x18) + 0x39c) = 0; }
}
#endif
