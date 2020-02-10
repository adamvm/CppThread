#include "Controller.hpp"

Controller::Controller(SlowThermometer,
                       Fan,
                       double,
                       double,
                       std::shared_ptr<LcdDisplay>)
{}

void Controller::updateRpm() {}

void Controller::displayInfo() {}
