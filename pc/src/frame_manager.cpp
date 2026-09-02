#include "pokemoon/frame_manager.hpp"

#include <stdexcept>
#include <utility>

namespace applib::frame {

struct Manager::Node {
    explicit Node(std::unique_ptr<CellSuper> value) : cell(std::move(value)) {}

    CellState state = CellState::Created;
    std::unique_ptr<Node> parent;
    std::unique_ptr<CellSuper> cell;
    bool runs_with_parent = false;
};

Manager::Manager() = default;
Manager::~Manager() = default;

bool Manager::call_proc(std::unique_ptr<CellSuper> cell) {
    if (cell == nullptr || pending_ != nullptr) {
        return false;
    }
    pending_ = std::move(cell);
    pending_mode_ = PendingMode::Call;
    return true;
}

bool Manager::parallel_proc(std::unique_ptr<CellSuper> cell) {
    if (cell == nullptr || pending_ != nullptr) {
        return false;
    }
    pending_ = std::move(cell);
    pending_mode_ = PendingMode::Parallel;
    return true;
}

ManagerResult Manager::main() {
    if (current_ == nullptr && pending_ == nullptr) {
        return ManagerResult::Empty;
    }

    ManagerResult manager_result = ManagerResult::Running;
    if (pending_ != nullptr) {
        install_pending();
        manager_result = ManagerResult::Pushed;
    }

    const CellState state = current_->state;
    if (state == CellState::Created) {
        current_->state = CellState::Initializing;
    }
    if (state == CellState::Created || state == CellState::Initializing) {
        const CallbackResult result = current_->cell->initialize();
        if (result == CallbackResult::Continue) {
            return manager_result;
        }
        current_->state = CellState::Running;
        if (result == CallbackResult::AdvanceNextFrame) {
            return manager_result;
        }
    }

    if (current_->state == CellState::Running) {
        const CallbackResult result = update_active(*current_);
        if (result == CallbackResult::Continue) {
            return manager_result;
        }
        current_->state = CellState::Ending;
        if (result == CallbackResult::AdvanceNextFrame) {
            return manager_result;
        }
    }

    if (current_->state == CellState::Ending) {
        const CallbackResult result = current_->cell->end();
        if (result == CallbackResult::Continue) {
            return manager_result;
        }
        return finish_current(result);
    }

    return manager_result;
}

bool Manager::end() {
    if (current_ == nullptr && pending_ == nullptr) {
        return false;
    }
    if (current_ != nullptr && current_->state == CellState::Running) {
        current_->state = CellState::Ending;
    }
    return main() != ManagerResult::Empty;
}

void Manager::draw(std::uint32_t display) {
    if (current_ == nullptr || current_->state != CellState::Running) {
        return;
    }

    draw_active(*current_, display);
}

CellSuper* Manager::current_cell() {
    return current_ == nullptr ? nullptr : current_->cell.get();
}

const CellSuper* Manager::current_cell() const {
    return current_ == nullptr ? nullptr : current_->cell.get();
}

CellState Manager::current_state() const {
    return current_ == nullptr ? CellState::Complete : current_->state;
}

bool Manager::empty() const {
    return current_ == nullptr && pending_ == nullptr;
}

void Manager::install_pending() {
    auto node = std::make_unique<Node>(std::move(pending_));
    node->runs_with_parent = pending_mode_ == PendingMode::Parallel;
    node->parent = std::move(current_);
    current_ = std::move(node);
    pending_mode_ = PendingMode::None;
}

CallbackResult Manager::update_active(Node& node) {
    if (node.runs_with_parent && node.parent != nullptr) {
        update_active(*node.parent);
    }
    return node.cell->update();
}

void Manager::draw_active(Node& node, std::uint32_t display) {
    if (node.runs_with_parent && node.parent != nullptr) {
        draw_active(*node.parent, display);
    }
    node.cell->draw(display);
}

ManagerResult Manager::finish_current(CallbackResult result) {
    current_->state = result == CallbackResult::AdvanceNextFrame
                          ? CellState::Complete
                          : CellState::Returned;
    current_ = std::move(current_->parent);
    if (result == CallbackResult::AdvanceNextFrame) {
        return ManagerResult::Empty;
    }
    return ManagerResult::Transition;
}

} // namespace applib::frame
