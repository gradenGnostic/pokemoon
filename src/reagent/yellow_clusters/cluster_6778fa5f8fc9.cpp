// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C43E4
extern uint32_t DAT_003c43f8;
extern "C" void YellowAuto_003c43e4(void* arg0, void* arg1, void* arg2) __asm__("_ZN6AppLib4Tool15PokeCapAccesserC1EPN3app4util4HeapEPN4gfl22fs16AsyncFileManagerE");
extern "C" void YellowAuto_003c43e4(void* arg0, void* arg1, void* arg2) {
*(uint32_t *)((uint8_t *)arg0 + 4) = (uint32_t)arg1;
*(uint32_t *)((uint8_t *)arg0 + 8) = (uint32_t)arg2;
*(uint32_t *)((uint8_t *)arg0 + 12) = 0;
*(uint32_t *)arg0 = DAT_003c43f8;
}
#endif
