// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E47A0
extern uint32_t DAT_002e47cc;
void* FUN_002e31c4(void*);
extern "C" void YellowAuto_002e47a0(void* arg0) __asm__("_ZN3App8PokeList19PokeListSimpleFrameC1Ev");
extern "C" void YellowAuto_002e47a0(void* arg0) {
uint32_t* const v0 = (uint32_t*)FUN_002e31c4(arg0);
  v0[0] = DAT_002e47cc;
  v0[6] = DAT_002e47cc + 0x58;
  v0[26] = 0;
  *(uint8_t*)(v0 + 27) = 1;
}
#endif
