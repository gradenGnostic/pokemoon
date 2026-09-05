// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A8424
extern const void *DAT_003a8434;
extern "C" void YellowAuto_003a8424(uint8_t* arg0) __asm__("_ZN5Field9MoveModel31FieldMoveModelAreaCharaAccessorC1Ev");
extern "C" void YellowAuto_003a8424(uint8_t* arg0) {
*(const void **)arg0 = DAT_003a8434; *(uint32_t *)(arg0 + 4) = 0;
}
#endif
