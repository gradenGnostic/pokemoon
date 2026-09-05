// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00449CFC
extern uint32_t DAT_00449d74;
extern uint8_t* FUN_0045248c(uint8_t*, void*, int32_t, int32_t);
extern void setupLayout(uint8_t*, int32_t, int32_t);
extern void FUN_0044936c(uint8_t*);
extern void FUN_00449548(uint8_t*);
extern "C" uint8_t* YellowAuto_00449cfc(uint8_t* arg0, void* arg1, int32_t arg2, int32_t arg3) __asm__("_ZN9NetAppLib11JoinFestaUI24JoinFestaSurveyLowerViewC1EPNS_6System19ApplicationWorkBaseEii");
extern "C" uint8_t* YellowAuto_00449cfc(uint8_t* arg0, void* arg1, int32_t arg2, int32_t arg3) {
arg0 = FUN_0045248c(arg0, arg1, arg2, arg3);
*(uint32_t*)arg0 = DAT_00449d74;
*(uint32_t*)(arg0 + 0xd0) = 0;
*(uint32_t*)(arg0 + 0xd4) = 0;
*(uint32_t*)(arg0 + 0xd8) = 0;
*(uint32_t*)(arg0 + 0xdc) = 0;
*(uint32_t*)(arg0 + 0xe0) = 0;
*(uint32_t*)(arg0 + 0xc4) = DAT_00449d74 + 0x7c;
*(uint32_t*)(arg0 + 0xc8) = DAT_00449d74 + 0xa0;
*(uint32_t*)(arg0 + 0xcc) = DAT_00449d74 + 0xb8;
*(uint8_t*)(arg0 + 0xe4) = 0;
*(uint8_t*)(arg0 + 0xe5) = 0;
*(uint8_t*)(arg0 + 0xe6) = 0;
setupLayout(arg0, 0, 3);
FUN_0044936c(arg0);
FUN_00449548(arg0);
*(uint32_t*)(arg0 + 0x14) = (uint32_t)(arg0 + 0xc4);
return arg0;
}
#endif
