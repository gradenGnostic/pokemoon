// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042DFE4
void* heap_alloc(uint32_t, void*);
void* item_ctor(void*, uint16_t, void*);
int32_t item_getparam(void*, uint32_t);
void calccore_func(void*, uint16_t, void*);
void heap_free(void*);
extern "C" void YellowAuto_0042dfe4(void* arg0, uint16_t arg1, uint16_t arg2, void* arg3) __asm__("_ZN8PokeTool14NatsukiManager15CalcWhenUseItemEPN3pml8pokepara9CoreParamEttPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_0042dfe4(void* arg0, uint16_t arg1, uint16_t arg2, void* arg3) {
void* tmp = heap_alloc(40, arg3);
void* obj = (void*)0;
if (tmp != (void*)0) { obj = item_ctor(tmp, arg2, arg3); } else { obj = (void*)0; }
int8_t v0 = (int8_t)item_getparam(obj, 62);
int8_t v1 = (int8_t)item_getparam(obj, 63);
int8_t v2 = (int8_t)item_getparam(obj, 64);
int8_t tbl[3];
tbl[0] = v0;
tbl[1] = v1;
tbl[2] = v2;
calccore_func(arg0, arg1, (void*)tbl);
if (obj != (void*)0) { heap_free(obj); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042E0A0
void calccore_func(void*, uint16_t, void*);
extern const int8_t table_0042e0b8[];
extern "C" void YellowAuto_0042e0a0(void* arg0, uint32_t arg1, uint16_t arg2) __asm__("_ZN8PokeTool14NatsukiManager4CalcEPN3pml8pokepara9CoreParamENS_11NatsukiTypeEt");
extern "C" void YellowAuto_0042e0a0(void* arg0, uint32_t arg1, uint16_t arg2) {
calccore_func(arg0, arg2, (void*)&table_0042e0b8[arg1 * 3]);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042E084
void calccore_func(void*, uint16_t, void*);
extern "C" void YellowAuto_0042e084(void* arg0, uint16_t arg1, int8_t arg2) __asm__("_ZN8PokeTool14NatsukiManager20CalcWhenResortHotSpaEPN3pml8pokepara9CoreParamEta");
extern "C" void YellowAuto_0042e084(void* arg0, uint16_t arg1, int8_t arg2) {
int8_t tbl[3];
tbl[0] = arg2;
tbl[1] = arg2;
tbl[2] = arg2;
calccore_func(arg0, arg1, (void*)tbl);
}
#endif
