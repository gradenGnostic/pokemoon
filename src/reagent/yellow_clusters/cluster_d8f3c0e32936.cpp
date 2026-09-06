// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414550
extern "C" uint32_t YellowAuto_00414550(uint8_t* arg0) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager19WaitInitializeAsyncEv");
extern "C" uint32_t YellowAuto_00414550(uint8_t* arg0) {
return 1;
}
#endif
