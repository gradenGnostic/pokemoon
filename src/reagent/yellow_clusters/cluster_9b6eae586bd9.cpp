// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A37F0
extern "C" void YellowAuto_004a37f0(uint32_t* arg0, const uint8_t* arg1) __asm__("_ZNK7poke_3d5model10BaseCamera11GetRotationEv");
extern "C" void YellowAuto_004a37f0(uint32_t* arg0, const uint8_t* arg1) {
*(uint32_t*)((uint8_t*)arg0 + 0x0) = *(const uint32_t*)(arg1 + 0x10);
*(uint32_t*)((uint8_t*)arg0 + 0x4) = *(const uint32_t*)(arg1 + 0x14);
*(uint32_t*)((uint8_t*)arg0 + 0x8) = *(const uint32_t*)(arg1 + 0x18);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3F1C
extern "C" void YellowAuto_004a3f1c(uint32_t* arg0, const uint8_t* arg1) __asm__("_ZNK7poke_3d5model10BaseCamera17GetTargetPositionEv");
extern "C" void YellowAuto_004a3f1c(uint32_t* arg0, const uint8_t* arg1) {
*(uint32_t*)((uint8_t*)arg0 + 0x0) = *(const uint32_t*)(arg1 + 0x7c);
*(uint32_t*)((uint8_t*)arg0 + 0x4) = *(const uint32_t*)(arg1 + 0x80);
*(uint32_t*)((uint8_t*)arg0 + 0x8) = *(const uint32_t*)(arg1 + 0x84);
}
#endif
