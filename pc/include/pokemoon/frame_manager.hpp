#ifndef POKEMOON_PC_FRAME_MANAGER_HPP
#define POKEMOON_PC_FRAME_MANAGER_HPP

#include <cstdint>
#include <memory>

namespace applib::frame {

enum class CallbackResult {
    Continue = 0,
    Advance = 1,
    AdvanceNextFrame = 2,
};

enum class ManagerResult {
    Empty = 0,
    Running = 1,
    Transition = 2,
    Pushed = 3,
};

enum class CellState {
    Created = 0,
    Initializing = 1,
    Running = 2,
    Ending = 3,
    Complete = 4,
    Returned = 5,
};

class CellSuper {
public:
    virtual ~CellSuper() = default;

    virtual CallbackResult initialize() = 0;
    virtual CallbackResult update() = 0;
    virtual void draw(std::uint32_t display) = 0;
    virtual CallbackResult end() = 0;
};

class Manager {
public:
    Manager();
    ~Manager();

    Manager(const Manager&) = delete;
    Manager& operator=(const Manager&) = delete;

    bool call_proc(std::unique_ptr<CellSuper> cell);
    bool parallel_proc(std::unique_ptr<CellSuper> cell);
    ManagerResult main();
    bool end();
    void draw(std::uint32_t display);

    CellSuper* current_cell();
    const CellSuper* current_cell() const;
    CellState current_state() const;
    bool empty() const;

private:
    struct Node;
    enum class PendingMode {
        None,
        Call,
        Parallel,
    };

    void install_pending();
    CallbackResult update_active(Node& node);
    void draw_active(Node& node, std::uint32_t display);
    ManagerResult finish_current(CallbackResult result);

    std::unique_ptr<Node> current_;
    std::unique_ptr<CellSuper> pending_;
    PendingMode pending_mode_ = PendingMode::None;
};

} // namespace applib::frame

#endif
