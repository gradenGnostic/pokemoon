// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042FFC4
void sub_340f18(uint8_t*);
extern "C" void YellowAuto_0042ffc4(uint8_t* arg0) __asm__("_ZN8PokeTool15PokeModelSystemC1Ev");
extern "C" void YellowAuto_0042ffc4(uint8_t* arg0) {
sub_340f18(arg0 + 0x20);
*(uint32_t*)(arg0 + 0x30) = 0;
*(uint32_t*)(arg0 + 0x34) = 0;
*(uint32_t*)(arg0 + 0x38) = 0;
*(uint32_t*)(arg0 + 0x3c) = 0;
*(uint32_t*)(arg0 + 0x40) = 0;
*(uint32_t*)(arg0 + 0x44) = 0;
*(uint32_t*)(arg0 + 0x2c) = *(uint32_t*)0x43001c;
*(uint32_t*)(arg0 + 0x48) = 0;
sub_340f18(arg0 + 0x54);
*(uint8_t*)(arg0 + 0x18) = 0;
*(uint32_t*)(arg0 + 0x64) = 0;
*(uint32_t*)(arg0 + 0x5c) = 0;
return;
}
#endif
