// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045688C
uint32_t VideoDataManager_GetListCount(const uint8_t* arg0);
void* VideoDataManager_GetListAt(const uint8_t* arg0, uint32_t arg1);
extern "C" void* YellowAuto_0045688c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib17BattleVideoPlayer16VideoDataManager11GetListDataEj");
extern "C" void* YellowAuto_0045688c(uint8_t* arg0, uint32_t arg1) {
if (VideoDataManager_GetListCount(arg0) <= arg1) return 0; return VideoDataManager_GetListAt(arg0, arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045693C
uint32_t VideoDataManager_GetDelCount(const uint8_t* arg0);
void* VideoDataManager_GetDelAt(const uint8_t* arg0, uint32_t arg1);
extern "C" bool YellowAuto_0045693c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib17BattleVideoPlayer16VideoDataManager13GetDataDelFlgEj");
extern "C" bool YellowAuto_0045693c(uint8_t* arg0, uint32_t arg1) {
if (VideoDataManager_GetDelCount(arg0) <= arg1) return false; return *(uint8_t*)((uint8_t*)VideoDataManager_GetDelAt(arg0, arg1) + 9) == (uint8_t)1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004578C0
uint8_t VideoDataManager_GetUploadFlag(const uint8_t* arg0);
extern "C" bool YellowAuto_004578c0(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib17BattleVideoPlayer16VideoDataManager17StartUploadCancelEPNS0_10VIDEO_DATAE");
extern "C" bool YellowAuto_004578c0(uint8_t* arg0, void* arg1) {
*(uint32_t*)(arg0 + 1154688) = (uint32_t)0; *(arg0 + 1154692) = (uint8_t)0; *(arg0 + 1154693) = (uint8_t)0; *(arg0 + 1154694) = (uint8_t)1; if (arg1 == (void*)0) return false; if (VideoDataManager_GetUploadFlag(arg0) == (uint8_t)0) return false; *(void**)(arg0 + 1154688) = arg1; return true;
}
#endif
