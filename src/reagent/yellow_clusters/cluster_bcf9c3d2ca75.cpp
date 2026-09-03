// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464DA0
extern "C" void YellowAuto_00464da0(uint8_t* arg0) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient30RemoveP2PTradeResponseListenerEv");
extern "C" void YellowAuto_00464da0(uint8_t* arg0) {
*(uint32_t*)(arg0 + 8) = 0;
}
#endif
