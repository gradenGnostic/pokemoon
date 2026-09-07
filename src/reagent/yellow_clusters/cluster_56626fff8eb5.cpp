// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042AD8C
void* heap_alloc(uint32_t, void*);
void* buf_init(void*, uint32_t, void*);
void* party_init(void*, void*);
extern "C" uint8_t* YellowAuto_0042ad8c(uint8_t* arg0, void* arg1) __asm__("_ZN8PokeTool11BattlePartyC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_0042ad8c(uint8_t* arg0, void* arg1) {
arg0[8] = 0;
arg0[9] = 0;
*(void**)(arg0 + 0) = heap_alloc(16, arg1);
*(void**)(arg0 + 0) = (*(void**)(arg0 + 0) == (void*)0 ? (void*)0 : buf_init(*(void**)(arg0 + 0), 11, arg1));
*(void**)(arg0 + 4) = heap_alloc(28, arg1);
*(void**)(arg0 + 4) = (*(void**)(arg0 + 4) == (void*)0 ? (void*)0 : party_init(*(void**)(arg0 + 4), arg1));
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042AE28
void virt_invoke(void*, uint32_t);
void* party_destroy(void*);
void heap_free(void*);
extern "C" uint8_t* YellowAuto_0042ae28(uint8_t* arg0) __asm__("_ZN8PokeTool11BattlePartyD1Ev");
extern "C" uint8_t* YellowAuto_0042ae28(uint8_t* arg0) {
if (*(void**)(arg0 + 0) != (void*)0) virt_invoke(*(void**)(arg0 + 0), 4);
if (*(void**)(arg0 + 0) != (void*)0) *(void**)(arg0 + 0) = (void*)0;
if (*(void**)(arg0 + 4) != (void*)0) heap_free(party_destroy(*(void**)(arg0 + 4)));
if (*(void**)(arg0 + 4) != (void*)0) *(void**)(arg0 + 4) = (void*)0;
return arg0;
}
#endif
