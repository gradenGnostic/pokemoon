// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00316454
void LoadPersonalData(uint32_t, uint32_t);
uint32_t GetPersonalParam(uint32_t);
extern "C" void YellowAuto_00316454(uint8_t* arg0, uint32_t* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3pml8personal4Util15GetRegionFormNoEPhPj6MonsNoNS0_8RegionIDE");
extern "C" void YellowAuto_00316454(uint8_t* arg0, uint32_t* arg1, uint32_t arg2, uint32_t arg3) {
*arg1 = 0u;
LoadPersonalData(arg2, 0u);
uint32_t r6 = GetPersonalParam(31u);
uint32_t r4 = 0u;
if (r6 != 0u) {
do {
LoadPersonalData(arg2, r4 & 255u);
uint32_t r0 = GetPersonalParam(45u);
if ((r0 & 255u) == arg3) {
arg0[*arg1] = (uint8_t)r4;
*arg1 = *arg1 + 1u;
}
r4 = r4 + 1u;
} while (r4 < r6);
}
}
#endif
