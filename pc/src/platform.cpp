#include "pokemoon/platform.hpp"

#include <SDL.h>
#include <SDL_opengl.h>

#include <algorithm>
#include <csignal>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <thread>

namespace {

volatile std::sig_atomic_t g_signal_requested = 0;

void handle_signal(int) {
    g_signal_requested = 1;
}

} // namespace

namespace Platform {

bool Input::initialize() {
    if (SDL_InitSubSystem(SDL_INIT_EVENTS | SDL_INIT_GAMECONTROLLER) != 0) {
        return false;
    }
    initialized_ = true;
    for (int index = 0; index < SDL_NumJoysticks(); ++index) {
        if (SDL_IsGameController(index) == SDL_TRUE) {
            open_controller(index);
            break;
        }
    }
    return true;
}

bool Input::poll() {
    for (auto& state : buttons_) {
        state.pressed = false;
        state.released = false;
    }

    bool quit_requested = false;
    SDL_Event event{};
    while (SDL_PollEvent(&event) != 0) {
        switch (event.type) {
        case SDL_QUIT:
            quit_requested = true;
            break;
        case SDL_KEYDOWN:
        case SDL_KEYUP: {
            if (event.key.repeat != 0) {
                break;
            }
            const bool held = event.type == SDL_KEYDOWN;
            switch (event.key.keysym.sym) {
            case SDLK_a: set_button(Button::A, held); break;
            case SDLK_b: set_button(Button::B, held); break;
            case SDLK_UP: set_button(Button::Up, held); break;
            case SDLK_DOWN: set_button(Button::Down, held); break;
            case SDLK_LEFT: set_button(Button::Left, held); break;
            case SDLK_RIGHT: set_button(Button::Right, held); break;
            default: break;
            }
            break;
        }
        case SDL_CONTROLLERBUTTONDOWN:
        case SDL_CONTROLLERBUTTONUP: {
            const bool held = event.type == SDL_CONTROLLERBUTTONDOWN;
            switch (event.cbutton.button) {
            case SDL_CONTROLLER_BUTTON_A: set_button(Button::A, held); break;
            case SDL_CONTROLLER_BUTTON_B: set_button(Button::B, held); break;
            case SDL_CONTROLLER_BUTTON_DPAD_UP: set_button(Button::Up, held); break;
            case SDL_CONTROLLER_BUTTON_DPAD_DOWN: set_button(Button::Down, held); break;
            case SDL_CONTROLLER_BUTTON_DPAD_LEFT: set_button(Button::Left, held); break;
            case SDL_CONTROLLER_BUTTON_DPAD_RIGHT: set_button(Button::Right, held); break;
            default: break;
            }
            break;
        }
        case SDL_CONTROLLERDEVICEADDED:
            if (controller_ == nullptr) {
                open_controller(event.cdevice.which);
            }
            break;
        case SDL_CONTROLLERDEVICEREMOVED:
            if (controller_ != nullptr &&
                    SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(
                        static_cast<SDL_GameController*>(controller_))) == event.cdevice.which) {
                SDL_GameControllerClose(static_cast<SDL_GameController*>(controller_));
                controller_ = nullptr;
            }
            break;
        default:
            break;
        }
    }
    return quit_requested;
}

void Input::shutdown() {
    if (controller_ != nullptr) {
        SDL_GameControllerClose(static_cast<SDL_GameController*>(controller_));
        controller_ = nullptr;
    }
    if (initialized_) {
        SDL_QuitSubSystem(SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS);
        initialized_ = false;
    }
}

const ButtonState& Input::button(Button button) const {
    return buttons_.at(static_cast<std::size_t>(button));
}

void Input::set_button(Button button, bool held) {
    auto& state = buttons_.at(static_cast<std::size_t>(button));
    if (state.held == held) {
        return;
    }
    state.held = held;
    state.pressed = state.pressed || held;
    state.released = state.released || !held;
}

void Input::open_controller(int device_index) {
    controller_ = SDL_GameControllerOpen(device_index);
}

bool Graphics::initialize() {
    if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0) {
        return false;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    window_ = SDL_CreateWindow("Pokemon Moon PC",
                               SDL_WINDOWPOS_CENTERED,
                               SDL_WINDOWPOS_CENTERED,
                               600,
                               720,
                               SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    if (window_ == nullptr) {
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
        return false;
    }
    context_ = SDL_GL_CreateContext(static_cast<SDL_Window*>(window_));
    if (context_ == nullptr) {
        SDL_DestroyWindow(static_cast<SDL_Window*>(window_));
        window_ = nullptr;
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
        return false;
    }
    SDL_GL_SetSwapInterval(1);
    glDisable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    initialized_ = true;
    return true;
}

bool Graphics::available() const {
    return initialized_;
}

TextureId Graphics::create_texture(const Image& image) {
    const auto expected_size = static_cast<std::uint64_t>(image.width) * image.height * 4;
    if (!initialized_ || image.width == 0 || image.height == 0 ||
            image.rgba.size() != expected_size) {
        throw std::invalid_argument("invalid RGBA texture image");
    }
    GLuint texture = 0;
    while (glGetError() != GL_NO_ERROR) {
    }
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexImage2D(GL_TEXTURE_2D,
                 0,
                 GL_RGBA,
                 static_cast<GLsizei>(image.width),
                 static_cast<GLsizei>(image.height),
                 0,
                 GL_RGBA,
                 GL_UNSIGNED_BYTE,
                 image.rgba.data());
    if (texture == 0 || glGetError() != GL_NO_ERROR) {
        if (texture != 0) {
            glDeleteTextures(1, &texture);
        }
        throw std::runtime_error("OpenGL title texture upload failed");
    }
    return texture;
}

void Graphics::destroy_texture(TextureId texture) {
    if (initialized_ && texture != 0) {
        const auto native_texture = static_cast<GLuint>(texture);
        glDeleteTextures(1, &native_texture);
    }
}

void Graphics::begin_frame() {
    if (!initialized_) {
        return;
    }
    int width = 0;
    int height = 0;
    SDL_GL_GetDrawableSize(static_cast<SDL_Window*>(window_), &width, &height);
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 400.0, 480.0, 0.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

void Graphics::draw_gradient(float x, float y, float width, float height,
                             Color top_left, Color top_right,
                             Color bottom_left, Color bottom_right) {
    if (!initialized_) {
        return;
    }
    glDisable(GL_TEXTURE_2D);
    glBegin(GL_QUADS);
    glColor4ub(top_left.red, top_left.green, top_left.blue, top_left.alpha);
    glVertex2f(x, y);
    glColor4ub(top_right.red, top_right.green, top_right.blue, top_right.alpha);
    glVertex2f(x + width, y);
    glColor4ub(bottom_right.red, bottom_right.green, bottom_right.blue, bottom_right.alpha);
    glVertex2f(x + width, y + height);
    glColor4ub(bottom_left.red, bottom_left.green, bottom_left.blue, bottom_left.alpha);
    glVertex2f(x, y + height);
    glEnd();
}

void Graphics::draw_image(TextureId texture, float x, float y, float width, float height,
                           float opacity, float u_max, float v_max) {
    draw_image_tinted(texture, x, y, width, height,
                      {255, 255, 255, static_cast<std::uint8_t>(
                          std::clamp(opacity, 0.0f, 1.0f) * 255.0f)}, u_max, v_max);
}

void Graphics::draw_image_tinted(TextureId texture, float x, float y, float width, float height,
                                 Color tint, float u_max, float v_max) {
    if (!initialized_ || texture == 0) {
        return;
    }
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, static_cast<GLuint>(texture));
    glColor4ub(tint.red, tint.green, tint.blue, tint.alpha);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f); glVertex2f(x, y);
    glTexCoord2f(u_max, 0.0f); glVertex2f(x + width, y);
    glTexCoord2f(u_max, v_max); glVertex2f(x + width, y + height);
    glTexCoord2f(0.0f, v_max); glVertex2f(x, y + height);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}

void Graphics::draw_image_rotated(TextureId texture, float center_x, float center_y,
                                  float width, float height, float rotation_degrees) {
    if (!initialized_ || texture == 0) {
        return;
    }
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, static_cast<GLuint>(texture));
    glColor4ub(255, 255, 255, 255);
    glPushMatrix();
    glTranslatef(center_x, center_y, 0.0f);
    glRotatef(-rotation_degrees, 0.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f); glVertex2f(-width / 2.0f, -height / 2.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex2f(width / 2.0f, -height / 2.0f);
    glTexCoord2f(1.0f, 1.0f); glVertex2f(width / 2.0f, height / 2.0f);
    glTexCoord2f(0.0f, 1.0f); glVertex2f(-width / 2.0f, height / 2.0f);
    glEnd();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}

void Graphics::draw_image_region(TextureId texture, float x, float y, float width, float height,
                                 float u0, float v0, float u1, float v1, Color tint) {
    if (!initialized_ || texture == 0) {
        return;
    }
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, static_cast<GLuint>(texture));
    glColor4ub(tint.red, tint.green, tint.blue, tint.alpha);
    glBegin(GL_QUADS);
    glTexCoord2f(u0, v0); glVertex2f(x, y);
    glTexCoord2f(u1, v0); glVertex2f(x + width, y);
    glTexCoord2f(u1, v1); glVertex2f(x + width, y + height);
    glTexCoord2f(u0, v1); glVertex2f(x, y + height);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}

void Graphics::draw_image_repeated(TextureId texture, float x, float y, float width, float height,
                                   float u0, float v0, float u1, float v1, Color tint) {
    if (!initialized_ || texture == 0) {
        return;
    }
    glBindTexture(GL_TEXTURE_2D, static_cast<GLuint>(texture));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    draw_image_region(texture, x, y, width, height, u0, v0, u1, v1, tint);
    glBindTexture(GL_TEXTURE_2D, static_cast<GLuint>(texture));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
}

void Graphics::draw_image_masked(TextureId texture, TextureId mask,
                                 float x, float y, float width, float height,
                                 float u0, float v0, float u1, float v1,
                                 float mask_u0, float mask_v0, float mask_u1, float mask_v1,
                                 Color tint) {
    if (!initialized_ || texture == 0 || mask == 0) {
        return;
    }
    glActiveTexture(GL_TEXTURE0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, static_cast<GLuint>(texture));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

    glActiveTexture(GL_TEXTURE1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, static_cast<GLuint>(mask));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

    glColor4ub(tint.red, tint.green, tint.blue, tint.alpha);
    glBegin(GL_QUADS);
    glMultiTexCoord2f(GL_TEXTURE0, u0, v0);
    glMultiTexCoord2f(GL_TEXTURE1, mask_u0, mask_v0);
    glVertex2f(x, y);
    glMultiTexCoord2f(GL_TEXTURE0, u1, v0);
    glMultiTexCoord2f(GL_TEXTURE1, mask_u1, mask_v0);
    glVertex2f(x + width, y);
    glMultiTexCoord2f(GL_TEXTURE0, u1, v1);
    glMultiTexCoord2f(GL_TEXTURE1, mask_u1, mask_v1);
    glVertex2f(x + width, y + height);
    glMultiTexCoord2f(GL_TEXTURE0, u0, v1);
    glMultiTexCoord2f(GL_TEXTURE1, mask_u0, mask_v1);
    glVertex2f(x, y + height);
    glEnd();

    glDisable(GL_TEXTURE_2D);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, static_cast<GLuint>(texture));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glDisable(GL_TEXTURE_2D);
}

void Graphics::present() {
    if (initialized_) {
        SDL_GL_SwapWindow(static_cast<SDL_Window*>(window_));
    }
}

void Graphics::shutdown() {
    if (context_ != nullptr) {
        SDL_GL_DeleteContext(static_cast<SDL_GLContext>(context_));
        context_ = nullptr;
    }
    if (window_ != nullptr) {
        SDL_DestroyWindow(static_cast<SDL_Window*>(window_));
        window_ = nullptr;
    }
    if (initialized_) {
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
        initialized_ = false;
    }
}

FileSystem::FileSystem(std::filesystem::path root)
    : root_(std::filesystem::absolute(std::move(root)).lexically_normal()) {}

bool FileSystem::available() const {
    return std::filesystem::is_directory(root_);
}

const std::filesystem::path& FileSystem::root() const {
    return root_;
}

std::filesystem::path FileSystem::resolve(const std::filesystem::path& relative) const {
    if (relative.empty() || relative.is_absolute()) {
        throw std::invalid_argument("game-data paths must be non-empty and relative");
    }
    for (const auto& part : relative) {
        if (part == "..") {
            throw std::invalid_argument("game-data paths may not escape the configured root");
        }
    }
    return (root_ / relative).lexically_normal();
}

std::filesystem::path FileSystem::resolve_archive(std::uint32_t archive_id,
                                                  std::uint32_t data_id) const {
    std::ostringstream relative;
    relative << "romfs/arc/" << std::hex << std::setfill('0') << std::setw(4) << archive_id
             << '/' << std::setw(4) << data_id << ".bin";
    return resolve(relative.str());
}

std::vector<std::uint8_t> FileSystem::read_binary(const std::filesystem::path& relative) const {
    const auto path = resolve(relative);
    std::ifstream stream(path, std::ios::binary | std::ios::ate);
    if (!stream) {
        throw std::runtime_error("could not open external game data: " + path.string());
    }
    const auto end = stream.tellg();
    if (end < 0) {
        throw std::runtime_error("could not size external game data: " + path.string());
    }
    std::vector<std::uint8_t> data(static_cast<std::size_t>(end));
    stream.seekg(0);
    if (!data.empty() && !stream.read(reinterpret_cast<char*>(data.data()),
                                      static_cast<std::streamsize>(end))) {
        throw std::runtime_error("could not read external game data: " + path.string());
    }
    return data;
}

bool Runtime::initialize(const Config& config) {
    if (config.update_hz == 0) {
        log("platform initialization failed: update rate must be nonzero");
        return false;
    }
    config_ = config;
    files_ = FileSystem(config.data_root);
    if (config.graphics_enabled && !graphics_.initialize()) {
        log(std::string("platform initialization failed: SDL/OpenGL graphics: ") + SDL_GetError());
        return false;
    }
    if (!input_.initialize()) {
        log(std::string("platform initialization failed: SDL input: ") + SDL_GetError());
        graphics_.shutdown();
        return false;
    }
    std::signal(SIGINT, handle_signal);
    std::signal(SIGTERM, handle_signal);
    next_frame_ = std::chrono::steady_clock::now();
    initialized_ = true;
    log("platform initialized: Linux host timing and signal handling ready");
    log(graphics_.available() ? "graphics initialized: SDL2/OpenGL 400x480 logical surface"
                              : "graphics disabled: headless host mode");
    if (files_.available()) {
        log("external game data: " + files_.root().string());
    } else {
        log("external game data unavailable: " + files_.root().string());
    }
    return true;
}

void Runtime::poll_events() {
    if (input_.poll()) {
        request_quit();
    }
}

bool Runtime::quit_requested() const {
    return quit_requested_ || g_signal_requested != 0;
}

void Runtime::request_quit() {
    quit_requested_ = true;
}

void Runtime::wait_for_next_frame() {
    if (!initialized_ || !config_.sleep_enabled) {
        return;
    }
    const auto interval = std::chrono::nanoseconds(1'000'000'000 / config_.update_hz);
    next_frame_ += interval;
    const auto now = std::chrono::steady_clock::now();
    if (next_frame_ < now - interval * 4) {
        next_frame_ = now;
    }
    std::this_thread::sleep_until(next_frame_);
}

void Runtime::log(const std::string& message) const {
    std::cerr << "[pokemoon-pc] " << message << '\n';
}

void Runtime::shutdown() {
    if (initialized_) {
        input_.shutdown();
        graphics_.shutdown();
        log("platform shutdown complete");
        initialized_ = false;
    }
}

const FileSystem& Runtime::files() const {
    return files_;
}

const Input& Runtime::input() const {
    return input_;
}

Graphics& Runtime::graphics() {
    return graphics_;
}

} // namespace Platform
