// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039D0D0
void FUN_00324b28(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0039d0d0(uint8_t* arg0) __asm__("_ZN5Field9MoveModel14FieldMoveModel16RemoveParentNodeEv");
extern "C" void YellowAuto_0039d0d0(uint8_t* arg0) {
if (*reinterpret_cast<void**>(arg0 + 0xF4) != nullptr) return; uint8_t* v0 = *reinterpret_cast<uint8_t**>(arg0 + 0xF8); uint8_t* v1 = *reinterpret_cast<uint8_t**>(v0 + 0x4); *reinterpret_cast<void**>(arg0 + 0xF4) = *reinterpret_cast<void**>(v1 + 0xC); FUN_00324b28(v1, v0);
}
#endif
