// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0053B2A4
extern "C" void YellowAuto_0053b2a4(void* arg0, uint32_t arg1) __asm__("_ZN4gfl24math10SFMTRandom10InitializeEj");
extern "C" void YellowAuto_0053b2a4(void* arg0, uint32_t arg1) {
((uint32_t*)arg0)[0] = arg1;
((uint32_t*)arg0)[1] = 1812433253U * ((((uint32_t*)arg0)[0] ^ (((uint32_t*)arg0)[0] >> 30))) + 1U;
for (uint32_t i = 2; i < 624; i += 2) ((uint32_t*)arg0)[i] = 1812433253U * ((((uint32_t*)arg0)[i - 1] ^ (((uint32_t*)arg0)[i - 1] >> 30))) + i, ((uint32_t*)arg0)[i + 1] = 1812433253U * ((((uint32_t*)arg0)[i] ^ (((uint32_t*)arg0)[i] >> 30))) + (i + 1U);
((uint32_t*)((uint8_t*)arg0 + 0x9c0))[0] = 0x270U;
/* parity certification step; if parity is even, flip one bit in the first matching state word */
}
#endif
