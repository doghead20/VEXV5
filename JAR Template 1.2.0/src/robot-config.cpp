#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Motor11 = motor(PORT11, ratio18_1, false);
motor Motor12 = motor(PORT12, ratio18_1, false);
motor Motor13 = motor(PORT13, ratio18_1, true);
motor Motor14 = motor(PORT14, ratio18_1, true);
motor MOTOR_FLEX = motor(PORT7, ratio36_1, true);
motor MOTOR_CHAIN = motor(PORT8, ratio6_1, true);
motor MOTOR_TOW = motor(PORT10, ratio36_1, false);
motor DOINKER = motor(PORT5, ratio18_1, false);
inertial Inertial = inertial(PORT20);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}