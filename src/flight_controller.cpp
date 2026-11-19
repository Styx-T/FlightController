#include "flight_controller.h"

FlightController::FlightController()
    : roll_pid_(0.5f, 0.0f, 0.0f) {}

float FlightController::update(
    float angle,
    float angular_velocity,
    float dt
) {
    float target_angle = 0.0f;

    float error = target_angle - angle;

    // PD control: proportional angle correction
    // plus damping from measured angular velocity.
    return roll_pid_.update(error, dt)
         - 0.1f * angular_velocity;
}