// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00453558
void FUN_00453dc8(uint8_t* arg0, uint8_t* arg1);
void FUN_004535e8(uint8_t* arg0, uint8_t* arg1);
void StartAnime(void* arg0, int32_t arg1, uint32_t arg2, int32_t arg3, int32_t arg4);
extern "C" void YellowAuto_00453558(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListPlayerInfoUpperView22SetJoinFestaPlayerDataEPNS0_19JoinFestaPlayerDataE");
extern "C" void YellowAuto_00453558(uint8_t* arg0, uint8_t* arg1) {
if (arg1 == (uint8_t *)0) arg0[200] = 0; else arg0[200] = 1, (arg1[704] == 2) ? FUN_00453dc8(arg0, arg1) : FUN_004535e8(arg0, arg1), StartAnime(*(void **)(arg0 + 96), 0, (arg1[704] == 1) ? 1U : ((arg1[704] == 2) ? 2U : 0U), 1, 1);
return;
}
#endif
