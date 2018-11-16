#include "robot-config.h"
/*+++++++++++++++++++++++++++++++++++++++++++++| Notes |++++++++++++++++++++++++++++++++++++++++++++++
Tank Control 
This program instructs your robot to use remote control values to move the robot. 

Robot Configuration:
[Smart Port]    [Name]        [Type]           [Description]       [Reversed]
Motor Port 8     FR            V5 Smart Motor    Front Right Motor   true
Motor Port 3     FL            V5 Smart Motor    Right Left Motor    false
Motor Port 19    BL            V5 Smart Motor    Back Left Motor     false
Motor Port 20    BR            V5 Smart Motor    Back Right Motor    true
Motor Port 13    Shooter       V5 Smart Motor    Shooter             false
Motor Port 3     Intake        V5 Smart Motor    Intake              false

----------------------------------------------------------------------------------------------------*/          
// Prototypes
void driver();
void shooter();
void intake();

int main() {
    
    while(1)
    {
    driver();
    shooter();
    intake();
    }
}
void driver(){
    FL.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct);
    BL.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct);
    FR.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct);
    BR.spin(vex::directionType::fwd, Controller1.Axis2.value(), vex::velocityUnits::pct);
}
void shooter(){
    if(Controller1.ButtonR1.pressing()){
        Shooter.spin(vex::directionType::fwd, 100,vex::velocityUnits::pct);
    }
    else if(Controller1.ButtonR2.pressing()){
        Shooter.spin(vex::directionType::fwd, 0,vex::velocityUnits::pct);
    }
    else{
        Shooter.stop(brakeType::hold);
    }
}
void intake(){
    if(Controller1.ButtonL1.pressing()){
        Intake.spin(directionType::fwd,60,velocityUnits::pct);   
    }
    else if(Controller1.ButtonL2.pressing()){
        Intake.spin(directionType::rev,60,velocityUnits::pct);
    }
    else
        Intake.spin(vex::directionType::fwd, 0,vex::velocityUnits::pct);
}

