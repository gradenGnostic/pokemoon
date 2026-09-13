// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049967C
void* FUN_00499f48(void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void* FUN_0049a1c0(void* arg0, uint32_t arg1);
extern void* DAT_0049a050;
extern "C" void* YellowAuto_0049967c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util13GetPaneHelper15GetBoundingPaneEj");
extern "C" void* YellowAuto_0049967c(uint8_t* arg0, uint32_t arg1) {
uint32_t v0 = *reinterpret_cast<uint32_t*>(arg0 + 12); if (v0 != 0) { void* v1 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 4)); uint32_t v2 = *reinterpret_cast<uint32_t*>(arg0 + 8); uint32_t v3 = *reinterpret_cast<uint32_t*>(arg0 + v0 * 4 + 12); return FUN_00499f48(v1, v3, arg1, v2); } void* v4 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 4)); void* v5 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(v4) + 4)); void* v6 = FUN_0049a1c0(v5, arg1); if (v6 != (void*)0) { uint32_t vtbl = *reinterpret_cast<uint32_t*>(v6); uint32_t vfnaddr = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(reinterpret_cast<void*>(vtbl)) + 8); void* (*vfn)(void*) = reinterpret_cast<void* (*)(void*)>(vfnaddr); void* v7 = vfn(v6); void* vlimit = DAT_0049a050; while (v7 != vlimit) { v7 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(v7)); if (v7 == (void*)0) { return (void*)0; } } } return v6;
}
#endif
