// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001082D0
void FUN_001083cc(uint8_t*);
extern "C" int32_t YellowAuto_001082d0(uint8_t* arg0, bool arg1) __asm__("_ZN2nn2os10LightEvent10InitializeEb");
extern "C" int32_t YellowAuto_001082d0(uint8_t* arg0, bool arg1) {
FUN_001083cc(arg0 + 4);
int32_t v = *(int32_t*)arg0;
*(int32_t*)arg0 = arg1 ? -2 : -1;
return v;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00107590
void FUN_00108a20(uint8_t*, int32_t, int32_t);
void FUN_00108bf8(uint8_t*);
void FUN_00108448(uint8_t*);
extern "C" void YellowAuto_00107590(uint8_t* arg0) __asm__("_ZN2nn2os10LightEvent6SignalEv");
extern "C" void YellowAuto_00107590(uint8_t* arg0) {
int32_t v = *(int32_t*)arg0;
if (v == -1) {
*(int32_t*)arg0 = 0;
FUN_00108a20(arg0, 0, 1);
} else if (v == -2) {
FUN_00108bf8(arg0 + 4);
*(int32_t*)arg0 = 1;
FUN_00108a20(arg0, 0, -1);
FUN_00108448(arg0 + 4);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00108304
void FUN_00108a20(uint8_t*, int32_t, int32_t);
extern "C" void YellowAuto_00108304(uint8_t* arg0) __asm__("_ZN2nn2os10LightEvent4WaitEv");
extern "C" void YellowAuto_00108304(uint8_t* arg0) {
while (true) {
int32_t v = *(int32_t*)arg0;
if (v == -2) {
FUN_00108a20(arg0, 1, 0);
return;
}
if (v != -1) {
if (v == 0) {
int32_t w = *(int32_t*)arg0;
if (w != 0) {
FUN_00108a20(arg0, 1, 0);
continue;
}
*(int32_t*)arg0 = -1;
return;
} else if (v == 1) {
return;
}
}
FUN_00108a20(arg0, 1, 0);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001083E4
void FUN_00108bf8(uint8_t*);
uint8_t* FUN_00108448(uint8_t*);
extern "C" uint8_t* YellowAuto_001083e4(uint8_t* arg0) __asm__("_ZN2nn2os10LightEvent11ClearSignalEv");
extern "C" uint8_t* YellowAuto_001083e4(uint8_t* arg0) {
int32_t v = *(int32_t*)arg0;
if (v != 1) {
int32_t w = *(int32_t*)arg0;
if (w == 0) {
*(int32_t*)arg0 = -1;
}
return (uint8_t*)w;
}
FUN_00108bf8(arg0 + 4);
*(int32_t*)arg0 = -2;
return FUN_00108448(arg0 + 4);
}
#endif
