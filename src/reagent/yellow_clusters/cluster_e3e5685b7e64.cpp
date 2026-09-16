// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F067C
void SetTextBoxPaneStringExpand(void*, void*, void*);
void SetTextBoxPaneString(void*, void*, void*);
extern "C" void YellowAuto_002f067c(uint8_t* arg0, int32_t arg1, void* arg2, bool arg3) __asm__("_ZN3app4tool14TwoButtonsView16SetTextBoxStringENS1_9TextBoxIDEPN4gfl23str6StrBufEb");
extern "C" void YellowAuto_002f067c(uint8_t* arg0, int32_t arg1, void* arg2, bool arg3) {
if (*reinterpret_cast<int32_t*>(arg0 + 0xA0) != 3) return; if (arg3) SetTextBoxPaneStringExpand(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x60)), reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + arg1 * 4 + 0x104)), arg2); else SetTextBoxPaneString(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x60)), reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + arg1 * 4 + 0x104)), arg2);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F077C
void SetButtonSelectSE(void* arg0, uint32_t arg1, uint32_t arg2);
extern "C" void YellowAuto_002f077c(uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4tool14TwoButtonsView18SetButtonSE_PresetENS1_8SEPresetE");
extern "C" void YellowAuto_002f077c(uint8_t* arg0, int32_t arg1) {
if (*(uint32_t*)(arg0 + 16) == 0) return; if (arg1 == 0) SetButtonSelectSE((void*)(*(uint32_t*)(arg0 + 16)), 0, *(uint32_t*)(*(uint32_t*)0x002F0844)), SetButtonSelectSE((void*)(*(uint32_t*)(arg0 + 16)), 1, *(uint32_t*)(*(uint32_t*)0x002F0844)); else if (arg1 == 2) SetButtonSelectSE((void*)(*(uint32_t*)(arg0 + 16)), 0, *(uint32_t*)0x002F0840), SetButtonSelectSE((void*)(*(uint32_t*)(arg0 + 16)), 1, *(uint32_t*)0x002F0848); else SetButtonSelectSE((void*)(*(uint32_t*)(arg0 + 16)), 0, *(uint32_t*)0x002F0840), SetButtonSelectSE((void*)(*(uint32_t*)(arg0 + 16)), 1, *(uint32_t*)0x002F0840);
}
#endif
