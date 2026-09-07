// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CD88
extern "C" const void* YellowAuto_0032cd88(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryTexData7GetDataEj");
extern "C" const void* YellowAuto_0032cd88(const uint8_t* arg0, uint32_t arg1) {
const uint32_t count = *reinterpret_cast<const uint32_t*>(arg0 + 12);
if (arg1 >= count)
return static_cast<const void*>(0);
const uint8_t* p = *reinterpret_cast<const uint8_t* const*>(arg0 + 4);
for (uint32_t i = 0; i < arg1; ++i)
p = p + 16 + *reinterpret_cast<const uint32_t*>(p + 8);
return static_cast<const void*>(p + 16);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CCD4
extern "C" uint32_t YellowAuto_0032ccd4(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryTexData11GetDataSizeEj");
extern "C" uint32_t YellowAuto_0032ccd4(const uint8_t* arg0, uint32_t arg1) {
const uint32_t count = *reinterpret_cast<const uint32_t*>(arg0 + 12);
if (arg1 >= count)
return 0;
const uint8_t* p = *reinterpret_cast<const uint8_t* const*>(arg0 + 4);
for (uint32_t i = 0; i < arg1; ++i)
p = p + 16 + *reinterpret_cast<const uint32_t*>(p + 8);
return *reinterpret_cast<const uint32_t*>(p + 8);
}
#endif
