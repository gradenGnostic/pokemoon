// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CEDF8
void sub_remove_from_super_view(uint8_t *);
void sub_view_destructor(uint8_t *);
extern "C" void YellowAuto_002cedf8(uint8_t* arg0) __asm__("_ZN9NetAppLib2UI17NetAppMessageMenuD1Ev");
extern "C" void YellowAuto_002cedf8(uint8_t* arg0) {
*(uint32_t *)(arg0) = 0x002cee7c; *(uint32_t *)(arg0 + 0x80) = 0x002ceee4; *(uint32_t *)(arg0 + 0x84) = 0x002ceef0; if (*(uint8_t **)(arg0 + 0x98) != (uint8_t *)0) sub_remove_from_super_view(*(uint8_t **)(arg0 + 0x98)); if (*(uint8_t **)(arg0 + 0x94) != (uint8_t *)0) sub_remove_from_super_view(*(uint8_t **)(arg0 + 0x94)); if (*(uint8_t **)(arg0 + 0x98) != (uint8_t *)0) (*(void (**)(uint8_t *))(*(uint32_t *)(*(uint8_t **)(arg0 + 0x98)) + 0x18))(*(uint8_t **)(arg0 + 0x98)), *(uint32_t *)(arg0 + 0x98) = 0; if (*(uint8_t **)(arg0 + 0x94) != (uint8_t *)0) (*(void (**)(uint8_t *))(*(uint32_t *)(*(uint8_t **)(arg0 + 0x94)) + 0x18))(*(uint8_t **)(arg0 + 0x94)), *(uint32_t *)(arg0 + 0x94) = 0; sub_view_destructor(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CEB14
uint8_t *sub_get_resource_buffer(uint8_t *, uint32_t);
uint8_t *sub_vtable_58(uint8_t *, uint8_t *);
void sub_add_sub_view(uint8_t *, uint8_t *);
uint8_t *sub_operator_new(uint32_t, uint8_t *);
uint8_t *sub_menu_window_ctor(uint8_t *, uint8_t *, uint32_t, uint32_t, uint32_t);
void sub_view_set_data(uint8_t *, uint8_t *);
extern "C" void YellowAuto_002ceb14(uint8_t* arg0, uint32_t arg1, uint8_t* arg2) __asm__("_ZN9NetAppLib2UI17NetAppMessageMenu5SetupEjPNS_7Message14MessageUtilityE");
extern "C" void YellowAuto_002ceb14(uint8_t* arg0, uint32_t arg1, uint8_t* arg2) {
*(uint8_t **)(arg0 + 0xac) = arg2; uint8_t *v0 = sub_get_resource_buffer(*(uint8_t **)(*(uint32_t *)(arg0 + 0xa8) + 0x28), arg1); uint8_t *v1 = sub_vtable_58(arg0, (uint8_t *)(arg0 + 0x84)); *(uint8_t **)(arg0 + 0x94) = v1; sub_add_sub_view(arg0, *(uint8_t **)(arg0 + 0x94)); uint8_t *v2 = sub_operator_new(0x15c, *(uint8_t **)(*(uint32_t *)(arg0 + 0x88) + 8)); if (v2 != (uint8_t *)0) v2 = sub_menu_window_ctor(v2, *(uint8_t **)(arg0 + 0x88), *(uint32_t *)(arg0 + 0x8c), 0, 1); *(uint8_t **)(arg0 + 0x98) = v2; *(uint8_t **)(*(uint32_t *)(arg0 + 0x98) + 0x154) = (uint8_t *)(arg0 + 0x80); sub_add_sub_view(*(uint8_t **)(arg0 + 0x94), *(uint8_t **)(arg0 + 0x98)); *(uint8_t *)(arg0 + 0x6d) = 0; *(uint8_t *)(*(uint32_t *)(arg0 + 0x98) + 0x6d) = 0; sub_view_set_data(*(uint8_t **)(arg0 + 0x94), v0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459B50
uint8_t *sub_get_message_data(uint8_t *, uint32_t);
void sub_show_message(uint8_t *, uint8_t *, uint32_t, bool, uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00459b50(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10) __asm__("_ZN9NetAppLib2UI17NetAppMessageMenu23ShowMessageWithListMenuEjjbjjjjjjj");
extern "C" void YellowAuto_00459b50(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10) {
if (*(uint8_t **)(arg0 + 0xac) != (uint8_t *)0) sub_show_message(arg0, sub_get_message_data(*(uint8_t **)(arg0 + 0xac), arg1), arg2, arg3, sub_get_message_data(*(uint8_t **)(arg0 + 0xac), arg4), arg5, arg6, arg7, arg8, arg9, arg10);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459BCC
extern "C" void YellowAuto_00459bcc(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN9NetAppLib2UI17NetAppMessageMenuC1EPNS_6System19ApplicationWorkBaseEPN3App4Tool15MessageMenuView13IEventHandlerE");
extern "C" void YellowAuto_00459bcc(uint8_t* arg0, void* arg1, void* arg2) {
*((void**)(arg0 + 0xAC)) = 0; *((void**)(arg0 + 0xA8)) = arg1; (void)arg2;
}
#endif
