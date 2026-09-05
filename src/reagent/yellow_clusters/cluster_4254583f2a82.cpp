// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004438F4
uint8_t* GameTime(uint8_t* arg0);
void FUN_004435bc(uint8_t* arg0);
extern const uint32_t DAT_00443914;
extern "C" uint8_t* YellowAuto_004438f4(uint8_t* arg0) __asm__("_ZN8Savedata8GameTimeC1Ev");
extern "C" uint8_t* YellowAuto_004438f4(uint8_t* arg0) {
*(uint32_t *)arg0 = DAT_00443914; FUN_004435bc(arg0); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8220
bool IsAlolaOffsetExists(const uint8_t* arg0);
extern const uint32_t DAT_004A8240;
extern "C" bool YellowAuto_004a8220(const uint8_t* arg0) __asm__("_ZNK8Savedata8GameTime19IsAlolaOffsetExistsEv");
extern "C" bool YellowAuto_004a8220(const uint8_t* arg0) {
return *(const uint32_t *)(arg0 + 0x54) != 0U || *(const uint32_t *)(arg0 + 0x50) != DAT_004A8240;
}
#endif
