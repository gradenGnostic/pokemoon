// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00499130
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" int32_t YellowAuto_00499130(const uint8_t* arg0) __asm__("_ZNK4gfl22ui9Gyroscope7IsValidEv");
extern "C" int32_t YellowAuto_00499130(const uint8_t* arg0) {
return *(const int8_t*)FUN_001054dc(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00499140
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" const uint8_t* YellowAuto_00499140(const uint8_t* arg0) __asm__("_ZNK4gfl22ui9Gyroscope8GetAngleEv");
extern "C" const uint8_t* YellowAuto_00499140(const uint8_t* arg0) {
return FUN_001054dc(arg0) + 16;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00499150
const uint8_t* FUN_001054dc(const uint8_t* arg0);
extern "C" const uint8_t* YellowAuto_00499150(const uint8_t* arg0) __asm__("_ZNK4gfl22ui9Gyroscope8GetSpeedEv");
extern "C" const uint8_t* YellowAuto_00499150(const uint8_t* arg0) {
return FUN_001054dc(arg0) + 4;
}
#endif
