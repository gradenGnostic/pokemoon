// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034736C
extern "C" void YellowAuto_0034736c(uint8_t* arg0) __asm__("_ZN4gfl22ui9Gyroscope15EnableZeroDriftEv");
extern "C" void YellowAuto_0034736c(uint8_t* arg0) {
(*(void (**)(uint8_t*))((*(uint8_t**)(*(uint8_t**)(arg0 + 0x48))) + 0x30))(*(uint8_t**)(arg0 + 0x48));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034737C
extern "C" void YellowAuto_0034737c(uint8_t* arg0) __asm__("_ZN4gfl22ui9Gyroscope19EnableZeroPlayParamEv");
extern "C" void YellowAuto_0034737c(uint8_t* arg0) {
(*(void (**)(uint8_t*))((*(uint8_t**)(*(uint8_t**)(arg0 + 0x48))) + 0x48))(*(uint8_t**)(arg0 + 0x48));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034738C
extern "C" void YellowAuto_0034738c(uint8_t* arg0) __asm__("_ZN4gfl22ui9Gyroscope28EnableRevisionByAccelerationEv");
extern "C" void YellowAuto_0034738c(uint8_t* arg0) {
(*(void (**)(uint8_t*))((*(uint8_t**)(*(uint8_t**)(arg0 + 0x48))) + 0x7C))(*(uint8_t**)(arg0 + 0x48));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034739C
extern "C" void YellowAuto_0034739c(uint8_t* arg0) __asm__("_ZN4gfl22ui9Gyroscope41SetAxisRotationMatrixFromCurrentDirectionEv");
extern "C" void YellowAuto_0034739c(uint8_t* arg0) {
(*(void (**)(uint8_t*))((*(uint8_t**)(*(uint8_t**)(arg0 + 0x48))) + 0x74))(*(uint8_t**)(arg0 + 0x48));
}
#endif
