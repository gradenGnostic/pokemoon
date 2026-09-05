// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7F74
extern "C" bool YellowAuto_004a7f74(const void* arg0, const uint32_t* arg1) __asm__("_ZNK8Savedata6MyItem5IsNewEPKNS0_7ITEM_STE");
extern "C" bool YellowAuto_004a7f74(const void* arg0, const uint32_t* arg1) {
return (*arg1 & 0x40000000U) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00442898
extern "C" void YellowAuto_00442898(void* arg0, uint32_t* arg1) __asm__("_ZN8Savedata6MyItem8ResetNewEPNS0_7ITEM_STE");
extern "C" void YellowAuto_00442898(void* arg0, uint32_t* arg1) {
*arg1 &= 0xBFFFFFFFU;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004421CC
extern "C" bool YellowAuto_004421cc(const void* arg0, const uint32_t* arg1) __asm__("_ZN8Savedata6MyItem19IsRegisterFreeSpaceEPKNS0_7ITEM_STE");
extern "C" bool YellowAuto_004421cc(const void* arg0, const uint32_t* arg1) {
if (arg1 == 0)
  return false;
return ((*arg1 & 0x3FFFFFFFU) >> 20) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044273C
extern "C" void YellowAuto_0044273c(void* arg0, uint32_t* arg1, uint32_t* arg2) __asm__("_ZN8Savedata6MyItem6ChangeEPNS0_7ITEM_STES2_");
extern "C" void YellowAuto_0044273c(void* arg0, uint32_t* arg1, uint32_t* arg2) {
uint32_t temp = *arg1;
*arg1 = *arg2;
*arg2 = temp;
return;
}
#endif
