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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00446724
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00446724(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata9ZukanData14SetDefaultMonsE6MonsNo");
extern "C" void YellowAuto_00446724(uint8_t* arg0, uint32_t arg1) {
if (*reinterpret_cast<const int32_t*>(arg0 + 4) != *reinterpret_cast<const int32_t*>(0x446770u)) GFLassertStop(0u, 0u, 0u); *reinterpret_cast<uint32_t*>(arg0 + 8) = (*reinterpret_cast<const uint32_t*>(arg0 + 8) & 0xFFF801FFu) | ((arg1 & 0x7F03FFu) << 9);
}
#endif
