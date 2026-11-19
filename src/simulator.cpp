#include "simulator.h"

void Simulator::update(float torque, float dt) {
    float acceleration = torque / inertia_;

    angular_velocity_ += acceleration * dt;
    angle_ += angular_velocity_ * dt;
}

float Simulator::angle() const {
    return angle_;
}

float Simulator::angular_velocity() const {
    return angular_velocity_;
}

void Simulator::set_angle(float angle) {
    angle_ = angle;
}