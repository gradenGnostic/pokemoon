// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00301A98
uint32_t strlen(const uint8_t*);
extern "C" void YellowAuto_00301a98(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8NodeName11SetNodeNameEPKc");
extern "C" void YellowAuto_00301a98(uint8_t* arg0, const uint8_t* arg1) {
uint32_t len = strlen(arg1);
if (len >= (uint32_t)64) {
}
for (uint32_t i = (uint32_t)0; i < (uint32_t)64; ++i) arg0[(uint32_t)4 + i] = (uint8_t)0;
for (uint32_t i = (uint32_t)0; ; ++i) { uint8_t c = arg1[i]; arg0[(uint32_t)4 + i] = c; if (c == (uint8_t)0) break; }
}
#endif
