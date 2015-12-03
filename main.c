#pragma config(Sensor, dgtl1,  senseDistanceFront, sensorSONAR_cm)
#pragma config(Motor,  port2,           launchBottomLeft, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           launchTopLeft, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           launchTopRight, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           launchBottomRight, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           wheelBackLeft, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           wheelFrontLeft, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           wheelFrontRight, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           wheelBackRight, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          conveyor,      tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "lib/time.c"
#include "autonomous.c"

task main() {
	startTask(testAutonomous);
}
