#ifndef COMMAND_H
#define COMMAND_H

class Command {
public:
    virtual ~Command() = default;
    virtual void execute() const = 0;
    virtual void undo() const = 0; // Ajout d'une opération undo
};

#endif // COMMAND_H
