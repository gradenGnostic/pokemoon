// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004522E8
uint32_t* GetLayoutResourceID(void*, int32_t);
void* GetLayoutWork(void*, int32_t);
void* GetPartsPane(int32_t, int32_t);
void* GetTextBoxPane(void*, int32_t, int32_t, uint32_t*);
void* GetString(void*, int32_t, int32_t);
void SetTextBoxPaneString(void*, void*, void*);
extern "C" uint32_t* YellowAuto_004522e8(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib11JoinFestaUI32JoinFestaPlayerListLowerViewBase22SetVisibleDecideButtonEb");
extern "C" uint32_t* YellowAuto_004522e8(uint8_t* arg0, bool arg1) {
uint32_t local_20;
uint32_t *tmp = GetLayoutResourceID(arg0, 0);
local_20 = *tmp;
void *work = GetLayoutWork(arg0, 0);
void *pane = GetPartsPane((int32_t)work, 0xc0);
void *text = GetTextBoxPane(work, (int32_t)pane, 0x13, &local_20);
void *msg = GetString(*(void **)(*(uint32_t *)(arg0 + 0xa0) + 0x30), 0x2b, 0x86);
SetTextBoxPaneString(arg0, text, msg);
*(uint8_t *)((uint8_t *)pane + 0x44) = (*(uint8_t *)((uint8_t *)pane + 0x44) & 0xfe) | arg1;
return &local_20;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00452388
uint32_t* GetLayoutResourceID(void*, int32_t);
void* GetLayoutWork(void*, int32_t);
void* GetPartsPane(int32_t, int32_t);
void* GetTextBoxPane(void*, int32_t, int32_t, uint32_t*);
void* GetString(void*, int32_t, int32_t);
void SetTextBoxPaneString(void*, void*, void*);
extern "C" uint32_t* YellowAuto_00452388(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib11JoinFestaUI32JoinFestaPlayerListLowerViewBase22SetVisibleUpdateButtonEb");
extern "C" uint32_t* YellowAuto_00452388(uint8_t* arg0, bool arg1) {
uint32_t local_20;
uint32_t *tmp = GetLayoutResourceID(arg0, 0);
local_20 = *tmp;
void *work = GetLayoutWork(arg0, 0);
void *pane = GetPartsPane((int32_t)work, 0xbd);
void *text = GetTextBoxPane(work, (int32_t)pane, 0x13, &local_20);
void *msg = GetString(*(void **)(*(uint32_t *)(arg0 + 0xa0) + 0x30), 0x2b, 0x85);
SetTextBoxPaneString(arg0, text, msg);
*(uint8_t *)((uint8_t *)pane + 0x44) = (*(uint8_t *)((uint8_t *)pane + 0x44) & 0xfe) | arg1;
return &local_20;
}
#endif
