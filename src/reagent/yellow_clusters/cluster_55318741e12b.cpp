// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D1DA0
void func_002D2344(uint8_t*, int32_t);
extern "C" void YellowAuto_002d1da0(uint8_t* arg0, int32_t arg1) __asm__("_ZN3App4Tool15MessageMenuView15SetMessageSpeedEN8Savedata10ConfigSave9MSG_SPEEDE");
extern "C" void YellowAuto_002d1da0(uint8_t* arg0, int32_t arg1) {
func_002D2344(*(uint8_t**)(arg0 + 0x94) + 0x8C, arg1);
}
#endif
