#include "UpdateInventoryCommand.h"
#include <iostream>

void UpdateInventoryCommand::execute() const {
    std::cout << "Updating Inventory..." << std::endl;
}

void UpdateInventoryCommand::undo() const {
    std::cout << "Undo Inventory Update..." << std::endl;
}
