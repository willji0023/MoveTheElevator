/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <frc/TimedRobot.h>
#include <rev/SparkMax.h>
#include <frc/Joystick.h>
#include <iostream>

class Robot : public frc::TimedRobot {
 public:
  void TeleopPeriodic() override{
    motor.Set(joystick.GetY()/10.0);
    std::cout << joystick.GetY()/10.0 << std::endl;
  }

 private:
  frc::Joystick joystick{0};
  rev::SparkMax motor{3};
};

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
