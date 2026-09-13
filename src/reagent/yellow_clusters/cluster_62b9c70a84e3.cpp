// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038BA10
void* GetHeap(void*);
void* AllocEventMem(uint32_t, void*);
void* InitGameEvent(void*, void*);
void CallEvent(void*, void*);
extern "C" void YellowAuto_0038ba10(void* arg0, const uint32_t* arg1, const void* arg2) __asm__("_ZN5Field15EventBerryPoint19CallBerryPointEventEPN7GameSys16GameEventManagerEPKNS_20FieldBerryLottedDataEPKN4gfl24math7Vector3E");
extern "C" void YellowAuto_0038ba10(void* arg0, const uint32_t* arg1, const void* arg2) {
void* heap0 = GetHeap(arg0);
void* mem = AllocEventMem(60, heap0);
void* evt = (void*)0;
if (mem != (void*)0) {
void* heap1 = GetHeap(arg0);
void* base = InitGameEvent(mem, heap1);
evt = base;
((uint32_t*)evt)[0] = *(const uint32_t*)0x38BAB0;
((uint32_t*)evt)[6] = 0;
((uint32_t*)evt)[7] = 0;
((uint32_t*)evt)[8] = 0;
((uint32_t*)evt)[9] = 0;
((uint32_t*)evt)[10] = 0;
((uint32_t*)evt)[11] = 0;
((uint32_t*)evt)[12] = 0;
((uint32_t*)evt)[13] = 0;
((uint32_t*)evt)[14] = 0;
}
CallEvent(arg0, evt);
((uint32_t*)evt)[7] = arg1[0];
((uint32_t*)evt)[8] = arg1[1];
((uint32_t*)evt)[9] = arg1[2];
((uint32_t*)evt)[10] = arg1[3];
((uint32_t*)evt)[11] = arg1[4];
((uint32_t*)evt)[12] = arg1[5];
((uint32_t*)evt)[13] = arg1[6];
((const void**)evt)[6] = arg2;
return;
}
#endif
