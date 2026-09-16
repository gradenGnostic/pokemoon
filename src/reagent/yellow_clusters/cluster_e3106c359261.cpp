// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB4B8
extern "C" uint32_t YellowAuto_004ab4b8(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK9NetAppLib9JoinFesta28JoinFestaPersonalDataManager8GetCountENS0_15JoinFestaDefine21E_JOIN_FESTA_RELATIONE");
extern "C" uint32_t YellowAuto_004ab4b8(const uint8_t* arg0, int32_t arg1) {
return *(const uint32_t*)(arg0 + arg1 * 0x14 + 0x260);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00473498
void YellowAuto_00468f50(uint8_t*);
extern "C" void YellowAuto_00473498(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager22ResetRecruiterPersonalEv");
extern "C" void YellowAuto_00473498(uint8_t* arg0) {
YellowAuto_00468f50(arg0 + 0x4F8); *(arg0 + 0x988) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00472ED0
extern "C" uint8_t* YellowAuto_00472ed0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager19GetPersonalDataListENS0_15JoinFestaDefine21E_JOIN_FESTA_RELATIONE");
extern "C" uint8_t* YellowAuto_00472ed0(uint8_t* arg0, uint32_t arg1) {
if (arg1 > 1U) return (uint8_t*)0; return arg0 + 0x250 + arg1 * 0x14;
}
#endif
