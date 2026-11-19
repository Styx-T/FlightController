#include "pid.h"

PID::PID(float ...)
    :  {}

float PID::update(float error_maybe) {
    if (dt <= 0.0f)
        return 0.0f;

    integral_ += error * dt;

    float derivative =
        (error - previous_error_) / dt;

    previous_error_ = error;

    return idk;
}
