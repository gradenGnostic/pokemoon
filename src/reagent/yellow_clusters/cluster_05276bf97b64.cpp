// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00383F5C
void fn_38c6f0(void*);
void* fn_3f0bb8(uint8_t*);
void* fn_105500(uint32_t, void*);
void* fn_3f467c(void*, void*);
uint8_t* fn_3872c0(uint8_t*);
void fn_3f0c08(uint8_t*, uint8_t*);
void fn_38c7a8(uint8_t*, void*);
extern uint32_t d_384078;
extern "C" uint8_t* YellowAuto_00383f5c(uint8_t* arg0, uint8_t arg1) __asm__("_ZN5Field12EventMapJump17CallMapJumpEscapeEPN7GameSys11GameManagerENS_16EventMapJumpCore16EventMapJumpTypeE");
extern "C" uint8_t* YellowAuto_00383f5c(uint8_t* arg0, uint8_t arg1) {
uint8_t args[296]; fn_38c6f0(args); *(uint32_t*)(args + 0) = *(uint32_t*)(arg0 + 36); uint8_t* base = *(uint8_t**)(arg0 + 36); uint8_t* src = base + 168; if (*(int32_t*)(base + 264) != 0) { src = base + 5216; } *(uint16_t*)(args + 8) = *(uint16_t*)(src + 0); *(uint16_t*)(args + 10) = *(uint16_t*)(src + 2); *(uint32_t*)(args + 12) = *(uint32_t*)(src + 4); *(uint32_t*)(args + 16) = *(uint32_t*)(src + 8); *(uint32_t*)(args + 20) = *(uint32_t*)(src + 12); *(uint32_t*)(args + 24) = *(uint32_t*)(src + 16); *(uint32_t*)(args + 28) = *(uint32_t*)(src + 20); *(uint32_t*)(args + 32) = *(uint32_t*)(src + 24); *(uint32_t*)(args + 36) = *(uint32_t*)(src + 28); *(uint32_t*)(args + 40) = *(uint32_t*)(src + 32); *(uint16_t*)(args + 4) = *(uint16_t*)(*(uint8_t**)(arg0 + 44) + 124); *(uint8_t*)(args + 6) = arg1; *(uint8_t*)(args + 272) = 1; *(uint8_t*)(args + 280) = 2; uint8_t* evmgr = *(uint8_t**)(arg0 + 32); void* h1 = fn_3f0bb8(evmgr); uint8_t* mem = (uint8_t*)fn_105500(364, h1); uint8_t* ev = (uint8_t*)0; if (mem != (uint8_t*)0) { void* h2 = fn_3f0bb8(evmgr); ev = (uint8_t*)fn_3f467c(mem, h2); *(uint32_t*)ev = d_384078; *(uint32_t*)(ev + 24) = 0; *(uint32_t*)(ev + 28) = 0; fn_38c6f0(ev + 32); ev = fn_3872c0(ev + 316) - 316; } fn_3f0c08(evmgr, ev); fn_38c7a8(ev + 32, args); return ev;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00383DE8
void fn_38c6f0(void*);
uint32_t fn_49d3c4(uint8_t*, uint16_t);
void* fn_3f0bb8(uint8_t*);
void* fn_105500(uint32_t, void*);
void* fn_3f467c(void*, void*);
uint8_t* fn_3872c0(uint8_t*);
void fn_3f0c08(uint8_t*, uint8_t*);
void fn_38c7a8(uint8_t*, void*);
extern uint32_t d_383f58;
extern "C" uint8_t* YellowAuto_00383de8(uint8_t* arg0, uint16_t arg1, const void* arg2, uint8_t arg3, bool arg4, bool arg5) __asm__("_ZN5Field12EventMapJump16CreateMapJumpPosEPN7GameSys11GameManagerEtRKN4gfl24math7Vector3ENS_16EventMapJumpCore16EventMapJumpTypeEbb");
extern "C" uint8_t* YellowAuto_00383de8(uint8_t* arg0, uint16_t arg1, const void* arg2, uint8_t arg3, bool arg4, bool arg5) {
uint8_t args[296]; fn_38c6f0(args); *(uint32_t*)(args + 0) = *(uint32_t*)(arg0 + 36); uint8_t* base = *(uint8_t**)(arg0 + 36); uint8_t* zsrc = *(uint8_t**)(base + 84); uint32_t z = fn_49d3c4(zsrc, arg1); *(uint16_t*)(args + 8) = (uint16_t)z; *(uint16_t*)(args + 10) = arg1; *(uint32_t*)(args + 12) = *(const uint32_t*)arg2; *(uint32_t*)(args + 16) = *(const uint32_t*)((const uint8_t*)arg2 + 4); *(uint32_t*)(args + 20) = *(const uint32_t*)((const uint8_t*)arg2 + 8); *(uint16_t*)(args + 4) = *(uint16_t*)(*(uint8_t**)(arg0 + 44) + 124); *(uint8_t*)(args + 6) = arg3; *(uint8_t*)(args + 272) = (uint8_t)arg4; *(uint8_t*)(args + 280) = 1; uint8_t* evmgr = *(uint8_t**)(arg0 + 32); void* h1 = fn_3f0bb8(evmgr); uint8_t* mem = (uint8_t*)fn_105500(364, h1); uint8_t* ev = (uint8_t*)0; if (mem != (uint8_t*)0) { void* h2 = fn_3f0bb8(evmgr); ev = (uint8_t*)fn_3f467c(mem, h2); *(uint32_t*)ev = d_383f58; *(uint32_t*)(ev + 24) = 0; *(uint32_t*)(ev + 28) = 0; fn_38c6f0(ev + 32); ev = fn_3872c0(ev + 316) - 316; } if (arg5 != false) { fn_3f0c08(evmgr, ev); } fn_38c7a8(ev + 32, args); return ev;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003847BC
void fn_38c6f0(void*);
uint32_t fn_49d3c4(uint8_t*, uint16_t);
void* fn_3f0bb8(uint8_t*);
void* fn_105500(uint32_t, void*);
void* fn_3f467c(void*, void*);
uint8_t* fn_3872c0(uint8_t*);
void fn_3f0c08(uint8_t*, uint8_t*);
void fn_38c7a8(uint8_t*, void*);
extern uint32_t d_384948;
extern uint32_t d_38494c;
extern "C" uint8_t* YellowAuto_003847bc(uint8_t* arg0, uint16_t arg1, const void* arg2, uint8_t arg3, uint8_t arg4, bool arg5, bool arg6) __asm__("_ZN5Field12EventMapJump27CreateMapJumpOtherWorldTimeEPN7GameSys11GameManagerEtRKN4gfl24math7Vector3ENS1_9AlolaTime19AlolaOtherWorldTypeENS_16EventMapJumpCore16EventMapJumpTypeEbb");
extern "C" uint8_t* YellowAuto_003847bc(uint8_t* arg0, uint16_t arg1, const void* arg2, uint8_t arg3, uint8_t arg4, bool arg5, bool arg6) {
uint8_t args[296]; fn_38c6f0(args); *(uint32_t*)(args + 0) = *(uint32_t*)(arg0 + 36); uint8_t* base = *(uint8_t**)(arg0 + 36); uint8_t* zsrc = *(uint8_t**)(base + 84); uint32_t z = fn_49d3c4(zsrc, arg1); *(uint16_t*)(args + 8) = (uint16_t)z; *(uint16_t*)(args + 10) = arg1; *(uint32_t*)(args + 12) = *(const uint32_t*)arg2; *(uint32_t*)(args + 16) = *(const uint32_t*)((const uint8_t*)arg2 + 4); *(uint32_t*)(args + 20) = *(const uint32_t*)((const uint8_t*)arg2 + 8); *(uint16_t*)(args + 4) = *(uint16_t*)(*(uint8_t**)(arg0 + 44) + 124); *(uint8_t*)(args + 6) = arg4; *(uint8_t*)(args + 272) = (uint8_t)arg5; *(uint8_t*)(args + 280) = 0; uint8_t* evmgr = *(uint8_t**)(arg0 + 32); void* h1 = fn_3f0bb8(evmgr); uint8_t* mem = (uint8_t*)fn_105500(368, h1); uint8_t* ev = (uint8_t*)0; if (mem != (uint8_t*)0) { void* h2 = fn_3f0bb8(evmgr); ev = (uint8_t*)fn_3f467c(mem, h2); *(uint32_t*)ev = d_384948; *(uint32_t*)(ev + 24) = 0; *(uint32_t*)(ev + 28) = 0; fn_38c6f0(ev + 32); uint8_t* inner = fn_3872c0(ev + 316); ev = inner - 316; *(uint32_t*)ev = d_38494c; *(uint8_t*)(ev + 364) = 2; } if (arg6 != false) { fn_3f0c08(evmgr, ev); } fn_38c7a8(ev + 32, args); *(uint8_t*)(ev + 364) = arg3; return ev;
}
#endif
