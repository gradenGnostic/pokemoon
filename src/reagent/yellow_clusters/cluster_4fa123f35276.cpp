// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F4114
const uint16_t* GetEventWorkAdrs(const uint8_t* arg0, uint32_t arg1);
extern "C" bool YellowAuto_003f4114(const uint8_t* arg0) __asm__("_ZN7GameSys9AlolaTime20CheckAlolaOtherWorldEPKN5Field9EventWorkE");
extern "C" bool YellowAuto_003f4114(const uint8_t* arg0) {
return *GetEventWorkAdrs(arg0, *(const uint32_t*)0x003F4184u) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F44D0
const uint16_t* GetEventWorkAdrs(const uint8_t* arg0, uint32_t arg1);
extern "C" bool YellowAuto_003f44d0(uint32_t arg0, const uint8_t* arg1) __asm__("_ZN7GameSys9AlolaTime33IsAlolaTimeJumpOtherWorldSkillUseE6MonsNoPKNS_8GameDataE");
extern "C" bool YellowAuto_003f44d0(uint32_t arg0, const uint8_t* arg1) {
return *GetEventWorkAdrs((const uint8_t*)(0x00001590u + *(const uint32_t*)(arg1 + 4)), *(const uint32_t*)0x003F4548u) == 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F4188
const uint16_t* GetEventWorkAdrs(const uint8_t* arg0, uint32_t arg1);
extern "C" bool YellowAuto_003f4188(const uint8_t* arg0) __asm__("_ZN7GameSys9AlolaTime20CheckAlolaOtherWorldEPKNS_8GameDataE");
extern "C" bool YellowAuto_003f4188(const uint8_t* arg0) {
return *GetEventWorkAdrs((const uint8_t*)(0x00001590u + *(const uint32_t*)(arg0 + 4)), *(const uint32_t*)0x003F4204u) == 0;
}
#endif
