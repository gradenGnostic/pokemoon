// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D308
uint8_t FUN_0048d2f4(void*);
extern "C" uint8_t YellowAuto_0048d308(uint8_t* arg0) __asm__("_ZNK3App8PokeList19PokeListSimpleFrame7IsPauseEv");
extern "C" uint8_t YellowAuto_0048d308(uint8_t* arg0) {
int32_t v0 = *(int32_t *)(arg0 + 0x68); uint8_t v1 = 0; if (v0 != 0) v1 = (uint8_t)(FUN_0048d2f4((void *)v0) & (uint8_t)~*(int8_t *)(v0 + 0x2d)); return v1;
}
#endif
