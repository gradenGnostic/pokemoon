// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038032C
uint8_t *FUN_0038014c(void* arg0, uint32_t arg1);
extern "C" void YellowAuto_0038032c(void* arg0, uint32_t arg1) __asm__("_ZN5Field11FieldScript17FieldScriptSystem16SetBgPartsUnLoadEj");
extern "C" void YellowAuto_0038032c(void* arg0, uint32_t arg1) {
uint8_t *tmp = FUN_0038014c(arg0, arg1); if (tmp != 0) *tmp &= 0xFE;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049CEF0
extern "C" const void* YellowAuto_0049cef0(const void* arg0) __asm__("_ZNK5Field11FieldScript17FieldScriptSystem15GetScriptObjectEv");
extern "C" const void* YellowAuto_0049cef0(const void* arg0) {
return *(const void **)(arg0 + 0x50);
}
#endif
