#ifndef COMMAND_MANAGER_H
#define COMMAND_MANAGER_H

#include <memory>
#include <mutex>
#include <vector>
#include <future>
#include "Command.h"

class CommandManager {
public:
    static std::shared_ptr<CommandManager> getInstance();
    
    void addCommand(std::unique_ptr<Command> command);
    void executeCommands();
    void undoCommands();
    void startMonitoring();
    void stopMonitoring();

private:
    CommandManager();
    
    std::vector<std::unique_ptr<Command>> commands_;
    std::mutex mutex_;
    bool monitoringActive_;
    std::future<void> monitoringThread_;
};

#endif // COMMAND_MANAGER_H
