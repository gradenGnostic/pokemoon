// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032A46C
extern "C" void YellowAuto_0032a46c(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance17ModelInstanceNode20SetDrawCheckListenerEi");
extern "C" void YellowAuto_0032a46c(uint8_t* arg0, int32_t arg1) {
uint32_t i = 0;
if (*reinterpret_cast<uint32_t*>(arg0 + 0x108) == 0) return;
uint8_t* b = *reinterpret_cast<uint8_t**>(arg0 + 0x10C);
do {
uint8_t* v = arg1 == 0 ? reinterpret_cast<uint8_t*>(0) : arg0 + 0xBC;
*reinterpret_cast<uint8_t**>(b + i * 0xA0 + 0x28) = v;
i = i + 1;
} while (i < *reinterpret_cast<uint32_t*>(arg0 + 0x108));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032A820
void FUN_0032ff70(uint8_t*);
extern "C" void YellowAuto_0032a820(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8instance17ModelInstanceNode42CopyMaterialDepthStencilStateToStateObjectEv");
extern "C" void YellowAuto_0032a820(uint8_t* arg0) {
uint32_t i = 0;
if (*reinterpret_cast<int32_t*>(arg0 + 0xC0) <= 0) return;
uint8_t* b = *reinterpret_cast<uint8_t**>(arg0 + 0xE8);
do {
uint8_t* p = *reinterpret_cast<uint8_t**>(b + i * 0x2B0 + 0x28);
FUN_0032ff70(p);
i = i + 1;
} while (i < *reinterpret_cast<uint32_t*>(arg0 + 0xC0));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032A7B0
extern "C" uint8_t* YellowAuto_0032a7b0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance17ModelInstanceNode33GetMaterialInstanceNodeByNameHashEj");
extern "C" uint8_t* YellowAuto_0032a7b0(uint8_t* arg0, uint32_t arg1) {
uint32_t i = 0;
if (*reinterpret_cast<int32_t*>(arg0 + 0xC0) <= 0) return reinterpret_cast<uint8_t*>(0);
uint8_t* b = *reinterpret_cast<uint8_t**>(arg0 + 0xE8);
do {
uint8_t* e = b + i * 0x2B0;
uint8_t* o = *reinterpret_cast<uint8_t**>(e + 0x28);
uint8_t* vt = *reinterpret_cast<uint8_t**>(o);
uint32_t(* f)(uint8_t*) = *reinterpret_cast<uint32_t(**)(uint8_t*)>(vt + 0x14);
uint32_t h = f(o);
if (h == arg1) return e;
i = i + 1;
} while (i < *reinterpret_cast<uint32_t*>(arg0 + 0xC0));
return reinterpret_cast<uint8_t*>(0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032B044
int32_t FUN_003233a0(uint8_t*);
void FUN_00323448(uint8_t*);
extern "C" void YellowAuto_0032b044(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance17ModelInstanceNode8PostDrawERNS0_8renderer11RenderStateE");
extern "C" void YellowAuto_0032b044(uint8_t* arg0, uint8_t* arg1) {
if (FUN_003233a0(arg0) != 0) return; FUN_00323448(arg0);
}
#endif
