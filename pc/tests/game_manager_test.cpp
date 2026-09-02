#include "pokemoon/game_manager.hpp"

#include <cstddef>
#include <stdexcept>

int main() {
    if (GameSys::GameManager::instance() != nullptr) {
        return 1;
    }
    {
        GameSys::GameManager manager;
        if (GameSys::GameManager::instance() != &manager) {
            return 2;
        }

        GameSys::BufferClearSetting setting;
        if (!manager.get_buffer_clear_setting(0, setting) || setting.depth != 1.0f ||
                setting.stencil != 0xff || setting.clear_mask != 0x03) {
            return 3;
        }
        if (manager.get_buffer_clear_setting(GameSys::GameManager::DisplayCount, setting)) {
            return 4;
        }

        void* allocation = manager.heap().allocate(64, alignof(std::max_align_t));
        if (allocation == nullptr) {
            return 5;
        }
        manager.heap().deallocate(allocation, 64, alignof(std::max_align_t));

        try {
            GameSys::GameManager duplicate;
            return 6;
        } catch (const std::logic_error&) {
        }
    }
    return GameSys::GameManager::instance() == nullptr ? 0 : 7;
}
