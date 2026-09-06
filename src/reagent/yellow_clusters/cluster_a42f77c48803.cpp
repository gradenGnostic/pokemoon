// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F39B4
void SetTextBoxPaneStringExpand(void*, void*, const void*);
void SetTextBoxPaneString(void*, void*, const void*);
extern "C" void YellowAuto_002f39b4(uint8_t* arg0, int32_t arg1, const void* arg2, bool arg3) __asm__("_ZN3app4tool16GeneralLowerView16SetTextBoxStringENS1_9TextBoxIDEPN4gfl23str6StrBufEb");
extern "C" void YellowAuto_002f39b4(uint8_t* arg0, int32_t arg1, const void* arg2, bool arg3) {
if (*(uint32_t *)(arg0 + 0x94) != 3) return; if (arg3) SetTextBoxPaneStringExpand(*(void **)(arg0 + 0x60), *(void **)(arg0 + 0x10c + arg1 * 4), arg2); else SetTextBoxPaneString(*(void **)(arg0 + 0x60), *(void **)(arg0 + 0x10c + arg1 * 4), arg2); return;
}
#endif
