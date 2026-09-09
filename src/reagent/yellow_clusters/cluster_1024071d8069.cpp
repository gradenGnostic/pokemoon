// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042A940
extern "C" uint32_t YellowAuto_0042a940(uint32_t arg0, uint32_t arg1, bool arg2, bool arg3) __asm__("_ZN8PokeTool10GetDrawSexE6MonsNoN3pml3SexEbb");
extern "C" uint32_t YellowAuto_0042a940(uint32_t arg0, uint32_t arg1, bool arg2, bool arg3) {
if ((!arg3) && ((arg2 != 0) || ((arg0 != 0x20) && (arg0 != 0x1d)))) return arg1; return 2;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00430498
void func_0036dd24(uint8_t*, int32_t);
void func_0040ca94(uint8_t*, uint16_t, uint8_t*);
uint32_t func_0042d3b4(const uint8_t*, uint8_t*, uint16_t);
extern "C" uint32_t YellowAuto_00430498(const uint8_t* arg0, uint16_t arg1, uint16_t arg2, uint8_t* arg3) __asm__("_ZN8PokeTool21ITEM_RCV_RecoverCheckEPKN3pml8pokepara12PokemonParamEttPN7itemman12ITEM_MANAGERE");
extern "C" uint32_t YellowAuto_00430498(const uint8_t* arg0, uint16_t arg1, uint16_t arg2, uint8_t* arg3) {
uint8_t _b0[44]; func_0036dd24(_b0, 0); func_0040ca94(arg3, arg1, _b0); return func_0042d3b4(arg0, _b0, arg2);
}
#endif
