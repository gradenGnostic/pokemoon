// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E0794
uint32_t FUN_004a2da8(uint8_t*);
extern "C" uint32_t YellowAuto_003e0794(uint8_t* arg0) __asm__("_ZN6NetLib8Delivery15DeliveryManager25IsCompretePrepareFinalizeEv");
extern "C" uint32_t YellowAuto_003e0794(uint8_t* arg0) {
return FUN_004a2da8(arg0) ^ 1u;
}
#endif
