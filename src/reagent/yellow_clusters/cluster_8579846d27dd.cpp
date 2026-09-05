// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A6300
extern "C" void YellowAuto_003a6300(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field9MoveModel25FieldActionCommandManager28AddActionCommandWorkSequenceEPNS0_17ActionCommandWorkEi");
extern "C" void YellowAuto_003a6300(uint8_t* arg0, int32_t arg1) {
int32_t v0 = *(int32_t *)(arg0 + 8) + arg1;
if (v0 >= 0)
  *(int32_t *)(arg0 + 8) = v0;
return;
}
#endif
