// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003308BC
extern "C" bool YellowAuto_003308bc(uint8_t* arg0, uint8_t* arg1, int32_t arg2) __asm__("_ZN4gfl215renderingengine10scenegraph8resource24GfBinaryCollisionMdlData12SetModelDataEPci");
extern "C" bool YellowAuto_003308bc(uint8_t* arg0, uint8_t* arg1, int32_t arg2) {
if (arg1 == nullptr) return false;
if (*reinterpret_cast<const uint32_t*>(arg1) != *reinterpret_cast<const uint32_t*>(0x0033090CU)) return false;
*reinterpret_cast<int32_t*>(arg0 + 16) = arg2 - 4;
*reinterpret_cast<uint32_t*>(arg0 + 12) = 1U;
*reinterpret_cast<uint32_t*>(arg0 + 4) = reinterpret_cast<uint32_t>(arg1 + 4);
*reinterpret_cast<uint32_t*>(arg0 + 8) = 0U;
return true;
}
#endif
