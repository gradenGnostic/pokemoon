// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00301FD0
void FUN_00301a84(uint32_t, uint8_t*);
void FUN_00357cd8(void*);
extern "C" uint8_t* YellowAuto_00301fd0(uint8_t* arg0) __asm__("_ZN4__rw21__rw_use_c_lib_localeD2Ev");
extern "C" uint8_t* YellowAuto_00301fd0(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 4) != (uint32_t)0) { FUN_00301a84(*(uint32_t*)(arg0 + 0), (uint8_t*)(*(uint32_t*)(arg0 + 4))); FUN_00357cd8((void*)(*(uint32_t*)(arg0 + 4))); } return arg0;
}
#endif
