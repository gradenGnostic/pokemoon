// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357758
extern "C" void* YellowAuto_00357758() __asm__("_ZN4gfl24base17SingletonAccessorIN9NetAppLib9JoinFesta22JoinFestaPacketManagerEE11GetInstanceEv");
extern "C" void* YellowAuto_00357758() {
return *reinterpret_cast<void**>(0x00357764);
}
#endif
