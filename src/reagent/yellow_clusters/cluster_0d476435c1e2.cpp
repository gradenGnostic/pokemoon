// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00406FB4
extern "C" bool YellowAuto_00406fb4(const uint8_t* arg0, int16_t arg1) __asm__("_ZN7gflnet23p2p7NetGame11IsTimingEndEi");
extern "C" bool YellowAuto_00406fb4(const uint8_t* arg0, int16_t arg1) {
return (*(const uint16_t*)(arg0 + 0x410) == (uint16_t)arg1) && ((uint16_t)arg1 != 0);
}
#endif
