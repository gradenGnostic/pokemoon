// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015AFBC
void GflHeapFreeMemoryBlock(void*, uint32_t);
extern "C" uint8_t* YellowAuto_0015afbc(uint8_t* arg0) __asm__("_ZN10RegulationD1Ev");
extern "C" uint8_t* YellowAuto_0015afbc(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x15AFEC; if (*(uint32_t*)(arg0 + 8) == 0) return arg0; GflHeapFreeMemoryBlock((void*)*(uint32_t*)(arg0 + 8), *(uint32_t*)0x15AFEC); *(uint32_t*)(arg0 + 8) = 0; return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474E74
uint32_t Crc16(const void*, const uint8_t*, uint32_t);
extern "C" uint32_t YellowAuto_00474e74(const uint8_t* arg0) __asm__("_ZNK10Regulation6GetCrcEv");
extern "C" uint32_t YellowAuto_00474e74(const uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 16) != 0) return Crc16((const void*)0, (const uint8_t*)*(uint32_t*)(arg0 + 16), *(uint32_t*)0x00474EB0); return 0;
}
#endif
