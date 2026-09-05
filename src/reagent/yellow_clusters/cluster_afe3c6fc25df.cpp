// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103AF8
void *FUN_00103d80(void *);
extern const uint32_t DAT_00103b08;
extern "C" void YellowAuto_00103af8(void* arg0) __asm__("_ZNSt14__rw_exceptionC2Ev");
extern "C" void YellowAuto_00103af8(void* arg0) {
uint32_t *puVar1 = (uint32_t *)FUN_00103d80(arg0); *puVar1 = DAT_00103b08; puVar1[1] = 0;
}
#endif
