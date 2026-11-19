#pragma once

class Simulator {
public:
    void update(float torque, float dt);

    float angle() const;
    float angular_velocity() const;


private:
    float angle_ = 0.0f;
    float angular_velocity_ = 0.0f;

};