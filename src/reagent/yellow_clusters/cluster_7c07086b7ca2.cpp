// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00169534
extern "C" void YellowAuto_00169534(void* arg0) __asm__("_ZN2nn2fs3CTR6MPCore6detail14UserFileSystem9CloseFileEPv");
extern "C" void YellowAuto_00169534(void* arg0) {
if (arg0 != 0) (*(void (**)())(*((uint32_t**)arg0) + 12))();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00168F10
void* FUN_0053dc04(const uint16_t*);
uint32_t FUN_00100ea4(const uint16_t*);
extern "C" void YellowAuto_00168f10(void* arg0, const uint16_t* arg1, uint32_t arg2) __asm__("_ZN2nn2fs3CTR6MPCore6detail14UserFileSystem11TryOpenFileEPPvPKwj");
extern "C" void YellowAuto_00168f10(void* arg0, const uint16_t* arg1, uint32_t arg2) {
void* local_2c = FUN_0053dc04(arg1); if (local_2c == 0) return; uint32_t local_20[4]; while (*arg1 != 0x3a) arg1 = arg1 + 1; local_20[1] = 4; local_20[2] = (uint32_t)(arg1 + 1); local_20[3] = (FUN_00100ea4(arg1 + 1) + 1U) * 2U; if ((*(uint32_t (**)(void*, uint32_t*, uint32_t*, uint32_t))(*((uint32_t**)local_2c)))(local_2c, local_20, local_20 + 1, arg2) < 0x80000000U) *(void**)arg0 = (void*)local_20[0];
}
#endif
