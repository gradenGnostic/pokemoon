#include "pokemoon/process_manager.hpp"

#include <stdexcept>
#include <utility>

namespace gfl2::proc {

struct Manager::Node {
    explicit Node(std::unique_ptr<BaseProcess> value) : process(std::move(value)) {}

    ProcessState state = ProcessState::Created;
    std::unique_ptr<Node> parent;
    std::unique_ptr<BaseProcess> process;
};

Manager::Manager() = default;
Manager::~Manager() = default;

bool Manager::call_proc(std::unique_ptr<BaseProcess> process) {
    if (process == nullptr || pending_ != nullptr) {
        return false;
    }
    pending_ = std::move(process);
    pending_mode_ = PendingMode::Push;
    main_active_ = false;
    end_requested_ = false;
    return true;
}

bool Manager::change_proc(std::unique_ptr<BaseProcess> process) {
    if (process == nullptr || pending_ != nullptr) {
        return false;
    }
    pending_ = std::move(process);
    pending_mode_ = current_ == nullptr ? PendingMode::Push : PendingMode::Replace;
    main_active_ = false;
    return true;
}

ManagerResult Manager::main() {
    if (current_ == nullptr && pending_ == nullptr) {
        return ManagerResult::Empty;
    }

    ManagerResult result = ManagerResult::Running;
    if (pending_mode_ == PendingMode::Push) {
        install_pending(true);
        end_requested_ = false;
        result = ManagerResult::Pushed;
    }

    if (current_ != nullptr && dispatch_current()) {
        if (pending_mode_ == PendingMode::Replace) {
            install_pending(false);
        } else {
            remove_current();
            end_requested_ = false;
        }
        return ManagerResult::Transition;
    }

    if (current_ == nullptr && pending_ == nullptr) {
        return ManagerResult::Empty;
    }
    return result;
}

void Manager::draw() {
    if (main_active_ && current_ != nullptr) {
        current_->process->draw(*this);
    }
}

void Manager::request_end() {
    if (current_ != nullptr) {
        end_requested_ = true;
    }
}

BaseProcess* Manager::current_process() {
    return current_ == nullptr ? nullptr : current_->process.get();
}

const BaseProcess* Manager::current_process() const {
    return current_ == nullptr ? nullptr : current_->process.get();
}

bool Manager::current_process_initialized() const {
    return pending_ == nullptr && current_ != nullptr &&
           current_->state == ProcessState::Running;
}

ProcessState Manager::current_state() const {
    return current_ == nullptr ? ProcessState::Complete : current_->state;
}

bool Manager::empty() const {
    return current_ == nullptr && pending_ == nullptr;
}

bool Manager::dispatch_current() {
    const ProcessState state = current_->state;
    if (state == ProcessState::Created) {
        current_->state = ProcessState::Initializing;
    }

    if (state == ProcessState::Created || state == ProcessState::Initializing) {
        if (current_->process->initialize(*this) == CallbackResult::Finish) {
            current_->state = ProcessState::Running;
        }
        return false;
    }

    if (state == ProcessState::Running) {
        const CallbackResult callback_result = current_->process->update(*this);
        main_active_ = true;
        if (end_requested_ || callback_result == CallbackResult::Finish) {
            end_requested_ = false;
            current_->state = ProcessState::Ending;
        }
        return false;
    }

    if (state == ProcessState::Ending) {
        main_active_ = false;
        if (current_->process->end(*this) == CallbackResult::Finish) {
            current_->state = ProcessState::Complete;
            return true;
        }
    }
    return false;
}

void Manager::install_pending(bool preserve_parent) {
    if (pending_ == nullptr) {
        throw std::logic_error("process manager has no pending process");
    }

    auto node = std::make_unique<Node>(std::move(pending_));
    if (preserve_parent) {
        node->parent = std::move(current_);
    } else if (current_ != nullptr) {
        node->parent = std::move(current_->parent);
    }
    current_ = std::move(node);
    pending_mode_ = PendingMode::None;
    main_active_ = false;
    end_requested_ = false;
}

void Manager::remove_current() {
    if (current_ == nullptr) {
        throw std::logic_error("process manager has no current process");
    }
    current_ = std::move(current_->parent);
}

} // namespace gfl2::proc
