// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00104A40
extern "C" uint32_t YellowAuto_00104a40() __asm__("_ZNK7GameSys11GameManager18GetUiDeviceManagerEv");
extern "C" uint32_t YellowAuto_00104a40() {
return *(uint32_t *)(*(uint32_t *)0x104a4c);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3220
extern "C" uint32_t YellowAuto_004a3220() __asm__("_ZNK7GameSys11GameManager19GetAsyncFileManagerEv");
extern "C" uint32_t YellowAuto_004a3220() {
return *(uint32_t *)(*(uint32_t *)0x4a322c + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3230
extern "C" uint32_t YellowAuto_004a3230() __asm__("_ZNK7GameSys11GameManager20GetNijiExtSaveSystemEv");
extern "C" uint32_t YellowAuto_004a3230() {
return *(uint32_t *)(*(uint32_t *)0x4a323c + 28);
}
#endif
