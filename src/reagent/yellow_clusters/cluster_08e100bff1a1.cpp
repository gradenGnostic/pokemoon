// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460EB8
extern const void* DAT_00460ef0;
void Destroy(uint8_t*);
uint8_t* GetInstance();
extern "C" void YellowAuto_00460eb8(uint8_t* arg0) __asm__("_ZN9NetAppLib6System21ApplicationSystemBaseD1Ev");
extern "C" void YellowAuto_00460eb8(uint8_t* arg0) {
*(uint32_t*)arg0 = (uint32_t)DAT_00460ef0; Destroy(arg0); if (arg0[0x4a] != 0) *(int8_t*)(GetInstance() + 0x84) = *(int8_t*)(arg0 + 0x4b);
}
#endif
