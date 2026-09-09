// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F8E34
int32_t GetLayoutWork(void*, int32_t);
void* GetInstance(void);
extern "C" bool YellowAuto_002f8e34(uint8_t* arg0, const uint32_t* arg1, void* arg2) __asm__("_ZN3app4tool19CommonMessageObject8InitFuncERKNS1_10INIT_PARAMEPN4gfl24heap11CtrHeapBaseE");
extern "C" bool YellowAuto_002f8e34(uint8_t* arg0, const uint32_t* arg1, void* arg2) {
((uint32_t*)arg0)[0] = arg1[0];
((uint32_t*)arg0)[1] = arg1[1];
((uint32_t*)arg0)[2] = arg1[2];
((uint32_t*)arg0)[3] = arg1[3];
((uint32_t*)arg0)[4] = arg1[4];
((uint32_t*)arg0)[5] = arg1[5];
((uint32_t*)arg0)[6] = arg1[6];
((uint32_t*)arg0)[7] = arg1[7];
((uint32_t*)arg0)[8] = arg1[8];
if (arg1[4] != 0 && arg1[4] < 3u && GetLayoutWork(*(void**)arg0, (int32_t)arg1[1]) != 0) GetInstance();
return 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F8B14
void SetPaneVisible(void*, int32_t, bool);
void StopAnime(void*, int32_t, uint32_t, bool);
void StartAnime(void*, int32_t, uint32_t, bool, bool);
extern "C" void YellowAuto_002f8b14(uint8_t* arg0) __asm__("_ZN3app4tool19CommonMessageObject11HideMessageEv");
extern "C" void YellowAuto_002f8b14(uint8_t* arg0) {
if (arg0[0x28] == 1) { if (*(int32_t*)(arg0 + 0x18) == 0xFFFF) { SetPaneVisible(*(void**)(arg0 + 0x0), *(int32_t*)(arg0 + 0x20), false); } else { StopAnime(*(void**)(arg0 + 0x0), *(int32_t*)(arg0 + 0x4), *(uint32_t*)(arg0 + 0x14), false); StopAnime(*(void**)(arg0 + 0x0), *(int32_t*)(arg0 + 0x4), *(uint32_t*)(arg0 + 0x18), false); StartAnime(*(void**)(arg0 + 0x0), *(int32_t*)(arg0 + 0x4), *(uint32_t*)(arg0 + 0x18), true, true); } arg0[0x28] = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F8B90
void GFLassert(uint32_t, uint32_t, uint32_t);
void SetPaneVisible(void*, int32_t, bool);
void StopAnime(void*, int32_t, uint32_t, bool);
void StartAnime(void*, int32_t, uint32_t, bool, bool);
extern "C" void YellowAuto_002f8b90(uint8_t* arg0, void* arg1, bool arg2) __asm__("_ZN3app4tool19CommonMessageObject11ShowMessageERN4gfl23str6StrBufEb");
extern "C" void YellowAuto_002f8b90(uint8_t* arg0, void* arg1, bool arg2) {
if (*(void**)(arg0 + 0x24) == 0) { GFLassert(0, 0, 0); return; } ((void(*)(void*, void*))(*(void**)((uint8_t*)(*(void**)(*(void**)(arg0 + 0x24))) + 0x18)))(*(void**)(arg0 + 0x24), arg1); if (arg0[0x28] == 0) { if (*(int32_t*)(arg0 + 0x14) == 0xFFFF) { SetPaneVisible(*(void**)(arg0 + 0x0), *(int32_t*)(arg0 + 0x20), true); } else { StopAnime(*(void**)(arg0 + 0x0), *(int32_t*)(arg0 + 0x4), *(uint32_t*)(arg0 + 0x18), false); StopAnime(*(void**)(arg0 + 0x0), *(int32_t*)(arg0 + 0x4), *(uint32_t*)(arg0 + 0x14), false); StartAnime(*(void**)(arg0 + 0x0), *(int32_t*)(arg0 + 0x4), *(uint32_t*)(arg0 + 0x14), true, true); } arg0[0x28] = 1; } arg0[0x29] = arg2; arg0[0x2A] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F8DF4
void Clear(void*);
extern "C" uint32_t YellowAuto_002f8df4(uint8_t* arg0) __asm__("_ZN3app4tool19CommonMessageObject7EndFuncEv");
extern "C" uint32_t YellowAuto_002f8df4(uint8_t* arg0) {
if (*(void**)(arg0 + 0x24) != 0) { Clear(*(void**)(arg0 + 0x24)); if (*(void**)(arg0 + 0x24) != 0) { ((void(*)(void*))(*(void**)((uint8_t*)(*(void**)(*(void**)(arg0 + 0x24))) + 0x4)))(*(void**)(arg0 + 0x24)); *(void**)(arg0 + 0x24) = 0; } } return 1;
}
#endif
