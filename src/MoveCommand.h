#ifndef MOVECOMMAND_H
#define MOVECOMMAND_H

#include "Command.h"

// Classe MoveCommand
class MoveCommand : public Command {
public:
    void execute() const override;
    void undo() const override;
};

#endif // MOVECOMMAND_H
