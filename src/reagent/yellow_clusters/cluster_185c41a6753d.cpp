// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00399F5C
void __aeabi_vec_delete(void *arg0, const void *arg1);
extern "C" uint8_t* YellowAuto_00399f5c(uint8_t* arg0) __asm__("_ZN5Field9EventList20EventListDataManagerD1Ev");
extern "C" uint8_t* YellowAuto_00399f5c(uint8_t* arg0) {
if (*(uint32_t *)(arg0 + 0x18) != 0)
  __aeabi_vec_delete(*(void **)(arg0 + 0x18), *(const void **)0x00399f90);
*(uint32_t *)(arg0 + 0x18) = 0;
*(uint32_t *)(arg0 + 0x14) = 0;
*(uint32_t *)(arg0 + 0x1c) = 0;
return arg0;
}
#endif
