// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00448A5C
uint8_t* GetLayoutWork(uint8_t*, int32_t);
uint32_t* GetLayoutResourceID(uint8_t*, int32_t);
uint8_t* GetPartsPane(uint8_t*, int32_t);
uint8_t* GetTextBoxPane(uint8_t*, uint8_t*, int32_t, uint32_t*);
uint8_t* GetString(uint8_t*, uint32_t, uint32_t);
void SetTextBoxPaneString(uint8_t*, uint8_t*, uint8_t*);
extern "C" void YellowAuto_00448a5c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib11JoinFestaUI23JoinFestaAlertLowerView10SetMessageEj");
extern "C" void YellowAuto_00448a5c(uint8_t* arg0, uint32_t arg1) {
uint8_t* g = *(uint8_t**)(arg0 + 0x60);
uint8_t* w = *(uint8_t**)(arg0 + 0xA4);
uint8_t* m = *(uint8_t**)(w + 0x30);
uint8_t* l = GetLayoutWork(g, 0);
uint32_t r = *GetLayoutResourceID(g, 0);
uint8_t* q = GetPartsPane(l, 169);
uint8_t* t = GetTextBoxPane(l, q, 60, &r);
uint8_t* s = GetString(m, 43, arg1);
SetTextBoxPaneString(g, t, s);
*(uint32_t*)(arg0 + 0xAC) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00448AEC
uint8_t* GetLayoutWork(uint8_t*, int32_t);
uint32_t* GetLayoutResourceID(uint8_t*, int32_t);
uint8_t* GetPartsPane(uint8_t*, int32_t);
uint8_t* GetTextBoxPane(uint8_t*, uint8_t*, int32_t, uint32_t*);
void SetRegisterNumber(uint8_t*, int32_t, uint32_t, int32_t, int32_t, int32_t);
uint8_t* GetString(uint8_t*, uint32_t, uint32_t);
void SetTextBoxPaneStringExpand(uint8_t*, uint8_t*, uint8_t*);
extern "C" void YellowAuto_00448aec(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN9NetAppLib11JoinFestaUI23JoinFestaAlertLowerView10SetMessageEjj");
extern "C" void YellowAuto_00448aec(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint8_t* g = *(uint8_t**)(arg0 + 0x60);
uint8_t* w = *(uint8_t**)(arg0 + 0xA4);
uint8_t* m = *(uint8_t**)(w + 0x30);
uint8_t* l = GetLayoutWork(g, 0);
uint32_t r = *GetLayoutResourceID(g, 0);
uint8_t* q = GetPartsPane(l, 169);
uint8_t* t = GetTextBoxPane(l, q, 60, &r);
SetRegisterNumber(g, 0, arg2, 2, 0, 1);
uint8_t* s = GetString(m, 43, arg1);
SetTextBoxPaneStringExpand(g, t, s);
*(uint32_t*)(arg0 + 0xAC) = arg1;
}
#endif
