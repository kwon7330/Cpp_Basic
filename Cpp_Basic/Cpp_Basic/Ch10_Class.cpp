#include "Ch10_Class.h";

#include "io.h"
void Car::DriveVelocity()
{

	cout << Velocity << "km/h" << endl;
}

void Car::DriveTime()
{
	int LengthUnit = 100;

	cout << (100/Velocity) << "hour" << endl;
}