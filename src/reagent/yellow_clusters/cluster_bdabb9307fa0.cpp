// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DE98
uint8_t* Helper0();
uint8_t* Helper1(uint8_t* a, int32_t b);
extern "C" void YellowAuto_0049de98(const uint8_t* arg0, bool arg1, uint32_t* arg2) __asm__("_ZNK5Field17FieldBerryManager13GetVisualDescEbPNS0_10VisualDescE");
extern "C" void YellowAuto_0049de98(const uint8_t* arg0, bool arg1, uint32_t* arg2) {
(void)arg0; uint8_t* base = Helper1(Helper0(), 13); uint8_t* e = base + ((uint32_t)arg1 << 4); arg2[0] = (uint32_t)*(const uint16_t*)(e + 4); arg2[1] = *(const uint32_t*)(e + 8); *(uint8_t**)(arg2 + 2) = base + *(const int32_t*)(e + 12); *(uint8_t**)(arg2 + 3) = base + *(const int32_t*)(e + 16); return;
}
#endif
