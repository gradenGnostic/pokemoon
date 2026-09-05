// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003529B4
void *FUN_0034f828(uint32_t);
void operator_delete(void *);
extern "C" uint8_t* YellowAuto_003529b4(uint8_t* arg0) __asm__("_ZN4gfl23lyt6LytSysD1Ev");
extern "C" uint8_t* YellowAuto_003529b4(uint8_t* arg0) {
if (*(uint32_t *)arg0 != 0) operator_delete(FUN_0034f828(*(uint32_t *)arg0)); return arg0;
}
#endif
