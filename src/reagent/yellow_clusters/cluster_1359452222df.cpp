// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BE618
void* h_00105500(uint32_t, void*);
void* h_00356298(void*, void*, void*);
extern "C" uint8_t* YellowAuto_003be618(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN5print11ItemMessageC1EPN4gfl24heap11CtrHeapBaseEPv");
extern "C" uint8_t* YellowAuto_003be618(uint8_t* arg0, void* arg1, void* arg2) {
*(uint32_t*)arg0 = *(uint32_t*)3925592u; void* v0 = h_00105500(48u, arg1); void* v1 = 0; if (v0 != 0) v1 = h_00356298(v0, arg2, arg1); *(uint32_t*)(arg0 + 4) = (uint32_t)v1; return arg0;
}
#endif
