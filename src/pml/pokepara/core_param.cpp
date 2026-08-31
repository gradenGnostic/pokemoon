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
extern "C" void CoreData_SetSick(void*, pml::pokepara::Sick) asm("FUN_0031aa40");
extern "C" void CoreData_SetItem(void*, unsigned short) asm("FUN_0031aea0");
extern "C" void CoreData_Serialize(void*, void*) asm("FUN_0031ad5c");
extern "C" unsigned int CoreData_GetRareID(void*) asm("FUN_00491a68");
extern "C" unsigned int CoreData_GetRareSecretID(void*) asm("FUN_00490c14");
extern "C" void CoreData_SetFamiliarity(void*, unsigned char) asm("FUN_00319834");
extern "C" unsigned short CoreData_GetMaxHp(void*) asm("FUN_00491d80");
extern "C" void CoreData_SetHp(void*, unsigned short) asm("FUN_0031a45c");
extern "C" unsigned int CoreData_GetTokusei1Flag(void*) asm("FUN_00490b80");
extern "C" unsigned int CoreData_GetTokusei2Flag(void*) asm("FUN_00490bb4");
extern "C" void CoreData_StartFastMode(void*) asm("FUN_0031972c");
extern "C" unsigned int CoreData_GetWazaNo(void*, unsigned char) asm("FUN_00492010");

} // namespace

namespace pml {
namespace pokepara {

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031AA34
void CoreParam::RecoverSick() {
    CoreData_SetSick(core_data_, static_cast<Sick>(0));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031AE94
void CoreParam::RemoveItem() {
    CoreData_SetItem(core_data_, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031D9A0
void CoreParam::SetItem(unsigned short item) {
    CoreData_SetItem(core_data_, item);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031D9A8
void CoreParam::SetSick(Sick sick) {
    CoreData_SetSick(core_data_, sick);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492728
void CoreParam::Serialize_Core(void* destination) const {
    CoreData_Serialize(core_data_, destination);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031B0F4
bool CoreParam::IsRare() const {
    unsigned int id = CoreData_GetRareID(core_data_);
    unsigned int secret_id = CoreData_GetRareSecretID(core_data_);
    return ((id & 0xffff) ^ (id >> 16) ^ (secret_id >> 16) ^
            (secret_id & 0xffff)) < 16;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031C4D4
void CoreParam::SetFamiliarity(unsigned int value) {
    if (value > 0xff) {
        value = 0xff;
    }
    CoreData_SetFamiliarity(core_data_, static_cast<unsigned char>(value));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031DD84
void CoreParam::RecoverHp(unsigned int amount) {
    unsigned int max_hp = CoreData_GetMaxHp(core_data_);
    unsigned int hp = CoreData_GetHp(core_data_);
    unsigned int recovered = hp + amount;
    if (recovered > max_hp) {
        recovered = max_hp;
    }
    CoreData_SetHp(core_data_, static_cast<unsigned short>(recovered));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492780
unsigned int CoreParam::GetTokuseiIndex() const {
    unsigned int first = CoreData_GetTokusei1Flag(core_data_);
    unsigned int second = CoreData_GetTokusei2Flag(core_data_);
    if (second != 0) {
        return 2;
    }
    return first != 0 ? 1 : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049255C
bool CoreParam::StartFastMode() const {
    bool started = *(static_cast<unsigned char*>(core_data_) + 0xd) == 0;
    if (started) {
        CoreData_StartFastMode(core_data_);
    }
    return started;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492424
unsigned char CoreParam::GetWazaCount() const {
    unsigned char count = 0;
    for (unsigned char slot = 0; slot < 4; ++slot) {
        if (CoreData_GetWazaNo(core_data_, slot) != 0) {
            ++count;
        }
    }
    return count;
}
#endif

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
