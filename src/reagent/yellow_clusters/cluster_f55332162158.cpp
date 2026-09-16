// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003803F8
extern "C" void YellowAuto_003803f8(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) __asm__("_ZN5Field11FieldScript17FieldScriptSystem16SetReserveScriptEijjjj");
extern "C" void YellowAuto_003803f8(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) {
*(int32_t*)(arg0 + 104) = arg1; *(uint32_t*)(arg0 + 136) = arg2; *(uint32_t*)(arg0 + 140) = arg3; *(uint32_t*)(arg0 + 144) = arg4; *(uint32_t*)(arg0 + 148) = arg5;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00381440
extern "C" void YellowAuto_00381440(uint8_t* arg0) __asm__("_ZN5Field11FieldScript17FieldScriptSystem7SuspendEv");
extern "C" void YellowAuto_00381440(uint8_t* arg0) {
*(int32_t*)(*(uint8_t**)(arg0 + 80) + 88) = 12;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00381014
extern "C" void YellowAuto_00381014(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN5Field11FieldScript17FieldScriptSystem30SetTerrainBlockControlPositionERKN4gfl24math7Vector3E");
extern "C" void YellowAuto_00381014(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)(arg0 + 160) = 1; *(uint32_t*)(arg0 + 164) = arg1[0]; *(uint32_t*)(arg0 + 168) = arg1[1]; *(uint32_t*)(arg0 + 172) = arg1[2];
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00380D14
uint32_t FloatSubBits(uint32_t a, uint32_t b);
extern "C" void YellowAuto_00380d14(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) __asm__("_ZN5Field11FieldScript17FieldScriptSystem23CalcEventPositionOffsetERKN4gfl24math7Vector3E");
extern "C" void YellowAuto_00380d14(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) {
if (*(uint32_t*)(arg1 + 80) == 0) { *(uint32_t*)arg0 = *(const uint32_t*)arg2; *(uint32_t*)(arg0 + 4) = *(const uint32_t*)(arg2 + 4); *(uint32_t*)(arg0 + 8) = *(const uint32_t*)(arg2 + 8); return; } uint32_t tmp = *(uint32_t*)(arg1 + 80); uint32_t inner = *(uint32_t*)(tmp + 144); if (inner == 0) { *(uint32_t*)arg0 = *(const uint32_t*)arg2; *(uint32_t*)(arg0 + 4) = *(const uint32_t*)(arg2 + 4); *(uint32_t*)(arg0 + 8) = *(const uint32_t*)(arg2 + 8); return; } *(uint32_t*)arg0 = FloatSubBits(*(const uint32_t*)arg2, *(uint32_t*)(inner + 492)); *(uint32_t*)(arg0 + 4) = FloatSubBits(*(const uint32_t*)(arg2 + 4), *(uint32_t*)(inner + 496)); *(uint32_t*)(arg0 + 8) = FloatSubBits(*(const uint32_t*)(arg2 + 8), *(uint32_t*)(inner + 500)); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00380A64
uint32_t FloatAddBits(uint32_t a, uint32_t b);
extern "C" void* YellowAuto_00380a64(uint8_t* arg0, uint8_t* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN5Field11FieldScript17FieldScriptSystem22CalcEventPositionWorldEfff");
extern "C" void* YellowAuto_00380a64(uint8_t* arg0, uint8_t* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
if (*(uint32_t*)(arg1 + 80) == 0) { *(uint32_t*)arg0 = arg2; *(uint32_t*)(arg0 + 4) = arg3; *(uint32_t*)(arg0 + 8) = arg4; return (void*)0; } uint32_t tmp = *(uint32_t*)(arg1 + 80); uint32_t inner = *(uint32_t*)(tmp + 144); if (inner == 0) { *(uint32_t*)arg0 = arg2; *(uint32_t*)(arg0 + 4) = arg3; *(uint32_t*)(arg0 + 8) = arg4; return (void*)0; } *(uint32_t*)arg0 = FloatAddBits(arg2, *(uint32_t*)(inner + 492)); *(uint32_t*)(arg0 + 4) = FloatAddBits(arg3, *(uint32_t*)(inner + 496)); *(uint32_t*)(arg0 + 8) = FloatAddBits(arg4, *(uint32_t*)(inner + 500)); return (void*)(inner + 492);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038104C
void FUN_00381fc0(void*, void*, uint32_t, void*, int32_t);
extern "C" void YellowAuto_0038104c(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN5Field11FieldScript17FieldScriptSystem6CreateEPN4gfl24heap11CtrHeapBaseEPNS2_2fs16AsyncFileManagerE");
extern "C" void YellowAuto_0038104c(uint8_t* arg0, void* arg1, void* arg2) {
*(uint8_t*)(arg0 + 0x4C) = 0; FUN_00381fc0(*(void**)(arg0 + 0x28), arg2, *(uint32_t*)(arg0 + 8), *(void**)(arg0 + 4), 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037F6B4
extern "C" uint8_t* YellowAuto_0037f6b4() __asm__("_ZN5Field11FieldScript17FieldScriptSystem11GetInstanceEv");
extern "C" uint8_t* YellowAuto_0037f6b4() {
return *(uint8_t* const*)*(uint32_t const*)0x0037F6E4;
}
#endif
