// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00465D80
extern "C" bool YellowAuto_00465d80(const uint32_t* arg0, const uint32_t* arg1) __asm__("_ZN9NetAppLib9JoinFesta19JoinFestaPacketUtil15IsSameFriendKeyERK18nnfriendsFriendKeyS4_");
extern "C" bool YellowAuto_00465d80(const uint32_t* arg0, const uint32_t* arg1) {
if ((arg0[0] == arg1[0] && arg0[0] != 0) || (arg0[2] == arg1[2] && arg0[3] == arg1[3] && (arg0[2] != 0 || arg0[3] != 0))) return true;
return false;
}
#endif
