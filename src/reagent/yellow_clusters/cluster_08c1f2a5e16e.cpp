// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043A2CC
void SetIsNoRegistPGL(uint8_t* arg0, bool arg1);
extern "C" void YellowAuto_0043a2cc(uint8_t* arg0, bool arg1) __asm__("_ZN8Savedata12GameSyncSave16SetIsNoRegistPGLEb");
extern "C" void YellowAuto_0043a2cc(uint8_t* arg0, bool arg1) {
*(uint16_t *)(arg0 + 0x1a8) = arg1 ? (uint16_t)(*(uint16_t *)(arg0 + 0x1a8) | 2) : (uint16_t)(*(uint16_t *)(arg0 + 0x1a8) & (uint16_t)~2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043A300
void SetGameSyncFirstConnected(uint8_t* arg0, bool arg1);
extern "C" void YellowAuto_0043a300(uint8_t* arg0, bool arg1) __asm__("_ZN8Savedata12GameSyncSave25SetGameSyncFirstConnectedEb");
extern "C" void YellowAuto_0043a300(uint8_t* arg0, bool arg1) {
*(uint16_t *)(arg0 + 0x1a8) = arg1 ? (uint16_t)(*(uint16_t *)(arg0 + 0x1a8) | 1024) : (uint16_t)(*(uint16_t *)(arg0 + 0x1a8) & (uint16_t)~1024);
}
#endif
