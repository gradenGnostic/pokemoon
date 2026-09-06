// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00109328
void CopyMtx34WithHeader(uint32_t* arg0, const uint32_t* arg1, uint32_t arg2);
extern "C" void YellowAuto_00109328(uint32_t* arg0, const uint32_t* arg1, uint32_t arg2) __asm__("_ZN2nn2gr3CTR19CopyMtx34WithHeaderEPfPKNS_4math5MTX34Ej");
extern "C" void YellowAuto_00109328(uint32_t* arg0, const uint32_t* arg1, uint32_t arg2) {
arg0[1] = arg2; arg0[4] = arg1[0]; arg0[3] = arg1[1]; arg0[2] = arg1[2]; arg0[0] = arg1[3]; arg0[8] = arg1[4]; arg0[7] = arg1[5]; arg0[6] = arg1[6]; arg0[5] = arg1[7]; arg0[12] = arg1[8]; arg0[11] = arg1[9]; arg0[10] = arg1[10]; arg0[9] = arg1[11]; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00109364
void CopyMtx44WithHeader(uint32_t* arg0, const uint32_t* arg1, uint32_t arg2);
extern "C" void YellowAuto_00109364(uint32_t* arg0, const uint32_t* arg1, uint32_t arg2) __asm__("_ZN2nn2gr3CTR19CopyMtx44WithHeaderEPfPKNS_4math5MTX44Ej");
extern "C" void YellowAuto_00109364(uint32_t* arg0, const uint32_t* arg1, uint32_t arg2) {
arg0[1] = arg2; arg0[4] = arg1[0]; arg0[3] = arg1[1]; arg0[2] = arg1[2]; arg0[0] = arg1[3]; arg0[8] = arg1[4]; arg0[7] = arg1[5]; arg0[6] = arg1[6]; arg0[5] = arg1[7]; arg0[12] = arg1[8]; arg0[11] = arg1[9]; arg0[10] = arg1[10]; arg0[9] = arg1[11]; arg0[16] = arg1[12]; arg0[15] = arg1[13]; arg0[14] = arg1[14]; arg0[13] = arg1[15]; return;
}
#endif
