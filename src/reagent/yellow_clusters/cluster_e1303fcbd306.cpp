// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043A794
void* sub_004b4a00(uint32_t, void*, uint32_t);
void* sub_00317e08(void*, void*, int32_t, int32_t, int32_t, int32_t);
void sub_0048fdd4(void*, uint8_t*);
extern "C" void YellowAuto_0043a794(uint8_t* arg0, void* arg1) __asm__("_ZN8Savedata12UnionPokemon15InitPokemonDataEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_0043a794(uint8_t* arg0, void* arg1) {
void* obj = sub_004b4a00(16u, arg1, 1u);
if (obj != (void*)0)
  obj = sub_00317e08(obj, arg1, 0, 0, 0, 0);
sub_0048fdd4(obj, arg0 + 4);
if (obj != (void*)0)
  ((void (*)(void*))(*(uint32_t*)obj + 8))(obj);
return;
}
#endif
