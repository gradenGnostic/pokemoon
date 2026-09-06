// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00466618
uint8_t* GetInstance();
extern "C" void YellowAuto_00466618(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPacketManager25SetPacketGameStatusWithMeEv");
extern "C" void YellowAuto_00466618(uint8_t* arg0) {
uint8_t* p0 = *(uint8_t**)(arg0 + 20) + 8;
GetInstance();
(void)p0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046940C
void FUN_004690d8(uint8_t*, bool);
uint8_t* GetInstance();
extern "C" void YellowAuto_0046940c(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPacketManager10SendMyDataEb");
extern "C" void YellowAuto_0046940c(uint8_t* arg0, bool arg1) {
uint8_t* p0 = *(uint8_t**)(arg0 + 20) + 8;
FUN_004690d8(p0, true);
bool b0 = false;
GetInstance();
(void)b0;
(void)arg1;
(void)arg0;
}
#endif
