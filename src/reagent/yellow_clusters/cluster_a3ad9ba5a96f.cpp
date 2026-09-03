// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6ECC
extern "C" void YellowAuto_003d6ecc(uint8_t* arg0) __asm__("_ZN6NetLib3P2P20P2pConnectionManager25UnregistMigrationListenerEv");
extern "C" void YellowAuto_003d6ecc(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0x88) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D70D8
extern "C" void YellowAuto_003d70d8(uint8_t* arg0) __asm__("_ZN6NetLib3P2P20P2pConnectionManager28SetupMigrationCallBackEnableEv");
extern "C" void YellowAuto_003d70d8(uint8_t* arg0) {
if (*(int*)(arg0 + 0x18) != 0) *(uint8_t*)(*(int*)(arg0 + 0x18) + 0x45) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2B5C
extern "C" uint32_t YellowAuto_004a2b5c(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK6NetLib3P2P20P2pConnectionManager11GetMyStatusEi");
extern "C" uint32_t YellowAuto_004a2b5c(const uint8_t* arg0, int32_t arg1) {
if (*(int*)(arg0 + 0x80) != 0) return *(uint32_t*)(*(int*)(arg0 + 0x80) + arg1 * 8 + 0xc); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2B78
extern "C" uint32_t YellowAuto_004a2b78(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK6NetLib3P2P20P2pConnectionManager12GetPokePartyEi");
extern "C" uint32_t YellowAuto_004a2b78(const uint8_t* arg0, int32_t arg1) {
if (*(int*)(arg0 + 0x80) != 0) return *(uint32_t*)(*(int*)(arg0 + 0x80) + arg1 * 8 + 0x10); return 0;
}
#endif
