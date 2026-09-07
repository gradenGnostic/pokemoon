// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00456400
extern "C" bool YellowAuto_00456400(uint8_t* arg0, uint32_t* arg1) __asm__("_ZN9NetAppLib17BattleVideoPlayer10VIDEO_DATA19IsPlayerTrainerIconERNS0_11PLAYER_DATAE");
extern "C" bool YellowAuto_00456400(uint8_t* arg0, uint32_t* arg1) {
(void)arg0; return arg1[0] == 0 || arg1[0] == 1;
}
#endif
