// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A5348
uint32_t GetFieldMoveEventModelIndexFromFreeSpace(uint8_t* arg0);
extern "C" uint32_t YellowAuto_003a5348(uint8_t* arg0) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager40GetFieldMoveEventModelIndexFromFreeSpaceEv");
extern "C" uint32_t YellowAuto_003a5348(uint8_t* arg0) {
uint32_t uVar1 = 0x1f; uint32_t iVar2 = *(uint32_t *)(arg0 + 0x88); bool bVar3 = *(uint32_t *)(iVar2 + 0xbc) == 0; if (bVar3) { iVar2 = *(uint32_t *)(iVar2 + 0xc0); } if (!bVar3 || iVar2 != 0) { uVar1 = 0x20; } return uVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A4F64
void TerminateMoveModelResource(uint8_t* arg0, int32_t arg1);
extern "C" void YellowAuto_003a4f64(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager26TerminateMoveModelResourceENS0_19FIELD_MOVE_MODEL_IDE");
extern "C" void YellowAuto_003a4f64(uint8_t* arg0, int32_t arg1) {
uint8_t *obj = *(uint8_t **)(arg0 + (uint32_t)arg1 * 4u + 0xc); if (*(uint32_t *)(obj + 0xc0) != 0) { (*(void (**)(uint8_t *))(*(uint8_t **)obj + 0x48))(obj); } return;
}
#endif
