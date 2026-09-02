#ifndef POKEMOON_PC_PLATFORM_HPP
#define POKEMOON_PC_PLATFORM_HPP

#include <array>
#include <chrono>
#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>

namespace Platform {

enum class Button : std::uint8_t {
    A,
    B,
    Up,
    Down,
    Left,
    Right,
    Count,
};

struct ButtonState {
    bool pressed = false;
    bool held = false;
    bool released = false;
};

struct Image {
    std::uint32_t width = 0;
    std::uint32_t height = 0;
    std::vector<std::uint8_t> rgba;
};

struct Color {
    std::uint8_t red = 255;
    std::uint8_t green = 255;
    std::uint8_t blue = 255;
    std::uint8_t alpha = 255;
};

class Input {
public:
    bool initialize();
    bool poll();
    void shutdown();
    const ButtonState& button(Button button) const;

private:
    void set_button(Button button, bool held);
    void open_controller(int device_index);

    std::array<ButtonState, static_cast<std::size_t>(Button::Count)> buttons_{};
    void* controller_ = nullptr;
    bool initialized_ = false;
};

using TextureId = std::uint32_t;

class Graphics {
public:
    bool initialize();
    bool available() const;
    TextureId create_texture(const Image& image);
    void destroy_texture(TextureId texture);
    void begin_frame();
    void draw_gradient(float x, float y, float width, float height,
                       Color top_left, Color top_right,
                       Color bottom_left, Color bottom_right);
    void draw_image(TextureId texture, float x, float y, float width, float height,
                    float opacity = 1.0f, float u_max = 1.0f, float v_max = 1.0f);
    void draw_image_tinted(TextureId texture, float x, float y, float width, float height,
                           Color tint, float u_max = 1.0f, float v_max = 1.0f);
    void draw_image_rotated(TextureId texture, float center_x, float center_y,
                            float width, float height, float rotation_degrees);
    void draw_image_region(TextureId texture, float x, float y, float width, float height,
                           float u0, float v0, float u1, float v1, Color tint = {});
    void draw_image_repeated(TextureId texture, float x, float y, float width, float height,
                             float u0, float v0, float u1, float v1, Color tint = {});
    void draw_image_masked(TextureId texture, TextureId mask,
                           float x, float y, float width, float height,
                           float u0, float v0, float u1, float v1,
                           float mask_u0, float mask_v0, float mask_u1, float mask_v1,
                           Color tint = {});
    void present();
    void shutdown();

private:
    void* window_ = nullptr;
    void* context_ = nullptr;
    bool initialized_ = false;
};

struct Config {
    std::filesystem::path data_root;
    std::uint32_t update_hz = 60;
    bool sleep_enabled = true;
    bool graphics_enabled = true;
};

class FileSystem {
public:
    explicit FileSystem(std::filesystem::path root);

    bool available() const;
    const std::filesystem::path& root() const;
    std::filesystem::path resolve(const std::filesystem::path& relative) const;
    std::filesystem::path resolve_archive(std::uint32_t archive_id,
                                          std::uint32_t data_id) const;
    std::vector<std::uint8_t> read_binary(const std::filesystem::path& relative) const;

private:
    std::filesystem::path root_;
};

class Runtime {
public:
    bool initialize(const Config& config);
    void poll_events();
    bool quit_requested() const;
    void request_quit();
    void wait_for_next_frame();
    void log(const std::string& message) const;
    void shutdown();

    const FileSystem& files() const;
    const Input& input() const;
    Graphics& graphics();

private:
    Config config_{};
    FileSystem files_{"game-data"};
    Input input_{};
    Graphics graphics_{};
    std::chrono::steady_clock::time_point next_frame_{};
    bool initialized_ = false;
    bool quit_requested_ = false;
};

} // namespace Platform

#endif
