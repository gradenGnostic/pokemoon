// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA2C8
extern const uint32_t DAT_002ea2dc;
extern const uint32_t DAT_002ea2d8;
bool StartMenu(uint32_t, uint32_t, void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_002ea2c8(void* arg0, uint32_t arg1) __asm__("_ZN3app4tool10MenuWindow14StartYesNoMenuEj");
extern "C" bool YellowAuto_002ea2c8(void* arg0, uint32_t arg1) {
return StartMenu(DAT_002ea2dc, DAT_002ea2d8, arg0, arg1, 3);
}
#endif
