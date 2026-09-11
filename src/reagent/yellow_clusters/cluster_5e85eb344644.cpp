// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00457F38
bool c457f38(const uint8_t*);
uint8_t* r457f38(uint8_t*);
void w457f38(uint8_t*, void*);
extern "C" bool YellowAuto_00457f38(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib17BattleVideoPlayer16VideoDataManager21StartSendPlayCompleteEPNS0_10VIDEO_DATAE");
extern "C" bool YellowAuto_00457f38(uint8_t* arg0, void* arg1) {
if (arg1 == (void*)0) return false; if (c457f38(arg0) == false) return false; *(uint8_t*)(r457f38(arg0) + 4) = (uint8_t)0; *(uint8_t*)(r457f38(arg0) + 5) = (uint8_t)1; w457f38(arg0, arg1); return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00458294
bool c458294(const uint8_t*);
uint8_t* r458294(uint8_t*);
void w458294(uint8_t*, void*);
extern "C" bool YellowAuto_00458294(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib17BattleVideoPlayer16VideoDataManager26StartIncPlayCountVideoDataEPNS0_10VIDEO_DATAE");
extern "C" bool YellowAuto_00458294(uint8_t* arg0, void* arg1) {
if (arg1 == (void*)0) return false; if (c458294(arg0) == false) return false; *(uint8_t*)(r458294(arg0) + 4) = (uint8_t)0; *(uint8_t*)(r458294(arg0) + 5) = (uint8_t)1; w458294(arg0, arg1); return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004568D4
bool c4568d4(const uint8_t*);
uint8_t* r4568d4(uint8_t*);
void w4568d4(uint8_t*, void*);
extern "C" bool YellowAuto_004568d4(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib17BattleVideoPlayer16VideoDataManager11StartUploadEPNS0_10VIDEO_DATAE");
extern "C" bool YellowAuto_004568d4(uint8_t* arg0, void* arg1) {
*(uint8_t*)(r4568d4(arg0) + 4) = (uint8_t)0; *(uint8_t*)(r4568d4(arg0) + 5) = (uint8_t)1; *(uint8_t*)(r4568d4(arg0) + 6) = (uint8_t)0; w4568d4(arg0, (void*)0); if (arg1 == (void*)0) return false; if (c4568d4(arg0) == false) return false; w4568d4(arg0, arg1); return true;
}
#endif
