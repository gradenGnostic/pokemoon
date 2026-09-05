// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003983F0
void __aeabi_memcpy(void*, const void*, uint32_t);
extern "C" void YellowAuto_003983f0(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN5Field7Encount7PokeSet14SetEncountDataERKNS0_12ENCOUNT_DATAE");
extern "C" void YellowAuto_003983f0(uint8_t* arg0, const uint8_t* arg1) {
__aeabi_memcpy(arg0 + 0x21c, arg1, 0x2cc);
arg0[0x4e8] = 1;
}
#endif
