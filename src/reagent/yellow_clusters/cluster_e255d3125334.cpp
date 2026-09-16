// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032C454
extern "C" bool YellowAuto_0032c454(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryEnvData16SetBinaryEnvDataEPc");
extern "C" bool YellowAuto_0032c454(uint8_t* arg0, uint8_t* arg1) {
if (arg1 == 0) return false;
*(uint32_t*)(arg0 + 4) = (uint32_t)arg1;
uint32_t t0 = *(uint32_t*)0x32C520;
uint8_t* t1 = (uint8_t*)(*(uint32_t*)t0);
for (uint32_t t2 = 0; t2 < 8; ++t2) if ((int8_t)arg1[t2] != (int8_t)t1[t2]) goto fail;
if (*(uint16_t*)(arg1 + 8) != 1) goto fail;
if (*(uint16_t*)(arg1 + 10) != 0) goto fail;
*(uint32_t*)(arg0 + 8) = *(uint32_t*)(arg1 + 16);
*(uint16_t*)(arg0 + 12) = *(uint16_t*)(arg1 + 20);
*(uint16_t*)(arg0 + 14) = *(uint16_t*)(arg1 + 22);
*(uint16_t*)(arg0 + 16) = *(uint16_t*)(arg1 + 24);
*(uint32_t*)(arg0 + 20) = 28;
*(uint32_t*)(arg0 + 24) = 32 + ((uint32_t)*(uint16_t*)(arg1 + 20) + (uint32_t)*(uint16_t*)(arg1 + 22) + (uint32_t)*(uint16_t*)(arg1 + 24)) * 4;
return true;
fail: *(uint32_t*)(arg0 + 4) = 0;
return false;
}
#endif
