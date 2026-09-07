// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00327714
void FUN_0034f154(uint8_t*);
void* FUN_0034f2a8(uint32_t);
uint8_t* FUN_0032c164(uint8_t*);
void FUN_0034f1c8();
extern "C" uint8_t* YellowAuto_00327714(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8instance15InstanceCreator15CreateLightNodeEPNS_3gfx12IGLAllocatorE");
extern "C" uint8_t* YellowAuto_00327714(uint8_t* arg0) {
FUN_0034f154(arg0); uint8_t* a = (uint8_t*)FUN_0034f2a8((uint32_t)0x138); uint8_t* b = (uint8_t*)0; if (a != (uint8_t*)0) b = FUN_0032c164(a); FUN_0034f1c8(); return b;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003286C0
void FUN_0034f154(uint8_t*);
void* FUN_0034f2a8(uint32_t);
uint8_t* FUN_0032b068(uint8_t*, uint8_t*);
void FUN_003283f4(uint8_t*, uint8_t*, uint8_t*);
void FUN_00323b7c(uint8_t*);
void FUN_0034f1c8();
extern "C" uint8_t* YellowAuto_003286c0(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) __asm__("_ZN4gfl215renderingengine10scenegraph8instance15InstanceCreator23CreateModelInstanceNodeEPNS_3gfx12IGLAllocatorEPNS1_8resource12ResourceNodeEPNS1_7DagNodeE");
extern "C" uint8_t* YellowAuto_003286c0(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) {
FUN_0034f154(arg0); uint8_t* a = (uint8_t*)FUN_0034f2a8((uint32_t)0x140); uint8_t* b = (uint8_t*)0; if (a != (uint8_t*)0) b = FUN_0032b068(a, (uint8_t*)0); FUN_003283f4(b, arg1, arg2); FUN_00323b7c(b); FUN_0034f1c8(); return b;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00328640
void FUN_0034f154(uint8_t*);
void* FUN_0034f2a8(uint32_t);
uint8_t* FUN_0032b068(uint8_t*, uint8_t*);
void FUN_003282b4(uint8_t*, uint8_t*);
void FUN_00323b7c(uint8_t*);
void FUN_0034f1c8();
extern "C" uint8_t* YellowAuto_00328640(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance15InstanceCreator23CreateModelInstanceNodeEPNS_3gfx12IGLAllocatorEPNS1_8resource12ResourceNodeE");
extern "C" uint8_t* YellowAuto_00328640(uint8_t* arg0, uint8_t* arg1) {
FUN_0034f154(arg0); uint8_t* a = (uint8_t*)FUN_0034f2a8((uint32_t)0x140); uint8_t* b = (uint8_t*)0; if (a != (uint8_t*)0) b = FUN_0032b068(a, (uint8_t*)0); FUN_003282b4(b, arg1); FUN_00323b7c(b); FUN_0034f1c8(); return b;
}
#endif
