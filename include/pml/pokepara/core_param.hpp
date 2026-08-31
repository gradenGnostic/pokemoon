#ifndef POKEMOON_PML_POKEPARA_CORE_PARAM_HPP
#define POKEMOON_PML_POKEPARA_CORE_PARAM_HPP

namespace pml {
namespace pokepara {

enum Sick : unsigned int;

struct BoxData {
    unsigned int encryption_constant;
    unsigned short sanity;
    unsigned short checksum;
    unsigned char encrypted_blocks[0xe0];
};

struct PartyData {
    unsigned char data[0x1c];
};

struct CoreParam {
    void RecoverSick();
    void RemoveItem();
    void SetItem(unsigned short item);
    void SetSick(Sick sick);
    void SetFamiliarity(unsigned int value);
    void RecoverHp(unsigned int amount);
    void Serialize_Core(void* destination) const;

    bool IsRare() const;
    bool StartFastMode() const;
    unsigned char GetWazaCount() const;
    unsigned int GetTokuseiIndex() const;

    unsigned int GetPersonalRnd() const;
    unsigned char GetSeikaku() const;
    unsigned char GetParentSex() const;
    bool HavePokerusJustNow() const;
    bool HavePokerusUntilNow() const;
    bool IsNull() const;
    unsigned short GetItem() const;
    unsigned int GetSick() const;
    bool HaveSick() const;
    bool IsHpZero() const;

    void* vtable;
    BoxData* box_data;
    PartyData* party_data;
    void* core_data_;
};

typedef CoreParam CoreParamLayout;

static_assert(__builtin_offsetof(BoxData, encrypted_blocks) == 0x08,
              "Box data header mismatch");
static_assert(sizeof(BoxData) == 0xe8, "Box data size mismatch");
static_assert(sizeof(PartyData) == 0x1c, "Party data size mismatch");
static_assert(__builtin_offsetof(CoreParam, core_data_) == 0xc,
              "CoreParam core data offset mismatch");
static_assert(sizeof(CoreParam) == 0x10, "CoreParam size mismatch");

} // namespace pokepara
} // namespace pml

#endif
