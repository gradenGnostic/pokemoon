// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00499710
extern "C" const void* YellowAuto_00499710(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK4gfl23lyt6LytRes10GetTextureEjj");
extern "C" const void* YellowAuto_00499710(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
const uint8_t* v_accessor = *reinterpret_cast<const uint8_t* const*>(arg0);
const uint8_t* v_name = static_cast<const uint8_t*>(nullptr);
if (arg2 < *reinterpret_cast<const uint16_t*>(arg0 + 10)) {
v_name = *reinterpret_cast<const uint8_t* const*>(*reinterpret_cast<const uint8_t* const*>(arg0 + 4) + 8 + arg2 * 32) + arg1 * 64;
}
const uint8_t* v_vtable = *reinterpret_cast<const uint8_t* const*>(v_accessor);
const void* (*v_fn)(const uint8_t*, const uint8_t*) = *reinterpret_cast<const void* (*const*)(const uint8_t*, const uint8_t*)>(v_vtable + 20);
return v_fn(v_accessor, v_name);
}
#endif
