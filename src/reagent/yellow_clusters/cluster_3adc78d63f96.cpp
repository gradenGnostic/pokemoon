// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00385F5C
void *GetHeapByHeapId(int32_t, uint8_t*);
extern "C" uint8_t* YellowAuto_00385f5c(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN5Field13FieldSodateyaC1EPNS_8FieldmapE");
extern "C" uint8_t* YellowAuto_00385f5c(uint8_t* arg0, uint8_t* arg1) {
void *heap = GetHeapByHeapId(10, arg1); *(uint8_t **)(arg0 + 0) = arg1; *(uint32_t *)(arg0 + 8) = *(uint32_t *)(arg1 + 0x6c); *(uint32_t *)(arg0 + 0xc) = *(uint32_t *)(*(uint32_t *)(arg0 + 8) + 0x24); *(uint32_t *)(arg0 + 0x10) = *(uint32_t *)(*(uint32_t *)(arg0 + 0xc) + 4) + 0x692d0; *(void **)(arg0 + 4) = ((void *(*)(void *))((uint8_t *)*(void **)heap + 0x34))(heap); return arg0;
}
#endif
