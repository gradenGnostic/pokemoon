// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437A8C
int32_t GetLang();
void FUN_003bfbec(bool);
extern "C" void YellowAuto_00437a8c(void* arg0, bool arg1) __asm__("_ZN8Savedata10ConfigSave12SetKanjiModeEb");
extern "C" void YellowAuto_00437a8c(void* arg0, bool arg1) {
if (GetLang() != 1)
  return;
uint32_t value = *(uint32_t *)((uint8_t *)arg0 + 4) & 0xFFFFFF0Fu;
if (arg1)
  value |= 0x10u;
*(uint32_t *)((uint8_t *)arg0 + 4) = value;
FUN_003bfbec((bool)(value >> 4));
}
#endif
