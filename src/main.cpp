#include <iostream>

#include "flight_controller.hpp"
#include "simulator.hpp"

int main() {
    FlightController fc;
    Simulator sim;

    constexpr float dt = 0.1f;

    sim.set_angle(1f);

    for (int i = 0; i < 5000; ++i) {
        float torque = fc.update(
            sim.angle(),
            sim.angular_velocity(),
            dt
        );

        sim.update(torque, dt);

        if (i % 100 == 0) {
            std::cout
                << i * dt << ","
                << sim.angle() << ","
                << sim.angular_velocity()
                << "\n";
        }
    }
}