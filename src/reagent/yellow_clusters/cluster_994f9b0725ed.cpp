// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00469374
uint8_t* fn_004692c8(uint8_t*);
extern "C" uint8_t* YellowAuto_00469374(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta22InformationMessageDataC1Ev");
extern "C" uint8_t* YellowAuto_00469374(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x00469390;
*(uint32_t *)(arg0 + 4) = 0xffffffffu;
return fn_004692c8(arg0 + 8) - 8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004693B4
uint8_t* fn_00469358(uint8_t*);
extern "C" uint8_t* YellowAuto_004693b4(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta22InformationMessageDataD1Ev");
extern "C" uint8_t* YellowAuto_004693b4(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x004693cc;
return fn_00469358(arg0 + 8) - 8;
}
#endif
