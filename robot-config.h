using namespace vex;
vex::brain Brain;
vex::motor FL (vex::PORT2, vex::gearSetting::ratio18_1,false);
vex::motor Intake (vex::PORT3, vex::gearSetting::ratio18_1,false);
vex::motor FR (vex::PORT8, vex::gearSetting::ratio18_1,true);
vex::motor BL (vex::PORT12, vex::gearSetting::ratio18_1,false);
vex::motor Shooter (vex::PORT13, vex::gearSetting::ratio18_1,false);
vex::motor BR (vex::PORT19, vex::gearSetting::ratio18_1,true);
vex::controller Controller1;