// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E60FC
void Enter(void*);
void Leave(void*);
extern "C" void YellowAuto_003e60fc(uint8_t* arg0, void* arg1) __asm__("_ZN6System18SystemEventManager25RemoveSystemEventListenerEPNS_19SystemEventListenerE");
extern "C" void YellowAuto_003e60fc(uint8_t* arg0, void* arg1) {
Enter(arg0 + 136);
for (uint32_t i = 0; i < 32; ++i) {
if (*(uint32_t*)(arg0 + 8 + i * 4) == (uint32_t)arg1) {
*(uint32_t*)(arg0 + 8 + i * 4) = 0;
Leave(arg0 + 136);
return;
}
}
Leave(arg0 + 136);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E6084
void Enter(void*);
void Leave(void*);
extern "C" void YellowAuto_003e6084(uint8_t* arg0, void* arg1) __asm__("_ZN6System18SystemEventManager25RegistSystemEventListenerEPNS_19SystemEventListenerE");
extern "C" void YellowAuto_003e6084(uint8_t* arg0, void* arg1) {
Enter(arg0 + 136);
for (uint32_t i = 0; i < 32; ++i) {
if (*(uint32_t*)(arg0 + 8 + i * 4) == (uint32_t)arg1) {
Leave(arg0 + 136);
return;
}
}
for (uint32_t i = 0; i < 32; ++i) {
if (*(uint32_t*)(arg0 + 8 + i * 4) == 0) {
*(uint32_t*)(arg0 + 8 + i * 4) = (uint32_t)arg1;
Leave(arg0 + 136);
return;
}
}
Leave(arg0 + 136);
}
#endif
