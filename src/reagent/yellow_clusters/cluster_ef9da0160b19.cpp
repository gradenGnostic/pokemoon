// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464C34
int8_t GetLastRecvMessageID(uint8_t* arg0);
extern "C" int8_t YellowAuto_00464c34(uint8_t* arg0) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient20GetLastRecvMessageIDEv");
extern "C" int8_t YellowAuto_00464c34(uint8_t* arg0) {
return *(int8_t*)((uint8_t*)arg0 + 0x2074);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464D58
void func_00492724(const uint8_t*, uint8_t*);
bool func_0046351c(uint8_t*, uint8_t*, uint32_t, uint32_t);
extern "C" bool YellowAuto_00464d58(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient26AddSendPokemonParamRequestERKN3pml8pokepara12PokemonParamE");
extern "C" bool YellowAuto_00464d58(uint8_t* arg0, const uint8_t* arg1) {
uint8_t buf[0x104]; func_00492724(arg1, buf); return func_0046351c(arg0 + 0x1040, buf, 0x104, 1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464BD4
extern "C" int32_t YellowAuto_00464bd4(uint8_t* arg0) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient19IsFinalTradeSuccessEv");
extern "C" int32_t YellowAuto_00464bd4(uint8_t* arg0) {
int32_t v = *(const int32_t*)(arg0 + 0x2190); if (v == 0) return 0; return *(const int8_t*)(*(const uint32_t*)0x464BF0 + (uint32_t)v);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464C58
extern "C" int32_t YellowAuto_00464c58(uint8_t* arg0) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient20IsFinalTradeCompleteEv");
extern "C" int32_t YellowAuto_00464c58(uint8_t* arg0) {
int32_t v = *(const int32_t*)(arg0 + 0x2190); if (v == 0) return 0; return *(const int8_t*)(*(const uint32_t*)0x464C74 + (uint32_t)v);
}
#endif
