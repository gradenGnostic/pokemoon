// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043691C
bool func_00492bb0(uint8_t*);
uint8_t func_004910dc(uint8_t*);
uint8_t func_00492908(uint8_t*);
void func_003196ac(uint8_t*, uint32_t);
void func_0031a018(uint8_t*, uint32_t);
extern "C" void YellowAuto_0043691c(uint8_t* arg0, const uint8_t* arg1, int32_t arg2) __asm__("_ZN8PokeTool9nakayoshi16UpdateFriendshipEPN3pml8pokepara9CoreParamEPKN8Savedata8MyStatusEi");
extern "C" void YellowAuto_0043691c(uint8_t* arg0, const uint8_t* arg1, int32_t arg2) {
bool _b = func_00492bb0(arg0);
uint32_t _taddr = *(uint32_t*)0x436a20;
uint32_t* _tbl = (uint32_t*)_taddr;
int32_t _delta = arg2;
if (_b) {
int32_t _cur = (int32_t)func_004910dc(arg0);
int32_t _i = 0;
int32_t _tier = 0;
while (true) {
if ((int32_t)_tbl[_i] <= _cur) break;
_i = _i + 1;
_tier = _tier + 1;
if (_i >= 7) break;
}
if (_delta > 0) {
_cur = _cur + _delta;
} else {
if (_tier < 7) {
if ((int32_t)_tbl[_tier] < _cur + _delta) {
_cur = _cur + _delta;
}
}
}
if (_cur > 255) {
_cur = 255;
} else {
if (_cur < 0) {
_cur = 0;
}
}
func_003196ac(arg0, (uint32_t)_cur);
} else {
int32_t _cur = (int32_t)func_00492908(arg0);
int32_t _i = 0;
int32_t _tier = 0;
while (true) {
if ((int32_t)_tbl[_i] <= _cur) break;
_i = _i + 1;
_tier = _tier + 1;
if (_i >= 7) break;
}
if (_delta > 0) {
_cur = _cur + _delta;
} else {
if (_tier < 7) {
if ((int32_t)_tbl[_tier] < _cur + _delta) {
_cur = _cur + _delta;
}
}
}
if (_cur > 255) {
_cur = 255;
} else {
if (_cur < 0) {
_cur = 0;
}
}
func_0031a018(arg0, (uint32_t)_cur);
}
return;
}
#endif
