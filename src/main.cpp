#include <memory>
#include <vector>

#include "../include/MoveCommand.h"
#include "../include/UpdateInventoryCommand.h"
#include "../include/SensorMonitorCommand.h"

int main() {
    std::vector<std::unique_ptr<Command>> commands;
    commands.push_back(std::make_unique<MoveCommand>());
    commands.push_back(std::make_unique<UpdateInventoryCommand>());
    commands.push_back(std::make_unique<SensorMonitorCommand>());

    for (const auto& command : commands) {
        command->execute();
    }

    for (const auto& command : commands) {
        command->undo();
    }

    return 0;
}
