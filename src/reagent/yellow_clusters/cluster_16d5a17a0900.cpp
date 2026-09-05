// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F454C
extern "C" void YellowAuto_003f454c(uint8_t* arg0) __asm__("_ZN7GameSys9AlolaTimeC1Ev");
extern "C" void YellowAuto_003f454c(uint8_t* arg0) {
*(uint32_t*)arg0 = *(const uint32_t*)0x003f4574; ((void(*)(uint8_t*))(0x0035eb28))(arg0 + 8); *(uint32_t*)(arg0 + 16) = ((const uint32_t*)*(const uint32_t*)0x003f4578)[0]; *(uint32_t*)(arg0 + 20) = ((const uint32_t*)*(const uint32_t*)0x003f4578)[1];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3380
extern "C" uint32_t YellowAuto_004a3380(const uint8_t* arg0) __asm__("_ZNK7GameSys9AlolaTime9GetMinuteEv");
extern "C" uint32_t YellowAuto_004a3380(const uint8_t* arg0) {
return ((uint32_t(*)(const uint8_t*))(0x00478c8c))(arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A33CC
extern "C" uint32_t YellowAuto_004a33cc(const uint8_t* arg0) __asm__("_ZNK7GameSys9AlolaTime9GetSecondEv");
extern "C" uint32_t YellowAuto_004a33cc(const uint8_t* arg0) {
return ((uint32_t(*)(const uint8_t*))(0x00478cfc))(arg0 + 8);
}
#endif
