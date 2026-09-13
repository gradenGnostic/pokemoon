// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9CC4
void FUN_00350cd8(void*);
extern "C" void YellowAuto_002e9cc4(uint8_t* arg0) __asm__("_ZN9NetAppLib2UI16NetAppMenuCursor6UpdateEv");
extern "C" void YellowAuto_002e9cc4(uint8_t* arg0) {
if (*(uint32_t *)(*(uint32_t *)(arg0 + 8) + 16) != 0U)
  FUN_00350cd8((void *)*(uint32_t *)(*(uint32_t *)(arg0 + 8) + 16));
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004598F4
void operator_delete__(void*);
void DeleteLayoutWork(void*);
extern "C" void YellowAuto_004598f4(uint8_t* arg0) __asm__("_ZN9NetAppLib2UI16NetAppMenuCursor7DestroyEv");
extern "C" void YellowAuto_004598f4(uint8_t* arg0) {
if (*(uint32_t *)(arg0 + 20) != 0U)
  operator_delete__((void *)*(uint32_t *)(arg0 + 20));
if (*(uint32_t *)(arg0 + 20) != 0U)
  *(uint32_t *)(arg0 + 20) = 0U;
if (*(uint32_t *)(arg0 + 8) != 0U)
  DeleteLayoutWork((void *)*(uint32_t *)(arg0 + 8));
if (*(uint32_t *)(arg0 + 8) != 0U)
  ((void (*)(void *))(*(uint32_t *)(*(uint32_t *)(arg0 + 8)) + 4))((void *)*(uint32_t *)(arg0 + 8));
if (*(uint32_t *)(arg0 + 8) != 0U)
  *(uint32_t *)(arg0 + 8) = 0U;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459A64
void operator_delete__(void*);
void DeleteLayoutWork(void*);
extern "C" uint8_t* YellowAuto_00459a64(uint8_t* arg0) __asm__("_ZN9NetAppLib2UI16NetAppMenuCursorD1Ev");
extern "C" uint8_t* YellowAuto_00459a64(uint8_t* arg0) {
*(uint32_t *)arg0 = 0x00459AC8U;
if (*(uint32_t *)(arg0 + 20) != 0U)
  operator_delete__((void *)*(uint32_t *)(arg0 + 20));
if (*(uint32_t *)(arg0 + 20) != 0U)
  *(uint32_t *)(arg0 + 20) = 0U;
if (*(uint32_t *)(arg0 + 8) != 0U)
  DeleteLayoutWork((void *)*(uint32_t *)(arg0 + 8));
if (*(uint32_t *)(arg0 + 8) != 0U)
  ((void (*)(void *))(*(uint32_t *)(*(uint32_t *)(arg0 + 8)) + 4))((void *)*(uint32_t *)(arg0 + 8));
if (*(uint32_t *)(arg0 + 8) != 0U)
  *(uint32_t *)(arg0 + 8) = 0U;
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AA58C
uint32_t DeleteLayoutWork(uint8_t*);
extern "C" uint32_t YellowAuto_004aa58c(const uint8_t* arg0) __asm__("_ZNK9NetAppLib2UI16NetAppMenuCursor10CanDestroyEv");
extern "C" uint32_t YellowAuto_004aa58c(const uint8_t* arg0) {
if (*(uint8_t* const*)(arg0 + 8) == (uint8_t*)0) return 1; return DeleteLayoutWork(*(uint8_t* const*)(arg0 + 8));
}
#endif
