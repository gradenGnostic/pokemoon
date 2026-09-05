// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002A0A34
void insert(void*, void*, void*);
extern "C" void YellowAuto_002a0a34(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN2nw3lyt4Pane11AppendChildEPS1_");
extern "C" void YellowAuto_002a0a34(uint8_t* arg0, uint8_t* arg1) {
insert(arg0 + 0x10, arg0 + 0x14, arg1 + 4); *(uint32_t *)(arg1 + 0x0c) = (uint32_t)arg0; *(uint8_t *)(arg1 + 0x44) = (uint8_t)((*(uint8_t *)(arg1 + 0x44) & 0xef) | 0x10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002A0AA0
void FUN_00287f60(void*, void*);
extern "C" void YellowAuto_002a0aa0(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN2nw3lyt4Pane11RemoveChildEPS1_");
extern "C" void YellowAuto_002a0aa0(uint8_t* arg0, uint8_t* arg1) {
FUN_00287f60(arg0 + 0x10, arg1 + 4); *(uint32_t *)(arg1 + 0x0c) = 0;
}
#endif
