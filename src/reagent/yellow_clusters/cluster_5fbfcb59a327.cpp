// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460D84
void helper0(void *);
extern "C" void YellowAuto_00460d84(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase7PreDrawEv");
extern "C" void YellowAuto_00460d84(uint8_t* arg0) {
for (uint32_t i = 0; i < *(uint32_t *)(arg0 + 0x44); ++i)
  helper0((void *)(*(uint8_t **)(arg0 + 0x18) + i * 0x138));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046077C
extern "C" void YellowAuto_0046077c(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase6ResumeEv");
extern "C" void YellowAuto_0046077c(uint8_t* arg0) {
uint8_t *obj = *(uint8_t **)(arg0 + 0x38);
*(uint8_t *)(arg0 + 0x48) = 0;
if (obj != 0)
  ((void (**)(uint8_t *))(*(void **)obj))[8](obj);
if (obj != 0)
  *(uint8_t *)(*(uint32_t *)(arg0 + 0x3c) + 0x24) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460DC4
extern "C" void YellowAuto_00460dc4(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase7SuspendEv");
extern "C" void YellowAuto_00460dc4(uint8_t* arg0) {
uint8_t *obj = *(uint8_t **)(arg0 + 0x38);
*(uint8_t *)(arg0 + 0x48) = 1;
if (obj != 0)
  ((void (**)(uint8_t *))(*(void **)obj))[7](obj);
if (obj != 0)
  *(uint8_t *)(*(uint32_t *)(arg0 + 0x3c) + 0x24) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460200
void helper0(void *, uint32_t);
void helper1(void *, uint32_t);
void helper2(void *, uint32_t);
extern "C" void YellowAuto_00460200(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib6System21ApplicationSystemBase4DrawEN4gfl23gfx12CtrDisplayNoE");
extern "C" void YellowAuto_00460200(uint8_t* arg0, uint32_t arg1) {
helper0(*(void **)(arg0 + 0x1c), arg1);
((void (**)(uint8_t *, uint32_t))(*(void **)arg0))[20](arg0, arg1);
if (*(void **)(arg0 + 0x28) != 0)
  helper1(*(void **)(arg0 + 0x28), arg1);
for (uint32_t i = 0; i < *(uint32_t *)(arg0 + 0x44); ++i)
  helper2((void *)(*(uint8_t **)(arg0 + 0x18) + i * 0x138), arg1);
}
#endif
