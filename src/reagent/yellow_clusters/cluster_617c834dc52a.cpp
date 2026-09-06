// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036C0EC
extern "C" void YellowAuto_0036c0ec(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl29collision14CollisionModel10InitializeEPNS_15renderingengine10scenegraph8resource12ResourceNodeE");
extern "C" void YellowAuto_0036c0ec(uint8_t* arg0, uint8_t* arg1) {
uint8_t *v0 = *(uint8_t **)(arg1 + 0x10);
uint32_t v1 = **(uint32_t **)0x0036c13c;
uint8_t *v2 = *(uint8_t **)(v0 + 8);
uint8_t *v3 = ((uint8_t *(*)(uint8_t *))(*(uint32_t *)(v2 + 8)))(v0 + 8);
for (; v3 != 0; v3 = *(uint8_t **)(v3 + 4))
  if (v1 == *(uint32_t *)v3)
    goto found;
*(uint8_t **)arg0 = 0;
return;
found:
*(uint8_t **)arg0 = v0;
}
#endif
