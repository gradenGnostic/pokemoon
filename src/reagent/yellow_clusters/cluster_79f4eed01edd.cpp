// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00333ADC
extern "C" void YellowAuto_00333adc(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl215renderingengine8renderer11DrawManager10AddDrawEnvEPNS0_10scenegraph8instance11DrawEnvNodeE");
extern "C" void YellowAuto_00333adc(uint8_t* arg0, void* arg1) {
uint8_t* e = *reinterpret_cast<uint8_t**>(arg0 + 0x54);
uint8_t* n = *reinterpret_cast<uint8_t**>(e + 8);
uint8_t* c = *reinterpret_cast<uint8_t**>(e);
if (c != 0) {
*reinterpret_cast<uint8_t**>(c) = 0;
}
uint8_t* d = *reinterpret_cast<uint8_t**>(e);
*reinterpret_cast<void**>(d) = arg1;
*reinterpret_cast<uint8_t**>(e + 8) = 0;
*reinterpret_cast<uint8_t**>(e + 4) = 0;
uint32_t s = *reinterpret_cast<uint32_t*>(arg0 + 0x5C);
*reinterpret_cast<uint32_t*>(e + 12) = s;
uint8_t* t = *reinterpret_cast<uint8_t**>(arg0 + 0x58);
if (t != 0) {
*reinterpret_cast<uint8_t**>(t + 4) = e;
*reinterpret_cast<uint8_t**>(e + 8) = t;
}
*reinterpret_cast<uint8_t**>(arg0 + 0x58) = e;
uint8_t* b = *reinterpret_cast<uint8_t**>(arg0 + 0x4C);
*reinterpret_cast<uint8_t**>(b + s * 4) = e;
*reinterpret_cast<uint8_t**>(arg0 + 0x54) = n;
*reinterpret_cast<uint32_t*>(arg0 + 0x5C) = s + 1;
if (n != 0) {
*reinterpret_cast<uint8_t**>(n + 4) = 0;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00333BB8
extern "C" void YellowAuto_00333bb8(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl215renderingengine8renderer11DrawManager13RemoveDrawEnvEPNS0_10scenegraph8instance11DrawEnvNodeE");
extern "C" void YellowAuto_00333bb8(uint8_t* arg0, void* arg1) {
uint8_t* cur = *reinterpret_cast<uint8_t**>(arg0 + 0x58);
while (cur != 0) {
uint8_t* nxt = *reinterpret_cast<uint8_t**>(cur + 8);
uint8_t* cell = *reinterpret_cast<uint8_t**>(cur);
void* val = *reinterpret_cast<void**>(cell);
if (val == arg1) {
uint8_t* head = *reinterpret_cast<uint8_t**>(arg0 + 0x58);
uint8_t* prv = *reinterpret_cast<uint8_t**>(cur + 4);
if (head == cur && prv == 0) {
*reinterpret_cast<uint8_t**>(arg0 + 0x58) = nxt;
if (nxt != 0) {
*reinterpret_cast<uint8_t**>(nxt + 4) = 0;
}
} else {
uint8_t* nx = *reinterpret_cast<uint8_t**>(cur + 8);
*reinterpret_cast<uint8_t**>(prv + 8) = nx;
if (nx != 0) {
*reinterpret_cast<uint8_t**>(nx + 4) = prv;
}
}
*reinterpret_cast<uint8_t**>(cur + 8) = 0;
*reinterpret_cast<uint8_t**>(cur + 4) = 0;
uint32_t idx = *reinterpret_cast<uint32_t*>(cur + 12);
uint8_t* fh = *reinterpret_cast<uint8_t**>(arg0 + 0x54);
if (fh != 0) {
*reinterpret_cast<uint8_t**>(fh + 4) = cur;
*reinterpret_cast<uint8_t**>(cur + 8) = fh;
}
*reinterpret_cast<uint8_t**>(arg0 + 0x54) = cur;
uint32_t sz = *reinterpret_cast<uint32_t*>(arg0 + 0x5C);
uint8_t* base = *reinterpret_cast<uint8_t**>(arg0 + 0x4C);
if (idx < sz - 1) {
uint32_t i = idx;
do {
uint8_t* mv = *reinterpret_cast<uint8_t**>(base + i * 4 + 4);
*reinterpret_cast<uint8_t**>(base + i * 4) = mv;
*reinterpret_cast<uint32_t*>(mv + 12) = i;
i = i + 1;
} while (i < sz - 1);
}
*reinterpret_cast<uint8_t**>(base + sz * 4 - 4) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x5C) = sz - 1;
}
cur = nxt;
}
}
#endif
