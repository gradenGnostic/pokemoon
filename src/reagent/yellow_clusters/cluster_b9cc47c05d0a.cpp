// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010EF14
extern "C" uint32_t YellowAuto_0010ef14(uint32_t arg0) __asm__("_ZN2nn3svc10ClearEventENS_6HandleE");
extern "C" uint32_t YellowAuto_0010ef14(uint32_t arg0) {
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010EF1C
extern "C" uint32_t YellowAuto_0010ef1c(uint32_t arg0) __asm__("_ZN2nn3svc11CloseHandleENS_6HandleE");
extern "C" uint32_t YellowAuto_0010ef1c(uint32_t arg0) {
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00106320
uint32_t Swi0x17(uint32_t, uint32_t *);
extern "C" uint32_t YellowAuto_00106320(uint32_t* arg0, uint32_t arg1) __asm__("_ZN2nn3svc11CreateEventEPNS_6HandleENS_2os9ResetTypeE");
extern "C" uint32_t YellowAuto_00106320(uint32_t* arg0, uint32_t arg1) {
uint32_t res;
uint32_t h;
res = Swi0x17(arg1, &h);
*arg0 = h;
return res;
}
#endif
