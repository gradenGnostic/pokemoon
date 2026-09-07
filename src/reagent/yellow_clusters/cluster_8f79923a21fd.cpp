// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047157C
bool IsWLANSwitchEnable();
uint8_t* GetInstance();
bool IsOpenAttraction(const uint8_t*);
extern "C" bool YellowAuto_0047157c(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager16CheckForceRetireEv");
extern "C" bool YellowAuto_0047157c(uint8_t* arg0) {
if (!IsWLANSwitchEnable()) { arg0[0x32] = 1; return true; } if (!IsOpenAttraction(GetInstance() + 8)) { arg0[0x32] = 1; return true; } return false;
}
#endif
