// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EBA98
bool IsChanging(uint8_t *arg0);
extern "C" bool YellowAuto_003eba98(uint8_t* arg0) __asm__("_ZN6System6Skybox6Skybox10IsChangingEv");
extern "C" bool YellowAuto_003eba98(uint8_t* arg0) {
if (arg0[0x28] == 0) return false; return arg0[0x3a] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EC27C
void Terminate(uint8_t *arg0);
extern "C" void YellowAuto_003ec27c(uint8_t* arg0) __asm__("_ZN6System6Skybox6Skybox9TerminateEv");
extern "C" void YellowAuto_003ec27c(uint8_t* arg0) {
arg0[0x28] = 0; *(uint32_t *)(arg0 + 0x2c) = 0xffffffffU; *(uint32_t *)(arg0 + 0x30) = 0xffffffffU; *(uint32_t *)(arg0 + 0x34) = 0xffffffffU; arg0[0x38] = 2; arg0[0x39] = 2; *(uint32_t *)(arg0 + 0x3c) = 0; arg0[0x20] = 2;
}
#endif
