// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00461030
uint8_t* UIView(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3);
extern "C" void YellowAuto_00461030(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib6System22NetApplicationViewBaseC2EPN3app4util4HeapE");
extern "C" void YellowAuto_00461030(uint8_t* arg0, void* arg1) {
arg0 = UIView(arg0, arg1, *(uint32_t *)((uint8_t *)arg1 + 0x14), *(uint32_t *)((uint8_t *)arg1 + 0x14)); *(uint32_t *)arg0 = 0x00461070; *(uint32_t *)(arg0 + 0x80) = 0; *(uint32_t *)(arg0 + 0x84) = 0; *(uint32_t *)(arg0 + 0x88) = 0; *(uint32_t *)(arg0 + 0x8c) = 0; *(uint32_t *)(arg0 + 0x90) = 0; *(uint32_t *)(arg0 + 0x94) = 0; *(uint32_t *)(arg0 + 0x98) = 0; *(uint32_t *)(arg0 + 0x9c) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004611D8
void Delete2D(uint8_t* arg0, int32_t arg1);
void DeleteGraphicsSystem(uint8_t* arg0);
void UIView(uint8_t* arg0);
extern "C" void YellowAuto_004611d8(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib6System22NetApplicationViewBaseD2Ev");
extern "C" void YellowAuto_004611d8(uint8_t* arg0, int32_t arg1) {
*(uint32_t *)arg0 = 0x00461204; Delete2D(arg0, arg1); DeleteGraphicsSystem(arg0); UIView(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460EF4
void StartAnime(void* arg0, int32_t arg1, uint32_t arg2, bool arg3, int32_t arg4);
void SetInputEnabled(uint8_t* arg0, int8_t arg1);
void Update(uint8_t* arg0);
extern "C" void YellowAuto_00460ef4(uint8_t* arg0, int32_t arg1, uint32_t arg2) __asm__("_ZN9NetAppLib6System22NetApplicationViewBase11setupLayoutEjj");
extern "C" void YellowAuto_00460ef4(uint8_t* arg0, int32_t arg1, uint32_t arg2) {
StartAnime(*(void **)(arg0 + 0x60), arg1, arg2, true, 1); arg1 = *(int8_t *)(arg0 + 0x2d); SetInputEnabled(arg0, 0); Update(arg0); SetInputEnabled(arg0, (int8_t)arg1);
}
#endif
