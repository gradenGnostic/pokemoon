// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003028E4
void sub_00357cd8(void*);
uint8_t* sub_00103f48(uint8_t*);
void sub_00301910(uint8_t*);
extern "C" void YellowAuto_003028e4(uint8_t* arg0) __asm__("_ZN4__rw15__rw_locale_impD2Ev");
extern "C" void YellowAuto_003028e4(uint8_t* arg0) {
sub_00357cd8((void *)(*(uint32_t *)(arg0 + 0x18)));
sub_00301910(sub_00103f48(arg0 + 8) - 8);
return;
}
#endif
