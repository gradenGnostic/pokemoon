// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00324B48
void RemoveChild(uint8_t*, uint8_t*);
extern "C" void YellowAuto_00324b48(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph7DagNode8AddChildEPS2_");
extern "C" void YellowAuto_00324b48(uint8_t* arg0, uint8_t* arg1) {
if (*(uint8_t**)(arg1 + 12) != (uint8_t*)0) RemoveChild(*(uint8_t**)(arg1 + 12), arg1); *(uint8_t**)(arg1 + 12) = arg0; uint8_t* v0 = *(uint8_t**)(arg0 + 16); if (v0 != (uint8_t*)0) *(uint8_t**)(v0 + 20) = arg1; *(uint8_t**)(arg1 + 20) = (uint8_t*)0; if (v0 != (uint8_t*)0) *(uint8_t**)(arg1 + 24) = v0; else *(uint8_t**)(arg1 + 24) = (uint8_t*)0; *(uint8_t**)(arg0 + 16) = arg1; *(int32_t*)(arg0 + 28) = *(int32_t*)(arg0 + 28) + 1;
}
#endif
