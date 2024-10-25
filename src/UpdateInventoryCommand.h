#ifndef UPDATEINVENTORYCOMMAND_H
#define UPDATEINVENTORYCOMMAND_H

#include "Command.h"

// Classe UpdateInventoryCommand
class UpdateInventoryCommand : public Command {
public:
    void execute() const override;
    void undo() const override;
};

#endif // UPDATEINVENTORYCOMMAND_H
