// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044D71C
void ReleaseArray(void*);
void ReleaseObject(void*);
extern "C" uint8_t* YellowAuto_0044d71c(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI27JoinFestaRankingListManagerD1Ev");
extern "C" uint8_t* YellowAuto_0044d71c(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x0044d76c; if (*(uint8_t **)(arg0 + 8) != 0) ReleaseArray(*(void **)(arg0 + 8)), *(uint8_t **)(arg0 + 8) = 0; if (*(uint8_t **)(arg0 + 4) != 0) ReleaseObject(*(void **)(arg0 + 4)), *(uint8_t **)(arg0 + 4) = 0; *(uint32_t *)(arg0 + 0xc) = 0; *(uint32_t *)(arg0 + 0x10) = 0; *(uint32_t *)(arg0 + 0x14) = 0; return arg0;
}
#endif
