// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103FEC
void __aeabi_vec_delete(uint32_t, uint32_t);
extern "C" void YellowAuto_00103fec(uint8_t* arg0) __asm__("_ZN4__rw18__rw_locale_vectorISt18__rw_open_cat_dataED2Ev");
extern "C" void YellowAuto_00103fec(uint8_t* arg0) {
__aeabi_vec_delete(*(uint32_t*)arg0, *(uint32_t*)0x00103ffc);
}
#endif
