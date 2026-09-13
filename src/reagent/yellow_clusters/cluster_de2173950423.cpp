// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A918
extern "C" uint32_t YellowAuto_0049a918(const uint8_t* arg0) __asm__("_ZNK4gfl23str6StrWin12GetPauseTypeEv");
extern "C" uint32_t YellowAuto_0049a918(const uint8_t* arg0) {
return (arg0[0x2d] == 2 && arg0[0x3f] != 1) ? (((*reinterpret_cast<const int16_t*>(arg0 + 0x68)) == (int16_t)0xBE01 || arg0[0x22] < arg0[0x1e]) ? 1u : 2u) : 0u;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003552F0
void FUN_00354fbc(uint8_t*);
extern "C" void YellowAuto_003552f0(uint8_t* arg0) __asm__("_ZN4gfl23str6StrWin5ClearEv");
extern "C" void YellowAuto_003552f0(uint8_t* arg0) {
for (uint32_t arg1 = 0; arg1 < arg0[0x1e]; ++arg1) *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 0x10) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 4), *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 0x14) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 8), *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 0x18) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 0xC), *reinterpret_cast<uint8_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 0x66) = (uint8_t)arg1, *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68) + 0x1c) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 0x10), *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68) + 0x20) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 0x14), *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68) + 0x24) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68 + 0x18), *reinterpret_cast<uint8_t*>(*reinterpret_cast<uint8_t**>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68) + 0x44) = (uint8_t)((*reinterpret_cast<uint8_t*>(*reinterpret_cast<uint8_t**>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68) + 0x44) & 0xEF) | 0x10), (*reinterpret_cast<void (**)(uint8_t*, const void*, int32_t)>(*reinterpret_cast<void***>(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68) + 26))(*reinterpret_cast<uint8_t**>(arg0 + 4) + arg1 * 0x68, *reinterpret_cast<const void* const*>(0x003553d4), 0); arg0[0x22] = 0; arg0[0x25] = 0; FUN_00354fbc(arg0); (*reinterpret_cast<void (**)(uint8_t*)>(*reinterpret_cast<void***>(arg0) + 11))(arg0); return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354ED4
void GFLassert(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00354ed4(uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZN4gfl23str6StrWin13SetFinishModeENS1_10FinishTypeEh");
extern "C" void YellowAuto_00354ed4(uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
if (arg1 < 4) { arg0[0x18] = (uint8_t)arg1; arg0[0x29] = 0; arg0[0x28] = arg2; return; } GFLassert(0, 0, 0);
}
#endif
