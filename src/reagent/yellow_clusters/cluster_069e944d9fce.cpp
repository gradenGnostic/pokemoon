// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CA9D0
void* operator_new(uint32_t, const void*);
void* MsgData_ctor(void*, uint32_t, uint32_t, const void*, bool);
extern "C" void YellowAuto_002ca9d0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3App4Tool10TalkWindow11InitMsgDataEjj");
extern "C" void YellowAuto_002ca9d0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
const uint8_t* v1 = *(const uint8_t**)(arg0 + 0x8c);
void* v2 = operator_new(0x30u, *(const void**)(v1 + 8));
void* v3 = 0;
if (v2 != 0)
  v3 = MsgData_ctor(v2, arg1, arg2, *(const void**)(v1 + 8), 1);
*(void**)(arg0 + 0x98) = v3;
*(uint8_t*)(arg0 + 0xba) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB278
void* operator_new(uint32_t, const void*);
uint32_t GetMessageArcId(uint32_t);
void* MsgData_ctor(void*, uint32_t, uint32_t, const void*, bool);
extern "C" void YellowAuto_002cb278(uint8_t* arg0) __asm__("_ZN3App4Tool10TalkWindow18InitTrainerMsgDataEv");
extern "C" void YellowAuto_002cb278(uint8_t* arg0) {
const uint8_t* v1 = *(const uint8_t**)(arg0 + 0x8c);
void* v2 = operator_new(0x30u, *(const void**)(v1 + 8));
void* v3 = 0;
if (v2 != 0)
  v3 = MsgData_ctor(v2, GetMessageArcId(10u), 0x3au, *(const void**)(v1 + 8), 1);
*(void**)(arg0 + 0x9c) = v3;
*(uint8_t*)(arg0 + 0xbb) = 1;
}
#endif
