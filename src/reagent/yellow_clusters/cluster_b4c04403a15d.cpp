// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039CDFC
extern "C" void YellowAuto_0039cdfc(uint8_t* arg0) __asm__("_ZN5Field9MoveModel14FieldMoveModel15ReSetParentNodeEv");
extern "C" void YellowAuto_0039cdfc(uint8_t* arg0) {
uint32_t v0 = *(uint32_t*)(arg0 + 0xF4); if (v0 != 0) { uint32_t vt = *(uint32_t*)v0; uint32_t fn = *(uint32_t*)(vt + 0x10); ((void (*)(void*, uint32_t))fn)((void*)v0, *(uint32_t*)(*(uint32_t*)(arg0 + 0xF8) + 4)); *(uint32_t*)(arg0 + 0xF4) = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A60FC
extern "C" void YellowAuto_003a60fc(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field9MoveModel14FieldMoveModel18ClearActionCommandEi");
extern "C" void YellowAuto_003a60fc(uint8_t* arg0, int32_t arg1) {
if (arg1 != 0) { uint32_t vt = *(uint32_t*)arg0; uint32_t fn = *(uint32_t*)(vt + 0x7C); ((void (*)(void*))fn)((void*)arg0); } uint8_t* w = arg0 + 0x1E8; *(w + 0x4) = 0; *(uint32_t*)(w + 0x8) = 0; uint32_t p = *(uint32_t*)w; *(uint32_t*)(p + 0xE0) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A5FD8
extern "C" void YellowAuto_003a5fd8(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field9MoveModel14FieldMoveModel16SetActionCommandENS0_20FieldActionCommandIdE");
extern "C" void YellowAuto_003a5fd8(uint8_t* arg0, int32_t arg1) {
uint32_t vt = *(uint32_t*)arg0; uint32_t fn = *(uint32_t*)(vt + 0x7C); ((void (*)(void*))fn)((void*)arg0); uint8_t* w = arg0 + 0x1E8; *(w + 0x4) = arg1; *(uint32_t*)(w + 0x8) = 0; uint32_t p = *(uint32_t*)w; *(uint32_t*)(p + 0xE0) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A63D8
extern "C" void YellowAuto_003a63d8(uint8_t* arg0, int32_t arg1, uint32_t arg2, int32_t arg3) __asm__("_ZN5Field9MoveModel14FieldMoveModel39SetActionCommandStepMoveWithoutStartEndENS0_20FieldActionCommandIdEji");
extern "C" void YellowAuto_003a63d8(uint8_t* arg0, int32_t arg1, uint32_t arg2, int32_t arg3) {
uint32_t vt = *(uint32_t*)arg0; uint32_t fn = *(uint32_t*)(vt + 0x7C); ((void (*)(void*))fn)((void*)arg0); uint8_t* w = arg0 + 0x1E8; *(w + 0x4) = arg1; *(uint32_t*)(w + 0x8) = 0; *(uint32_t*)(w + 0x14) = arg2; *(uint32_t*)(w + 0x18) = arg3; uint32_t p = *(uint32_t*)w; *(uint32_t*)(p + 0xE0) = 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039DD30
void FUN_003a6314(uint8_t*, uint8_t, uint32_t*, uint16_t*, uint16_t*, uint16_t*);
extern "C" void YellowAuto_0039dd30(uint8_t* arg0, uint8_t arg1, uint32_t* arg2, uint16_t* arg3, uint16_t* arg4, uint16_t* arg5) __asm__("_ZN5Field9MoveModel14FieldMoveModel34SetActionCommandContinuousPlayBackENS0_20FieldActionCommandIdEPjPsS4_S4_");
extern "C" void YellowAuto_0039dd30(uint8_t* arg0, uint8_t arg1, uint32_t* arg2, uint16_t* arg3, uint16_t* arg4, uint16_t* arg5) {
((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x7C)))(arg0); FUN_003a6314(arg0 + 0x1E8, arg1, arg2, arg3, arg4, arg5);
}
#endif
