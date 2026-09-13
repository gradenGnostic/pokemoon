// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003898A8
extern "C" void YellowAuto_003898a8(uint8_t* arg0, uint8_t arg1, uint8_t arg2, const uint32_t* arg3, const uint32_t* arg4, uint32_t arg5, bool arg6) __asm__("_ZN5Field15EventAddPokemon12SetFadeParamEN4gfl24Fade4DISPENS2_9FADE_TYPEERKNS1_4math7Vector4ES8_jb");
extern "C" void YellowAuto_003898a8(uint8_t* arg0, uint8_t arg1, uint8_t arg2, const uint32_t* arg3, const uint32_t* arg4, uint32_t arg5, bool arg6) {
arg0[0x26] = arg1; arg0[0x27] = arg2; ((uint32_t*)arg0)[10] = arg3[0]; ((uint32_t*)arg0)[11] = arg3[1]; ((uint32_t*)arg0)[12] = arg3[2]; ((uint32_t*)arg0)[13] = arg3[3]; ((uint32_t*)arg0)[14] = arg4[0]; ((uint32_t*)arg0)[15] = arg4[1]; ((uint32_t*)arg0)[16] = arg4[2]; ((uint32_t*)arg0)[17] = arg4[3]; ((uint32_t*)arg0)[18] = arg5; arg0[0x4c] = arg6;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00389F1C
uint8_t* func_003f0bb8(uint8_t*);
void* func_00105500(uint32_t, uint8_t*);
uint8_t* func_0038a334(uint8_t*, uint8_t*);
void func_003f0c08(uint8_t*, uint8_t*);
uint8_t* func_00107374(uint32_t);
uint8_t* func_00317db8(uint8_t*, uint8_t*);
void func_00317d8c(uint8_t*, const uint8_t*);
extern "C" uint8_t* YellowAuto_00389f1c(uint8_t* arg0, const uint8_t* arg1, uint8_t arg2) __asm__("_ZN5Field15EventAddPokemon20CallAddPokemonFromPPEPN7GameSys11GameManagerERKN3pml8pokepara12PokemonParamENS_14AddPokemonModeE");
extern "C" uint8_t* YellowAuto_00389f1c(uint8_t* arg0, const uint8_t* arg1, uint8_t arg2) {
uint8_t* _mgr = *(uint8_t**)(arg0 + 32);
uint8_t* _heap0 = func_003f0bb8(_mgr);
uint8_t* _evt = (uint8_t*)func_00105500(120, _heap0);
if (_evt != (uint8_t*)0) {
uint8_t* _heap1 = func_003f0bb8(_mgr);
_evt = func_0038a334(_evt, _heap1);
}
func_003f0c08(_mgr, _evt);
uint8_t* _heapb = func_00107374(11);
*(uint8_t*)(_evt + 36) = (uint8_t)1;
*(uint32_t*)(_evt + 24) = (uint32_t)2;
*(uint32_t*)(_evt + 32) = (uint32_t)0;
*(uint8_t*)(_evt + 37) = arg2;
uint8_t* _mem = (uint8_t*)func_00105500(16, _heapb);
uint8_t* _pp = (uint8_t*)0;
if (_mem != (uint8_t*)0) {
_pp = func_00317db8(_mem, _heapb);
}
*(uint8_t**)(_evt + 116) = _pp;
func_00317d8c(_pp, arg1);
return _evt;
}
#endif
