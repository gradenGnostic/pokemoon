// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045A6B8
void Update(void*);
extern "C" void YellowAuto_0045a6b8(void* arg0) __asm__("_ZN9NetAppLib2UI21NetAppPokeparaUtility8OnUpdateEv");
extern "C" void YellowAuto_0045a6b8(void* arg0) {
if (*(void **)(arg0 + 8) != (void *)0)
  Update(*(void **)(arg0 + 8));
return;
}
#endif
