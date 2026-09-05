// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F2B98
extern "C" void YellowAuto_003f2b98(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN7GameSys8GameData18GetFieldCameraDataEPN5Field6Camera8SaveDataE");
extern "C" void YellowAuto_003f2b98(uint8_t* arg0, uint8_t* arg1) {
uint32_t* v0 = *(uint32_t**)(arg0 + 0x104); uint32_t* v1 = (uint32_t*)arg1; v1[0] = v0[0]; v1[1] = v0[1]; v1[2] = v0[2]; v1[3] = v0[3];
}
#endif
