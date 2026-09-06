// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002408B8
extern "C" void YellowAuto_002408b8(uint8_t* arg0) __asm__("_ZN2nn3nex7qBuffer5clearEv");
extern "C" void YellowAuto_002408b8(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x1c) != 0)
  *(uint32_t*)(arg0 + 0x14) = *(uint32_t*)(arg0 + 0xc) + *(uint32_t*)(arg0 + 0x1c);
else
  *(uint32_t*)(arg0 + 0x14) = *(uint32_t*)(arg0 + 0xc);
*(uint32_t*)(arg0 + 0x10) = *(uint32_t*)(arg0 + 0x14);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002409AC
void FUN_002408e4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void __aeabi_memcpy(void* arg0, const void* arg1, uint32_t arg2);
extern "C" void YellowAuto_002409ac(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZN2nn3nex7qBuffer9push_backEPKhj");
extern "C" void YellowAuto_002409ac(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) {
if (arg2 == 0)
  return;
loop:
if (arg2 <= ((*(uint32_t*)(arg0 + 0x18) == *(uint32_t*)(arg0 + 0x14)) ? 0 : *(uint32_t*)(arg0 + 0x18) - *(uint32_t*)(arg0 + 0x14)))
  goto copy;
FUN_002408e4(arg0, ((*(uint32_t*)(arg0 + 0xc) == *(uint32_t*)(arg0 + 0x14)) ? 0 : *(uint32_t*)(arg0 + 0x14) - *(uint32_t*)(arg0 + 0xc)) + arg2, 0, 0);
goto loop;
copy:
__aeabi_memcpy((void*)(*(uint32_t*)(arg0 + 0x14)), (const void*)arg1, arg2);
*(uint32_t*)(arg0 + 0x14) = *(uint32_t*)(arg0 + 0x14) + arg2;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00240AE0
extern uint32_t DAT_00240b28;
void FUN_00240850(uint8_t* arg0, uint32_t arg1);
extern "C" uint8_t* YellowAuto_00240ae0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN2nn3nex7qBufferC1Ejj");
extern "C" uint8_t* YellowAuto_00240ae0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint32_t*)(arg0 + 4) = 0;
*(uint32_t*)(arg0 + 4) = 1;
*(uint32_t*)arg0 = DAT_00240b28;
*(uint8_t*)(arg0 + 8) = 0;
*(uint32_t*)(arg0 + 0xc) = 0;
*(uint32_t*)(arg0 + 0x10) = 0;
*(uint32_t*)(arg0 + 0x14) = 0;
*(uint32_t*)(arg0 + 0x18) = 0;
*(uint32_t*)(arg0 + 0x1c) = arg2;
FUN_00240850(arg0, arg1);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00240BA0
extern uint32_t DAT_00240bf0;
extern uint32_t DAT_00240bf4;
void FUN_002feaa8(void* arg0, uint32_t arg1);
extern "C" uint8_t* YellowAuto_00240ba0(uint8_t* arg0) __asm__("_ZN2nn3nex7qBufferD1Ev");
extern "C" uint8_t* YellowAuto_00240ba0(uint8_t* arg0) {
*(uint32_t*)arg0 = DAT_00240bf0;
if (*(uint32_t*)(arg0 + 0xc) != 0)
  if (*(uint32_t*)(*(uint32_t*)(arg0 + 0xc) - 8) == 0)
    FUN_002feaa8((void*)(*(uint32_t*)(arg0 + 0xc) - 8), 0);
  else
    ((void (*)(void))*(uint32_t*)(*(uint32_t*)(arg0 + 0xc) - 8))();
*(uint32_t*)arg0 = DAT_00240bf4;
*(uint32_t*)(arg0 + 4) = 0;
return arg0;
}
#endif
