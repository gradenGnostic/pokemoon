// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E7434
void* Func_0049780c(uint8_t* arg0, uint32_t arg1);
void Func_0041be7c(uint8_t* arg0, void* arg1, void* arg2, void* arg3, uint32_t arg4, void* arg5, uint32_t arg6);
extern "C" void YellowAuto_003e7434(uint8_t* arg0, void* arg1) __asm__("_ZN6System26NijiEdgeMapSceneRenderPath11SetResourceEPv");
extern "C" void YellowAuto_003e7434(uint8_t* arg0, void* arg1) {
uint8_t _acc[4];
*reinterpret_cast<uint32_t*>(_acc) = reinterpret_cast<uint32_t>(arg1);
void* _s0 = Func_0049780c(_acc, 3);
void* _s1 = Func_0049780c(_acc, 4);
void* _s2 = Func_0049780c(_acc, 5);
void* _t0 = Func_0049780c(_acc, 1);
void* _t1 = Func_0049780c(_acc, 2);
void* _d0 = Func_0049780c(_acc, 0);
void* _s[3];
_s[0] = _s0;
_s[1] = _s1;
_s[2] = _s2;
void* _t[2];
_t[0] = _t0;
_t[1] = _t1;
void* _alloc = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 164));
Func_0041be7c(arg0, _alloc, _d0, _s, 3, _t, 2);
}
#endif
