// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7CA0
void FileOpen(uint32_t, void*, bool, uint32_t);
void FileLoad(uint32_t, uint32_t, void*, void*, bool, int32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002c7ca0(uint8_t* arg0, void* arg1) __asm__("_ZN3App3Box11BoxAppSetup11BinLinkLoadEPN3app4util4HeapE");
extern "C" void YellowAuto_002c7ca0(uint8_t* arg0, void* arg1) {
FileOpen(0x87, (void*)*(uint32_t*)((uint8_t*)arg1 + 8), true, 0xFF); FileLoad(0x87, 2, (void*)(arg0 + 0x88), (void*)*(uint32_t*)((uint8_t*)arg1 + 8), true, 128, 0xFF, 0, 0);
}
#endif
