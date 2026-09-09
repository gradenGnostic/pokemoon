// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E7818
extern "C" void YellowAuto_002e7818(uint8_t* arg0) __asm__("_ZN3app2ui6UIView20DeleteGraphicsSystemEv");
extern "C" void YellowAuto_002e7818(uint8_t* arg0) {
if (arg0[0x70] != 0) arg0[0x70] = 0; return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D384
void sub_48ee3c(void*, uint32_t);
extern "C" void YellowAuto_0048d384(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3app2ui6UIView13GetLayoutWorkEj");
extern "C" void YellowAuto_0048d384(const uint8_t* arg0, uint32_t arg1) {
if (*(void* const*)(arg0 + 0x60) != (void*)0) { sub_48ee3c(*(void* const*)(arg0 + 0x60), arg1); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D398
void sub_3100f0(void*);
extern "C" void YellowAuto_0048d398(const uint8_t* arg0) __asm__("_ZNK3app2ui6UIView15GetLayoutSystemEv");
extern "C" void YellowAuto_0048d398(const uint8_t* arg0) {
if (*(void* const*)(arg0 + 0x60) != (void*)0) { sub_3100f0(*(void* const*)(arg0 + 0x60)); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E78C4
void sub_3bff08(void*, void*, uint32_t);
void sub_35be88();
extern "C" void YellowAuto_002e78c4(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN3app2ui6UIView20SetTextboxPaneStringEPN2nw3lyt7TextBoxEPN4gfl23str6StrBufE");
extern "C" void YellowAuto_002e78c4(uint8_t* arg0, void* arg1, void* arg2) {
if (arg1 != (void*)0) { sub_3bff08(arg1, arg2, 10); } else { sub_35be88(); }
}
#endif
