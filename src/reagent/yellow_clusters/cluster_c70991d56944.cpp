// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045A788
void FUN_0045a5d0(uint8_t*);
void operator_delete__(void*);
extern "C" void YellowAuto_0045a788(uint8_t* arg0) __asm__("_ZN9NetAppLib2UI22NetAppPokePartyUtilityD1Ev");
extern "C" void YellowAuto_0045a788(uint8_t* arg0) {
*(uint32_t*)arg0 = 0x0045A804; FUN_0045a5d0(arg0); if (*(uint32_t*)(arg0 + 0x1c) != 0) operator_delete__(*(void**)(arg0 + 0x1c)), *(uint32_t*)(arg0 + 0x1c) = 0; if (*(uint32_t*)(arg0 + 0x18) != 0) operator_delete__(*(void**)(arg0 + 0x18)), *(uint32_t*)(arg0 + 0x18) = 0; *(uint32_t*)(arg0 + 0x20) = 0; *(uint32_t*)(arg0 + 0x24) = 0; *(uint32_t*)(arg0 + 0x28) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045A808
const void* GetMemberPointerConst(const void*, uint32_t);
void FUN_00459fc4(uint8_t*, uint32_t, const void*);
extern "C" void YellowAuto_0045a808(uint8_t* arg0, uint32_t arg1, const void* arg2) __asm__("_ZN9NetAppLib2UI22NetAppPokePartyUtility12SetPokePartyEjPKN3pml9PokePartyE");
extern "C" void YellowAuto_0045a808(uint8_t* arg0, uint32_t arg1, const void* arg2) {
if (*(uint32_t*)(arg0 + 0x2c) != 0 && arg1 < *(uint32_t*)(arg0 + 0x2c) && arg2 != 0) FUN_00459fc4(arg0, arg1 * 6 + 0, GetMemberPointerConst(arg2, 0)), FUN_00459fc4(arg0, arg1 * 6 + 1, GetMemberPointerConst(arg2, 1)), FUN_00459fc4(arg0, arg1 * 6 + 2, GetMemberPointerConst(arg2, 2)), FUN_00459fc4(arg0, arg1 * 6 + 3, GetMemberPointerConst(arg2, 3)), FUN_00459fc4(arg0, arg1 * 6 + 4, GetMemberPointerConst(arg2, 4)), FUN_00459fc4(arg0, arg1 * 6 + 5, GetMemberPointerConst(arg2, 5));
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045A888
void FUN_0045a6cc(uint8_t*, void*);
extern "C" void YellowAuto_0045a888(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib2UI22NetAppPokePartyUtilityC1EPNS_6System19ApplicationWorkBaseE");
extern "C" void YellowAuto_0045a888(uint8_t* arg0, void* arg1) {
FUN_0045a6cc(arg0, arg1);
*(uint32_t*)(arg0 + 0x2C) = 0;
*(uint32_t*)arg0 = *(uint32_t*)0x45A8A4;
}
#endif
