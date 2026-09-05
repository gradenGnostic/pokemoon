// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00301910
void __aeabi_vec_delete(void*, uint32_t);
extern uint32_t DAT_00301920;
extern "C" void YellowAuto_00301910(void* arg0) __asm__("_ZN4__rw18__rw_locale_vectorISsED2Ev");
extern "C" void YellowAuto_00301910(void* arg0) {
__aeabi_vec_delete(*(void **)arg0, DAT_00301920);
}
#endif
