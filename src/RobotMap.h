// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "WPILib.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<SpeedController> intakeIntakeMotor;
	static std::shared_ptr<SpeedController> intakeShintake;
	static std::shared_ptr<DigitalInput> intakeIntakeBool;
	static std::shared_ptr<SpeedController> climbClimbMotor1;
	static std::shared_ptr<SpeedController> climbClimbMotor2;
	static std::shared_ptr<DigitalInput> climbClimbBool;
	static std::shared_ptr<SpeedController> driveDriveMotor1;
	static std::shared_ptr<SpeedController> driveDriveMotor2;
	static std::shared_ptr<SpeedController> driveDriveMotor3;
	static std::shared_ptr<SpeedController> driveDriveMotor4;
	static std::shared_ptr<RobotDrive> driveRobotDrive41;
	static std::shared_ptr<SpeedController> driveDriveMotor5;
	static std::shared_ptr<SpeedController> driveDriveMotor6;
	static std::shared_ptr<RobotDrive> driveRobotDrive21;
	static std::shared_ptr<Encoder> driveEncoder2;
	static std::shared_ptr<Encoder> driveEncoder3;
	static std::shared_ptr<Encoder> driveEncoder4;
	static std::shared_ptr<SpeedController> shooterSpeedController1;
	static std::shared_ptr<AnalogInput> shooterAnalogInput1;
	static std::shared_ptr<PIDController> shooterPIDController1;
	static std::shared_ptr<SpeedController> shooterSpeedController2;
	static std::shared_ptr<AnalogInput> shooterAnalogInput2;
	static std::shared_ptr<PIDController> shooterPIDController2;
	static std::shared_ptr<Encoder> shooterEncoder1;
	static std::shared_ptr<Compressor> gearCompressor1;
	static std::shared_ptr<Solenoid> gearGearSolenoid1;
	static std::shared_ptr<Solenoid> gearGearSolenoid2;
	static std::shared_ptr<Solenoid> gearStopper;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();
};
#endif
