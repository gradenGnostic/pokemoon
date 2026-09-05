// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AA54C
int32_t UIView_IsDrawing(const void* arg0);
int32_t NetAppMenuCursor_CanDestroy(const void* arg0);
extern "C" bool YellowAuto_004aa54c(const uint8_t* arg0) __asm__("_ZNK9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase9IsDrawingEv");
extern "C" bool YellowAuto_004aa54c(const uint8_t* arg0) {
int32_t v0 = NetAppMenuCursor_CanDestroy((const void *)(arg0 + 0xa4));
int32_t v1 = UIView_IsDrawing(arg0);
return v1 != 0 || v0 == 0;
}
#endif
