// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00470910
extern "C" bool YellowAuto_00470910(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager12IsEndRequestEv");
extern "C" bool YellowAuto_00470910(uint8_t* arg0) {
return arg0[8] == 2;
}
#endif
