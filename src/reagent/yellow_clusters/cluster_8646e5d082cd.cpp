// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044CC48
void* operator_new(uint32_t, void*);
void* operator_new_array(uint32_t, void*);
void* __aeabi_vec_ctor_nocookie_nodtor(void*, const void*, uint32_t, uint32_t);
void __aeabi_memclr4(void*, uint32_t);
extern "C" void* YellowAuto_0044cc48(void* arg0, void* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI26JoinFestaRecordListManagerC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void* YellowAuto_0044cc48(void* arg0, void* arg1) {
*(uint32_t*)arg0 = *(uint32_t*)0x0044ccf4; *(uint32_t*)(arg0 + 4) = 0; *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; if ((*(void**)(arg0 + 4) = operator_new(0x68, arg1)) != 0) *(uint32_t*)(*(void**)(arg0 + 4)) = 0, *(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 4) = 0, __aeabi_memclr4((void*)((uint8_t*)*(void**)(arg0 + 4) + 8), 0x5c), *((uint8_t*)*(void**)(arg0 + 4) + 0x64) = 0; if ((*(void**)(arg0 + 8) = operator_new_array(0x2d8, arg1)) != 0) *(void**)(arg0 + 8) = __aeabi_vec_ctor_nocookie_nodtor(*(void**)(arg0 + 8), (const void*)0x0044ccf8, 0x68, 7); *(uint32_t*)(arg0 + 12) = 7; *(uint32_t*)(*(void**)(arg0 + 4)) = (uint32_t)(*(void**)(arg0 + 4)); *(uint32_t*)((uint8_t*)*(void**)(arg0 + 4) + 4) = (uint32_t)(*(void**)(arg0 + 4)); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044CD58
void operator_delete(void*);
void operator_delete_array(void*);
extern "C" void* YellowAuto_0044cd58(void* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI26JoinFestaRecordListManagerD1Ev");
extern "C" void* YellowAuto_0044cd58(void* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x0044cda8; if (*(void**)(arg0 + 8) != 0) operator_delete_array(*(void**)(arg0 + 8)), *(void**)(arg0 + 8) = 0; if (*(void**)(arg0 + 4) != 0) operator_delete(*(void**)(arg0 + 4)), *(void**)(arg0 + 4) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; return arg0;
}
#endif
