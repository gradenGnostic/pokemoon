// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D9C
extern "C" void* YellowAuto_00103d9c(uint32_t arg0, void* arg1) __asm__("_ZnwjPv");
extern "C" void* YellowAuto_00103d9c(uint32_t arg0, void* arg1) {
return arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FE6B0
extern "C" int32_t YellowAuto_002fe6b0(int32_t arg0) __asm__("_is_digit");
extern "C" int32_t YellowAuto_002fe6b0(int32_t arg0) {
return (uint32_t)(arg0 - 48) < 10 ? 1 : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00105500
void* FUN_00108864(void*, uint32_t);
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" void* YellowAuto_00105500(uint32_t arg0, void* arg1) __asm__("_ZnwjPN4gfl24heap11CtrHeapBaseE");
extern "C" void* YellowAuto_00105500(uint32_t arg0, void* arg1) {
void* v0 = FUN_00108864(arg1, arg0); if (v0 == (void*)0) GFLassertStop(0, 0, 0); return v0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004B4968
void* FUN_00108864(void*, uint32_t);
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" void* YellowAuto_004b4968(uint32_t arg0, void* arg1) __asm__("_ZnajPN4gfl24heap11CtrHeapBaseE");
extern "C" void* YellowAuto_004b4968(uint32_t arg0, void* arg1) {
void* v0 = FUN_00108864(arg1, arg0); if (v0 == (void*)0) GFLassertStop(0, 0, 0); return v0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00521600
uint8_t* FUN_004a2970(uint32_t, uint32_t);
uint32_t FUN_003c4eac(uint8_t*);
extern "C" uint32_t YellowAuto_00521600(const uint8_t* arg0, uint32_t arg1) __asm__("mwmomoflexDemuxerPopStreamFrame");
extern "C" uint32_t YellowAuto_00521600(const uint8_t* arg0, uint32_t arg1) {
if (arg0 == (const uint8_t*)0) return 1; uint8_t* v0 = FUN_004a2970(*(const uint32_t*)(arg0 + 4), arg1); uint32_t v1 = 0; uint32_t r0 = 0; if (v0 != (uint8_t*)0) v1 = *(const uint32_t*)(v0 + 16); if (v0 == (uint8_t*)0) return 14; if (v1 == 0) return 14; r0 = FUN_003c4eac((uint8_t*)v1); if (r0 == 0) return 20; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00155260
int32_t GetMonsNo(const uint8_t*);
extern "C" bool YellowAuto_00155260(const uint8_t* arg0) __asm__("_Z31REINFORCE_BATTLE_PARAM_IsEnableRK20ReinforceBattleParam");
extern "C" bool YellowAuto_00155260(const uint8_t* arg0) {
if (arg0[0] == 0) return false; for (uint32_t i = 0; i < 4; i++) if (*(arg0 + i * 12 + 4) != 0 && (const uint8_t*)(*(const uint32_t*)(arg0 + i * 12 + 12)) != (const uint8_t*)0 && GetMonsNo((const uint8_t*)(*(const uint32_t*)(arg0 + i * 12 + 12))) != 0) return true; return false;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00520E94
void Enter(void*);
void Leave(void*);
extern "C" uint32_t YellowAuto_00520e94(const uint8_t* arg0, uint32_t* arg1) __asm__("mwmomobiclipDecoderGetNbPushedFrame");
extern "C" uint32_t YellowAuto_00520e94(const uint8_t* arg0, uint32_t* arg1) {
if (arg0 == 0) return 0; Enter((void*)(*(const uint32_t*)0x520EC8)); *(uint32_t*)arg1 = *(const uint32_t*)(arg0 + 56); Leave((void*)(*(const uint32_t*)0x520EC8)); return 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00100F1C
typedef void (*fn_t)(void*);
extern "C" uint8_t* YellowAuto_00100f1c(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("__aeabi_vec_dtor");
extern "C" uint8_t* YellowAuto_00100f1c(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
if (arg3 != 0) { uint8_t* cur = arg0 + arg2 * arg3; do { cur -= arg2; ((fn_t)arg1)((void*)cur); } while (cur != arg0); } return arg0 - 8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00100050
typedef void (*fn_t)(void*);
extern "C" uint8_t* YellowAuto_00100050(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("__aeabi_vec_ctor_nocookie_nodtor");
extern "C" uint8_t* YellowAuto_00100050(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
if (arg1 != (void*)0) { uint8_t* cur = arg0; uint32_t n = arg3; while (n != 0) { ((fn_t)arg1)((void*)cur); cur += arg2; n -= 1; } } return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FE350
typedef void (*out_t)(uint32_t, uint32_t);
extern "C" void YellowAuto_002fe350(uint32_t* arg0) __asm__("_printf_pre_padding");
extern "C" void YellowAuto_002fe350(uint32_t* arg0) {
uint32_t flags = arg0[0]; uint32_t pad = ((flags >> 4) & 1u) != 0u ? 48u : 32u; if ((flags & 1u) != 0u) return; int32_t n = (int32_t)arg0[6]; for (int32_t i = 0; i < n; ++i) { ((out_t)arg0[1])(pad, arg0[2]); arg0[8] += 1u; }
}
#endif
