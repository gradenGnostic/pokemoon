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
