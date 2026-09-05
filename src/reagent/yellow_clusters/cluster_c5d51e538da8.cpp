// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498960
uint32_t GetGyroscope(const uint8_t* arg0, uint8_t arg1);
extern "C" uint32_t YellowAuto_00498960(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK4gfl22ui13DeviceManager12GetGyroscopeEh");
extern "C" uint32_t YellowAuto_00498960(const uint8_t* arg0, uint8_t arg1) {
return arg1 == 0 ? *(const uint32_t*)(arg0 + 0x38) : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049898C
uint32_t GetTouchPanel(const uint8_t* arg0, uint8_t arg1);
extern "C" uint32_t YellowAuto_0049898c(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK4gfl22ui13DeviceManager13GetTouchPanelEh");
extern "C" uint32_t YellowAuto_0049898c(const uint8_t* arg0, uint8_t arg1) {
return arg1 == 0 ? *(const uint32_t*)(arg0 + 0x30) : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004989B8
uint32_t GetAccelerometer(const uint8_t* arg0, uint8_t arg1);
extern "C" uint32_t YellowAuto_004989b8(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK4gfl22ui13DeviceManager16GetAccelerometerEh");
extern "C" uint32_t YellowAuto_004989b8(const uint8_t* arg0, uint8_t arg1) {
return arg1 == 0 ? *(const uint32_t*)(arg0 + 0x34) : 0;
}
#endif
