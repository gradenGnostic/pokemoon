#include "pokemoon/frame_manager.hpp"
#include "pokemoon/process_manager.hpp"

#include <cstdint>
#include <memory>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace {

class RecordingProcess final : public gfl2::proc::BaseProcess {
public:
    RecordingProcess(
            std::vector<std::string>& events,
            std::string prefix = "process",
            gfl2::proc::CallbackResult update_result = gfl2::proc::CallbackResult::Continue)
        : events_(events), prefix_(std::move(prefix)), update_result_(update_result) {}

    gfl2::proc::CallbackResult initialize(gfl2::proc::Manager&) override {
        events_.push_back(prefix_ + ".init");
        return gfl2::proc::CallbackResult::Finish;
    }

    gfl2::proc::CallbackResult update(gfl2::proc::Manager&) override {
        events_.push_back(prefix_ + ".main");
        return update_result_;
    }

    void draw(gfl2::proc::Manager&) override {
        events_.push_back(prefix_ + ".draw");
    }

    gfl2::proc::CallbackResult end(gfl2::proc::Manager&) override {
        events_.push_back(prefix_ + ".end");
        return gfl2::proc::CallbackResult::Finish;
    }

    std::string_view name() const override {
        return "RecordingProcess";
    }

private:
    std::vector<std::string>& events_;
    std::string prefix_;
    gfl2::proc::CallbackResult update_result_;
};

class RecordingCell final : public applib::frame::CellSuper {
public:
    RecordingCell(std::vector<std::string>& events, std::string prefix = "cell")
        : events_(events), prefix_(std::move(prefix)) {}

    applib::frame::CallbackResult initialize() override {
        events_.push_back(prefix_ + ".init");
        return applib::frame::CallbackResult::Advance;
    }

    applib::frame::CallbackResult update() override {
        events_.push_back(prefix_ + ".main");
        return applib::frame::CallbackResult::Continue;
    }

    void draw(std::uint32_t) override {
        events_.push_back(prefix_ + ".draw");
    }

    applib::frame::CallbackResult end() override {
        events_.push_back(prefix_ + ".end");
        return applib::frame::CallbackResult::Advance;
    }

private:
    std::vector<std::string>& events_;
    std::string prefix_;
};

bool process_lifecycle_matches() {
    std::vector<std::string> events;
    gfl2::proc::Manager manager;
    if (!manager.call_proc(std::make_unique<RecordingProcess>(events)) ||
            manager.main() != gfl2::proc::ManagerResult::Pushed ||
            !manager.current_process_initialized()) {
        return false;
    }
    manager.draw();
    if (events != std::vector<std::string>{"process.init"}) {
        return false;
    }
    if (manager.main() != gfl2::proc::ManagerResult::Running) {
        return false;
    }
    manager.draw();
    manager.request_end();
    manager.main();
    if (manager.current_state() != gfl2::proc::ProcessState::Ending) {
        return false;
    }
    if (manager.main() != gfl2::proc::ManagerResult::Transition || !manager.empty()) {
        return false;
    }
    return events == std::vector<std::string>{
                         "process.init", "process.main", "process.draw",
                         "process.main", "process.end"};
}

bool frame_lifecycle_matches() {
    std::vector<std::string> events;
    applib::frame::Manager manager;
    if (!manager.call_proc(std::make_unique<RecordingCell>(events)) ||
            manager.main() != applib::frame::ManagerResult::Pushed ||
            manager.current_state() != applib::frame::CellState::Running) {
        return false;
    }
    manager.draw(0);
    if (manager.main() != applib::frame::ManagerResult::Running || !manager.end() ||
            manager.end() || !manager.empty()) {
        return false;
    }
    return events == std::vector<std::string>{
                         "cell.init", "cell.main", "cell.draw", "cell.main", "cell.end"};
}

bool process_replacement_matches() {
    std::vector<std::string> events;
    gfl2::proc::Manager manager;
    if (!manager.call_proc(std::make_unique<RecordingProcess>(
                events, "old", gfl2::proc::CallbackResult::Finish)) ||
            manager.main() != gfl2::proc::ManagerResult::Pushed ||
            !manager.change_proc(std::make_unique<RecordingProcess>(events, "new"))) {
        return false;
    }
    if (manager.main() != gfl2::proc::ManagerResult::Running ||
            manager.main() != gfl2::proc::ManagerResult::Transition ||
            manager.main() != gfl2::proc::ManagerResult::Running) {
        return false;
    }
    manager.request_end();
    manager.main();
    if (manager.main() != gfl2::proc::ManagerResult::Transition || !manager.empty()) {
        return false;
    }
    return events == std::vector<std::string>{
                         "old.init", "old.main", "old.end", "new.init", "new.main",
                         "new.end"};
}

bool parallel_frame_order_matches() {
    std::vector<std::string> events;
    applib::frame::Manager manager;
    if (!manager.call_proc(std::make_unique<RecordingCell>(events, "parent")) ||
            manager.main() != applib::frame::ManagerResult::Pushed ||
            !manager.parallel_proc(std::make_unique<RecordingCell>(events, "child")) ||
            manager.main() != applib::frame::ManagerResult::Pushed) {
        return false;
    }
    manager.draw(0);
    if (!manager.end() || !manager.end() || manager.end()) {
        return false;
    }
    return events == std::vector<std::string>{
                         "parent.init", "parent.main", "child.init", "parent.main",
                         "child.main", "parent.draw", "child.draw", "child.end",
                         "parent.end"};
}

} // namespace

int main() {
    if (!process_lifecycle_matches()) {
        return 1;
    }
    if (!frame_lifecycle_matches()) {
        return 2;
    }
    if (!process_replacement_matches()) {
        return 3;
    }
    if (!parallel_frame_order_matches()) {
        return 4;
    }
    return 0;
}
