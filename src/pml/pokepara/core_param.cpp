#include "pml/pokepara/core_param.hpp"

namespace {

struct CoreDataHeader {
    unsigned char unknown_00[8];
    unsigned int* personal_rnd;
};

extern "C" unsigned char CoreData_GetSeikaku(void*) asm("FUN_00490a14");
extern "C" unsigned char CoreData_GetParentSex(void*) asm("FUN_00491fb4");
extern "C" unsigned char CoreData_GetPokerus(void*) asm("FUN_004909e8");
extern "C" unsigned short CoreData_GetMonsNo(void*) asm("FUN_00491f88");
extern "C" unsigned short CoreData_GetItem(void*) asm("FUN_00491f28");
extern "C" unsigned int CoreData_GetSick(void*) asm("FUN_00491ce8");
extern "C" bool CoreData_Exists(void*) asm("FUN_0049103c");
extern "C" unsigned short CoreData_GetHp(void*) asm("FUN_00491a14");

} // namespace

namespace pml {
namespace pokepara {

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00491210
unsigned int CoreParam::GetPersonalRnd() const {
    return *static_cast<CoreDataHeader*>(core_data_)->personal_rnd;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049206C
unsigned char CoreParam::GetSeikaku() const {
    return CoreData_GetSeikaku(core_data_);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004923B4
unsigned char CoreParam::GetParentSex() const {
    return CoreData_GetParentSex(core_data_);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004928C8
bool CoreParam::HavePokerusJustNow() const {
    return (CoreData_GetPokerus(core_data_) & 0xf) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492978
bool CoreParam::HavePokerusUntilNow() const {
    return CoreData_GetPokerus(core_data_) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492DA4
bool CoreParam::IsNull() const {
    return CoreData_GetMonsNo(core_data_) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492DC0
unsigned short CoreParam::GetItem() const {
    return CoreData_GetItem(core_data_);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492DD4
unsigned int CoreParam::GetSick() const {
    return CoreData_GetSick(core_data_) & 0xff;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049331C
bool CoreParam::HaveSick() const {
    unsigned char sick = static_cast<unsigned char>(CoreData_GetSick(core_data_));
    if (sick != 0) {
        sick = 1;
    }
    return sick;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493470
bool CoreParam::IsHpZero() const {
    return CoreData_Exists(core_data_) && CoreData_GetHp(core_data_) == 0;
}
#endif

} // namespace pokepara
} // namespace pml
