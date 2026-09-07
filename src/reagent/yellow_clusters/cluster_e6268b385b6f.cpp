// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A60D0
extern "C" void* YellowAuto_003a60d0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field9MoveModel25FieldActionCommandManager20GetActionCommandWorkEPNS0_17ActionCommandWorkEj");
extern "C" void* YellowAuto_003a60d0(uint8_t* arg0, uint32_t arg1) {
(void)arg1; return (void*)(arg0 + 12);
}
#endif
