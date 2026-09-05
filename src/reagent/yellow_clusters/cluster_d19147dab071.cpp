// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E7B4
extern "C" void YellowAuto_0045e7b4(void* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib4Util8PackFileC1EPKh");
extern "C" void YellowAuto_0045e7b4(void* arg0, const uint8_t* arg1) {
*(uint32_t *)arg0 = 0x0045e7d0u; *(uint32_t *)(arg0 + 4) = (uint32_t)arg1; *(uint32_t *)(arg0 + 8) = (uint32_t)arg1; *(uint32_t *)(arg0 + 12) = (uint32_t)(arg1 + 16);
}
#endif
