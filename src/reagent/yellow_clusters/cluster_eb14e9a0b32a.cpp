// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00358E40
extern const uint16_t CrcTable[256];
extern "C" uint16_t YellowAuto_00358e40(uint16_t arg0, const uint8_t* arg1, int32_t arg2) __asm__("_ZN4gfl24math3Crc5Crc16EtPKhi");
extern "C" uint16_t YellowAuto_00358e40(uint16_t arg0, const uint8_t* arg1, int32_t arg2) {
uint32_t crc = (~(uint32_t)arg0) & 0xFFFFU;
for (int32_t i = 0; i < arg2; ++i) { uint32_t idx = ((uint32_t)arg1[i] ^ crc) & 0xFFU; crc = ((uint32_t)CrcTable[idx] ^ (crc >> 8)) & 0xFFFFU; }
return (uint16_t)(~crc & 0xFFFFU);
}
#endif
