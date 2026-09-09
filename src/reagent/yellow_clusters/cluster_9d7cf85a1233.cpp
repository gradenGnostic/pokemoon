// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042AE78
extern "C" bool YellowAuto_0042ae78(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil11DoesSetFlagEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042ae78(const uint8_t* arg0, uint32_t arg1) {
(void)arg0;
switch (arg1) {
case 0:
case 1:
case 2:
case 4:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
return true;
default:
return false;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B478
extern "C" bool YellowAuto_0042b478(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil18DoesPut_NotSetFlagEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042b478(const uint8_t* arg0, uint32_t arg1) {
(void)arg0;
switch (arg1) {
case 0:
case 1:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
return true;
default:
return false;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B684
extern "C" bool YellowAuto_0042b684(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil21DoesGoToPokeNameInputEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042b684(const uint8_t* arg0, uint32_t arg1) {
(void)arg0;
switch (arg1) {
case 0:
case 1:
case 6:
case 7:
case 10:
case 11:
case 13:
return true;
default:
return false;
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B6D4
void* GetInstance();
extern "C" bool YellowAuto_0042b6d4(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil21DoesGoToPokePutSelectEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042b6d4(const uint8_t* arg0, uint32_t arg1) {
(void)arg0; switch (arg1) { case 0: case 1: case 8: case 9: case 10: case 12: case 13: case 14: GetInstance(); break; default: break; } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B398
uint16_t GetMonsNo(const uint8_t*);
int32_t GetLocalNumberStatic(uint32_t, uint32_t);
void* GetInstance();
extern "C" bool YellowAuto_0042b398(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil16DoesGoToInfoShowEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042b398(const uint8_t* arg0, uint32_t arg1) {
switch (arg1) { case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 10: case 11: case 12: case 13: if (GetLocalNumberStatic(GetMonsNo(arg0), 1) != 0) { GetInstance(); } break; default: break; } return false;
}
#endif
