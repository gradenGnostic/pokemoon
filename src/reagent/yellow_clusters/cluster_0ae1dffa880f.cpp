// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001074BC
extern "C" void YellowAuto_001074bc(const uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) __asm__("_ZN4gfl25debug13GFLassertStopEPKcjS2_");
extern "C" void YellowAuto_001074bc(const uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) {
(void)arg0;
(void)arg1;
spin:
if (*(uint32_t*)*(uint32_t*)0x001074DC == 0u) goto spin;
((void(*)(void*, uint32_t))*(uint32_t*)*(uint32_t*)0x001074DC)((void*)0x001074E0, 1u);
goto spin;
}
#endif
