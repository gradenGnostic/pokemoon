#include "pokemoon/game_manager.hpp"

#include <exception>
#include <stdexcept>

namespace GameSys {

GameManager* GameManager::instance_ = nullptr;

GameManager::GameManager()
    : heap_(heap_storage_.data(), heap_storage_.size(), std::pmr::null_memory_resource()) {
    if (instance_ != nullptr) {
        throw std::logic_error("GameManager singleton already exists");
    }
    instance_ = this;
}

GameManager::~GameManager() {
    if (instance_ != this) {
        std::terminate();
    }
    instance_ = nullptr;
}

GameManager* GameManager::instance() {
    return instance_;
}

std::pmr::memory_resource& GameManager::heap() {
    return heap_;
}

bool GameManager::get_buffer_clear_setting(
        std::size_t display, BufferClearSetting& setting) const {
    if (display >= buffer_clear_settings_.size()) {
        return false;
    }
    setting = buffer_clear_settings_[display];
    return true;
}

bool GameManager::set_buffer_clear_setting(
        std::size_t display, const BufferClearSetting& setting) {
    if (display >= buffer_clear_settings_.size()) {
        return false;
    }
    buffer_clear_settings_[display] = setting;
    return true;
}

} // namespace GameSys
