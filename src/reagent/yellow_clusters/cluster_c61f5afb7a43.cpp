// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E545C
void func_00336910(uint8_t*, const uint8_t*);
void func_003363e4(uint8_t*);
void func_003347b8(void*);
extern "C" void YellowAuto_003e545c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN6System15ModelRenderPath6UpdateERKN4gfl215renderingengine8renderer17RenderingPipeLine11DrawContextE");
extern "C" void YellowAuto_003e545c(uint8_t* arg0, const uint8_t* arg1) {
func_00336910(arg0, arg1);
func_003363e4(arg0);
func_003347b8(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 4)));
}
#endif
