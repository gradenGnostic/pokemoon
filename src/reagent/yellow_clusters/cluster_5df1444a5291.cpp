// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497AD4
extern "C" bool YellowAuto_00497ad4(const uint8_t* arg0) __asm__("_ZNK4gfl22fs6Result9IsSuccessEv");
extern "C" bool YellowAuto_00497ad4(const uint8_t* arg0) {
return *(const int32_t *)(arg0 + 0) == 0 && *(const int32_t *)(arg0 + 4) == 0;
}
#endif
