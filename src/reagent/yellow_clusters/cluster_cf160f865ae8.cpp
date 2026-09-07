// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464C98
void FUN_0048fdd4(const uint8_t*, uint8_t*);
bool FUN_0046351c(uint8_t*, const uint8_t*, uint32_t, uint32_t);
extern "C" bool YellowAuto_00464c98(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint8_t* arg3) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient23AddSendMessageIDRequestENS0_9MessageIDE6MonsNoRKN3pml8pokepara12PokemonParamE");
extern "C" bool YellowAuto_00464c98(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint8_t* arg3) {
uint8_t _b[268]; *(uint32_t*)&_b[0] = arg1; *(uint32_t*)&_b[4] = arg2; FUN_0048fdd4(arg3, &_b[8]); return FUN_0046351c(arg0 + 12, _b, 268, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464CD0
extern "C" void YellowAuto_00464cd0(uint8_t* arg0) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient23CancelFinalTradeRequestEv");
extern "C" void YellowAuto_00464cd0(uint8_t* arg0) {
uint8_t* _s = *(uint8_t**)(arg0 + 8592); if (_s != (uint8_t*)0) ((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)_s + 28)))(_s);
}
#endif
