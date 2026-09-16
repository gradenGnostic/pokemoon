// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A9C98
extern "C" uint32_t YellowAuto_004a9c98(const uint8_t* arg0) __asm__("_ZNK8Savedata9ZukanData19GetZenkokuZukanFlagEv");
extern "C" uint32_t YellowAuto_004a9c98(const uint8_t* arg0) {
return (*(const uint32_t*)(arg0 + 8) & 1U);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8F78
extern "C" uint32_t YellowAuto_004a8f78(const uint8_t* arg0) __asm__("_ZNK8Savedata9ZukanData12GetZukanModeEv");
extern "C" uint32_t YellowAuto_004a8f78(const uint8_t* arg0) {
return (*(const uint32_t*)(arg0 + 8) >> 6) & 7U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8FB4
extern "C" uint32_t YellowAuto_004a8fb4(const uint8_t* arg0) __asm__("_ZNK8Savedata9ZukanData14GetDefaultMonsEv");
extern "C" uint32_t YellowAuto_004a8fb4(const uint8_t* arg0) {
return (*(const uint32_t*)(arg0 + 8) >> 9) & 1023U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A9A24
extern "C" uint32_t YellowAuto_004a9a24(const uint8_t* arg0) __asm__("_ZNK8Savedata9ZukanData17GetZukanOSVersionEv");
extern "C" uint32_t YellowAuto_004a9a24(const uint8_t* arg0) {
return (*(const uint32_t*)(arg0 + 8) >> 19) & 3U;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00446E7C
extern "C" uint8_t* YellowAuto_00446e7c(uint8_t* arg0) __asm__("_ZN8Savedata9ZukanDataC1Ev");
extern "C" uint8_t* YellowAuto_00446e7c(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x446EE4;
uint32_t v = ((uint32_t(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 12)))(arg0);
for (uint32_t i = 0; i < v; ++i) *(arg0 + 4 + i) = 0;
*(uint32_t*)(arg0 + 4) = *(uint32_t*)0x446EE8;
*(uint32_t*)(arg0 + 8) = *(uint32_t*)(arg0 + 8) | 6;
*(uint32_t*)(arg0 + 0x8EC) = *(uint32_t*)0x446EEC;
*(uint32_t*)(arg0 + 0x8F0) = *(uint32_t*)0x446EEC;
*(uint32_t*)(arg0 + 0x8F4) = *(uint32_t*)0x446EEC;
*(uint32_t*)(arg0 + 0x8F8) = *(uint32_t*)0x446EEC;
for (uint32_t j = 0; j < 0x44; ++j) *(arg0 + 0xF7C + j) = 0;
return arg0;
}
#endif
