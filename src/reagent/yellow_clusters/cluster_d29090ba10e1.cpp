// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004508E4
void base_00461074(uint8_t*, uint8_t*, int32_t, int32_t, int32_t, int32_t, void*, int32_t);
extern "C" void YellowAuto_004508e4(uint8_t* arg0, uint8_t* arg1, int32_t arg2) __asm__("_ZN9NetAppLib11JoinFestaUI30JoinFestaPlayerListBGLowerViewC1EPNS_6System19ApplicationWorkBaseEi");
extern "C" void YellowAuto_004508e4(uint8_t* arg0, uint8_t* arg1, int32_t arg2) {
base_00461074(arg0, arg1, arg2, 99, 0, 1, (void*)(*(uint32_t*)(arg1 + 48)), 43); *(uint32_t*)arg0 = *(uint32_t*)0x00450924; *(uint32_t*)(arg0 + 160) = (uint32_t)arg1;
}
#endif
