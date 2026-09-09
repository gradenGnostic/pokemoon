// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041882C
extern "C" void YellowAuto_0041882c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN7poke_3d8renderer15BloomRenderPath14SetDrawEnvNodeEPKN4gfl215renderingengine10scenegraph8instance11DrawEnvNodeE");
extern "C" void YellowAuto_0041882c(uint8_t* arg0, const uint8_t* arg1) {
*reinterpret_cast<const uint8_t**>(arg0 + 0x4) = arg1; if (*reinterpret_cast<uint8_t**>(arg0 + 0xC) != 0) *reinterpret_cast<const uint8_t**>(*reinterpret_cast<uint8_t**>(arg0 + 0xC) + 0x34) = arg1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00418840
void* OperatorNew_00105500(uint32_t, void*);
void* InitInner_0041AC78(void*);
void StartInner_00419CBC(void*);
void GFLassert_0035BE88();
extern "C" void YellowAuto_00418840(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, const void* arg6) __asm__("_ZN7poke_3d8renderer15BloomRenderPath16StartAsyncCreateEPN4gfl24heap11CtrHeapBaseES5_PNS2_3gfx12IGLAllocatorES8_PNS2_2fs16AsyncFileManagerERKNS1_11DescriptionE");
extern "C" void YellowAuto_00418840(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, const void* arg6) {
if (*(uint32_t*)(arg0 + 12) != 0) { GFLassert_0035BE88(); return; } void* _mem = OperatorNew_00105500(260, arg1); void* _inner = (void*)0; if (_mem != (void*)0) { _inner = InitInner_0041AC78(_mem); } *(void**)(arg0 + 12) = _inner; *(uint32_t*)((uint8_t*)_inner + 52) = *(uint32_t*)(arg0 + 4); *(uint32_t*)((uint8_t*)_inner + 56) = *(uint32_t*)(arg0 + 8); if (*(uint8_t*)((uint8_t*)_inner + 60) != 0) { GFLassert_0035BE88(); return; } *(void**)((uint8_t*)_inner + 4) = arg1; *(uint32_t*)((uint8_t*)_inner + 8) = arg2; *(uint32_t*)((uint8_t*)_inner + 12) = arg3; *(uint32_t*)((uint8_t*)_inner + 16) = arg4; *(uint32_t*)((uint8_t*)_inner + 20) = arg5; *(uint8_t**)((uint8_t*)_inner + 48) = arg0 + 16; *(uint32_t*)((uint8_t*)_inner + 24) = *(uint32_t*)((uint8_t*)arg6 + 0); *(uint32_t*)((uint8_t*)_inner + 28) = *(uint32_t*)((uint8_t*)arg6 + 4); *(uint32_t*)((uint8_t*)_inner + 32) = *(uint32_t*)((uint8_t*)arg6 + 8); *(uint32_t*)((uint8_t*)_inner + 36) = *(uint32_t*)((uint8_t*)arg6 + 12); *(uint32_t*)((uint8_t*)_inner + 40) = *(uint32_t*)((uint8_t*)arg6 + 16); *(uint32_t*)((uint8_t*)_inner + 44) = *(uint32_t*)((uint8_t*)arg6 + 20); StartInner_00419CBC(_inner); *(uint8_t*)((uint8_t*)_inner + 60) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041AFF8
void Sleep_0035EB44(uint32_t);
void PollInner_0041A970(void*);
extern "C" uint8_t* YellowAuto_0041aff8(uint8_t* arg0) __asm__("_ZN7poke_3d8renderer15BloomRenderPathD1Ev");
extern "C" uint8_t* YellowAuto_0041aff8(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x0041B090; if (*(uint32_t*)(arg0 + 12) == 0) { return arg0; } if (*(uint8_t*)(*(uint32_t*)(arg0 + 12) + 60) != 2) { uint32_t _limit = *(uint32_t*)0x0041B094; uint32_t _cnt = 0; uint8_t _st = 0; bool _cont = false; do { Sleep_0035EB44(1); if (*(uint32_t*)(arg0 + 12) != 0) { PollInner_0041A970((void*)*(uint32_t*)(arg0 + 12)); } if (*(uint32_t*)(arg0 + 12) == 0) { return arg0; } _st = *(uint8_t*)(*(uint32_t*)(arg0 + 12) + 60); _cont = (uint32_t)1 < (uint32_t)_st; if (_st != 2) { _cnt = _cnt + 1; _cont = _cnt <= _limit; } _cont = _cont && (_st != 2 && _limit != _cnt); } while (_cont); } ((void(*)(void*))*(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0 + 12)) + 4))((void*)*(uint32_t*)(arg0 + 12)); *(uint32_t*)(arg0 + 12) = 0; return arg0;
}
#endif
