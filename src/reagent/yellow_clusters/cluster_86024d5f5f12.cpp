// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F0EC
void* operator_new(uint32_t, void*);
void* FUN_0035ebc8(void*);
extern "C" void YellowAuto_0035f0ec(uint8_t* arg0) __asm__("_ZN4gfl26thread5Event10InitializeEv");
extern "C" void YellowAuto_0035f0ec(uint8_t* arg0) {
void* _heap = *(void**)arg0;
void* _obj = operator_new(12, _heap);
if (_obj != (void*)0) {
_obj = FUN_0035ebc8(_obj);
}
*(void**)(arg0 + 4) = _obj;
}
#endif
