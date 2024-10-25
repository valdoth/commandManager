#include <iostream>
#include <thread>
#include <chrono>

#include "../include/CommandManager.h"

std::shared_ptr<CommandManager> CommandManager::getInstance() {
    static std::shared_ptr<CommandManager> instance(new CommandManager());
    return instance;
}

CommandManager::CommandManager() : monitoringActive_(true) {}

void CommandManager::addCommand(std::unique_ptr<Command> command) {
    std::lock_guard<std::mutex> lock(mutex_);
    commands_.emplace_back(std::move(command));
}

void CommandManager::executeCommands() {
    for (const auto& command : commands_) {
        command->execute();
    }
}

void CommandManager::undoCommands() {
    for (const auto& command : commands_) {
        command->undo();
    }
}

void CommandManager::startMonitoring() {
    monitoringThread_ = std::async(std::launch::async, [this]() {
        while (monitoringActive_) {
            std::cout << "Real-time Monitoring Active..." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    });
}

void CommandManager::stopMonitoring() {
    monitoringActive_ = false;
    if (monitoringThread_.valid()) {
        monitoringThread_.wait();
    }
}
