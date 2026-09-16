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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB2EC
void StopAnime(void*, uint32_t, uint32_t, uint32_t);
void StartAnime(void*, uint32_t, uint32_t, bool, uint32_t);
void* GetLayoutWork(void*, uint32_t);
void TimeIcon_StartAnime(void*, uint32_t, uint32_t);
extern "C" void YellowAuto_002cb2ec(uint8_t* arg0, bool arg1) __asm__("_ZN3App4Tool10TalkWindow19SetVisibleTimerIconEb");
extern "C" void YellowAuto_002cb2ec(uint8_t* arg0, bool arg1) {
if (arg1) { StopAnime(*(void**)(arg0 + 96), 0, 14, 0); StartAnime(*(void**)(arg0 + 96), 0, 13, true, 1); TimeIcon_StartAnime(GetLayoutWork(*(void**)(arg0 + 96), 0), 15, 1); } else { StopAnime(*(void**)(arg0 + 96), 0, 13, 0); StartAnime(*(void**)(arg0 + 96), 0, 14, true, 1); }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CA644
void SetStr(void*, const void*);
void GetString(void*, uint32_t, void*);
void Expand(void*, void*, void*);
void SetMessage(void*, void*);
void SetTextBoxPaneString(void*, uint32_t, uint32_t, void*);
void SetPaneVisible(void*, uint32_t, uint32_t, uint32_t);
int32_t FUN_002cab0c(uint8_t*, void*, uint32_t*);
extern "C" void YellowAuto_002ca644(uint8_t* arg0, const void* arg1) __asm__("_ZN3App4Tool10TalkWindow10SetMessageEPKN4gfl23str6StrBufE");
extern "C" void YellowAuto_002ca644(uint8_t* arg0, const void* arg1) {
void* _u = *(void**)(arg0 + 0x60);
void* _d = *(void**)(arg0 + 0xA0);
SetStr(_d, arg1);
void* _w = *(void**)(arg0 + 0xAC);
uint8_t _t = *(arg0 + 0xB0);
if (_t == 7) {
if (_w == (void*)0) {
SetTextBoxPaneString(_u, 0, 0x4C, _d);
} else {
void* _e = *(void**)(arg0 + 0xA4);
Expand(_w, _e, _d);
SetTextBoxPaneString(_u, 0, 0x4C, _e);
}
} else {
if (_w == (void*)0) {
SetMessage(_u, _d);
} else {
void* _e = *(void**)(arg0 + 0xA4);
Expand(_w, _e, _d);
SetMessage(_u, _e);
}
}
uint32_t _id = 0;
if (_t == 1 || _t == 2 || _t == 4 || _t == 5) {
int32_t _r = FUN_002cab0c(arg0, _d, &_id);
void* _m = *(void**)(arg0 + 0x9C);
if (_r != 0 && _m != (void*)0) {
void* _u2 = *(void**)(arg0 + 0x60);
void* _s = *(void**)(arg0 + 0xA8);
GetString(_m, _id, _s);
SetTextBoxPaneString(_u2, 0, 0x42, _s);
SetPaneVisible(_u2, 0, 0x47, 1);
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CA784
void GetString(void*, uint32_t, void*);
void Expand(void*, void*, void*);
void SetMessage(void*, void*);
void SetTextBoxPaneString(void*, uint32_t, uint32_t, void*);
void SetPaneVisible(void*, uint32_t, uint32_t, uint32_t);
int32_t FUN_002cab0c(uint8_t*, void*, uint32_t*);
extern "C" void YellowAuto_002ca784(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN3App4Tool10TalkWindow10SetMessageEjPN4gfl23str6StrBufE");
extern "C" void YellowAuto_002ca784(uint8_t* arg0, uint32_t arg1, void* arg2) {
void* _u = *(void**)(arg0 + 0x60);
void* _md = *(void**)(arg0 + 0x98);
void* _d = *(void**)(arg0 + 0xA0);
GetString(_md, arg1, _d);
void* _w = *(void**)(arg0 + 0xAC);
uint8_t _t = *(arg0 + 0xB0);
if (_t == 7) {
if (_w == (void*)0) {
SetTextBoxPaneString(_u, 0, 0x4C, _d);
} else {
void* _e = *(void**)(arg0 + 0xA4);
Expand(_w, _e, _d);
SetTextBoxPaneString(_u, 0, 0x4C, _e);
}
} else {
if (_w == (void*)0) {
SetMessage(_u, _d);
} else {
void* _e = *(void**)(arg0 + 0xA4);
Expand(_w, _e, _d);
SetMessage(_u, _e);
}
}
if (arg2 != (void*)0) {
void* _u3 = *(void**)(arg0 + 0x60);
SetTextBoxPaneString(_u3, 0, 0x42, arg2);
SetPaneVisible(_u3, 0, 0x47, 1);
} else {
uint32_t _id = 0;
if (_t == 1 || _t == 2 || _t == 4 || _t == 5) {
int32_t _r = FUN_002cab0c(arg0, _d, &_id);
void* _m = *(void**)(arg0 + 0x9C);
if (_r != 0 && _m != (void*)0) {
void* _u2 = *(void**)(arg0 + 0x60);
void* _s = *(void**)(arg0 + 0xA8);
GetString(_m, _id, _s);
SetTextBoxPaneString(_u2, 0, 0x42, _s);
SetPaneVisible(_u2, 0, 0x47, 1);
}
}
}
}
#endif
