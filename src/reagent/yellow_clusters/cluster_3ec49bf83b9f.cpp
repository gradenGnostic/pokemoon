// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9CCC
void FUN_00350cd8(void*);
extern "C" void YellowAuto_002e9ccc(uint8_t* arg0) __asm__("_ZN3app4tool10MenuCursor6UpdateEv");
extern "C" void YellowAuto_002e9ccc(uint8_t* arg0) {
void* v0 = *(void**)(arg0 + 16);
if (v0 != (void*)0) {
FUN_00350cd8(v0);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9CE0
void* GetPane(void*, uint32_t);
extern "C" void YellowAuto_002e9ce0(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN3app4tool10MenuCursor7SetSizeEPN2nw3lyt4PaneE");
extern "C" void YellowAuto_002e9ce0(uint8_t* arg0, uint8_t* arg1) {
if (*(void**)(arg0 + 16) != (void*)0) {
uint8_t* v0 = *(uint8_t**)(arg0 + 24);
float v1 = *(float*)(v0 + 16);
float v2 = *(float*)(arg1 + 60);
if (v2 < v1) {
v2 = v1;
}
void* v3 = GetPane(*(void**)(arg0 + 16), *(uint32_t*)(v0 + 4));
float v4 = *(float*)((uint8_t*)v3 + 64);
void* v5 = GetPane(*(void**)(arg0 + 16), *(uint32_t*)(v0 + 4));
*(float*)((uint8_t*)v5 + 60) = v2;
*(float*)((uint8_t*)v5 + 64) = v4;
*(uint8_t*)((uint8_t*)v5 + 68) = (uint8_t)((*(uint8_t*)((uint8_t*)v5 + 68) & 239) | 16);
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9B98
void FileOpenSync(uint32_t, void*, int32_t, int32_t);
void FileLoadSync(uint32_t, int32_t, void*, void*, int32_t, int32_t, int32_t, int32_t, int32_t);
void FileCloseSync(uint32_t);
extern "C" void YellowAuto_002e9b98(uint8_t* arg0) __asm__("_ZN3app4tool10MenuCursor16LoadResourceSyncEv");
extern "C" void YellowAuto_002e9b98(uint8_t* arg0) {
FileOpenSync(76, *(void**)(*(uint8_t**)(arg0 + 4) + 8), 0, 255);
FileLoadSync(76, 0, *(void**)(arg0 + 8), *(void**)(*(uint8_t**)(arg0 + 4) + 8), 1, 128, 255, 0, 0);
FileCloseSync(76);
*(arg0 + 32) = 1;
}
#endif
