#include "pokemoon/application.hpp"
#include "pokemoon/frame_manager.hpp"
#include "pokemoon/title_resources.hpp"
#include "savedata/sodateya.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <filesystem>
#include <stdexcept>
#include <string>
#include <string_view>

#ifdef PC_STARTUP_LANGUAGE
#include <SDL_ttf.h>
#endif

namespace PokemonMoon {

struct NativeTitleTextures {
    Platform::TextureId upper_background = 0;
    Platform::TextureId sea_pattern = 0;
    Platform::TextureId lower_pattern = 0;
    Platform::TextureId report_background = 0;
    Platform::TextureId cursor = 0;
    std::array<Platform::TextureId, 3> yellow_button{};
    std::array<Platform::TextureId, 3> red_button{};
};

#ifdef PC_STARTUP_LANGUAGE
struct NativeStartupLanguageTextures {
    Platform::TextureId upper_background = 0;
    Platform::TextureId sea_pattern = 0;
    Platform::TextureId sea_pattern_1 = 0;
    Platform::TextureId sea_mask = 0;
    Platform::TextureId plate = 0;
    Platform::TextureId header_plate = 0;
    std::array<Platform::TextureId, 3> normal_button{};
    std::array<Platform::TextureId, 3> selected_button{};
    Platform::TextureId float_back = 0;
    Platform::TextureId float_front = 0;
    std::array<Platform::TextureId, 12> pikachu{};
    std::array<Platform::TextureId, 9> languages{};
    Platform::TextureId lower_pattern_0 = 0;
    Platform::TextureId lower_pattern_1 = 0;
    Platform::TextureId lower_window = 0;
    Platform::TextureId lower_window_fill = 0;
    Platform::TextureId selection_cursor = 0;
    std::array<Platform::TextureId, 7> prompt{};
};

Platform::Image make_prompt_text(std::string_view text) {
    if (TTF_WasInit() != 0 || TTF_Init() == 0) {
        constexpr std::array<const char*, 2> font_paths{{
            "/usr/share/fonts/noto/NotoSans-Regular.ttf",
            "/usr/share/fonts/TTF/DejaVuSansCondensed.ttf",
        }};
        TTF_Font* font = nullptr;
        for (const auto* path : font_paths) {
            if (std::filesystem::is_regular_file(path)) {
                font = TTF_OpenFont(path, 13);
                if (font != nullptr) {
                    break;
                }
            }
        }
        if (font != nullptr) {
            const auto owned_text = std::string(text);
            const SDL_Color white{255, 255, 255, 255};
            auto* rendered = TTF_RenderUTF8_Blended(font, owned_text.c_str(), white);
            TTF_CloseFont(font);
            if (rendered != nullptr) {
                auto* rgba = SDL_ConvertSurfaceFormat(rendered, SDL_PIXELFORMAT_RGBA32, 0);
                SDL_FreeSurface(rendered);
                if (rgba != nullptr) {
                    Platform::Image image;
                    image.width = static_cast<std::uint32_t>(rgba->w);
                    image.height = static_cast<std::uint32_t>(rgba->h);
                    image.rgba.resize(static_cast<std::size_t>(image.width) * image.height * 4);
                    for (std::uint32_t row = 0; row < image.height; ++row) {
                        const auto* source = static_cast<const std::uint8_t*>(rgba->pixels) +
                            static_cast<std::size_t>(row) * static_cast<std::size_t>(rgba->pitch);
                        std::copy_n(source, static_cast<std::size_t>(image.width) * 4,
                                    image.rgba.begin() +
                                        static_cast<std::ptrdiff_t>(row * image.width * 4));
                    }
                    SDL_FreeSurface(rgba);
                    return image;
                }
            }
        }
    }
    const auto glyph = [](char character) -> std::array<std::uint8_t, 7> {
        switch (character >= 'a' && character <= 'z' ? character - 'a' + 'A' : character) {
        case 'A': return {{0x0e, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11}};
        case 'B': return {{0x1e, 0x11, 0x11, 0x1e, 0x11, 0x11, 0x1e}};
        case 'C': return {{0x0e, 0x11, 0x10, 0x10, 0x10, 0x11, 0x0e}};
        case 'D': return {{0x1e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1e}};
        case 'E': return {{0x1f, 0x10, 0x10, 0x1e, 0x10, 0x10, 0x1f}};
        case 'F': return {{0x1f, 0x10, 0x10, 0x1e, 0x10, 0x10, 0x10}};
        case 'G': return {{0x0e, 0x11, 0x10, 0x17, 0x11, 0x11, 0x0f}};
        case 'H': return {{0x11, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11}};
        case 'I': return {{0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e}};
        case 'K': return {{0x11, 0x12, 0x14, 0x18, 0x14, 0x12, 0x11}};
        case 'L': return {{0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f}};
        case 'M': return {{0x11, 0x1b, 0x15, 0x15, 0x11, 0x11, 0x11}};
        case 'N': return {{0x11, 0x19, 0x19, 0x15, 0x13, 0x13, 0x11}};
        case 'O': return {{0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e}};
        case 'P': return {{0x1e, 0x11, 0x11, 0x1e, 0x10, 0x10, 0x10}};
        case 'R': return {{0x1e, 0x11, 0x11, 0x1e, 0x14, 0x12, 0x11}};
        case 'S': return {{0x0f, 0x10, 0x10, 0x0e, 0x01, 0x01, 0x1e}};
        case 'T': return {{0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04}};
        case 'U': return {{0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e}};
        case 'V': return {{0x11, 0x11, 0x11, 0x11, 0x11, 0x0a, 0x04}};
        case 'W': return {{0x11, 0x11, 0x11, 0x15, 0x15, 0x1b, 0x11}};
        case 'Y': return {{0x11, 0x11, 0x0a, 0x04, 0x04, 0x04, 0x04}};
        case '+': return {{0, 0x04, 0x04, 0x1f, 0x04, 0x04, 0}};
        case '\'': return {{0x0c, 0x08, 0x10, 0, 0, 0, 0}};
        case '.': return {{0, 0, 0, 0, 0, 0x0c, 0x0c}};
        case ',': return {{0, 0, 0, 0, 0, 0x0c, 0x08}};
        default: return {};
        }
    };
    Platform::Image image;
    image.width = static_cast<std::uint32_t>(text.size() * 6);
    image.height = 7;
    image.rgba.resize(static_cast<std::size_t>(image.width) * image.height * 4);
    for (std::size_t character = 0; character < text.size(); ++character) {
        const auto rows = glyph(text[character]);
        for (std::size_t y = 0; y < rows.size(); ++y) {
            for (std::size_t x = 0; x < 5; ++x) {
                if ((rows[y] & (1u << (4 - x))) == 0) {
                    continue;
                }
                const auto offset = (y * image.width + character * 6 + x) * 4;
                image.rgba[offset] = 0xff;
                image.rgba[offset + 1] = 0xff;
                image.rgba[offset + 2] = 0xff;
                image.rgba[offset + 3] = 0xff;
            }
        }
    }
    return image;
}
#endif

class Application::TitleMenuFrameCell final : public applib::frame::CellSuper {
public:
    TitleMenuFrameCell(Application& application, NativeTitleTextures textures)
        : application_(application), textures_(textures) {}

    applib::frame::CallbackResult initialize() override {
        if (!initialization_started_) {
            initialization_started_ = true;
            return applib::frame::CallbackResult::Continue;
        }
        state_ = ControllerState::InputEnabled;
        application_.platform_.log("TITLE_INPUT_ENABLED");
        application_.platform_.log("TITLE_CONTROLLER_STATE=3");
        return applib::frame::CallbackResult::AdvanceNextFrame;
    }

    applib::frame::CallbackResult update() override {
        application_.run_native_frame();
        application_.platform_.log("TITLE_FRAME=" + std::to_string(application_.frame_count()));

        if (state_ == ControllerState::InputEnabled) {
            const auto& input = application_.platform_.input();
            if (input.button(Platform::Button::A).pressed) {
                application_.platform_.log("TITLE_SELECTION_TRIGGER=0");
                begin_exit();
            } else if (input.button(Platform::Button::B).pressed) {
                application_.platform_.log("TITLE_CANCEL_ACTION=4");
                begin_exit();
            }
        } else if (state_ == ControllerState::ExitWait) {
            state_ = ControllerState::NotifyCompletion;
            application_.platform_.log("TITLE_CONTROLLER_STATE=5");
        } else if (state_ == ControllerState::NotifyCompletion) {
            state_ = ControllerState::Complete;
            application_.platform_.log("TITLE_FRAME_COMPLETE_CALLBACK");
            application_.platform_.log("TITLE_CONTROLLER_STATE=6");
            return applib::frame::CallbackResult::AdvanceNextFrame;
        }
        return applib::frame::CallbackResult::Continue;
    }

    void draw(std::uint32_t) override {
        auto& graphics = application_.platform_.graphics();
        graphics.begin_frame();
        constexpr Platform::Color sea_top_left{0x50, 0xdd, 0xea, 0xff};
        constexpr Platform::Color sea_top_right{0x03, 0x96, 0xd1, 0xff};
        constexpr Platform::Color sea_bottom_left{0x99, 0xff, 0xff, 0xff};
        constexpr Platform::Color sea_bottom_right{0xb6, 0xec, 0xf1, 0xff};
        constexpr Platform::Color lower_top_left{0x00, 0xdc, 0xd2, 0xff};
        constexpr Platform::Color lower_top_right{0xc0, 0xff, 0xea, 0xff};
        constexpr Platform::Color lower_bottom_left{0x24, 0x71, 0xde, 0xff};
        constexpr Platform::Color lower_bottom_right{0x00, 0xd2, 0xdc, 0xff};
        graphics.draw_gradient(0.0f, 0.0f, 400.0f, 240.0f,
                               sea_top_left, sea_top_right,
                               sea_bottom_left, sea_bottom_right);
        graphics.draw_gradient(40.0f, 240.0f, 320.0f, 240.0f,
                               lower_top_left, lower_top_right,
                               lower_bottom_left, lower_bottom_right);
        draw_sea_pattern(graphics, textures_.sea_pattern, 0.0f, 0.0f, 400.0f, 240.0f);
        draw_tiled_pattern(graphics, textures_.lower_pattern,
                           40.0f, 240.0f, 320.0f, 240.0f, 70.0f / 255.0f);
        graphics.draw_image(textures_.upper_background, 0.0f, 0.0f, 400.0f, 128.0f);
        if (textures_.report_background != 0) {
            graphics.draw_image(textures_.report_background, 46.0f, 4.0f, 308.0f, 168.0f);
        }
        draw_button(graphics, textures_.yellow_button, 58.0f, 176.0f);
        draw_button(graphics, textures_.red_button, 58.0f, 208.0f);
        if (textures_.cursor != 0 && state_ == ControllerState::InputEnabled) {
            graphics.draw_image(textures_.cursor, 50.0f, 76.0f, 16.0f, 16.0f);
        }
        graphics.present();
        if (!draw_reached_) {
            application_.platform_.log("TITLE_DRAW_REACHED");
            draw_reached_ = true;
        }
    }

    applib::frame::CallbackResult end() override {
        if (!cleanup_started_) {
            cleanup_started_ = true;
            // TODO_PC_STUB: Retail title controller/resource teardown is pending reconstruction.
            return applib::frame::CallbackResult::Continue;
        }
        return applib::frame::CallbackResult::AdvanceNextFrame;
    }

private:
    enum class ControllerState : std::uint8_t {
        InputEnabled = 3,
        ExitWait = 4,
        NotifyCompletion = 5,
        Complete = 6,
    };

    void begin_exit() {
        state_ = ControllerState::ExitWait;
        application_.platform_.log("TITLE_CONTROLLER_STATE=4");
    }

    static void draw_button(Platform::Graphics& graphics,
                            const std::array<Platform::TextureId, 3>& textures,
                            float x,
                            float y) {
        graphics.draw_image(textures[0], x, y, 16.0f, 28.0f);
        graphics.draw_image(textures[1], x + 16.0f, y, 252.0f, 28.0f);
        graphics.draw_image(textures[2], x + 268.0f, y, 16.0f, 28.0f);
    }

    static void draw_sea_pattern(Platform::Graphics& graphics,
                                 Platform::TextureId texture,
                                 float x,
                                 float y,
                                 float width,
                                 float height) {
        for (float tile_y = y; tile_y < y + height; tile_y += 64.0f) {
            for (float tile_x = x; tile_x < x + width; tile_x += 64.0f) {
                const auto tile_width = std::min(64.0f, x + width - tile_x);
                const auto tile_height = std::min(64.0f, y + height - tile_y);
                graphics.draw_image(texture, tile_x, tile_y, tile_width, tile_height,
                                    120.0f / 255.0f,
                                    tile_width / 64.0f, tile_height / 64.0f);
            }
        }
    }

    static void draw_tiled_pattern(Platform::Graphics& graphics,
                                   Platform::TextureId texture,
                                   float x,
                                   float y,
                                   float width,
                                   float height,
                                   float opacity) {
        for (float tile_y = y; tile_y < y + height; tile_y += 64.0f) {
            for (float tile_x = x; tile_x < x + width; tile_x += 64.0f) {
                const auto tile_width = std::min(64.0f, x + width - tile_x);
                const auto tile_height = std::min(64.0f, y + height - tile_y);
                graphics.draw_image(texture, tile_x, tile_y, tile_width, tile_height,
                                    opacity, tile_width / 64.0f, tile_height / 64.0f);
            }
        }
    }

    Application& application_;
    NativeTitleTextures textures_{};
    ControllerState state_ = ControllerState::InputEnabled;
    bool initialization_started_ = false;
    bool draw_reached_ = false;
    bool cleanup_started_ = false;
};

class Application::TitleMenuProcess final : public gfl2::proc::BaseProcess {
public:
    explicit TitleMenuProcess(Application& application) : application_(application) {}

    gfl2::proc::CallbackResult initialize(gfl2::proc::Manager&) override {
        if (!initialization_started_) {
            application_.platform_.log("TITLE_INIT_ENTER");
            application_.platform_.log("TITLE_RESOURCE_REQUEST=TitleMenu.cro");
            constexpr std::array<std::pair<std::uint32_t, std::uint32_t>, 3> resources{{
                {0x5e, 4},
                {0x8a, 0},
                {0x4a, 0},
            }};
            std::array<std::vector<std::uint8_t>, 3> resource_data;
            for (std::size_t index = 0; index < resources.size(); ++index) {
                const auto [archive_id, data_id] = resources[index];
                const auto path = application_.platform_.files().resolve_archive(archive_id, data_id);
                const auto relative = path.lexically_relative(application_.platform_.files().root());
                const auto identity = relative.generic_string();
                if (!std::filesystem::is_regular_file(path)) {
                    application_.platform_.log("TITLE_RESOURCE_MISSING=" + identity);
                    continue;
                }
                const auto data = application_.platform_.files().read_binary(relative);
                application_.platform_.log("TITLE_RESOURCE_LOADED=" + identity +
                                           ":" + std::to_string(data.size()));
                resource_data[index] = data;
            }
            if (application_.platform_.graphics().available() &&
                    !resource_data[1].empty() && !resource_data[2].empty()) {
                try {
                    const auto decoded = decode_title_menu_resources(resource_data[1], resource_data[2]);
                    textures_.upper_background = application_.platform_.graphics().create_texture(
                        decoded.upper_background);
                    textures_.sea_pattern = application_.platform_.graphics().create_texture(
                        decoded.sea_pattern);
                    textures_.lower_pattern = application_.platform_.graphics().create_texture(
                        decoded.lower_pattern);
                    textures_.report_background = application_.platform_.graphics().create_texture(
                        decoded.report_background);
                    textures_.cursor = application_.platform_.graphics().create_texture(decoded.cursor);
                    for (std::size_t index = 0; index < textures_.yellow_button.size(); ++index) {
                        textures_.yellow_button[index] =
                            application_.platform_.graphics().create_texture(decoded.yellow_button[index]);
                        textures_.red_button[index] =
                            application_.platform_.graphics().create_texture(decoded.red_button[index]);
                    }
                    application_.platform_.log(
                        "TITLE_RETAIL_GRAPHICS_READY=upper_background,report,buttons,cursor");
                } catch (const std::exception& error) {
                    destroy_textures();
                    application_.platform_.log(std::string("TITLE_RETAIL_GRAPHICS_FAILED=") + error.what());
                }
            }
            initialization_started_ = true;
            return gfl2::proc::CallbackResult::Continue;
        }
        if (!frame_manager_.call_proc(std::make_unique<TitleMenuFrameCell>(application_, textures_))) {
            throw std::logic_error("title frame cell was already queued");
        }
        application_.platform_.log("TITLE_INIT_READY");
        return gfl2::proc::CallbackResult::Finish;
    }

    gfl2::proc::CallbackResult update(gfl2::proc::Manager&) override {
        application_.platform_.log("TITLE_MAIN_ENTER");
        if (frame_manager_.main() == applib::frame::ManagerResult::Empty) {
            if (!transition_reported_) {
                application_.platform_.log("TITLE_TRANSITION_COMPLETE");
                application_.platform_.request_quit();
                transition_reported_ = true;
            }
        }
        return gfl2::proc::CallbackResult::Continue;
    }

    void draw(gfl2::proc::Manager&) override {
        frame_manager_.draw(0);
    }

    gfl2::proc::CallbackResult end(gfl2::proc::Manager&) override {
        if (frame_manager_.end()) {
            return gfl2::proc::CallbackResult::Continue;
        }
        destroy_textures();
        return gfl2::proc::CallbackResult::Finish;
    }

    std::string_view name() const override {
        return "TitleMenuProcess";
    }

private:
    void destroy_textures() {
        auto& graphics = application_.platform_.graphics();
        graphics.destroy_texture(textures_.cursor);
        graphics.destroy_texture(textures_.report_background);
        graphics.destroy_texture(textures_.upper_background);
        graphics.destroy_texture(textures_.sea_pattern);
        graphics.destroy_texture(textures_.lower_pattern);
        for (const auto texture : textures_.yellow_button) {
            graphics.destroy_texture(texture);
        }
        for (const auto texture : textures_.red_button) {
            graphics.destroy_texture(texture);
        }
        textures_ = {};
    }

    Application& application_;
    applib::frame::Manager frame_manager_;
    bool initialization_started_ = false;
    bool transition_reported_ = false;
    NativeTitleTextures textures_{};
};

#ifdef PC_STARTUP_LANGUAGE
class Application::StartupLanguageProcess final : public gfl2::proc::BaseProcess {
public:
    explicit StartupLanguageProcess(Application& application) : application_(application) {}

    gfl2::proc::CallbackResult initialize(gfl2::proc::Manager&) override {
        if (!initialization_started_) {
            application_.platform_.log("LANGUAGE_INIT_ENTER");
            application_.platform_.log("LANGUAGE_RESOURCE_REQUEST=LangSelect.cro");
            constexpr std::array<std::pair<std::uint32_t, std::uint32_t>, 2> resources{{
                {0x8f, 0}, {0x4a, 0},
            }};
            std::array<std::vector<std::uint8_t>, 2> resource_data;
            for (std::size_t index = 0; index < resources.size(); ++index) {
                const auto [archive_id, data_id] = resources[index];
                const auto path = application_.platform_.files().resolve_archive(archive_id, data_id);
                const auto relative = path.lexically_relative(application_.platform_.files().root());
                if (!std::filesystem::is_regular_file(path)) {
                    application_.platform_.log("LANGUAGE_RESOURCE_MISSING=" + relative.generic_string());
                    continue;
                }
                resource_data[index] = application_.platform_.files().read_binary(relative);
                application_.platform_.log("LANGUAGE_RESOURCE_LOADED=" + relative.generic_string() +
                                           ":" + std::to_string(resource_data[index].size()));
            }
            if (!resource_data[0].empty()) {
                try {
                    if (application_.platform_.graphics().available()) {
                        const auto decoded = decode_startup_language_resources(
                            resource_data[0], resource_data[1]);
                        auto& graphics = application_.platform_.graphics();
                        textures_.upper_background = graphics.create_texture(decoded.upper_background);
                        textures_.sea_pattern = graphics.create_texture(decoded.sea_pattern);
                        textures_.sea_pattern_1 = graphics.create_texture(decoded.sea_pattern_1);
                        textures_.sea_mask = graphics.create_texture(decoded.sea_mask);
                        textures_.plate = graphics.create_texture(decoded.plate);
                        textures_.header_plate = graphics.create_texture(decoded.header_plate);
                        textures_.float_back = graphics.create_texture(decoded.float_back);
                        textures_.float_front = graphics.create_texture(decoded.float_front);
                        for (std::size_t index = 0; index < textures_.normal_button.size(); ++index) {
                            textures_.normal_button[index] =
                                graphics.create_texture(decoded.normal_button[index]);
                            textures_.selected_button[index] =
                                graphics.create_texture(decoded.selected_button[index]);
                        }
                        for (std::size_t index = 0; index < textures_.pikachu.size(); ++index) {
                            textures_.pikachu[index] = graphics.create_texture(decoded.pikachu[index]);
                        }
                        for (std::size_t index = 0; index < textures_.languages.size(); ++index) {
                            textures_.languages[index] = graphics.create_texture(decoded.languages[index]);
                        }
                        textures_.lower_pattern_0 = graphics.create_texture(decoded.lower_pattern_0);
                        textures_.lower_pattern_1 = graphics.create_texture(decoded.lower_pattern_1);
                        textures_.lower_window = graphics.create_texture(decoded.lower_window);
                        textures_.lower_window_fill = graphics.create_texture(decoded.lower_window_fill);
                        textures_.selection_cursor = graphics.create_texture(decoded.selection_cursor);
                        character_animation_ = decoded.character_idle;
                        upper_background_animation_ = decoded.upper_background_loop;
                        lower_background_animation_ = decoded.lower_background_loop;
                        constexpr std::array<std::string_view, 7> prompt{{
                            "Play the game in",
                            "Use the +Control Pad to select a language.",
                            "Press the A Button to confirm.",
                            "Once your language has been set, you cannot",
                            "change it during the game.",
                            "If you aren't sure what to do, ask for",
                            "help setting the language.",
                        }};
                        for (std::size_t index = 0; index < prompt.size(); ++index) {
                            textures_.prompt[index] = graphics.create_texture(
                                make_prompt_text(prompt[index]));
                        }
                        application_.platform_.log(
                            "LANGUAGE_RETAIL_GRAPHICS_READY=layouts,animations,background,plate,"
                            "pikachu,buttons,languages,lower_window");
                    }
                } catch (const std::exception& error) {
                    destroy_textures();
                    application_.platform_.log(std::string("LANGUAGE_RETAIL_GRAPHICS_FAILED=") +
                                               error.what());
                }
            }
            initialization_started_ = true;
            return gfl2::proc::CallbackResult::Continue;
        }
        application_.platform_.log("LANGUAGE_INIT_READY");
        application_.platform_.log("LANGUAGE_SELECTION=1");
        return gfl2::proc::CallbackResult::Finish;
    }

    gfl2::proc::CallbackResult update(gfl2::proc::Manager& manager) override {
        application_.run_native_frame();
        animation_frame_ += 0.5f;
        if (animation_frame_ >= 600.0f) {
            animation_frame_ -= 600.0f;
        }
        const auto& input = application_.platform_.input();
        if (state_ == State::Select) {
            if (input.button(Platform::Button::Up).pressed) {
                selection_ = static_cast<std::uint8_t>((selection_ + 8) % 9);
                report_selection();
            } else if (input.button(Platform::Button::Down).pressed) {
                selection_ = static_cast<std::uint8_t>((selection_ + 1) % 9);
                report_selection();
            } else if (input.button(Platform::Button::A).pressed) {
                state_ = State::Confirm;
                confirmation_guard_ = 15;
                application_.platform_.log("LANGUAGE_CONFIRM_ENTER=" +
                                           std::to_string(selection_));
            }
            return gfl2::proc::CallbackResult::Continue;
        }

        if (state_ == State::Confirm) {
            if (confirmation_guard_ != 0) {
                --confirmation_guard_;
                return gfl2::proc::CallbackResult::Continue;
            }
            if (input.button(Platform::Button::B).pressed) {
                state_ = State::Select;
                application_.platform_.log("LANGUAGE_CONFIRM_CANCEL");
            } else if (selection_ == 0 &&
                       (input.button(Platform::Button::Left).pressed ||
                        input.button(Platform::Button::Right).pressed)) {
                kanji_mode_ = !kanji_mode_;
                application_.platform_.log(std::string("LANGUAGE_KANJI_MODE=") +
                                           (kanji_mode_ ? "1" : "0"));
            } else if (input.button(Platform::Button::A).pressed) {
                const StartupLanguageProfile profile{selection_, kanji_mode_};
                save_startup_language_profile(application_.platform_.files(), profile);
                application_.apply_startup_language_profile(profile);
                application_.platform_.log("LANGUAGE_PROFILE_COMMITTED");
                application_.platform_.log("TITLE_PROCESS_SELECTED");
                if (!manager.change_proc(std::make_unique<TitleMenuProcess>(application_))) {
                    throw std::logic_error("title process was already queued");
                }
                state_ = State::Handoff;
                application_.platform_.log("LANGUAGE_HANDOFF_QUEUED");
                return gfl2::proc::CallbackResult::Finish;
            }
        }
        return gfl2::proc::CallbackResult::Continue;
    }

    void draw(gfl2::proc::Manager&) override {
        auto& graphics = application_.platform_.graphics();
        graphics.begin_frame();
        constexpr Platform::Color upper_left{0x51, 0xe2, 0xef, 0xff};
        constexpr Platform::Color upper_right{0x05, 0x9b, 0xd4, 0xff};
        constexpr Platform::Color lower_left{0x00, 0xdc, 0xd2, 0xff};
        constexpr Platform::Color lower_right{0x16, 0x7d, 0xe8, 0xff};
        graphics.draw_gradient(0.0f, 0.0f, 400.0f, 240.0f,
                               upper_left, upper_right, upper_left, upper_right);
        graphics.draw_gradient(40.0f, 240.0f, 320.0f, 240.0f,
                               lower_left, lower_right, lower_left, lower_right);
        if (textures_.upper_background != 0) {
            graphics.draw_image(textures_.upper_background, 0.0f, 0.0f, 400.0f, 128.0f);
        }
        const auto frame = animation_frame_;
        const auto sea_scroll_0 = evaluate_track(
            upper_background_animation_, "Sea_00", "FLTS", 0, 0, frame, 0.0f);
        const auto sea_scroll_1 = evaluate_track(
            upper_background_animation_, "Sea_00", "FLTS", 1, 0, frame, 0.0f);
        const auto mask_u = evaluate_track(
            upper_background_animation_, "Sea_00", "FLTS", 2, 0, frame, 0.0f);
        const auto mask_v = evaluate_track(
            upper_background_animation_, "Sea_00", "FLTS", 2, 1, frame, 0.28f);
        const auto mask_v_offset = -0.14f + (mask_v - 0.28f) * 0.2f;
        graphics.draw_image_masked(textures_.sea_pattern, textures_.sea_mask,
            0.0f, 12.0f, 400.0f, 228.0f,
            sea_scroll_0, 0.0f, sea_scroll_0 + 4.0f, 4.0f,
            mask_u, mask_v_offset, mask_u + 1.0f, mask_v_offset + 1.0f);
        graphics.draw_image_masked(textures_.sea_pattern, textures_.sea_mask,
            0.0f, 12.0f, 400.0f, 228.0f,
            sea_scroll_1, 0.0f, sea_scroll_1 - 3.0f, -3.0f,
            mask_u, mask_v_offset, mask_u + 1.0f, mask_v_offset + 1.0f,
            {255, 255, 255, 96});
        const auto foam_u = evaluate_track(
            upper_background_animation_, "Sea_01", "FLTS", 0, 0, frame, 0.0f);
        const auto foam_v = evaluate_track(
            upper_background_animation_, "Sea_01", "FLTS", 0, 1, frame, 0.28f);
        const auto foam_v_offset = -0.14f + (foam_v - 0.28f) * 0.2f;
        graphics.draw_image_repeated(textures_.sea_pattern_1, 0.0f, 12.0f, 400.0f, 228.0f,
                                     foam_u, foam_v_offset,
                                     foam_u + 1.0f, foam_v_offset + 1.0f,
                                     {255, 255, 255, 210});
        const auto lower_u_1 = evaluate_track(
            lower_background_animation_, "bg_ptn_01", "FLTS", 0, 0, frame, 0.0f);
        const auto lower_v_1 = evaluate_track(
            lower_background_animation_, "bg_ptn_01", "FLTS", 0, 1, frame, 0.0f);
        const auto lower_u_2 = evaluate_track(
            lower_background_animation_, "bg_ptn_02", "FLTS", 0, 0, frame, 0.0f);
        const auto lower_v_2 = evaluate_track(
            lower_background_animation_, "bg_ptn_02", "FLTS", 0, 1, frame, 0.0f);
        const auto lower_alpha = evaluate_track(
            lower_background_animation_, "bg_ptn_01", "FLVC", 0, 16,
            frame, 70.0f) / 255.0f;
        graphics.draw_image_repeated(textures_.lower_pattern_0, 40.0f, 240.0f, 320.0f, 240.0f,
                                     5.0f, -15.0f, 45.0f, 15.0f,
                                     {250, 250, 250, 255});
        graphics.draw_image_repeated(textures_.lower_pattern_1, 40.0f, 240.0f, 320.0f, 240.0f,
                                     lower_u_1 + 0.5f, lower_v_1 - 15.0f,
                                     lower_u_1 + 4.5f, lower_v_1 - 12.0f,
                                     {255, 255, 255, static_cast<std::uint8_t>(lower_alpha * 255.0f)});
        graphics.draw_image_repeated(textures_.lower_pattern_1, 40.0f, 240.0f, 320.0f, 240.0f,
                                     lower_u_2 + 0.5f, lower_v_2 - 15.0f,
                                     lower_u_2 + 4.5f, lower_v_2 - 12.0f,
                                     {255, 255, 255, 100});
        draw_pikachu(graphics);
        graphics.draw_image(textures_.plate, 0.0f, 93.0f, 400.0f, 72.0f);
        graphics.draw_image(textures_.header_plate, 40.0f, 105.0f, 320.0f, 24.0f);
        draw_centered_text(graphics, textures_.prompt[0], 200.0f, 106.0f, 1.5f, 2.0f);
        if (state_ == State::Select) {
            const auto first = std::min<std::size_t>(
                selection_ == 0 ? 0 : selection_ > 4 ? selection_ - 3 : 1,
                textures_.languages.size() - 4);
            for (std::size_t row = 0; row < 4; ++row) {
                const auto display_index = first + row;
                draw_language_button(graphics, display_index, row,
                                     display_index == selection_);
            }
            draw_prompt_panel(graphics, textures_.lower_window,
                              textures_.lower_window_fill, textures_.prompt);
        } else {
            draw_language_button(graphics, selection_, 0, true);
            constexpr Platform::Color confirmation{0x09, 0x6b, 0x78, 0xff};
            graphics.draw_gradient(60.0f, 292.0f, 280.0f, 112.0f,
                                   confirmation, confirmation, confirmation, confirmation);
            graphics.draw_image(textures_.languages[selection_],
                                55.0f, 335.0f, 290.0f, 18.0f);
        }
        graphics.present();
        if (!draw_reached_) {
            application_.platform_.log("LANGUAGE_DRAW_REACHED");
            draw_reached_ = true;
        }
    }

    gfl2::proc::CallbackResult end(gfl2::proc::Manager&) override {
        destroy_textures();
        application_.platform_.log("LANGUAGE_END_COMPLETE");
        return gfl2::proc::CallbackResult::Finish;
    }

    std::string_view name() const override {
        return "StartupLanguageProcess";
    }

private:
    enum class State : std::uint8_t {
        Select,
        Confirm,
        Handoff,
    };

    struct PanePose {
        float x;
        float y;
        float rotation;
    };

    static float evaluate_track(const LayoutAnimation& animation,
                                std::string_view target,
                                std::string_view tag,
                                std::uint8_t component,
                                std::uint8_t channel,
                                float frame,
                                float fallback) {
        const auto found = std::find_if(animation.tracks.begin(), animation.tracks.end(),
            [&](const LayoutAnimationTrack& track) {
                return track.target == target && track.tag == tag &&
                       track.component == component && track.channel == channel;
            });
        if (found == animation.tracks.end() || found->keys.empty()) {
            return fallback;
        }
        const auto& keys = found->keys;
        if (found->curve == LayoutAnimationCurve::Constant || frame <= keys.front().frame) {
            return keys.front().value;
        }
        if (found->curve == LayoutAnimationCurve::Step) {
            auto value = keys.front().value;
            for (const auto& key : keys) {
                if (key.frame > frame) {
                    break;
                }
                value = key.value;
            }
            return value;
        }
        for (std::size_t index = 1; index < keys.size(); ++index) {
            if (frame > keys[index].frame) {
                continue;
            }
            const auto& first = keys[index - 1];
            const auto& second = keys[index];
            const auto duration = second.frame - first.frame;
            if (duration <= 0.0f) {
                return second.value;
            }
            const auto time = (frame - first.frame) / duration;
            const auto time2 = time * time;
            const auto time3 = time2 * time;
            return (2.0f * time3 - 3.0f * time2 + 1.0f) * first.value +
                   (time3 - 2.0f * time2 + time) * duration * first.slope +
                   (-2.0f * time3 + 3.0f * time2) * second.value +
                   (time3 - time2) * duration * second.slope;
        }
        return keys.back().value;
    }

    static PanePose child_pose(const PanePose& parent, float x, float y, float rotation = 0.0f) {
        constexpr float radians = 3.14159265358979323846f / 180.0f;
        const auto angle = parent.rotation * radians;
        const auto sine = std::sin(angle);
        const auto cosine = std::cos(angle);
        return {
            parent.x + x * cosine - y * sine,
            parent.y + x * sine + y * cosine,
            parent.rotation + rotation,
        };
    }

    static void draw_pane(Platform::Graphics& graphics, Platform::TextureId texture,
                          const PanePose& pose, float width, float height,
                          std::uint8_t position = 0) {
        const auto horizontal = position & 3;
        const auto vertical = (position >> 2) & 3;
        const auto center_x = horizontal == 1 ? width / 2.0f :
                              horizontal == 2 ? -width / 2.0f : 0.0f;
        const auto center_y = vertical == 1 ? -height / 2.0f :
                              vertical == 2 ? height / 2.0f : 0.0f;
        const auto center = child_pose(pose, center_x, center_y);
        graphics.draw_image_rotated(texture, center.x, 120.0f - center.y,
                                    width, height, center.rotation);
    }

    void draw_pikachu(Platform::Graphics& graphics) const {
        const auto frame = animation_frame_;
        const PanePose character{
            200.0f + evaluate_track(character_animation_, "Chara", "FLPA", 0, 0,
                                    frame, 130.0f),
            evaluate_track(character_animation_, "Chara", "FLPA", 0, 1,
                           frame, 43.0f),
            evaluate_track(character_animation_, "Chara", "FLPA", 0, 5,
                           frame, 0.0f),
        };
        const auto float_back = child_pose(character, 8.0f, 9.0f);
        const auto pika = child_pose(float_back, -8.0f, 22.0f);
        draw_pane(graphics, textures_.float_back, float_back, 128.0f, 64.0f);

        const auto tail_rotation = evaluate_track(
            character_animation_, "pika_Tail", "FLPA", 0, 5, frame, -5.0f);
        draw_pane(graphics, textures_.pikachu[0],
                  child_pose(pika, 2.951f, -17.0f, tail_rotation), 64.0f, 96.0f, 10);
        draw_pane(graphics, textures_.pikachu[1], child_pose(pika, 8.0f, -11.0f),
                  64.0f, 64.0f);

        const auto head = child_pose(pika, 3.0f, -14.0f, -7.976f);
        const auto right_ear_rotation = evaluate_track(
            character_animation_, "pika_R_Ear", "FLPA", 0, 5, frame, 5.0f);
        const auto left_ear_rotation = evaluate_track(
            character_animation_, "pika_L_Ear", "FLPA", 0, 5, frame, -1.5625f);
        draw_pane(graphics, textures_.pikachu[7],
                  child_pose(head, 27.0f, 31.0f, right_ear_rotation), 32.0f, 64.0f, 10);
        draw_pane(graphics, textures_.pikachu[6], head, 64.0f, 64.0f, 9);
        const auto eye = static_cast<std::size_t>(std::clamp(
            evaluate_track(character_animation_, "pika_Eye", "FLTP", 0, 0,
                           frame, 0.0f), 0.0f, 2.0f));
        draw_pane(graphics, textures_.pikachu[9 + eye],
                  child_pose(head, 23.0f, 28.0f), 32.0f, 32.0f);
        draw_pane(graphics, textures_.pikachu[8],
                  child_pose(head, 35.0f, 22.0f, left_ear_rotation), 32.0f, 64.0f, 9);

        draw_pane(graphics, textures_.pikachu[5],
                  child_pose(pika,
                      evaluate_track(character_animation_, "pika_LP", "FLPA", 0, 0,
                                     frame, 0.0f) + 22.0f,
                      evaluate_track(character_animation_, "pika_LP", "FLPA", 0, 1,
                                     frame, 0.0f) - 6.0f,
                      evaluate_track(character_animation_, "pika_LP", "FLPA", 0, 5,
                                     frame, 0.0f)), 32.0f, 32.0f);
        draw_pane(graphics, textures_.pikachu[4],
                  child_pose(pika,
                      evaluate_track(character_animation_, "pika_RP", "FLPA", 0, 0,
                                     frame, 0.0f) + 6.0f,
                      evaluate_track(character_animation_, "pika_RP", "FLPA", 0, 1,
                                     frame, 0.0f) + 5.0f,
                      evaluate_track(character_animation_, "pika_RP", "FLPA", 0, 5,
                                     frame, 0.0f)), 32.0f, 32.0f);
        draw_pane(graphics, textures_.pikachu[2],
                  child_pose(pika, 0.0f, -13.0f, evaluate_track(
                      character_animation_, "pika_RK", "FLPA", 0, 5, frame, 9.03f)),
                  32.0f, 32.0f, 10);
        draw_pane(graphics, textures_.pikachu[3],
                  child_pose(pika, -1.86f, -8.916f, evaluate_track(
                      character_animation_, "pika_LK", "FLPA", 0, 5, frame, 1.608f)),
                  32.0f, 32.0f);
        draw_pane(graphics, textures_.float_front, child_pose(float_back, 0.0f, -4.0f),
                  128.0f, 48.0f);
    }

    void draw_language_button(Platform::Graphics& graphics,
                              std::size_t display_index,
                              std::size_t row,
                              bool selected) const {
        const auto& button = selected ? textures_.selected_button : textures_.normal_button;
        constexpr std::array<Platform::Color, 9> row_tints{{
            {0xf0, 0x2f, 0x15, 0xff}, {0xff, 0x88, 0x00, 0xff},
            {0xff, 0xbb, 0x00, 0xff}, {0x7b, 0xc0, 0x1b, 0xff},
            {0x3f, 0x9f, 0x40, 0xff}, {0x1c, 0xae, 0x94, 0xff},
            {0x28, 0x7d, 0xdc, 0xff}, {0x7f, 0x5f, 0xff, 0xff},
            {0xf1, 0x4b, 0xe6, 0xff},
        }};
        const auto absolute_row = display_index;
        const auto center_x = 202.0f + static_cast<float>(row) * 20.0f;
        const auto y = 127.0f + static_cast<float>(row) * 30.0f;
        const auto tint = selected ? Platform::Color{0xff, 0x9d, 0x9d, 0xff}
                                   : row_tints[absolute_row % row_tints.size()];
        const auto x = center_x - 333.3334f / 2.0f;
        graphics.draw_image_tinted(button[0], x, y + 5.0f, 16.0f, 28.0f, tint);
        graphics.draw_image_tinted(button[1], x + 16.0f, y + 5.0f, 301.3334f, 28.0f, tint);
        graphics.draw_image_tinted(button[2], x + 317.3334f, y + 5.0f, 16.0f, 28.0f, tint);
        graphics.draw_image(textures_.languages[display_index],
                            center_x - 145.0f, y + 10.0f, 290.0f, 18.0f);
        if (selected) {
            constexpr float pi = 3.14159265358979323846f;
            const auto cursor_offset = 2.0f - 2.0f *
                std::cos(std::fmod(animation_frame_, 20.0f) * pi / 10.0f);
            graphics.draw_image_rotated(textures_.selection_cursor,
                                        x + cursor_offset, y + 19.0f,
                                        20.0f, 20.0f, -90.0f);
        }
    }

    static void draw_window_frame(Platform::Graphics& graphics,
                                  Platform::TextureId texture,
                                  float x,
                                  float y,
                                  float width,
                                  float height) {
        constexpr float corner = 14.0f;
        constexpr Platform::Color cyan{0x18, 0xc5, 0xd1, 0xff};
        constexpr Platform::Color navy{0x0b, 0x23, 0x32, 0xff};
        constexpr Platform::Color gold{0x9e, 0x7b, 0x38, 0xff};
        graphics.draw_gradient(x, y, width, height, cyan, cyan, cyan, cyan);
        graphics.draw_gradient(x + 1.0f, y + 1.0f, width - 2.0f, height - 2.0f,
                               navy, navy, navy, navy);
        graphics.draw_gradient(x + 3.0f, y + 3.0f, width - 6.0f, height - 6.0f,
                               gold, gold, gold, gold);
        graphics.draw_image_region(texture, x, y, corner, corner, 0.0f, 0.0f, 1.0f, 1.0f);
        graphics.draw_image_region(texture, x + width - corner, y, corner, corner,
                                   1.0f, 0.0f, 0.0f, 1.0f);
        graphics.draw_image_region(texture, x, y + height - corner, corner, corner,
                                   0.0f, 1.0f, 1.0f, 0.0f);
        graphics.draw_image_region(texture, x + width - corner, y + height - corner,
                                   corner, corner, 1.0f, 1.0f, 0.0f, 0.0f);
    }

    static void draw_prompt_panel(Platform::Graphics& graphics,
                                  Platform::TextureId window,
                                  Platform::TextureId window_fill,
                                  const std::array<Platform::TextureId, 7>& prompt) {
        draw_window_frame(graphics, window, 44.0f, 244.0f, 312.0f, 232.0f);
        graphics.draw_image(window_fill, 49.0f, 249.0f, 302.0f, 222.0f);
        constexpr std::array<float, 6> y{{255.0f, 273.0f, 313.0f, 333.0f, 374.0f, 394.0f}};
        constexpr std::array<float, 6> widths{{283.8f, 204.6f, 290.4f, 184.8f, 264.0f, 184.8f}};
        for (std::size_t index = 0; index < y.size(); ++index) {
            const Platform::Color tint = index == 2 || index == 3
                ? Platform::Color{0xff, 0x22, 0x18, 0xff}
                : Platform::Color{0xff, 0xff, 0xff, 0xff};
            graphics.draw_image_tinted(prompt[index + 1], 55.0f, y[index],
                                       widths[index], 14.0f, tint);
        }
    }

    static void draw_centered_text(Platform::Graphics& graphics, Platform::TextureId texture,
                                   float center_x, float y, float scale_x, float scale_y) {
        constexpr float source_width = 16.0f * 6.0f;
        graphics.draw_image(texture, center_x - source_width * scale_x / 2.0f, y,
                            source_width * scale_x, 7.0f * scale_y);
    }

    void report_selection() const {
        application_.platform_.log("LANGUAGE_SELECTION=" + std::to_string(selection_));
    }

    static void draw_tiled_pattern(Platform::Graphics& graphics,
                                   Platform::TextureId texture,
                                   float x,
                                   float y,
                                   float width,
                                   float height,
                                   float scroll_x,
                                   float opacity) {
        if (texture == 0) {
            return;
        }
        const auto offset = std::fmod(scroll_x, 64.0f);
        for (float tile_y = y; tile_y < y + height; tile_y += 64.0f) {
            for (float tile_x = x - offset; tile_x < x + width; tile_x += 64.0f) {
                const auto visible_x = std::max(x, tile_x);
                const auto tile_width = std::min(tile_x + 64.0f, x + width) - visible_x;
                const auto tile_height = std::min(64.0f, y + height - tile_y);
                graphics.draw_image_region(texture, visible_x, tile_y, tile_width, tile_height,
                    (visible_x - tile_x) / 64.0f, 0.0f,
                    (visible_x + tile_width - tile_x) / 64.0f, tile_height / 64.0f,
                    {255, 255, 255, static_cast<std::uint8_t>(
                        std::clamp(opacity, 0.0f, 1.0f) * 255.0f)});
            }
        }
    }

    void destroy_textures() {
        auto& graphics = application_.platform_.graphics();
        graphics.destroy_texture(textures_.upper_background);
        graphics.destroy_texture(textures_.sea_pattern);
        graphics.destroy_texture(textures_.sea_pattern_1);
        graphics.destroy_texture(textures_.sea_mask);
        graphics.destroy_texture(textures_.plate);
        graphics.destroy_texture(textures_.header_plate);
        graphics.destroy_texture(textures_.float_back);
        graphics.destroy_texture(textures_.float_front);
        for (const auto texture : textures_.normal_button) {
            graphics.destroy_texture(texture);
        }
        for (const auto texture : textures_.selected_button) {
            graphics.destroy_texture(texture);
        }
        for (const auto texture : textures_.pikachu) {
            graphics.destroy_texture(texture);
        }
        for (const auto texture : textures_.languages) {
            graphics.destroy_texture(texture);
        }
        for (const auto texture : textures_.prompt) {
            graphics.destroy_texture(texture);
        }
        graphics.destroy_texture(textures_.lower_pattern_0);
        graphics.destroy_texture(textures_.lower_pattern_1);
        graphics.destroy_texture(textures_.lower_window);
        graphics.destroy_texture(textures_.lower_window_fill);
        graphics.destroy_texture(textures_.selection_cursor);
        textures_ = {};
    }

    Application& application_;
    NativeStartupLanguageTextures textures_{};
    LayoutAnimation character_animation_{};
    LayoutAnimation upper_background_animation_{};
    LayoutAnimation lower_background_animation_{};
    State state_ = State::Select;
    std::uint8_t selection_ = 1;
    std::uint8_t confirmation_guard_ = 0;
    float animation_frame_ = 0.0f;
    bool kanji_mode_ = false;
    bool initialization_started_ = false;
    bool draw_reached_ = false;
};
#endif

Application::Application(Platform::Runtime& platform) : platform_(platform) {}

bool Application::initialize() {
    startup_point_ = StartupPoint::PlatformReady;

    gfl2::math::Random::State state{{0x12345678u, 0x9abcdef0u, 0x13579bdfu, 0x2468ace0u}};
    random_.Initialize(state);
    const auto first_random = random_.Next();
    if (first_random == 0 || random_.SaveState().status[0] == state.status[0]) {
        platform_.log("reconstructed TinyMT initialization self-check failed");
        return false;
    }

    situation_.SetLastZoneID(1);
    situation_.SetEggStepCount(0);
    situation_.SetFriendlyStepCount(0);
    situation_.SetKawaigariStepCount(0);
    if (situation_.GetLastZoneID() != 1 || situation_.GetEggStepCount() != 0) {
        platform_.log("reconstructed Situation accessors self-check failed");
        return false;
    }

    box_.SetWallPaper(0, 7);
    box_.SetTeamLock(0, true);
    if (box_.GetWallPaper(0) != 7 || !box_.IsTeamLock(0)) {
        platform_.log("reconstructed BOX accessors self-check failed");
        return false;
    }

    Savedata::Sodateya daycare{};
    const auto daycare_id = static_cast<Savedata::SodateyaID>(0);
    daycare.EggClear(daycare_id);
    if (daycare.IsEggExist(daycare_id) != 0) {
        platform_.log("reconstructed daycare clear self-check failed");
        return false;
    }

    startup_point_ = StartupPoint::ReconstructedCoreReady;
    platform_.log("reconstructed initialization ready: TinyMT, Situation, BOX, and daycare");

    game_manager_ = std::make_unique<GameSys::GameManager>();
    if (GameSys::GameManager::instance() != game_manager_.get()) {
        platform_.log("reconstructed GameManager singleton self-check failed");
        return false;
    }
    startup_point_ = StartupPoint::GameManagerReady;
    platform_.log("reconstructed GameManager lifecycle ready");

    std::unique_ptr<gfl2::proc::BaseProcess> initial_process;
#ifdef PC_STARTUP_LANGUAGE
    if (const auto profile = load_startup_language_profile(platform_.files())) {
        apply_startup_language_profile(*profile);
        platform_.log("LANGUAGE_PROFILE_LOADED");
        platform_.log("TITLE_PROCESS_SELECTED");
        initial_process = std::make_unique<TitleMenuProcess>(*this);
    } else {
        platform_.log("LANGUAGE_PROFILE_FRESH");
        platform_.log("LANGUAGE_PROCESS_SELECTED");
        initial_process = std::make_unique<StartupLanguageProcess>(*this);
    }
#else
    platform_.log("TITLE_PROCESS_SELECTED");
    initial_process = std::make_unique<TitleMenuProcess>(*this);
#endif
    if (!process_manager_.call_proc(std::move(initial_process)) ||
            process_manager_.main() != gfl2::proc::ManagerResult::Pushed ||
            process_manager_.main() != gfl2::proc::ManagerResult::Running ||
            !process_manager_.current_process_initialized()) {
        platform_.log("reconstructed native scheduler initialization failed");
        return false;
    }
    startup_point_ = StartupPoint::NativeSchedulerReady;
    platform_.log("reconstructed process and frame schedulers ready: " +
                  std::string(process_manager_.current_process()->name()));
    return true;
}

void Application::shutdown() {
    process_manager_.request_end();
    for (int attempt = 0; attempt < 8 && !process_manager_.empty(); ++attempt) {
        process_manager_.main();
    }
    if (!process_manager_.empty()) {
        throw std::logic_error("native scheduler did not stop cleanly");
    }
    game_manager_.reset();
}

void Application::update() {
    if (process_manager_.main() == gfl2::proc::ManagerResult::Empty) {
        throw std::logic_error("native process scheduler stopped unexpectedly");
    }
    process_manager_.draw();
}

void Application::run_native_frame() {
    random_.Next();
    situation_.SetEggStepCount(situation_.GetEggStepCount() + 1);
    ++frame_count_;
}

void Application::apply_startup_language_profile(StartupLanguageProfile profile) {
    startup_language_profile_ = profile;
    platform_.log("LANGUAGE_APPLIED=" + std::to_string(profile.language) + ":" +
                  (profile.kanji_mode ? "1" : "0"));
}

StartupPoint Application::startup_point() const {
    return startup_point_;
}

std::uint64_t Application::frame_count() const {
    return frame_count_;
}

const char* startup_point_name(StartupPoint point) {
    switch (point) {
    case StartupPoint::HostEntry: return "HOST_ENTRY";
    case StartupPoint::PlatformReady: return "PLATFORM_READY";
    case StartupPoint::ReconstructedCoreReady: return "RECONSTRUCTED_CORE_READY";
    case StartupPoint::GameManagerReady: return "GAME_MANAGER_READY";
    case StartupPoint::NativeSchedulerReady: return "NATIVE_SCHEDULER_READY";
    }
    return "UNKNOWN";
}

} // namespace PokemonMoon
