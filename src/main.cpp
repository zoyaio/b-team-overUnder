#include "pros/rtos.hpp"

#include "main.hpp"
#include "ports.hpp"

#include "okapi/impl/device/motor/motor.hpp"
#include "okapi/impl/device/motor/motorGroup.hpp"
#include "cmath"
#include "string"

double const TILE_LENGTH = 1.8266667; // feet
double const ROBOT_LENGTH = 1.5; // feet
double const ROLLER_LENGTH = 0.1666667; // feet


void disabled() {}
void competition_initialize() {}
void opcontrol() {
	// init Robot + Robot Components 
	while (true) {
		pros::Task::delay(1);
	}
}


void autonomous() {

}

