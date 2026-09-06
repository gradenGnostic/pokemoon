// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00485480
extern "C" void YellowAuto_00485480(const uint8_t* arg0) __asm__("_ZNK2nw3lyt4Pane11GetMaterialEv");
extern "C" void YellowAuto_00485480(const uint8_t* arg0) {
if ((*(uint32_t (**)(const uint8_t*))(*(uint32_t*)arg0 + 0x24))(arg0) != 0) (*(void (**)(const uint8_t*, uint32_t))(*(uint32_t*)arg0 + 0x28))(arg0, 0);
}
#endif
