// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498704
const uint8_t* FUN_001054dc(const uint8_t*);
extern "C" bool YellowAuto_00498704(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK4gfl22ui12VectorDevice6IsHoldEj");
extern "C" bool YellowAuto_00498704(const uint8_t* arg0, uint32_t arg1) {
const uint8_t* t = FUN_001054dc(arg0); return (*reinterpret_cast<const uint32_t*>(t + 8) & arg1) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498730
const uint8_t* FUN_001054dc(const uint8_t*);
extern "C" bool YellowAuto_00498730(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK4gfl22ui12VectorDevice8IsRepeatEj");
extern "C" bool YellowAuto_00498730(const uint8_t* arg0, uint32_t arg1) {
const uint8_t* t = FUN_001054dc(arg0); return ((*reinterpret_cast<const uint32_t*>(t + 20) | *reinterpret_cast<const uint32_t*>(t + 12)) & arg1) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498754
const uint8_t* FUN_001054dc(const uint8_t*);
extern "C" bool YellowAuto_00498754(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK4gfl22ui12VectorDevice9IsTriggerEj");
extern "C" bool YellowAuto_00498754(const uint8_t* arg0, uint32_t arg1) {
const uint8_t* t = FUN_001054dc(arg0); return (*reinterpret_cast<const uint32_t*>(t + 12) & arg1) != 0;
}
#endif
