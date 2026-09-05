// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004490E8
void Copy(uint8_t* arg0, uint8_t* arg1);
extern "C" uint8_t* YellowAuto_004490e8(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI23JoinFestaAttractionDataaSERKS1_");
extern "C" uint8_t* YellowAuto_004490e8(uint8_t* arg0, uint8_t* arg1) {
Copy(arg0, arg1); arg0[0x248] = arg1[0x248]; arg0[0x249] = arg1[0x249]; return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00449010
bool IsOpenAttraction(uint8_t* arg0);
extern "C" uint8_t YellowAuto_00449010(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI23JoinFestaAttractionData15GetAttractionIDEv");
extern "C" uint8_t YellowAuto_00449010(uint8_t* arg0) {
uint8_t result = arg0[0x248]; if (result == 0x54 && IsOpenAttraction(arg0)) result = arg0[0x236]; return result;
}
#endif
