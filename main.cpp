/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       WhyFenceCode                                              */
/*    Created:      Mon Dec 12 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// LoaderGroup          motor_group   4, 6            
// Drivetrain           drivetrain    1, 2            
// ForwardVision        vision        3               
// Controller1          controller                    
// ShooterGroup         motor_group   15, 16          
// Conveyor             motor         5               
// Distance             distance      17              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
competition comp;

void autonomous();
void drivercontrol();

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  //Reporting Battery
  Brain.Screen.print("Battery Capacity: ");
  Brain.Screen.print(Brain.Battery.capacity());
  Brain.Screen.newLine();
  Brain.Screen.print("Battery Voltage: ");
  Brain.Screen.print(Brain.Battery.voltage());
  Brain.Screen.newLine();
  comp.autonomous(autonomous); 
  comp.drivercontrol(drivercontrol); 
}

void AllMotors(){
  // Setting up and running loader!
  LoaderGroup.setVelocity(50,percent);
  LoaderGroup.spin(forward);
  // Setting up and running Shooter!
  ShooterGroup.setVelocity(100, percent);
  ShooterGroup.spin(forward);
}


void autonomous() {
  AllMotors();
}

void drivercontrol(){
  AllMotors();
}

//Change Motor Axels
