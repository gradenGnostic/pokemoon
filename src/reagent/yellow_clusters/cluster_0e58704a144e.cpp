// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443498
extern "C" void YellowAuto_00443498(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN8Savedata7GtsData21SetUploadGtsIndexDataERKN6NetApp3GTS12GtsIndexDataE");
extern "C" void YellowAuto_00443498(uint8_t* arg0, const uint8_t* arg1) {
for (uint32_t i = 0; i < 0xA4; ++i) arg0[0x188 + i] = arg1[i];
}
#endif
