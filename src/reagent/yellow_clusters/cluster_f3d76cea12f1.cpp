// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00323510
void FUN_00323ea8(uint8_t*, uint8_t*);
void FUN_0057ca8c(uint8_t*, uint8_t*, uint32_t);
extern uint32_t DAT_003235b0;
extern uint32_t* DAT_003235b4;
extern "C" void YellowAuto_00323510(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph17SceneGraphManager17TraverseModelFastEPNS1_7DagNodeE");
extern "C" void YellowAuto_00323510(uint8_t* arg0) {
if (!arg0) return; uint8_t* obj = *(uint8_t**)(arg0 + 8); uint8_t* (*fn)(uint8_t*) = *(uint8_t* (**)(uint8_t*))(obj + 8); uint8_t* e = fn(arg0 + 8); uint32_t want = *DAT_003235b4; for (; e; e = *(uint8_t**)(e + 4)) if (*(uint32_t*)e == want) break; if (!e) return; uint32_t visitor[3]; visitor[0] = DAT_003235b0; visitor[1] = 0; visitor[2] = 0; FUN_00323ea8((uint8_t*)visitor, arg0); uint8_t* child = *(uint8_t**)(arg0 + 16); if (child) FUN_0057ca8c(child, (uint8_t*)visitor, 63);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00323608
void FUN_0057cb24(uint8_t*, uint8_t*, uint32_t);
extern uint32_t DAT_003236f4;
extern uint8_t** DAT_003236f8;
extern "C" void YellowAuto_00323608(const uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph17SceneGraphManager22TraverseApplyBillboardEPNS_4math8Matrix34E");
extern "C" void YellowAuto_00323608(const uint8_t* arg0) {
uint32_t m[16]; const uint32_t* s = (const uint32_t*)arg0; for (uint32_t i = 0; i < 12; ++i) m[i] = s[i]; m[12] = 0; m[13] = 0; m[14] = 0; m[15] = 0x3F800000; uint32_t visitor[4]; visitor[0] = DAT_003236f4; *(uint8_t**)(visitor + 1) = (uint8_t*)m; visitor[2] = 0; visitor[3] = 0; uint8_t* mgr = *DAT_003236f8; uint8_t* root = *(uint8_t**)(mgr + 32); uint8_t* child = *(uint8_t**)(root + 16); if (child) FUN_0057cb24(child, (uint8_t*)visitor, 63);
}
#endif
