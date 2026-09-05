// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00346EC8
extern const uint32_t* DAT_00346ef0;
void FUN_00345278(uint32_t, const uint32_t*);
extern "C" void YellowAuto_00346ec8(uint8_t* arg0) __asm__("_ZN4gfl22ui6Device21SetDefaultRepeatParamEv");
extern "C" void YellowAuto_00346ec8(uint8_t* arg0) {
uint32_t local0[2];
local0[0] = DAT_00346ef0[0];
local0[1] = DAT_00346ef0[1];
FUN_00345278(*(uint32_t*)(arg0 + 8), local0);
}
#endif
