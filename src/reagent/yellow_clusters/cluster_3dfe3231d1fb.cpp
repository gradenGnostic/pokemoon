// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004983E8
void* FUN_001054dc(const uint8_t* arg0);
extern "C" uint32_t YellowAuto_004983e8(const uint8_t* arg0) __asm__("_ZNK4gfl22ui12VectorDevice10GetTriggerEv");
extern "C" uint32_t YellowAuto_004983e8(const uint8_t* arg0) {
return *(uint32_t*)((uint8_t*)FUN_001054dc(arg0) + 12);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049868C
const uint8_t* FUN_001054dc(const uint8_t*);
extern "C" uint32_t YellowAuto_0049868c(const uint8_t* arg0) __asm__("_ZNK4gfl22ui12VectorDevice4GetXEv");
extern "C" uint32_t YellowAuto_0049868c(const uint8_t* arg0) {
return *(const uint32_t*)FUN_001054dc(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049869C
const uint8_t* FUN_001054dc(const uint8_t*);
extern "C" uint32_t YellowAuto_0049869c(const uint8_t* arg0) __asm__("_ZNK4gfl22ui12VectorDevice4GetYEv");
extern "C" uint32_t YellowAuto_0049869c(const uint8_t* arg0) {
return *(const uint32_t*)(FUN_001054dc(arg0) + 4);
}
#endif
