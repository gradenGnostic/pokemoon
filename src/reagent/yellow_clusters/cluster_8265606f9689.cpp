// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443920
void func_003e67dc(uint8_t*, const void*);
extern "C" void YellowAuto_00443920(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN8Savedata8MyStatus10SetDressupEN7poke_3d5model12DressUpParamE");
extern "C" void YellowAuto_00443920(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
uint32_t _s[3]; _s[0] = arg1; _s[1] = arg2; _s[2] = arg3; func_003e67dc(arg0 + 0x5C, _s);
}
#endif
