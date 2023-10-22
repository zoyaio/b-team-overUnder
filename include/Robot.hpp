#pragma once

#include "pros/misc.h"
#include "pros/misc.hpp"



class Robot {
private:
	pros::Controller m_controller{ pros::E_CONTROLLER_MASTER };
	pros::Controller m_controller_partner { pros::E_CONTROLLER_PARTNER };

public:
	Robot (); 
	void update();

};

