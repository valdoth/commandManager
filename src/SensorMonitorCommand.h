#ifndef SENSORMONITORCOMMAND_H
#define SENSORMONITORCOMMAND_H

#include "Command.h"

// Classe SensorMonitorCommand
class SensorMonitorCommand : public Command {
public:
    void execute() const override;
    void undo() const override;
};

#endif // SENSORMONITORCOMMAND_H
