// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003236FC
void TraverseSiblingFast(void*, void*, int32_t);
extern uint32_t _stat_323738;
extern "C" void YellowAuto_003236fc(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph17SceneGraphManager26TraverseModelFastFromChildEPNS1_7DagNodeE");
extern "C" void YellowAuto_003236fc(uint8_t* arg0) {
uint32_t _v[3]; _v[0] = _stat_323738; _v[1] = 0; _v[2] = 0; uint8_t* _c = *(uint8_t**)(arg0 + 16); if (_c != (uint8_t*)0) TraverseSiblingFast(_c, (void*)_v, 63);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003235B8
void TraverseSiblingFast(void*, void*, int32_t);
extern uint8_t* s_Gp;
extern uint32_t _stat_323600;
extern "C" void YellowAuto_003235b8() __asm__("_ZN4gfl215renderingengine10scenegraph17SceneGraphManager17TraverseModelFastEv");
extern "C" void YellowAuto_003235b8() {
uint32_t _v[3]; _v[0] = _stat_323600; _v[1] = 0; _v[2] = 0; uint8_t* _r = *(uint8_t**)(s_Gp + 32); uint8_t* _c = *(uint8_t**)(_r + 16); if (_c != (uint8_t*)0) TraverseSiblingFast(_c, (void*)_v, 63);
}
#endif
