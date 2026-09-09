// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002A88DC
extern const float Helper_DefaultValue;
extern "C" void YellowAuto_002a88dc(uint8_t* arg0, const void* arg1) __asm__("_ZN2nw3lyt7TextBox7SetFontEPKNS_4font4FontE");
extern "C" void YellowAuto_002a88dc(uint8_t* arg0, const void* arg1) {
if (arg1 != nullptr) {
  uint32_t v0 = *reinterpret_cast<const uint32_t*>(arg1);
  int32_t (*v1)(const void*) = *reinterpret_cast<int32_t (**)(const void*)>(v0 + 0x50);
  if (v1(arg1) != 1) return;
}
uint8_t v2 = *reinterpret_cast<uint8_t*>(arg0 + 0xD0);
const void* v3 = *reinterpret_cast<const void* const*>(arg0 + 0xB4);
uint32_t v4 = (v3 != arg1) ? 1u : 0u;
*reinterpret_cast<uint8_t*>(arg0 + 0xD0) = static_cast<uint8_t>(v2 | (v4 << 2));
if (v4 == 0u) return;
*reinterpret_cast<const void**>(arg0 + 0xB4) = arg1;
if (arg1 == nullptr) {
  float v5 = Helper_DefaultValue;
  float v6 = *reinterpret_cast<float*>(arg0 + 0xB8);
  float v7 = *reinterpret_cast<float*>(arg0 + 0xBC);
  bool v8 = (v6 == v5) && (v7 == v5);
  bool v9 = !v8;
  uint8_t v10 = *reinterpret_cast<uint8_t*>(arg0 + 0xD0);
  *reinterpret_cast<uint8_t*>(arg0 + 0xD0) = static_cast<uint8_t>(v10 | ((v9 ? 1u : 0u) << 2));
  if (!v9) return;
  *reinterpret_cast<float*>(arg0 + 0xB8) = v5;
  *reinterpret_cast<float*>(arg0 + 0xBC) = v5;
} else {
  uint32_t v11 = *reinterpret_cast<const uint32_t*>(arg1);
  int32_t (*v12)(const void*) = *reinterpret_cast<int32_t (**)(const void*)>(v11 + 0xC);
  int32_t v13 = v12(arg1);
  float v14 = static_cast<float>(v13);
  const void* v15 = *reinterpret_cast<const void* const*>(arg0 + 0xB4);
  uint32_t v16 = *reinterpret_cast<const uint32_t*>(v15);
  int32_t (*v17)(const void*) = *reinterpret_cast<int32_t (**)(const void*)>(v16 + 0x10);
  int32_t v18 = v17(v15);
  float v19 = static_cast<float>(v18);
  float v20 = *reinterpret_cast<float*>(arg0 + 0xB8);
  float v21 = *reinterpret_cast<float*>(arg0 + 0xBC);
  bool v22 = (v20 == v14) && (v21 == v19);
  bool v23 = !v22;
  uint8_t v24 = *reinterpret_cast<uint8_t*>(arg0 + 0xD0);
  *reinterpret_cast<uint8_t*>(arg0 + 0xD0) = static_cast<uint8_t>(v24 | ((v23 ? 1u : 0u) << 2));
  if (!v23) return;
  *reinterpret_cast<float*>(arg0 + 0xB8) = v14;
  *reinterpret_cast<float*>(arg0 + 0xBC) = v19;
}
}
#endif
