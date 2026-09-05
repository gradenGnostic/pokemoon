// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004717D0
void* FUN_001048b4(void);
extern "C" void YellowAuto_004717d0(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager27SetKentarosuRideRockBreakerEv");
extern "C" void YellowAuto_004717d0(uint8_t* arg0) {
FUN_001048b4();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00470830
void FUN_004704b4(int32_t, uint32_t, void*);
void* FUN_00357788(void);
void FUN_00472800(void*);
void FUN_0046cdf4(void);
void* FUN_001048b4(void);
extern "C" void YellowAuto_00470830(uint8_t* arg0, int32_t arg1, uint32_t arg2, void* arg3) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager11OpenRequestEN15JoinFestaScript12AttractionIdE");
extern "C" void YellowAuto_00470830(uint8_t* arg0, int32_t arg1, uint32_t arg2, void* arg3) {
FUN_004704b4(arg1, arg2, arg3);
FUN_00472800(FUN_00357788());
FUN_0046cdf4();
FUN_001048b4();
}
#endif
