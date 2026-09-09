// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6CB4
extern "C" uint16_t YellowAuto_004a6cb4(const uint8_t* arg0) __asm__("_ZNK8Savedata12GameSyncSave25GetIsCreateGameSyncSaveIDEv");
extern "C" uint16_t YellowAuto_004a6cb4(const uint8_t* arg0) {
return (uint16_t)(*(const uint16_t *)(arg0 + 0x1A8) & 1);
}
#endif
