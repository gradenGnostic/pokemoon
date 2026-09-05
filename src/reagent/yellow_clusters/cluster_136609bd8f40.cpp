// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357788
extern void **DAT_00357794;
extern "C" void* YellowAuto_00357788() __asm__("_ZN4gfl24base17SingletonAccessorIN9NetAppLib9JoinFesta28JoinFestaPersonalDataManagerEE11GetInstanceEv");
extern "C" void* YellowAuto_00357788() {
return *DAT_00357794;
}
#endif
