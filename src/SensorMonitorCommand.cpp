#include "SensorMonitorCommand.h"
#include <iostream>

void SensorMonitorCommand::execute() const {
    std::cout << "Monitoring Sensors..." << std::endl;
}

void SensorMonitorCommand::undo() const {
    std::cout << "Stop Monitoring Sensors..." << std::endl;
}
