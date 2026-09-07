// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F234
extern "C" void YellowAuto_0035f234(uint8_t* arg0) __asm__("_ZN4gfl26thread6Thread5StartEi");
extern "C" void YellowAuto_0035f234(uint8_t* arg0) {
void* a = *(void**)(arg0 + 4);
((void (*)(void*))((*(void***)a)[5]))(a);
}
#endif
