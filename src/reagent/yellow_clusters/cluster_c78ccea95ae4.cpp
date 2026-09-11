// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00336F30
extern "C" void YellowAuto_00336f30(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer17RenderingPipeLine6UpdateEv");
extern "C" void YellowAuto_00336f30(uint8_t* arg0) {
uint32_t* vtable = *reinterpret_cast<uint32_t**>(arg0);
uint32_t (*f0)(uint8_t*) = reinterpret_cast<uint32_t(*)(uint8_t*)>(vtable[2]);
uint8_t* (*f1)(uint8_t*) = reinterpret_cast<uint8_t*(*)(uint8_t*)>(vtable[3]);
uint32_t (*f2)(uint8_t*) = reinterpret_cast<uint32_t(*)(uint8_t*)>(vtable[4]);
uint32_t c = f0(arg0);
while (c != 0) {
uint8_t* cur = f1(arg0);
if (cur != reinterpret_cast<uint8_t*>(0)) {
uint32_t* vt2 = *reinterpret_cast<uint32_t**>(cur);
void (*g)(uint8_t*, uint8_t*) = reinterpret_cast<void(*)(uint8_t*, uint8_t*)>(vt2[2]);
g(cur, arg0 + 4);
}
c = f2(arg0);
}
}
#endif
