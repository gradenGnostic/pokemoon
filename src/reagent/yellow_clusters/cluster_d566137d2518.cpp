// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00382EE0
void UnloadModel(void*, uint32_t);
extern "C" bool YellowAuto_00382ee0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field11FieldScript22ScriptMoveModelManager14UnloadResourceEi");
extern "C" bool YellowAuto_00382ee0(uint8_t* arg0, uint32_t arg1) {
return (*(uint32_t*)arg0 == arg1) ? (((int32_t)*(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 0x19c) < 0 || *(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 0x19c) == arg1) ? (*(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 0x19c) = 0xffffffffu) : ((int32_t)*(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 0x1a0) < 0 || *(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 0x1a0) == arg1) ? (*(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 0x1a0) = 0xffffffffu) : ((int32_t)*(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 0x1a4) < 0 || *(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 0x1a4) == arg1) ? (*(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 0x1a4) = 0xffffffffu) : (UnloadModel((void*)((uint8_t*)*(void**)(arg0 + 4) + 0x1a8), arg1), 0), *(uint32_t*)arg0 = 0xffffffffu, true) : false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00382F74
bool IsModelLoaded(const void*, uint32_t);
void LoadDynamicAsync(void*, int32_t, uint32_t);
extern "C" bool YellowAuto_00382f74(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field11FieldScript22ScriptMoveModelManager15LoadResourceReqEi");
extern "C" bool YellowAuto_00382f74(uint8_t* arg0, uint32_t arg1) {
return (*(uint32_t*)arg0 != arg1 && *(uint32_t*)arg0 == 0xffffffffu && !IsModelLoaded((const void*)((uint8_t*)*(void**)(arg0 + 4) + 0x1a8), arg1)) ? (LoadDynamicAsync(*(void**)(arg0 + 4), 2, arg1), *(uint32_t*)arg0 = arg1, true) : false;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00383010
void UnloadModel(uint8_t*, uint32_t);
extern "C" void YellowAuto_00383010(uint8_t* arg0) __asm__("_ZN5Field11FieldScript22ScriptMoveModelManager19UnloadResourceForceEv");
extern "C" void YellowAuto_00383010(uint8_t* arg0) {
if ((int32_t)(*(uint32_t*)arg0) != -1) {
uint32_t id = *(uint32_t*)arg0;
uint8_t* base = (uint8_t*)(*(uint32_t*)(arg0 + 4));
if ((int32_t)(*(uint32_t*)(base + 0x19C)) < 0 || *(uint32_t*)(base + 0x19C) != id) {
if ((int32_t)(*(uint32_t*)(base + 0x1A0)) < 0 || *(uint32_t*)(base + 0x1A0) != id) {
if ((int32_t)(*(uint32_t*)(base + 0x1A4)) < 0 || *(uint32_t*)(base + 0x1A4) != id) {
UnloadModel(base + 0x1A8, id);
} else {
*(uint32_t*)(base + 0x1A4) = 4294967295U;
}
} else {
*(uint32_t*)(base + 0x1A0) = 4294967295U;
}
} else {
*(uint32_t*)(base + 0x19C) = 4294967295U;
}
*(uint32_t*)arg0 = 4294967295U;
}
}
#endif
