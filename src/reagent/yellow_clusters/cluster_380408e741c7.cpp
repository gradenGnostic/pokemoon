// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037400C
bool IsMEFinished(uint32_t);
extern "C" bool YellowAuto_0037400c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field10FieldSound11IsMEPlayingEj");
extern "C" bool YellowAuto_0037400c(uint8_t* arg0, uint32_t arg1) {
return !IsMEFinished(arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003741B4
void FUN_003aa4f0(uint32_t, int32_t, int32_t);
extern "C" void YellowAuto_003741b4(uint8_t* arg0, uint32_t arg1, int32_t arg2, int32_t arg3) __asm__("_ZN5Field10FieldSound13StartEventBGMEjN5Sound9FadeFrameES2_");
extern "C" void YellowAuto_003741b4(uint8_t* arg0, uint32_t arg1, int32_t arg2, int32_t arg3) {
FUN_003aa4f0(arg1, arg2, arg3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003741C4
void FUN_003aa4f0(uint32_t, int32_t, int32_t);
extern "C" void YellowAuto_003741c4(uint8_t* arg0, uint32_t arg1, int32_t arg2, int32_t arg3) __asm__("_ZN5Field10FieldSound14ChangeEventBGMEjN5Sound9FadeFrameES2_");
extern "C" void YellowAuto_003741c4(uint8_t* arg0, uint32_t arg1, int32_t arg2, int32_t arg3) {
FUN_003aa4f0(arg1, arg2, arg3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00374624
void FUN_003ade48(uint32_t);
extern "C" void YellowAuto_00374624(uint8_t* arg0) __asm__("_ZN5Field10FieldSound20ReleaseFootSoundDataEv");
extern "C" void YellowAuto_00374624(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x20) != 0) { FUN_003ade48(*(uint32_t*)(arg0 + 0x20)); *(uint32_t*)(arg0 + 0x20) = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00374028
void FUN_003ad9e4(uint32_t);
extern "C" void YellowAuto_00374028(uint8_t* arg0) __asm__("_ZN5Field10FieldSound11ResetReverbEv");
extern "C" void YellowAuto_00374028(uint8_t* arg0) {
if (*(arg0 + 0x10) != 0) { FUN_003ad9e4(0); *(arg0 + 0x10) = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003746CC
void* FUN_00373e7c(uint8_t*, uint32_t, uint32_t, uint32_t);
void FUN_003ad2a0(void*, uint32_t, uint32_t);
extern "C" void YellowAuto_003746cc(uint8_t* arg0) __asm__("_ZN5Field10FieldSound26ChangeFieldBGMByPlayerWalkEv");
extern "C" void YellowAuto_003746cc(uint8_t* arg0) {
*(void**)(arg0 + 0x18) = FUN_00373e7c(arg0, *(uint16_t*)(arg0 + 0x1C), 0, 0); FUN_003ad2a0(*(void**)(arg0 + 0x18), 60, 0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00374608
void ChangeBGMPlayerVolume(uint32_t, int32_t);
extern "C" void YellowAuto_00374608(uint8_t* arg0, uint32_t arg1, int32_t arg2) __asm__("_ZN5Field10FieldSound19SetTrainerFocusModeEfN5Sound9FadeFrameE");
extern "C" void YellowAuto_00374608(uint8_t* arg0, uint32_t arg1, int32_t arg2) {
ChangeBGMPlayerVolume(arg1, arg2); arg0[0x38] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00374678
void ChangeBGMPlayerVolume(uint32_t, int32_t);
extern const uint32_t DAT_00374698;
extern "C" void YellowAuto_00374678(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field10FieldSound21ResetTrainerFocusModeEN5Sound9FadeFrameE");
extern "C" void YellowAuto_00374678(uint8_t* arg0, int32_t arg1) {
ChangeBGMPlayerVolume(DAT_00374698, arg1); arg0[0x38] = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AD8B4
void* FUN_003ad9d8();
void FUN_003ace30(uint32_t, uint32_t, uint32_t, uint32_t);
void FUN_CriticalSection_Enter(void*);
void FUN_CriticalSection_Leave(void*);
extern "C" void YellowAuto_003ad8b4(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN5Field10FieldSound15ChangeBattleBGMEjN5Sound9FadeFrameES2_");
extern "C" void YellowAuto_003ad8b4(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
void* tmp = FUN_003ad9d8();
FUN_CriticalSection_Enter(tmp);
FUN_003ace30(arg1, arg2, arg3, 3u);
FUN_CriticalSection_Leave(tmp);
}
#endif
