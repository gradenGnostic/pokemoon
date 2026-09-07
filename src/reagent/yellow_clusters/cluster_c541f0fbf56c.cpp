// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00324A74
extern "C" bool YellowAuto_00324a74(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph7DagNode11RemoveChildEPS2_");
extern "C" bool YellowAuto_00324a74(uint8_t* arg0, uint8_t* arg1) {
if (*reinterpret_cast<uint32_t*>(arg0 + 16) == 0) return false; if (reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg1 + 12)) != arg0) return false; if (reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 16)) == arg1) *reinterpret_cast<uint32_t*>(arg0 + 16) = *reinterpret_cast<uint32_t*>(arg1 + 24); if (*reinterpret_cast<uint32_t*>(arg1 + 20) != 0) *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg1 + 20)) + 24) = *reinterpret_cast<uint32_t*>(arg1 + 24); if (*reinterpret_cast<uint32_t*>(arg1 + 24) != 0) *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg1 + 24)) + 20) = *reinterpret_cast<uint32_t*>(arg1 + 20); *reinterpret_cast<uint32_t*>(arg1 + 12) = 0; *reinterpret_cast<uint32_t*>(arg1 + 24) = 0; *reinterpret_cast<uint32_t*>(arg1 + 20) = 0; *reinterpret_cast<uint32_t*>(arg0 + 28) = *reinterpret_cast<uint32_t*>(arg0 + 28) - 1; return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00324BB0
extern "C" uint8_t* YellowAuto_00324bb0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph7DagNode8GetChildEj");
extern "C" uint8_t* YellowAuto_00324bb0(uint8_t* arg0, uint32_t arg1) {
if (arg1 == 0) return reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 16)); arg0 = reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 16)) + 24)); while (arg0 != 0) { arg1 = arg1 - 1; if (arg1 == 0) return arg0; arg0 = reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 24)); } return 0;
}
#endif
