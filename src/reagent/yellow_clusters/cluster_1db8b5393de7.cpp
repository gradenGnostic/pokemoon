// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025E704
void SetMixParam(uint8_t* arg0, const uint32_t* arg1);
extern "C" void YellowAuto_0025e704(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN2nn3snd3CTR5Voice11SetMixParamERKNS1_8MixParamE");
extern "C" void YellowAuto_0025e704(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)(arg0 + 0x34) = arg1[0];
*(uint32_t*)(arg0 + 0x38) = arg1[1];
*(uint32_t*)(arg0 + 0x3c) = arg1[2];
*(uint32_t*)(arg0 + 0x40) = arg1[3];
*(uint32_t*)(arg0 + 0x44) = arg1[4];
*(uint32_t*)(arg0 + 0x48) = arg1[5];
*(uint32_t*)(arg0 + 0x4c) = arg1[6];
*(uint32_t*)(arg0 + 0x50) = arg1[7];
*(uint32_t*)(arg0 + 0x54) = arg1[8];
*(uint32_t*)(arg0 + 0x58) = arg1[9];
*(uint32_t*)(arg0 + 0x5c) = arg1[10];
*(uint32_t*)(arg0 + 0x60) = arg1[11];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x38) = arg1[0];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x3c) = arg1[1];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x40) = arg1[2];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x44) = arg1[3];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x48) = arg1[4];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x4c) = arg1[5];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x50) = arg1[6];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x54) = arg1[7];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x58) = arg1[8];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x5c) = arg1[9];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x60) = arg1[10];
*(uint32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x64) = arg1[11];
*(uint16_t*)(*(uint32_t*)(arg0 + 0x68) + 0x6c) = (uint16_t)(*(uint16_t*)(*(uint32_t*)(arg0 + 0x68) + 0x6c) | 1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025ECF8
void SetSampleRate(uint8_t* arg0, int32_t arg1);
extern "C" void YellowAuto_0025ecf8(uint8_t* arg0, int32_t arg1) __asm__("_ZN2nn3snd3CTR5Voice13SetSampleRateEi");
extern "C" void YellowAuto_0025ecf8(uint8_t* arg0, int32_t arg1) {
*(int32_t*)(arg0 + 0x18) = arg1 < 0 ? 0 : arg1;
*(int32_t*)(*(uint32_t*)(arg0 + 0x68) + 0x20) = arg1 < 0 ? 0 : arg1;
*(uint16_t*)(*(uint32_t*)(arg0 + 0x68) + 0x6c) = (uint16_t)(*(uint16_t*)(*(uint32_t*)(arg0 + 0x68) + 0x6c) | 2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025EF30
void SetChannelCount(uint8_t* arg0, int32_t arg1);
extern "C" void YellowAuto_0025ef30(uint8_t* arg0, int32_t arg1) __asm__("_ZN2nn3snd3CTR5Voice15SetChannelCountEi");
extern "C" void YellowAuto_0025ef30(uint8_t* arg0, int32_t arg1) {
*(uint16_t*)(*(uint32_t*)(arg0 + 0x68) + 0x1e) = (uint16_t)((arg1 & 3) | (*(uint16_t*)(*(uint32_t*)(arg0 + 0x68) + 0x1e) & 0xfffc));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025EF50
void SetSampleFormat(uint8_t* arg0, int32_t arg1);
extern "C" void YellowAuto_0025ef50(uint8_t* arg0, int32_t arg1) __asm__("_ZN2nn3snd3CTR5Voice15SetSampleFormatENS1_12SampleFormatE");
extern "C" void YellowAuto_0025ef50(uint8_t* arg0, int32_t arg1) {
*(uint16_t*)(*(uint32_t*)(arg0 + 0x68) + 0x1e) = (uint16_t)(((arg1 & 3) << 2) | (*(uint16_t*)(*(uint32_t*)(arg0 + 0x68) + 0x1e) & 0xfff3));
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025EF74
void Enter(uint8_t*);
void Leave(uint8_t*);
extern "C" void YellowAuto_0025ef74(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN2nn3snd3CTR5Voice16AppendWaveBufferEPNS1_10WaveBufferE");
extern "C" void YellowAuto_0025ef74(uint8_t* arg0, uint8_t* arg1) {
if (*(uint32_t*)(arg1 + 4) == 0) {
*(arg1 + 0x11) = 3;
return;
}
*(uint32_t*)(arg1 + 0x14) = 0;
*(arg1 + 0x11) = 1;
uint8_t* v0 = *(uint8_t**)(arg0 + 0x68);
Enter(v0 + 0x70);
uint8_t* q = *(uint8_t**)(v0 + 0x30);
if (q == (uint8_t*)0) {
*(uint8_t**)(v0 + 0x30) = arg1;
} else {
while (*(uint8_t**)(q + 0x14) != (uint8_t*)0) {
q = *(uint8_t**)(q + 0x14);
}
*(uint8_t**)(q + 0x14) = arg1;
}
uint16_t c = *(uint16_t*)(v0 + 6);
if (c == 0) {
c = 1;
*(uint16_t*)(v0 + 6) = 1;
}
*(uint16_t*)(arg1 + 0x12) = c;
*(uint16_t*)(v0 + 6) = (uint16_t)(c + 1);
Leave(v0 + 0x70);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025F2A8
extern "C" void YellowAuto_0025f2a8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN2nn3snd3CTR5Voice9SetVolumeEf");
extern "C" void YellowAuto_0025f2a8(uint8_t* arg0, uint32_t arg1) {
*(uint32_t *)(arg0 + 100) = arg1; *(uint32_t *)((uint8_t *)(*(uint32_t *)(arg0 + 104)) + 104) = arg1; *(uint16_t *)((uint8_t *)(*(uint32_t *)(arg0 + 104)) + 108) = (uint16_t)(*(uint16_t *)((uint8_t *)(*(uint32_t *)(arg0 + 104)) + 108) | 1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025F210
void FUN_0025f080(uint8_t*);
extern "C" uint8_t* YellowAuto_0025f210(uint8_t* arg0, int32_t arg1) __asm__("_ZN2nn3snd3CTR5Voice8SetStateENS2_5StateE");
extern "C" uint8_t* YellowAuto_0025f210(uint8_t* arg0, int32_t arg1) {
*((uint8_t*)(arg0 + 4)) = (uint8_t)arg1; if (arg1 == 1) FUN_0025f080(*((uint8_t**)(arg0 + 104))); return *((uint8_t**)(arg0 + 104));
}
#endif
