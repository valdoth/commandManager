#include <iostream>

#include "../include/SensorMonitorCommand.h"

void SensorMonitorCommand::execute() const {
    std::cout << "Monitoring Sensors..." << std::endl;
}

void SensorMonitorCommand::undo() const {
    std::cout << "Stop Monitoring Sensors..." << std::endl;
}
