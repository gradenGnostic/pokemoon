// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FCDF4
void FUN_003e67dc(uint8_t*, const uint16_t*);
void GFLassert(void);
extern "C" void YellowAuto_002fcdf4(const uint8_t* arg0, uint8_t* arg1) __asm__("_ZN3app4tool27AppToolTrainerIconRendering16ICON_OBJECT_DATA18ConvToMyStatusIconEPN8Savedata8MyStatus9ICON_DATAE");
extern "C" void YellowAuto_002fcdf4(const uint8_t* arg0, uint8_t* arg1) {
if (arg1 != 0) {
  *(uint8_t*)(arg1 + 0x11) = (uint8_t)*(const uint32_t*)(arg0 + 0x44);
  *(int8_t*)(arg1 + 4) = (int8_t)*(const int32_t*)(arg0 + 0x40);
  *(uint32_t*)(arg1 + 0x1c) = *(const uint32_t*)(arg0 + 0x58);
  *(uint32_t*)(arg1 + 0x14) = *(const uint32_t*)(arg0 + 0x4c);
  *(uint32_t*)(arg1 + 0x18) = *(const uint32_t*)(arg0 + 0x50);
  FUN_003e67dc(arg1, (const uint16_t*)(arg0 + 0x14));
  *(uint8_t*)(arg1 + 0x12) = *(const uint8_t*)(arg0 + 0x48);
  *(uint32_t*)(arg1 + 0x20) = *(const uint32_t*)(arg0 + 0x6c);
  return;
}
GFLassert();
return;
}
#endif
