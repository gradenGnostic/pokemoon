// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F274
void* operator_new(uint32_t, void*);
void* sub_0035EF28(void*, void*, void*, bool, uint32_t);
extern "C" uint8_t* YellowAuto_0035f274(uint8_t* arg0, void* arg1, void* arg2, bool arg3, uint32_t arg4) __asm__("_ZN4gfl26thread6ThreadC1EPNS0_15ThreadInterfaceEPNS_4heap11CtrHeapBaseEbj");
extern "C" uint8_t* YellowAuto_0035f274(uint8_t* arg0, void* arg1, void* arg2, bool arg3, uint32_t arg4) {
void* tmp = operator_new(32, arg2);
void* adapter = (void*)0;
if (tmp != (void*)0)
adapter = sub_0035EF28(tmp, arg1, arg2, arg3, arg4);
*(void**)(arg0 + 4) = adapter;
return arg0;
}
#endif
