// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046177C
extern "C" void YellowAuto_0046177c(uint8_t* arg0) __asm__("_ZN9NetAppLib7Message17TelopTagProcessor6UpdateEv");
extern "C" void YellowAuto_0046177c(uint8_t* arg0) {
*(float*)(arg0 + 8) = *(float*)(arg0 + 8) + *(float*)(arg0 + 4);
}
#endif
