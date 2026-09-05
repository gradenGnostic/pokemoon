// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035E910
extern const uint32_t DAT_0035e928[];
extern "C" void YellowAuto_0035e910(uint32_t* arg0) __asm__("_ZN4gfl26system4Date6GetNowEPS1_");
extern "C" void YellowAuto_0035e910(uint32_t* arg0) {
if (arg0 != 0) arg0[0] = DAT_0035e928[0], arg0[1] = DAT_0035e928[1];
}
#endif
