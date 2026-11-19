#pragma once

#include "pid.hpp"

class FlightController {
public:
    FlightController();

    float update(float angle,
                 float angular_velocity,
                 float dt);

private:
    PID roll_pid_;
};