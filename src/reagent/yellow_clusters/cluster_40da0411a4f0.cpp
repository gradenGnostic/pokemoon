// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00338E9C
uint32_t helper0(void);
void helper1(void *, void *, uint32_t, uint32_t);
void * helper2(void);
extern "C" uint8_t* YellowAuto_00338e9c(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer4util22MakeReductionImagePathC1Ev");
extern "C" uint8_t* YellowAuto_00338e9c(uint8_t* arg0) {
*(uint32_t *)arg0 = helper0(); *(uint32_t *)(arg0 + 4) = 0; *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 16) = 0; helper1(arg0 + 20, helper2(), 48, 6); for (uint32_t i = 0; i < 72; ++i) ((uint32_t *)(arg0 + 20))[i] = 0; *(uint32_t *)(arg0 + 308) = 0; *(uint32_t *)(arg0 + 312) = 0; return arg0;
}
#endif
