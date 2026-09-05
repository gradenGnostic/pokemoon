// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A35A0
extern "C" bool YellowAuto_004a35a0(const uint8_t* arg0) __asm__("_ZNK7gflnet24boss11BossManager15IsRunningThreadEv");
extern "C" bool YellowAuto_004a35a0(const uint8_t* arg0) {
return !(*(uint32_t*)(arg0 + 0x1c) == 0 && *(uint32_t*)(arg0 + 0x18) == 0 && *(uint8_t*)(arg0 + 0x454) == 0 && *(uint32_t*)(arg0 + 0x20) == 0 && *(uint32_t*)(arg0 + 0x24) == 0 && *(uint32_t*)(arg0 + 0x28) == 0);
}
#endif
