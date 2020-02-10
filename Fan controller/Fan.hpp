#pragma once

class Fan {
    int rpm = 0;

public:
    Fan();
    Fan(const Fan&);
    Fan(Fan&&);

    void setSpeed(int newRpm);
    int getSpeed();
    bool disable();
    bool enable();
};