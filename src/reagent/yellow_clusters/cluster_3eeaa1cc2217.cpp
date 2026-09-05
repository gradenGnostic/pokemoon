// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A9230
uint16_t GetLocalAreaMonsMax(const void* arg0, uint32_t arg1);
extern "C" uint16_t YellowAuto_004a9230(const void* arg0, const void* arg1, uint32_t arg2) __asm__("_ZNK8Savedata9ZukanData15GetLocalCompNumEPKN8PokeTool10ExtendDataENS2_9LocalAreaE");
extern "C" uint16_t YellowAuto_004a9230(const void* arg0, const void* arg1, uint32_t arg2) {
return (uint16_t)(GetLocalAreaMonsMax(arg1, arg2) - ((arg2 == 1u) ? 2u : 0u));
}
#endif
