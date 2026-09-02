#ifndef POKEMOON_PC_PROCESS_MANAGER_HPP
#define POKEMOON_PC_PROCESS_MANAGER_HPP

#include <memory>
#include <string_view>

namespace gfl2::proc {

class Manager;

enum class CallbackResult {
    Continue = 0,
    Finish = 1,
};

enum class ManagerResult {
    Empty = 0,
    Running = 1,
    Transition = 2,
    Pushed = 3,
};

enum class ProcessState {
    Created = 0,
    Initializing = 1,
    Running = 2,
    Ending = 3,
    Complete = 4,
};

class BaseProcess {
public:
    virtual ~BaseProcess() = default;

    virtual CallbackResult initialize(Manager& manager) = 0;
    virtual CallbackResult update(Manager& manager) = 0;
    virtual void draw(Manager& manager) = 0;
    virtual CallbackResult end(Manager& manager) = 0;
    virtual std::string_view name() const = 0;
};

class Manager {
public:
    Manager();
    ~Manager();

    Manager(const Manager&) = delete;
    Manager& operator=(const Manager&) = delete;

    bool call_proc(std::unique_ptr<BaseProcess> process);
    bool change_proc(std::unique_ptr<BaseProcess> process);
    ManagerResult main();
    void draw();
    void request_end();

    BaseProcess* current_process();
    const BaseProcess* current_process() const;
    bool current_process_initialized() const;
    ProcessState current_state() const;
    bool empty() const;

private:
    struct Node;
    enum class PendingMode {
        None,
        Push,
        Replace,
    };

    bool dispatch_current();
    void install_pending(bool preserve_parent);
    void remove_current();

    std::unique_ptr<Node> current_;
    std::unique_ptr<BaseProcess> pending_;
    PendingMode pending_mode_ = PendingMode::None;
    bool main_active_ = false;
    bool end_requested_ = false;
};

} // namespace gfl2::proc

#endif
