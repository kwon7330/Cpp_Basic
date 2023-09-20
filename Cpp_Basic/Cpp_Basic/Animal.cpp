#include "Animal.h"
#include "io.h"

Animal::Animal()
{

	Finger = 10;
	Leg = 2;
}

Animal::Animal(int _Finger, int _Leg)
{
	this->Finger = _Finger;
	this->Leg = _Leg;
}

void Animal :: PrintFinger()
{
	cout << Finger << "\n";
}
void Animal::PrintLeg()
{
	cout << Leg << "\n";
}