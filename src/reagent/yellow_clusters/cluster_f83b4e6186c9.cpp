// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A03BC
void StopSE(uint32_t, uint32_t, int32_t);
void* GetInstance();
extern "C" void YellowAuto_003a03bc(uint8_t* arg0) __asm__("_ZN5Field9MoveModel20FieldMoveModelPlayer16RideOffMoveModelEv");
extern "C" void YellowAuto_003a03bc(uint8_t* arg0) {
uint8_t* _r0 = *(uint8_t**)(arg0 + 0x4A0);
uint8_t* _r1 = *(uint8_t**)(arg0 + 0x4A4);
if (_r0 != (uint8_t*)0 && _r1 != (uint8_t*)0) {
int32_t _k = *(int32_t*)(_r0 + 0x6C);
if (_k == 111 || _k == 139) {
*(int32_t*)(arg0 + 0x748) = _k;
}
(*(void (**)(uint8_t*, int32_t))(*(uint8_t**)_r0 + 0x78))(_r0, 2);
(*(void (**)(uint8_t*, uint8_t))(*(uint8_t**)arg0 + 0x8C))(arg0, *(uint8_t*)(arg0 + 0x4A8));
*(uint32_t*)(arg0 + 0xFC) = *(uint32_t*)(arg0 + 0x744);
uint8_t* _o0 = *(uint8_t**)(arg0 + 0x4A4);
uint8_t* _t0 = *(uint8_t**)(_r0 + 0xF8);
uint32_t _a0 = *(uint32_t*)(_t0 + 0x4);
(*(void (**)(uint8_t*, uint32_t))(*(uint8_t**)_o0 + 0x10))(_o0, _a0);
uint8_t* _o1 = *(uint8_t**)(_r0 + 0xF8);
int32_t _v0 = *(int32_t*)(arg0 + 0x744);
(*(void (**)(uint8_t*, int32_t, int32_t, int32_t, int32_t))(*(uint8_t**)_o1 + 0x34))(_o1, _v0, 1, 0, 31);
(*(void (**)(uint8_t*, int32_t))(*(uint8_t**)_o1 + 0x1C))(_o1, 31);
uint8_t* _o2 = *(uint8_t**)(arg0 + 0xF8);
(*(void (**)(uint8_t*, int32_t, int32_t, int32_t, int32_t))(*(uint8_t**)_o2 + 0x34))(_o2, _v0, 1, 0, 31);
(*(void (**)(uint8_t*, int32_t))(*(uint8_t**)_o2 + 0x1C))(_o2, 31);
(void)GetInstance();
}
*(uint32_t*)(arg0 + 0x4A0) = 0;
*(uint32_t*)(arg0 + 0x4A4) = 0;
*(uint8_t*)(arg0 + 0x4A8) = 0;
*(uint32_t*)(arg0 + 0x744) = 0;
StopSE(*(uint32_t*)0x3A073C, 0, -1);
StopSE(*(uint32_t*)0x3A0740, 0, -1);
(void)GetInstance();
}
#endif
