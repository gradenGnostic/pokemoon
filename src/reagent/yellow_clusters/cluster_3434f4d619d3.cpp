// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00373CD4
void sub_003F467C(uint8_t*, void*);
extern "C" void YellowAuto_00373cd4(uint8_t* arg0, void* arg1) __asm__("_ZN5Field10EventXMenuC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00373cd4(uint8_t* arg0, void* arg1) {
sub_003F467C(arg0, arg1); *(void**)(arg0 + 28) = arg1;
}
#endif
