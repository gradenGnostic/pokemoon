// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D4574
void* GetHeap(void*, int32_t);
void* operator_new(uint32_t, void*);
void* GameEvent(void*, void*);
void* Heap(void*);
void CallEvent(void*, void*);
extern "C" void* YellowAuto_002d4574(const uint8_t* arg0, int32_t arg1) __asm__("_ZN3App5Event12ShopBuyEvent10StartEventEPN7GameSys11GameManagerE");
extern "C" void* YellowAuto_002d4574(const uint8_t* arg0, int32_t arg1) {
void* v0 = GetHeap(*(void**)(arg0 + 0x20), arg1); void* v1 = operator_new(0x8c, v0); void* v2 = v1 != 0 ? GameEvent(v1, GetHeap(*(void**)(arg0 + 0x20), arg1)) : 0; if (v2 != 0) *(uint32_t*)v2 = *(uint32_t*)0x2d4630; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x48) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x4c) = 0; if (v2 != 0) v2 = (uint8_t*)Heap((uint8_t*)v2 + 0x50) - 0x50; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x74) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x78) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x7c) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x80) = 0; if (v2 != 0) *(uint8_t*)((uint8_t*)v2 + 0x84) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x88) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x18) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x1c) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x20) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x24) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x28) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x2c) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x30) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x34) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x38) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x3c) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x40) = 0; if (v2 != 0) *(uint32_t*)((uint8_t*)v2 + 0x44) = 0; CallEvent(*(void**)(arg0 + 0x20), v2); return v2;
}
#endif
