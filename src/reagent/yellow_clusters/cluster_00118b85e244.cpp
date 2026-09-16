// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FF88C
void sub_00306D74(uint32_t, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_002ff88c(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool8ItemIcon8FileOpenEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_002ff88c(uint8_t* arg0, void* arg1) {
sub_00306D74(61u, arg1, 0u, 255u); arg0[0x10] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FF8B0
void sub_00306E2C(uint32_t, void*);
extern "C" void YellowAuto_002ff8b0(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool8ItemIcon9FileCloseEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_002ff8b0(uint8_t* arg0, void* arg1) {
sub_00306E2C(61u, arg1); arg0[0x10] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FF840
void sub_002E8EF0(void*, uint32_t, void*, uint32_t);
void sub_002F983C(void*, uint32_t, void*, uint32_t, int32_t);
extern "C" void YellowAuto_002ff840(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, int32_t arg4) __asm__("_ZN3app4tool8ItemIcon18ReplaceReadTextureEjPN2nw3lyt7PictureEjj");
extern "C" void YellowAuto_002ff840(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, int32_t arg4) {
sub_002E8EF0(*(void**)(arg0 + 4), arg1, arg2, arg3); sub_002F983C(*(void**)(arg0 + 4), arg1, arg2, arg3, arg4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FF1F0
int32_t sub_002F9BA0(void*, void*, int32_t, uint32_t, uint32_t, uint32_t);
void sub_0035BE88(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002ff1f0(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN3app4tool8ItemIcon11LoadRequestEjj");
extern "C" void YellowAuto_002ff1f0(uint8_t* arg0, int32_t arg1, int32_t arg2) {
if (sub_002F9BA0(*(void**)(arg0 + 4), *(void**)(arg0 + 8), arg1, 61u, *(uint32_t*)(*(uint32_t*)0x002FF248 + arg2 * 4u), 1u) == 0) sub_0035BE88(0u, 0u, 0u, 0u);
}
#endif
