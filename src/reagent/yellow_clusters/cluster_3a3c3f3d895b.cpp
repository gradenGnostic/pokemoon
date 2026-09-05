// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103368
extern int32_t FUN_002feca8(const void*, const void*, int32_t, int32_t);
extern "C" int32_t YellowAuto_00103368(const void* arg0) __asm__("_ZNKSt14codecvt_bynameIwcSt11__mbstate_tE11do_encodingEv");
extern "C" int32_t YellowAuto_00103368(const void* arg0) {
return FUN_002feca8(0, 0, 0, 0) != 0 ? -1 : 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103384
extern int32_t FUN_00301c3c(void);
extern "C" int32_t YellowAuto_00103384(const void* arg0) __asm__("_ZNKSt14codecvt_bynameIwcSt11__mbstate_tE13do_max_lengthEv");
extern "C" int32_t YellowAuto_00103384(const void* arg0) {
return FUN_00301c3c();
}
#endif
