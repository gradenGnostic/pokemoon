// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F3DEC
void* GetInstance();
extern "C" void YellowAuto_003f3dec(uint8_t* arg0) __asm__("_ZN7GameSys9AlolaTime10InitializeEv");
extern "C" void YellowAuto_003f3dec(uint8_t* arg0) {
GetInstance();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F427C
uint32_t *DAT_003f428c;
extern "C" void YellowAuto_003f427c(uint8_t* arg0) __asm__("_ZN7GameSys9AlolaTime22ClearAlolaOnlyFakeTimeEv");
extern "C" void YellowAuto_003f427c(uint8_t* arg0) {
*DAT_003f428c = 0;
}
#endif
