// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041E6AC
uint32_t base;
uint32_t count;
uint32_t i;
uint32_t* pair;
extern "C" uint32_t YellowAuto_0041e6ac(uint8_t* arg0, uint32_t arg1, uint32_t* arg2) __asm__("_ZN7trainer15TrainerPairData14SearchPairDataEjPj");
extern "C" uint32_t YellowAuto_0041e6ac(uint8_t* arg0, uint32_t arg1, uint32_t* arg2) {
base = *(uint32_t*)(arg0 + 0x0c);
count = *(uint32_t*)(arg0 + 0x14);
for (i = 0; i < count; ++i)
  pair = (uint32_t*)(base + (i << 3));
  if (pair[0] == arg1)
    *arg2 = pair[1];
    return 1;
  if (pair[1] == arg1)
    *arg2 = pair[0];
    return 2;
*arg2 = 0;
return 0;
}
#endif
