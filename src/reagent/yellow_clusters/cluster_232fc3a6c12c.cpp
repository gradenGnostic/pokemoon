// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFA1C
extern "C" bool YellowAuto_003bfa1c(uint8_t* arg0) __asm__("_ZN5print14HangulComposer9BackSpaceEv");
extern "C" bool YellowAuto_003bfa1c(uint8_t* arg0) {
uint16_t v = *(uint16_t *)(arg0 + 0x1c); if (v != 0) *(uint16_t *)(arg0 + 0x1c) = (uint16_t)(v - 1); return v != 0;
}
#endif
