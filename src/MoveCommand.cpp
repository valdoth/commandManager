#include "MoveCommand.h"
#include <iostream>

void MoveCommand::execute() const {
    std::cout << "Executing Move Command..." << std::endl;
}

void MoveCommand::undo() const {
    std::cout << "Undo Move Command..." << std::endl;
}
