// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A7AC
extern "C" const uint8_t* YellowAuto_0049a7ac(const uint8_t* arg0) __asm__("_ZNK4gfl23str6StrBuf6GetPtrEv");
extern "C" const uint8_t* YellowAuto_0049a7ac(const uint8_t* arg0) {
return *(const uint8_t **)(arg0 + 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A8E8
extern "C" uint16_t YellowAuto_0049a8e8(const uint8_t* arg0) __asm__("_ZNK4gfl23str6StrBuf9GetLengthEv");
extern "C" uint16_t YellowAuto_0049a8e8(const uint8_t* arg0) {
return *(const uint16_t *)(arg0 + 10);
}
#endif
