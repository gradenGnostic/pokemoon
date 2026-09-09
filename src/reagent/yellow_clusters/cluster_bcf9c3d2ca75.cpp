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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464B80
uint8_t* v0;
extern "C" void YellowAuto_00464b80(uint8_t* arg0) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient19AddFinalSyncRequestEv");
extern "C" void YellowAuto_00464b80(uint8_t* arg0) {
v0 = *(uint8_t**)(arg0 + 0x2190);
if (v0 != (uint8_t*)0)
 (*(void(**)(uint8_t*))(*(uint8_t**)v0 + 0x28))(v0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464BA0
uint8_t* v0;
extern "C" void YellowAuto_00464ba0(uint8_t* arg0) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient19AddTradeExitRequestEv");
extern "C" void YellowAuto_00464ba0(uint8_t* arg0) {
v0 = *(uint8_t**)(arg0 + 0x2190);
if (v0 != (uint8_t*)0)
 (*(void(**)(uint8_t*))(*(uint8_t**)v0 + 0x24))(v0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464BF4
uint8_t* v0;
extern "C" void YellowAuto_00464bf4(uint8_t* arg0) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient20AddFinalTradeRequestEv");
extern "C" void YellowAuto_00464bf4(uint8_t* arg0) {
v0 = *(uint8_t**)(arg0 + 0x2190);
if (v0 != (uint8_t*)0)
 (*(void(**)(uint8_t*))(*(uint8_t**)v0 + 0x18))(v0);
}
#endif
