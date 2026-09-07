// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFA38
bool IsKSJamo(uint16_t);
void CombineHangul(uint8_t*, uint16_t, uint16_t, uint16_t*, uint16_t*, uint16_t*);
extern "C" bool YellowAuto_003bfa38(uint8_t* arg0, uint16_t arg1, uint16_t* arg2, bool arg3) __asm__("_ZN5print14HangulComposer9InputCodeEwPwb");
extern "C" bool YellowAuto_003bfa38(uint8_t* arg0, uint16_t arg1, uint16_t* arg2, bool arg3) {
(void)*(uint32_t*)arg0;
(void)IsKSJamo(arg1);
uint16_t _idx = *(uint16_t*)(arg0 + 0x1C);
if (_idx == 0) {
*(uint16_t*)(arg0 + 0x04) = arg1;
*(uint16_t*)(arg0 + 0x10) = arg1;
*(uint16_t*)(arg0 + 0x1C) = 1;
*arg2 = 0;
return true;
}
uint16_t _prev = *(uint16_t*)(arg0 + _idx * 2 + 2);
uint16_t _new1 = 0;
uint16_t _new2 = 0;
uint16_t _deprived = 0;
CombineHangul(arg0, _prev, arg1, &_new1, &_new2, &_deprived);
if (_new2 == 0) {
uint16_t _cur = *(uint16_t*)(arg0 + 0x1C);
*(uint16_t*)(arg0 + _cur * 2 + 0x04) = _new1;
*(uint16_t*)(arg0 + _cur * 2 + 0x10) = arg1;
*(uint16_t*)(arg0 + 0x1C) = (uint16_t)(_cur + 1);
*arg2 = 0;
return true;
}
if (arg3) {
*arg2 = 0;
return false;
}
if (_deprived == 0) {
*(uint16_t*)(arg0 + 0x04) = _new2;
*(uint16_t*)(arg0 + 0x10) = arg1;
*(uint16_t*)(arg0 + 0x1C) = 1;
} else {
*(uint16_t*)(arg0 + 0x04) = _deprived;
*(uint16_t*)(arg0 + 0x10) = _deprived;
*(uint16_t*)(arg0 + 0x06) = _new2;
*(uint16_t*)(arg0 + 0x12) = arg1;
*(uint16_t*)(arg0 + 0x1C) = 2;
}
*arg2 = _new1;
return true;
}
#endif
