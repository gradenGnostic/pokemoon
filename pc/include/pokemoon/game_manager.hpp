#ifndef POKEMOON_PC_GAME_MANAGER_HPP
#define POKEMOON_PC_GAME_MANAGER_HPP

#include <array>
#include <cstddef>
#include <cstdint>
#include <memory_resource>

namespace GameSys {

struct BufferClearSetting {
    std::array<float, 4> color{};
    float depth = 1.0f;
    std::uint8_t stencil = 0xff;
    std::uint8_t clear_mask = 0x03;
};

class GameManager final {
public:
    static constexpr std::size_t ChildHeapSize = 0x5000;
    static constexpr std::size_t DisplayCount = 3;

    GameManager();
    ~GameManager();

    GameManager(const GameManager&) = delete;
    GameManager& operator=(const GameManager&) = delete;
    GameManager(GameManager&&) = delete;
    GameManager& operator=(GameManager&&) = delete;

    static GameManager* instance();
    std::pmr::memory_resource& heap();
    bool get_buffer_clear_setting(std::size_t display, BufferClearSetting& setting) const;
    bool set_buffer_clear_setting(std::size_t display, const BufferClearSetting& setting);

private:
    static GameManager* instance_;
    alignas(std::max_align_t) std::array<std::byte, ChildHeapSize> heap_storage_{};
    std::pmr::monotonic_buffer_resource heap_;
    std::array<BufferClearSetting, DisplayCount> buffer_clear_settings_{};
};

} // namespace GameSys

#endif
