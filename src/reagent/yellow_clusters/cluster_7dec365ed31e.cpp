// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00361838
void FUN_0035fcc4(uint8_t*);
extern "C" void YellowAuto_00361838(uint8_t* arg0) __asm__("_ZN4gfl29animation17AnimationPackList9UnloadAllEv");
extern "C" void YellowAuto_00361838(uint8_t* arg0) {
for (uint32_t i = 0; i < *(uint32_t*)(arg0 + 4); ++i) { FUN_0035fcc4(*(uint8_t**)(arg0) + i * 8); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003617BC
void FUN_0035fcc4(uint8_t*);
void __aeabi_vec_delete(void*, void*);
extern void* DAT_00361834;
extern "C" void YellowAuto_003617bc(uint8_t* arg0) __asm__("_ZN4gfl29animation17AnimationPackList8FinalizeEv");
extern "C" void YellowAuto_003617bc(uint8_t* arg0) {
for (uint32_t i = 0; i < *(uint32_t*)(arg0 + 4); ++i) { FUN_0035fcc4(*(uint8_t**)(arg0) + i * 8); } if (*(uint8_t**)(arg0) != 0) { __aeabi_vec_delete(*(void**)(arg0), DAT_00361834); *(uint8_t**)(arg0) = 0; } *(uint32_t*)(arg0 + 4) = 0;
}
#endif
