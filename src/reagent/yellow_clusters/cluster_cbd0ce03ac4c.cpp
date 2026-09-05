// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00448978
extern const uint32_t DAT_004489c4;
uint8_t* FUN_004692c8(uint8_t*);
uint8_t* FUN_004491cc(int32_t);
extern "C" void YellowAuto_00448978(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI19JoinFestaPlayerDataC1Ev");
extern "C" void YellowAuto_00448978(uint8_t* arg0) {
arg0 = FUN_004692c8(arg0);
*(uint32_t *)arg0 = DAT_004489c4;
arg0 = FUN_004491cc((int32_t)(arg0 + 0x248));
*(uint32_t *)(arg0 + 0x58) = 0;
*(uint32_t *)(arg0 + 0x5c) = 0;
*(uint32_t *)(arg0 + 0x60) = 0;
*(uint32_t *)(arg0 + 0x64) = 0;
*(uint32_t *)(arg0 + 0x68) = 0;
*(uint32_t *)(arg0 + 0x6c) = 0;
*(uint32_t *)(arg0 + 0x70) = 0;
*(uint32_t *)(arg0 + 0x74) = 0;
*(uint8_t *)(arg0 + 0x78) = 0;
*(uint8_t *)(arg0 + 0x79) = 0;
*(uint8_t *)(arg0 + 0x7a) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004489EC
extern const uint32_t DAT_00448a08;
void FUN_00469358(uint8_t*);
extern "C" void YellowAuto_004489ec(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI19JoinFestaPlayerDataD1Ev");
extern "C" void YellowAuto_004489ec(uint8_t* arg0) {
*(uint32_t *)arg0 = DAT_00448a08;
FUN_00469358(arg0);
}
#endif
