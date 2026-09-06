// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00160460
void* operator_new(uint32_t, void*);
void* StrBuf(void*, int32_t, void*);
void* TrainerTypeData(void*);
extern "C" void* YellowAuto_00160460(void* arg0, void* arg1) __asm__("_ZN16BSP_TRAINER_DATAC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void* YellowAuto_00160460(void* arg0, void* arg1) {
*(void**)(arg0 + 0x20) = operator_new(0x10, arg1); *(void**)(arg0 + 0x20) = *(void**)(arg0 + 0x20) != 0 ? StrBuf(*(void**)(arg0 + 0x20), 0xd, arg1) : (void*)0; *(void**)(arg0 + 0x24) = operator_new(0x10, arg1); *(void**)(arg0 + 0x24) = *(void**)(arg0 + 0x24) != 0 ? StrBuf(*(void**)(arg0 + 0x24), 0x15, arg1) : (void*)0; *(void**)(arg0 + 0x28) = operator_new(0x18, arg1); *(void**)(arg0 + 0x28) = *(void**)(arg0 + 0x28) != 0 ? TrainerTypeData(*(void**)(arg0 + 0x28)) : (void*)0; *(uint32_t *)(arg0 + 0x18) = *(uint32_t *)0x001604e0; return arg0;
}
#endif
