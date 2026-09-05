// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045227C
void* GetLayoutWork(void* arg0, int32_t arg1);
void* GetPartsPane(void* arg0, int32_t arg1);
extern "C" void YellowAuto_0045227c(void* arg0, bool arg1) __asm__("_ZN9NetAppLib11JoinFestaUI32JoinFestaPlayerListLowerViewBase20SetVisibleBackButtonEb");
extern "C" void YellowAuto_0045227c(void* arg0, bool arg1) {
void* work = GetLayoutWork(*(void**)((uint8_t*)arg0 + 0x60), 0); void* pane = GetPartsPane(work, 0xbb); *(uint8_t*)((uint8_t*)pane + 0x44) = (uint8_t)((*(uint8_t*)((uint8_t*)pane + 0x44) & 0xfe) | (arg1 ? 1 : 0));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004522AC
void* GetLayoutWork(void* arg0, int32_t arg1);
void* GetPartsPane(void* arg0, int32_t arg1);
extern "C" void YellowAuto_004522ac(void* arg0, bool arg1) __asm__("_ZN9NetAppLib11JoinFestaUI32JoinFestaPlayerListLowerViewBase20SetVisibleInfoButtonEb");
extern "C" void YellowAuto_004522ac(void* arg0, bool arg1) {
void* work = GetLayoutWork(*(void**)((uint8_t*)arg0 + 0x60), 0); void* pane = GetPartsPane(work, 0xff); *(uint8_t*)((uint8_t*)pane + 0x44) = (uint8_t)((*(uint8_t*)((uint8_t*)pane + 0x44) & 0xfe) | (arg1 ? 1 : 0));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004522DC
void SetVisible(void* arg0, bool arg1, int32_t arg2);
extern "C" void YellowAuto_004522dc(void* arg0, bool arg1) __asm__("_ZN9NetAppLib11JoinFestaUI32JoinFestaPlayerListLowerViewBase20SetVisibleMenuCursorEb");
extern "C" void YellowAuto_004522dc(void* arg0, bool arg1) {
SetVisible(*(void**)((uint8_t*)arg0 + 0xac), arg1, 3);
}
#endif
