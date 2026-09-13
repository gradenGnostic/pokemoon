// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00469354
extern "C" void YellowAuto_00469354(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI23JoinFestaAttractionDataD1Ev");
extern "C" void YellowAuto_00469354(uint8_t* arg0) {
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004490B0
void Func_004692C8(uint8_t* arg0);
extern "C" void YellowAuto_004490b0(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI23JoinFestaAttractionDataC1Ev");
extern "C" void YellowAuto_004490b0(uint8_t* arg0) {
Func_004692C8(arg0); arg0[0x248] = 0x54; arg0[0x249] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00449044
extern "C" uint8_t* YellowAuto_00449044(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI23JoinFestaAttractionDataC1ERKS1_");
extern "C" uint8_t* YellowAuto_00449044(uint8_t* arg0, const uint8_t* arg1) {
for (uint32_t i = 0; i < 128; ++i) ((uint32_t*)(arg0 + 0x8))[i] = ((const uint32_t*)(arg1 + 0x8))[i]; for (uint32_t i = 0; i < 16; ++i) ((uint32_t*)(arg0 + 0x208))[i] = ((const uint32_t*)(arg1 + 0x208))[i]; arg0[0x248] = arg1[0x248]; arg0[0x249] = arg1[0x249]; return arg0;
}
#endif
