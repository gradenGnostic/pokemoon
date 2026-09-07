// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E7518
void h_00340f18(uint8_t*);
void* h_0049780c(uint8_t*, int32_t);
void h_0041b1dc(uint8_t*, void*, void*, void**, int32_t, void*, void*, void**, int32_t, void*);
extern "C" void* YellowAuto_003e7518(uint8_t* arg0, void* arg1) __asm__("_ZN6System30NijiOutLinePostSceneRenderPath11SetResourceEPv");
extern "C" void* YellowAuto_003e7518(uint8_t* arg0, void* arg1) {
uint8_t _acc[20];
uint8_t* _a = _acc;
h_00340f18(_a);
*(uint32_t*)_a = (uint32_t)arg1;
void* _mdl = h_0049780c(_a, 0);
void* _sh0 = h_0049780c(_a, 2);
void* _tex0 = h_0049780c(_a, 1);
void* _mdlId = h_0049780c(_a, 3);
void* _shI0 = h_0049780c(_a, 5);
void* _shI1 = h_0049780c(_a, 6);
void* _shI2 = h_0049780c(_a, 7);
void* _texId = h_0049780c(_a, 4);
void* _shArr[1];
_shArr[0] = _sh0;
void* _shIdArr[3];
_shIdArr[0] = _shI0;
_shIdArr[1] = _shI1;
_shIdArr[2] = _shI2;
void* _alloc = (void*)*(uint32_t*)(arg0 + 36);
h_0041b1dc(arg0, _alloc, _mdl, _shArr, 1, _tex0, _mdlId, _shIdArr, 3, _texId);
return _a;
}
#endif
