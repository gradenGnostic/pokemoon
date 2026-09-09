// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F7EC0
int32_t IsButtonVisible(uint8_t*, int32_t);
void SetButtonActive(uint8_t*, int32_t, int32_t);
void SetButtonPassive(uint8_t*, int32_t, int32_t);
extern "C" void YellowAuto_002f7ec0(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool18InfoWindowBookType22SetCommandButtonActiveEb");
extern "C" void YellowAuto_002f7ec0(uint8_t* arg0, bool arg1) {
arg0[0xC5] = arg1;
uint8_t* _b = *(uint8_t**)(arg0 + 0x10);
int32_t _v = *(int32_t*)(arg0 + 0x60);
if (_v != 0 && _b != (uint8_t*)0 && IsButtonVisible(_b, 1) != 0) {
if (arg0[0xC5] != 0) { SetButtonActive(_b, 1, 1); return; }
SetButtonPassive(_b, 1, 1);
return;
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F8874
void GFLassert();
extern "C" void YellowAuto_002f8874(uint8_t* arg0, void* arg1, const uint32_t* arg2, int32_t arg3) __asm__("_ZN3app4tool18InfoWindowBookType9StartOpenEPNS0_26InfoWindowBookTypeListenerERKN4gfl24math7Vector3ENS1_8OpenTypeE");
extern "C" void YellowAuto_002f8874(uint8_t* arg0, void* arg1, const uint32_t* arg2, int32_t arg3) {
if (arg0[0xCC] != 0) { GFLassert(); return; }
*(uint8_t**)(arg0 + 0xA8) = (uint8_t*)arg1;
*(uint32_t*)(arg0 + 0xAC) = arg2[0];
*(uint32_t*)(arg0 + 0xB0) = arg2[1];
*(uint32_t*)(arg0 + 0xB4) = arg2[2];
arg0[0xD6] = (uint8_t)arg3;
*(int32_t*)(arg0 + 0xD8) = 0;
if (arg3 == 1) { *(int32_t*)(arg0 + 0xD8) = 8; }
if (arg0[0xC4] != 0 && *(uint32_t*)(arg0 + 0xBC) != 0) { uint32_t _l = *(uint32_t*)(arg0 + 0xBC); uint8_t* _p = *(uint8_t**)(arg0 + 0xB8); uint32_t _i = 0; while (_i < _l) { if (_p[_i * 16] == 0) { break; } _i = _i + 1; } }
*(uint32_t*)(arg0 + 0xC0) = 0;
arg0[0x6D] = 1;
uint8_t* _s = *(uint8_t**)(arg0 + 0xC8);
_s[8] = 1;
uint8_t* _q = *(uint8_t**)(_s + 4);
uint8_t* _t = *(uint8_t**)(_q + 0x10);
_t[0x25] = (_s[8] == 2 ? (uint8_t)1 : (uint8_t)0);
arg0[0xD4] = 1;
arg0[0x1B5] = 0;
return;
}
#endif
