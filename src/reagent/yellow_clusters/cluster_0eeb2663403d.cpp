// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EB898
void StopAnime(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void StartAnime(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
extern "C" void YellowAuto_002eb898(uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4tool12FingerCursor10StartAnimeENS1_8FormTypeE");
extern "C" void YellowAuto_002eb898(uint8_t* arg0, int32_t arg1) {
StopAnime(*(uint8_t**)(arg0 + 0x60), 0, 0, 0); StopAnime(*(uint8_t**)(arg0 + 0x60), 0, 1, 0); StopAnime(*(uint8_t**)(arg0 + 0x60), 0, 2, 0); StopAnime(*(uint8_t**)(arg0 + 0x60), 0, 3, 0); StartAnime(*(uint8_t**)(arg0 + 0x60), 0, *(uint32_t*)(0x002EB8F0 + (arg1 << 3)), 1, 1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EBA20
void StopAnime(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void StartAnime(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
extern "C" void YellowAuto_002eba20(uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4tool12FingerCursor9PushAnimeENS1_8FormTypeE");
extern "C" void YellowAuto_002eba20(uint8_t* arg0, int32_t arg1) {
StopAnime(*(uint8_t**)(arg0 + 0x60), 0, 0, 0); StopAnime(*(uint8_t**)(arg0 + 0x60), 0, 1, 0); StopAnime(*(uint8_t**)(arg0 + 0x60), 0, 2, 0); StopAnime(*(uint8_t**)(arg0 + 0x60), 0, 3, 0); StartAnime(*(uint8_t**)(arg0 + 0x60), 0, *(uint32_t*)(0x002EBA7C + (arg1 << 3) + 4), 1, 1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EB91C
void FileOpenSync(uint32_t arg0, const void* arg1, uint32_t arg2);
void FileLoadSync();
void FileCloseSync();
extern "C" uint32_t YellowAuto_002eb91c(uint8_t* arg0) __asm__("_ZN3app4tool12FingerCursor16CreateLytBinDataEPNS_4util4HeapE");
extern "C" uint32_t YellowAuto_002eb91c(uint8_t* arg0) {
FileOpenSync(0x4c, *(const void**)(arg0 + 8), 0); FileLoadSync(); FileCloseSync(); return 0;
}
#endif
