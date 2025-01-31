using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor Motor11;
extern motor Motor12;
extern motor Motor13;
extern motor Motor14;
extern motor MOTOR_FLEX;
extern motor MOTOR_CHAIN;
extern motor MOTOR_TOW;
extern motor DOINKER;
extern inertial Inertial;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );