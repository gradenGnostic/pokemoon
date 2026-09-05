// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1B0C
void EndAnime(uint8_t* arg0);
extern "C" void YellowAuto_002f1b0c(uint8_t* arg0) __asm__("_ZN3app4tool15TimerIconUIView8EndAnimeEv");
extern "C" void YellowAuto_002f1b0c(uint8_t* arg0) {
*(uint8_t *)(arg0 + 0x8c) = 0; *(uint32_t *)(arg0 + 0xd0) = 0; *(uint32_t *)(arg0 + 0xf4) = 1; *(uint32_t *)(arg0 + 0xf8) = 0;
}
#endif
