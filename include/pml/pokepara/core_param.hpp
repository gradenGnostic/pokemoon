#ifndef POKEMOON_PML_POKEPARA_CORE_PARAM_HPP
#define POKEMOON_PML_POKEPARA_CORE_PARAM_HPP

namespace pml {
namespace pokepara {

struct BoxData {
    unsigned int encryption_constant;
    unsigned short sanity;
    unsigned short checksum;
    unsigned char encrypted_blocks[0xe0];
};

struct PartyData {
    unsigned char data[0x1c];
};

// Partial runtime layout shared by the observed CoreParam-family wrappers.
struct CoreParamLayout {
    void* vtable;
    BoxData* box_data;
    PartyData* party_data;
    void* accessor;
};

static_assert(__builtin_offsetof(BoxData, encrypted_blocks) == 0x08,
              "Box data header mismatch");
static_assert(sizeof(BoxData) == 0xe8, "Box data size mismatch");
static_assert(sizeof(PartyData) == 0x1c, "Party data size mismatch");
static_assert(sizeof(CoreParamLayout) == 0x10,
              "CoreParam wrapper size mismatch");

} // namespace pokepara
} // namespace pml

#endif
