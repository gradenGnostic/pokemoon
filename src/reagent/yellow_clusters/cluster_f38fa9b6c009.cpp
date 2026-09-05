// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354EB4
extern "C" void YellowAuto_00354eb4(void* arg0) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator18SetFinishMode_NoneEv");
extern "C" void YellowAuto_00354eb4(void* arg0) {
*(uint8_t *)(*(int *)(*(int *)(*(int *)(arg0 + 8) + 0x60) + 0x34) + 0x18) = 0; *(uint8_t *)(*(int *)(*(int *)(*(int *)(arg0 + 8) + 0x60) + 0x34) + 0x29) = 0; *(uint8_t *)(*(int *)(*(int *)(*(int *)(arg0 + 8) + 0x60) + 0x34) + 0x28) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D2384
void SetFinishMode(void* arg0, uint32_t arg1, uint8_t arg2);
extern "C" void YellowAuto_002d2384(void* arg0, uint8_t arg1) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator19SetFinishMode_TimerEh");
extern "C" void YellowAuto_002d2384(void* arg0, uint8_t arg1) {
SetFinishMode((void *)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60) + 0x34), 2u, arg1);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D23C8
void SetFinishMode(void* arg0, uint32_t arg1, uint8_t arg2);
extern "C" void YellowAuto_002d23c8(void* arg0, uint8_t arg1) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator30SetFinishMode_UserInputOrTimerEh");
extern "C" void YellowAuto_002d23c8(void* arg0, uint8_t arg1) {
SetFinishMode((void *)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60) + 0x34), 3u, arg1);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D20C8
void* GetTempStrBuf(void* arg0, uint32_t arg1);
void GetString(void* arg0, uint32_t arg1, void* arg2);
void SetMessage(void* arg0);
void SetTextboxPaneString(void* arg0, void* arg1, void* arg2);
void StartAnime(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
void StopAnime(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void* GetLayoutWork(void* arg0, uint32_t arg1);
void TimeIcon_StartAnime(void* arg0, uint32_t arg1, uint32_t arg2);
void Update2D(void* arg0);
extern "C" void YellowAuto_002d20c8(void* arg0, uint32_t arg1, bool arg2, bool arg3) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator11ShowMessageEjbb");
extern "C" void YellowAuto_002d20c8(void* arg0, uint32_t arg1, bool arg2, bool arg3) {
void* temp = GetTempStrBuf((void *)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60)), 0);
GetString(*(void **)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60) + 0x20), arg1, temp);
*(uint8_t *)(*(uint32_t *)((uint8_t *)arg0 + 0x44) + 0x44) = (*(uint8_t *)(*(uint32_t *)((uint8_t *)arg0 + 0x44) + 0x44) & 0xfeu) | (uint8_t)arg2;
*(uint8_t *)(*(uint32_t *)((uint8_t *)arg0 + 0x48) + 0x44) = ((uint8_t)arg2 ^ 1u) | (*(uint8_t *)(*(uint32_t *)((uint8_t *)arg0 + 0x48) + 0x44) & 0xfeu);
if (temp != 0) if (arg2 == 0) SetMessage((void *)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60))); else SetTextboxPaneString(*(void **)((uint8_t *)arg0 + 8), *(void **)((uint8_t *)arg0 + 0x44), temp);
if (*(uint32_t *)((uint8_t *)arg0 + 0x40) != 0) *(uint8_t *)(*(uint32_t *)((uint8_t *)arg0 + 0x40) + 0x44) = (*(uint8_t *)(*(uint32_t *)((uint8_t *)arg0 + 0x40) + 0x44) & 0xfeu) | 1u;
if (*(uint32_t *)((uint8_t *)arg0 + 0x4c) != 0) *(uint8_t *)(*(uint32_t *)((uint8_t *)arg0 + 0x4c) + 0x44) = (*(uint8_t *)(*(uint32_t *)((uint8_t *)arg0 + 0x4c) + 0x44) & 0xfeu) | (uint8_t)arg3;
if (arg3 != 0 && *(uint32_t *)((uint8_t *)arg0 + 0x18) != 0xffffffffu) StartAnime((void *)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60)), *(uint32_t *)((uint8_t *)arg0 + 0xc), *(uint32_t *)((uint8_t *)arg0 + 0x18), 1u, 1u);
if (arg3 != 0 && *(uint32_t *)((uint8_t *)arg0 + 0x18) != 0xffffffffu && *(uint32_t *)((uint8_t *)arg0 + 0x1c) != 0xffffffffu) StopAnime((void *)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60)), *(uint32_t *)((uint8_t *)arg0 + 0xc), *(uint32_t *)((uint8_t *)arg0 + 0x1c), 0u);
if (arg3 != 0 && *(uint32_t *)((uint8_t *)arg0 + 0x14) != 0xffffffffu) StopAnime((void *)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60)), *(uint32_t *)((uint8_t *)arg0 + 0xc), *(uint32_t *)((uint8_t *)arg0 + 0x14), 0u);
if (arg3 != 0 && *(uint32_t *)((uint8_t *)arg0 + 0x14) != 0xffffffffu) TimeIcon_StartAnime(GetLayoutWork((void *)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60)), *(uint32_t *)((uint8_t *)arg0 + 0xc)), *(uint32_t *)((uint8_t *)arg0 + 0x14), 1u);
*(uint8_t *)((uint8_t *)arg0 + 0x50) = 0;
*(uint8_t *)((uint8_t *)arg0 + 0x51) = 0;
Update2D((void *)(*(uint32_t *)(*(uint32_t *)((uint8_t *)arg0 + 8) + 0x60)));
return;
}
#endif
