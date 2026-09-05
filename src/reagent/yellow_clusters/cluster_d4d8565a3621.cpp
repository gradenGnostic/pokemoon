// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F7530
extern "C" uint32_t YellowAuto_003f7530(uint8_t* arg0) __asm__("_ZN7gflnet23nex10NexManager14GetCredentialsEv");
extern "C" uint32_t YellowAuto_003f7530(uint8_t* arg0) {
uint32_t result = 0; if (*(uint32_t *)(arg0 + 0x138) != 0) result = *(uint32_t *)(*(uint32_t *)(arg0 + 0x138) + 0x78); return result;
}
#endif
