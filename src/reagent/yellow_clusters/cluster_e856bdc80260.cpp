// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00313864
extern "C" void YellowAuto_00313864(int32_t arg0, int32_t arg1, uint8_t* arg2) __asm__("_ZN3btl18GetBgComponentDataENS_2bg16bgsys_far_typeIDENS0_17bgsys_near_typeIDEPNS_15BgComponentDataE");
extern "C" void YellowAuto_00313864(int32_t arg0, int32_t arg1, uint8_t* arg2) {
arg2[0] = (uint8_t)*(uint32_t*)(*(uint32_t*)0x0031390C + (uint32_t)arg1 * 8u);
arg2[1] = (uint8_t)*(uint32_t*)(*(uint32_t*)0x0031390C - 0x1280u + (uint32_t)arg0 * 16u + 0x4u);
arg2[2] = (uint8_t)*(uint32_t*)(*(uint32_t*)0x0031390C - 0x1280u + (uint32_t)arg0 * 16u + 0x8u);
arg2[3] = (uint8_t)(*(uint32_t*)(*(uint32_t*)0x0031390C - 0x1280u + (uint32_t)arg0 * 16u) != 0u);
arg2[4] = (uint8_t)(*(uint32_t*)(*(uint32_t*)0x0031390C - 0x1280u + (uint32_t)arg0 * 16u + 0xCu) != 0u);
arg2[5] = (uint8_t)(*(uint32_t*)(*(uint32_t*)0x00313910 + (*(uint32_t*)(*(uint32_t*)0x0031390C + (uint32_t)arg1 * 8u + 0x4u) & 0xFFu) * 24u + 0x14u) != 0u);
*(uint16_t*)(arg2 + 6u) = (uint16_t)*(uint32_t*)(*(uint32_t*)0x00313910 + (*(uint32_t*)(*(uint32_t*)0x0031390C + (uint32_t)arg1 * 8u + 0x4u) & 0xFFu) * 24u + 0x4u);
*(uint16_t*)(arg2 + 8u) = (uint16_t)*(uint32_t*)(*(uint32_t*)0x00313910 + (*(uint32_t*)(*(uint32_t*)0x0031390C + (uint32_t)arg1 * 8u + 0x4u) & 0xFFu) * 24u + 0x10u);
arg2[10] = (uint8_t)*(uint32_t*)(*(uint32_t*)0x00313910 + (*(uint32_t*)(*(uint32_t*)0x0031390C + (uint32_t)arg1 * 8u + 0x4u) & 0xFFu) * 24u + 0xCu);
arg2[11] = (uint8_t)*(uint32_t*)(*(uint32_t*)0x00313910 + (*(uint32_t*)(*(uint32_t*)0x0031390C + (uint32_t)arg1 * 8u + 0x4u) & 0xFFu) * 24u);
arg2[12] = (uint8_t)*(uint32_t*)(*(uint32_t*)0x00313910 + (*(uint32_t*)(*(uint32_t*)0x0031390C + (uint32_t)arg1 * 8u + 0x4u) & 0xFFu) * 24u + 0x8u);
}
#endif
