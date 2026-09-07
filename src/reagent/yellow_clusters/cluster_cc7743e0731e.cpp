// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AE7F8
bool IsDrawingNode(uint8_t*);
void AddDrawingNode(uint8_t*);
extern "C" void YellowAuto_004ae7f8(uint8_t* arg0, uint8_t* arg1) __asm__("_ZThn188_N4gfl215renderingengine10scenegraph8instance17ModelInstanceNode8PostDrawERNS0_8renderer11RenderStateE");
extern "C" void YellowAuto_004ae7f8(uint8_t* arg0, uint8_t* arg1) {
(void)arg1; if (!IsDrawingNode(arg0 - 188)) AddDrawingNode(arg0 - 188);
}
#endif
